/*
** Automatically generated from `pd_util.m'
** by the Mercury compiler,
** version rotd-2022-09-01
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


// :- module transform_hlds.pd_util.
// :- implementation.

/*
INIT mercury__transform_hlds__pd_util__init
ENDINIT
*/

#include "transform_hlds.pd_util.mih"


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
#include "edit_seq.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.det_analysis.mih"
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.inst_lookup.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_test.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.unique_modes.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
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
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
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
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.constraint.mih"
#include "transform_hlds.pd_debug.mih"
#include "transform_hlds.pd_info.mih"
#include "transform_hlds.pd_term.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_proc.mih"
#include "check_hlds.simplify.simplify_tasks.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_util__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_util__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1107__1_3_p_0(
  MR_Word LambdaHeadVar__1_98,
  MR_Word LambdaHeadVar__2_99,
  MR_Word * LambdaHeadVar__3_100);

static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__589__1_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word InstMap_2,
  MR_Integer BranchNo_4,
  MR_Word InstMapDelta_19,
  MR_Word LambdaHeadVar__1_42,
  MR_Word LambdaHeadVar__2_43,
  MR_Word * LambdaHeadVar__3_44);

static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__550__1_2_p_0(
  MR_Word LambdaHeadVar__1_38,
  MR_Word * LambdaHeadVar__2_39);

static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__558__1_2_p_0(
  MR_Word LambdaHeadVar__1_41,
  MR_Word * LambdaHeadVar__2_42);

static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__rerun_det_analysis__390__1_2_p_0(
  MR_Word ContainsErrors_28,
  MR_Word HeadVar__2_39);

static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__goals_match__1014__1_3_p_0(
  MR_Word OldNewRenaming_15,
  MR_Word HeadVar__2_30,
  MR_Word * HeadVar__3_31);

static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__793__1_3_p_0(
  MR_Word Args_5,
  MR_Integer HeadVar__2_27,
  MR_Word * HeadVar__3_28);

static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__789__1_3_p_0(
  MR_Word Args_5,
  MR_Integer HeadVar__2_24,
  MR_Word * HeadVar__3_25);

static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__goal_get_calls__197__1_2_p_0(
  MR_Word LambdaHeadVar__1_16,
  MR_Word * LambdaHeadVar__2_17);

static void MR_CALL 
transform_hlds__pd_util____Compare____pd_var_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____pd_var_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__pd_util____Compare____expansions_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____expansions_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__pd_util__goals_match_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_util__goals_match_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ONRenaming_0_3,
  MR_Word * STATE_VARIABLE_ONRenaming_4);

static MR_bool MR_CALL 
transform_hlds__pd_util__match_generic_call_2_p_0(
  MR_Word GenericCallA_3,
  MR_Word GenericCallB_4);

static void MR_CALL 
transform_hlds__pd_util__collect_matching_arg_types_5_p_0(
  MR_Word Renaming_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_MatchingTypes_0_4,
  MR_Word * STATE_VARIABLE_MatchingTypes_5);

static void MR_CALL 
transform_hlds__pd_util__inst_size_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word STATE_VARIABLE_Expansions_0_23,
  MR_Word Inst_7,
  MR_Integer * Size_8);

static void MR_CALL 
transform_hlds__pd_util__inst_list_size_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Expansions_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_Size_0_4,
  MR_Integer * STATE_VARIABLE_Size_5);

static void MR_CALL 
transform_hlds__pd_util__bound_inst_size_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Expansions_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_Size_0_4,
  MR_Integer * STATE_VARIABLE_Size_5);

static MR_bool MR_CALL 
transform_hlds__pd_util__bound_inst_list_MSG_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Expansions_9,
  MR_Word Uniq_10,
  MR_Word Xs_11,
  MR_Word Ys_12,
  MR_Word BoundInsts_13,
  MR_Word * Inst_14);

static MR_bool MR_CALL 
transform_hlds__pd_util__inst_list_MSG_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Expansions_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
transform_hlds__pd_util__get_sub_branch_vars_goal_8_p_0(
  MR_Word ProcArgInfo_1,
  MR_Word VarTable_2,
  MR_Word InstMap0_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8);

static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ProcArgInfo_2,
  MR_Word InstMap_4,
  MR_Integer BranchNo_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Vars_0_7,
  MR_Word * STATE_VARIABLE_Vars_8);

static void MR_CALL 
transform_hlds__pd_util__examine_case_list_10_p_0(
  MR_Word ProcArgInfo_1,
  MR_Word VarTable_2,
  MR_Word InstMap0_3,
  MR_Word Var_4,
  MR_Integer BranchNo_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Vars_0_7,
  MR_Word * STATE_VARIABLE_Vars_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10);

static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_51_93_95_48_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ProcArgInfo_2,
  MR_Word InstMap_4,
  MR_Integer BranchNo_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Vars_0_7,
  MR_Word * STATE_VARIABLE_Vars_8);

static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_50_93_95_48_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_50_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_50_93_95_48_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word InstMap0_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_LeftVars_0_6,
  MR_Word * STATE_VARIABLE_LeftVars_7,
  MR_Word STATE_VARIABLE_Vars_0_8,
  MR_Word * STATE_VARIABLE_Vars_9);

static void MR_CALL 
transform_hlds__pd_util__get_branch_vars_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_util__get_branch_vars_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word InstMap_2,
  MR_Word Goal_3,
  MR_Integer BranchNo_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_ExtraVars_0_6,
  MR_Word * STATE_VARIABLE_ExtraVars_7);

static void MR_CALL 
transform_hlds__pd_util__combine_vars_4_p_0(
  MR_Integer BranchNo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Vars_0_3,
  MR_Word * STATE_VARIABLE_Vars_4);

static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArgVars_2,
  MR_Word STATE_VARIABLE_VarInfo_0_3,
  MR_Word * STATE_VARIABLE_VarInfo_4);

static void MR_CALL 
transform_hlds__pd_util__get_extra_info_headvars_8_p_0(
  MR_Word VarInfo_1,
  MR_Word LeftVars_2,
  MR_Integer ArgNo_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8);

static void MR_CALL 
transform_hlds__pd_util__get_opaque_args_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ExtraInfoArgs_2,
  MR_Integer ArgNo_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_OpaqueArgs_0_5,
  MR_Word * STATE_VARIABLE_OpaqueArgs_6);

static void MR_CALL 
transform_hlds__pd_util__get_goal_live_vars_2_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word InstMap_2,
  MR_Word InstMapDelta_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Vars_0_5,
  MR_Word * STATE_VARIABLE_Vars_6);

static MR_Box MR_CALL 
transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__pd_util__rerun_det_analysis_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__pd_util__rerun_det_analysis_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_PDInfo_0_29,
  MR_Word * STATE_VARIABLE_PDInfo_30);

static MR_bool MR_CALL 
transform_hlds__pd_util__goal_get_calls_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____expansions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_util____Compare____expansions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____pd_var_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_util____Compare____pd_var_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__pd_util_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__pd_util_scalar_common_2[8][3];

static /* final */ const MR_Box transform_hlds__pd_util_scalar_common_3[4][5];

static /* final */ const MR_Box transform_hlds__pd_util_scalar_common_4[4][6];

static /* final */ const MR_Box transform_hlds__pd_util_scalar_common_5[1][10];




static /* final */ const MR_Box transform_hlds__pd_util_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box transform_hlds__pd_util_scalar_common_2[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_1[1]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_1[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__pd_util__goal_get_calls_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_50_93_95_48_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_50_93_95_48_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__pd_util__goals_match_2_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__pd_util_scalar_common_3[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
};

static /* final */ const MR_Box transform_hlds__pd_util_scalar_common_4[4][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__pd_util__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__pd_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__pd_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__pd_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__pd_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__pd_util_scalar_common_5[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__pd_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_util__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_util__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&transform_hlds__pd_util__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_util__transform_hlds__pd_util__type_ctor_info_expansions_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_util____Unify____expansions_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_util____Compare____expansions_0_0_10001)),
  (MR_String) "transform_hlds.pd_util",
  (MR_String) "expansions",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_util__transform_hlds__pd_util__type_ctor_info_pd_var_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_util____Unify____pd_var_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_util____Compare____pd_var_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_util",
  (MR_String) "pd_var_info",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__pd_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1107__1_3_p_0(
  MR_Word LambdaHeadVar__1_98,
  MR_Word LambdaHeadVar__2_99,
  MR_Word * LambdaHeadVar__3_100)
{
  MR_bool succeeded;
  MR_Word Key_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_98, (MR_Integer) 0))));
  MR_Word Value_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_98, (MR_Integer) 1))));
  MR_Word Value0_79;
  MR_Box conv0_Value0_79;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), LambdaHeadVar__2_99, ((MR_Box) (Key_77)), &conv0_Value0_79);
  if (succeeded)
  {
    Value0_79 = ((MR_Word) (conv0_Value0_79));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), ((MR_Box) (Value_78)), ((MR_Box) (Value0_79)));
    if (succeeded)
    {
      *LambdaHeadVar__3_100 = LambdaHeadVar__2_99;
      succeeded = MR_TRUE;
    }
  }
  else
  {
    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), ((MR_Box) (Key_77)), ((MR_Box) (Value_78)), LambdaHeadVar__2_99, LambdaHeadVar__3_100);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__589__1_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word InstMap_2,
  MR_Integer BranchNo_4,
  MR_Word InstMapDelta_19,
  MR_Word LambdaHeadVar__1_42,
  MR_Word LambdaHeadVar__2_43,
  MR_Word * LambdaHeadVar__3_44)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_73_73;
  MR_Word VarInst_26;
  MR_Word DeltaVarInst_27;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_71;
  MR_Word ArgX1_77;
  MR_Word ArgX2_79;
  MR_Word ArgY2_80;
  MR_Word TypeCtorInfo_74_74;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_72;
  MR_Word ArgX1_87;
  MR_Word ArgX2_89;
  MR_Word ArgY2_90;

  hlds__instmap__instmap_lookup_var_3_p_0(InstMap_2, LambdaHeadVar__1_42, &VarInst_26);
  succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(InstMapDelta_19, LambdaHeadVar__1_42, &DeltaVarInst_27);
  if (succeeded)
  {
    Var_46 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = NULL;
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_46));
    }
    succeeded = check_hlds__inst_test__inst_is_bound_to_functors_3_p_0(ModuleInfo_1, DeltaVarInst_27, &Var_71);
    if (succeeded)
    {
      TypeCtorInfo_73_73 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0);
      succeeded = (Var_71 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgX1_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 0))));
        ArgY2_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 1))));
        (MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 0)) = ((MR_Box) (ArgX1_77));
        ArgX2_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 1))));
        succeeded = mercury__list____Unify____list_1_0(TypeCtorInfo_73_73, ArgX2_79, ArgY2_80);
        if (succeeded)
        {
          Var_48 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = NULL;
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_48));
          }
          succeeded = check_hlds__inst_test__inst_is_bound_to_functors_3_p_0(ModuleInfo_1, VarInst_26, &Var_72);
          if (succeeded)
          {
            TypeCtorInfo_74_74 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0);
            succeeded = (Var_72 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ArgX1_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 0))));
              ArgY2_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 1))));
              (MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 0)) = ((MR_Box) (ArgX1_87));
              ArgX2_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 1))));
              succeeded = mercury__list____Unify____list_1_0(TypeCtorInfo_74_74, ArgX2_89, ArgY2_90);
            }
          }
          succeeded = !(succeeded);
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Set_31;
    MR_Word Set0_30;
    MR_Box conv0_Set0_30;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[1]), LambdaHeadVar__2_43, ((MR_Box) (LambdaHeadVar__1_42)), &conv0_Set0_30);
    if (succeeded)
    {
      Set0_30 = ((MR_Word) (conv0_Set0_30));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (BranchNo_4)), Set0_30, &Set_31);
    else
      Set_31 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (BranchNo_4)));
    mercury__map__set_4_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[1]), ((MR_Box) (LambdaHeadVar__1_42)), ((MR_Box) (Set_31)), LambdaHeadVar__2_43, LambdaHeadVar__3_44);
  }
  else
    *LambdaHeadVar__3_44 = LambdaHeadVar__2_43;
}

static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__550__1_2_p_0(
  MR_Word LambdaHeadVar__1_38,
  MR_Word * LambdaHeadVar__2_39)
{
  MR_Word CaseInfo_29;
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_38, (MR_Integer) 2))));

  CaseInfo_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 1))));
  *LambdaHeadVar__2_39 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CaseInfo_29);
}

static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__558__1_2_p_0(
  MR_Word LambdaHeadVar__1_41,
  MR_Word * LambdaHeadVar__2_42)
{
  MR_Word DisjInfo_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_41, (MR_Integer) 1))));

  *LambdaHeadVar__2_42 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(DisjInfo_34);
}

static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__rerun_det_analysis__390__1_2_p_0(
  MR_Word ContainsErrors_28,
  MR_Word HeadVar__2_39)
{
  MR_bool succeeded = (ContainsErrors_28 == HeadVar__2_39);

  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__goals_match__1014__1_3_p_0(
  MR_Word OldNewRenaming_15,
  MR_Word HeadVar__2_30,
  MR_Word * HeadVar__3_31)
{
  MR_bool succeeded;
  MR_Box conv0_HeadVar__3_31;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), OldNewRenaming_15, ((MR_Box) (HeadVar__2_30)), &conv0_HeadVar__3_31);
  if (succeeded)
  {
    *HeadVar__3_31 = ((MR_Word) (conv0_HeadVar__3_31));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__793__1_3_p_0(
  MR_Word Args_5,
  MR_Integer HeadVar__2_27,
  MR_Word * HeadVar__3_28)
{
  MR_Box conv0_HeadVar__3_28;

  mercury__list__det_index1_3_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), Args_5, HeadVar__2_27, &conv0_HeadVar__3_28);
  *HeadVar__3_28 = ((MR_Word) (conv0_HeadVar__3_28));
}

