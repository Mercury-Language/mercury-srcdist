/*
** Automatically generated from `rbmm.points_to_analysis.m'
** by the Mercury compiler,
** version rotd-2017-07-15
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module transform_hlds.rbmm.points_to_analysis. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__rbmm__points_to_analysis__init
ENDINIT
*/

#include "transform_hlds.rbmm.points_to_analysis.mih"


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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_path.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
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
#include "int.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
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
transform_hlds__rbmm__points_to_analysis____Unify____rpta_fixpoint_table_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis____Compare____rpta_fixpoint_table_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_analysis__IntroducedFrom__pred__rpta_fixpoint_table_new_rpta_info__1042__1_2_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__LambdaHeadVar__1_13,
  MR_Word transform_hlds__rbmm__points_to_analysis__LambdaHeadVar__2_14);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis____Compare____rpta_fixpoint_table_0_0(
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_analysis____Unify____rpta_fixpoint_table_0_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2_2);

static MR_Word MR_CALL 
transform_hlds__rbmm__points_to_analysis__wrapped_init_2_f_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_4,
  MR_Word transform_hlds__rbmm__points_to_analysis__PPId_5);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__update_rpta_info_in_rpta_info_table_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__FPTable_5,
  MR_Word transform_hlds__rbmm__points_to_analysis__PPId_6,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_9,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_10);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_case_7_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_8,
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_9,
  MR_Word transform_hlds__rbmm__points_to_analysis__Case_10,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_0_16,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_17,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_18,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_19);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_p_0_1(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_6,
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_7,
  MR_Word transform_hlds__rbmm__points_to_analysis__PPId_8,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_16,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_17);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_3(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_2(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_1(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_analysis__GoalInfo_2,
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_3,
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_4,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_5,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_6,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__7_7,
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__8_8);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_8,
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_9,
  MR_Word transform_hlds__rbmm__points_to_analysis__Goal_10,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_0_15,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_16,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_17,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_18);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__apply_rules_6_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_analysis__CallSite_2,
  MR_Word transform_hlds__rbmm__points_to_analysis__Processed_3,
  MR_Word transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_0_5,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_6);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__apply_rules_outedges_6_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_analysis__CallerNode_2,
  MR_Word transform_hlds__rbmm__points_to_analysis__CallSite_3,
  MR_Word transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__5_5,
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__6_6);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_8_6_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__Edge_7,
  MR_Word transform_hlds__rbmm__points_to_analysis__CallSite_8,
  MR_Word transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_9,
  MR_Word transform_hlds__rbmm__points_to_analysis__CallerNode_10,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__5_5,
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__6_6);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_7_6_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__Edge_7,
  MR_Word transform_hlds__rbmm__points_to_analysis__CallSite_8,
  MR_Word transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_9,
  MR_Word transform_hlds__rbmm__points_to_analysis__CallerNode_10,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__5_5,
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__6_6);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_analysis__CalleeGraph_3,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_4,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_5,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_0_6,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_7);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__PPId_7,
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_8,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_0_14,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_15,
  MR_Word * transform_hlds__rbmm__points_to_analysis__RptaInfo_10,
  MR_Word * transform_hlds__rbmm__points_to_analysis__Init_11);

