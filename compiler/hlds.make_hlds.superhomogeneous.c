/*
** Automatically generated from `superhomogeneous.m'
** by the Mercury compiler,
** version rotd-2026-08-24
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


// :- module hlds.make_hlds.superhomogeneous.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__superhomogeneous__init
ENDINIT
*/

#include "hlds.make_hlds.superhomogeneous.mih"


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
#include "edit_seq.mih"
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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.from_ground_term_util.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.build_eqv_maps.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_goal.mih"
#include "parse_tree.parse_goal_util.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.parse_type_name.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_inst_mode.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_pred_proc_id.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_mode.mih"
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
#include "hlds.make_hlds.field_access.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"
#include "hlds.make_hlds.superhomogeneous_lambda.mih"
#include "hlds.make_hlds.superhomogeneous_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__superhomogeneous__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term_context__type_ctor_info_term_context_0;

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____ancestor_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____ancestor_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__project_expansion_goals_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * GoalCord_4);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_num_context_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_SVarState_0_3,
  MR_Word * STATE_VARIABLE_SVarState_4,
  MR_Word STATE_VARIABLE_UrInfo_0_5,
  MR_Word * STATE_VARIABLE_UrInfo_6);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_52_93_95_48_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_SVarState_0_8,
  MR_Word * STATE_VARIABLE_SVarState_9,
  MR_Word STATE_VARIABLE_UrInfo_0_10,
  MR_Word * STATE_VARIABLE_UrInfo_11);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_117_110_114_97_118_101_108_95_115_112_101_99_105_97_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_14_p_0(
  MR_Word XVar_15,
  MR_String YAtom_16,
  MR_Word YArgTerms_17,
  MR_Word YFunctorContext_18,
  MR_Word Context_19,
  MR_Word MainContext_20,
  MR_Word SubContext_21,
  MR_Word Purity_22,
  MR_Word * Expansion_24,
  MR_Word STATE_VARIABLE_SVarState_0_74,
  MR_Word * STATE_VARIABLE_SVarState_75,
  MR_Word STATE_VARIABLE_UrInfo_0_76,
  MR_Word * STATE_VARIABLE_UrInfo_77);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_13_p_0(
  MR_Word XVar_14,
  MR_Word YTerm_15,
  MR_Word Context_16,
  MR_Word MainContext_17,
  MR_Word SubContext_18,
  MR_Word Purity_19,
  MR_Word AncestorVarMap_21,
  MR_Word * Expansion_22,
  MR_Word STATE_VARIABLE_SVarState_0_31,
  MR_Word * STATE_VARIABLE_SVarState_32,
  MR_Word STATE_VARIABLE_UrInfo_0_33,
  MR_Word * STATE_VARIABLE_UrInfo_34);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_12_p_0(
  MR_Word XVar_13,
  MR_Word YTerm0_14,
  MR_Word Context_15,
  MR_Word MainContext_16,
  MR_Word SubContext_17,
  MR_Word Purity_18,
  MR_Word * Expansion_20,
  MR_Word STATE_VARIABLE_SVarState_0_24,
  MR_Word * STATE_VARIABLE_SVarState_25,
  MR_Word STATE_VARIABLE_UrInfo_0_26,
  MR_Word * STATE_VARIABLE_UrInfo_27);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_12_p_0(
  MR_Word XVar_13,
  MR_Word YTerm_14,
  MR_Word Context_15,
  MR_Word ArgContext_16,
  MR_Integer ArgNum_18,
  MR_Word AncestorVarMap_19,
  MR_Word * Expansion_20,
  MR_Word STATE_VARIABLE_SVarState_0_32,
  MR_Word * STATE_VARIABLE_SVarState_33,
  MR_Word STATE_VARIABLE_UrInfo_0_34,
  MR_Word * STATE_VARIABLE_UrInfo_35);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_15_p_0(
  MR_Word XVar_16,
  MR_Word YFunctor_17,
  MR_Word YArgTerms0_18,
  MR_Word YFunctorContext_19,
  MR_Word Context_20,
  MR_Word MainContext_21,
  MR_Word SubContext_22,
  MR_Word Purity_23,
  MR_Word AncestorVarMap_25,
  MR_Word * Expansion_26,
  MR_Word STATE_VARIABLE_SVarState_0_32,
  MR_Word * STATE_VARIABLE_SVarState_33,
  MR_Word STATE_VARIABLE_UrInfo_0_34,
  MR_Word * STATE_VARIABLE_UrInfo_35);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_std_14_p_0(
  MR_Word XVar_15,
  MR_Word YFunctor_16,
  MR_Word YArgTerms_17,
  MR_Word YFunctorContext_18,
  MR_Word Context_19,
  MR_Word MainContext_20,
  MR_Word SubContext_21,
  MR_Word Purity_22,
  MR_Word AncestorVarMap_23,
  MR_Word * Expansion_24,
  MR_Word STATE_VARIABLE_SVarState_0_39,
  MR_Word * STATE_VARIABLE_SVarState_40,
  MR_Word STATE_VARIABLE_UrInfo_0_41,
  MR_Word * STATE_VARIABLE_UrInfo_42);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_SVarState_0_10,
  MR_Word * STATE_VARIABLE_SVarState_11,
  MR_Word STATE_VARIABLE_UrInfo_0_12,
  MR_Word * STATE_VARIABLE_UrInfo_13);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_51_93_95_48_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_SVarState_0_6,
  MR_Word * STATE_VARIABLE_SVarState_7,
  MR_Word STATE_VARIABLE_UrInfo_0_8,
  MR_Word * STATE_VARIABLE_UrInfo_9);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__build_var_cons_id_unification_14_p_0(
  MR_Word XVar_15,
  MR_Word ConsId_16,
  MR_Word MaybeQualifiedYArgTerms_17,
  MR_Word YFunctorContext_18,
  MR_Word Context_19,
  MR_Word MainContext_20,
  MR_Word SubContext_21,
  MR_Word Purity_22,
  MR_Word STATE_VARIABLE_AncestorVarMap_0_39,
  MR_Word * Expansion_24,
  MR_Word STATE_VARIABLE_SVarState_0_40,
  MR_Word * STATE_VARIABLE_SVarState_41,
  MR_Word STATE_VARIABLE_UrInfo_0_42,
  MR_Word * STATE_VARIABLE_UrInfo_43);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_4_p_0(
  MR_Word UrInfo_5,
  MR_Word GoalInfo_6,
  MR_Word Expansion_7,
  MR_Word * Goal_8);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansion_before_goal_top_not_fgti_5_p_0(
  MR_Word UrInfo_6,
  MR_Word GoalInfo_7,
  MR_Word Expansion_8,
  MR_Word BaseGoal_9,
  MR_Word * Goal_10);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_4_p_0(
  MR_Word UrInfo_5,
  MR_Word GoalInfo_6,
  MR_Word Expansion_7,
  MR_Word * MaybeWrappedGoalCord_8);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__perform_occurs_check_4_p_0(
  MR_Word AncestorVarMap_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_UrInfo_0_17,
  MR_Word * STATE_VARIABLE_UrInfo_18);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_7_p_0(
  MR_Word UrInfo_8,
  MR_Word GoalInfo_9,
  MR_Word TermVar_10,
  MR_Word BaseGoal_11,
  MR_Integer BaseGoalSize_12,
  MR_Word ArgExpansions_13,
  MR_Word * Expansion_14);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_AllFGTI_0_2,
  MR_Word * STATE_VARIABLE_AllFGTI_3,
  MR_Integer STATE_VARIABLE_TotalSize_0_4,
  MR_Integer * STATE_VARIABLE_TotalSize_5);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_5_p_0(
  MR_Word UrInfo_6,
  MR_Word GoalInfo_7,
  MR_Word Expansions_8,
  MR_Word BaseGoal_9,
  MR_Word * Goal_10);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__maybe_add_to_ancestor_var_map_6_p_0(
  MR_Word UrInfo_7,
  MR_Word XVar_8,
  MR_Word ConsId_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_AncestorVarMap_0_19,
  MR_Word * STATE_VARIABLE_AncestorVarMap_20);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_ordinary_cons_id_6_p_0(
  MR_Word Functor_7,
  MR_Word ArgTerms_8,
  MR_Word Context_9,
  MR_Word * ConsId_10,
  MR_Word STATE_VARIABLE_UrInfo_0_29,
  MR_Word * STATE_VARIABLE_UrInfo_30);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__arg_context_to_unify_context_4_p_0(
  MR_Word ArgContext_5,
  MR_Integer ArgNum_6,
  MR_Word * MainContext_7,
  MR_Word * SubContexts_8);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_SVarState_0_3,
  MR_Word * STATE_VARIABLE_SVarState_4,
  MR_Word STATE_VARIABLE_UrInfo_0_5,
  MR_Word * STATE_VARIABLE_UrInfo_6);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____ancestor_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____ancestor_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_1[58][2];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_3[4][1];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_5[1][7];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_6[1][5];


struct hlds__make_hlds__superhomogeneous__vector_common_type_4_0_s {
  const MR_String hlds__make_hlds__superhomogeneous__vector_common_type_4_0__vct_4_f_0;
  const MR_Word hlds__make_hlds__superhomogeneous__vector_common_type_4_0__vct_4_f_1;
};

static /* final */ const struct hlds__make_hlds__superhomogeneous__vector_common_type_4_0_s hlds__make_hlds__superhomogeneous_vector_common_4[5];

struct hlds__make_hlds__superhomogeneous__vector_common_type_7_0_s {
  const MR_String hlds__make_hlds__superhomogeneous__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct hlds__make_hlds__superhomogeneous__vector_common_type_7_0_s hlds__make_hlds__superhomogeneous_vector_common_7[32];



static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_1[58][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the clause neck operator"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in expressions of the form"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "can be used only"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In explicit type qualification:"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "operator in a field selection expression:"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "^"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "On the right hand side of the"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "operator in a field update expression:"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[19])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[20])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unexpected implementation defined literal"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[23])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The only valid implementation defined literals are"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[27])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "\044pred"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "\044module"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[34])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "\044file"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[35])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[37])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "\044line"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[38])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "\044grade"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[9])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_3[2]))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: the"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "variable"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unified with a term containing itself."))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[52]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "<lambda expression head> --> <lambda expression body>"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[9])))
  },
  /* row  56 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "<lambda expression head> :- <lambda expression body>"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[9])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0])),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_6[0])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_3[4][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 5U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 4U) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 194U) },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_5[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_unravel_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__type_ctor_info_expansion_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_6[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__type_ctor_info_expansion_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};


static /* final */ const struct hlds__make_hlds__superhomogeneous__vector_common_type_4_0_s hlds__make_hlds__superhomogeneous_vector_common_4[5] = {
  /* row   0 */
  {
    (MR_String) "file",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "grade",
    (MR_Integer) 4
  },
  /* row   2 */
  {
    (MR_String) "line",
    (MR_Integer) 1
  },
  /* row   3 */
  {
    (MR_String) "module",
    (MR_Integer) 2
  },
  /* row   4 */
  {
    (MR_String) "pred",
    (MR_Integer) 3
  },
};

static /* final */ const struct hlds__make_hlds__superhomogeneous__vector_common_type_7_0_s hlds__make_hlds__superhomogeneous_vector_common_7[32] = {
  /* row   0 */   { NULL },
  /* row   1 */   { (MR_String) "\100" },
  /* row   2 */   { (MR_String) "is" },
  /* row   3 */   { (MR_String) "coerce" },
  /* row   4 */   { NULL },
  /* row   5 */   { (MR_String) "else" },
  /* row   6 */   { NULL },
  /* row   7 */   { (MR_String) "-->" },
  /* row   8 */   { (MR_String) "with_type" },
  /* row   9 */   { NULL },
  /* row  10 */   { NULL },
  /* row  11 */   { NULL },
  /* row  12 */   { NULL },
  /* row  13 */   { (MR_String) ":-" },
  /* row  14 */   { NULL },
  /* row  15 */   { NULL },
  /* row  16 */   { NULL },
  /* row  17 */   { NULL },
  /* row  18 */   { NULL },
  /* row  19 */   { NULL },
  /* row  20 */   { NULL },
  /* row  21 */   { NULL },
  /* row  22 */   { NULL },
  /* row  23 */   { NULL },
  /* row  24 */   { NULL },
  /* row  25 */   { NULL },
  /* row  26 */   { (MR_String) ";" },
  /* row  27 */   { (MR_String) ":" },
  /* row  28 */   { (MR_String) "=" },
  /* row  29 */   { (MR_String) ":=" },
  /* row  30 */   { NULL },
  /* row  31 */   { (MR_String) "^" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__superhomogeneous__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term_context__type_ctor_info_term_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_ancestor_var_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____ancestor_var_map_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____ancestor_var_map_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "ancestor_var_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term_context__type_ctor_info_term_context_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____ancestor_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____ancestor_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__project_expansion_goals_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * GoalCord_4)
{
  *GoalCord_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
}

void MR_CALL 
hlds__make_hlds__superhomogeneous__unravel_unification_11_p_0(
  MR_Word XTerm_12,
  MR_Word YTerm_13,
  MR_Word Context_14,
  MR_Word MainContext_15,
  MR_Word SubContext_16,
  MR_Word Purity_17,
  MR_Word * Goal_18,
  MR_Word STATE_VARIABLE_SVarState_0_24,
  MR_Word * STATE_VARIABLE_SVarState_25,
  MR_Word STATE_VARIABLE_UrInfo_0_26,
  MR_Word * STATE_VARIABLE_UrInfo_27)
{
  MR_Word Expansion_22;
  MR_Word GoalInfo_23;
  MR_Word XTerm_28;
  MR_Word YTerm_29;
  MR_Word STATE_VARIABLE_SVarState_1_30;
  MR_Word STATE_VARIABLE_UrInfo_1_31;
  MR_Word STATE_VARIABLE_SVarState_2_32;
  MR_Word STATE_VARIABLE_UrInfo_2_33;
  MR_Word Var_34;

  hlds__make_hlds__state_var__replace_any_dot_colon_state_var_in_term_6_p_0(XTerm_12, &XTerm_28, STATE_VARIABLE_SVarState_0_24, &STATE_VARIABLE_SVarState_1_30, STATE_VARIABLE_UrInfo_0_26, &STATE_VARIABLE_UrInfo_1_31);
  hlds__make_hlds__state_var__replace_any_dot_colon_state_var_in_term_6_p_0(YTerm_13, &YTerm_29, STATE_VARIABLE_SVarState_1_30, &STATE_VARIABLE_SVarState_2_32, STATE_VARIABLE_UrInfo_1_31, &STATE_VARIABLE_UrInfo_2_33);
  Var_34 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  if (((MR_tag((MR_Word) XTerm_28)) == (MR_Integer) 0))
  {
    MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, XTerm_28, 2))));
    MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, XTerm_28, 1))));
    MR_Word Var_76 = ((MR_Word) ((MR_hl_field(0, XTerm_28, 0))));

    if (((MR_tag((MR_Word) YTerm_29)) == (MR_Integer) 0))
    {
      MR_Word TmpVar_50;
      MR_Word ExpansionX_51;
      MR_Word ExpansionY_52;
      MR_Word GoalInfo_53;
      MR_Word MaybeWrappedGoalCordX_54;
      MR_Word MaybeWrappedGoalCordY_55;
      MR_Word GoalCord_56;
      MR_Word STATE_VARIABLE_UrInfo_3_60;
      MR_Word STATE_VARIABLE_SVarState_3_61;
      MR_Word STATE_VARIABLE_UrInfo_4_62;
      MR_Word YFunctor_66 = ((MR_Word) ((MR_hl_field(0, YTerm_29, 0))));
      MR_Word YArgTerms_67 = ((MR_Word) ((MR_hl_field(0, YTerm_29, 1))));
      MR_Word YFunctorContext_68 = ((MR_Word) ((MR_hl_field(0, YTerm_29, 2))));

      hlds__make_hlds__state_var__create_new_unravel_var_3_p_0(&TmpVar_50, STATE_VARIABLE_UrInfo_2_33, &STATE_VARIABLE_UrInfo_3_60);
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_15_p_0(TmpVar_50, Var_76, Var_75, Var_74, Context_14, MainContext_15, SubContext_16, Purity_17, Var_34, &ExpansionX_51, STATE_VARIABLE_SVarState_2_32, &STATE_VARIABLE_SVarState_3_61, STATE_VARIABLE_UrInfo_3_60, &STATE_VARIABLE_UrInfo_4_62);
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_15_p_0(TmpVar_50, YFunctor_66, YArgTerms_67, YFunctorContext_68, Context_14, MainContext_15, SubContext_16, Purity_17, Var_34, &ExpansionY_52, STATE_VARIABLE_SVarState_3_61, STATE_VARIABLE_SVarState_25, STATE_VARIABLE_UrInfo_4_62, STATE_VARIABLE_UrInfo_27);
      hlds__hlds_goal__goal_info_init_2_p_0(Context_14, &GoalInfo_53);
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_4_p_0(*STATE_VARIABLE_UrInfo_27, GoalInfo_53, ExpansionX_51, &MaybeWrappedGoalCordX_54);
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_4_p_0(*STATE_VARIABLE_UrInfo_27, GoalInfo_53, ExpansionY_52, &MaybeWrappedGoalCordY_55);
      GoalCord_56 = mercury__cord__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), MaybeWrappedGoalCordX_54, MaybeWrappedGoalCordY_55);
      {
        Expansion_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Expansion_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Expansion_22, 1) = ((MR_Box) (GoalCord_56));
      }
    }
    else
    {
      MR_Word YVar_65 = ((MR_Word) ((MR_hl_field(1, YTerm_29, 0))));

      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_15_p_0(YVar_65, Var_76, Var_75, Var_74, Context_14, MainContext_15, SubContext_16, Purity_17, Var_34, &Expansion_22, STATE_VARIABLE_SVarState_2_32, STATE_VARIABLE_SVarState_25, STATE_VARIABLE_UrInfo_2_33, STATE_VARIABLE_UrInfo_27);
    }
  }
  else
  {
    MR_Word Var_78 = ((MR_Word) ((MR_hl_field(1, XTerm_28, 0))));

    if (((MR_tag((MR_Word) YTerm_29)) == (MR_Integer) 0))
    {
      MR_Word YFunctor_43 = ((MR_Word) ((MR_hl_field(0, YTerm_29, 0))));
      MR_Word YArgTerms_44 = ((MR_Word) ((MR_hl_field(0, YTerm_29, 1))));
      MR_Word YFunctorContext_45 = ((MR_Word) ((MR_hl_field(0, YTerm_29, 2))));

      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_15_p_0(Var_78, YFunctor_43, YArgTerms_44, YFunctorContext_45, Context_14, MainContext_15, SubContext_16, Purity_17, Var_34, &Expansion_22, STATE_VARIABLE_SVarState_2_32, STATE_VARIABLE_SVarState_25, STATE_VARIABLE_UrInfo_2_33, STATE_VARIABLE_UrInfo_27);
    }
    else
    {
      MR_Word YVar_39 = ((MR_Word) ((MR_hl_field(1, YTerm_29, 0))));
      MR_Word Goal_41;
      MR_Word Var_57;
      MR_Word Var_59;

      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_57, 0) = ((MR_Box) (YVar_39));
      }
      hlds__make_goal__create_atomic_complicated_unification_7_p_0(Var_78, Var_57, Context_14, MainContext_15, SubContext_16, Purity_17, &Goal_41);
      Var_59 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_41)));
      {
        Expansion_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Expansion_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Expansion_22, 1) = ((MR_Box) (Var_59));
      }
      *STATE_VARIABLE_SVarState_25 = STATE_VARIABLE_SVarState_2_32;
      *STATE_VARIABLE_UrInfo_27 = STATE_VARIABLE_UrInfo_2_33;
    }
  }
  hlds__hlds_goal__goal_info_init_2_p_0(Context_14, &GoalInfo_23);
  hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_4_p_0(*STATE_VARIABLE_UrInfo_27, GoalInfo_23, Expansion_22, Goal_18);
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeWrappedGoalCord_8;

  hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeWrappedGoalCord_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeWrappedGoalCord_8));
}

