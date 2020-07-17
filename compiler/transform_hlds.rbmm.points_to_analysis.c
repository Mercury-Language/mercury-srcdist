/*
** Automatically generated from `rbmm.points_to_analysis.m'
** by the Mercury compiler,
** version rotd-2020-07-17
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


// :- module transform_hlds.rbmm.points_to_analysis.
// :- implementation.

/*
INIT mercury__transform_hlds__rbmm__points_to_analysis__init
ENDINIT
*/

#include "transform_hlds.rbmm.points_to_analysis.mih"


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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_path.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.ctgc.fixpoint_table.mih"
#include "transform_hlds.rbmm.add_rbmm_goal_infos.mih"
#include "transform_hlds.rbmm.condition_renaming.mih"
#include "transform_hlds.rbmm.execution_path.mih"
#include "transform_hlds.rbmm.interproc_region_lifetime.mih"
#include "transform_hlds.rbmm.live_region_analysis.mih"
#include "transform_hlds.rbmm.live_variable_analysis.mih"
#include "transform_hlds.rbmm.points_to_graph.mih"
#include "transform_hlds.rbmm.points_to_info.mih"
#include "transform_hlds.rbmm.region_arguments.mih"
#include "transform_hlds.rbmm.region_instruction.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"
#include "transform_hlds.rbmm.region_resurrection_renaming.mih"
#include "transform_hlds.rbmm.region_transformation.mih"



struct transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0_s {
  MR_Word transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NY_2;
  MR_Word transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__STATE_VARIABLE_Graph_0_3;
  MR_bool transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded;
  MR_Word transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NZ_10;
  jmp_buf transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__commit_0;
};


static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_analysis__IntroducedFrom__pred__rpta_fixpoint_table_new_rpta_info__1044__1_2_p_0(
  MR_Word LambdaHeadVar__1_13,
  MR_Word LambdaHeadVar__2_14);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis____Compare____rpta_fixpoint_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_analysis____Unify____rpta_fixpoint_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
transform_hlds__rbmm__points_to_analysis__wrapped_init_2_f_0(
  MR_Word InfoTable_4,
  MR_Word PPId_5);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__update_rpta_info_in_rpta_info_table_4_p_0(
  MR_Word FPTable_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_InfoTable_0_9,
  MR_Word * STATE_VARIABLE_InfoTable_10);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_case_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word InfoTable_9,
  MR_Word Case_10,
  MR_Word STATE_VARIABLE_FPtable_0_16,
  MR_Word * STATE_VARIABLE_FPtable_17,
  MR_Word STATE_VARIABLE_RptaInfo_0_18,
  MR_Word * STATE_VARIABLE_RptaInfo_19);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word InfoTable_7,
  MR_Word PPId_8,
  MR_Word STATE_VARIABLE_FPTable_0_16,
  MR_Word * STATE_VARIABLE_FPTable_17);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(
  MR_Word tscc_proc_1_input_1_ModuleInfo_8,
  MR_Word tscc_proc_1_input_2_InfoTable_9,
  MR_Word tscc_proc_1_input_3_Goal_10,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_FPtable_16,
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_RptaInfo_18);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1,
  MR_Word tscc_proc_2_input_2_GoalInfo_2,
  MR_Word tscc_proc_2_input_3_ModuleInfo_3,
  MR_Word tscc_proc_2_input_4_InfoTable_4,
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_FPTable_0_5,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_FPtable_16,
  MR_Word tscc_proc_2_input_6_HeadVar__7_7,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_RptaInfo_18);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__apply_rules_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CallSite_2,
  MR_Word Processed_3,
  MR_Word CalleeRptaInfo_4,
  MR_Word STATE_VARIABLE_CallerRptaInfo_0_5,
  MR_Word * STATE_VARIABLE_CallerRptaInfo_6);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__apply_rules_outedges_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CallerNode_2,
  MR_Word CallSite_3,
  MR_Word CalleeRptaInfo_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_8_6_p_0(
  MR_Word Edge_7,
  MR_Word CallSite_8,
  MR_Word CalleeRptaInfo_9,
  MR_Word CallerNode_10,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_7_6_p_0(
  MR_Word Edge_7,
  MR_Word CallSite_8,
  MR_Word CalleeRptaInfo_9,
  MR_Word CallerNode_10,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word CalleeGraph_3,
  MR_Word STATE_VARIABLE_CallerGraph_0_4,
  MR_Word * STATE_VARIABLE_CallerGraph_5,
  MR_Word STATE_VARIABLE_AlphaMap_0_6,
  MR_Word * STATE_VARIABLE_AlphaMap_7);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_p_0(
  MR_Word PPId_7,
  MR_Word InfoTable_8,
  MR_Word STATE_VARIABLE_FPtable_0_14,
  MR_Word * STATE_VARIABLE_FPtable_15,
  MR_Word * RptaInfo_10,
  MR_Word * Init_11);

static MR_Box MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word SCC_6,
  MR_Word STATE_VARIABLE_InfoTable_0_10,
  MR_Word * STATE_VARIABLE_InfoTable_11);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0(
  MR_Word SCC_6,
  MR_Word FPTable0_7,
  MR_Word ModuleInfo_8,
  MR_Word STATE_VARIABLE_InfoTable_0_12,
  MR_Word * STATE_VARIABLE_InfoTable_13);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_p_0(
  MR_Word LVar_8,
  MR_Word ConsId_9,
  MR_Word RVar_10,
  MR_Integer STATE_VARIABLE_Component_0_18,
  MR_Integer * STATE_VARIABLE_Component_19,
  MR_Word STATE_VARIABLE_Graph_0_20,
  MR_Word * STATE_VARIABLE_Graph_21);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_3_p_0(
  MR_Word Node_4,
  MR_Word STATE_VARIABLE_Graph_0_12,
  MR_Word * STATE_VARIABLE_Graph_13);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word NY_2,
  MR_Word STATE_VARIABLE_Graph_0_3,
  MR_Word * STATE_VARIABLE_Graph_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_edge_5_p_0(
  MR_Word Sel_1,
  MR_Word M_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Graph_0_4,
  MR_Word * STATE_VARIABLE_Graph_5);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_case_3_p_0(
  MR_Word Case_4,
  MR_Word STATE_VARIABLE_RptaInfo_0_9,
  MR_Word * STATE_VARIABLE_RptaInfo_10);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_InfoTable_0_15,
  MR_Word * STATE_VARIABLE_InfoTable_16);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(
  MR_Word tscc_proc_1_input_1_Goal_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_RptaInfo_9);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_RptaInfo_0_2,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_RptaInfo_9);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_edges_6_p_0(
  MR_Word Edge_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Graph_0_4,
  MR_Word * STATE_VARIABLE_Graph_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0(
  MR_Word Node_4,
  MR_Word STATE_VARIABLE_Graph_0_11,
  MR_Word * STATE_VARIABLE_Graph_12);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_InfoTable_0_10,
  MR_Word * STATE_VARIABLE_InfoTable_11);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_analysis____Unify____rpta_fixpoint_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis____Compare____rpta_fixpoint_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_1[7][3];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_2[3][2];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_3[3][7];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_4[2][8];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_5[3][10];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_6[3][6];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_7[1][5];