static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__789__1_3_p_0(
  MR_Word Args_5,
  MR_Integer HeadVar__2_24,
  MR_Word * HeadVar__3_25)
{
  MR_Box conv0_HeadVar__3_25;

  mercury__list__det_index1_3_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), Args_5, HeadVar__2_24, &conv0_HeadVar__3_25);
  *HeadVar__3_25 = ((MR_Word) (conv0_HeadVar__3_25));
}

static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__goal_get_calls__197__1_2_p_0(
  MR_Word LambdaHeadVar__1_16,
  MR_Word * LambdaHeadVar__2_17)
{
  MR_bool succeeded;
  MR_Word PredId_9;
  MR_Integer ProcId_10;
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_16, (MR_Integer) 0))));

  succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 2);
  if (succeeded)
  {
    PredId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_18, (MR_Integer) 0))));
    ProcId_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_18, (MR_Integer) 1))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__2_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredId_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcId_10));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__pd_util____Compare____pd_var_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____pd_var_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__pd_util____Compare____expansions_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____expansions_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

MR_bool MR_CALL 
transform_hlds__pd_util__pd_can_reorder_goals_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word FullyStrict_6,
  MR_Word EarlierGoal_7,
  MR_Word LaterGoal_8)
{
  MR_bool succeeded;
  MR_Word EarlierGoalInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EarlierGoal_7, (MR_Integer) 1))));
  MR_Word LaterGoalInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LaterGoal_8, (MR_Integer) 1))));
  MR_Word EarlierDetism_13;
  MR_Word LaterDetism_14;
  MR_Word EarlierPurity_17;
  MR_Word EarlierTrace_18;
  MR_Word LaterPurity_19;
  MR_Word LaterTrace_20;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word TypeCtorInfo_11_33;
  MR_Word GoalInfo1_26;
  MR_Word GoalInfo2_28;
  MR_Word InstmapDelta1_29;
  MR_Word ChangedVars1_30;
  MR_Word NonLocals2_31;
  MR_Word Intersection_32;
  MR_Word TypeCtorInfo_11_42;
  MR_Word GoalInfo1_35;
  MR_Word GoalInfo2_37;
  MR_Word InstmapDelta1_38;
  MR_Word ChangedVars1_39;
  MR_Word NonLocals2_40;
  MR_Word Intersection_41;

  EarlierDetism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(EarlierGoalInfo_10);
  LaterDetism_14 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(LaterGoalInfo_12);
  parse_tree__prog_data__determinism_components_3_p_0(EarlierDetism_13, &Var_23, &Var_15);
  succeeded = ((MR_Integer) 0 == Var_23);
  if (succeeded)
  {
    Var_22 = (MR_Integer) 2;
    parse_tree__prog_data__determinism_components_3_p_0(LaterDetism_14, &Var_16, &Var_24);
    succeeded = (Var_22 == Var_24);
  }
  succeeded = !(succeeded);
  if (succeeded)
  {
    hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(EarlierGoalInfo_10, &EarlierPurity_17, &EarlierTrace_18);
    hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(LaterGoalInfo_12, &LaterPurity_19, &LaterTrace_20);
    succeeded = (LaterPurity_19 != (MR_Integer) 2);
    if (succeeded)
    {
      succeeded = (LaterTrace_20 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (EarlierPurity_17 != (MR_Integer) 2);
        if (succeeded)
        {
          succeeded = (EarlierTrace_18 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = hlds__goal_util__reordering_maintains_termination_old_4_p_0(ModuleInfo_5, FullyStrict_6, EarlierGoal_7, LaterGoal_8);
            if (succeeded)
            {
              GoalInfo1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EarlierGoal_7, (MR_Integer) 1))));
              GoalInfo2_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LaterGoal_8, (MR_Integer) 1))));
              InstmapDelta1_29 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo1_26);
              hlds__instmap__instmap_delta_changed_vars_2_p_0(InstmapDelta1_29, &ChangedVars1_30);
              NonLocals2_31 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo2_28);
              TypeCtorInfo_11_33 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              parse_tree__set_of_var__intersect_3_p_0(TypeCtorInfo_11_33, ChangedVars1_30, NonLocals2_31, &Intersection_32);
              succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(TypeCtorInfo_11_33, Intersection_32);
              succeeded = !(succeeded);
              if (succeeded)
              {
                GoalInfo1_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LaterGoal_8, (MR_Integer) 1))));
                GoalInfo2_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EarlierGoal_7, (MR_Integer) 1))));
                InstmapDelta1_38 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo1_35);
                hlds__instmap__instmap_delta_changed_vars_2_p_0(InstmapDelta1_38, &ChangedVars1_39);
                NonLocals2_40 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo2_37);
                TypeCtorInfo_11_42 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                parse_tree__set_of_var__intersect_3_p_0(TypeCtorInfo_11_42, ChangedVars1_39, NonLocals2_40, &Intersection_41);
                succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(TypeCtorInfo_11_42, Intersection_41);
                succeeded = !(succeeded);
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
transform_hlds__pd_util__goals_match_8_p_0(
  MR_Word _ModuleInfo_9,
  MR_Word OldGoal_10,
  MR_Word OldArgVars_11,
  MR_Word OldArgTypes_12,
  MR_Word NewGoal_13,
  MR_Word NewVarTable_14,
  MR_Word * OldNewRenaming_15,
  MR_Word * TypeSubn_16)
{
  MR_bool succeeded;

  succeeded = transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_p_0(OldGoal_10, OldArgVars_11, OldArgTypes_12, NewGoal_13, NewVarTable_14, OldNewRenaming_15, TypeSubn_16);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_31;

  succeeded = transform_hlds__pd_util__IntroducedFrom__pred__goals_match__1014__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_31);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_31));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_p_0(
  MR_Word OldGoal_10,
  MR_Word OldArgVars_11,
  MR_Word OldArgTypes_12,
  MR_Word NewGoal_13,
  MR_Word NewVarTable_14,
  MR_Word * OldNewRenaming_15,
  MR_Word * TypeSubn_16)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_33_33;
  MR_Word OldConjuncts_17;
  MR_Word NewConjuncts_18;
  MR_Word OldNewRenaming0_19;
  MR_Word NewArgVars_20;
  MR_Word NewGoalInfo_22;
  MR_Word NewNonLocals_23;
  MR_Word UnmatchedNonLocals_24;
  MR_Word MatchingArgTypes_25;
  MR_Word NewArgTypes_26;
  MR_Word Var_27;
  MR_Word Var_28;

  hlds__hlds_goal__goal_to_conj_list_2_p_0(OldGoal_10, &OldConjuncts_17);
  hlds__hlds_goal__goal_to_conj_list_2_p_0(NewGoal_13, &NewConjuncts_18);
  mercury__map__init_1_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), &OldNewRenaming0_19);
  succeeded = transform_hlds__pd_util__goals_match_2_4_p_0(OldConjuncts_17, NewConjuncts_18, OldNewRenaming0_19, OldNewRenaming_15);
  if (succeeded)
  {
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (*OldNewRenaming_15));
    }
    succeeded = mercury__list__map_3_p_2((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), Var_27, OldArgVars_11, &NewArgVars_20);
    if (succeeded)
    {
      NewGoalInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewGoal_13, (MR_Integer) 1))));
      NewNonLocals_23 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(NewGoalInfo_22);
      TypeCtorInfo_33_33 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      parse_tree__set_of_var__delete_list_3_p_0(TypeCtorInfo_33_33, NewArgVars_20, NewNonLocals_23, &UnmatchedNonLocals_24);
      succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_33_33, UnmatchedNonLocals_24);
      if (succeeded)
      {
        Var_28 = (MR_Word) ((MR_Unsigned) 0U);
        transform_hlds__pd_util__collect_matching_arg_types_5_p_0(*OldNewRenaming_15, OldArgVars_11, OldArgTypes_12, Var_28, &MatchingArgTypes_25);
        parse_tree__var_table__lookup_var_types_3_p_0(NewVarTable_14, NewArgVars_20, &NewArgTypes_26);
        succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(MatchingArgTypes_25, NewArgTypes_26, TypeSubn_16);
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__pd_util__goals_match_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_100;

  succeeded = transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1107__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_100);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_100));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__pd_util__goals_match_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ONRenaming_0_3,
  MR_Word * STATE_VARIABLE_ONRenaming_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *STATE_VARIABLE_ONRenaming_4 = STATE_VARIABLE_ONRenaming_0_3;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word OldGoal_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word OldGoals_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word NewGoal_10;
      MR_Word NewGoals_11;
      MR_Word OldGoalExpr_13;
      MR_Word NewGoalExpr_15;
      MR_Word STATE_VARIABLE_ONRenaming_101_101;
      MR_Word OldArgs_31;
      MR_Word NewArgs_32;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ONRenaming_0_3;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        NewGoal_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        NewGoals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        OldGoalExpr_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldGoal_8, (MR_Integer) 0))));
        NewGoalExpr_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewGoal_10, (MR_Integer) 0))));
        switch (MR_tag((MR_Word) OldGoalExpr_13)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word OldUnification_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldGoalExpr_13, (MR_Integer) 3))));
              MR_Word NewUnification_25;

              succeeded = ((MR_tag((MR_Word) NewGoalExpr_15)) == (MR_Integer) 1);
              if (succeeded)
              {
                NewUnification_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewGoalExpr_15, (MR_Integer) 3))));
                switch (MR_tag((MR_Word) OldUnification_20)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word OldVar_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldUnification_20, (MR_Integer) 0))));
                      MR_Word ConsId_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldUnification_20, (MR_Integer) 1))));
                      MR_Word OldArgs1_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldUnification_20, (MR_Integer) 2))));
                      MR_Word NewVar_40;
                      MR_Word NewArgs1_41;
                      MR_Word Var_124;

                      succeeded = ((MR_tag((MR_Word) NewUnification_25)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        NewVar_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewUnification_25, (MR_Integer) 0))));
                        Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewUnification_25, (MR_Integer) 1))));
                        NewArgs1_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewUnification_25, (MR_Integer) 2))));
                        succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_34, Var_124);
                        if (succeeded)
                        {
                          {
                            OldArgs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), OldArgs_31, 0) = ((MR_Box) (OldVar_33));
                            MR_hl_field(MR_mktag(1), OldArgs_31, 1) = ((MR_Box) (OldArgs1_35));
                          }
                          {
                            NewArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), NewArgs_32, 0) = ((MR_Box) (NewVar_40));
                            MR_hl_field(MR_mktag(1), NewArgs_32, 1) = ((MR_Box) (NewArgs1_41));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word OldVar_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldUnification_20, (MR_Integer) 0))));
                      MR_Word ConsId_109 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldUnification_20, (MR_Integer) 1))));
                      MR_Word OldArgs1_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldUnification_20, (MR_Integer) 2))));
                      MR_Word NewVar_111;
                      MR_Word NewArgs1_112;
                      MR_Word Var_125;

                      succeeded = ((MR_tag((MR_Word) NewUnification_25)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        NewVar_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewUnification_25, (MR_Integer) 0))));
                        Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewUnification_25, (MR_Integer) 1))));
                        NewArgs1_112 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewUnification_25, (MR_Integer) 2))));
                        succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_109, Var_125);
                        if (succeeded)
                        {
                          {
                            OldArgs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), OldArgs_31, 0) = ((MR_Box) (OldVar_108));
                            MR_hl_field(MR_mktag(1), OldArgs_31, 1) = ((MR_Box) (OldArgs1_110));
                          }
                          {
                            NewArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), NewArgs_32, 0) = ((MR_Box) (NewVar_111));
                            MR_hl_field(MR_mktag(1), NewArgs_32, 1) = ((MR_Box) (NewArgs1_112));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_92;
                      MR_Word Var_93;
                      MR_Word Var_94;
                      MR_Word OldVar1_104 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OldUnification_20, (MR_Integer) 0))));
                      MR_Word OldVar2_105 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OldUnification_20, (MR_Integer) 1))));
                      MR_Word NewVar1_106;
                      MR_Word NewVar2_107;

                      succeeded = ((MR_tag((MR_Word) NewUnification_25)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        NewVar1_106 = ((MR_Word) ((MR_hl_field(MR_mktag(2), NewUnification_25, (MR_Integer) 0))));
                        NewVar2_107 = ((MR_Word) ((MR_hl_field(MR_mktag(2), NewUnification_25, (MR_Integer) 1))));
                        Var_93 = (MR_Word) ((MR_Unsigned) 0U);
                        {
                          Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (OldVar2_105));
                          MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_93));
                        }
                        {
                          OldArgs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), OldArgs_31, 0) = ((MR_Box) (OldVar1_104));
                          MR_hl_field(MR_mktag(1), OldArgs_31, 1) = ((MR_Box) (Var_92));
                        }
                        {
                          Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (NewVar2_107));
                          MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_93));
                        }
                        {
                          NewArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), NewArgs_32, 0) = ((MR_Box) (NewVar1_106));
                          MR_hl_field(MR_mktag(1), NewArgs_32, 1) = ((MR_Box) (Var_94));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), OldUnification_20, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word OldVar1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OldUnification_20, (MR_Integer) 1))));
                          MR_Word OldVar2_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OldUnification_20, (MR_Integer) 2))));
                          MR_Word NewVar1_29;
                          MR_Word NewVar2_30;
                          MR_Word Var_88;
                          MR_Word Var_89;
                          MR_Word Var_90;

                          succeeded = ((((MR_tag((MR_Word) NewUnification_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), NewUnification_25, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            NewVar1_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), NewUnification_25, (MR_Integer) 1))));
                            NewVar2_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), NewUnification_25, (MR_Integer) 2))));
                            Var_89 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (OldVar2_28));
                              MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_89));
                            }
                            {
                              OldArgs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), OldArgs_31, 0) = ((MR_Box) (OldVar1_27));
                              MR_hl_field(MR_mktag(1), OldArgs_31, 1) = ((MR_Box) (Var_88));
                            }
                            {
                              Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (NewVar2_30));
                              MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_89));
                            }
                            {
                              NewArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), NewArgs_32, 0) = ((MR_Box) (NewVar1_29));
                              MR_hl_field(MR_mktag(1), NewArgs_32, 1) = ((MR_Box) (Var_90));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_util.goals_match_2\'/4", (MR_String) "complicated_unify should have been expanded by now");
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word PredId_55 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OldGoalExpr_13, (MR_Integer) 0))));
              MR_Integer ProcId_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), OldGoalExpr_13, (MR_Integer) 1))));
              MR_Word Var_126;
              MR_Integer Var_127;

              OldArgs_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OldGoalExpr_13, (MR_Integer) 2))));
              succeeded = ((MR_tag((MR_Word) NewGoalExpr_15)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(2), NewGoalExpr_15, (MR_Integer) 0))));
                Var_127 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), NewGoalExpr_15, (MR_Integer) 1))));
                NewArgs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), NewGoalExpr_15, (MR_Integer) 2))));
                succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_55, Var_126);
                if (succeeded)
                  succeeded = (ProcId_56 == Var_127);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), OldGoalExpr_13, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word TypeInfo_118_118;
                  MR_Word OldGenericCall_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OldGoalExpr_13, (MR_Integer) 1))));
                  MR_Word Det_66 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), OldGoalExpr_13, (MR_Integer) 5))) & (MR_Integer) 7);
                  MR_Word NewGenericCall_67;
                  MR_Word OldArgs0_70;
                  MR_Word NewArgs0_71;
                  MR_Word OldArgs1_113 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OldGoalExpr_13, (MR_Integer) 2))));
                  MR_Word NewArgs1_114;
                  MR_Word Var_128;

                  succeeded = ((((MR_tag((MR_Word) NewGoalExpr_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), NewGoalExpr_15, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    NewGenericCall_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), NewGoalExpr_15, (MR_Integer) 1))));
                    NewArgs1_114 = ((MR_Word) ((MR_hl_field(MR_mktag(3), NewGoalExpr_15, (MR_Integer) 2))));
                    Var_128 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), NewGoalExpr_15, (MR_Integer) 5))) & (MR_Integer) 7);
                    succeeded = (Det_66 == Var_128);
                    if (succeeded)
                    {
                      succeeded = transform_hlds__pd_util__match_generic_call_2_p_0(OldGenericCall_63, NewGenericCall_67);
                      if (succeeded)
                      {
                        hlds__goal_util__generic_call_vars_2_p_0(OldGenericCall_63, &OldArgs0_70);
                        hlds__goal_util__generic_call_vars_2_p_0(NewGenericCall_67, &NewArgs0_71);
                        TypeInfo_118_118 = (MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]);
                        OldArgs_31 = mercury__list__f_43_43_2_f_0(TypeInfo_118_118, OldArgs0_70, OldArgs1_113);
                        NewArgs_32 = mercury__list__f_43_43_2_f_0(TypeInfo_118_118, NewArgs0_71, NewArgs1_114);
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                }
                break;
            }
            break;
        }
        if (succeeded)
        {
          MR_Word ONArgsList_72;
          MR_Box conv1_STATE_VARIABLE_ONRenaming_101_101;

          mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), OldArgs_31, NewArgs_32, &ONArgsList_72);
          succeeded = mercury__list__foldl_4_p_3((MR_Word) (&transform_hlds__pd_util_scalar_common_2[2]), (MR_Word) (&transform_hlds__pd_util_scalar_common_2[3]), (MR_Word) (&transform_hlds__pd_util_scalar_common_2[7]), ONArgsList_72, ((MR_Box) (STATE_VARIABLE_ONRenaming_0_3)), &conv1_STATE_VARIABLE_ONRenaming_101_101);
          if (succeeded)
          {
            STATE_VARIABLE_ONRenaming_101_101 = ((MR_Word) (conv1_STATE_VARIABLE_ONRenaming_101_101));
            succeeded = MR_TRUE;
          }
        }
        else
        {
          MR_Word OldSubGoal_80;
          MR_Word NewSubGoal_81;
          MR_Word OldSubConjuncts_84;
          MR_Word NewSubConjuncts_85;

          if (((MR_tag((MR_Word) OldGoalExpr_13)) == (MR_Integer) 0))
          {
            OldSubGoal_80 = (MR_Word) ((MR_Word) (OldGoalExpr_13));
            succeeded = ((MR_tag((MR_Word) NewGoalExpr_15)) == (MR_Integer) 0);
            if (succeeded)
              NewSubGoal_81 = (MR_Word) ((MR_Word) (NewGoalExpr_15));
          }
          else
          if (((((MR_tag((MR_Word) OldGoalExpr_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), OldGoalExpr_13, (MR_Integer) 0)))) == (MR_Integer) 5))))
          {
            OldSubGoal_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OldGoalExpr_13, (MR_Integer) 2))));
            succeeded = ((((MR_tag((MR_Word) NewGoalExpr_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), NewGoalExpr_15, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (succeeded)
              NewSubGoal_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), NewGoalExpr_15, (MR_Integer) 2))));
          }
          else
            succeeded = MR_FALSE;
          if (succeeded)
          {
            hlds__hlds_goal__goal_to_conj_list_2_p_0(OldSubGoal_80, &OldSubConjuncts_84);
            hlds__hlds_goal__goal_to_conj_list_2_p_0(NewSubGoal_81, &NewSubConjuncts_85);
            succeeded = transform_hlds__pd_util__goals_match_2_4_p_0(OldSubConjuncts_84, NewSubConjuncts_85, STATE_VARIABLE_ONRenaming_0_3, &STATE_VARIABLE_ONRenaming_101_101);
          }
        }
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = OldGoals_9;
          next_value_of_HeadVar__2_2 = NewGoals_11;
          next_value_of_STATE_VARIABLE_ONRenaming_0_3 = STATE_VARIABLE_ONRenaming_101_101;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_ONRenaming_0_3 = next_value_of_STATE_VARIABLE_ONRenaming_0_3;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_util__match_generic_call_2_p_0(
  MR_Word GenericCallA_3,
  MR_Word GenericCallB_4)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) GenericCallA_3)) == (MR_Integer) 1))
  {
    MR_Integer MethodNum_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), GenericCallA_3, (MR_Integer) 1))));
    MR_Word ClassId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GenericCallA_3, (MR_Integer) 2))));
    MR_Word CallId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GenericCallA_3, (MR_Integer) 3))));
    MR_Integer Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    succeeded = ((MR_tag((MR_Word) GenericCallB_4)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), GenericCallB_4, (MR_Integer) 1))));
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GenericCallB_4, (MR_Integer) 2))));
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GenericCallB_4, (MR_Integer) 3))));
      succeeded = (MethodNum_11 == Var_18);
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____class_id_0_0(ClassId_12, Var_19);
        if (succeeded)
          succeeded = parse_tree__prog_data____Unify____pf_sym_name_arity_0_0(CallId_13, Var_20);
      }
    }
  }
  else
  if (((MR_tag((MR_Word) GenericCallA_3)) == (MR_Integer) 0))
  {
    MR_Word Purity_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), GenericCallA_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
    MR_Word PredOrFunc_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), GenericCallA_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word Arity_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GenericCallA_3, (MR_Integer) 2))));
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Integer Var_24;
    MR_Integer Var_25;

    succeeded = ((MR_tag((MR_Word) GenericCallB_4)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), GenericCallB_4, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
      Var_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), GenericCallB_4, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GenericCallB_4, (MR_Integer) 2))));
      succeeded = (Purity_6 == Var_15);
      if (succeeded)
      {
        succeeded = (PredOrFunc_7 == Var_16);
        if (succeeded)
        {
          Var_24 = (MR_Integer) (Arity_8);
          Var_25 = (MR_Integer) (Var_17);
          succeeded = (Var_24 == Var_25);
        }
      }
    }
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static void MR_CALL 
transform_hlds__pd_util__collect_matching_arg_types_5_p_0(
  MR_Word Renaming_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_MatchingTypes_0_4,
  MR_Word * STATE_VARIABLE_MatchingTypes_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_MatchingTypes_0_4, STATE_VARIABLE_MatchingTypes_5);
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_util.collect_matching_arg_types\'/5", (MR_String) "list length mismatch");
          return;
        }
    else
    {
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_util.collect_matching_arg_types\'/5", (MR_String) "list length mismatch");
          return;
        }
      else
      {
        MR_Word Type_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Types_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_MatchingTypes_35_35;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_MatchingTypes_0_4;

        succeeded = mercury__map__contains_2_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), Renaming_1, ((MR_Box) (Var_39)));
        if (succeeded)
          {
            STATE_VARIABLE_MatchingTypes_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_MatchingTypes_35_35, 0) = ((MR_Box) (Type_30));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_MatchingTypes_35_35, 1) = ((MR_Box) (STATE_VARIABLE_MatchingTypes_0_4));
          }
        else
          STATE_VARIABLE_MatchingTypes_35_35 = STATE_VARIABLE_MatchingTypes_0_4;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_38;
        next_value_of_HeadVar__3_3 = Types_31;
        next_value_of_STATE_VARIABLE_MatchingTypes_0_4 = STATE_VARIABLE_MatchingTypes_35_35;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_MatchingTypes_0_4 = next_value_of_STATE_VARIABLE_MatchingTypes_0_4;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