static MR_Box MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_p_0_1(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_5,
  MR_Word transform_hlds__rbmm__points_to_analysis__SCC_6,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_10,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_11);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0_2(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0_1(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__SCC_6,
  MR_Word transform_hlds__rbmm__points_to_analysis__FPTable0_7,
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_8,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_12,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_13);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__LVar_8,
  MR_Word transform_hlds__rbmm__points_to_analysis__ConsId_9,
  MR_Word transform_hlds__rbmm__points_to_analysis__RVar_10,
  MR_Integer transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Component_0_18,
  MR_Integer * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Component_19,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_20,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_21);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__Node_4,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_12,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_13);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_1(
  void * transform_hlds__rbmm__points_to_analysis__env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_2(
  void * transform_hlds__rbmm__points_to_analysis__env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_analysis__NY_2,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_3,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_4,
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__5_5);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_edge_5_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__Sel_1,
  MR_Word transform_hlds__rbmm__points_to_analysis__M_2,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__3_3,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_4,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_5);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_case_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__Case_4,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_9,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_10);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_6,
  MR_Word transform_hlds__rbmm__points_to_analysis__PredId_7,
  MR_Integer transform_hlds__rbmm__points_to_analysis__ProcId_8,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_15,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_16);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_3(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_2(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_1(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__Goal_4,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_8,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_9);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0_2(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0_1(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2_2,
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__3_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_edges_6_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__Edge_1,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__3_3,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_4,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_5,
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__6_6);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__Node_4,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_11,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_12);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_p_0_1(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_5,
  MR_Word transform_hlds__rbmm__points_to_analysis__PredId_6,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_10,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_11);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0_2(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0_1(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3);


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
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_analysis__transform_hlds__rbmm__points_to_analysis__type_ctor_info_rpta_fixpoint_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_analysis____Unify____rpta_fixpoint_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_analysis____Compare____rpta_fixpoint_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_analysis",
  (MR_String) "rpta_fixpoint_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_analysis____Unify____rpta_fixpoint_table_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;

    {
      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_analysis____Unify____rpta_fixpoint_table_0_0(((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2));
    }
    return transform_hlds__rbmm__points_to_analysis__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis____Compare____rpta_fixpoint_table_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__rbmm__points_to_analysis__conv0_HeadVar__1_1;

    {
      transform_hlds__rbmm__points_to_analysis____Compare____rpta_fixpoint_table_0_0(&transform_hlds__rbmm__points_to_analysis__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_3));
    }
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_analysis__IntroducedFrom__pred__rpta_fixpoint_table_new_rpta_info__1042__1_2_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__LambdaHeadVar__1_13,
  MR_Word transform_hlds__rbmm__points_to_analysis__LambdaHeadVar__2_14)
{
  {
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;

    {
      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_info__rpta_info_equal_2_p_0(transform_hlds__rbmm__points_to_analysis__LambdaHeadVar__2_14, transform_hlds__rbmm__points_to_analysis__LambdaHeadVar__1_13);
    }
    return transform_hlds__rbmm__points_to_analysis__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis____Compare____rpta_fixpoint_table_0_0(
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
    MR_Word transform_hlds__rbmm__points_to_analysis__Cast_HeadVar1_4 = transform_hlds__rbmm__points_to_analysis__HeadVar__2_2;
    MR_Word transform_hlds__rbmm__points_to_analysis__Cast_HeadVar2_5 = transform_hlds__rbmm__points_to_analysis__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[1], transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__points_to_analysis__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_analysis____Unify____rpta_fixpoint_table_0_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
    MR_Word transform_hlds__rbmm__points_to_analysis__Cast_HeadVar1_3 = transform_hlds__rbmm__points_to_analysis__HeadVar__1_1;
    MR_Word transform_hlds__rbmm__points_to_analysis__Cast_HeadVar2_4 = transform_hlds__rbmm__points_to_analysis__HeadVar__2_2;

    {
      transform_hlds__rbmm__points_to_analysis__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[1], ((MR_Box) (transform_hlds__rbmm__points_to_analysis__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__points_to_analysis__Cast_HeadVar2_4)));
    }
    return transform_hlds__rbmm__points_to_analysis__succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__rbmm__points_to_analysis__wrapped_init_2_f_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_4,
  MR_Word transform_hlds__rbmm__points_to_analysis__PPId_5)
{
  {
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
    MR_Word transform_hlds__rbmm__points_to_analysis__Entry_6;
    MR_Word transform_hlds__rbmm__points_to_analysis__Entry0_7;

    {
      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_f_0(transform_hlds__rbmm__points_to_analysis__PPId_5, transform_hlds__rbmm__points_to_analysis__InfoTable_4, &transform_hlds__rbmm__points_to_analysis__Entry0_7);
    }
    if (transform_hlds__rbmm__points_to_analysis__succeeded)
      transform_hlds__rbmm__points_to_analysis__Entry_6 = transform_hlds__rbmm__points_to_analysis__Entry0_7;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_analysis", (MR_String) "function \140transform_hlds.rbmm.points_to_analysis.wrapped_init\'/2", (MR_String) "no rpta_info");
        }
      }
    return transform_hlds__rbmm__points_to_analysis__Entry_6;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__update_rpta_info_in_rpta_info_table_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__FPTable_5,
  MR_Word transform_hlds__rbmm__points_to_analysis__PPId_6,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_9,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_10)
{
  {
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
    MR_Word transform_hlds__rbmm__points_to_analysis__RptaInfo_8;
    MR_Box transform_hlds__rbmm__points_to_analysis__conv0_RptaInfo_8;

    {
      transform_hlds__rbmm__points_to_analysis__conv0_RptaInfo_8 = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__PPId_6)), transform_hlds__rbmm__points_to_analysis__FPTable_5);
    }
    transform_hlds__rbmm__points_to_analysis__RptaInfo_8 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv0_RptaInfo_8);
    {
      transform_hlds__rbmm__points_to_info__rpta_info_table_set_rpta_info_4_p_0(transform_hlds__rbmm__points_to_analysis__PPId_6, transform_hlds__rbmm__points_to_analysis__RptaInfo_8, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_9, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_10);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_case_7_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_8,
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_9,
  MR_Word transform_hlds__rbmm__points_to_analysis__Case_10,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_0_16,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_17,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_18,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_19)
{
  {
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
    MR_Word transform_hlds__rbmm__points_to_analysis__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Case_10, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_analysis__GoalExpr_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_15, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_analysis__GoalInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_15, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_analysis__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Case_10, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_analysis__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Case_10, (MR_Integer) 1)));

    {
      transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0(transform_hlds__rbmm__points_to_analysis__GoalExpr_31, transform_hlds__rbmm__points_to_analysis__GoalInfo_32, transform_hlds__rbmm__points_to_analysis__ModuleInfo_8, transform_hlds__rbmm__points_to_analysis__InfoTable_9, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_0_16, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_17, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_18, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_19);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_p_0_1(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;

    {
      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_analysis__IntroducedFrom__pred__rpta_fixpoint_table_new_rpta_info__1042__1_2_p_0(((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2));
    }
    return transform_hlds__rbmm__points_to_analysis__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_6,
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_7,
  MR_Word transform_hlds__rbmm__points_to_analysis__PPId_8,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_16,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_17)
{
  {
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
    MR_Word transform_hlds__rbmm__points_to_analysis__ProcRptaInfo0_10;
    MR_Word transform_hlds__rbmm__points_to_analysis__ProcInfo0_12;
    MR_Word transform_hlds__rbmm__points_to_analysis__ProcInfo_13;
    MR_Word transform_hlds__rbmm__points_to_analysis__Goal_14;
    MR_Word transform_hlds__rbmm__points_to_analysis__ProcRptaInfo_15;
    MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_18_18;
    MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_19_19;
    MR_Word transform_hlds__rbmm__points_to_analysis__GoalExpr_48;
    MR_Word transform_hlds__rbmm__points_to_analysis__GoalInfo_49;
    MR_Word transform_hlds__rbmm__points_to_analysis__RptaInfo0_28;
    MR_Word transform_hlds__rbmm__points_to_analysis__FPtable1_29;
    MR_Box transform_hlds__rbmm__points_to_analysis__conv0_RptaInfo0_28;

    {
      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__PPId_8)), &transform_hlds__rbmm__points_to_analysis__conv0_RptaInfo0_28, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_16, &transform_hlds__rbmm__points_to_analysis__FPtable1_29);
    }
    if (transform_hlds__rbmm__points_to_analysis__succeeded)
      {
        transform_hlds__rbmm__points_to_analysis__RptaInfo0_28 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv0_RptaInfo0_28);
        transform_hlds__rbmm__points_to_analysis__succeeded = MR_TRUE;
      }
    if (transform_hlds__rbmm__points_to_analysis__succeeded)
      {
        transform_hlds__rbmm__points_to_analysis__ProcRptaInfo0_10 = transform_hlds__rbmm__points_to_analysis__RptaInfo0_28;
        transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_18_18 = transform_hlds__rbmm__points_to_analysis__FPtable1_29;
      }
    else
      {
        MR_Word transform_hlds__rbmm__points_to_analysis__RptaInfo0_33;

        {
          transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_f_0(transform_hlds__rbmm__points_to_analysis__PPId_8, transform_hlds__rbmm__points_to_analysis__InfoTable_7, &transform_hlds__rbmm__points_to_analysis__RptaInfo0_33);
        }
        if (transform_hlds__rbmm__points_to_analysis__succeeded)
          transform_hlds__rbmm__points_to_analysis__ProcRptaInfo0_10 = transform_hlds__rbmm__points_to_analysis__RptaInfo0_33;
        else
          {
            MR_Word transform_hlds__rbmm__points_to_analysis__Var_31;
            MR_Word transform_hlds__rbmm__points_to_analysis__Var_32;

            {
              transform_hlds__rbmm__points_to_analysis__Var_31 = transform_hlds__rbmm__points_to_graph__rpt_graph_init_0_f_0();
            }
            {
              transform_hlds__rbmm__points_to_analysis__Var_32 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[2]);
            }
            {
              transform_hlds__rbmm__points_to_analysis__ProcRptaInfo0_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__ProcRptaInfo0_10, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__Var_31));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__ProcRptaInfo0_10, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__Var_32));
            }
          }
        transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_18_18 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_16;
      }
    {
      hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__rbmm__points_to_analysis__ModuleInfo_6, transform_hlds__rbmm__points_to_analysis__PPId_8, &transform_hlds__rbmm__points_to_analysis__ProcInfo0_12);
    }
    {
      hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(transform_hlds__rbmm__points_to_analysis__ModuleInfo_6, transform_hlds__rbmm__points_to_analysis__ProcInfo0_12, &transform_hlds__rbmm__points_to_analysis__ProcInfo_13);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__rbmm__points_to_analysis__ProcInfo_13, &transform_hlds__rbmm__points_to_analysis__Goal_14);
    }
    transform_hlds__rbmm__points_to_analysis__GoalExpr_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_14, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_analysis__GoalInfo_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_14, (MR_Integer) 1)));
    {
      transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0(transform_hlds__rbmm__points_to_analysis__GoalExpr_48, transform_hlds__rbmm__points_to_analysis__GoalInfo_49, transform_hlds__rbmm__points_to_analysis__ModuleInfo_6, transform_hlds__rbmm__points_to_analysis__InfoTable_7, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_18_18, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_19_19, transform_hlds__rbmm__points_to_analysis__ProcRptaInfo0_10, &transform_hlds__rbmm__points_to_analysis__ProcRptaInfo_15);
    }
    {
      transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_p_0((MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[6], ((MR_Box) (transform_hlds__rbmm__points_to_analysis__PPId_8)), ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ProcRptaInfo_15)), transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_19_19, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_17);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_3(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
    MR_Word transform_hlds__rbmm__points_to_analysis__conv9_STATE_VARIABLE_FPtable_17;
    MR_Word transform_hlds__rbmm__points_to_analysis__conv8_STATE_VARIABLE_RptaInfo_19;

    {
      transform_hlds__rbmm__points_to_analysis__inter_analyse_case_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv9_STATE_VARIABLE_FPtable_17, ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_4), &transform_hlds__rbmm__points_to_analysis__conv8_STATE_VARIABLE_RptaInfo_19);
    }
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv9_STATE_VARIABLE_FPtable_17));
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv8_STATE_VARIABLE_RptaInfo_19));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_2(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
    MR_Word transform_hlds__rbmm__points_to_analysis__conv5_STATE_VARIABLE_FPtable_16;
    MR_Word transform_hlds__rbmm__points_to_analysis__conv4_STATE_VARIABLE_RptaInfo_18;

    {
      transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv5_STATE_VARIABLE_FPtable_16, ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_4), &transform_hlds__rbmm__points_to_analysis__conv4_STATE_VARIABLE_RptaInfo_18);
    }
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv5_STATE_VARIABLE_FPtable_16));
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv4_STATE_VARIABLE_RptaInfo_18));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_1(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
    MR_Word transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_FPtable_16;
    MR_Word transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_RptaInfo_18;

    {
      transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_FPtable_16, ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_4), &transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_RptaInfo_18);
    }
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_FPtable_16));
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_RptaInfo_18));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_analysis__GoalInfo_2,
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_3,
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_4,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_5,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_6,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__7_7,
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__8_8)
{
  {
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__rbmm__points_to_analysis__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__rbmm__points_to_analysis__Goal_117 = (MR_Word) MR_body(((MR_Word) transform_hlds__rbmm__points_to_analysis__HeadVar__1_1), (MR_Integer) 0);

          {
            transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(transform_hlds__rbmm__points_to_analysis__ModuleInfo_3, transform_hlds__rbmm__points_to_analysis__InfoTable_4, transform_hlds__rbmm__points_to_analysis__Goal_117, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_5, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_6, transform_hlds__rbmm__points_to_analysis__HeadVar__7_7, transform_hlds__rbmm__points_to_analysis__HeadVar__8_8);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *transform_hlds__rbmm__points_to_analysis__HeadVar__8_8 = transform_hlds__rbmm__points_to_analysis__HeadVar__7_7;
          *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_6 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_5;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__rbmm__points_to_analysis__PredId_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer transform_hlds__rbmm__points_to_analysis__ProcId_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word transform_hlds__rbmm__points_to_analysis__ActualParams_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word transform_hlds__rbmm__points_to_analysis__CalleePPId_35;
          MR_Word transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_36;
          MR_Word transform_hlds__rbmm__points_to_analysis__IsInit_37;
          MR_Word transform_hlds__rbmm__points_to_analysis__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 3)));
          MR_Word transform_hlds__rbmm__points_to_analysis__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 4)));
          MR_Word transform_hlds__rbmm__points_to_analysis__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 5)));

          {
            transform_hlds__rbmm__points_to_analysis__CalleePPId_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleePPId_35, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__PredId_29));
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleePPId_35, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ProcId_30));
          }
          {
            transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_p_0(transform_hlds__rbmm__points_to_analysis__CalleePPId_35, transform_hlds__rbmm__points_to_analysis__InfoTable_4, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_5, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_6, &transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_36, &transform_hlds__rbmm__points_to_analysis__IsInit_37);
          }
          switch (transform_hlds__rbmm__points_to_analysis__IsInit_37) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_202_202;
                MR_Word transform_hlds__rbmm__points_to_analysis__CallSite_38;
                MR_Word transform_hlds__rbmm__points_to_analysis__CalleeGraph_39;
                MR_Word transform_hlds__rbmm__points_to_analysis__CalleeProcInfo_41;
                MR_Word transform_hlds__rbmm__points_to_analysis__FormalParams_42;
                MR_Word transform_hlds__rbmm__points_to_analysis__CallerGraph0_43;
                MR_Word transform_hlds__rbmm__points_to_analysis__CallerAlphaMappings0_44;
                MR_Word transform_hlds__rbmm__points_to_analysis__CallerGraph_45;
                MR_Word transform_hlds__rbmm__points_to_analysis__CallerAlphaMappingAtCallSite_46;
                MR_Word transform_hlds__rbmm__points_to_analysis__CallerAlphaMappings_47;
                MR_Word transform_hlds__rbmm__points_to_analysis__CallerRptaInfo1_48;
                MR_Word transform_hlds__rbmm__points_to_analysis__FormalNodes_49;
                MR_Word transform_hlds__rbmm__points_to_analysis__Var_55;
                MR_Word transform_hlds__rbmm__points_to_analysis__Var_40;

                {
                  transform_hlds__rbmm__points_to_analysis__CallSite_38 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__points_to_analysis__GoalInfo_2);
                }
                transform_hlds__rbmm__points_to_analysis__CalleeGraph_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_36, (MR_Integer) 0)));
                transform_hlds__rbmm__points_to_analysis__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_36, (MR_Integer) 1)));
                {
                  hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__rbmm__points_to_analysis__ModuleInfo_3, transform_hlds__rbmm__points_to_analysis__CalleePPId_35, &transform_hlds__rbmm__points_to_analysis__CalleeProcInfo_41);
                }
                {
                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__rbmm__points_to_analysis__CalleeProcInfo_41, &transform_hlds__rbmm__points_to_analysis__FormalParams_42);
                }
                transform_hlds__rbmm__points_to_analysis__CallerGraph0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__7_7, (MR_Integer) 0)));
                transform_hlds__rbmm__points_to_analysis__CallerAlphaMappings0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__7_7, (MR_Integer) 1)));
                transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_202_202 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
                {
                  transform_hlds__rbmm__points_to_analysis__Var_55 = mercury__map__init_0_f_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_202_202, transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_202_202);
                }
                {
                  transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_p_0(transform_hlds__rbmm__points_to_analysis__FormalParams_42, transform_hlds__rbmm__points_to_analysis__ActualParams_31, transform_hlds__rbmm__points_to_analysis__CalleeGraph_39, transform_hlds__rbmm__points_to_analysis__CallerGraph0_43, &transform_hlds__rbmm__points_to_analysis__CallerGraph_45, transform_hlds__rbmm__points_to_analysis__Var_55, &transform_hlds__rbmm__points_to_analysis__CallerAlphaMappingAtCallSite_46);
                }
                {
                  mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[2], ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallSite_38)), ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallerAlphaMappingAtCallSite_46)), transform_hlds__rbmm__points_to_analysis__CallerAlphaMappings0_44, &transform_hlds__rbmm__points_to_analysis__CallerAlphaMappings_47);
                }
                {
                  transform_hlds__rbmm__points_to_analysis__CallerRptaInfo1_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CallerRptaInfo1_48, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallerGraph_45));
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CallerRptaInfo1_48, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallerAlphaMappings_47));
                }
                {
                  mercury__map__keys_2_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_202_202, transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_202_202, transform_hlds__rbmm__points_to_analysis__CallerAlphaMappingAtCallSite_46, &transform_hlds__rbmm__points_to_analysis__FormalNodes_49);
                }
                {
                  transform_hlds__rbmm__points_to_analysis__apply_rules_6_p_0(transform_hlds__rbmm__points_to_analysis__FormalNodes_49, transform_hlds__rbmm__points_to_analysis__CallSite_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_36, transform_hlds__rbmm__points_to_analysis__CallerRptaInfo1_48, transform_hlds__rbmm__points_to_analysis__HeadVar__8_8);
                }
              }
              break;
            case (MR_Integer) 1:
              *transform_hlds__rbmm__points_to_analysis__HeadVar__8_8 = transform_hlds__rbmm__points_to_analysis__HeadVar__7_7;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "transform_hlds.rbmm.points_to_analysis", (MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.inter_analyse_goal_expr\'/8", (MR_String) "generic_call not handled");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "transform_hlds.rbmm.points_to_analysis", (MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.inter_analyse_goal_expr\'/8", (MR_String) "foreign code");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__rbmm__points_to_analysis__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word transform_hlds__rbmm__points_to_analysis__Var_20;
              MR_Word transform_hlds__rbmm__points_to_analysis___ConjType_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
              MR_Box transform_hlds__rbmm__points_to_analysis__conv3_STATE_VARIABLE_FPTable_6;
              MR_Box transform_hlds__rbmm__points_to_analysis__conv2_HeadVar__8_8;

              {
                transform_hlds__rbmm__points_to_analysis__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_20, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_20, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_1));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_20, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ModuleInfo_3));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_20, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__InfoTable_4));
              }
              {
                mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__points_to_analysis__Var_20, transform_hlds__rbmm__points_to_analysis__Goals_10, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_5)), &transform_hlds__rbmm__points_to_analysis__conv3_STATE_VARIABLE_FPTable_6, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__HeadVar__7_7)), &transform_hlds__rbmm__points_to_analysis__conv2_HeadVar__8_8);
              }
              *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_6 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv3_STATE_VARIABLE_FPTable_6);
              *transform_hlds__rbmm__points_to_analysis__HeadVar__8_8 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv2_HeadVar__8_8);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__rbmm__points_to_analysis__Disjs_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word transform_hlds__rbmm__points_to_analysis__Var_114;
              MR_Box transform_hlds__rbmm__points_to_analysis__conv7_STATE_VARIABLE_FPTable_6;
              MR_Box transform_hlds__rbmm__points_to_analysis__conv6_HeadVar__8_8;

              {
                transform_hlds__rbmm__points_to_analysis__Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_114, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_114, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_2));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_114, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_114, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ModuleInfo_3));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_114, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__InfoTable_4));
              }
              {
                mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__points_to_analysis__Var_114, transform_hlds__rbmm__points_to_analysis__Disjs_104, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_5)), &transform_hlds__rbmm__points_to_analysis__conv7_STATE_VARIABLE_FPTable_6, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__HeadVar__7_7)), &transform_hlds__rbmm__points_to_analysis__conv6_HeadVar__8_8);
              }
              *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_6 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv7_STATE_VARIABLE_FPTable_6);
              *transform_hlds__rbmm__points_to_analysis__HeadVar__8_8 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv6_HeadVar__8_8);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__rbmm__points_to_analysis__Cases_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word transform_hlds__rbmm__points_to_analysis__Var_87;
              MR_Word transform_hlds__rbmm__points_to_analysis__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word transform_hlds__rbmm__points_to_analysis__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
              MR_Box transform_hlds__rbmm__points_to_analysis__conv11_STATE_VARIABLE_FPTable_6;
              MR_Box transform_hlds__rbmm__points_to_analysis__conv10_HeadVar__8_8;

              {
                transform_hlds__rbmm__points_to_analysis__Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_87, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_5[2]));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_87, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_3));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_87, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ModuleInfo_3));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_87, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__InfoTable_4));
              }
              {
                mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__points_to_analysis__Var_87, transform_hlds__rbmm__points_to_analysis__Cases_77, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_5)), &transform_hlds__rbmm__points_to_analysis__conv11_STATE_VARIABLE_FPTable_6, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__HeadVar__7_7)), &transform_hlds__rbmm__points_to_analysis__conv10_HeadVar__8_8);
              }
              *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_6 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv11_STATE_VARIABLE_FPTable_6);
              *transform_hlds__rbmm__points_to_analysis__HeadVar__8_8 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv10_HeadVar__8_8);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__rbmm__points_to_analysis__Goal_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word transform_hlds__rbmm__points_to_analysis___Reason_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));

              {
                transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(transform_hlds__rbmm__points_to_analysis__ModuleInfo_3, transform_hlds__rbmm__points_to_analysis__InfoTable_4, transform_hlds__rbmm__points_to_analysis__Goal_130, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_5, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_6, transform_hlds__rbmm__points_to_analysis__HeadVar__7_7, transform_hlds__rbmm__points_to_analysis__HeadVar__8_8);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__rbmm__points_to_analysis__If_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word transform_hlds__rbmm__points_to_analysis__Then_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word transform_hlds__rbmm__points_to_analysis__Else_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 4)));
              MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_155_155;
              MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_156_156;
              MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_157_157;
              MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_158_158;
              MR_Word transform_hlds__rbmm__points_to_analysis___Vars_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));

              {
                transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(transform_hlds__rbmm__points_to_analysis__ModuleInfo_3, transform_hlds__rbmm__points_to_analysis__InfoTable_4, transform_hlds__rbmm__points_to_analysis__If_143, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_5, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_155_155, transform_hlds__rbmm__points_to_analysis__HeadVar__7_7, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_156_156);
              }
              {
                transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(transform_hlds__rbmm__points_to_analysis__ModuleInfo_3, transform_hlds__rbmm__points_to_analysis__InfoTable_4, transform_hlds__rbmm__points_to_analysis__Then_144, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_155_155, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_157_157, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_156_156, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_158_158);
              }
              {
                transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(transform_hlds__rbmm__points_to_analysis__ModuleInfo_3, transform_hlds__rbmm__points_to_analysis__InfoTable_4, transform_hlds__rbmm__points_to_analysis__Else_145, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_157_157, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_6, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_158_158, transform_hlds__rbmm__points_to_analysis__HeadVar__8_8);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_analysis", (MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.inter_analyse_goal_expr\'/8", (MR_String) "shorthand");
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
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_8,
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_9,
  MR_Word transform_hlds__rbmm__points_to_analysis__Goal_10,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_0_15,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_16,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_17,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_18)
{
  {
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
    MR_Word transform_hlds__rbmm__points_to_analysis__GoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_10, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_analysis__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_10, (MR_Integer) 1)));

    {
      transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0(transform_hlds__rbmm__points_to_analysis__GoalExpr_13, transform_hlds__rbmm__points_to_analysis__GoalInfo_14, transform_hlds__rbmm__points_to_analysis__ModuleInfo_8, transform_hlds__rbmm__points_to_analysis__InfoTable_9, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_0_15, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_16, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_17, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_18);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__apply_rules_6_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_analysis__CallSite_2,
  MR_Word transform_hlds__rbmm__points_to_analysis__Processed_3,
  MR_Word transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_0_5,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;

        if ((transform_hlds__rbmm__points_to_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_6 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_0_5;
        else
          {
            MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_36_36;
            MR_Word transform_hlds__rbmm__points_to_analysis__CalleeNode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__rbmm__points_to_analysis__CalleeNodes0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__points_to_analysis__CallerAlphaMapping0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_0_5, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_21;
            MR_Word transform_hlds__rbmm__points_to_analysis__CallerNode_22;
            MR_Word transform_hlds__rbmm__points_to_analysis__CalleeGraph_23;
            MR_Word transform_hlds__rbmm__points_to_analysis__SuccessorsCalleeNode_25;
            MR_Word transform_hlds__rbmm__points_to_analysis__SsList_26;
            MR_Word transform_hlds__rbmm__points_to_analysis__ToBeProcessed_27;
            MR_Word transform_hlds__rbmm__points_to_analysis__CalleeNodes_28;
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_31_31;
            MR_Word transform_hlds__rbmm__points_to_analysis__Var_32;
            MR_Word transform_hlds__rbmm__points_to_analysis__CalleeGraph_44;
            MR_Word transform_hlds__rbmm__points_to_analysis__CalleeNodeOutEdges_46;
            MR_Word transform_hlds__rbmm__points_to_analysis__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_0_5, (MR_Integer) 0)));
            MR_Box transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite_21;
            MR_Box transform_hlds__rbmm__points_to_analysis__conv1_CallerNode_22;
            MR_Word transform_hlds__rbmm__points_to_analysis__Var_45;
            MR_Word transform_hlds__rbmm__points_to_analysis__Var_24;

            {
              mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[2], transform_hlds__rbmm__points_to_analysis__CallerAlphaMapping0_20, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallSite_2)), &transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite_21);
            }
            transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_21 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite_21);
            transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_36_36 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
            {
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_36_36, transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_36_36, transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_21, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CalleeNode_13)), &transform_hlds__rbmm__points_to_analysis__conv1_CallerNode_22);
            }
            transform_hlds__rbmm__points_to_analysis__CallerNode_22 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv1_CallerNode_22);
            transform_hlds__rbmm__points_to_analysis__CalleeGraph_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_analysis__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4, (MR_Integer) 1)));
            {
              transform_hlds__rbmm__points_to_analysis__CalleeNodeOutEdges_46 = transform_hlds__rbmm__points_to_graph__rptg_lookup_list_outedges_2_f_0(transform_hlds__rbmm__points_to_analysis__CalleeGraph_44, transform_hlds__rbmm__points_to_analysis__CalleeNode_13);
            }
            {
              transform_hlds__rbmm__points_to_analysis__apply_rules_outedges_6_p_0(transform_hlds__rbmm__points_to_analysis__CalleeNodeOutEdges_46, transform_hlds__rbmm__points_to_analysis__CallerNode_22, transform_hlds__rbmm__points_to_analysis__CallSite_2, transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_0_5, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_31_31);
            }
            transform_hlds__rbmm__points_to_analysis__CalleeGraph_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_analysis__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4, (MR_Integer) 1)));
            {
              transform_hlds__rbmm__points_to_analysis__SuccessorsCalleeNode_25 = transform_hlds__rbmm__points_to_graph__rptg_successors_2_f_0(transform_hlds__rbmm__points_to_analysis__CalleeGraph_23, transform_hlds__rbmm__points_to_analysis__CalleeNode_13);
            }
            {
              mercury__set__to_sorted_list_2_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_36_36, transform_hlds__rbmm__points_to_analysis__SuccessorsCalleeNode_25, &transform_hlds__rbmm__points_to_analysis__SsList_26);
            }
            {
              mercury__list__delete_elems_3_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_36_36, transform_hlds__rbmm__points_to_analysis__SsList_26, transform_hlds__rbmm__points_to_analysis__Processed_3, &transform_hlds__rbmm__points_to_analysis__ToBeProcessed_27);
            }
            {
              transform_hlds__rbmm__points_to_analysis__CalleeNodes_28 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_36_36, transform_hlds__rbmm__points_to_analysis__ToBeProcessed_27, transform_hlds__rbmm__points_to_analysis__CalleeNodes0_14);
            }
            {
              transform_hlds__rbmm__points_to_analysis__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__Var_32, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CalleeNode_13));
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__Var_32, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__Processed_3));
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__rbmm__points_to_analysis__next_value_of_HeadVar__1_1 = transform_hlds__rbmm__points_to_analysis__CalleeNodes_28;
              MR_Word transform_hlds__rbmm__points_to_analysis__next_value_of_Processed_3 = transform_hlds__rbmm__points_to_analysis__Var_32;
              MR_Word transform_hlds__rbmm__points_to_analysis__next_value_of_STATE_VARIABLE_CallerRptaInfo_0_5 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_31_31;

              transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_0_5 = transform_hlds__rbmm__points_to_analysis__next_value_of_STATE_VARIABLE_CallerRptaInfo_0_5;
              transform_hlds__rbmm__points_to_analysis__Processed_3 = transform_hlds__rbmm__points_to_analysis__next_value_of_Processed_3;
              transform_hlds__rbmm__points_to_analysis__HeadVar__1_1 = transform_hlds__rbmm__points_to_analysis__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__apply_rules_outedges_6_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_analysis__CallerNode_2,
  MR_Word transform_hlds__rbmm__points_to_analysis__CallSite_3,
  MR_Word transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__5_5,
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__6_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;

        if ((transform_hlds__rbmm__points_to_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__rbmm__points_to_analysis__HeadVar__6_6 = transform_hlds__rbmm__points_to_analysis__HeadVar__5_5;
        else
          {
            MR_Word transform_hlds__rbmm__points_to_analysis__Edge_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__rbmm__points_to_analysis__Edges_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_22_22;
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_23_23;
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_24_24;
            MR_Word transform_hlds__rbmm__points_to_analysis__CalleeGraph_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4, (MR_Integer) 0)));
            MR_Word transform_hlds__rbmm__points_to_analysis__CalleeM_35;
            MR_Word transform_hlds__rbmm__points_to_analysis__Label_36;
            MR_Word transform_hlds__rbmm__points_to_analysis__RealCallerNode_37;
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__5_5, (MR_Integer) 0)));
            MR_Word transform_hlds__rbmm__points_to_analysis__CalleeGraph_58;
            MR_Word transform_hlds__rbmm__points_to_analysis__CalleeM_61;
            MR_Word transform_hlds__rbmm__points_to_analysis__Label_62;
            MR_Word transform_hlds__rbmm__points_to_analysis__RealCallerNode_63;
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_68;
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__5_5, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_70;
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_71;
            MR_Word transform_hlds__rbmm__points_to_analysis__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__points_to_analysis___CalleeNode_34;
            MR_Word transform_hlds__rbmm__points_to_analysis__CallerMPrime_38;
            MR_Word transform_hlds__rbmm__points_to_analysis__RealCallerM_41;
            MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_27_46;
            MR_Word transform_hlds__rbmm__points_to_analysis__TypeInfo_28_47;
            MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_29_48;
            MR_Word transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_39;
            MR_Word transform_hlds__rbmm__points_to_analysis__CallerM_40;
            MR_Box transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite_39;
            MR_Box transform_hlds__rbmm__points_to_analysis__conv1_CallerM_40;
            MR_Integer transform_hlds__rbmm__points_to_analysis__Var_50;
            MR_Integer transform_hlds__rbmm__points_to_analysis__Var_51;
            MR_Word transform_hlds__rbmm__points_to_analysis__Var_59;
            MR_Word transform_hlds__rbmm__points_to_analysis___CalleeNode_60;
            MR_Word transform_hlds__rbmm__points_to_analysis__CallerM_64;

            {
              transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(transform_hlds__rbmm__points_to_analysis__CalleeGraph_32, transform_hlds__rbmm__points_to_analysis__Edge_13, &transform_hlds__rbmm__points_to_analysis___CalleeNode_34, &transform_hlds__rbmm__points_to_analysis__CalleeM_35, &transform_hlds__rbmm__points_to_analysis__Label_36);
            }
            {
              transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_42, transform_hlds__rbmm__points_to_analysis__CallerNode_2, &transform_hlds__rbmm__points_to_analysis__RealCallerNode_37);
            }
            {
              transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_graph__rptg_find_edge_from_node_with_same_content_4_p_0(transform_hlds__rbmm__points_to_analysis__RealCallerNode_37, transform_hlds__rbmm__points_to_analysis__Label_36, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_42, &transform_hlds__rbmm__points_to_analysis__CallerMPrime_38);
            }
            if (transform_hlds__rbmm__points_to_analysis__succeeded)
              {
                transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_27_46 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
                transform_hlds__rbmm__points_to_analysis__TypeInfo_28_47 = (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[2];
                {
                  transform_hlds__rbmm__points_to_analysis__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_27_46, transform_hlds__rbmm__points_to_analysis__TypeInfo_28_47, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_69, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallSite_3)), &transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite_39);
                }
                if (transform_hlds__rbmm__points_to_analysis__succeeded)
                  {
                    transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_39 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite_39);
                    transform_hlds__rbmm__points_to_analysis__succeeded = MR_TRUE;
                  }
                if (transform_hlds__rbmm__points_to_analysis__succeeded)
                  {
                    transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_29_48 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
                    {
                      transform_hlds__rbmm__points_to_analysis__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_29_48, transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_29_48, transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_39, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CalleeM_35)), &transform_hlds__rbmm__points_to_analysis__conv1_CallerM_40);
                    }
                    if (transform_hlds__rbmm__points_to_analysis__succeeded)
                      {
                        transform_hlds__rbmm__points_to_analysis__CallerM_40 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv1_CallerM_40);
                        transform_hlds__rbmm__points_to_analysis__succeeded = MR_TRUE;
                      }
                    if (transform_hlds__rbmm__points_to_analysis__succeeded)
                      {
                        {
                          transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_42, transform_hlds__rbmm__points_to_analysis__CallerM_40, &transform_hlds__rbmm__points_to_analysis__RealCallerM_41);
                        }
                        transform_hlds__rbmm__points_to_analysis__Var_50 = (MR_Integer) transform_hlds__rbmm__points_to_analysis__CallerMPrime_38;
                        transform_hlds__rbmm__points_to_analysis__Var_51 = (MR_Integer) transform_hlds__rbmm__points_to_analysis__RealCallerM_41;
                        transform_hlds__rbmm__points_to_analysis__succeeded = (transform_hlds__rbmm__points_to_analysis__Var_50 == transform_hlds__rbmm__points_to_analysis__Var_51);
                        transform_hlds__rbmm__points_to_analysis__succeeded = !(transform_hlds__rbmm__points_to_analysis__succeeded);
                      }
                  }
              }
            if (transform_hlds__rbmm__points_to_analysis__succeeded)
              {
                MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_25_44;

                {
                  transform_hlds__rbmm__points_to_graph__unify_operator_4_p_0(transform_hlds__rbmm__points_to_analysis__RealCallerM_41, transform_hlds__rbmm__points_to_analysis__CallerMPrime_38, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_42, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_25_44);
                }
                {
                  transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0(transform_hlds__rbmm__points_to_analysis__RealCallerM_41, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_25_44, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_68);
                }
              }
            else
              transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_68 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_42;
            transform_hlds__rbmm__points_to_analysis__CalleeGraph_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_analysis__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4, (MR_Integer) 1)));
            {
              transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(transform_hlds__rbmm__points_to_analysis__CalleeGraph_58, transform_hlds__rbmm__points_to_analysis__Edge_13, &transform_hlds__rbmm__points_to_analysis___CalleeNode_60, &transform_hlds__rbmm__points_to_analysis__CalleeM_61, &transform_hlds__rbmm__points_to_analysis__Label_62);
            }
            {
              transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_68, transform_hlds__rbmm__points_to_analysis__CallerNode_2, &transform_hlds__rbmm__points_to_analysis__RealCallerNode_63);
            }
            {
              transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_graph__rptg_find_edge_from_node_with_same_content_4_p_0(transform_hlds__rbmm__points_to_analysis__RealCallerNode_63, transform_hlds__rbmm__points_to_analysis__Label_62, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_68, &transform_hlds__rbmm__points_to_analysis__CallerM_64);
            }
            if (transform_hlds__rbmm__points_to_analysis__succeeded)
              {
                MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_30_75 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
                MR_Word transform_hlds__rbmm__points_to_analysis__TypeInfo_31_76 = (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[2];
                MR_Word transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite0_65;
                MR_Box transform_hlds__rbmm__points_to_analysis__conv2_AlphaAtCallSite0_65;
                MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_32_77;
                MR_Word transform_hlds__rbmm__points_to_analysis__Var_66;
                MR_Box transform_hlds__rbmm__points_to_analysis__conv3_Var_66;

                {
                  mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_30_75, transform_hlds__rbmm__points_to_analysis__TypeInfo_31_76, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_69, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallSite_3)), &transform_hlds__rbmm__points_to_analysis__conv2_AlphaAtCallSite0_65);
                }
                transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite0_65 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv2_AlphaAtCallSite0_65);
                transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_32_77 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
                {
                  transform_hlds__rbmm__points_to_analysis__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_32_77, transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_32_77, transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite0_65, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CalleeM_61)), &transform_hlds__rbmm__points_to_analysis__conv3_Var_66);
                }
                if (transform_hlds__rbmm__points_to_analysis__succeeded)
                  {
                    transform_hlds__rbmm__points_to_analysis__Var_66 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv3_Var_66);
                    transform_hlds__rbmm__points_to_analysis__succeeded = MR_TRUE;
                  }
                if (transform_hlds__rbmm__points_to_analysis__succeeded)
                  {
                    transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_71 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_69;
                    transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_70 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_68;
                  }
                else
                  {
                    MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_33_78 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
                    MR_Word transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite1_67;

                    {
                      mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_33_78, transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_33_78, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CalleeM_61)), ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallerM_64)), transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite0_65, &transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite1_67);
                    }
                    {
                      mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_30_75, transform_hlds__rbmm__points_to_analysis__TypeInfo_31_76, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallSite_3)), ((MR_Box) (transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite1_67)), transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_69, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_71);
                    }
                    {
                      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_graph__rptg_is_allocated_node_2_p_0(transform_hlds__rbmm__points_to_analysis__CalleeGraph_58, transform_hlds__rbmm__points_to_analysis__CalleeM_61);
                    }
                    if (transform_hlds__rbmm__points_to_analysis__succeeded)
                      {
                        {
                          transform_hlds__rbmm__points_to_graph__rptg_set_node_is_allocated_4_p_0(transform_hlds__rbmm__points_to_analysis__CallerM_64, (MR_Integer) 1, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_68, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_70);
                        }
                      }
                    else
                      transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_70 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_68;
                  }
              }
            else
              {
                transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_71 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_69;
                transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_70 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_68;
              }
            {
              transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_22_22, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_70));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_22_22, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_71));
            }
            {
              transform_hlds__rbmm__points_to_analysis__rule_7_6_p_0(transform_hlds__rbmm__points_to_analysis__Edge_13, transform_hlds__rbmm__points_to_analysis__CallSite_3, transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4, transform_hlds__rbmm__points_to_analysis__CallerNode_2, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_22_22, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_23_23);
            }
            {
              transform_hlds__rbmm__points_to_analysis__rule_8_6_p_0(transform_hlds__rbmm__points_to_analysis__Edge_13, transform_hlds__rbmm__points_to_analysis__CallSite_3, transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4, transform_hlds__rbmm__points_to_analysis__CallerNode_2, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_23_23, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_24_24);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__rbmm__points_to_analysis__next_value_of_HeadVar__1_1 = transform_hlds__rbmm__points_to_analysis__Edges_14;
              MR_Word transform_hlds__rbmm__points_to_analysis__next_value_of_HeadVar__5_5 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_24_24;

              transform_hlds__rbmm__points_to_analysis__HeadVar__5_5 = transform_hlds__rbmm__points_to_analysis__next_value_of_HeadVar__5_5;
              transform_hlds__rbmm__points_to_analysis__HeadVar__1_1 = transform_hlds__rbmm__points_to_analysis__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_8_6_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__Edge_7,
  MR_Word transform_hlds__rbmm__points_to_analysis__CallSite_8,
  MR_Word transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_9,
  MR_Word transform_hlds__rbmm__points_to_analysis__CallerNode_10,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__5_5,
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__6_6)
{
  {
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
    MR_Word transform_hlds__rbmm__points_to_analysis__CalleeGraph_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_9, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_analysis__CalleeM_16;
    MR_Word transform_hlds__rbmm__points_to_analysis__Label_17;
    MR_Word transform_hlds__rbmm__points_to_analysis__RealCallerNode_18;
    MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__5_5, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__5_5, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_29;
    MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_30;
    MR_Word transform_hlds__rbmm__points_to_analysis__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_9, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_analysis___CalleeNode_15;
    MR_Word transform_hlds__rbmm__points_to_analysis__Var_19;

    {
      transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(transform_hlds__rbmm__points_to_analysis__CalleeGraph_13, transform_hlds__rbmm__points_to_analysis__Edge_7, &transform_hlds__rbmm__points_to_analysis___CalleeNode_15, &transform_hlds__rbmm__points_to_analysis__CalleeM_16, &transform_hlds__rbmm__points_to_analysis__Label_17);
    }
    {
      transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_27, transform_hlds__rbmm__points_to_analysis__CallerNode_10, &transform_hlds__rbmm__points_to_analysis__RealCallerNode_18);
    }
    {
      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_graph__rptg_find_edge_from_node_with_same_content_4_p_0(transform_hlds__rbmm__points_to_analysis__RealCallerNode_18, transform_hlds__rbmm__points_to_analysis__Label_17, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_27, &transform_hlds__rbmm__points_to_analysis__Var_19);
    }
    if (transform_hlds__rbmm__points_to_analysis__succeeded)
      {
        transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_30 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_28;
        transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_29 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_27;
      }
    else
      {
        MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_44_44;
        MR_Word transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite0_20;
        MR_Box transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite0_20;
        MR_Word transform_hlds__rbmm__points_to_analysis__Var_21;
        MR_Box transform_hlds__rbmm__points_to_analysis__conv1_Var_21;

        {
          mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[2], transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_28, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallSite_8)), &transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite0_20);
        }
        transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite0_20 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite0_20);
        transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_44_44 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
        {
          transform_hlds__rbmm__points_to_analysis__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_44_44, transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_44_44, transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite0_20, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CalleeM_16)), &transform_hlds__rbmm__points_to_analysis__conv1_Var_21);
        }
        if (transform_hlds__rbmm__points_to_analysis__succeeded)
          {
            transform_hlds__rbmm__points_to_analysis__Var_21 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv1_Var_21);
            transform_hlds__rbmm__points_to_analysis__succeeded = MR_TRUE;
          }
        if (transform_hlds__rbmm__points_to_analysis__succeeded)
          {
            transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_30 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_28;
            transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_29 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_27;
          }
        else
          {
            MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_46_46;
            MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_47_47;
            MR_Word transform_hlds__rbmm__points_to_analysis__TypeInfo_48_48;
            MR_Integer transform_hlds__rbmm__points_to_analysis__CallerNextNodeId_22;
            MR_String transform_hlds__rbmm__points_to_analysis__RegName_23;
            MR_Word transform_hlds__rbmm__points_to_analysis__CallerMContent_24;
            MR_Word transform_hlds__rbmm__points_to_analysis__CallerM_25;
            MR_Word transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_26;
            MR_String transform_hlds__rbmm__points_to_analysis__Var_32;
            MR_Word transform_hlds__rbmm__points_to_analysis__Var_33;
            MR_Word transform_hlds__rbmm__points_to_analysis__Var_34;
            MR_Word transform_hlds__rbmm__points_to_analysis__Var_35;
            MR_Word transform_hlds__rbmm__points_to_analysis__Var_36;
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_37_37;
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_38_38;
            MR_Word transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite0_41;
            MR_Box transform_hlds__rbmm__points_to_analysis__conv2_AlphaAtCallSite0_41;

            {
              transform_hlds__rbmm__points_to_analysis__CallerNextNodeId_22 = transform_hlds__rbmm__points_to_graph__rptg_get_next_node_id_1_f_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_27);
            }
            {
              transform_hlds__rbmm__points_to_analysis__Var_32 = mercury__string__int_to_string_1_f_0(transform_hlds__rbmm__points_to_analysis__CallerNextNodeId_22);
            }
            {
              mercury__string__append_3_p_2((MR_String) "R", transform_hlds__rbmm__points_to_analysis__Var_32, &transform_hlds__rbmm__points_to_analysis__RegName_23);
            }
            {
              transform_hlds__rbmm__points_to_analysis__Var_33 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_2[0]);
            }
            transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_46_46 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
            {
              transform_hlds__rbmm__points_to_analysis__Var_34 = mercury__set__init_0_f_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_46_46);
            }
            {
              transform_hlds__rbmm__points_to_analysis__Var_35 = transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_f_0(transform_hlds__rbmm__points_to_analysis__CalleeGraph_13, transform_hlds__rbmm__points_to_analysis__CalleeM_16);
            }
            {
              transform_hlds__rbmm__points_to_analysis__Var_36 = transform_hlds__rbmm__points_to_graph__rptg_lookup_node_is_allocated_2_f_0(transform_hlds__rbmm__points_to_analysis__CalleeGraph_13, transform_hlds__rbmm__points_to_analysis__CalleeM_16);
            }
            {
              transform_hlds__rbmm__points_to_analysis__CallerMContent_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CallerMContent_24, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__Var_33));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CallerMContent_24, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__RegName_23));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CallerMContent_24, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__Var_34));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CallerMContent_24, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__Var_35));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CallerMContent_24, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__Var_36));
            }
            {
              transform_hlds__rbmm__points_to_graph__rptg_add_node_4_p_0(transform_hlds__rbmm__points_to_analysis__CallerMContent_24, &transform_hlds__rbmm__points_to_analysis__CallerM_25, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_27, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_37_37);
            }
            {
              transform_hlds__rbmm__points_to_graph__edge_operator_5_p_0(transform_hlds__rbmm__points_to_analysis__RealCallerNode_18, transform_hlds__rbmm__points_to_analysis__CallerM_25, transform_hlds__rbmm__points_to_analysis__Label_17, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_37_37, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_38_38);
            }
            transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_47_47 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
            transform_hlds__rbmm__points_to_analysis__TypeInfo_48_48 = (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[2];
            {
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_47_47, transform_hlds__rbmm__points_to_analysis__TypeInfo_48_48, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_28, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallSite_8)), &transform_hlds__rbmm__points_to_analysis__conv2_AlphaAtCallSite0_41);
            }
            transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite0_41 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv2_AlphaAtCallSite0_41);
            {
              mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_46_46, transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_46_46, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CalleeM_16)), ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallerM_25)), transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite0_41, &transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_26);
            }
            {
              mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_47_47, transform_hlds__rbmm__points_to_analysis__TypeInfo_48_48, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallSite_8)), ((MR_Box) (transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_26)), transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_28, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_30);
            }
            {
              transform_hlds__rbmm__points_to_analysis__rule_3_3_p_0(transform_hlds__rbmm__points_to_analysis__CallerM_25, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_38_38, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_29);
            }
          }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__rbmm__points_to_analysis__HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_29));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_30));
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_7_6_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__Edge_7,
  MR_Word transform_hlds__rbmm__points_to_analysis__CallSite_8,
  MR_Word transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_9,
  MR_Word transform_hlds__rbmm__points_to_analysis__CallerNode_10,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__5_5,
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__6_6)
{
  {
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
    MR_Word transform_hlds__rbmm__points_to_analysis__CallerAlphaMapping_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__5_5, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_analysis__CalleeGraph_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_9, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_analysis__CalleeM_16;
    MR_Word transform_hlds__rbmm__points_to_analysis__Label_17;
    MR_Word transform_hlds__rbmm__points_to_analysis__RealCallerNode_18;
    MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__5_5, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_24;
    MR_Word transform_hlds__rbmm__points_to_analysis__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_9, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_analysis___CalleeNode_15;
    MR_Word transform_hlds__rbmm__points_to_analysis__Var_19;

    {
      transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(transform_hlds__rbmm__points_to_analysis__CalleeGraph_13, transform_hlds__rbmm__points_to_analysis__Edge_7, &transform_hlds__rbmm__points_to_analysis___CalleeNode_15, &transform_hlds__rbmm__points_to_analysis__CalleeM_16, &transform_hlds__rbmm__points_to_analysis__Label_17);
    }
    {
      transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_23, transform_hlds__rbmm__points_to_analysis__CallerNode_10, &transform_hlds__rbmm__points_to_analysis__RealCallerNode_18);
    }
    {
      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_graph__rptg_find_edge_from_node_with_same_content_4_p_0(transform_hlds__rbmm__points_to_analysis__RealCallerNode_18, transform_hlds__rbmm__points_to_analysis__Label_17, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_23, &transform_hlds__rbmm__points_to_analysis__Var_19);
    }
    if (transform_hlds__rbmm__points_to_analysis__succeeded)
      transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_24 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_23;
    else
      {
        MR_Word transform_hlds__rbmm__points_to_analysis__CallerM_21;
        MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_29_29;
        MR_Word transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_20;
        MR_Box transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite_20;
        MR_Box transform_hlds__rbmm__points_to_analysis__conv1_CallerM_21;

        {
          mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[2], transform_hlds__rbmm__points_to_analysis__CallerAlphaMapping_12, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallSite_8)), &transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite_20);
        }
        transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_20 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite_20);
        transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_29_29 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
        {
          transform_hlds__rbmm__points_to_analysis__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_29_29, transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_29_29, transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_20, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CalleeM_16)), &transform_hlds__rbmm__points_to_analysis__conv1_CallerM_21);
        }
        if (transform_hlds__rbmm__points_to_analysis__succeeded)
          {
            transform_hlds__rbmm__points_to_analysis__CallerM_21 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv1_CallerM_21);
            transform_hlds__rbmm__points_to_analysis__succeeded = MR_TRUE;
          }
        if (transform_hlds__rbmm__points_to_analysis__succeeded)
          {
            MR_Word transform_hlds__rbmm__points_to_analysis__RealCallerM_22;
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_25_25;

            {
              transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_23, transform_hlds__rbmm__points_to_analysis__CallerM_21, &transform_hlds__rbmm__points_to_analysis__RealCallerM_22);
            }
            {
              transform_hlds__rbmm__points_to_graph__edge_operator_5_p_0(transform_hlds__rbmm__points_to_analysis__RealCallerNode_18, transform_hlds__rbmm__points_to_analysis__RealCallerM_22, transform_hlds__rbmm__points_to_analysis__Label_17, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_23, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_25_25);
            }
            {
              transform_hlds__rbmm__points_to_analysis__rule_3_3_p_0(transform_hlds__rbmm__points_to_analysis__RealCallerM_22, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_25_25, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_24);
            }
          }
        else
          transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_24 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_23;
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__rbmm__points_to_analysis__HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallerAlphaMapping_12));
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_analysis__CalleeGraph_3,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_4,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_5,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_0_6,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;

        if ((transform_hlds__rbmm__points_to_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((transform_hlds__rbmm__points_to_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_7 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_0_6;
              *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_5 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_4;
            }
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_analysis", (MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.alpha_mapping_at_call_site\'/7", (MR_String) "mismatched lists");
                return;
              }
            }
        else
          {
            MR_Word transform_hlds__rbmm__points_to_analysis__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__points_to_analysis__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)));

            if ((transform_hlds__rbmm__points_to_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_analysis", (MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.alpha_mapping_at_call_site\'/7", (MR_String) "mismatched lists");
                  return;
                }
              }
            else
              {
                MR_Word transform_hlds__rbmm__points_to_analysis__Yi_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word transform_hlds__rbmm__points_to_analysis__Ys_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word transform_hlds__rbmm__points_to_analysis__N_Xi_42;
                MR_Word transform_hlds__rbmm__points_to_analysis__N_Yi_43;
                MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_50_50;
                MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_51_51;
                MR_Word transform_hlds__rbmm__points_to_analysis__N_Y_44;
                MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_56_56;
                MR_Box transform_hlds__rbmm__points_to_analysis__conv0_N_Y_44;

                {
                  transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(transform_hlds__rbmm__points_to_analysis__CalleeGraph_3, transform_hlds__rbmm__points_to_analysis__Var_59, &transform_hlds__rbmm__points_to_analysis__N_Xi_42);
                }
                {
                  transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_4, transform_hlds__rbmm__points_to_analysis__Yi_37, &transform_hlds__rbmm__points_to_analysis__N_Yi_43);
                }
                transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_56_56 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
                {
                  transform_hlds__rbmm__points_to_analysis__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_56_56, transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_56_56, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_0_6, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__N_Xi_42)), &transform_hlds__rbmm__points_to_analysis__conv0_N_Y_44);
                }
                if (transform_hlds__rbmm__points_to_analysis__succeeded)
                  {
                    transform_hlds__rbmm__points_to_analysis__N_Y_44 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv0_N_Y_44);
                    transform_hlds__rbmm__points_to_analysis__succeeded = MR_TRUE;
                  }
                if (transform_hlds__rbmm__points_to_analysis__succeeded)
                  {
                    MR_Integer transform_hlds__rbmm__points_to_analysis__Var_61 = (MR_Integer) transform_hlds__rbmm__points_to_analysis__N_Y_44;
                    MR_Integer transform_hlds__rbmm__points_to_analysis__Var_62 = (MR_Integer) transform_hlds__rbmm__points_to_analysis__N_Yi_43;

                    transform_hlds__rbmm__points_to_analysis__succeeded = (transform_hlds__rbmm__points_to_analysis__Var_61 == transform_hlds__rbmm__points_to_analysis__Var_62);
                    if (transform_hlds__rbmm__points_to_analysis__succeeded)
                      transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_50_50 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_4;
                    else
                      {
                        MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_49_49;

                        {
                          transform_hlds__rbmm__points_to_graph__unify_operator_4_p_0(transform_hlds__rbmm__points_to_analysis__N_Y_44, transform_hlds__rbmm__points_to_analysis__N_Yi_43, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_4, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_49_49);
                        }
                        {
                          transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0(transform_hlds__rbmm__points_to_analysis__N_Y_44, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_49_49, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_50_50);
                        }
                      }
                    transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_51_51 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_0_6;
                  }
                else
                  {
                    MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_57_57 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

                    {
                      mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_57_57, transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_57_57, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__N_Xi_42)), ((MR_Box) (transform_hlds__rbmm__points_to_analysis__N_Yi_43)), transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_0_6, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_51_51);
                    }
                    {
                      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_graph__rptg_is_allocated_node_2_p_0(transform_hlds__rbmm__points_to_analysis__CalleeGraph_3, transform_hlds__rbmm__points_to_analysis__N_Xi_42);
                    }
                    if (transform_hlds__rbmm__points_to_analysis__succeeded)
                      {
                        {
                          transform_hlds__rbmm__points_to_graph__rptg_set_node_is_allocated_4_p_0(transform_hlds__rbmm__points_to_analysis__N_Yi_43, (MR_Integer) 1, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_4, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_50_50);
                        }
                      }
                    else
                      transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_50_50 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_4;
                  }
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__rbmm__points_to_analysis__next_value_of_HeadVar__1_1 = transform_hlds__rbmm__points_to_analysis__Var_58;
                  MR_Word transform_hlds__rbmm__points_to_analysis__next_value_of_HeadVar__2_2 = transform_hlds__rbmm__points_to_analysis__Ys_38;
                  MR_Word transform_hlds__rbmm__points_to_analysis__next_value_of_STATE_VARIABLE_CallerGraph_0_4 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_50_50;
                  MR_Word transform_hlds__rbmm__points_to_analysis__next_value_of_STATE_VARIABLE_AlphaMap_0_6 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_51_51;

                  transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_0_6 = transform_hlds__rbmm__points_to_analysis__next_value_of_STATE_VARIABLE_AlphaMap_0_6;
                  transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_4 = transform_hlds__rbmm__points_to_analysis__next_value_of_STATE_VARIABLE_CallerGraph_0_4;
                  transform_hlds__rbmm__points_to_analysis__HeadVar__2_2 = transform_hlds__rbmm__points_to_analysis__next_value_of_HeadVar__2_2;
                  transform_hlds__rbmm__points_to_analysis__HeadVar__1_1 = transform_hlds__rbmm__points_to_analysis__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__PPId_7,
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_8,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_0_14,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_15,
  MR_Word * transform_hlds__rbmm__points_to_analysis__RptaInfo_10,
  MR_Word * transform_hlds__rbmm__points_to_analysis__Init_11)
{
  {
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
    MR_Word transform_hlds__rbmm__points_to_analysis__RptaInfo0_12;
    MR_Word transform_hlds__rbmm__points_to_analysis__FPtable1_13;
    MR_Box transform_hlds__rbmm__points_to_analysis__conv0_RptaInfo0_12;

    {
      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__PPId_7)), &transform_hlds__rbmm__points_to_analysis__conv0_RptaInfo0_12, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_0_14, &transform_hlds__rbmm__points_to_analysis__FPtable1_13);
    }
    if (transform_hlds__rbmm__points_to_analysis__succeeded)
      {
        transform_hlds__rbmm__points_to_analysis__RptaInfo0_12 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv0_RptaInfo0_12);
        transform_hlds__rbmm__points_to_analysis__succeeded = MR_TRUE;
      }
    if (transform_hlds__rbmm__points_to_analysis__succeeded)
      {
        *transform_hlds__rbmm__points_to_analysis__RptaInfo_10 = transform_hlds__rbmm__points_to_analysis__RptaInfo0_12;
        *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_15 = transform_hlds__rbmm__points_to_analysis__FPtable1_13;
        *transform_hlds__rbmm__points_to_analysis__Init_11 = (MR_Integer) 0;
      }
    else
      {
        MR_Word transform_hlds__rbmm__points_to_analysis__RptaInfo0_19;

        {
          transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_f_0(transform_hlds__rbmm__points_to_analysis__PPId_7, transform_hlds__rbmm__points_to_analysis__InfoTable_8, &transform_hlds__rbmm__points_to_analysis__RptaInfo0_19);
        }
        if (transform_hlds__rbmm__points_to_analysis__succeeded)
          {
            *transform_hlds__rbmm__points_to_analysis__RptaInfo_10 = transform_hlds__rbmm__points_to_analysis__RptaInfo0_19;
            *transform_hlds__rbmm__points_to_analysis__Init_11 = (MR_Integer) 0;
          }
        else
          {
            MR_Word transform_hlds__rbmm__points_to_analysis__Var_17;
            MR_Word transform_hlds__rbmm__points_to_analysis__Var_18;

            {
              transform_hlds__rbmm__points_to_analysis__Var_17 = transform_hlds__rbmm__points_to_graph__rpt_graph_init_0_f_0();
            }
            {
              transform_hlds__rbmm__points_to_analysis__Var_18 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[2]);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *transform_hlds__rbmm__points_to_analysis__RptaInfo_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__Var_17));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__Var_18));
            }
            *transform_hlds__rbmm__points_to_analysis__Init_11 = (MR_Integer) 1;
          }
        *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_15 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_0_14;
      }
  }
}

