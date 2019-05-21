/*
** Automatically generated from `closure_analysis.m'
** by the Mercury compiler,
** version rotd-2018-04-07
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


// :- module transform_hlds.closure_analysis.
// :- implementation.

/*
INIT mercury__transform_hlds__closure_analysis__init
ENDINIT
*/

#include "transform_hlds.closure_analysis.mih"


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
#include "check_hlds.proc_requests.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
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
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__closure_analysis__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__closure_analysis__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_case_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_DuFunctorDesc transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_0;

static const MR_PseudoTypeInfo transform_hlds__closure_analysis__transform_hlds__closure_analysis__field_types_closure_values_0_1[1];

static const MR_DuFunctorDesc transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_1;

static const MR_PseudoTypeInfo transform_hlds__closure_analysis__transform_hlds__closure_analysis__field_types_closure_values_0_2[1];

static const MR_DuFunctorDesc transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_2;

static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_1[1];

static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_2[1];

static const MR_DuPtagLayout transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_ptag_ordered_closure_values_0[3];

static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_name_ordered_closure_values_0[3];

static const MR_Integer transform_hlds__closure_analysis__transform_hlds__closure_analysis__functor_number_map_closure_values_0[3];

static void MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__504__1_3_p_0(
  MR_Word LambdaHeadVar__1_20);

static MR_Word MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__func__dump_closure_info_expr__471__1_1_f_0(
  MR_Word LambdaHeadVar__1_59);

static MR_Word MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__func__closure_analyse_goal__278__1_4_f_0(
  MR_Word VarTypes_7,
  MR_Word ModuleInfo_8,
  MR_Word STATE_VARIABLE_ClosureInfo_0_131,
  MR_Word LambdaHeadVar__1_158);

static void MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__216__1_4_p_0(
  MR_Word STATE_VARIABLE_ClosureInfo_0_131,
  MR_Word LambdaHeadVar__1_176,
  MR_Word LambdaHeadVar__2_177,
  MR_Word * LambdaHeadVar__3_178);

static void MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__256__1_4_p_0(
  MR_Word STATE_VARIABLE_ClosureInfo_0_131,
  MR_Word LambdaHeadVar__1_165,
  MR_Word LambdaHeadVar__2_166,
  MR_Word * LambdaHeadVar__3_167);

static MR_Word MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__func__closure_analyse_goal__335__1_4_f_0(
  MR_Word VarTypes_7,
  MR_Word ModuleInfo_8,
  MR_Word STATE_VARIABLE_ClosureInfo_0_131,
  MR_Word LambdaHeadVar__1_144);

static MR_bool MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__383__1_3_p_0(
  MR_Word ModuleInfo_8,
  MR_Word LambdaHeadVar__1_136,
  MR_Word * LambdaHeadVar__2_137);

static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_values_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_values_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_value_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_value_5_p_0(
  MR_Word Varset_6,
  MR_Word ProgVar_7,
  MR_Word Values_8);

static void MR_CALL 
transform_hlds__closure_analysis__merge_closure_values_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__closure_analysis__merge_closure_infos_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__merge_closure_infos_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * C_6);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_6_p_0(
  MR_Word Debug_7,
  MR_Word PPId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23);

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_4_p_0(
  MR_Word tscc_proc_1_input_1_Varset_5,
  MR_Word tscc_proc_1_input_2_Goal_6);

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0(
  MR_Word tscc_proc_2_input_1_Varset_1,
  MR_Word tscc_proc_2_input_2_HeadVar__2_2,
  MR_Word tscc_proc_2_input_3_GoalInfo_3);

static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_values_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_values_4_p_0(
  MR_Word GoalInfo_5,
  MR_Word Varset_6);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(
  MR_Word VarTypes_7,
  MR_Word ModuleInfo_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_ClosureInfo_0_131,
  MR_Word * STATE_VARIABLE_ClosureInfo_132);

static void MR_CALL 
transform_hlds__closure_analysis__partition_arguments_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTypes_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Inputs_0_5,
  MR_Word * STATE_VARIABLE_Inputs_6,
  MR_Word STATE_VARIABLE_Outputs_0_7,
  MR_Word * STATE_VARIABLE_Outputs_8);

static void MR_CALL 
transform_hlds__closure_analysis__insert_unknown_3_p_0(
  MR_Word Var_4,
  MR_Word STATE_VARIABLE_ClosureInfo_0_6,
  MR_Word * STATE_VARIABLE_ClosureInfo_7);

static MR_bool MR_CALL 
transform_hlds__closure_analysis__var_has_ho_type_2_p_0(
  MR_Word VarTypes_3,
  MR_Word Var_4);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_scc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_scc_6_p_0(
  MR_Word Debug_7,
  MR_Word SCC_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_module_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_values_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_values_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_1[2][2];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_2[15][3];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_3[3][9];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_4[5][6];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_5[3][8];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_6[2][7];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_7[2][5];




static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_2[15][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_2[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_13)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_7[1])),
    ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_proc_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__closure_analysis__merge_closure_infos_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[4])),
    ((MR_Box) (transform_hlds__closure_analysis__dump_ho_value_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_3[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_4[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_5[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_case_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__closure_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_6[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__closure_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_7[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__closure_analysis__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__closure_analysis__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_case_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0,
    (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__closure_analysis____Unify____closure_info_0_0_10001)),
  ((MR_Box) (transform_hlds__closure_analysis____Compare____closure_info_0_0_10001)),
  (MR_String) "transform_hlds.closure_analysis",
  (MR_String) "closure_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_0 = {
  (MR_String) "unknown",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__closure_analysis__transform_hlds__closure_analysis__field_types_closure_values_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_1 = {
  (MR_String) "partial",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__closure_analysis__transform_hlds__closure_analysis__field_types_closure_values_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__closure_analysis__transform_hlds__closure_analysis__field_types_closure_values_0_2[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__closure_analysis__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_2 = {
  (MR_String) "exclusive",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  transform_hlds__closure_analysis__transform_hlds__closure_analysis__field_types_closure_values_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_0[1] = {
  &transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_1[1] = {
  &transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_1
};

static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_2[1] = {
  &transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_2
};

static const MR_DuPtagLayout transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_ptag_ordered_closure_values_0[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_2
  }
};

static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_name_ordered_closure_values_0[3] = {
  &transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_2,
  &transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_1,
  &transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_0
};

static const MR_Integer transform_hlds__closure_analysis__transform_hlds__closure_analysis__functor_number_map_closure_values_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__closure_analysis____Unify____closure_values_0_0_10001)),
  ((MR_Box) (transform_hlds__closure_analysis____Compare____closure_values_0_0_10001)),
  (MR_String) "transform_hlds.closure_analysis",
  (MR_String) "closure_values",
  {     transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_name_ordered_closure_values_0 },
  {     transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_ptag_ordered_closure_values_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  transform_hlds__closure_analysis__transform_hlds__closure_analysis__functor_number_map_closure_values_0
};

static void MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__504__1_3_p_0(
  MR_Word LambdaHeadVar__1_20)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "\t");
    mercury__io__write_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (LambdaHeadVar__1_20)));
    mercury__io__nl_2_p_0();
  }
}

static MR_Word MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__func__dump_closure_info_expr__471__1_1_f_0(
  MR_Word LambdaHeadVar__1_59)
{
  {
    MR_Word LambdaHeadVar__2_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_59, (MR_Integer) 2)));
    MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_59, (MR_Integer) 0)));
    MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_59, (MR_Integer) 1)));

    return LambdaHeadVar__2_60;
  }
}