void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_8_p_0(
  MR_Word XVarsArgTermsArgNumsContexts0_9,
  MR_Word Context_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_SVarState_0_20,
  MR_Word * STATE_VARIABLE_SVarState_21,
  MR_Word STATE_VARIABLE_UrInfo_0_22,
  MR_Word * STATE_VARIABLE_UrInfo_23)
{
  MR_Word XVarsArgTermsArgNumsContexts_15;
  MR_Word AncestorVarMap_16;
  MR_Word Expansions_17;
  MR_Word GoalInfo0_19;
  MR_Word STATE_VARIABLE_SVarState_1_24;
  MR_Word STATE_VARIABLE_UrInfo_1_25;
  MR_Word BaseGoals_29;
  MR_Word ExpansionGoalCords_30;
  MR_Word ExpansionGoals_31;
  MR_Word Var_32;
  MR_Word Var_33;

  hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_num_context_6_p_0(XVarsArgTermsArgNumsContexts0_9, &XVarsArgTermsArgNumsContexts_15, STATE_VARIABLE_SVarState_0_20, &STATE_VARIABLE_SVarState_1_24, STATE_VARIABLE_UrInfo_0_22, &STATE_VARIABLE_UrInfo_1_25);
  mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), &AncestorVarMap_16);
  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_51_93_95_48_9_p_0(XVarsArgTermsArgNumsContexts_15, Context_10, AncestorVarMap_16, &Expansions_17, STATE_VARIABLE_SVarState_1_24, STATE_VARIABLE_SVarState_21, STATE_VARIABLE_UrInfo_1_25, STATE_VARIABLE_UrInfo_23);
  GoalInfo0_19 = ((MR_Word) ((MR_hl_field(0, Goal0_11, 1))));
  hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal0_11, &BaseGoals_29);
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_5[0]));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_8_p_0_1));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_32, 3) = ((MR_Box) (*STATE_VARIABLE_UrInfo_23));
    MR_hl_field(0, Var_32, 4) = ((MR_Box) (GoalInfo0_19));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__type_ctor_info_expansion_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]), Var_32, Expansions_17, &ExpansionGoalCords_30);
  ExpansionGoals_31 = mercury__cord__cord_list_to_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoalCords_30);
  Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoals_31, BaseGoals_29);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_33, GoalInfo0_19, Goal_12);
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_num_context_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_SVarState_0_3,
  MR_Word * STATE_VARIABLE_SVarState_4,
  MR_Word STATE_VARIABLE_UrInfo_0_5,
  MR_Word * STATE_VARIABLE_UrInfo_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UrInfo_6 = STATE_VARIABLE_UrInfo_0_5;
    *STATE_VARIABLE_SVarState_4 = STATE_VARIABLE_SVarState_0_3;
  }
  else
  {
    MR_Word UVTNC0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word UVTNCs0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word UVTNC_15;
    MR_Word UVTNCs_16;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, UVTNC0_13, 0))));
    MR_Word Arg0_20 = ((MR_Word) ((MR_hl_field(0, UVTNC0_13, 1))));
    MR_Integer ArgNum_21 = ((MR_Integer) ((MR_hl_field(0, UVTNC0_13, 2))));
    MR_Word ArgContext_22 = ((MR_Word) ((MR_hl_field(0, UVTNC0_13, 3))));
    MR_Word Arg_23;
    MR_Word STATE_VARIABLE_SVarState_1_28;
    MR_Word STATE_VARIABLE_UrInfo_1_29;

    hlds__make_hlds__state_var__replace_any_dot_colon_state_var_in_term_6_p_0(Arg0_20, &Arg_23, STATE_VARIABLE_SVarState_0_3, &STATE_VARIABLE_SVarState_1_28, STATE_VARIABLE_UrInfo_0_5, &STATE_VARIABLE_UrInfo_1_29);
    {
      UVTNC_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UVTNC_15, 0) = ((MR_Box) (Var_19));
      MR_hl_field(0, UVTNC_15, 1) = ((MR_Box) (Arg_23));
      MR_hl_field(0, UVTNC_15, 2) = ((MR_Box) (ArgNum_21));
      MR_hl_field(0, UVTNC_15, 3) = ((MR_Box) (ArgContext_22));
    }
    hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_num_context_6_p_0(UVTNCs0_14, &UVTNCs_16, STATE_VARIABLE_SVarState_1_28, STATE_VARIABLE_SVarState_4, STATE_VARIABLE_UrInfo_1_29, STATE_VARIABLE_UrInfo_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (UVTNC_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (UVTNCs_16));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeWrappedGoalCord_8;

  hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeWrappedGoalCord_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeWrappedGoalCord_8));
}