transform_hlds__pd_util__inst_list_size_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Insts_5,
  MR_Integer * Size_6)
{
  MR_Word Expansions_7;

  mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), &Expansions_7);
  transform_hlds__pd_util__inst_list_size_5_p_0(ModuleInfo_4, Expansions_7, Insts_5, (MR_Integer) 0, Size_6);
}

void MR_CALL 
transform_hlds__pd_util__inst_size_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Inst_5,
  MR_Integer * Size_6)
{
  MR_Word Expansions_7;

  mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), &Expansions_7);
  transform_hlds__pd_util__inst_size_2_4_p_0(ModuleInfo_4, Expansions_7, Inst_5, Size_6);
}

static void MR_CALL 
transform_hlds__pd_util__inst_size_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word STATE_VARIABLE_Expansions_0_23,
  MR_Word Inst_7,
  MR_Integer * Size_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Size_8 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *Size_8 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word BoundInsts_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 3))));

              transform_hlds__pd_util__bound_inst_size_5_p_0(ModuleInfo_5, STATE_VARIABLE_Expansions_0_23, BoundInsts_22, (MR_Integer) 1, Size_8);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 5:
            *Size_8 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInst_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_7 = SubInst_18;

              // direct tailcall eliminated
              ;
              Inst_7 = next_value_of_Inst_7;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 1))));

              succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (InstName_19)), STATE_VARIABLE_Expansions_0_23);
              if (succeeded)
                *Size_8 = (MR_Integer) 1;
              else
              {
                MR_Word STATE_VARIABLE_Expansions_24_24;
                MR_Word SubInst_26;
                MR_Word next_value_of_STATE_VARIABLE_Expansions_0_23;
                MR_Word next_value_of_Inst_7;

                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (InstName_19)), STATE_VARIABLE_Expansions_0_23, &STATE_VARIABLE_Expansions_24_24);
                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_5, InstName_19, &SubInst_26);
                // direct tailcall eliminated
                ;
                next_value_of_STATE_VARIABLE_Expansions_0_23 = STATE_VARIABLE_Expansions_24_24;
                next_value_of_Inst_7 = SubInst_26;
                STATE_VARIABLE_Expansions_0_23 = next_value_of_STATE_VARIABLE_Expansions_0_23;
                Inst_7 = next_value_of_Inst_7;
                continue;
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
transform_hlds__pd_util__inst_list_size_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Expansions_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_Size_0_4,
  MR_Integer * STATE_VARIABLE_Size_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Size_5 = STATE_VARIABLE_Size_0_4;
    else
    {
      MR_Word Inst_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Insts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer InstSize_16;
      MR_Integer STATE_VARIABLE_Size_19_19;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_STATE_VARIABLE_Size_0_4;

      transform_hlds__pd_util__inst_size_2_4_p_0(ModuleInfo_1, Expansions_2, Inst_13, &InstSize_16);
      STATE_VARIABLE_Size_19_19 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Size_0_4 + (MR_Unsigned) InstSize_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Insts_14;
      next_value_of_STATE_VARIABLE_Size_0_4 = STATE_VARIABLE_Size_19_19;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Size_0_4 = next_value_of_STATE_VARIABLE_Size_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_util__bound_inst_size_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Expansions_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_Size_0_4,
  MR_Integer * STATE_VARIABLE_Size_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Size_5 = STATE_VARIABLE_Size_0_4;
    else
    {
      MR_Word BoundInst_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word BoundInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgInsts_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_13, (MR_Integer) 1))));
      MR_Integer STATE_VARIABLE_Size_20_20;
      MR_Integer STATE_VARIABLE_Size_21_21;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_STATE_VARIABLE_Size_0_4;

      transform_hlds__pd_util__inst_list_size_5_p_0(ModuleInfo_1, Expansions_2, ArgInsts_17, STATE_VARIABLE_Size_0_4, &STATE_VARIABLE_Size_20_20);
      STATE_VARIABLE_Size_21_21 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Size_20_20 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = BoundInsts_14;
      next_value_of_STATE_VARIABLE_Size_0_4 = STATE_VARIABLE_Size_21_21;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Size_0_4 = next_value_of_STATE_VARIABLE_Size_0_4;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