static MR_Word MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__func__closure_analyse_goal__278__1_4_f_0(
  MR_Word VarTypes_7,
  MR_Word ModuleInfo_8,
  MR_Word STATE_VARIABLE_ClosureInfo_0_131,
  MR_Word LambdaHeadVar__1_158)
{
  {
    MR_Word LambdaHeadVar__2_159;
    MR_Word Case_53;
    MR_Word CaseInfo_54;
    MR_Word MainConsId_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_158, (MR_Integer) 0)));
    MR_Word OtherConsIds_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_158, (MR_Integer) 1)));
    MR_Word CaseGoal0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_158, (MR_Integer) 2)));
    MR_Word CaseGoal_58;

    transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(VarTypes_7, ModuleInfo_8, CaseGoal0_57, &CaseGoal_58, STATE_VARIABLE_ClosureInfo_0_131, &CaseInfo_54);
    {
      Case_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_53, 0) = ((MR_Box) (MainConsId_55));
      MR_hl_field(MR_mktag(0), Case_53, 1) = ((MR_Box) (OtherConsIds_56));
      MR_hl_field(MR_mktag(0), Case_53, 2) = ((MR_Box) (CaseGoal_58));
    }
    {
      LambdaHeadVar__2_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_159, 0) = ((MR_Box) (Case_53));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_159, 1) = ((MR_Box) (CaseInfo_54));
    }
    return LambdaHeadVar__2_159;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__216__1_4_p_0(
  MR_Word STATE_VARIABLE_ClosureInfo_0_131,
  MR_Word LambdaHeadVar__1_176,
  MR_Word LambdaHeadVar__2_177,
  MR_Word * LambdaHeadVar__3_178)
{
  {
    MR_bool succeeded;
    MR_Word PossibleValues_32;
    MR_Box conv0_PossibleValues_32;

    succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0, STATE_VARIABLE_ClosureInfo_0_131, ((MR_Box) (LambdaHeadVar__1_176)), &conv0_PossibleValues_32);
    if (succeeded)
    {
      PossibleValues_32 = ((MR_Word) conv0_PossibleValues_32);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      switch (MR_tag((MR_Word) PossibleValues_32)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *LambdaHeadVar__3_178 = LambdaHeadVar__2_177;
          break;
        case (MR_Integer) 1:
          *LambdaHeadVar__3_178 = LambdaHeadVar__2_177;
          break;
        case (MR_Integer) 2:
          {
            MR_Word KnownValues_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), PossibleValues_32, (MR_Integer) 0)));

            mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[0], ((MR_Box) (LambdaHeadVar__1_176)), ((MR_Box) (KnownValues_34)), LambdaHeadVar__2_177, LambdaHeadVar__3_178);
          }
          break;
      }
    else
      *LambdaHeadVar__3_178 = LambdaHeadVar__2_177;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__256__1_4_p_0(
  MR_Word STATE_VARIABLE_ClosureInfo_0_131,
  MR_Word LambdaHeadVar__1_165,
  MR_Word LambdaHeadVar__2_166,
  MR_Word * LambdaHeadVar__3_167)
{
  {
    MR_bool succeeded;
    MR_Word PossibleValues_192;
    MR_Box conv0_PossibleValues_192;

    succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0, STATE_VARIABLE_ClosureInfo_0_131, ((MR_Box) (LambdaHeadVar__1_165)), &conv0_PossibleValues_192);
    if (succeeded)
    {
      PossibleValues_192 = ((MR_Word) conv0_PossibleValues_192);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      switch (MR_tag((MR_Word) PossibleValues_192)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *LambdaHeadVar__3_167 = LambdaHeadVar__2_166;
          break;
        case (MR_Integer) 1:
          *LambdaHeadVar__3_167 = LambdaHeadVar__2_166;
          break;
        case (MR_Integer) 2:
          {
            MR_Word KnownValues_190 = ((MR_Word) (MR_hl_field(MR_mktag(2), PossibleValues_192, (MR_Integer) 0)));

            mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[0], ((MR_Box) (LambdaHeadVar__1_165)), ((MR_Box) (KnownValues_190)), LambdaHeadVar__2_166, LambdaHeadVar__3_167);
          }
          break;
      }
    else
      *LambdaHeadVar__3_167 = LambdaHeadVar__2_166;
  }
}

