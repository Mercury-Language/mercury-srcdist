/*
** Automatically generated from `equiv_type_hlds.m'
** by the Mercury compiler,
** version rotd-2022-11-14
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


// :- module transform_hlds.equiv_type_hlds.
// :- implementation.

/*
INIT mercury__transform_hlds__equiv_type_hlds__init
ENDINIT
*/

#include "transform_hlds.equiv_type_hlds.mih"


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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.polymorphism_info.mih"
#include "check_hlds.polymorphism_type_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
#include "check_hlds.type_util.mih"
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
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__equiv_type_hlds__one_or_more__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_one_or_more__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__equiv_type_hlds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_VA_PseudoTypeInfo_Struct3 transform_hlds__equiv_type_hlds____vpti_tuple_3__plain_parse_tree__equiv_type__type_ctor_info_maybe_changed_0__plain_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_types_replace_info_0_0[6];

static const MR_ConstString transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_names_replace_info_0_0[6];

static const MR_DuArgLocn transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_locns_replace_info_0_0[6];

static const MR_DuFunctorDesc transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_functor_desc_replace_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_stag_ordered_replace_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_ptag_ordered_replace_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_name_ordered_replace_info_0[1];

static const MR_Integer transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__functor_number_map_replace_info_0[1];

static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal__1483__1_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word LambdaHeadVar__1_39,
  MR_Word LambdaHeadVar__2_40,
  MR_Word * LambdaHeadVar__3_41,
  MR_Tuple LambdaHeadVar__4_42,
  MR_Tuple * LambdaHeadVar__5_43);

static void MR_CALL 
transform_hlds__equiv_type_hlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_103_111_97_108_95_95_49_52_56_51_95_95_49_95_95_91_50_93_95_48_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word LambdaHeadVar__2_40,
  MR_Word * LambdaHeadVar__3_41,
  MR_Tuple LambdaHeadVar__4_42,
  MR_Tuple * LambdaHeadVar__5_43);

static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__672__1_3_p_0(
  MR_Word TypeMap_30,
  MR_Word HeadVar__2_99,
  MR_Word * HeadVar__3_100);

static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__666__1_6_p_0(
  MR_Word TypeEqvMap_10,
  MR_Word LambdaHeadVar__1_61,
  MR_Word LambdaHeadVar__2_62,
  MR_Word * LambdaHeadVar__3_63,
  MR_Word LambdaHeadVar__4_64,
  MR_Word * LambdaHeadVar__5_65);

static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____replace_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____replace_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__equiv_type_hlds__record_inst_may_occur_2_p_0(
  MR_Word Inst_1,
  MR_Word MayOccur_2);

static void MR_CALL 
transform_hlds__equiv_type_hlds__lookup_inst_may_occur_3_p_0(
  MR_Word Inst_1,
  MR_Word * Found_2,
  MR_Word * MayOccur_3);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_from_to_insts_8_p_0(
  MR_Word TypeEqvMap_9,
  MR_Word FromToInsts0_10,
  MR_Word * FromToInsts_11,
  MR_Word * Changed_12,
  MR_Word STATE_VARIABLE_TVarSet_0_21,
  MR_Word * STATE_VARIABLE_TVarSet_22,
  MR_Word STATE_VARIABLE_Cache_0_23,
  MR_Word * STATE_VARIABLE_Cache_24);

static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_var_table_entry_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeEqvMap_8,
  MR_Word Entry0_9,
  MR_Word * Entry_10,
  MR_Word STATE_VARIABLE_TVarSet_0_17,
  MR_Word * STATE_VARIABLE_TVarSet_18);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0(
  MR_Word TypeEqvMap_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_39,
  MR_Word * STATE_VARIABLE_ProcInfo_40,
  MR_Word STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * STATE_VARIABLE_ModuleInfo_42,
  MR_Word STATE_VARIABLE_PredInfo_0_43,
  MR_Word * STATE_VARIABLE_PredInfo_44,
  MR_Word STATE_VARIABLE_Cache_0_45,
  MR_Word * STATE_VARIABLE_Cache_46);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Acc_0_5,
  MR_Word * STATE_VARIABLE_Acc_6);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word * Changed_10,
  MR_Word STATE_VARIABLE_Info_0_130,
  MR_Word * STATE_VARIABLE_Info_131);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Acc_0_5,
  MR_Word * STATE_VARIABLE_Acc_6);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word Goal0_8,
  MR_Word * Goal_9,
  MR_Word * Changed_10,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_TVarSet_0_5,
  MR_Word * STATE_VARIABLE_TVarSet_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unification_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word Uni0_8,
  MR_Word * Uni_9,
  MR_Word * Changed_10,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unify_modes_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unify_mode_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word UnifyMode0_8,
  MR_Word * UnifyMode_9,
  MR_Word * Changed_10,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36,
  MR_Word STATE_VARIABLE_Cache_0_37,
  MR_Word * STATE_VARIABLE_Cache_38);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_constructor_arg_5_p_0(
  MR_Word TypeEqvMap_6,
  MR_Word CtorArg0_7,
  MR_Word * CtorArg_8,
  MR_Word STATE_VARIABLE_TVarSet_0_16,
  MR_Word * STATE_VARIABLE_TVarSet_17);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0(
  MR_Word TypeEqvMap_4,
  MR_Word ConsDefn0_5,
  MR_Word * ConsDefn_6);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_ctor_arg_repn_7_p_0(
  MR_Word TypeEqvMap_8,
  MR_Word CtorArgRepn0_9,
  MR_Word * CtorArgRepn_10,
  MR_Word STATE_VARIABLE_TVarSet_0_19,
  MR_Word * STATE_VARIABLE_TVarSet_20,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_21,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_22);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_ctor_repn_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_ctor_repn_9_p_0(
  MR_Word TypeEqvMap_10,
  MR_Word CtorRepn0_11,
  MR_Word * CtorRepn_12,
  MR_Word STATE_VARIABLE_CtorNameToRepnMap_0_32,
  MR_Word * STATE_VARIABLE_CtorNameToRepnMap_33,
  MR_Word STATE_VARIABLE_TVarSet_0_34,
  MR_Word * STATE_VARIABLE_TVarSet_35,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_36,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_37);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_type_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_type_defn_7_p_0(
  MR_Word ModuleName_8,
  MR_Word TypeEqvMap_9,
  MR_Word TypeCtor_10,
  MR_Word STATE_VARIABLE_Defn_0_63,
  MR_Word * STATE_VARIABLE_Defn_64,
  MR_Word STATE_VARIABLE_MaybeRecompInfo_0_65,
  MR_Word * STATE_VARIABLE_MaybeRecompInfo_66);

static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Changed_0_5,
  MR_Word * STATE_VARIABLE_Changed_6,
  MR_Word STATE_VARIABLE_TVarSet_0_7,
  MR_Word * STATE_VARIABLE_TVarSet_8);

static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(
  MR_Word TypeEqvMap_8,
  MR_Word TypeCtorsAlreadyExpanded_9,
  MR_Word Type0_10,
  MR_Word * Type_11,
  MR_Word * Changed_12,
  MR_Word STATE_VARIABLE_TVarSet_0_36,
  MR_Word * STATE_VARIABLE_TVarSet_37);

static void MR_CALL 
transform_hlds__equiv_type_hlds__mark_eqv_exported_types_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word STATE_VARIABLE_TypeTable_0_8,
  MR_Word * STATE_VARIABLE_TypeTable_9);

static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_to_eqv_map_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word Defn_8,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_21,
  MR_Word * STATE_VARIABLE_TypeEqvMap_22,
  MR_Word STATE_VARIABLE_EqvExportTypes_0_23,
  MR_Word * STATE_VARIABLE_EqvExportTypes_24);

static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_Set_0_8,
  MR_Word * STATE_VARIABLE_Set_9);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_equiv_types_in_hlds_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_equiv_types_in_hlds_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_equiv_types_in_hlds_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_equiv_types_in_hlds_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_equiv_types_in_hlds_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_table_5_p_0(
  MR_Word TypeEqvMap_6,
  MR_Word STATE_VARIABLE_InstTable_0_34,
  MR_Word * STATE_VARIABLE_InstTable_35,
  MR_Word STATE_VARIABLE_Cache_0_36,
  MR_Word * STATE_VARIABLE_Cache_37);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho7_10_p_0(
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevSortedElements_0_5,
  MR_Word * STATE_VARIABLE_RevSortedElements_6,
  MR_Word STATE_VARIABLE_UnSortedElements_0_7,
  MR_Word * STATE_VARIABLE_UnSortedElements_8,
  MR_Word STATE_VARIABLE_Cache_0_9,
  MR_Word * STATE_VARIABLE_Cache_10);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_merge_inst_info_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word MergeInstInfo0_8,
  MR_Word * MergeInstInfo_9,
  MR_Word * Changed_10,
  MR_Word STATE_VARIABLE_Cache_0_21,
  MR_Word * STATE_VARIABLE_Cache_22);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho6_10_p_0(
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevSortedElements_0_5,
  MR_Word * STATE_VARIABLE_RevSortedElements_6,
  MR_Word STATE_VARIABLE_UnSortedElements_0_7,
  MR_Word * STATE_VARIABLE_UnSortedElements_8,
  MR_Word STATE_VARIABLE_Cache_0_9,
  MR_Word * STATE_VARIABLE_Cache_10);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unify_inst_info_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word UnifyInstInfo0_8,
  MR_Word * UnifyInstInfo_9,
  MR_Word * Changed_10,
  MR_Word STATE_VARIABLE_Cache_0_23,
  MR_Word * STATE_VARIABLE_Cache_24);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho3_7_p_0(
  MR_Word TypeEqvMap_10,
  MR_Word SortedElements0_11,
  MR_Word * SortedElements_12,
  MR_Word STATE_VARIABLE_Cache_0_20,
  MR_Word * STATE_VARIABLE_Cache_21);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho8_10_p_0(
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevSortedElements_0_5,
  MR_Word * STATE_VARIABLE_RevSortedElements_6,
  MR_Word STATE_VARIABLE_UnSortedElements_0_7,
  MR_Word * STATE_VARIABLE_UnSortedElements_8,
  MR_Word STATE_VARIABLE_Cache_0_9,
  MR_Word * STATE_VARIABLE_Cache_10);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho2_7_p_0(
  MR_Word TypeEqvMap_10,
  MR_Word SortedElements0_11,
  MR_Word * SortedElements_12,
  MR_Word STATE_VARIABLE_Cache_0_20,
  MR_Word * STATE_VARIABLE_Cache_21);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho9_10_p_0(
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevSortedElements_0_5,
  MR_Word * STATE_VARIABLE_RevSortedElements_6,
  MR_Word STATE_VARIABLE_UnSortedElements_0_7,
  MR_Word * STATE_VARIABLE_UnSortedElements_8,
  MR_Word STATE_VARIABLE_Cache_0_9,
  MR_Word * STATE_VARIABLE_Cache_10);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_maybe_inst_det_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word MaybeInstDet0_8,
  MR_Word * MaybeInstDet_9,
  MR_Word * Changed_10,
  MR_Word STATE_VARIABLE_Cache_0_17,
  MR_Word * STATE_VARIABLE_Cache_18);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho1_7_p_0(
  MR_Word TypeEqvMap_10,
  MR_Word SortedElements0_11,
  MR_Word * SortedElements_12,
  MR_Word STATE_VARIABLE_Cache_0_20,
  MR_Word * STATE_VARIABLE_Cache_21);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho10_10_p_0(
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevSortedElements_0_5,
  MR_Word * STATE_VARIABLE_RevSortedElements_6,
  MR_Word STATE_VARIABLE_UnSortedElements_0_7,
  MR_Word * STATE_VARIABLE_UnSortedElements_8,
  MR_Word STATE_VARIABLE_Cache_0_9,
  MR_Word * STATE_VARIABLE_Cache_10);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_maybe_inst_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word MaybeInst0_8,
  MR_Word * MaybeInst_9,
  MR_Word * Changed_10,
  MR_Word STATE_VARIABLE_Cache_0_16,
  MR_Word * STATE_VARIABLE_Cache_17);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_TVarSet_0_5,
  MR_Word * STATE_VARIABLE_TVarSet_6,
  MR_Word STATE_VARIABLE_Cache_0_7,
  MR_Word * STATE_VARIABLE_Cache_8);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_TVarSet_0_5,
  MR_Word * STATE_VARIABLE_TVarSet_6,
  MR_Word STATE_VARIABLE_Cache_0_7,
  MR_Word * STATE_VARIABLE_Cache_8);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(
  MR_Word TypeEqvMap_9,
  MR_Word InstName0_10,
  MR_Word * InstName_11,
  MR_Word * Changed_12,
  MR_Word STATE_VARIABLE_TVarSet_0_34,
  MR_Word * STATE_VARIABLE_TVarSet_35,
  MR_Word STATE_VARIABLE_Cache_0_36,
  MR_Word * STATE_VARIABLE_Cache_37);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(
  MR_Word TypeEqvMap_9,
  MR_Word Inst0_10,
  MR_Word * Inst_11,
  MR_Word * Changed_12,
  MR_Word STATE_VARIABLE_TVarSet_0_17,
  MR_Word * STATE_VARIABLE_TVarSet_18,
  MR_Word STATE_VARIABLE_Cache_0_19,
  MR_Word * STATE_VARIABLE_Cache_20);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_TVarSet_0_5,
  MR_Word * STATE_VARIABLE_TVarSet_6,
  MR_Word STATE_VARIABLE_Cache_0_7,
  MR_Word * STATE_VARIABLE_Cache_8);

static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0(
  MR_Word Inst_3);

static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_insts_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_bound_insts_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____replace_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____replace_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_1[13][3];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_2[6][2];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_3[1][5];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_4[5][9];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_5[4][6];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_6[2][10];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_7[2][12];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_8[1][8];




static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_1[13][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_2[2]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__equiv_type_hlds__replace_equiv_types_in_hlds_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__equiv_type_hlds__replace_equiv_types_in_hlds_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_2[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_changed_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_2[3])),
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_4[5][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds____vpti_tuple_3__plain_parse_tree__equiv_type__type_ctor_info_maybe_changed_0__plain_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds____vpti_tuple_3__plain_parse_tree__equiv_type__type_ctor_info_maybe_changed_0__plain_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_5[4][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_6[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_7[2][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_one_or_more__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_one_or_more__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_8[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "transform_hlds.equiv_type_hlds.mh"



static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_recompilation_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__equiv_type_hlds__one_or_more__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_one_or_more__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&transform_hlds__equiv_type_hlds__one_or_more__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__equiv_type_hlds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 transform_hlds__equiv_type_hlds____vpti_tuple_3__plain_parse_tree__equiv_type__type_ctor_info_maybe_changed_0__plain_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_changed_0),
    (MR_PseudoTypeInfo) (&transform_hlds__equiv_type_hlds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__type_ctor_info_inst_cache_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0_10001)),
  ((MR_Box) (transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0_10001)),
  (MR_String) "transform_hlds.equiv_type_hlds",
  (MR_String) "inst_cache",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_types_replace_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__equiv_type_hlds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_names_replace_info_0_0[6] = {
  (MR_String) "ethri_module_info",
  (MR_String) "ethri_pred_info",
  (MR_String) "ethri_proc_info",
  (MR_String) "ethri_tvarset",
  (MR_String) "ethri_inst_cache",
  (MR_String) "ethri_recompute"
};

static const MR_DuArgLocn transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_locns_replace_info_0_0[6] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_functor_desc_replace_info_0_0 = {
  (MR_String) "replace_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_types_replace_info_0_0,
  transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_names_replace_info_0_0,
  transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_locns_replace_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_stag_ordered_replace_info_0_0[1] = {
  &transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_functor_desc_replace_info_0_0
};

static const MR_DuPtagLayout transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_ptag_ordered_replace_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_stag_ordered_replace_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_name_ordered_replace_info_0[1] = {
  &transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_functor_desc_replace_info_0_0
};

static const MR_Integer transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__functor_number_map_replace_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__type_ctor_info_replace_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__equiv_type_hlds____Unify____replace_info_0_0_10001)),
  ((MR_Box) (transform_hlds__equiv_type_hlds____Compare____replace_info_0_0_10001)),
  (MR_String) "transform_hlds.equiv_type_hlds",
  (MR_String) "replace_info",
  { transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_name_ordered_replace_info_0 },
  { transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_ptag_ordered_replace_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__functor_number_map_replace_info_0,

};

static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal__1483__1_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word LambdaHeadVar__1_39,
  MR_Word LambdaHeadVar__2_40,
  MR_Word * LambdaHeadVar__3_41,
  MR_Tuple LambdaHeadVar__4_42,
  MR_Tuple * LambdaHeadVar__5_43)
{
  transform_hlds__equiv_type_hlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_103_111_97_108_95_95_49_52_56_51_95_95_49_95_95_91_50_93_95_48_6_p_0(TypeEqvMap_7, LambdaHeadVar__2_40, LambdaHeadVar__3_41, LambdaHeadVar__4_42, LambdaHeadVar__5_43);
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_103_111_97_108_95_95_49_52_56_51_95_95_49_95_95_91_50_93_95_48_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word LambdaHeadVar__2_40,
  MR_Word * LambdaHeadVar__3_41,
  MR_Tuple LambdaHeadVar__4_42,
  MR_Tuple * LambdaHeadVar__5_43)
{
  MR_Word InstChanged_28;
  MR_Word Changed1_50 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__4_42, (MR_Integer) 0))));
  MR_Word TVarSet1_51 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__4_42, (MR_Integer) 1))));
  MR_Word Cache1_52 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__4_42, (MR_Integer) 2))));
  MR_Word Changed2_53;
  MR_Word TVarSet2_54;
  MR_Word Cache2_55;

  transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_7, LambdaHeadVar__2_40, LambdaHeadVar__3_41, &InstChanged_28, TVarSet1_51, &TVarSet2_54, Cache1_52, &Cache2_55);
  switch (InstChanged_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Changed2_53 = (MR_Integer) 1;
      break;
    case (MR_Integer) 0:
      Changed2_53 = Changed1_50;
      break;
  }
  {
    MR_Tuple base;
    base = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__5_43 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Changed2_53));
    MR_hl_field(0, base, 1) = ((MR_Box) (TVarSet2_54));
    MR_hl_field(0, base, 2) = ((MR_Box) (Cache2_55));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__672__1_3_p_0(
  MR_Word TypeMap_30,
  MR_Word HeadVar__2_99,
  MR_Word * HeadVar__3_100)
{
  MR_Box conv0_HeadVar__3_100;

  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeMap_30, ((MR_Box) (HeadVar__2_99)), &conv0_HeadVar__3_100);
  *HeadVar__3_100 = ((MR_Word) (conv0_HeadVar__3_100));
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__666__1_6_p_0(
  MR_Word TypeEqvMap_10,
  MR_Word LambdaHeadVar__1_61,
  MR_Word LambdaHeadVar__2_62,
  MR_Word * LambdaHeadVar__3_63,
  MR_Word LambdaHeadVar__4_64,
  MR_Word * LambdaHeadVar__5_65)
{
  MR_Word NewType_29;
  MR_Word _Changed_97;

  transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(TypeEqvMap_10, (MR_Word) ((MR_Unsigned) 0U), LambdaHeadVar__1_61, &NewType_29, &_Changed_97, LambdaHeadVar__4_64, LambdaHeadVar__5_65);
  mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (LambdaHeadVar__1_61)), ((MR_Box) (NewType_29)), LambdaHeadVar__2_62, LambdaHeadVar__3_63);
}