static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_1[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_2[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_3[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_4[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_5[3][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_6[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_7[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_analysis__transform_hlds__rbmm__points_to_analysis__type_ctor_info_rpta_fixpoint_table_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_analysis____Unify____rpta_fixpoint_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_analysis____Compare____rpta_fixpoint_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_analysis",
  (MR_String) "rpta_fixpoint_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_analysis__IntroducedFrom__pred__rpta_fixpoint_table_new_rpta_info__1044__1_2_p_0(
  MR_Word LambdaHeadVar__1_13,
  MR_Word LambdaHeadVar__2_14)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__rbmm__points_to_info__rpta_info_equal_2_p_0(LambdaHeadVar__2_14, LambdaHeadVar__1_13);
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis____Compare____rpta_fixpoint_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_analysis____Unify____rpta_fixpoint_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__rbmm__points_to_analysis__wrapped_init_2_f_0(
  MR_Word InfoTable_4,
  MR_Word PPId_5)
{
  {
    MR_bool succeeded;
    MR_Word Entry_6;
    MR_Word Entry0_7;

    succeeded = transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_f_0(PPId_5, InfoTable_4, &Entry0_7);
    if (succeeded)
      Entry_6 = Entry0_7;
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.rbmm.points_to_analysis.wrapped_init\'/2", (MR_String) "no rpta_info");
    return Entry_6;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__update_rpta_info_in_rpta_info_table_4_p_0(
  MR_Word FPTable_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_InfoTable_0_9,
  MR_Word * STATE_VARIABLE_InfoTable_10)
{
  {
    MR_Word RptaInfo_8;
    MR_Box conv0_RptaInfo_8;

    conv0_RptaInfo_8 = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), ((MR_Box) (PPId_6)), FPTable_5);
    RptaInfo_8 = ((MR_Word) (conv0_RptaInfo_8));
    transform_hlds__rbmm__points_to_info__rpta_info_table_set_rpta_info_4_p_0(PPId_6, RptaInfo_8, STATE_VARIABLE_InfoTable_0_9, STATE_VARIABLE_InfoTable_10);
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_case_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word InfoTable_9,
  MR_Word Case_10,
  MR_Word STATE_VARIABLE_FPtable_0_16,
  MR_Word * STATE_VARIABLE_FPtable_17,
  MR_Word STATE_VARIABLE_RptaInfo_0_18,
  MR_Word * STATE_VARIABLE_RptaInfo_19)
{
  {
    MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_10, (MR_Integer) 2))));
    MR_Word GoalExpr_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_15, (MR_Integer) 0))));
    MR_Word GoalInfo_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_15, (MR_Integer) 1))));

    transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0(GoalExpr_31, GoalInfo_32, ModuleInfo_8, InfoTable_9, STATE_VARIABLE_FPtable_0_16, STATE_VARIABLE_FPtable_17, STATE_VARIABLE_RptaInfo_0_18, STATE_VARIABLE_RptaInfo_19);
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__rbmm__points_to_analysis__IntroducedFrom__pred__rpta_fixpoint_table_new_rpta_info__1044__1_2_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word InfoTable_7,
  MR_Word PPId_8,
  MR_Word STATE_VARIABLE_FPTable_0_16,
  MR_Word * STATE_VARIABLE_FPTable_17)
{
  {
    MR_bool succeeded;
    MR_Word ProcRptaInfo0_10;
    MR_Word ProcInfo0_12;
    MR_Word ProcInfo_13;
    MR_Word Goal_14;
    MR_Word ProcRptaInfo_15;
    MR_Word STATE_VARIABLE_FPTable_18_18;
    MR_Word STATE_VARIABLE_FPTable_19_19;
    MR_Word GoalExpr_48;
    MR_Word GoalInfo_49;
    MR_Word RptaInfo0_28;
    MR_Word FPtable1_29;
    MR_Box conv0_RptaInfo0_28;

    succeeded = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), ((MR_Box) (PPId_8)), &conv0_RptaInfo0_28, STATE_VARIABLE_FPTable_0_16, &FPtable1_29);
    if (succeeded)
    {
      RptaInfo0_28 = ((MR_Word) (conv0_RptaInfo0_28));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      ProcRptaInfo0_10 = RptaInfo0_28;
      STATE_VARIABLE_FPTable_18_18 = FPtable1_29;
    }
    else
    {
      MR_Word RptaInfo0_33;

      succeeded = transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_f_0(PPId_8, InfoTable_7, &RptaInfo0_33);
      if (succeeded)
        ProcRptaInfo0_10 = RptaInfo0_33;
      else
      {
        MR_Word Var_31;
        MR_Word Var_32;

        Var_31 = transform_hlds__rbmm__points_to_graph__rpt_graph_init_0_f_0();
        Var_32 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[2]));
        {
          ProcRptaInfo0_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ProcRptaInfo0_10, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(0), ProcRptaInfo0_10, 1) = ((MR_Box) (Var_32));
        }
      }
      STATE_VARIABLE_FPTable_18_18 = STATE_VARIABLE_FPTable_0_16;
    }
    hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_6, PPId_8, &ProcInfo0_12);
    hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(ModuleInfo_6, ProcInfo0_12, &ProcInfo_13);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_13, &Goal_14);
    GoalExpr_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_14, (MR_Integer) 0))));
    GoalInfo_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_14, (MR_Integer) 1))));
    transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0(GoalExpr_48, GoalInfo_49, ModuleInfo_6, InfoTable_7, STATE_VARIABLE_FPTable_18_18, &STATE_VARIABLE_FPTable_19_19, ProcRptaInfo0_10, &ProcRptaInfo_15);
    transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_p_0((MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[6]), ((MR_Box) (PPId_8)), ((MR_Box) (ProcRptaInfo_15)), STATE_VARIABLE_FPTable_19_19, STATE_VARIABLE_FPTable_17);
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_STATE_VARIABLE_FPtable_17;
    MR_Word conv8_STATE_VARIABLE_RptaInfo_19;

    transform_hlds__rbmm__points_to_analysis__inter_analyse_case_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_FPtable_17, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_RptaInfo_19);
    *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_FPtable_17));
    *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_RptaInfo_19));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_FPtable_16;
    MR_Word conv4_STATE_VARIABLE_RptaInfo_18;

    transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_FPtable_16, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_RptaInfo_18);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_FPtable_16));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_RptaInfo_18));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_FPtable_16;
    MR_Word conv0_STATE_VARIABLE_RptaInfo_18;

    transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_FPtable_16, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_RptaInfo_18);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_FPtable_16));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_RptaInfo_18));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(
  MR_Word tscc_proc_1_input_1_ModuleInfo_8,
  MR_Word tscc_proc_1_input_2_InfoTable_9,
  MR_Word tscc_proc_1_input_3_Goal_10,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_FPtable_16,
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_RptaInfo_18)
{
  {
    MR_Word tscc_proc_2_input_1_HeadVar__1_1;
    MR_Word tscc_proc_2_input_2_GoalInfo_2;
    MR_Word tscc_proc_2_input_3_ModuleInfo_3;
    MR_Word tscc_proc_2_input_4_InfoTable_4;
    MR_Word tscc_proc_2_input_5_STATE_VARIABLE_FPTable_0_5;
    MR_Word tscc_proc_2_input_6_HeadVar__7_7;
    MR_Word tscc_output_1_STATE_VARIABLE_FPtable_16;
    MR_Word tscc_output_2_STATE_VARIABLE_RptaInfo_18;

    // The code for TSCC PROC 1: pred transform_hlds.rbmm.points_to_analysis.inter_analyse_goal/7-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred transform_hlds.rbmm.points_to_analysis.inter_analyse_goal/7-0
    ;
    // proc 2 in TSCC: pred transform_hlds.rbmm.points_to_analysis.inter_analyse_goal_expr/8-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word ModuleInfo_8 = tscc_proc_1_input_1_ModuleInfo_8;
      MR_Word InfoTable_9 = tscc_proc_1_input_2_InfoTable_9;
      MR_Word Goal_10 = tscc_proc_1_input_3_Goal_10;
      MR_Word STATE_VARIABLE_FPtable_0_15 = tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15;
      MR_Word STATE_VARIABLE_FPtable_16;
      MR_Word STATE_VARIABLE_RptaInfo_0_17 = tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17;
      MR_Word STATE_VARIABLE_RptaInfo_18;
      MR_Word GoalExpr_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0))));
      MR_Word GoalInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 1))));
      MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = GoalExpr_13;
      MR_Word next_value_of_tscc_proc_2_input_2_GoalInfo_2 = GoalInfo_14;
      MR_Word next_value_of_tscc_proc_2_input_3_ModuleInfo_3 = ModuleInfo_8;
      MR_Word next_value_of_tscc_proc_2_input_4_InfoTable_4 = InfoTable_9;
      MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_FPTable_0_5 = STATE_VARIABLE_FPtable_0_15;
      MR_Word next_value_of_tscc_proc_2_input_6_HeadVar__7_7 = STATE_VARIABLE_RptaInfo_0_17;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
      tscc_proc_2_input_2_GoalInfo_2 = next_value_of_tscc_proc_2_input_2_GoalInfo_2;
      tscc_proc_2_input_3_ModuleInfo_3 = next_value_of_tscc_proc_2_input_3_ModuleInfo_3;
      tscc_proc_2_input_4_InfoTable_4 = next_value_of_tscc_proc_2_input_4_InfoTable_4;
      tscc_proc_2_input_5_STATE_VARIABLE_FPTable_0_5 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_FPTable_0_5;
      tscc_proc_2_input_6_HeadVar__7_7 = next_value_of_tscc_proc_2_input_6_HeadVar__7_7;
      goto top_of_proc_2;
      tscc_output_1_STATE_VARIABLE_FPtable_16 = STATE_VARIABLE_FPtable_16;
      tscc_output_2_STATE_VARIABLE_RptaInfo_18 = STATE_VARIABLE_RptaInfo_18;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
      MR_Word GoalInfo_2 = tscc_proc_2_input_2_GoalInfo_2;
      MR_Word ModuleInfo_3 = tscc_proc_2_input_3_ModuleInfo_3;
      MR_Word InfoTable_4 = tscc_proc_2_input_4_InfoTable_4;
      MR_Word STATE_VARIABLE_FPTable_0_5 = tscc_proc_2_input_5_STATE_VARIABLE_FPTable_0_5;
      MR_Word STATE_VARIABLE_FPTable_6;
      MR_Word HeadVar__7_7 = tscc_proc_2_input_6_HeadVar__7_7;
      MR_Word HeadVar__8_8;

      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Goal_116 = (MR_Word) ((MR_Word) (HeadVar__1_1));
            MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_8 = ModuleInfo_3;
            MR_Word next_value_of_tscc_proc_1_input_2_InfoTable_9 = InfoTable_4;
            MR_Word next_value_of_tscc_proc_1_input_3_Goal_10 = Goal_116;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15 = STATE_VARIABLE_FPTable_0_5;
            MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17 = HeadVar__7_7;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_ModuleInfo_8 = next_value_of_tscc_proc_1_input_1_ModuleInfo_8;
            tscc_proc_1_input_2_InfoTable_9 = next_value_of_tscc_proc_1_input_2_InfoTable_9;
            tscc_proc_1_input_3_Goal_10 = next_value_of_tscc_proc_1_input_3_Goal_10;
            tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15;
            tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            HeadVar__8_8 = HeadVar__7_7;
            STATE_VARIABLE_FPTable_6 = STATE_VARIABLE_FPTable_0_5;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ProcId_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ActualParams_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word CalleePPId_35;
            MR_Word CalleeRptaInfo_36;
            MR_Word IsInit_37;

            {
              CalleePPId_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CalleePPId_35, 0) = ((MR_Box) (PredId_29));
              MR_hl_field(MR_mktag(0), CalleePPId_35, 1) = ((MR_Box) (ProcId_30));
            }
            transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_p_0(CalleePPId_35, InfoTable_4, STATE_VARIABLE_FPTable_0_5, &STATE_VARIABLE_FPTable_6, &CalleeRptaInfo_36, &IsInit_37);
            switch (IsInit_37) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word CallSite_38;
                  MR_Word CalleeGraph_39;
                  MR_Word CalleeProcInfo_41;
                  MR_Word FormalParams_42;
                  MR_Word CallerGraph0_43;
                  MR_Word CallerAlphaMappings0_44;
                  MR_Word CallerGraph_45;
                  MR_Word CallerAlphaMappingAtCallSite_46;
                  MR_Word CallerAlphaMappings_47;
                  MR_Word CallerRptaInfo1_48;
                  MR_Word FormalNodes_49;
                  MR_Word Var_55;

                  CallSite_38 = transform_hlds__smm_common__program_point_init_1_f_0(GoalInfo_2);
                  CalleeGraph_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CalleeRptaInfo_36, (MR_Integer) 0))));
                  hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_3, CalleePPId_35, &CalleeProcInfo_41);
                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(CalleeProcInfo_41, &FormalParams_42);
                  CallerGraph0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__7_7, (MR_Integer) 0))));
                  CallerAlphaMappings0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__7_7, (MR_Integer) 1))));
                  Var_55 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
                  transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_p_0(FormalParams_42, ActualParams_31, CalleeGraph_39, CallerGraph0_43, &CallerGraph_45, Var_55, &CallerAlphaMappingAtCallSite_46);
                  mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[2]), ((MR_Box) (CallSite_38)), ((MR_Box) (CallerAlphaMappingAtCallSite_46)), CallerAlphaMappings0_44, &CallerAlphaMappings_47);
                  {
                    CallerRptaInfo1_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), CallerRptaInfo1_48, 0) = ((MR_Box) (CallerGraph_45));
                    MR_hl_field(MR_mktag(0), CallerRptaInfo1_48, 1) = ((MR_Box) (CallerAlphaMappings_47));
                  }
                  mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), CallerAlphaMappingAtCallSite_46, &FormalNodes_49);
                  transform_hlds__rbmm__points_to_analysis__apply_rules_6_p_0(FormalNodes_49, CallSite_38, (MR_Word) ((MR_Unsigned) 0U), CalleeRptaInfo_36, CallerRptaInfo1_48, &HeadVar__8_8);
                }
                break;
              case (MR_Integer) 1:
                HeadVar__8_8 = HeadVar__7_7;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.inter_analyse_goal_expr\'/8", (MR_String) "generic_call not handled");
                return;
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.inter_analyse_goal_expr\'/8", (MR_String) "foreign code");
                return;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word Var_20;
                MR_Box conv3_STATE_VARIABLE_FPTable_6;
                MR_Box conv2_HeadVar__8_8;

                {
                  Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_5[1]));
                  MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (ModuleInfo_3));
                  MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (InfoTable_4));
                }
                mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), Var_20, Goals_10, ((MR_Box) (STATE_VARIABLE_FPTable_0_5)), &conv3_STATE_VARIABLE_FPTable_6, ((MR_Box) (HeadVar__7_7)), &conv2_HeadVar__8_8);
                STATE_VARIABLE_FPTable_6 = ((MR_Word) (conv3_STATE_VARIABLE_FPTable_6));
                HeadVar__8_8 = ((MR_Word) (conv2_HeadVar__8_8));
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Disjs_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word Var_113;
                MR_Box conv7_STATE_VARIABLE_FPTable_6;
                MR_Box conv6_HeadVar__8_8;

                {
                  Var_113 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_5[1]));
                  MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_113, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_113, 3) = ((MR_Box) (ModuleInfo_3));
                  MR_hl_field(MR_mktag(0), Var_113, 4) = ((MR_Box) (InfoTable_4));
                }
                mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), Var_113, Disjs_103, ((MR_Box) (STATE_VARIABLE_FPTable_0_5)), &conv7_STATE_VARIABLE_FPTable_6, ((MR_Box) (HeadVar__7_7)), &conv6_HeadVar__8_8);
                STATE_VARIABLE_FPTable_6 = ((MR_Word) (conv7_STATE_VARIABLE_FPTable_6));
                HeadVar__8_8 = ((MR_Word) (conv6_HeadVar__8_8));
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word Var_86;
                MR_Box conv11_STATE_VARIABLE_FPTable_6;
                MR_Box conv10_HeadVar__8_8;

                {
                  Var_86 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_5[2]));
                  MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_3));
                  MR_hl_field(MR_mktag(0), Var_86, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_86, 3) = ((MR_Box) (ModuleInfo_3));
                  MR_hl_field(MR_mktag(0), Var_86, 4) = ((MR_Box) (InfoTable_4));
                }
                mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), Var_86, Cases_76, ((MR_Box) (STATE_VARIABLE_FPTable_0_5)), &conv11_STATE_VARIABLE_FPTable_6, ((MR_Box) (HeadVar__7_7)), &conv10_HeadVar__8_8);
                STATE_VARIABLE_FPTable_6 = ((MR_Word) (conv11_STATE_VARIABLE_FPTable_6));
                HeadVar__8_8 = ((MR_Word) (conv10_HeadVar__8_8));
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Goal_129 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_8 = ModuleInfo_3;
                MR_Word next_value_of_tscc_proc_1_input_2_InfoTable_9 = InfoTable_4;
                MR_Word next_value_of_tscc_proc_1_input_3_Goal_10 = Goal_129;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15 = STATE_VARIABLE_FPTable_0_5;
                MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17 = HeadVar__7_7;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_ModuleInfo_8 = next_value_of_tscc_proc_1_input_1_ModuleInfo_8;
                tscc_proc_1_input_2_InfoTable_9 = next_value_of_tscc_proc_1_input_2_InfoTable_9;
                tscc_proc_1_input_3_Goal_10 = next_value_of_tscc_proc_1_input_3_Goal_10;
                tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15;
                tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word If_142 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word Then_143 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word Else_144 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_FPTable_154_154;
                MR_Word STATE_VARIABLE_RptaInfo_155_155;
                MR_Word STATE_VARIABLE_FPTable_156_156;
                MR_Word STATE_VARIABLE_RptaInfo_157_157;
                MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_8;
                MR_Word next_value_of_tscc_proc_1_input_2_InfoTable_9;
                MR_Word next_value_of_tscc_proc_1_input_3_Goal_10;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15;
                MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17;

                transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(ModuleInfo_3, InfoTable_4, If_142, STATE_VARIABLE_FPTable_0_5, &STATE_VARIABLE_FPTable_154_154, HeadVar__7_7, &STATE_VARIABLE_RptaInfo_155_155);
                transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(ModuleInfo_3, InfoTable_4, Then_143, STATE_VARIABLE_FPTable_154_154, &STATE_VARIABLE_FPTable_156_156, STATE_VARIABLE_RptaInfo_155_155, &STATE_VARIABLE_RptaInfo_157_157);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_ModuleInfo_8 = ModuleInfo_3;
                next_value_of_tscc_proc_1_input_2_InfoTable_9 = InfoTable_4;
                next_value_of_tscc_proc_1_input_3_Goal_10 = Else_144;
                next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15 = STATE_VARIABLE_FPTable_156_156;
                next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17 = STATE_VARIABLE_RptaInfo_157_157;
                tscc_proc_1_input_1_ModuleInfo_8 = next_value_of_tscc_proc_1_input_1_ModuleInfo_8;
                tscc_proc_1_input_2_InfoTable_9 = next_value_of_tscc_proc_1_input_2_InfoTable_9;
                tscc_proc_1_input_3_Goal_10 = next_value_of_tscc_proc_1_input_3_Goal_10;
                tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15;
                tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.inter_analyse_goal_expr\'/8", (MR_String) "shorthand");
                return;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_FPtable_16 = STATE_VARIABLE_FPTable_6;
      tscc_output_2_STATE_VARIABLE_RptaInfo_18 = HeadVar__8_8;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_FPtable_16 = tscc_output_1_STATE_VARIABLE_FPtable_16;
    *tscc_output_ptr_2_STATE_VARIABLE_RptaInfo_18 = tscc_output_2_STATE_VARIABLE_RptaInfo_18;
    return;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1,
  MR_Word tscc_proc_2_input_2_GoalInfo_2,
  MR_Word tscc_proc_2_input_3_ModuleInfo_3,
  MR_Word tscc_proc_2_input_4_InfoTable_4,
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_FPTable_0_5,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_FPtable_16,
  MR_Word tscc_proc_2_input_6_HeadVar__7_7,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_RptaInfo_18)
{
  {
    MR_Word tscc_proc_1_input_1_ModuleInfo_8;
    MR_Word tscc_proc_1_input_2_InfoTable_9;
    MR_Word tscc_proc_1_input_3_Goal_10;
    MR_Word tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15;
    MR_Word tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17;
    MR_Word tscc_output_1_STATE_VARIABLE_FPtable_16;
    MR_Word tscc_output_2_STATE_VARIABLE_RptaInfo_18;

    // The code for TSCC PROC 2: pred transform_hlds.rbmm.points_to_analysis.inter_analyse_goal_expr/8-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred transform_hlds.rbmm.points_to_analysis.inter_analyse_goal/7-0
    ;
    // proc 2 in TSCC: pred transform_hlds.rbmm.points_to_analysis.inter_analyse_goal_expr/8-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word ModuleInfo_8 = tscc_proc_1_input_1_ModuleInfo_8;
      MR_Word InfoTable_9 = tscc_proc_1_input_2_InfoTable_9;
      MR_Word Goal_10 = tscc_proc_1_input_3_Goal_10;
      MR_Word STATE_VARIABLE_FPtable_0_15 = tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15;
      MR_Word STATE_VARIABLE_FPtable_16;
      MR_Word STATE_VARIABLE_RptaInfo_0_17 = tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17;
      MR_Word STATE_VARIABLE_RptaInfo_18;
      MR_Word GoalExpr_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0))));
      MR_Word GoalInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 1))));
      MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = GoalExpr_13;
      MR_Word next_value_of_tscc_proc_2_input_2_GoalInfo_2 = GoalInfo_14;
      MR_Word next_value_of_tscc_proc_2_input_3_ModuleInfo_3 = ModuleInfo_8;
      MR_Word next_value_of_tscc_proc_2_input_4_InfoTable_4 = InfoTable_9;
      MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_FPTable_0_5 = STATE_VARIABLE_FPtable_0_15;
      MR_Word next_value_of_tscc_proc_2_input_6_HeadVar__7_7 = STATE_VARIABLE_RptaInfo_0_17;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
      tscc_proc_2_input_2_GoalInfo_2 = next_value_of_tscc_proc_2_input_2_GoalInfo_2;
      tscc_proc_2_input_3_ModuleInfo_3 = next_value_of_tscc_proc_2_input_3_ModuleInfo_3;
      tscc_proc_2_input_4_InfoTable_4 = next_value_of_tscc_proc_2_input_4_InfoTable_4;
      tscc_proc_2_input_5_STATE_VARIABLE_FPTable_0_5 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_FPTable_0_5;
      tscc_proc_2_input_6_HeadVar__7_7 = next_value_of_tscc_proc_2_input_6_HeadVar__7_7;
      goto top_of_proc_2;
      tscc_output_1_STATE_VARIABLE_FPtable_16 = STATE_VARIABLE_FPtable_16;
      tscc_output_2_STATE_VARIABLE_RptaInfo_18 = STATE_VARIABLE_RptaInfo_18;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
      MR_Word GoalInfo_2 = tscc_proc_2_input_2_GoalInfo_2;
      MR_Word ModuleInfo_3 = tscc_proc_2_input_3_ModuleInfo_3;
      MR_Word InfoTable_4 = tscc_proc_2_input_4_InfoTable_4;
      MR_Word STATE_VARIABLE_FPTable_0_5 = tscc_proc_2_input_5_STATE_VARIABLE_FPTable_0_5;
      MR_Word STATE_VARIABLE_FPTable_6;
      MR_Word HeadVar__7_7 = tscc_proc_2_input_6_HeadVar__7_7;
      MR_Word HeadVar__8_8;

      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Goal_116 = (MR_Word) ((MR_Word) (HeadVar__1_1));
            MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_8 = ModuleInfo_3;
            MR_Word next_value_of_tscc_proc_1_input_2_InfoTable_9 = InfoTable_4;
            MR_Word next_value_of_tscc_proc_1_input_3_Goal_10 = Goal_116;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15 = STATE_VARIABLE_FPTable_0_5;
            MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17 = HeadVar__7_7;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_ModuleInfo_8 = next_value_of_tscc_proc_1_input_1_ModuleInfo_8;
            tscc_proc_1_input_2_InfoTable_9 = next_value_of_tscc_proc_1_input_2_InfoTable_9;
            tscc_proc_1_input_3_Goal_10 = next_value_of_tscc_proc_1_input_3_Goal_10;
            tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15;
            tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            HeadVar__8_8 = HeadVar__7_7;
            STATE_VARIABLE_FPTable_6 = STATE_VARIABLE_FPTable_0_5;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ProcId_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ActualParams_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word CalleePPId_35;
            MR_Word CalleeRptaInfo_36;
            MR_Word IsInit_37;

            {
              CalleePPId_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CalleePPId_35, 0) = ((MR_Box) (PredId_29));
              MR_hl_field(MR_mktag(0), CalleePPId_35, 1) = ((MR_Box) (ProcId_30));
            }
            transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_p_0(CalleePPId_35, InfoTable_4, STATE_VARIABLE_FPTable_0_5, &STATE_VARIABLE_FPTable_6, &CalleeRptaInfo_36, &IsInit_37);
            switch (IsInit_37) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word CallSite_38;
                  MR_Word CalleeGraph_39;
                  MR_Word CalleeProcInfo_41;
                  MR_Word FormalParams_42;
                  MR_Word CallerGraph0_43;
                  MR_Word CallerAlphaMappings0_44;
                  MR_Word CallerGraph_45;
                  MR_Word CallerAlphaMappingAtCallSite_46;
                  MR_Word CallerAlphaMappings_47;
                  MR_Word CallerRptaInfo1_48;
                  MR_Word FormalNodes_49;
                  MR_Word Var_55;

                  CallSite_38 = transform_hlds__smm_common__program_point_init_1_f_0(GoalInfo_2);
                  CalleeGraph_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CalleeRptaInfo_36, (MR_Integer) 0))));
                  hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_3, CalleePPId_35, &CalleeProcInfo_41);
                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(CalleeProcInfo_41, &FormalParams_42);
                  CallerGraph0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__7_7, (MR_Integer) 0))));
                  CallerAlphaMappings0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__7_7, (MR_Integer) 1))));
                  Var_55 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
                  transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_p_0(FormalParams_42, ActualParams_31, CalleeGraph_39, CallerGraph0_43, &CallerGraph_45, Var_55, &CallerAlphaMappingAtCallSite_46);
                  mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[2]), ((MR_Box) (CallSite_38)), ((MR_Box) (CallerAlphaMappingAtCallSite_46)), CallerAlphaMappings0_44, &CallerAlphaMappings_47);
                  {
                    CallerRptaInfo1_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), CallerRptaInfo1_48, 0) = ((MR_Box) (CallerGraph_45));
                    MR_hl_field(MR_mktag(0), CallerRptaInfo1_48, 1) = ((MR_Box) (CallerAlphaMappings_47));
                  }
                  mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), CallerAlphaMappingAtCallSite_46, &FormalNodes_49);
                  transform_hlds__rbmm__points_to_analysis__apply_rules_6_p_0(FormalNodes_49, CallSite_38, (MR_Word) ((MR_Unsigned) 0U), CalleeRptaInfo_36, CallerRptaInfo1_48, &HeadVar__8_8);
                }
                break;
              case (MR_Integer) 1:
                HeadVar__8_8 = HeadVar__7_7;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.inter_analyse_goal_expr\'/8", (MR_String) "generic_call not handled");
                return;
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.inter_analyse_goal_expr\'/8", (MR_String) "foreign code");
                return;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word Var_20;
                MR_Box conv3_STATE_VARIABLE_FPTable_6;
                MR_Box conv2_HeadVar__8_8;

                {
                  Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_5[1]));
                  MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (ModuleInfo_3));
                  MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (InfoTable_4));
                }
                mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), Var_20, Goals_10, ((MR_Box) (STATE_VARIABLE_FPTable_0_5)), &conv3_STATE_VARIABLE_FPTable_6, ((MR_Box) (HeadVar__7_7)), &conv2_HeadVar__8_8);
                STATE_VARIABLE_FPTable_6 = ((MR_Word) (conv3_STATE_VARIABLE_FPTable_6));
                HeadVar__8_8 = ((MR_Word) (conv2_HeadVar__8_8));
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Disjs_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word Var_113;
                MR_Box conv7_STATE_VARIABLE_FPTable_6;
                MR_Box conv6_HeadVar__8_8;

                {
                  Var_113 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_5[1]));
                  MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_113, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_113, 3) = ((MR_Box) (ModuleInfo_3));
                  MR_hl_field(MR_mktag(0), Var_113, 4) = ((MR_Box) (InfoTable_4));
                }
                mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), Var_113, Disjs_103, ((MR_Box) (STATE_VARIABLE_FPTable_0_5)), &conv7_STATE_VARIABLE_FPTable_6, ((MR_Box) (HeadVar__7_7)), &conv6_HeadVar__8_8);
                STATE_VARIABLE_FPTable_6 = ((MR_Word) (conv7_STATE_VARIABLE_FPTable_6));
                HeadVar__8_8 = ((MR_Word) (conv6_HeadVar__8_8));
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word Var_86;
                MR_Box conv11_STATE_VARIABLE_FPTable_6;
                MR_Box conv10_HeadVar__8_8;

                {
                  Var_86 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_5[2]));
                  MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_3));
                  MR_hl_field(MR_mktag(0), Var_86, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_86, 3) = ((MR_Box) (ModuleInfo_3));
                  MR_hl_field(MR_mktag(0), Var_86, 4) = ((MR_Box) (InfoTable_4));
                }
                mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), Var_86, Cases_76, ((MR_Box) (STATE_VARIABLE_FPTable_0_5)), &conv11_STATE_VARIABLE_FPTable_6, ((MR_Box) (HeadVar__7_7)), &conv10_HeadVar__8_8);
                STATE_VARIABLE_FPTable_6 = ((MR_Word) (conv11_STATE_VARIABLE_FPTable_6));
                HeadVar__8_8 = ((MR_Word) (conv10_HeadVar__8_8));
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Goal_129 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_8 = ModuleInfo_3;
                MR_Word next_value_of_tscc_proc_1_input_2_InfoTable_9 = InfoTable_4;
                MR_Word next_value_of_tscc_proc_1_input_3_Goal_10 = Goal_129;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15 = STATE_VARIABLE_FPTable_0_5;
                MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17 = HeadVar__7_7;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_ModuleInfo_8 = next_value_of_tscc_proc_1_input_1_ModuleInfo_8;
                tscc_proc_1_input_2_InfoTable_9 = next_value_of_tscc_proc_1_input_2_InfoTable_9;
                tscc_proc_1_input_3_Goal_10 = next_value_of_tscc_proc_1_input_3_Goal_10;
                tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15;
                tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word If_142 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word Then_143 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word Else_144 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_FPTable_154_154;
                MR_Word STATE_VARIABLE_RptaInfo_155_155;
                MR_Word STATE_VARIABLE_FPTable_156_156;
                MR_Word STATE_VARIABLE_RptaInfo_157_157;
                MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_8;
                MR_Word next_value_of_tscc_proc_1_input_2_InfoTable_9;
                MR_Word next_value_of_tscc_proc_1_input_3_Goal_10;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15;
                MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17;

                transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(ModuleInfo_3, InfoTable_4, If_142, STATE_VARIABLE_FPTable_0_5, &STATE_VARIABLE_FPTable_154_154, HeadVar__7_7, &STATE_VARIABLE_RptaInfo_155_155);
                transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(ModuleInfo_3, InfoTable_4, Then_143, STATE_VARIABLE_FPTable_154_154, &STATE_VARIABLE_FPTable_156_156, STATE_VARIABLE_RptaInfo_155_155, &STATE_VARIABLE_RptaInfo_157_157);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_ModuleInfo_8 = ModuleInfo_3;
                next_value_of_tscc_proc_1_input_2_InfoTable_9 = InfoTable_4;
                next_value_of_tscc_proc_1_input_3_Goal_10 = Else_144;
                next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15 = STATE_VARIABLE_FPTable_156_156;
                next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17 = STATE_VARIABLE_RptaInfo_157_157;
                tscc_proc_1_input_1_ModuleInfo_8 = next_value_of_tscc_proc_1_input_1_ModuleInfo_8;
                tscc_proc_1_input_2_InfoTable_9 = next_value_of_tscc_proc_1_input_2_InfoTable_9;
                tscc_proc_1_input_3_Goal_10 = next_value_of_tscc_proc_1_input_3_Goal_10;
                tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_FPtable_0_15;
                tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_RptaInfo_0_17;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.inter_analyse_goal_expr\'/8", (MR_String) "shorthand");
                return;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_FPtable_16 = STATE_VARIABLE_FPTable_6;
      tscc_output_2_STATE_VARIABLE_RptaInfo_18 = HeadVar__8_8;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_FPtable_16 = tscc_output_1_STATE_VARIABLE_FPtable_16;
    *tscc_output_ptr_2_STATE_VARIABLE_RptaInfo_18 = tscc_output_2_STATE_VARIABLE_RptaInfo_18;
    return;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__apply_rules_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CallSite_2,
  MR_Word Processed_3,
  MR_Word CalleeRptaInfo_4,
  MR_Word STATE_VARIABLE_CallerRptaInfo_0_5,
  MR_Word * STATE_VARIABLE_CallerRptaInfo_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CallerRptaInfo_6 = STATE_VARIABLE_CallerRptaInfo_0_5;
    else
    {
      MR_Word CalleeNode_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word CalleeNodes0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word CallerAlphaMapping0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CallerRptaInfo_0_5, (MR_Integer) 1))));
      MR_Word AlphaAtCallSite_21;
      MR_Word CallerNode_22;
      MR_Word CalleeGraph_23;
      MR_Word SuccessorsCalleeNode_25;
      MR_Word SsList_26;
      MR_Word ToBeProcessed_27;
      MR_Word CalleeNodes_28;
      MR_Word STATE_VARIABLE_CallerRptaInfo_31_31;
      MR_Word Var_32;
      MR_Word CalleeGraph_44;
      MR_Word CalleeNodeOutEdges_46;
      MR_Box conv0_AlphaAtCallSite_21;
      MR_Box conv1_CallerNode_22;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_Processed_3;
      MR_Word next_value_of_STATE_VARIABLE_CallerRptaInfo_0_5;

      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[2]), CallerAlphaMapping0_20, ((MR_Box) (CallSite_2)), &conv0_AlphaAtCallSite_21);
      AlphaAtCallSite_21 = ((MR_Word) (conv0_AlphaAtCallSite_21));
      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), AlphaAtCallSite_21, ((MR_Box) (CalleeNode_13)), &conv1_CallerNode_22);
      CallerNode_22 = ((MR_Word) (conv1_CallerNode_22));
      CalleeGraph_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CalleeRptaInfo_4, (MR_Integer) 0))));
      CalleeNodeOutEdges_46 = transform_hlds__rbmm__points_to_graph__rptg_lookup_list_outedges_2_f_0(CalleeGraph_44, CalleeNode_13);
      transform_hlds__rbmm__points_to_analysis__apply_rules_outedges_6_p_0(CalleeNodeOutEdges_46, CallerNode_22, CallSite_2, CalleeRptaInfo_4, STATE_VARIABLE_CallerRptaInfo_0_5, &STATE_VARIABLE_CallerRptaInfo_31_31);
      CalleeGraph_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CalleeRptaInfo_4, (MR_Integer) 0))));
      SuccessorsCalleeNode_25 = transform_hlds__rbmm__points_to_graph__rptg_successors_2_f_0(CalleeGraph_23, CalleeNode_13);
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), SuccessorsCalleeNode_25, &SsList_26);
      mercury__list__delete_elems_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), SsList_26, Processed_3, &ToBeProcessed_27);
      CalleeNodes_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ToBeProcessed_27, CalleeNodes0_14);
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (CalleeNode_13));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Processed_3));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = CalleeNodes_28;
      next_value_of_Processed_3 = Var_32;
      next_value_of_STATE_VARIABLE_CallerRptaInfo_0_5 = STATE_VARIABLE_CallerRptaInfo_31_31;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      Processed_3 = next_value_of_Processed_3;
      STATE_VARIABLE_CallerRptaInfo_0_5 = next_value_of_STATE_VARIABLE_CallerRptaInfo_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__apply_rules_outedges_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CallerNode_2,
  MR_Word CallSite_3,
  MR_Word CalleeRptaInfo_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__6_6 = HeadVar__5_5;
    else
    {
      MR_Word Edge_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Edges_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_CallerRptaInfo_22_22;
      MR_Word STATE_VARIABLE_CallerRptaInfo_23_23;
      MR_Word STATE_VARIABLE_CallerRptaInfo_24_24;
      MR_Word CalleeGraph_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CalleeRptaInfo_4, (MR_Integer) 0))));
      MR_Word CalleeM_35;
      MR_Word Label_36;
      MR_Word RealCallerNode_37;
      MR_Word STATE_VARIABLE_CallerGraph_0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word CalleeGraph_58;
      MR_Word CalleeM_61;
      MR_Word Label_62;
      MR_Word RealCallerNode_63;
      MR_Word STATE_VARIABLE_CallerGraph_0_68;
      MR_Word STATE_VARIABLE_CallerAlphaMapping_0_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_CallerGraph_70;
      MR_Word STATE_VARIABLE_CallerAlphaMapping_71;
      MR_Word _CalleeNode_34;
      MR_Word CallerMPrime_38;
      MR_Word RealCallerM_41;
      MR_Word TypeCtorInfo_27_46;
      MR_Word TypeInfo_28_47;
      MR_Word TypeCtorInfo_29_48;
      MR_Word AlphaAtCallSite_39;
      MR_Word CallerM_40;
      MR_Box conv0_AlphaAtCallSite_39;
      MR_Box conv1_CallerM_40;
      MR_Integer Var_50;
      MR_Integer Var_51;
      MR_Word _CalleeNode_60;
      MR_Word CallerM_64;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__5_5;

      transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(CalleeGraph_32, Edge_13, &_CalleeNode_34, &CalleeM_35, &Label_36);
      transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(STATE_VARIABLE_CallerGraph_0_42, CallerNode_2, &RealCallerNode_37);
      succeeded = transform_hlds__rbmm__points_to_graph__rptg_find_edge_from_node_with_same_content_4_p_0(RealCallerNode_37, Label_36, STATE_VARIABLE_CallerGraph_0_42, &CallerMPrime_38);
      if (succeeded)
      {
        TypeCtorInfo_27_46 = (MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0);
        TypeInfo_28_47 = (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[2]);
        succeeded = mercury__map__search_3_p_0(TypeCtorInfo_27_46, TypeInfo_28_47, STATE_VARIABLE_CallerAlphaMapping_0_69, ((MR_Box) (CallSite_3)), &conv0_AlphaAtCallSite_39);
        if (succeeded)
        {
          AlphaAtCallSite_39 = ((MR_Word) (conv0_AlphaAtCallSite_39));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          TypeCtorInfo_29_48 = (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0);
          succeeded = mercury__map__search_3_p_0(TypeCtorInfo_29_48, TypeCtorInfo_29_48, AlphaAtCallSite_39, ((MR_Box) (CalleeM_35)), &conv1_CallerM_40);
          if (succeeded)
          {
            CallerM_40 = ((MR_Word) (conv1_CallerM_40));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(STATE_VARIABLE_CallerGraph_0_42, CallerM_40, &RealCallerM_41);
            Var_50 = (MR_Integer) (CallerMPrime_38);
            Var_51 = (MR_Integer) (RealCallerM_41);
            succeeded = (Var_50 != Var_51);
          }
        }
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_CallerGraph_25_44;

        transform_hlds__rbmm__points_to_graph__unify_operator_4_p_0(RealCallerM_41, CallerMPrime_38, STATE_VARIABLE_CallerGraph_0_42, &STATE_VARIABLE_CallerGraph_25_44);
        transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0(RealCallerM_41, STATE_VARIABLE_CallerGraph_25_44, &STATE_VARIABLE_CallerGraph_0_68);
      }
      else
        STATE_VARIABLE_CallerGraph_0_68 = STATE_VARIABLE_CallerGraph_0_42;
      CalleeGraph_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CalleeRptaInfo_4, (MR_Integer) 0))));
      transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(CalleeGraph_58, Edge_13, &_CalleeNode_60, &CalleeM_61, &Label_62);
      transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(STATE_VARIABLE_CallerGraph_0_68, CallerNode_2, &RealCallerNode_63);
      succeeded = transform_hlds__rbmm__points_to_graph__rptg_find_edge_from_node_with_same_content_4_p_0(RealCallerNode_63, Label_62, STATE_VARIABLE_CallerGraph_0_68, &CallerM_64);
      if (succeeded)
      {
        MR_Word AlphaAtCallSite0_65;
        MR_Box conv2_AlphaAtCallSite0_65;
        MR_Box conv3_Var_66;

        mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[2]), STATE_VARIABLE_CallerAlphaMapping_0_69, ((MR_Box) (CallSite_3)), &conv2_AlphaAtCallSite0_65);
        AlphaAtCallSite0_65 = ((MR_Word) (conv2_AlphaAtCallSite0_65));
        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), AlphaAtCallSite0_65, ((MR_Box) (CalleeM_61)), &conv3_Var_66);
        if (succeeded)
          succeeded = MR_TRUE;
        if (succeeded)
        {
          STATE_VARIABLE_CallerAlphaMapping_71 = STATE_VARIABLE_CallerAlphaMapping_0_69;
          STATE_VARIABLE_CallerGraph_70 = STATE_VARIABLE_CallerGraph_0_68;
        }
        else
        {
          MR_Word AlphaAtCallSite1_67;

          mercury__map__set_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ((MR_Box) (CalleeM_61)), ((MR_Box) (CallerM_64)), AlphaAtCallSite0_65, &AlphaAtCallSite1_67);
          mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[2]), ((MR_Box) (CallSite_3)), ((MR_Box) (AlphaAtCallSite1_67)), STATE_VARIABLE_CallerAlphaMapping_0_69, &STATE_VARIABLE_CallerAlphaMapping_71);
          succeeded = transform_hlds__rbmm__points_to_graph__rptg_is_allocated_node_2_p_0(CalleeGraph_58, CalleeM_61);
          if (succeeded)
            transform_hlds__rbmm__points_to_graph__rptg_set_node_is_allocated_4_p_0(CallerM_64, (MR_Integer) 1, STATE_VARIABLE_CallerGraph_0_68, &STATE_VARIABLE_CallerGraph_70);
          else
            STATE_VARIABLE_CallerGraph_70 = STATE_VARIABLE_CallerGraph_0_68;
        }
      }
      else
      {
        STATE_VARIABLE_CallerAlphaMapping_71 = STATE_VARIABLE_CallerAlphaMapping_0_69;
        STATE_VARIABLE_CallerGraph_70 = STATE_VARIABLE_CallerGraph_0_68;
      }
      {
        STATE_VARIABLE_CallerRptaInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CallerRptaInfo_22_22, 0) = ((MR_Box) (STATE_VARIABLE_CallerGraph_70));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CallerRptaInfo_22_22, 1) = ((MR_Box) (STATE_VARIABLE_CallerAlphaMapping_71));
      }
      transform_hlds__rbmm__points_to_analysis__rule_7_6_p_0(Edge_13, CallSite_3, CalleeRptaInfo_4, CallerNode_2, STATE_VARIABLE_CallerRptaInfo_22_22, &STATE_VARIABLE_CallerRptaInfo_23_23);
      transform_hlds__rbmm__points_to_analysis__rule_8_6_p_0(Edge_13, CallSite_3, CalleeRptaInfo_4, CallerNode_2, STATE_VARIABLE_CallerRptaInfo_23_23, &STATE_VARIABLE_CallerRptaInfo_24_24);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Edges_14;
      next_value_of_HeadVar__5_5 = STATE_VARIABLE_CallerRptaInfo_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_8_6_p_0(
  MR_Word Edge_7,
  MR_Word CallSite_8,
  MR_Word CalleeRptaInfo_9,
  MR_Word CallerNode_10,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;
    MR_Word CalleeGraph_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CalleeRptaInfo_9, (MR_Integer) 0))));
    MR_Word CalleeM_16;
    MR_Word Label_17;
    MR_Word RealCallerNode_18;
    MR_Word STATE_VARIABLE_CallerGraph_0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_CallerAlphaMapping_0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_CallerGraph_29;
    MR_Word STATE_VARIABLE_CallerAlphaMapping_30;
    MR_Word _CalleeNode_15;
    MR_Word Var_19;

    transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(CalleeGraph_13, Edge_7, &_CalleeNode_15, &CalleeM_16, &Label_17);
    transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(STATE_VARIABLE_CallerGraph_0_27, CallerNode_10, &RealCallerNode_18);
    succeeded = transform_hlds__rbmm__points_to_graph__rptg_find_edge_from_node_with_same_content_4_p_0(RealCallerNode_18, Label_17, STATE_VARIABLE_CallerGraph_0_27, &Var_19);
    if (succeeded)
    {
      STATE_VARIABLE_CallerAlphaMapping_30 = STATE_VARIABLE_CallerAlphaMapping_0_28;
      STATE_VARIABLE_CallerGraph_29 = STATE_VARIABLE_CallerGraph_0_27;
    }
    else
    {
      MR_Word AlphaAtCallSite0_20;
      MR_Box conv0_AlphaAtCallSite0_20;
      MR_Box conv1_Var_21;

      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[2]), STATE_VARIABLE_CallerAlphaMapping_0_28, ((MR_Box) (CallSite_8)), &conv0_AlphaAtCallSite0_20);
      AlphaAtCallSite0_20 = ((MR_Word) (conv0_AlphaAtCallSite0_20));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), AlphaAtCallSite0_20, ((MR_Box) (CalleeM_16)), &conv1_Var_21);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
      {
        STATE_VARIABLE_CallerAlphaMapping_30 = STATE_VARIABLE_CallerAlphaMapping_0_28;
        STATE_VARIABLE_CallerGraph_29 = STATE_VARIABLE_CallerGraph_0_27;
      }
      else
      {
        MR_Integer CallerNextNodeId_22;
        MR_String RegName_23;
        MR_Word CallerMContent_24;
        MR_Word CallerM_25;
        MR_Word AlphaAtCallSite_26;
        MR_String Var_32;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word STATE_VARIABLE_CallerGraph_37_37;
        MR_Word STATE_VARIABLE_CallerGraph_38_38;
        MR_Word AlphaAtCallSite0_41;
        MR_Box conv2_AlphaAtCallSite0_41;

        CallerNextNodeId_22 = transform_hlds__rbmm__points_to_graph__rptg_get_next_node_id_1_f_0(STATE_VARIABLE_CallerGraph_0_27);
        Var_32 = mercury__string__int_to_string_1_f_0(CallerNextNodeId_22);
        mercury__string__append_3_p_2((MR_String) "R", Var_32, &RegName_23);
        Var_33 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_2[0]));
        Var_34 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
        Var_35 = transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_f_0(CalleeGraph_13, CalleeM_16);
        Var_36 = transform_hlds__rbmm__points_to_graph__rptg_lookup_node_is_allocated_2_f_0(CalleeGraph_13, CalleeM_16);
        {
          CallerMContent_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CallerMContent_24, 0) = ((MR_Box) (Var_33));
          MR_hl_field(MR_mktag(0), CallerMContent_24, 1) = ((MR_Box) (RegName_23));
          MR_hl_field(MR_mktag(0), CallerMContent_24, 2) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(0), CallerMContent_24, 3) = ((MR_Box) (Var_35));
          MR_hl_field(MR_mktag(0), CallerMContent_24, 4) = (MR_Box) ((MR_Unsigned) (Var_36));
        }
        transform_hlds__rbmm__points_to_graph__rptg_add_node_4_p_0(CallerMContent_24, &CallerM_25, STATE_VARIABLE_CallerGraph_0_27, &STATE_VARIABLE_CallerGraph_37_37);
        transform_hlds__rbmm__points_to_graph__edge_operator_5_p_0(RealCallerNode_18, CallerM_25, Label_17, STATE_VARIABLE_CallerGraph_37_37, &STATE_VARIABLE_CallerGraph_38_38);
        mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[2]), STATE_VARIABLE_CallerAlphaMapping_0_28, ((MR_Box) (CallSite_8)), &conv2_AlphaAtCallSite0_41);
        AlphaAtCallSite0_41 = ((MR_Word) (conv2_AlphaAtCallSite0_41));
        mercury__map__set_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ((MR_Box) (CalleeM_16)), ((MR_Box) (CallerM_25)), AlphaAtCallSite0_41, &AlphaAtCallSite_26);
        mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[2]), ((MR_Box) (CallSite_8)), ((MR_Box) (AlphaAtCallSite_26)), STATE_VARIABLE_CallerAlphaMapping_0_28, &STATE_VARIABLE_CallerAlphaMapping_30);
        transform_hlds__rbmm__points_to_analysis__rule_3_3_p_0(CallerM_25, STATE_VARIABLE_CallerGraph_38_38, &STATE_VARIABLE_CallerGraph_29);
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_CallerGraph_29));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_CallerAlphaMapping_30));
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_7_6_p_0(
  MR_Word Edge_7,
  MR_Word CallSite_8,
  MR_Word CalleeRptaInfo_9,
  MR_Word CallerNode_10,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;
    MR_Word CallerAlphaMapping_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 1))));
    MR_Word CalleeGraph_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CalleeRptaInfo_9, (MR_Integer) 0))));
    MR_Word CalleeM_16;
    MR_Word Label_17;
    MR_Word RealCallerNode_18;
    MR_Word STATE_VARIABLE_CallerGraph_0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_CallerGraph_24;
    MR_Word _CalleeNode_15;
    MR_Word Var_19;

    transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(CalleeGraph_13, Edge_7, &_CalleeNode_15, &CalleeM_16, &Label_17);
    transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(STATE_VARIABLE_CallerGraph_0_23, CallerNode_10, &RealCallerNode_18);
    succeeded = transform_hlds__rbmm__points_to_graph__rptg_find_edge_from_node_with_same_content_4_p_0(RealCallerNode_18, Label_17, STATE_VARIABLE_CallerGraph_0_23, &Var_19);
    if (succeeded)
      STATE_VARIABLE_CallerGraph_24 = STATE_VARIABLE_CallerGraph_0_23;
    else
    {
      MR_Word CallerM_21;
      MR_Word AlphaAtCallSite_20;
      MR_Box conv0_AlphaAtCallSite_20;
      MR_Box conv1_CallerM_21;

      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[2]), CallerAlphaMapping_12, ((MR_Box) (CallSite_8)), &conv0_AlphaAtCallSite_20);
      AlphaAtCallSite_20 = ((MR_Word) (conv0_AlphaAtCallSite_20));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), AlphaAtCallSite_20, ((MR_Box) (CalleeM_16)), &conv1_CallerM_21);
      if (succeeded)
      {
        CallerM_21 = ((MR_Word) (conv1_CallerM_21));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word RealCallerM_22;
        MR_Word STATE_VARIABLE_CallerGraph_25_25;

        transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(STATE_VARIABLE_CallerGraph_0_23, CallerM_21, &RealCallerM_22);
        transform_hlds__rbmm__points_to_graph__edge_operator_5_p_0(RealCallerNode_18, RealCallerM_22, Label_17, STATE_VARIABLE_CallerGraph_0_23, &STATE_VARIABLE_CallerGraph_25_25);
        transform_hlds__rbmm__points_to_analysis__rule_3_3_p_0(RealCallerM_22, STATE_VARIABLE_CallerGraph_25_25, &STATE_VARIABLE_CallerGraph_24);
      }
      else
        STATE_VARIABLE_CallerGraph_24 = STATE_VARIABLE_CallerGraph_0_23;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_CallerGraph_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CallerAlphaMapping_12));
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word CalleeGraph_3,
  MR_Word STATE_VARIABLE_CallerGraph_0_4,
  MR_Word * STATE_VARIABLE_CallerGraph_5,
  MR_Word STATE_VARIABLE_AlphaMap_0_6,
  MR_Word * STATE_VARIABLE_AlphaMap_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_AlphaMap_7 = STATE_VARIABLE_AlphaMap_0_6;
        *STATE_VARIABLE_CallerGraph_5 = STATE_VARIABLE_CallerGraph_0_4;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.alpha_mapping_at_call_site\'/7", (MR_String) "mismatched lists");
          return;
        }
    else
    {
      MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.alpha_mapping_at_call_site\'/7", (MR_String) "mismatched lists");
          return;
        }
      else
      {
        MR_Word Yi_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Ys_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word N_Xi_40;
        MR_Word N_Yi_41;
        MR_Word STATE_VARIABLE_CallerGraph_48_48;
        MR_Word STATE_VARIABLE_AlphaMap_49_49;
        MR_Word N_Y_42;
        MR_Box conv0_N_Y_42;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_CallerGraph_0_4;
        MR_Word next_value_of_STATE_VARIABLE_AlphaMap_0_6;

        transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(CalleeGraph_3, Var_57, &N_Xi_40);
        transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(STATE_VARIABLE_CallerGraph_0_4, Yi_35, &N_Yi_41);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), STATE_VARIABLE_AlphaMap_0_6, ((MR_Box) (N_Xi_40)), &conv0_N_Y_42);
        if (succeeded)
        {
          N_Y_42 = ((MR_Word) (conv0_N_Y_42));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Integer Var_59 = (MR_Integer) (N_Y_42);
          MR_Integer Var_60 = (MR_Integer) (N_Yi_41);

          succeeded = (Var_59 == Var_60);
          if (succeeded)
            STATE_VARIABLE_CallerGraph_48_48 = STATE_VARIABLE_CallerGraph_0_4;
          else
          {
            MR_Word STATE_VARIABLE_CallerGraph_47_47;

            transform_hlds__rbmm__points_to_graph__unify_operator_4_p_0(N_Y_42, N_Yi_41, STATE_VARIABLE_CallerGraph_0_4, &STATE_VARIABLE_CallerGraph_47_47);
            transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0(N_Y_42, STATE_VARIABLE_CallerGraph_47_47, &STATE_VARIABLE_CallerGraph_48_48);
          }
          STATE_VARIABLE_AlphaMap_49_49 = STATE_VARIABLE_AlphaMap_0_6;
        }
        else
        {
          mercury__map__set_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ((MR_Box) (N_Xi_40)), ((MR_Box) (N_Yi_41)), STATE_VARIABLE_AlphaMap_0_6, &STATE_VARIABLE_AlphaMap_49_49);
          succeeded = transform_hlds__rbmm__points_to_graph__rptg_is_allocated_node_2_p_0(CalleeGraph_3, N_Xi_40);
          if (succeeded)
            transform_hlds__rbmm__points_to_graph__rptg_set_node_is_allocated_4_p_0(N_Yi_41, (MR_Integer) 1, STATE_VARIABLE_CallerGraph_0_4, &STATE_VARIABLE_CallerGraph_48_48);
          else
            STATE_VARIABLE_CallerGraph_48_48 = STATE_VARIABLE_CallerGraph_0_4;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_56;
        next_value_of_HeadVar__2_2 = Ys_36;
        next_value_of_STATE_VARIABLE_CallerGraph_0_4 = STATE_VARIABLE_CallerGraph_48_48;
        next_value_of_STATE_VARIABLE_AlphaMap_0_6 = STATE_VARIABLE_AlphaMap_49_49;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_CallerGraph_0_4 = next_value_of_STATE_VARIABLE_CallerGraph_0_4;
        STATE_VARIABLE_AlphaMap_0_6 = next_value_of_STATE_VARIABLE_AlphaMap_0_6;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_p_0(
  MR_Word PPId_7,
  MR_Word InfoTable_8,
  MR_Word STATE_VARIABLE_FPtable_0_14,
  MR_Word * STATE_VARIABLE_FPtable_15,
  MR_Word * RptaInfo_10,
  MR_Word * Init_11)
{
  {
    MR_bool succeeded;
    MR_Word RptaInfo0_12;
    MR_Word FPtable1_13;
    MR_Box conv0_RptaInfo0_12;

    succeeded = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), ((MR_Box) (PPId_7)), &conv0_RptaInfo0_12, STATE_VARIABLE_FPtable_0_14, &FPtable1_13);
    if (succeeded)
    {
      RptaInfo0_12 = ((MR_Word) (conv0_RptaInfo0_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *RptaInfo_10 = RptaInfo0_12;
      *STATE_VARIABLE_FPtable_15 = FPtable1_13;
      *Init_11 = (MR_Integer) 0;
    }
    else
    {
      MR_Word RptaInfo0_19;

      succeeded = transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_f_0(PPId_7, InfoTable_8, &RptaInfo0_19);
      if (succeeded)
      {
        *RptaInfo_10 = RptaInfo0_19;
        *Init_11 = (MR_Integer) 0;
      }
      else
      {
        MR_Word Var_17;
        MR_Word Var_18;

        Var_17 = transform_hlds__rbmm__points_to_graph__rpt_graph_init_0_f_0();
        Var_18 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[2]));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *RptaInfo_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
        }
        *Init_11 = (MR_Integer) 1;
      }
      *STATE_VARIABLE_FPtable_15 = STATE_VARIABLE_FPtable_0_14;
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Entry_6;

    conv0_Entry_6 = transform_hlds__rbmm__points_to_analysis__wrapped_init_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Entry_6));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word SCC_6,
  MR_Word STATE_VARIABLE_InfoTable_0_10,
  MR_Word * STATE_VARIABLE_InfoTable_11)
{
  {
    MR_bool succeeded;
    MR_Word SCCProcs_8;

    mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCC_6, &SCCProcs_8);
    succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(SCCProcs_8, ModuleInfo_5);
    if (succeeded)
      *STATE_VARIABLE_InfoTable_11 = STATE_VARIABLE_InfoTable_0_10;
    else
    {
      MR_Word FPTable_9;
      MR_Word Var_17;

      {
        Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_6[2]));
        MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (STATE_VARIABLE_InfoTable_0_10));
      }
      FPTable_9 = transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), Var_17, SCCProcs_8);
      transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0(SCC_6, FPTable_9, ModuleInfo_5, STATE_VARIABLE_InfoTable_0_10, STATE_VARIABLE_InfoTable_11);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_InfoTable_10;

    transform_hlds__rbmm__points_to_analysis__update_rpta_info_in_rpta_info_table_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_InfoTable_10);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_InfoTable_10));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_FPTable_17;

    transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FPTable_17);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FPTable_17));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0(
  MR_Word SCC_6,
  MR_Word FPTable0_7,
  MR_Word ModuleInfo_8,
  MR_Word STATE_VARIABLE_InfoTable_0_12,
  MR_Word * STATE_VARIABLE_InfoTable_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FPTable1_10;
    MR_Word Var_14;
    MR_Box conv1_FPTable1_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (STATE_VARIABLE_InfoTable_0_12));
    }
    mercury__set__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[1]), Var_14, SCC_6, ((MR_Box) (FPTable0_7)), &conv1_FPTable1_10);
    FPTable1_10 = ((MR_Word) (conv1_FPTable1_10));
    succeeded = transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), FPTable1_10);
    if (succeeded)
    {
      MR_Word Var_15;
      MR_Box conv3_STATE_VARIABLE_InfoTable_13;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_3[2]));
        MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (FPTable1_10));
      }
      mercury__set__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[0]), Var_15, SCC_6, ((MR_Box) (STATE_VARIABLE_InfoTable_0_12)), &conv3_STATE_VARIABLE_InfoTable_13);
      *STATE_VARIABLE_InfoTable_13 = ((MR_Word) (conv3_STATE_VARIABLE_InfoTable_13));
    }
    else
    {
      MR_Word FPTable_11;
      MR_Word next_value_of_FPTable0_7;

      transform_hlds__ctgc__fixpoint_table__new_run_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), FPTable1_10, &FPTable_11);
      // direct tailcall eliminated
      ;
      next_value_of_FPTable0_7 = FPTable_11;
      FPTable0_7 = next_value_of_FPTable0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_p_0(
  MR_Word LVar_8,
  MR_Word ConsId_9,
  MR_Word RVar_10,
  MR_Integer STATE_VARIABLE_Component_0_18,
  MR_Integer * STATE_VARIABLE_Component_19,
  MR_Word STATE_VARIABLE_Graph_0_20,
  MR_Word * STATE_VARIABLE_Graph_21)
{
  {
    MR_bool succeeded;
    MR_Word LNode_13;
    MR_Word RNode_14;
    MR_Word Sel_15;
    MR_Word EdgeLabel_16;
    MR_Word Var_22;

    transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(STATE_VARIABLE_Graph_0_20, LVar_8, &LNode_13);
    transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(STATE_VARIABLE_Graph_0_20, RVar_10, &RNode_14);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (ConsId_9));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (STATE_VARIABLE_Component_0_18));
    }
    {
      Sel_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Sel_15, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Sel_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    EdgeLabel_16 = (MR_Word) (Sel_15);
    succeeded = transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0(LNode_13, EdgeLabel_16, RNode_14, STATE_VARIABLE_Graph_0_20);
    if (succeeded)
      *STATE_VARIABLE_Graph_21 = STATE_VARIABLE_Graph_0_20;
    else
    {
      MR_Word RVarNode_17;
      MR_Word STATE_VARIABLE_Graph_24_24;
      MR_Word STATE_VARIABLE_Graph_25_25;
      MR_Word N_36;
      MR_Word M_37;
      MR_Word OutEdgeList_39;

      transform_hlds__rbmm__points_to_graph__edge_operator_5_p_0(LNode_13, RNode_14, EdgeLabel_16, STATE_VARIABLE_Graph_0_20, &STATE_VARIABLE_Graph_24_24);
      transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(STATE_VARIABLE_Graph_24_24, LNode_13, &N_36);
      transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(STATE_VARIABLE_Graph_24_24, RNode_14, &M_37);
      OutEdgeList_39 = transform_hlds__rbmm__points_to_graph__rptg_lookup_list_outedges_2_f_0(STATE_VARIABLE_Graph_24_24, N_36);
      transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_edge_5_p_0(Sel_15, M_37, OutEdgeList_39, STATE_VARIABLE_Graph_24_24, &STATE_VARIABLE_Graph_25_25);
      transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(STATE_VARIABLE_Graph_25_25, RVar_10, &RVarNode_17);
      transform_hlds__rbmm__points_to_analysis__rule_3_3_p_0(RVarNode_17, STATE_VARIABLE_Graph_25_25, STATE_VARIABLE_Graph_21);
    }
    *STATE_VARIABLE_Component_19 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Component_0_18 + (MR_Unsigned) 1);
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_3_p_0(
  MR_Word Node_4,
  MR_Word STATE_VARIABLE_Graph_0_12,
  MR_Word * STATE_VARIABLE_Graph_13)
{
  while (MR_TRUE)
  {
    MR_Word NodeMap_6;
    MR_Word Nodes_7;

    // setup for model_det tailcalls optimized into a loop
    ;
    NodeMap_6 = transform_hlds__rbmm__points_to_graph__rptg_get_nodes_1_f_0(STATE_VARIABLE_Graph_0_12);
    mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0), NodeMap_6, &Nodes_7);
    if ((Nodes_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.rule_3\'/3", (MR_String) "impossible having no node in graph");
        return;
      }
    else
    {
      MR_Word NY_10;
      MR_Word Happened_11;
      MR_Word STATE_VARIABLE_Graph_16_16;

      transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(STATE_VARIABLE_Graph_0_12, Node_4, &NY_10);
      transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0(Nodes_7, NY_10, STATE_VARIABLE_Graph_0_12, &STATE_VARIABLE_Graph_16_16, &Happened_11);
      switch (Happened_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Graph_13 = STATE_VARIABLE_Graph_16_16;
          break;
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_STATE_VARIABLE_Graph_0_12 = STATE_VARIABLE_Graph_16_16;

            // direct tailcall eliminated
            ;
            STATE_VARIABLE_Graph_0_12 = next_value_of_STATE_VARIABLE_Graph_0_12;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0_s * env_ptr = (struct transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0_s * env_ptr = (struct transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word Var_25;

          transform_hlds__rbmm__points_to_graph__rptg_path_4_p_0((env_ptr)->transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__STATE_VARIABLE_Graph_0_3, (env_ptr)->transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NZ_10, (env_ptr)->transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NY_2, &Var_25, transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_1, env_ptr);
        }
        (env_ptr)->transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word NY_2,
  MR_Word STATE_VARIABLE_Graph_0_3,
  MR_Word * STATE_VARIABLE_Graph_4,
  MR_Word * HeadVar__5_5)
{
  {
    struct transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0_s env;

    (env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NY_2 = NY_2;
    (env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__STATE_VARIABLE_Graph_0_3 = STATE_VARIABLE_Graph_0_3;
    while (MR_TRUE)
    {
      // setup for model_det tailcalls optimized into a loop
      ;
      if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__5_5 = (MR_Integer) 0;
        *STATE_VARIABLE_Graph_4 = (env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__STATE_VARIABLE_Graph_0_3;
      }
      else
      {
        MR_Word NZs_11;
        MR_Word NZ1_15;
        MR_Word NZType_26;
        MR_Integer Var_28;
        MR_Integer Var_29;

        (env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NZ_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        NZs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_2(&env);
        if ((env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded)
        {
          NZType_26 = transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_f_0((env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__STATE_VARIABLE_Graph_0_3, (env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NZ_10);
          (env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded = transform_hlds__rbmm__points_to_graph__rptg_reachable_and_having_type_4_p_0((env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__STATE_VARIABLE_Graph_0_3, (env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NY_2, NZType_26, &NZ1_15);
          if ((env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded)
          {
            Var_28 = (MR_Integer) ((env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NZ_10);
            Var_29 = (MR_Integer) (NZ1_15);
            (env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded = (Var_28 != Var_29);
          }
        }
        if ((env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded)
        {
          MR_Word STATE_VARIABLE_Graph_18_18;

          transform_hlds__rbmm__points_to_graph__unify_operator_4_p_0((env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NZ_10, NZ1_15, (env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__STATE_VARIABLE_Graph_0_3, &STATE_VARIABLE_Graph_18_18);
          transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0((env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NZ_10, STATE_VARIABLE_Graph_18_18, STATE_VARIABLE_Graph_4);
          *HeadVar__5_5 = (MR_Integer) 1;
        }
        else
        {
          MR_Word next_value_of_HeadVar__1_1 = NZs_11;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
      }
      break;
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_edge_5_p_0(
  MR_Word Sel_1,
  MR_Word M_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Graph_0_4,
  MR_Word * STATE_VARIABLE_Graph_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Graph_5 = STATE_VARIABLE_Graph_0_4;
    else
    {
      MR_Word Ed_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Eds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word MPrime_17;
      MR_Word EdgeContent_18;
      MR_Word Var_16;
      MR_Word Selector_19;
      MR_Integer Var_27;
      MR_Integer Var_28;

      transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(STATE_VARIABLE_Graph_0_4, Ed_13, &Var_16, &MPrime_17, &EdgeContent_18);
      Selector_19 = (MR_Word) (EdgeContent_18);
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_2[2]), ((MR_Box) (Selector_19)), ((MR_Box) (Sel_1)));
      if (succeeded)
      {
        Var_27 = (MR_Integer) (MPrime_17);
        Var_28 = (MR_Integer) (M_2);
        succeeded = (Var_27 != Var_28);
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Graph_22_22;

        transform_hlds__rbmm__points_to_graph__unify_operator_4_p_0(M_2, MPrime_17, STATE_VARIABLE_Graph_0_4, &STATE_VARIABLE_Graph_22_22);
        transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0(M_2, STATE_VARIABLE_Graph_22_22, STATE_VARIABLE_Graph_5);
      }
      else
      {
        MR_Word next_value_of_HeadVar__3_3 = Eds_14;

        // direct tailcall eliminated
        ;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_case_3_p_0(
  MR_Word Case_4,
  MR_Word STATE_VARIABLE_RptaInfo_0_9,
  MR_Word * STATE_VARIABLE_RptaInfo_10)
{
  {
    MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_4, (MR_Integer) 2))));
    MR_Word GoalExpr_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));

    transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0(GoalExpr_16, STATE_VARIABLE_RptaInfo_0_9, STATE_VARIABLE_RptaInfo_10);
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_InfoTable_0_15,
  MR_Word * STATE_VARIABLE_InfoTable_16)
{
  {
    MR_bool succeeded;
    MR_Word PPId_10;
    MR_Word Var_17;

    {
      PPId_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PPId_10, 0) = ((MR_Box) (PredId_7));
      MR_hl_field(MR_mktag(0), PPId_10, 1) = ((MR_Box) (ProcId_8));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (PPId_10));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(Var_17, ModuleInfo_6);
    if (succeeded)
      *STATE_VARIABLE_InfoTable_16 = STATE_VARIABLE_InfoTable_0_15;
    else
    {
      MR_Word ProcInfo_11;
      MR_Word RptaInfo0_12;
      MR_Word Goal_13;
      MR_Word RptaInfo_14;
      MR_Word GoalExpr_24;

      hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_6, PPId_10, &ProcInfo_11);
      RptaInfo0_12 = transform_hlds__rbmm__points_to_info__rpta_info_init_1_f_0(ProcInfo_11);
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_11, &Goal_13);
      GoalExpr_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_13, (MR_Integer) 0))));
      transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0(GoalExpr_24, RptaInfo0_12, &RptaInfo_14);
      transform_hlds__rbmm__points_to_info__rpta_info_table_set_rpta_info_4_p_0(PPId_10, RptaInfo_14, STATE_VARIABLE_InfoTable_0_15, STATE_VARIABLE_InfoTable_16);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_RptaInfo_10;

    transform_hlds__rbmm__points_to_analysis__intra_analyse_case_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_RptaInfo_10);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_RptaInfo_10));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_RptaInfo_9;

    transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_RptaInfo_9);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_RptaInfo_9));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_RptaInfo_9;

    transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RptaInfo_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RptaInfo_9));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(
  MR_Word tscc_proc_1_input_1_Goal_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_RptaInfo_9)
{
  {
    MR_Word tscc_proc_2_input_1_HeadVar__1_1;
    MR_Word tscc_proc_2_input_2_STATE_VARIABLE_RptaInfo_0_2;
    MR_Word tscc_output_1_STATE_VARIABLE_RptaInfo_9;

    // The code for TSCC PROC 1: pred transform_hlds.rbmm.points_to_analysis.intra_analyse_goal/3-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred transform_hlds.rbmm.points_to_analysis.intra_analyse_goal/3-0
    ;
    // proc 2 in TSCC: pred transform_hlds.rbmm.points_to_analysis.intra_analyse_goal_expr/3-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Goal_4 = tscc_proc_1_input_1_Goal_4;
      MR_Word STATE_VARIABLE_RptaInfo_0_8 = tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8;
      MR_Word STATE_VARIABLE_RptaInfo_9;
      MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 0))));
      MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = GoalExpr_6;
      MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_RptaInfo_0_2 = STATE_VARIABLE_RptaInfo_0_8;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
      tscc_proc_2_input_2_STATE_VARIABLE_RptaInfo_0_2 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_RptaInfo_0_2;
      goto top_of_proc_2;
      tscc_output_1_STATE_VARIABLE_RptaInfo_9 = STATE_VARIABLE_RptaInfo_9;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
      MR_Word STATE_VARIABLE_RptaInfo_0_2 = tscc_proc_2_input_2_STATE_VARIABLE_RptaInfo_0_2;
      MR_Word STATE_VARIABLE_RptaInfo_3;

      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Goal_52 = (MR_Word) ((MR_Word) (HeadVar__1_1));
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = Goal_52;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8 = STATE_VARIABLE_RptaInfo_0_2;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
            tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Unification_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));

            transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0(Unification_60, STATE_VARIABLE_RptaInfo_0_2, &STATE_VARIABLE_RptaInfo_3);
          }
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_RptaInfo_3 = STATE_VARIABLE_RptaInfo_0_2;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_RptaInfo_3 = STATE_VARIABLE_RptaInfo_0_2;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_RptaInfo_3 = STATE_VARIABLE_RptaInfo_0_2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Box conv1_STATE_VARIABLE_RptaInfo_3;

                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[3]), Goals_5, ((MR_Box) (STATE_VARIABLE_RptaInfo_0_2)), &conv1_STATE_VARIABLE_RptaInfo_3);
                STATE_VARIABLE_RptaInfo_3 = ((MR_Word) (conv1_STATE_VARIABLE_RptaInfo_3));
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Box conv3_STATE_VARIABLE_RptaInfo_3;

                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[4]), Goals_46, ((MR_Box) (STATE_VARIABLE_RptaInfo_0_2)), &conv3_STATE_VARIABLE_RptaInfo_3);
                STATE_VARIABLE_RptaInfo_3 = ((MR_Word) (conv3_STATE_VARIABLE_RptaInfo_3));
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Box conv5_STATE_VARIABLE_RptaInfo_3;

                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[5]), Cases_40, ((MR_Box) (STATE_VARIABLE_RptaInfo_0_2)), &conv5_STATE_VARIABLE_RptaInfo_3);
                STATE_VARIABLE_RptaInfo_3 = ((MR_Word) (conv5_STATE_VARIABLE_RptaInfo_3));
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Goal_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = Goal_67;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8 = STATE_VARIABLE_RptaInfo_0_2;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word If_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word Then_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word Else_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_RptaInfo_79_79;
                MR_Word STATE_VARIABLE_RptaInfo_80_80;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8;

                transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(If_73, STATE_VARIABLE_RptaInfo_0_2, &STATE_VARIABLE_RptaInfo_79_79);
                transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(Then_74, STATE_VARIABLE_RptaInfo_79_79, &STATE_VARIABLE_RptaInfo_80_80);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = Else_75;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8 = STATE_VARIABLE_RptaInfo_80_80;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.intra_analyse_goal_expr\'/3", (MR_String) "shorthand");
                return;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_RptaInfo_9 = STATE_VARIABLE_RptaInfo_3;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_RptaInfo_9 = tscc_output_1_STATE_VARIABLE_RptaInfo_9;
    return;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_RptaInfo_0_2,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_RptaInfo_9)
{
  {
    MR_Word tscc_proc_1_input_1_Goal_4;
    MR_Word tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8;
    MR_Word tscc_output_1_STATE_VARIABLE_RptaInfo_9;

    // The code for TSCC PROC 2: pred transform_hlds.rbmm.points_to_analysis.intra_analyse_goal_expr/3-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred transform_hlds.rbmm.points_to_analysis.intra_analyse_goal/3-0
    ;
    // proc 2 in TSCC: pred transform_hlds.rbmm.points_to_analysis.intra_analyse_goal_expr/3-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Goal_4 = tscc_proc_1_input_1_Goal_4;
      MR_Word STATE_VARIABLE_RptaInfo_0_8 = tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8;
      MR_Word STATE_VARIABLE_RptaInfo_9;
      MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 0))));
      MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = GoalExpr_6;
      MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_RptaInfo_0_2 = STATE_VARIABLE_RptaInfo_0_8;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
      tscc_proc_2_input_2_STATE_VARIABLE_RptaInfo_0_2 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_RptaInfo_0_2;
      goto top_of_proc_2;
      tscc_output_1_STATE_VARIABLE_RptaInfo_9 = STATE_VARIABLE_RptaInfo_9;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
      MR_Word STATE_VARIABLE_RptaInfo_0_2 = tscc_proc_2_input_2_STATE_VARIABLE_RptaInfo_0_2;
      MR_Word STATE_VARIABLE_RptaInfo_3;

      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Goal_52 = (MR_Word) ((MR_Word) (HeadVar__1_1));
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = Goal_52;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8 = STATE_VARIABLE_RptaInfo_0_2;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
            tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Unification_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));

            transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0(Unification_60, STATE_VARIABLE_RptaInfo_0_2, &STATE_VARIABLE_RptaInfo_3);
          }
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_RptaInfo_3 = STATE_VARIABLE_RptaInfo_0_2;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_RptaInfo_3 = STATE_VARIABLE_RptaInfo_0_2;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_RptaInfo_3 = STATE_VARIABLE_RptaInfo_0_2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Box conv1_STATE_VARIABLE_RptaInfo_3;

                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[3]), Goals_5, ((MR_Box) (STATE_VARIABLE_RptaInfo_0_2)), &conv1_STATE_VARIABLE_RptaInfo_3);
                STATE_VARIABLE_RptaInfo_3 = ((MR_Word) (conv1_STATE_VARIABLE_RptaInfo_3));
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Box conv3_STATE_VARIABLE_RptaInfo_3;

                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[4]), Goals_46, ((MR_Box) (STATE_VARIABLE_RptaInfo_0_2)), &conv3_STATE_VARIABLE_RptaInfo_3);
                STATE_VARIABLE_RptaInfo_3 = ((MR_Word) (conv3_STATE_VARIABLE_RptaInfo_3));
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Box conv5_STATE_VARIABLE_RptaInfo_3;

                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[5]), Cases_40, ((MR_Box) (STATE_VARIABLE_RptaInfo_0_2)), &conv5_STATE_VARIABLE_RptaInfo_3);
                STATE_VARIABLE_RptaInfo_3 = ((MR_Word) (conv5_STATE_VARIABLE_RptaInfo_3));
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Goal_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = Goal_67;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8 = STATE_VARIABLE_RptaInfo_0_2;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word If_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word Then_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word Else_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_RptaInfo_79_79;
                MR_Word STATE_VARIABLE_RptaInfo_80_80;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8;

                transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(If_73, STATE_VARIABLE_RptaInfo_0_2, &STATE_VARIABLE_RptaInfo_79_79);
                transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(Then_74, STATE_VARIABLE_RptaInfo_79_79, &STATE_VARIABLE_RptaInfo_80_80);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = Else_75;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8 = STATE_VARIABLE_RptaInfo_80_80;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_RptaInfo_0_8;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.intra_analyse_goal_expr\'/3", (MR_String) "shorthand");
                return;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_RptaInfo_9 = STATE_VARIABLE_RptaInfo_3;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_RptaInfo_9 = tscc_output_1_STATE_VARIABLE_RptaInfo_9;
    return;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv5_STATE_VARIABLE_Component_19;
    MR_Word conv4_STATE_VARIABLE_Graph_21;

    transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Component_19, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Graph_21);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Component_19));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Graph_21));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_STATE_VARIABLE_Component_19;
    MR_Word conv0_STATE_VARIABLE_Graph_21;

    transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Component_19, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Graph_21);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Component_19));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Graph_21));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LVar_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ConsId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word RVars_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word AlphaMapping_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word LNode_13;
          MR_Word LNodeContent0_14;
          MR_Word A_15;
          MR_String B_16;
          MR_Word C_17;
          MR_Word D_18;
          MR_Word LNodeContent_20;
          MR_Word STATE_VARIABLE_Graph_0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word STATE_VARIABLE_Graph_23;
          MR_Word STATE_VARIABLE_Graph_25_25;
          MR_Word Var_26;
          MR_Box conv3_Var_21;
          MR_Box conv2_STATE_VARIABLE_Graph_23;

          transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(STATE_VARIABLE_Graph_0_22, LVar_4, &LNode_13);
          LNodeContent0_14 = transform_hlds__rbmm__points_to_graph__rptg_get_node_content_2_f_0(STATE_VARIABLE_Graph_0_22, LNode_13);
          A_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LNodeContent0_14, (MR_Integer) 0))));
          B_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), LNodeContent0_14, (MR_Integer) 1))));
          C_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LNodeContent0_14, (MR_Integer) 2))));
          D_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LNodeContent0_14, (MR_Integer) 3))));
          {
            LNodeContent_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), LNodeContent_20, 0) = ((MR_Box) (A_15));
            MR_hl_field(MR_mktag(0), LNodeContent_20, 1) = ((MR_Box) (B_16));
            MR_hl_field(MR_mktag(0), LNodeContent_20, 2) = ((MR_Box) (C_17));
            MR_hl_field(MR_mktag(0), LNodeContent_20, 3) = ((MR_Box) (D_18));
            MR_hl_field(MR_mktag(0), LNodeContent_20, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
          transform_hlds__rbmm__points_to_graph__rptg_set_node_content_4_p_0(LNode_13, LNodeContent_20, STATE_VARIABLE_Graph_0_22, &STATE_VARIABLE_Graph_25_25);
          {
            Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0_1));
            MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (LVar_4));
            MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (ConsId_5));
          }
          mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0), Var_26, RVars_6, ((MR_Box) ((MR_Integer) 1)), &conv3_Var_21, ((MR_Box) (STATE_VARIABLE_Graph_25_25)), &conv2_STATE_VARIABLE_Graph_23);
          STATE_VARIABLE_Graph_23 = ((MR_Word) (conv2_STATE_VARIABLE_Graph_23));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_Graph_23));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (AlphaMapping_12));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LVar_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ConsId_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word RVars_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word AlphaMapping_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_Graph_0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word STATE_VARIABLE_Graph_39;
          MR_Word Var_40;
          MR_Box conv7_Var_37;
          MR_Box conv6_STATE_VARIABLE_Graph_39;

          {
            Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0_2));
            MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (LVar_29));
            MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) (ConsId_30));
          }
          mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0), Var_40, RVars_31, ((MR_Box) ((MR_Integer) 1)), &conv7_Var_37, ((MR_Box) (STATE_VARIABLE_Graph_0_38)), &conv6_STATE_VARIABLE_Graph_39);
          STATE_VARIABLE_Graph_39 = ((MR_Word) (conv6_STATE_VARIABLE_Graph_39));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_Graph_39));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (AlphaMapping_36));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ToVar_43 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word FromVar_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word AlphaMapping_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word ToNode_47;
          MR_Word FromNode_48;
          MR_Word STATE_VARIABLE_Graph_0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word STATE_VARIABLE_Graph_50;
          MR_Integer Var_82;
          MR_Integer Var_83;

          transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(STATE_VARIABLE_Graph_0_49, ToVar_43, &ToNode_47);
          transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(STATE_VARIABLE_Graph_0_49, FromVar_44, &FromNode_48);
          Var_82 = (MR_Integer) (ToNode_47);
          Var_83 = (MR_Integer) (FromNode_48);
          succeeded = (Var_82 == Var_83);
          if (succeeded)
            STATE_VARIABLE_Graph_50 = STATE_VARIABLE_Graph_0_49;
          else
          {
            MR_Word STATE_VARIABLE_Graph_51_51;

            transform_hlds__rbmm__points_to_graph__unify_operator_4_p_0(ToNode_47, FromNode_48, STATE_VARIABLE_Graph_0_49, &STATE_VARIABLE_Graph_51_51);
            transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0(ToNode_47, STATE_VARIABLE_Graph_51_51, &STATE_VARIABLE_Graph_50);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_Graph_50));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (AlphaMapping_46));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__3_3 = HeadVar__2_2;
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.intra_analyse_unification\'/3", (MR_String) "complicated_unify");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_edges_6_p_0(
  MR_Word Edge_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Graph_0_4,
  MR_Word * STATE_VARIABLE_Graph_5,
  MR_Word * HeadVar__6_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__6_6 = (MR_Integer) 0;
        *STATE_VARIABLE_Graph_5 = STATE_VARIABLE_Graph_0_4;
      }
      else
      {
        MR_Word E_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Es_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word next_value_of_Edge_1 = E_12;
        MR_Word next_value_of_HeadVar__2_2 = Es_13;
        MR_Word next_value_of_HeadVar__3_3 = Es_13;

        // direct tailcall eliminated
        ;
        Edge_1 = next_value_of_Edge_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    else
    {
      MR_Word Ed_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Eds_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word End_27;
      MR_Word EdgeContent_28;
      MR_Word E_30;
      MR_Word EdC_31;
      MR_Word _Start_26;
      MR_Word _S_29;

      transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(STATE_VARIABLE_Graph_0_4, Edge_1, &_Start_26, &End_27, &EdgeContent_28);
      transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(STATE_VARIABLE_Graph_0_4, Ed_21, &_S_29, &E_30, &EdC_31);
      succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0(EdgeContent_28, EdC_31);
      if (succeeded)
      {
        MR_Word Graph1_32;

        transform_hlds__rbmm__points_to_graph__unify_operator_4_p_0(End_27, E_30, STATE_VARIABLE_Graph_0_4, &Graph1_32);
        transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0(End_27, Graph1_32, STATE_VARIABLE_Graph_5);
        *HeadVar__6_6 = (MR_Integer) 1;
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Eds_22;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0(
  MR_Word Node_4,
  MR_Word STATE_VARIABLE_Graph_0_11,
  MR_Word * STATE_VARIABLE_Graph_12)
{
  while (MR_TRUE)
  {
    MR_Word UnifiedNode_6;
    MR_Word OutEdgesOfUnifiedNode_7;

    // setup for model_det tailcalls optimized into a loop
    ;
    transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(STATE_VARIABLE_Graph_0_11, Node_4, &UnifiedNode_6);
    OutEdgesOfUnifiedNode_7 = transform_hlds__rbmm__points_to_graph__rptg_lookup_list_outedges_2_f_0(STATE_VARIABLE_Graph_0_11, UnifiedNode_6);
    if ((OutEdgesOfUnifiedNode_7 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Graph_12 = STATE_VARIABLE_Graph_0_11;
    else
    {
      MR_Word E_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OutEdgesOfUnifiedNode_7, (MR_Integer) 0))));
      MR_Word Es_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OutEdgesOfUnifiedNode_7, (MR_Integer) 1))));
      MR_Word Happened_10;
      MR_Word STATE_VARIABLE_Graph_14_14;

      transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_edges_6_p_0(E_8, Es_9, Es_9, STATE_VARIABLE_Graph_0_11, &STATE_VARIABLE_Graph_14_14, &Happened_10);
      switch (Happened_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Graph_12 = STATE_VARIABLE_Graph_14_14;
          break;
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_Node_4 = UnifiedNode_6;
            MR_Word next_value_of_STATE_VARIABLE_Graph_0_11 = STATE_VARIABLE_Graph_14_14;

            // direct tailcall eliminated
            ;
            Node_4 = next_value_of_Node_4;
            STATE_VARIABLE_Graph_0_11 = next_value_of_STATE_VARIABLE_Graph_0_11;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_InfoTable_16;

    transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InfoTable_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InfoTable_16));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_InfoTable_0_10,
  MR_Word * STATE_VARIABLE_InfoTable_11)
{
  {
    MR_Word PredInfo_8;
    MR_Word ProcIds_9;
    MR_Word Var_12;
    MR_Box conv1_STATE_VARIABLE_InfoTable_11;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_8);
    ProcIds_9 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(PredInfo_8);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (PredId_6));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[0]), Var_12, ProcIds_9, ((MR_Box) (STATE_VARIABLE_InfoTable_0_10)), &conv1_STATE_VARIABLE_InfoTable_11);
    *STATE_VARIABLE_InfoTable_11 = ((MR_Word) (conv1_STATE_VARIABLE_InfoTable_11));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_InfoTable_11;

    transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_InfoTable_11);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_InfoTable_11));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_InfoTable_11;

    transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InfoTable_11);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InfoTable_11));
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0(
  MR_Word * InfoTable_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word InfoTable0_6;
    MR_Word InfoTable1_7;
    MR_Word PredIds_14;
    MR_Word Var_15;
    MR_Word ModuleInfo_26;
    MR_Word DepInfo_27;
    MR_Word BottomUpSCCs_28;
    MR_Word Var_36;
    MR_Box conv1_InfoTable1_7;
    MR_Box conv3_InfoTable_4;

    InfoTable0_6 = transform_hlds__rbmm__points_to_info__rpta_info_table_init_0_f_0();
    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_8, &PredIds_14);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[0]), Var_15, PredIds_14, ((MR_Box) (InfoTable0_6)), &conv1_InfoTable1_7);
    InfoTable1_7 = ((MR_Word) (conv1_InfoTable1_7));
    hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_8, &ModuleInfo_26, &DepInfo_27);
    BottomUpSCCs_28 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_27);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (ModuleInfo_26));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_2[1]), (MR_Word) (&transform_hlds__rbmm__points_to_analysis_scalar_common_1[0]), Var_36, BottomUpSCCs_28, ((MR_Box) (InfoTable1_7)), &conv3_InfoTable_4);
    *InfoTable_4 = ((MR_Word) (conv3_InfoTable_4));
    *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_analysis____Unify____rpta_fixpoint_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__rbmm__points_to_analysis____Unify____rpta_fixpoint_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis____Compare____rpta_fixpoint_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__rbmm__points_to_analysis____Compare____rpta_fixpoint_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__rbmm__points_to_analysis__init(void)
{
}

void mercury__transform_hlds__rbmm__points_to_analysis__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__rbmm__points_to_analysis__transform_hlds__rbmm__points_to_analysis__type_ctor_info_rpta_fixpoint_table_0);
}

void mercury__transform_hlds__rbmm__points_to_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__rbmm__points_to_analysis__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.rbmm.points_to_analysis.