static MR_Word MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__func__closure_analyse_goal__335__1_4_f_0(
  MR_Word VarTypes_7,
  MR_Word ModuleInfo_8,
  MR_Word STATE_VARIABLE_ClosureInfo_0_131,
  MR_Word LambdaHeadVar__1_144)
{
  {
    MR_Word LambdaHeadVar__2_145;
    MR_Word Disjunct_93;
    MR_Word ClosureInfoForDisjunct_94;

    transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(VarTypes_7, ModuleInfo_8, LambdaHeadVar__1_144, &Disjunct_93, STATE_VARIABLE_ClosureInfo_0_131, &ClosureInfoForDisjunct_94);
    {
      LambdaHeadVar__2_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_145, 0) = ((MR_Box) (Disjunct_93));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_145, 1) = ((MR_Box) (ClosureInfoForDisjunct_94));
    }
    return LambdaHeadVar__2_145;
  }
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__383__1_3_p_0(
  MR_Word ModuleInfo_8,
  MR_Word LambdaHeadVar__1_136,
  MR_Word * LambdaHeadVar__2_137)
{
  {
    MR_bool succeeded;
    MR_Word NameMode_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_136, (MR_Integer) 1)));
    MR_Word Type_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_136, (MR_Integer) 2)));
    MR_Word Mode_128;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_136, (MR_Integer) 0)));
    MR_Word _BoxPolicy_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_136, (MR_Integer) 3)));
    MR_String Var_127;

    succeeded = ((MR_tag((MR_Word) NameMode_124)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), NameMode_124, (MR_Integer) 0)));
      Var_127 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_138, (MR_Integer) 0)));
      Mode_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_138, (MR_Integer) 1)));
      succeeded = check_hlds__mode_util__mode_is_output_2_p_0(ModuleInfo_8, Mode_128);
      if (succeeded)
      {
        succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(Type_125);
        if (succeeded)
        {
          Var_139 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *LambdaHeadVar__2_137 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_226));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_139));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_values_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_16 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_17 = (MR_Integer) HeadVar__3_3;

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
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Var_21)), ((MR_Box) (ArgY1_8)));
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
            MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word ArgY1_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Var_20)), ((MR_Box) (ArgY1_15)));
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_values_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
            MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_12_12;
            MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              TypeInfo_12_12 = (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[0];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_11_11;
            MR_Word ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              TypeInfo_11_11 = (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[0];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_value_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value__504__1_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_value_5_p_0(
  MR_Word Varset_6,
  MR_Word ProgVar_7,
  MR_Word Values_8)
{
  {
    MR_String VarName_10;
    MR_Box conv0_STATE_VARIABLE_IO_14;

    VarName_10 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Varset_6, ProgVar_7);
    mercury__io__write_string_3_p_0(VarName_10);
    mercury__io__write_string_3_p_0((MR_String) " =\n");
    mercury__set__fold_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[14], Values_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14);
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__merge_closure_values_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = HeadVar__2_2;
          break;
        case (MR_Integer) 2:
          {
            MR_Word A_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (A_5));
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__3_3 = HeadVar__1_1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word B_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              MR_Word Var_9;

              Var_9 = mercury__set__union_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, Var_25, B_8);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_9));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word B_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              MR_Word Var_12;

              Var_12 = mercury__set__union_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, Var_25, B_11);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));

        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_24));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word B_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              MR_Word Var_16;

              Var_16 = mercury__set__union_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, Var_24, B_15);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word B_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              MR_Word Var_19;

              Var_19 = mercury__set__union_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, Var_24, B_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_19));
              }
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__merge_closure_infos_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    transform_hlds__closure_analysis__merge_closure_values_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__merge_closure_infos_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * C_6)
{
  {
    mercury__map__union_4_p_1((MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0, (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[13], A_4, B_5, C_6);
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ClosureInfo_7;

    transform_hlds__closure_analysis__insert_unknown_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_ClosureInfo_7);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ClosureInfo_7));
  }
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__closure_analysis__var_has_ho_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_6_p_0(
  MR_Word Debug_7,
  MR_Word PPId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_19_44;
    MR_Word PredInfo_11;
    MR_Word ProcInfo0_12;
    MR_Word HeadVars_13;
    MR_Word VarTypes_14;
    MR_Word ArgModes_15;
    MR_Word ClosureInfo0_16;
    MR_Word Body0_17;
    MR_Word Body_18;
    MR_Word ProcInfo_20;
    MR_Word Inputs0_36;
    MR_Word Inputs_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word _Outputs_37;
    MR_Box conv1_ClosureInfo0_16;
    MR_Word _ClosureInfo_19;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_22, PPId_8, &PredInfo_11, &ProcInfo0_12);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_12, &HeadVars_13);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo0_12, &VarTypes_14);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo0_12, &ArgModes_15);
    TypeCtorInfo_19_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    Var_39 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_19_44);
    Var_40 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_19_44);
    transform_hlds__closure_analysis__partition_arguments_8_p_0(STATE_VARIABLE_ModuleInfo_0_22, VarTypes_14, HeadVars_13, ArgModes_15, Var_39, &Inputs0_36, Var_40, &_Outputs_37);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_proc_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (VarTypes_14));
    }
    Inputs_38 = parse_tree__set_of_var__filter_2_f_0(TypeCtorInfo_19_44, Var_41, Inputs0_36);
    Var_43 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0);
    parse_tree__set_of_var__fold_4_p_0(TypeCtorInfo_19_44, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0], (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[12], Inputs_38, ((MR_Box) (Var_43)), &conv1_ClosureInfo0_16);
    ClosureInfo0_16 = ((MR_Word) conv1_ClosureInfo0_16);
    hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Analysing closures in ", PPId_8, STATE_VARIABLE_ModuleInfo_0_22);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_12, &Body0_17);
    transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(VarTypes_14, STATE_VARIABLE_ModuleInfo_0_22, Body0_17, &Body_18, ClosureInfo0_16, &_ClosureInfo_19);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Body_18, ProcInfo0_12, &ProcInfo_20);
    switch (Debug_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Varset_21;
          MR_Word GoalExpr_57;
          MR_Word GoalInfo_58;

          hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_20, &Varset_21);
          GoalExpr_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Body_18, (MR_Integer) 0)));
          GoalInfo_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Body_18, (MR_Integer) 1)));
          transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0(Varset_21, GoalExpr_57, GoalInfo_58);
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
    hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PPId_8, PredInfo_11, ProcInfo_20, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23);
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__closure_analysis__dump_closure_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static MR_Box MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_LambdaHeadVar__2_60;

    conv3_LambdaHeadVar__2_60 = transform_hlds__closure_analysis__IntroducedFrom__func__dump_closure_info_expr__471__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_60));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__closure_analysis__dump_closure_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__closure_analysis__dump_closure_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__closure_analysis__dump_closure_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_4_p_0(
  MR_Word tscc_proc_1_input_1_Varset_5,
  MR_Word tscc_proc_1_input_2_Goal_6)
{
  {
    MR_Word tscc_proc_2_input_1_Varset_1;
    MR_Word tscc_proc_2_input_2_HeadVar__2_2;
    MR_Word tscc_proc_2_input_3_GoalInfo_3;

    // The code for TSCC PROC 1: pred transform_hlds.closure_analysis.dump_closure_info/4-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred transform_hlds.closure_analysis.dump_closure_info/4-0
    // proc 2 in TSCC: pred transform_hlds.closure_analysis.dump_closure_info_expr/5-0

    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Varset_5 = tscc_proc_1_input_1_Varset_5;
      MR_Word Goal_6 = tscc_proc_1_input_2_Goal_6;
      MR_Word GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 0)));
      MR_Word GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 1)));
      MR_Word next_value_of_tscc_proc_2_input_1_Varset_1 = Varset_5;
      MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = GoalExpr_8;
      MR_Word next_value_of_tscc_proc_2_input_3_GoalInfo_3 = GoalInfo_9;

      // direct tailcall eliminated
      tscc_proc_2_input_1_Varset_1 = next_value_of_tscc_proc_2_input_1_Varset_1;
      tscc_proc_2_input_2_HeadVar__2_2 = next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
      tscc_proc_2_input_3_GoalInfo_3 = next_value_of_tscc_proc_2_input_3_GoalInfo_3;
      goto top_of_proc_2;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Varset_1 = tscc_proc_2_input_1_Varset_1;
      MR_Word HeadVar__2_2 = tscc_proc_2_input_2_HeadVar__2_2;
      MR_Word GoalInfo_3 = tscc_proc_2_input_3_GoalInfo_3;

      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Goal_94 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 0);
            MR_Word next_value_of_tscc_proc_1_input_1_Varset_5 = Varset_1;
            MR_Word next_value_of_tscc_proc_1_input_2_Goal_6 = Goal_94;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Varset_5 = next_value_of_tscc_proc_1_input_1_Varset_5;
            tscc_proc_1_input_2_Goal_6 = next_value_of_tscc_proc_1_input_2_Goal_6;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
          }
          break;
        case (MR_Integer) 2:
          transform_hlds__closure_analysis__dump_ho_values_4_p_0(GoalInfo_3, Varset_1);
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              transform_hlds__closure_analysis__dump_ho_values_4_p_0(GoalInfo_3, Varset_1);
              break;
            case (MR_Integer) 1:
              {
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                MR_Word Var_13;
                MR_Word _ConjType_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                MR_Box conv0_STATE_VARIABLE_IO_5;

                {
                  Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_6[1]));
                  MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Varset_1));
                }
                mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_13, Goals_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_5);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                MR_Word Var_118;
                MR_Box conv1_STATE_VARIABLE_IO_5;

                {
                  Var_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_118, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_6[1]));
                  MR_hl_field(MR_mktag(0), Var_118, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_118, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_118, 3) = ((MR_Box) (Varset_1));
                }
                mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_118, Goals_113, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_5);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word TypeCtorInfo_134_134 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                MR_Word Cases_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                MR_Word Goals_56;
                MR_Word Var_61;
                MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                MR_Box conv4_STATE_VARIABLE_IO_5;

                Goals_56 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, TypeCtorInfo_134_134, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[11], Cases_49);
                {
                  Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_6[1]));
                  MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_5));
                  MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (Varset_1));
                }
                mercury__list__foldl_4_p_2(TypeCtorInfo_134_134, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_61, Goals_56, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_5);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Goal_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_1_input_1_Varset_5 = Varset_1;
                MR_Word next_value_of_tscc_proc_1_input_2_Goal_6 = Goal_40;

                // direct tailcall eliminated
                tscc_proc_1_input_1_Varset_5 = next_value_of_tscc_proc_1_input_1_Varset_5;
                tscc_proc_1_input_2_Goal_6 = next_value_of_tscc_proc_1_input_2_Goal_6;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                MR_Word Then_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                MR_Word Else_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4)));
                MR_Word Var_77;
                MR_Word Var_78;
                MR_Word Var_80;
                MR_Word Var_81;
                MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                MR_Box conv2_STATE_VARIABLE_IO_5;

                {
                  Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_6[1]));
                  MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_3));
                  MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (Varset_1));
                }
                {
                  Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Else_72));
                  MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Then_71));
                  MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_81));
                }
                {
                  Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Cond_70));
                  MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_80));
                }
                mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_77, Var_78, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_5);
              }
              break;
            case (MR_Integer) 7:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.closure_analysis", (MR_String) "predicate \140transform_hlds.closure_analysis.dump_closure_info_expr\'/5", (MR_String) "shorthand");
                  return;
                }
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0(
  MR_Word tscc_proc_2_input_1_Varset_1,
  MR_Word tscc_proc_2_input_2_HeadVar__2_2,
  MR_Word tscc_proc_2_input_3_GoalInfo_3)
{
  {
    MR_Word tscc_proc_1_input_1_Varset_5;
    MR_Word tscc_proc_1_input_2_Goal_6;

    // The code for TSCC PROC 2: pred transform_hlds.closure_analysis.dump_closure_info_expr/5-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred transform_hlds.closure_analysis.dump_closure_info/4-0
    // proc 2 in TSCC: pred transform_hlds.closure_analysis.dump_closure_info_expr/5-0

    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Varset_5 = tscc_proc_1_input_1_Varset_5;
      MR_Word Goal_6 = tscc_proc_1_input_2_Goal_6;
      MR_Word GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 0)));
      MR_Word GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 1)));
      MR_Word next_value_of_tscc_proc_2_input_1_Varset_1 = Varset_5;
      MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = GoalExpr_8;
      MR_Word next_value_of_tscc_proc_2_input_3_GoalInfo_3 = GoalInfo_9;

      // direct tailcall eliminated
      tscc_proc_2_input_1_Varset_1 = next_value_of_tscc_proc_2_input_1_Varset_1;
      tscc_proc_2_input_2_HeadVar__2_2 = next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
      tscc_proc_2_input_3_GoalInfo_3 = next_value_of_tscc_proc_2_input_3_GoalInfo_3;
      goto top_of_proc_2;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Varset_1 = tscc_proc_2_input_1_Varset_1;
      MR_Word HeadVar__2_2 = tscc_proc_2_input_2_HeadVar__2_2;
      MR_Word GoalInfo_3 = tscc_proc_2_input_3_GoalInfo_3;

      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Goal_94 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 0);
            MR_Word next_value_of_tscc_proc_1_input_1_Varset_5 = Varset_1;
            MR_Word next_value_of_tscc_proc_1_input_2_Goal_6 = Goal_94;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Varset_5 = next_value_of_tscc_proc_1_input_1_Varset_5;
            tscc_proc_1_input_2_Goal_6 = next_value_of_tscc_proc_1_input_2_Goal_6;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
          }
          break;
        case (MR_Integer) 2:
          transform_hlds__closure_analysis__dump_ho_values_4_p_0(GoalInfo_3, Varset_1);
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              transform_hlds__closure_analysis__dump_ho_values_4_p_0(GoalInfo_3, Varset_1);
              break;
            case (MR_Integer) 1:
              {
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                MR_Word Var_13;
                MR_Word _ConjType_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                MR_Box conv0_STATE_VARIABLE_IO_5;

                {
                  Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_6[1]));
                  MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Varset_1));
                }
                mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_13, Goals_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_5);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                MR_Word Var_118;
                MR_Box conv1_STATE_VARIABLE_IO_5;

                {
                  Var_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_118, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_6[1]));
                  MR_hl_field(MR_mktag(0), Var_118, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_118, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_118, 3) = ((MR_Box) (Varset_1));
                }
                mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_118, Goals_113, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_5);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word TypeCtorInfo_134_134 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                MR_Word Cases_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                MR_Word Goals_56;
                MR_Word Var_61;
                MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                MR_Box conv4_STATE_VARIABLE_IO_5;

                Goals_56 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, TypeCtorInfo_134_134, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[11], Cases_49);
                {
                  Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_6[1]));
                  MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_5));
                  MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (Varset_1));
                }
                mercury__list__foldl_4_p_2(TypeCtorInfo_134_134, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_61, Goals_56, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_5);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Goal_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_1_input_1_Varset_5 = Varset_1;
                MR_Word next_value_of_tscc_proc_1_input_2_Goal_6 = Goal_40;

                // direct tailcall eliminated
                tscc_proc_1_input_1_Varset_5 = next_value_of_tscc_proc_1_input_1_Varset_5;
                tscc_proc_1_input_2_Goal_6 = next_value_of_tscc_proc_1_input_2_Goal_6;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                MR_Word Then_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                MR_Word Else_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4)));
                MR_Word Var_77;
                MR_Word Var_78;
                MR_Word Var_80;
                MR_Word Var_81;
                MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                MR_Box conv2_STATE_VARIABLE_IO_5;

                {
                  Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_6[1]));
                  MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_expr_5_p_0_3));
                  MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (Varset_1));
                }
                {
                  Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Else_72));
                  MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Then_71));
                  MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_81));
                }
                {
                  Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Cond_70));
                  MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_80));
                }
                mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_77, Var_78, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_5);
              }
              break;
            case (MR_Integer) 7:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.closure_analysis", (MR_String) "predicate \140transform_hlds.closure_analysis.dump_closure_info_expr\'/5", (MR_String) "shorthand");
                  return;
                }
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_values_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__closure_analysis__dump_ho_value_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_values_4_p_0(
  MR_Word GoalInfo_5,
  MR_Word Varset_6)
{
  {
    MR_bool succeeded;
    MR_Word HO_Values_8;

    HO_Values_8 = hlds__hlds_goal__goal_info_get_ho_values_1_f_0(GoalInfo_5);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[0], HO_Values_8);
    if (!(succeeded))
    {
      MR_Word Var_11;
      MR_Word Var_14;
      MR_Box conv0_STATE_VARIABLE_IO_10;

      Var_11 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_5);
      parse_tree__prog_out__write_context_3_p_0(Var_11);
      mercury__io__nl_2_p_0();
      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[2]));
        MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_ho_values_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Varset_6));
      }
      mercury__map__foldl_4_p_2((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_14, HO_Values_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_10);
    }
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv20_STATE_VARIABLE_ClosureInfo_7;

    transform_hlds__closure_analysis__insert_unknown_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv20_STATE_VARIABLE_ClosureInfo_7);
    *wrapper_arg_3 = ((MR_Box) (conv20_STATE_VARIABLE_ClosureInfo_7));
  }
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__closure_analysis__var_has_ho_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv17_C_6;

    transform_hlds__closure_analysis__merge_closure_infos_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv17_C_6);
    *wrapper_arg_3 = ((MR_Box) (conv17_C_6));
  }
}