static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____replace_info_0_0(
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
    MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_pred____Compare____pred_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__hlds_pred____Compare____proc_info_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[3]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[1]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Integer Var_29 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_30 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_29 < Var_30);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_29 > Var_30);
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

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____replace_info_0_0(
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
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_21_21;
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
    MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_20_20 = (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_21_21 = (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
              succeeded = (ArgX6_13 == ArgY6_14);
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__record_inst_may_occur_2_p_0(
  MR_Word Inst_1,
  MR_Word MayOccur_2)
{
{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__record_inst_may_occur_2_p_0

	MR_Word Inst;
	MR_Word MayOccur;

	Inst = Inst_1 ;
	MayOccur = MayOccur_2 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % TYPE_IN_INST_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    type_in_inst_cache[hash].tice_inst_addr = Inst;
    type_in_inst_cache[hash].tice_may_occur = MayOccur;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__lookup_inst_may_occur_3_p_0(
  MR_Word Inst_1,
  MR_Word * Found_2,
  MR_Word * MayOccur_3)
{
{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__lookup_inst_may_occur_3_p_0

	MR_Word Inst;
	MR_Word Found;
	MR_Word MayOccur;

	Inst = Inst_1 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % TYPE_IN_INST_CACHE_SIZE;

    if (type_in_inst_cache[hash].tice_inst_addr == Inst) {
        Found = MR_BOOL_YES;
        MayOccur = type_in_inst_cache[hash].tice_may_occur;
    } else {
        Found = MR_BOOL_NO;
        MayOccur = MR_BOOL_NO;
    }


		;}
#undef MR_PROC_LABEL
	*Found_2  = Found;
	*MayOccur_3  = MayOccur;
}
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_from_to_insts_8_p_0(
  MR_Word TypeEqvMap_9,
  MR_Word FromToInsts0_10,
  MR_Word * FromToInsts_11,
  MR_Word * Changed_12,
  MR_Word STATE_VARIABLE_TVarSet_0_21,
  MR_Word * STATE_VARIABLE_TVarSet_22,
  MR_Word STATE_VARIABLE_Cache_0_23,
  MR_Word * STATE_VARIABLE_Cache_24)
{
  MR_bool succeeded;
  MR_Word Init0_15 = ((MR_Word) ((MR_hl_field(0, FromToInsts0_10, (MR_Integer) 0))));
  MR_Word Final0_16 = ((MR_Word) ((MR_hl_field(0, FromToInsts0_10, (MR_Integer) 1))));
  MR_Word Init_17;
  MR_Word ChangedA_18;
  MR_Word Final_19;
  MR_Word ChangedB_20;
  MR_Word STATE_VARIABLE_TVarSet_25_25;
  MR_Word STATE_VARIABLE_Cache_26_26;

  transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_9, Init0_15, &Init_17, &ChangedA_18, STATE_VARIABLE_TVarSet_0_21, &STATE_VARIABLE_TVarSet_25_25, STATE_VARIABLE_Cache_0_23, &STATE_VARIABLE_Cache_26_26);
  transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_9, Final0_16, &Final_19, &ChangedB_20, STATE_VARIABLE_TVarSet_25_25, STATE_VARIABLE_TVarSet_22, STATE_VARIABLE_Cache_26_26, STATE_VARIABLE_Cache_24);
  succeeded = (ChangedA_18 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (ChangedB_20 == (MR_Integer) 0);
  if (succeeded)
  {
    *Changed_12 = (MR_Integer) 0;
    *FromToInsts_11 = FromToInsts0_10;
  }
  else
  {
    *Changed_12 = (MR_Integer) 1;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *FromToInsts_11 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Init_17));
      MR_hl_field(0, base, 1) = ((MR_Box) (Final_19));
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_var_table_entry_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeEqvMap_8,
  MR_Word Entry0_9,
  MR_Word * Entry_10,
  MR_Word STATE_VARIABLE_TVarSet_0_17,
  MR_Word * STATE_VARIABLE_TVarSet_18)
{
  MR_String Name_12 = ((MR_String) ((MR_hl_field(0, Entry0_9, (MR_Integer) 0))));
  MR_Word Type0_13 = ((MR_Word) ((MR_hl_field(0, Entry0_9, (MR_Integer) 1))));
  MR_Word Type_15;
  MR_Word IsDummy_16;
  MR_Word _Changed_19;

  transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(TypeEqvMap_8, (MR_Word) ((MR_Unsigned) 0U), Type0_13, &Type_15, &_Changed_19, STATE_VARIABLE_TVarSet_0_17, STATE_VARIABLE_TVarSet_18);
  IsDummy_16 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_7, Type_15);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Entry_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Name_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (Type_15));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_16));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_HeadVar__3_100;

  transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__672__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv7_HeadVar__3_100);
  *wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__3_100));
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__3_63;
  MR_Word conv3_LambdaHeadVar__5_65;

  transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__666__1_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_LambdaHeadVar__3_63, ((MR_Word) (wrapper_arg_4)), &conv3_LambdaHeadVar__5_65);
  *wrapper_arg_3 = ((MR_Box) (conv4_LambdaHeadVar__3_63));
  *wrapper_arg_5 = ((MR_Box) (conv3_LambdaHeadVar__5_65));
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Entry_10;
  MR_Word conv0_STATE_VARIABLE_TVarSet_18;

  transform_hlds__equiv_type_hlds__hlds_replace_in_var_table_entry_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_Entry_10, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TVarSet_18);
  *wrapper_arg_2 = ((MR_Box) (conv1_Entry_10));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TVarSet_18));
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0(
  MR_Word TypeEqvMap_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_39,
  MR_Word * STATE_VARIABLE_ProcInfo_40,
  MR_Word STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * STATE_VARIABLE_ModuleInfo_42,
  MR_Word STATE_VARIABLE_PredInfo_0_43,
  MR_Word * STATE_VARIABLE_PredInfo_44,
  MR_Word STATE_VARIABLE_Cache_0_45,
  MR_Word * STATE_VARIABLE_Cache_46)
{
  MR_Word ArgModes0_16;
  MR_Word ArgModes_17;
  MR_Word MaybeDeclModes0_19;
  MR_Word VarTable0_23;
  MR_Word VarTable_24;
  MR_Word RttiVarMaps0_25;
  MR_Word AllTypes_26;
  MR_Word TypeMap_30;
  MR_Word RttiVarMaps_31;
  MR_Word Goal0_32;
  MR_Word ReplaceInfo0_33;
  MR_Word Goal_34;
  MR_Word Changed_35;
  MR_Word ReplaceInfo_36;
  MR_Word Recompute_38;
  MR_Word STATE_VARIABLE_TVarSet_47_47;
  MR_Word STATE_VARIABLE_TVarSet_48_48;
  MR_Word STATE_VARIABLE_Cache_49_49;
  MR_Word STATE_VARIABLE_ProcInfo_50_50;
  MR_Word STATE_VARIABLE_TVarSet_51_51;
  MR_Word STATE_VARIABLE_ProcInfo_54_54;
  MR_Word Var_55;
  MR_Word STATE_VARIABLE_TVarSet_56_56;
  MR_Word STATE_VARIABLE_ProcInfo_57_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word STATE_VARIABLE_TVarSet_60_60;
  MR_Word Var_72;
  MR_Word STATE_VARIABLE_ProcInfo_73_73;
  MR_Word STATE_VARIABLE_ModuleInfo_75_75;
  MR_Word STATE_VARIABLE_PredInfo_76_76;
  MR_Word STATE_VARIABLE_ProcInfo_77_77;
  MR_Word STATE_VARIABLE_TVarSet_78_78;
  MR_Word STATE_VARIABLE_ProcInfo_79_79;
  MR_Word Var_18;
  MR_Box conv2_STATE_VARIABLE_TVarSet_56_56;
  MR_Box conv6_TypeMap_30;
  MR_Box conv5_STATE_VARIABLE_TVarSet_60_60;

  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_0_43, &STATE_VARIABLE_TVarSet_47_47);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_39, &ArgModes0_16);
  transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(TypeEqvMap_10, ArgModes0_16, &ArgModes_17, &Var_18, STATE_VARIABLE_TVarSet_47_47, &STATE_VARIABLE_TVarSet_48_48, STATE_VARIABLE_Cache_0_45, &STATE_VARIABLE_Cache_49_49);
  hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_17, STATE_VARIABLE_ProcInfo_0_39, &STATE_VARIABLE_ProcInfo_50_50);
  hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_50_50, &MaybeDeclModes0_19);
  if ((MaybeDeclModes0_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    STATE_VARIABLE_ProcInfo_54_54 = STATE_VARIABLE_ProcInfo_50_50;
    *STATE_VARIABLE_Cache_46 = STATE_VARIABLE_Cache_49_49;
    STATE_VARIABLE_TVarSet_51_51 = STATE_VARIABLE_TVarSet_48_48;
  }
  else
  {
    MR_Word DeclModes0_20 = ((MR_Word) ((MR_hl_field(1, MaybeDeclModes0_19, (MR_Integer) 0))));
    MR_Word DeclModes_21;
    MR_Word Var_53;
    MR_Word Var_22;

    transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(TypeEqvMap_10, DeclModes0_20, &DeclModes_21, &Var_22, STATE_VARIABLE_TVarSet_48_48, &STATE_VARIABLE_TVarSet_51_51, STATE_VARIABLE_Cache_49_49, STATE_VARIABLE_Cache_46);
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (DeclModes_21));
    }
    hlds__hlds_pred__proc_info_set_maybe_declared_argmodes_3_p_0(Var_53, STATE_VARIABLE_ProcInfo_50_50, &STATE_VARIABLE_ProcInfo_54_54);
  }
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_54_54, &VarTable0_23);
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_4[3]));
    MR_hl_field(0, Var_55, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_1));
    MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_55, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_41));
    MR_hl_field(0, Var_55, 4) = ((MR_Box) (TypeEqvMap_10));
  }
  parse_tree__var_table__transform_foldl_var_table_5_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[3]), Var_55, VarTable0_23, &VarTable_24, ((MR_Box) (STATE_VARIABLE_TVarSet_51_51)), &conv2_STATE_VARIABLE_TVarSet_56_56);
  STATE_VARIABLE_TVarSet_56_56 = ((MR_Word) (conv2_STATE_VARIABLE_TVarSet_56_56));
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_24, STATE_VARIABLE_ProcInfo_54_54, &STATE_VARIABLE_ProcInfo_57_57);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_57_57, &RttiVarMaps0_25);
  hlds__hlds_rtti__rtti_varmaps_types_2_p_0(RttiVarMaps0_25, &AllTypes_26);
  {
    Var_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_58, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_4[4]));
    MR_hl_field(0, Var_58, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_2));
    MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_58, 3) = ((MR_Box) (TypeEqvMap_10));
  }
  Var_59 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[3]), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[3]), Var_58, AllTypes_26, ((MR_Box) (Var_59)), &conv6_TypeMap_30, ((MR_Box) (STATE_VARIABLE_TVarSet_56_56)), &conv5_STATE_VARIABLE_TVarSet_60_60);
  TypeMap_30 = ((MR_Word) (conv6_TypeMap_30));
  STATE_VARIABLE_TVarSet_60_60 = ((MR_Word) (conv5_STATE_VARIABLE_TVarSet_60_60));
  {
    Var_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_72, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_5[3]));
    MR_hl_field(0, Var_72, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_3));
    MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_72, 3) = ((MR_Box) (TypeMap_30));
  }
  hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0(Var_72, RttiVarMaps0_25, &RttiVarMaps_31);
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_31, STATE_VARIABLE_ProcInfo_57_57, &STATE_VARIABLE_ProcInfo_73_73);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_73_73, &Goal0_32);
  {
    ReplaceInfo0_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ReplaceInfo0_33, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_41));
    MR_hl_field(0, ReplaceInfo0_33, 1) = ((MR_Box) (STATE_VARIABLE_PredInfo_0_43));
    MR_hl_field(0, ReplaceInfo0_33, 2) = ((MR_Box) (STATE_VARIABLE_ProcInfo_73_73));
    MR_hl_field(0, ReplaceInfo0_33, 3) = ((MR_Box) (STATE_VARIABLE_TVarSet_60_60));
    MR_hl_field(0, ReplaceInfo0_33, 4) = ((MR_Box) (*STATE_VARIABLE_Cache_46));
    MR_hl_field(0, ReplaceInfo0_33, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(TypeEqvMap_10, Goal0_32, &Goal_34, &Changed_35, ReplaceInfo0_33, &ReplaceInfo_36);
  STATE_VARIABLE_ModuleInfo_75_75 = ((MR_Word) ((MR_hl_field(0, ReplaceInfo_36, (MR_Integer) 0))));
  STATE_VARIABLE_PredInfo_76_76 = ((MR_Word) ((MR_hl_field(0, ReplaceInfo_36, (MR_Integer) 1))));
  STATE_VARIABLE_ProcInfo_77_77 = ((MR_Word) ((MR_hl_field(0, ReplaceInfo_36, (MR_Integer) 2))));
  STATE_VARIABLE_TVarSet_78_78 = ((MR_Word) ((MR_hl_field(0, ReplaceInfo_36, (MR_Integer) 3))));
  Recompute_38 = ((MR_Unsigned) ((MR_hl_field(0, ReplaceInfo_36, (MR_Integer) 5))) & (MR_Integer) 1);
  switch (Changed_35) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_34, STATE_VARIABLE_ProcInfo_77_77, &STATE_VARIABLE_ProcInfo_79_79);
      break;
    case (MR_Integer) 0:
      STATE_VARIABLE_ProcInfo_79_79 = STATE_VARIABLE_ProcInfo_77_77;
      break;
  }
  switch (Recompute_38) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_ProcInfo_40 = STATE_VARIABLE_ProcInfo_79_79;
        *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_75_75;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_ProcInfo_81_81;

        hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_79_79, &STATE_VARIABLE_ProcInfo_81_81);
        check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_81_81, STATE_VARIABLE_ProcInfo_40, STATE_VARIABLE_ModuleInfo_75_75, STATE_VARIABLE_ModuleInfo_42);
      }
      break;
  }
  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(STATE_VARIABLE_TVarSet_78_78, STATE_VARIABLE_PredInfo_76_76, STATE_VARIABLE_PredInfo_44);
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Acc_0_5,
  MR_Word * STATE_VARIABLE_Acc_6)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Integer) 0;
    *STATE_VARIABLE_Acc_6 = STATE_VARIABLE_Acc_0_5;
  }
  else
  {
    MR_Word Case0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cases0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Cases_18;
    MR_Word TailChanged_19;
    MR_Word Case_20;
    MR_Word HeadChanged_21;
    MR_Word STATE_VARIABLE_Acc_24_24;
    MR_Word MainConsId_25;
    MR_Word OtherConsIds_26;
    MR_Word CaseGoal0_27;
    MR_Word CaseGoal_28;

    transform_hlds__equiv_type_hlds__replace_in_cases_6_p_0(HeadVar__1_1, Cases0_14, &Cases_18, &TailChanged_19, STATE_VARIABLE_Acc_0_5, &STATE_VARIABLE_Acc_24_24);
    MainConsId_25 = ((MR_Word) ((MR_hl_field(0, Case0_13, (MR_Integer) 0))));
    OtherConsIds_26 = ((MR_Word) ((MR_hl_field(0, Case0_13, (MR_Integer) 1))));
    CaseGoal0_27 = ((MR_Word) ((MR_hl_field(0, Case0_13, (MR_Integer) 2))));
    transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(HeadVar__1_1, CaseGoal0_27, &CaseGoal_28, &HeadChanged_21, STATE_VARIABLE_Acc_24_24, STATE_VARIABLE_Acc_6);
    switch (HeadChanged_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Case_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Case_20, 0) = ((MR_Box) (MainConsId_25));
          MR_hl_field(0, Case_20, 1) = ((MR_Box) (OtherConsIds_26));
          MR_hl_field(0, Case_20, 2) = ((MR_Box) (CaseGoal_28));
        }
        break;
      case (MR_Integer) 0:
        Case_20 = Case0_13;
        break;
    }
    succeeded = (TailChanged_19 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (HeadChanged_21 == (MR_Integer) 0);
    if (succeeded)
    {
      *HeadVar__4_4 = (MR_Integer) 0;
      *HeadVar__3_3 = HeadVar__2_2;
    }
    else
    {
      *HeadVar__4_4 = (MR_Integer) 1;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Case_20));
        MR_hl_field(1, base, 1) = ((MR_Box) (Cases_18));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word * Changed_10,
  MR_Word STATE_VARIABLE_Info_0_130,
  MR_Word * STATE_VARIABLE_Info_131)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GoalExpr0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word NegGoal0_19 = (MR_Word) ((MR_Word) (GoalExpr0_8));
        MR_Word NegGoal_20;

        transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(TypeEqvMap_7, NegGoal0_19, &NegGoal_20, Changed_10, STATE_VARIABLE_Info_0_130, STATE_VARIABLE_Info_131);
        switch (*Changed_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *GoalExpr_9 = (MR_Word) ((MR_Word) (NegGoal_20));
            break;
          case (MR_Integer) 0:
            *GoalExpr_9 = GoalExpr0_8;
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleInfo0_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_130, (MR_Integer) 0))));
        MR_Word ProcInfo0_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_130, (MR_Integer) 2))));
        MR_Word TypeTable_70;
        MR_Word VarTable_71;
        MR_Word RttiVarMaps_72;
        MR_Word VarType_73;
        MR_Word TypeCtorCat_74;
        MR_Word Var_208 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 0))));
        MR_Word ConsId_76;
        MR_Word TypeCtor_82;
        MR_Word TypeDefn_83;
        MR_Word Body_84;
        MR_Word Var_149;
        MR_Word Var_150;

        hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo0_68, &TypeTable_70);
        hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_69, &VarTable_71);
        hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo0_69, &RttiVarMaps_72);
        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_71, Var_208, &VarType_73);
        TypeCtorCat_74 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo0_68, VarType_73);
        Var_149 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 3))));
        succeeded = ((MR_tag((MR_Word) Var_149)) == (MR_Integer) 0);
        if (succeeded)
        {
          ConsId_76 = ((MR_Word) ((MR_hl_field(0, Var_149, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) ConsId_76)) == (MR_Integer) 1);
          if (succeeded)
          {
            TypeCtor_82 = (MR_Word) (MR_body((MR_Word) (ConsId_76), (MR_Integer) 1));
            succeeded = ((((MR_tag((MR_Word) TypeCtorCat_74)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeCtorCat_74, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              Var_150 = ((MR_Unsigned) ((MR_hl_field(3, TypeCtorCat_74, (MR_Integer) 1))) & (MR_Integer) 3);
              succeeded = (Var_150 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_70, TypeCtor_82, &TypeDefn_83);
                if (succeeded)
                {
                  hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_83, &Body_84);
                  succeeded = ((MR_tag((MR_Word) Body_84)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                  }
                }
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word PredInfo0_86;
          MR_Word PredInfo1_87;
          MR_Word VarInfo_88;
          MR_Word TypeInfoType_90;
          MR_Word TypeInfoVar_92;
          MR_Word ModuleInfo_93;
          MR_Word PredInfo_94;
          MR_Word ProcInfo_95;
          MR_Word Var_153;
          MR_Word STATE_VARIABLE_Info_157_157;
          MR_Word Var_159;
          MR_Word Var_160;
          MR_Word Var_161;
          MR_Word Goals0_186;
          MR_Word Goals_187;
          MR_Word TVarSet0_188;
          MR_Word TVarSet_189;
          MR_Word Var_299;
          MR_Word Var_300;
          MR_Word GoalExpr1_96;
          MR_Word Var_163;
          MR_Word Var_164;
          MR_Word Var_319;
          MR_Word Var_320;
          MR_Word Var_321;
          MR_Word Var_322;
          MR_Word Var_323;

          *Changed_10 = (MR_Integer) 1;
          PredInfo0_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_130, (MR_Integer) 1))));
          TVarSet0_188 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_130, (MR_Integer) 3))));
          hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TVarSet0_188, PredInfo0_86, &PredInfo1_87);
          hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(RttiVarMaps_72, Var_208, &VarInfo_88);
          switch (MR_tag((MR_Word) VarInfo_88)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.equiv_type_hlds.replace_in_goal_expr\'/6", (MR_String) "info not found");
                return;
              }
              break;
            case (MR_Integer) 1:
              TypeInfoType_90 = ((MR_Word) ((MR_hl_field(1, VarInfo_88, (MR_Integer) 0))));
              break;
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.equiv_type_hlds.replace_in_goal_expr\'/6", (MR_String) "info not found");
                return;
              }
              break;
          }
          Var_153 = mercury__term_context__dummy_context_0_f_0();
          check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_mi_10_p_0(TypeInfoType_90, Var_153, &TypeInfoVar_92, &Goals0_186, ModuleInfo0_68, &ModuleInfo_93, PredInfo1_87, &PredInfo_94, ProcInfo0_69, &ProcInfo_95);
          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_94, &TVarSet_189);
          Var_299 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_130, (MR_Integer) 4))));
          Var_300 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_130, (MR_Integer) 5))) & (MR_Integer) 1);
          {
            STATE_VARIABLE_Info_157_157 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Info_157_157, 0) = ((MR_Box) (ModuleInfo_93));
            MR_hl_field(0, STATE_VARIABLE_Info_157_157, 1) = ((MR_Box) (PredInfo_94));
            MR_hl_field(0, STATE_VARIABLE_Info_157_157, 2) = ((MR_Box) (ProcInfo_95));
            MR_hl_field(0, STATE_VARIABLE_Info_157_157, 3) = ((MR_Box) (TVarSet_189));
            MR_hl_field(0, STATE_VARIABLE_Info_157_157, 4) = ((MR_Box) (Var_299));
            MR_hl_field(0, STATE_VARIABLE_Info_157_157, 5) = (MR_Box) ((MR_Unsigned) (Var_300));
          }
          {
            Var_161 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_161, 0) = ((MR_Box) (TypeInfoVar_92));
            MR_hl_field(0, Var_161, 1) = ((MR_Box) (Var_208));
          }
          {
            Var_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_160, 0) = ((MR_Box) (Var_161));
            MR_hl_field(1, Var_160, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_159 = mercury__map__from_assoc_list_1_f_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[5]), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[5]), Var_160);
          hlds__hlds_goal__rename_vars_in_goals_4_p_0((MR_Integer) 1, Var_159, Goals0_186, &Goals_187);
          succeeded = (Goals_187 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_163 = ((MR_Word) ((MR_hl_field(1, Goals_187, (MR_Integer) 0))));
            Var_164 = ((MR_Word) ((MR_hl_field(1, Goals_187, (MR_Integer) 1))));
            succeeded = (Var_164 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              GoalExpr1_96 = ((MR_Word) ((MR_hl_field(0, Var_163, (MR_Integer) 0))));
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            *GoalExpr_9 = GoalExpr1_96;
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(3, base, 2) = ((MR_Box) (Goals_187));
            }
          Var_319 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_157_157, (MR_Integer) 0))));
          Var_320 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_157_157, (MR_Integer) 1))));
          Var_321 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_157_157, (MR_Integer) 2))));
          Var_322 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_157_157, (MR_Integer) 3))));
          Var_323 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_157_157, (MR_Integer) 4))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_131 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_319));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_320));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_321));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_322));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_323));
            MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
        }
        else
        {
          MR_Word Var_168 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 3))));
          MR_Word Var_169;
          MR_Word ConsId_190;
          MR_Word TypeCtor_191;
          MR_Word TypeDefn_192;
          MR_Word Body_193;

          succeeded = ((MR_tag((MR_Word) Var_168)) == (MR_Integer) 0);
          if (succeeded)
          {
            ConsId_190 = ((MR_Word) ((MR_hl_field(0, Var_168, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) ConsId_190)) == (MR_Integer) 1);
            if (succeeded)
            {
              TypeCtor_191 = (MR_Word) (MR_body((MR_Word) (ConsId_190), (MR_Integer) 1));
              succeeded = ((((MR_tag((MR_Word) TypeCtorCat_74)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeCtorCat_74, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_169 = ((MR_Unsigned) ((MR_hl_field(3, TypeCtorCat_74, (MR_Integer) 1))) & (MR_Integer) 3);
                succeeded = (Var_169 == (MR_Integer) 1);
                if (succeeded)
                {
                  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_70, TypeCtor_191, &TypeDefn_192);
                  if (succeeded)
                  {
                    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_192, &Body_193);
                    succeeded = ((MR_tag((MR_Word) Body_193)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                    }
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word Var_329;
            MR_Word Var_330;
            MR_Word Var_331;
            MR_Word Var_332;
            MR_Word Var_333;

            *Changed_10 = (MR_Integer) 1;
            *GoalExpr_9 = (MR_Word) (MR_mkword(3, &transform_hlds__equiv_type_hlds_scalar_common_1[4]));
            Var_329 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_130, (MR_Integer) 0))));
            Var_330 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_130, (MR_Integer) 1))));
            Var_331 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_130, (MR_Integer) 2))));
            Var_332 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_130, (MR_Integer) 3))));
            Var_333 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_130, (MR_Integer) 4))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_131 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_329));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_330));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_331));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_332));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_333));
              MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            }
          }
          else
          {
            MR_Word UnifyMode0_105 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word UnifyMode_106;
            MR_Word ChangedMode_107;
            MR_Word Unification0_108;
            MR_Word Unification_109;
            MR_Word ChangedUnification_110;
            MR_Word STATE_VARIABLE_Info_174_174;

            transform_hlds__equiv_type_hlds__replace_in_unify_mode_6_p_0(TypeEqvMap_7, UnifyMode0_105, &UnifyMode_106, &ChangedMode_107, STATE_VARIABLE_Info_0_130, &STATE_VARIABLE_Info_174_174);
            Unification0_108 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 3))));
            transform_hlds__equiv_type_hlds__replace_in_unification_6_p_0(TypeEqvMap_7, Unification0_108, &Unification_109, &ChangedUnification_110, STATE_VARIABLE_Info_174_174, STATE_VARIABLE_Info_131);
            succeeded = (ChangedMode_107 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (ChangedUnification_110 == (MR_Integer) 0);
            if (succeeded)
            {
              *Changed_10 = (MR_Integer) 0;
              *GoalExpr_9 = GoalExpr0_8;
            }
            else
            {
              MR_Word Var_343;
              MR_Word Var_344;
              MR_Word Var_347;

              *Changed_10 = (MR_Integer) 1;
              Var_343 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 0))));
              Var_344 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 1))));
              Var_347 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 4))));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_9 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_343));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_344));
                MR_hl_field(1, base, 2) = ((MR_Box) (UnifyMode_106));
                MR_hl_field(1, base, 3) = ((MR_Box) (Unification_109));
                MR_hl_field(1, base, 4) = ((MR_Box) (Var_347));
              }
            }
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        *GoalExpr_9 = GoalExpr0_8;
        *Changed_10 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_131 = STATE_VARIABLE_Info_0_130;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Details_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word Modes0_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 3))));
            MR_Word MaybeArgRegs_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 4))));
            MR_Word Detism_60 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 5))) & (MR_Integer) 7);
            MR_Word Cache0_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_130, (MR_Integer) 4))));
            MR_Word Modes_62;
            MR_Word Cache_63;
            MR_Word TVarSet0_183 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_130, (MR_Integer) 3))));
            MR_Word Args_184 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word TVarSet_185;

            transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(TypeEqvMap_7, Modes0_58, &Modes_62, Changed_10, TVarSet0_183, &TVarSet_185, Cache0_61, &Cache_63);
            switch (*Changed_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word Var_259 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_130, (MR_Integer) 0))));
                  MR_Word Var_260 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_130, (MR_Integer) 1))));
                  MR_Word Var_261 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_130, (MR_Integer) 2))));
                  MR_Word Var_264 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_130, (MR_Integer) 5))) & (MR_Integer) 1);

                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    *STATE_VARIABLE_Info_131 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Var_259));
                    MR_hl_field(0, base, 1) = ((MR_Box) (Var_260));
                    MR_hl_field(0, base, 2) = ((MR_Box) (Var_261));
                    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_185));
                    MR_hl_field(0, base, 4) = ((MR_Box) (Cache_63));
                    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_264));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_9 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (Details_57));
                    MR_hl_field(3, base, 2) = ((MR_Box) (Args_184));
                    MR_hl_field(3, base, 3) = ((MR_Box) (Modes_62));
                    MR_hl_field(3, base, 4) = ((MR_Box) (MaybeArgRegs_59));
                    MR_hl_field(3, base, 5) = (MR_Box) ((MR_Unsigned) (Detism_60));
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  *GoalExpr_9 = GoalExpr0_8;
                  *STATE_VARIABLE_Info_131 = STATE_VARIABLE_Info_0_130;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TVarSet0_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_130, (MR_Integer) 3))));
            MR_Word Args_49;
            MR_Word ChangedArgs_50;
            MR_Word TVarSet1_51;
            MR_Word ExtraArgs_53;
            MR_Word ChangedExtraArgs_54;
            MR_Word TVarSet_55;
            MR_Word Var_141 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 4))));
            MR_Word Var_143;
            MR_Word Var_52;
            MR_Word Var_56;

            transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(TypeEqvMap_7, Var_141, &Args_49, &ChangedArgs_50, TVarSet0_48, &TVarSet1_51, (MR_Word) ((MR_Unsigned) 0U), &Var_52);
            Var_143 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 5))));
            transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(TypeEqvMap_7, Var_143, &ExtraArgs_53, &ChangedExtraArgs_54, TVarSet1_51, &TVarSet_55, (MR_Word) ((MR_Unsigned) 0U), &Var_56);
            succeeded = (ChangedArgs_50 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (ChangedExtraArgs_54 == (MR_Integer) 0);
            if (succeeded)
            {
              *Changed_10 = (MR_Integer) 0;
              *GoalExpr_9 = GoalExpr0_8;
              *STATE_VARIABLE_Info_131 = STATE_VARIABLE_Info_0_130;
            }
            else
            {
              MR_Word Var_235;
              MR_Word Var_236;
              MR_Integer Var_237;
              MR_Word Var_240;
              MR_Word Var_241;
              MR_Word Var_229;
              MR_Word Var_230;
              MR_Word Var_231;
              MR_Word Var_233;
              MR_Word Var_234;

              *Changed_10 = (MR_Integer) 1;
              Var_229 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_130, (MR_Integer) 0))));
              Var_230 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_130, (MR_Integer) 1))));
              Var_231 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_130, (MR_Integer) 2))));
              Var_233 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_130, (MR_Integer) 4))));
              Var_234 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_130, (MR_Integer) 5))) & (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_131 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_229));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_230));
                MR_hl_field(0, base, 2) = ((MR_Box) (Var_231));
                MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_55));
                MR_hl_field(0, base, 4) = ((MR_Box) (Var_233));
                MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_234));
              }
              Var_235 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
              Var_236 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
              Var_237 = ((MR_Integer) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 3))));
              Var_240 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 6))));
              Var_241 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 7))));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_9 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Var_235));
                MR_hl_field(3, base, 2) = ((MR_Box) (Var_236));
                MR_hl_field(3, base, 3) = ((MR_Box) (Var_237));
                MR_hl_field(3, base, 4) = ((MR_Box) (Args_49));
                MR_hl_field(3, base, 5) = ((MR_Box) (ExtraArgs_53));
                MR_hl_field(3, base, 6) = ((MR_Box) (Var_240));
                MR_hl_field(3, base, 7) = ((MR_Box) (Var_241));
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_12 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word Goals_14;

            transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(TypeEqvMap_7, Goals0_13, &Goals_14, Changed_10, STATE_VARIABLE_Info_0_130, STATE_VARIABLE_Info_131);
            switch (*Changed_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *GoalExpr_9 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_12));
                  MR_hl_field(3, base, 2) = ((MR_Box) (Goals_14));
                }
                break;
              case (MR_Integer) 0:
                *GoalExpr_9 = GoalExpr0_8;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_181 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word Goals_182;

            transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(TypeEqvMap_7, Goals0_181, &Goals_182, Changed_10, STATE_VARIABLE_Info_0_130, STATE_VARIABLE_Info_131);
            switch (*Changed_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *GoalExpr_9 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (Goals_182));
                }
                break;
              case (MR_Integer) 0:
                *GoalExpr_9 = GoalExpr0_8;
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word CanFail_16 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 3))));
            MR_Word Cases_18;

            transform_hlds__equiv_type_hlds__replace_in_cases_6_p_0(TypeEqvMap_7, Cases0_17, &Cases_18, Changed_10, STATE_VARIABLE_Info_0_130, STATE_VARIABLE_Info_131);
            switch (*Changed_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *GoalExpr_9 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (Var_15));
                  MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (CanFail_16));
                  MR_hl_field(3, base, 3) = ((MR_Box) (Cases_18));
                }
                break;
              case (MR_Integer) 0:
                *GoalExpr_9 = GoalExpr0_8;
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word SomeGoal0_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word Var_136;

            succeeded = ((((MR_tag((MR_Word) Reason_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_21, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_136 = ((MR_Unsigned) ((MR_hl_field(3, Reason_21, (MR_Integer) 2))) & (MR_Integer) 3);
              succeeded = (Var_136 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              *GoalExpr_9 = GoalExpr0_8;
              *Changed_10 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_131 = STATE_VARIABLE_Info_0_130;
            }
            else
            {
              MR_Word SomeGoal_24;

              transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(TypeEqvMap_7, SomeGoal0_22, &SomeGoal_24, Changed_10, STATE_VARIABLE_Info_0_130, STATE_VARIABLE_Info_131);
              switch (*Changed_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_9 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (Reason_21));
                    MR_hl_field(3, base, 2) = ((MR_Box) (SomeGoal_24));
                  }
                  break;
                case (MR_Integer) 0:
                  *GoalExpr_9 = GoalExpr0_8;
                  break;
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word Cond0_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word Then0_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 3))));
            MR_Word Else0_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 4))));
            MR_Word Cond_29;
            MR_Word ChangedC_30;
            MR_Word Then_31;
            MR_Word ChangedT_32;
            MR_Word Else_33;
            MR_Word ChangedE_34;
            MR_Word STATE_VARIABLE_Info_138_138;
            MR_Word STATE_VARIABLE_Info_139_139;

            transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(TypeEqvMap_7, Cond0_26, &Cond_29, &ChangedC_30, STATE_VARIABLE_Info_0_130, &STATE_VARIABLE_Info_138_138);
            transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(TypeEqvMap_7, Then0_27, &Then_31, &ChangedT_32, STATE_VARIABLE_Info_138_138, &STATE_VARIABLE_Info_139_139);
            transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(TypeEqvMap_7, Else0_28, &Else_33, &ChangedE_34, STATE_VARIABLE_Info_139_139, STATE_VARIABLE_Info_131);
            succeeded = (ChangedC_30 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (ChangedT_32 == (MR_Integer) 0);
              if (succeeded)
                succeeded = (ChangedE_34 == (MR_Integer) 0);
            }
            if (succeeded)
            {
              *Changed_10 = (MR_Integer) 0;
              *GoalExpr_9 = GoalExpr0_8;
            }
            else
            {
              *Changed_10 = (MR_Integer) 1;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_9 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Vars_25));
                MR_hl_field(3, base, 2) = ((MR_Box) (Cond_29));
                MR_hl_field(3, base, 3) = ((MR_Box) (Then_31));
                MR_hl_field(3, base, 4) = ((MR_Box) (Else_33));
              }
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_111 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ShortHand0_111)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.equiv_type_hlds.replace_in_goal_expr\'/6", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_112 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_111, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_113 = ((MR_Word) ((MR_hl_field(1, ShortHand0_111, (MR_Integer) 1))));
                  MR_Word Inner_114 = ((MR_Word) ((MR_hl_field(1, ShortHand0_111, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_115 = ((MR_Word) ((MR_hl_field(1, ShortHand0_111, (MR_Integer) 3))));
                  MR_Word MainGoal0_116 = ((MR_Word) ((MR_hl_field(1, ShortHand0_111, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_117 = ((MR_Word) ((MR_hl_field(1, ShortHand0_111, (MR_Integer) 5))));
                  MR_Word OrElseInners_118 = ((MR_Word) ((MR_hl_field(1, ShortHand0_111, (MR_Integer) 6))));
                  MR_Word MainGoal_119;
                  MR_Word ChangedMain_120;
                  MR_Word OrElseGoals_121;
                  MR_Word ChangedOrElse_122;
                  MR_Word STATE_VARIABLE_Info_176_176;

                  transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(TypeEqvMap_7, MainGoal0_116, &MainGoal_119, &ChangedMain_120, STATE_VARIABLE_Info_0_130, &STATE_VARIABLE_Info_176_176);
                  transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(TypeEqvMap_7, OrElseGoals0_117, &OrElseGoals_121, &ChangedOrElse_122, STATE_VARIABLE_Info_176_176, STATE_VARIABLE_Info_131);
                  succeeded = (ChangedMain_120 == (MR_Integer) 0);
                  if (succeeded)
                    succeeded = (ChangedOrElse_122 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    *Changed_10 = (MR_Integer) 0;
                    *GoalExpr_9 = GoalExpr0_8;
                  }
                  else
                  {
                    MR_Word ShortHand_123;

                    *Changed_10 = (MR_Integer) 1;
                    {
                      ShortHand_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ShortHand_123, 0) = (MR_Box) ((MR_Unsigned) (GoalType_112));
                      MR_hl_field(1, ShortHand_123, 1) = ((MR_Box) (Outer_113));
                      MR_hl_field(1, ShortHand_123, 2) = ((MR_Box) (Inner_114));
                      MR_hl_field(1, ShortHand_123, 3) = ((MR_Box) (MaybeOutputVars_115));
                      MR_hl_field(1, ShortHand_123, 4) = ((MR_Box) (MainGoal_119));
                      MR_hl_field(1, ShortHand_123, 5) = ((MR_Box) (OrElseGoals_121));
                      MR_hl_field(1, ShortHand_123, 6) = ((MR_Box) (OrElseInners_118));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *GoalExpr_9 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (ShortHand_123));
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_124 = ((MR_Word) ((MR_hl_field(2, ShortHand0_111, (MR_Integer) 0))));
                  MR_Word ResultVar_125 = ((MR_Word) ((MR_hl_field(2, ShortHand0_111, (MR_Integer) 1))));
                  MR_Word SubGoal0_126 = ((MR_Word) ((MR_hl_field(2, ShortHand0_111, (MR_Integer) 2))));
                  MR_Word SubGoal_127;

                  transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(TypeEqvMap_7, SubGoal0_126, &SubGoal_127, Changed_10, STATE_VARIABLE_Info_0_130, STATE_VARIABLE_Info_131);
                  switch (*Changed_10) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word ShortHand_211;

                        {
                          ShortHand_211 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, ShortHand_211, 0) = ((MR_Box) (MaybeIO_124));
                          MR_hl_field(2, ShortHand_211, 1) = ((MR_Box) (ResultVar_125));
                          MR_hl_field(2, ShortHand_211, 2) = ((MR_Box) (SubGoal_127));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *GoalExpr_9 = base;
                          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                          MR_hl_field(3, base, 1) = ((MR_Box) (ShortHand_211));
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      *GoalExpr_9 = GoalExpr0_8;
                      break;
                  }
                }
                break;
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Acc_0_5,
  MR_Word * STATE_VARIABLE_Acc_6)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Integer) 0;
    *STATE_VARIABLE_Acc_6 = STATE_VARIABLE_Acc_0_5;
  }
  else
  {
    MR_Word Goal0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goals_18;
    MR_Word TailChanged_19;
    MR_Word Goal_20;
    MR_Word HeadChanged_21;
    MR_Word STATE_VARIABLE_Acc_24_24;

    transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(HeadVar__1_1, Goals0_14, &Goals_18, &TailChanged_19, STATE_VARIABLE_Acc_0_5, &STATE_VARIABLE_Acc_24_24);
    transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(HeadVar__1_1, Goal0_13, &Goal_20, &HeadChanged_21, STATE_VARIABLE_Acc_24_24, STATE_VARIABLE_Acc_6);
    succeeded = (TailChanged_19 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (HeadChanged_21 == (MR_Integer) 0);
    if (succeeded)
    {
      *HeadVar__4_4 = (MR_Integer) 0;
      *HeadVar__3_3 = HeadVar__2_2;
    }
    else
    {
      *HeadVar__4_4 = (MR_Integer) 1;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_20));
        MR_hl_field(1, base, 1) = ((MR_Box) (Goals_18));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__3_41;
  MR_Tuple conv0_LambdaHeadVar__5_43;

  transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal__1483__1_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_41, ((MR_Tuple) (wrapper_arg_4)), &conv0_LambdaHeadVar__5_43);
  *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_41));
  *wrapper_arg_5 = ((MR_Box) (conv0_LambdaHeadVar__5_43));
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word Goal0_8,
  MR_Word * Goal_9,
  MR_Word * Changed_10,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_8, (MR_Integer) 0))));
  MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_8, (MR_Integer) 1))));
  MR_Word GoalExpr_14;
  MR_Word Changed0_15;
  MR_Word InstMapDelta0_16;
  MR_Word TVarSet0_17;
  MR_Word Cache0_18;
  MR_Word InstMapDelta_29;
  MR_Word TVarSet_30;
  MR_Word Cache_31;
  MR_Word STATE_VARIABLE_Info_35_35;
  MR_Word Var_36;
  MR_Tuple Var_37;
  MR_Tuple Var_38;
  MR_Box conv2_Var_38;

  transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0(TypeEqvMap_7, GoalExpr0_12, &GoalExpr_14, &Changed0_15, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_35_35);
  InstMapDelta0_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_13);
  TVarSet0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 3))));
  Cache0_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 4))));
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_4[2]));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0_1));
    MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_36, 3) = ((MR_Box) (TypeEqvMap_7));
  }
  {
    Var_37 = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (Changed0_15));
    MR_hl_field(0, Var_37, 1) = ((MR_Box) (TVarSet0_17));
    MR_hl_field(0, Var_37, 2) = ((MR_Box) (Cache0_18));
  }
  hlds__instmap__instmap_delta_map_foldl_5_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_3[0]), Var_36, InstMapDelta0_16, &InstMapDelta_29, ((MR_Box) (Var_37)), &conv2_Var_38);
  Var_38 = ((MR_Tuple) (conv2_Var_38));
  *Changed_10 = ((MR_Word) ((MR_hl_field(0, Var_38, (MR_Integer) 0))));
  TVarSet_30 = ((MR_Word) ((MR_hl_field(0, Var_38, (MR_Integer) 1))));
  Cache_31 = ((MR_Word) ((MR_hl_field(0, Var_38, (MR_Integer) 2))));
  switch (*Changed_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word GoalInfo_32;
        MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 0))));
        MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 1))));
        MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 2))));
        MR_Word Var_71 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 5))) & (MR_Integer) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_34 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_66));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_67));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_68));
          MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_30));
          MR_hl_field(0, base, 4) = ((MR_Box) (Cache_31));
          MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_71));
        }
        hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_29, GoalInfo0_13, &GoalInfo_32);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_9 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_14));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_32));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        *Goal_9 = Goal0_8;
        *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_35_35;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_TVarSet_0_5,
  MR_Word * STATE_VARIABLE_TVarSet_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
    *STATE_VARIABLE_TVarSet_6 = STATE_VARIABLE_TVarSet_0_5;
  }
  else
  {
    MR_Word Arg0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Args0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Arg_24;
    MR_Word HeadChanged_25;
    MR_Word Args_26;
    MR_Word TailChanged_27;
    MR_Word STATE_VARIABLE_TVarSet_32_32;
    MR_Word STATE_VARIABLE_Info_33_33;
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Arg0_18, (MR_Integer) 0))));
    MR_Word NameMode_35 = ((MR_Word) ((MR_hl_field(0, Arg0_18, (MR_Integer) 1))));
    MR_Word Type0_36 = ((MR_Word) ((MR_hl_field(0, Arg0_18, (MR_Integer) 2))));
    MR_Word BoxPolicy_37 = ((MR_Unsigned) ((MR_hl_field(0, Arg0_18, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word Type_38;

    parse_tree__equiv_type__replace_in_type_8_p_0(HeadVar__1_1, Type0_36, &Type_38, &HeadChanged_25, STATE_VARIABLE_TVarSet_0_5, &STATE_VARIABLE_TVarSet_32_32, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_33_33);
    switch (HeadChanged_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Arg_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg_24, 0) = ((MR_Box) (Var_34));
          MR_hl_field(0, Arg_24, 1) = ((MR_Box) (NameMode_35));
          MR_hl_field(0, Arg_24, 2) = ((MR_Box) (Type_38));
          MR_hl_field(0, Arg_24, 3) = (MR_Box) ((MR_Unsigned) (BoxPolicy_37));
        }
        break;
      case (MR_Integer) 0:
        Arg_24 = Arg0_18;
        break;
    }
    transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(HeadVar__1_1, Args0_19, &Args_26, &TailChanged_27, STATE_VARIABLE_TVarSet_32_32, STATE_VARIABLE_TVarSet_6, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_8);
    succeeded = (HeadChanged_25 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (TailChanged_27 == (MR_Integer) 0);
    if (succeeded)
    {
      *HeadVar__4_4 = (MR_Integer) 0;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Arg_24));
        MR_hl_field(1, base, 1) = ((MR_Box) (Args_26));
      }
    }
    else
    {
      *HeadVar__4_4 = (MR_Integer) 1;
      *HeadVar__3_3 = HeadVar__2_2;
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unification_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word Uni0_8,
  MR_Word * Uni_9,
  MR_Word * Changed_10,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  switch (MR_tag((MR_Word) Uni0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ArgModes0_27 = ((MR_Word) ((MR_hl_field(0, Uni0_8, (MR_Integer) 3))));
        MR_Word ArgModes_28;

        transform_hlds__equiv_type_hlds__replace_in_unify_modes_6_p_0(TypeEqvMap_7, ArgModes0_27, &ArgModes_28, Changed_10, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
        switch (*Changed_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Uni0_8, (MR_Integer) 0))));
              MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Uni0_8, (MR_Integer) 1))));
              MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Uni0_8, (MR_Integer) 2))));
              MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Uni0_8, (MR_Integer) 4))));
              MR_Word Var_50 = ((MR_Unsigned) ((MR_hl_field(0, Uni0_8, (MR_Integer) 5))) & (MR_Integer) 1);
              MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Uni0_8, (MR_Integer) 6))));

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                *Uni_9 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_45));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_46));
                MR_hl_field(0, base, 2) = ((MR_Box) (Var_47));
                MR_hl_field(0, base, 3) = ((MR_Box) (ArgModes_28));
                MR_hl_field(0, base, 4) = ((MR_Box) (Var_49));
                MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_50));
                MR_hl_field(0, base, 6) = ((MR_Box) (Var_51));
              }
            }
            break;
          case (MR_Integer) 0:
            *Uni_9 = Uni0_8;
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word UnifyModes0_35 = ((MR_Word) ((MR_hl_field(1, Uni0_8, (MR_Integer) 3))));
        MR_Word UnifyModes_36;

        transform_hlds__equiv_type_hlds__replace_in_unify_modes_6_p_0(TypeEqvMap_7, UnifyModes0_35, &UnifyModes_36, Changed_10, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
        switch (*Changed_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Var_57 = ((MR_Word) ((MR_hl_field(1, Uni0_8, (MR_Integer) 0))));
              MR_Word Var_58 = ((MR_Word) ((MR_hl_field(1, Uni0_8, (MR_Integer) 1))));
              MR_Word Var_59 = ((MR_Word) ((MR_hl_field(1, Uni0_8, (MR_Integer) 2))));
              MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(1, Uni0_8, (MR_Integer) 4)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                *Uni_9 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_57));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_58));
                MR_hl_field(1, base, 2) = ((MR_Box) (Var_59));
                MR_hl_field(1, base, 3) = ((MR_Box) (UnifyModes_36));
                MR_hl_field(1, base, 4) = (MR_Box) (packed_word_4);
              }
            }
            break;
          case (MR_Integer) 0:
            *Uni_9 = Uni0_8;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        *Uni_9 = Uni0_8;
        *Changed_10 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Uni0_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Uni_9 = Uni0_8;
            *Changed_10 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word UnifyMode0_16 = ((MR_Word) ((MR_hl_field(3, Uni0_8, (MR_Integer) 1))));
            MR_Word B_17 = ((MR_Unsigned) ((MR_hl_field(3, Uni0_8, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word C_18 = ((MR_Word) ((MR_hl_field(3, Uni0_8, (MR_Integer) 3))));
            MR_Word UnifyMode_19;

            transform_hlds__equiv_type_hlds__replace_in_unify_mode_6_p_0(TypeEqvMap_7, UnifyMode0_16, &UnifyMode_19, Changed_10, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
            switch (*Changed_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Uni_9 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (UnifyMode_19));
                  MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (B_17));
                  MR_hl_field(3, base, 3) = ((MR_Box) (C_18));
                }
                break;
              case (MR_Integer) 0:
                *Uni_9 = Uni0_8;
                break;
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unify_modes_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word UnifyMode0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word UnifyModes0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word UnifyMode_18;
    MR_Word HeadChanged_19;
    MR_Word UnifyModes_20;
    MR_Word TailChanged_21;
    MR_Word STATE_VARIABLE_Info_24_24;
    MR_Word LHSInitInst0_25 = ((MR_Word) ((MR_hl_field(0, UnifyMode0_13, (MR_Integer) 0))));
    MR_Word LHSFinalInst0_26 = ((MR_Word) ((MR_hl_field(0, UnifyMode0_13, (MR_Integer) 1))));
    MR_Word RHSInitInst0_27 = ((MR_Word) ((MR_hl_field(0, UnifyMode0_13, (MR_Integer) 2))));
    MR_Word RHSFinalInst0_28 = ((MR_Word) ((MR_hl_field(0, UnifyMode0_13, (MR_Integer) 3))));
    MR_Word LHSInitInst_29;
    MR_Word ChangedA_30;
    MR_Word LHSFinalInst_31;
    MR_Word ChangedB_32;
    MR_Word RHSInitInst_33;
    MR_Word ChangedC_34;
    MR_Word RHSFinalInst_35;
    MR_Word ChangedD_36;
    MR_Word STATE_VARIABLE_TVarSet_28_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 3))));
    MR_Word STATE_VARIABLE_Cache_29_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 4))));
    MR_Word STATE_VARIABLE_TVarSet_30_39;
    MR_Word STATE_VARIABLE_Cache_31_40;
    MR_Word STATE_VARIABLE_TVarSet_32_41;
    MR_Word STATE_VARIABLE_Cache_33_42;
    MR_Word STATE_VARIABLE_TVarSet_34_43;
    MR_Word STATE_VARIABLE_Cache_35_44;
    MR_Word STATE_VARIABLE_TVarSet_36_45;
    MR_Word STATE_VARIABLE_Cache_37_46;

    transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(HeadVar__1_1, LHSInitInst0_25, &LHSInitInst_29, &ChangedA_30, STATE_VARIABLE_TVarSet_28_37, &STATE_VARIABLE_TVarSet_30_39, STATE_VARIABLE_Cache_29_38, &STATE_VARIABLE_Cache_31_40);
    transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(HeadVar__1_1, LHSFinalInst0_26, &LHSFinalInst_31, &ChangedB_32, STATE_VARIABLE_TVarSet_30_39, &STATE_VARIABLE_TVarSet_32_41, STATE_VARIABLE_Cache_31_40, &STATE_VARIABLE_Cache_33_42);
    transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(HeadVar__1_1, RHSInitInst0_27, &RHSInitInst_33, &ChangedC_34, STATE_VARIABLE_TVarSet_32_41, &STATE_VARIABLE_TVarSet_34_43, STATE_VARIABLE_Cache_33_42, &STATE_VARIABLE_Cache_35_44);
    transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(HeadVar__1_1, RHSFinalInst0_28, &RHSFinalInst_35, &ChangedD_36, STATE_VARIABLE_TVarSet_34_43, &STATE_VARIABLE_TVarSet_36_45, STATE_VARIABLE_Cache_35_44, &STATE_VARIABLE_Cache_37_46);
    succeeded = (ChangedA_30 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (ChangedB_32 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (ChangedC_34 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (ChangedD_36 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
      HeadChanged_19 = (MR_Integer) 0;
      UnifyMode_18 = UnifyMode0_13;
      STATE_VARIABLE_Info_24_24 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_63;

      HeadChanged_19 = (MR_Integer) 1;
      Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 0))));
      Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
      Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 2))));
      Var_63 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 5))) & (MR_Integer) 1);
      {
        STATE_VARIABLE_Info_24_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_24_24, 0) = ((MR_Box) (Var_58));
        MR_hl_field(0, STATE_VARIABLE_Info_24_24, 1) = ((MR_Box) (Var_59));
        MR_hl_field(0, STATE_VARIABLE_Info_24_24, 2) = ((MR_Box) (Var_60));
        MR_hl_field(0, STATE_VARIABLE_Info_24_24, 3) = ((MR_Box) (STATE_VARIABLE_TVarSet_36_45));
        MR_hl_field(0, STATE_VARIABLE_Info_24_24, 4) = ((MR_Box) (STATE_VARIABLE_Cache_37_46));
        MR_hl_field(0, STATE_VARIABLE_Info_24_24, 5) = (MR_Box) ((MR_Unsigned) (Var_63));
      }
      {
        UnifyMode_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, UnifyMode_18, 0) = ((MR_Box) (LHSInitInst_29));
        MR_hl_field(0, UnifyMode_18, 1) = ((MR_Box) (LHSFinalInst_31));
        MR_hl_field(0, UnifyMode_18, 2) = ((MR_Box) (RHSInitInst_33));
        MR_hl_field(0, UnifyMode_18, 3) = ((MR_Box) (RHSFinalInst_35));
      }
    }
    transform_hlds__equiv_type_hlds__replace_in_unify_modes_6_p_0(HeadVar__1_1, UnifyModes0_14, &UnifyModes_20, &TailChanged_21, STATE_VARIABLE_Info_24_24, STATE_VARIABLE_Info_6);
    succeeded = (HeadChanged_19 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (TailChanged_21 == (MR_Integer) 0);
    if (succeeded)
    {
      *HeadVar__4_4 = (MR_Integer) 0;
      *HeadVar__3_3 = HeadVar__2_2;
    }
    else
    {
      *HeadVar__4_4 = (MR_Integer) 1;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (UnifyMode_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (UnifyModes_20));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unify_mode_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word UnifyMode0_8,
  MR_Word * UnifyMode_9,
  MR_Word * Changed_10,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  MR_bool succeeded;
  MR_Word LHSInitInst0_12 = ((MR_Word) ((MR_hl_field(0, UnifyMode0_8, (MR_Integer) 0))));
  MR_Word LHSFinalInst0_13 = ((MR_Word) ((MR_hl_field(0, UnifyMode0_8, (MR_Integer) 1))));
  MR_Word RHSInitInst0_14 = ((MR_Word) ((MR_hl_field(0, UnifyMode0_8, (MR_Integer) 2))));
  MR_Word RHSFinalInst0_15 = ((MR_Word) ((MR_hl_field(0, UnifyMode0_8, (MR_Integer) 3))));
  MR_Word LHSInitInst_18;
  MR_Word ChangedA_19;
  MR_Word LHSFinalInst_20;
  MR_Word ChangedB_21;
  MR_Word RHSInitInst_22;
  MR_Word ChangedC_23;
  MR_Word RHSFinalInst_24;
  MR_Word ChangedD_25;
  MR_Word STATE_VARIABLE_TVarSet_28_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, (MR_Integer) 3))));
  MR_Word STATE_VARIABLE_Cache_29_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, (MR_Integer) 4))));
  MR_Word STATE_VARIABLE_TVarSet_30_30;
  MR_Word STATE_VARIABLE_Cache_31_31;
  MR_Word STATE_VARIABLE_TVarSet_32_32;
  MR_Word STATE_VARIABLE_Cache_33_33;
  MR_Word STATE_VARIABLE_TVarSet_34_34;
  MR_Word STATE_VARIABLE_Cache_35_35;
  MR_Word STATE_VARIABLE_TVarSet_36_36;
  MR_Word STATE_VARIABLE_Cache_37_37;

  transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_7, LHSInitInst0_12, &LHSInitInst_18, &ChangedA_19, STATE_VARIABLE_TVarSet_28_28, &STATE_VARIABLE_TVarSet_30_30, STATE_VARIABLE_Cache_29_29, &STATE_VARIABLE_Cache_31_31);
  transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_7, LHSFinalInst0_13, &LHSFinalInst_20, &ChangedB_21, STATE_VARIABLE_TVarSet_30_30, &STATE_VARIABLE_TVarSet_32_32, STATE_VARIABLE_Cache_31_31, &STATE_VARIABLE_Cache_33_33);
  transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_7, RHSInitInst0_14, &RHSInitInst_22, &ChangedC_23, STATE_VARIABLE_TVarSet_32_32, &STATE_VARIABLE_TVarSet_34_34, STATE_VARIABLE_Cache_33_33, &STATE_VARIABLE_Cache_35_35);
  transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_7, RHSFinalInst0_15, &RHSFinalInst_24, &ChangedD_25, STATE_VARIABLE_TVarSet_34_34, &STATE_VARIABLE_TVarSet_36_36, STATE_VARIABLE_Cache_35_35, &STATE_VARIABLE_Cache_37_37);
  succeeded = (ChangedA_19 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (ChangedB_21 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (ChangedC_23 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (ChangedD_25 == (MR_Integer) 0);
    }
  }
  if (succeeded)
  {
    *Changed_10 = (MR_Integer) 0;
    *UnifyMode_9 = UnifyMode0_8;
    *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
  }
  else
  {
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_54;

    *Changed_10 = (MR_Integer) 1;
    Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, (MR_Integer) 0))));
    Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, (MR_Integer) 1))));
    Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, (MR_Integer) 2))));
    Var_54 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, (MR_Integer) 5))) & (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_27 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_49));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_50));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_51));
      MR_hl_field(0, base, 3) = ((MR_Box) (STATE_VARIABLE_TVarSet_36_36));
      MR_hl_field(0, base, 4) = ((MR_Box) (STATE_VARIABLE_Cache_37_37));
      MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_54));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *UnifyMode_9 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (LHSInitInst_18));
      MR_hl_field(0, base, 1) = ((MR_Box) (LHSFinalInst_20));
      MR_hl_field(0, base, 2) = ((MR_Box) (RHSInitInst_22));
      MR_hl_field(0, base, 3) = ((MR_Box) (RHSFinalInst_24));
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_ProcInfo_40;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_42;
  MR_Word conv1_STATE_VARIABLE_PredInfo_44;
  MR_Word conv0_STATE_VARIABLE_Cache_46;

  transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_STATE_VARIABLE_ProcInfo_40, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_ModuleInfo_42, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_PredInfo_44, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Cache_46);
  *wrapper_arg_2 = ((MR_Box) (conv3_STATE_VARIABLE_ProcInfo_40));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_42));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_PredInfo_44));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_46));
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36,
  MR_Word STATE_VARIABLE_Cache_0_37,
  MR_Word * STATE_VARIABLE_Cache_38)
{
  MR_Word ModuleName_13;
  MR_Word MaybeRecompInfo0_14;
  MR_String PredName_15;
  MR_Word ArgTVarSet0_16;
  MR_Word ExistQVars_17;
  MR_Word ArgTypes0_18;
  MR_Word ArgTypes_19;
  MR_Word ArgTVarSet1_21;
  MR_Word ClassContext0_22;
  MR_Word ClassContext_23;
  MR_Word ArgTVarSet_24;
  MR_Word PredOrFunc_25;
  MR_Word ItemType_26;
  MR_Word PredModuleName_27;
  MR_Word PredSymName_28;
  MR_Integer PredFormArity_29;
  MR_Word ItemName_30;
  MR_Word ItemId_31;
  MR_Word MaybeRecompInfo_32;
  MR_Word ProcMap0_33;
  MR_Word ProcMap_34;
  MR_Word STATE_VARIABLE_PredInfo_39_39;
  MR_Word Var_40;
  MR_Word STATE_VARIABLE_EquivTypeInfo_41_41;
  MR_Word STATE_VARIABLE_EquivTypeInfo_42_42;
  MR_Word STATE_VARIABLE_EquivTypeInfo_43_43;
  MR_Word STATE_VARIABLE_PredInfo_44_44;
  MR_Word STATE_VARIABLE_PredInfo_45_45;
  MR_Word STATE_VARIABLE_ModuleInfo_46_46;
  MR_Word Var_47;
  MR_Word STATE_VARIABLE_ModuleInfo_48_48;
  MR_Word STATE_VARIABLE_PredInfo_49_49;
  MR_Word STATE_VARIABLE_PredInfo_51_51;
  MR_Word Var_20;
  MR_Box conv6_STATE_VARIABLE_ModuleInfo_48_48;
  MR_Box conv5_STATE_VARIABLE_PredInfo_49_49;
  MR_Box conv4_STATE_VARIABLE_Cache_38;

  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_35, &ModuleName_13);
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_35, PredId_8, &STATE_VARIABLE_PredInfo_39_39);
  hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_35, &MaybeRecompInfo0_14);
  PredName_15 = hlds__hlds_pred__pred_info_name_1_f_0(STATE_VARIABLE_PredInfo_39_39);
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (ModuleName_13));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (PredName_15));
  }
  recompilation__maybe_start_recording_expanded_items_4_p_0(ModuleName_13, Var_40, MaybeRecompInfo0_14, &STATE_VARIABLE_EquivTypeInfo_41_41);
  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(STATE_VARIABLE_PredInfo_39_39, &ArgTVarSet0_16, &ExistQVars_17, &ArgTypes0_18);
  parse_tree__equiv_type__replace_in_type_list_8_p_0(TypeEqvMap_7, ArgTypes0_18, &ArgTypes_19, &Var_20, ArgTVarSet0_16, &ArgTVarSet1_21, STATE_VARIABLE_EquivTypeInfo_41_41, &STATE_VARIABLE_EquivTypeInfo_42_42);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(STATE_VARIABLE_PredInfo_39_39, &ClassContext0_22);
  parse_tree__equiv_type__replace_in_prog_constraints_7_p_0(TypeEqvMap_7, ClassContext0_22, &ClassContext_23, ArgTVarSet1_21, &ArgTVarSet_24, STATE_VARIABLE_EquivTypeInfo_42_42, &STATE_VARIABLE_EquivTypeInfo_43_43);
  hlds__hlds_pred__pred_info_set_class_context_3_p_0(ClassContext_23, STATE_VARIABLE_PredInfo_39_39, &STATE_VARIABLE_PredInfo_44_44);
  hlds__hlds_pred__pred_info_set_arg_types_5_p_0(ArgTVarSet_24, ExistQVars_17, ArgTypes_19, STATE_VARIABLE_PredInfo_44_44, &STATE_VARIABLE_PredInfo_45_45);
  PredOrFunc_25 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(STATE_VARIABLE_PredInfo_45_45);
  ItemType_26 = recompilation__pred_or_func_to_recomp_item_type_1_f_0(PredOrFunc_25);
  PredModuleName_27 = hlds__hlds_pred__pred_info_module_1_f_0(STATE_VARIABLE_PredInfo_45_45);
  {
    PredSymName_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_28, 0) = ((MR_Box) (PredModuleName_27));
    MR_hl_field(1, PredSymName_28, 1) = ((MR_Box) (PredName_15));
  }
  PredFormArity_29 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(STATE_VARIABLE_PredInfo_45_45);
  {
    ItemName_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_30, 0) = ((MR_Box) (PredSymName_28));
    MR_hl_field(0, ItemName_30, 1) = ((MR_Box) (PredFormArity_29));
  }
  {
    ItemId_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_31, 0) = (MR_Box) ((MR_Unsigned) (ItemType_26));
    MR_hl_field(0, ItemId_31, 1) = ((MR_Box) (ItemName_30));
  }
  recompilation__finish_recording_expanded_items_4_p_0(ItemId_31, STATE_VARIABLE_EquivTypeInfo_43_43, MaybeRecompInfo0_14, &MaybeRecompInfo_32);
  hlds__hlds_module__module_info_set_maybe_recompilation_info_3_p_0(MaybeRecompInfo_32, STATE_VARIABLE_ModuleInfo_0_35, &STATE_VARIABLE_ModuleInfo_46_46);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_45_45, &ProcMap0_33);
  {
    Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_47, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_7[1]));
    MR_hl_field(0, Var_47, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0_1));
    MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_47, 3) = ((MR_Box) (TypeEqvMap_7));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[1]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), Var_47, ProcMap0_33, &ProcMap_34, ((MR_Box) (STATE_VARIABLE_ModuleInfo_46_46)), &conv6_STATE_VARIABLE_ModuleInfo_48_48, ((MR_Box) (STATE_VARIABLE_PredInfo_45_45)), &conv5_STATE_VARIABLE_PredInfo_49_49, ((MR_Box) (STATE_VARIABLE_Cache_0_37)), &conv4_STATE_VARIABLE_Cache_38);
  STATE_VARIABLE_ModuleInfo_48_48 = ((MR_Word) (conv6_STATE_VARIABLE_ModuleInfo_48_48));
  STATE_VARIABLE_PredInfo_49_49 = ((MR_Word) (conv5_STATE_VARIABLE_PredInfo_49_49));
  *STATE_VARIABLE_Cache_38 = ((MR_Word) (conv4_STATE_VARIABLE_Cache_38));
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcMap_34, STATE_VARIABLE_PredInfo_49_49, &STATE_VARIABLE_PredInfo_51_51);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_8, STATE_VARIABLE_PredInfo_51_51, STATE_VARIABLE_ModuleInfo_48_48, STATE_VARIABLE_ModuleInfo_36);
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_constructor_arg_5_p_0(
  MR_Word TypeEqvMap_6,
  MR_Word CtorArg0_7,
  MR_Word * CtorArg_8,
  MR_Word STATE_VARIABLE_TVarSet_0_16,
  MR_Word * STATE_VARIABLE_TVarSet_17)
{
  MR_Word MaybeFieldName_10 = ((MR_Word) ((MR_hl_field(0, CtorArg0_7, (MR_Integer) 0))));
  MR_Word Type0_11 = ((MR_Word) ((MR_hl_field(0, CtorArg0_7, (MR_Integer) 1))));
  MR_Word Context_12 = ((MR_Word) ((MR_hl_field(0, CtorArg0_7, (MR_Integer) 2))));
  MR_Word Type_13;
  MR_Word Changed_14;
  MR_Word Var_15;

  parse_tree__equiv_type__replace_in_type_8_p_0(TypeEqvMap_6, Type0_11, &Type_13, &Changed_14, STATE_VARIABLE_TVarSet_0_16, STATE_VARIABLE_TVarSet_17, (MR_Word) ((MR_Unsigned) 0U), &Var_15);
  switch (Changed_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *CtorArg_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (MaybeFieldName_10));
        MR_hl_field(0, base, 1) = ((MR_Box) (Type_13));
        MR_hl_field(0, base, 2) = ((MR_Box) (Context_12));
      }
      break;
    case (MR_Integer) 0:
      *CtorArg_8 = CtorArg0_7;
      break;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_CtorArg_8;
  MR_Word conv0_STATE_VARIABLE_TVarSet_17;

  transform_hlds__equiv_type_hlds__replace_in_constructor_arg_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_CtorArg_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TVarSet_17);
  *wrapper_arg_2 = ((MR_Box) (conv1_CtorArg_8));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TVarSet_17));
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0(
  MR_Word TypeEqvMap_4,
  MR_Word ConsDefn0_5,
  MR_Word * ConsDefn_6)
{
  MR_Word TypeCtor_7 = ((MR_Word) ((MR_hl_field(0, ConsDefn0_5, (MR_Integer) 0))));
  MR_Word TVarSet0_8 = ((MR_Word) ((MR_hl_field(0, ConsDefn0_5, (MR_Integer) 1))));
  MR_Word TypeParams_9 = ((MR_Word) ((MR_hl_field(0, ConsDefn0_5, (MR_Integer) 2))));
  MR_Word KindMap_10 = ((MR_Word) ((MR_hl_field(0, ConsDefn0_5, (MR_Integer) 3))));
  MR_Word MaybeExistConstraints_11 = ((MR_Word) ((MR_hl_field(0, ConsDefn0_5, (MR_Integer) 4))));
  MR_Word ConstructorArgs0_12 = ((MR_Word) ((MR_hl_field(0, ConsDefn0_5, (MR_Integer) 5))));
  MR_Word Context_13 = ((MR_Word) ((MR_hl_field(0, ConsDefn0_5, (MR_Integer) 6))));
  MR_Word ConstructorArgs_14;
  MR_Word TVarSet_15;
  MR_Word Var_16;
  MR_Box conv2_TVarSet_15;

  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_8[0]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (TypeEqvMap_4));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[3]), Var_16, ConstructorArgs0_12, &ConstructorArgs_14, ((MR_Box) (TVarSet0_8)), &conv2_TVarSet_15);
  TVarSet_15 = ((MR_Word) (conv2_TVarSet_15));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *ConsDefn_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TypeCtor_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (TVarSet_15));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeParams_9));
    MR_hl_field(0, base, 3) = ((MR_Box) (KindMap_10));
    MR_hl_field(0, base, 4) = ((MR_Box) (MaybeExistConstraints_11));
    MR_hl_field(0, base, 5) = ((MR_Box) (ConstructorArgs_14));
    MR_hl_field(0, base, 6) = ((MR_Box) (Context_13));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_ctor_arg_repn_7_p_0(
  MR_Word TypeEqvMap_8,
  MR_Word CtorArgRepn0_9,
  MR_Word * CtorArgRepn_10,
  MR_Word STATE_VARIABLE_TVarSet_0_19,
  MR_Word * STATE_VARIABLE_TVarSet_20,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_21,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_22)
{
  MR_Word Name_13 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn0_9, (MR_Integer) 0))));
  MR_Word Type0_14 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn0_9, (MR_Integer) 1))));
  MR_Word Width_15 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn0_9, (MR_Integer) 2))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn0_9, (MR_Integer) 3))));
  MR_Word Type_17;
  MR_Word Changed_18;

  parse_tree__equiv_type__replace_in_type_8_p_0(TypeEqvMap_8, Type0_14, &Type_17, &Changed_18, STATE_VARIABLE_TVarSet_0_19, STATE_VARIABLE_TVarSet_20, STATE_VARIABLE_EquivTypeInfo_0_21, STATE_VARIABLE_EquivTypeInfo_22);
  switch (Changed_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *CtorArgRepn_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Name_13));
        MR_hl_field(0, base, 1) = ((MR_Box) (Type_17));
        MR_hl_field(0, base, 2) = ((MR_Box) (Width_15));
        MR_hl_field(0, base, 3) = ((MR_Box) (Context_16));
      }
      break;
    case (MR_Integer) 0:
      *CtorArgRepn_10 = CtorArgRepn0_9;
      break;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_ctor_repn_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_CtorArgRepn_10;
  MR_Word conv1_STATE_VARIABLE_TVarSet_20;
  MR_Word conv0_STATE_VARIABLE_EquivTypeInfo_22;

  transform_hlds__equiv_type_hlds__replace_in_ctor_arg_repn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_CtorArgRepn_10, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_TVarSet_20, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_EquivTypeInfo_22);
  *wrapper_arg_2 = ((MR_Box) (conv2_CtorArgRepn_10));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_TVarSet_20));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_EquivTypeInfo_22));
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_ctor_repn_9_p_0(
  MR_Word TypeEqvMap_10,
  MR_Word CtorRepn0_11,
  MR_Word * CtorRepn_12,
  MR_Word STATE_VARIABLE_CtorNameToRepnMap_0_32,
  MR_Word * STATE_VARIABLE_CtorNameToRepnMap_33,
  MR_Word STATE_VARIABLE_TVarSet_0_34,
  MR_Word * STATE_VARIABLE_TVarSet_35,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_36,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_37)
{
  uint32_t Ordinal_16 = ((uint32_t) (MR_Word) (MR_hl_field(0, CtorRepn0_11, (MR_Integer) 0)));
  MR_Word MaybeExistConstraints0_17 = ((MR_Word) ((MR_hl_field(0, CtorRepn0_11, (MR_Integer) 1))));
  MR_Word CtorName_18 = ((MR_Word) ((MR_hl_field(0, CtorRepn0_11, (MR_Integer) 2))));
  MR_Word Tag_19 = ((MR_Word) ((MR_hl_field(0, CtorRepn0_11, (MR_Integer) 3))));
  MR_Word CtorArgRepns0_20 = ((MR_Word) ((MR_hl_field(0, CtorRepn0_11, (MR_Integer) 4))));
  MR_Integer Arity_21 = ((MR_Integer) ((MR_hl_field(0, CtorRepn0_11, (MR_Integer) 5))));
  MR_Word Context_22 = ((MR_Word) ((MR_hl_field(0, CtorRepn0_11, (MR_Integer) 6))));
  MR_Word CtorArgRepns_23;
  MR_Word MaybeExistConstraints_24;
  MR_Word Var_38;
  MR_Word STATE_VARIABLE_TVarSet_39_39;
  MR_Word STATE_VARIABLE_EquivTypeInfo_40_40;
  MR_Box conv4_STATE_VARIABLE_TVarSet_39_39;
  MR_Box conv3_STATE_VARIABLE_EquivTypeInfo_40_40;

  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_6[1]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_ctor_repn_9_p_0_1));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (TypeEqvMap_10));
  }
  mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[3]), (MR_Word) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0), Var_38, CtorArgRepns0_20, &CtorArgRepns_23, ((MR_Box) (STATE_VARIABLE_TVarSet_0_34)), &conv4_STATE_VARIABLE_TVarSet_39_39, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_36)), &conv3_STATE_VARIABLE_EquivTypeInfo_40_40);
  STATE_VARIABLE_TVarSet_39_39 = ((MR_Word) (conv4_STATE_VARIABLE_TVarSet_39_39));
  STATE_VARIABLE_EquivTypeInfo_40_40 = ((MR_Word) (conv3_STATE_VARIABLE_EquivTypeInfo_40_40));
  if ((MaybeExistConstraints0_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeExistConstraints_24 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_TVarSet_35 = STATE_VARIABLE_TVarSet_39_39;
    *STATE_VARIABLE_EquivTypeInfo_37 = STATE_VARIABLE_EquivTypeInfo_40_40;
  }
  else
  {
    MR_Word ExistConstraints0_25 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints0_17), (MR_Integer) 1));
    MR_Word ExistQVars_26 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_25, (MR_Integer) 0))));
    MR_Word Constraints0_27 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_25, (MR_Integer) 1))));
    MR_Word UnconstrainedExistQVars_28 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_25, (MR_Integer) 2))));
    MR_Word ConstrainedExistQVars_29 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_25, (MR_Integer) 3))));
    MR_Word Constraints_30;
    MR_Word ExistConstraints_31;

    parse_tree__equiv_type__replace_in_prog_constraint_list_7_p_0(TypeEqvMap_10, Constraints0_27, &Constraints_30, STATE_VARIABLE_TVarSet_39_39, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_EquivTypeInfo_40_40, STATE_VARIABLE_EquivTypeInfo_37);
    {
      ExistConstraints_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ExistConstraints_31, 0) = ((MR_Box) (ExistQVars_26));
      MR_hl_field(0, ExistConstraints_31, 1) = ((MR_Box) (Constraints_30));
      MR_hl_field(0, ExistConstraints_31, 2) = ((MR_Box) (UnconstrainedExistQVars_28));
      MR_hl_field(0, ExistConstraints_31, 3) = ((MR_Box) (ConstrainedExistQVars_29));
    }
    MaybeExistConstraints_24 = (MR_Word) (MR_mkword(1, (MR_Word) (ExistConstraints_31)));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *CtorRepn_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MR_Word) (Ordinal_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeExistConstraints_24));
    MR_hl_field(0, base, 2) = ((MR_Box) (CtorName_18));
    MR_hl_field(0, base, 3) = ((MR_Box) (Tag_19));
    MR_hl_field(0, base, 4) = ((MR_Box) (CtorArgRepns_23));
    MR_hl_field(0, base, 5) = ((MR_Box) (Arity_21));
    MR_hl_field(0, base, 6) = ((MR_Box) (Context_22));
  }
  hlds__hlds_data__insert_ctor_repn_into_map_3_p_0(*CtorRepn_12, STATE_VARIABLE_CtorNameToRepnMap_0_32, STATE_VARIABLE_CtorNameToRepnMap_33);
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_type_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_CtorRepn_12;
  MR_Word conv2_STATE_VARIABLE_CtorNameToRepnMap_33;
  MR_Word conv1_STATE_VARIABLE_TVarSet_35;
  MR_Word conv0_STATE_VARIABLE_EquivTypeInfo_37;

  transform_hlds__equiv_type_hlds__replace_in_ctor_repn_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_CtorRepn_12, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_CtorNameToRepnMap_33, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_TVarSet_35, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_EquivTypeInfo_37);
  *wrapper_arg_2 = ((MR_Box) (conv3_CtorRepn_12));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_CtorNameToRepnMap_33));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_TVarSet_35));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_EquivTypeInfo_37));
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_type_defn_7_p_0(
  MR_Word ModuleName_8,
  MR_Word TypeEqvMap_9,
  MR_Word TypeCtor_10,
  MR_Word STATE_VARIABLE_Defn_0_63,
  MR_Word * STATE_VARIABLE_Defn_64,
  MR_Word STATE_VARIABLE_MaybeRecompInfo_0_65,
  MR_Word * STATE_VARIABLE_MaybeRecompInfo_66)
{
  MR_Word TVarSet0_13;
  MR_Word Body0_14;
  MR_Word TypeCtorSymName_15;
  MR_Word TypeCtorItem_17;
  MR_Word EquivTypeInfo0_18;
  MR_Word TVarSet_33;
  MR_Word EquivTypeInfo_34;
  MR_Word Body_45;
  MR_Word ItemId_62;
  MR_Word STATE_VARIABLE_Defn_71_71;

  hlds__hlds_data__get_type_defn_tvarset_2_p_0(STATE_VARIABLE_Defn_0_63, &TVarSet0_13);
  hlds__hlds_data__get_type_defn_body_2_p_0(STATE_VARIABLE_Defn_0_63, &Body0_14);
  TypeCtorSymName_15 = ((MR_Word) ((MR_hl_field(0, TypeCtor_10, (MR_Integer) 0))));
  TypeCtorItem_17 = recompilation__type_ctor_to_recomp_item_name_1_f_0(TypeCtor_10);
  recompilation__maybe_start_recording_expanded_items_4_p_0(ModuleName_8, TypeCtorSymName_15, STATE_VARIABLE_MaybeRecompInfo_0_65, &EquivTypeInfo0_18);
  switch (MR_tag((MR_Word) Body0_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word BodyDu0_19 = (MR_Word) ((MR_Word) (Body0_14));
        MR_Word Ctors0_20 = ((MR_Word) ((MR_hl_field(0, BodyDu0_19, (MR_Integer) 0))));
        MR_Word MaybeSuperType0_21 = ((MR_Word) ((MR_hl_field(0, BodyDu0_19, (MR_Integer) 1))));
        MR_Word MaybeCanonical_22 = ((MR_Word) ((MR_hl_field(0, BodyDu0_19, (MR_Integer) 2))));
        MR_Word MaybeRepn0_23 = ((MR_Word) ((MR_hl_field(0, BodyDu0_19, (MR_Integer) 3))));
        MR_Word MaybeForeign_24 = ((MR_Word) ((MR_hl_field(0, BodyDu0_19, (MR_Integer) 4))));
        MR_Word TVarSet1_27;
        MR_Word MaybeSuperType_28;
        MR_Word Ctors_29;
        MR_Word TVarSet2_30;
        MR_Word EquivTypeInfo1_31;
        MR_Word MaybeRepn_32;
        MR_Word BodyDu_44;

        if ((MaybeSuperType0_21 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeSuperType_28 = (MR_Word) ((MR_Unsigned) 0U);
          TVarSet1_27 = TVarSet0_13;
        }
        else
        {
          MR_Word SuperType0_25 = ((MR_Word) ((MR_hl_field(1, MaybeSuperType0_21, (MR_Integer) 0))));
          MR_Word SuperType_26;
          MR_Word _Changed_86;

          transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(TypeEqvMap_9, (MR_Word) ((MR_Unsigned) 0U), SuperType0_25, &SuperType_26, &_Changed_86, TVarSet0_13, &TVarSet1_27);
          {
            MaybeSuperType_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeSuperType_28, 0) = ((MR_Box) (SuperType_26));
          }
        }
        parse_tree__equiv_type__replace_in_ctors_7_p_0(TypeEqvMap_9, Ctors0_20, &Ctors_29, TVarSet1_27, &TVarSet2_30, EquivTypeInfo0_18, &EquivTypeInfo1_31);
        if ((MaybeRepn0_23 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeRepn_32 = (MR_Word) ((MR_Unsigned) 0U);
          TVarSet_33 = TVarSet2_30;
          EquivTypeInfo_34 = EquivTypeInfo1_31;
        }
        else
        {
          MR_Word Repn0_35 = ((MR_Word) ((MR_hl_field(1, MaybeRepn0_23, (MR_Integer) 0))));
          MR_Word CtorRepns0_36 = ((MR_Word) ((MR_hl_field(0, Repn0_35, (MR_Integer) 0))));
          MR_Word CheaperTagTest_38 = ((MR_Word) ((MR_hl_field(0, Repn0_35, (MR_Integer) 2))));
          MR_Word DuKind_39 = ((MR_Word) ((MR_hl_field(0, Repn0_35, (MR_Integer) 3))));
          MR_Word DirectArgCtors_40 = ((MR_Word) ((MR_hl_field(0, Repn0_35, (MR_Integer) 4))));
          MR_Word CtorRepns_41;
          MR_Word CtorNameToRepnMap_42;
          MR_Word Repn_43;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Box conv6_CtorNameToRepnMap_42;
          MR_Box conv5_TVarSet_33;
          MR_Box conv4_EquivTypeInfo_34;

          {
            Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_67, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_7[0]));
            MR_hl_field(0, Var_67, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_type_defn_7_p_0_1));
            MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_67, 3) = ((MR_Box) (TypeEqvMap_9));
          }
          Var_68 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[2]));
          mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[2]), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[3]), (MR_Word) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0), Var_67, CtorRepns0_36, &CtorRepns_41, ((MR_Box) (Var_68)), &conv6_CtorNameToRepnMap_42, ((MR_Box) (TVarSet2_30)), &conv5_TVarSet_33, ((MR_Box) (EquivTypeInfo1_31)), &conv4_EquivTypeInfo_34);
          CtorNameToRepnMap_42 = ((MR_Word) (conv6_CtorNameToRepnMap_42));
          TVarSet_33 = ((MR_Word) (conv5_TVarSet_33));
          EquivTypeInfo_34 = ((MR_Word) (conv4_EquivTypeInfo_34));
          {
            Repn_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Repn_43, 0) = ((MR_Box) (CtorRepns_41));
            MR_hl_field(0, Repn_43, 1) = ((MR_Box) (CtorNameToRepnMap_42));
            MR_hl_field(0, Repn_43, 2) = ((MR_Box) (CheaperTagTest_38));
            MR_hl_field(0, Repn_43, 3) = ((MR_Box) (DuKind_39));
            MR_hl_field(0, Repn_43, 4) = ((MR_Box) (DirectArgCtors_40));
          }
          {
            MaybeRepn_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeRepn_32, 0) = ((MR_Box) (Repn_43));
          }
        }
        {
          BodyDu_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, BodyDu_44, 0) = ((MR_Box) (Ctors_29));
          MR_hl_field(0, BodyDu_44, 1) = ((MR_Box) (MaybeSuperType_28));
          MR_hl_field(0, BodyDu_44, 2) = ((MR_Box) (MaybeCanonical_22));
          MR_hl_field(0, BodyDu_44, 3) = ((MR_Box) (MaybeRepn_32));
          MR_hl_field(0, BodyDu_44, 4) = ((MR_Box) (MaybeForeign_24));
        }
        Body_45 = (MR_Word) ((MR_Word) (BodyDu_44));
      }
      break;
    case (MR_Integer) 1:
      {
        EquivTypeInfo_34 = EquivTypeInfo0_18;
        Body_45 = Body0_14;
        TVarSet_33 = TVarSet0_13;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Type0_46 = ((MR_Word) ((MR_hl_field(2, Body0_14, (MR_Integer) 0))));
        MR_Word Type_47;
        MR_Word Var_48;

        parse_tree__equiv_type__replace_in_type_8_p_0(TypeEqvMap_9, Type0_46, &Type_47, &Var_48, TVarSet0_13, &TVarSet_33, EquivTypeInfo0_18, &EquivTypeInfo_34);
        {
          Body_45 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Body_45, 0) = ((MR_Box) (Type_47));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Body0_14, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsSolver0_50 = ((MR_Word) ((MR_hl_field(3, Body0_14, (MR_Integer) 1))));
            MR_Word SolverTypeDetails0_51 = ((MR_Word) ((MR_hl_field(0, DetailsSolver0_50, (MR_Integer) 0))));
            MR_Word UserEq_52 = ((MR_Word) ((MR_hl_field(0, DetailsSolver0_50, (MR_Integer) 1))));
            MR_Word RepnType0_53 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails0_51, (MR_Integer) 0))));
            MR_Word GroundInst_54 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails0_51, (MR_Integer) 1))));
            MR_Word AnyInst_55 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails0_51, (MR_Integer) 2))));
            MR_Word MutableItems_56 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails0_51, (MR_Integer) 3))));
            MR_Word RepnType_57;
            MR_Word SolverTypeDetails_59;
            MR_Word DetailsSolver_60;
            MR_Word Var_58;

            parse_tree__equiv_type__replace_in_type_8_p_0(TypeEqvMap_9, RepnType0_53, &RepnType_57, &Var_58, TVarSet0_13, &TVarSet_33, EquivTypeInfo0_18, &EquivTypeInfo_34);
            {
              SolverTypeDetails_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SolverTypeDetails_59, 0) = ((MR_Box) (RepnType_57));
              MR_hl_field(0, SolverTypeDetails_59, 1) = ((MR_Box) (GroundInst_54));
              MR_hl_field(0, SolverTypeDetails_59, 2) = ((MR_Box) (AnyInst_55));
              MR_hl_field(0, SolverTypeDetails_59, 3) = ((MR_Box) (MutableItems_56));
            }
            {
              DetailsSolver_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, DetailsSolver_60, 0) = ((MR_Box) (SolverTypeDetails_59));
              MR_hl_field(0, DetailsSolver_60, 1) = ((MR_Box) (UserEq_52));
            }
            {
              Body_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Body_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Body_45, 1) = ((MR_Box) (DetailsSolver_60));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            EquivTypeInfo_34 = EquivTypeInfo0_18;
            Body_45 = Body0_14;
            TVarSet_33 = TVarSet0_13;
          }
          break;
      }
      break;
  }
  {
    ItemId_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_62, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ItemId_62, 1) = ((MR_Box) (TypeCtorItem_17));
  }
  recompilation__finish_recording_expanded_items_4_p_0(ItemId_62, EquivTypeInfo_34, STATE_VARIABLE_MaybeRecompInfo_0_65, STATE_VARIABLE_MaybeRecompInfo_66);
  hlds__hlds_data__set_type_defn_body_3_p_0(Body_45, STATE_VARIABLE_Defn_0_63, &STATE_VARIABLE_Defn_71_71);
  hlds__hlds_data__set_type_defn_tvarset_3_p_0(TVarSet_33, STATE_VARIABLE_Defn_71_71, STATE_VARIABLE_Defn_64);
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Changed_0_5,
  MR_Word * STATE_VARIABLE_Changed_6,
  MR_Word STATE_VARIABLE_TVarSet_0_7,
  MR_Word * STATE_VARIABLE_TVarSet_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_TVarSet_8 = STATE_VARIABLE_TVarSet_0_7;
    *STATE_VARIABLE_Changed_6 = STATE_VARIABLE_Changed_0_5;
  }
  else
  {
    MR_Word Type0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Types0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Type_21;
    MR_Word Types_22;
    MR_Word TypeChanged_25;
    MR_Word STATE_VARIABLE_TVarSet_30_30;
    MR_Word STATE_VARIABLE_Changed_31_31;

    transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(HeadVar__1_1, HeadVar__2_2, Type0_19, &Type_21, &TypeChanged_25, STATE_VARIABLE_TVarSet_0_7, &STATE_VARIABLE_TVarSet_30_30);
    switch (TypeChanged_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        STATE_VARIABLE_Changed_31_31 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_Changed_31_31 = STATE_VARIABLE_Changed_0_5;
        break;
    }
    transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(HeadVar__1_1, HeadVar__2_2, Types0_20, &Types_22, STATE_VARIABLE_Changed_31_31, STATE_VARIABLE_Changed_6, STATE_VARIABLE_TVarSet_30_30, STATE_VARIABLE_TVarSet_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Type_21));
      MR_hl_field(1, base, 1) = ((MR_Box) (Types_22));
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(
  MR_Word TypeEqvMap_8,
  MR_Word TypeCtorsAlreadyExpanded_9,
  MR_Word Type0_10,
  MR_Word * Type_11,
  MR_Word * Changed_12,
  MR_Word STATE_VARIABLE_TVarSet_0_36,
  MR_Word * STATE_VARIABLE_TVarSet_37)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Type0_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      {
        *Type_11 = Type0_10;
        *Changed_12 = (MR_Integer) 0;
        *STATE_VARIABLE_TVarSet_37 = STATE_VARIABLE_TVarSet_0_36;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName_17 = ((MR_Word) ((MR_hl_field(1, Type0_10, (MR_Integer) 0))));
        MR_Word TypeArgs0_18 = ((MR_Word) ((MR_hl_field(1, Type0_10, (MR_Integer) 1))));
        MR_Word Kind_19 = ((MR_Word) ((MR_hl_field(1, Type0_10, (MR_Integer) 2))));
        MR_Word TypeArgs_20;
        MR_Word ArgsChanged_21;
        MR_Integer Arity_22;
        MR_Word TypeCtor_23;
        MR_Word STATE_VARIABLE_TVarSet_39_39;
        MR_Word AlreadyExpanded_53;
        MR_Word Params0_56;
        MR_Word Body0_57;
        MR_Word Renaming_58;
        MR_Word STATE_VARIABLE_TVarSet_39_67;
        MR_Word EqvTypeBody_54;
        MR_Word EqvVarSet_55;
        MR_Box conv0_EqvTypeBody_54;

        transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(TypeEqvMap_8, TypeCtorsAlreadyExpanded_9, TypeArgs0_18, &TypeArgs_20, (MR_Integer) 0, &ArgsChanged_21, STATE_VARIABLE_TVarSet_0_36, &STATE_VARIABLE_TVarSet_39_39);
        Arity_22 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_20);
        {
          TypeCtor_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtor_23, 0) = ((MR_Box) (SymName_17));
          MR_hl_field(0, TypeCtor_23, 1) = ((MR_Box) (Arity_22));
        }
        succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_23)), TypeCtorsAlreadyExpanded_9);
        if (succeeded)
          AlreadyExpanded_53 = (MR_Integer) 1;
        else
          AlreadyExpanded_53 = (MR_Integer) 0;
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0), TypeEqvMap_8, ((MR_Box) (TypeCtor_23)), &conv0_EqvTypeBody_54);
        if (succeeded)
        {
          EqvTypeBody_54 = ((MR_Word) (conv0_EqvTypeBody_54));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          EqvVarSet_55 = ((MR_Word) ((MR_hl_field(0, EqvTypeBody_54, (MR_Integer) 0))));
          Params0_56 = ((MR_Word) ((MR_hl_field(0, EqvTypeBody_54, (MR_Integer) 1))));
          Body0_57 = ((MR_Word) ((MR_hl_field(0, EqvTypeBody_54, (MR_Integer) 2))));
          parse_tree__prog_data__tvarset_merge_renaming_without_names_4_p_0(STATE_VARIABLE_TVarSet_39_39, EqvVarSet_55, &STATE_VARIABLE_TVarSet_39_67, &Renaming_58);
          succeeded = (AlreadyExpanded_53 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          MR_Word Params_59;
          MR_Word Body1_60;
          MR_Word Subst_61;
          MR_Word Body_62;
          MR_Word TypeCtorsAlreadyExpanded_63;
          MR_Word _BodyChanged_64;

          mercury__map__apply_to_list_3_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[4]), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[4]), Params0_56, Renaming_58, &Params_59);
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(Renaming_58, Body0_57, &Body1_60);
          mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[4]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Params_59, TypeArgs_20, &Subst_61);
          parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_61, Body1_60, &Body_62);
          {
            TypeCtorsAlreadyExpanded_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, TypeCtorsAlreadyExpanded_63, 0) = ((MR_Box) (TypeCtor_23));
            MR_hl_field(1, TypeCtorsAlreadyExpanded_63, 1) = ((MR_Box) (TypeCtorsAlreadyExpanded_9));
          }
          transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(TypeEqvMap_8, TypeCtorsAlreadyExpanded_63, Body_62, Type_11, &_BodyChanged_64, STATE_VARIABLE_TVarSet_39_67, STATE_VARIABLE_TVarSet_37);
          *Changed_12 = (MR_Integer) 1;
        }
        else
        {
          switch (ArgsChanged_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word SymName_65 = ((MR_Word) ((MR_hl_field(0, TypeCtor_23, (MR_Integer) 0))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Type_11 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (SymName_65));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TypeArgs_20));
                  MR_hl_field(1, base, 2) = ((MR_Box) (Kind_19));
                }
              }
              break;
            case (MR_Integer) 0:
              *Type_11 = Type0_10;
              break;
          }
          *STATE_VARIABLE_TVarSet_37 = STATE_VARIABLE_TVarSet_39_39;
          *Changed_12 = ArgsChanged_21;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type0_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Args0_31 = ((MR_Word) ((MR_hl_field(3, Type0_10, (MR_Integer) 1))));
            MR_Word Args_32;
            MR_Word Kind_47 = ((MR_Word) ((MR_hl_field(3, Type0_10, (MR_Integer) 2))));

            transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(TypeEqvMap_8, TypeCtorsAlreadyExpanded_9, Args0_31, &Args_32, (MR_Integer) 0, Changed_12, STATE_VARIABLE_TVarSet_0_36, STATE_VARIABLE_TVarSet_37);
            switch (*Changed_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Type_11 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (Args_32));
                  MR_hl_field(3, base, 2) = ((MR_Box) (Kind_47));
                }
                break;
              case (MR_Integer) 0:
                *Type_11 = Type0_10;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PorF_24 = ((MR_Unsigned) ((MR_hl_field(3, Type0_10, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word ArgTypes0_25 = ((MR_Word) ((MR_hl_field(3, Type0_10, (MR_Integer) 2))));
            MR_Word HOInstInfo_26 = ((MR_Word) ((MR_hl_field(3, Type0_10, (MR_Integer) 3))));
            MR_Word Purity_27 = ((MR_Unsigned) ((MR_hl_field(3, Type0_10, (MR_Integer) 4))) & (MR_Integer) 3);
            MR_Word ArgTypes_30;

            transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(TypeEqvMap_8, TypeCtorsAlreadyExpanded_9, ArgTypes0_25, &ArgTypes_30, (MR_Integer) 0, Changed_12, STATE_VARIABLE_TVarSet_0_36, STATE_VARIABLE_TVarSet_37);
            switch (*Changed_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Type_11 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (PorF_24));
                  MR_hl_field(3, base, 2) = ((MR_Box) (ArgTypes_30));
                  MR_hl_field(3, base, 3) = ((MR_Box) (HOInstInfo_26));
                  MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_27));
                  MR_hl_field(3, base, 5) = NULL;
                }
                break;
              case (MR_Integer) 0:
                *Type_11 = Type0_10;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_33 = ((MR_Word) ((MR_hl_field(3, Type0_10, (MR_Integer) 1))));
            MR_Word Kind_48 = ((MR_Word) ((MR_hl_field(3, Type0_10, (MR_Integer) 3))));
            MR_Word Args0_49 = ((MR_Word) ((MR_hl_field(3, Type0_10, (MR_Integer) 2))));
            MR_Word Args_50;

            transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(TypeEqvMap_8, TypeCtorsAlreadyExpanded_9, Args0_49, &Args_50, (MR_Integer) 0, Changed_12, STATE_VARIABLE_TVarSet_0_36, STATE_VARIABLE_TVarSet_37);
            switch (*Changed_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Type_11 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (Var_33));
                  MR_hl_field(3, base, 2) = ((MR_Box) (Args_50));
                  MR_hl_field(3, base, 3) = ((MR_Box) (Kind_48));
                }
                break;
              case (MR_Integer) 0:
                *Type_11 = Type0_10;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word RawType0_34 = ((MR_Word) ((MR_hl_field(3, Type0_10, (MR_Integer) 1))));
            MR_Word RawType_35;
            MR_Word Kind_51 = ((MR_Word) ((MR_hl_field(3, Type0_10, (MR_Integer) 2))));

            transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(TypeEqvMap_8, TypeCtorsAlreadyExpanded_9, RawType0_34, &RawType_35, Changed_12, STATE_VARIABLE_TVarSet_0_36, STATE_VARIABLE_TVarSet_37);
            switch (*Changed_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Type_11 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (RawType_35));
                  MR_hl_field(3, base, 2) = ((MR_Box) (Kind_51));
                }
                break;
              case (MR_Integer) 0:
                *Type_11 = Type0_10;
                break;
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__mark_eqv_exported_types_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word STATE_VARIABLE_TypeTable_0_8,
  MR_Word * STATE_VARIABLE_TypeTable_9)
{
  MR_bool succeeded;
  MR_Word TypeDefn0_6;

  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(STATE_VARIABLE_TypeTable_0_8, TypeCtor_4, &TypeDefn0_6);
  if (succeeded)
  {
    MR_Word TypeDefn_7;

    hlds__hlds_data__set_type_defn_in_exported_eqv_3_p_0((MR_Integer) 1, TypeDefn0_6, &TypeDefn_7);
    hlds__hlds_data__replace_type_ctor_defn_4_p_0(TypeCtor_4, TypeDefn_7, STATE_VARIABLE_TypeTable_0_8, STATE_VARIABLE_TypeTable_9);
  }
  else
    *STATE_VARIABLE_TypeTable_9 = STATE_VARIABLE_TypeTable_0_8;
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_to_eqv_map_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word Defn_8,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_21,
  MR_Word * STATE_VARIABLE_TypeEqvMap_22,
  MR_Word STATE_VARIABLE_EqvExportTypes_0_23,
  MR_Word * STATE_VARIABLE_EqvExportTypes_24)
{
  MR_Word Body_11;

  hlds__hlds_data__get_type_defn_body_2_p_0(Defn_8, &Body_11);
  switch (MR_tag((MR_Word) Body_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_TypeEqvMap_22 = STATE_VARIABLE_TypeEqvMap_0_21;
        *STATE_VARIABLE_EqvExportTypes_24 = STATE_VARIABLE_EqvExportTypes_0_23;
      }
      break;
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_TypeEqvMap_22 = STATE_VARIABLE_TypeEqvMap_0_21;
        *STATE_VARIABLE_EqvExportTypes_24 = STATE_VARIABLE_EqvExportTypes_0_23;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word EqvType_12 = ((MR_Word) ((MR_hl_field(2, Body_11, (MR_Integer) 0))));
        MR_Word TVarSet_13;
        MR_Word Params_14;
        MR_Word TypeStatus_15;
        MR_Word IsExported_16;
        MR_Word Var_25;

        hlds__hlds_data__get_type_defn_tvarset_2_p_0(Defn_8, &TVarSet_13);
        hlds__hlds_data__get_type_defn_tparams_2_p_0(Defn_8, &Params_14);
        hlds__hlds_data__get_type_defn_status_2_p_0(Defn_8, &TypeStatus_15);
        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_25, 0) = ((MR_Box) (TVarSet_13));
          MR_hl_field(0, Var_25, 1) = ((MR_Box) (Params_14));
          MR_hl_field(0, Var_25, 2) = ((MR_Box) (EqvType_12));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0), ((MR_Box) (TypeCtor_7)), ((MR_Box) (Var_25)), STATE_VARIABLE_TypeEqvMap_0_21, STATE_VARIABLE_TypeEqvMap_22);
        IsExported_16 = hlds__status__type_status_is_exported_1_f_0(TypeStatus_15);
        switch (IsExported_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_EqvExportTypes_24 = STATE_VARIABLE_EqvExportTypes_0_23;
            break;
          case (MR_Integer) 1:
            transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0(EqvType_12, STATE_VARIABLE_EqvExportTypes_0_23, STATE_VARIABLE_EqvExportTypes_24);
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Body_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_TypeEqvMap_22 = STATE_VARIABLE_TypeEqvMap_0_21;
            *STATE_VARIABLE_EqvExportTypes_24 = STATE_VARIABLE_EqvExportTypes_0_23;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_TypeEqvMap_22 = STATE_VARIABLE_TypeEqvMap_0_21;
            *STATE_VARIABLE_EqvExportTypes_24 = STATE_VARIABLE_EqvExportTypes_0_23;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Set_9;

  transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Set_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Set_9));
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_Set_0_8,
  MR_Word * STATE_VARIABLE_Set_9)
{
  MR_bool succeeded;
  MR_Word TypeCtor_6;
  MR_Word Args_7;

  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_4, &TypeCtor_6, &Args_7);
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Set_10_10;
    MR_Box conv1_STATE_VARIABLE_Set_9;

    mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_6)), STATE_VARIABLE_Set_0_8, &STATE_VARIABLE_Set_10_10);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[0]), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[12]), Args_7, ((MR_Box) (STATE_VARIABLE_Set_10_10)), &conv1_STATE_VARIABLE_Set_9);
    *STATE_VARIABLE_Set_9 = ((MR_Word) (conv1_STATE_VARIABLE_Set_9));
  }
  else
    *STATE_VARIABLE_Set_9 = STATE_VARIABLE_Set_0_8;
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_equiv_types_in_hlds_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_STATE_VARIABLE_ModuleInfo_36;
  MR_Word conv10_STATE_VARIABLE_Cache_38;

  transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_ModuleInfo_36, ((MR_Word) (wrapper_arg_4)), &conv10_STATE_VARIABLE_Cache_38);
  *wrapper_arg_3 = ((MR_Box) (conv11_STATE_VARIABLE_ModuleInfo_36));
  *wrapper_arg_5 = ((MR_Box) (conv10_STATE_VARIABLE_Cache_38));
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_equiv_types_in_hlds_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_ConsDefn_6;

  transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv9_ConsDefn_6);
  *wrapper_arg_2 = ((MR_Box) (conv9_ConsDefn_6));
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_equiv_types_in_hlds_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_Defn_64;
  MR_Word conv6_STATE_VARIABLE_MaybeRecompInfo_66;

  transform_hlds__equiv_type_hlds__replace_in_type_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Defn_64, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_MaybeRecompInfo_66);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_Defn_64));
  *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_MaybeRecompInfo_66));
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_equiv_types_in_hlds_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_TypeTable_9;

  transform_hlds__equiv_type_hlds__mark_eqv_exported_types_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_TypeTable_9);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_TypeTable_9));
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_equiv_types_in_hlds_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_TypeEqvMap_22;
  MR_Word conv0_STATE_VARIABLE_EqvExportTypes_24;

  transform_hlds__equiv_type_hlds__add_type_to_eqv_map_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_TypeEqvMap_22, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_EqvExportTypes_24);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_TypeEqvMap_22));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_EqvExportTypes_24));
}

