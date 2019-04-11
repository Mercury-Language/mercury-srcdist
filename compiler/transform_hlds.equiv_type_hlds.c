/*
** Automatically generated from `equiv_type_hlds.m'
** by the Mercury compiler,
** version rotd-2018-06-07
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__equiv_type_hlds__list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__equiv_type_hlds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_VA_PseudoTypeInfo_Struct3 transform_hlds__equiv_type_hlds____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__plain_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_types_replace_info_0_0[6];

static const MR_ConstString transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_names_replace_info_0_0[6];

static const MR_DuFunctorDesc transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_functor_desc_replace_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_stag_ordered_replace_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_ptag_ordered_replace_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_name_ordered_replace_info_0[1];

static const MR_Integer transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__functor_number_map_replace_info_0[1];

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal_expr__1575__1_2_p_0(
  MR_Word PolySpecs_95,
  MR_Word HeadVar__2_153);

static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal__1416__1_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word LambdaHeadVar__1_38,
  MR_Word LambdaHeadVar__2_39,
  MR_Word * LambdaHeadVar__3_40,
  MR_Tuple LambdaHeadVar__4_41,
  MR_Tuple * LambdaHeadVar__5_42);

static void MR_CALL 
transform_hlds__equiv_type_hlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_103_111_97_108_95_95_49_52_49_54_95_95_49_95_95_91_50_93_95_48_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word LambdaHeadVar__2_39,
  MR_Word * LambdaHeadVar__3_40,
  MR_Tuple LambdaHeadVar__4_41,
  MR_Tuple * LambdaHeadVar__5_42);

static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__650__1_3_p_0(
  MR_Word TypeMap_30,
  MR_Word HeadVar__2_99,
  MR_Word * HeadVar__3_100);

static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__644__1_6_p_0(
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
transform_hlds__equiv_type_hlds__hlds_replace_in_type_5_p_0(
  MR_Word TypeEqvMap_6,
  MR_Word Type0_7,
  MR_Word * Type_8,
  MR_Word STATE_VARIABLE_VarSet_0_11,
  MR_Word * STATE_VARIABLE_VarSet_12);

static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Changed_0_5,
  MR_Word * STATE_VARIABLE_Changed_6,
  MR_Word STATE_VARIABLE_VarSet_0_7,
  MR_Word * STATE_VARIABLE_VarSet_8);

static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(
  MR_Word TypeEqvMap_8,
  MR_Word TypeCtorsAlreadyExpanded_9,
  MR_Word Type0_10,
  MR_Word * Type_11,
  MR_Word * Changed_12,
  MR_Word STATE_VARIABLE_VarSet_0_36,
  MR_Word * STATE_VARIABLE_VarSet_37);

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

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word * Changed_10,
  MR_Word STATE_VARIABLE_Info_0_131,
  MR_Word * STATE_VARIABLE_Info_132);

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
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarSet_0_5,
  MR_Word * STATE_VARIABLE_VarSet_6,
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
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

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
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_Cache_0_31,
  MR_Word * STATE_VARIABLE_Cache_32);

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
  MR_Word STATE_VARIABLE_Defn_0_56,
  MR_Word * STATE_VARIABLE_Defn_57,
  MR_Word STATE_VARIABLE_MaybeRecompInfo_0_58,
  MR_Word * STATE_VARIABLE_MaybeRecompInfo_59);

static void MR_CALL 
transform_hlds__equiv_type_hlds__mark_eqv_exported_types_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word STATE_VARIABLE_TypeTable_0_8,
  MR_Word * STATE_VARIABLE_TypeTable_9);

static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_to_eqv_map_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word Defn_8,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_24,
  MR_Word * STATE_VARIABLE_TypeEqvMap_25,
  MR_Word STATE_VARIABLE_EqvExportTypes_0_26,
  MR_Word * STATE_VARIABLE_EqvExportTypes_27);

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
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_1(
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
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho5_7_p_0(
  MR_Word TypeEqvMap_10,
  MR_Word SortedElements0_11,
  MR_Word * SortedElements_12,
  MR_Word STATE_VARIABLE_Cache_0_20,
  MR_Word * STATE_VARIABLE_Cache_21);

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
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho4_7_p_0(
  MR_Word TypeEqvMap_10,
  MR_Word SortedElements0_11,
  MR_Word * SortedElements_12,
  MR_Word STATE_VARIABLE_Cache_0_20,
  MR_Word * STATE_VARIABLE_Cache_21);

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
transform_hlds__equiv_type_hlds__replace_in_inst_2_8_p_0(
  MR_Word TypeEqvMap_9,
  MR_Word Inst0_10,
  MR_Word * Inst_11,
  MR_Word * Changed_12,
  MR_Word STATE_VARIABLE_TVarSet_0_49,
  MR_Word * STATE_VARIABLE_TVarSet_50,
  MR_Word STATE_VARIABLE_Cache_0_51,
  MR_Word * STATE_VARIABLE_Cache_52);

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

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_2[8][2];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_3[2][5];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_4[4][9];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_5[4][6];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_6[2][10];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_7[2][12];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_8[2][8];




static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_1[13][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_2[2]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_2[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_2[3])),
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_1[1]))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_4[4][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__plain_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__plain_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_5[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_6[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_7[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
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

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_8[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
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

static const MR_FA_TypeInfo_Struct1 transform_hlds__equiv_type_hlds__list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&transform_hlds__equiv_type_hlds__list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0)
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

static const MR_VA_PseudoTypeInfo_Struct3 transform_hlds__equiv_type_hlds____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__plain_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
    (MR_PseudoTypeInfo) (&transform_hlds__equiv_type_hlds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0_10001)),
  ((MR_Box) (transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0_10001)),
  (MR_String) "transform_hlds.equiv_type_hlds",
  (MR_String) "inst_cache",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
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

static const MR_DuFunctorDesc transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_functor_desc_replace_info_0_0 = {
  (MR_String) "replace_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_types_replace_info_0_0,
  transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_names_replace_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_stag_ordered_replace_info_0_0[1] = {
  &transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_functor_desc_replace_info_0_0
};

static const MR_DuPtagLayout transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_ptag_ordered_replace_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_stag_ordered_replace_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__equiv_type_hlds____Unify____replace_info_0_0_10001)),
  ((MR_Box) (transform_hlds__equiv_type_hlds____Compare____replace_info_0_0_10001)),
  (MR_String) "transform_hlds.equiv_type_hlds",
  (MR_String) "replace_info",
  {     transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_name_ordered_replace_info_0 },
  {     transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_ptag_ordered_replace_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__functor_number_map_replace_info_0
};

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal_expr__1575__1_2_p_0(
  MR_Word PolySpecs_95,
  MR_Word HeadVar__2_153)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[6]), ((MR_Box) (PolySpecs_95)), ((MR_Box) (HeadVar__2_153)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal__1416__1_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word LambdaHeadVar__1_38,
  MR_Word LambdaHeadVar__2_39,
  MR_Word * LambdaHeadVar__3_40,
  MR_Tuple LambdaHeadVar__4_41,
  MR_Tuple * LambdaHeadVar__5_42)
{
  transform_hlds__equiv_type_hlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_103_111_97_108_95_95_49_52_49_54_95_95_49_95_95_91_50_93_95_48_6_p_0(TypeEqvMap_7, LambdaHeadVar__2_39, LambdaHeadVar__3_40, LambdaHeadVar__4_41, LambdaHeadVar__5_42);
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_103_111_97_108_95_95_49_52_49_54_95_95_49_95_95_91_50_93_95_48_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word LambdaHeadVar__2_39,
  MR_Word * LambdaHeadVar__3_40,
  MR_Tuple LambdaHeadVar__4_41,
  MR_Tuple * LambdaHeadVar__5_42)
{
  {
    MR_Word Var_43;
    MR_Word Changed1_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__4_41, (MR_Integer) 0))));
    MR_Word TVarSet1_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__4_41, (MR_Integer) 1))));
    MR_Word Cache1_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__4_41, (MR_Integer) 2))));
    MR_Word InstChanged_53;
    MR_Word TVarSet2_54;
    MR_Word Cache2_55;

    transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_7, LambdaHeadVar__2_39, LambdaHeadVar__3_40, &InstChanged_53, TVarSet1_51, &TVarSet2_54, Cache1_52, &Cache2_55);
    Var_43 = mercury__bool__or_2_f_0(Changed1_50, InstChanged_53);
    {
      MR_Tuple base;
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__5_42 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TVarSet2_54));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Cache2_55));
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__650__1_3_p_0(
  MR_Word TypeMap_30,
  MR_Word HeadVar__2_99,
  MR_Word * HeadVar__3_100)
{
  {
    MR_Box conv0_HeadVar__3_100;

    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeMap_30, ((MR_Box) (HeadVar__2_99)), &conv0_HeadVar__3_100);
    *HeadVar__3_100 = ((MR_Word) (conv0_HeadVar__3_100));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__644__1_6_p_0(
  MR_Word TypeEqvMap_10,
  MR_Word LambdaHeadVar__1_61,
  MR_Word LambdaHeadVar__2_62,
  MR_Word * LambdaHeadVar__3_63,
  MR_Word LambdaHeadVar__4_64,
  MR_Word * LambdaHeadVar__5_65)
{
  {
    MR_Word NewType_29;

    transform_hlds__equiv_type_hlds__hlds_replace_in_type_5_p_0(TypeEqvMap_10, LambdaHeadVar__1_61, &NewType_29, LambdaHeadVar__4_64, LambdaHeadVar__5_65);
    mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (LambdaHeadVar__1_61)), ((MR_Box) (NewType_29)), LambdaHeadVar__2_62, LambdaHeadVar__3_63);
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____replace_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word Var_16;

      hlds__hlds_module____Compare____module_info_0_0(&Var_16, ArgX1_4, ArgY1_5);
      succeeded = (Var_16 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_16;
      else
      {
        MR_Word Var_17;

        hlds__hlds_pred____Compare____pred_info_0_0(&Var_17, ArgX2_6, ArgY2_7);
        succeeded = (Var_17 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_17;
        else
        {
          MR_Word Var_18;

          hlds__hlds_pred____Compare____proc_info_0_0(&Var_18, ArgX3_8, ArgY3_9);
          succeeded = (Var_18 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_18;
          else
          {
            MR_Word Var_19;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[3]), &Var_19, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_19 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_19;
            else
            {
              MR_Word Var_20;

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[1]), &Var_20, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_20 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_20;
              else
              {
                MR_Integer Var_29 = (MR_Integer) (ArgX6_14);
                MR_Integer Var_30 = (MR_Integer) (ArgY6_15);

                mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_29, Var_30);
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
}

static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__record_inst_may_occur_2_p_0(
  MR_Word Inst_1,
  MR_Word MayOccur_2)
{
  {
{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__record_inst_may_occur_2_p_0

	MR_Word Inst;
	MR_Word MayOccur;

	Inst =  Inst_1 ;
	MayOccur =  MayOccur_2 ;
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
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__lookup_inst_may_occur_3_p_0(
  MR_Word Inst_1,
  MR_Word * Found_2,
  MR_Word * MayOccur_3)
{
  {
{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__lookup_inst_may_occur_3_p_0

	MR_Word Inst;
	MR_Word Found;
	MR_Word MayOccur;

	Inst =  Inst_1 ;
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
    }


		;}
#undef MR_PROC_LABEL
	 *Found_2  = Found;
	 *MayOccur_3  = MayOccur;
}
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_5_p_0(
  MR_Word TypeEqvMap_6,
  MR_Word Type0_7,
  MR_Word * Type_8,
  MR_Word STATE_VARIABLE_VarSet_0_11,
  MR_Word * STATE_VARIABLE_VarSet_12)
{
  {
    MR_Word _Changed_10;

    transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(TypeEqvMap_6, (MR_Word) ((MR_Integer) 0), Type0_7, Type_8, &_Changed_10, STATE_VARIABLE_VarSet_0_11, STATE_VARIABLE_VarSet_12);
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Changed_0_5,
  MR_Word * STATE_VARIABLE_Changed_6,
  MR_Word STATE_VARIABLE_VarSet_0_7,
  MR_Word * STATE_VARIABLE_VarSet_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Integer) 0)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Integer) 0);
    *STATE_VARIABLE_VarSet_8 = STATE_VARIABLE_VarSet_0_7;
    *STATE_VARIABLE_Changed_6 = STATE_VARIABLE_Changed_0_5;
  }
  else
  {
    MR_Word Type0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Types0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Type_21;
    MR_Word Types_22;
    MR_Word TypeChanged_25;
    MR_Word STATE_VARIABLE_VarSet_30_30;
    MR_Word STATE_VARIABLE_Changed_31_31;

    transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(HeadVar__1_1, HeadVar__2_2, Type0_19, &Type_21, &TypeChanged_25, STATE_VARIABLE_VarSet_0_7, &STATE_VARIABLE_VarSet_30_30);
    mercury__bool__or_3_p_0(STATE_VARIABLE_Changed_0_5, TypeChanged_25, &STATE_VARIABLE_Changed_31_31);
    transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(HeadVar__1_1, HeadVar__2_2, Types0_20, &Types_22, STATE_VARIABLE_Changed_31_31, STATE_VARIABLE_Changed_6, STATE_VARIABLE_VarSet_30_30, STATE_VARIABLE_VarSet_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Type_21));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Types_22));
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
  MR_Word STATE_VARIABLE_VarSet_0_36,
  MR_Word * STATE_VARIABLE_VarSet_37)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Type0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          *Type_11 = Type0_10;
          *Changed_12 = (MR_Integer) 0;
          *STATE_VARIABLE_VarSet_37 = STATE_VARIABLE_VarSet_0_36;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_10, (MR_Integer) 0))));
          MR_Word TypeArgs0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_10, (MR_Integer) 1))));
          MR_Word Kind_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_10, (MR_Integer) 2))));
          MR_Word TypeArgs_20;
          MR_Word ArgsChanged_21;
          MR_Integer Arity_22;
          MR_Word TypeCtor_23;
          MR_Word STATE_VARIABLE_VarSet_45_45;
          MR_Word AlreadyExpanded_66;
          MR_Word Params0_69;
          MR_Word Body0_70;
          MR_Word Renaming_71;
          MR_Word STATE_VARIABLE_VarSet_39_80;
          MR_Word EqvTypeBody_67;
          MR_Word EqvVarSet_68;
          MR_Box conv0_EqvTypeBody_67;

          transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(TypeEqvMap_8, TypeCtorsAlreadyExpanded_9, TypeArgs0_18, &TypeArgs_20, (MR_Integer) 0, &ArgsChanged_21, STATE_VARIABLE_VarSet_0_36, &STATE_VARIABLE_VarSet_45_45);
          Arity_22 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_20);
          {
            TypeCtor_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeCtor_23, 0) = ((MR_Box) (SymName_17));
            MR_hl_field(MR_mktag(0), TypeCtor_23, 1) = ((MR_Box) (Arity_22));
          }
          succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_23)), TypeCtorsAlreadyExpanded_9);
          if (succeeded)
            AlreadyExpanded_66 = (MR_Integer) 1;
          else
            AlreadyExpanded_66 = (MR_Integer) 0;
          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0), TypeEqvMap_8, ((MR_Box) (TypeCtor_23)), &conv0_EqvTypeBody_67);
          if (succeeded)
          {
            EqvTypeBody_67 = ((MR_Word) (conv0_EqvTypeBody_67));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            EqvVarSet_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvTypeBody_67, (MR_Integer) 0))));
            Params0_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvTypeBody_67, (MR_Integer) 1))));
            Body0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvTypeBody_67, (MR_Integer) 2))));
            parse_tree__prog_data__tvarset_merge_renaming_without_names_4_p_0(STATE_VARIABLE_VarSet_45_45, EqvVarSet_68, &STATE_VARIABLE_VarSet_39_80, &Renaming_71);
            succeeded = (AlreadyExpanded_66 == (MR_Integer) 0);
          }
          if (succeeded)
          {
            MR_Word Params_72;
            MR_Word Body1_73;
            MR_Word Subst_74;
            MR_Word Body_75;
            MR_Word TypeCtorsAlreadyExpanded_76;
            MR_Word _BodyChanged_77;

            mercury__map__apply_to_list_3_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[5]), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[5]), Params0_69, Renaming_71, &Params_72);
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(Renaming_71, Body0_70, &Body1_73);
            mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[5]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Params_72, TypeArgs_20, &Subst_74);
            parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_74, Body1_73, &Body_75);
            {
              TypeCtorsAlreadyExpanded_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), TypeCtorsAlreadyExpanded_76, 0) = ((MR_Box) (TypeCtor_23));
              MR_hl_field(MR_mktag(1), TypeCtorsAlreadyExpanded_76, 1) = ((MR_Box) (TypeCtorsAlreadyExpanded_9));
            }
            transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(TypeEqvMap_8, TypeCtorsAlreadyExpanded_76, Body_75, Type_11, &_BodyChanged_77, STATE_VARIABLE_VarSet_39_80, STATE_VARIABLE_VarSet_37);
            *Changed_12 = (MR_Integer) 1;
          }
          else
          {
            switch (ArgsChanged_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *Type_11 = Type0_10;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word SymName_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_23, (MR_Integer) 0))));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *Type_11 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SymName_78));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypeArgs_20));
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Kind_19));
                  }
                }
                break;
            }
            *STATE_VARIABLE_VarSet_37 = STATE_VARIABLE_VarSet_45_45;
            *Changed_12 = ArgsChanged_21;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type0_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Args0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_10, (MR_Integer) 1))));
              MR_Word Args_32;
              MR_Word Kind_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_10, (MR_Integer) 2))));

              transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(TypeEqvMap_8, TypeCtorsAlreadyExpanded_9, Args0_31, &Args_32, (MR_Integer) 0, Changed_12, STATE_VARIABLE_VarSet_0_36, STATE_VARIABLE_VarSet_37);
              switch (*Changed_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Type_11 = Type0_10;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *Type_11 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Args_32));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Kind_47));
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_10, (MR_Integer) 1))));
              MR_Word ArgTypes0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_10, (MR_Integer) 2))));
              MR_Word HOInstInfo_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_10, (MR_Integer) 3))));
              MR_Word Purity_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_10, (MR_Integer) 4))));
              MR_Word ArgTypes_30;

              transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(TypeEqvMap_8, TypeCtorsAlreadyExpanded_9, ArgTypes0_25, &ArgTypes_30, (MR_Integer) 0, Changed_12, STATE_VARIABLE_VarSet_0_36, STATE_VARIABLE_VarSet_37);
              switch (*Changed_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Type_11 = Type0_10;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                    *Type_11 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (PorF_24));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ArgTypes_30));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (HOInstInfo_26));
                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Purity_27));
                    MR_hl_field(MR_mktag(3), base, 5) = NULL;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_10, (MR_Integer) 1))));
              MR_Word Kind_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_10, (MR_Integer) 3))));
              MR_Word Args0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_10, (MR_Integer) 2))));
              MR_Word Args_50;

              transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(TypeEqvMap_8, TypeCtorsAlreadyExpanded_9, Args0_49, &Args_50, (MR_Integer) 0, Changed_12, STATE_VARIABLE_VarSet_0_36, STATE_VARIABLE_VarSet_37);
              switch (*Changed_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Type_11 = Type0_10;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *Type_11 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_33));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_50));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Kind_48));
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word RawType0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_10, (MR_Integer) 1))));
              MR_Word RawType_35;
              MR_Word Kind_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_10, (MR_Integer) 2))));

              transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(TypeEqvMap_8, TypeCtorsAlreadyExpanded_9, RawType0_34, &RawType_35, Changed_12, STATE_VARIABLE_VarSet_0_36, STATE_VARIABLE_VarSet_37);
              switch (*Changed_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Type_11 = Type0_10;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *Type_11 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (RawType_35));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Kind_51));
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__3_100;

    transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__650__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv7_HeadVar__3_100);
    *wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__3_100));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_LambdaHeadVar__3_63;
    MR_Word conv3_LambdaHeadVar__5_65;

    transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__644__1_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_LambdaHeadVar__3_63, ((MR_Word) (wrapper_arg_4)), &conv3_LambdaHeadVar__5_65);
    *wrapper_arg_3 = ((MR_Box) (conv4_LambdaHeadVar__3_63));
    *wrapper_arg_5 = ((MR_Box) (conv3_LambdaHeadVar__5_65));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Type_8;
    MR_Word conv0_STATE_VARIABLE_VarSet_12;

    transform_hlds__equiv_type_hlds__hlds_replace_in_type_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Type_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_VarSet_12);
    *wrapper_arg_2 = ((MR_Box) (conv1_Type_8));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_VarSet_12));
  }
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
  {
    MR_Word ArgModes0_16;
    MR_Word ArgModes_17;
    MR_Word MaybeDeclModes0_19;
    MR_Word VarTypes0_23;
    MR_Word VarTypes_24;
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
    if ((MaybeDeclModes0_19 == (MR_Word) ((MR_Integer) 0)))
    {
      STATE_VARIABLE_ProcInfo_54_54 = STATE_VARIABLE_ProcInfo_50_50;
      *STATE_VARIABLE_Cache_46 = STATE_VARIABLE_Cache_49_49;
      STATE_VARIABLE_TVarSet_51_51 = STATE_VARIABLE_TVarSet_48_48;
    }
    else
    {
      MR_Word DeclModes0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDeclModes0_19, (MR_Integer) 0))));
      MR_Word DeclModes_21;
      MR_Word Var_53;
      MR_Word Var_22;

      transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(TypeEqvMap_10, DeclModes0_20, &DeclModes_21, &Var_22, STATE_VARIABLE_TVarSet_48_48, &STATE_VARIABLE_TVarSet_51_51, STATE_VARIABLE_Cache_49_49, STATE_VARIABLE_Cache_46);
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (DeclModes_21));
      }
      hlds__hlds_pred__proc_info_set_maybe_declared_argmodes_3_p_0(Var_53, STATE_VARIABLE_ProcInfo_50_50, &STATE_VARIABLE_ProcInfo_54_54);
    }
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_54_54, &VarTypes0_23);
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (TypeEqvMap_10));
    }
    hlds__vartypes__transform_foldl_var_types_5_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[3]), Var_55, VarTypes0_23, &VarTypes_24, ((MR_Box) (STATE_VARIABLE_TVarSet_51_51)), &conv2_STATE_VARIABLE_TVarSet_56_56);
    STATE_VARIABLE_TVarSet_56_56 = ((MR_Word) (conv2_STATE_VARIABLE_TVarSet_56_56));
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_24, STATE_VARIABLE_ProcInfo_54_54, &STATE_VARIABLE_ProcInfo_57_57);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_57_57, &RttiVarMaps0_25);
    hlds__hlds_rtti__rtti_varmaps_types_2_p_0(RttiVarMaps0_25, &AllTypes_26);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_2));
      MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (TypeEqvMap_10));
    }
    Var_59 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[3]), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[3]), Var_58, AllTypes_26, ((MR_Box) (Var_59)), &conv6_TypeMap_30, ((MR_Box) (STATE_VARIABLE_TVarSet_56_56)), &conv5_STATE_VARIABLE_TVarSet_60_60);
    TypeMap_30 = ((MR_Word) (conv6_TypeMap_30));
    STATE_VARIABLE_TVarSet_60_60 = ((MR_Word) (conv5_STATE_VARIABLE_TVarSet_60_60));
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_3));
      MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (TypeMap_30));
    }
    hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0(Var_72, RttiVarMaps0_25, &RttiVarMaps_31);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_31, STATE_VARIABLE_ProcInfo_57_57, &STATE_VARIABLE_ProcInfo_73_73);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_73_73, &Goal0_32);
    {
      ReplaceInfo0_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ReplaceInfo0_33, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_41));
      MR_hl_field(MR_mktag(0), ReplaceInfo0_33, 1) = ((MR_Box) (STATE_VARIABLE_PredInfo_0_43));
      MR_hl_field(MR_mktag(0), ReplaceInfo0_33, 2) = ((MR_Box) (STATE_VARIABLE_ProcInfo_73_73));
      MR_hl_field(MR_mktag(0), ReplaceInfo0_33, 3) = ((MR_Box) (STATE_VARIABLE_TVarSet_60_60));
      MR_hl_field(MR_mktag(0), ReplaceInfo0_33, 4) = ((MR_Box) (*STATE_VARIABLE_Cache_46));
      MR_hl_field(MR_mktag(0), ReplaceInfo0_33, 5) = ((MR_Box) ((MR_Integer) 0));
    }
    transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(TypeEqvMap_10, Goal0_32, &Goal_34, &Changed_35, ReplaceInfo0_33, &ReplaceInfo_36);
    STATE_VARIABLE_ModuleInfo_75_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReplaceInfo_36, (MR_Integer) 0))));
    STATE_VARIABLE_PredInfo_76_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReplaceInfo_36, (MR_Integer) 1))));
    STATE_VARIABLE_ProcInfo_77_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReplaceInfo_36, (MR_Integer) 2))));
    STATE_VARIABLE_TVarSet_78_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReplaceInfo_36, (MR_Integer) 3))));
    Recompute_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReplaceInfo_36, (MR_Integer) 5))));
    switch (Changed_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_ProcInfo_79_79 = STATE_VARIABLE_ProcInfo_77_77;
        break;
      case (MR_Integer) 1:
        hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_34, STATE_VARIABLE_ProcInfo_77_77, &STATE_VARIABLE_ProcInfo_79_79);
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
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_81_81, STATE_VARIABLE_ProcInfo_40, STATE_VARIABLE_ModuleInfo_75_75, STATE_VARIABLE_ModuleInfo_42);
        }
        break;
    }
    hlds__hlds_pred__pred_info_set_typevarset_3_p_0(STATE_VARIABLE_TVarSet_78_78, STATE_VARIABLE_PredInfo_76_76, STATE_VARIABLE_PredInfo_44);
  }
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Integer) 0)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Integer) 0);
    *HeadVar__4_4 = (MR_Integer) 0;
    *STATE_VARIABLE_Acc_6 = STATE_VARIABLE_Acc_0_5;
  }
  else
  {
    MR_Word H0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word T0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word T_18;
    MR_Word Changed0_19;
    MR_Word H_20;
    MR_Word Changed1_21;
    MR_Word STATE_VARIABLE_Acc_24_24;
    MR_Word MainConsId_33;
    MR_Word OtherConsIds_34;
    MR_Word CaseGoal0_35;
    MR_Word CaseGoal_36;

    transform_hlds__equiv_type_hlds__replace_in_cases_6_p_0(HeadVar__1_1, T0_14, &T_18, &Changed0_19, STATE_VARIABLE_Acc_0_5, &STATE_VARIABLE_Acc_24_24);
    MainConsId_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), H0_13, (MR_Integer) 0))));
    OtherConsIds_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), H0_13, (MR_Integer) 1))));
    CaseGoal0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), H0_13, (MR_Integer) 2))));
    transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(HeadVar__1_1, CaseGoal0_35, &CaseGoal_36, &Changed1_21, STATE_VARIABLE_Acc_24_24, STATE_VARIABLE_Acc_6);
    switch (Changed1_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        H_20 = H0_13;
        break;
      case (MR_Integer) 1:
        {
          H_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), H_20, 0) = ((MR_Box) (MainConsId_33));
          MR_hl_field(MR_mktag(0), H_20, 1) = ((MR_Box) (OtherConsIds_34));
          MR_hl_field(MR_mktag(0), H_20, 2) = ((MR_Box) (CaseGoal_36));
        }
        break;
    }
    *HeadVar__4_4 = mercury__bool__or_2_f_0(Changed0_19, Changed1_21);
    switch (*HeadVar__4_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__3_3 = HeadVar__2_2;
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (H_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (T_18));
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal_expr__1575__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word * Changed_10,
  MR_Word STATE_VARIABLE_Info_0_131,
  MR_Word * STATE_VARIABLE_Info_132)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word NegGoal0_19 = (MR_Word) (MR_body((MR_Word) (GoalExpr0_8), (MR_Integer) 0));
          MR_Word NegGoal_20;

          transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(TypeEqvMap_7, NegGoal0_19, &NegGoal_20, Changed_10, STATE_VARIABLE_Info_0_131, STATE_VARIABLE_Info_132);
          switch (*Changed_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *GoalExpr_9 = GoalExpr0_8;
              break;
            case (MR_Integer) 1:
              *GoalExpr_9 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (NegGoal_20)));
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeTable_68;
          MR_Word VarTypes_69;
          MR_Word RttiVarMaps_70;
          MR_Word VarType_71;
          MR_Word TypeCtorCat_72;
          MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 0))));
          MR_Word Var_140;
          MR_Word Var_141;
          MR_Word Var_142;
          MR_Word Var_248 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 0))));
          MR_Word Var_458;
          MR_Word Var_459;
          MR_Word Var_460;
          MR_Word Var_461;
          MR_Word Var_462;
          MR_Word ConsId_74;
          MR_Word TypeCtor_80;
          MR_Word TypeDefn_81;
          MR_Word Body_82;
          MR_Word Var_143;
          MR_Word Var_144;

          hlds__hlds_module__module_info_get_type_table_2_p_0(Var_139, &TypeTable_68);
          Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 2))));
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(Var_140, &VarTypes_69);
          Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 2))));
          hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(Var_141, &RttiVarMaps_70);
          hlds__vartypes__lookup_var_type_3_p_0(VarTypes_69, Var_248, &VarType_71);
          Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 0))));
          TypeCtorCat_72 = check_hlds__type_util__classify_type_2_f_0(Var_142, VarType_71);
          Var_462 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 0))));
          Var_461 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 1))));
          Var_460 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 2))));
          Var_459 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 3))));
          Var_458 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 4))));
          Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 3))));
          succeeded = ((MR_tag((MR_Word) Var_143)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            ConsId_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_143, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) ConsId_74)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              TypeCtor_80 = (MR_Word) (MR_body((MR_Word) (ConsId_74), (MR_Integer) 1));
              succeeded = ((((MR_tag((MR_Word) TypeCtorCat_72)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorCat_72, (MR_Integer) 0))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeCtorCat_72, (MR_Integer) 1))));
                succeeded = (Var_144 == (MR_Integer) 0);
                if (succeeded)
                {
                  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_68, TypeCtor_80, &TypeDefn_81);
                  if (succeeded)
                  {
                    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_81, &Body_82);
                    succeeded = ((MR_tag((MR_Word) Body_82)) == (MR_mktag((MR_Integer) 2)));
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
            MR_Word PredInfo0_85;
            MR_Word ProcInfo0_86;
            MR_Word PredInfo1_87;
            MR_Word PolyInfo0_88;
            MR_Word VarInfo_89;
            MR_Word TypeInfoType_91;
            MR_Word TypeInfoVar_93;
            MR_Word PolyInfo_94;
            MR_Word PolySpecs_95;
            MR_Word PredInfo_96;
            MR_Word ProcInfo_97;
            MR_Word ModuleInfo_98;
            MR_Word Var_148;
            MR_Word Var_149;
            MR_Word STATE_VARIABLE_Info_157_157;
            MR_Word Var_159;
            MR_Word Var_160;
            MR_Word Var_161;
            MR_Word Goals0_204;
            MR_Word Goals_205;
            MR_Word TVarSet0_206;
            MR_Word TVarSet_207;
            MR_Word Var_373;
            MR_Word Var_374;
            MR_Word Var_375;
            MR_Word Var_379;
            MR_Word Var_380;
            MR_Word Var_381;
            MR_Word Var_382;
            MR_Word Var_385;
            MR_Word Var_386;
            MR_Word GoalExpr1_99;
            MR_Word Var_163;
            MR_Word Var_164;
            MR_Word Var_393;
            MR_Word Var_394;
            MR_Word Var_395;
            MR_Word Var_396;
            MR_Word Var_397;

            *Changed_10 = (MR_Integer) 1;
            PredInfo0_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 1))));
            ProcInfo0_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 2))));
            TVarSet0_206 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 3))));
            hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TVarSet0_206, PredInfo0_85, &PredInfo1_87);
            check_hlds__polymorphism__create_poly_info_4_p_0(Var_462, PredInfo1_87, ProcInfo0_86, &PolyInfo0_88);
            hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(RttiVarMaps_70, Var_248, &VarInfo_89);
            switch (MR_tag((MR_Word) VarInfo_89)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.equiv_type_hlds", (MR_String) "predicate \140transform_hlds.equiv_type_hlds.replace_in_goal_expr\'/6", (MR_String) "info not found");
                    return;
                  }
                }
                break;
              case (MR_Integer) 1:
                TypeInfoType_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarInfo_89, (MR_Integer) 0))));
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.equiv_type_hlds", (MR_String) "predicate \140transform_hlds.equiv_type_hlds.replace_in_goal_expr\'/6", (MR_String) "info not found");
                    return;
                  }
                }
                break;
            }
            Var_148 = mercury__term__context_init_0_f_0();
            check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(TypeInfoType_91, Var_148, &TypeInfoVar_93, &Goals0_204, PolyInfo0_88, &PolyInfo_94);
            check_hlds__polymorphism__poly_info_extract_7_p_0(PolyInfo_94, &PolySpecs_95, PredInfo1_87, &PredInfo_96, ProcInfo0_86, &ProcInfo_97, &ModuleInfo_98);
            {
              Var_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_149, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_3[1]));
              MR_hl_field(MR_mktag(0), Var_149, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0_1));
              MR_hl_field(MR_mktag(0), Var_149, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_149, 3) = ((MR_Box) (PolySpecs_95));
              MR_hl_field(MR_mktag(0), Var_149, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_4_p_0(Var_149, (MR_String) "transform_hlds.equiv_type_hlds", (MR_String) "predicate \140transform_hlds.equiv_type_hlds.replace_in_goal_expr\'/6", (MR_String) "got errors while making type_info_var");
            hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_96, &TVarSet_207);
            Var_373 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 4))));
            Var_374 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 5))));
            Var_375 = ModuleInfo_98;
            Var_379 = Var_373;
            Var_380 = Var_374;
            Var_381 = Var_375;
            Var_382 = PredInfo_96;
            Var_385 = Var_379;
            Var_386 = Var_380;
            {
              STATE_VARIABLE_Info_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_157_157, 0) = ((MR_Box) (Var_381));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_157_157, 1) = ((MR_Box) (Var_382));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_157_157, 2) = ((MR_Box) (ProcInfo_97));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_157_157, 3) = ((MR_Box) (TVarSet_207));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_157_157, 4) = ((MR_Box) (Var_385));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_157_157, 5) = ((MR_Box) (Var_386));
            }
            {
              Var_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_161, 0) = ((MR_Box) (TypeInfoVar_93));
              MR_hl_field(MR_mktag(0), Var_161, 1) = ((MR_Box) (Var_248));
            }
            {
              Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_160, 0) = ((MR_Box) (Var_161));
              MR_hl_field(MR_mktag(1), Var_160, 1) = ((MR_Box) ((MR_Integer) 0));
            }
            Var_159 = mercury__map__from_assoc_list_1_f_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[7]), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[7]), Var_160);
            hlds__hlds_goal__rename_vars_in_goals_4_p_0((MR_Integer) 1, Var_159, Goals0_204, &Goals_205);
            succeeded = ((MR_tag((MR_Word) Goals_205)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_205, (MR_Integer) 0))));
              Var_164 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_205, (MR_Integer) 1))));
              succeeded = (Var_164 == (MR_Word) ((MR_Integer) 0));
              if (succeeded)
              {
                GoalExpr1_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_163, (MR_Integer) 0))));
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
              *GoalExpr_9 = GoalExpr1_99;
            else
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_205));
              }
            }
            Var_393 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_157_157, (MR_Integer) 0))));
            Var_394 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_157_157, (MR_Integer) 1))));
            Var_395 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_157_157, (MR_Integer) 2))));
            Var_396 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_157_157, (MR_Integer) 3))));
            Var_397 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_157_157, (MR_Integer) 4))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_132 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_393));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_394));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_395));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_396));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_397));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 1));
            }
          }
          else
          {
            MR_Word Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 3))));
            MR_Word Var_169;
            MR_Word ConsId_208;
            MR_Word TypeCtor_209;
            MR_Word TypeDefn_210;
            MR_Word Body_211;

            succeeded = ((MR_tag((MR_Word) Var_168)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              ConsId_208 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_168, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) ConsId_208)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                TypeCtor_209 = (MR_Word) (MR_body((MR_Word) (ConsId_208), (MR_Integer) 1));
                succeeded = ((((MR_tag((MR_Word) TypeCtorCat_72)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorCat_72, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeCtorCat_72, (MR_Integer) 1))));
                  succeeded = (Var_169 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_68, TypeCtor_209, &TypeDefn_210);
                    if (succeeded)
                    {
                      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_210, &Body_211);
                      succeeded = ((MR_tag((MR_Word) Body_211)) == (MR_mktag((MR_Integer) 2)));
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
              *Changed_10 = (MR_Integer) 1;
              *GoalExpr_9 = (MR_Word) (MR_mkword(MR_mktag(3), &transform_hlds__equiv_type_hlds_scalar_common_1[12]));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_132 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_462));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_461));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_460));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_459));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_458));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 1));
              }
            }
            else
            {
              MR_Word LMode0_108;
              MR_Word RMode0_109;
              MR_Word LMode_110;
              MR_Word Cache1_111;
              MR_Word RMode_112;
              MR_Word Unification_113;
              MR_Word Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word STATE_VARIABLE_Info_176_176;
              MR_Word Var_177;
              MR_Word Var_179;
              MR_Word Changed1_214;
              MR_Word Changed2_215;
              MR_Word Changed3_216;
              MR_Word TVarSet1_218;
              MR_Word TVarSet_219;
              MR_Word Cache0_220;
              MR_Word Cache_221;
              MR_Word Var_423;
              MR_Word Var_424;
              MR_Word Var_425;
              MR_Word Var_428;

              LMode0_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_174, (MR_Integer) 0))));
              RMode0_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_174, (MR_Integer) 1))));
              Cache0_220 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 4))));
              transform_hlds__equiv_type_hlds__replace_in_from_to_insts_8_p_0(TypeEqvMap_7, LMode0_108, &LMode_110, &Changed1_214, Var_459, &TVarSet1_218, Cache0_220, &Cache1_111);
              transform_hlds__equiv_type_hlds__replace_in_from_to_insts_8_p_0(TypeEqvMap_7, RMode0_109, &RMode_112, &Changed2_215, TVarSet1_218, &TVarSet_219, Cache1_111, &Cache_221);
              Var_423 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 0))));
              Var_424 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 1))));
              Var_425 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 2))));
              Var_428 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 5))));
              {
                STATE_VARIABLE_Info_176_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_176_176, 0) = ((MR_Box) (Var_423));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_176_176, 1) = ((MR_Box) (Var_424));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_176_176, 2) = ((MR_Box) (Var_425));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_176_176, 3) = ((MR_Box) (TVarSet_219));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_176_176, 4) = ((MR_Box) (Cache_221));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_176_176, 5) = ((MR_Box) (Var_428));
              }
              Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 3))));
              transform_hlds__equiv_type_hlds__replace_in_unification_6_p_0(TypeEqvMap_7, Var_177, &Unification_113, &Changed3_216, STATE_VARIABLE_Info_176_176, STATE_VARIABLE_Info_132);
              Var_179 = mercury__bool__or_2_f_0(Changed1_214, Changed2_215);
              *Changed_10 = mercury__bool__or_2_f_0(Var_179, Changed3_216);
              switch (*Changed_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *GoalExpr_9 = GoalExpr0_8;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_180;
                    MR_Word Var_439;
                    MR_Word Var_440;
                    MR_Word Var_443;

                    {
                      Var_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_180, 0) = ((MR_Box) (LMode_110));
                      MR_hl_field(MR_mktag(0), Var_180, 1) = ((MR_Box) (RMode_112));
                    }
                    Var_439 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 0))));
                    Var_440 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 1))));
                    Var_443 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 4))));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                      *GoalExpr_9 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_439));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_440));
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_180));
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification_113));
                      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Var_443));
                    }
                  }
                  break;
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *GoalExpr_9 = GoalExpr0_8;
          *Changed_10 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_132 = STATE_VARIABLE_Info_0_131;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Details_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Modes0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word MaybeArgRegs_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 4))));
              MR_Word Detism_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 5))));
              MR_Word Cache0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 4))));
              MR_Word Modes_62;
              MR_Word Cache_63;
              MR_Word TVarSet0_201 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 3))));
              MR_Word Args_202 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word TVarSet_203;

              transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(TypeEqvMap_7, Modes0_58, &Modes_62, Changed_10, TVarSet0_201, &TVarSet_203, Cache0_61, &Cache_63);
              switch (*Changed_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *GoalExpr_9 = GoalExpr0_8;
                    *STATE_VARIABLE_Info_132 = STATE_VARIABLE_Info_0_131;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_313 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 0))));
                    MR_Word Var_314 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 1))));
                    MR_Word Var_315 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 2))));
                    MR_Word Var_318 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 5))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Info_132 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_313));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_314));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_315));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TVarSet_203));
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Cache_63));
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_318));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                      *GoalExpr_9 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Details_57));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_202));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Modes_62));
                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (MaybeArgRegs_59));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (Detism_60));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TVarSet0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 3))));
              MR_Word Args_49;
              MR_Word ChangedArgs_50;
              MR_Word TVarSet1_51;
              MR_Word ExtraArgs_53;
              MR_Word ChangedExtraArgs_54;
              MR_Word TVarSet_55;
              MR_Word Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 4))));
              MR_Word Var_185;
              MR_Word Var_52;
              MR_Word Var_56;

              transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(TypeEqvMap_7, Var_183, &Args_49, &ChangedArgs_50, TVarSet0_48, &TVarSet1_51, (MR_Word) ((MR_Integer) 0), &Var_52);
              Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 5))));
              transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(TypeEqvMap_7, Var_185, &ExtraArgs_53, &ChangedExtraArgs_54, TVarSet1_51, &TVarSet_55, (MR_Word) ((MR_Integer) 0), &Var_56);
              *Changed_10 = mercury__bool__or_2_f_0(ChangedArgs_50, ChangedExtraArgs_54);
              switch (*Changed_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *GoalExpr_9 = GoalExpr0_8;
                    *STATE_VARIABLE_Info_132 = STATE_VARIABLE_Info_0_131;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_289;
                    MR_Word Var_290;
                    MR_Integer Var_291;
                    MR_Word Var_294;
                    MR_Word Var_295;
                    MR_Word Var_283 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 0))));
                    MR_Word Var_284 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 1))));
                    MR_Word Var_285 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 2))));
                    MR_Word Var_287 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 4))));
                    MR_Word Var_288 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_131, (MR_Integer) 5))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Info_132 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_283));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_284));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_285));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TVarSet_55));
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_287));
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_288));
                    }
                    Var_289 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
                    Var_290 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
                    Var_291 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
                    Var_294 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 6))));
                    Var_295 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 7))));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                      *GoalExpr_9 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_289));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_290));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_291));
                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Args_49));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ExtraArgs_53));
                      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Var_294));
                      MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (Var_295));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Goals_14;

              transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(TypeEqvMap_7, Goals0_13, &Goals_14, Changed_10, STATE_VARIABLE_Info_0_131, STATE_VARIABLE_Info_132);
              switch (*Changed_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *GoalExpr_9 = GoalExpr0_8;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_9 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ConjType_12));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_14));
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_199 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Goals_200;

              transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(TypeEqvMap_7, Goals0_199, &Goals_200, Changed_10, STATE_VARIABLE_Info_0_131, STATE_VARIABLE_Info_132);
              switch (*Changed_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *GoalExpr_9 = GoalExpr0_8;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_9 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Goals_200));
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word CanFail_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Cases0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word Cases_18;

              transform_hlds__equiv_type_hlds__replace_in_cases_6_p_0(TypeEqvMap_7, Cases0_17, &Cases_18, Changed_10, STATE_VARIABLE_Info_0_131, STATE_VARIABLE_Info_132);
              switch (*Changed_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *GoalExpr_9 = GoalExpr0_8;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_9 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_15));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (CanFail_16));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_18));
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word SomeGoal0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Var_193;

              succeeded = ((((MR_tag((MR_Word) Reason_21)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_21, (MR_Integer) 0))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_193 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_21, (MR_Integer) 2))));
                succeeded = (Var_193 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                *GoalExpr_9 = GoalExpr0_8;
                *Changed_10 = (MR_Integer) 0;
                *STATE_VARIABLE_Info_132 = STATE_VARIABLE_Info_0_131;
              }
              else
              {
                MR_Word SomeGoal_24;

                transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(TypeEqvMap_7, SomeGoal0_22, &SomeGoal_24, Changed_10, STATE_VARIABLE_Info_0_131, STATE_VARIABLE_Info_132);
                switch (*Changed_10) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *GoalExpr_9 = GoalExpr0_8;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      *GoalExpr_9 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_21));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SomeGoal_24));
                    }
                    break;
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Cond0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Then0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word Else0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 4))));
              MR_Word Cond_29;
              MR_Word Changed1_30;
              MR_Word Then_31;
              MR_Word Changed2_32;
              MR_Word Else_33;
              MR_Word Changed3_34;
              MR_Word STATE_VARIABLE_Info_189_189;
              MR_Word STATE_VARIABLE_Info_190_190;
              MR_Word Var_192;

              transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(TypeEqvMap_7, Cond0_26, &Cond_29, &Changed1_30, STATE_VARIABLE_Info_0_131, &STATE_VARIABLE_Info_189_189);
              transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(TypeEqvMap_7, Then0_27, &Then_31, &Changed2_32, STATE_VARIABLE_Info_189_189, &STATE_VARIABLE_Info_190_190);
              transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(TypeEqvMap_7, Else0_28, &Else_33, &Changed3_34, STATE_VARIABLE_Info_190_190, STATE_VARIABLE_Info_132);
              Var_192 = mercury__bool__or_2_f_0(Changed1_30, Changed2_32);
              *Changed_10 = mercury__bool__or_2_f_0(Var_192, Changed3_34);
              switch (*Changed_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *GoalExpr_9 = GoalExpr0_8;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_9 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_25));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_29));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_31));
                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_33));
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_114 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand0_114)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.equiv_type_hlds", (MR_String) "predicate \140transform_hlds.equiv_type_hlds.replace_in_goal_expr\'/6", (MR_String) "bi_implication");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_114, (MR_Integer) 0))));
                    MR_Word Outer_116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_114, (MR_Integer) 1))));
                    MR_Word Inner_117 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_114, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_118 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_114, (MR_Integer) 3))));
                    MR_Word MainGoal0_119 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_114, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_120 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_114, (MR_Integer) 5))));
                    MR_Word OrElseInners_121 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_114, (MR_Integer) 6))));
                    MR_Word MainGoal_122;
                    MR_Word OrElseGoals_123;
                    MR_Word STATE_VARIABLE_Info_137_137;
                    MR_Word Changed1_257;
                    MR_Word Changed2_258;

                    transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(TypeEqvMap_7, MainGoal0_119, &MainGoal_122, &Changed1_257, STATE_VARIABLE_Info_0_131, &STATE_VARIABLE_Info_137_137);
                    transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(TypeEqvMap_7, OrElseGoals0_120, &OrElseGoals_123, &Changed2_258, STATE_VARIABLE_Info_137_137, STATE_VARIABLE_Info_132);
                    *Changed_10 = mercury__bool__or_2_f_0(Changed1_257, Changed2_258);
                    switch (*Changed_10) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *GoalExpr_9 = GoalExpr0_8;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ShortHand_124;

                          {
                            ShortHand_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ShortHand_124, 0) = ((MR_Box) (GoalType_115));
                            MR_hl_field(MR_mktag(1), ShortHand_124, 1) = ((MR_Box) (Outer_116));
                            MR_hl_field(MR_mktag(1), ShortHand_124, 2) = ((MR_Box) (Inner_117));
                            MR_hl_field(MR_mktag(1), ShortHand_124, 3) = ((MR_Box) (MaybeOutputVars_118));
                            MR_hl_field(MR_mktag(1), ShortHand_124, 4) = ((MR_Box) (MainGoal_122));
                            MR_hl_field(MR_mktag(1), ShortHand_124, 5) = ((MR_Box) (OrElseGoals_123));
                            MR_hl_field(MR_mktag(1), ShortHand_124, 6) = ((MR_Box) (OrElseInners_121));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *GoalExpr_9 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_124));
                          }
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_125 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_114, (MR_Integer) 0))));
                    MR_Word ResultVar_126 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_114, (MR_Integer) 1))));
                    MR_Word SubGoal0_127 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_114, (MR_Integer) 2))));
                    MR_Word SubGoal_128;

                    transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(TypeEqvMap_7, SubGoal0_127, &SubGoal_128, Changed_10, STATE_VARIABLE_Info_0_131, STATE_VARIABLE_Info_132);
                    switch (*Changed_10) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *GoalExpr_9 = GoalExpr0_8;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ShortHand_259;

                          {
                            ShortHand_259 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), ShortHand_259, 0) = ((MR_Box) (MaybeIO_125));
                            MR_hl_field(MR_mktag(2), ShortHand_259, 1) = ((MR_Box) (ResultVar_126));
                            MR_hl_field(MR_mktag(2), ShortHand_259, 2) = ((MR_Box) (SubGoal_128));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *GoalExpr_9 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_259));
                          }
                        }
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Integer) 0)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Integer) 0);
    *HeadVar__4_4 = (MR_Integer) 0;
    *STATE_VARIABLE_Acc_6 = STATE_VARIABLE_Acc_0_5;
  }
  else
  {
    MR_Word H0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word T0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word T_18;
    MR_Word Changed0_19;
    MR_Word H_20;
    MR_Word Changed1_21;
    MR_Word STATE_VARIABLE_Acc_24_24;

    transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(HeadVar__1_1, T0_14, &T_18, &Changed0_19, STATE_VARIABLE_Acc_0_5, &STATE_VARIABLE_Acc_24_24);
    transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(HeadVar__1_1, H0_13, &H_20, &Changed1_21, STATE_VARIABLE_Acc_24_24, STATE_VARIABLE_Acc_6);
    *HeadVar__4_4 = mercury__bool__or_2_f_0(Changed0_19, Changed1_21);
    switch (*HeadVar__4_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__3_3 = HeadVar__2_2;
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (H_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (T_18));
        }
        break;
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__3_40;
    MR_Tuple conv0_LambdaHeadVar__5_42;

    transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal__1416__1_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_40, ((MR_Tuple) (wrapper_arg_4)), &conv0_LambdaHeadVar__5_42);
    *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_40));
    *wrapper_arg_5 = ((MR_Box) (conv0_LambdaHeadVar__5_42));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word Goal0_8,
  MR_Word * Goal_9,
  MR_Word * Changed_10,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  {
    MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_8, (MR_Integer) 0))));
    MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_8, (MR_Integer) 1))));
    MR_Word GoalExpr_14;
    MR_Word Changed0_15;
    MR_Word InstMapDelta0_16;
    MR_Word TVarSet0_17;
    MR_Word Cache0_18;
    MR_Word InstMapDelta_28;
    MR_Word TVarSet_29;
    MR_Word Cache_30;
    MR_Word STATE_VARIABLE_Info_34_34;
    MR_Word Var_35;
    MR_Tuple Var_36;
    MR_Tuple Var_37;
    MR_Box conv2_Var_37;

    transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0(TypeEqvMap_7, GoalExpr0_12, &GoalExpr_14, &Changed0_15, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_34_34);
    InstMapDelta0_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_13);
    TVarSet0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 3))));
    Cache0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 4))));
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (TypeEqvMap_7));
    }
    {
      Var_36 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Changed0_15));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (TVarSet0_17));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (Cache0_18));
    }
    hlds__instmap__instmap_delta_map_foldl_5_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_3[0]), Var_35, InstMapDelta0_16, &InstMapDelta_28, ((MR_Box) (Var_36)), &conv2_Var_37);
    Var_37 = ((MR_Tuple) (conv2_Var_37));
    *Changed_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 0))));
    TVarSet_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 1))));
    Cache_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 2))));
    switch (*Changed_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Goal_9 = Goal0_8;
          *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_34_34;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word GoalInfo_31;
          MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 0))));
          MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 1))));
          MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 2))));
          MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 5))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_33 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_67));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TVarSet_29));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Cache_30));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_71));
          }
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_28, GoalInfo0_13, &GoalInfo_31);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_9 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_14));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_31));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarSet_0_5,
  MR_Word * STATE_VARIABLE_VarSet_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Integer) 0)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Integer) 0);
    *HeadVar__4_4 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
    *STATE_VARIABLE_VarSet_6 = STATE_VARIABLE_VarSet_0_5;
  }
  else
  {
    MR_Word A0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word As0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word A_24;
    MR_Word Changed0_25;
    MR_Word As_26;
    MR_Word Changed1_27;
    MR_Word STATE_VARIABLE_VarSet_32_32;
    MR_Word STATE_VARIABLE_Info_33_33;
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), A0_18, (MR_Integer) 0))));
    MR_Word NameMode_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), A0_18, (MR_Integer) 1))));
    MR_Word Type0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), A0_18, (MR_Integer) 2))));
    MR_Word BoxPolicy_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), A0_18, (MR_Integer) 3))));
    MR_Word Type_50;

    parse_tree__equiv_type__replace_in_type_8_p_0(HeadVar__1_1, Type0_48, &Type_50, &Changed0_25, STATE_VARIABLE_VarSet_0_5, &STATE_VARIABLE_VarSet_32_32, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_33_33);
    switch (Changed0_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        A_24 = A0_18;
        break;
      case (MR_Integer) 1:
        {
          A_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), A_24, 0) = ((MR_Box) (Var_46));
          MR_hl_field(MR_mktag(0), A_24, 1) = ((MR_Box) (NameMode_47));
          MR_hl_field(MR_mktag(0), A_24, 2) = ((MR_Box) (Type_50));
          MR_hl_field(MR_mktag(0), A_24, 3) = ((MR_Box) (BoxPolicy_49));
        }
        break;
    }
    transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(HeadVar__1_1, As0_19, &As_26, &Changed1_27, STATE_VARIABLE_VarSet_32_32, STATE_VARIABLE_VarSet_6, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_8);
    *HeadVar__4_4 = mercury__bool__or_2_f_0(Changed0_25, Changed1_27);
    switch (*HeadVar__4_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__3_3 = HeadVar__2_2;
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (A_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (As_26));
        }
        break;
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
        MR_Word ArgModes0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni0_8, (MR_Integer) 3))));
        MR_Word ArgModes_28;

        transform_hlds__equiv_type_hlds__replace_in_unify_modes_6_p_0(TypeEqvMap_7, ArgModes0_27, &ArgModes_28, Changed_10, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
        switch (*Changed_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Uni_9 = Uni0_8;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni0_8, (MR_Integer) 0))));
              MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni0_8, (MR_Integer) 1))));
              MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni0_8, (MR_Integer) 2))));
              MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni0_8, (MR_Integer) 4))));
              MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni0_8, (MR_Integer) 5))));
              MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni0_8, (MR_Integer) 6))));

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                *Uni_9 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_48));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_49));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_50));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ArgModes_28));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_52));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_53));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_54));
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word UnifyModes0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uni0_8, (MR_Integer) 3))));
        MR_Word UnifyModes_36;

        transform_hlds__equiv_type_hlds__replace_in_unify_modes_6_p_0(TypeEqvMap_7, UnifyModes0_35, &UnifyModes_36, Changed_10, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
        switch (*Changed_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Uni_9 = Uni0_8;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uni0_8, (MR_Integer) 0))));
              MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uni0_8, (MR_Integer) 1))));
              MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uni0_8, (MR_Integer) 2))));
              MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uni0_8, (MR_Integer) 4))));
              MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uni0_8, (MR_Integer) 5))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                *Uni_9 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_60));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_61));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_62));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (UnifyModes_36));
                MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Var_64));
                MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (Var_65));
              }
            }
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
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Uni0_8, (MR_Integer) 0)))) {
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
            MR_Word UnifyMode0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uni0_8, (MR_Integer) 1))));
            MR_Word B_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uni0_8, (MR_Integer) 2))));
            MR_Word C_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uni0_8, (MR_Integer) 3))));
            MR_Word UnifyMode_19;

            transform_hlds__equiv_type_hlds__replace_in_unify_mode_6_p_0(TypeEqvMap_7, UnifyMode0_16, &UnifyMode_19, Changed_10, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
            switch (*Changed_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *Uni_9 = Uni0_8;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *Uni_9 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (UnifyMode_19));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (B_17));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (C_18));
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
transform_hlds__equiv_type_hlds__replace_in_unify_modes_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Integer) 0)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Integer) 0);
    *HeadVar__4_4 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word UnifyMode0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word UnifyModes0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word UnifyMode_18;
    MR_Word Changed0_19;
    MR_Word UnifyModes_20;
    MR_Word Changed1_21;
    MR_Word STATE_VARIABLE_Info_24_24;

    transform_hlds__equiv_type_hlds__replace_in_unify_mode_6_p_0(HeadVar__1_1, UnifyMode0_13, &UnifyMode_18, &Changed0_19, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_24_24);
    transform_hlds__equiv_type_hlds__replace_in_unify_modes_6_p_0(HeadVar__1_1, UnifyModes0_14, &UnifyModes_20, &Changed1_21, STATE_VARIABLE_Info_24_24, STATE_VARIABLE_Info_6);
    *HeadVar__4_4 = mercury__bool__or_2_f_0(Changed0_19, Changed1_21);
    switch (*HeadVar__4_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__3_3 = HeadVar__2_2;
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (UnifyMode_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (UnifyModes_20));
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unify_mode_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word UnifyMode0_8,
  MR_Word * UnifyMode_9,
  MR_Word * Changed_10,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  {
    MR_Word LHSFromToInsts0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode0_8, (MR_Integer) 0))));
    MR_Word RHSFromToInsts0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode0_8, (MR_Integer) 1))));
    MR_Word LHSFromToInsts_16;
    MR_Word ChangedA_17;
    MR_Word RHSFromToInsts_18;
    MR_Word ChangedB_19;
    MR_Word STATE_VARIABLE_TVarSet_22_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 3))));
    MR_Word STATE_VARIABLE_Cache_23_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 4))));
    MR_Word STATE_VARIABLE_TVarSet_24_24;
    MR_Word STATE_VARIABLE_Cache_25_25;
    MR_Word STATE_VARIABLE_TVarSet_26_26;
    MR_Word STATE_VARIABLE_Cache_27_27;
    MR_Word Init0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSFromToInsts0_12, (MR_Integer) 0))));
    MR_Word Final0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSFromToInsts0_12, (MR_Integer) 1))));
    MR_Word Init_64;
    MR_Word ChangedA_65;
    MR_Word Final_66;
    MR_Word ChangedB_67;
    MR_Word STATE_VARIABLE_TVarSet_25_68;
    MR_Word STATE_VARIABLE_Cache_26_69;
    MR_Word Init0_82;
    MR_Word Final0_83;
    MR_Word Init_84;
    MR_Word ChangedA_85;
    MR_Word Final_86;
    MR_Word ChangedB_87;
    MR_Word STATE_VARIABLE_TVarSet_25_88;
    MR_Word STATE_VARIABLE_Cache_26_89;

    transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_7, Init0_62, &Init_64, &ChangedA_65, STATE_VARIABLE_TVarSet_22_22, &STATE_VARIABLE_TVarSet_25_68, STATE_VARIABLE_Cache_23_23, &STATE_VARIABLE_Cache_26_69);
    transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_7, Final0_63, &Final_66, &ChangedB_67, STATE_VARIABLE_TVarSet_25_68, &STATE_VARIABLE_TVarSet_24_24, STATE_VARIABLE_Cache_26_69, &STATE_VARIABLE_Cache_25_25);
    ChangedA_17 = mercury__bool__or_2_f_0(ChangedA_65, ChangedB_67);
    switch (ChangedA_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        LHSFromToInsts_16 = LHSFromToInsts0_12;
        break;
      case (MR_Integer) 1:
        {
          LHSFromToInsts_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), LHSFromToInsts_16, 0) = ((MR_Box) (Init_64));
          MR_hl_field(MR_mktag(0), LHSFromToInsts_16, 1) = ((MR_Box) (Final_66));
        }
        break;
    }
    Init0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSFromToInsts0_13, (MR_Integer) 0))));
    Final0_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSFromToInsts0_13, (MR_Integer) 1))));
    transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_7, Init0_82, &Init_84, &ChangedA_85, STATE_VARIABLE_TVarSet_24_24, &STATE_VARIABLE_TVarSet_25_88, STATE_VARIABLE_Cache_25_25, &STATE_VARIABLE_Cache_26_89);
    transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_7, Final0_83, &Final_86, &ChangedB_87, STATE_VARIABLE_TVarSet_25_88, &STATE_VARIABLE_TVarSet_26_26, STATE_VARIABLE_Cache_26_89, &STATE_VARIABLE_Cache_27_27);
    ChangedB_19 = mercury__bool__or_2_f_0(ChangedA_85, ChangedB_87);
    switch (ChangedB_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        RHSFromToInsts_18 = RHSFromToInsts0_13;
        break;
      case (MR_Integer) 1:
        {
          RHSFromToInsts_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), RHSFromToInsts_18, 0) = ((MR_Box) (Init_84));
          MR_hl_field(MR_mktag(0), RHSFromToInsts_18, 1) = ((MR_Box) (Final_86));
        }
        break;
    }
    *Changed_10 = mercury__bool__or_2_f_0(ChangedA_17, ChangedB_19);
    switch (*Changed_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *UnifyMode_9 = UnifyMode0_8;
          *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 0))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 1))));
          MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 2))));
          MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 5))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_21 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_40));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_41));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_42));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (STATE_VARIABLE_TVarSet_26_26));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (STATE_VARIABLE_Cache_27_27));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_45));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *UnifyMode_9 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LHSFromToInsts_16));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (RHSFromToInsts_18));
          }
        }
        break;
    }
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
  {
    MR_Word Init0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FromToInsts0_10, (MR_Integer) 0))));
    MR_Word Final0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FromToInsts0_10, (MR_Integer) 1))));
    MR_Word Init_17;
    MR_Word ChangedA_18;
    MR_Word Final_19;
    MR_Word ChangedB_20;
    MR_Word STATE_VARIABLE_TVarSet_25_25;
    MR_Word STATE_VARIABLE_Cache_26_26;

    transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_9, Init0_15, &Init_17, &ChangedA_18, STATE_VARIABLE_TVarSet_0_21, &STATE_VARIABLE_TVarSet_25_25, STATE_VARIABLE_Cache_0_23, &STATE_VARIABLE_Cache_26_26);
    transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_9, Final0_16, &Final_19, &ChangedB_20, STATE_VARIABLE_TVarSet_25_25, STATE_VARIABLE_TVarSet_22, STATE_VARIABLE_Cache_26_26, STATE_VARIABLE_Cache_24);
    *Changed_12 = mercury__bool__or_2_f_0(ChangedA_18, ChangedB_20);
    switch (*Changed_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *FromToInsts_11 = FromToInsts0_10;
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *FromToInsts_11 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Init_17));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Final_19));
        }
        break;
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_ProcInfo_40;
    MR_Word conv2_STATE_VARIABLE_ModuleInfo_42;
    MR_Word conv1_STATE_VARIABLE_PredInfo_44;
    MR_Word conv0_STATE_VARIABLE_Cache_46;

    transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_STATE_VARIABLE_ProcInfo_40, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_ModuleInfo_42, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_PredInfo_44, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Cache_46);
    *wrapper_arg_2 = ((MR_Box) (conv3_STATE_VARIABLE_ProcInfo_40));
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_42));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_PredInfo_44));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_46));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_Cache_0_31,
  MR_Word * STATE_VARIABLE_Cache_32)
{
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
    MR_Word ItemId_25;
    MR_Word MaybeRecompInfo_26;
    MR_Word ProcMap0_27;
    MR_Word ProcMap_28;
    MR_Word STATE_VARIABLE_PredInfo_33_33;
    MR_Word Var_34;
    MR_Word STATE_VARIABLE_EquivTypeInfo_35_35;
    MR_Word STATE_VARIABLE_EquivTypeInfo_36_36;
    MR_Word STATE_VARIABLE_EquivTypeInfo_37_37;
    MR_Word STATE_VARIABLE_PredInfo_38_38;
    MR_Word STATE_VARIABLE_PredInfo_39_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Integer Var_45;
    MR_Word STATE_VARIABLE_ModuleInfo_46_46;
    MR_Word Var_47;
    MR_Word STATE_VARIABLE_ModuleInfo_48_48;
    MR_Word STATE_VARIABLE_PredInfo_49_49;
    MR_Word STATE_VARIABLE_PredInfo_51_51;
    MR_Word Var_20;
    MR_Box conv6_STATE_VARIABLE_ModuleInfo_48_48;
    MR_Box conv5_STATE_VARIABLE_PredInfo_49_49;
    MR_Box conv4_STATE_VARIABLE_Cache_32;

    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_29, &ModuleName_13);
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredId_8, &STATE_VARIABLE_PredInfo_33_33);
    hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_29, &MaybeRecompInfo0_14);
    PredName_15 = hlds__hlds_pred__pred_info_name_1_f_0(STATE_VARIABLE_PredInfo_33_33);
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (ModuleName_13));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (PredName_15));
    }
    recompilation__maybe_start_recording_expanded_items_4_p_0(ModuleName_13, Var_34, MaybeRecompInfo0_14, &STATE_VARIABLE_EquivTypeInfo_35_35);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(STATE_VARIABLE_PredInfo_33_33, &ArgTVarSet0_16, &ExistQVars_17, &ArgTypes0_18);
    parse_tree__equiv_type__replace_in_type_list_8_p_0(TypeEqvMap_7, ArgTypes0_18, &ArgTypes_19, &Var_20, ArgTVarSet0_16, &ArgTVarSet1_21, STATE_VARIABLE_EquivTypeInfo_35_35, &STATE_VARIABLE_EquivTypeInfo_36_36);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(STATE_VARIABLE_PredInfo_33_33, &ClassContext0_22);
    parse_tree__equiv_type__replace_in_prog_constraints_7_p_0(TypeEqvMap_7, ClassContext0_22, &ClassContext_23, ArgTVarSet1_21, &ArgTVarSet_24, STATE_VARIABLE_EquivTypeInfo_36_36, &STATE_VARIABLE_EquivTypeInfo_37_37);
    hlds__hlds_pred__pred_info_set_class_context_3_p_0(ClassContext_23, STATE_VARIABLE_PredInfo_33_33, &STATE_VARIABLE_PredInfo_38_38);
    hlds__hlds_pred__pred_info_set_arg_types_5_p_0(ArgTVarSet_24, ExistQVars_17, ArgTypes_19, STATE_VARIABLE_PredInfo_38_38, &STATE_VARIABLE_PredInfo_39_39);
    Var_41 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(STATE_VARIABLE_PredInfo_39_39);
    Var_40 = recompilation__pred_or_func_to_item_type_1_f_0(Var_41);
    Var_44 = hlds__hlds_pred__pred_info_module_1_f_0(STATE_VARIABLE_PredInfo_39_39);
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (PredName_15));
    }
    Var_45 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(STATE_VARIABLE_PredInfo_39_39);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (Var_45));
    }
    {
      ItemId_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemId_25, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), ItemId_25, 1) = ((MR_Box) (Var_42));
    }
    recompilation__finish_recording_expanded_items_4_p_0(ItemId_25, STATE_VARIABLE_EquivTypeInfo_37_37, MaybeRecompInfo0_14, &MaybeRecompInfo_26);
    hlds__hlds_module__module_info_set_maybe_recompilation_info_3_p_0(MaybeRecompInfo_26, STATE_VARIABLE_ModuleInfo_0_29, &STATE_VARIABLE_ModuleInfo_46_46);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_39_39, &ProcMap0_27);
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (TypeEqvMap_7));
    }
    mercury__map__map_values_foldl3_9_p_3((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[1]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), Var_47, ProcMap0_27, &ProcMap_28, ((MR_Box) (STATE_VARIABLE_ModuleInfo_46_46)), &conv6_STATE_VARIABLE_ModuleInfo_48_48, ((MR_Box) (STATE_VARIABLE_PredInfo_39_39)), &conv5_STATE_VARIABLE_PredInfo_49_49, ((MR_Box) (STATE_VARIABLE_Cache_0_31)), &conv4_STATE_VARIABLE_Cache_32);
    STATE_VARIABLE_ModuleInfo_48_48 = ((MR_Word) (conv6_STATE_VARIABLE_ModuleInfo_48_48));
    STATE_VARIABLE_PredInfo_49_49 = ((MR_Word) (conv5_STATE_VARIABLE_PredInfo_49_49));
    *STATE_VARIABLE_Cache_32 = ((MR_Word) (conv4_STATE_VARIABLE_Cache_32));
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcMap_28, STATE_VARIABLE_PredInfo_49_49, &STATE_VARIABLE_PredInfo_51_51);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_8, STATE_VARIABLE_PredInfo_51_51, STATE_VARIABLE_ModuleInfo_48_48, STATE_VARIABLE_ModuleInfo_30);
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_constructor_arg_5_p_0(
  MR_Word TypeEqvMap_6,
  MR_Word CtorArg0_7,
  MR_Word * CtorArg_8,
  MR_Word STATE_VARIABLE_TVarSet_0_16,
  MR_Word * STATE_VARIABLE_TVarSet_17)
{
  {
    MR_Word MaybeFieldName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArg0_7, (MR_Integer) 0))));
    MR_Word Type0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArg0_7, (MR_Integer) 1))));
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArg0_7, (MR_Integer) 2))));
    MR_Word Type_13;
    MR_Word Changed_14;
    MR_Word Var_15;

    parse_tree__equiv_type__replace_in_type_8_p_0(TypeEqvMap_6, Type0_11, &Type_13, &Changed_14, STATE_VARIABLE_TVarSet_0_16, STATE_VARIABLE_TVarSet_17, (MR_Word) ((MR_Integer) 0), &Var_15);
    switch (Changed_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *CtorArg_8 = CtorArg0_7;
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *CtorArg_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeFieldName_10));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_13));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_12));
        }
        break;
    }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_CtorArg_8;
    MR_Word conv0_STATE_VARIABLE_TVarSet_17;

    transform_hlds__equiv_type_hlds__replace_in_constructor_arg_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_CtorArg_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TVarSet_17);
    *wrapper_arg_2 = ((MR_Box) (conv1_CtorArg_8));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TVarSet_17));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0(
  MR_Word TypeEqvMap_4,
  MR_Word ConsDefn0_5,
  MR_Word * ConsDefn_6)
{
  {
    MR_Word TypeCtor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn0_5, (MR_Integer) 0))));
    MR_Word TVarSet0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn0_5, (MR_Integer) 1))));
    MR_Word TypeParams_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn0_5, (MR_Integer) 2))));
    MR_Word KindMap_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn0_5, (MR_Integer) 3))));
    MR_Word MaybeExistConstraints_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn0_5, (MR_Integer) 4))));
    MR_Word ConstructorArgs0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn0_5, (MR_Integer) 5))));
    MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn0_5, (MR_Integer) 6))));
    MR_Word ConstructorArgs_14;
    MR_Word TVarSet_15;
    MR_Word Var_16;
    MR_Box conv2_TVarSet_15;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (TypeEqvMap_4));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[3]), Var_16, ConstructorArgs0_12, &ConstructorArgs_14, ((MR_Box) (TVarSet0_8)), &conv2_TVarSet_15);
    TVarSet_15 = ((MR_Word) (conv2_TVarSet_15));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *ConsDefn_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeCtor_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TVarSet_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeParams_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (KindMap_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MaybeExistConstraints_11));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ConstructorArgs_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Context_13));
    }
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
  {
    MR_Word Name_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn0_9, (MR_Integer) 0))));
    MR_Word Type0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn0_9, (MR_Integer) 1))));
    MR_Word Width_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn0_9, (MR_Integer) 2))));
    MR_Word Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn0_9, (MR_Integer) 3))));
    MR_Word Type_17;
    MR_Word Changed_18;

    parse_tree__equiv_type__replace_in_type_8_p_0(TypeEqvMap_8, Type0_14, &Type_17, &Changed_18, STATE_VARIABLE_TVarSet_0_19, STATE_VARIABLE_TVarSet_20, STATE_VARIABLE_EquivTypeInfo_0_21, STATE_VARIABLE_EquivTypeInfo_22);
    switch (Changed_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *CtorArgRepn_10 = CtorArgRepn0_9;
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *CtorArgRepn_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_13));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_17));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Width_15));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_16));
        }
        break;
    }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_CtorArgRepn_10;
    MR_Word conv1_STATE_VARIABLE_TVarSet_20;
    MR_Word conv0_STATE_VARIABLE_EquivTypeInfo_22;

    transform_hlds__equiv_type_hlds__replace_in_ctor_arg_repn_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_CtorArgRepn_10, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_TVarSet_20, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_EquivTypeInfo_22);
    *wrapper_arg_2 = ((MR_Box) (conv2_CtorArgRepn_10));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_TVarSet_20));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_EquivTypeInfo_22));
  }
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
  {
    MR_Integer Ordinal_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CtorRepn0_11, (MR_Integer) 0))));
    MR_Word MaybeExistConstraints0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn0_11, (MR_Integer) 1))));
    MR_Word CtorName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn0_11, (MR_Integer) 2))));
    MR_Word Tag_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn0_11, (MR_Integer) 3))));
    MR_Word CtorArgRepns0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn0_11, (MR_Integer) 4))));
    MR_Integer Arity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CtorRepn0_11, (MR_Integer) 5))));
    MR_Word Context_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn0_11, (MR_Integer) 6))));
    MR_Word CtorArgRepns_23;
    MR_Word MaybeExistConstraints_24;
    MR_Word Var_38;
    MR_Word STATE_VARIABLE_TVarSet_39_39;
    MR_Word STATE_VARIABLE_EquivTypeInfo_40_40;
    MR_Box conv4_STATE_VARIABLE_TVarSet_39_39;
    MR_Box conv3_STATE_VARIABLE_EquivTypeInfo_40_40;

    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_ctor_repn_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (TypeEqvMap_10));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[3]), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[4]), Var_38, CtorArgRepns0_20, &CtorArgRepns_23, ((MR_Box) (STATE_VARIABLE_TVarSet_0_34)), &conv4_STATE_VARIABLE_TVarSet_39_39, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_36)), &conv3_STATE_VARIABLE_EquivTypeInfo_40_40);
    STATE_VARIABLE_TVarSet_39_39 = ((MR_Word) (conv4_STATE_VARIABLE_TVarSet_39_39));
    STATE_VARIABLE_EquivTypeInfo_40_40 = ((MR_Word) (conv3_STATE_VARIABLE_EquivTypeInfo_40_40));
    if ((MaybeExistConstraints0_17 == (MR_Word) ((MR_Integer) 0)))
    {
      MaybeExistConstraints_24 = (MR_Word) ((MR_Integer) 0);
      *STATE_VARIABLE_TVarSet_35 = STATE_VARIABLE_TVarSet_39_39;
      *STATE_VARIABLE_EquivTypeInfo_37 = STATE_VARIABLE_EquivTypeInfo_40_40;
    }
    else
    {
      MR_Word ExistConstraints0_25 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints0_17), (MR_Integer) 1));
      MR_Word ExistQVars_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_25, (MR_Integer) 0))));
      MR_Word Constraints0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_25, (MR_Integer) 1))));
      MR_Word UnconstrainedExistQVars_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_25, (MR_Integer) 2))));
      MR_Word ConstrainedExistQVars_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_25, (MR_Integer) 3))));
      MR_Word Constraints_30;
      MR_Word ExistConstraints_31;

      parse_tree__equiv_type__replace_in_prog_constraint_list_7_p_0(TypeEqvMap_10, Constraints0_27, &Constraints_30, STATE_VARIABLE_TVarSet_39_39, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_EquivTypeInfo_40_40, STATE_VARIABLE_EquivTypeInfo_37);
      {
        ExistConstraints_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ExistConstraints_31, 0) = ((MR_Box) (ExistQVars_26));
        MR_hl_field(MR_mktag(0), ExistConstraints_31, 1) = ((MR_Box) (Constraints_30));
        MR_hl_field(MR_mktag(0), ExistConstraints_31, 2) = ((MR_Box) (UnconstrainedExistQVars_28));
        MR_hl_field(MR_mktag(0), ExistConstraints_31, 3) = ((MR_Box) (ConstrainedExistQVars_29));
      }
      MaybeExistConstraints_24 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ExistConstraints_31)));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *CtorRepn_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Ordinal_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeExistConstraints_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (CtorName_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Tag_19));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (CtorArgRepns_23));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Arity_21));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Context_22));
    }
    hlds__hlds_data__insert_ctor_repn_into_map_3_p_0(*CtorRepn_12, STATE_VARIABLE_CtorNameToRepnMap_0_32, STATE_VARIABLE_CtorNameToRepnMap_33);
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_CtorRepn_12;
    MR_Word conv2_STATE_VARIABLE_CtorNameToRepnMap_33;
    MR_Word conv1_STATE_VARIABLE_TVarSet_35;
    MR_Word conv0_STATE_VARIABLE_EquivTypeInfo_37;

    transform_hlds__equiv_type_hlds__replace_in_ctor_repn_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_CtorRepn_12, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_CtorNameToRepnMap_33, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_TVarSet_35, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_EquivTypeInfo_37);
    *wrapper_arg_2 = ((MR_Box) (conv3_CtorRepn_12));
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_CtorNameToRepnMap_33));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_TVarSet_35));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_EquivTypeInfo_37));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_type_defn_7_p_0(
  MR_Word ModuleName_8,
  MR_Word TypeEqvMap_9,
  MR_Word TypeCtor_10,
  MR_Word STATE_VARIABLE_Defn_0_56,
  MR_Word * STATE_VARIABLE_Defn_57,
  MR_Word STATE_VARIABLE_MaybeRecompInfo_0_58,
  MR_Word * STATE_VARIABLE_MaybeRecompInfo_59)
{
  {
    MR_Word TVarSet0_13;
    MR_Word Body0_14;
    MR_Word TypeCtorSymName_15;
    MR_Word TypeCtorItem_17;
    MR_Word EquivTypeInfo0_18;
    MR_Word TVarSet_27;
    MR_Word EquivTypeInfo_28;
    MR_Word Body_38;
    MR_Word ItemId_55;
    MR_Word STATE_VARIABLE_Defn_64_64;

    hlds__hlds_data__get_type_defn_tvarset_2_p_0(STATE_VARIABLE_Defn_0_56, &TVarSet0_13);
    hlds__hlds_data__get_type_defn_body_2_p_0(STATE_VARIABLE_Defn_0_56, &Body0_14);
    TypeCtorSymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_10, (MR_Integer) 0))));
    TypeCtorItem_17 = recompilation__type_ctor_to_item_name_1_f_0(TypeCtor_10);
    recompilation__maybe_start_recording_expanded_items_4_p_0(ModuleName_8, TypeCtorSymName_15, STATE_VARIABLE_MaybeRecompInfo_0_58, &EquivTypeInfo0_18);
    switch (MR_tag((MR_Word) Body0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          EquivTypeInfo_28 = EquivTypeInfo0_18;
          Body_38 = Body0_14;
          TVarSet_27 = TVarSet0_13;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ctors0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_14, (MR_Integer) 0))));
          MR_Word MaybeCanonical_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_14, (MR_Integer) 1))));
          MR_Word MaybeRepn0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_14, (MR_Integer) 2))));
          MR_Word MaybeForeign_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_14, (MR_Integer) 3))));
          MR_Word Ctors_23;
          MR_Word TVarSet1_24;
          MR_Word EquivTypeInfo1_25;
          MR_Word MaybeRepn_26;

          parse_tree__equiv_type__replace_in_ctors_7_p_0(TypeEqvMap_9, Ctors0_19, &Ctors_23, TVarSet0_13, &TVarSet1_24, EquivTypeInfo0_18, &EquivTypeInfo1_25);
          if ((MaybeRepn0_21 == (MR_Word) ((MR_Integer) 0)))
          {
            MaybeRepn_26 = (MR_Word) ((MR_Integer) 0);
            TVarSet_27 = TVarSet1_24;
            EquivTypeInfo_28 = EquivTypeInfo1_25;
          }
          else
          {
            MR_Word Repn0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepn0_21, (MR_Integer) 0))));
            MR_Word CtorRepns0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn0_29, (MR_Integer) 0))));
            MR_Word CheaperTagTest_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn0_29, (MR_Integer) 2))));
            MR_Word DuKind_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn0_29, (MR_Integer) 3))));
            MR_Word DirectArgCtors_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn0_29, (MR_Integer) 4))));
            MR_Word CtorRepns_35;
            MR_Word CtorNameToRepnMap_36;
            MR_Word Repn_37;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Box conv6_CtorNameToRepnMap_36;
            MR_Box conv5_TVarSet_27;
            MR_Box conv4_EquivTypeInfo_28;

            {
              Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_7[0]));
              MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_type_defn_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (TypeEqvMap_9));
            }
            Var_61 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[2]));
            mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[2]), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[3]), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[4]), Var_60, CtorRepns0_30, &CtorRepns_35, ((MR_Box) (Var_61)), &conv6_CtorNameToRepnMap_36, ((MR_Box) (TVarSet1_24)), &conv5_TVarSet_27, ((MR_Box) (EquivTypeInfo1_25)), &conv4_EquivTypeInfo_28);
            CtorNameToRepnMap_36 = ((MR_Word) (conv6_CtorNameToRepnMap_36));
            TVarSet_27 = ((MR_Word) (conv5_TVarSet_27));
            EquivTypeInfo_28 = ((MR_Word) (conv4_EquivTypeInfo_28));
            {
              Repn_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Repn_37, 0) = ((MR_Box) (CtorRepns_35));
              MR_hl_field(MR_mktag(0), Repn_37, 1) = ((MR_Box) (CtorNameToRepnMap_36));
              MR_hl_field(MR_mktag(0), Repn_37, 2) = ((MR_Box) (CheaperTagTest_32));
              MR_hl_field(MR_mktag(0), Repn_37, 3) = ((MR_Box) (DuKind_33));
              MR_hl_field(MR_mktag(0), Repn_37, 4) = ((MR_Box) (DirectArgCtors_34));
            }
            {
              MaybeRepn_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeRepn_26, 0) = ((MR_Box) (Repn_37));
            }
          }
          {
            Body_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Body_38, 0) = ((MR_Box) (Ctors_23));
            MR_hl_field(MR_mktag(1), Body_38, 1) = ((MR_Box) (MaybeCanonical_20));
            MR_hl_field(MR_mktag(1), Body_38, 2) = ((MR_Box) (MaybeRepn_26));
            MR_hl_field(MR_mktag(1), Body_38, 3) = ((MR_Box) (MaybeForeign_22));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Type0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Body0_14, (MR_Integer) 0))));
          MR_Word Type_40;
          MR_Word Var_41;

          parse_tree__equiv_type__replace_in_type_8_p_0(TypeEqvMap_9, Type0_39, &Type_40, &Var_41, TVarSet0_13, &TVarSet_27, EquivTypeInfo0_18, &EquivTypeInfo_28);
          {
            Body_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Body_38, 0) = ((MR_Box) (Type_40));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Body0_14, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DetailsSolver0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Body0_14, (MR_Integer) 1))));
              MR_Word SolverTypeDetails0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver0_43, (MR_Integer) 0))));
              MR_Word UserEq_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver0_43, (MR_Integer) 1))));
              MR_Word RepnType0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails0_44, (MR_Integer) 0))));
              MR_Word GroundInst_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails0_44, (MR_Integer) 1))));
              MR_Word AnyInst_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails0_44, (MR_Integer) 2))));
              MR_Word MutableItems_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails0_44, (MR_Integer) 3))));
              MR_Word RepnType_50;
              MR_Word SolverTypeDetails_52;
              MR_Word DetailsSolver_53;
              MR_Word Var_51;

              parse_tree__equiv_type__replace_in_type_8_p_0(TypeEqvMap_9, RepnType0_46, &RepnType_50, &Var_51, TVarSet0_13, &TVarSet_27, EquivTypeInfo0_18, &EquivTypeInfo_28);
              {
                SolverTypeDetails_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SolverTypeDetails_52, 0) = ((MR_Box) (RepnType_50));
                MR_hl_field(MR_mktag(0), SolverTypeDetails_52, 1) = ((MR_Box) (GroundInst_47));
                MR_hl_field(MR_mktag(0), SolverTypeDetails_52, 2) = ((MR_Box) (AnyInst_48));
                MR_hl_field(MR_mktag(0), SolverTypeDetails_52, 3) = ((MR_Box) (MutableItems_49));
              }
              {
                DetailsSolver_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DetailsSolver_53, 0) = ((MR_Box) (SolverTypeDetails_52));
                MR_hl_field(MR_mktag(0), DetailsSolver_53, 1) = ((MR_Box) (UserEq_45));
              }
              {
                Body_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Body_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Body_38, 1) = ((MR_Box) (DetailsSolver_53));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              EquivTypeInfo_28 = EquivTypeInfo0_18;
              Body_38 = Body0_14;
              TVarSet_27 = TVarSet0_13;
            }
            break;
        }
        break;
    }
    {
      ItemId_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemId_55, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ItemId_55, 1) = ((MR_Box) (TypeCtorItem_17));
    }
    recompilation__finish_recording_expanded_items_4_p_0(ItemId_55, EquivTypeInfo_28, STATE_VARIABLE_MaybeRecompInfo_0_58, STATE_VARIABLE_MaybeRecompInfo_59);
    hlds__hlds_data__set_type_defn_body_3_p_0(Body_38, STATE_VARIABLE_Defn_0_56, &STATE_VARIABLE_Defn_64_64);
    hlds__hlds_data__set_type_defn_tvarset_3_p_0(TVarSet_27, STATE_VARIABLE_Defn_64_64, STATE_VARIABLE_Defn_57);
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__mark_eqv_exported_types_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word STATE_VARIABLE_TypeTable_0_8,
  MR_Word * STATE_VARIABLE_TypeTable_9)
{
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
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_to_eqv_map_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word Defn_8,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_24,
  MR_Word * STATE_VARIABLE_TypeEqvMap_25,
  MR_Word STATE_VARIABLE_EqvExportTypes_0_26,
  MR_Word * STATE_VARIABLE_EqvExportTypes_27)
{
  {
    MR_Word Body_11;

    hlds__hlds_data__get_type_defn_body_2_p_0(Defn_8, &Body_11);
    switch (MR_tag((MR_Word) Body_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_TypeEqvMap_25 = STATE_VARIABLE_TypeEqvMap_0_24;
          *STATE_VARIABLE_EqvExportTypes_27 = STATE_VARIABLE_EqvExportTypes_0_26;
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_TypeEqvMap_25 = STATE_VARIABLE_TypeEqvMap_0_24;
          *STATE_VARIABLE_EqvExportTypes_27 = STATE_VARIABLE_EqvExportTypes_0_26;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word EqvType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Body_11, (MR_Integer) 0))));
          MR_Word TVarSet_13;
          MR_Word Params_14;
          MR_Word TypeStatus_15;
          MR_Word IsExported_16;
          MR_Word Var_28;

          hlds__hlds_data__get_type_defn_tvarset_2_p_0(Defn_8, &TVarSet_13);
          hlds__hlds_data__get_type_defn_tparams_2_p_0(Defn_8, &Params_14);
          hlds__hlds_data__get_type_defn_status_2_p_0(Defn_8, &TypeStatus_15);
          {
            Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (TVarSet_13));
            MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (Params_14));
            MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) (EqvType_12));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0), ((MR_Box) (TypeCtor_7)), ((MR_Box) (Var_28)), STATE_VARIABLE_TypeEqvMap_0_24, STATE_VARIABLE_TypeEqvMap_25);
          IsExported_16 = hlds__status__type_status_is_exported_1_f_0(TypeStatus_15);
          switch (IsExported_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_EqvExportTypes_27 = STATE_VARIABLE_EqvExportTypes_0_26;
              break;
            case (MR_Integer) 1:
              transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0(EqvType_12, STATE_VARIABLE_EqvExportTypes_0_26, STATE_VARIABLE_EqvExportTypes_27);
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Body_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_TypeEqvMap_25 = STATE_VARIABLE_TypeEqvMap_0_24;
              *STATE_VARIABLE_EqvExportTypes_27 = STATE_VARIABLE_EqvExportTypes_0_26;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_TypeEqvMap_25 = STATE_VARIABLE_TypeEqvMap_0_24;
              *STATE_VARIABLE_EqvExportTypes_27 = STATE_VARIABLE_EqvExportTypes_0_26;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Set_9;

    transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Set_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Set_9));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_Set_0_8,
  MR_Word * STATE_VARIABLE_Set_9)
{
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
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[0]), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[11]), Args_7, ((MR_Box) (STATE_VARIABLE_Set_10_10)), &conv1_STATE_VARIABLE_Set_9);
      *STATE_VARIABLE_Set_9 = ((MR_Word) (conv1_STATE_VARIABLE_Set_9));
    }
    else
      *STATE_VARIABLE_Set_9 = STATE_VARIABLE_Set_0_8;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_STATE_VARIABLE_ModuleInfo_30;
    MR_Word conv10_STATE_VARIABLE_Cache_32;

    transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_ModuleInfo_30, ((MR_Word) (wrapper_arg_4)), &conv10_STATE_VARIABLE_Cache_32);
    *wrapper_arg_3 = ((MR_Box) (conv11_STATE_VARIABLE_ModuleInfo_30));
    *wrapper_arg_5 = ((MR_Box) (conv10_STATE_VARIABLE_Cache_32));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_ConsDefn_6;

    transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv9_ConsDefn_6);
    *wrapper_arg_2 = ((MR_Box) (conv9_ConsDefn_6));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_Defn_57;
    MR_Word conv6_STATE_VARIABLE_MaybeRecompInfo_59;

    transform_hlds__equiv_type_hlds__replace_in_type_defn_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Defn_57, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_MaybeRecompInfo_59);
    *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_Defn_57));
    *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_MaybeRecompInfo_59));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_TypeTable_9;

    transform_hlds__equiv_type_hlds__mark_eqv_exported_types_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_TypeTable_9);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_TypeTable_9));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_TypeEqvMap_25;
    MR_Word conv0_STATE_VARIABLE_EqvExportTypes_27;

    transform_hlds__equiv_type_hlds__add_type_to_eqv_map_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_TypeEqvMap_25, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_EqvExportTypes_27);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_TypeEqvMap_25));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_EqvExportTypes_27));
  }
}

void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21)
{
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
    MR_Word Var_66;
    MR_Box conv3_TypeEqvMap_5;
    MR_Box conv2_EqvExportTypes_6;
    MR_Box conv5_TypeTable1_7;
    MR_Box conv8_MaybeRecompInfo_11;
    MR_Box conv13_STATE_VARIABLE_ModuleInfo_21;
    MR_Box conv12_Var_19;

    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_20, &TypeTable0_4);
    Var_23 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0));
    Var_24 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    hlds__hlds_data__foldl2_over_type_ctor_defns_6_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[0]), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_2[0]), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[9]), TypeTable0_4, ((MR_Box) (Var_23)), &conv3_TypeEqvMap_5, ((MR_Box) (Var_24)), &conv2_EqvExportTypes_6);
    TypeEqvMap_5 = ((MR_Word) (conv3_TypeEqvMap_5));
    EqvExportTypes_6 = ((MR_Word) (conv2_EqvExportTypes_6));
    mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_type_table_0), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[10]), EqvExportTypes_6, ((MR_Box) (TypeTable0_4)), &conv5_TypeTable1_7);
    TypeTable1_7 = ((MR_Word) (conv5_TypeTable1_7));
    hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_20, &MaybeRecompInfo0_8);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_20, &ModuleName_9);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_3));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (TypeEqvMap_5));
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
      Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_4));
      MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (TypeEqvMap_5));
    }
    hlds__hlds_data__replace_cons_defns_in_cons_table_3_p_0(Var_66, ConsTable0_16, &ConsTable_17);
    hlds__hlds_module__module_info_set_cons_table_3_p_0(ConsTable_17, STATE_VARIABLE_ModuleInfo_29_29, &STATE_VARIABLE_ModuleInfo_30_30);
    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_30_30, &PredIds_18);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_5));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (TypeEqvMap_5));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[1]), Var_31, PredIds_18, ((MR_Box) (STATE_VARIABLE_ModuleInfo_30_30)), &conv13_STATE_VARIABLE_ModuleInfo_21, ((MR_Box) (InstCache_15)), &conv12_Var_19);
    *STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) (conv13_STATE_VARIABLE_ModuleInfo_21));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_table_5_p_0(
  MR_Word TypeEqvMap_6,
  MR_Word STATE_VARIABLE_InstTable_0_34,
  MR_Word * STATE_VARIABLE_InstTable_35,
  MR_Word STATE_VARIABLE_Cache_0_36,
  MR_Word * STATE_VARIABLE_Cache_37)
{
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
    transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho5_7_p_0(TypeEqvMap_6, UnifyInstPairs0_15, &UnifyInstPairs_21, STATE_VARIABLE_Cache_0_36, &STATE_VARIABLE_Cache_40_40);
    transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho4_7_p_0(TypeEqvMap_6, MergeInstPairs0_16, &MergeInstPairs_22, STATE_VARIABLE_Cache_40_40, &STATE_VARIABLE_Cache_43_43);
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
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho5_7_p_0(
  MR_Word TypeEqvMap_10,
  MR_Word SortedElements0_11,
  MR_Word * SortedElements_12,
  MR_Word STATE_VARIABLE_Cache_0_20,
  MR_Word * STATE_VARIABLE_Cache_21)
{
  {
    MR_Word RevSortedElements1_14;
    MR_Word UnSortedElements_15;

    transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho6_10_p_0(TypeEqvMap_10, SortedElements0_11, (MR_Word) ((MR_Integer) 0), &RevSortedElements1_14, (MR_Word) ((MR_Integer) 0), &UnSortedElements_15, STATE_VARIABLE_Cache_0_20, STATE_VARIABLE_Cache_21);
    if ((UnSortedElements_15 == (MR_Word) ((MR_Integer) 0)))
    {
      mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[8]), RevSortedElements1_14, SortedElements_12);
    }
    else
    {
      MR_Word SortedElements1_18;
      MR_Word NowSortedElements_19;

      mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[8]), RevSortedElements1_14, &SortedElements1_18);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[8]), UnSortedElements_15, &NowSortedElements_19);
      mercury__list__merge_and_remove_dups_3_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[8]), SortedElements1_18, NowSortedElements_19, SortedElements_12);
    }
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
    if ((HeadVar__4_4 == (MR_Word) ((MR_Integer) 0)))
    {
      *STATE_VARIABLE_Cache_10 = STATE_VARIABLE_Cache_0_9;
      *STATE_VARIABLE_UnSortedElements_8 = STATE_VARIABLE_UnSortedElements_0_7;
      *STATE_VARIABLE_RevSortedElements_6 = STATE_VARIABLE_RevSortedElements_0_5;
    }
    else
    {
      MR_Word Element0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Elements0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Key0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Element0_26, (MR_Integer) 0))));
      MR_Word Value0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Element0_26, (MR_Integer) 1))));
      MR_Word Key_33;
      MR_Word KeyChanged_34;
      MR_Word Value_35;
      MR_Word ValueChanged_36;
      MR_Word STATE_VARIABLE_Cache_44_44;
      MR_Word STATE_VARIABLE_Cache_45_45;
      MR_Word STATE_VARIABLE_UnSortedElements_46_46;
      MR_Word STATE_VARIABLE_RevSortedElements_47_47;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevSortedElements_0_5;
      MR_Word next_value_of_STATE_VARIABLE_UnSortedElements_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Cache_0_9;

      transform_hlds__equiv_type_hlds__replace_in_unify_inst_info_6_p_0(HeadVar__3_3, Key0_31, &Key_33, &KeyChanged_34, STATE_VARIABLE_Cache_0_9, &STATE_VARIABLE_Cache_44_44);
      transform_hlds__equiv_type_hlds__replace_in_maybe_inst_det_6_p_0(HeadVar__3_3, Value0_32, &Value_35, &ValueChanged_36, STATE_VARIABLE_Cache_44_44, &STATE_VARIABLE_Cache_45_45);
      switch (KeyChanged_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Element_37;

            switch (ValueChanged_36) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Element_37 = Element0_26;
                break;
              case (MR_Integer) 1:
                {
                  Element_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Element_37, 0) = ((MR_Box) (Key0_31));
                  MR_hl_field(MR_mktag(0), Element_37, 1) = ((MR_Box) (Value_35));
                }
                break;
            }
            {
              STATE_VARIABLE_RevSortedElements_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSortedElements_47_47, 0) = ((MR_Box) (Element_37));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSortedElements_47_47, 1) = ((MR_Box) (STATE_VARIABLE_RevSortedElements_0_5));
            }
            STATE_VARIABLE_UnSortedElements_46_46 = STATE_VARIABLE_UnSortedElements_0_7;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Element_51;

            {
              Element_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Element_51, 0) = ((MR_Box) (Key_33));
              MR_hl_field(MR_mktag(0), Element_51, 1) = ((MR_Box) (Value_35));
            }
            {
              STATE_VARIABLE_UnSortedElements_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_UnSortedElements_46_46, 0) = ((MR_Box) (Element_51));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_UnSortedElements_46_46, 1) = ((MR_Box) (STATE_VARIABLE_UnSortedElements_0_7));
            }
            STATE_VARIABLE_RevSortedElements_47_47 = STATE_VARIABLE_RevSortedElements_0_5;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Elements0_27;
      next_value_of_STATE_VARIABLE_RevSortedElements_0_5 = STATE_VARIABLE_RevSortedElements_47_47;
      next_value_of_STATE_VARIABLE_UnSortedElements_0_7 = STATE_VARIABLE_UnSortedElements_46_46;
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
  {
    MR_Word Live_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstInfo0_8, (MR_Integer) 0))));
    MR_Word Real_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstInfo0_8, (MR_Integer) 1))));
    MR_Word InstA0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstInfo0_8, (MR_Integer) 2))));
    MR_Word InstB0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstInfo0_8, (MR_Integer) 3))));
    MR_Word TVarSet0_16;
    MR_Word InstA_17;
    MR_Word ChangedA_18;
    MR_Word TVarSet1_19;
    MR_Word InstB_20;
    MR_Word ChangedB_21;
    MR_Word STATE_VARIABLE_Cache_25_25;
    MR_Word _TVarSet_22;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet0_16);
    transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_7, InstA0_14, &InstA_17, &ChangedA_18, TVarSet0_16, &TVarSet1_19, STATE_VARIABLE_Cache_0_23, &STATE_VARIABLE_Cache_25_25);
    transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_7, InstB0_15, &InstB_20, &ChangedB_21, TVarSet1_19, &_TVarSet_22, STATE_VARIABLE_Cache_25_25, STATE_VARIABLE_Cache_24);
    *Changed_10 = mercury__bool__or_2_f_0(ChangedA_18, ChangedB_21);
    switch (*Changed_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *UnifyInstInfo_9 = UnifyInstInfo0_8;
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *UnifyInstInfo_9 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Live_12));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Real_13));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (InstA_17));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (InstB_20));
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho4_7_p_0(
  MR_Word TypeEqvMap_10,
  MR_Word SortedElements0_11,
  MR_Word * SortedElements_12,
  MR_Word STATE_VARIABLE_Cache_0_20,
  MR_Word * STATE_VARIABLE_Cache_21)
{
  {
    MR_Word RevSortedElements1_14;
    MR_Word UnSortedElements_15;

    transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho7_10_p_0(TypeEqvMap_10, SortedElements0_11, (MR_Word) ((MR_Integer) 0), &RevSortedElements1_14, (MR_Word) ((MR_Integer) 0), &UnSortedElements_15, STATE_VARIABLE_Cache_0_20, STATE_VARIABLE_Cache_21);
    if ((UnSortedElements_15 == (MR_Word) ((MR_Integer) 0)))
    {
      mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[7]), RevSortedElements1_14, SortedElements_12);
    }
    else
    {
      MR_Word SortedElements1_18;
      MR_Word NowSortedElements_19;

      mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[7]), RevSortedElements1_14, &SortedElements1_18);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[7]), UnSortedElements_15, &NowSortedElements_19);
      mercury__list__merge_and_remove_dups_3_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[7]), SortedElements1_18, NowSortedElements_19, SortedElements_12);
    }
  }
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
    if ((HeadVar__4_4 == (MR_Word) ((MR_Integer) 0)))
    {
      *STATE_VARIABLE_Cache_10 = STATE_VARIABLE_Cache_0_9;
      *STATE_VARIABLE_UnSortedElements_8 = STATE_VARIABLE_UnSortedElements_0_7;
      *STATE_VARIABLE_RevSortedElements_6 = STATE_VARIABLE_RevSortedElements_0_5;
    }
    else
    {
      MR_Word Element0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Elements0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Key0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Element0_26, (MR_Integer) 0))));
      MR_Word Value0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Element0_26, (MR_Integer) 1))));
      MR_Word Key_33;
      MR_Word KeyChanged_34;
      MR_Word Value_35;
      MR_Word ValueChanged_36;
      MR_Word STATE_VARIABLE_Cache_44_44;
      MR_Word STATE_VARIABLE_Cache_45_45;
      MR_Word STATE_VARIABLE_UnSortedElements_46_46;
      MR_Word STATE_VARIABLE_RevSortedElements_47_47;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevSortedElements_0_5;
      MR_Word next_value_of_STATE_VARIABLE_UnSortedElements_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Cache_0_9;

      transform_hlds__equiv_type_hlds__replace_in_merge_inst_info_6_p_0(HeadVar__3_3, Key0_31, &Key_33, &KeyChanged_34, STATE_VARIABLE_Cache_0_9, &STATE_VARIABLE_Cache_44_44);
      transform_hlds__equiv_type_hlds__replace_in_maybe_inst_6_p_0(HeadVar__3_3, Value0_32, &Value_35, &ValueChanged_36, STATE_VARIABLE_Cache_44_44, &STATE_VARIABLE_Cache_45_45);
      switch (KeyChanged_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Element_37;

            switch (ValueChanged_36) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Element_37 = Element0_26;
                break;
              case (MR_Integer) 1:
                {
                  Element_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Element_37, 0) = ((MR_Box) (Key0_31));
                  MR_hl_field(MR_mktag(0), Element_37, 1) = ((MR_Box) (Value_35));
                }
                break;
            }
            {
              STATE_VARIABLE_RevSortedElements_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSortedElements_47_47, 0) = ((MR_Box) (Element_37));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSortedElements_47_47, 1) = ((MR_Box) (STATE_VARIABLE_RevSortedElements_0_5));
            }
            STATE_VARIABLE_UnSortedElements_46_46 = STATE_VARIABLE_UnSortedElements_0_7;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Element_51;

            {
              Element_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Element_51, 0) = ((MR_Box) (Key_33));
              MR_hl_field(MR_mktag(0), Element_51, 1) = ((MR_Box) (Value_35));
            }
            {
              STATE_VARIABLE_UnSortedElements_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_UnSortedElements_46_46, 0) = ((MR_Box) (Element_51));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_UnSortedElements_46_46, 1) = ((MR_Box) (STATE_VARIABLE_UnSortedElements_0_7));
            }
            STATE_VARIABLE_RevSortedElements_47_47 = STATE_VARIABLE_RevSortedElements_0_5;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Elements0_27;
      next_value_of_STATE_VARIABLE_RevSortedElements_0_5 = STATE_VARIABLE_RevSortedElements_47_47;
      next_value_of_STATE_VARIABLE_UnSortedElements_0_7 = STATE_VARIABLE_UnSortedElements_46_46;
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
  {
    MR_Word InstA0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MergeInstInfo0_8, (MR_Integer) 0))));
    MR_Word InstB0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MergeInstInfo0_8, (MR_Integer) 1))));
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
    *Changed_10 = mercury__bool__or_2_f_0(ChangedA_16, ChangedB_19);
    switch (*Changed_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *MergeInstInfo_9 = MergeInstInfo0_8;
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *MergeInstInfo_9 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InstA_15));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (InstB_18));
        }
        break;
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
  {
    MR_Word RevSortedElements1_14;
    MR_Word UnSortedElements_15;

    transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho8_10_p_0(TypeEqvMap_10, SortedElements0_11, (MR_Word) ((MR_Integer) 0), &RevSortedElements1_14, (MR_Word) ((MR_Integer) 0), &UnSortedElements_15, STATE_VARIABLE_Cache_0_20, STATE_VARIABLE_Cache_21);
    if ((UnSortedElements_15 == (MR_Word) ((MR_Integer) 0)))
    {
      mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[6]), RevSortedElements1_14, SortedElements_12);
    }
    else
    {
      MR_Word SortedElements1_18;
      MR_Word NowSortedElements_19;

      mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[6]), RevSortedElements1_14, &SortedElements1_18);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[6]), UnSortedElements_15, &NowSortedElements_19);
      mercury__list__merge_and_remove_dups_3_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[6]), SortedElements1_18, NowSortedElements_19, SortedElements_12);
    }
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
    if ((HeadVar__4_4 == (MR_Word) ((MR_Integer) 0)))
    {
      *STATE_VARIABLE_Cache_10 = STATE_VARIABLE_Cache_0_9;
      *STATE_VARIABLE_UnSortedElements_8 = STATE_VARIABLE_UnSortedElements_0_7;
      *STATE_VARIABLE_RevSortedElements_6 = STATE_VARIABLE_RevSortedElements_0_5;
    }
    else
    {
      MR_Word Element0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Elements0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Key0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Element0_26, (MR_Integer) 0))));
      MR_Word Value0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Element0_26, (MR_Integer) 1))));
      MR_Word KeyChanged_34;
      MR_Word Value_35;
      MR_Word ValueChanged_36;
      MR_Word STATE_VARIABLE_Cache_44_44;
      MR_Word STATE_VARIABLE_Cache_45_45;
      MR_Word STATE_VARIABLE_UnSortedElements_46_46;
      MR_Word STATE_VARIABLE_RevSortedElements_47_47;
      MR_Word InstName0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Key0_31, (MR_Integer) 0))));
      MR_Word InstName_65;
      MR_Word TVarSet0_74;
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Key0_31, (MR_Integer) 1)));
      MR_Word _TVarSet_75;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevSortedElements_0_5;
      MR_Word next_value_of_STATE_VARIABLE_UnSortedElements_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Cache_0_9;

      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet0_74);
      transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(HeadVar__3_3, InstName0_61, &InstName_65, &KeyChanged_34, TVarSet0_74, &_TVarSet_75, STATE_VARIABLE_Cache_0_9, &STATE_VARIABLE_Cache_44_44);
      transform_hlds__equiv_type_hlds__replace_in_maybe_inst_det_6_p_0(HeadVar__3_3, Value0_32, &Value_35, &ValueChanged_36, STATE_VARIABLE_Cache_44_44, &STATE_VARIABLE_Cache_45_45);
      switch (KeyChanged_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Element_37;

            switch (ValueChanged_36) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Element_37 = Element0_26;
                break;
              case (MR_Integer) 1:
                {
                  Element_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Element_37, 0) = ((MR_Box) (Key0_31));
                  MR_hl_field(MR_mktag(0), Element_37, 1) = ((MR_Box) (Value_35));
                }
                break;
            }
            {
              STATE_VARIABLE_RevSortedElements_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSortedElements_47_47, 0) = ((MR_Box) (Element_37));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSortedElements_47_47, 1) = ((MR_Box) (STATE_VARIABLE_RevSortedElements_0_5));
            }
            STATE_VARIABLE_UnSortedElements_46_46 = STATE_VARIABLE_UnSortedElements_0_7;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Element_51;
            MR_Word Key_78;

            {
              Key_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Key_78, 0) = ((MR_Box) (InstName_65));
              MR_hl_field(MR_mktag(0), Key_78, 1) = (MR_Box) (packed_args_0);
            }
            {
              Element_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Element_51, 0) = ((MR_Box) (Key_78));
              MR_hl_field(MR_mktag(0), Element_51, 1) = ((MR_Box) (Value_35));
            }
            {
              STATE_VARIABLE_UnSortedElements_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_UnSortedElements_46_46, 0) = ((MR_Box) (Element_51));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_UnSortedElements_46_46, 1) = ((MR_Box) (STATE_VARIABLE_UnSortedElements_0_7));
            }
            STATE_VARIABLE_RevSortedElements_47_47 = STATE_VARIABLE_RevSortedElements_0_5;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Elements0_27;
      next_value_of_STATE_VARIABLE_RevSortedElements_0_5 = STATE_VARIABLE_RevSortedElements_47_47;
      next_value_of_STATE_VARIABLE_UnSortedElements_0_7 = STATE_VARIABLE_UnSortedElements_46_46;
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
  {
    MR_Word RevSortedElements1_14;
    MR_Word UnSortedElements_15;

    transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho9_10_p_0(TypeEqvMap_10, SortedElements0_11, (MR_Word) ((MR_Integer) 0), &RevSortedElements1_14, (MR_Word) ((MR_Integer) 0), &UnSortedElements_15, STATE_VARIABLE_Cache_0_20, STATE_VARIABLE_Cache_21);
    if ((UnSortedElements_15 == (MR_Word) ((MR_Integer) 0)))
    {
      mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[5]), RevSortedElements1_14, SortedElements_12);
    }
    else
    {
      MR_Word SortedElements1_18;
      MR_Word NowSortedElements_19;

      mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[5]), RevSortedElements1_14, &SortedElements1_18);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[5]), UnSortedElements_15, &NowSortedElements_19);
      mercury__list__merge_and_remove_dups_3_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[5]), SortedElements1_18, NowSortedElements_19, SortedElements_12);
    }
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
    if ((HeadVar__4_4 == (MR_Word) ((MR_Integer) 0)))
    {
      *STATE_VARIABLE_Cache_10 = STATE_VARIABLE_Cache_0_9;
      *STATE_VARIABLE_UnSortedElements_8 = STATE_VARIABLE_UnSortedElements_0_7;
      *STATE_VARIABLE_RevSortedElements_6 = STATE_VARIABLE_RevSortedElements_0_5;
    }
    else
    {
      MR_Word Element0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Elements0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Key0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Element0_26, (MR_Integer) 0))));
      MR_Word Value0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Element0_26, (MR_Integer) 1))));
      MR_Word KeyChanged_34;
      MR_Word Value_35;
      MR_Word ValueChanged_36;
      MR_Word STATE_VARIABLE_Cache_44_44;
      MR_Word STATE_VARIABLE_Cache_45_45;
      MR_Word STATE_VARIABLE_UnSortedElements_46_46;
      MR_Word STATE_VARIABLE_RevSortedElements_47_47;
      MR_Word InstName0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Key0_31, (MR_Integer) 0))));
      MR_Word InstName_65;
      MR_Word TVarSet0_74;
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Key0_31, (MR_Integer) 1)));
      MR_Word _TVarSet_75;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevSortedElements_0_5;
      MR_Word next_value_of_STATE_VARIABLE_UnSortedElements_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Cache_0_9;

      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet0_74);
      transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(HeadVar__3_3, InstName0_61, &InstName_65, &KeyChanged_34, TVarSet0_74, &_TVarSet_75, STATE_VARIABLE_Cache_0_9, &STATE_VARIABLE_Cache_44_44);
      transform_hlds__equiv_type_hlds__replace_in_maybe_inst_det_6_p_0(HeadVar__3_3, Value0_32, &Value_35, &ValueChanged_36, STATE_VARIABLE_Cache_44_44, &STATE_VARIABLE_Cache_45_45);
      switch (KeyChanged_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Element_37;

            switch (ValueChanged_36) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Element_37 = Element0_26;
                break;
              case (MR_Integer) 1:
                {
                  Element_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Element_37, 0) = ((MR_Box) (Key0_31));
                  MR_hl_field(MR_mktag(0), Element_37, 1) = ((MR_Box) (Value_35));
                }
                break;
            }
            {
              STATE_VARIABLE_RevSortedElements_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSortedElements_47_47, 0) = ((MR_Box) (Element_37));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSortedElements_47_47, 1) = ((MR_Box) (STATE_VARIABLE_RevSortedElements_0_5));
            }
            STATE_VARIABLE_UnSortedElements_46_46 = STATE_VARIABLE_UnSortedElements_0_7;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Element_51;
            MR_Word Key_78;

            {
              Key_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Key_78, 0) = ((MR_Box) (InstName_65));
              MR_hl_field(MR_mktag(0), Key_78, 1) = (MR_Box) (packed_args_0);
            }
            {
              Element_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Element_51, 0) = ((MR_Box) (Key_78));
              MR_hl_field(MR_mktag(0), Element_51, 1) = ((MR_Box) (Value_35));
            }
            {
              STATE_VARIABLE_UnSortedElements_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_UnSortedElements_46_46, 0) = ((MR_Box) (Element_51));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_UnSortedElements_46_46, 1) = ((MR_Box) (STATE_VARIABLE_UnSortedElements_0_7));
            }
            STATE_VARIABLE_RevSortedElements_47_47 = STATE_VARIABLE_RevSortedElements_0_5;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Elements0_27;
      next_value_of_STATE_VARIABLE_RevSortedElements_0_5 = STATE_VARIABLE_RevSortedElements_47_47;
      next_value_of_STATE_VARIABLE_UnSortedElements_0_7 = STATE_VARIABLE_UnSortedElements_46_46;
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
  if ((MaybeInstDet0_8 == (MR_Word) ((MR_Integer) 0)))
  {
    *MaybeInstDet_9 = (MR_Word) ((MR_Integer) 0);
    *Changed_10 = (MR_Integer) 0;
    *STATE_VARIABLE_Cache_18 = STATE_VARIABLE_Cache_0_17;
  }
  else
  {
    MR_Word Inst0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInstDet0_8, (MR_Integer) 0))));
    MR_Word Det_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInstDet0_8, (MR_Integer) 1))));
    MR_Word TVarSet_14;
    MR_Word Inst_15;
    MR_Word Var_16;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet_14);
    transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_7, Inst0_12, &Inst_15, Changed_10, TVarSet_14, &Var_16, STATE_VARIABLE_Cache_0_17, STATE_VARIABLE_Cache_18);
    switch (*Changed_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *MaybeInstDet_9 = MaybeInstDet0_8;
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeInstDet_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Det_13));
        }
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
  {
    MR_Word RevSortedElements1_14;
    MR_Word UnSortedElements_15;

    transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho10_10_p_0(TypeEqvMap_10, SortedElements0_11, (MR_Word) ((MR_Integer) 0), &RevSortedElements1_14, (MR_Word) ((MR_Integer) 0), &UnSortedElements_15, STATE_VARIABLE_Cache_0_20, STATE_VARIABLE_Cache_21);
    if ((UnSortedElements_15 == (MR_Word) ((MR_Integer) 0)))
    {
      mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[4]), RevSortedElements1_14, SortedElements_12);
    }
    else
    {
      MR_Word SortedElements1_18;
      MR_Word NowSortedElements_19;

      mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[4]), RevSortedElements1_14, &SortedElements1_18);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[4]), UnSortedElements_15, &NowSortedElements_19);
      mercury__list__merge_and_remove_dups_3_p_0((MR_Word) (&transform_hlds__equiv_type_hlds_scalar_common_1[4]), SortedElements1_18, NowSortedElements_19, SortedElements_12);
    }
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
    if ((HeadVar__4_4 == (MR_Word) ((MR_Integer) 0)))
    {
      *STATE_VARIABLE_Cache_10 = STATE_VARIABLE_Cache_0_9;
      *STATE_VARIABLE_UnSortedElements_8 = STATE_VARIABLE_UnSortedElements_0_7;
      *STATE_VARIABLE_RevSortedElements_6 = STATE_VARIABLE_RevSortedElements_0_5;
    }
    else
    {
      MR_Word Element0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Elements0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Key0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Element0_26, (MR_Integer) 0))));
      MR_Word Value0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Element0_26, (MR_Integer) 1))));
      MR_Word Key_33;
      MR_Word KeyChanged_34;
      MR_Word Value_35;
      MR_Word ValueChanged_36;
      MR_Word STATE_VARIABLE_Cache_44_44;
      MR_Word STATE_VARIABLE_Cache_45_45;
      MR_Word STATE_VARIABLE_UnSortedElements_46_46;
      MR_Word STATE_VARIABLE_RevSortedElements_47_47;
      MR_Word TVarSet0_61;
      MR_Word _TVarSet_62;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevSortedElements_0_5;
      MR_Word next_value_of_STATE_VARIABLE_UnSortedElements_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Cache_0_9;

      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet0_61);
      transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(HeadVar__3_3, Key0_31, &Key_33, &KeyChanged_34, TVarSet0_61, &_TVarSet_62, STATE_VARIABLE_Cache_0_9, &STATE_VARIABLE_Cache_44_44);
      transform_hlds__equiv_type_hlds__replace_in_maybe_inst_6_p_0(HeadVar__3_3, Value0_32, &Value_35, &ValueChanged_36, STATE_VARIABLE_Cache_44_44, &STATE_VARIABLE_Cache_45_45);
      switch (KeyChanged_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Element_37;

            switch (ValueChanged_36) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Element_37 = Element0_26;
                break;
              case (MR_Integer) 1:
                {
                  Element_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Element_37, 0) = ((MR_Box) (Key0_31));
                  MR_hl_field(MR_mktag(0), Element_37, 1) = ((MR_Box) (Value_35));
                }
                break;
            }
            {
              STATE_VARIABLE_RevSortedElements_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSortedElements_47_47, 0) = ((MR_Box) (Element_37));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSortedElements_47_47, 1) = ((MR_Box) (STATE_VARIABLE_RevSortedElements_0_5));
            }
            STATE_VARIABLE_UnSortedElements_46_46 = STATE_VARIABLE_UnSortedElements_0_7;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Element_51;

            {
              Element_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Element_51, 0) = ((MR_Box) (Key_33));
              MR_hl_field(MR_mktag(0), Element_51, 1) = ((MR_Box) (Value_35));
            }
            {
              STATE_VARIABLE_UnSortedElements_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_UnSortedElements_46_46, 0) = ((MR_Box) (Element_51));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_UnSortedElements_46_46, 1) = ((MR_Box) (STATE_VARIABLE_UnSortedElements_0_7));
            }
            STATE_VARIABLE_RevSortedElements_47_47 = STATE_VARIABLE_RevSortedElements_0_5;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Elements0_27;
      next_value_of_STATE_VARIABLE_RevSortedElements_0_5 = STATE_VARIABLE_RevSortedElements_47_47;
      next_value_of_STATE_VARIABLE_UnSortedElements_0_7 = STATE_VARIABLE_UnSortedElements_46_46;
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
  if ((MaybeInst0_8 == (MR_Word) ((MR_Integer) 0)))
  {
    *MaybeInst_9 = (MR_Word) ((MR_Integer) 0);
    *Changed_10 = (MR_Integer) 0;
    *STATE_VARIABLE_Cache_17 = STATE_VARIABLE_Cache_0_16;
  }
  else
  {
    MR_Word Inst0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInst0_8, (MR_Integer) 0))));
    MR_Word TVarSet_13;
    MR_Word Inst_14;
    MR_Word Var_15;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet_13);
    transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_7, Inst0_12, &Inst_14, Changed_10, TVarSet_13, &Var_15, STATE_VARIABLE_Cache_0_16, STATE_VARIABLE_Cache_17);
    switch (*Changed_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *MaybeInst_9 = MaybeInst0_8;
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeInst_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_14));
        }
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Integer) 0)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Integer) 0);
    *HeadVar__4_4 = (MR_Integer) 0;
    *STATE_VARIABLE_Cache_8 = STATE_VARIABLE_Cache_0_7;
    *STATE_VARIABLE_TVarSet_6 = STATE_VARIABLE_TVarSet_0_5;
  }
  else
  {
    MR_Word Inst0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Insts0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Inst_24;
    MR_Word Changed0_25;
    MR_Word Insts_26;
    MR_Word Changed1_27;
    MR_Word STATE_VARIABLE_TVarSet_32_32;
    MR_Word STATE_VARIABLE_Cache_33_33;

    transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(HeadVar__1_1, Inst0_18, &Inst_24, &Changed0_25, STATE_VARIABLE_TVarSet_0_5, &STATE_VARIABLE_TVarSet_32_32, STATE_VARIABLE_Cache_0_7, &STATE_VARIABLE_Cache_33_33);
    transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(HeadVar__1_1, Insts0_19, &Insts_26, &Changed1_27, STATE_VARIABLE_TVarSet_32_32, STATE_VARIABLE_TVarSet_6, STATE_VARIABLE_Cache_33_33, STATE_VARIABLE_Cache_8);
    *HeadVar__4_4 = mercury__bool__or_2_f_0(Changed0_25, Changed1_27);
    switch (*HeadVar__4_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__3_3 = HeadVar__2_2;
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_26));
        }
        break;
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Integer) 0)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Integer) 0);
    *HeadVar__4_4 = (MR_Integer) 0;
    *STATE_VARIABLE_Cache_8 = STATE_VARIABLE_Cache_0_7;
    *STATE_VARIABLE_TVarSet_6 = STATE_VARIABLE_TVarSet_0_5;
  }
  else
  {
    MR_Word ConsId_18;
    MR_Word Insts0_19;
    MR_Word BoundInsts0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Insts_25;
    MR_Word InstsChanged_26;
    MR_Word BoundInsts_27;
    MR_Word BoundInstsChanged_28;
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_TVarSet_34_34;
    MR_Word STATE_VARIABLE_Cache_35_35;

    ConsId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0))));
    Insts0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 1))));
    transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(HeadVar__1_1, Insts0_19, &Insts_25, &InstsChanged_26, STATE_VARIABLE_TVarSet_0_5, &STATE_VARIABLE_TVarSet_34_34, STATE_VARIABLE_Cache_0_7, &STATE_VARIABLE_Cache_35_35);
    transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(HeadVar__1_1, BoundInsts0_20, &BoundInsts_27, &BoundInstsChanged_28, STATE_VARIABLE_TVarSet_34_34, STATE_VARIABLE_TVarSet_6, STATE_VARIABLE_Cache_35_35, STATE_VARIABLE_Cache_8);
    *HeadVar__4_4 = mercury__bool__or_2_f_0(InstsChanged_26, BoundInstsChanged_28);
    switch (*HeadVar__4_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__3_3 = HeadVar__2_2;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_38;

          {
            Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (ConsId_18));
            MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (Insts_25));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoundInsts_27));
          }
        }
        break;
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
  switch (MR_tag((MR_Word) InstName0_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Name_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName0_10, (MR_Integer) 0))));
        MR_Word Insts0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName0_10, (MR_Integer) 1))));
        MR_Word Insts_17;

        transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(TypeEqvMap_9, Insts0_16, &Insts_17, Changed_12, STATE_VARIABLE_TVarSet_0_34, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_Cache_0_36, STATE_VARIABLE_Cache_37);
        switch (*Changed_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *InstName_11 = InstName0_10;
            break;
          case (MR_Integer) 1:
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *InstName_11 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_15));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Insts_17));
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Live_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName0_10, (MR_Integer) 0))));
        MR_Word Real_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName0_10, (MR_Integer) 1))));
        MR_Word InstA0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName0_10, (MR_Integer) 2))));
        MR_Word InstB0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName0_10, (MR_Integer) 3))));
        MR_Word InstA_22;
        MR_Word ChangedA_23;
        MR_Word InstB_24;
        MR_Word ChangedB_25;
        MR_Word STATE_VARIABLE_TVarSet_56_56;
        MR_Word STATE_VARIABLE_Cache_57_57;

        transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_9, InstA0_20, &InstA_22, &ChangedA_23, STATE_VARIABLE_TVarSet_0_34, &STATE_VARIABLE_TVarSet_56_56, STATE_VARIABLE_Cache_0_36, &STATE_VARIABLE_Cache_57_57);
        transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_9, InstB0_21, &InstB_24, &ChangedB_25, STATE_VARIABLE_TVarSet_56_56, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_Cache_57_57, STATE_VARIABLE_Cache_37);
        *Changed_12 = mercury__bool__or_2_f_0(ChangedA_23, ChangedB_25);
        switch (*Changed_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *InstName_11 = InstName0_10;
            break;
          case (MR_Integer) 1:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              *InstName_11 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Live_18));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Real_19));
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (InstA_22));
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (InstB_24));
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word STATE_VARIABLE_TVarSet_52_52;
        MR_Word STATE_VARIABLE_Cache_53_53;
        MR_Word InstA0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName0_10, (MR_Integer) 0))));
        MR_Word InstB0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName0_10, (MR_Integer) 1))));
        MR_Word InstA_64;
        MR_Word ChangedA_65;
        MR_Word InstB_66;
        MR_Word ChangedB_67;

        transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_9, InstA0_62, &InstA_64, &ChangedA_65, STATE_VARIABLE_TVarSet_0_34, &STATE_VARIABLE_TVarSet_52_52, STATE_VARIABLE_Cache_0_36, &STATE_VARIABLE_Cache_53_53);
        transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_9, InstB0_63, &InstB_66, &ChangedB_67, STATE_VARIABLE_TVarSet_52_52, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_Cache_53_53, STATE_VARIABLE_Cache_37);
        *Changed_12 = mercury__bool__or_2_f_0(ChangedA_65, ChangedB_67);
        switch (*Changed_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *InstName_11 = InstName0_10;
            break;
          case (MR_Integer) 1:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *InstName_11 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (InstA_64));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (InstB_66));
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstName0_10, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Name0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName0_10, (MR_Integer) 1))));
            MR_Word Name_68;
            MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName0_10, (MR_Integer) 2)));

            transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(TypeEqvMap_9, Name0_26, &Name_68, Changed_12, STATE_VARIABLE_TVarSet_0_34, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_Cache_0_36, STATE_VARIABLE_Cache_37);
            switch (*Changed_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *InstName_11 = InstName0_10;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *InstName_11 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Name_68));
                  MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) (packed_args_1);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Name_71;
            MR_Word Name0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName0_10, (MR_Integer) 1))));
            MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName0_10, (MR_Integer) 2)));

            transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(TypeEqvMap_9, Name0_74, &Name_71, Changed_12, STATE_VARIABLE_TVarSet_0_34, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_Cache_0_36, STATE_VARIABLE_Cache_37);
            switch (*Changed_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *InstName_11 = InstName0_10;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *InstName_11 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Name_71));
                  MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) (packed_args_0);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Name_76;
            MR_Word Name0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName0_10, (MR_Integer) 1))));

            transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(TypeEqvMap_9, Name0_77, &Name_76, Changed_12, STATE_VARIABLE_TVarSet_0_34, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_Cache_0_36, STATE_VARIABLE_Cache_37);
            switch (*Changed_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *InstName_11 = InstName0_10;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *InstName_11 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Name_76));
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Name_78;
            MR_Word Name0_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName0_10, (MR_Integer) 1))));

            transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(TypeEqvMap_9, Name0_79, &Name_78, Changed_12, STATE_VARIABLE_TVarSet_0_34, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_Cache_0_36, STATE_VARIABLE_Cache_37);
            switch (*Changed_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *InstName_11 = InstName0_10;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *InstName_11 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Name_78));
                }
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Type0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName0_10, (MR_Integer) 2))));
            MR_Word Type_29;
            MR_Word Uniq_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName0_10, (MR_Integer) 1))));
            MR_Word Var_30;

            parse_tree__equiv_type__replace_in_type_8_p_0(TypeEqvMap_9, Type0_28, &Type_29, Changed_12, STATE_VARIABLE_TVarSet_0_34, STATE_VARIABLE_TVarSet_35, (MR_Word) ((MR_Integer) 0), &Var_30);
            switch (*Changed_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *InstName_11 = InstName0_10;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *InstName_11 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Uniq_80));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Type_29));
                }
                break;
            }
            *STATE_VARIABLE_Cache_37 = STATE_VARIABLE_Cache_0_36;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word TypeChanged_31;
            MR_Word Changed0_33;
            MR_Word STATE_VARIABLE_TVarSet_38_38;
            MR_Word Name_81;
            MR_Word Name0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName0_10, (MR_Integer) 2))));
            MR_Word Type0_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName0_10, (MR_Integer) 1))));
            MR_Word Type_84;
            MR_Word Var_32;

            parse_tree__equiv_type__replace_in_type_8_p_0(TypeEqvMap_9, Type0_83, &Type_84, &TypeChanged_31, STATE_VARIABLE_TVarSet_0_34, &STATE_VARIABLE_TVarSet_38_38, (MR_Word) ((MR_Integer) 0), &Var_32);
            transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(TypeEqvMap_9, Name0_82, &Name_81, &Changed0_33, STATE_VARIABLE_TVarSet_38_38, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_Cache_0_36, STATE_VARIABLE_Cache_37);
            *Changed_12 = mercury__bool__or_2_f_0(TypeChanged_31, Changed0_33);
            switch (*Changed_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *InstName_11 = InstName0_10;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *InstName_11 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_84));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Name_81));
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
transform_hlds__equiv_type_hlds__replace_in_inst_2_8_p_0(
  MR_Word TypeEqvMap_9,
  MR_Word Inst0_10,
  MR_Word * Inst_11,
  MR_Word * Changed_12,
  MR_Word STATE_VARIABLE_TVarSet_0_49,
  MR_Word * STATE_VARIABLE_TVarSet_50,
  MR_Word STATE_VARIABLE_Cache_0_51,
  MR_Word * STATE_VARIABLE_Cache_52)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Inst0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst0_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Inst_11 = Inst0_10;
              *Changed_12 = (MR_Integer) 0;
              *STATE_VARIABLE_TVarSet_50 = STATE_VARIABLE_TVarSet_0_49;
              *STATE_VARIABLE_Cache_52 = STATE_VARIABLE_Cache_0_51;
            }
            break;
          case (MR_Integer) 1:
            {
              *Inst_11 = Inst0_10;
              *Changed_12 = (MR_Integer) 0;
              *STATE_VARIABLE_TVarSet_50 = STATE_VARIABLE_TVarSet_0_49;
              *STATE_VARIABLE_Cache_52 = STATE_VARIABLE_Cache_0_51;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Type0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inst0_10, (MR_Integer) 0))));
          MR_Word Type_27;
          MR_Word Var_28;

          parse_tree__equiv_type__replace_in_type_8_p_0(TypeEqvMap_9, Type0_26, &Type_27, Changed_12, STATE_VARIABLE_TVarSet_0_49, STATE_VARIABLE_TVarSet_50, (MR_Word) ((MR_Integer) 0), &Var_28);
          switch (*Changed_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *Inst_11 = Inst0_10;
              break;
            case (MR_Integer) 1:
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *Inst_11 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Type_27));
              }
              break;
          }
          *STATE_VARIABLE_Cache_52 = STATE_VARIABLE_Cache_0_51;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_10, (MR_Integer) 1))));
          MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_10, (MR_Integer) 0))));

          if ((Var_87 == (MR_Word) ((MR_Integer) 0)))
          {
            *Inst_11 = Inst0_10;
            *Changed_12 = (MR_Integer) 0;
            *STATE_VARIABLE_TVarSet_50 = STATE_VARIABLE_TVarSet_0_49;
            *STATE_VARIABLE_Cache_52 = STATE_VARIABLE_Cache_0_51;
          }
          else
          {
            MR_Word PredInstInfo0_19 = (MR_Word) (MR_body((MR_Word) (Var_87), (MR_Integer) 1));
            MR_Word PorF_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_19, (MR_Integer) 0))));
            MR_Word Modes0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_19, (MR_Integer) 1))));
            MR_Word MaybeArgRegs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_19, (MR_Integer) 2))));
            MR_Word Det_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_19, (MR_Integer) 3))));
            MR_Word Modes_24;

            transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(TypeEqvMap_9, Modes0_21, &Modes_24, Changed_12, STATE_VARIABLE_TVarSet_0_49, STATE_VARIABLE_TVarSet_50, STATE_VARIABLE_Cache_0_51, STATE_VARIABLE_Cache_52);
            switch (*Changed_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *Inst_11 = Inst0_10;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PredInstInfo_25;
                  MR_Word Var_72;

                  {
                    PredInstInfo_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), PredInstInfo_25, 0) = ((MR_Box) (PorF_20));
                    MR_hl_field(MR_mktag(0), PredInstInfo_25, 1) = ((MR_Box) (Modes_24));
                    MR_hl_field(MR_mktag(0), PredInstInfo_25, 2) = ((MR_Box) (MaybeArgRegs_22));
                    MR_hl_field(MR_mktag(0), PredInstInfo_25, 3) = ((MR_Box) (Det_23));
                  }
                  Var_72 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInstInfo_25)));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_11 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_88));
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_72));
                  }
                }
                break;
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Inst0_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstResults0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_10, (MR_Integer) 2))));
              MR_Word BoundInsts0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_10, (MR_Integer) 3))));
              MR_Word Uniq_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_10, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) InstResults0_29)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(InstResults0_29)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word BoundInsts_40;

                        transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(TypeEqvMap_9, BoundInsts0_30, &BoundInsts_40, Changed_12, STATE_VARIABLE_TVarSet_0_49, STATE_VARIABLE_TVarSet_50, STATE_VARIABLE_Cache_0_51, STATE_VARIABLE_Cache_52);
                        switch (*Changed_12) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *Inst_11 = Inst0_10;
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                              *Inst_11 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Uniq_75));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults0_29));
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_40));
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *Changed_12 = (MR_Integer) 0;
                        *Inst_11 = Inst0_10;
                        *STATE_VARIABLE_TVarSet_50 = STATE_VARIABLE_TVarSet_0_49;
                        *STATE_VARIABLE_Cache_52 = STATE_VARIABLE_Cache_0_51;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GroundnessResult_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults0_29, (MR_Integer) 0))));
                    MR_Word AnyResult_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults0_29, (MR_Integer) 1))));
                    MR_Word InstNamesResult_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults0_29, (MR_Integer) 2))));
                    MR_Word InstVarsResult_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults0_29, (MR_Integer) 3))));
                    MR_Word TypeResult_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults0_29, (MR_Integer) 4))));
                    MR_Word PropagatedResult_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults0_29, (MR_Integer) 5))));

                    if ((TypeResult_35 == (MR_Word) ((MR_Integer) 0)))
                    {
                      MR_Word BoundInsts_102;

                      transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(TypeEqvMap_9, BoundInsts0_30, &BoundInsts_102, Changed_12, STATE_VARIABLE_TVarSet_0_49, STATE_VARIABLE_TVarSet_50, STATE_VARIABLE_Cache_0_51, STATE_VARIABLE_Cache_52);
                      switch (*Changed_12) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *Inst_11 = Inst0_10;
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                            *Inst_11 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Uniq_75));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults0_29));
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_102));
                          }
                          break;
                      }
                    }
                    else
                    {
                      MR_Word TypeCtors_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeResult_35, (MR_Integer) 0))));

                      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), TypeCtors_38);
                      if (succeeded)
                      {
                        *Changed_12 = (MR_Integer) 0;
                        *Inst_11 = Inst0_10;
                        *STATE_VARIABLE_TVarSet_50 = STATE_VARIABLE_TVarSet_0_49;
                        *STATE_VARIABLE_Cache_52 = STATE_VARIABLE_Cache_0_51;
                      }
                      else
                      {
                        MR_Word InstResults_91;
                        MR_Word BoundInsts_92;

                        {
                          InstResults_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), InstResults_91, 0) = ((MR_Box) (GroundnessResult_31));
                          MR_hl_field(MR_mktag(1), InstResults_91, 1) = ((MR_Box) (AnyResult_32));
                          MR_hl_field(MR_mktag(1), InstResults_91, 2) = ((MR_Box) (InstNamesResult_33));
                          MR_hl_field(MR_mktag(1), InstResults_91, 3) = ((MR_Box) (InstVarsResult_34));
                          MR_hl_field(MR_mktag(1), InstResults_91, 4) = ((MR_Box) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(1), InstResults_91, 5) = ((MR_Box) (PropagatedResult_36));
                        }
                        transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(TypeEqvMap_9, BoundInsts0_30, &BoundInsts_92, Changed_12, STATE_VARIABLE_TVarSet_0_49, STATE_VARIABLE_TVarSet_50, STATE_VARIABLE_Cache_0_51, STATE_VARIABLE_Cache_52);
                        switch (*Changed_12) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *Inst_11 = Inst0_10;
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                              *Inst_11 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Uniq_75));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults_91));
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_92));
                            }
                            break;
                        }
                      }
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_10, (MR_Integer) 2))));
              MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_10, (MR_Integer) 1))));

              if ((Var_89 == (MR_Word) ((MR_Integer) 0)))
              {
                *Inst_11 = Inst0_10;
                *Changed_12 = (MR_Integer) 0;
                *STATE_VARIABLE_TVarSet_50 = STATE_VARIABLE_TVarSet_0_49;
                *STATE_VARIABLE_Cache_52 = STATE_VARIABLE_Cache_0_51;
              }
              else
              {
                MR_Word PredInstInfo0_79 = (MR_Word) (MR_body((MR_Word) (Var_89), (MR_Integer) 1));
                MR_Word PorF_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_79, (MR_Integer) 0))));
                MR_Word Modes0_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_79, (MR_Integer) 1))));
                MR_Word MaybeArgRegs_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_79, (MR_Integer) 2))));
                MR_Word Det_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_79, (MR_Integer) 3))));
                MR_Word Modes_84;

                transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(TypeEqvMap_9, Modes0_81, &Modes_84, Changed_12, STATE_VARIABLE_TVarSet_0_49, STATE_VARIABLE_TVarSet_50, STATE_VARIABLE_Cache_0_51, STATE_VARIABLE_Cache_52);
                switch (*Changed_12) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *Inst_11 = Inst0_10;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_62;
                      MR_Word PredInstInfo_76;

                      {
                        PredInstInfo_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), PredInstInfo_76, 0) = ((MR_Box) (PorF_80));
                        MR_hl_field(MR_mktag(0), PredInstInfo_76, 1) = ((MR_Box) (Modes_84));
                        MR_hl_field(MR_mktag(0), PredInstInfo_76, 2) = ((MR_Box) (MaybeArgRegs_82));
                        MR_hl_field(MR_mktag(0), PredInstInfo_76, 3) = ((MR_Box) (Det_83));
                      }
                      Var_62 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInstInfo_76)));
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_11 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_90));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_62));
                      }
                    }
                    break;
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              *Inst_11 = Inst0_10;
              *Changed_12 = (MR_Integer) 0;
              *STATE_VARIABLE_TVarSet_50 = STATE_VARIABLE_TVarSet_0_49;
              *STATE_VARIABLE_Cache_52 = STATE_VARIABLE_Cache_0_51;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Vars_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_10, (MR_Integer) 1))));
              MR_Word CInst0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_10, (MR_Integer) 2))));
              MR_Word CInst_43;

              transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(TypeEqvMap_9, CInst0_42, &CInst_43, Changed_12, STATE_VARIABLE_TVarSet_0_49, STATE_VARIABLE_TVarSet_50, STATE_VARIABLE_Cache_0_51, STATE_VARIABLE_Cache_52);
              switch (*Changed_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Inst_11 = Inst0_10;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_11 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_41));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (CInst_43));
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_10, (MR_Integer) 1))));
              MR_Word InstName_45;

              transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(TypeEqvMap_9, InstName0_44, &InstName_45, Changed_12, STATE_VARIABLE_TVarSet_0_49, STATE_VARIABLE_TVarSet_50, STATE_VARIABLE_Cache_0_51, STATE_VARIABLE_Cache_52);
              switch (*Changed_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Inst_11 = Inst0_10;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_11 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstName_45));
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Name_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_10, (MR_Integer) 1))));
              MR_Word ArgInsts0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_10, (MR_Integer) 2))));
              MR_Word ArgInsts_48;

              transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(TypeEqvMap_9, ArgInsts0_47, &ArgInsts_48, Changed_12, STATE_VARIABLE_TVarSet_0_49, STATE_VARIABLE_TVarSet_50, STATE_VARIABLE_Cache_0_51, STATE_VARIABLE_Cache_52);
              switch (*Changed_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Inst_11 = Inst0_10;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_11 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Name_46));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ArgInsts_48));
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
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
        {
          MR_Word Inst1_16;
          MR_Word STATE_VARIABLE_Cache_22_22;

          transform_hlds__equiv_type_hlds__replace_in_inst_2_8_p_0(TypeEqvMap_9, Inst0_10, &Inst1_16, Changed_12, STATE_VARIABLE_TVarSet_0_17, STATE_VARIABLE_TVarSet_18, STATE_VARIABLE_Cache_0_19, &STATE_VARIABLE_Cache_22_22);
          switch (*Changed_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *Inst_11 = Inst1_16;
                *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_22_22;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Inst1_29;
                MR_Box conv0_Inst1_29;

                succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), STATE_VARIABLE_Cache_22_22, ((MR_Box) (Inst1_16)), &conv0_Inst1_29);
                if (succeeded)
                {
                  Inst1_29 = ((MR_Word) (conv0_Inst1_29));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  *Inst_11 = Inst1_29;
                  *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_22_22;
                }
                else
                {
                  *Inst_11 = Inst1_16;
                  *STATE_VARIABLE_Cache_20 = mercury__map__det_insert_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), STATE_VARIABLE_Cache_22_22, ((MR_Box) (*Inst_11)), ((MR_Box) (*Inst_11)));
                }
              }
              break;
          }
        }
        break;
    }
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Integer) 0)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Integer) 0);
    *HeadVar__4_4 = (MR_Integer) 0;
    *STATE_VARIABLE_Cache_8 = STATE_VARIABLE_Cache_0_7;
    *STATE_VARIABLE_TVarSet_6 = STATE_VARIABLE_TVarSet_0_5;
  }
  else
  {
    MR_Word Mode0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Modes0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Mode_24;
    MR_Word Changed0_25;
    MR_Word Modes_26;
    MR_Word Changed1_27;
    MR_Word STATE_VARIABLE_TVarSet_32_32;
    MR_Word STATE_VARIABLE_Cache_33_33;

    if (((MR_tag((MR_Word) Mode0_18)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word Init0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode0_18, (MR_Integer) 0))));
      MR_Word Final0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode0_18, (MR_Integer) 1))));
      MR_Word Init_48;
      MR_Word ChangedA_49;
      MR_Word Final_50;
      MR_Word ChangedB_51;
      MR_Word STATE_VARIABLE_TVarSet_30_57;
      MR_Word STATE_VARIABLE_Cache_31_58;

      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(HeadVar__1_1, Init0_46, &Init_48, &ChangedA_49, STATE_VARIABLE_TVarSet_0_5, &STATE_VARIABLE_TVarSet_30_57, STATE_VARIABLE_Cache_0_7, &STATE_VARIABLE_Cache_31_58);
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(HeadVar__1_1, Final0_47, &Final_50, &ChangedB_51, STATE_VARIABLE_TVarSet_30_57, &STATE_VARIABLE_TVarSet_32_32, STATE_VARIABLE_Cache_31_58, &STATE_VARIABLE_Cache_33_33);
      Changed0_25 = mercury__bool__or_2_f_0(ChangedA_49, ChangedB_51);
      switch (Changed0_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Mode_24 = Mode0_18;
          break;
        case (MR_Integer) 1:
          {
            Mode_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Mode_24, 0) = ((MR_Box) (Init_48));
            MR_hl_field(MR_mktag(0), Mode_24, 1) = ((MR_Box) (Final_50));
          }
          break;
      }
    }
    else
    {
      MR_Word Name_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode0_18, (MR_Integer) 0))));
      MR_Word Insts0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode0_18, (MR_Integer) 1))));
      MR_Word Insts_54;

      transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(HeadVar__1_1, Insts0_53, &Insts_54, &Changed0_25, STATE_VARIABLE_TVarSet_0_5, &STATE_VARIABLE_TVarSet_32_32, STATE_VARIABLE_Cache_0_7, &STATE_VARIABLE_Cache_33_33);
      switch (Changed0_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Mode_24 = Mode0_18;
          break;
        case (MR_Integer) 1:
          {
            Mode_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Mode_24, 0) = ((MR_Box) (Name_52));
            MR_hl_field(MR_mktag(1), Mode_24, 1) = ((MR_Box) (Insts_54));
          }
          break;
      }
    }
    transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(HeadVar__1_1, Modes0_19, &Modes_26, &Changed1_27, STATE_VARIABLE_TVarSet_32_32, STATE_VARIABLE_TVarSet_6, STATE_VARIABLE_Cache_33_33, STATE_VARIABLE_Cache_8);
    *HeadVar__4_4 = mercury__bool__or_2_f_0(Changed0_25, Changed1_27);
    switch (*HeadVar__4_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__3_3 = HeadVar__2_2;
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Mode_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Modes_26));
        }
        break;
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
          MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_3, (MR_Integer) 1))));

          if ((Var_47 == (MR_Word) ((MR_Integer) 0)))
            MayOccur_4 = (MR_Integer) 0;
          else
            MayOccur_4 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Inst_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstResults_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_3, (MR_Integer) 2))));
              MR_Word BoundInsts_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_3, (MR_Integer) 3))));

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

	Inst =  Inst_3 ;
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

	Inst =  Inst_3 ;
	MayOccur =  MayOccur_4 ;
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
                    MR_Word TypeResult_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults_14, (MR_Integer) 4))));

                    if ((TypeResult_44 == (MR_Word) ((MR_Integer) 0)))
                    {
                      MR_Word Found_36;
                      MR_Word OldMayOccur_37;

{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0

	MR_Word Inst;
	MR_Word Found;
	MR_Word MayOccur;

	Inst =  Inst_3 ;
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
    }


		;}
#undef MR_PROC_LABEL
	 Found_36  = Found;
	 OldMayOccur_37  = MayOccur;
}
                      switch (Found_36) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MayOccur_4 = transform_hlds__equiv_type_hlds__type_may_occur_in_bound_insts_1_f_0(BoundInsts_15);
{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0

	MR_Word Inst;
	MR_Word MayOccur;

	Inst =  Inst_3 ;
	MayOccur =  MayOccur_4 ;
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
                          MayOccur_4 = OldMayOccur_37;
                          break;
                      }
                    }
                    else
                    {
                      MR_Word TypeCtors_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeResult_44, (MR_Integer) 0))));

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
              MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_3, (MR_Integer) 2))));

              if ((Var_49 == (MR_Word) ((MR_Integer) 0)))
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
              MR_Word CInst_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_3, (MR_Integer) 2))));
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
              MR_Word ArgInsts_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_3, (MR_Integer) 2))));

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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Inst_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word BoundInst_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInsts_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Insts_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_3, (MR_Integer) 1))));
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
  {
    MR_bool succeeded;

    succeeded = transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____replace_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__equiv_type_hlds____Unify____replace_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____replace_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__equiv_type_hlds____Compare____replace_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