static MR_Box MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv16_LambdaHeadVar__2_159;

    conv16_LambdaHeadVar__2_159 = transform_hlds__closure_analysis__IntroducedFrom__func__closure_analyse_goal__278__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv16_LambdaHeadVar__2_159));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv14_STATE_VARIABLE_ClosureInfo_7;

    transform_hlds__closure_analysis__insert_unknown_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv14_STATE_VARIABLE_ClosureInfo_7);
    *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_ClosureInfo_7));
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_LambdaHeadVar__3_178;

    transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__216__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv12_LambdaHeadVar__3_178);
    *wrapper_arg_3 = ((MR_Box) (conv12_LambdaHeadVar__3_178));
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_HeadVar__3_3;

    transform_hlds__closure_analysis__merge_closure_values_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv11_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv11_HeadVar__3_3));
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_STATE_VARIABLE_ClosureInfo_7;

    transform_hlds__closure_analysis__insert_unknown_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv9_STATE_VARIABLE_ClosureInfo_7);
    *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_ClosureInfo_7));
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_LambdaHeadVar__3_167;

    transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__256__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv7_LambdaHeadVar__3_167);
    *wrapper_arg_3 = ((MR_Box) (conv7_LambdaHeadVar__3_167));
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_C_6;

    transform_hlds__closure_analysis__merge_closure_infos_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_C_6);
    *wrapper_arg_3 = ((MR_Box) (conv5_C_6));
  }
}