transform_hlds__pd_util__inst_MSG_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word InstA_6,
  MR_Word InstB_7,
  MR_Word * Inst_8)
{
  MR_bool succeeded;
  MR_Word Expansions_9;

  mercury__set__init_1_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_2[0]), &Expansions_9);
  succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(InstA_6, InstB_7);
  if (succeeded)
  {
    *Inst_8 = InstA_6;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word TypeInfo_18_17;
    MR_Word InstA2_11;
    MR_Word InstB2_12;
    MR_Word Var_14;
    MR_Word STATE_VARIABLE_Expansions_16_15;
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (InstA_6));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (InstB_7));
    }
    succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_2[0]), ((MR_Box) (Var_13)), Expansions_9);
    succeeded = !(succeeded);
    if (succeeded)
    {
      check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo_5, InstA_6, &InstA2_11);
      check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo_5, InstB_7, &InstB2_12);
      TypeInfo_18_17 = (MR_Word) (&transform_hlds__pd_util_scalar_common_2[0]);
      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (InstA_6));
        MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (InstB_7));
      }
      mercury__set__insert_3_p_0(TypeInfo_18_17, ((MR_Box) (Var_14)), Expansions_9, &STATE_VARIABLE_Expansions_16_15);
      succeeded = (InstB2_12 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
      {
        *Inst_8 = InstA2_11;
        succeeded = MR_TRUE;
      }
      else
        switch (MR_tag((MR_Word) InstA2_11)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(InstA2_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  succeeded = (InstB2_12 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    *Inst_8 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  *Inst_8 = InstB2_12;
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            {
              succeeded = ((MR_tag((MR_Word) InstB2_12)) == (MR_Integer) 2);
              if (succeeded)
              {
                *Inst_8 = InstB2_12;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA2_11, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA2_11, (MR_Integer) 3))));

                  if (((((MR_tag((MR_Word) InstB2_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB2_12, (MR_Integer) 0)))) == (MR_Integer) 0))))
                  {
                    MR_Word UniqB_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB2_12, (MR_Integer) 1))) & (MR_Integer) 7);
                    MR_Word BoundInstsB_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB2_12, (MR_Integer) 3))));

                    succeeded = transform_hlds__pd_util__bound_inst_list_MSG_7_p_0(ModuleInfo_5, STATE_VARIABLE_Expansions_16_15, UniqB_36, Var_49, BoundInstsB_38, BoundInstsB_38, Inst_8);
                  }
                  else
                  if (((((MR_tag((MR_Word) InstB2_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB2_12, (MR_Integer) 0)))) == (MR_Integer) 1))))
                  {
                    *Inst_8 = InstB2_12;
                    succeeded = MR_TRUE;
                  }
                  else
                    succeeded = MR_FALSE;
                }
                break;
              case (MR_Integer) 1:
                {
                  succeeded = ((((MR_tag((MR_Word) InstB2_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB2_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    *Inst_8 = InstB2_12;
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Name_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA2_11, (MR_Integer) 1))));
                  MR_Word ArgsA_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA2_11, (MR_Integer) 2))));
                  MR_Word ArgsB_45;
                  MR_Word Args_46;
                  MR_Word Var_48;

                  succeeded = ((((MR_tag((MR_Word) InstB2_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB2_12, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB2_12, (MR_Integer) 1))));
                    ArgsB_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB2_12, (MR_Integer) 2))));
                    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_43, Var_48);
                    if (succeeded)
                    {
                      succeeded = transform_hlds__pd_util__inst_list_MSG_5_p_0(ModuleInfo_5, STATE_VARIABLE_Expansions_16_15, ArgsA_44, ArgsB_45, &Args_46);
                      if (succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          *Inst_8 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Name_43));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_46));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                }
                break;
            }
            break;
        }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__pd_util__bound_inst_list_MSG_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Expansions_9,
  MR_Word Uniq_10,
  MR_Word Xs_11,
  MR_Word Ys_12,
  MR_Word BoundInsts_13,
  MR_Word * Inst_14)
{
  MR_bool succeeded = (Xs_11 == (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
    succeeded = (Ys_12 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *Inst_14 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_10));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Ys_12));
    }
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Xs1_16;
    MR_Word Ys1_18;
    MR_Word ConsId_19;
    MR_Word ArgsX_20;
    MR_Word ArgsY_21;
    MR_Word X_15;
    MR_Word Y_17;
    MR_Word Var_41;

    succeeded = (Xs_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      X_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_11, (MR_Integer) 0))));
      Xs1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_11, (MR_Integer) 1))));
      succeeded = (Ys_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Y_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ys_12, (MR_Integer) 0))));
        Ys1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ys_12, (MR_Integer) 1))));
        ConsId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_15, (MR_Integer) 0))));
        ArgsX_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_15, (MR_Integer) 1))));
        Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_17, (MR_Integer) 0))));
        ArgsY_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_17, (MR_Integer) 1))));
        succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_19, Var_41);
      }
    }
    if (succeeded)
    {
      MR_Word Args_22;
      MR_Word Z_23;
      MR_Word Inst1_24;
      MR_Word Zs_26;
      MR_Word Var_42;

      succeeded = transform_hlds__pd_util__inst_list_MSG_5_p_0(ModuleInfo_8, Expansions_9, ArgsX_20, ArgsY_21, &Args_22);
      if (succeeded)
      {
        {
          Z_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Z_23, 0) = ((MR_Box) (ConsId_19));
          MR_hl_field(MR_mktag(0), Z_23, 1) = ((MR_Box) (Args_22));
        }
        succeeded = transform_hlds__pd_util__bound_inst_list_MSG_7_p_0(ModuleInfo_8, Expansions_9, Uniq_10, Xs1_16, Ys1_18, BoundInsts_13, &Inst1_24);
        if (succeeded)
        {
          succeeded = ((((MR_tag((MR_Word) Inst1_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst1_24, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst1_24, (MR_Integer) 1))) & (MR_Integer) 7);
            Zs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst1_24, (MR_Integer) 3))));
            succeeded = (Uniq_10 == Var_42);
          }
          if (succeeded)
          {
            MR_Word Var_31;

            {
              Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Z_23));
              MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Zs_26));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Inst_14 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_10));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_31));
            }
          }
          else
            *Inst_14 = Inst1_24;
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word Var_39;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;

      switch (Uniq_10) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word NewInst_27;

            {
              NewInst_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), NewInst_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), NewInst_27, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), NewInst_27, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), NewInst_27, 3) = ((MR_Box) (BoundInsts_13));
            }
            succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_8, NewInst_27);
            if (succeeded)
              succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_8, NewInst_27);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word NewInst_40;

            {
              NewInst_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), NewInst_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), NewInst_40, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), NewInst_40, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), NewInst_40, 3) = ((MR_Box) (BoundInsts_13));
            }
            succeeded = check_hlds__inst_test__inst_is_unique_2_p_0(ModuleInfo_8, NewInst_40);
          }
          break;
      }
      if (succeeded)
      {
        Var_37 = (MR_Integer) 0;
        Var_38 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_36, 1) = (MR_Box) ((MR_Unsigned) (Var_37));
          MR_hl_field(MR_mktag(3), Var_36, 2) = ((MR_Box) (Var_38));
          MR_hl_field(MR_mktag(3), Var_36, 3) = ((MR_Box) (BoundInsts_13));
        }
        succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_2_p_0(ModuleInfo_8, Var_36);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_39 = (MR_Word) ((MR_Unsigned) 0U);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Inst_14 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_10));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_39));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__pd_util__inst_list_MSG_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Expansions_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Word ArgA_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgsA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgB_12;
    MR_Word ArgsB_13;
    MR_Word Arg_14;
    MR_Word Args_15;

    succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgB_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      ArgsB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgA_10, ArgB_12);
      if (succeeded)
      {
        Arg_14 = ArgA_10;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word TypeInfo_18_22;
        MR_Word InstA2_16;
        MR_Word InstB2_17;
        MR_Word Var_19;
        MR_Word STATE_VARIABLE_Expansions_16_20;
        MR_Word Var_18;

        {
          Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (ArgA_10));
          MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ArgB_12));
        }
        succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_2[0]), ((MR_Box) (Var_18)), Expansions_2);
        succeeded = !(succeeded);
        if (succeeded)
        {
          check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo_1, ArgA_10, &InstA2_16);
          check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo_1, ArgB_12, &InstB2_17);
          TypeInfo_18_22 = (MR_Word) (&transform_hlds__pd_util_scalar_common_2[0]);
          {
            Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (ArgA_10));
            MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (ArgB_12));
          }
          mercury__set__insert_3_p_0(TypeInfo_18_22, ((MR_Box) (Var_19)), Expansions_2, &STATE_VARIABLE_Expansions_16_20);
          succeeded = (InstB2_17 == (MR_Word) ((MR_Unsigned) 4U));
          if (succeeded)
          {
            Arg_14 = InstA2_16;
            succeeded = MR_TRUE;
          }
          else
            switch (MR_tag((MR_Word) InstA2_16)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                switch (MR_unmkbody(InstA2_16)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      succeeded = (InstB2_17 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Arg_14 = (MR_Word) ((MR_Unsigned) 0U);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      Arg_14 = InstB2_17;
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
              case (MR_Integer) 2:
                {
                  succeeded = ((MR_tag((MR_Word) InstB2_17)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    Arg_14 = InstB2_17;
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA2_16, (MR_Integer) 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA2_16, (MR_Integer) 3))));

                      if (((((MR_tag((MR_Word) InstB2_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB2_17, (MR_Integer) 0)))) == (MR_Integer) 0))))
                      {
                        MR_Word UniqB_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB2_17, (MR_Integer) 1))) & (MR_Integer) 7);
                        MR_Word BoundInstsB_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB2_17, (MR_Integer) 3))));

                        succeeded = transform_hlds__pd_util__bound_inst_list_MSG_7_p_0(ModuleInfo_1, STATE_VARIABLE_Expansions_16_20, UniqB_41, Var_54, BoundInstsB_43, BoundInstsB_43, &Arg_14);
                      }
                      else
                      if (((((MR_tag((MR_Word) InstB2_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB2_17, (MR_Integer) 0)))) == (MR_Integer) 1))))
                      {
                        Arg_14 = InstB2_17;
                        succeeded = MR_TRUE;
                      }
                      else
                        succeeded = MR_FALSE;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      succeeded = ((((MR_tag((MR_Word) InstB2_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB2_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                      if (succeeded)
                      {
                        Arg_14 = InstB2_17;
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word Name_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA2_16, (MR_Integer) 1))));
                      MR_Word ArgsA_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA2_16, (MR_Integer) 2))));
                      MR_Word ArgsB_50;
                      MR_Word Args_51;
                      MR_Word Var_53;

                      succeeded = ((((MR_tag((MR_Word) InstB2_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB2_17, (MR_Integer) 0)))) == (MR_Integer) 5)));
                      if (succeeded)
                      {
                        Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB2_17, (MR_Integer) 1))));
                        ArgsB_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB2_17, (MR_Integer) 2))));
                        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_48, Var_53);
                        if (succeeded)
                        {
                          succeeded = transform_hlds__pd_util__inst_list_MSG_5_p_0(ModuleInfo_1, STATE_VARIABLE_Expansions_16_20, ArgsA_49, ArgsB_50, &Args_51);
                          if (succeeded)
                          {
                            {
                              Arg_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), Arg_14, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                              MR_hl_field(MR_mktag(3), Arg_14, 1) = ((MR_Box) (Name_48));
                              MR_hl_field(MR_mktag(3), Arg_14, 2) = ((MR_Box) (Args_51));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                    break;
                }
                break;
            }
        }
      }
      if (succeeded)
      {
        succeeded = transform_hlds__pd_util__inst_list_MSG_5_p_0(ModuleInfo_1, Expansions_2, ArgsA_11, ArgsB_13, &Args_15);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_14));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_15));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__pd_util__get_branch_vars_goal_4_p_0(
  MR_Word Goal_5,
  MR_Word * MaybeBranchInfo_6,
  MR_Word STATE_VARIABLE_PDInfo_0_20,
  MR_Word * STATE_VARIABLE_PDInfo_21)
{
  MR_bool succeeded;
  MR_Word ModuleInfo0_8;
  MR_Word InstMap0_9;
  MR_Word ProcArgInfo_10;
  MR_Word ProcInfo_11;
  MR_Word VarTable_12;
  MR_Word LeftVars0_13;
  MR_Word Vars0_14;
  MR_Word LeftVars_15;
  MR_Word Vars1_16;
  MR_Word Var_23;

  transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_0_20, &ModuleInfo0_8);
  transform_hlds__pd_info__pd_info_get_instmap_2_p_0(STATE_VARIABLE_PDInfo_0_20, &InstMap0_9);
  transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(STATE_VARIABLE_PDInfo_0_20, &ProcArgInfo_10);
  transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(STATE_VARIABLE_PDInfo_0_20, &ProcInfo_11);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_11, &VarTable_12);
  parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &LeftVars0_13);
  mercury__map__init_1_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[1]), &Vars0_14);
  {
    Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Goal_5));
    MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  succeeded = transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_50_93_95_48_9_p_0(ModuleInfo0_8, InstMap0_9, (MR_Integer) 0, Var_23, LeftVars0_13, &LeftVars_15, Vars0_14, &Vars1_16);
  if (succeeded)
  {
    MR_Word Vars_17;
    MR_Word ModuleInfo_18;
    MR_Word OpaqueVars_19;
    MR_Word Var_28;
    MR_Word Var_29;

    transform_hlds__pd_util__get_sub_branch_vars_goal_8_p_0(ProcArgInfo_10, VarTable_12, InstMap0_9, Var_23, Vars1_16, &Vars_17, ModuleInfo0_8, &ModuleInfo_18);
    transform_hlds__pd_info__pd_info_set_module_info_3_p_0(ModuleInfo_18, STATE_VARIABLE_PDInfo_0_20, STATE_VARIABLE_PDInfo_21);
    mercury__set__init_1_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), &OpaqueVars_19);
    Var_29 = parse_tree__set_of_var__bitset_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LeftVars_15);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Vars_17));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) (OpaqueVars_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeBranchInfo_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
    }
  }
  else
  {
    *MaybeBranchInfo_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_PDInfo_21 = STATE_VARIABLE_PDInfo_0_20;
  }
}

