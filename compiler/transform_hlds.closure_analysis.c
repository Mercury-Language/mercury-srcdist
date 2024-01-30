/*
** Automatically generated from `closure_analysis.m'
** by the Mercury compiler,
** version rotd-2024-01-30
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_test.mih"
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
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
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
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__closure_analysis__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__closure_analysis__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0;

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
transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value_map_entry__531__1_4_p_0(
  MR_Word DebugStream_7,
  MR_Word LambdaHeadVar__1_22);

static MR_Word MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__func__dump_closure_info__492__1_1_f_0(
  MR_Word LambdaHeadVar__1_59);

static MR_bool MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__342__1_3_p_0(
  MR_Word ModuleInfo_7,
  MR_Word LambdaHeadVar__1_146,
  MR_Word * LambdaHeadVar__2_147);

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
transform_hlds__closure_analysis__dump_ho_value_map_entry_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_value_map_entry_6_p_0(
  MR_Word DebugStream_7,
  MR_Word VarTable_8,
  MR_Word Var_9,
  MR_Word Values_10);

static void MR_CALL 
transform_hlds__closure_analysis__merge_closure_values_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__closure_analysis__add_any_exclusive_ho_values_4_p_0(
  MR_Word ClosureInfo_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_HoValueMap_0_11,
  MR_Word * STATE_VARIABLE_HoValueMap_12);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word Debug_7,
  MR_Word PPId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24);

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_5_p_0(
  MR_Word DebugStream_6,
  MR_Word VarTable_7,
  MR_Word Goal_8);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_cases_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_cases_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word ClosureInfo0_5,
  MR_Word STATE_VARIABLE_MergedCaseClosureInfo_0_6,
  MR_Word * STATE_VARIABLE_MergedCaseClosureInfo_7);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_disjuncts_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_disjuncts_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word ClosureInfo0_5,
  MR_Word STATE_VARIABLE_MergedDisjunctClosureInfo_0_6,
  MR_Word * STATE_VARIABLE_MergedDisjunctClosureInfo_7);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
  MR_Word ModuleInfo_7,
  MR_Word VarTable_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_ClosureInfo_0_115,
  MR_Word * STATE_VARIABLE_ClosureInfo_116);

static void MR_CALL 
transform_hlds__closure_analysis__partition_higher_order_arguments_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
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
  MR_Word VarTable_3,
  MR_Word Var_4);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_scc_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word Debug_7,
  MR_Word SCC_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11);

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_module_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_2[11][3];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_3[3][8];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_4[3][6];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_5[2][9];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_6[2][7];

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_7[2][5];




static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_2[11][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_disjuncts_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_cases_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_7[1])),
    ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_proc_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_3[3][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_4[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_5[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_6[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__closure_analysis_scalar_common_7[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__closure_analysis__type_ctor_info_closure_values_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__closure_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__closure_analysis__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__closure_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__closure_analysis__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__closure_analysis__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__closure_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__closure_analysis____Unify____closure_info_0_0_10001)),
  ((MR_Box) (transform_hlds__closure_analysis____Compare____closure_info_0_0_10001)),
  (MR_String) "transform_hlds.closure_analysis",
  (MR_String) "closure_info",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__closure_analysis__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__closure_analysis__type_ctor_info_closure_values_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_0 = {
  (MR_String) "unknown",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__closure_analysis__transform_hlds__closure_analysis__field_types_closure_values_0_1[1] = { (MR_PseudoTypeInfo) (&transform_hlds__closure_analysis__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0) };

static const MR_DuFunctorDesc transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_1 = {
  (MR_String) "partial",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__closure_analysis__transform_hlds__closure_analysis__field_types_closure_values_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__closure_analysis__transform_hlds__closure_analysis__field_types_closure_values_0_2[1] = { (MR_PseudoTypeInfo) (&transform_hlds__closure_analysis__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0) };

static const MR_DuFunctorDesc transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_2 = {
  (MR_String) "exclusive",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  transform_hlds__closure_analysis__transform_hlds__closure_analysis__field_types_closure_values_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_0[1] = { &transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_0 };

static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_1[1] = { &transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_1 };

static const MR_DuFunctorDescPtr transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_2[1] = { &transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_functor_desc_closure_values_0_2 };

static const MR_DuPtagLayout transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_ptag_ordered_closure_values_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_stag_ordered_closure_values_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__closure_analysis____Unify____closure_values_0_0_10001)),
  ((MR_Box) (transform_hlds__closure_analysis____Compare____closure_values_0_0_10001)),
  (MR_String) "transform_hlds.closure_analysis",
  (MR_String) "closure_values",
  { transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_name_ordered_closure_values_0 },
  { transform_hlds__closure_analysis__transform_hlds__closure_analysis__du_ptag_ordered_closure_values_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  transform_hlds__closure_analysis__transform_hlds__closure_analysis__functor_number_map_closure_values_0,

};

static void MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value_map_entry__531__1_4_p_0(
  MR_Word DebugStream_7,
  MR_Word LambdaHeadVar__1_22)
{
  mercury__io__write_string_4_p_0(DebugStream_7, (MR_String) "\t");
  mercury__io__write_line_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DebugStream_7, ((MR_Box) (LambdaHeadVar__1_22)));
}

static MR_Word MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__func__dump_closure_info__492__1_1_f_0(
  MR_Word LambdaHeadVar__1_59)
{
  MR_Word LambdaHeadVar__2_60 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_59, (MR_Integer) 2))));

  return LambdaHeadVar__2_60;
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__342__1_3_p_0(
  MR_Word ModuleInfo_7,
  MR_Word LambdaHeadVar__1_146,
  MR_Word * LambdaHeadVar__2_147)
{
  MR_bool succeeded;
  MR_Word Var_107 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_146, (MR_Integer) 0))));
  MR_Word NameMode_108 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_146, (MR_Integer) 1))));
  MR_Word Type_109 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_146, (MR_Integer) 2))));
  MR_Word Mode_112;
  MR_Word Var_148;
  MR_Word Var_149;

  succeeded = (NameMode_108 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_148 = ((MR_Word) ((MR_hl_field(1, NameMode_108, (MR_Integer) 0))));
    Mode_112 = ((MR_Word) ((MR_hl_field(0, Var_148, (MR_Integer) 1))));
    succeeded = check_hlds__mode_test__mode_is_output_2_p_0(ModuleInfo_7, Mode_112);
    if (succeeded)
    {
      succeeded = parse_tree__prog_type_test__type_is_higher_order_1_p_0(Type_109);
      if (succeeded)
      {
        Var_149 = (MR_Word) ((MR_Unsigned) 0U);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *LambdaHeadVar__2_147 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_107));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_149));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_values_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_21)), ((MR_Box) (ArgY1_8)));
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
          MR_Word Var_20 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_20)), ((MR_Box) (ArgY1_15)));
              }
              break;
          }
        }
        break;
    }
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_values_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
          MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_4 == CastX_3);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_12_12;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_12_12 = (MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_11_11;
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_11_11 = (MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__closure_analysis_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__closure_analysis_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_value_map_entry_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__closure_analysis__IntroducedFrom__pred__dump_ho_value_map_entry__531__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_ho_value_map_entry_6_p_0(
  MR_Word DebugStream_7,
  MR_Word VarTable_8,
  MR_Word Var_9,
  MR_Word Values_10)
{
  MR_String VarName_12;
  MR_Word WritePPIds_13;
  MR_Box conv0_STATE_VARIABLE_IO_16;

  VarName_12 = parse_tree__var_table__var_table_entry_name_2_f_0(VarTable_8, Var_9);
  mercury__io__write_string_4_p_0(DebugStream_7, VarName_12);
  mercury__io__write_string_4_p_0(DebugStream_7, (MR_String) " =\n");
  {
    WritePPIds_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, WritePPIds_13, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_6[1]));
    MR_hl_field(0, WritePPIds_13, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_ho_value_map_entry_6_p_0_1));
    MR_hl_field(0, WritePPIds_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, WritePPIds_13, 3) = ((MR_Box) (DebugStream_7));
  }
  mercury__set__fold_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), WritePPIds_13, Values_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_16);
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
          *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = HeadVar__2_2;
          break;
        case (MR_Integer) 2:
          {
            MR_Word A_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (A_5));
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__3_3 = HeadVar__1_1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word B_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word Var_9;

              Var_9 = mercury__set__union_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_25, B_8);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_9));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word B_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word Var_12;

              Var_12 = mercury__set__union_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_25, B_11);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_12));
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_24));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word B_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word Var_16;

              Var_16 = mercury__set__union_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_24, B_15);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word B_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word Var_19;

              Var_19 = mercury__set__union_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_24, B_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(2, base, 0) = ((MR_Box) (Var_19));
              }
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__add_any_exclusive_ho_values_4_p_0(
  MR_Word ClosureInfo_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_HoValueMap_0_11,
  MR_Word * STATE_VARIABLE_HoValueMap_12)
{
  MR_bool succeeded;
  MR_Word PossibleValues_8;
  MR_Box conv0_PossibleValues_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0), ClosureInfo_5, ((MR_Box) (Var_6)), &conv0_PossibleValues_8);
  if (succeeded)
  {
    PossibleValues_8 = ((MR_Word) (conv0_PossibleValues_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    switch (MR_tag((MR_Word) PossibleValues_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HoValueMap_12 = STATE_VARIABLE_HoValueMap_0_11;
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_HoValueMap_12 = STATE_VARIABLE_HoValueMap_0_11;
        break;
      case (MR_Integer) 2:
        {
          MR_Word KnownValues_10 = ((MR_Word) ((MR_hl_field(2, PossibleValues_8, (MR_Integer) 0))));

          mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[0]), ((MR_Box) (Var_6)), ((MR_Box) (KnownValues_10)), STATE_VARIABLE_HoValueMap_0_11, STATE_VARIABLE_HoValueMap_12);
        }
        break;
    }
  else
    *STATE_VARIABLE_HoValueMap_12 = STATE_VARIABLE_HoValueMap_0_11;
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ClosureInfo_7;

  transform_hlds__closure_analysis__insert_unknown_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ClosureInfo_7);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ClosureInfo_7));
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__closure_analysis__var_has_ho_type_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_proc_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word Debug_7,
  MR_Word PPId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24)
{
  MR_bool succeeded;
  MR_Word PredInfo_10;
  MR_Word ProcInfo0_11;
  MR_Word HeadVars_12;
  MR_Word VarTable_13;
  MR_Word ArgModes_14;
  MR_Word ClosureInfo0_15;
  MR_Word BodyGoal0_17;
  MR_Word BodyGoal_18;
  MR_Word ProcInfo_22;
  MR_Word Inputs0_32;
  MR_Word Inputs_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Word _Outputs_33;
  MR_Box conv1_ClosureInfo0_15;
  MR_Word _ClosureInfo_19;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_23, PPId_8, &PredInfo_10, &ProcInfo0_11);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_11, &HeadVars_12);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_11, &VarTable_13);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo0_11, &ArgModes_14);
  Var_35 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  Var_36 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  transform_hlds__closure_analysis__partition_higher_order_arguments_8_p_0(STATE_VARIABLE_ModuleInfo_0_23, VarTable_13, HeadVars_12, ArgModes_14, Var_35, &Inputs0_32, Var_36, &_Outputs_33);
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_7[0]));
    MR_hl_field(0, Var_37, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_proc_5_p_0_1));
    MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_37, 3) = ((MR_Box) (VarTable_13));
  }
  Inputs_34 = parse_tree__set_of_var__filter_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_37, Inputs0_32);
  Var_39 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0));
  parse_tree__set_of_var__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_2[0]), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_2[10]), Inputs_34, ((MR_Box) (Var_39)), &conv1_ClosureInfo0_15);
  ClosureInfo0_15 = ((MR_Word) (conv1_ClosureInfo0_15));
  hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(ProgressStream_6, STATE_VARIABLE_ModuleInfo_0_23, (MR_String) "Analysing closures in", PPId_8);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_11, &BodyGoal0_17);
  transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(STATE_VARIABLE_ModuleInfo_0_23, VarTable_13, BodyGoal0_17, &BodyGoal_18, ClosureInfo0_15, &_ClosureInfo_19);
  switch (Debug_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DebugStream_21;

        hlds__passes_aux__get_debug_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_0_23, &DebugStream_21);
        transform_hlds__closure_analysis__dump_closure_info_5_p_0(DebugStream_21, VarTable_13, BodyGoal_18);
        mercury__io__flush_output_3_p_0(DebugStream_21);
      }
      break;
  }
  hlds__hlds_pred__proc_info_set_goal_3_p_0(BodyGoal_18, ProcInfo0_11, &ProcInfo_22);
  hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PPId_8, PredInfo_10, ProcInfo_22, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__closure_analysis__dump_closure_info_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static MR_Box MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__2_60;

  conv4_LambdaHeadVar__2_60 = transform_hlds__closure_analysis__IntroducedFrom__func__dump_closure_info__492__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_60));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  transform_hlds__closure_analysis__dump_ho_value_map_entry_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  transform_hlds__closure_analysis__dump_ho_value_map_entry_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__closure_analysis__dump_closure_info_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__closure_analysis__dump_closure_info_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
transform_hlds__closure_analysis__dump_closure_info_5_p_0(
  MR_Word DebugStream_6,
  MR_Word VarTable_7,
  MR_Word Goal_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 0))));
    MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_47 = (MR_Word) ((MR_Word) (GoalExpr_10));
          MR_Word next_value_of_Goal_8 = SubGoal_47;

          // direct tailcall eliminated
          ;
          Goal_8 = next_value_of_Goal_8;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word HoValueMap_104;

          HoValueMap_104 = hlds__hlds_goal__goal_info_get_higher_order_value_map_1_f_0(GoalInfo_11);
          succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[0]), HoValueMap_104);
          if (!(succeeded))
          {
            MR_Word Context_105;
            MR_Word Var_108;
            MR_Box conv3_STATE_VARIABLE_IO_51;

            Context_105 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
            parse_tree__parse_tree_out_misc__write_context_4_p_0(DebugStream_6, Context_105);
            mercury__io__nl_3_p_0(DebugStream_6);
            {
              Var_108 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_108, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[1]));
              MR_hl_field(0, Var_108, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_5_p_0_4));
              MR_hl_field(0, Var_108, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_108, 3) = ((MR_Box) (DebugStream_6));
              MR_hl_field(0, Var_108, 4) = ((MR_Box) (VarTable_7));
            }
            mercury__map__foldl_4_p_2((MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_108, HoValueMap_104, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_51);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word HoValueMap_94;

              HoValueMap_94 = hlds__hlds_goal__goal_info_get_higher_order_value_map_1_f_0(GoalInfo_11);
              succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[0]), HoValueMap_94);
              if (!(succeeded))
              {
                MR_Word Context_95;
                MR_Word Var_98;
                MR_Box conv2_STATE_VARIABLE_IO_51;

                Context_95 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                parse_tree__parse_tree_out_misc__write_context_4_p_0(DebugStream_6, Context_95);
                mercury__io__nl_3_p_0(DebugStream_6);
                {
                  Var_98 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_98, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[1]));
                  MR_hl_field(0, Var_98, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_5_p_0_3));
                  MR_hl_field(0, Var_98, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_98, 3) = ((MR_Box) (DebugStream_6));
                  MR_hl_field(0, Var_98, 4) = ((MR_Box) (VarTable_7));
                }
                mercury__map__foldl_4_p_2((MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_98, HoValueMap_94, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_51);
              }
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubGoals_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));
              MR_Word Var_54;
              MR_Box conv0_STATE_VARIABLE_IO_51;

              {
                Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_54, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_3[2]));
                MR_hl_field(0, Var_54, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_5_p_0_1));
                MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_54, 3) = ((MR_Box) (DebugStream_6));
                MR_hl_field(0, Var_54, 4) = ((MR_Box) (VarTable_7));
              }
              mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, SubGoals_36, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_51);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_56;
              MR_Word SubGoals_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));
              MR_Box conv1_STATE_VARIABLE_IO_51;

              {
                Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_56, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_3[2]));
                MR_hl_field(0, Var_56, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_5_p_0_2));
                MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_56, 3) = ((MR_Box) (DebugStream_6));
                MR_hl_field(0, Var_56, 4) = ((MR_Box) (VarTable_7));
              }
              mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_56, SubGoals_70, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_51);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 3))));
              MR_Word Var_61;
              MR_Word SubGoals_76;
              MR_Box conv5_STATE_VARIABLE_IO_51;

              SubGoals_76 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_2[9]), Cases_39);
              {
                Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_61, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_3[2]));
                MR_hl_field(0, Var_61, 1) = ((MR_Box) (transform_hlds__closure_analysis__dump_closure_info_5_p_0_6));
                MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_61, 3) = ((MR_Box) (DebugStream_6));
                MR_hl_field(0, Var_61, 4) = ((MR_Box) (VarTable_7));
              }
              mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, SubGoals_76, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_51);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));
              MR_Word next_value_of_Goal_8 = SubGoal_77;

              // direct tailcall eliminated
              ;
              Goal_8 = next_value_of_Goal_8;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word CondGoal_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));
              MR_Word ThenGoal_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 3))));
              MR_Word ElseGoal_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 4))));
              MR_Word next_value_of_Goal_8;

              transform_hlds__closure_analysis__dump_closure_info_5_p_0(DebugStream_6, VarTable_7, CondGoal_44);
              transform_hlds__closure_analysis__dump_closure_info_5_p_0(DebugStream_6, VarTable_7, ThenGoal_45);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_8 = ElseGoal_46;
              Goal_8 = next_value_of_Goal_8;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.closure_analysis.dump_closure_info\'/5", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_cases_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  transform_hlds__closure_analysis__merge_closure_values_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_cases_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word ClosureInfo0_5,
  MR_Word STATE_VARIABLE_MergedCaseClosureInfo_0_6,
  MR_Word * STATE_VARIABLE_MergedCaseClosureInfo_7)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_MergedCaseClosureInfo_7 = STATE_VARIABLE_MergedCaseClosureInfo_0_6;
  }
  else
  {
    MR_Word Case0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Cases0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Case_18;
    MR_Word Cases_19;
    MR_Word CaseClosureInfo_22;
    MR_Word STATE_VARIABLE_MergedCaseClosureInfo_25_25;
    MR_Word MainConsId_26 = ((MR_Word) ((MR_hl_field(0, Case0_16, (MR_Integer) 0))));
    MR_Word OtherConsIds_27 = ((MR_Word) ((MR_hl_field(0, Case0_16, (MR_Integer) 1))));
    MR_Word CaseGoal0_28 = ((MR_Word) ((MR_hl_field(0, Case0_16, (MR_Integer) 2))));
    MR_Word CaseGoal_29;

    transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(ModuleInfo_1, VarTable_2, CaseGoal0_28, &CaseGoal_29, ClosureInfo0_5, &CaseClosureInfo_22);
    {
      Case_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_18, 0) = ((MR_Box) (MainConsId_26));
      MR_hl_field(0, Case_18, 1) = ((MR_Box) (OtherConsIds_27));
      MR_hl_field(0, Case_18, 2) = ((MR_Box) (CaseGoal_29));
    }
    mercury__map__union_4_p_1((MR_Word) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_2[8]), CaseClosureInfo_22, STATE_VARIABLE_MergedCaseClosureInfo_0_6, &STATE_VARIABLE_MergedCaseClosureInfo_25_25);
    transform_hlds__closure_analysis__closure_analyse_cases_7_p_0(ModuleInfo_1, VarTable_2, Cases0_17, &Cases_19, ClosureInfo0_5, STATE_VARIABLE_MergedCaseClosureInfo_25_25, STATE_VARIABLE_MergedCaseClosureInfo_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_19));
    }
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_disjuncts_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  transform_hlds__closure_analysis__merge_closure_values_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_disjuncts_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word ClosureInfo0_5,
  MR_Word STATE_VARIABLE_MergedDisjunctClosureInfo_0_6,
  MR_Word * STATE_VARIABLE_MergedDisjunctClosureInfo_7)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_MergedDisjunctClosureInfo_7 = STATE_VARIABLE_MergedDisjunctClosureInfo_0_6;
  }
  else
  {
    MR_Word Disjunct0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Disjuncts0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Disjunct_18;
    MR_Word Disjuncts_19;
    MR_Word DisjunctClosureInfo_22;
    MR_Word STATE_VARIABLE_MergedDisjunctClosureInfo_25_25;

    transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(ModuleInfo_1, VarTable_2, Disjunct0_16, &Disjunct_18, ClosureInfo0_5, &DisjunctClosureInfo_22);
    mercury__map__union_4_p_1((MR_Word) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_2[7]), DisjunctClosureInfo_22, STATE_VARIABLE_MergedDisjunctClosureInfo_0_6, &STATE_VARIABLE_MergedDisjunctClosureInfo_25_25);
    transform_hlds__closure_analysis__closure_analyse_disjuncts_7_p_0(ModuleInfo_1, VarTable_2, Disjuncts0_17, &Disjuncts_19, ClosureInfo0_5, STATE_VARIABLE_MergedDisjunctClosureInfo_25_25, STATE_VARIABLE_MergedDisjunctClosureInfo_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Disjunct_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (Disjuncts_19));
    }
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_STATE_VARIABLE_ClosureInfo_7;

  transform_hlds__closure_analysis__insert_unknown_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_ClosureInfo_7);
  *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_ClosureInfo_7));
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__closure_analysis__var_has_ho_type_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_STATE_VARIABLE_ClosureInfo_7;

  transform_hlds__closure_analysis__insert_unknown_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_ClosureInfo_7);
  *wrapper_arg_3 = ((MR_Box) (conv11_STATE_VARIABLE_ClosureInfo_7));
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_HoValueMap_12;

  transform_hlds__closure_analysis__add_any_exclusive_ho_values_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_HoValueMap_12);
  *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_HoValueMap_12));
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__3_3;

  transform_hlds__closure_analysis__merge_closure_values_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv8_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_ClosureInfo_7;

  transform_hlds__closure_analysis__insert_unknown_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ClosureInfo_7);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ClosureInfo_7));
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_HoValueMap_12;

  transform_hlds__closure_analysis__add_any_exclusive_ho_values_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_HoValueMap_12);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_HoValueMap_12));
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Goal_10;
  MR_Word conv1_STATE_VARIABLE_ClosureInfo_116;

  transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_Goal_10, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_ClosureInfo_116);
  *wrapper_arg_2 = ((MR_Box) (conv2_Goal_10));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_ClosureInfo_116));
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_147;

  succeeded = transform_hlds__closure_analysis__IntroducedFrom__pred__closure_analyse_goal__342__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_147);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_147));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarTable_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_ClosureInfo_0_115,
  MR_Word * STATE_VARIABLE_ClosureInfo_116)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 0))));
  MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) GoalExpr0_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word NegatedGoal0_80 = (MR_Word) ((MR_Word) (GoalExpr0_12));
        MR_Word NegatedGoal_81;
        MR_Word GoalExpr_163;
        MR_Word Var_82;

        transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(ModuleInfo_7, VarTable_8, NegatedGoal0_80, &NegatedGoal_81, STATE_VARIABLE_ClosureInfo_0_115, &Var_82);
        GoalExpr_163 = (MR_Word) ((MR_Word) (NegatedGoal_81));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_163));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
        }
        *STATE_VARIABLE_ClosureInfo_116 = STATE_VARIABLE_ClosureInfo_0_115;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unification_54 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_12, (MR_Integer) 3))));

        switch (MR_tag((MR_Word) Unification_54)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LHS_56 = ((MR_Word) ((MR_hl_field(0, Unification_54, (MR_Integer) 0))));
              MR_Word RHS_57 = ((MR_Word) ((MR_hl_field(0, Unification_54, (MR_Integer) 1))));
              MR_Word ShroudedPPId_63;

              succeeded = ((((MR_tag((MR_Word) RHS_57)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RHS_57, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ShroudedPPId_63 = ((MR_Word) ((MR_hl_field(3, RHS_57, (MR_Integer) 1))));
                {
                  MR_Word PPId_65;
                  MR_Word HO_Value_66;
                  MR_Word Var_133;

                  PPId_65 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPPId_63);
                  HO_Value_66 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PPId_65)));
                  {
                    Var_133 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_133, 0) = ((MR_Box) (HO_Value_66));
                  }
                  mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0), ((MR_Box) (LHS_56)), ((MR_Box) (Var_133)), STATE_VARIABLE_ClosureInfo_0_115, STATE_VARIABLE_ClosureInfo_116);
                }
              }
              else
                *STATE_VARIABLE_ClosureInfo_116 = STATE_VARIABLE_ClosureInfo_0_115;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_69 = ((MR_Word) ((MR_hl_field(1, Unification_54, (MR_Integer) 2))));
              MR_Word HO_Args_73;
              MR_Word Var_135;
              MR_Box conv15_STATE_VARIABLE_ClosureInfo_116;

              {
                Var_135 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_135, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_7[0]));
                MR_hl_field(0, Var_135, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_8));
                MR_hl_field(0, Var_135, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_135, 3) = ((MR_Box) (VarTable_8));
              }
              HO_Args_73 = mercury__list__filter_2_f_0((MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[1]), Var_135, Args_69);
              mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_2[0]), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_2[6]), HO_Args_73, ((MR_Box) (STATE_VARIABLE_ClosureInfo_0_115)), &conv15_STATE_VARIABLE_ClosureInfo_116);
              *STATE_VARIABLE_ClosureInfo_116 = ((MR_Word) (conv15_STATE_VARIABLE_ClosureInfo_116));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word LHS_158 = ((MR_Word) ((MR_hl_field(2, Unification_54, (MR_Integer) 0))));
              MR_Word RHS_159 = ((MR_Word) ((MR_hl_field(2, Unification_54, (MR_Integer) 1))));

              succeeded = transform_hlds__closure_analysis__var_has_ho_type_2_p_0(VarTable_8, LHS_158);
              if (succeeded)
              {
                MR_Word Values_74;
                MR_Box conv13_Values_74;

                succeeded = transform_hlds__closure_analysis__var_has_ho_type_2_p_0(VarTable_8, RHS_159);
                if (!(succeeded))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.closure_analysis.closure_analyse_goal\'/6", (MR_String) "not a higher-order var");
                    return;
                  }
                conv13_Values_74 = mercury__map__lookup_2_f_0((MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0), STATE_VARIABLE_ClosureInfo_0_115, ((MR_Box) (RHS_159)));
                Values_74 = ((MR_Word) (conv13_Values_74));
                mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0), ((MR_Box) (LHS_158)), ((MR_Box) (Values_74)), STATE_VARIABLE_ClosureInfo_0_115, STATE_VARIABLE_ClosureInfo_116);
              }
              else
                *STATE_VARIABLE_ClosureInfo_116 = STATE_VARIABLE_ClosureInfo_0_115;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Unification_54, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_ClosureInfo_116 = STATE_VARIABLE_ClosureInfo_0_115;
                break;
              case (MR_Integer) 1:
                *STATE_VARIABLE_ClosureInfo_116 = STATE_VARIABLE_ClosureInfo_0_115;
                break;
            }
            break;
        }
        *Goal_10 = Goal0_9;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word CallPredId_18 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_12, (MR_Integer) 0))));
        MR_Integer CallProcId_19 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_12, (MR_Integer) 1))));
        MR_Word CallArgs_20 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_12, (MR_Integer) 2))));
        MR_Word CallProcInfo_25;
        MR_Word CallArgModes_26;
        MR_Word InputArgs_27;
        MR_Word OutputArgs_28;
        MR_Word HoValueMap_29;
        MR_Word GoalInfo_30;
        MR_Word Var_119;
        MR_Word Var_120;
        MR_Word Var_121;
        MR_Word Var_122;
        MR_Word _CallPredInfo_24;
        MR_Box conv10_HoValueMap_29;
        MR_Box conv12_STATE_VARIABLE_ClosureInfo_116;

        hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_7, CallPredId_18, CallProcId_19, &_CallPredInfo_24, &CallProcInfo_25);
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CallProcInfo_25, &CallArgModes_26);
        Var_119 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        Var_120 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        transform_hlds__closure_analysis__partition_higher_order_arguments_8_p_0(ModuleInfo_7, VarTable_8, CallArgs_20, CallArgModes_26, Var_119, &InputArgs_27, Var_120, &OutputArgs_28);
        {
          Var_121 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_121, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_6[0]));
          MR_hl_field(0, Var_121, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_6));
          MR_hl_field(0, Var_121, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_121, 3) = ((MR_Box) (STATE_VARIABLE_ClosureInfo_0_115));
        }
        Var_122 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[0]));
        parse_tree__set_of_var__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_2[1]), Var_121, InputArgs_27, ((MR_Box) (Var_122)), &conv10_HoValueMap_29);
        HoValueMap_29 = ((MR_Word) (conv10_HoValueMap_29));
        hlds__hlds_goal__goal_info_set_higher_order_value_map_3_p_0(HoValueMap_29, GoalInfo0_13, &GoalInfo_30);
        parse_tree__set_of_var__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_2[0]), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_2[5]), OutputArgs_28, ((MR_Box) (STATE_VARIABLE_ClosureInfo_0_115)), &conv12_STATE_VARIABLE_ClosureInfo_116);
        *STATE_VARIABLE_ClosureInfo_116 = ((MR_Word) (conv12_STATE_VARIABLE_ClosureInfo_116));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_12));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_30));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericDetails_31 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word GCallArgs_32 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word GCallModes_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 3))));
            MR_Word InputArgs0_36;
            MR_Word Var_125;
            MR_Word Var_126;
            MR_Word Var_127;
            MR_Word Var_128;
            MR_Word InputArgs_153;
            MR_Word OutputArgs_154;
            MR_Word HoValueMap_155;
            MR_Word GoalInfo_156;
            MR_Box conv5_HoValueMap_155;
            MR_Box conv7_STATE_VARIABLE_ClosureInfo_116;

            Var_125 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            Var_126 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            transform_hlds__closure_analysis__partition_higher_order_arguments_8_p_0(ModuleInfo_7, VarTable_8, GCallArgs_32, GCallModes_33, Var_125, &InputArgs0_36, Var_126, &OutputArgs_154);
            switch (MR_tag((MR_Word) GenericDetails_31)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word CalledClosure0_37 = ((MR_Word) ((MR_hl_field(0, GenericDetails_31, (MR_Integer) 0))));

                  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CalledClosure0_37, InputArgs0_36, &InputArgs_153);
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                InputArgs_153 = InputArgs0_36;
                break;
            }
            {
              Var_127 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_127, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_6[0]));
              MR_hl_field(0, Var_127, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_3));
              MR_hl_field(0, Var_127, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_127, 3) = ((MR_Box) (STATE_VARIABLE_ClosureInfo_0_115));
            }
            Var_128 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[0]));
            parse_tree__set_of_var__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_2[1]), Var_127, InputArgs_153, ((MR_Box) (Var_128)), &conv5_HoValueMap_155);
            HoValueMap_155 = ((MR_Word) (conv5_HoValueMap_155));
            hlds__hlds_goal__goal_info_set_higher_order_value_map_3_p_0(HoValueMap_155, GoalInfo0_13, &GoalInfo_156);
            parse_tree__set_of_var__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_2[0]), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_2[3]), OutputArgs_154, ((MR_Box) (STATE_VARIABLE_ClosureInfo_0_115)), &conv7_STATE_VARIABLE_ClosureInfo_116);
            *STATE_VARIABLE_ClosureInfo_116 = ((MR_Word) (conv7_STATE_VARIABLE_ClosureInfo_116));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_12));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_156));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ForeignHOArgs_104;
            MR_Word OutputForeignHOArgs_113;
            MR_Word Args_168 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 4))));

            {
              ForeignHOArgs_104 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ForeignHOArgs_104, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_4[0]));
              MR_hl_field(0, ForeignHOArgs_104, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_1));
              MR_hl_field(0, ForeignHOArgs_104, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, ForeignHOArgs_104, 3) = ((MR_Box) (ModuleInfo_7));
            }
            mercury__list__filter_map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_2[2]), ForeignHOArgs_104, Args_168, &OutputForeignHOArgs_113);
            mercury__map__det_insert_from_assoc_list_3_p_0((MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0), OutputForeignHOArgs_113, STATE_VARIABLE_ClosureInfo_0_115, STATE_VARIABLE_ClosureInfo_116);
            *Goal_10 = Goal0_9;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_14 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word Goals_16;
            MR_Word GoalExpr_17;
            MR_Word Var_117;
            MR_Box conv3_STATE_VARIABLE_ClosureInfo_116;

            {
              Var_117 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_117, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_5[0]));
              MR_hl_field(0, Var_117, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_goal_6_p_0_2));
              MR_hl_field(0, Var_117, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_117, 3) = ((MR_Box) (ModuleInfo_7));
              MR_hl_field(0, Var_117, 4) = ((MR_Box) (VarTable_8));
            }
            mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_2[0]), Var_117, Goals0_15, &Goals_16, ((MR_Box) (STATE_VARIABLE_ClosureInfo_0_115)), &conv3_STATE_VARIABLE_ClosureInfo_116);
            *STATE_VARIABLE_ClosureInfo_116 = ((MR_Word) (conv3_STATE_VARIABLE_ClosureInfo_116));
            {
              GoalExpr_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_17, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_17, 1) = (MR_Box) ((MR_Unsigned) (ConjType_14));
              MR_hl_field(3, GoalExpr_17, 2) = ((MR_Box) (Goals_16));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_17));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_141;
            MR_Word Goals0_160 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Goals_161;
            MR_Word GoalExpr_162;

            Var_141 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0));
            transform_hlds__closure_analysis__closure_analyse_disjuncts_7_p_0(ModuleInfo_7, VarTable_8, Goals0_160, &Goals_161, STATE_VARIABLE_ClosureInfo_0_115, Var_141, STATE_VARIABLE_ClosureInfo_116);
            {
              GoalExpr_162 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_162, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_162, 1) = ((MR_Box) (Goals_161));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_162));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word SwitchVar_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word SwitchCanFail_48 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 3))));
            MR_Word Cases_50;
            MR_Word Var_131;
            MR_Word GoalExpr_157;

            Var_131 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0));
            transform_hlds__closure_analysis__closure_analyse_cases_7_p_0(ModuleInfo_7, VarTable_8, Cases0_49, &Cases_50, STATE_VARIABLE_ClosureInfo_0_115, Var_131, STATE_VARIABLE_ClosureInfo_116);
            {
              GoalExpr_157 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_157, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_157, 1) = ((MR_Box) (SwitchVar_47));
              MR_hl_field(3, GoalExpr_157, 2) = (MR_Box) ((MR_Unsigned) (SwitchCanFail_48));
              MR_hl_field(3, GoalExpr_157, 3) = ((MR_Box) (Cases_50));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_157));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_83 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word SubGoal0_84 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word SubGoal_87;
            MR_Word GoalExpr_164;
            MR_Word FGT_86;

            succeeded = ((((MR_tag((MR_Word) Reason_83)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_83, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              FGT_86 = ((MR_Unsigned) ((MR_hl_field(3, Reason_83, (MR_Integer) 2))) & (MR_Integer) 3);
              switch (FGT_86) {
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
              SubGoal_87 = SubGoal0_84;
              *STATE_VARIABLE_ClosureInfo_116 = STATE_VARIABLE_ClosureInfo_0_115;
            }
            else
              transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(ModuleInfo_7, VarTable_8, SubGoal0_84, &SubGoal_87, STATE_VARIABLE_ClosureInfo_0_115, STATE_VARIABLE_ClosureInfo_116);
            {
              GoalExpr_164 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_164, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_164, 1) = ((MR_Box) (Reason_83));
              MR_hl_field(3, GoalExpr_164, 2) = ((MR_Box) (SubGoal_87));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_164));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ExistQVars_88 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Cond0_89 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word Then0_90 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 3))));
            MR_Word Else0_91 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 4))));
            MR_Word Cond_92;
            MR_Word CondInfo_93;
            MR_Word Then_94;
            MR_Word CondThenInfo_95;
            MR_Word Else_96;
            MR_Word ElseInfo_97;
            MR_Word GoalExpr_165;

            transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(ModuleInfo_7, VarTable_8, Cond0_89, &Cond_92, STATE_VARIABLE_ClosureInfo_0_115, &CondInfo_93);
            transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(ModuleInfo_7, VarTable_8, Then0_90, &Then_94, CondInfo_93, &CondThenInfo_95);
            transform_hlds__closure_analysis__closure_analyse_goal_6_p_0(ModuleInfo_7, VarTable_8, Else0_91, &Else_96, STATE_VARIABLE_ClosureInfo_0_115, &ElseInfo_97);
            mercury__map__union_4_p_1((MR_Word) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__closure_analysis_scalar_common_2[4]), CondThenInfo_95, ElseInfo_97, STATE_VARIABLE_ClosureInfo_116);
            {
              GoalExpr_165 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_165, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_165, 1) = ((MR_Box) (ExistQVars_88));
              MR_hl_field(3, GoalExpr_165, 2) = ((MR_Box) (Cond_92));
              MR_hl_field(3, GoalExpr_165, 3) = ((MR_Box) (Then_94));
              MR_hl_field(3, GoalExpr_165, 4) = ((MR_Box) (Else_96));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_165));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.closure_analysis.closure_analyse_goal\'/6", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__closure_analysis__partition_higher_order_arguments_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
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
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_Outputs_8 = STATE_VARIABLE_Outputs_0_7;
        *STATE_VARIABLE_Inputs_6 = STATE_VARIABLE_Inputs_0_5;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.closure_analysis.partition_higher_order_arguments\'/8", (MR_String) "unequal length lists.");
          return;
        }
    else
    {
      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.closure_analysis.partition_higher_order_arguments\'/8", (MR_String) "unequal length lists.");
          return;
        }
      else
      {
        MR_Word Mode_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
        MR_Word Modes_42 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_Inputs_49_49;
        MR_Word STATE_VARIABLE_Outputs_50_50;
        MR_Word Type_55;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Inputs_0_5;
        MR_Word next_value_of_STATE_VARIABLE_Outputs_0_7;

        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_2, Var_54, &Type_55);
        succeeded = parse_tree__prog_type_test__type_is_higher_order_1_p_0(Type_55);
        if (succeeded)
        {
          succeeded = check_hlds__mode_test__mode_is_input_2_p_0(ModuleInfo_1, Mode_41);
          if (succeeded)
          {
            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_54, STATE_VARIABLE_Inputs_0_5, &STATE_VARIABLE_Inputs_49_49);
            STATE_VARIABLE_Outputs_50_50 = STATE_VARIABLE_Outputs_0_7;
          }
          else
          {
            succeeded = check_hlds__mode_test__mode_is_output_2_p_0(ModuleInfo_1, Mode_41);
            if (succeeded)
              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_54, STATE_VARIABLE_Outputs_0_7, &STATE_VARIABLE_Outputs_50_50);
            else
              STATE_VARIABLE_Outputs_50_50 = STATE_VARIABLE_Outputs_0_7;
            STATE_VARIABLE_Inputs_49_49 = STATE_VARIABLE_Inputs_0_5;
          }
        }
        else
        {
          STATE_VARIABLE_Outputs_50_50 = STATE_VARIABLE_Outputs_0_7;
          STATE_VARIABLE_Inputs_49_49 = STATE_VARIABLE_Inputs_0_5;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Var_53;
        next_value_of_HeadVar__4_4 = Modes_42;
        next_value_of_STATE_VARIABLE_Inputs_0_5 = STATE_VARIABLE_Inputs_49_49;
        next_value_of_STATE_VARIABLE_Outputs_0_7 = STATE_VARIABLE_Outputs_50_50;
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
  mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__closure_analysis__transform_hlds__closure_analysis__type_ctor_info_closure_values_0), ((MR_Box) (Var_4)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_ClosureInfo_0_6, STATE_VARIABLE_ClosureInfo_7);
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis__var_has_ho_type_2_p_0(
  MR_Word VarTable_3,
  MR_Word Var_4)
{
  MR_bool succeeded;
  MR_Word Type_5;

  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_3, Var_4, &Type_5);
  succeeded = parse_tree__prog_type_test__type_is_higher_order_1_p_0(Type_5);
  return succeeded;
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_24;

  transform_hlds__closure_analysis__closure_analyse_proc_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_24);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_24));
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_scc_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word Debug_7,
  MR_Word SCC_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11)
{
  MR_Word Var_12;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_11;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_3[1]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_scc_5_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (ProgressStream_6));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (Debug_7));
  }
  mercury__set__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_12, SCC_8, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_10)), &conv1_STATE_VARIABLE_ModuleInfo_11);
  *STATE_VARIABLE_ModuleInfo_11 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_11));
}

static void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_module_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_11;

  transform_hlds__closure_analysis__closure_analyse_scc_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_11));
}

void MR_CALL 
transform_hlds__closure_analysis__closure_analyse_module_3_p_0(
  MR_Word ProgressStream_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11)
{
  MR_Word Globals_6;
  MR_Word Debug_7;
  MR_Word DepInfo_8;
  MR_Word SCCs_9;
  MR_Word STATE_VARIABLE_ModuleInfo_13_13;
  MR_Word Var_14;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_11;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_10, &Globals_6);
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 107, &Debug_7);
  hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_10, &STATE_VARIABLE_ModuleInfo_13_13, &DepInfo_8);
  SCCs_9 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_8);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&transform_hlds__closure_analysis_scalar_common_3[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (transform_hlds__closure_analysis__closure_analyse_module_3_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (ProgressStream_4));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (Debug_7));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__closure_analysis_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_14, SCCs_9, ((MR_Box) (STATE_VARIABLE_ModuleInfo_13_13)), &conv1_STATE_VARIABLE_ModuleInfo_11);
  *STATE_VARIABLE_ModuleInfo_11 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_11));
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__closure_analysis____Unify____closure_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__closure_analysis____Compare____closure_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__closure_analysis____Unify____closure_values_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__closure_analysis____Unify____closure_values_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__closure_analysis____Compare____closure_values_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__closure_analysis____Compare____closure_values_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