static MR_Box MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_LambdaHeadVar__2_145;

    conv4_LambdaHeadVar__2_145 = transform_hlds__closure_analysis__IntroducedFrom__func__closure_analyse_goal__335__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_145));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Goal_10;
    MR_Word conv1_STATE_VARIABLE_ClosureInfo_132;

    transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv2_Goal_10, ((MR_Word) wrapper_arg_3), &conv1_STATE_VARIABLE_ClosureInfo_132);
    *wrapper_arg_2 = ((MR_Box) (conv2_Goal_10));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_ClosureInfo_132));
  }
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_137;

    succeeded = transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__383__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_137);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_137));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(
  MR_Word VarTypes_7,
  MR_Word ModuleInfo_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_ClosureInfo_0_131,
  MR_Word * STATE_VARIABLE_ClosureInfo_132)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 0)));
    MR_Word GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) GoalExpr0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word NegatedGoal0_97 = (MR_Word) MR_body(((MR_Word) GoalExpr0_12), (MR_Integer) 0);
          MR_Word NegatedGoal_98;
          MR_Word GoalExpr_223;
          MR_Word Var_99;

          transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(VarTypes_7, ModuleInfo_8, NegatedGoal0_97, &NegatedGoal_98, STATE_VARIABLE_ClosureInfo_0_131, &Var_99);
          GoalExpr_223 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) NegatedGoal_98);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_223));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
          }
          *STATE_VARIABLE_ClosureInfo_132 = STATE_VARIABLE_ClosureInfo_0_131;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 3)));
          MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 0)));
          MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 1)));
          MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 2)));
          MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 4)));

          switch (MR_tag((MR_Word) Unification_65)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word LHS_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_65, (MR_Integer) 0)));
                MR_Word RHS_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_65, (MR_Integer) 1)));
                MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_65, (MR_Integer) 2)));
                MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_65, (MR_Integer) 3)));
                MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_65, (MR_Integer) 4)));
                MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_65, (MR_Integer) 5)));
                MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_65, (MR_Integer) 6)));
                MR_Word ShroudedPPId_74;

                succeeded = ((((MR_tag((MR_Word) RHS_68)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RHS_68, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ShroudedPPId_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), RHS_68, (MR_Integer) 1)));
                  {
                    MR_Word PPId_76;
                    MR_Word HO_Value_77;
                    MR_Word Var_156;

                    PPId_76 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPPId_74);
                    HO_Value_77 = mercury__set__make_singleton_set_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (PPId_76)));
                    {
                      Var_156 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_156, 0) = ((MR_Box) (HO_Value_77));
                    }
                    mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0, ((MR_Box) (LHS_67)), ((MR_Box) (Var_156)), STATE_VARIABLE_ClosureInfo_0_131, STATE_VARIABLE_ClosureInfo_132);
                  }
                }
                else
                  *STATE_VARIABLE_ClosureInfo_132 = STATE_VARIABLE_ClosureInfo_0_131;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeInfo_274_274 = (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1];
                MR_Word Args_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_65, (MR_Integer) 2)));
                MR_Word HO_Args_84;
                MR_Word Var_153;
                MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_65, (MR_Integer) 0)));
                MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_65, (MR_Integer) 1)));
                MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_65, (MR_Integer) 3)));
                MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_65, (MR_Integer) 4)));
                MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_65, (MR_Integer) 5)));
                MR_Box conv21_STATE_VARIABLE_ClosureInfo_132;

                {
                  Var_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_153, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_7[0]));
                  MR_hl_field(MR_mktag(0), Var_153, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_12));
                  MR_hl_field(MR_mktag(0), Var_153, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_153, 3) = ((MR_Box) (VarTypes_7));
                }
                HO_Args_84 = mercury__list__filter_2_f_0(TypeInfo_274_274, Var_153, Args_80);
                mercury__list__foldl_4_p_0(TypeInfo_274_274, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0], (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[10], HO_Args_84, ((MR_Box) (STATE_VARIABLE_ClosureInfo_0_131)), &conv21_STATE_VARIABLE_ClosureInfo_132);
                *STATE_VARIABLE_ClosureInfo_132 = ((MR_Word) conv21_STATE_VARIABLE_ClosureInfo_132);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word LHS_215 = ((MR_Word) (MR_hl_field(MR_mktag(2), Unification_65, (MR_Integer) 0)));
                MR_Word RHS_216 = ((MR_Word) (MR_hl_field(MR_mktag(2), Unification_65, (MR_Integer) 1)));

                succeeded = transform_hlds__closure_analysis__var_has_ho_type_2_p_0(VarTypes_7, LHS_215);
                if (succeeded)
                {
                  MR_Word TypeInfo_280_280;
                  MR_Word TypeCtorInfo_281_281;
                  MR_Word Values_212;
                  MR_Box conv19_Values_212;

                  succeeded = transform_hlds__closure_analysis__var_has_ho_type_2_p_0(VarTypes_7, RHS_216);
                  if (!(succeeded))
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.closure_analysis", (MR_String) "predicate \140transform_hlds.closure_analysis.closure_analyse_goal\'/6", (MR_String) "not a higher-order var");
                      return;
                    }
                  }
                  TypeInfo_280_280 = (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1];
                  TypeCtorInfo_281_281 = (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0;
                  conv19_Values_212 = mercury__map__lookup_2_f_0(TypeInfo_280_280, TypeCtorInfo_281_281, STATE_VARIABLE_ClosureInfo_0_131, ((MR_Box) (RHS_216)));
                  Values_212 = ((MR_Word) conv19_Values_212);
                  mercury__map__det_insert_4_p_0(TypeInfo_280_280, TypeCtorInfo_281_281, ((MR_Box) (LHS_215)), ((MR_Box) (Values_212)), STATE_VARIABLE_ClosureInfo_0_131, STATE_VARIABLE_ClosureInfo_132);
                }
                else
                  *STATE_VARIABLE_ClosureInfo_132 = STATE_VARIABLE_ClosureInfo_0_131;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Unification_65, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_ClosureInfo_132 = STATE_VARIABLE_ClosureInfo_0_131;
                  break;
                case (MR_Integer) 1:
                  *STATE_VARIABLE_ClosureInfo_132 = STATE_VARIABLE_ClosureInfo_0_131;
                  break;
              }
              break;
          }
          *Goal_10 = Goal0_9;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeCtorInfo_239_239;
          MR_Word CallPredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 0)));
          MR_Integer CallProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 1)));
          MR_Word CallArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 2)));
          MR_Word CallProcInfo_25;
          MR_Word CallArgModes_26;
          MR_Word InputArgs_27;
          MR_Word OutputArgs_28;
          MR_Word AddValues_29;
          MR_Word Values_35;
          MR_Word GoalInfo_36;
          MR_Word Var_174;
          MR_Word Var_175;
          MR_Word Var_182;
          MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 3)));
          MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 4)));
          MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 5)));
          MR_Word _CallPredInfo_24;
          MR_Box conv13_Values_35;
          MR_Box conv15_STATE_VARIABLE_ClosureInfo_132;

          hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_8, CallPredId_18, CallProcId_19, &_CallPredInfo_24, &CallProcInfo_25);
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CallProcInfo_25, &CallArgModes_26);
          TypeCtorInfo_239_239 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          Var_174 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_239_239);
          Var_175 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_239_239);
          transform_hlds__closure_analysis__partition_arguments_8_p_0(ModuleInfo_8, VarTypes_7, CallArgs_20, CallArgModes_26, Var_174, &InputArgs_27, Var_175, &OutputArgs_28);
          {
            AddValues_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), AddValues_29, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), AddValues_29, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_8));
            MR_hl_field(MR_mktag(0), AddValues_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), AddValues_29, 3) = ((MR_Box) (STATE_VARIABLE_ClosureInfo_0_131));
          }
          Var_182 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[0]);
          parse_tree__set_of_var__fold_4_p_0(TypeCtorInfo_239_239, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[1], AddValues_29, InputArgs_27, ((MR_Box) (Var_182)), &conv13_Values_35);
          Values_35 = ((MR_Word) conv13_Values_35);
          hlds__hlds_goal__goal_info_set_ho_values_3_p_0(Values_35, GoalInfo0_13, &GoalInfo_36);
          parse_tree__set_of_var__fold_4_p_0(TypeCtorInfo_239_239, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0], (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[8], OutputArgs_28, ((MR_Box) (STATE_VARIABLE_ClosureInfo_0_131)), &conv15_STATE_VARIABLE_ClosureInfo_132);
          *STATE_VARIABLE_ClosureInfo_132 = ((MR_Word) conv15_STATE_VARIABLE_ClosureInfo_132);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr0_12));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_36));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeCtorInfo_251_251 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
              MR_Word Details_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1)));
              MR_Word GCallArgs_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2)));
              MR_Word GCallModes_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3)));
              MR_Word InputArgs0_42;
              MR_Word Var_163;
              MR_Word Var_164;
              MR_Word Var_171;
              MR_Word InputArgs_203;
              MR_Word OutputArgs_204;
              MR_Word AddValues_205;
              MR_Word Values_208;
              MR_Word GoalInfo_209;
              MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 4)));
              MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 5)));
              MR_Word CalledClosure0_43;
              MR_Word Var_44;
              MR_Word Var_45;
              MR_Integer Var_46;
              MR_Box conv8_Values_208;
              MR_Box conv10_STATE_VARIABLE_ClosureInfo_132;

              Var_163 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_251_251);
              Var_164 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_251_251);
              transform_hlds__closure_analysis__partition_arguments_8_p_0(ModuleInfo_8, VarTypes_7, GCallArgs_38, GCallModes_39, Var_163, &InputArgs0_42, Var_164, &OutputArgs_204);
              succeeded = ((MR_tag((MR_Word) Details_37)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                CalledClosure0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Details_37, (MR_Integer) 0)));
                Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Details_37, (MR_Integer) 1)));
                Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Details_37, (MR_Integer) 2)));
                Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Details_37, (MR_Integer) 3)));
                parse_tree__set_of_var__insert_3_p_0(TypeCtorInfo_251_251, CalledClosure0_43, InputArgs0_42, &InputArgs_203);
              }
              else
                InputArgs_203 = InputArgs0_42;
              {
                AddValues_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), AddValues_205, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_6[0]));
                MR_hl_field(MR_mktag(0), AddValues_205, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_5));
                MR_hl_field(MR_mktag(0), AddValues_205, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), AddValues_205, 3) = ((MR_Box) (STATE_VARIABLE_ClosureInfo_0_131));
              }
              Var_171 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[0]);
              parse_tree__set_of_var__fold_4_p_0(TypeCtorInfo_251_251, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[1], AddValues_205, InputArgs_203, ((MR_Box) (Var_171)), &conv8_Values_208);
              Values_208 = ((MR_Word) conv8_Values_208);
              hlds__hlds_goal__goal_info_set_ho_values_3_p_0(Values_208, GoalInfo0_13, &GoalInfo_209);
              parse_tree__set_of_var__fold_4_p_0(TypeCtorInfo_251_251, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0], (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[6], OutputArgs_204, ((MR_Box) (STATE_VARIABLE_ClosureInfo_0_131)), &conv10_STATE_VARIABLE_ClosureInfo_132);
              *STATE_VARIABLE_ClosureInfo_132 = ((MR_Word) conv10_STATE_VARIABLE_ClosureInfo_132);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr0_12));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_209));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignHOArgs_121;
              MR_Word OutputForeignHOArgs_129;
              MR_Word Args_232 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 4)));
              MR_Word Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1)));
              MR_Word Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2)));
              MR_Integer Var_117 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3)));
              MR_Word _ExtraArgs_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 5)));
              MR_Word Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 6)));
              MR_Word Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 7)));

              {
                ForeignHOArgs_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ForeignHOArgs_121, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), ForeignHOArgs_121, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_1));
                MR_hl_field(MR_mktag(0), ForeignHOArgs_121, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), ForeignHOArgs_121, 3) = ((MR_Box) (ModuleInfo_8));
              }
              mercury__list__filter_map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[4], ForeignHOArgs_121, Args_232, &OutputForeignHOArgs_129);
              mercury__map__det_insert_from_assoc_list_3_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0, OutputForeignHOArgs_129, STATE_VARIABLE_ClosureInfo_0_131, STATE_VARIABLE_ClosureInfo_132);
              *Goal_10 = Goal0_9;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeCtorInfo_237_237;
              MR_Word ConjType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1)));
              MR_Word Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2)));
              MR_Word Goals_16;
              MR_Word GoalExpr_17;
              MR_Word Var_185;
              MR_Box conv3_STATE_VARIABLE_ClosureInfo_132;

              {
                Var_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_185, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), Var_185, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_2));
                MR_hl_field(MR_mktag(0), Var_185, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_185, 3) = ((MR_Box) (VarTypes_7));
                MR_hl_field(MR_mktag(0), Var_185, 4) = ((MR_Box) (ModuleInfo_8));
              }
              TypeCtorInfo_237_237 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              mercury__list__map_foldl_5_p_0(TypeCtorInfo_237_237, TypeCtorInfo_237_237, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0], Var_185, Goals0_15, &Goals_16, ((MR_Box) (STATE_VARIABLE_ClosureInfo_0_131)), &conv3_STATE_VARIABLE_ClosureInfo_132);
              *STATE_VARIABLE_ClosureInfo_132 = ((MR_Word) conv3_STATE_VARIABLE_ClosureInfo_132);
              {
                GoalExpr_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), GoalExpr_17, 1) = ((MR_Box) (ConjType_14));
                MR_hl_field(MR_mktag(3), GoalExpr_17, 2) = ((MR_Box) (Goals_16));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_17));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeCtorInfo_282_282;
              MR_Word TypeInfo_284_284;
              MR_Word ProcessDisjunct_90;
              MR_Word DisjunctsAndInfos_95;
              MR_Word DisjunctsInfo_96;
              MR_Word Var_147;
              MR_Word Goals0_220 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1)));
              MR_Word Goals_221;
              MR_Word GoalExpr_222;
              MR_Box conv6_STATE_VARIABLE_ClosureInfo_132;

              {
                ProcessDisjunct_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ProcessDisjunct_90, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), ProcessDisjunct_90, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_3));
                MR_hl_field(MR_mktag(0), ProcessDisjunct_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), ProcessDisjunct_90, 3) = ((MR_Box) (VarTypes_7));
                MR_hl_field(MR_mktag(0), ProcessDisjunct_90, 4) = ((MR_Box) (ModuleInfo_8));
                MR_hl_field(MR_mktag(0), ProcessDisjunct_90, 5) = ((MR_Box) (STATE_VARIABLE_ClosureInfo_0_131));
              }
              TypeCtorInfo_282_282 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              DisjunctsAndInfos_95 = mercury__list__map_2_f_0(TypeCtorInfo_282_282, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[3], ProcessDisjunct_90, Goals0_220);
              TypeInfo_284_284 = (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0];
              mercury__assoc_list__keys_and_values_3_p_0(TypeCtorInfo_282_282, TypeInfo_284_284, DisjunctsAndInfos_95, &Goals_221, &DisjunctsInfo_96);
              Var_147 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0);
              mercury__list__foldl_4_p_0(TypeInfo_284_284, TypeInfo_284_284, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[5], DisjunctsInfo_96, ((MR_Box) (Var_147)), &conv6_STATE_VARIABLE_ClosureInfo_132);
              *STATE_VARIABLE_ClosureInfo_132 = ((MR_Word) conv6_STATE_VARIABLE_ClosureInfo_132);
              {
                GoalExpr_222 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_222, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), GoalExpr_222, 1) = ((MR_Box) (Goals_221));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_222));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word TypeCtorInfo_263_263;
              MR_Word TypeInfo_265_265;
              MR_Word SwitchVar_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1)));
              MR_Word SwitchCanFail_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2)));
              MR_Word Cases0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3)));
              MR_Word ProcessCase_51;
              MR_Word CasesAndInfos_59;
              MR_Word Cases_60;
              MR_Word CasesInfo_61;
              MR_Word Var_161;
              MR_Word GoalExpr_211;
              MR_Box conv18_STATE_VARIABLE_ClosureInfo_132;

              {
                ProcessCase_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ProcessCase_51, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), ProcessCase_51, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_10));
                MR_hl_field(MR_mktag(0), ProcessCase_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), ProcessCase_51, 3) = ((MR_Box) (VarTypes_7));
                MR_hl_field(MR_mktag(0), ProcessCase_51, 4) = ((MR_Box) (ModuleInfo_8));
                MR_hl_field(MR_mktag(0), ProcessCase_51, 5) = ((MR_Box) (STATE_VARIABLE_ClosureInfo_0_131));
              }
              TypeCtorInfo_263_263 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
              CasesAndInfos_59 = mercury__list__map_2_f_0(TypeCtorInfo_263_263, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[2], ProcessCase_51, Cases0_50);
              TypeInfo_265_265 = (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[0];
              mercury__assoc_list__keys_and_values_3_p_0(TypeCtorInfo_263_263, TypeInfo_265_265, CasesAndInfos_59, &Cases_60, &CasesInfo_61);
              Var_161 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0);
              mercury__list__foldl_4_p_0(TypeInfo_265_265, TypeInfo_265_265, (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[9], CasesInfo_61, ((MR_Box) (Var_161)), &conv18_STATE_VARIABLE_ClosureInfo_132);
              *STATE_VARIABLE_ClosureInfo_132 = ((MR_Word) conv18_STATE_VARIABLE_ClosureInfo_132);
              {
                GoalExpr_211 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_211, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), GoalExpr_211, 1) = ((MR_Box) (SwitchVar_48));
                MR_hl_field(MR_mktag(3), GoalExpr_211, 2) = ((MR_Box) (SwitchCanFail_49));
                MR_hl_field(MR_mktag(3), GoalExpr_211, 3) = ((MR_Box) (Cases_60));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_211));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1)));
              MR_Word SubGoal0_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2)));
              MR_Word SubGoal_104;
              MR_Word GoalExpr_224;
              MR_Word FGT_103;
              MR_Word Var_102;

              succeeded = ((((MR_tag((MR_Word) Reason_100)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_100, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_100, (MR_Integer) 1)));
                FGT_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_100, (MR_Integer) 2)));
                switch (FGT_103) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
              {
                SubGoal_104 = SubGoal0_101;
                *STATE_VARIABLE_ClosureInfo_132 = STATE_VARIABLE_ClosureInfo_0_131;
              }
              else
                transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(VarTypes_7, ModuleInfo_8, SubGoal0_101, &SubGoal_104, STATE_VARIABLE_ClosureInfo_0_131, STATE_VARIABLE_ClosureInfo_132);
              {
                GoalExpr_224 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_224, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), GoalExpr_224, 1) = ((MR_Box) (Reason_100));
                MR_hl_field(MR_mktag(3), GoalExpr_224, 2) = ((MR_Box) (SubGoal_104));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_224));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ExistQVars_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1)));
              MR_Word Cond0_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2)));
              MR_Word Then0_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3)));
              MR_Word Else0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 4)));
              MR_Word Cond_109;
              MR_Word CondInfo_110;
              MR_Word Then_111;
              MR_Word CondThenInfo_112;
              MR_Word Else_113;
              MR_Word ElseInfo_114;
              MR_Word GoalExpr_225;

              transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(VarTypes_7, ModuleInfo_8, Cond0_106, &Cond_109, STATE_VARIABLE_ClosureInfo_0_131, &CondInfo_110);
              transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(VarTypes_7, ModuleInfo_8, Then0_107, &Then_111, CondInfo_110, &CondThenInfo_112);
              transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(VarTypes_7, ModuleInfo_8, Else0_108, &Else_113, STATE_VARIABLE_ClosureInfo_0_131, &ElseInfo_114);
              mercury__map__union_4_p_1((MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0, (MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis_scalar_common_2[7], CondThenInfo_112, ElseInfo_114, STATE_VARIABLE_ClosureInfo_132);
              {
                GoalExpr_225 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_225, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), GoalExpr_225, 1) = ((MR_Box) (ExistQVars_105));
                MR_hl_field(MR_mktag(3), GoalExpr_225, 2) = ((MR_Box) (Cond_109));
                MR_hl_field(MR_mktag(3), GoalExpr_225, 3) = ((MR_Box) (Then_111));
                MR_hl_field(MR_mktag(3), GoalExpr_225, 4) = ((MR_Box) (Else_113));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_225));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.closure_analysis", (MR_String) "predicate \140transform_hlds.closure_analysis.closure_analyse_goal\'/6", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__partition_arguments_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTypes_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Inputs_0_5,
  MR_Word * STATE_VARIABLE_Inputs_6,
  MR_Word STATE_VARIABLE_Outputs_0_7,
  MR_Word * STATE_VARIABLE_Outputs_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *STATE_VARIABLE_Outputs_8 = STATE_VARIABLE_Outputs_0_7;
        *STATE_VARIABLE_Inputs_6 = STATE_VARIABLE_Inputs_0_5;
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.closure_analysis", (MR_String) "predicate \140transform_hlds.closure_analysis.partition_arguments\'/8", (MR_String) "unequal length lists.");
          return;
        }
      }
    else
    {
      MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

      if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.closure_analysis", (MR_String) "predicate \140transform_hlds.closure_analysis.partition_arguments\'/8", (MR_String) "unequal length lists.");
          return;
        }
      }
      else
      {
        MR_Word Mode_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
        MR_Word Modes_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
        MR_Word STATE_VARIABLE_Inputs_51_51;
        MR_Word STATE_VARIABLE_Outputs_52_52;
        MR_Word Type_61;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Inputs_0_5;
        MR_Word next_value_of_STATE_VARIABLE_Outputs_0_7;

        hlds__vartypes__lookup_var_type_3_p_0(VarTypes_2, Var_58, &Type_61);
        succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(Type_61);
        if (succeeded)
        {
          succeeded = check_hlds__mode_util__mode_is_input_2_p_0(ModuleInfo_1, Mode_43);
          if (succeeded)
          {
            parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_58, STATE_VARIABLE_Inputs_0_5, &STATE_VARIABLE_Inputs_51_51);
            STATE_VARIABLE_Outputs_52_52 = STATE_VARIABLE_Outputs_0_7;
          }
          else
          {
            succeeded = check_hlds__mode_util__mode_is_output_2_p_0(ModuleInfo_1, Mode_43);
            if (succeeded)
            {
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_58, STATE_VARIABLE_Outputs_0_7, &STATE_VARIABLE_Outputs_52_52);
            }
            else
              STATE_VARIABLE_Outputs_52_52 = STATE_VARIABLE_Outputs_0_7;
            STATE_VARIABLE_Inputs_51_51 = STATE_VARIABLE_Inputs_0_5;
          }
        }
        else
        {
          STATE_VARIABLE_Outputs_52_52 = STATE_VARIABLE_Outputs_0_7;
          STATE_VARIABLE_Inputs_51_51 = STATE_VARIABLE_Inputs_0_5;
        }
        // direct tailcall eliminated
        next_value_of_HeadVar__3_3 = Var_57;
        next_value_of_HeadVar__4_4 = Modes_44;
        next_value_of_STATE_VARIABLE_Inputs_0_5 = STATE_VARIABLE_Inputs_51_51;
        next_value_of_STATE_VARIABLE_Outputs_0_7 = STATE_VARIABLE_Outputs_52_52;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Inputs_0_5 = next_value_of_STATE_VARIABLE_Inputs_0_5;
        STATE_VARIABLE_Outputs_0_7 = next_value_of_STATE_VARIABLE_Outputs_0_7;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__insert_unknown_3_p_0(
  MR_Word Var_4,
  MR_Word STATE_VARIABLE_ClosureInfo_0_6,
  MR_Word * STATE_VARIABLE_ClosureInfo_7)
{
  {
    mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0, ((MR_Box) (Var_4)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), STATE_VARIABLE_ClosureInfo_0_6, STATE_VARIABLE_ClosureInfo_7);
  }
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis__var_has_ho_type_2_p_0(
  MR_Word VarTypes_3,
  MR_Word Var_4)
{
  {
    MR_bool succeeded;
    MR_Word Type_5;

    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_3, Var_4, &Type_5);
    succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(Type_5);
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_scc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_23;

    transform_hlds__closure_analysis__closure_analyse_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_ModuleInfo_23);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_23));
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_scc_6_p_0(
  MR_Word Debug_7,
  MR_Word SCC_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  {
    MR_Word Var_15;
    MR_Box conv2_STATE_VARIABLE_ModuleInfo_12;
    MR_Box conv1_STATE_VARIABLE_IO_14;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_scc_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Debug_7));
    }
    mercury__set__foldl2_6_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_15, SCC_8, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_11)), &conv2_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_14);
    *STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) conv2_STATE_VARIABLE_ModuleInfo_12);
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_module_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_12;

    transform_hlds__closure_analysis__closure_analyse_scc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_ModuleInfo_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_12));
  }
}