void MR_CALL 
transform_hlds__pd_util__get_branch_vars_proc_6_p_0(
  MR_Word PredProcId_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * STATE_VARIABLE_ModuleInfo_33,
  MR_Word STATE_VARIABLE_ArgInfo_0_34,
  MR_Word * STATE_VARIABLE_ArgInfo_35)
{
  MR_bool succeeded;
  MR_Word Goal_11;
  MR_Word VarTable_12;
  MR_Word InstMap0_13;
  MR_Word Vars0_14;
  MR_Word LeftVars0_15;
  MR_Word Conjuncts_16;
  MR_Word LeftVars_17;
  MR_Word Vars_18;

  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_8, &Goal_11);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_8, &VarTable_12);
  hlds__instmap__init_reachable_1_p_0(&InstMap0_13);
  mercury__map__init_1_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[1]), &Vars0_14);
  parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &LeftVars0_15);
  hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal_11, &Conjuncts_16);
  succeeded = transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_50_93_95_48_9_p_0(STATE_VARIABLE_ModuleInfo_0_32, InstMap0_13, (MR_Integer) 0, Conjuncts_16, LeftVars0_15, &LeftVars_17, Vars0_14, &Vars_18);
  if (succeeded)
  {
    MR_Word HeadVars_19;
    MR_Word ThisProcArgMap0_20;
    MR_Word ThisProcLeftArgs0_21;
    MR_Word ThisProcArgMap1_22;
    MR_Word ThisProcLeftArgs_23;
    MR_Word OpaqueArgs0_24;
    MR_Word BranchInfo0_25;
    MR_Word AllVars_26;
    MR_Word ThisProcArgMap_27;
    MR_Word ArgModes_29;
    MR_Word OpaqueArgs_30;
    MR_Word BranchInfo_31;
    MR_Word STATE_VARIABLE_ArgInfo_38_38;
    MR_Word Var_28;

    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_8, &HeadVars_19);
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[1]), &ThisProcArgMap0_20);
    mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &ThisProcLeftArgs0_21);
    transform_hlds__pd_util__get_extra_info_headvars_8_p_0(Vars_18, LeftVars_17, (MR_Integer) 1, HeadVars_19, ThisProcArgMap0_20, &ThisProcArgMap1_22, ThisProcLeftArgs0_21, &ThisProcLeftArgs_23);
    mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &OpaqueArgs0_24);
    {
      BranchInfo0_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BranchInfo0_25, 0) = ((MR_Box) (ThisProcArgMap1_22));
      MR_hl_field(MR_mktag(0), BranchInfo0_25, 1) = ((MR_Box) (ThisProcLeftArgs_23));
      MR_hl_field(MR_mktag(0), BranchInfo0_25, 2) = ((MR_Box) (OpaqueArgs0_24));
    }
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[2]), ((MR_Box) (PredProcId_7)), ((MR_Box) (BranchInfo0_25)), STATE_VARIABLE_ArgInfo_0_34, &STATE_VARIABLE_ArgInfo_38_38);
    transform_hlds__pd_util__get_sub_branch_vars_goal_8_p_0(STATE_VARIABLE_ArgInfo_38_38, VarTable_12, InstMap0_13, Conjuncts_16, Vars_18, &AllVars_26, STATE_VARIABLE_ModuleInfo_0_32, STATE_VARIABLE_ModuleInfo_33);
    transform_hlds__pd_util__get_extra_info_headvars_8_p_0(AllVars_26, LeftVars0_15, (MR_Integer) 1, HeadVars_19, ThisProcArgMap0_20, &ThisProcArgMap_27, ThisProcLeftArgs0_21, &Var_28);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_8, &ArgModes_29);
    transform_hlds__pd_util__get_opaque_args_6_p_0(*STATE_VARIABLE_ModuleInfo_33, ThisProcArgMap_27, (MR_Integer) 1, ArgModes_29, OpaqueArgs0_24, &OpaqueArgs_30);
    {
      BranchInfo_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BranchInfo_31, 0) = ((MR_Box) (ThisProcArgMap_27));
      MR_hl_field(MR_mktag(0), BranchInfo_31, 1) = ((MR_Box) (ThisProcLeftArgs_23));
      MR_hl_field(MR_mktag(0), BranchInfo_31, 2) = ((MR_Box) (OpaqueArgs_30));
    }
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[2]), ((MR_Box) (PredProcId_7)), ((MR_Box) (BranchInfo_31)), STATE_VARIABLE_ArgInfo_38_38, STATE_VARIABLE_ArgInfo_35);
  }
  else
  {
    *STATE_VARIABLE_ArgInfo_35 = STATE_VARIABLE_ArgInfo_0_34;
    *STATE_VARIABLE_ModuleInfo_33 = STATE_VARIABLE_ModuleInfo_0_32;
  }
}

static void MR_CALL 
transform_hlds__pd_util__get_sub_branch_vars_goal_8_p_0(
  MR_Word ProcArgInfo_1,
  MR_Word VarTable_2,
  MR_Word InstMap0_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = HeadVar__5_5;
      *HeadVar__8_8 = HeadVar__7_7;
    }
    else
    {
      MR_Word Goal_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Goals_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word GoalExpr_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_19, (MR_Integer) 0))));
      MR_Word GoalInfo_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_19, (MR_Integer) 1))));
      MR_Word InstMapDelta_69;
      MR_Word InstMap_70;
      MR_Word STATE_VARIABLE_Vars_77_77;
      MR_Word STATE_VARIABLE_ModuleInfo_82_82;
      MR_Word next_value_of_InstMap0_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_HeadVar__7_7;

      switch (MR_tag((MR_Word) GoalExpr_24)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_Vars_77_77 = HeadVar__5_5;
            STATE_VARIABLE_ModuleInfo_82_82 = HeadVar__7_7;
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_Vars_77_77 = HeadVar__5_5;
            STATE_VARIABLE_ModuleInfo_82_82 = HeadVar__7_7;
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_Vars_77_77 = HeadVar__5_5;
            STATE_VARIABLE_ModuleInfo_82_82 = HeadVar__7_7;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_24, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_Vars_77_77 = HeadVar__5_5;
                STATE_VARIABLE_ModuleInfo_82_82 = HeadVar__7_7;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_Vars_77_77 = HeadVar__5_5;
                STATE_VARIABLE_ModuleInfo_82_82 = HeadVar__7_7;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_Vars_77_77 = HeadVar__5_5;
                STATE_VARIABLE_ModuleInfo_82_82 = HeadVar__7_7;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word SubGoals_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_24, (MR_Integer) 1))));

                transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(HeadVar__7_7, ProcArgInfo_1, InstMap0_3, (MR_Integer) 1, SubGoals_36, HeadVar__5_5, &STATE_VARIABLE_Vars_77_77);
                STATE_VARIABLE_ModuleInfo_82_82 = HeadVar__7_7;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_24, (MR_Integer) 1))));
                MR_Word Cases_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_24, (MR_Integer) 3))));

                transform_hlds__pd_util__examine_case_list_10_p_0(ProcArgInfo_1, VarTable_2, InstMap0_3, Var_37, (MR_Integer) 1, Cases_39, HeadVar__5_5, &STATE_VARIABLE_Vars_77_77, HeadVar__7_7, &STATE_VARIABLE_ModuleInfo_82_82);
              }
              break;
            case (MR_Integer) 5:
              {
                STATE_VARIABLE_Vars_77_77 = HeadVar__5_5;
                STATE_VARIABLE_ModuleInfo_82_82 = HeadVar__7_7;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_24, (MR_Integer) 2))));
                MR_Word Then_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_24, (MR_Integer) 3))));
                MR_Word Else_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_24, (MR_Integer) 4))));
                MR_Word CondInfo_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond_27, (MR_Integer) 1))));
                MR_Word CondDelta_32;
                MR_Word InstMap1_33;
                MR_Word ThenList_34;
                MR_Word ElseList_35;
                MR_Word STATE_VARIABLE_Vars_75_75;

                CondDelta_32 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondInfo_31);
                hlds__instmap__apply_instmap_delta_3_p_0(CondDelta_32, InstMap0_3, &InstMap1_33);
                hlds__hlds_goal__goal_to_conj_list_2_p_0(Then_28, &ThenList_34);
                transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_51_93_95_48_8_p_0(HeadVar__7_7, ProcArgInfo_1, InstMap1_33, (MR_Integer) 1, ThenList_34, HeadVar__5_5, &STATE_VARIABLE_Vars_75_75);
                hlds__hlds_goal__goal_to_conj_list_2_p_0(Else_29, &ElseList_35);
                transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_51_93_95_48_8_p_0(HeadVar__7_7, ProcArgInfo_1, InstMap0_3, (MR_Integer) 2, ElseList_35, STATE_VARIABLE_Vars_75_75, &STATE_VARIABLE_Vars_77_77);
                STATE_VARIABLE_ModuleInfo_82_82 = HeadVar__7_7;
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_util.get_sub_branch_vars_goal\'/8", (MR_String) "shorthand");
                return;
              }
              break;
          }
          break;
      }
      InstMapDelta_69 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_25);
      hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_69, InstMap0_3, &InstMap_70);
      // direct tailcall eliminated
      ;
      next_value_of_InstMap0_3 = InstMap_70;
      next_value_of_HeadVar__4_4 = Goals_20;
      next_value_of_HeadVar__5_5 = STATE_VARIABLE_Vars_77_77;
      next_value_of_HeadVar__7_7 = STATE_VARIABLE_ModuleInfo_82_82;
      InstMap0_3 = next_value_of_InstMap0_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ProcArgInfo_2,
  MR_Word InstMap_4,
  MR_Integer BranchNo_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Vars_0_7,
  MR_Word * STATE_VARIABLE_Vars_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Vars_8 = STATE_VARIABLE_Vars_0_7;
    else
    {
      MR_Word Goal_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Goals_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word Conjuncts_25;
      MR_Word STATE_VARIABLE_Vars_28_28;
      MR_Integer Var_29;
      MR_Integer next_value_of_BranchNo_5;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_Vars_0_7;

      hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal_22, &Conjuncts_25);
      transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_51_93_95_48_8_p_0(ModuleInfo_1, ProcArgInfo_2, InstMap_4, BranchNo_5, Conjuncts_25, STATE_VARIABLE_Vars_0_7, &STATE_VARIABLE_Vars_28_28);
      Var_29 = (MR_Integer) ((MR_Unsigned) BranchNo_5 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_BranchNo_5 = Var_29;
      next_value_of_HeadVar__6_6 = Goals_23;
      next_value_of_STATE_VARIABLE_Vars_0_7 = STATE_VARIABLE_Vars_28_28;
      BranchNo_5 = next_value_of_BranchNo_5;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_Vars_0_7 = next_value_of_STATE_VARIABLE_Vars_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_util__examine_case_list_10_p_0(
  MR_Word ProcArgInfo_1,
  MR_Word VarTable_2,
  MR_Word InstMap0_3,
  MR_Word Var_4,
  MR_Integer BranchNo_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Vars_0_7,
  MR_Word * STATE_VARIABLE_Vars_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_0_9;
      *STATE_VARIABLE_Vars_8 = STATE_VARIABLE_Vars_0_7;
    }
    else
    {
      MR_Word Case_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Cases_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word Type_31;
      MR_Word MainConsId_32;
      MR_Word OtherConsIds_33;
      MR_Word Goal_34;
      MR_Word InstMap1_35;
      MR_Word Conjuncts_36;
      MR_Integer NextBranch_37;
      MR_Word STATE_VARIABLE_ModuleInfo_42_42;
      MR_Word STATE_VARIABLE_Vars_43_43;
      MR_Integer next_value_of_BranchNo_5;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_Vars_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_9;

      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_2, Var_4, &Type_31);
      MainConsId_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_27, (MR_Integer) 0))));
      OtherConsIds_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_27, (MR_Integer) 1))));
      Goal_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_27, (MR_Integer) 2))));
      hlds__instmap__bind_var_to_functors_8_p_0(Var_4, Type_31, MainConsId_32, OtherConsIds_33, InstMap0_3, &InstMap1_35, STATE_VARIABLE_ModuleInfo_0_9, &STATE_VARIABLE_ModuleInfo_42_42);
      hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal_34, &Conjuncts_36);
      transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_51_93_95_48_8_p_0(STATE_VARIABLE_ModuleInfo_42_42, ProcArgInfo_1, InstMap1_35, BranchNo_5, Conjuncts_36, STATE_VARIABLE_Vars_0_7, &STATE_VARIABLE_Vars_43_43);
      NextBranch_37 = (MR_Integer) ((MR_Unsigned) BranchNo_5 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_BranchNo_5 = NextBranch_37;
      next_value_of_HeadVar__6_6 = Cases_28;
      next_value_of_STATE_VARIABLE_Vars_0_7 = STATE_VARIABLE_Vars_43_43;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_9 = STATE_VARIABLE_ModuleInfo_42_42;
      BranchNo_5 = next_value_of_BranchNo_5;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_Vars_0_7 = next_value_of_STATE_VARIABLE_Vars_0_7;
      STATE_VARIABLE_ModuleInfo_0_9 = next_value_of_STATE_VARIABLE_ModuleInfo_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_51_93_95_48_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ProcArgInfo_2,
  MR_Word InstMap_4,
  MR_Integer BranchNo_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Vars_0_7,
  MR_Word * STATE_VARIABLE_Vars_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Vars_8 = STATE_VARIABLE_Vars_0_7;
    else
    {
      MR_Word Goal_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Goals_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word GoalInfo_41;
      MR_Word InstMapDelta_42;
      MR_Word InstMap1_43;
      MR_Word STATE_VARIABLE_Vars_49_49;
      MR_Word PredId_25;
      MR_Integer ProcId_26;
      MR_Word Args_27;
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_22, (MR_Integer) 0))));
      MR_Word next_value_of_InstMap_4;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_Vars_0_7;

      succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_Integer) 2);
      if (succeeded)
      {
        PredId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_46, (MR_Integer) 0))));
        ProcId_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_46, (MR_Integer) 1))));
        Args_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_46, (MR_Integer) 2))));
        {
          MR_Word ThisProcArgInfo_32;
          MR_Word Var_47;
          MR_Box conv0_ThisProcArgInfo_32;

          {
            Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (PredId_25));
            MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (ProcId_26));
          }
          succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[2]), ProcArgInfo_2, ((MR_Box) (Var_47)), &conv0_ThisProcArgInfo_32);
          if (succeeded)
          {
            ThisProcArgInfo_32 = ((MR_Word) (conv0_ThisProcArgInfo_32));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word BranchInfo_33;
            MR_Word ExtraVars1_36;
            MR_Word STATE_VARIABLE_Vars_48_48;

            transform_hlds__pd_util__convert_branch_info_3_p_0(ThisProcArgInfo_32, Args_27, &BranchInfo_33);
            STATE_VARIABLE_Vars_48_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BranchInfo_33, (MR_Integer) 0))));
            mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[1]), STATE_VARIABLE_Vars_48_48, &ExtraVars1_36);
            transform_hlds__pd_util__combine_vars_4_p_0(BranchNo_5, ExtraVars1_36, STATE_VARIABLE_Vars_48_48, &STATE_VARIABLE_Vars_49_49);
          }
          else
            STATE_VARIABLE_Vars_49_49 = STATE_VARIABLE_Vars_0_7;
        }
      }
      else
      {
        MR_Word STATE_VARIABLE_Vars_53_53;
        MR_Word LeftVars0_37;
        MR_Word STATE_VARIABLE_Vars_50_50;
        MR_Word Var_52;
        MR_Word Var_38;

        parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &LeftVars0_37);
        mercury__map__init_1_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[1]), &STATE_VARIABLE_Vars_50_50);
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Goal_22));
          MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        succeeded = transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_50_93_95_48_9_p_0(ModuleInfo_1, InstMap_4, (MR_Integer) 0, Var_52, LeftVars0_37, &Var_38, STATE_VARIABLE_Vars_50_50, &STATE_VARIABLE_Vars_53_53);
        if (succeeded)
        {
          MR_Word ExtraVars2_39;

          mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[1]), STATE_VARIABLE_Vars_53_53, &ExtraVars2_39);
          transform_hlds__pd_util__combine_vars_4_p_0(BranchNo_5, ExtraVars2_39, STATE_VARIABLE_Vars_53_53, &STATE_VARIABLE_Vars_49_49);
        }
        else
          STATE_VARIABLE_Vars_49_49 = STATE_VARIABLE_Vars_0_7;
      }
      GoalInfo_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_22, (MR_Integer) 1))));
      InstMapDelta_42 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_41);
      hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_42, InstMap_4, &InstMap1_43);
      // direct tailcall eliminated
      ;
      next_value_of_InstMap_4 = InstMap1_43;
      next_value_of_HeadVar__6_6 = Goals_23;
      next_value_of_STATE_VARIABLE_Vars_0_7 = STATE_VARIABLE_Vars_49_49;
      InstMap_4 = next_value_of_InstMap_4;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_Vars_0_7 = next_value_of_STATE_VARIABLE_Vars_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_50_93_95_48_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_39;

  transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__550__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_39);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_39));
}