void MR_CALL 
transform_hlds__equiv_type_hlds__replace_equiv_types_in_hlds_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21)
{
  MR_Word TypeTable0_4;
  MR_Word TypeEqvMap_5;
  MR_Word EqvExportTypes_6;
  MR_Word TypeTable1_7;
  MR_Word MaybeRecompInfo0_8;
  MR_Word ModuleName_9;
  MR_Word TypeTable_10;
  MR_Word MaybeRecompInfo_11;
  MR_Word Insts0_12;
  MR_Word InstCache0_13;
  MR_Word Insts_14;
  MR_Word InstCache_15;
  MR_Word ConsTable0_16;
  MR_Word ConsTable_17;
  MR_Word PredIds_18;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_26;
  MR_Word STATE_VARIABLE_ModuleInfo_27_27;
  MR_Word STATE_VARIABLE_ModuleInfo_28_28;
  MR_Word STATE_VARIABLE_ModuleInfo_29_29;
  MR_Word STATE_VARIABLE_ModuleInfo_30_30;
  MR_Word Var_31;
  MR_Word Var_61;
  MR_Box conv3_TypeEqvMap_5;
  MR_Box conv2_EqvExportTypes_6;
  MR_Box conv5_TypeTable1_7;
  MR_Box conv8_MaybeRecompInfo_11;
  MR_Box conv13_STATE_VARIABLE_ModuleInfo_21;
  MR_Box conv12_Var_19;

  hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_20, &TypeTable0_4);
  Var_23 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0));
  Var_24 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  hlds__hlds_data__foldl2_over_type_ctor_defns_6_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[0]), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[0]), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[10]), TypeTable0_4, ((MR_Box) (Var_23)), &conv3_TypeEqvMap_5, ((MR_Box) (Var_24)), &conv2_EqvExportTypes_6);
  TypeEqvMap_5 = ((MR_Word) (conv3_TypeEqvMap_5));
  EqvExportTypes_6 = ((MR_Word) (conv2_EqvExportTypes_6));
  mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_type_table_0), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[11]), EqvExportTypes_6, ((MR_Box) (TypeTable0_4)), &conv5_TypeTable1_7);
  TypeTable1_7 = ((MR_Word) (conv5_TypeTable1_7));
  hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_20, &MaybeRecompInfo0_8);
  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_20, &ModuleName_9);
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_6[0]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_equiv_types_in_hlds_2_p_0_3));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (ModuleName_9));
    MR_hl_field(0, Var_26, 4) = ((MR_Box) (TypeEqvMap_5));
  }
  hlds__hlds_data__map_foldl_over_type_ctor_defns_5_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[1]), Var_26, TypeTable1_7, &TypeTable_10, ((MR_Box) (MaybeRecompInfo0_8)), &conv8_MaybeRecompInfo_11);
  MaybeRecompInfo_11 = ((MR_Word) (conv8_MaybeRecompInfo_11));
  hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_10, STATE_VARIABLE_ModuleInfo_0_20, &STATE_VARIABLE_ModuleInfo_27_27);
  hlds__hlds_module__module_info_set_maybe_recompilation_info_3_p_0(MaybeRecompInfo_11, STATE_VARIABLE_ModuleInfo_27_27, &STATE_VARIABLE_ModuleInfo_28_28);
  hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_28_28, &Insts0_12);
  InstCache0_13 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
  transform_hlds__equiv_type_hlds__replace_in_inst_table_5_p_0(TypeEqvMap_5, Insts0_12, &Insts_14, InstCache0_13, &InstCache_15);
  hlds__hlds_module__module_info_set_inst_table_3_p_0(Insts_14, STATE_VARIABLE_ModuleInfo_28_28, &STATE_VARIABLE_ModuleInfo_29_29);
  hlds__hlds_module__module_info_get_cons_table_2_p_0(STATE_VARIABLE_ModuleInfo_29_29, &ConsTable0_16);
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_5[1]));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_equiv_types_in_hlds_2_p_0_4));
    MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_61, 3) = ((MR_Box) (TypeEqvMap_5));
  }
  hlds__hlds_cons__replace_cons_defns_in_cons_table_3_p_0(Var_61, ConsTable0_16, &ConsTable_17);
  hlds__hlds_module__module_info_set_cons_table_3_p_0(ConsTable_17, STATE_VARIABLE_ModuleInfo_29_29, &STATE_VARIABLE_ModuleInfo_30_30);
  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_30_30, &PredIds_18);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_4[1]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_equiv_types_in_hlds_2_p_0_5));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (TypeEqvMap_5));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[1]), Var_31, PredIds_18, ((MR_Box) (STATE_VARIABLE_ModuleInfo_30_30)), &conv13_STATE_VARIABLE_ModuleInfo_21, ((MR_Box) (InstCache_15)), &conv12_Var_19);
  *STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) (conv13_STATE_VARIABLE_ModuleInfo_21));
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_table_5_p_0(
  MR_Word TypeEqvMap_6,
  MR_Word STATE_VARIABLE_InstTable_0_34,
  MR_Word * STATE_VARIABLE_InstTable_35,
  MR_Word STATE_VARIABLE_Cache_0_36,
  MR_Word * STATE_VARIABLE_Cache_37)
{
  MR_Word UnifyInsts0_9;
  MR_Word MergeInsts0_10;
  MR_Word GroundInsts0_11;
  MR_Word AnyInsts0_12;
  MR_Word SharedInsts0_13;
  MR_Word MostlyUniqInsts0_14;
  MR_Word UnifyInstPairs0_15;
  MR_Word MergeInstPairs0_16;
  MR_Word GroundInstPairs0_17;
  MR_Word AnyInstPairs0_18;
  MR_Word SharedInstPairs0_19;
  MR_Word MostlyUniqInstPairs0_20;
  MR_Word UnifyInstPairs_21;
  MR_Word MergeInstPairs_22;
  MR_Word GroundInstPairs_23;
  MR_Word AnyInstPairs_24;
  MR_Word SharedInstPairs_25;
  MR_Word MostlyUniqInstPairs_26;
  MR_Word UnifyInsts_28;
  MR_Word MergeInsts_29;
  MR_Word GroundInsts_30;
  MR_Word AnyInsts_31;
  MR_Word SharedInsts_32;
  MR_Word MostlyUniqInsts_33;
  MR_Word STATE_VARIABLE_Cache_40_40;
  MR_Word STATE_VARIABLE_Cache_43_43;
  MR_Word STATE_VARIABLE_Cache_46_46;
  MR_Word STATE_VARIABLE_Cache_49_49;
  MR_Word STATE_VARIABLE_InstTable_55_55;
  MR_Word STATE_VARIABLE_InstTable_56_56;
  MR_Word STATE_VARIABLE_InstTable_57_57;
  MR_Word STATE_VARIABLE_InstTable_58_58;
  MR_Word STATE_VARIABLE_InstTable_59_59;
  MR_Word RevSortedElements1_129;
  MR_Word UnSortedElements_130;
  MR_Word RevSortedElements1_145;
  MR_Word UnSortedElements_146;
  MR_Word Var_27;

  hlds__hlds_inst_mode__inst_table_get_unify_insts_2_p_0(STATE_VARIABLE_InstTable_0_34, &UnifyInsts0_9);
  hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(STATE_VARIABLE_InstTable_0_34, &MergeInsts0_10);
  hlds__hlds_inst_mode__inst_table_get_ground_insts_2_p_0(STATE_VARIABLE_InstTable_0_34, &GroundInsts0_11);
  hlds__hlds_inst_mode__inst_table_get_any_insts_2_p_0(STATE_VARIABLE_InstTable_0_34, &AnyInsts0_12);
  hlds__hlds_inst_mode__inst_table_get_shared_insts_2_p_0(STATE_VARIABLE_InstTable_0_34, &SharedInsts0_13);
  hlds__hlds_inst_mode__inst_table_get_mostly_uniq_insts_2_p_0(STATE_VARIABLE_InstTable_0_34, &MostlyUniqInsts0_14);
  hlds__hlds_inst_mode__unify_insts_to_sorted_pairs_2_p_0(UnifyInsts0_9, &UnifyInstPairs0_15);
  hlds__hlds_inst_mode__merge_insts_to_sorted_pairs_2_p_0(MergeInsts0_10, &MergeInstPairs0_16);
  hlds__hlds_inst_mode__ground_insts_to_sorted_pairs_2_p_0(GroundInsts0_11, &GroundInstPairs0_17);
  hlds__hlds_inst_mode__any_insts_to_sorted_pairs_2_p_0(AnyInsts0_12, &AnyInstPairs0_18);
  hlds__hlds_inst_mode__shared_insts_to_sorted_pairs_2_p_0(SharedInsts0_13, &SharedInstPairs0_19);
  hlds__hlds_inst_mode__mostly_uniq_insts_to_sorted_pairs_2_p_0(MostlyUniqInsts0_14, &MostlyUniqInstPairs0_20);
  transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho6_10_p_0(TypeEqvMap_6, UnifyInstPairs0_15, (MR_Word) ((MR_Unsigned) 0U), &RevSortedElements1_129, (MR_Word) ((MR_Unsigned) 0U), &UnSortedElements_130, STATE_VARIABLE_Cache_0_36, &STATE_VARIABLE_Cache_40_40);
  if ((UnSortedElements_130 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[8]), RevSortedElements1_129, &UnifyInstPairs_21);
  else
  {
    MR_Word SortedElements1_133;
    MR_Word NowSortedElements_134;

    mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[8]), RevSortedElements1_129, &SortedElements1_133);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[8]), UnSortedElements_130, &NowSortedElements_134);
    mercury__list__merge_and_remove_dups_3_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[8]), SortedElements1_133, NowSortedElements_134, &UnifyInstPairs_21);
  }
  transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho7_10_p_0(TypeEqvMap_6, MergeInstPairs0_16, (MR_Word) ((MR_Unsigned) 0U), &RevSortedElements1_145, (MR_Word) ((MR_Unsigned) 0U), &UnSortedElements_146, STATE_VARIABLE_Cache_40_40, &STATE_VARIABLE_Cache_43_43);
  if ((UnSortedElements_146 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[9]), RevSortedElements1_145, &MergeInstPairs_22);
  else
  {
    MR_Word SortedElements1_149;
    MR_Word NowSortedElements_150;

    mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[9]), RevSortedElements1_145, &SortedElements1_149);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[9]), UnSortedElements_146, &NowSortedElements_150);
    mercury__list__merge_and_remove_dups_3_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[9]), SortedElements1_149, NowSortedElements_150, &MergeInstPairs_22);
  }
  transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho3_7_p_0(TypeEqvMap_6, GroundInstPairs0_17, &GroundInstPairs_23, STATE_VARIABLE_Cache_43_43, &STATE_VARIABLE_Cache_46_46);
  transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho2_7_p_0(TypeEqvMap_6, AnyInstPairs0_18, &AnyInstPairs_24, STATE_VARIABLE_Cache_46_46, &STATE_VARIABLE_Cache_49_49);
  transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho1_7_p_0(TypeEqvMap_6, SharedInstPairs0_19, &SharedInstPairs_25, STATE_VARIABLE_Cache_49_49, STATE_VARIABLE_Cache_37);
  transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho1_7_p_0(TypeEqvMap_6, MostlyUniqInstPairs0_20, &MostlyUniqInstPairs_26, *STATE_VARIABLE_Cache_37, &Var_27);
  hlds__hlds_inst_mode__unify_insts_from_sorted_pairs_2_p_0(UnifyInstPairs_21, &UnifyInsts_28);
  hlds__hlds_inst_mode__merge_insts_from_sorted_pairs_2_p_0(MergeInstPairs_22, &MergeInsts_29);
  hlds__hlds_inst_mode__ground_insts_from_sorted_pairs_2_p_0(GroundInstPairs_23, &GroundInsts_30);
  hlds__hlds_inst_mode__any_insts_from_sorted_pairs_2_p_0(AnyInstPairs_24, &AnyInsts_31);
  hlds__hlds_inst_mode__shared_insts_from_sorted_pairs_2_p_0(SharedInstPairs_25, &SharedInsts_32);
  hlds__hlds_inst_mode__mostly_uniq_insts_from_sorted_pairs_2_p_0(MostlyUniqInstPairs_26, &MostlyUniqInsts_33);
  hlds__hlds_inst_mode__inst_table_set_unify_insts_3_p_0(UnifyInsts_28, STATE_VARIABLE_InstTable_0_34, &STATE_VARIABLE_InstTable_55_55);
  hlds__hlds_inst_mode__inst_table_set_merge_insts_3_p_0(MergeInsts_29, STATE_VARIABLE_InstTable_55_55, &STATE_VARIABLE_InstTable_56_56);
  hlds__hlds_inst_mode__inst_table_set_ground_insts_3_p_0(GroundInsts_30, STATE_VARIABLE_InstTable_56_56, &STATE_VARIABLE_InstTable_57_57);
  hlds__hlds_inst_mode__inst_table_set_any_insts_3_p_0(AnyInsts_31, STATE_VARIABLE_InstTable_57_57, &STATE_VARIABLE_InstTable_58_58);
  hlds__hlds_inst_mode__inst_table_set_shared_insts_3_p_0(SharedInsts_32, STATE_VARIABLE_InstTable_58_58, &STATE_VARIABLE_InstTable_59_59);
  hlds__hlds_inst_mode__inst_table_set_mostly_uniq_insts_3_p_0(MostlyUniqInsts_33, STATE_VARIABLE_InstTable_59_59, STATE_VARIABLE_InstTable_35);
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho7_10_p_0(
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevSortedElements_0_5,
  MR_Word * STATE_VARIABLE_RevSortedElements_6,
  MR_Word STATE_VARIABLE_UnSortedElements_0_7,
  MR_Word * STATE_VARIABLE_UnSortedElements_8,
  MR_Word STATE_VARIABLE_Cache_0_9,
  MR_Word * STATE_VARIABLE_Cache_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Cache_10 = STATE_VARIABLE_Cache_0_9;
      *STATE_VARIABLE_UnSortedElements_8 = STATE_VARIABLE_UnSortedElements_0_7;
      *STATE_VARIABLE_RevSortedElements_6 = STATE_VARIABLE_RevSortedElements_0_5;
    }
    else
    {
      MR_Word Element0_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Elements0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Key0_31 = ((MR_Word) ((MR_hl_field(0, Element0_26, (MR_Integer) 0))));
      MR_Word Value0_32 = ((MR_Word) ((MR_hl_field(0, Element0_26, (MR_Integer) 1))));
      MR_Word Key_33;
      MR_Word KeyChanged_34;
      MR_Word Value_35;
      MR_Word ValueChanged_36;
      MR_Word STATE_VARIABLE_Cache_44_44;
      MR_Word STATE_VARIABLE_Cache_45_45;
      MR_Word STATE_VARIABLE_RevSortedElements_46_46;
      MR_Word STATE_VARIABLE_UnSortedElements_47_47;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevSortedElements_0_5;
      MR_Word next_value_of_STATE_VARIABLE_UnSortedElements_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Cache_0_9;

      transform_hlds__equiv_type_hlds__replace_in_merge_inst_info_6_p_0(HeadVar__3_3, Key0_31, &Key_33, &KeyChanged_34, STATE_VARIABLE_Cache_0_9, &STATE_VARIABLE_Cache_44_44);
      transform_hlds__equiv_type_hlds__replace_in_maybe_inst_6_p_0(HeadVar__3_3, Value0_32, &Value_35, &ValueChanged_36, STATE_VARIABLE_Cache_44_44, &STATE_VARIABLE_Cache_45_45);
      switch (KeyChanged_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Element_51;

            {
              Element_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Element_51, 0) = ((MR_Box) (Key_33));
              MR_hl_field(0, Element_51, 1) = ((MR_Box) (Value_35));
            }
            {
              STATE_VARIABLE_UnSortedElements_47_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_UnSortedElements_47_47, 0) = ((MR_Box) (Element_51));
              MR_hl_field(1, STATE_VARIABLE_UnSortedElements_47_47, 1) = ((MR_Box) (STATE_VARIABLE_UnSortedElements_0_7));
            }
            STATE_VARIABLE_RevSortedElements_46_46 = STATE_VARIABLE_RevSortedElements_0_5;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Element_37;

            switch (ValueChanged_36) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  Element_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Element_37, 0) = ((MR_Box) (Key0_31));
                  MR_hl_field(0, Element_37, 1) = ((MR_Box) (Value_35));
                }
                break;
              case (MR_Integer) 0:
                Element_37 = Element0_26;
                break;
            }
            {
              STATE_VARIABLE_RevSortedElements_46_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevSortedElements_46_46, 0) = ((MR_Box) (Element_37));
              MR_hl_field(1, STATE_VARIABLE_RevSortedElements_46_46, 1) = ((MR_Box) (STATE_VARIABLE_RevSortedElements_0_5));
            }
            STATE_VARIABLE_UnSortedElements_47_47 = STATE_VARIABLE_UnSortedElements_0_7;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Elements0_27;
      next_value_of_STATE_VARIABLE_RevSortedElements_0_5 = STATE_VARIABLE_RevSortedElements_46_46;
      next_value_of_STATE_VARIABLE_UnSortedElements_0_7 = STATE_VARIABLE_UnSortedElements_47_47;
      next_value_of_STATE_VARIABLE_Cache_0_9 = STATE_VARIABLE_Cache_45_45;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevSortedElements_0_5 = next_value_of_STATE_VARIABLE_RevSortedElements_0_5;
      STATE_VARIABLE_UnSortedElements_0_7 = next_value_of_STATE_VARIABLE_UnSortedElements_0_7;
      STATE_VARIABLE_Cache_0_9 = next_value_of_STATE_VARIABLE_Cache_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_merge_inst_info_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word MergeInstInfo0_8,
  MR_Word * MergeInstInfo_9,
  MR_Word * Changed_10,
  MR_Word STATE_VARIABLE_Cache_0_21,
  MR_Word * STATE_VARIABLE_Cache_22)
{
  MR_bool succeeded;
  MR_Word InstA0_12 = ((MR_Word) ((MR_hl_field(0, MergeInstInfo0_8, (MR_Integer) 0))));
  MR_Word InstB0_13 = ((MR_Word) ((MR_hl_field(0, MergeInstInfo0_8, (MR_Integer) 1))));
  MR_Word TVarSet0_14;
  MR_Word InstA_15;
  MR_Word ChangedA_16;
  MR_Word TVarSet1_17;
  MR_Word InstB_18;
  MR_Word ChangedB_19;
  MR_Word STATE_VARIABLE_Cache_23_23;
  MR_Word _TVarSet_20;

  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet0_14);
  transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_7, InstA0_12, &InstA_15, &ChangedA_16, TVarSet0_14, &TVarSet1_17, STATE_VARIABLE_Cache_0_21, &STATE_VARIABLE_Cache_23_23);
  transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_7, InstB0_13, &InstB_18, &ChangedB_19, TVarSet1_17, &_TVarSet_20, STATE_VARIABLE_Cache_23_23, STATE_VARIABLE_Cache_22);
  succeeded = (ChangedA_16 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (ChangedB_19 == (MR_Integer) 0);
  if (succeeded)
  {
    *Changed_10 = (MR_Integer) 0;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *MergeInstInfo_9 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (InstA_15));
      MR_hl_field(0, base, 1) = ((MR_Box) (InstB_18));
    }
  }
  else
  {
    *Changed_10 = (MR_Integer) 1;
    *MergeInstInfo_9 = MergeInstInfo0_8;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho6_10_p_0(
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevSortedElements_0_5,
  MR_Word * STATE_VARIABLE_RevSortedElements_6,
  MR_Word STATE_VARIABLE_UnSortedElements_0_7,
  MR_Word * STATE_VARIABLE_UnSortedElements_8,
  MR_Word STATE_VARIABLE_Cache_0_9,
  MR_Word * STATE_VARIABLE_Cache_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Cache_10 = STATE_VARIABLE_Cache_0_9;
      *STATE_VARIABLE_UnSortedElements_8 = STATE_VARIABLE_UnSortedElements_0_7;
      *STATE_VARIABLE_RevSortedElements_6 = STATE_VARIABLE_RevSortedElements_0_5;
    }
    else
    {
      MR_Word Element0_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Elements0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Key0_31 = ((MR_Word) ((MR_hl_field(0, Element0_26, (MR_Integer) 0))));
      MR_Word Value0_32 = ((MR_Word) ((MR_hl_field(0, Element0_26, (MR_Integer) 1))));
      MR_Word Key_33;
      MR_Word KeyChanged_34;
      MR_Word Value_35;
      MR_Word ValueChanged_36;
      MR_Word STATE_VARIABLE_Cache_44_44;
      MR_Word STATE_VARIABLE_Cache_45_45;
      MR_Word STATE_VARIABLE_RevSortedElements_46_46;
      MR_Word STATE_VARIABLE_UnSortedElements_47_47;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevSortedElements_0_5;
      MR_Word next_value_of_STATE_VARIABLE_UnSortedElements_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Cache_0_9;

      transform_hlds__equiv_type_hlds__replace_in_unify_inst_info_6_p_0(HeadVar__3_3, Key0_31, &Key_33, &KeyChanged_34, STATE_VARIABLE_Cache_0_9, &STATE_VARIABLE_Cache_44_44);
      transform_hlds__equiv_type_hlds__replace_in_maybe_inst_det_6_p_0(HeadVar__3_3, Value0_32, &Value_35, &ValueChanged_36, STATE_VARIABLE_Cache_44_44, &STATE_VARIABLE_Cache_45_45);
      switch (KeyChanged_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Element_51;

            {
              Element_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Element_51, 0) = ((MR_Box) (Key_33));
              MR_hl_field(0, Element_51, 1) = ((MR_Box) (Value_35));
            }
            {
              STATE_VARIABLE_UnSortedElements_47_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_UnSortedElements_47_47, 0) = ((MR_Box) (Element_51));
              MR_hl_field(1, STATE_VARIABLE_UnSortedElements_47_47, 1) = ((MR_Box) (STATE_VARIABLE_UnSortedElements_0_7));
            }
            STATE_VARIABLE_RevSortedElements_46_46 = STATE_VARIABLE_RevSortedElements_0_5;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Element_37;

            switch (ValueChanged_36) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  Element_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Element_37, 0) = ((MR_Box) (Key0_31));
                  MR_hl_field(0, Element_37, 1) = ((MR_Box) (Value_35));
                }
                break;
              case (MR_Integer) 0:
                Element_37 = Element0_26;
                break;
            }
            {
              STATE_VARIABLE_RevSortedElements_46_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevSortedElements_46_46, 0) = ((MR_Box) (Element_37));
              MR_hl_field(1, STATE_VARIABLE_RevSortedElements_46_46, 1) = ((MR_Box) (STATE_VARIABLE_RevSortedElements_0_5));
            }
            STATE_VARIABLE_UnSortedElements_47_47 = STATE_VARIABLE_UnSortedElements_0_7;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Elements0_27;
      next_value_of_STATE_VARIABLE_RevSortedElements_0_5 = STATE_VARIABLE_RevSortedElements_46_46;
      next_value_of_STATE_VARIABLE_UnSortedElements_0_7 = STATE_VARIABLE_UnSortedElements_47_47;
      next_value_of_STATE_VARIABLE_Cache_0_9 = STATE_VARIABLE_Cache_45_45;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevSortedElements_0_5 = next_value_of_STATE_VARIABLE_RevSortedElements_0_5;
      STATE_VARIABLE_UnSortedElements_0_7 = next_value_of_STATE_VARIABLE_UnSortedElements_0_7;
      STATE_VARIABLE_Cache_0_9 = next_value_of_STATE_VARIABLE_Cache_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unify_inst_info_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word UnifyInstInfo0_8,
  MR_Word * UnifyInstInfo_9,
  MR_Word * Changed_10,
  MR_Word STATE_VARIABLE_Cache_0_23,
  MR_Word * STATE_VARIABLE_Cache_24)
{
  MR_bool succeeded;
  MR_Word InstA0_14 = ((MR_Word) ((MR_hl_field(0, UnifyInstInfo0_8, (MR_Integer) 1))));
  MR_Word InstB0_15 = ((MR_Word) ((MR_hl_field(0, UnifyInstInfo0_8, (MR_Integer) 2))));
  MR_Word TVarSet0_16;
  MR_Word InstA_17;
  MR_Word ChangedA_18;
  MR_Word TVarSet1_19;
  MR_Word InstB_20;
  MR_Word ChangedB_21;
  MR_Word STATE_VARIABLE_Cache_25_25;
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, UnifyInstInfo0_8, (MR_Integer) 0)));
  MR_Word _TVarSet_22;

  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet0_16);
  transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_7, InstA0_14, &InstA_17, &ChangedA_18, TVarSet0_16, &TVarSet1_19, STATE_VARIABLE_Cache_0_23, &STATE_VARIABLE_Cache_25_25);
  transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_7, InstB0_15, &InstB_20, &ChangedB_21, TVarSet1_19, &_TVarSet_22, STATE_VARIABLE_Cache_25_25, STATE_VARIABLE_Cache_24);
  succeeded = (ChangedA_18 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (ChangedB_21 == (MR_Integer) 0);
  if (succeeded)
  {
    *Changed_10 = (MR_Integer) 0;
    *UnifyInstInfo_9 = UnifyInstInfo0_8;
  }
  else
  {
    *Changed_10 = (MR_Integer) 1;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *UnifyInstInfo_9 = base;
      MR_hl_field(0, base, 0) = (MR_Box) (packed_word_0);
      MR_hl_field(0, base, 1) = ((MR_Box) (InstA_17));
      MR_hl_field(0, base, 2) = ((MR_Box) (InstB_20));
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho3_7_p_0(
  MR_Word TypeEqvMap_10,
  MR_Word SortedElements0_11,
  MR_Word * SortedElements_12,
  MR_Word STATE_VARIABLE_Cache_0_20,
  MR_Word * STATE_VARIABLE_Cache_21)
{
  MR_Word RevSortedElements1_14;
  MR_Word UnSortedElements_15;

  transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho8_10_p_0(TypeEqvMap_10, SortedElements0_11, (MR_Word) ((MR_Unsigned) 0U), &RevSortedElements1_14, (MR_Word) ((MR_Unsigned) 0U), &UnSortedElements_15, STATE_VARIABLE_Cache_0_20, STATE_VARIABLE_Cache_21);
  if ((UnSortedElements_15 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[7]), RevSortedElements1_14, SortedElements_12);
  else
  {
    MR_Word SortedElements1_18;
    MR_Word NowSortedElements_19;

    mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[7]), RevSortedElements1_14, &SortedElements1_18);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[7]), UnSortedElements_15, &NowSortedElements_19);
    mercury__list__merge_and_remove_dups_3_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[7]), SortedElements1_18, NowSortedElements_19, SortedElements_12);
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho8_10_p_0(
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevSortedElements_0_5,
  MR_Word * STATE_VARIABLE_RevSortedElements_6,
  MR_Word STATE_VARIABLE_UnSortedElements_0_7,
  MR_Word * STATE_VARIABLE_UnSortedElements_8,
  MR_Word STATE_VARIABLE_Cache_0_9,
  MR_Word * STATE_VARIABLE_Cache_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Cache_10 = STATE_VARIABLE_Cache_0_9;
      *STATE_VARIABLE_UnSortedElements_8 = STATE_VARIABLE_UnSortedElements_0_7;
      *STATE_VARIABLE_RevSortedElements_6 = STATE_VARIABLE_RevSortedElements_0_5;
    }
    else
    {
      MR_Word Element0_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Elements0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Key0_31 = ((MR_Word) ((MR_hl_field(0, Element0_26, (MR_Integer) 0))));
      MR_Word Value0_32 = ((MR_Word) ((MR_hl_field(0, Element0_26, (MR_Integer) 1))));
      MR_Word KeyChanged_34;
      MR_Word Value_35;
      MR_Word ValueChanged_36;
      MR_Word STATE_VARIABLE_Cache_44_44;
      MR_Word STATE_VARIABLE_Cache_45_45;
      MR_Word STATE_VARIABLE_RevSortedElements_46_46;
      MR_Word STATE_VARIABLE_UnSortedElements_47_47;
      MR_Word InstName0_54 = ((MR_Word) ((MR_hl_field(0, Key0_31, (MR_Integer) 0))));
      MR_Word InstName_58;
      MR_Word TVarSet0_59;
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Key0_31, (MR_Integer) 1)));
      MR_Word _TVarSet_60;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevSortedElements_0_5;
      MR_Word next_value_of_STATE_VARIABLE_UnSortedElements_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Cache_0_9;

      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet0_59);
      transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(HeadVar__3_3, InstName0_54, &InstName_58, &KeyChanged_34, TVarSet0_59, &_TVarSet_60, STATE_VARIABLE_Cache_0_9, &STATE_VARIABLE_Cache_44_44);
      transform_hlds__equiv_type_hlds__replace_in_maybe_inst_det_6_p_0(HeadVar__3_3, Value0_32, &Value_35, &ValueChanged_36, STATE_VARIABLE_Cache_44_44, &STATE_VARIABLE_Cache_45_45);
      switch (KeyChanged_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Key_33;
            MR_Word Element_51;

            {
              Key_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Key_33, 0) = ((MR_Box) (InstName_58));
              MR_hl_field(0, Key_33, 1) = (MR_Box) (packed_word_0);
            }
            {
              Element_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Element_51, 0) = ((MR_Box) (Key_33));
              MR_hl_field(0, Element_51, 1) = ((MR_Box) (Value_35));
            }
            {
              STATE_VARIABLE_UnSortedElements_47_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_UnSortedElements_47_47, 0) = ((MR_Box) (Element_51));
              MR_hl_field(1, STATE_VARIABLE_UnSortedElements_47_47, 1) = ((MR_Box) (STATE_VARIABLE_UnSortedElements_0_7));
            }
            STATE_VARIABLE_RevSortedElements_46_46 = STATE_VARIABLE_RevSortedElements_0_5;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Element_37;

            switch (ValueChanged_36) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  Element_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Element_37, 0) = ((MR_Box) (Key0_31));
                  MR_hl_field(0, Element_37, 1) = ((MR_Box) (Value_35));
                }
                break;
              case (MR_Integer) 0:
                Element_37 = Element0_26;
                break;
            }
            {
              STATE_VARIABLE_RevSortedElements_46_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevSortedElements_46_46, 0) = ((MR_Box) (Element_37));
              MR_hl_field(1, STATE_VARIABLE_RevSortedElements_46_46, 1) = ((MR_Box) (STATE_VARIABLE_RevSortedElements_0_5));
            }
            STATE_VARIABLE_UnSortedElements_47_47 = STATE_VARIABLE_UnSortedElements_0_7;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Elements0_27;
      next_value_of_STATE_VARIABLE_RevSortedElements_0_5 = STATE_VARIABLE_RevSortedElements_46_46;
      next_value_of_STATE_VARIABLE_UnSortedElements_0_7 = STATE_VARIABLE_UnSortedElements_47_47;
      next_value_of_STATE_VARIABLE_Cache_0_9 = STATE_VARIABLE_Cache_45_45;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevSortedElements_0_5 = next_value_of_STATE_VARIABLE_RevSortedElements_0_5;
      STATE_VARIABLE_UnSortedElements_0_7 = next_value_of_STATE_VARIABLE_UnSortedElements_0_7;
      STATE_VARIABLE_Cache_0_9 = next_value_of_STATE_VARIABLE_Cache_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho2_7_p_0(
  MR_Word TypeEqvMap_10,
  MR_Word SortedElements0_11,
  MR_Word * SortedElements_12,
  MR_Word STATE_VARIABLE_Cache_0_20,
  MR_Word * STATE_VARIABLE_Cache_21)
{
  MR_Word RevSortedElements1_14;
  MR_Word UnSortedElements_15;

  transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho9_10_p_0(TypeEqvMap_10, SortedElements0_11, (MR_Word) ((MR_Unsigned) 0U), &RevSortedElements1_14, (MR_Word) ((MR_Unsigned) 0U), &UnSortedElements_15, STATE_VARIABLE_Cache_0_20, STATE_VARIABLE_Cache_21);
  if ((UnSortedElements_15 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[6]), RevSortedElements1_14, SortedElements_12);
  else
  {
    MR_Word SortedElements1_18;
    MR_Word NowSortedElements_19;

    mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[6]), RevSortedElements1_14, &SortedElements1_18);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[6]), UnSortedElements_15, &NowSortedElements_19);
    mercury__list__merge_and_remove_dups_3_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[6]), SortedElements1_18, NowSortedElements_19, SortedElements_12);
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho9_10_p_0(
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevSortedElements_0_5,
  MR_Word * STATE_VARIABLE_RevSortedElements_6,
  MR_Word STATE_VARIABLE_UnSortedElements_0_7,
  MR_Word * STATE_VARIABLE_UnSortedElements_8,
  MR_Word STATE_VARIABLE_Cache_0_9,
  MR_Word * STATE_VARIABLE_Cache_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Cache_10 = STATE_VARIABLE_Cache_0_9;
      *STATE_VARIABLE_UnSortedElements_8 = STATE_VARIABLE_UnSortedElements_0_7;
      *STATE_VARIABLE_RevSortedElements_6 = STATE_VARIABLE_RevSortedElements_0_5;
    }
    else
    {
      MR_Word Element0_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Elements0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Key0_31 = ((MR_Word) ((MR_hl_field(0, Element0_26, (MR_Integer) 0))));
      MR_Word Value0_32 = ((MR_Word) ((MR_hl_field(0, Element0_26, (MR_Integer) 1))));
      MR_Word KeyChanged_34;
      MR_Word Value_35;
      MR_Word ValueChanged_36;
      MR_Word STATE_VARIABLE_Cache_44_44;
      MR_Word STATE_VARIABLE_Cache_45_45;
      MR_Word STATE_VARIABLE_RevSortedElements_46_46;
      MR_Word STATE_VARIABLE_UnSortedElements_47_47;
      MR_Word InstName0_54 = ((MR_Word) ((MR_hl_field(0, Key0_31, (MR_Integer) 0))));
      MR_Word InstName_58;
      MR_Word TVarSet0_59;
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Key0_31, (MR_Integer) 1)));
      MR_Word _TVarSet_60;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevSortedElements_0_5;
      MR_Word next_value_of_STATE_VARIABLE_UnSortedElements_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Cache_0_9;

      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet0_59);
      transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(HeadVar__3_3, InstName0_54, &InstName_58, &KeyChanged_34, TVarSet0_59, &_TVarSet_60, STATE_VARIABLE_Cache_0_9, &STATE_VARIABLE_Cache_44_44);
      transform_hlds__equiv_type_hlds__replace_in_maybe_inst_det_6_p_0(HeadVar__3_3, Value0_32, &Value_35, &ValueChanged_36, STATE_VARIABLE_Cache_44_44, &STATE_VARIABLE_Cache_45_45);
      switch (KeyChanged_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Key_33;
            MR_Word Element_51;

            {
              Key_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Key_33, 0) = ((MR_Box) (InstName_58));
              MR_hl_field(0, Key_33, 1) = (MR_Box) (packed_word_0);
            }
            {
              Element_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Element_51, 0) = ((MR_Box) (Key_33));
              MR_hl_field(0, Element_51, 1) = ((MR_Box) (Value_35));
            }
            {
              STATE_VARIABLE_UnSortedElements_47_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_UnSortedElements_47_47, 0) = ((MR_Box) (Element_51));
              MR_hl_field(1, STATE_VARIABLE_UnSortedElements_47_47, 1) = ((MR_Box) (STATE_VARIABLE_UnSortedElements_0_7));
            }
            STATE_VARIABLE_RevSortedElements_46_46 = STATE_VARIABLE_RevSortedElements_0_5;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Element_37;

            switch (ValueChanged_36) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  Element_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Element_37, 0) = ((MR_Box) (Key0_31));
                  MR_hl_field(0, Element_37, 1) = ((MR_Box) (Value_35));
                }
                break;
              case (MR_Integer) 0:
                Element_37 = Element0_26;
                break;
            }
            {
              STATE_VARIABLE_RevSortedElements_46_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevSortedElements_46_46, 0) = ((MR_Box) (Element_37));
              MR_hl_field(1, STATE_VARIABLE_RevSortedElements_46_46, 1) = ((MR_Box) (STATE_VARIABLE_RevSortedElements_0_5));
            }
            STATE_VARIABLE_UnSortedElements_47_47 = STATE_VARIABLE_UnSortedElements_0_7;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Elements0_27;
      next_value_of_STATE_VARIABLE_RevSortedElements_0_5 = STATE_VARIABLE_RevSortedElements_46_46;
      next_value_of_STATE_VARIABLE_UnSortedElements_0_7 = STATE_VARIABLE_UnSortedElements_47_47;
      next_value_of_STATE_VARIABLE_Cache_0_9 = STATE_VARIABLE_Cache_45_45;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevSortedElements_0_5 = next_value_of_STATE_VARIABLE_RevSortedElements_0_5;
      STATE_VARIABLE_UnSortedElements_0_7 = next_value_of_STATE_VARIABLE_UnSortedElements_0_7;
      STATE_VARIABLE_Cache_0_9 = next_value_of_STATE_VARIABLE_Cache_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_maybe_inst_det_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word MaybeInstDet0_8,
  MR_Word * MaybeInstDet_9,
  MR_Word * Changed_10,
  MR_Word STATE_VARIABLE_Cache_0_17,
  MR_Word * STATE_VARIABLE_Cache_18)
{
  if ((MaybeInstDet0_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeInstDet_9 = (MR_Word) ((MR_Unsigned) 0U);
    *Changed_10 = (MR_Integer) 0;
    *STATE_VARIABLE_Cache_18 = STATE_VARIABLE_Cache_0_17;
  }
  else
  {
    MR_Word Inst0_12 = ((MR_Word) ((MR_hl_field(1, MaybeInstDet0_8, (MR_Integer) 0))));
    MR_Word Det_13 = ((MR_Unsigned) ((MR_hl_field(1, MaybeInstDet0_8, (MR_Integer) 1))) & (MR_Integer) 7);
    MR_Word TVarSet_14;
    MR_Word Inst_15;
    MR_Word Var_16;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet_14);
    transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_7, Inst0_12, &Inst_15, Changed_10, TVarSet_14, &Var_16, STATE_VARIABLE_Cache_0_17, STATE_VARIABLE_Cache_18);
    switch (*Changed_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeInstDet_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Inst_15));
          MR_hl_field(1, base, 1) = (MR_Box) ((MR_Unsigned) (Det_13));
        }
        break;
      case (MR_Integer) 0:
        *MaybeInstDet_9 = MaybeInstDet0_8;
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho1_7_p_0(
  MR_Word TypeEqvMap_10,
  MR_Word SortedElements0_11,
  MR_Word * SortedElements_12,
  MR_Word STATE_VARIABLE_Cache_0_20,
  MR_Word * STATE_VARIABLE_Cache_21)
{
  MR_Word RevSortedElements1_14;
  MR_Word UnSortedElements_15;

  transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho10_10_p_0(TypeEqvMap_10, SortedElements0_11, (MR_Word) ((MR_Unsigned) 0U), &RevSortedElements1_14, (MR_Word) ((MR_Unsigned) 0U), &UnSortedElements_15, STATE_VARIABLE_Cache_0_20, STATE_VARIABLE_Cache_21);
  if ((UnSortedElements_15 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[5]), RevSortedElements1_14, SortedElements_12);
  else
  {
    MR_Word SortedElements1_18;
    MR_Word NowSortedElements_19;

    mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[5]), RevSortedElements1_14, &SortedElements1_18);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[5]), UnSortedElements_15, &NowSortedElements_19);
    mercury__list__merge_and_remove_dups_3_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[5]), SortedElements1_18, NowSortedElements_19, SortedElements_12);
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho10_10_p_0(
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevSortedElements_0_5,
  MR_Word * STATE_VARIABLE_RevSortedElements_6,
  MR_Word STATE_VARIABLE_UnSortedElements_0_7,
  MR_Word * STATE_VARIABLE_UnSortedElements_8,
  MR_Word STATE_VARIABLE_Cache_0_9,
  MR_Word * STATE_VARIABLE_Cache_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Cache_10 = STATE_VARIABLE_Cache_0_9;
      *STATE_VARIABLE_UnSortedElements_8 = STATE_VARIABLE_UnSortedElements_0_7;
      *STATE_VARIABLE_RevSortedElements_6 = STATE_VARIABLE_RevSortedElements_0_5;
    }
    else
    {
      MR_Word Element0_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Elements0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Key0_31 = ((MR_Word) ((MR_hl_field(0, Element0_26, (MR_Integer) 0))));
      MR_Word Value0_32 = ((MR_Word) ((MR_hl_field(0, Element0_26, (MR_Integer) 1))));
      MR_Word Key_33;
      MR_Word KeyChanged_34;
      MR_Word Value_35;
      MR_Word ValueChanged_36;
      MR_Word STATE_VARIABLE_Cache_44_44;
      MR_Word STATE_VARIABLE_Cache_45_45;
      MR_Word STATE_VARIABLE_RevSortedElements_46_46;
      MR_Word STATE_VARIABLE_UnSortedElements_47_47;
      MR_Word TVarSet0_54;
      MR_Word _TVarSet_55;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevSortedElements_0_5;
      MR_Word next_value_of_STATE_VARIABLE_UnSortedElements_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Cache_0_9;

      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet0_54);
      transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(HeadVar__3_3, Key0_31, &Key_33, &KeyChanged_34, TVarSet0_54, &_TVarSet_55, STATE_VARIABLE_Cache_0_9, &STATE_VARIABLE_Cache_44_44);
      transform_hlds__equiv_type_hlds__replace_in_maybe_inst_6_p_0(HeadVar__3_3, Value0_32, &Value_35, &ValueChanged_36, STATE_VARIABLE_Cache_44_44, &STATE_VARIABLE_Cache_45_45);
      switch (KeyChanged_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Element_51;

            {
              Element_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Element_51, 0) = ((MR_Box) (Key_33));
              MR_hl_field(0, Element_51, 1) = ((MR_Box) (Value_35));
            }
            {
              STATE_VARIABLE_UnSortedElements_47_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_UnSortedElements_47_47, 0) = ((MR_Box) (Element_51));
              MR_hl_field(1, STATE_VARIABLE_UnSortedElements_47_47, 1) = ((MR_Box) (STATE_VARIABLE_UnSortedElements_0_7));
            }
            STATE_VARIABLE_RevSortedElements_46_46 = STATE_VARIABLE_RevSortedElements_0_5;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Element_37;

            switch (ValueChanged_36) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  Element_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Element_37, 0) = ((MR_Box) (Key0_31));
                  MR_hl_field(0, Element_37, 1) = ((MR_Box) (Value_35));
                }
                break;
              case (MR_Integer) 0:
                Element_37 = Element0_26;
                break;
            }
            {
              STATE_VARIABLE_RevSortedElements_46_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevSortedElements_46_46, 0) = ((MR_Box) (Element_37));
              MR_hl_field(1, STATE_VARIABLE_RevSortedElements_46_46, 1) = ((MR_Box) (STATE_VARIABLE_RevSortedElements_0_5));
            }
            STATE_VARIABLE_UnSortedElements_47_47 = STATE_VARIABLE_UnSortedElements_0_7;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Elements0_27;
      next_value_of_STATE_VARIABLE_RevSortedElements_0_5 = STATE_VARIABLE_RevSortedElements_46_46;
      next_value_of_STATE_VARIABLE_UnSortedElements_0_7 = STATE_VARIABLE_UnSortedElements_47_47;
      next_value_of_STATE_VARIABLE_Cache_0_9 = STATE_VARIABLE_Cache_45_45;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevSortedElements_0_5 = next_value_of_STATE_VARIABLE_RevSortedElements_0_5;
      STATE_VARIABLE_UnSortedElements_0_7 = next_value_of_STATE_VARIABLE_UnSortedElements_0_7;
      STATE_VARIABLE_Cache_0_9 = next_value_of_STATE_VARIABLE_Cache_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_maybe_inst_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word MaybeInst0_8,
  MR_Word * MaybeInst_9,
  MR_Word * Changed_10,
  MR_Word STATE_VARIABLE_Cache_0_16,
  MR_Word * STATE_VARIABLE_Cache_17)
{
  if ((MaybeInst0_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeInst_9 = (MR_Word) ((MR_Unsigned) 0U);
    *Changed_10 = (MR_Integer) 0;
    *STATE_VARIABLE_Cache_17 = STATE_VARIABLE_Cache_0_16;
  }
  else
  {
    MR_Word Inst0_12 = ((MR_Word) ((MR_hl_field(1, MaybeInst0_8, (MR_Integer) 0))));
    MR_Word TVarSet_13;
    MR_Word Inst_14;
    MR_Word Var_15;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet_13);
    transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_7, Inst0_12, &Inst_14, Changed_10, TVarSet_13, &Var_15, STATE_VARIABLE_Cache_0_16, STATE_VARIABLE_Cache_17);
    switch (*Changed_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeInst_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Inst_14));
        }
        break;
      case (MR_Integer) 0:
        *MaybeInst_9 = MaybeInst0_8;
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_TVarSet_0_5,
  MR_Word * STATE_VARIABLE_TVarSet_6,
  MR_Word STATE_VARIABLE_Cache_0_7,
  MR_Word * STATE_VARIABLE_Cache_8)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Integer) 0;
    *STATE_VARIABLE_Cache_8 = STATE_VARIABLE_Cache_0_7;
    *STATE_VARIABLE_TVarSet_6 = STATE_VARIABLE_TVarSet_0_5;
  }
  else
  {
    MR_Word Inst0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Insts0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Inst_24;
    MR_Word HeadChanged_25;
    MR_Word Insts_26;
    MR_Word TailChanged_27;
    MR_Word STATE_VARIABLE_TVarSet_32_32;
    MR_Word STATE_VARIABLE_Cache_33_33;

    transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(HeadVar__1_1, Inst0_18, &Inst_24, &HeadChanged_25, STATE_VARIABLE_TVarSet_0_5, &STATE_VARIABLE_TVarSet_32_32, STATE_VARIABLE_Cache_0_7, &STATE_VARIABLE_Cache_33_33);
    transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(HeadVar__1_1, Insts0_19, &Insts_26, &TailChanged_27, STATE_VARIABLE_TVarSet_32_32, STATE_VARIABLE_TVarSet_6, STATE_VARIABLE_Cache_33_33, STATE_VARIABLE_Cache_8);
    succeeded = (HeadChanged_25 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (TailChanged_27 == (MR_Integer) 0);
    if (succeeded)
    {
      *HeadVar__4_4 = (MR_Integer) 0;
      *HeadVar__3_3 = HeadVar__2_2;
    }
    else
    {
      *HeadVar__4_4 = (MR_Integer) 1;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Inst_24));
        MR_hl_field(1, base, 1) = ((MR_Box) (Insts_26));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_TVarSet_0_5,
  MR_Word * STATE_VARIABLE_TVarSet_6,
  MR_Word STATE_VARIABLE_Cache_0_7,
  MR_Word * STATE_VARIABLE_Cache_8)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Integer) 0;
    *STATE_VARIABLE_Cache_8 = STATE_VARIABLE_Cache_0_7;
    *STATE_VARIABLE_TVarSet_6 = STATE_VARIABLE_TVarSet_0_5;
  }
  else
  {
    MR_Word ConsId_18;
    MR_Word Insts0_19;
    MR_Word BoundInsts0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Insts_25;
    MR_Word InstsChanged_26;
    MR_Word BoundInsts_27;
    MR_Word BoundInstsChanged_28;
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_TVarSet_34_34;
    MR_Word STATE_VARIABLE_Cache_35_35;

    ConsId_18 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 0))));
    Insts0_19 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 1))));
    transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(HeadVar__1_1, Insts0_19, &Insts_25, &InstsChanged_26, STATE_VARIABLE_TVarSet_0_5, &STATE_VARIABLE_TVarSet_34_34, STATE_VARIABLE_Cache_0_7, &STATE_VARIABLE_Cache_35_35);
    transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(HeadVar__1_1, BoundInsts0_20, &BoundInsts_27, &BoundInstsChanged_28, STATE_VARIABLE_TVarSet_34_34, STATE_VARIABLE_TVarSet_6, STATE_VARIABLE_Cache_35_35, STATE_VARIABLE_Cache_8);
    succeeded = (InstsChanged_26 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (BoundInstsChanged_28 == (MR_Integer) 0);
    if (succeeded)
    {
      *HeadVar__4_4 = (MR_Integer) 0;
      *HeadVar__3_3 = HeadVar__2_2;
    }
    else
    {
      MR_Word Var_38;

      *HeadVar__4_4 = (MR_Integer) 1;
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_38, 0) = ((MR_Box) (ConsId_18));
        MR_hl_field(0, Var_38, 1) = ((MR_Box) (Insts_25));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_38));
        MR_hl_field(1, base, 1) = ((MR_Box) (BoundInsts_27));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(
  MR_Word TypeEqvMap_9,
  MR_Word InstName0_10,
  MR_Word * InstName_11,
  MR_Word * Changed_12,
  MR_Word STATE_VARIABLE_TVarSet_0_34,
  MR_Word * STATE_VARIABLE_TVarSet_35,
  MR_Word STATE_VARIABLE_Cache_0_36,
  MR_Word * STATE_VARIABLE_Cache_37)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) InstName0_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Name_15 = ((MR_Word) ((MR_hl_field(0, InstName0_10, (MR_Integer) 0))));
        MR_Word Insts0_16 = ((MR_Word) ((MR_hl_field(0, InstName0_10, (MR_Integer) 1))));
        MR_Word Insts_17;

        transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(TypeEqvMap_9, Insts0_16, &Insts_17, Changed_12, STATE_VARIABLE_TVarSet_0_34, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_Cache_0_36, STATE_VARIABLE_Cache_37);
        switch (*Changed_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *InstName_11 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Name_15));
              MR_hl_field(0, base, 1) = ((MR_Box) (Insts_17));
            }
            break;
          case (MR_Integer) 0:
            *InstName_11 = InstName0_10;
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InstA0_20 = ((MR_Word) ((MR_hl_field(1, InstName0_10, (MR_Integer) 1))));
        MR_Word InstB0_21 = ((MR_Word) ((MR_hl_field(1, InstName0_10, (MR_Integer) 2))));
        MR_Word InstA_22;
        MR_Word ChangedA_23;
        MR_Word InstB_24;
        MR_Word ChangedB_25;
        MR_Word STATE_VARIABLE_TVarSet_40_40;
        MR_Word STATE_VARIABLE_Cache_41_41;
        MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(1, InstName0_10, (MR_Integer) 0)));

        transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_9, InstA0_20, &InstA_22, &ChangedA_23, STATE_VARIABLE_TVarSet_0_34, &STATE_VARIABLE_TVarSet_40_40, STATE_VARIABLE_Cache_0_36, &STATE_VARIABLE_Cache_41_41);
        transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_9, InstB0_21, &InstB_24, &ChangedB_25, STATE_VARIABLE_TVarSet_40_40, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_Cache_41_41, STATE_VARIABLE_Cache_37);
        succeeded = (ChangedA_23 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (ChangedB_25 == (MR_Integer) 0);
        if (succeeded)
        {
          *Changed_12 = (MR_Integer) 0;
          *InstName_11 = InstName0_10;
        }
        else
        {
          *Changed_12 = (MR_Integer) 1;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *InstName_11 = base;
            MR_hl_field(1, base, 0) = (MR_Box) (packed_word_3);
            MR_hl_field(1, base, 1) = ((MR_Box) (InstA_22));
            MR_hl_field(1, base, 2) = ((MR_Box) (InstB_24));
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word STATE_VARIABLE_TVarSet_44_44;
        MR_Word STATE_VARIABLE_Cache_45_45;
        MR_Word InstA0_62 = ((MR_Word) ((MR_hl_field(2, InstName0_10, (MR_Integer) 0))));
        MR_Word InstB0_63 = ((MR_Word) ((MR_hl_field(2, InstName0_10, (MR_Integer) 1))));
        MR_Word InstA_64;
        MR_Word ChangedA_65;
        MR_Word InstB_66;
        MR_Word ChangedB_67;

        transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_9, InstA0_62, &InstA_64, &ChangedA_65, STATE_VARIABLE_TVarSet_0_34, &STATE_VARIABLE_TVarSet_44_44, STATE_VARIABLE_Cache_0_36, &STATE_VARIABLE_Cache_45_45);
        transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_9, InstB0_63, &InstB_66, &ChangedB_67, STATE_VARIABLE_TVarSet_44_44, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_Cache_45_45, STATE_VARIABLE_Cache_37);
        succeeded = (ChangedA_65 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (ChangedB_67 == (MR_Integer) 0);
        if (succeeded)
        {
          *Changed_12 = (MR_Integer) 0;
          *InstName_11 = InstName0_10;
        }
        else
        {
          *Changed_12 = (MR_Integer) 1;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *InstName_11 = base;
            MR_hl_field(2, base, 0) = ((MR_Box) (InstA_64));
            MR_hl_field(2, base, 1) = ((MR_Box) (InstB_66));
          }
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, InstName0_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Name0_26 = ((MR_Word) ((MR_hl_field(3, InstName0_10, (MR_Integer) 1))));
            MR_Word Name_68;
            MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(3, InstName0_10, (MR_Integer) 2)));

            transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(TypeEqvMap_9, Name0_26, &Name_68, Changed_12, STATE_VARIABLE_TVarSet_0_34, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_Cache_0_36, STATE_VARIABLE_Cache_37);
            switch (*Changed_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *InstName_11 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (Name_68));
                  MR_hl_field(3, base, 2) = (MR_Box) (packed_word_1);
                }
                break;
              case (MR_Integer) 0:
                *InstName_11 = InstName0_10;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Name_71;
            MR_Word Name0_74 = ((MR_Word) ((MR_hl_field(3, InstName0_10, (MR_Integer) 1))));
            MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(3, InstName0_10, (MR_Integer) 2)));

            transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(TypeEqvMap_9, Name0_74, &Name_71, Changed_12, STATE_VARIABLE_TVarSet_0_34, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_Cache_0_36, STATE_VARIABLE_Cache_37);
            switch (*Changed_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *InstName_11 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (Name_71));
                  MR_hl_field(3, base, 2) = (MR_Box) (packed_word_0);
                }
                break;
              case (MR_Integer) 0:
                *InstName_11 = InstName0_10;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Name_76;
            MR_Word Name0_77 = ((MR_Word) ((MR_hl_field(3, InstName0_10, (MR_Integer) 1))));

            transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(TypeEqvMap_9, Name0_77, &Name_76, Changed_12, STATE_VARIABLE_TVarSet_0_34, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_Cache_0_36, STATE_VARIABLE_Cache_37);
            switch (*Changed_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *InstName_11 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (Name_76));
                }
                break;
              case (MR_Integer) 0:
                *InstName_11 = InstName0_10;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Name_78;
            MR_Word Name0_79 = ((MR_Word) ((MR_hl_field(3, InstName0_10, (MR_Integer) 1))));

            transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(TypeEqvMap_9, Name0_79, &Name_78, Changed_12, STATE_VARIABLE_TVarSet_0_34, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_Cache_0_36, STATE_VARIABLE_Cache_37);
            switch (*Changed_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *InstName_11 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (Name_78));
                }
                break;
              case (MR_Integer) 0:
                *InstName_11 = InstName0_10;
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Type0_28 = ((MR_Word) ((MR_hl_field(3, InstName0_10, (MR_Integer) 2))));
            MR_Word Type_29;
            MR_Word Uniq_80 = ((MR_Unsigned) ((MR_hl_field(3, InstName0_10, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word Var_30;

            parse_tree__equiv_type__replace_in_type_8_p_0(TypeEqvMap_9, Type0_28, &Type_29, Changed_12, STATE_VARIABLE_TVarSet_0_34, STATE_VARIABLE_TVarSet_35, (MR_Word) ((MR_Unsigned) 0U), &Var_30);
            switch (*Changed_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *InstName_11 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_80));
                  MR_hl_field(3, base, 2) = ((MR_Box) (Type_29));
                }
                break;
              case (MR_Integer) 0:
                *InstName_11 = InstName0_10;
                break;
            }
            *STATE_VARIABLE_Cache_37 = STATE_VARIABLE_Cache_0_36;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word TypeChanged_31;
            MR_Word InstChanged_33;
            MR_Word STATE_VARIABLE_TVarSet_58_58;
            MR_Word Name_81;
            MR_Word Name0_82 = ((MR_Word) ((MR_hl_field(3, InstName0_10, (MR_Integer) 2))));
            MR_Word Type0_83 = ((MR_Word) ((MR_hl_field(3, InstName0_10, (MR_Integer) 1))));
            MR_Word Type_84;
            MR_Word Var_32;

            parse_tree__equiv_type__replace_in_type_8_p_0(TypeEqvMap_9, Type0_83, &Type_84, &TypeChanged_31, STATE_VARIABLE_TVarSet_0_34, &STATE_VARIABLE_TVarSet_58_58, (MR_Word) ((MR_Unsigned) 0U), &Var_32);
            transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(TypeEqvMap_9, Name0_82, &Name_81, &InstChanged_33, STATE_VARIABLE_TVarSet_58_58, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_Cache_0_36, STATE_VARIABLE_Cache_37);
            succeeded = (TypeChanged_31 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (InstChanged_33 == (MR_Integer) 0);
            if (succeeded)
            {
              *Changed_12 = (MR_Integer) 0;
              *InstName_11 = InstName0_10;
            }
            else
            {
              *Changed_12 = (MR_Integer) 1;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *InstName_11 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Type_84));
                MR_hl_field(3, base, 2) = ((MR_Box) (Name_81));
              }
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(
  MR_Word TypeEqvMap_9,
  MR_Word Inst0_10,
  MR_Word * Inst_11,
  MR_Word * Changed_12,
  MR_Word STATE_VARIABLE_TVarSet_0_17,
  MR_Word * STATE_VARIABLE_TVarSet_18,
  MR_Word STATE_VARIABLE_Cache_0_19,
  MR_Word * STATE_VARIABLE_Cache_20)
{
  MR_bool succeeded;
  MR_Word ContainsType_15;

  ContainsType_15 = transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0(Inst0_10);
  switch (ContainsType_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Inst_11 = Inst0_10;
        *Changed_12 = (MR_Integer) 0;
        *STATE_VARIABLE_TVarSet_18 = STATE_VARIABLE_TVarSet_0_17;
        *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_0_19;
      }
      break;
    case (MR_Integer) 1:
      switch (MR_tag((MR_Word) Inst0_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Inst0_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *Changed_12 = (MR_Integer) 0;
                *STATE_VARIABLE_TVarSet_18 = STATE_VARIABLE_TVarSet_0_17;
                *Inst_11 = Inst0_10;
                *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_0_19;
              }
              break;
            case (MR_Integer) 1:
              {
                *Changed_12 = (MR_Integer) 0;
                *STATE_VARIABLE_TVarSet_18 = STATE_VARIABLE_TVarSet_0_17;
                *Inst_11 = Inst0_10;
                *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_0_19;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Type0_34 = ((MR_Word) ((MR_hl_field(1, Inst0_10, (MR_Integer) 0))));
            MR_Word Type_35;
            MR_Word Var_36;

            parse_tree__equiv_type__replace_in_type_8_p_0(TypeEqvMap_9, Type0_34, &Type_35, Changed_12, STATE_VARIABLE_TVarSet_0_17, STATE_VARIABLE_TVarSet_18, (MR_Word) ((MR_Unsigned) 0U), &Var_36);
            switch (*Changed_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word Inst1_162;
                  MR_Word Inst1_156;
                  MR_Box conv5_Inst1_156;

                  {
                    Inst1_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Inst1_162, 0) = ((MR_Box) (Type_35));
                  }
                  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), STATE_VARIABLE_Cache_0_19, ((MR_Box) (Inst1_162)), &conv5_Inst1_156);
                  if (succeeded)
                  {
                    Inst1_156 = ((MR_Word) (conv5_Inst1_156));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    *Inst_11 = Inst1_156;
                    *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_0_19;
                  }
                  else
                  {
                    *Inst_11 = Inst1_162;
                    *STATE_VARIABLE_Cache_20 = mercury__map__det_insert_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), STATE_VARIABLE_Cache_0_19, ((MR_Box) (*Inst_11)), ((MR_Box) (*Inst_11)));
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  *Inst_11 = Inst0_10;
                  *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_0_19;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_76 = ((MR_Word) ((MR_hl_field(2, Inst0_10, (MR_Integer) 1))));
            MR_Word Var_77 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_10, (MR_Integer) 0))) & (MR_Integer) 7);

            if ((Var_76 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *Changed_12 = (MR_Integer) 0;
              *STATE_VARIABLE_TVarSet_18 = STATE_VARIABLE_TVarSet_0_17;
              *Inst_11 = Inst0_10;
              *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_0_19;
            }
            else
            {
              MR_Word PredInstInfo0_27 = (MR_Word) (MR_body((MR_Word) (Var_76), (MR_Integer) 1));
              MR_Word PorF_28 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_27, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word Modes0_29 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_27, (MR_Integer) 1))));
              MR_Word MaybeArgRegs_30 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_27, (MR_Integer) 2))));
              MR_Word Det_31 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_27, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word Modes_32;
              MR_Word STATE_VARIABLE_Cache_22_109;

              transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(TypeEqvMap_9, Modes0_29, &Modes_32, Changed_12, STATE_VARIABLE_TVarSet_0_17, STATE_VARIABLE_TVarSet_18, STATE_VARIABLE_Cache_0_19, &STATE_VARIABLE_Cache_22_109);
              switch (*Changed_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word PredInstInfo_33;
                    MR_Word Var_60;
                    MR_Word Inst1_108;
                    MR_Word Inst1_102;
                    MR_Box conv1_Inst1_102;

                    {
                      PredInstInfo_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, PredInstInfo_33, 0) = (MR_Box) ((MR_Unsigned) (PorF_28));
                      MR_hl_field(0, PredInstInfo_33, 1) = ((MR_Box) (Modes_32));
                      MR_hl_field(0, PredInstInfo_33, 2) = ((MR_Box) (MaybeArgRegs_30));
                      MR_hl_field(0, PredInstInfo_33, 3) = (MR_Box) ((MR_Unsigned) (Det_31));
                    }
                    Var_60 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_33)));
                    {
                      Inst1_108 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Inst1_108, 0) = (MR_Box) ((MR_Unsigned) (Var_77));
                      MR_hl_field(2, Inst1_108, 1) = ((MR_Box) (Var_60));
                    }
                    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), STATE_VARIABLE_Cache_22_109, ((MR_Box) (Inst1_108)), &conv1_Inst1_102);
                    if (succeeded)
                    {
                      Inst1_102 = ((MR_Word) (conv1_Inst1_102));
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      *Inst_11 = Inst1_102;
                      *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_22_109;
                    }
                    else
                    {
                      *Inst_11 = Inst1_108;
                      *STATE_VARIABLE_Cache_20 = mercury__map__det_insert_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), STATE_VARIABLE_Cache_22_109, ((MR_Box) (*Inst_11)), ((MR_Box) (*Inst_11)));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    *Inst_11 = Inst0_10;
                    *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_22_109;
                  }
                  break;
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Inst0_10, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word InstResults0_37 = ((MR_Word) ((MR_hl_field(3, Inst0_10, (MR_Integer) 2))));
                MR_Word BoundInsts0_38 = ((MR_Word) ((MR_hl_field(3, Inst0_10, (MR_Integer) 3))));
                MR_Word Uniq_66 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_10, (MR_Integer) 1))) & (MR_Integer) 7);
                MR_Word Inst1_121;
                MR_Word STATE_VARIABLE_Cache_22_122;

                switch (MR_tag((MR_Word) InstResults0_37)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(InstResults0_37)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word BoundInsts_48;

                          transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(TypeEqvMap_9, BoundInsts0_38, &BoundInsts_48, Changed_12, STATE_VARIABLE_TVarSet_0_17, STATE_VARIABLE_TVarSet_18, STATE_VARIABLE_Cache_0_19, &STATE_VARIABLE_Cache_22_122);
                          switch (*Changed_12) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              {
                                Inst1_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(3, Inst1_121, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                MR_hl_field(3, Inst1_121, 1) = (MR_Box) ((MR_Unsigned) (Uniq_66));
                                MR_hl_field(3, Inst1_121, 2) = ((MR_Box) (InstResults0_37));
                                MR_hl_field(3, Inst1_121, 3) = ((MR_Box) (BoundInsts_48));
                              }
                              break;
                            case (MR_Integer) 0:
                              Inst1_121 = Inst0_10;
                              break;
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          *Changed_12 = (MR_Integer) 0;
                          Inst1_121 = Inst0_10;
                          *STATE_VARIABLE_TVarSet_18 = STATE_VARIABLE_TVarSet_0_17;
                          STATE_VARIABLE_Cache_22_122 = STATE_VARIABLE_Cache_0_19;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word InstNamesResult_41 = ((MR_Word) ((MR_hl_field(1, InstResults0_37, (MR_Integer) 1))));
                      MR_Word InstVarsResult_42 = ((MR_Word) ((MR_hl_field(1, InstResults0_37, (MR_Integer) 2))));
                      MR_Word TypeResult_43 = ((MR_Word) ((MR_hl_field(1, InstResults0_37, (MR_Integer) 3))));
                      MR_Word PropagatedResult_44 = ((MR_Word) ((MR_hl_field(1, InstResults0_37, (MR_Integer) 4))));
                      MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(1, InstResults0_37, (MR_Integer) 0)));

                      if ((TypeResult_43 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MR_Word BoundInsts_96;

                        transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(TypeEqvMap_9, BoundInsts0_38, &BoundInsts_96, Changed_12, STATE_VARIABLE_TVarSet_0_17, STATE_VARIABLE_TVarSet_18, STATE_VARIABLE_Cache_0_19, &STATE_VARIABLE_Cache_22_122);
                        switch (*Changed_12) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              Inst1_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Inst1_121, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(3, Inst1_121, 1) = (MR_Box) ((MR_Unsigned) (Uniq_66));
                              MR_hl_field(3, Inst1_121, 2) = ((MR_Box) (InstResults0_37));
                              MR_hl_field(3, Inst1_121, 3) = ((MR_Box) (BoundInsts_96));
                            }
                            break;
                          case (MR_Integer) 0:
                            Inst1_121 = Inst0_10;
                            break;
                        }
                      }
                      else
                      {
                        MR_Word TypeCtors_46 = ((MR_Word) ((MR_hl_field(1, TypeResult_43, (MR_Integer) 0))));

                        succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), TypeCtors_46);
                        if (succeeded)
                        {
                          *Changed_12 = (MR_Integer) 0;
                          Inst1_121 = Inst0_10;
                          *STATE_VARIABLE_TVarSet_18 = STATE_VARIABLE_TVarSet_0_17;
                          STATE_VARIABLE_Cache_22_122 = STATE_VARIABLE_Cache_0_19;
                        }
                        else
                        {
                          MR_Word InstResults_84;
                          MR_Word BoundInsts_85;

                          {
                            InstResults_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, InstResults_84, 0) = (MR_Box) (packed_word_4);
                            MR_hl_field(1, InstResults_84, 1) = ((MR_Box) (InstNamesResult_41));
                            MR_hl_field(1, InstResults_84, 2) = ((MR_Box) (InstVarsResult_42));
                            MR_hl_field(1, InstResults_84, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(1, InstResults_84, 4) = ((MR_Box) (PropagatedResult_44));
                          }
                          transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(TypeEqvMap_9, BoundInsts0_38, &BoundInsts_85, Changed_12, STATE_VARIABLE_TVarSet_0_17, STATE_VARIABLE_TVarSet_18, STATE_VARIABLE_Cache_0_19, &STATE_VARIABLE_Cache_22_122);
                          switch (*Changed_12) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              {
                                Inst1_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(3, Inst1_121, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                MR_hl_field(3, Inst1_121, 1) = (MR_Box) ((MR_Unsigned) (Uniq_66));
                                MR_hl_field(3, Inst1_121, 2) = ((MR_Box) (InstResults_84));
                                MR_hl_field(3, Inst1_121, 3) = ((MR_Box) (BoundInsts_85));
                              }
                              break;
                            case (MR_Integer) 0:
                              Inst1_121 = Inst0_10;
                              break;
                          }
                        }
                      }
                    }
                    break;
                }
                switch (*Changed_12) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Inst1_115;
                      MR_Box conv2_Inst1_115;

                      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), STATE_VARIABLE_Cache_22_122, ((MR_Box) (Inst1_121)), &conv2_Inst1_115);
                      if (succeeded)
                      {
                        Inst1_115 = ((MR_Word) (conv2_Inst1_115));
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                      {
                        *Inst_11 = Inst1_115;
                        *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_22_122;
                      }
                      else
                      {
                        *Inst_11 = Inst1_121;
                        *STATE_VARIABLE_Cache_20 = mercury__map__det_insert_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), STATE_VARIABLE_Cache_22_122, ((MR_Box) (*Inst_11)), ((MR_Box) (*Inst_11)));
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      *Inst_11 = Inst1_121;
                      *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_22_122;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_78 = ((MR_Word) ((MR_hl_field(3, Inst0_10, (MR_Integer) 2))));
                MR_Word Var_79 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_10, (MR_Integer) 1))) & (MR_Integer) 7);

                if ((Var_78 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  *Changed_12 = (MR_Integer) 0;
                  *STATE_VARIABLE_TVarSet_18 = STATE_VARIABLE_TVarSet_0_17;
                  *Inst_11 = Inst0_10;
                  *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_0_19;
                }
                else
                {
                  MR_Word PredInstInfo0_69 = (MR_Word) (MR_body((MR_Word) (Var_78), (MR_Integer) 1));
                  MR_Word PorF_70 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_69, (MR_Integer) 0))) & (MR_Integer) 1);
                  MR_Word Modes0_71 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_69, (MR_Integer) 1))));
                  MR_Word MaybeArgRegs_72 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_69, (MR_Integer) 2))));
                  MR_Word Det_73 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_69, (MR_Integer) 3))) & (MR_Integer) 7);
                  MR_Word Modes_74;
                  MR_Word STATE_VARIABLE_Cache_22_176;

                  transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(TypeEqvMap_9, Modes0_71, &Modes_74, Changed_12, STATE_VARIABLE_TVarSet_0_17, STATE_VARIABLE_TVarSet_18, STATE_VARIABLE_Cache_0_19, &STATE_VARIABLE_Cache_22_176);
                  switch (*Changed_12) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word Var_65;
                        MR_Word PredInstInfo_67;
                        MR_Word Inst1_175;
                        MR_Word Inst1_169;
                        MR_Box conv6_Inst1_169;

                        {
                          PredInstInfo_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, PredInstInfo_67, 0) = (MR_Box) ((MR_Unsigned) (PorF_70));
                          MR_hl_field(0, PredInstInfo_67, 1) = ((MR_Box) (Modes_74));
                          MR_hl_field(0, PredInstInfo_67, 2) = ((MR_Box) (MaybeArgRegs_72));
                          MR_hl_field(0, PredInstInfo_67, 3) = (MR_Box) ((MR_Unsigned) (Det_73));
                        }
                        Var_65 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_67)));
                        {
                          Inst1_175 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Inst1_175, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(3, Inst1_175, 1) = (MR_Box) ((MR_Unsigned) (Var_79));
                          MR_hl_field(3, Inst1_175, 2) = ((MR_Box) (Var_65));
                        }
                        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), STATE_VARIABLE_Cache_22_176, ((MR_Box) (Inst1_175)), &conv6_Inst1_169);
                        if (succeeded)
                        {
                          Inst1_169 = ((MR_Word) (conv6_Inst1_169));
                          succeeded = MR_TRUE;
                        }
                        if (succeeded)
                        {
                          *Inst_11 = Inst1_169;
                          *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_22_176;
                        }
                        else
                        {
                          *Inst_11 = Inst1_175;
                          *STATE_VARIABLE_Cache_20 = mercury__map__det_insert_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), STATE_VARIABLE_Cache_22_176, ((MR_Box) (*Inst_11)), ((MR_Box) (*Inst_11)));
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        *Inst_11 = Inst0_10;
                        *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_22_176;
                      }
                      break;
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                *Changed_12 = (MR_Integer) 0;
                *STATE_VARIABLE_TVarSet_18 = STATE_VARIABLE_TVarSet_0_17;
                *Inst_11 = Inst0_10;
                *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_0_19;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Vars_49 = ((MR_Word) ((MR_hl_field(3, Inst0_10, (MR_Integer) 1))));
                MR_Word CInst0_50 = ((MR_Word) ((MR_hl_field(3, Inst0_10, (MR_Integer) 2))));
                MR_Word CInst_51;
                MR_Word STATE_VARIABLE_Cache_22_135;

                transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_9, CInst0_50, &CInst_51, Changed_12, STATE_VARIABLE_TVarSet_0_17, STATE_VARIABLE_TVarSet_18, STATE_VARIABLE_Cache_0_19, &STATE_VARIABLE_Cache_22_135);
                switch (*Changed_12) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Inst1_134;
                      MR_Word Inst1_128;
                      MR_Box conv3_Inst1_128;

                      {
                        Inst1_134 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Inst1_134, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                        MR_hl_field(3, Inst1_134, 1) = ((MR_Box) (Vars_49));
                        MR_hl_field(3, Inst1_134, 2) = ((MR_Box) (CInst_51));
                      }
                      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), STATE_VARIABLE_Cache_22_135, ((MR_Box) (Inst1_134)), &conv3_Inst1_128);
                      if (succeeded)
                      {
                        Inst1_128 = ((MR_Word) (conv3_Inst1_128));
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                      {
                        *Inst_11 = Inst1_128;
                        *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_22_135;
                      }
                      else
                      {
                        *Inst_11 = Inst1_134;
                        *STATE_VARIABLE_Cache_20 = mercury__map__det_insert_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), STATE_VARIABLE_Cache_22_135, ((MR_Box) (*Inst_11)), ((MR_Box) (*Inst_11)));
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      *Inst_11 = Inst0_10;
                      *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_22_135;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word InstName0_52 = ((MR_Word) ((MR_hl_field(3, Inst0_10, (MR_Integer) 1))));
                MR_Word InstName_53;
                MR_Word STATE_VARIABLE_Cache_22_148;

                transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(TypeEqvMap_9, InstName0_52, &InstName_53, Changed_12, STATE_VARIABLE_TVarSet_0_17, STATE_VARIABLE_TVarSet_18, STATE_VARIABLE_Cache_0_19, &STATE_VARIABLE_Cache_22_148);
                switch (*Changed_12) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Inst1_147;
                      MR_Word Inst1_141;
                      MR_Box conv4_Inst1_141;

                      {
                        Inst1_147 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Inst1_147, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(3, Inst1_147, 1) = ((MR_Box) (InstName_53));
                      }
                      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), STATE_VARIABLE_Cache_22_148, ((MR_Box) (Inst1_147)), &conv4_Inst1_141);
                      if (succeeded)
                      {
                        Inst1_141 = ((MR_Word) (conv4_Inst1_141));
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                      {
                        *Inst_11 = Inst1_141;
                        *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_22_148;
                      }
                      else
                      {
                        *Inst_11 = Inst1_147;
                        *STATE_VARIABLE_Cache_20 = mercury__map__det_insert_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), STATE_VARIABLE_Cache_22_148, ((MR_Box) (*Inst_11)), ((MR_Box) (*Inst_11)));
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      *Inst_11 = Inst0_10;
                      *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_22_148;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word STATE_VARIABLE_Cache_22_22;
                MR_Word Name_54 = ((MR_Word) ((MR_hl_field(3, Inst0_10, (MR_Integer) 1))));
                MR_Word ArgInsts0_55 = ((MR_Word) ((MR_hl_field(3, Inst0_10, (MR_Integer) 2))));
                MR_Word ArgInsts_56;

                transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(TypeEqvMap_9, ArgInsts0_55, &ArgInsts_56, Changed_12, STATE_VARIABLE_TVarSet_0_17, STATE_VARIABLE_TVarSet_18, STATE_VARIABLE_Cache_0_19, &STATE_VARIABLE_Cache_22_22);
                switch (*Changed_12) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Inst1_16;
                      MR_Word Inst1_80;
                      MR_Box conv0_Inst1_80;

                      {
                        Inst1_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Inst1_16, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, Inst1_16, 1) = ((MR_Box) (Name_54));
                        MR_hl_field(3, Inst1_16, 2) = ((MR_Box) (ArgInsts_56));
                      }
                      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), STATE_VARIABLE_Cache_22_22, ((MR_Box) (Inst1_16)), &conv0_Inst1_80);
                      if (succeeded)
                      {
                        Inst1_80 = ((MR_Word) (conv0_Inst1_80));
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                      {
                        *Inst_11 = Inst1_80;
                        *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_22_22;
                      }
                      else
                      {
                        *Inst_11 = Inst1_16;
                        *STATE_VARIABLE_Cache_20 = mercury__map__det_insert_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), STATE_VARIABLE_Cache_22_22, ((MR_Box) (*Inst_11)), ((MR_Box) (*Inst_11)));
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      *Inst_11 = Inst0_10;
                      *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_22_22;
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
transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_TVarSet_0_5,
  MR_Word * STATE_VARIABLE_TVarSet_6,
  MR_Word STATE_VARIABLE_Cache_0_7,
  MR_Word * STATE_VARIABLE_Cache_8)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Integer) 0;
    *STATE_VARIABLE_Cache_8 = STATE_VARIABLE_Cache_0_7;
    *STATE_VARIABLE_TVarSet_6 = STATE_VARIABLE_TVarSet_0_5;
  }
  else
  {
    MR_Word Mode0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Modes0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Mode_24;
    MR_Word HeadChanged_25;
    MR_Word Modes_26;
    MR_Word TailChanged_27;
    MR_Word STATE_VARIABLE_TVarSet_32_32;
    MR_Word STATE_VARIABLE_Cache_33_33;

    if (((MR_tag((MR_Word) Mode0_18)) == (MR_Integer) 0))
    {
      MR_Word Init0_34 = ((MR_Word) ((MR_hl_field(0, Mode0_18, (MR_Integer) 0))));
      MR_Word Final0_35 = ((MR_Word) ((MR_hl_field(0, Mode0_18, (MR_Integer) 1))));
      MR_Word Init_36;
      MR_Word ChangedA_37;
      MR_Word Final_38;
      MR_Word ChangedB_39;
      MR_Word STATE_VARIABLE_TVarSet_28_43;
      MR_Word STATE_VARIABLE_Cache_29_44;

      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(HeadVar__1_1, Init0_34, &Init_36, &ChangedA_37, STATE_VARIABLE_TVarSet_0_5, &STATE_VARIABLE_TVarSet_28_43, STATE_VARIABLE_Cache_0_7, &STATE_VARIABLE_Cache_29_44);
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(HeadVar__1_1, Final0_35, &Final_38, &ChangedB_39, STATE_VARIABLE_TVarSet_28_43, &STATE_VARIABLE_TVarSet_32_32, STATE_VARIABLE_Cache_29_44, &STATE_VARIABLE_Cache_33_33);
      succeeded = (ChangedA_37 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (ChangedB_39 == (MR_Integer) 0);
      if (succeeded)
      {
        HeadChanged_25 = (MR_Integer) 0;
        Mode_24 = Mode0_18;
      }
      else
      {
        HeadChanged_25 = (MR_Integer) 1;
        {
          Mode_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Mode_24, 0) = ((MR_Box) (Init_36));
          MR_hl_field(0, Mode_24, 1) = ((MR_Box) (Final_38));
        }
      }
    }
    else
    {
      MR_Word Name_40 = ((MR_Word) ((MR_hl_field(1, Mode0_18, (MR_Integer) 0))));
      MR_Word Insts0_41 = ((MR_Word) ((MR_hl_field(1, Mode0_18, (MR_Integer) 1))));
      MR_Word Insts_42;

      transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(HeadVar__1_1, Insts0_41, &Insts_42, &HeadChanged_25, STATE_VARIABLE_TVarSet_0_5, &STATE_VARIABLE_TVarSet_32_32, STATE_VARIABLE_Cache_0_7, &STATE_VARIABLE_Cache_33_33);
      switch (HeadChanged_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            Mode_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Mode_24, 0) = ((MR_Box) (Name_40));
            MR_hl_field(1, Mode_24, 1) = ((MR_Box) (Insts_42));
          }
          break;
        case (MR_Integer) 0:
          Mode_24 = Mode0_18;
          break;
      }
    }
    transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(HeadVar__1_1, Modes0_19, &Modes_26, &TailChanged_27, STATE_VARIABLE_TVarSet_32_32, STATE_VARIABLE_TVarSet_6, STATE_VARIABLE_Cache_33_33, STATE_VARIABLE_Cache_8);
    succeeded = (HeadChanged_25 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (TailChanged_27 == (MR_Integer) 0);
    if (succeeded)
    {
      *HeadVar__4_4 = (MR_Integer) 0;
      *HeadVar__3_3 = HeadVar__2_2;
    }
    else
    {
      *HeadVar__4_4 = (MR_Integer) 1;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Mode_24));
        MR_hl_field(1, base, 1) = ((MR_Box) (Modes_26));
      }
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0(
  MR_Word Inst_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MayOccur_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MayOccur_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            MayOccur_4 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        MayOccur_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_46 = ((MR_Word) ((MR_hl_field(2, Inst_3, (MR_Integer) 1))));

          if ((Var_46 == (MR_Word) ((MR_Unsigned) 0U)))
            MayOccur_4 = (MR_Integer) 0;
          else
            MayOccur_4 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstResults_14 = ((MR_Word) ((MR_hl_field(3, Inst_3, (MR_Integer) 2))));
              MR_Word BoundInsts_15 = ((MR_Word) ((MR_hl_field(3, Inst_3, (MR_Integer) 3))));

              switch (MR_tag((MR_Word) InstResults_14)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(InstResults_14)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Found_23;
                        MR_Word OldMayOccur_24;

{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0

	MR_Word Inst;
	MR_Word Found;
	MR_Word MayOccur;

	Inst = Inst_3 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % TYPE_IN_INST_CACHE_SIZE;

    if (type_in_inst_cache[hash].tice_inst_addr == Inst) {
        Found = MR_BOOL_YES;
        MayOccur = type_in_inst_cache[hash].tice_may_occur;
    } else {
        Found = MR_BOOL_NO;
        MayOccur = MR_BOOL_NO;
    }


		;}
#undef MR_PROC_LABEL
	Found_23  = Found;
	OldMayOccur_24  = MayOccur;
}
                        switch (Found_23) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MayOccur_4 = transform_hlds__equiv_type_hlds__type_may_occur_in_bound_insts_1_f_0(BoundInsts_15);
{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0

	MR_Word Inst;
	MR_Word MayOccur;

	Inst = Inst_3 ;
	MayOccur = MayOccur_4 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % TYPE_IN_INST_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    type_in_inst_cache[hash].tice_inst_addr = Inst;
    type_in_inst_cache[hash].tice_may_occur = MayOccur;


		;}
#undef MR_PROC_LABEL
}
                            }
                            break;
                          case (MR_Integer) 1:
                            MayOccur_4 = OldMayOccur_24;
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      MayOccur_4 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word TypeResult_43 = ((MR_Word) ((MR_hl_field(1, InstResults_14, (MR_Integer) 3))));

                    if ((TypeResult_43 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word Found_35;
                      MR_Word OldMayOccur_36;

{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0

	MR_Word Inst;
	MR_Word Found;
	MR_Word MayOccur;

	Inst = Inst_3 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % TYPE_IN_INST_CACHE_SIZE;

    if (type_in_inst_cache[hash].tice_inst_addr == Inst) {
        Found = MR_BOOL_YES;
        MayOccur = type_in_inst_cache[hash].tice_may_occur;
    } else {
        Found = MR_BOOL_NO;
        MayOccur = MR_BOOL_NO;
    }


		;}
#undef MR_PROC_LABEL
	Found_35  = Found;
	OldMayOccur_36  = MayOccur;
}
                      switch (Found_35) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MayOccur_4 = transform_hlds__equiv_type_hlds__type_may_occur_in_bound_insts_1_f_0(BoundInsts_15);
{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0

	MR_Word Inst;
	MR_Word MayOccur;

	Inst = Inst_3 ;
	MayOccur = MayOccur_4 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % TYPE_IN_INST_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    type_in_inst_cache[hash].tice_inst_addr = Inst;
    type_in_inst_cache[hash].tice_may_occur = MayOccur;


		;}
#undef MR_PROC_LABEL
}
                          }
                          break;
                        case (MR_Integer) 1:
                          MayOccur_4 = OldMayOccur_36;
                          break;
                      }
                    }
                    else
                    {
                      MR_Word TypeCtors_22 = ((MR_Word) ((MR_hl_field(1, TypeResult_43, (MR_Integer) 0))));

                      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), TypeCtors_22);
                      if (succeeded)
                        MayOccur_4 = (MR_Integer) 0;
                      else
                        MayOccur_4 = (MR_Integer) 1;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_48 = ((MR_Word) ((MR_hl_field(3, Inst_3, (MR_Integer) 2))));

              if ((Var_48 == (MR_Word) ((MR_Unsigned) 0U)))
                MayOccur_4 = (MR_Integer) 0;
              else
                MayOccur_4 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 2:
            MayOccur_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            {
              MR_Word CInst_28 = ((MR_Word) ((MR_hl_field(3, Inst_3, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_3 = CInst_28;

              // direct tailcall eliminated
              ;
              Inst_3 = next_value_of_Inst_3;
              continue;
            }
            break;
          case (MR_Integer) 4:
            MayOccur_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArgInsts_26 = ((MR_Word) ((MR_hl_field(3, Inst_3, (MR_Integer) 2))));

              MayOccur_4 = transform_hlds__equiv_type_hlds__type_may_occur_in_insts_1_f_0(ArgInsts_26);
            }
            break;
        }
        break;
    }
    return MayOccur_4;
    break;
  }
}

static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_insts_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Inst_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MayOccurInInst_6;

      MayOccurInInst_6 = transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0(Inst_3);
      switch (MayOccurInInst_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Insts_4;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Integer) 1;
          break;
      }
    }
    return HeadVar__2_2;
    break;
  }
}

static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_bound_insts_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word BoundInst_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInsts_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Insts_7 = ((MR_Word) ((MR_hl_field(0, BoundInst_3, (MR_Integer) 1))));
      MR_Word MayOccurInInsts_8;

      MayOccurInInsts_8 = transform_hlds__equiv_type_hlds__type_may_occur_in_insts_1_f_0(Insts_7);
      switch (MayOccurInInsts_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = BoundInsts_4;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Integer) 1;
          break;
      }
    }
    return HeadVar__2_2;
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____replace_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__equiv_type_hlds____Unify____replace_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____replace_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__equiv_type_hlds____Compare____replace_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__equiv_type_hlds__init(void)
{
}

void mercury__transform_hlds__equiv_type_hlds__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__type_ctor_info_inst_cache_0);
	MR_register_type_ctor_info(&transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__type_ctor_info_replace_info_0);
}

void mercury__transform_hlds__equiv_type_hlds__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__equiv_type_hlds__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.equiv_type_hlds.