void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_module_4_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  {
    MR_Word Globals_7;
    MR_Word Debug_8;
    MR_Word DepInfo_9;
    MR_Word SCCs_10;
    MR_Word STATE_VARIABLE_ModuleInfo_16_16;
    MR_Word Var_17;
    MR_Box conv2_STATE_VARIABLE_ModuleInfo_12;
    MR_Box conv1_STATE_VARIABLE_IO_14;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &Globals_7);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 89, &Debug_8);
    hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_11, &STATE_VARIABLE_ModuleInfo_16_16, &DepInfo_9);
    SCCs_10 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, DepInfo_9);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_module_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Debug_8));
    }
    mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__closure_analysis_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_17, SCCs_10, ((MR_Box) (STATE_VARIABLE_ModuleInfo_16_16)), &conv2_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_14);
    *STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) conv2_STATE_VARIABLE_ModuleInfo_12);
  }
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__closure_analysis____Unify____closure_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__closure_analysis____Compare____closure_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_values_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__closure_analysis____Unify____closure_values_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_values_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__closure_analysis____Compare____closure_values_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__closure_analysis__init(void)
{
}

void mercury__transform_hlds__closure_analysis__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_info_0);
	MR_register_type_ctor_info(&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0);
}

void mercury__transform_hlds__closure_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__closure_analysis__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.closure_analysis.