static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_50_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_42;

  transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__558__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_42);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_42));
}

static MR_bool MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_50_93_95_48_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word InstMap0_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_LeftVars_0_6,
  MR_Word * STATE_VARIABLE_LeftVars_7,
  MR_Word STATE_VARIABLE_Vars_0_8,
  MR_Word * STATE_VARIABLE_Vars_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__4_4 == (MR_Integer) 1);
      if (succeeded)
      {
        *STATE_VARIABLE_Vars_9 = STATE_VARIABLE_Vars_0_8;
        *STATE_VARIABLE_LeftVars_7 = STATE_VARIABLE_LeftVars_0_6;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Goal_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Goals_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word GoalInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_23, (MR_Integer) 1))));
      MR_Word InstMapDelta_29;
      MR_Word InstMap_30;
      MR_Word STATE_VARIABLE_Vars_40_40;
      MR_Word STATE_VARIABLE_LeftVars_41_41;
      MR_Word STATE_VARIABLE_FoundBranch_42_42;
      MR_Word InstMapDeltas_31;
      MR_Word GoalExpr_44;
      MR_Word next_value_of_InstMap0_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_LeftVars_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Vars_0_8;

      InstMapDelta_29 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_28);
      hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_29, InstMap0_3, &InstMap_30);
      GoalExpr_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_23, (MR_Integer) 0))));
      switch (MR_tag((MR_Word) GoalExpr_44)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_44, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 3:
              {
                MR_Word Disjuncts_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_44, (MR_Integer) 1))));

                mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), (MR_Word) (&transform_hlds__pd_util_scalar_common_2[5]), Disjuncts_63, &InstMapDeltas_31);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_44, (MR_Integer) 3))));

                mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), (MR_Word) (&transform_hlds__pd_util_scalar_common_2[6]), Cases_61, &InstMapDeltas_31);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_44, (MR_Integer) 2))));
                MR_Word Then_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_44, (MR_Integer) 3))));
                MR_Word Else_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_44, (MR_Integer) 4))));
                MR_Word CondInfo_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond_47, (MR_Integer) 1))));
                MR_Word ThenInfo_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Then_48, (MR_Integer) 1))));
                MR_Word ElseInfo_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Else_49, (MR_Integer) 1))));
                MR_Word CondDelta_56;
                MR_Word ThenDelta_57;
                MR_Word ElseDelta_58;
                MR_Word Var_65;
                MR_Word Var_66;

                CondDelta_56 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondInfo_51);
                ThenDelta_57 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ThenInfo_53);
                ElseDelta_58 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ElseInfo_55);
                {
                  Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (ElseDelta_58));
                  MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (ThenDelta_57));
                  MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_66));
                }
                {
                  InstMapDeltas_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), InstMapDeltas_31, 0) = ((MR_Box) (CondDelta_56));
                  MR_hl_field(MR_mktag(1), InstMapDeltas_31, 1) = ((MR_Box) (Var_65));
                }
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
      if (succeeded)
      {
        MR_Integer Var_39;
        MR_Word Var_72;
        MR_Word Var_76;

        succeeded = (HeadVar__4_4 == (MR_Integer) 0);
        if (succeeded)
        {
          Var_39 = (MR_Integer) 1;
          succeeded = transform_hlds__pd_util__get_branch_vars_7_p_0(ModuleInfo_1, InstMap_30, Goal_23, Var_39, InstMapDeltas_31, STATE_VARIABLE_Vars_0_8, &STATE_VARIABLE_Vars_40_40);
          if (succeeded)
          {
            Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_23, (MR_Integer) 0))));
            succeeded = ((((MR_tag((MR_Word) Var_76)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_76, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
              Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_76, (MR_Integer) 1))));
              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_72, STATE_VARIABLE_LeftVars_0_6, &STATE_VARIABLE_LeftVars_41_41);
            }
            else
              STATE_VARIABLE_LeftVars_41_41 = STATE_VARIABLE_LeftVars_0_6;
            STATE_VARIABLE_FoundBranch_42_42 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        MR_Word GoalExpr_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_23, (MR_Integer) 0))));
        MR_Word Var_43;

        Var_43 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(GoalExpr_32);
        succeeded = (Var_43 == (MR_Integer) 1);
        if (succeeded)
        {
          STATE_VARIABLE_Vars_40_40 = STATE_VARIABLE_Vars_0_8;
          STATE_VARIABLE_LeftVars_41_41 = STATE_VARIABLE_LeftVars_0_6;
          STATE_VARIABLE_FoundBranch_42_42 = HeadVar__4_4;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_InstMap0_3 = InstMap_30;
        next_value_of_HeadVar__4_4 = STATE_VARIABLE_FoundBranch_42_42;
        next_value_of_HeadVar__5_5 = Goals_24;
        next_value_of_STATE_VARIABLE_LeftVars_0_6 = STATE_VARIABLE_LeftVars_41_41;
        next_value_of_STATE_VARIABLE_Vars_0_8 = STATE_VARIABLE_Vars_40_40;
        InstMap0_3 = next_value_of_InstMap0_3;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        STATE_VARIABLE_LeftVars_0_6 = next_value_of_STATE_VARIABLE_LeftVars_0_6;
        STATE_VARIABLE_Vars_0_8 = next_value_of_STATE_VARIABLE_Vars_0_8;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_util__get_branch_vars_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_44;

  transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__589__1_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_44);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_44));
}

static MR_bool MR_CALL 
transform_hlds__pd_util__get_branch_vars_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word InstMap_2,
  MR_Word Goal_3,
  MR_Integer BranchNo_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_ExtraVars_0_6,
  MR_Word * STATE_VARIABLE_ExtraVars_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ExtraVars_7 = STATE_VARIABLE_ExtraVars_0_6;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word InstMapDelta_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word InstMapDeltas_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word AddExtraInfoVars_22;
      MR_Word ChangedVars_32;
      MR_Word ChangedVarsList_33;
      MR_Word STATE_VARIABLE_ExtraVars_49_49;
      MR_Word STATE_VARIABLE_ExtraVars_51_51;
      MR_Integer Var_52;
      MR_Box conv1_STATE_VARIABLE_ExtraVars_49_49;
      MR_Word SwitchVar_34;
      MR_Word Var_50;
      MR_Integer next_value_of_BranchNo_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_ExtraVars_0_6;

      {
        AddExtraInfoVars_22 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AddExtraInfoVars_22, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), AddExtraInfoVars_22, 1) = ((MR_Box) (transform_hlds__pd_util__get_branch_vars_7_p_0_1));
        MR_hl_field(MR_mktag(0), AddExtraInfoVars_22, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), AddExtraInfoVars_22, 3) = ((MR_Box) (ModuleInfo_1));
        MR_hl_field(MR_mktag(0), AddExtraInfoVars_22, 4) = ((MR_Box) (InstMap_2));
        MR_hl_field(MR_mktag(0), AddExtraInfoVars_22, 5) = ((MR_Box) (BranchNo_4));
        MR_hl_field(MR_mktag(0), AddExtraInfoVars_22, 6) = ((MR_Box) (InstMapDelta_19));
      }
      hlds__instmap__instmap_delta_changed_vars_2_p_0(InstMapDelta_19, &ChangedVars_32);
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ChangedVars_32, &ChangedVarsList_33);
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_util_scalar_common_2[1]), AddExtraInfoVars_22, ChangedVarsList_33, ((MR_Box) (STATE_VARIABLE_ExtraVars_0_6)), &conv1_STATE_VARIABLE_ExtraVars_49_49);
      STATE_VARIABLE_ExtraVars_49_49 = ((MR_Word) (conv1_STATE_VARIABLE_ExtraVars_49_49));
      Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_50)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if (succeeded)
      {
        SwitchVar_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 1))));
        {
          MR_Word SwitchVarSet_39;
          MR_Word SwitchVarSet0_38;
          MR_Box conv2_SwitchVarSet0_38;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[1]), STATE_VARIABLE_ExtraVars_49_49, ((MR_Box) (SwitchVar_34)), &conv2_SwitchVarSet0_38);
          if (succeeded)
          {
            SwitchVarSet0_38 = ((MR_Word) (conv2_SwitchVarSet0_38));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (BranchNo_4)), SwitchVarSet0_38, &SwitchVarSet_39);
          else
            SwitchVarSet_39 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (BranchNo_4)));
          mercury__map__set_4_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[1]), ((MR_Box) (SwitchVar_34)), ((MR_Box) (SwitchVarSet_39)), STATE_VARIABLE_ExtraVars_49_49, &STATE_VARIABLE_ExtraVars_51_51);
        }
      }
      else
        STATE_VARIABLE_ExtraVars_51_51 = STATE_VARIABLE_ExtraVars_49_49;
      Var_52 = (MR_Integer) ((MR_Unsigned) BranchNo_4 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_BranchNo_4 = Var_52;
      next_value_of_HeadVar__5_5 = InstMapDeltas_20;
      next_value_of_STATE_VARIABLE_ExtraVars_0_6 = STATE_VARIABLE_ExtraVars_51_51;
      BranchNo_4 = next_value_of_BranchNo_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_ExtraVars_0_6 = next_value_of_STATE_VARIABLE_ExtraVars_0_6;
      continue;
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_util__combine_vars_4_p_0(
  MR_Integer BranchNo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Vars_0_3,
  MR_Word * STATE_VARIABLE_Vars_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Vars_4 = STATE_VARIABLE_Vars_0_3;
    else
    {
      MR_Word ExtraVar_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ExtraVars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Vars_17_17;
      MR_Word Branches0_13;
      MR_Box conv0_Branches0_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Vars_0_3;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[1]), STATE_VARIABLE_Vars_0_3, ((MR_Box) (ExtraVar_10)), &conv0_Branches0_13);
      if (succeeded)
      {
        Branches0_13 = ((MR_Word) (conv0_Branches0_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Branches_14;

        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (BranchNo_1)), Branches0_13, &Branches_14);
        mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[1]), ((MR_Box) (ExtraVar_10)), ((MR_Box) (Branches_14)), STATE_VARIABLE_Vars_0_3, &STATE_VARIABLE_Vars_17_17);
      }
      else
      {
        MR_Word Branches_20;

        Branches_20 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (BranchNo_1)));
        mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[1]), ((MR_Box) (ExtraVar_10)), ((MR_Box) (Branches_20)), STATE_VARIABLE_Vars_0_3, &STATE_VARIABLE_Vars_17_17);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ExtraVars_11;
      next_value_of_STATE_VARIABLE_Vars_0_3 = STATE_VARIABLE_Vars_17_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Vars_0_3 = next_value_of_STATE_VARIABLE_Vars_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_28;

  transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__793__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), &conv1_HeadVar__3_28);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_28));
}

static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_25;

  transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__789__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), &conv0_HeadVar__3_25);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_25));
}