static MR_Box MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_p_0_1(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2;
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
    MR_Word transform_hlds__rbmm__points_to_analysis__conv0_Entry_6;

    {
      transform_hlds__rbmm__points_to_analysis__conv0_Entry_6 = transform_hlds__rbmm__points_to_analysis__wrapped_init_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1));
    }
    transform_hlds__rbmm__points_to_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv0_Entry_6));
    return transform_hlds__rbmm__points_to_analysis__wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_5,
  MR_Word transform_hlds__rbmm__points_to_analysis__SCC_6,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_10,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_11)
{
  {
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
    MR_Word transform_hlds__rbmm__points_to_analysis__SCCProcs_8;

    {
      mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__rbmm__points_to_analysis__SCC_6, &transform_hlds__rbmm__points_to_analysis__SCCProcs_8);
    }
    {
      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__points_to_analysis__SCCProcs_8, transform_hlds__rbmm__points_to_analysis__ModuleInfo_5);
    }
    if (transform_hlds__rbmm__points_to_analysis__succeeded)
      *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_11 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_10;
    else
      {
        MR_Word transform_hlds__rbmm__points_to_analysis__FPTable_9;
        MR_Word transform_hlds__rbmm__points_to_analysis__Var_17;

        {
          transform_hlds__rbmm__points_to_analysis__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_17, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_6[2]));
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_17, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_p_0_1));
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_17, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_10));
        }
        {
          transform_hlds__rbmm__points_to_analysis__FPTable_9 = transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__points_to_analysis__Var_17, transform_hlds__rbmm__points_to_analysis__SCCProcs_8);
        }
        {
          transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0(transform_hlds__rbmm__points_to_analysis__SCC_6, transform_hlds__rbmm__points_to_analysis__FPTable_9, transform_hlds__rbmm__points_to_analysis__ModuleInfo_5, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_10, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_11);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0_2(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
    MR_Word transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_InfoTable_10;

    {
      transform_hlds__rbmm__points_to_analysis__update_rpta_info_in_rpta_info_table_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_InfoTable_10);
    }
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_InfoTable_10));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0_1(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
    MR_Word transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_FPTable_17;

    {
      transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_FPTable_17);
    }
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_FPTable_17));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__SCC_6,
  MR_Word transform_hlds__rbmm__points_to_analysis__FPTable0_7,
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_8,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_12,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_13)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
        MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_21_21;
        MR_Word transform_hlds__rbmm__points_to_analysis__FPTable1_10;
        MR_Word transform_hlds__rbmm__points_to_analysis__Var_14;
        MR_Box transform_hlds__rbmm__points_to_analysis__conv1_FPTable1_10;

        {
          transform_hlds__rbmm__points_to_analysis__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_14, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_14, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0_1));
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_14, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ModuleInfo_8));
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_14, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_12));
        }
        transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
        {
          mercury__set__foldl_4_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_21_21, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[1], transform_hlds__rbmm__points_to_analysis__Var_14, transform_hlds__rbmm__points_to_analysis__SCC_6, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__FPTable0_7)), &transform_hlds__rbmm__points_to_analysis__conv1_FPTable1_10);
        }
        transform_hlds__rbmm__points_to_analysis__FPTable1_10 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv1_FPTable1_10);
        {
          transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_21_21, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__points_to_analysis__FPTable1_10);
        }
        if (transform_hlds__rbmm__points_to_analysis__succeeded)
          {
            MR_Word transform_hlds__rbmm__points_to_analysis__Var_15;
            MR_Box transform_hlds__rbmm__points_to_analysis__conv3_STATE_VARIABLE_InfoTable_13;

            {
              transform_hlds__rbmm__points_to_analysis__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_15, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_3[2]));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_15, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0_2));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_15, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__FPTable1_10));
            }
            {
              mercury__set__foldl_4_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_21_21, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[0], transform_hlds__rbmm__points_to_analysis__Var_15, transform_hlds__rbmm__points_to_analysis__SCC_6, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_12)), &transform_hlds__rbmm__points_to_analysis__conv3_STATE_VARIABLE_InfoTable_13);
            }
            *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_13 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv3_STATE_VARIABLE_InfoTable_13);
          }
        else
          {
            MR_Word transform_hlds__rbmm__points_to_analysis__FPTable_11;

            {
              transform_hlds__ctgc__fixpoint_table__new_run_2_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_21_21, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__points_to_analysis__FPTable1_10, &transform_hlds__rbmm__points_to_analysis__FPTable_11);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__rbmm__points_to_analysis__next_value_of_FPTable0_7 = transform_hlds__rbmm__points_to_analysis__FPTable_11;

              transform_hlds__rbmm__points_to_analysis__FPTable0_7 = transform_hlds__rbmm__points_to_analysis__next_value_of_FPTable0_7;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__LVar_8,
  MR_Word transform_hlds__rbmm__points_to_analysis__ConsId_9,
  MR_Word transform_hlds__rbmm__points_to_analysis__RVar_10,
  MR_Integer transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Component_0_18,
  MR_Integer * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Component_19,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_20,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_21)
{
  {
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
    MR_Word transform_hlds__rbmm__points_to_analysis__LNode_13;
    MR_Word transform_hlds__rbmm__points_to_analysis__RNode_14;
    MR_Word transform_hlds__rbmm__points_to_analysis__Sel_15;
    MR_Word transform_hlds__rbmm__points_to_analysis__EdgeLabel_16;
    MR_Word transform_hlds__rbmm__points_to_analysis__Var_22;

    {
      transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_20, transform_hlds__rbmm__points_to_analysis__LVar_8, &transform_hlds__rbmm__points_to_analysis__LNode_13);
    }
    {
      transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_20, transform_hlds__rbmm__points_to_analysis__RVar_10, &transform_hlds__rbmm__points_to_analysis__RNode_14);
    }
    {
      transform_hlds__rbmm__points_to_analysis__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_22, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ConsId_9));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_22, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Component_0_18));
    }
    {
      transform_hlds__rbmm__points_to_analysis__Sel_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__Sel_15, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__Var_22));
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__Sel_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    transform_hlds__rbmm__points_to_analysis__EdgeLabel_16 = (MR_Word) transform_hlds__rbmm__points_to_analysis__Sel_15;
    {
      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0(transform_hlds__rbmm__points_to_analysis__LNode_13, transform_hlds__rbmm__points_to_analysis__EdgeLabel_16, transform_hlds__rbmm__points_to_analysis__RNode_14, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_20);
    }
    if (transform_hlds__rbmm__points_to_analysis__succeeded)
      *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_21 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_20;
    else
      {
        MR_Word transform_hlds__rbmm__points_to_analysis__RVarNode_17;
        MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_24_24;
        MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_25_25;
        MR_Word transform_hlds__rbmm__points_to_analysis__N_36;
        MR_Word transform_hlds__rbmm__points_to_analysis__M_37;
        MR_Word transform_hlds__rbmm__points_to_analysis__OutEdgeList_39;

        {
          transform_hlds__rbmm__points_to_graph__edge_operator_5_p_0(transform_hlds__rbmm__points_to_analysis__LNode_13, transform_hlds__rbmm__points_to_analysis__RNode_14, transform_hlds__rbmm__points_to_analysis__EdgeLabel_16, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_20, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_24_24);
        }
        {
          transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_24_24, transform_hlds__rbmm__points_to_analysis__LNode_13, &transform_hlds__rbmm__points_to_analysis__N_36);
        }
        {
          transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_24_24, transform_hlds__rbmm__points_to_analysis__RNode_14, &transform_hlds__rbmm__points_to_analysis__M_37);
        }
        {
          transform_hlds__rbmm__points_to_analysis__OutEdgeList_39 = transform_hlds__rbmm__points_to_graph__rptg_lookup_list_outedges_2_f_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_24_24, transform_hlds__rbmm__points_to_analysis__N_36);
        }
        {
          transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_edge_5_p_0(transform_hlds__rbmm__points_to_analysis__Sel_15, transform_hlds__rbmm__points_to_analysis__M_37, transform_hlds__rbmm__points_to_analysis__OutEdgeList_39, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_24_24, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_25_25);
        }
        {
          transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_25_25, transform_hlds__rbmm__points_to_analysis__RVar_10, &transform_hlds__rbmm__points_to_analysis__RVarNode_17);
        }
        {
          transform_hlds__rbmm__points_to_analysis__rule_3_3_p_0(transform_hlds__rbmm__points_to_analysis__RVarNode_17, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_25_25, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_21);
        }
      }
    *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Component_19 = (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Component_0_18 + (MR_Integer) 1);
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__Node_4,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_12,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_13)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
        MR_Word transform_hlds__rbmm__points_to_analysis__NodeMap_6;
        MR_Word transform_hlds__rbmm__points_to_analysis__Nodes_7;

        {
          transform_hlds__rbmm__points_to_analysis__NodeMap_6 = transform_hlds__rbmm__points_to_graph__rptg_get_nodes_1_f_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_12);
        }
        {
          mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_analysis__NodeMap_6, &transform_hlds__rbmm__points_to_analysis__Nodes_7);
        }
        if ((transform_hlds__rbmm__points_to_analysis__Nodes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_analysis", (MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.rule_3\'/3", (MR_String) "impossible having no node in graph");
              return;
            }
          }
        else
          {
            MR_Word transform_hlds__rbmm__points_to_analysis__NY_10;
            MR_Word transform_hlds__rbmm__points_to_analysis__Happened_11;
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_17_17;

            {
              transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_12, transform_hlds__rbmm__points_to_analysis__Node_4, &transform_hlds__rbmm__points_to_analysis__NY_10);
            }
            {
              transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0(transform_hlds__rbmm__points_to_analysis__Nodes_7, transform_hlds__rbmm__points_to_analysis__NY_10, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_12, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_17_17, &transform_hlds__rbmm__points_to_analysis__Happened_11);
            }
            switch (transform_hlds__rbmm__points_to_analysis__Happened_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_13 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_17_17;
                break;
              case (MR_Integer) 1:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word transform_hlds__rbmm__points_to_analysis__next_value_of_STATE_VARIABLE_Graph_0_12 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_17_17;

                    transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_12 = transform_hlds__rbmm__points_to_analysis__next_value_of_STATE_VARIABLE_Graph_0_12;
                  }
                  continue;
                }
                break;
            }
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_1(
  void * transform_hlds__rbmm__points_to_analysis__env_ptr_arg)
{
  {
    struct transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0_s * transform_hlds__rbmm__points_to_analysis__env_ptr = (struct transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0_s *) transform_hlds__rbmm__points_to_analysis__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__rbmm__points_to_analysis__env_ptr)->transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_2(
  void * transform_hlds__rbmm__points_to_analysis__env_ptr_arg)
{
  {
    struct transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0_s * transform_hlds__rbmm__points_to_analysis__env_ptr = (struct transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0_s *) transform_hlds__rbmm__points_to_analysis__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__rbmm__points_to_analysis__env_ptr)->transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word transform_hlds__rbmm__points_to_analysis__Var_25;

          {
            transform_hlds__rbmm__points_to_graph__rptg_path_4_p_0((transform_hlds__rbmm__points_to_analysis__env_ptr)->transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__STATE_VARIABLE_Graph_0_3, (transform_hlds__rbmm__points_to_analysis__env_ptr)->transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NZ_10, (transform_hlds__rbmm__points_to_analysis__env_ptr)->transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NY_2, &transform_hlds__rbmm__points_to_analysis__Var_25, transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_1, transform_hlds__rbmm__points_to_analysis__env_ptr);
          }
        }
        (transform_hlds__rbmm__points_to_analysis__env_ptr)->transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__rbmm__points_to_analysis__env_ptr)->transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_analysis__NY_2,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_3,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_4,
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__5_5)
{
  {
    struct transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0_s transform_hlds__rbmm__points_to_analysis__env;

    (transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NY_2 = transform_hlds__rbmm__points_to_analysis__NY_2;
    (transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__STATE_VARIABLE_Graph_0_3 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_3;
    while (MR_TRUE)
      {
        /* tailcall optimized into a loop */
        if ((transform_hlds__rbmm__points_to_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__rbmm__points_to_analysis__HeadVar__5_5 = (MR_Integer) 0;
            *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_4 = (transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__STATE_VARIABLE_Graph_0_3;
          }
        else
          {
            MR_Word transform_hlds__rbmm__points_to_analysis__NZs_11;
            MR_Word transform_hlds__rbmm__points_to_analysis__NZ1_15;
            MR_Word transform_hlds__rbmm__points_to_analysis__NZType_26;
            MR_Integer transform_hlds__rbmm__points_to_analysis__Var_28;
            MR_Integer transform_hlds__rbmm__points_to_analysis__Var_29;

            (transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NZ_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_analysis__NZs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
            {
              transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_2(&transform_hlds__rbmm__points_to_analysis__env);
            }
            if ((transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded)
              {
                {
                  transform_hlds__rbmm__points_to_analysis__NZType_26 = transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_f_0((transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__STATE_VARIABLE_Graph_0_3, (transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NZ_10);
                }
                {
                  (transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded = transform_hlds__rbmm__points_to_graph__rptg_reachable_and_having_type_4_p_0((transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__STATE_VARIABLE_Graph_0_3, (transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NY_2, transform_hlds__rbmm__points_to_analysis__NZType_26, &transform_hlds__rbmm__points_to_analysis__NZ1_15);
                }
                if ((transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded)
                  {
                    transform_hlds__rbmm__points_to_analysis__Var_28 = (MR_Integer) (transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NZ_10;
                    transform_hlds__rbmm__points_to_analysis__Var_29 = (MR_Integer) transform_hlds__rbmm__points_to_analysis__NZ1_15;
                    (transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded = (transform_hlds__rbmm__points_to_analysis__Var_28 == transform_hlds__rbmm__points_to_analysis__Var_29);
                    (transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded = !((transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded);
                  }
              }
            if ((transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded)
              {
                MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_18_18;

                {
                  transform_hlds__rbmm__points_to_graph__unify_operator_4_p_0((transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NZ_10, transform_hlds__rbmm__points_to_analysis__NZ1_15, (transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__STATE_VARIABLE_Graph_0_3, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_18_18);
                }
                {
                  transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0((transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NZ_10, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_18_18, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_4);
                }
                *transform_hlds__rbmm__points_to_analysis__HeadVar__5_5 = (MR_Integer) 1;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__rbmm__points_to_analysis__next_value_of_HeadVar__1_1 = transform_hlds__rbmm__points_to_analysis__NZs_11;

                  transform_hlds__rbmm__points_to_analysis__HeadVar__1_1 = transform_hlds__rbmm__points_to_analysis__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        break;
      }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_edge_5_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__Sel_1,
  MR_Word transform_hlds__rbmm__points_to_analysis__M_2,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__3_3,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_4,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;

        if ((transform_hlds__rbmm__points_to_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_5 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_4;
        else
          {
            MR_Word transform_hlds__rbmm__points_to_analysis__Ed_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word transform_hlds__rbmm__points_to_analysis__Eds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__points_to_analysis__MPrime_17;
            MR_Word transform_hlds__rbmm__points_to_analysis__EdgeContent_18;
            MR_Word transform_hlds__rbmm__points_to_analysis__Var_16;
            MR_Word transform_hlds__rbmm__points_to_analysis__Selector_19;
            MR_Integer transform_hlds__rbmm__points_to_analysis__Var_27;
            MR_Integer transform_hlds__rbmm__points_to_analysis__Var_28;

            {
              transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_4, transform_hlds__rbmm__points_to_analysis__Ed_13, &transform_hlds__rbmm__points_to_analysis__Var_16, &transform_hlds__rbmm__points_to_analysis__MPrime_17, &transform_hlds__rbmm__points_to_analysis__EdgeContent_18);
            }
            transform_hlds__rbmm__points_to_analysis__Selector_19 = (MR_Word) transform_hlds__rbmm__points_to_analysis__EdgeContent_18;
            {
              transform_hlds__rbmm__points_to_analysis__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_2[2], ((MR_Box) (transform_hlds__rbmm__points_to_analysis__Selector_19)), ((MR_Box) (transform_hlds__rbmm__points_to_analysis__Sel_1)));
            }
            if (transform_hlds__rbmm__points_to_analysis__succeeded)
              {
                transform_hlds__rbmm__points_to_analysis__Var_27 = (MR_Integer) transform_hlds__rbmm__points_to_analysis__MPrime_17;
                transform_hlds__rbmm__points_to_analysis__Var_28 = (MR_Integer) transform_hlds__rbmm__points_to_analysis__M_2;
                transform_hlds__rbmm__points_to_analysis__succeeded = (transform_hlds__rbmm__points_to_analysis__Var_27 == transform_hlds__rbmm__points_to_analysis__Var_28);
                transform_hlds__rbmm__points_to_analysis__succeeded = !(transform_hlds__rbmm__points_to_analysis__succeeded);
              }
            if (transform_hlds__rbmm__points_to_analysis__succeeded)
              {
                MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_22_22;

                {
                  transform_hlds__rbmm__points_to_graph__unify_operator_4_p_0(transform_hlds__rbmm__points_to_analysis__M_2, transform_hlds__rbmm__points_to_analysis__MPrime_17, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_4, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_22_22);
                }
                {
                  transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0(transform_hlds__rbmm__points_to_analysis__M_2, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_22_22, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_5);
                }
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__rbmm__points_to_analysis__next_value_of_HeadVar__3_3 = transform_hlds__rbmm__points_to_analysis__Eds_14;

                  transform_hlds__rbmm__points_to_analysis__HeadVar__3_3 = transform_hlds__rbmm__points_to_analysis__next_value_of_HeadVar__3_3;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_case_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__Case_4,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_9,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_10)
{
  {
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
    MR_Word transform_hlds__rbmm__points_to_analysis__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Case_4, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_analysis__GoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_8, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_analysis__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Case_4, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_analysis__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Case_4, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_analysis__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_8, (MR_Integer) 1)));

    {
      transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0(transform_hlds__rbmm__points_to_analysis__GoalExpr_16, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_9, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_10);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_6,
  MR_Word transform_hlds__rbmm__points_to_analysis__PredId_7,
  MR_Integer transform_hlds__rbmm__points_to_analysis__ProcId_8,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_15,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_16)
{
  {
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
    MR_Word transform_hlds__rbmm__points_to_analysis__PPId_10;
    MR_Word transform_hlds__rbmm__points_to_analysis__Var_17;

    {
      transform_hlds__rbmm__points_to_analysis__PPId_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__PPId_10, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__PredId_7));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__PPId_10, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ProcId_8));
    }
    {
      transform_hlds__rbmm__points_to_analysis__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__Var_17, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__PPId_10));
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__points_to_analysis__Var_17, transform_hlds__rbmm__points_to_analysis__ModuleInfo_6);
    }
    if (transform_hlds__rbmm__points_to_analysis__succeeded)
      *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_16 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_15;
    else
      {
        MR_Word transform_hlds__rbmm__points_to_analysis__ProcInfo_11;
        MR_Word transform_hlds__rbmm__points_to_analysis__RptaInfo0_12;
        MR_Word transform_hlds__rbmm__points_to_analysis__Goal_13;
        MR_Word transform_hlds__rbmm__points_to_analysis__RptaInfo_14;
        MR_Word transform_hlds__rbmm__points_to_analysis__GoalExpr_24;
        MR_Word transform_hlds__rbmm__points_to_analysis__Var_25;

        {
          hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__rbmm__points_to_analysis__ModuleInfo_6, transform_hlds__rbmm__points_to_analysis__PPId_10, &transform_hlds__rbmm__points_to_analysis__ProcInfo_11);
        }
        {
          transform_hlds__rbmm__points_to_analysis__RptaInfo0_12 = transform_hlds__rbmm__points_to_info__rpta_info_init_1_f_0(transform_hlds__rbmm__points_to_analysis__ProcInfo_11);
        }
        {
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__rbmm__points_to_analysis__ProcInfo_11, &transform_hlds__rbmm__points_to_analysis__Goal_13);
        }
        transform_hlds__rbmm__points_to_analysis__GoalExpr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_13, (MR_Integer) 0)));
        transform_hlds__rbmm__points_to_analysis__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_13, (MR_Integer) 1)));
        {
          transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0(transform_hlds__rbmm__points_to_analysis__GoalExpr_24, transform_hlds__rbmm__points_to_analysis__RptaInfo0_12, &transform_hlds__rbmm__points_to_analysis__RptaInfo_14);
        }
        {
          transform_hlds__rbmm__points_to_info__rpta_info_table_set_rpta_info_4_p_0(transform_hlds__rbmm__points_to_analysis__PPId_10, transform_hlds__rbmm__points_to_analysis__RptaInfo_14, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_15, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_16);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_3(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
    MR_Word transform_hlds__rbmm__points_to_analysis__conv4_STATE_VARIABLE_RptaInfo_10;

    {
      transform_hlds__rbmm__points_to_analysis__intra_analyse_case_3_p_0(((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv4_STATE_VARIABLE_RptaInfo_10);
    }
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv4_STATE_VARIABLE_RptaInfo_10));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_2(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
    MR_Word transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_RptaInfo_9;

    {
      transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_RptaInfo_9);
    }
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_RptaInfo_9));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_1(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
    MR_Word transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_RptaInfo_9;

    {
      transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_RptaInfo_9);
    }
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_RptaInfo_9));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__rbmm__points_to_analysis__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__rbmm__points_to_analysis__Goal_52 = (MR_Word) MR_body(((MR_Word) transform_hlds__rbmm__points_to_analysis__HeadVar__1_1), (MR_Integer) 0);

          {
            transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(transform_hlds__rbmm__points_to_analysis__Goal_52, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__rbmm__points_to_analysis__Unification_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 3)));
          MR_Word transform_hlds__rbmm__points_to_analysis__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word transform_hlds__rbmm__points_to_analysis__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word transform_hlds__rbmm__points_to_analysis__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word transform_hlds__rbmm__points_to_analysis__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 4)));

          {
            transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0(transform_hlds__rbmm__points_to_analysis__Unification_60, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3);
          }
        }
        break;
      case (MR_Integer) 2:
        *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2;
            break;
          case (MR_Integer) 1:
            *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__rbmm__points_to_analysis__Goals_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word transform_hlds__rbmm__points_to_analysis___ConjType_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
              MR_Box transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_RptaInfo_3;

              {
                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[3], transform_hlds__rbmm__points_to_analysis__Goals_5, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2)), &transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_RptaInfo_3);
              }
              *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_RptaInfo_3);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__rbmm__points_to_analysis__Goals_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
              MR_Box transform_hlds__rbmm__points_to_analysis__conv3_STATE_VARIABLE_RptaInfo_3;

              {
                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[4], transform_hlds__rbmm__points_to_analysis__Goals_46, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2)), &transform_hlds__rbmm__points_to_analysis__conv3_STATE_VARIABLE_RptaInfo_3);
              }
              *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv3_STATE_VARIABLE_RptaInfo_3);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__rbmm__points_to_analysis__Cases_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word transform_hlds__rbmm__points_to_analysis__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word transform_hlds__rbmm__points_to_analysis__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
              MR_Box transform_hlds__rbmm__points_to_analysis__conv5_STATE_VARIABLE_RptaInfo_3;

              {
                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[5], transform_hlds__rbmm__points_to_analysis__Cases_40, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2)), &transform_hlds__rbmm__points_to_analysis__conv5_STATE_VARIABLE_RptaInfo_3);
              }
              *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv5_STATE_VARIABLE_RptaInfo_3);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__rbmm__points_to_analysis__Goal_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word transform_hlds__rbmm__points_to_analysis___Reason_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));

              {
                transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(transform_hlds__rbmm__points_to_analysis__Goal_67, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__rbmm__points_to_analysis__If_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word transform_hlds__rbmm__points_to_analysis__Then_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word transform_hlds__rbmm__points_to_analysis__Else_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 4)));
              MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_79_79;
              MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_80_80;
              MR_Word transform_hlds__rbmm__points_to_analysis___Vars_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));

              {
                transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(transform_hlds__rbmm__points_to_analysis__If_73, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_79_79);
              }
              {
                transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(transform_hlds__rbmm__points_to_analysis__Then_74, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_79_79, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_80_80);
              }
              {
                transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(transform_hlds__rbmm__points_to_analysis__Else_75, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_80_80, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_analysis", (MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.intra_analyse_goal_expr\'/3", (MR_String) "shorthand");
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
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__Goal_4,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_8,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_9)
{
  {
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
    MR_Word transform_hlds__rbmm__points_to_analysis__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_4, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_analysis__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_4, (MR_Integer) 1)));

    {
      transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0(transform_hlds__rbmm__points_to_analysis__GoalExpr_6, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_8, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_9);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0_2(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
    MR_Integer transform_hlds__rbmm__points_to_analysis__conv5_STATE_VARIABLE_Component_19;
    MR_Word transform_hlds__rbmm__points_to_analysis__conv4_STATE_VARIABLE_Graph_21;

    {
      transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Integer) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv5_STATE_VARIABLE_Component_19, ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_4), &transform_hlds__rbmm__points_to_analysis__conv4_STATE_VARIABLE_Graph_21);
    }
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv5_STATE_VARIABLE_Component_19));
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv4_STATE_VARIABLE_Graph_21));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0_1(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
    MR_Integer transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_Component_19;
    MR_Word transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_Graph_21;

    {
      transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Integer) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_Component_19, ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_4), &transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_Graph_21);
    }
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_Component_19));
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_Graph_21));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2_2,
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__rbmm__points_to_analysis__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__rbmm__points_to_analysis__LVar_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word transform_hlds__rbmm__points_to_analysis__ConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word transform_hlds__rbmm__points_to_analysis__RVars_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word transform_hlds__rbmm__points_to_analysis__AlphaMapping_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word transform_hlds__rbmm__points_to_analysis__LNode_13;
          MR_Word transform_hlds__rbmm__points_to_analysis__LNodeContent0_14;
          MR_Word transform_hlds__rbmm__points_to_analysis__A_15;
          MR_String transform_hlds__rbmm__points_to_analysis__B_16;
          MR_Word transform_hlds__rbmm__points_to_analysis__C_17;
          MR_Word transform_hlds__rbmm__points_to_analysis__D_18;
          MR_Word transform_hlds__rbmm__points_to_analysis__LNodeContent_20;
          MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_23;
          MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_25_25;
          MR_Word transform_hlds__rbmm__points_to_analysis__Var_26;
          MR_Word transform_hlds__rbmm__points_to_analysis__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 3)));
          MR_Word transform_hlds__rbmm__points_to_analysis__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 4)));
          MR_Word transform_hlds__rbmm__points_to_analysis__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 5)));
          MR_Word transform_hlds__rbmm__points_to_analysis__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 6)));
          MR_Word transform_hlds__rbmm__points_to_analysis___IsAlloc_19;
          MR_Integer transform_hlds__rbmm__points_to_analysis__Var_21;
          MR_Box transform_hlds__rbmm__points_to_analysis__conv3_Var_21;
          MR_Box transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_Graph_23;

          {
            transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_22, transform_hlds__rbmm__points_to_analysis__LVar_4, &transform_hlds__rbmm__points_to_analysis__LNode_13);
          }
          {
            transform_hlds__rbmm__points_to_analysis__LNodeContent0_14 = transform_hlds__rbmm__points_to_graph__rptg_get_node_content_2_f_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_22, transform_hlds__rbmm__points_to_analysis__LNode_13);
          }
          transform_hlds__rbmm__points_to_analysis__A_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__LNodeContent0_14, (MR_Integer) 0)));
          transform_hlds__rbmm__points_to_analysis__B_16 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__LNodeContent0_14, (MR_Integer) 1)));
          transform_hlds__rbmm__points_to_analysis__C_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__LNodeContent0_14, (MR_Integer) 2)));
          transform_hlds__rbmm__points_to_analysis__D_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__LNodeContent0_14, (MR_Integer) 3)));
          transform_hlds__rbmm__points_to_analysis___IsAlloc_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__LNodeContent0_14, (MR_Integer) 4)));
          {
            transform_hlds__rbmm__points_to_analysis__LNodeContent_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__LNodeContent_20, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__A_15));
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__LNodeContent_20, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__B_16));
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__LNodeContent_20, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__C_17));
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__LNodeContent_20, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__D_18));
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__LNodeContent_20, 4) = ((MR_Box) ((MR_Integer) 1));
          }
          {
            transform_hlds__rbmm__points_to_graph__rptg_set_node_content_4_p_0(transform_hlds__rbmm__points_to_analysis__LNode_13, transform_hlds__rbmm__points_to_analysis__LNodeContent_20, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_22, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_25_25);
          }
          {
            transform_hlds__rbmm__points_to_analysis__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_26, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_26, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0_1));
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_26, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__LVar_4));
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_26, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ConsId_5));
          }
          {
            mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_2[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0, transform_hlds__rbmm__points_to_analysis__Var_26, transform_hlds__rbmm__points_to_analysis__RVars_6, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__rbmm__points_to_analysis__conv3_Var_21, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_25_25)), &transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_Graph_23);
          }
          transform_hlds__rbmm__points_to_analysis__Var_21 = ((MR_Integer) transform_hlds__rbmm__points_to_analysis__conv3_Var_21);
          transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_23 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_Graph_23);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__rbmm__points_to_analysis__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_23));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__AlphaMapping_12));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__rbmm__points_to_analysis__LVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word transform_hlds__rbmm__points_to_analysis__ConsId_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word transform_hlds__rbmm__points_to_analysis__RVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word transform_hlds__rbmm__points_to_analysis__AlphaMapping_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_39;
          MR_Word transform_hlds__rbmm__points_to_analysis__Var_40;
          MR_Word transform_hlds__rbmm__points_to_analysis__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 3)));
          MR_Word transform_hlds__rbmm__points_to_analysis__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 4)));
          MR_Word transform_hlds__rbmm__points_to_analysis__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 5)));
          MR_Integer transform_hlds__rbmm__points_to_analysis__Var_37;
          MR_Box transform_hlds__rbmm__points_to_analysis__conv7_Var_37;
          MR_Box transform_hlds__rbmm__points_to_analysis__conv6_STATE_VARIABLE_Graph_39;

          {
            transform_hlds__rbmm__points_to_analysis__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_40, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_40, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0_2));
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_40, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__LVar_29));
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_40, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ConsId_30));
          }
          {
            mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_2[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0, transform_hlds__rbmm__points_to_analysis__Var_40, transform_hlds__rbmm__points_to_analysis__RVars_31, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__rbmm__points_to_analysis__conv7_Var_37, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_38)), &transform_hlds__rbmm__points_to_analysis__conv6_STATE_VARIABLE_Graph_39);
          }
          transform_hlds__rbmm__points_to_analysis__Var_37 = ((MR_Integer) transform_hlds__rbmm__points_to_analysis__conv7_Var_37);
          transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_39 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv6_STATE_VARIABLE_Graph_39);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__rbmm__points_to_analysis__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_39));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__AlphaMapping_36));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__rbmm__points_to_analysis__ToVar_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word transform_hlds__rbmm__points_to_analysis__FromVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word transform_hlds__rbmm__points_to_analysis__AlphaMapping_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word transform_hlds__rbmm__points_to_analysis__ToNode_47;
          MR_Word transform_hlds__rbmm__points_to_analysis__FromNode_48;
          MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_50;
          MR_Integer transform_hlds__rbmm__points_to_analysis__Var_83;
          MR_Integer transform_hlds__rbmm__points_to_analysis__Var_84;

          {
            transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_49, transform_hlds__rbmm__points_to_analysis__ToVar_43, &transform_hlds__rbmm__points_to_analysis__ToNode_47);
          }
          {
            transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_49, transform_hlds__rbmm__points_to_analysis__FromVar_44, &transform_hlds__rbmm__points_to_analysis__FromNode_48);
          }
          transform_hlds__rbmm__points_to_analysis__Var_83 = (MR_Integer) transform_hlds__rbmm__points_to_analysis__ToNode_47;
          transform_hlds__rbmm__points_to_analysis__Var_84 = (MR_Integer) transform_hlds__rbmm__points_to_analysis__FromNode_48;
          transform_hlds__rbmm__points_to_analysis__succeeded = (transform_hlds__rbmm__points_to_analysis__Var_83 == transform_hlds__rbmm__points_to_analysis__Var_84);
          if (transform_hlds__rbmm__points_to_analysis__succeeded)
            transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_50 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_49;
          else
            {
              MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_51_51;

              {
                transform_hlds__rbmm__points_to_graph__unify_operator_4_p_0(transform_hlds__rbmm__points_to_analysis__ToNode_47, transform_hlds__rbmm__points_to_analysis__FromNode_48, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_49, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_51_51);
              }
              {
                transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0(transform_hlds__rbmm__points_to_analysis__ToNode_47, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_51_51, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_50);
              }
            }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__rbmm__points_to_analysis__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_50));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__AlphaMapping_46));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *transform_hlds__rbmm__points_to_analysis__HeadVar__3_3 = transform_hlds__rbmm__points_to_analysis__HeadVar__2_2;
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_analysis", (MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.intra_analyse_unification\'/3", (MR_String) "complicated_unify");
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
transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_edges_6_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__Edge_1,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__3_3,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_4,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_5,
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__6_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;

        if ((transform_hlds__rbmm__points_to_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((transform_hlds__rbmm__points_to_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              *transform_hlds__rbmm__points_to_analysis__HeadVar__6_6 = (MR_Integer) 0;
              *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_5 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_4;
            }
          else
            {
              MR_Word transform_hlds__rbmm__points_to_analysis__E_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__3_3, (MR_Integer) 0)));
              MR_Word transform_hlds__rbmm__points_to_analysis__Es_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__3_3, (MR_Integer) 1)));

              /* direct tailcall eliminated */
              {
                MR_Word transform_hlds__rbmm__points_to_analysis__next_value_of_Edge_1 = transform_hlds__rbmm__points_to_analysis__E_12;
                MR_Word transform_hlds__rbmm__points_to_analysis__next_value_of_HeadVar__2_2 = transform_hlds__rbmm__points_to_analysis__Es_13;
                MR_Word transform_hlds__rbmm__points_to_analysis__next_value_of_HeadVar__3_3 = transform_hlds__rbmm__points_to_analysis__Es_13;

                transform_hlds__rbmm__points_to_analysis__HeadVar__3_3 = transform_hlds__rbmm__points_to_analysis__next_value_of_HeadVar__3_3;
                transform_hlds__rbmm__points_to_analysis__HeadVar__2_2 = transform_hlds__rbmm__points_to_analysis__next_value_of_HeadVar__2_2;
                transform_hlds__rbmm__points_to_analysis__Edge_1 = transform_hlds__rbmm__points_to_analysis__next_value_of_Edge_1;
              }
              continue;
            }
        else
          {
            MR_Word transform_hlds__rbmm__points_to_analysis__Ed_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__rbmm__points_to_analysis__Eds_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__points_to_analysis__End_27;
            MR_Word transform_hlds__rbmm__points_to_analysis__EdgeContent_28;
            MR_Word transform_hlds__rbmm__points_to_analysis__E_30;
            MR_Word transform_hlds__rbmm__points_to_analysis__EdC_31;
            MR_Word transform_hlds__rbmm__points_to_analysis___Start_26;
            MR_Word transform_hlds__rbmm__points_to_analysis___S_29;

            {
              transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_4, transform_hlds__rbmm__points_to_analysis__Edge_1, &transform_hlds__rbmm__points_to_analysis___Start_26, &transform_hlds__rbmm__points_to_analysis__End_27, &transform_hlds__rbmm__points_to_analysis__EdgeContent_28);
            }
            {
              transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_4, transform_hlds__rbmm__points_to_analysis__Ed_21, &transform_hlds__rbmm__points_to_analysis___S_29, &transform_hlds__rbmm__points_to_analysis__E_30, &transform_hlds__rbmm__points_to_analysis__EdC_31);
            }
            {
              transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0(transform_hlds__rbmm__points_to_analysis__EdgeContent_28, transform_hlds__rbmm__points_to_analysis__EdC_31);
            }
            if (transform_hlds__rbmm__points_to_analysis__succeeded)
              {
                MR_Word transform_hlds__rbmm__points_to_analysis__Graph1_32;

                {
                  transform_hlds__rbmm__points_to_graph__unify_operator_4_p_0(transform_hlds__rbmm__points_to_analysis__End_27, transform_hlds__rbmm__points_to_analysis__E_30, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_4, &transform_hlds__rbmm__points_to_analysis__Graph1_32);
                }
                {
                  transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0(transform_hlds__rbmm__points_to_analysis__End_27, transform_hlds__rbmm__points_to_analysis__Graph1_32, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_5);
                }
                *transform_hlds__rbmm__points_to_analysis__HeadVar__6_6 = (MR_Integer) 1;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__rbmm__points_to_analysis__next_value_of_HeadVar__2_2 = transform_hlds__rbmm__points_to_analysis__Eds_22;

                  transform_hlds__rbmm__points_to_analysis__HeadVar__2_2 = transform_hlds__rbmm__points_to_analysis__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__Node_4,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_11,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
        MR_Word transform_hlds__rbmm__points_to_analysis__UnifiedNode_6;
        MR_Word transform_hlds__rbmm__points_to_analysis__OutEdgesOfUnifiedNode_7;

        {
          transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_11, transform_hlds__rbmm__points_to_analysis__Node_4, &transform_hlds__rbmm__points_to_analysis__UnifiedNode_6);
        }
        {
          transform_hlds__rbmm__points_to_analysis__OutEdgesOfUnifiedNode_7 = transform_hlds__rbmm__points_to_graph__rptg_lookup_list_outedges_2_f_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_11, transform_hlds__rbmm__points_to_analysis__UnifiedNode_6);
        }
        if ((transform_hlds__rbmm__points_to_analysis__OutEdgesOfUnifiedNode_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_12 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_11;
        else
          {
            MR_Word transform_hlds__rbmm__points_to_analysis__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__OutEdgesOfUnifiedNode_7, (MR_Integer) 0)));
            MR_Word transform_hlds__rbmm__points_to_analysis__Es_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__OutEdgesOfUnifiedNode_7, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__points_to_analysis__Happened_10;
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_14_14;

            {
              transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_edges_6_p_0(transform_hlds__rbmm__points_to_analysis__E_8, transform_hlds__rbmm__points_to_analysis__Es_9, transform_hlds__rbmm__points_to_analysis__Es_9, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_11, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_14_14, &transform_hlds__rbmm__points_to_analysis__Happened_10);
            }
            switch (transform_hlds__rbmm__points_to_analysis__Happened_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_12 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_14_14;
                break;
              case (MR_Integer) 1:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word transform_hlds__rbmm__points_to_analysis__next_value_of_Node_4 = transform_hlds__rbmm__points_to_analysis__UnifiedNode_6;
                    MR_Word transform_hlds__rbmm__points_to_analysis__next_value_of_STATE_VARIABLE_Graph_0_11 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_14_14;

                    transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_11 = transform_hlds__rbmm__points_to_analysis__next_value_of_STATE_VARIABLE_Graph_0_11;
                    transform_hlds__rbmm__points_to_analysis__Node_4 = transform_hlds__rbmm__points_to_analysis__next_value_of_Node_4;
                  }
                  continue;
                }
                break;
            }
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_p_0_1(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
    MR_Word transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_InfoTable_16;

    {
      transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 4))), ((MR_Integer) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_InfoTable_16);
    }
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_InfoTable_16));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_5,
  MR_Word transform_hlds__rbmm__points_to_analysis__PredId_6,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_10,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_11)
{
  {
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
    MR_Word transform_hlds__rbmm__points_to_analysis__PredInfo_8;
    MR_Word transform_hlds__rbmm__points_to_analysis__ProcIds_9;
    MR_Word transform_hlds__rbmm__points_to_analysis__Var_12;
    MR_Box transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_InfoTable_11;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__points_to_analysis__ModuleInfo_5, transform_hlds__rbmm__points_to_analysis__PredId_6, &transform_hlds__rbmm__points_to_analysis__PredInfo_8);
    }
    {
      transform_hlds__rbmm__points_to_analysis__ProcIds_9 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__rbmm__points_to_analysis__PredInfo_8);
    }
    {
      transform_hlds__rbmm__points_to_analysis__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_12, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_12, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_12, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ModuleInfo_5));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_12, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__PredId_6));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[0], transform_hlds__rbmm__points_to_analysis__Var_12, transform_hlds__rbmm__points_to_analysis__ProcIds_9, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_10)), &transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_InfoTable_11);
    }
    *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_11 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_InfoTable_11);
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0_2(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
    MR_Word transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_InfoTable_11;

    {
      transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_InfoTable_11);
    }
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_InfoTable_11));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0_1(
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
    MR_Word transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_InfoTable_11;

    {
      transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_InfoTable_11);
    }
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_InfoTable_11));
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0(
  MR_Word * transform_hlds__rbmm__points_to_analysis__InfoTable_4,
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
    MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable0_6;
    MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable1_7;
    MR_Word transform_hlds__rbmm__points_to_analysis__PredIds_14;
    MR_Word transform_hlds__rbmm__points_to_analysis__Var_15;
    MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_26;
    MR_Word transform_hlds__rbmm__points_to_analysis__DepInfo_27;
    MR_Word transform_hlds__rbmm__points_to_analysis__BottomUpSCCs_28;
    MR_Word transform_hlds__rbmm__points_to_analysis__Var_36;
    MR_Box transform_hlds__rbmm__points_to_analysis__conv1_InfoTable1_7;
    MR_Box transform_hlds__rbmm__points_to_analysis__conv3_InfoTable_4;

    {
      transform_hlds__rbmm__points_to_analysis__InfoTable0_6 = transform_hlds__rbmm__points_to_info__rpta_info_table_init_0_f_0();
    }
    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__rbmm__points_to_analysis__PredIds_14);
    }
    {
      transform_hlds__rbmm__points_to_analysis__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_15, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_15, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_15, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_ModuleInfo_0_8));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[0], transform_hlds__rbmm__points_to_analysis__Var_15, transform_hlds__rbmm__points_to_analysis__PredIds_14, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__InfoTable0_6)), &transform_hlds__rbmm__points_to_analysis__conv1_InfoTable1_7);
    }
    transform_hlds__rbmm__points_to_analysis__InfoTable1_7 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv1_InfoTable1_7);
    {
      hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__rbmm__points_to_analysis__ModuleInfo_26, &transform_hlds__rbmm__points_to_analysis__DepInfo_27);
    }
    {
      transform_hlds__rbmm__points_to_analysis__BottomUpSCCs_28 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__rbmm__points_to_analysis__DepInfo_27);
    }
    {
      transform_hlds__rbmm__points_to_analysis__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_36, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_36, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0_2));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Var_36, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ModuleInfo_26));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_2[1], (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[0], transform_hlds__rbmm__points_to_analysis__Var_36, transform_hlds__rbmm__points_to_analysis__BottomUpSCCs_28, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__InfoTable1_7)), &transform_hlds__rbmm__points_to_analysis__conv3_InfoTable_4);
    }
    *transform_hlds__rbmm__points_to_analysis__InfoTable_4 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv3_InfoTable_4);
    *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_ModuleInfo_9 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_ModuleInfo_0_8;
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

/* :- end_module transform_hlds.rbmm.points_to_analysis. */