void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_9_p_0(
  MR_Word XVarsArgTerms0_10,
  MR_Word Context_11,
  MR_Word ArgContext_12,
  MR_Word Goal0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_SVarState_0_22,
  MR_Word * STATE_VARIABLE_SVarState_23,
  MR_Word STATE_VARIABLE_UrInfo_0_24,
  MR_Word * STATE_VARIABLE_UrInfo_25)
{
  MR_Word XVarsArgTerms_17;
  MR_Word AncestorVarMap_18;
  MR_Word Expansions_19;
  MR_Word GoalInfo0_21;
  MR_Word STATE_VARIABLE_SVarState_1_26;
  MR_Word STATE_VARIABLE_UrInfo_1_27;
  MR_Word BaseGoals_32;
  MR_Word ExpansionGoalCords_33;
  MR_Word ExpansionGoals_34;
  MR_Word Var_35;
  MR_Word Var_36;

  hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_6_p_0(XVarsArgTerms0_10, &XVarsArgTerms_17, STATE_VARIABLE_SVarState_0_22, &STATE_VARIABLE_SVarState_1_26, STATE_VARIABLE_UrInfo_0_24, &STATE_VARIABLE_UrInfo_1_27);
  mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), &AncestorVarMap_18);
  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_52_93_95_48_11_p_0(XVarsArgTerms_17, Context_11, ArgContext_12, (MR_Integer) 1, AncestorVarMap_18, &Expansions_19, STATE_VARIABLE_SVarState_1_26, STATE_VARIABLE_SVarState_23, STATE_VARIABLE_UrInfo_1_27, STATE_VARIABLE_UrInfo_25);
  GoalInfo0_21 = ((MR_Word) ((MR_hl_field(0, Goal0_13, 1))));
  hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal0_13, &BaseGoals_32);
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_5[0]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_arg_unifications_9_p_0_1));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (*STATE_VARIABLE_UrInfo_25));
    MR_hl_field(0, Var_35, 4) = ((MR_Box) (GoalInfo0_21));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__type_ctor_info_expansion_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]), Var_35, Expansions_19, &ExpansionGoalCords_33);
  ExpansionGoals_34 = mercury__cord__cord_list_to_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoalCords_33);
  Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoals_34, BaseGoals_32);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_36, GoalInfo0_21, Goal_14);
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_52_93_95_48_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_SVarState_0_8,
  MR_Word * STATE_VARIABLE_SVarState_9,
  MR_Word STATE_VARIABLE_UrInfo_0_10,
  MR_Word * STATE_VARIABLE_UrInfo_11)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UrInfo_11 = STATE_VARIABLE_UrInfo_0_10;
    *STATE_VARIABLE_SVarState_9 = STATE_VARIABLE_SVarState_0_8;
  }
  else
  {
    MR_Word XVar_23;
    MR_Word YTerm_24;
    MR_Word XVarsYTerms_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Expansion_31;
    MR_Word Expansions_32;
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word STATE_VARIABLE_SVarState_1_40;
    MR_Word STATE_VARIABLE_UrInfo_1_41;
    MR_Integer Var_42;

    XVar_23 = ((MR_Word) ((MR_hl_field(0, Var_39, 0))));
    YTerm_24 = ((MR_Word) ((MR_hl_field(0, Var_39, 1))));
    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_12_p_0(XVar_23, YTerm_24, HeadVar__2_2, HeadVar__3_3, HeadVar__5_5, HeadVar__6_6, &Expansion_31, STATE_VARIABLE_SVarState_0_8, &STATE_VARIABLE_SVarState_1_40, STATE_VARIABLE_UrInfo_0_10, &STATE_VARIABLE_UrInfo_1_41);
    Var_42 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) 1);
    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_52_93_95_48_11_p_0(XVarsYTerms_25, HeadVar__2_2, HeadVar__3_3, Var_42, HeadVar__6_6, &Expansions_32, STATE_VARIABLE_SVarState_1_40, STATE_VARIABLE_SVarState_9, STATE_VARIABLE_UrInfo_1_41, STATE_VARIABLE_UrInfo_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Expansion_31));
      MR_hl_field(1, base, 1) = ((MR_Box) (Expansions_32));
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_117_110_114_97_118_101_108_95_115_112_101_99_105_97_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_14_p_0(
  MR_Word XVar_15,
  MR_String YAtom_16,
  MR_Word YArgTerms_17,
  MR_Word YFunctorContext_18,
  MR_Word Context_19,
  MR_Word MainContext_20,
  MR_Word SubContext_21,
  MR_Word Purity_22,
  MR_Word * Expansion_24,
  MR_Word STATE_VARIABLE_SVarState_0_74,
  MR_Word * STATE_VARIABLE_SVarState_75,
  MR_Word STATE_VARIABLE_UrInfo_0_76,
  MR_Word * STATE_VARIABLE_UrInfo_77)
{
  MR_bool succeeded;
  MR_Integer slot_0 = ((MR_hash_string5(YAtom_16)) & (MR_Integer) 31);
  MR_String str_1 = ((&hlds__make_hlds__superhomogeneous_vector_common_7[0 + slot_0]))->hlds__make_hlds__superhomogeneous__vector_common_type_7_0__vct_7_f_0;

  // hashed string jump switch
  ;
  // compute the hash value of the input string
  ;
  // no collisions; no hash chain loop
  ;
  // lookup the string for this hash slot
  ;
  // did we find a match?
  ;
  if ((((str_1 != NULL)) && ((strcmp(str_1, YAtom_16) == 0))))
  {
    // we found a match; dispatch to the corresponding code
    ;
    switch (slot_0) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          // case "@"
          ;
          {
            MR_Word TypeCtorInfo_187_187;
            MR_Word LVal_29;
            MR_Word RVal_30;
            MR_Word ExpansionL_31;
            MR_Word ExpansionR_32;
            MR_Word GoalCordL_34;
            MR_Word GoalCordR_36;
            MR_Word STATE_VARIABLE_SVarState_2_84;
            MR_Word STATE_VARIABLE_UrInfo_2_85;
            MR_Word Var_88;
            MR_Word Var_89;
            MR_Word Var_209;
            MR_Word Var_211;

            succeeded = (YArgTerms_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              LVal_29 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 0))));
              Var_211 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 1))));
              succeeded = (Var_211 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                RVal_30 = ((MR_Word) ((MR_hl_field(1, Var_211, 0))));
                Var_209 = ((MR_Word) ((MR_hl_field(1, Var_211, 1))));
                succeeded = (Var_209 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_12_p_0(XVar_15, LVal_29, Context_19, MainContext_20, SubContext_21, Purity_22, &ExpansionL_31, STATE_VARIABLE_SVarState_0_74, &STATE_VARIABLE_SVarState_2_84, STATE_VARIABLE_UrInfo_0_76, &STATE_VARIABLE_UrInfo_2_85);
                  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_12_p_0(XVar_15, RVal_30, Context_19, MainContext_20, SubContext_21, Purity_22, &ExpansionR_32, STATE_VARIABLE_SVarState_2_84, STATE_VARIABLE_SVarState_75, STATE_VARIABLE_UrInfo_2_85, STATE_VARIABLE_UrInfo_77);
                  GoalCordL_34 = ((MR_Word) ((MR_hl_field(0, ExpansionL_31, 1))));
                  GoalCordR_36 = ((MR_Word) ((MR_hl_field(0, ExpansionR_32, 1))));
                  Var_88 = (MR_Word) ((MR_Unsigned) 0U);
                  TypeCtorInfo_187_187 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                  Var_89 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_187_187, GoalCordL_34, GoalCordR_36);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *Expansion_24 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Var_88));
                    MR_hl_field(0, base, 1) = ((MR_Box) (Var_89));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          // case "is"
          ;
          {
            MR_Word YTerm_68;
            MR_Word Var_172;

            {
              Var_172 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_172, 0) = ((MR_Box) (YAtom_16));
            }
            {
              YTerm_68 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, YTerm_68, 0) = ((MR_Box) (Var_172));
              MR_hl_field(0, YTerm_68, 1) = ((MR_Box) (YArgTerms_17));
              MR_hl_field(0, YTerm_68, 2) = ((MR_Box) (YFunctorContext_18));
            }
            hlds__make_hlds__superhomogeneous_lambda__parse_lambda_expr_11_p_0(XVar_15, Purity_22, Context_19, MainContext_20, SubContext_21, YTerm_68, (MR_Word) ((MR_Unsigned) 0U), Expansion_24, STATE_VARIABLE_SVarState_0_74, STATE_VARIABLE_UrInfo_0_76, STATE_VARIABLE_UrInfo_77);
            *STATE_VARIABLE_SVarState_75 = STATE_VARIABLE_SVarState_0_74;
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          // case "coerce"
          ;
          {
            MR_Word TypeCtorInfo_61_640;
            MR_Word RValTerm0_42;
            MR_Word Var_93;
            MR_Word RValTermVar_608;
            MR_Word RValGoalCord_610;
            MR_Word CoerceGoalExpr_617;
            MR_Word CoerceGoalInfo_618;
            MR_Word CoerceGoal_619;
            MR_Word CoerceGoalCord_620;
            MR_Word Var_625;
            MR_Word Var_627;
            MR_Word Var_628;
            MR_Word Var_630;
            MR_Word Var_631;
            MR_Word Var_632;
            MR_Word Var_633;
            MR_Word Var_634;
            MR_Word Var_635;
            MR_Word Var_636;
            MR_Word Var_637;
            MR_Word Var_638;

            succeeded = (YArgTerms_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              RValTerm0_42 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 0))));
              Var_93 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 1))));
              succeeded = (Var_93 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                if (((MR_tag((MR_Word) RValTerm0_42)) == (MR_Integer) 0))
                {
                  MR_Word RValTerm_614;
                  MR_Word RValTermExpansion_615;
                  MR_Word STATE_VARIABLE_SVarState_1_621;
                  MR_Word STATE_VARIABLE_UrInfo_1_622;
                  MR_Word STATE_VARIABLE_UrInfo_2_624;

                  hlds__make_hlds__state_var__replace_any_dot_colon_state_var_in_term_6_p_0(RValTerm0_42, &RValTerm_614, STATE_VARIABLE_SVarState_0_74, &STATE_VARIABLE_SVarState_1_621, STATE_VARIABLE_UrInfo_0_76, &STATE_VARIABLE_UrInfo_1_622);
                  hlds__make_hlds__superhomogeneous_util__make_fresh_arg_var_no_svar_5_p_0(RValTerm0_42, &RValTermVar_608, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_UrInfo_1_622, &STATE_VARIABLE_UrInfo_2_624);
                  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_12_p_0(RValTermVar_608, RValTerm_614, Context_19, MainContext_20, SubContext_21, Purity_22, &RValTermExpansion_615, STATE_VARIABLE_SVarState_1_621, STATE_VARIABLE_SVarState_75, STATE_VARIABLE_UrInfo_2_624, STATE_VARIABLE_UrInfo_77);
                  RValGoalCord_610 = ((MR_Word) ((MR_hl_field(0, RValTermExpansion_615, 1))));
                }
                else
                {
                  RValTermVar_608 = ((MR_Word) ((MR_hl_field(1, RValTerm0_42, 0))));
                  RValGoalCord_610 = mercury__cord__empty_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
                  *STATE_VARIABLE_SVarState_75 = STATE_VARIABLE_SVarState_0_74;
                  *STATE_VARIABLE_UrInfo_77 = STATE_VARIABLE_UrInfo_0_76;
                }
                Var_625 = (MR_Word) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_3[1]));
                {
                  Var_628 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_628, 0) = ((MR_Box) (XVar_15));
                  MR_hl_field(1, Var_628, 1) = ((MR_Box) (Var_93));
                }
                {
                  Var_627 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_627, 0) = ((MR_Box) (RValTermVar_608));
                  MR_hl_field(1, Var_627, 1) = ((MR_Box) (Var_628));
                }
                Var_631 = parse_tree__prog_mode__in_mode_0_f_0();
                Var_633 = parse_tree__prog_mode__out_mode_0_f_0();
                Var_634 = (MR_Word) ((MR_Unsigned) 0U);
                Var_635 = (MR_Word) ((MR_Unsigned) 0U);
                Var_636 = (MR_Integer) 0;
                {
                  Var_632 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_632, 0) = ((MR_Box) (Var_633));
                  MR_hl_field(1, Var_632, 1) = ((MR_Box) (Var_634));
                }
                {
                  Var_630 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_630, 0) = ((MR_Box) (Var_631));
                  MR_hl_field(1, Var_630, 1) = ((MR_Box) (Var_632));
                }
                {
                  CoerceGoalExpr_617 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, CoerceGoalExpr_617, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, CoerceGoalExpr_617, 1) = ((MR_Box) (Var_625));
                  MR_hl_field(3, CoerceGoalExpr_617, 2) = ((MR_Box) (Var_627));
                  MR_hl_field(3, CoerceGoalExpr_617, 3) = ((MR_Box) (Var_630));
                  MR_hl_field(3, CoerceGoalExpr_617, 4) = ((MR_Box) (Var_635));
                  MR_hl_field(3, CoerceGoalExpr_617, 5) = (MR_Box) ((MR_Unsigned) (Var_636));
                }
                hlds__hlds_goal__goal_info_init_2_p_0(Context_19, &CoerceGoalInfo_618);
                TypeCtorInfo_61_640 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                {
                  CoerceGoal_619 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, CoerceGoal_619, 0) = ((MR_Box) (CoerceGoalExpr_617));
                  MR_hl_field(0, CoerceGoal_619, 1) = ((MR_Box) (CoerceGoalInfo_618));
                }
                CoerceGoalCord_620 = mercury__cord__singleton_1_f_0(TypeCtorInfo_61_640, ((MR_Box) (CoerceGoal_619)));
                Var_637 = (MR_Word) ((MR_Unsigned) 0U);
                Var_638 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_61_640, RValGoalCord_610, CoerceGoalCord_620);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Expansion_24 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_637));
                  MR_hl_field(0, base, 1) = ((MR_Box) (Var_638));
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
        break;
      case (MR_Integer) 5:
        {
          // case "else"
          ;
          {
            MR_Word TypeCtorInfo_103_567;
            MR_Word TypeCtorInfo_104_568;
            MR_Word TypeCtorInfo_105_569;
            MR_Word Var_102;
            MR_String Var_103;
            MR_Word Var_104;
            MR_Word Var_105;
            MR_Word Var_106;
            MR_Word ElseTerm0_318;
            MR_Word CondTerm0_319;
            MR_Word ThenTerm0_320;
            MR_Word Var_321;
            MR_Word Var_322;
            MR_Word Var_323;
            MR_Word Var_326;
            MR_Word Var_327;
            MR_Word Var_328;
            MR_Word Var_329;
            MR_String Var_330;
            MR_Word CondTerm_498;
            MR_Word ContextPieces_499;
            MR_Word VarSet0_500;
            MR_Word MaybeVarsCond_501;
            MR_Word VarSet_502;
            MR_Word STATE_VARIABLE_UrInfo_1_534;
            MR_Word Var_560;
            MR_Integer Var_561;
            MR_Word Var_562;
            MR_Word Var_564;
            MR_Word Var_565;
            MR_Word Var_566;

            succeeded = (YArgTerms_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_322 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 0))));
              Var_321 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 1))));
              succeeded = (Var_321 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ElseTerm0_318 = ((MR_Word) ((MR_hl_field(1, Var_321, 0))));
                Var_323 = ((MR_Word) ((MR_hl_field(1, Var_321, 1))));
                succeeded = (Var_323 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_322)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_327 = ((MR_Word) ((MR_hl_field(0, Var_322, 0))));
                    Var_326 = ((MR_Word) ((MR_hl_field(0, Var_322, 1))));
                    succeeded = (Var_326 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_329 = ((MR_Word) ((MR_hl_field(1, Var_326, 0))));
                      Var_328 = ((MR_Word) ((MR_hl_field(1, Var_326, 1))));
                      succeeded = (Var_328 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) Var_327)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Var_330 = ((MR_String) ((MR_hl_field(0, Var_327, 0))));
                          succeeded = (strcmp(Var_330, (MR_String) "if") == 0);
                          if (succeeded)
                          {
                            succeeded = ((MR_tag((MR_Word) Var_329)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Var_102 = ((MR_Word) ((MR_hl_field(0, Var_329, 0))));
                              Var_104 = ((MR_Word) ((MR_hl_field(0, Var_329, 1))));
                              succeeded = ((MR_tag((MR_Word) Var_102)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                Var_103 = ((MR_String) ((MR_hl_field(0, Var_102, 0))));
                                succeeded = (strcmp(Var_103, (MR_String) "then") == 0);
                                if (succeeded)
                                {
                                  succeeded = (Var_104 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    CondTerm0_319 = ((MR_Word) ((MR_hl_field(1, Var_104, 0))));
                                    Var_105 = ((MR_Word) ((MR_hl_field(1, Var_104, 1))));
                                    succeeded = (Var_105 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      ThenTerm0_320 = ((MR_Word) ((MR_hl_field(1, Var_105, 0))));
                                      Var_106 = ((MR_Word) ((MR_hl_field(1, Var_105, 1))));
                                      succeeded = (Var_106 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        TypeCtorInfo_103_567 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                                        TypeCtorInfo_104_568 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                                        mercury__term__coerce_2_p_0(TypeCtorInfo_103_567, TypeCtorInfo_104_568, CondTerm0_319, &CondTerm_498);
                                        TypeCtorInfo_105_569 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
                                        ContextPieces_499 = mercury__cord__init_0_f_0(TypeCtorInfo_105_569);
                                        VarSet0_500 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 3))));
                                        parse_tree__parse_goal__parse_some_vars_goal_5_p_0(CondTerm_498, ContextPieces_499, &MaybeVarsCond_501, VarSet0_500, &VarSet_502);
                                        Var_560 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 0))));
                                        Var_561 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 1))));
                                        Var_562 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 2))));
                                        Var_564 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 4))));
                                        Var_565 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 5))));
                                        Var_566 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 6))));
                                        {
                                          STATE_VARIABLE_UrInfo_1_534 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                                          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_534, 0) = ((MR_Box) (Var_560));
                                          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_534, 1) = ((MR_Box) (Var_561));
                                          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_534, 2) = ((MR_Box) (Var_562));
                                          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_534, 3) = ((MR_Box) (VarSet_502));
                                          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_534, 4) = ((MR_Box) (Var_564));
                                          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_534, 5) = ((MR_Box) (Var_565));
                                          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_534, 6) = ((MR_Box) (Var_566));
                                        }
                                        if (((MR_tag((MR_Word) MaybeVarsCond_501)) == (MR_Integer) 0))
                                        {
                                          MR_Word OoMVarsCondErrSpecs_532;
                                          MR_Word VarsConsWarnSpecs_533;
                                          MR_Tuple Var_549 = ((MR_Tuple) ((MR_hl_field(0, MaybeVarsCond_501, 0))));
                                          MR_Word STATE_VARIABLE_UrInfo_10_550;
                                          MR_Word Var_552;
                                          MR_Word Var_553;

                                          OoMVarsCondErrSpecs_532 = ((MR_Word) ((MR_hl_field(0, Var_549, 0))));
                                          VarsConsWarnSpecs_533 = ((MR_Word) ((MR_hl_field(0, Var_549, 1))));
                                          hlds__make_hlds__state_var__add_unravel_oom_errs_3_p_0(OoMVarsCondErrSpecs_532, STATE_VARIABLE_UrInfo_1_534, &STATE_VARIABLE_UrInfo_10_550);
                                          hlds__make_hlds__state_var__add_unravel_warns_3_p_0(VarsConsWarnSpecs_533, STATE_VARIABLE_UrInfo_10_550, STATE_VARIABLE_UrInfo_77);
                                          Var_553 = hlds__make_goal__true_goal_with_context_1_f_0(Context_19);
                                          Var_552 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Var_553)));
                                          {
                                            MR_Word base;
                                            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                            *Expansion_24 = base;
                                            MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                            MR_hl_field(0, base, 1) = ((MR_Box) (Var_552));
                                          }
                                          *STATE_VARIABLE_SVarState_75 = STATE_VARIABLE_SVarState_0_74;
                                        }
                                        else
                                        {
                                          MR_Word Vars_503 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCond_501, 0))));
                                          MR_Word StateVars_504 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCond_501, 1))));
                                          MR_Word CondParseTree_505 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCond_501, 2))));
                                          MR_Word CondWarningSpecs_506 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCond_501, 3))));
                                          MR_Word BeforeInsideSVarState_508;
                                          MR_Word EmptyRenaming_509;
                                          MR_Word CondGoal_510;
                                          MR_Word AfterCondInsideSVarState_511;
                                          MR_Word ThenTerm_512;
                                          MR_Word AfterThenInsideSVarState0_513;
                                          MR_Word AncestorVarMap_514;
                                          MR_Word ThenExpansion_515;
                                          MR_Word AfterThenInsideSVarState_516;
                                          MR_Word ThenGoalInfo_517;
                                          MR_Word ThenGoal0_518;
                                          MR_Word AfterThenSVarState_519;
                                          MR_Word ElseTerm_520;
                                          MR_Word AfterElseSVarState0_521;
                                          MR_Word ElseExpansion_522;
                                          MR_Word AfterElseSVarState_523;
                                          MR_Word ElseGoalInfo_524;
                                          MR_Word ElseGoal0_525;
                                          MR_Word ThenGoal_526;
                                          MR_Word ElseGoal_527;
                                          MR_Word GoalExpr_529;
                                          MR_Word GoalInfo_530;
                                          MR_Word Goal_531;
                                          MR_Word STATE_VARIABLE_UrInfo_2_535;
                                          MR_Word STATE_VARIABLE_UrInfo_3_536;
                                          MR_Word STATE_VARIABLE_UrInfo_4_538;
                                          MR_Word STATE_VARIABLE_UrInfo_5_539;
                                          MR_Word STATE_VARIABLE_UrInfo_6_540;
                                          MR_Word Var_541;
                                          MR_Word STATE_VARIABLE_UrInfo_7_542;
                                          MR_Word STATE_VARIABLE_UrInfo_8_543;
                                          MR_Word Var_544;
                                          MR_Word Var_546;
                                          MR_Word Var_548;

                                          hlds__make_hlds__state_var__add_unravel_warns_3_p_0(CondWarningSpecs_506, STATE_VARIABLE_UrInfo_1_534, &STATE_VARIABLE_UrInfo_2_535);
                                          hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_6_p_0(Context_19, StateVars_504, STATE_VARIABLE_SVarState_0_74, &BeforeInsideSVarState_508, STATE_VARIABLE_UrInfo_2_535, &STATE_VARIABLE_UrInfo_3_536);
                                          mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), &EmptyRenaming_509);
                                          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0((MR_Integer) 1, EmptyRenaming_509, CondParseTree_505, &CondGoal_510, BeforeInsideSVarState_508, &AfterCondInsideSVarState_511, STATE_VARIABLE_UrInfo_3_536, &STATE_VARIABLE_UrInfo_4_538);
                                          hlds__make_hlds__state_var__replace_any_dot_colon_state_var_in_term_6_p_0(ThenTerm0_320, &ThenTerm_512, AfterCondInsideSVarState_511, &AfterThenInsideSVarState0_513, STATE_VARIABLE_UrInfo_4_538, &STATE_VARIABLE_UrInfo_5_539);
                                          mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), &AncestorVarMap_514);
                                          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_13_p_0(XVar_15, ThenTerm_512, Context_19, MainContext_20, SubContext_21, Purity_22, AncestorVarMap_514, &ThenExpansion_515, AfterThenInsideSVarState0_513, &AfterThenInsideSVarState_516, STATE_VARIABLE_UrInfo_5_539, &STATE_VARIABLE_UrInfo_6_540);
                                          Var_541 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_103_567, ThenTerm_512);
                                          hlds__hlds_goal__goal_info_init_2_p_0(Var_541, &ThenGoalInfo_517);
                                          hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_4_p_0(STATE_VARIABLE_UrInfo_6_540, ThenGoalInfo_517, ThenExpansion_515, &ThenGoal0_518);
                                          hlds__make_hlds__state_var__svar_finish_local_state_vars_5_p_0(STATE_VARIABLE_UrInfo_6_540, StateVars_504, STATE_VARIABLE_SVarState_0_74, AfterThenInsideSVarState_516, &AfterThenSVarState_519);
                                          hlds__make_hlds__state_var__replace_any_dot_colon_state_var_in_term_6_p_0(ElseTerm0_318, &ElseTerm_520, STATE_VARIABLE_SVarState_0_74, &AfterElseSVarState0_521, STATE_VARIABLE_UrInfo_6_540, &STATE_VARIABLE_UrInfo_7_542);
                                          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_13_p_0(XVar_15, ElseTerm_520, Context_19, MainContext_20, SubContext_21, Purity_22, AncestorVarMap_514, &ElseExpansion_522, AfterElseSVarState0_521, &AfterElseSVarState_523, STATE_VARIABLE_UrInfo_7_542, &STATE_VARIABLE_UrInfo_8_543);
                                          Var_544 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_103_567, ElseTerm_520);
                                          hlds__hlds_goal__goal_info_init_2_p_0(Var_544, &ElseGoalInfo_524);
                                          hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_4_p_0(STATE_VARIABLE_UrInfo_8_543, ElseGoalInfo_524, ElseExpansion_522, &ElseGoal0_525);
                                          hlds__make_hlds__state_var__svar_finish_if_then_else_14_p_0((MR_Integer) 1, Context_19, StateVars_504, ThenGoal0_518, &ThenGoal_526, ElseGoal0_525, &ElseGoal_527, STATE_VARIABLE_SVarState_0_74, AfterCondInsideSVarState_511, AfterThenSVarState_519, AfterElseSVarState_523, STATE_VARIABLE_SVarState_75, STATE_VARIABLE_UrInfo_8_543, STATE_VARIABLE_UrInfo_77);
                                          Var_546 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), StateVars_504, Vars_503);
                                          {
                                            GoalExpr_529 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                            MR_hl_field(3, GoalExpr_529, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                                            MR_hl_field(3, GoalExpr_529, 1) = ((MR_Box) (Var_546));
                                            MR_hl_field(3, GoalExpr_529, 2) = ((MR_Box) (CondGoal_510));
                                            MR_hl_field(3, GoalExpr_529, 3) = ((MR_Box) (ThenGoal_526));
                                            MR_hl_field(3, GoalExpr_529, 4) = ((MR_Box) (ElseGoal_527));
                                          }
                                          hlds__hlds_goal__goal_info_init_2_p_0(Context_19, &GoalInfo_530);
                                          {
                                            Goal_531 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                            MR_hl_field(0, Goal_531, 0) = ((MR_Box) (GoalExpr_529));
                                            MR_hl_field(0, Goal_531, 1) = ((MR_Box) (GoalInfo_530));
                                          }
                                          Var_548 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_531)));
                                          {
                                            MR_Word base;
                                            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                            *Expansion_24 = base;
                                            MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                            MR_hl_field(0, base, 1) = ((MR_Box) (Var_548));
                                          }
                                        }
                                        succeeded = MR_TRUE;
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
        break;
      case (MR_Integer) 7:
        {
          // case "-->"
          ;
          {
            MR_Word PurityPFArgsDetTerm_61;
            MR_Word BodyGoalTerm_62;
            MR_Word Var_133;
            MR_Word Var_134;

            succeeded = (YArgTerms_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              PurityPFArgsDetTerm_61 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 0))));
              Var_133 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 1))));
              succeeded = (Var_133 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                BodyGoalTerm_62 = ((MR_Word) ((MR_hl_field(1, Var_133, 0))));
                Var_134 = ((MR_Word) ((MR_hl_field(1, Var_133, 1))));
                succeeded = (Var_134 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            if (succeeded)
            {
              MR_Word Var_135;
              MR_Tuple Var_137;

              {
                Var_137 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_137, 0) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_137, 1) = ((MR_Box) (BodyGoalTerm_62));
              }
              {
                Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_135, 0) = ((MR_Box) (Var_137));
              }
              hlds__make_hlds__superhomogeneous_lambda__parse_lambda_expr_11_p_0(XVar_15, Purity_22, Context_19, MainContext_20, SubContext_21, PurityPFArgsDetTerm_61, Var_135, Expansion_24, STATE_VARIABLE_SVarState_0_74, STATE_VARIABLE_UrInfo_0_76, STATE_VARIABLE_UrInfo_77);
            }
            else
            {
              MR_Word Pieces_66;
              MR_Word Spec_67;
              MR_Word Var_139;
              MR_Word Var_142;
              MR_Word Var_143;
              MR_Word Var_145;
              MR_Word Var_146;
              MR_Word Var_154;
              MR_Word Var_155;
              MR_Word STATE_VARIABLE_UrInfo_9_168;
              MR_Word Var_171;

              {
                Var_143 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_143, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_143, 1) = ((MR_Box) (YAtom_16));
              }
              {
                Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_142, 0) = ((MR_Box) (Var_143));
                MR_hl_field(1, Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_139, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[3])));
                MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_142));
              }
              Var_146 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[7])));
              Var_155 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[55])));
              Var_154 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_155, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[10])));
              Var_145 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_146, Var_154);
              Pieces_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_139, Var_145);
              {
                Spec_67 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_67, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.maybe_unravel_special_var_functor_unification\'/14"));
                MR_hl_field(0, Spec_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_67, 2) = ((MR_Box) ((MR_Unsigned) 48U));
                MR_hl_field(0, Spec_67, 3) = ((MR_Box) (YFunctorContext_18));
                MR_hl_field(0, Spec_67, 4) = ((MR_Box) (Pieces_66));
              }
              hlds__make_hlds__state_var__add_unravel_err_3_p_0(Spec_67, STATE_VARIABLE_UrInfo_0_76, &STATE_VARIABLE_UrInfo_9_168);
              hlds__make_hlds__state_var__record_unravel_found_syntax_error_2_p_0(STATE_VARIABLE_UrInfo_9_168, STATE_VARIABLE_UrInfo_77);
              Var_171 = mercury__cord__empty_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Expansion_24 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_171));
              }
            }
            *STATE_VARIABLE_SVarState_75 = STATE_VARIABLE_SVarState_0_74;
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 8:
      case (MR_Integer) 27:
        {
          // case ":", "with_type"
          ;
          {
            MR_Word TypeCtorInfo_68_368;
            MR_Word TypeCtorInfo_69_369;
            MR_Word TypeCtorInfo_70_370;
            MR_Word RValTerm_27;
            MR_Word DeclTypeTerm0_28;
            MR_Word Var_78;
            MR_Word Var_79;
            MR_Word DeclTypeTerm1_331;
            MR_Word ContextPieces_332;
            MR_Word VarSet0_333;
            MR_Word GenericVarSet_334;
            MR_Word DeclTypeResult_335;
            MR_Word Var_342;
            MR_Word Var_344;
            MR_Word STATE_VARIABLE_UrInfo_2_348;

            succeeded = (YArgTerms_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              RValTerm_27 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 0))));
              Var_78 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 1))));
              succeeded = (Var_78 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                DeclTypeTerm0_28 = ((MR_Word) ((MR_hl_field(1, Var_78, 0))));
                Var_79 = ((MR_Word) ((MR_hl_field(1, Var_78, 1))));
                succeeded = (Var_79 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  TypeCtorInfo_68_368 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                  TypeCtorInfo_69_369 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                  mercury__term__coerce_2_p_0(TypeCtorInfo_68_368, TypeCtorInfo_69_369, DeclTypeTerm0_28, &DeclTypeTerm1_331);
                  TypeCtorInfo_70_370 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
                  Var_342 = (MR_Word) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[11]));
                  ContextPieces_332 = mercury__cord__singleton_1_f_0(TypeCtorInfo_70_370, ((MR_Box) (Var_342)));
                  VarSet0_333 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 3))));
                  mercury__varset__coerce_2_p_0(TypeCtorInfo_68_368, TypeCtorInfo_69_369, VarSet0_333, &GenericVarSet_334);
                  Var_344 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_3[0]));
                  parse_tree__parse_type_name__parse_type_5_p_0(Var_344, GenericVarSet_334, ContextPieces_332, DeclTypeTerm1_331, &DeclTypeResult_335);
                  if (((MR_tag((MR_Word) DeclTypeResult_335)) == (MR_Integer) 0))
                  {
                    MR_Word DeclTypeSpecs_341 = ((MR_Word) ((MR_hl_field(0, DeclTypeResult_335, 0))));

                    hlds__make_hlds__state_var__add_unravel_oom_errs_3_p_0(DeclTypeSpecs_341, STATE_VARIABLE_UrInfo_0_76, &STATE_VARIABLE_UrInfo_2_348);
                  }
                  else
                  {
                    MR_Word DeclType_336 = ((MR_Word) ((MR_hl_field(1, DeclTypeResult_335, 0))));
                    MR_Word DeclVarSet_337;
                    MR_Word QualInfo0_338;
                    MR_Word QualInfo_339;
                    MR_Word TypeQualSpecs_340;
                    MR_Word STATE_VARIABLE_UrInfo_1_347;
                    MR_Word Var_361;
                    MR_Integer Var_362;
                    MR_Word Var_364;
                    MR_Word Var_365;
                    MR_Word Var_366;
                    MR_Word Var_367;

                    mercury__varset__coerce_2_p_0(TypeCtorInfo_68_368, (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet0_333, &DeclVarSet_337);
                    QualInfo0_338 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 2))));
                    hlds__make_hlds__qual_info__process_type_qualification_8_p_0(XVar_15, DeclType_336, DeclVarSet_337, YFunctorContext_18, QualInfo0_338, &QualInfo_339, (MR_Word) ((MR_Unsigned) 0U), &TypeQualSpecs_340);
                    Var_361 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 0))));
                    Var_362 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 1))));
                    Var_364 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 3))));
                    Var_365 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 4))));
                    Var_366 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 5))));
                    Var_367 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 6))));
                    {
                      STATE_VARIABLE_UrInfo_1_347 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, STATE_VARIABLE_UrInfo_1_347, 0) = ((MR_Box) (Var_361));
                      MR_hl_field(0, STATE_VARIABLE_UrInfo_1_347, 1) = ((MR_Box) (Var_362));
                      MR_hl_field(0, STATE_VARIABLE_UrInfo_1_347, 2) = ((MR_Box) (QualInfo_339));
                      MR_hl_field(0, STATE_VARIABLE_UrInfo_1_347, 3) = ((MR_Box) (Var_364));
                      MR_hl_field(0, STATE_VARIABLE_UrInfo_1_347, 4) = ((MR_Box) (Var_365));
                      MR_hl_field(0, STATE_VARIABLE_UrInfo_1_347, 5) = ((MR_Box) (Var_366));
                      MR_hl_field(0, STATE_VARIABLE_UrInfo_1_347, 6) = ((MR_Box) (Var_367));
                    }
                    hlds__make_hlds__state_var__add_unravel_errs_3_p_0(TypeQualSpecs_340, STATE_VARIABLE_UrInfo_1_347, &STATE_VARIABLE_UrInfo_2_348);
                  }
                  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_12_p_0(XVar_15, RValTerm_27, Context_19, MainContext_20, SubContext_21, Purity_22, Expansion_24, STATE_VARIABLE_SVarState_0_74, STATE_VARIABLE_SVarState_75, STATE_VARIABLE_UrInfo_2_348, STATE_VARIABLE_UrInfo_77);
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 13:
        {
          // case ":-"
          ;
          {
            MR_Word PurityPFArgsDetTerm_248;
            MR_Word BodyGoalTerm_249;
            MR_Word Var_216;
            MR_Word Var_217;

            succeeded = (YArgTerms_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              PurityPFArgsDetTerm_248 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 0))));
              Var_216 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 1))));
              succeeded = (Var_216 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                BodyGoalTerm_249 = ((MR_Word) ((MR_hl_field(1, Var_216, 0))));
                Var_217 = ((MR_Word) ((MR_hl_field(1, Var_216, 1))));
                succeeded = (Var_217 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            if (succeeded)
            {
              MR_Word Var_218;
              MR_Tuple Var_219;

              {
                Var_219 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_219, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(0, Var_219, 1) = ((MR_Box) (BodyGoalTerm_249));
              }
              {
                Var_218 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_218, 0) = ((MR_Box) (Var_219));
              }
              hlds__make_hlds__superhomogeneous_lambda__parse_lambda_expr_11_p_0(XVar_15, Purity_22, Context_19, MainContext_20, SubContext_21, PurityPFArgsDetTerm_248, Var_218, Expansion_24, STATE_VARIABLE_SVarState_0_74, STATE_VARIABLE_UrInfo_0_76, STATE_VARIABLE_UrInfo_77);
            }
            else
            {
              MR_Word Pieces_223;
              MR_Word Spec_224;
              MR_Word Var_226;
              MR_Word Var_228;
              MR_Word Var_229;
              MR_Word Var_231;
              MR_Word Var_232;
              MR_Word Var_234;
              MR_Word Var_235;
              MR_Word STATE_VARIABLE_UrInfo_9_243;
              MR_Word Var_245;

              {
                Var_229 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_229, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_229, 1) = ((MR_Box) (YAtom_16));
              }
              {
                Var_228 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_228, 0) = ((MR_Box) (Var_229));
                MR_hl_field(1, Var_228, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_226 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_226, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[3])));
                MR_hl_field(1, Var_226, 1) = ((MR_Box) (Var_228));
              }
              Var_232 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[7])));
              Var_235 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[57])));
              Var_234 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_235, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[10])));
              Var_231 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_232, Var_234);
              Pieces_223 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_226, Var_231);
              {
                Spec_224 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_224, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.maybe_unravel_special_var_functor_unification\'/14"));
                MR_hl_field(0, Spec_224, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_224, 2) = ((MR_Box) ((MR_Unsigned) 48U));
                MR_hl_field(0, Spec_224, 3) = ((MR_Box) (YFunctorContext_18));
                MR_hl_field(0, Spec_224, 4) = ((MR_Box) (Pieces_223));
              }
              hlds__make_hlds__state_var__add_unravel_err_3_p_0(Spec_224, STATE_VARIABLE_UrInfo_0_76, &STATE_VARIABLE_UrInfo_9_243);
              hlds__make_hlds__state_var__record_unravel_found_syntax_error_2_p_0(STATE_VARIABLE_UrInfo_9_243, STATE_VARIABLE_UrInfo_77);
              Var_245 = mercury__cord__empty_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Expansion_24 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_245));
              }
            }
            *STATE_VARIABLE_SVarState_75 = STATE_VARIABLE_SVarState_0_74;
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 26:
        {
          // case ";"
          ;
          {
            MR_Word TypeCtorInfo_103_491;
            MR_Word TypeCtorInfo_104_492;
            MR_Word TypeCtorInfo_105_493;
            MR_Word ElseTerm0_44;
            MR_Word CondTerm0_45;
            MR_Word ThenTerm0_46;
            MR_Word Var_114;
            MR_Word Var_190;
            MR_Word Var_191;
            MR_Word Var_196;
            MR_Word Var_203;
            MR_Word Var_204;
            MR_Word Var_205;
            MR_String Var_207;
            MR_Word CondTerm_422;
            MR_Word ContextPieces_423;
            MR_Word VarSet0_424;
            MR_Word MaybeVarsCond_425;
            MR_Word VarSet_426;
            MR_Word STATE_VARIABLE_UrInfo_1_458;
            MR_Word Var_484;
            MR_Integer Var_485;
            MR_Word Var_486;
            MR_Word Var_488;
            MR_Word Var_489;
            MR_Word Var_490;

            succeeded = (YArgTerms_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_191 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 0))));
              Var_190 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 1))));
              succeeded = (Var_190 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ElseTerm0_44 = ((MR_Word) ((MR_hl_field(1, Var_190, 0))));
                Var_196 = ((MR_Word) ((MR_hl_field(1, Var_190, 1))));
                succeeded = (Var_196 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_191)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_204 = ((MR_Word) ((MR_hl_field(0, Var_191, 0))));
                    Var_203 = ((MR_Word) ((MR_hl_field(0, Var_191, 1))));
                    succeeded = (Var_203 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      CondTerm0_45 = ((MR_Word) ((MR_hl_field(1, Var_203, 0))));
                      Var_205 = ((MR_Word) ((MR_hl_field(1, Var_203, 1))));
                      succeeded = ((MR_tag((MR_Word) Var_204)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_207 = ((MR_String) ((MR_hl_field(0, Var_204, 0))));
                        succeeded = (strcmp(Var_207, (MR_String) "->") == 0);
                        if (succeeded)
                        {
                          succeeded = (Var_205 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ThenTerm0_46 = ((MR_Word) ((MR_hl_field(1, Var_205, 0))));
                            Var_114 = ((MR_Word) ((MR_hl_field(1, Var_205, 1))));
                            succeeded = (Var_114 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              TypeCtorInfo_103_491 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                              TypeCtorInfo_104_492 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                              mercury__term__coerce_2_p_0(TypeCtorInfo_103_491, TypeCtorInfo_104_492, CondTerm0_45, &CondTerm_422);
                              TypeCtorInfo_105_493 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
                              ContextPieces_423 = mercury__cord__init_0_f_0(TypeCtorInfo_105_493);
                              VarSet0_424 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 3))));
                              parse_tree__parse_goal__parse_some_vars_goal_5_p_0(CondTerm_422, ContextPieces_423, &MaybeVarsCond_425, VarSet0_424, &VarSet_426);
                              Var_484 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 0))));
                              Var_485 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 1))));
                              Var_486 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 2))));
                              Var_488 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 4))));
                              Var_489 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 5))));
                              Var_490 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 6))));
                              {
                                STATE_VARIABLE_UrInfo_1_458 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, STATE_VARIABLE_UrInfo_1_458, 0) = ((MR_Box) (Var_484));
                                MR_hl_field(0, STATE_VARIABLE_UrInfo_1_458, 1) = ((MR_Box) (Var_485));
                                MR_hl_field(0, STATE_VARIABLE_UrInfo_1_458, 2) = ((MR_Box) (Var_486));
                                MR_hl_field(0, STATE_VARIABLE_UrInfo_1_458, 3) = ((MR_Box) (VarSet_426));
                                MR_hl_field(0, STATE_VARIABLE_UrInfo_1_458, 4) = ((MR_Box) (Var_488));
                                MR_hl_field(0, STATE_VARIABLE_UrInfo_1_458, 5) = ((MR_Box) (Var_489));
                                MR_hl_field(0, STATE_VARIABLE_UrInfo_1_458, 6) = ((MR_Box) (Var_490));
                              }
                              if (((MR_tag((MR_Word) MaybeVarsCond_425)) == (MR_Integer) 0))
                              {
                                MR_Word OoMVarsCondErrSpecs_456;
                                MR_Word VarsConsWarnSpecs_457;
                                MR_Tuple Var_473 = ((MR_Tuple) ((MR_hl_field(0, MaybeVarsCond_425, 0))));
                                MR_Word STATE_VARIABLE_UrInfo_10_474;
                                MR_Word Var_476;
                                MR_Word Var_477;

                                OoMVarsCondErrSpecs_456 = ((MR_Word) ((MR_hl_field(0, Var_473, 0))));
                                VarsConsWarnSpecs_457 = ((MR_Word) ((MR_hl_field(0, Var_473, 1))));
                                hlds__make_hlds__state_var__add_unravel_oom_errs_3_p_0(OoMVarsCondErrSpecs_456, STATE_VARIABLE_UrInfo_1_458, &STATE_VARIABLE_UrInfo_10_474);
                                hlds__make_hlds__state_var__add_unravel_warns_3_p_0(VarsConsWarnSpecs_457, STATE_VARIABLE_UrInfo_10_474, STATE_VARIABLE_UrInfo_77);
                                Var_477 = hlds__make_goal__true_goal_with_context_1_f_0(Context_19);
                                Var_476 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Var_477)));
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                  *Expansion_24 = base;
                                  MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                  MR_hl_field(0, base, 1) = ((MR_Box) (Var_476));
                                }
                                *STATE_VARIABLE_SVarState_75 = STATE_VARIABLE_SVarState_0_74;
                              }
                              else
                              {
                                MR_Word Vars_427 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCond_425, 0))));
                                MR_Word StateVars_428 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCond_425, 1))));
                                MR_Word CondParseTree_429 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCond_425, 2))));
                                MR_Word CondWarningSpecs_430 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCond_425, 3))));
                                MR_Word BeforeInsideSVarState_432;
                                MR_Word EmptyRenaming_433;
                                MR_Word CondGoal_434;
                                MR_Word AfterCondInsideSVarState_435;
                                MR_Word ThenTerm_436;
                                MR_Word AfterThenInsideSVarState0_437;
                                MR_Word AncestorVarMap_438;
                                MR_Word ThenExpansion_439;
                                MR_Word AfterThenInsideSVarState_440;
                                MR_Word ThenGoalInfo_441;
                                MR_Word ThenGoal0_442;
                                MR_Word AfterThenSVarState_443;
                                MR_Word ElseTerm_444;
                                MR_Word AfterElseSVarState0_445;
                                MR_Word ElseExpansion_446;
                                MR_Word AfterElseSVarState_447;
                                MR_Word ElseGoalInfo_448;
                                MR_Word ElseGoal0_449;
                                MR_Word ThenGoal_450;
                                MR_Word ElseGoal_451;
                                MR_Word GoalExpr_453;
                                MR_Word GoalInfo_454;
                                MR_Word Goal_455;
                                MR_Word STATE_VARIABLE_UrInfo_2_459;
                                MR_Word STATE_VARIABLE_UrInfo_3_460;
                                MR_Word STATE_VARIABLE_UrInfo_4_462;
                                MR_Word STATE_VARIABLE_UrInfo_5_463;
                                MR_Word STATE_VARIABLE_UrInfo_6_464;
                                MR_Word Var_465;
                                MR_Word STATE_VARIABLE_UrInfo_7_466;
                                MR_Word STATE_VARIABLE_UrInfo_8_467;
                                MR_Word Var_468;
                                MR_Word Var_470;
                                MR_Word Var_472;

                                hlds__make_hlds__state_var__add_unravel_warns_3_p_0(CondWarningSpecs_430, STATE_VARIABLE_UrInfo_1_458, &STATE_VARIABLE_UrInfo_2_459);
                                hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_6_p_0(Context_19, StateVars_428, STATE_VARIABLE_SVarState_0_74, &BeforeInsideSVarState_432, STATE_VARIABLE_UrInfo_2_459, &STATE_VARIABLE_UrInfo_3_460);
                                mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), &EmptyRenaming_433);
                                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0((MR_Integer) 1, EmptyRenaming_433, CondParseTree_429, &CondGoal_434, BeforeInsideSVarState_432, &AfterCondInsideSVarState_435, STATE_VARIABLE_UrInfo_3_460, &STATE_VARIABLE_UrInfo_4_462);
                                hlds__make_hlds__state_var__replace_any_dot_colon_state_var_in_term_6_p_0(ThenTerm0_46, &ThenTerm_436, AfterCondInsideSVarState_435, &AfterThenInsideSVarState0_437, STATE_VARIABLE_UrInfo_4_462, &STATE_VARIABLE_UrInfo_5_463);
                                mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), &AncestorVarMap_438);
                                hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_13_p_0(XVar_15, ThenTerm_436, Context_19, MainContext_20, SubContext_21, Purity_22, AncestorVarMap_438, &ThenExpansion_439, AfterThenInsideSVarState0_437, &AfterThenInsideSVarState_440, STATE_VARIABLE_UrInfo_5_463, &STATE_VARIABLE_UrInfo_6_464);
                                Var_465 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_103_491, ThenTerm_436);
                                hlds__hlds_goal__goal_info_init_2_p_0(Var_465, &ThenGoalInfo_441);
                                hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_4_p_0(STATE_VARIABLE_UrInfo_6_464, ThenGoalInfo_441, ThenExpansion_439, &ThenGoal0_442);
                                hlds__make_hlds__state_var__svar_finish_local_state_vars_5_p_0(STATE_VARIABLE_UrInfo_6_464, StateVars_428, STATE_VARIABLE_SVarState_0_74, AfterThenInsideSVarState_440, &AfterThenSVarState_443);
                                hlds__make_hlds__state_var__replace_any_dot_colon_state_var_in_term_6_p_0(ElseTerm0_44, &ElseTerm_444, STATE_VARIABLE_SVarState_0_74, &AfterElseSVarState0_445, STATE_VARIABLE_UrInfo_6_464, &STATE_VARIABLE_UrInfo_7_466);
                                hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_13_p_0(XVar_15, ElseTerm_444, Context_19, MainContext_20, SubContext_21, Purity_22, AncestorVarMap_438, &ElseExpansion_446, AfterElseSVarState0_445, &AfterElseSVarState_447, STATE_VARIABLE_UrInfo_7_466, &STATE_VARIABLE_UrInfo_8_467);
                                Var_468 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_103_491, ElseTerm_444);
                                hlds__hlds_goal__goal_info_init_2_p_0(Var_468, &ElseGoalInfo_448);
                                hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_4_p_0(STATE_VARIABLE_UrInfo_8_467, ElseGoalInfo_448, ElseExpansion_446, &ElseGoal0_449);
                                hlds__make_hlds__state_var__svar_finish_if_then_else_14_p_0((MR_Integer) 1, Context_19, StateVars_428, ThenGoal0_442, &ThenGoal_450, ElseGoal0_449, &ElseGoal_451, STATE_VARIABLE_SVarState_0_74, AfterCondInsideSVarState_435, AfterThenSVarState_443, AfterElseSVarState_447, STATE_VARIABLE_SVarState_75, STATE_VARIABLE_UrInfo_8_467, STATE_VARIABLE_UrInfo_77);
                                Var_470 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), StateVars_428, Vars_427);
                                {
                                  GoalExpr_453 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(3, GoalExpr_453, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                                  MR_hl_field(3, GoalExpr_453, 1) = ((MR_Box) (Var_470));
                                  MR_hl_field(3, GoalExpr_453, 2) = ((MR_Box) (CondGoal_434));
                                  MR_hl_field(3, GoalExpr_453, 3) = ((MR_Box) (ThenGoal_450));
                                  MR_hl_field(3, GoalExpr_453, 4) = ((MR_Box) (ElseGoal_451));
                                }
                                hlds__hlds_goal__goal_info_init_2_p_0(Context_19, &GoalInfo_454);
                                {
                                  Goal_455 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, Goal_455, 0) = ((MR_Box) (GoalExpr_453));
                                  MR_hl_field(0, Goal_455, 1) = ((MR_Box) (GoalInfo_454));
                                }
                                Var_472 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_455)));
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                  *Expansion_24 = base;
                                  MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                  MR_hl_field(0, base, 1) = ((MR_Box) (Var_472));
                                }
                              }
                              succeeded = MR_TRUE;
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
        break;
      case (MR_Integer) 28:
        {
          // case "="
          ;
          {
            MR_Word FuncArgsTerm_69;
            MR_String FuncTermFunctor_71;
            MR_Word Var_175;
            MR_Word Var_176;
            MR_Word Var_177;
            MR_Word Var_178;
            MR_Word Var_179;
            MR_Word YTerm_186;

            succeeded = (YArgTerms_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FuncArgsTerm_69 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 0))));
              Var_175 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 1))));
              succeeded = (Var_175 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_176 = ((MR_Word) ((MR_hl_field(1, Var_175, 1))));
                succeeded = (Var_176 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) FuncArgsTerm_69)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_177 = ((MR_Word) ((MR_hl_field(0, FuncArgsTerm_69, 0))));
                    succeeded = ((MR_tag((MR_Word) Var_177)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      FuncTermFunctor_71 = ((MR_String) ((MR_hl_field(0, Var_177, 0))));
                      if ((strcmp(FuncTermFunctor_71, (MR_String) "func") == 0))
                        succeeded = MR_TRUE;
                      else
                      if ((strcmp(FuncTermFunctor_71, (MR_String) "any_func") == 0))
                        succeeded = MR_TRUE;
                      else
                        succeeded = MR_FALSE;
                      if (succeeded)
                      {
                        Var_179 = (MR_Word) ((MR_Unsigned) 0U);
                        {
                          Var_178 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_178, 0) = ((MR_Box) (YAtom_16));
                        }
                        {
                          YTerm_186 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, YTerm_186, 0) = ((MR_Box) (Var_178));
                          MR_hl_field(0, YTerm_186, 1) = ((MR_Box) (YArgTerms_17));
                          MR_hl_field(0, YTerm_186, 2) = ((MR_Box) (YFunctorContext_18));
                        }
                        hlds__make_hlds__superhomogeneous_lambda__parse_lambda_expr_11_p_0(XVar_15, Purity_22, Context_19, MainContext_20, SubContext_21, YTerm_186, Var_179, Expansion_24, STATE_VARIABLE_SVarState_0_74, STATE_VARIABLE_UrInfo_0_76, STATE_VARIABLE_UrInfo_77);
                        *STATE_VARIABLE_SVarState_75 = STATE_VARIABLE_SVarState_0_74;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 29:
        {
          // case ":="
          ;
          {
            MR_Word TypeInfo_86_418;
            MR_Word TypeCtorInfo_87_419;
            MR_Word TypeCtorInfo_88_420;
            MR_Word FieldDescrTerm_57;
            MR_Word FieldValueTerm0_58;
            MR_Word Var_124;
            MR_Word Var_125;
            MR_Word Var_126;
            MR_String Var_127;
            MR_Word Var_128;
            MR_Word Var_129;
            MR_Word Var_130;
            MR_Word InputTerm0_182;
            MR_Word FieldNameTerm_183;
            MR_Word FieldNameContextPieces_372;
            MR_Word VarSet0_373;
            MR_Word MaybeFieldNames_374;
            MR_Word FieldNames_375;
            MR_Word InputTerm_376;
            MR_Word InputTermVar_377;
            MR_Word FieldValueTerm_378;
            MR_Word FieldValueVar_379;
            MR_Word Functor_380;
            MR_Word InnerFunctor_381;
            MR_Word FieldSubContext_382;
            MR_Word SetGoal_383;
            MR_Integer TermArgNumber_384;
            MR_Word TermArgContext_385;
            MR_Word InputVTNC_386;
            MR_Integer FieldArgNumber_387;
            MR_Word FieldArgContext_388;
            MR_Word FieldVTNC_389;
            MR_Word AncestorVarMap_390;
            MR_Word InputFieldArgExpansions_391;
            MR_Word GoalInfo_392;
            MR_Word Goal_393;
            MR_Word STATE_VARIABLE_SVarState_1_395;
            MR_Word STATE_VARIABLE_UrInfo_1_396;
            MR_Word Var_397;
            MR_Word STATE_VARIABLE_UrInfo_2_398;
            MR_Word STATE_VARIABLE_SVarState_2_399;
            MR_Word STATE_VARIABLE_UrInfo_3_400;
            MR_Word Var_401;
            MR_Word STATE_VARIABLE_UrInfo_4_402;
            MR_Word Var_403;
            MR_Word Var_404;
            MR_Word STATE_VARIABLE_SVarState_3_405;
            MR_Word STATE_VARIABLE_UrInfo_5_406;
            MR_Word Var_407;
            MR_Word Var_408;
            MR_Word Var_409;
            MR_Word Var_410;
            MR_Word Var_411;

            succeeded = (YArgTerms_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FieldDescrTerm_57 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 0))));
              Var_124 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 1))));
              succeeded = (Var_124 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                FieldValueTerm0_58 = ((MR_Word) ((MR_hl_field(1, Var_124, 0))));
                Var_125 = ((MR_Word) ((MR_hl_field(1, Var_124, 1))));
                succeeded = (Var_125 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) FieldDescrTerm_57)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_126 = ((MR_Word) ((MR_hl_field(0, FieldDescrTerm_57, 0))));
                    Var_128 = ((MR_Word) ((MR_hl_field(0, FieldDescrTerm_57, 1))));
                    succeeded = ((MR_tag((MR_Word) Var_126)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_127 = ((MR_String) ((MR_hl_field(0, Var_126, 0))));
                      succeeded = (strcmp(Var_127, (MR_String) "^") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_128 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          InputTerm0_182 = ((MR_Word) ((MR_hl_field(1, Var_128, 0))));
                          Var_129 = ((MR_Word) ((MR_hl_field(1, Var_128, 1))));
                          succeeded = (Var_129 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            FieldNameTerm_183 = ((MR_Word) ((MR_hl_field(1, Var_129, 0))));
                            Var_130 = ((MR_Word) ((MR_hl_field(1, Var_129, 1))));
                            succeeded = (Var_130 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              FieldNameContextPieces_372 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[21]));
                              VarSet0_373 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 3))));
                              hlds__make_hlds__field_access__parse_field_list_4_p_0(FieldNameTerm_183, VarSet0_373, FieldNameContextPieces_372, &MaybeFieldNames_374);
                              succeeded = ((MR_tag((MR_Word) MaybeFieldNames_374)) == (MR_Integer) 1);
                              if (succeeded)
                              {
                                FieldNames_375 = ((MR_Word) ((MR_hl_field(1, MaybeFieldNames_374, 0))));
                                hlds__make_hlds__state_var__replace_any_dot_colon_state_var_in_term_6_p_0(InputTerm0_182, &InputTerm_376, STATE_VARIABLE_SVarState_0_74, &STATE_VARIABLE_SVarState_1_395, STATE_VARIABLE_UrInfo_0_76, &STATE_VARIABLE_UrInfo_1_396);
                                Var_397 = (MR_Word) ((MR_Unsigned) 0U);
                                hlds__make_hlds__superhomogeneous_util__make_fresh_arg_var_no_svar_5_p_0(InputTerm_376, &InputTermVar_377, Var_397, STATE_VARIABLE_UrInfo_1_396, &STATE_VARIABLE_UrInfo_2_398);
                                hlds__make_hlds__state_var__replace_any_dot_colon_state_var_in_term_6_p_0(FieldValueTerm0_58, &FieldValueTerm_378, STATE_VARIABLE_SVarState_1_395, &STATE_VARIABLE_SVarState_2_399, STATE_VARIABLE_UrInfo_2_398, &STATE_VARIABLE_UrInfo_3_400);
                                Var_403 = (MR_Word) ((MR_Unsigned) 0U);
                                {
                                  Var_401 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Var_401, 0) = ((MR_Box) (InputTermVar_377));
                                  MR_hl_field(1, Var_401, 1) = ((MR_Box) (Var_403));
                                }
                                hlds__make_hlds__superhomogeneous_util__make_fresh_arg_var_no_svar_5_p_0(FieldValueTerm_378, &FieldValueVar_379, Var_401, STATE_VARIABLE_UrInfo_3_400, &STATE_VARIABLE_UrInfo_4_402);
                                hlds__make_hlds__field_access__expand_set_field_function_call_14_p_0(Context_19, MainContext_20, SubContext_21, FieldNames_375, FieldValueVar_379, InputTermVar_377, XVar_15, &Functor_380, &Var_404, &SetGoal_383, STATE_VARIABLE_SVarState_2_399, &STATE_VARIABLE_SVarState_3_405, STATE_VARIABLE_UrInfo_4_402, &STATE_VARIABLE_UrInfo_5_406);
                                InnerFunctor_381 = ((MR_Word) ((MR_hl_field(0, Var_404, 0))));
                                FieldSubContext_382 = ((MR_Word) ((MR_hl_field(0, Var_404, 1))));
                                TermArgNumber_384 = (MR_Integer) 1;
                                FieldArgNumber_387 = (MR_Integer) 2;
                                TypeInfo_86_418 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]);
                                TypeCtorInfo_87_419 = (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0);
                                {
                                  TermArgContext_385 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(2, TermArgContext_385, 0) = ((MR_Box) (Functor_380));
                                  MR_hl_field(2, TermArgContext_385, 1) = ((MR_Box) (MainContext_20));
                                  MR_hl_field(2, TermArgContext_385, 2) = ((MR_Box) (SubContext_21));
                                }
                                {
                                  InputVTNC_386 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, InputVTNC_386, 0) = ((MR_Box) (InputTermVar_377));
                                  MR_hl_field(0, InputVTNC_386, 1) = ((MR_Box) (InputTerm_376));
                                  MR_hl_field(0, InputVTNC_386, 2) = ((MR_Box) (TermArgNumber_384));
                                  MR_hl_field(0, InputVTNC_386, 3) = ((MR_Box) (TermArgContext_385));
                                }
                                {
                                  FieldArgContext_388 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(2, FieldArgContext_388, 0) = ((MR_Box) (InnerFunctor_381));
                                  MR_hl_field(2, FieldArgContext_388, 1) = ((MR_Box) (MainContext_20));
                                  MR_hl_field(2, FieldArgContext_388, 2) = ((MR_Box) (FieldSubContext_382));
                                }
                                {
                                  FieldVTNC_389 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, FieldVTNC_389, 0) = ((MR_Box) (FieldValueVar_379));
                                  MR_hl_field(0, FieldVTNC_389, 1) = ((MR_Box) (FieldValueTerm_378));
                                  MR_hl_field(0, FieldVTNC_389, 2) = ((MR_Box) (FieldArgNumber_387));
                                  MR_hl_field(0, FieldVTNC_389, 3) = ((MR_Box) (FieldArgContext_388));
                                }
                                mercury__map__init_1_p_0(TypeInfo_86_418, TypeCtorInfo_87_419, &AncestorVarMap_390);
                                Var_409 = (MR_Word) ((MR_Unsigned) 0U);
                                {
                                  Var_408 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Var_408, 0) = ((MR_Box) (FieldVTNC_389));
                                  MR_hl_field(1, Var_408, 1) = ((MR_Box) (Var_409));
                                }
                                {
                                  Var_407 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Var_407, 0) = ((MR_Box) (InputVTNC_386));
                                  MR_hl_field(1, Var_407, 1) = ((MR_Box) (Var_408));
                                }
                                hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_51_93_95_48_9_p_0(Var_407, Context_19, AncestorVarMap_390, &InputFieldArgExpansions_391, STATE_VARIABLE_SVarState_3_405, STATE_VARIABLE_SVarState_75, STATE_VARIABLE_UrInfo_5_406, STATE_VARIABLE_UrInfo_77);
                                hlds__hlds_goal__goal_info_init_2_p_0(Context_19, &GoalInfo_392);
                                hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_5_p_0(*STATE_VARIABLE_UrInfo_77, GoalInfo_392, InputFieldArgExpansions_391, SetGoal_383, &Goal_393);
                                Var_410 = (MR_Word) ((MR_Unsigned) 0U);
                                TypeCtorInfo_88_420 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                                Var_411 = mercury__cord__singleton_1_f_0(TypeCtorInfo_88_420, ((MR_Box) (Goal_393)));
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                  *Expansion_24 = base;
                                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_410));
                                  MR_hl_field(0, base, 1) = ((MR_Box) (Var_411));
                                }
                                succeeded = MR_TRUE;
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
        break;
      case (MR_Integer) 31:
        {
          // case "^"
          ;
          {
            MR_Word TypeInfo_72_604;
            MR_Word TypeCtorInfo_73_605;
            MR_Word TypeCtorInfo_74_606;
            MR_Word InputTerm0_50;
            MR_Word FieldNameTerm_51;
            MR_Word Var_213;
            MR_Word Var_215;
            MR_Word FieldNameContextPieces_574;
            MR_Word VarSet0_575;
            MR_Word MaybeFieldNames_576;
            MR_Word FieldNames_577;
            MR_Word InputTerm_578;
            MR_Word InputTermVar_579;
            MR_Word Functor_580;
            MR_Word GetGoal_582;
            MR_Word ArgContext_583;
            MR_Word AncestorVarMap_584;
            MR_Word InputArgExpansion_585;
            MR_Word GoalInfo_586;
            MR_Word Goal_587;
            MR_Word STATE_VARIABLE_SVarState_1_589;
            MR_Word STATE_VARIABLE_UrInfo_1_590;
            MR_Word Var_591;
            MR_Word STATE_VARIABLE_UrInfo_2_592;
            MR_Word STATE_VARIABLE_SVarState_2_593;
            MR_Word STATE_VARIABLE_UrInfo_3_594;
            MR_Integer Var_595;
            MR_Word Var_596;
            MR_Word Var_597;
            MR_Word Var_581;

            succeeded = (YArgTerms_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              InputTerm0_50 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 0))));
              Var_215 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 1))));
              succeeded = (Var_215 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                FieldNameTerm_51 = ((MR_Word) ((MR_hl_field(1, Var_215, 0))));
                Var_213 = ((MR_Word) ((MR_hl_field(1, Var_215, 1))));
                succeeded = (Var_213 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  FieldNameContextPieces_574 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[17]));
                  VarSet0_575 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_76, 3))));
                  hlds__make_hlds__field_access__parse_field_list_4_p_0(FieldNameTerm_51, VarSet0_575, FieldNameContextPieces_574, &MaybeFieldNames_576);
                  succeeded = ((MR_tag((MR_Word) MaybeFieldNames_576)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    FieldNames_577 = ((MR_Word) ((MR_hl_field(1, MaybeFieldNames_576, 0))));
                    hlds__make_hlds__state_var__replace_any_dot_colon_state_var_in_term_6_p_0(InputTerm0_50, &InputTerm_578, STATE_VARIABLE_SVarState_0_74, &STATE_VARIABLE_SVarState_1_589, STATE_VARIABLE_UrInfo_0_76, &STATE_VARIABLE_UrInfo_1_590);
                    Var_591 = (MR_Word) ((MR_Unsigned) 0U);
                    hlds__make_hlds__superhomogeneous_util__make_fresh_arg_var_no_svar_5_p_0(InputTerm_578, &InputTermVar_579, Var_591, STATE_VARIABLE_UrInfo_1_590, &STATE_VARIABLE_UrInfo_2_592);
                    hlds__make_hlds__field_access__expand_get_field_function_call_14_p_0(Context_19, MainContext_20, SubContext_21, FieldNames_577, XVar_15, InputTermVar_579, Purity_22, &Functor_580, &Var_581, &GetGoal_582, STATE_VARIABLE_SVarState_1_589, &STATE_VARIABLE_SVarState_2_593, STATE_VARIABLE_UrInfo_2_592, &STATE_VARIABLE_UrInfo_3_594);
                    TypeInfo_72_604 = (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]);
                    TypeCtorInfo_73_605 = (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0);
                    {
                      ArgContext_583 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, ArgContext_583, 0) = ((MR_Box) (Functor_580));
                      MR_hl_field(2, ArgContext_583, 1) = ((MR_Box) (MainContext_20));
                      MR_hl_field(2, ArgContext_583, 2) = ((MR_Box) (SubContext_21));
                    }
                    mercury__map__init_1_p_0(TypeInfo_72_604, TypeCtorInfo_73_605, &AncestorVarMap_584);
                    Var_595 = (MR_Integer) 1;
                    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_12_p_0(InputTermVar_579, InputTerm_578, YFunctorContext_18, ArgContext_583, Var_595, AncestorVarMap_584, &InputArgExpansion_585, STATE_VARIABLE_SVarState_2_593, STATE_VARIABLE_SVarState_75, STATE_VARIABLE_UrInfo_3_594, STATE_VARIABLE_UrInfo_77);
                    hlds__hlds_goal__goal_info_init_2_p_0(Context_19, &GoalInfo_586);
                    hlds__make_hlds__superhomogeneous__insert_expansion_before_goal_top_not_fgti_5_p_0(*STATE_VARIABLE_UrInfo_77, GoalInfo_586, InputArgExpansion_585, GetGoal_582, &Goal_587);
                    Var_596 = (MR_Word) ((MR_Unsigned) 0U);
                    TypeCtorInfo_74_606 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                    Var_597 = mercury__cord__singleton_1_f_0(TypeCtorInfo_74_606, ((MR_Box) (Goal_587)));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Expansion_24 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (Var_596));
                      MR_hl_field(0, base, 1) = ((MR_Box) (Var_597));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
    }
    // jump out of search loop
    ;
    goto label_0;
  }
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_13_p_0(
  MR_Word XVar_14,
  MR_Word YTerm_15,
  MR_Word Context_16,
  MR_Word MainContext_17,
  MR_Word SubContext_18,
  MR_Word Purity_19,
  MR_Word AncestorVarMap_21,
  MR_Word * Expansion_22,
  MR_Word STATE_VARIABLE_SVarState_0_31,
  MR_Word * STATE_VARIABLE_SVarState_32,
  MR_Word STATE_VARIABLE_UrInfo_0_33,
  MR_Word * STATE_VARIABLE_UrInfo_34)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) YTerm_15)) == (MR_Integer) 0))
  {
    MR_Word YFunctor_28 = ((MR_Word) ((MR_hl_field(0, YTerm_15, 0))));
    MR_Word YArgTerms_29 = ((MR_Word) ((MR_hl_field(0, YTerm_15, 1))));
    MR_Word YFunctorContext_30 = ((MR_Word) ((MR_hl_field(0, YTerm_15, 2))));
    MR_Word YArgTerms_40;
    MR_Word STATE_VARIABLE_SVarState_1_43;
    MR_Word STATE_VARIABLE_UrInfo_1_44;
    MR_Word ExpansionPrime_42;
    MR_Word STATE_VARIABLE_SVarState_2_45;
    MR_Word STATE_VARIABLE_UrInfo_2_46;
    MR_String YAtom_41;

    hlds__make_hlds__state_var__replace_any_dot_colon_state_var_in_terms_6_p_0(YArgTerms_29, &YArgTerms_40, STATE_VARIABLE_SVarState_0_31, &STATE_VARIABLE_SVarState_1_43, STATE_VARIABLE_UrInfo_0_33, &STATE_VARIABLE_UrInfo_1_44);
    succeeded = ((MR_tag((MR_Word) YFunctor_28)) == (MR_Integer) 0);
    if (succeeded)
    {
      YAtom_41 = ((MR_String) ((MR_hl_field(0, YFunctor_28, 0))));
      succeeded = hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_117_110_114_97_118_101_108_95_115_112_101_99_105_97_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_14_p_0(XVar_14, YAtom_41, YArgTerms_40, YFunctorContext_30, Context_16, MainContext_17, SubContext_18, Purity_19, &ExpansionPrime_42, STATE_VARIABLE_SVarState_1_43, &STATE_VARIABLE_SVarState_2_45, STATE_VARIABLE_UrInfo_1_44, &STATE_VARIABLE_UrInfo_2_46);
    }
    if (succeeded)
    {
      *STATE_VARIABLE_UrInfo_34 = STATE_VARIABLE_UrInfo_2_46;
      *STATE_VARIABLE_SVarState_32 = STATE_VARIABLE_SVarState_2_45;
      *Expansion_22 = ExpansionPrime_42;
    }
    else
      hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_std_14_p_0(XVar_14, YFunctor_28, YArgTerms_40, YFunctorContext_30, Context_16, MainContext_17, SubContext_18, Purity_19, AncestorVarMap_21, Expansion_22, STATE_VARIABLE_SVarState_1_43, STATE_VARIABLE_SVarState_32, STATE_VARIABLE_UrInfo_1_44, STATE_VARIABLE_UrInfo_34);
  }
  else
  {
    MR_Word YVar_25 = ((MR_Word) ((MR_hl_field(1, YTerm_15, 0))));
    MR_Word Goal_27;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word AncestorContext_47;
    MR_Box conv0_AncestorContext_47;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), AncestorVarMap_21, ((MR_Box) (YVar_25)), &conv0_AncestorContext_47);
    if (succeeded)
    {
      AncestorContext_47 = ((MR_Word) (conv0_AncestorContext_47));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ModuleInfo_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_33, 0))));
      MR_Word Globals_49;
      MR_Word WarnOccursCheck_50;

      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_48, &Globals_49);
      libs__globals__lookup_bool_option_3_p_0(Globals_49, (MR_Integer) 194, &WarnOccursCheck_50);
      switch (WarnOccursCheck_50) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_UrInfo_34 = STATE_VARIABLE_UrInfo_0_33;
          break;
        case (MR_Integer) 1:
          {
            MR_Word VarSet_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_33, 3))));
            MR_String VarName_52;
            MR_Word Pieces_53;
            MR_Word Spec_55;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word Var_63;
            MR_Word Var_66;
            MR_Word Var_67;
            MR_Word Var_69;
            MR_Word Var_74;
            MR_Word Var_75;

            mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_51, YVar_25, &VarName_52);
            {
              Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_67, 1) = ((MR_Box) (VarName_52));
            }
            {
              Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
              MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_63, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[49])));
              MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_66));
            }
            Var_62 = parse_tree__error_spec__color_as_subject_1_f_0(Var_63);
            Var_75 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[53])));
            Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[10])));
            Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[51])), Var_74);
            Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, Var_69);
            Pieces_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[48])), Var_61);
            {
              Spec_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_55, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.perform_occurs_check\'/4"));
              MR_hl_field(0, Spec_55, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_3[3])));
              MR_hl_field(0, Spec_55, 2) = ((MR_Box) ((MR_Unsigned) 48U));
              MR_hl_field(0, Spec_55, 3) = ((MR_Box) (AncestorContext_47));
              MR_hl_field(0, Spec_55, 4) = ((MR_Box) (Pieces_53));
            }
            hlds__make_hlds__state_var__add_unravel_warn_3_p_0(Spec_55, STATE_VARIABLE_UrInfo_0_33, STATE_VARIABLE_UrInfo_34);
          }
          break;
      }
    }
    else
      *STATE_VARIABLE_UrInfo_34 = STATE_VARIABLE_UrInfo_0_33;
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (YVar_25));
    }
    hlds__make_goal__create_atomic_complicated_unification_7_p_0(XVar_14, Var_36, Context_16, MainContext_17, SubContext_18, Purity_19, &Goal_27);
    Var_38 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_27)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Expansion_22 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_38));
    }
    *STATE_VARIABLE_SVarState_32 = STATE_VARIABLE_SVarState_0_31;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_12_p_0(
  MR_Word XVar_13,
  MR_Word YTerm0_14,
  MR_Word Context_15,
  MR_Word MainContext_16,
  MR_Word SubContext_17,
  MR_Word Purity_18,
  MR_Word * Expansion_20,
  MR_Word STATE_VARIABLE_SVarState_0_24,
  MR_Word * STATE_VARIABLE_SVarState_25,
  MR_Word STATE_VARIABLE_UrInfo_0_26,
  MR_Word * STATE_VARIABLE_UrInfo_27)
{
  MR_Word YTerm_23;
  MR_Word STATE_VARIABLE_SVarState_1_28;
  MR_Word STATE_VARIABLE_UrInfo_1_29;
  MR_Word Var_30;

  hlds__make_hlds__state_var__replace_any_dot_colon_state_var_in_term_6_p_0(YTerm0_14, &YTerm_23, STATE_VARIABLE_SVarState_0_24, &STATE_VARIABLE_SVarState_1_28, STATE_VARIABLE_UrInfo_0_26, &STATE_VARIABLE_UrInfo_1_29);
  Var_30 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  if (((MR_tag((MR_Word) YTerm_23)) == (MR_Integer) 0))
  {
    MR_Word YFunctor_36 = ((MR_Word) ((MR_hl_field(0, YTerm_23, 0))));
    MR_Word YArgTerms_37 = ((MR_Word) ((MR_hl_field(0, YTerm_23, 1))));
    MR_Word YFunctorContext_38 = ((MR_Word) ((MR_hl_field(0, YTerm_23, 2))));

    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_15_p_0(XVar_13, YFunctor_36, YArgTerms_37, YFunctorContext_38, Context_15, MainContext_16, SubContext_17, Purity_18, Var_30, Expansion_20, STATE_VARIABLE_SVarState_1_28, STATE_VARIABLE_SVarState_25, STATE_VARIABLE_UrInfo_1_29, STATE_VARIABLE_UrInfo_27);
  }
  else
  {
    MR_Word YVar_33 = ((MR_Word) ((MR_hl_field(1, YTerm_23, 0))));
    MR_Word Goal_35;
    MR_Word Var_39;
    MR_Word Var_41;

    hlds__make_hlds__superhomogeneous__perform_occurs_check_4_p_0(Var_30, YVar_33, STATE_VARIABLE_UrInfo_1_29, STATE_VARIABLE_UrInfo_27);
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_39, 0) = ((MR_Box) (YVar_33));
    }
    hlds__make_goal__create_atomic_complicated_unification_7_p_0(XVar_13, Var_39, Context_15, MainContext_16, SubContext_17, Purity_18, &Goal_35);
    Var_41 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_35)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Expansion_20 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_41));
    }
    *STATE_VARIABLE_SVarState_25 = STATE_VARIABLE_SVarState_1_28;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_12_p_0(
  MR_Word XVar_13,
  MR_Word YTerm_14,
  MR_Word Context_15,
  MR_Word ArgContext_16,
  MR_Integer ArgNum_18,
  MR_Word AncestorVarMap_19,
  MR_Word * Expansion_20,
  MR_Word STATE_VARIABLE_SVarState_0_32,
  MR_Word * STATE_VARIABLE_SVarState_33,
  MR_Word STATE_VARIABLE_UrInfo_0_34,
  MR_Word * STATE_VARIABLE_UrInfo_35)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_UrInfo_1_36;
  MR_Word AncestorContext_48;
  MR_Box conv0_AncestorContext_48;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), AncestorVarMap_19, ((MR_Box) (XVar_13)), &conv0_AncestorContext_48);
  if (succeeded)
  {
    AncestorContext_48 = ((MR_Word) (conv0_AncestorContext_48));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word ModuleInfo_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_34, 0))));
    MR_Word Globals_50;
    MR_Word WarnOccursCheck_51;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_49, &Globals_50);
    libs__globals__lookup_bool_option_3_p_0(Globals_50, (MR_Integer) 194, &WarnOccursCheck_51);
    switch (WarnOccursCheck_51) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_UrInfo_1_36 = STATE_VARIABLE_UrInfo_0_34;
        break;
      case (MR_Integer) 1:
        {
          MR_Word VarSet_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_34, 3))));
          MR_String VarName_53;
          MR_Word Pieces_54;
          MR_Word Spec_56;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_70;
          MR_Word Var_75;
          MR_Word Var_76;

          mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_52, XVar_13, &VarName_53);
          {
            Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_68, 1) = ((MR_Box) (VarName_53));
          }
          {
            Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
            MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[49])));
            MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
          }
          Var_63 = parse_tree__error_spec__color_as_subject_1_f_0(Var_64);
          Var_76 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[53])));
          Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_76, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[10])));
          Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[51])), Var_75);
          Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, Var_70);
          Pieces_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[48])), Var_62);
          {
            Spec_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_56, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.perform_occurs_check\'/4"));
            MR_hl_field(0, Spec_56, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_3[3])));
            MR_hl_field(0, Spec_56, 2) = ((MR_Box) ((MR_Unsigned) 48U));
            MR_hl_field(0, Spec_56, 3) = ((MR_Box) (AncestorContext_48));
            MR_hl_field(0, Spec_56, 4) = ((MR_Box) (Pieces_54));
          }
          hlds__make_hlds__state_var__add_unravel_warn_3_p_0(Spec_56, STATE_VARIABLE_UrInfo_0_34, &STATE_VARIABLE_UrInfo_1_36);
        }
        break;
    }
  }
  else
    STATE_VARIABLE_UrInfo_1_36 = STATE_VARIABLE_UrInfo_0_34;
  if (((MR_tag((MR_Word) YTerm_14)) == (MR_Integer) 0))
  {
    MR_Word YFunctor_29 = ((MR_Word) ((MR_hl_field(0, YTerm_14, 0))));
    MR_Word YArgTerms_30 = ((MR_Word) ((MR_hl_field(0, YTerm_14, 1))));
    MR_Word YFunctorContext_31 = ((MR_Word) ((MR_hl_field(0, YTerm_14, 2))));
    MR_Word MainContext_43;
    MR_Word SubContext_44;

    switch (MR_tag((MR_Word) ArgContext_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PredOrFunc_103 = ((MR_Unsigned) ((MR_hl_field(0, ArgContext_16, 0))) & (MR_Integer) 1);
          MR_Word PredFormArity_104 = ((MR_Word) ((MR_hl_field(0, ArgContext_16, 1))));
          MR_Integer PredFormArityInt_105;

          succeeded = (PredOrFunc_103 == (MR_Integer) 1);
          if (succeeded)
          {
            PredFormArityInt_105 = (MR_Integer) (PredFormArity_104);
            succeeded = (ArgNum_18 == PredFormArityInt_105);
          }
          if (succeeded)
            MainContext_43 = (MR_Word) ((MR_Unsigned) 4U);
          else
            {
              MainContext_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MainContext_43, 0) = ((MR_Box) (ArgNum_18));
            }
          SubContext_44 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PredId_106 = ((MR_Word) ((MR_hl_field(1, ArgContext_16, 0))));

          {
            MainContext_43 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, MainContext_43, 0) = ((MR_Box) (PredId_106));
            MR_hl_field(2, MainContext_43, 1) = ((MR_Box) (ArgNum_18));
          }
          SubContext_44 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ConsId_107 = ((MR_Word) ((MR_hl_field(2, ArgContext_16, 0))));
          MR_Word SubContexts0_108;
          MR_Word SubContext_109;

          MainContext_43 = ((MR_Word) ((MR_hl_field(2, ArgContext_16, 1))));
          SubContexts0_108 = ((MR_Word) ((MR_hl_field(2, ArgContext_16, 2))));
          {
            SubContext_109 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SubContext_109, 0) = ((MR_Box) (ConsId_107));
            MR_hl_field(0, SubContext_109, 1) = ((MR_Box) (ArgNum_18));
          }
          {
            SubContext_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, SubContext_44, 0) = ((MR_Box) (SubContext_109));
            MR_hl_field(1, SubContext_44, 1) = ((MR_Box) (SubContexts0_108));
          }
        }
        break;
    }
    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_15_p_0(XVar_13, YFunctor_29, YArgTerms_30, YFunctorContext_31, Context_15, MainContext_43, SubContext_44, (MR_Integer) 0, AncestorVarMap_19, Expansion_20, STATE_VARIABLE_SVarState_0_32, STATE_VARIABLE_SVarState_33, STATE_VARIABLE_UrInfo_1_36, STATE_VARIABLE_UrInfo_35);
  }
  else
  {
    MR_Word YVar_23 = ((MR_Word) ((MR_hl_field(1, YTerm_14, 0))));
    MR_Word YVarContext_24 = ((MR_Word) ((MR_hl_field(1, YTerm_14, 1))));
    MR_Word GoalCord_25;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), ((MR_Box) (XVar_13)), ((MR_Box) (YVar_23)));
    if (succeeded)
      GoalCord_25 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
    else
    {
      MR_Word MainContext_26;
      MR_Word SubContext_27;
      MR_Word Goal_28;
      MR_Word Var_37;

      hlds__make_hlds__superhomogeneous__arg_context_to_unify_context_4_p_0(ArgContext_16, ArgNum_18, &MainContext_26, &SubContext_27);
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_37, 0) = ((MR_Box) (YVar_23));
      }
      hlds__make_goal__create_atomic_complicated_unification_7_p_0(XVar_13, Var_37, YVarContext_24, MainContext_26, SubContext_27, (MR_Integer) 0, &Goal_28);
      GoalCord_25 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_28)));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Expansion_20 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 1) = ((MR_Box) (GoalCord_25));
    }
    *STATE_VARIABLE_SVarState_33 = STATE_VARIABLE_SVarState_0_32;
    *STATE_VARIABLE_UrInfo_35 = STATE_VARIABLE_UrInfo_1_36;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_15_p_0(
  MR_Word XVar_16,
  MR_Word YFunctor_17,
  MR_Word YArgTerms0_18,
  MR_Word YFunctorContext_19,
  MR_Word Context_20,
  MR_Word MainContext_21,
  MR_Word SubContext_22,
  MR_Word Purity_23,
  MR_Word AncestorVarMap_25,
  MR_Word * Expansion_26,
  MR_Word STATE_VARIABLE_SVarState_0_32,
  MR_Word * STATE_VARIABLE_SVarState_33,
  MR_Word STATE_VARIABLE_UrInfo_0_34,
  MR_Word * STATE_VARIABLE_UrInfo_35)
{
  MR_bool succeeded;
  MR_Word YArgTerms_29;
  MR_Word STATE_VARIABLE_SVarState_1_36;
  MR_Word STATE_VARIABLE_UrInfo_1_37;
  MR_Word ExpansionPrime_31;
  MR_Word STATE_VARIABLE_SVarState_2_38;
  MR_Word STATE_VARIABLE_UrInfo_2_39;
  MR_String YAtom_30;

  hlds__make_hlds__state_var__replace_any_dot_colon_state_var_in_terms_6_p_0(YArgTerms0_18, &YArgTerms_29, STATE_VARIABLE_SVarState_0_32, &STATE_VARIABLE_SVarState_1_36, STATE_VARIABLE_UrInfo_0_34, &STATE_VARIABLE_UrInfo_1_37);
  succeeded = ((MR_tag((MR_Word) YFunctor_17)) == (MR_Integer) 0);
  if (succeeded)
  {
    YAtom_30 = ((MR_String) ((MR_hl_field(0, YFunctor_17, 0))));
    succeeded = hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_117_110_114_97_118_101_108_95_115_112_101_99_105_97_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_14_p_0(XVar_16, YAtom_30, YArgTerms_29, YFunctorContext_19, Context_20, MainContext_21, SubContext_22, Purity_23, &ExpansionPrime_31, STATE_VARIABLE_SVarState_1_36, &STATE_VARIABLE_SVarState_2_38, STATE_VARIABLE_UrInfo_1_37, &STATE_VARIABLE_UrInfo_2_39);
  }
  if (succeeded)
  {
    *STATE_VARIABLE_UrInfo_35 = STATE_VARIABLE_UrInfo_2_39;
    *STATE_VARIABLE_SVarState_33 = STATE_VARIABLE_SVarState_2_38;
    *Expansion_26 = ExpansionPrime_31;
  }
  else
  {
    MR_Word MaybeQualifiedYArgTerms_49;
    MR_Word ConsId_51;
    MR_Word STATE_VARIABLE_UrInfo_2_60;
    MR_Word STATE_VARIABLE_SVarState_2_61;
    MR_Word FunctorName_47;
    MR_Word MaybeQualifiedYArgTermsPrime_48;
    MR_Word STATE_VARIABLE_SVarState_1_55;
    MR_Word STATE_VARIABLE_UrInfo_1_56;
    MR_String YAtom_40;
    MR_Word ModuleNameTerm_41;
    MR_Word NameArgsTerm_42;
    MR_Word Var_52;
    MR_Word Var_53;

    succeeded = ((MR_tag((MR_Word) YFunctor_17)) == (MR_Integer) 0);
    if (succeeded)
    {
      YAtom_40 = ((MR_String) ((MR_hl_field(0, YFunctor_17, 0))));
      succeeded = (strcmp(YAtom_40, (MR_String) ".") == 0);
      if (succeeded)
      {
        succeeded = (YArgTerms_29 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ModuleNameTerm_41 = ((MR_Word) ((MR_hl_field(1, YArgTerms_29, 0))));
          Var_52 = ((MR_Word) ((MR_hl_field(1, YArgTerms_29, 1))));
          succeeded = (Var_52 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameArgsTerm_42 = ((MR_Word) ((MR_hl_field(1, Var_52, 0))));
            Var_53 = ((MR_Word) ((MR_hl_field(1, Var_52, 1))));
            succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
      if (succeeded)
      {
        MR_Word TypeCtorInfo_53_62;
        MR_String Name_43;
        MR_Word NameArgTerms_44;
        MR_Word ModuleName_46;
        MR_Word Var_54;

        succeeded = ((MR_tag((MR_Word) NameArgsTerm_42)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_54 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_42, 0))));
          NameArgTerms_44 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_42, 1))));
          succeeded = ((MR_tag((MR_Word) Var_54)) == (MR_Integer) 0);
          if (succeeded)
          {
            Name_43 = ((MR_String) ((MR_hl_field(0, Var_54, 0))));
            TypeCtorInfo_53_62 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            succeeded = parse_tree__parse_sym_name__try_parse_sym_name_2_p_0(TypeCtorInfo_53_62, ModuleNameTerm_41, &ModuleName_46);
            if (succeeded)
            {
              {
                FunctorName_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, FunctorName_47, 0) = ((MR_Box) (ModuleName_46));
                MR_hl_field(1, FunctorName_47, 1) = ((MR_Box) (Name_43));
              }
              hlds__make_hlds__state_var__replace_any_dot_colon_state_var_in_terms_6_p_0(NameArgTerms_44, &MaybeQualifiedYArgTermsPrime_48, STATE_VARIABLE_SVarState_1_36, &STATE_VARIABLE_SVarState_1_55, STATE_VARIABLE_UrInfo_1_37, &STATE_VARIABLE_UrInfo_1_56);
              succeeded = MR_TRUE;
            }
          }
        }
      }
      else
      {
        FunctorName_47 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(YAtom_40, (MR_String) "__");
        MaybeQualifiedYArgTermsPrime_48 = YArgTerms_29;
        STATE_VARIABLE_UrInfo_1_56 = STATE_VARIABLE_UrInfo_1_37;
        STATE_VARIABLE_SVarState_1_55 = STATE_VARIABLE_SVarState_1_36;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Integer Arity_50;
      MR_Word Var_58;
      MR_Word Var_59;

      STATE_VARIABLE_UrInfo_2_60 = STATE_VARIABLE_UrInfo_1_56;
      STATE_VARIABLE_SVarState_2_61 = STATE_VARIABLE_SVarState_1_55;
      MaybeQualifiedYArgTerms_49 = MaybeQualifiedYArgTermsPrime_48;
      mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[1]), MaybeQualifiedYArgTerms_49, &Arity_50);
      Var_59 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
      {
        Var_58 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_58, 0) = ((MR_Box) (FunctorName_47));
        MR_hl_field(0, Var_58, 1) = ((MR_Box) (Arity_50));
        MR_hl_field(0, Var_58, 2) = ((MR_Box) (Var_59));
      }
      ConsId_51 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_58)));
    }
    else
    {
      hlds__make_hlds__superhomogeneous__parse_ordinary_cons_id_6_p_0(YFunctor_17, YArgTerms_29, YFunctorContext_19, &ConsId_51, STATE_VARIABLE_UrInfo_1_37, &STATE_VARIABLE_UrInfo_2_60);
      MaybeQualifiedYArgTerms_49 = YArgTerms_29;
      STATE_VARIABLE_SVarState_2_61 = STATE_VARIABLE_SVarState_1_36;
    }
    hlds__make_hlds__superhomogeneous__build_var_cons_id_unification_14_p_0(XVar_16, ConsId_51, MaybeQualifiedYArgTerms_49, YFunctorContext_19, Context_20, MainContext_21, SubContext_22, Purity_23, AncestorVarMap_25, Expansion_26, STATE_VARIABLE_SVarState_2_61, STATE_VARIABLE_SVarState_33, STATE_VARIABLE_UrInfo_2_60, STATE_VARIABLE_UrInfo_35);
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_std_14_p_0(
  MR_Word XVar_15,
  MR_Word YFunctor_16,
  MR_Word YArgTerms_17,
  MR_Word YFunctorContext_18,
  MR_Word Context_19,
  MR_Word MainContext_20,
  MR_Word SubContext_21,
  MR_Word Purity_22,
  MR_Word AncestorVarMap_23,
  MR_Word * Expansion_24,
  MR_Word STATE_VARIABLE_SVarState_0_39,
  MR_Word * STATE_VARIABLE_SVarState_40,
  MR_Word STATE_VARIABLE_UrInfo_0_41,
  MR_Word * STATE_VARIABLE_UrInfo_42)
{
  MR_bool succeeded = ((MR_tag((MR_Word) YFunctor_16)) == (MR_Integer) 0);
  MR_Word MaybeQualifiedYArgTerms_36;
  MR_Word ConsId_38;
  MR_Word STATE_VARIABLE_UrInfo_2_51;
  MR_Word STATE_VARIABLE_SVarState_2_52;
  MR_Word FunctorName_34;
  MR_Word MaybeQualifiedYArgTermsPrime_35;
  MR_Word STATE_VARIABLE_SVarState_1_46;
  MR_Word STATE_VARIABLE_UrInfo_1_47;
  MR_String YAtom_27;
  MR_Word ModuleNameTerm_28;
  MR_Word NameArgsTerm_29;
  MR_Word Var_43;
  MR_Word Var_44;

  if (succeeded)
  {
    YAtom_27 = ((MR_String) ((MR_hl_field(0, YFunctor_16, 0))));
    succeeded = (strcmp(YAtom_27, (MR_String) ".") == 0);
    if (succeeded)
    {
      succeeded = (YArgTerms_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ModuleNameTerm_28 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 0))));
        Var_43 = ((MR_Word) ((MR_hl_field(1, YArgTerms_17, 1))));
        succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          NameArgsTerm_29 = ((MR_Word) ((MR_hl_field(1, Var_43, 0))));
          Var_44 = ((MR_Word) ((MR_hl_field(1, Var_43, 1))));
          succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_53_53;
      MR_String Name_30;
      MR_Word NameArgTerms_31;
      MR_Word ModuleName_33;
      MR_Word Var_45;

      succeeded = ((MR_tag((MR_Word) NameArgsTerm_29)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_45 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_29, 0))));
        NameArgTerms_31 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_29, 1))));
        succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 0);
        if (succeeded)
        {
          Name_30 = ((MR_String) ((MR_hl_field(0, Var_45, 0))));
          TypeCtorInfo_53_53 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          succeeded = parse_tree__parse_sym_name__try_parse_sym_name_2_p_0(TypeCtorInfo_53_53, ModuleNameTerm_28, &ModuleName_33);
          if (succeeded)
          {
            {
              FunctorName_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, FunctorName_34, 0) = ((MR_Box) (ModuleName_33));
              MR_hl_field(1, FunctorName_34, 1) = ((MR_Box) (Name_30));
            }
            hlds__make_hlds__state_var__replace_any_dot_colon_state_var_in_terms_6_p_0(NameArgTerms_31, &MaybeQualifiedYArgTermsPrime_35, STATE_VARIABLE_SVarState_0_39, &STATE_VARIABLE_SVarState_1_46, STATE_VARIABLE_UrInfo_0_41, &STATE_VARIABLE_UrInfo_1_47);
            succeeded = MR_TRUE;
          }
        }
      }
    }
    else
    {
      FunctorName_34 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(YAtom_27, (MR_String) "__");
      MaybeQualifiedYArgTermsPrime_35 = YArgTerms_17;
      STATE_VARIABLE_UrInfo_1_47 = STATE_VARIABLE_UrInfo_0_41;
      STATE_VARIABLE_SVarState_1_46 = STATE_VARIABLE_SVarState_0_39;
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Integer Arity_37;
    MR_Word Var_49;
    MR_Word Var_50;

    STATE_VARIABLE_UrInfo_2_51 = STATE_VARIABLE_UrInfo_1_47;
    STATE_VARIABLE_SVarState_2_52 = STATE_VARIABLE_SVarState_1_46;
    MaybeQualifiedYArgTerms_36 = MaybeQualifiedYArgTermsPrime_35;
    mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[1]), MaybeQualifiedYArgTerms_36, &Arity_37);
    Var_50 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_49, 0) = ((MR_Box) (FunctorName_34));
      MR_hl_field(0, Var_49, 1) = ((MR_Box) (Arity_37));
      MR_hl_field(0, Var_49, 2) = ((MR_Box) (Var_50));
    }
    ConsId_38 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_49)));
  }
  else
  {
    hlds__make_hlds__superhomogeneous__parse_ordinary_cons_id_6_p_0(YFunctor_16, YArgTerms_17, YFunctorContext_18, &ConsId_38, STATE_VARIABLE_UrInfo_0_41, &STATE_VARIABLE_UrInfo_2_51);
    MaybeQualifiedYArgTerms_36 = YArgTerms_17;
    STATE_VARIABLE_SVarState_2_52 = STATE_VARIABLE_SVarState_0_39;
  }
  hlds__make_hlds__superhomogeneous__build_var_cons_id_unification_14_p_0(XVar_15, ConsId_38, MaybeQualifiedYArgTerms_36, YFunctorContext_18, Context_19, MainContext_20, SubContext_21, Purity_22, AncestorVarMap_23, Expansion_24, STATE_VARIABLE_SVarState_2_52, STATE_VARIABLE_SVarState_40, STATE_VARIABLE_UrInfo_2_51, STATE_VARIABLE_UrInfo_42);
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_SVarState_0_10,
  MR_Word * STATE_VARIABLE_SVarState_11,
  MR_Word STATE_VARIABLE_UrInfo_0_12,
  MR_Word * STATE_VARIABLE_UrInfo_13)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UrInfo_13 = STATE_VARIABLE_UrInfo_0_12;
    *STATE_VARIABLE_SVarState_11 = STATE_VARIABLE_SVarState_0_10;
  }
  else
  {
    MR_Word YTerm_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word YTerms_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word XVar_34;
    MR_Word XVars_35;
    MR_Word Expansion_36;
    MR_Word Expansions_37;
    MR_Word STATE_VARIABLE_UrInfo_1_45;
    MR_Word STATE_VARIABLE_SeenXVars_1_46;
    MR_Word STATE_VARIABLE_SVarState_1_47;
    MR_Word STATE_VARIABLE_UrInfo_2_48;
    MR_Integer Var_49;
    MR_Word STATE_VARIABLE_UrInfo_1_62;

    hlds__make_hlds__superhomogeneous_util__make_fresh_arg_var_no_svar_5_p_0(YTerm_26, &XVar_34, HeadVar__6_6, STATE_VARIABLE_UrInfo_0_12, &STATE_VARIABLE_UrInfo_1_45);
    {
      STATE_VARIABLE_SeenXVars_1_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_SeenXVars_1_46, 0) = ((MR_Box) (XVar_34));
      MR_hl_field(1, STATE_VARIABLE_SeenXVars_1_46, 1) = ((MR_Box) (HeadVar__6_6));
    }
    hlds__make_hlds__superhomogeneous__perform_occurs_check_4_p_0(HeadVar__7_7, XVar_34, STATE_VARIABLE_UrInfo_1_45, &STATE_VARIABLE_UrInfo_1_62);
    if (((MR_tag((MR_Word) YTerm_26)) == (MR_Integer) 0))
    {
      MR_Word YFunctor_59 = ((MR_Word) ((MR_hl_field(0, YTerm_26, 0))));
      MR_Word YArgTerms_60 = ((MR_Word) ((MR_hl_field(0, YTerm_26, 1))));
      MR_Word YFunctorContext_61 = ((MR_Word) ((MR_hl_field(0, YTerm_26, 2))));
      MR_Word MainContext_67;
      MR_Word SubContext_68;

      hlds__make_hlds__superhomogeneous__arg_context_to_unify_context_4_p_0(HeadVar__3_3, HeadVar__5_5, &MainContext_67, &SubContext_68);
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_15_p_0(XVar_34, YFunctor_59, YArgTerms_60, YFunctorContext_61, HeadVar__2_2, MainContext_67, SubContext_68, (MR_Integer) 0, HeadVar__7_7, &Expansion_36, STATE_VARIABLE_SVarState_0_10, &STATE_VARIABLE_SVarState_1_47, STATE_VARIABLE_UrInfo_1_62, &STATE_VARIABLE_UrInfo_2_48);
    }
    else
    {
      MR_Word YVar_53 = ((MR_Word) ((MR_hl_field(1, YTerm_26, 0))));
      MR_Word YVarContext_54 = ((MR_Word) ((MR_hl_field(1, YTerm_26, 1))));
      MR_Word GoalCord_55;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), ((MR_Box) (XVar_34)), ((MR_Box) (YVar_53)));
      if (succeeded)
        GoalCord_55 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
      else
      {
        MR_Word MainContext_56;
        MR_Word SubContext_57;
        MR_Word Goal_58;
        MR_Word Var_63;

        hlds__make_hlds__superhomogeneous__arg_context_to_unify_context_4_p_0(HeadVar__3_3, HeadVar__5_5, &MainContext_56, &SubContext_57);
        {
          Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_63, 0) = ((MR_Box) (YVar_53));
        }
        hlds__make_goal__create_atomic_complicated_unification_7_p_0(XVar_34, Var_63, YVarContext_54, MainContext_56, SubContext_57, (MR_Integer) 0, &Goal_58);
        GoalCord_55 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_58)));
      }
      {
        Expansion_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Expansion_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Expansion_36, 1) = ((MR_Box) (GoalCord_55));
      }
      STATE_VARIABLE_SVarState_1_47 = STATE_VARIABLE_SVarState_0_10;
      STATE_VARIABLE_UrInfo_2_48 = STATE_VARIABLE_UrInfo_1_62;
    }
    Var_49 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) 1);
    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_13_p_0(YTerms_27, HeadVar__2_2, HeadVar__3_3, Var_49, STATE_VARIABLE_SeenXVars_1_46, HeadVar__7_7, &XVars_35, &Expansions_37, STATE_VARIABLE_SVarState_1_47, STATE_VARIABLE_SVarState_11, STATE_VARIABLE_UrInfo_2_48, STATE_VARIABLE_UrInfo_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (XVar_34));
      MR_hl_field(1, base, 1) = ((MR_Box) (XVars_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__9_9 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Expansion_36));
      MR_hl_field(1, base, 1) = ((MR_Box) (Expansions_37));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_51_93_95_48_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_SVarState_0_6,
  MR_Word * STATE_VARIABLE_SVarState_7,
  MR_Word STATE_VARIABLE_UrInfo_0_8,
  MR_Word * STATE_VARIABLE_UrInfo_9)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UrInfo_9 = STATE_VARIABLE_UrInfo_0_8;
    *STATE_VARIABLE_SVarState_7 = STATE_VARIABLE_SVarState_0_6;
  }
  else
  {
    MR_Word HeadXVarYTermArgContext_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word TailXVarsYTermsArgContexts_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word HeadXVar_27 = ((MR_Word) ((MR_hl_field(0, HeadXVarYTermArgContext_19, 0))));
    MR_Word HeadYTerm_28 = ((MR_Word) ((MR_hl_field(0, HeadXVarYTermArgContext_19, 1))));
    MR_Integer HeadArgNumber_29 = ((MR_Integer) ((MR_hl_field(0, HeadXVarYTermArgContext_19, 2))));
    MR_Word HeadArgContext_30 = ((MR_Word) ((MR_hl_field(0, HeadXVarYTermArgContext_19, 3))));
    MR_Word HeadExpansion_31;
    MR_Word TailExpansions_32;
    MR_Word STATE_VARIABLE_SVarState_1_37;
    MR_Word STATE_VARIABLE_UrInfo_1_38;
    MR_Word STATE_VARIABLE_UrInfo_1_48;

    hlds__make_hlds__superhomogeneous__perform_occurs_check_4_p_0(HeadVar__4_4, HeadXVar_27, STATE_VARIABLE_UrInfo_0_8, &STATE_VARIABLE_UrInfo_1_48);
    if (((MR_tag((MR_Word) HeadYTerm_28)) == (MR_Integer) 0))
    {
      MR_Word YFunctor_45 = ((MR_Word) ((MR_hl_field(0, HeadYTerm_28, 0))));
      MR_Word YArgTerms_46 = ((MR_Word) ((MR_hl_field(0, HeadYTerm_28, 1))));
      MR_Word YFunctorContext_47 = ((MR_Word) ((MR_hl_field(0, HeadYTerm_28, 2))));
      MR_Word MainContext_53;
      MR_Word SubContext_54;

      hlds__make_hlds__superhomogeneous__arg_context_to_unify_context_4_p_0(HeadArgContext_30, HeadArgNumber_29, &MainContext_53, &SubContext_54);
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_15_p_0(HeadXVar_27, YFunctor_45, YArgTerms_46, YFunctorContext_47, HeadVar__2_2, MainContext_53, SubContext_54, (MR_Integer) 0, HeadVar__4_4, &HeadExpansion_31, STATE_VARIABLE_SVarState_0_6, &STATE_VARIABLE_SVarState_1_37, STATE_VARIABLE_UrInfo_1_48, &STATE_VARIABLE_UrInfo_1_38);
    }
    else
    {
      MR_Word YVar_39 = ((MR_Word) ((MR_hl_field(1, HeadYTerm_28, 0))));
      MR_Word YVarContext_40 = ((MR_Word) ((MR_hl_field(1, HeadYTerm_28, 1))));
      MR_Word GoalCord_41;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), ((MR_Box) (HeadXVar_27)), ((MR_Box) (YVar_39)));
      if (succeeded)
        GoalCord_41 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
      else
      {
        MR_Word MainContext_42;
        MR_Word SubContext_43;
        MR_Word Goal_44;
        MR_Word Var_49;

        hlds__make_hlds__superhomogeneous__arg_context_to_unify_context_4_p_0(HeadArgContext_30, HeadArgNumber_29, &MainContext_42, &SubContext_43);
        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_49, 0) = ((MR_Box) (YVar_39));
        }
        hlds__make_goal__create_atomic_complicated_unification_7_p_0(HeadXVar_27, Var_49, YVarContext_40, MainContext_42, SubContext_43, (MR_Integer) 0, &Goal_44);
        GoalCord_41 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_44)));
      }
      {
        HeadExpansion_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadExpansion_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, HeadExpansion_31, 1) = ((MR_Box) (GoalCord_41));
      }
      STATE_VARIABLE_SVarState_1_37 = STATE_VARIABLE_SVarState_0_6;
      STATE_VARIABLE_UrInfo_1_38 = STATE_VARIABLE_UrInfo_1_48;
    }
    hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_51_93_95_48_9_p_0(TailXVarsYTermsArgContexts_20, HeadVar__2_2, HeadVar__4_4, &TailExpansions_32, STATE_VARIABLE_SVarState_1_37, STATE_VARIABLE_SVarState_7, STATE_VARIABLE_UrInfo_1_38, STATE_VARIABLE_UrInfo_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadExpansion_31));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailExpansions_32));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__build_var_cons_id_unification_14_p_0(
  MR_Word XVar_15,
  MR_Word ConsId_16,
  MR_Word MaybeQualifiedYArgTerms_17,
  MR_Word YFunctorContext_18,
  MR_Word Context_19,
  MR_Word MainContext_20,
  MR_Word SubContext_21,
  MR_Word Purity_22,
  MR_Word STATE_VARIABLE_AncestorVarMap_0_39,
  MR_Word * Expansion_24,
  MR_Word STATE_VARIABLE_SVarState_0_40,
  MR_Word * STATE_VARIABLE_SVarState_41,
  MR_Word STATE_VARIABLE_UrInfo_0_42,
  MR_Word * STATE_VARIABLE_UrInfo_43)
{
  if ((MaybeQualifiedYArgTerms_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word RHS_27;
    MR_Word QualInfo0_28;
    MR_Word FunctorGoal_29;
    MR_Word QualInfo_30;
    MR_Word Goal_31;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_86;
    MR_Integer Var_87;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;

    {
      RHS_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RHS_27, 0) = ((MR_Box) (ConsId_16));
      MR_hl_field(1, RHS_27, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, RHS_27, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    QualInfo0_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_42, 2))));
    hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(XVar_15, RHS_27, YFunctorContext_18, MainContext_20, SubContext_21, Purity_22, &FunctorGoal_29, QualInfo0_28, &QualInfo_30);
    Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_42, 0))));
    Var_87 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_42, 1))));
    Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_42, 3))));
    Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_42, 4))));
    Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_42, 5))));
    Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_42, 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_UrInfo_43 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_86));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_87));
      MR_hl_field(0, base, 2) = ((MR_Box) (QualInfo_30));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_89));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_90));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_91));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_92));
    }
    hlds__hlds_goal__goal_set_purity_3_p_0(Purity_22, FunctorGoal_29, &Goal_31);
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (XVar_15));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    Var_49 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_31)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Expansion_24 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_47));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_49));
    }
    *STATE_VARIABLE_SVarState_41 = STATE_VARIABLE_SVarState_0_40;
  }
  else
  {
    MR_Word ArgContext_34;
    MR_Word STATE_VARIABLE_AncestorVarMap_1_50;

    {
      ArgContext_34 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, ArgContext_34, 0) = ((MR_Box) (ConsId_16));
      MR_hl_field(2, ArgContext_34, 1) = ((MR_Box) (MainContext_20));
      MR_hl_field(2, ArgContext_34, 2) = ((MR_Box) (SubContext_21));
    }
    hlds__make_hlds__superhomogeneous__maybe_add_to_ancestor_var_map_6_p_0(STATE_VARIABLE_UrInfo_0_42, XVar_15, ConsId_16, Context_19, STATE_VARIABLE_AncestorVarMap_0_39, &STATE_VARIABLE_AncestorVarMap_1_50);
    switch (Purity_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word Goal0_38;
          MR_Word STATE_VARIABLE_UrInfo_4_63;
          MR_Word Var_67;
          MR_Word RHS_72;
          MR_Word QualInfo0_73;
          MR_Word FunctorGoal_74;
          MR_Word QualInfo_75;
          MR_Word Goal_76;
          MR_Word YVars_77;
          MR_Word ArgExpansions_78;
          MR_Word GoalInfo_79;
          MR_Word Var_112;
          MR_Integer Var_113;
          MR_Word Var_115;
          MR_Word Var_116;
          MR_Word Var_117;
          MR_Word Var_118;

          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_13_p_0(MaybeQualifiedYArgTerms_17, YFunctorContext_18, ArgContext_34, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AncestorVarMap_1_50, &YVars_77, &ArgExpansions_78, STATE_VARIABLE_SVarState_0_40, STATE_VARIABLE_SVarState_41, STATE_VARIABLE_UrInfo_0_42, &STATE_VARIABLE_UrInfo_4_63);
          {
            RHS_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, RHS_72, 0) = ((MR_Box) (ConsId_16));
            MR_hl_field(1, RHS_72, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(1, RHS_72, 2) = ((MR_Box) (YVars_77));
          }
          QualInfo0_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_4_63, 2))));
          hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(XVar_15, RHS_72, YFunctorContext_18, MainContext_20, SubContext_21, Purity_22, &FunctorGoal_74, QualInfo0_73, &QualInfo_75);
          Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_4_63, 0))));
          Var_113 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_4_63, 1))));
          Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_4_63, 3))));
          Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_4_63, 4))));
          Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_4_63, 5))));
          Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_4_63, 6))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_UrInfo_43 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_112));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_113));
            MR_hl_field(0, base, 2) = ((MR_Box) (QualInfo_75));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_115));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_116));
            MR_hl_field(0, base, 5) = ((MR_Box) (Var_117));
            MR_hl_field(0, base, 6) = ((MR_Box) (Var_118));
          }
          hlds__hlds_goal__goal_info_init_2_p_0(Context_19, &GoalInfo_79);
          hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_5_p_0(*STATE_VARIABLE_UrInfo_43, GoalInfo_79, ArgExpansions_78, FunctorGoal_74, &Goal0_38);
          hlds__hlds_goal__goal_set_purity_3_p_0(Purity_22, Goal0_38, &Goal_76);
          Var_67 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_76)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Expansion_24 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_67));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word YVars_35;
          MR_Word ArgExpansions_36;
          MR_Word GoalInfo_37;
          MR_Word STATE_VARIABLE_UrInfo_2_55;
          MR_Word RHS_68;
          MR_Word QualInfo0_69;
          MR_Word FunctorGoal_70;
          MR_Word QualInfo_71;
          MR_Word Var_99;
          MR_Integer Var_100;
          MR_Word Var_102;
          MR_Word Var_103;
          MR_Word Var_104;
          MR_Word Var_105;

          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_13_p_0(MaybeQualifiedYArgTerms_17, YFunctorContext_18, ArgContext_34, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AncestorVarMap_1_50, &YVars_35, &ArgExpansions_36, STATE_VARIABLE_SVarState_0_40, STATE_VARIABLE_SVarState_41, STATE_VARIABLE_UrInfo_0_42, &STATE_VARIABLE_UrInfo_2_55);
          {
            RHS_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, RHS_68, 0) = ((MR_Box) (ConsId_16));
            MR_hl_field(1, RHS_68, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(1, RHS_68, 2) = ((MR_Box) (YVars_35));
          }
          QualInfo0_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_2_55, 2))));
          hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(XVar_15, RHS_68, YFunctorContext_18, MainContext_20, SubContext_21, Purity_22, &FunctorGoal_70, QualInfo0_69, &QualInfo_71);
          Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_2_55, 0))));
          Var_100 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_2_55, 1))));
          Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_2_55, 3))));
          Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_2_55, 4))));
          Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_2_55, 5))));
          Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_2_55, 6))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_UrInfo_43 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_99));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_100));
            MR_hl_field(0, base, 2) = ((MR_Box) (QualInfo_71));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_102));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_103));
            MR_hl_field(0, base, 5) = ((MR_Box) (Var_104));
            MR_hl_field(0, base, 6) = ((MR_Box) (Var_105));
          }
          hlds__hlds_goal__goal_info_init_2_p_0(Context_19, &GoalInfo_37);
          hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_7_p_0(*STATE_VARIABLE_UrInfo_43, GoalInfo_37, XVar_15, FunctorGoal_70, (MR_Integer) 1, ArgExpansions_36, Expansion_24);
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_4_p_0(
  MR_Word UrInfo_5,
  MR_Word GoalInfo_6,
  MR_Word Expansion_7,
  MR_Word * Goal_8)
{
  MR_bool succeeded;
  MR_Word MaybeFGTI_9 = ((MR_Word) ((MR_hl_field(0, Expansion_7, 0))));
  MR_Word ExpansionGoalCord_10 = ((MR_Word) ((MR_hl_field(0, Expansion_7, 1))));
  MR_Word ExpansionGoals_11;

  ExpansionGoals_11 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoalCord_10);
  if ((ExpansionGoals_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_28;

    Var_28 = hlds__make_goal__true_goal_expr_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_28));
      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_6));
    }
  }
  else
  {
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(1, ExpansionGoals_11, 1))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(1, ExpansionGoals_11, 0))));

    if ((Var_45 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ExpansionGoalExpr_13 = ((MR_Word) ((MR_hl_field(0, Var_46, 0))));
      MR_Word ExpansionGoalInfo0_14 = ((MR_Word) ((MR_hl_field(0, Var_46, 1))));
      MR_Word Context_15;
      MR_Word ExpansionGoalInfo_16;

      Context_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_6);
      hlds__hlds_goal__goal_info_set_context_3_p_0(Context_15, ExpansionGoalInfo0_14, &ExpansionGoalInfo_16);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Goal_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (ExpansionGoalExpr_13));
        MR_hl_field(0, base, 1) = ((MR_Box) (ExpansionGoalInfo_16));
      }
    }
    else
    {
      MR_Word TermVar_20;
      MR_Integer Size_21;
      MR_Integer Var_31;

      succeeded = (MaybeFGTI_9 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TermVar_20 = ((MR_Word) ((MR_hl_field(1, MaybeFGTI_9, 0))));
        Size_21 = ((MR_Integer) ((MR_hl_field(1, MaybeFGTI_9, 1))));
        Var_31 = ((MR_Integer) ((MR_hl_field(0, UrInfo_5, 1))));
        succeeded = (Size_21 >= Var_31);
      }
      if (succeeded)
      {
        MR_Word MarkedGoalInfo_22;
        MR_Word MarkedGoals_23;
        MR_Word ConjGoalExpr_24;
        MR_Word ConjGoal_25;
        MR_Word Reason_26;
        MR_Word GoalExpr_27;
        MR_Word Var_32;

        Var_32 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_20);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(Var_32, GoalInfo_6, &MarkedGoalInfo_22);
        hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(ExpansionGoals_11, &MarkedGoals_23);
        {
          ConjGoalExpr_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ConjGoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, ConjGoalExpr_24, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, ConjGoalExpr_24, 2) = ((MR_Box) (MarkedGoals_23));
        }
        {
          ConjGoal_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ConjGoal_25, 0) = ((MR_Box) (ConjGoalExpr_24));
          MR_hl_field(0, ConjGoal_25, 1) = ((MR_Box) (MarkedGoalInfo_22));
        }
        {
          Reason_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Reason_26, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Reason_26, 1) = ((MR_Box) (TermVar_20));
          MR_hl_field(3, Reason_26, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          GoalExpr_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, GoalExpr_27, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, GoalExpr_27, 1) = ((MR_Box) (Reason_26));
          MR_hl_field(3, GoalExpr_27, 2) = ((MR_Box) (ConjGoal_25));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_27));
          MR_hl_field(0, base, 1) = ((MR_Box) (MarkedGoalInfo_22));
        }
      }
      else
      {
        MR_Word GoalExpr_36;

        {
          GoalExpr_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, GoalExpr_36, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, GoalExpr_36, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, GoalExpr_36, 2) = ((MR_Box) (ExpansionGoals_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_36));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_6));
        }
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansion_before_goal_top_not_fgti_5_p_0(
  MR_Word UrInfo_6,
  MR_Word GoalInfo_7,
  MR_Word Expansion_8,
  MR_Word BaseGoal_9,
  MR_Word * Goal_10)
{
  MR_Word BaseGoals_11;
  MR_Word ExpansionGoalCord_12;
  MR_Word ExpansionGoals_13;
  MR_Word Var_14;

  hlds__hlds_goal__goal_to_conj_list_2_p_0(BaseGoal_9, &BaseGoals_11);
  hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_4_p_0(UrInfo_6, GoalInfo_7, Expansion_8, &ExpansionGoalCord_12);
  ExpansionGoals_13 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoalCord_12);
  Var_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoals_13, BaseGoals_11);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_14, GoalInfo_7, Goal_10);
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_4_p_0(
  MR_Word UrInfo_5,
  MR_Word GoalInfo_6,
  MR_Word Expansion_7,
  MR_Word * MaybeWrappedGoalCord_8)
{
  MR_bool succeeded;
  MR_Word MaybeFGTI_9 = ((MR_Word) ((MR_hl_field(0, Expansion_7, 0))));
  MR_Word GoalCord_10 = ((MR_Word) ((MR_hl_field(0, Expansion_7, 1))));
  MR_Word TermVar_11;
  MR_Integer Size_12;
  MR_Integer Var_21;

  succeeded = (MaybeFGTI_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    TermVar_11 = ((MR_Word) ((MR_hl_field(1, MaybeFGTI_9, 0))));
    Size_12 = ((MR_Integer) ((MR_hl_field(1, MaybeFGTI_9, 1))));
    Var_21 = ((MR_Integer) ((MR_hl_field(0, UrInfo_5, 1))));
    succeeded = (Size_12 >= Var_21);
  }
  if (succeeded)
  {
    MR_Word Goals_13;
    MR_Word MarkedGoalInfo_14;
    MR_Word MarkedGoals_15;
    MR_Word ConjGoalExpr_16;
    MR_Word ConjGoal_17;
    MR_Word Reason_18;
    MR_Word ScopeGoalExpr_19;
    MR_Word ScopeGoal_20;
    MR_Word Var_22;

    Goals_13 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalCord_10);
    Var_22 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_11);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(Var_22, GoalInfo_6, &MarkedGoalInfo_14);
    hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(Goals_13, &MarkedGoals_15);
    {
      ConjGoalExpr_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ConjGoalExpr_16, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, ConjGoalExpr_16, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, ConjGoalExpr_16, 2) = ((MR_Box) (MarkedGoals_15));
    }
    {
      ConjGoal_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ConjGoal_17, 0) = ((MR_Box) (ConjGoalExpr_16));
      MR_hl_field(0, ConjGoal_17, 1) = ((MR_Box) (MarkedGoalInfo_14));
    }
    {
      Reason_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Reason_18, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Reason_18, 1) = ((MR_Box) (TermVar_11));
      MR_hl_field(3, Reason_18, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      ScopeGoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ScopeGoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, ScopeGoalExpr_19, 1) = ((MR_Box) (Reason_18));
      MR_hl_field(3, ScopeGoalExpr_19, 2) = ((MR_Box) (ConjGoal_17));
    }
    {
      ScopeGoal_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ScopeGoal_20, 0) = ((MR_Box) (ScopeGoalExpr_19));
      MR_hl_field(0, ScopeGoal_20, 1) = ((MR_Box) (MarkedGoalInfo_14));
    }
    *MaybeWrappedGoalCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (ScopeGoal_20)));
  }
  else
    *MaybeWrappedGoalCord_8 = GoalCord_10;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Goal_5;
    MR_Word Goals_6;
    MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(0, Goal0_3, 0))));
    MR_Word GoalInfo0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_3, 1))));
    MR_Word LHSVar_9;
    MR_Word RHSVars_16;
    MR_Word RHS_10;

    succeeded = ((MR_tag((MR_Word) GoalExpr_7)) == (MR_Integer) 1);
    if (succeeded)
    {
      LHSVar_9 = ((MR_Word) ((MR_hl_field(1, GoalExpr_7, 0))));
      RHS_10 = ((MR_Word) ((MR_hl_field(1, GoalExpr_7, 1))));
      succeeded = ((MR_tag((MR_Word) RHS_10)) == (MR_Integer) 1);
      if (succeeded)
        RHSVars_16 = ((MR_Word) ((MR_hl_field(1, RHS_10, 2))));
    }
    if (succeeded)
    {
      MR_Word NonLocals_17;
      MR_Word GoalInfo_18;
      MR_Word Var_19;

      {
        Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_19, 0) = ((MR_Box) (LHSVar_9));
        MR_hl_field(1, Var_19, 1) = ((MR_Box) (RHSVars_16));
      }
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_19, &NonLocals_17);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_17, GoalInfo0_8, &GoalInfo_18);
      {
        Goal_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Goal_5, 0) = ((MR_Box) (GoalExpr_7));
        MR_hl_field(0, Goal_5, 1) = ((MR_Box) (GoalInfo_18));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.mark_nonlocals_in_ground_term_initial\'/2", (MR_String) "wrong shape goal");
        return;
      }
    hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(Goals0_4, &Goals_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_5));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_6));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__perform_occurs_check_4_p_0(
  MR_Word AncestorVarMap_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_UrInfo_0_17,
  MR_Word * STATE_VARIABLE_UrInfo_18)
{
  MR_bool succeeded;
  MR_Word AncestorContext_8;
  MR_Box conv0_AncestorContext_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), AncestorVarMap_5, ((MR_Box) (Var_6)), &conv0_AncestorContext_8);
  if (succeeded)
  {
    AncestorContext_8 = ((MR_Word) (conv0_AncestorContext_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word ModuleInfo_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_17, 0))));
    MR_Word Globals_10;
    MR_Word WarnOccursCheck_11;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_9, &Globals_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 194, &WarnOccursCheck_11);
    switch (WarnOccursCheck_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_UrInfo_18 = STATE_VARIABLE_UrInfo_0_17;
        break;
      case (MR_Integer) 1:
        {
          MR_Word VarSet_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_17, 3))));
          MR_String VarName_13;
          MR_Word Pieces_14;
          MR_Word Spec_16;
          MR_Word Var_24;
          MR_Word Var_25;
          MR_Word Var_26;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_32;
          MR_Word Var_37;
          MR_Word Var_38;

          mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_12, Var_6, &VarName_13);
          {
            Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_30, 1) = ((MR_Box) (VarName_13));
          }
          {
            Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
            MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[49])));
            MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
          }
          Var_25 = parse_tree__error_spec__color_as_subject_1_f_0(Var_26);
          Var_38 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[53])));
          Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[10])));
          Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[51])), Var_37);
          Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, Var_32);
          Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[48])), Var_24);
          {
            Spec_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.perform_occurs_check\'/4"));
            MR_hl_field(0, Spec_16, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_3[3])));
            MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 48U));
            MR_hl_field(0, Spec_16, 3) = ((MR_Box) (AncestorContext_8));
            MR_hl_field(0, Spec_16, 4) = ((MR_Box) (Pieces_14));
          }
          hlds__make_hlds__state_var__add_unravel_warn_3_p_0(Spec_16, STATE_VARIABLE_UrInfo_0_17, STATE_VARIABLE_UrInfo_18);
        }
        break;
    }
  }
  else
    *STATE_VARIABLE_UrInfo_18 = STATE_VARIABLE_UrInfo_0_17;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_GoalCord_4;

  hlds__make_hlds__superhomogeneous__project_expansion_goals_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_GoalCord_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_GoalCord_4));
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeWrappedGoalCord_8;

  hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeWrappedGoalCord_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeWrappedGoalCord_8));
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_7_p_0(
  MR_Word UrInfo_8,
  MR_Word GoalInfo_9,
  MR_Word TermVar_10,
  MR_Word BaseGoal_11,
  MR_Integer BaseGoalSize_12,
  MR_Word ArgExpansions_13,
  MR_Word * Expansion_14)
{
  MR_Word AllFGTI_15;
  MR_Integer TotalSize_16;

  hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_loop_5_p_0(ArgExpansions_13, (MR_Integer) 1, &AllFGTI_15, BaseGoalSize_12, &TotalSize_16);
  switch (AllFGTI_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ArgGoalCords_17;
        MR_Word ArgGoalsCord_18;
        MR_Word GoalCord_19;
        MR_Word Var_21;

        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_21, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_5[0]));
          MR_hl_field(0, Var_21, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_7_p_0_1));
          MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_21, 3) = ((MR_Box) (UrInfo_8));
          MR_hl_field(0, Var_21, 4) = ((MR_Box) (GoalInfo_9));
        }
        mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__type_ctor_info_expansion_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]), Var_21, ArgExpansions_13, &ArgGoalCords_17);
        ArgGoalsCord_18 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgGoalCords_17);
        GoalCord_19 = mercury__cord__cons_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (BaseGoal_11)), ArgGoalsCord_18);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Expansion_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalCord_19));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_24;
        MR_Word ArgGoalCords_25;
        MR_Word ArgGoalsCord_26;
        MR_Word GoalCord_27;

        mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__type_ctor_info_expansion_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_2[1]), ArgExpansions_13, &ArgGoalCords_25);
        ArgGoalsCord_26 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgGoalCords_25);
        GoalCord_27 = mercury__cord__cons_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (BaseGoal_11)), ArgGoalsCord_26);
        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (TermVar_10));
          MR_hl_field(1, Var_24, 1) = ((MR_Box) (TotalSize_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Expansion_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_24));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalCord_27));
        }
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_AllFGTI_0_2,
  MR_Word * STATE_VARIABLE_AllFGTI_3,
  MR_Integer STATE_VARIABLE_TotalSize_0_4,
  MR_Integer * STATE_VARIABLE_TotalSize_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_TotalSize_5 = STATE_VARIABLE_TotalSize_0_4;
      *STATE_VARIABLE_AllFGTI_3 = STATE_VARIABLE_AllFGTI_0_2;
    }
    else
    {
      MR_Word Expansion_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Expansions_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word MaybeFGTI_16 = ((MR_Word) ((MR_hl_field(0, Expansion_12, 0))));
      MR_Word STATE_VARIABLE_AllFGTI_1_24;
      MR_Integer STATE_VARIABLE_TotalSize_1_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_AllFGTI_0_2;
      MR_Integer next_value_of_STATE_VARIABLE_TotalSize_0_4;

      if ((MaybeFGTI_16 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        STATE_VARIABLE_AllFGTI_1_24 = (MR_Integer) 0;
        STATE_VARIABLE_TotalSize_1_25 = STATE_VARIABLE_TotalSize_0_4;
      }
      else
      {
        MR_Integer Size_19 = ((MR_Integer) ((MR_hl_field(1, MaybeFGTI_16, 1))));

        STATE_VARIABLE_TotalSize_1_25 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TotalSize_0_4 + (MR_Unsigned) Size_19);
        STATE_VARIABLE_AllFGTI_1_24 = STATE_VARIABLE_AllFGTI_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Expansions_13;
      next_value_of_STATE_VARIABLE_AllFGTI_0_2 = STATE_VARIABLE_AllFGTI_1_24;
      next_value_of_STATE_VARIABLE_TotalSize_0_4 = STATE_VARIABLE_TotalSize_1_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_AllFGTI_0_2 = next_value_of_STATE_VARIABLE_AllFGTI_0_2;
      STATE_VARIABLE_TotalSize_0_4 = next_value_of_STATE_VARIABLE_TotalSize_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeWrappedGoalCord_8;

  hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeWrappedGoalCord_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeWrappedGoalCord_8));
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_5_p_0(
  MR_Word UrInfo_6,
  MR_Word GoalInfo_7,
  MR_Word Expansions_8,
  MR_Word BaseGoal_9,
  MR_Word * Goal_10)
{
  MR_Word BaseGoals_11;
  MR_Word ExpansionGoalCords_12;
  MR_Word ExpansionGoals_13;
  MR_Word Var_14;
  MR_Word Var_15;

  hlds__hlds_goal__goal_to_conj_list_2_p_0(BaseGoal_9, &BaseGoals_11);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_5[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_5_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (UrInfo_6));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (GoalInfo_7));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__type_ctor_info_expansion_0), (MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[2]), Var_14, Expansions_8, &ExpansionGoalCords_12);
  ExpansionGoals_13 = mercury__cord__cord_list_to_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoalCords_12);
  Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExpansionGoals_13, BaseGoals_11);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_15, GoalInfo_7, Goal_10);
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__maybe_add_to_ancestor_var_map_6_p_0(
  MR_Word UrInfo_7,
  MR_Word XVar_8,
  MR_Word ConsId_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_AncestorVarMap_0_19,
  MR_Word * STATE_VARIABLE_AncestorVarMap_20)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsId_9)) == (MR_Integer) 1);
  MR_Word DuCtor_12;
  MR_Word SymName_13;
  MR_Integer Arity_14;
  MR_Integer Var_21;

  if (succeeded)
  {
    DuCtor_12 = (MR_Word) (MR_body((MR_Word) (ConsId_9), (MR_Integer) 1));
    SymName_13 = ((MR_Word) ((MR_hl_field(0, DuCtor_12, 0))));
    Arity_14 = ((MR_Integer) ((MR_hl_field(0, DuCtor_12, 1))));
    Var_21 = (MR_Integer) 0;
    succeeded = (Arity_14 > Var_21);
    if (succeeded)
    {
      {
        MR_Word ModuleInfo_16 = ((MR_Word) ((MR_hl_field(0, UrInfo_7, 0))));
        MR_Word ConsTable_17;

        hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_16, &ConsTable_17);
        succeeded = hlds__hlds_cons__is_known_data_cons_2_p_0(ConsTable_17, DuCtor_12);
      }
      if (!(succeeded))
      {
        MR_String Var_22;

        succeeded = ((MR_tag((MR_Word) SymName_13)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_22 = ((MR_String) ((MR_hl_field(0, SymName_13, 0))));
          succeeded = (strcmp(Var_22, (MR_String) "{}") == 0);
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word _OldContext_18;

    mercury__map__search_insert_5_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (XVar_8)), ((MR_Box) (Context_10)), &_OldContext_18, STATE_VARIABLE_AncestorVarMap_0_19, STATE_VARIABLE_AncestorVarMap_20);
  }
  else
    *STATE_VARIABLE_AncestorVarMap_20 = STATE_VARIABLE_AncestorVarMap_0_19;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__parse_ordinary_cons_id_6_p_0(
  MR_Word Functor_7,
  MR_Word ArgTerms_8,
  MR_Word Context_9,
  MR_Word * ConsId_10,
  MR_Word STATE_VARIABLE_UrInfo_0_29,
  MR_Word * STATE_VARIABLE_UrInfo_30)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Functor_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Name_12 = ((MR_String) ((MR_hl_field(0, Functor_7, 0))));
        MR_Integer Arity_13;
        MR_Word DuCtor_14;
        MR_Word Var_31;
        MR_Word Var_32;

        mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_scalar_common_1[1]), ArgTerms_8, &Arity_13);
        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_31, 0) = ((MR_Box) (Name_12));
        }
        Var_32 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
        {
          DuCtor_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DuCtor_14, 0) = ((MR_Box) (Var_31));
          MR_hl_field(0, DuCtor_14, 1) = ((MR_Box) (Arity_13));
          MR_hl_field(0, DuCtor_14, 2) = ((MR_Box) (Var_32));
        }
        *ConsId_10 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_14)));
        *STATE_VARIABLE_UrInfo_30 = STATE_VARIABLE_UrInfo_0_29;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Base_15 = ((MR_Unsigned) ((MR_hl_field(1, Functor_7, 0))) & (MR_Integer) 3);
        MR_Word Integer_16 = ((MR_Word) ((MR_hl_field(1, Functor_7, 1))));
        MR_Word Signedness_17 = ((((MR_Unsigned) ((MR_hl_field(1, Functor_7, 2))) >> 3)) & (MR_Integer) 1);
        MR_Word Size_18 = ((MR_Unsigned) ((MR_hl_field(1, Functor_7, 2))) & (MR_Integer) 7);
        MR_Word MaybeConsId_19;

        parse_tree__parse_util__parse_integer_cons_id_6_p_0(Base_15, Integer_16, Signedness_17, Size_18, Context_9, &MaybeConsId_19);
        if (((MR_tag((MR_Word) MaybeConsId_19)) == (MR_Integer) 0))
        {
          MR_Word ConsIdSpecs_20 = ((MR_Word) ((MR_hl_field(0, MaybeConsId_19, 0))));

          hlds__make_hlds__state_var__add_unravel_oom_errs_3_p_0(ConsIdSpecs_20, STATE_VARIABLE_UrInfo_0_29, STATE_VARIABLE_UrInfo_30);
          *ConsId_10 = (MR_Word) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[46]));
        }
        else
        {
          *ConsId_10 = ((MR_Word) ((MR_hl_field(1, MaybeConsId_19, 0))));
          *STATE_VARIABLE_UrInfo_30 = STATE_VARIABLE_UrInfo_0_29;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String String_22 = ((MR_String) ((MR_hl_field(2, Functor_7, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ConsId_10 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, base, 1) = ((MR_Box) (String_22));
        }
        *STATE_VARIABLE_UrInfo_30 = STATE_VARIABLE_UrInfo_0_29;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Functor_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Float Float_21 = MR_unbox_float((MR_hl_field(3, Functor_7, 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *ConsId_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = MR_box_float(Float_21);
            }
            *STATE_VARIABLE_UrInfo_30 = STATE_VARIABLE_UrInfo_0_29;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Name_104 = ((MR_String) ((MR_hl_field(3, Functor_7, 1))));
            MR_Word IDCKind_23;
            MR_Integer lo_0 = (MR_Integer) 0;
            MR_Integer hi_1 = (MR_Integer) 4;
            MR_Integer mid_2;
            MR_Integer result_3;

            // binary string simple lookup switch
            ;
            do
            {
              mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
              result_3 = MR_strcmp(Name_104, ((&hlds__make_hlds__superhomogeneous_vector_common_4[0 + mid_2]))->hlds__make_hlds__superhomogeneous__vector_common_type_4_0__vct_4_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                IDCKind_23 = ((&hlds__make_hlds__superhomogeneous_vector_common_4[0 + mid_2]))->hlds__make_hlds__superhomogeneous__vector_common_type_4_0__vct_4_f_1;
                succeeded = MR_TRUE;
                // jump out of search loop
                ;
                goto label_0;
              }
              else
              if ((result_3 < (MR_Integer) 0))
                hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
              else
                lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
            }
            while ((lo_0 <= hi_1));
            succeeded = MR_FALSE;
          label_0:;
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *ConsId_10 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (IDCKind_23));
              }
              *STATE_VARIABLE_UrInfo_30 = STATE_VARIABLE_UrInfo_0_29;
            }
            else
            {
              MR_Word ErrorTerm_24;
              MR_Word VarSet_25;
              MR_String TermStr_26;
              MR_Word Pieces_27;
              MR_Word Spec_28;
              MR_Word Var_43;
              MR_Word Var_44;
              MR_Word Var_45;
              MR_Word Var_46;
              MR_Word Var_51;
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Word Var_82;
              MR_Word Var_87;
              MR_Word Var_88;

              {
                ErrorTerm_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ErrorTerm_24, 0) = ((MR_Box) (Functor_7));
                MR_hl_field(0, ErrorTerm_24, 1) = ((MR_Box) (ArgTerms_8));
                MR_hl_field(0, ErrorTerm_24, 2) = ((MR_Box) (Context_9));
              }
              VarSet_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_29, 3))));
              TermStr_26 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_25, ErrorTerm_24);
              {
                Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_46, 1) = ((MR_Box) (TermStr_26));
              }
              {
                Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
                MR_hl_field(1, Var_45, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[9])));
              }
              Var_44 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_45);
              Var_59 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[40])));
              Var_88 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[44])));
              Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_88, (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[10])));
              Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[42])), Var_87);
              Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, Var_82);
              Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[28])), Var_58);
              Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, Var_51);
              Pieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__superhomogeneous_scalar_common_1[25])), Var_43);
              {
                Spec_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.superhomogeneous.parse_ordinary_cons_id\'/6"));
                MR_hl_field(0, Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 48U));
                MR_hl_field(0, Spec_28, 3) = ((MR_Box) (Context_9));
                MR_hl_field(0, Spec_28, 4) = ((MR_Box) (Pieces_27));
              }
              hlds__make_hlds__state_var__add_unravel_err_3_p_0(Spec_28, STATE_VARIABLE_UrInfo_0_29, STATE_VARIABLE_UrInfo_30);
              *ConsId_10 = (MR_Word) (MR_mkword(3, &hlds__make_hlds__superhomogeneous_scalar_common_1[45]));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__arg_context_to_unify_context_4_p_0(
  MR_Word ArgContext_5,
  MR_Integer ArgNum_6,
  MR_Word * MainContext_7,
  MR_Word * SubContexts_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) ArgContext_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PredOrFunc_9 = ((MR_Unsigned) ((MR_hl_field(0, ArgContext_5, 0))) & (MR_Integer) 1);
        MR_Word PredFormArity_10 = ((MR_Word) ((MR_hl_field(0, ArgContext_5, 1))));
        MR_Integer PredFormArityInt_11;

        succeeded = (PredOrFunc_9 == (MR_Integer) 1);
        if (succeeded)
        {
          PredFormArityInt_11 = (MR_Integer) (PredFormArity_10);
          succeeded = (ArgNum_6 == PredFormArityInt_11);
        }
        if (succeeded)
          *MainContext_7 = (MR_Word) ((MR_Unsigned) 4U);
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MainContext_7 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ArgNum_6));
          }
        *SubContexts_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(1, ArgContext_5, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MainContext_7 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (PredId_12));
          MR_hl_field(2, base, 1) = ((MR_Box) (ArgNum_6));
        }
        *SubContexts_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ConsId_13 = ((MR_Word) ((MR_hl_field(2, ArgContext_5, 0))));
        MR_Word SubContexts0_14;
        MR_Word SubContext_15;

        *MainContext_7 = ((MR_Word) ((MR_hl_field(2, ArgContext_5, 1))));
        SubContexts0_14 = ((MR_Word) ((MR_hl_field(2, ArgContext_5, 2))));
        {
          SubContext_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SubContext_15, 0) = ((MR_Box) (ConsId_13));
          MR_hl_field(0, SubContext_15, 1) = ((MR_Box) (ArgNum_6));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *SubContexts_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (SubContext_15));
          MR_hl_field(1, base, 1) = ((MR_Box) (SubContexts0_14));
        }
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_SVarState_0_3,
  MR_Word * STATE_VARIABLE_SVarState_4,
  MR_Word STATE_VARIABLE_UrInfo_0_5,
  MR_Word * STATE_VARIABLE_UrInfo_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UrInfo_6 = STATE_VARIABLE_UrInfo_0_5;
    *STATE_VARIABLE_SVarState_4 = STATE_VARIABLE_SVarState_0_3;
  }
  else
  {
    MR_Word UVT0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word UVTs0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word UVT_15;
    MR_Word UVTs_16;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, UVT0_13, 0))));
    MR_Word Arg0_20 = ((MR_Word) ((MR_hl_field(0, UVT0_13, 1))));
    MR_Word Arg_21;
    MR_Word STATE_VARIABLE_SVarState_1_26;
    MR_Word STATE_VARIABLE_UrInfo_1_27;

    hlds__make_hlds__state_var__replace_any_dot_colon_state_var_in_term_6_p_0(Arg0_20, &Arg_21, STATE_VARIABLE_SVarState_0_3, &STATE_VARIABLE_SVarState_1_26, STATE_VARIABLE_UrInfo_0_5, &STATE_VARIABLE_UrInfo_1_27);
    {
      UVT_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UVT_15, 0) = ((MR_Box) (Var_19));
      MR_hl_field(0, UVT_15, 1) = ((MR_Box) (Arg_21));
    }
    hlds__make_hlds__superhomogeneous__substitute_state_var_mappings_unify_var_term_6_p_0(UVTs0_14, &UVTs_16, STATE_VARIABLE_SVarState_1_26, STATE_VARIABLE_SVarState_4, STATE_VARIABLE_UrInfo_1_27, STATE_VARIABLE_UrInfo_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (UVT_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (UVTs_16));
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____ancestor_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous____Unify____ancestor_var_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____ancestor_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous____Compare____ancestor_var_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__superhomogeneous__init(void)
{
}

void mercury__hlds__make_hlds__superhomogeneous__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_ancestor_var_map_0);
}

void mercury__hlds__make_hlds__superhomogeneous__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__superhomogeneous__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.superhomogeneous.