void MR_CALL 
transform_hlds__pd_util__convert_branch_info_3_p_0(
  MR_Word ArgInfo_4,
  MR_Word Args_5,
  MR_Word * VarInfo_6)
{
  MR_Word ArgMap_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgInfo_4, (MR_Integer) 0))));
  MR_Word LeftArgs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgInfo_4, (MR_Integer) 1))));
  MR_Word OpaqueArgs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgInfo_4, (MR_Integer) 2))));
  MR_Word ArgList_10;
  MR_Word BranchVarMap0_11;
  MR_Word BranchVarMap_12;
  MR_Word LeftArgNos_13;
  MR_Word LeftVars0_14;
  MR_Word LeftVars_15;
  MR_Word OpaqueArgNos_16;
  MR_Word OpaqueVars0_17;
  MR_Word OpaqueVars_18;
  MR_Word Var_19;
  MR_Word Var_20;

  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[1]), ArgMap_7, &ArgList_10);
  mercury__map__init_1_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[1]), &BranchVarMap0_11);
  transform_hlds__pd_util__convert_branch_info_2_4_p_0(ArgList_10, Args_5, BranchVarMap0_11, &BranchVarMap_12);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LeftArgs_8, &LeftArgNos_13);
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_4[1]));
    MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (transform_hlds__pd_util__convert_branch_info_3_p_0_1));
    MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Args_5));
  }
  mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), Var_19, LeftArgNos_13, &LeftVars0_14);
  mercury__set__list_to_set_2_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), LeftVars0_14, &LeftVars_15);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), OpaqueArgs_9, &OpaqueArgNos_16);
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_4[1]));
    MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (transform_hlds__pd_util__convert_branch_info_3_p_0_2));
    MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Args_5));
  }
  mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), Var_20, OpaqueArgNos_16, &OpaqueVars0_17);
  mercury__set__list_to_set_2_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), OpaqueVars0_17, &OpaqueVars_18);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *VarInfo_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (BranchVarMap_12));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LeftVars_15));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (OpaqueVars_18));
  }
}

static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArgVars_2,
  MR_Word STATE_VARIABLE_VarInfo_0_3,
  MR_Word * STATE_VARIABLE_VarInfo_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VarInfo_4 = STATE_VARIABLE_VarInfo_0_3;
    else
    {
      MR_Integer ArgNo_9;
      MR_Word Branches_10;
      MR_Word ArgInfos_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgVar_14;
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_VarInfo_18_18;
      MR_Box conv0_ArgVar_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VarInfo_0_3;

      ArgNo_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
      Branches_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1))));
      mercury__list__det_index1_3_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), ArgVars_2, ArgNo_9, &conv0_ArgVar_14);
      ArgVar_14 = ((MR_Word) (conv0_ArgVar_14));
      mercury__map__set_4_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[1]), ((MR_Box) (ArgVar_14)), ((MR_Box) (Branches_10)), STATE_VARIABLE_VarInfo_0_3, &STATE_VARIABLE_VarInfo_18_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ArgInfos_11;
      next_value_of_STATE_VARIABLE_VarInfo_0_3 = STATE_VARIABLE_VarInfo_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarInfo_0_3 = next_value_of_STATE_VARIABLE_VarInfo_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_util__get_extra_info_headvars_8_p_0(
  MR_Word VarInfo_1,
  MR_Word LeftVars_2,
  MR_Integer ArgNo_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__8_8 = HeadVar__7_7;
      *HeadVar__6_6 = HeadVar__5_5;
    }
    else
    {
      MR_Word HeadVar_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word HeadVars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ThisProcArgs_30_30;
      MR_Word STATE_VARIABLE_ThisProcLeftVars_31_31;
      MR_Integer Var_32;
      MR_Word ThisVarInfo_25;
      MR_Box conv0_ThisVarInfo_25;
      MR_Integer next_value_of_ArgNo_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_HeadVar__7_7;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_util_scalar_common_1[1]), VarInfo_1, ((MR_Box) (HeadVar_21)), &conv0_ThisVarInfo_25);
      if (succeeded)
      {
        ThisVarInfo_25 = ((MR_Word) (conv0_ThisVarInfo_25));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&transform_hlds__pd_util_scalar_common_1[1]), ArgNo_3, ((MR_Box) (ThisVarInfo_25)), HeadVar__5_5, &STATE_VARIABLE_ThisProcArgs_30_30);
      else
        STATE_VARIABLE_ThisProcArgs_30_30 = HeadVar__5_5;
      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LeftVars_2, HeadVar_21);
      if (succeeded)
        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (ArgNo_3)), HeadVar__7_7, &STATE_VARIABLE_ThisProcLeftVars_31_31);
      else
        STATE_VARIABLE_ThisProcLeftVars_31_31 = HeadVar__7_7;
      Var_32 = (MR_Integer) ((MR_Unsigned) ArgNo_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_ArgNo_3 = Var_32;
      next_value_of_HeadVar__4_4 = HeadVars_22;
      next_value_of_HeadVar__5_5 = STATE_VARIABLE_ThisProcArgs_30_30;
      next_value_of_HeadVar__7_7 = STATE_VARIABLE_ThisProcLeftVars_31_31;
      ArgNo_3 = next_value_of_ArgNo_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_util__get_opaque_args_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ExtraInfoArgs_2,
  MR_Integer ArgNo_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_OpaqueArgs_0_5,
  MR_Word * STATE_VARIABLE_OpaqueArgs_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_OpaqueArgs_6 = STATE_VARIABLE_OpaqueArgs_0_5;
    else
    {
      MR_Word ArgMode_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ArgModes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Integer NextArg_19;
      MR_Word STATE_VARIABLE_OpaqueArgs_22_22;
      MR_Word TypeCtorInfo_24_24;
      MR_Word TypeInfo_25_25;
      MR_Integer next_value_of_ArgNo_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_OpaqueArgs_0_5;

      succeeded = check_hlds__mode_test__mode_is_output_2_p_0(ModuleInfo_1, ArgMode_16);
      if (succeeded)
      {
        TypeCtorInfo_24_24 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
        TypeInfo_25_25 = (MR_Word) (&transform_hlds__pd_util_scalar_common_1[1]);
        succeeded = mercury__map__contains_2_p_0(TypeCtorInfo_24_24, TypeInfo_25_25, ExtraInfoArgs_2, ((MR_Box) (ArgNo_3)));
        succeeded = !(succeeded);
      }
      if (succeeded)
        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (ArgNo_3)), STATE_VARIABLE_OpaqueArgs_0_5, &STATE_VARIABLE_OpaqueArgs_22_22);
      else
        STATE_VARIABLE_OpaqueArgs_22_22 = STATE_VARIABLE_OpaqueArgs_0_5;
      NextArg_19 = (MR_Integer) ((MR_Unsigned) ArgNo_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_ArgNo_3 = NextArg_19;
      next_value_of_HeadVar__4_4 = ArgModes_17;
      next_value_of_STATE_VARIABLE_OpaqueArgs_0_5 = STATE_VARIABLE_OpaqueArgs_22_22;
      ArgNo_3 = next_value_of_ArgNo_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_OpaqueArgs_0_5 = next_value_of_STATE_VARIABLE_OpaqueArgs_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
transform_hlds__pd_util__unique_modecheck_goal_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word * Errors_8,
  MR_Word STATE_VARIABLE_PDInfo_0_11,
  MR_Word * STATE_VARIABLE_PDInfo_12)
{
  MR_Word LiveVars_10;
  MR_Word GoalInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 1))));
  MR_Word ModuleInfo_15;
  MR_Word InstMapDelta_16;
  MR_Word InstMap_17;
  MR_Word NonLocals_18;
  MR_Word NonLocalsList_19;
  MR_Word STATE_VARIABLE_Vars_14_20;

  transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_0_11, &ModuleInfo_15);
  InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_14);
  transform_hlds__pd_info__pd_info_get_instmap_2_p_0(STATE_VARIABLE_PDInfo_0_11, &InstMap_17);
  NonLocals_18 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_14);
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_18, &NonLocalsList_19);
  parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_Vars_14_20);
  transform_hlds__pd_util__get_goal_live_vars_2_6_p_0(ModuleInfo_15, InstMap_17, InstMapDelta_16, NonLocalsList_19, STATE_VARIABLE_Vars_14_20, &LiveVars_10);
  transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0(LiveVars_10, Goal0_6, Goal_7, Errors_8, STATE_VARIABLE_PDInfo_0_11, STATE_VARIABLE_PDInfo_12);
}

static void MR_CALL 
transform_hlds__pd_util__get_goal_live_vars_2_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word InstMap_2,
  MR_Word InstMapDelta_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Vars_0_5,
  MR_Word * STATE_VARIABLE_Vars_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Vars_6 = STATE_VARIABLE_Vars_0_5;
    else
    {
      MR_Word NonLocal_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word NonLocals_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word FinalInst_20;
      MR_Word STATE_VARIABLE_Vars_23_23;
      MR_Word FinalInst0_19;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Vars_0_5;

      succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(InstMapDelta_3, NonLocal_16, &FinalInst0_19);
      if (succeeded)
        FinalInst_20 = FinalInst0_19;
      else
        hlds__instmap__instmap_lookup_var_3_p_0(InstMap_2, NonLocal_16, &FinalInst_20);
      succeeded = check_hlds__inst_test__inst_is_clobbered_2_p_0(ModuleInfo_1, FinalInst_20);
      if (succeeded)
        STATE_VARIABLE_Vars_23_23 = STATE_VARIABLE_Vars_0_5;
      else
        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocal_16, STATE_VARIABLE_Vars_0_5, &STATE_VARIABLE_Vars_23_23);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = NonLocals_17;
      next_value_of_STATE_VARIABLE_Vars_0_5 = STATE_VARIABLE_Vars_23_23;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_Vars_0_5 = next_value_of_STATE_VARIABLE_Vars_0_5;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = check_hlds__mode_errors__mode_error_info_to_spec_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

void MR_CALL 
transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0(
  MR_Word LiveVars_7,
  MR_Word Goal0_8,
  MR_Word * Goal_9,
  MR_Word * Errors_10,
  MR_Word STATE_VARIABLE_PDInfo_0_36,
  MR_Word * STATE_VARIABLE_PDInfo_37)
{
  MR_Word PredProcId_12;
  MR_Word PredId_13;
  MR_Integer ProcId_14;
  MR_Word ModuleInfo0_15;
  MR_Word InstMap0_16;
  MR_Word Context_17;
  MR_Word PredInfo0_18;
  MR_Word ProcInfo0_19;
  MR_Word HeadInstVars_20;
  MR_Word ModuleInfo1_21;
  MR_Word ModeInfo0_23;
  MR_Word ModeInfo_24;
  MR_Word ModuleInfo_25;
  MR_Word Globals_26;
  MR_Word Debug_27;
  MR_Word PredInfo_32;
  MR_Word ProcInfo1_33;
  MR_Word VarTable_34;
  MR_Word ProcInfo_35;
  MR_Word STATE_VARIABLE_PDInfo_44_44;
  MR_Word STATE_VARIABLE_PDInfo_45_45;

  transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_PDInfo_0_36, &PredProcId_12);
  PredId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_12, (MR_Integer) 0))));
  ProcId_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_12, (MR_Integer) 1))));
  transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_0_36, &ModuleInfo0_15);
  transform_hlds__pd_info__pd_info_get_instmap_2_p_0(STATE_VARIABLE_PDInfo_0_36, &InstMap0_16);
  Context_17 = mercury__term_context__dummy_context_0_f_0();
  transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(STATE_VARIABLE_PDInfo_0_36, &PredInfo0_18);
  transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(STATE_VARIABLE_PDInfo_0_36, &ProcInfo0_19);
  transform_hlds__pd_info__pd_info_get_head_inst_vars_2_p_0(STATE_VARIABLE_PDInfo_0_36, &HeadInstVars_20);
  hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_13, ProcId_14, PredInfo0_18, ProcInfo0_19, ModuleInfo0_15, &ModuleInfo1_21);
  check_hlds__mode_info__mode_info_init_10_p_0(ModuleInfo1_21, PredId_13, ProcId_14, Context_17, LiveVars_7, HeadInstVars_20, InstMap0_16, (MR_Integer) 1, (MR_Integer) 1, &ModeInfo0_23);
  check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Goal0_8, Goal_9, ModeInfo0_23, &ModeInfo_24);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(ModeInfo_24, &ModuleInfo_25);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_25, &Globals_26);
  libs__globals__lookup_bool_option_3_p_0(Globals_26, (MR_Integer) 102, &Debug_27);
  check_hlds__mode_info__mode_info_get_errors_2_p_0(ModeInfo_24, Errors_10);
  switch (Debug_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ErrorSpecs_29;
        MR_Word ModuleName_30;
        MR_Word DebugStream_31;
        MR_Word Var_41;

        {
          Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (ModeInfo_24));
        }
        ErrorSpecs_29 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_41, *Errors_10);
        hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_25, &ModuleName_30);
        libs__globals__get_debug_output_stream_5_p_0(Globals_26, ModuleName_30, &DebugStream_31);
        parse_tree__error_util__write_error_specs_5_p_0(DebugStream_31, Globals_26, ErrorSpecs_29);
      }
      break;
  }
  transform_hlds__pd_info__pd_info_set_module_info_3_p_0(ModuleInfo_25, STATE_VARIABLE_PDInfo_0_36, &STATE_VARIABLE_PDInfo_44_44);
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_25, PredId_13, ProcId_14, &PredInfo_32, &ProcInfo1_33);
  transform_hlds__pd_info__pd_info_set_pred_info_3_p_0(PredInfo_32, STATE_VARIABLE_PDInfo_44_44, &STATE_VARIABLE_PDInfo_45_45);
  check_hlds__mode_info__mode_info_get_var_table_2_p_0(ModeInfo_24, &VarTable_34);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_34, ProcInfo1_33, &ProcInfo_35);
  transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(ProcInfo_35, STATE_VARIABLE_PDInfo_45_45, STATE_VARIABLE_PDInfo_37);
}

void MR_CALL 
transform_hlds__pd_util__propagate_constraints_4_p_0(
  MR_Word STATE_VARIABLE_Goal_0_26,
  MR_Word * STATE_VARIABLE_Goal_27,
  MR_Word STATE_VARIABLE_PDInfo_0_28,
  MR_Word * STATE_VARIABLE_PDInfo_29)
{
  MR_Word ModuleInfo0_7;
  MR_Word Globals_8;
  MR_Word OptTuple_9;
  MR_Word ConstraintProp_10;

  transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_0_28, &ModuleInfo0_7);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo0_7, &Globals_8);
  libs__globals__get_opt_tuple_2_p_0(Globals_8, &OptTuple_9);
  ConstraintProp_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_9, (MR_Integer) 0))) >> 22)) & (MR_Integer) 1);
  switch (ConstraintProp_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_Goal_27 = STATE_VARIABLE_Goal_0_26;
        *STATE_VARIABLE_PDInfo_29 = STATE_VARIABLE_PDInfo_0_28;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word ProcInfo0_13;
        MR_Word InstMap_14;
        MR_Word VarTable0_15;
        MR_Word CInfo0_16;
        MR_Word GoalInfo0_18;
        MR_Word NonLocals_19;
        MR_Word CInfo_20;
        MR_Word ModuleInfo_21;
        MR_Word VarTable_22;
        MR_Word Changed_23;
        MR_Word ProcInfo_24;
        MR_Word STATE_VARIABLE_Goal_36_36;
        MR_Word STATE_VARIABLE_PDInfo_37_37;
        MR_Word STATE_VARIABLE_PDInfo_38_38;

        transform_hlds__pd_debug__pd_debug_message_5_p_0(STATE_VARIABLE_PDInfo_0_28, (MR_String) "%% Propagating constraints\n", (MR_Word) ((MR_Unsigned) 0U));
        transform_hlds__pd_debug__pd_debug_output_goal_5_p_0(STATE_VARIABLE_PDInfo_0_28, (MR_String) "before constraints\n", STATE_VARIABLE_Goal_0_26);
        transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(STATE_VARIABLE_PDInfo_0_28, &ProcInfo0_13);
        transform_hlds__pd_info__pd_info_get_instmap_2_p_0(STATE_VARIABLE_PDInfo_0_28, &InstMap_14);
        hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_13, &VarTable0_15);
        transform_hlds__constraint__constraint_info_init_4_p_0(ModuleInfo0_7, VarTable0_15, InstMap_14, &CInfo0_16);
        GoalInfo0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_26, (MR_Integer) 1))));
        NonLocals_19 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_18);
        transform_hlds__constraint__propagate_constraints_in_goal_4_p_0(STATE_VARIABLE_Goal_0_26, &STATE_VARIABLE_Goal_36_36, CInfo0_16, &CInfo_20);
        transform_hlds__constraint__constraint_info_deconstruct_4_p_0(CInfo_20, &ModuleInfo_21, &VarTable_22, &Changed_23);
        transform_hlds__pd_info__pd_info_set_module_info_3_p_0(ModuleInfo_21, STATE_VARIABLE_PDInfo_0_28, &STATE_VARIABLE_PDInfo_37_37);
        hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_22, ProcInfo0_13, &ProcInfo_24);
        transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(ProcInfo_24, STATE_VARIABLE_PDInfo_37_37, &STATE_VARIABLE_PDInfo_38_38);
        switch (Changed_23) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_Goal_27 = STATE_VARIABLE_Goal_0_26;
              *STATE_VARIABLE_PDInfo_29 = STATE_VARIABLE_PDInfo_38_38;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SimplifyTasks_25;
              MR_Word STATE_VARIABLE_Goal_42_42;
              MR_Word STATE_VARIABLE_PDInfo_43_43;
              MR_Word STATE_VARIABLE_Goal_44_44;
              MR_Word STATE_VARIABLE_PDInfo_45_45;
              MR_Word STATE_VARIABLE_Goal_46_46;
              MR_Word STATE_VARIABLE_PDInfo_47_47;

              transform_hlds__pd_debug__pd_debug_output_goal_5_p_0(STATE_VARIABLE_PDInfo_38_38, (MR_String) "after constraints, before recompute\n", STATE_VARIABLE_Goal_36_36);
              transform_hlds__pd_util__pd_requantify_goal_5_p_0(NonLocals_19, STATE_VARIABLE_Goal_36_36, &STATE_VARIABLE_Goal_42_42, STATE_VARIABLE_PDInfo_38_38, &STATE_VARIABLE_PDInfo_43_43);
              transform_hlds__pd_util__pd_recompute_instmap_delta_4_p_0(STATE_VARIABLE_Goal_42_42, &STATE_VARIABLE_Goal_44_44, STATE_VARIABLE_PDInfo_43_43, &STATE_VARIABLE_PDInfo_45_45);
              transform_hlds__pd_util__rerun_det_analysis_4_p_0(STATE_VARIABLE_Goal_44_44, &STATE_VARIABLE_Goal_46_46, STATE_VARIABLE_PDInfo_45_45, &STATE_VARIABLE_PDInfo_47_47);
              check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0(Globals_8, (MR_Integer) 0, &SimplifyTasks_25);
              transform_hlds__pd_util__pd_simplify_goal_5_p_0(SimplifyTasks_25, STATE_VARIABLE_Goal_46_46, STATE_VARIABLE_Goal_27, STATE_VARIABLE_PDInfo_47_47, STATE_VARIABLE_PDInfo_29);
            }
            break;
        }
      }
      break;
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_util__rerun_det_analysis_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__pd_util__IntroducedFrom__pred__rerun_det_analysis__390__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__pd_util__rerun_det_analysis_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_PDInfo_0_29,
  MR_Word * STATE_VARIABLE_PDInfo_30)
{
  MR_bool succeeded;
  MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));
  MR_Word Detism_10;
  MR_Word SolnContext_11;
  MR_Word PredProcId_12;
  MR_Word PredInfo_13;
  MR_Word ProcInfo_14;
  MR_Word ModuleInfo0_15;
  MR_Word ModuleInfo1_16;
  MR_Word VarTable_17;
  MR_Word DetInfo0_18;
  MR_Word InstMap_19;
  MR_Word DetInfo_22;
  MR_Word ModuleInfo_23;
  MR_Word Specs_24;
  MR_Word Globals_25;
  MR_Word GlobalsToUse_27;
  MR_Word ContainsErrors_28;
  MR_Word Var_36;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word _OptionsToRestore_26;

  Detism_10 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_9);
  check_hlds__det_analysis__det_get_soln_context_2_p_0(Detism_10, &SolnContext_11);
  transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_PDInfo_0_29, &PredProcId_12);
  transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(STATE_VARIABLE_PDInfo_0_29, &PredInfo_13);
  transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(STATE_VARIABLE_PDInfo_0_29, &ProcInfo_14);
  transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_0_29, &ModuleInfo0_15);
  hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PredProcId_12, PredInfo_13, ProcInfo_14, ModuleInfo0_15, &ModuleInfo1_16);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_14, &VarTable_17);
  check_hlds__det_util__det_info_init_6_p_0(ModuleInfo1_16, PredProcId_12, VarTable_17, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), &DetInfo0_18);
  transform_hlds__pd_info__pd_info_get_instmap_2_p_0(STATE_VARIABLE_PDInfo_0_29, &InstMap_19);
  check_hlds__det_analysis__det_infer_goal_10_p_0(Goal0_5, Goal_6, InstMap_19, SolnContext_11, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Var_20, &Var_21, DetInfo0_18, &DetInfo_22);
  check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_22, &ModuleInfo_23);
  transform_hlds__pd_info__pd_info_set_module_info_3_p_0(ModuleInfo_23, STATE_VARIABLE_PDInfo_0_29, STATE_VARIABLE_PDInfo_30);
  check_hlds__det_util__det_info_get_error_specs_2_p_0(DetInfo_22, &Specs_24);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_23, &Globals_25);
  check_hlds__det_report__disable_det_warnings_3_p_0(&_OptionsToRestore_26, Globals_25, &GlobalsToUse_27);
  ContainsErrors_28 = parse_tree__error_util__contains_errors_2_f_0(GlobalsToUse_27, Specs_24);
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_3[1]));
    MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (transform_hlds__pd_util__rerun_det_analysis_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (ContainsErrors_28));
    MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_36, (MR_String) "predicate \140transform_hlds.pd_util.rerun_det_analysis\'/4", (MR_String) "determinism errors");
}

void MR_CALL 
transform_hlds__pd_util__pd_recompute_instmap_delta_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_PDInfo_0_14,
  MR_Word * STATE_VARIABLE_PDInfo_15)
{
  MR_Word ModuleInfo0_8;
  MR_Word InstMap_9;
  MR_Word ProcInfo_10;
  MR_Word VarTable_11;
  MR_Word InstVarSet_12;
  MR_Word ModuleInfo_13;

  transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_0_14, &ModuleInfo0_8);
  transform_hlds__pd_info__pd_info_get_instmap_2_p_0(STATE_VARIABLE_PDInfo_0_14, &InstMap_9);
  transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(STATE_VARIABLE_PDInfo_0_14, &ProcInfo_10);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_10, &VarTable_11);
  hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_10, &InstVarSet_12);
  check_hlds__recompute_instmap_deltas__recompute_instmap_delta_8_p_0((MR_Integer) 0, VarTable_11, InstVarSet_12, InstMap_9, Goal0_5, Goal_6, ModuleInfo0_8, &ModuleInfo_13);
  transform_hlds__pd_info__pd_info_set_module_info_3_p_0(ModuleInfo_13, STATE_VARIABLE_PDInfo_0_14, STATE_VARIABLE_PDInfo_15);
}

void MR_CALL 
transform_hlds__pd_util__pd_requantify_goal_5_p_0(
  MR_Word NonLocals_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_PDInfo_0_16,
  MR_Word * STATE_VARIABLE_PDInfo_17)
{
  MR_Word VarTable0_11;
  MR_Word RttiVarMaps0_12;
  MR_Word VarTable_14;
  MR_Word RttiVarMaps_15;
  MR_Word STATE_VARIABLE_ProcInfo_18_18;
  MR_Word STATE_VARIABLE_ProcInfo_20_20;
  MR_Word STATE_VARIABLE_ProcInfo_21_21;
  MR_Word Var_13;

  transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(STATE_VARIABLE_PDInfo_0_16, &STATE_VARIABLE_ProcInfo_18_18);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_18_18, &VarTable0_11);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_18_18, &RttiVarMaps0_12);
  hlds__quantification__implicitly_quantify_goal_general_9_p_0((MR_Integer) 1, NonLocals_6, &Var_13, Goal0_7, Goal_8, VarTable0_11, &VarTable_14, RttiVarMaps0_12, &RttiVarMaps_15);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_14, STATE_VARIABLE_ProcInfo_18_18, &STATE_VARIABLE_ProcInfo_20_20);
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_15, STATE_VARIABLE_ProcInfo_20_20, &STATE_VARIABLE_ProcInfo_21_21);
  transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(STATE_VARIABLE_ProcInfo_21_21, STATE_VARIABLE_PDInfo_0_16, STATE_VARIABLE_PDInfo_17);
}

void MR_CALL 
transform_hlds__pd_util__pd_simplify_goal_5_p_0(
  MR_Word SimplifyTasks_6,
  MR_Word STATE_VARIABLE_Goal_0_17,
  MR_Word * STATE_VARIABLE_Goal_18,
  MR_Word STATE_VARIABLE_PDInfo_0_19,
  MR_Word * STATE_VARIABLE_PDInfo_20)
{
  MR_Word ModuleInfo0_9;
  MR_Word PredId_10;
  MR_Integer ProcId_11;
  MR_Word ProcInfo0_12;
  MR_Word InstMap0_13;
  MR_Word ModuleInfo_14;
  MR_Word ProcInfo_15;
  MR_Integer CostDelta_16;
  MR_Word Var_21;
  MR_Word STATE_VARIABLE_PDInfo_23_23;
  MR_Word STATE_VARIABLE_PDInfo_24_24;

  transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_0_19, &ModuleInfo0_9);
  transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_PDInfo_0_19, &Var_21);
  PredId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
  ProcId_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1))));
  transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(STATE_VARIABLE_PDInfo_0_19, &ProcInfo0_12);
  transform_hlds__pd_info__pd_info_get_instmap_2_p_0(STATE_VARIABLE_PDInfo_0_19, &InstMap0_13);
  check_hlds__simplify__simplify_proc__simplify_goal_update_vars_in_proc_11_p_0(SimplifyTasks_6, ModuleInfo0_9, &ModuleInfo_14, PredId_10, ProcId_11, ProcInfo0_12, &ProcInfo_15, InstMap0_13, STATE_VARIABLE_Goal_0_17, STATE_VARIABLE_Goal_18, &CostDelta_16);
  transform_hlds__pd_info__pd_info_set_module_info_3_p_0(ModuleInfo_14, STATE_VARIABLE_PDInfo_0_19, &STATE_VARIABLE_PDInfo_23_23);
  transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(ProcInfo_15, STATE_VARIABLE_PDInfo_23_23, &STATE_VARIABLE_PDInfo_24_24);
  transform_hlds__pd_info__pd_info_incr_cost_delta_3_p_0(CostDelta_16, STATE_VARIABLE_PDInfo_24_24, STATE_VARIABLE_PDInfo_20);
}

static MR_bool MR_CALL 
transform_hlds__pd_util__goal_get_calls_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_17;

  succeeded = transform_hlds__pd_util__IntroducedFrom__pred__goal_get_calls__197__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_17);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_17));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__pd_util__goal_get_calls_2_p_0(
  MR_Word Goal0_3,
  MR_Word * CalledPreds_4)
{
  MR_bool succeeded;
  MR_Word Conjuncts_5;

  hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal0_3, &Conjuncts_5);
  mercury__list__filter_map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__pd_util_scalar_common_2[4]), Conjuncts_5, CalledPreds_4);
}

static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____expansions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__pd_util____Unify____expansions_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__pd_util____Compare____expansions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__pd_util____Compare____expansions_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____pd_var_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__pd_util____Unify____pd_var_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__pd_util____Compare____pd_var_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__pd_util____Compare____pd_var_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__pd_util__init(void)
{
}

void mercury__transform_hlds__pd_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__pd_util__transform_hlds__pd_util__type_ctor_info_expansions_0);
	MR_register_type_ctor_info(&transform_hlds__pd_util__transform_hlds__pd_util__type_ctor_info_pd_var_info_0);
}

void mercury__transform_hlds__pd_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__pd_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.pd_util.
