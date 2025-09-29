/*
** Automatically generated from `rbmm.region_arguments.m'
** by the Mercury compiler,
** version rotd-2025-09-29
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


// :- module transform_hlds.rbmm.region_arguments.
// :- implementation.

/*
INIT mercury__transform_hlds__rbmm__region_arguments__init
ENDINIT
*/

#include "transform_hlds.rbmm.region_arguments.mih"


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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
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
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "transform_hlds.rbmm.points_to_graph.mih"
#include "transform_hlds.rbmm.points_to_info.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_arguments__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_arguments__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_arguments__list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_PseudoTypeInfo transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__field_types_region_args_0_0[3];

static const MR_DuFunctorDesc transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_functor_desc_region_args_0_0;

static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_stag_ordered_region_args_0_0[1];

static const MR_DuPtagLayout transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_ptag_ordered_region_args_0[1];

static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_name_ordered_region_args_0[1];

static const MR_Integer transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__functor_number_map_region_args_0[1];

static void MR_CALL 
transform_hlds__rbmm__region_arguments__find_actual_param_4_p_0(
  MR_Word Alpha_PP_5,
  MR_Word Formal_6,
  MR_Word Actuals0_7,
  MR_Word * Actuals_8);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_case_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_case_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_case_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_case_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word PPId_13,
  MR_Word RptaInfoTable_14,
  MR_Word ConstantRTable_15,
  MR_Word DeadRTable_16,
  MR_Word BornRTable_17,
  MR_Word Case_18,
  MR_Word STATE_VARIABLE_FormalRegionArgTable_0_24,
  MR_Word * STATE_VARIABLE_FormalRegionArgTable_25,
  MR_Word STATE_VARIABLE_ActualRegionArgProc_0_26,
  MR_Word * STATE_VARIABLE_ActualRegionArgProc_27);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments__record_region_arguments_proc_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_region_arguments_proc_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word PredId_13,
  MR_Word RptaInfoTable_14,
  MR_Word ConstantRTable_15,
  MR_Word DeadRTable_16,
  MR_Word BornRTable_17,
  MR_Integer ProcId_18,
  MR_Word STATE_VARIABLE_FormalRegionArgTable_0_26,
  MR_Word * STATE_VARIABLE_FormalRegionArgTable_27,
  MR_Word STATE_VARIABLE_ActualRegionArgTable_0_28,
  MR_Word * STATE_VARIABLE_ActualRegionArgTable_29);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word PPId_13,
  MR_Word RptaInfoTable_14,
  MR_Word ConstantRTable_15,
  MR_Word DeadRTable_16,
  MR_Word BornRTable_17,
  MR_Word Goal_18,
  MR_Word STATE_VARIABLE_FormalRegionArgTable_0_23,
  MR_Word * STATE_VARIABLE_FormalRegionArgTable_24,
  MR_Word STATE_VARIABLE_ActualRegionArgProc_0_25,
  MR_Word * STATE_VARIABLE_ActualRegionArgProc_26);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_call_site_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_call_site_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_call_site_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word CallerPPId_14,
  MR_Word CallSite_15,
  MR_Word CalleePPId_16,
  MR_Word RptaInfoTable_17,
  MR_Word ConstantRTable_18,
  MR_Word DeadRTable_19,
  MR_Word BornRTable_20,
  MR_Word STATE_VARIABLE_FormalRegionArgTable_0_34,
  MR_Word * STATE_VARIABLE_FormalRegionArgTable_35,
  MR_Word STATE_VARIABLE_ActualRegionArgProc_0_36,
  MR_Word * STATE_VARIABLE_ActualRegionArgProc_37);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_pred_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_pred_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word RptaInfoTable_12,
  MR_Word ConstantRTable_13,
  MR_Word DeadRTable_14,
  MR_Word BornRTable_15,
  MR_Word PredId_16,
  MR_Word STATE_VARIABLE_FormalRegionArgTable_0_21,
  MR_Word * STATE_VARIABLE_FormalRegionArgTable_22,
  MR_Word STATE_VARIABLE_ActualRegionArgTable_0_23,
  MR_Word * STATE_VARIABLE_ActualRegionArgTable_24);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_region_arguments_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____pp_actual_region_args_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____pp_actual_region_args_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____proc_formal_region_args_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____proc_formal_region_args_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____proc_pp_actual_region_args_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____proc_pp_actual_region_args_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____region_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____region_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_1[4][3];

static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_2[2][2];

static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_3[1][13];

static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_4[3][14];

static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_5[1][7];

static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_6[1][5];




static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_1[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_2[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_3[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_4[3][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_5[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_6[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_arguments__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_arguments__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_arguments__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_pp_actual_region_args_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_arguments____Unify____pp_actual_region_args_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_arguments____Compare____pp_actual_region_args_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_arguments",
  (MR_String) "pp_actual_region_args_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_proc_formal_region_args_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_arguments____Unify____proc_formal_region_args_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_arguments____Compare____proc_formal_region_args_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_arguments",
  (MR_String) "proc_formal_region_args_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_proc_pp_actual_region_args_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_arguments____Unify____proc_pp_actual_region_args_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_arguments____Compare____proc_pp_actual_region_args_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_arguments",
  (MR_String) "proc_pp_actual_region_args_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_arguments__list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0) }
};

static const MR_PseudoTypeInfo transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__field_types_region_args_0_0[3] = {
  (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_arguments__list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0),
  (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_arguments__list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0),
  (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_arguments__list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
};

static const MR_DuFunctorDesc transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_functor_desc_region_args_0_0 = {
  (MR_String) "region_args",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__field_types_region_args_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_stag_ordered_region_args_0_0[1] = { &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_functor_desc_region_args_0_0 };

static const MR_DuPtagLayout transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_ptag_ordered_region_args_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_stag_ordered_region_args_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_name_ordered_region_args_0[1] = { &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_functor_desc_region_args_0_0 };

static const MR_Integer transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__functor_number_map_region_args_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__rbmm__region_arguments____Unify____region_args_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_arguments____Compare____region_args_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_arguments",
  (MR_String) "region_args",
  { transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_name_ordered_region_args_0 },
  { transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_ptag_ordered_region_args_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__functor_number_map_region_args_0,

};

void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____region_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_2[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_2[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____region_args_0_0(
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
  {
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_2[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____proc_pp_actual_region_args_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____proc_pp_actual_region_args_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____proc_formal_region_args_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____proc_formal_region_args_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____pp_actual_region_args_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____pp_actual_region_args_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__find_actual_param_4_p_0(
  MR_Word Alpha_PP_5,
  MR_Word Formal_6,
  MR_Word Actuals0_7,
  MR_Word * Actuals_8)
{
  MR_Word Actual_9;
  MR_Box conv0_Actual_9;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Alpha_PP_5, ((MR_Box) (Formal_6)), &conv0_Actual_9);
  Actual_9 = ((MR_Word) (conv0_Actual_9));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Actuals_8 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Actual_9));
    MR_hl_field(1, base, 1) = ((MR_Box) (Actuals0_7));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_case_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_FormalRegionArgTable_25;
  MR_Word conv8_STATE_VARIABLE_ActualRegionArgProc_27;

  transform_hlds__rbmm__region_arguments__record_actual_region_arguments_case_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_FormalRegionArgTable_25, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_ActualRegionArgProc_27);
  *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_FormalRegionArgTable_25));
  *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_ActualRegionArgProc_27));
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_case_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_FormalRegionArgTable_24;
  MR_Word conv4_STATE_VARIABLE_ActualRegionArgProc_26;

  transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_FormalRegionArgTable_24, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_ActualRegionArgProc_26);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_FormalRegionArgTable_24));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_ActualRegionArgProc_26));
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_case_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_FormalRegionArgTable_24;
  MR_Word conv0_STATE_VARIABLE_ActualRegionArgProc_26;

  transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_FormalRegionArgTable_24, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ActualRegionArgProc_26);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_FormalRegionArgTable_24));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ActualRegionArgProc_26));
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_case_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word PPId_13,
  MR_Word RptaInfoTable_14,
  MR_Word ConstantRTable_15,
  MR_Word DeadRTable_16,
  MR_Word BornRTable_17,
  MR_Word Case_18,
  MR_Word STATE_VARIABLE_FormalRegionArgTable_0_24,
  MR_Word * STATE_VARIABLE_FormalRegionArgTable_25,
  MR_Word STATE_VARIABLE_ActualRegionArgProc_0_26,
  MR_Word * STATE_VARIABLE_ActualRegionArgProc_27)
{
  MR_bool succeeded;
  MR_Word Goal_23 = ((MR_Word) ((MR_hl_field(0, Case_18, 2))));
  MR_Word Expr_28 = ((MR_Word) ((MR_hl_field(0, Goal_23, 0))));
  MR_Word Info_29 = ((MR_Word) ((MR_hl_field(0, Goal_23, 1))));

  switch (MR_tag((MR_Word) Expr_28)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal_48 = (MR_Word) ((MR_Word) (Expr_28));

        transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(ModuleInfo_12, PPId_13, RptaInfoTable_14, ConstantRTable_15, DeadRTable_16, BornRTable_17, SubGoal_48, STATE_VARIABLE_FormalRegionArgTable_0_24, STATE_VARIABLE_FormalRegionArgTable_25, STATE_VARIABLE_ActualRegionArgProc_0_26, STATE_VARIABLE_ActualRegionArgProc_27);
      }
      break;
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_FormalRegionArgTable_25 = STATE_VARIABLE_FormalRegionArgTable_0_24;
        *STATE_VARIABLE_ActualRegionArgProc_27 = STATE_VARIABLE_ActualRegionArgProc_0_26;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_30 = ((MR_Word) ((MR_hl_field(2, Expr_28, 0))));
        MR_Integer ProcId_31 = ((MR_Integer) ((MR_hl_field(2, Expr_28, 1))));
        MR_Word CalleePPId_36;
        MR_Word Var_50;

        {
          CalleePPId_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CalleePPId_36, 0) = ((MR_Box) (PredId_30));
          MR_hl_field(0, CalleePPId_36, 1) = ((MR_Box) (ProcId_31));
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (CalleePPId_36));
          MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(Var_50, ModuleInfo_12);
        if (succeeded)
        {
          *STATE_VARIABLE_ActualRegionArgProc_27 = STATE_VARIABLE_ActualRegionArgProc_0_26;
          *STATE_VARIABLE_FormalRegionArgTable_25 = STATE_VARIABLE_FormalRegionArgTable_0_24;
        }
        else
        {
          MR_Word CallSite_37;

          CallSite_37 = transform_hlds__smm_common__program_point_init_1_f_0(Info_29);
          transform_hlds__rbmm__region_arguments__record_actual_region_arguments_call_site_12_p_0(ModuleInfo_12, PPId_13, CallSite_37, CalleePPId_36, RptaInfoTable_14, ConstantRTable_15, DeadRTable_16, BornRTable_17, STATE_VARIABLE_FormalRegionArgTable_0_24, STATE_VARIABLE_FormalRegionArgTable_25, STATE_VARIABLE_ActualRegionArgProc_0_26, STATE_VARIABLE_ActualRegionArgProc_27);
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Expr_28, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_arguments.record_actual_region_arguments_expr\'/12", (MR_String) "generic_call NYI");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_arguments.record_actual_region_arguments_expr\'/12", (MR_String) "call_foreign_proc NYI");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Conjuncts_39 = ((MR_Word) ((MR_hl_field(3, Expr_28, 2))));
            MR_Word Var_52;
            MR_Box conv3_STATE_VARIABLE_FormalRegionArgTable_25;
            MR_Box conv2_STATE_VARIABLE_ActualRegionArgProc_27;

            {
              Var_52 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_52, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_4[1]));
              MR_hl_field(0, Var_52, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_actual_region_arguments_case_11_p_0_1));
              MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 6));
              MR_hl_field(0, Var_52, 3) = ((MR_Box) (ModuleInfo_12));
              MR_hl_field(0, Var_52, 4) = ((MR_Box) (PPId_13));
              MR_hl_field(0, Var_52, 5) = ((MR_Box) (RptaInfoTable_14));
              MR_hl_field(0, Var_52, 6) = ((MR_Box) (ConstantRTable_15));
              MR_hl_field(0, Var_52, 7) = ((MR_Box) (DeadRTable_16));
              MR_hl_field(0, Var_52, 8) = ((MR_Box) (BornRTable_17));
            }
            mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[0]), Var_52, Conjuncts_39, ((MR_Box) (STATE_VARIABLE_FormalRegionArgTable_0_24)), &conv3_STATE_VARIABLE_FormalRegionArgTable_25, ((MR_Box) (STATE_VARIABLE_ActualRegionArgProc_0_26)), &conv2_STATE_VARIABLE_ActualRegionArgProc_27);
            *STATE_VARIABLE_FormalRegionArgTable_25 = ((MR_Word) (conv3_STATE_VARIABLE_FormalRegionArgTable_25));
            *STATE_VARIABLE_ActualRegionArgProc_27 = ((MR_Word) (conv2_STATE_VARIABLE_ActualRegionArgProc_27));
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts_40 = ((MR_Word) ((MR_hl_field(3, Expr_28, 1))));
            MR_Word Var_53;
            MR_Box conv7_STATE_VARIABLE_FormalRegionArgTable_25;
            MR_Box conv6_STATE_VARIABLE_ActualRegionArgProc_27;

            {
              Var_53 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_53, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_4[1]));
              MR_hl_field(0, Var_53, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_actual_region_arguments_case_11_p_0_2));
              MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 6));
              MR_hl_field(0, Var_53, 3) = ((MR_Box) (ModuleInfo_12));
              MR_hl_field(0, Var_53, 4) = ((MR_Box) (PPId_13));
              MR_hl_field(0, Var_53, 5) = ((MR_Box) (RptaInfoTable_14));
              MR_hl_field(0, Var_53, 6) = ((MR_Box) (ConstantRTable_15));
              MR_hl_field(0, Var_53, 7) = ((MR_Box) (DeadRTable_16));
              MR_hl_field(0, Var_53, 8) = ((MR_Box) (BornRTable_17));
            }
            mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[0]), Var_53, Disjuncts_40, ((MR_Box) (STATE_VARIABLE_FormalRegionArgTable_0_24)), &conv7_STATE_VARIABLE_FormalRegionArgTable_25, ((MR_Box) (STATE_VARIABLE_ActualRegionArgProc_0_26)), &conv6_STATE_VARIABLE_ActualRegionArgProc_27);
            *STATE_VARIABLE_FormalRegionArgTable_25 = ((MR_Word) (conv7_STATE_VARIABLE_FormalRegionArgTable_25));
            *STATE_VARIABLE_ActualRegionArgProc_27 = ((MR_Word) (conv6_STATE_VARIABLE_ActualRegionArgProc_27));
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Cases_47 = ((MR_Word) ((MR_hl_field(3, Expr_28, 3))));
            MR_Word Var_58;
            MR_Box conv11_STATE_VARIABLE_FormalRegionArgTable_25;
            MR_Box conv10_STATE_VARIABLE_ActualRegionArgProc_27;

            {
              Var_58 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_58, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_4[2]));
              MR_hl_field(0, Var_58, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_actual_region_arguments_case_11_p_0_3));
              MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 6));
              MR_hl_field(0, Var_58, 3) = ((MR_Box) (ModuleInfo_12));
              MR_hl_field(0, Var_58, 4) = ((MR_Box) (PPId_13));
              MR_hl_field(0, Var_58, 5) = ((MR_Box) (RptaInfoTable_14));
              MR_hl_field(0, Var_58, 6) = ((MR_Box) (ConstantRTable_15));
              MR_hl_field(0, Var_58, 7) = ((MR_Box) (DeadRTable_16));
              MR_hl_field(0, Var_58, 8) = ((MR_Box) (BornRTable_17));
            }
            mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[0]), Var_58, Cases_47, ((MR_Box) (STATE_VARIABLE_FormalRegionArgTable_0_24)), &conv11_STATE_VARIABLE_FormalRegionArgTable_25, ((MR_Box) (STATE_VARIABLE_ActualRegionArgProc_0_26)), &conv10_STATE_VARIABLE_ActualRegionArgProc_27);
            *STATE_VARIABLE_FormalRegionArgTable_25 = ((MR_Word) (conv11_STATE_VARIABLE_FormalRegionArgTable_25));
            *STATE_VARIABLE_ActualRegionArgProc_27 = ((MR_Word) (conv10_STATE_VARIABLE_ActualRegionArgProc_27));
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word SubGoal_65 = ((MR_Word) ((MR_hl_field(3, Expr_28, 2))));

            transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(ModuleInfo_12, PPId_13, RptaInfoTable_14, ConstantRTable_15, DeadRTable_16, BornRTable_17, SubGoal_65, STATE_VARIABLE_FormalRegionArgTable_0_24, STATE_VARIABLE_FormalRegionArgTable_25, STATE_VARIABLE_ActualRegionArgProc_0_26, STATE_VARIABLE_ActualRegionArgProc_27);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Cond_42 = ((MR_Word) ((MR_hl_field(3, Expr_28, 2))));
            MR_Word Then_43 = ((MR_Word) ((MR_hl_field(3, Expr_28, 3))));
            MR_Word Else_44 = ((MR_Word) ((MR_hl_field(3, Expr_28, 4))));
            MR_Word STATE_VARIABLE_FormalRegionArgTable_4_54;
            MR_Word STATE_VARIABLE_ActualRegionArgProc_4_55;
            MR_Word STATE_VARIABLE_FormalRegionArgTable_5_56;
            MR_Word STATE_VARIABLE_ActualRegionArgProc_5_57;

            transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(ModuleInfo_12, PPId_13, RptaInfoTable_14, ConstantRTable_15, DeadRTable_16, BornRTable_17, Cond_42, STATE_VARIABLE_FormalRegionArgTable_0_24, &STATE_VARIABLE_FormalRegionArgTable_4_54, STATE_VARIABLE_ActualRegionArgProc_0_26, &STATE_VARIABLE_ActualRegionArgProc_4_55);
            transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(ModuleInfo_12, PPId_13, RptaInfoTable_14, ConstantRTable_15, DeadRTable_16, BornRTable_17, Then_43, STATE_VARIABLE_FormalRegionArgTable_4_54, &STATE_VARIABLE_FormalRegionArgTable_5_56, STATE_VARIABLE_ActualRegionArgProc_4_55, &STATE_VARIABLE_ActualRegionArgProc_5_57);
            transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(ModuleInfo_12, PPId_13, RptaInfoTable_14, ConstantRTable_15, DeadRTable_16, BornRTable_17, Else_44, STATE_VARIABLE_FormalRegionArgTable_5_56, STATE_VARIABLE_FormalRegionArgTable_25, STATE_VARIABLE_ActualRegionArgProc_5_57, STATE_VARIABLE_ActualRegionArgProc_27);
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_arguments.record_actual_region_arguments_expr\'/12", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments__record_region_arguments_proc_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__rbmm__points_to_graph__rptg_is_allocated_node_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_region_arguments_proc_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word PredId_13,
  MR_Word RptaInfoTable_14,
  MR_Word ConstantRTable_15,
  MR_Word DeadRTable_16,
  MR_Word BornRTable_17,
  MR_Integer ProcId_18,
  MR_Word STATE_VARIABLE_FormalRegionArgTable_0_26,
  MR_Word * STATE_VARIABLE_FormalRegionArgTable_27,
  MR_Word STATE_VARIABLE_ActualRegionArgTable_0_28,
  MR_Word * STATE_VARIABLE_ActualRegionArgTable_29)
{
  MR_bool succeeded;
  MR_Word PPId_21;
  MR_Word Var_30;

  {
    PPId_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PPId_21, 0) = ((MR_Box) (PredId_13));
    MR_hl_field(0, PPId_21, 1) = ((MR_Box) (ProcId_18));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (PPId_21));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(Var_30, ModuleInfo_12);
  if (succeeded)
  {
    *STATE_VARIABLE_ActualRegionArgTable_29 = STATE_VARIABLE_ActualRegionArgTable_0_28;
    *STATE_VARIABLE_FormalRegionArgTable_27 = STATE_VARIABLE_FormalRegionArgTable_0_26;
  }
  else
  {
    MR_Word ProcInfo0_22;
    MR_Word ProcInfo_23;
    MR_Word Body_24;
    MR_Word ActualRegionArgProc_25;
    MR_Word STATE_VARIABLE_FormalRegionArgTable_1_32;
    MR_Word Var_34;
    MR_Box conv0_Var_39;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0), STATE_VARIABLE_FormalRegionArgTable_0_26, ((MR_Box) (PPId_21)), &conv0_Var_39);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
      STATE_VARIABLE_FormalRegionArgTable_1_32 = STATE_VARIABLE_FormalRegionArgTable_0_26;
    else
    {
      MR_Word ConstantR_40;
      MR_Word DeadR_41;
      MR_Word BornR_42;
      MR_Word RptaInfo_43;
      MR_Word Graph_44;
      MR_Word LConstantR_46;
      MR_Word Globals_47;
      MR_Word UseAllocRegions_48;
      MR_Word LFormalConstantAllocR_49;
      MR_Word FormalDeadR_50;
      MR_Word FormalBornR_51;
      MR_Word RegionArgs_52;
      MR_Box conv1_ConstantR_40;
      MR_Box conv2_DeadR_41;
      MR_Box conv3_BornR_42;
      MR_Box conv4_RptaInfo_43;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_2[0]), ConstantRTable_15, ((MR_Box) (PPId_21)), &conv1_ConstantR_40);
      ConstantR_40 = ((MR_Word) (conv1_ConstantR_40));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_2[0]), DeadRTable_16, ((MR_Box) (PPId_21)), &conv2_DeadR_41);
      DeadR_41 = ((MR_Word) (conv2_DeadR_41));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_2[0]), BornRTable_17, ((MR_Box) (PPId_21)), &conv3_BornR_42);
      BornR_42 = ((MR_Word) (conv3_BornR_42));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), RptaInfoTable_14, ((MR_Box) (PPId_21)), &conv4_RptaInfo_43);
      RptaInfo_43 = ((MR_Word) (conv4_RptaInfo_43));
      Graph_44 = ((MR_Word) ((MR_hl_field(0, RptaInfo_43, 0))));
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ConstantR_40, &LConstantR_46);
      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_12, &Globals_47);
      libs__globals__lookup_bool_option_3_p_0(Globals_47, (MR_Integer) 98, &UseAllocRegions_48);
      switch (UseAllocRegions_48) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          LFormalConstantAllocR_49 = LConstantR_46;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_54;

            {
              Var_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_54, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_6[0]));
              MR_hl_field(0, Var_54, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_region_arguments_proc_11_p_0_1));
              MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_54, 3) = ((MR_Box) (Graph_44));
            }
            mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Var_54, LConstantR_46, &LFormalConstantAllocR_49);
          }
          break;
      }
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), DeadR_41, &FormalDeadR_50);
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), BornR_42, &FormalBornR_51);
      {
        RegionArgs_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, RegionArgs_52, 0) = ((MR_Box) (LFormalConstantAllocR_49));
        MR_hl_field(0, RegionArgs_52, 1) = ((MR_Box) (FormalDeadR_50));
        MR_hl_field(0, RegionArgs_52, 2) = ((MR_Box) (FormalBornR_51));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0), ((MR_Box) (PPId_21)), ((MR_Box) (RegionArgs_52)), STATE_VARIABLE_FormalRegionArgTable_0_26, &STATE_VARIABLE_FormalRegionArgTable_1_32);
    }
    hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_12, PPId_21, &ProcInfo0_22);
    hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(ModuleInfo_12, ProcInfo0_22, &ProcInfo_23);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_23, &Body_24);
    Var_34 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0));
    transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(ModuleInfo_12, PPId_21, RptaInfoTable_14, ConstantRTable_15, DeadRTable_16, BornRTable_17, Body_24, STATE_VARIABLE_FormalRegionArgTable_1_32, STATE_VARIABLE_FormalRegionArgTable_27, Var_34, &ActualRegionArgProc_25);
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[0]), ((MR_Box) (PPId_21)), ((MR_Box) (ActualRegionArgProc_25)), STATE_VARIABLE_ActualRegionArgTable_0_28, STATE_VARIABLE_ActualRegionArgTable_29);
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_FormalRegionArgTable_25;
  MR_Word conv8_STATE_VARIABLE_ActualRegionArgProc_27;

  transform_hlds__rbmm__region_arguments__record_actual_region_arguments_case_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_FormalRegionArgTable_25, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_ActualRegionArgProc_27);
  *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_FormalRegionArgTable_25));
  *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_ActualRegionArgProc_27));
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_FormalRegionArgTable_24;
  MR_Word conv4_STATE_VARIABLE_ActualRegionArgProc_26;

  transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_FormalRegionArgTable_24, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_ActualRegionArgProc_26);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_FormalRegionArgTable_24));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_ActualRegionArgProc_26));
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_FormalRegionArgTable_24;
  MR_Word conv0_STATE_VARIABLE_ActualRegionArgProc_26;

  transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_FormalRegionArgTable_24, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ActualRegionArgProc_26);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_FormalRegionArgTable_24));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ActualRegionArgProc_26));
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word PPId_13,
  MR_Word RptaInfoTable_14,
  MR_Word ConstantRTable_15,
  MR_Word DeadRTable_16,
  MR_Word BornRTable_17,
  MR_Word Goal_18,
  MR_Word STATE_VARIABLE_FormalRegionArgTable_0_23,
  MR_Word * STATE_VARIABLE_FormalRegionArgTable_24,
  MR_Word STATE_VARIABLE_ActualRegionArgProc_0_25,
  MR_Word * STATE_VARIABLE_ActualRegionArgProc_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Expr_21 = ((MR_Word) ((MR_hl_field(0, Goal_18, 0))));
    MR_Word Info_22 = ((MR_Word) ((MR_hl_field(0, Goal_18, 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Expr_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_45 = (MR_Word) ((MR_Word) (Expr_21));
          MR_Word next_value_of_Goal_18 = SubGoal_45;

          // direct tailcall eliminated
          ;
          Goal_18 = next_value_of_Goal_18;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_FormalRegionArgTable_24 = STATE_VARIABLE_FormalRegionArgTable_0_23;
          *STATE_VARIABLE_ActualRegionArgProc_26 = STATE_VARIABLE_ActualRegionArgProc_0_25;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_27 = ((MR_Word) ((MR_hl_field(2, Expr_21, 0))));
          MR_Integer ProcId_28 = ((MR_Integer) ((MR_hl_field(2, Expr_21, 1))));
          MR_Word CalleePPId_33;
          MR_Word Var_47;

          {
            CalleePPId_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, CalleePPId_33, 0) = ((MR_Box) (PredId_27));
            MR_hl_field(0, CalleePPId_33, 1) = ((MR_Box) (ProcId_28));
          }
          {
            Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_47, 0) = ((MR_Box) (CalleePPId_33));
            MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(Var_47, ModuleInfo_12);
          if (succeeded)
          {
            *STATE_VARIABLE_ActualRegionArgProc_26 = STATE_VARIABLE_ActualRegionArgProc_0_25;
            *STATE_VARIABLE_FormalRegionArgTable_24 = STATE_VARIABLE_FormalRegionArgTable_0_23;
          }
          else
          {
            MR_Word CallSite_34;

            CallSite_34 = transform_hlds__smm_common__program_point_init_1_f_0(Info_22);
            transform_hlds__rbmm__region_arguments__record_actual_region_arguments_call_site_12_p_0(ModuleInfo_12, PPId_13, CallSite_34, CalleePPId_33, RptaInfoTable_14, ConstantRTable_15, DeadRTable_16, BornRTable_17, STATE_VARIABLE_FormalRegionArgTable_0_23, STATE_VARIABLE_FormalRegionArgTable_24, STATE_VARIABLE_ActualRegionArgProc_0_25, STATE_VARIABLE_ActualRegionArgProc_26);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Expr_21, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_arguments.record_actual_region_arguments_expr\'/12", (MR_String) "generic_call NYI");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_arguments.record_actual_region_arguments_expr\'/12", (MR_String) "call_foreign_proc NYI");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Conjuncts_36 = ((MR_Word) ((MR_hl_field(3, Expr_21, 2))));
              MR_Word Var_49;
              MR_Box conv3_STATE_VARIABLE_FormalRegionArgTable_24;
              MR_Box conv2_STATE_VARIABLE_ActualRegionArgProc_26;

              {
                Var_49 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_49, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_4[1]));
                MR_hl_field(0, Var_49, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0_1));
                MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 6));
                MR_hl_field(0, Var_49, 3) = ((MR_Box) (ModuleInfo_12));
                MR_hl_field(0, Var_49, 4) = ((MR_Box) (PPId_13));
                MR_hl_field(0, Var_49, 5) = ((MR_Box) (RptaInfoTable_14));
                MR_hl_field(0, Var_49, 6) = ((MR_Box) (ConstantRTable_15));
                MR_hl_field(0, Var_49, 7) = ((MR_Box) (DeadRTable_16));
                MR_hl_field(0, Var_49, 8) = ((MR_Box) (BornRTable_17));
              }
              mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[0]), Var_49, Conjuncts_36, ((MR_Box) (STATE_VARIABLE_FormalRegionArgTable_0_23)), &conv3_STATE_VARIABLE_FormalRegionArgTable_24, ((MR_Box) (STATE_VARIABLE_ActualRegionArgProc_0_25)), &conv2_STATE_VARIABLE_ActualRegionArgProc_26);
              *STATE_VARIABLE_FormalRegionArgTable_24 = ((MR_Word) (conv3_STATE_VARIABLE_FormalRegionArgTable_24));
              *STATE_VARIABLE_ActualRegionArgProc_26 = ((MR_Word) (conv2_STATE_VARIABLE_ActualRegionArgProc_26));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts_37 = ((MR_Word) ((MR_hl_field(3, Expr_21, 1))));
              MR_Word Var_50;
              MR_Box conv7_STATE_VARIABLE_FormalRegionArgTable_24;
              MR_Box conv6_STATE_VARIABLE_ActualRegionArgProc_26;

              {
                Var_50 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_50, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_4[1]));
                MR_hl_field(0, Var_50, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0_2));
                MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 6));
                MR_hl_field(0, Var_50, 3) = ((MR_Box) (ModuleInfo_12));
                MR_hl_field(0, Var_50, 4) = ((MR_Box) (PPId_13));
                MR_hl_field(0, Var_50, 5) = ((MR_Box) (RptaInfoTable_14));
                MR_hl_field(0, Var_50, 6) = ((MR_Box) (ConstantRTable_15));
                MR_hl_field(0, Var_50, 7) = ((MR_Box) (DeadRTable_16));
                MR_hl_field(0, Var_50, 8) = ((MR_Box) (BornRTable_17));
              }
              mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[0]), Var_50, Disjuncts_37, ((MR_Box) (STATE_VARIABLE_FormalRegionArgTable_0_23)), &conv7_STATE_VARIABLE_FormalRegionArgTable_24, ((MR_Box) (STATE_VARIABLE_ActualRegionArgProc_0_25)), &conv6_STATE_VARIABLE_ActualRegionArgProc_26);
              *STATE_VARIABLE_FormalRegionArgTable_24 = ((MR_Word) (conv7_STATE_VARIABLE_FormalRegionArgTable_24));
              *STATE_VARIABLE_ActualRegionArgProc_26 = ((MR_Word) (conv6_STATE_VARIABLE_ActualRegionArgProc_26));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_44 = ((MR_Word) ((MR_hl_field(3, Expr_21, 3))));
              MR_Word Var_55;
              MR_Box conv11_STATE_VARIABLE_FormalRegionArgTable_24;
              MR_Box conv10_STATE_VARIABLE_ActualRegionArgProc_26;

              {
                Var_55 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_55, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_4[2]));
                MR_hl_field(0, Var_55, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0_3));
                MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 6));
                MR_hl_field(0, Var_55, 3) = ((MR_Box) (ModuleInfo_12));
                MR_hl_field(0, Var_55, 4) = ((MR_Box) (PPId_13));
                MR_hl_field(0, Var_55, 5) = ((MR_Box) (RptaInfoTable_14));
                MR_hl_field(0, Var_55, 6) = ((MR_Box) (ConstantRTable_15));
                MR_hl_field(0, Var_55, 7) = ((MR_Box) (DeadRTable_16));
                MR_hl_field(0, Var_55, 8) = ((MR_Box) (BornRTable_17));
              }
              mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[0]), Var_55, Cases_44, ((MR_Box) (STATE_VARIABLE_FormalRegionArgTable_0_23)), &conv11_STATE_VARIABLE_FormalRegionArgTable_24, ((MR_Box) (STATE_VARIABLE_ActualRegionArgProc_0_25)), &conv10_STATE_VARIABLE_ActualRegionArgProc_26);
              *STATE_VARIABLE_FormalRegionArgTable_24 = ((MR_Word) (conv11_STATE_VARIABLE_FormalRegionArgTable_24));
              *STATE_VARIABLE_ActualRegionArgProc_26 = ((MR_Word) (conv10_STATE_VARIABLE_ActualRegionArgProc_26));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_62 = ((MR_Word) ((MR_hl_field(3, Expr_21, 2))));
              MR_Word next_value_of_Goal_18 = SubGoal_62;

              // direct tailcall eliminated
              ;
              Goal_18 = next_value_of_Goal_18;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_39 = ((MR_Word) ((MR_hl_field(3, Expr_21, 2))));
              MR_Word Then_40 = ((MR_Word) ((MR_hl_field(3, Expr_21, 3))));
              MR_Word Else_41 = ((MR_Word) ((MR_hl_field(3, Expr_21, 4))));
              MR_Word STATE_VARIABLE_FormalRegionArgTable_4_51;
              MR_Word STATE_VARIABLE_ActualRegionArgProc_4_52;
              MR_Word STATE_VARIABLE_FormalRegionArgTable_5_53;
              MR_Word STATE_VARIABLE_ActualRegionArgProc_5_54;
              MR_Word next_value_of_Goal_18;
              MR_Word next_value_of_STATE_VARIABLE_FormalRegionArgTable_0_23;
              MR_Word next_value_of_STATE_VARIABLE_ActualRegionArgProc_0_25;

              transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(ModuleInfo_12, PPId_13, RptaInfoTable_14, ConstantRTable_15, DeadRTable_16, BornRTable_17, Cond_39, STATE_VARIABLE_FormalRegionArgTable_0_23, &STATE_VARIABLE_FormalRegionArgTable_4_51, STATE_VARIABLE_ActualRegionArgProc_0_25, &STATE_VARIABLE_ActualRegionArgProc_4_52);
              transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(ModuleInfo_12, PPId_13, RptaInfoTable_14, ConstantRTable_15, DeadRTable_16, BornRTable_17, Then_40, STATE_VARIABLE_FormalRegionArgTable_4_51, &STATE_VARIABLE_FormalRegionArgTable_5_53, STATE_VARIABLE_ActualRegionArgProc_4_52, &STATE_VARIABLE_ActualRegionArgProc_5_54);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_18 = Else_41;
              next_value_of_STATE_VARIABLE_FormalRegionArgTable_0_23 = STATE_VARIABLE_FormalRegionArgTable_5_53;
              next_value_of_STATE_VARIABLE_ActualRegionArgProc_0_25 = STATE_VARIABLE_ActualRegionArgProc_5_54;
              Goal_18 = next_value_of_Goal_18;
              STATE_VARIABLE_FormalRegionArgTable_0_23 = next_value_of_STATE_VARIABLE_FormalRegionArgTable_0_23;
              STATE_VARIABLE_ActualRegionArgProc_0_25 = next_value_of_STATE_VARIABLE_ActualRegionArgProc_0_25;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_arguments.record_actual_region_arguments_expr\'/12", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_call_site_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__rbmm__points_to_graph__rptg_is_allocated_node_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_call_site_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Actuals_8;

  transform_hlds__rbmm__region_arguments__find_actual_param_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Actuals_8);
  *wrapper_arg_3 = ((MR_Box) (conv3_Actuals_8));
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_call_site_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word CallerPPId_14,
  MR_Word CallSite_15,
  MR_Word CalleePPId_16,
  MR_Word RptaInfoTable_17,
  MR_Word ConstantRTable_18,
  MR_Word DeadRTable_19,
  MR_Word BornRTable_20,
  MR_Word STATE_VARIABLE_FormalRegionArgTable_0_34,
  MR_Word * STATE_VARIABLE_FormalRegionArgTable_35,
  MR_Word STATE_VARIABLE_ActualRegionArgProc_0_36,
  MR_Word * STATE_VARIABLE_ActualRegionArgProc_37)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FormalRegionArgCallee_23;
    MR_Box conv0_FormalRegionArgCallee_23;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0), STATE_VARIABLE_FormalRegionArgTable_0_34, ((MR_Box) (CalleePPId_16)), &conv0_FormalRegionArgCallee_23);
    if (succeeded)
    {
      FormalRegionArgCallee_23 = ((MR_Word) (conv0_FormalRegionArgCallee_23));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FormalConstants_24 = ((MR_Word) ((MR_hl_field(0, FormalRegionArgCallee_23, 0))));
      MR_Word FormalDeads_25 = ((MR_Word) ((MR_hl_field(0, FormalRegionArgCallee_23, 1))));
      MR_Word FormalBorns_26 = ((MR_Word) ((MR_hl_field(0, FormalRegionArgCallee_23, 2))));
      MR_Word CallerRptaInfo_27;
      MR_Word CallerAlpha_29;
      MR_Word AlphaAtCallSite_30;
      MR_Word ActualConstants_31;
      MR_Word ActualDeads_32;
      MR_Word ActualBorns_33;
      MR_Word Var_38;
      MR_Word Var_44;
      MR_Box conv1_CallerRptaInfo_27;
      MR_Box conv2_AlphaAtCallSite_30;
      MR_Box conv4_ActualConstants_31;
      MR_Box conv5_ActualDeads_32;
      MR_Box conv6_ActualBorns_33;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), RptaInfoTable_17, ((MR_Box) (CallerPPId_14)), &conv1_CallerRptaInfo_27);
      CallerRptaInfo_27 = ((MR_Word) (conv1_CallerRptaInfo_27));
      CallerAlpha_29 = ((MR_Word) ((MR_hl_field(0, CallerRptaInfo_27, 1))));
      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[3]), CallerAlpha_29, ((MR_Box) (CallSite_15)), &conv2_AlphaAtCallSite_30);
      AlphaAtCallSite_30 = ((MR_Word) (conv2_AlphaAtCallSite_30));
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_38, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_5[0]));
        MR_hl_field(0, Var_38, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_actual_region_arguments_call_site_12_p_0_1));
        MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_38, 3) = ((MR_Box) (AlphaAtCallSite_30));
      }
      mercury__list__foldr_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_2[1]), Var_38, FormalConstants_24, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_ActualConstants_31);
      ActualConstants_31 = ((MR_Word) (conv4_ActualConstants_31));
      mercury__list__foldr_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_2[1]), Var_38, FormalDeads_25, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_ActualDeads_32);
      ActualDeads_32 = ((MR_Word) (conv5_ActualDeads_32));
      mercury__list__foldr_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_2[1]), Var_38, FormalBorns_26, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_ActualBorns_33);
      ActualBorns_33 = ((MR_Word) (conv6_ActualBorns_33));
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_44, 0) = ((MR_Box) (ActualConstants_31));
        MR_hl_field(0, Var_44, 1) = ((MR_Box) (ActualDeads_32));
        MR_hl_field(0, Var_44, 2) = ((MR_Box) (ActualBorns_33));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0), ((MR_Box) (CallSite_15)), ((MR_Box) (Var_44)), STATE_VARIABLE_ActualRegionArgProc_0_36, STATE_VARIABLE_ActualRegionArgProc_37);
      *STATE_VARIABLE_FormalRegionArgTable_35 = STATE_VARIABLE_FormalRegionArgTable_0_34;
    }
    else
    {
      MR_Word STATE_VARIABLE_FormalRegionArgTable_1_46;
      MR_Box conv7_Var_65;
      MR_Word next_value_of_STATE_VARIABLE_FormalRegionArgTable_0_34;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0), STATE_VARIABLE_FormalRegionArgTable_0_34, ((MR_Box) (CalleePPId_16)), &conv7_Var_65);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
        STATE_VARIABLE_FormalRegionArgTable_1_46 = STATE_VARIABLE_FormalRegionArgTable_0_34;
      else
      {
        MR_Word ConstantR_66;
        MR_Word DeadR_67;
        MR_Word BornR_68;
        MR_Word RptaInfo_69;
        MR_Word Graph_70;
        MR_Word LConstantR_72;
        MR_Word Globals_73;
        MR_Word UseAllocRegions_74;
        MR_Word LFormalConstantAllocR_75;
        MR_Word FormalDeadR_76;
        MR_Word FormalBornR_77;
        MR_Word RegionArgs_78;
        MR_Box conv8_ConstantR_66;
        MR_Box conv9_DeadR_67;
        MR_Box conv10_BornR_68;
        MR_Box conv11_RptaInfo_69;

        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_2[0]), ConstantRTable_18, ((MR_Box) (CalleePPId_16)), &conv8_ConstantR_66);
        ConstantR_66 = ((MR_Word) (conv8_ConstantR_66));
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_2[0]), DeadRTable_19, ((MR_Box) (CalleePPId_16)), &conv9_DeadR_67);
        DeadR_67 = ((MR_Word) (conv9_DeadR_67));
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_2[0]), BornRTable_20, ((MR_Box) (CalleePPId_16)), &conv10_BornR_68);
        BornR_68 = ((MR_Word) (conv10_BornR_68));
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), RptaInfoTable_17, ((MR_Box) (CalleePPId_16)), &conv11_RptaInfo_69);
        RptaInfo_69 = ((MR_Word) (conv11_RptaInfo_69));
        Graph_70 = ((MR_Word) ((MR_hl_field(0, RptaInfo_69, 0))));
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ConstantR_66, &LConstantR_72);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_13, &Globals_73);
        libs__globals__lookup_bool_option_3_p_0(Globals_73, (MR_Integer) 98, &UseAllocRegions_74);
        switch (UseAllocRegions_74) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            LFormalConstantAllocR_75 = LConstantR_72;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_80;

              {
                Var_80 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_80, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_6[0]));
                MR_hl_field(0, Var_80, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_actual_region_arguments_call_site_12_p_0_2));
                MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_80, 3) = ((MR_Box) (Graph_70));
              }
              mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Var_80, LConstantR_72, &LFormalConstantAllocR_75);
            }
            break;
        }
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), DeadR_67, &FormalDeadR_76);
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), BornR_68, &FormalBornR_77);
        {
          RegionArgs_78 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, RegionArgs_78, 0) = ((MR_Box) (LFormalConstantAllocR_75));
          MR_hl_field(0, RegionArgs_78, 1) = ((MR_Box) (FormalDeadR_76));
          MR_hl_field(0, RegionArgs_78, 2) = ((MR_Box) (FormalBornR_77));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0), ((MR_Box) (CalleePPId_16)), ((MR_Box) (RegionArgs_78)), STATE_VARIABLE_FormalRegionArgTable_0_34, &STATE_VARIABLE_FormalRegionArgTable_1_46);
      }
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_FormalRegionArgTable_0_34 = STATE_VARIABLE_FormalRegionArgTable_1_46;
      STATE_VARIABLE_FormalRegionArgTable_0_34 = next_value_of_STATE_VARIABLE_FormalRegionArgTable_0_34;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_pred_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_FormalRegionArgTable_27;
  MR_Word conv0_STATE_VARIABLE_ActualRegionArgTable_29;

  transform_hlds__rbmm__region_arguments__record_region_arguments_proc_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_FormalRegionArgTable_27, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ActualRegionArgTable_29);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_FormalRegionArgTable_27));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ActualRegionArgTable_29));
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_pred_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word RptaInfoTable_12,
  MR_Word ConstantRTable_13,
  MR_Word DeadRTable_14,
  MR_Word BornRTable_15,
  MR_Word PredId_16,
  MR_Word STATE_VARIABLE_FormalRegionArgTable_0_21,
  MR_Word * STATE_VARIABLE_FormalRegionArgTable_22,
  MR_Word STATE_VARIABLE_ActualRegionArgTable_0_23,
  MR_Word * STATE_VARIABLE_ActualRegionArgTable_24)
{
  MR_Word PredInfo_19;
  MR_Word ProcIds_20;
  MR_Word Var_25;
  MR_Box conv3_STATE_VARIABLE_FormalRegionArgTable_22;
  MR_Box conv2_STATE_VARIABLE_ActualRegionArgTable_24;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_11, PredId_16, &PredInfo_19);
  ProcIds_20 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo_19);
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_4[0]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_actual_region_arguments_pred_10_p_0_1));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 6));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (ModuleInfo_11));
    MR_hl_field(0, Var_25, 4) = ((MR_Box) (PredId_16));
    MR_hl_field(0, Var_25, 5) = ((MR_Box) (RptaInfoTable_12));
    MR_hl_field(0, Var_25, 6) = ((MR_Box) (ConstantRTable_13));
    MR_hl_field(0, Var_25, 7) = ((MR_Box) (DeadRTable_14));
    MR_hl_field(0, Var_25, 8) = ((MR_Box) (BornRTable_15));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[2]), Var_25, ProcIds_20, ((MR_Box) (STATE_VARIABLE_FormalRegionArgTable_0_21)), &conv3_STATE_VARIABLE_FormalRegionArgTable_22, ((MR_Box) (STATE_VARIABLE_ActualRegionArgTable_0_23)), &conv2_STATE_VARIABLE_ActualRegionArgTable_24);
  *STATE_VARIABLE_FormalRegionArgTable_22 = ((MR_Word) (conv3_STATE_VARIABLE_FormalRegionArgTable_22));
  *STATE_VARIABLE_ActualRegionArgTable_24 = ((MR_Word) (conv2_STATE_VARIABLE_ActualRegionArgTable_24));
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_region_arguments_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_FormalRegionArgTable_22;
  MR_Word conv0_STATE_VARIABLE_ActualRegionArgTable_24;

  transform_hlds__rbmm__region_arguments__record_actual_region_arguments_pred_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_FormalRegionArgTable_22, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ActualRegionArgTable_24);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_FormalRegionArgTable_22));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ActualRegionArgTable_24));
}

void MR_CALL 
transform_hlds__rbmm__region_arguments__record_region_arguments_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word RptaInfoTable_9,
  MR_Word ConstantRTable_10,
  MR_Word DeadRTable_11,
  MR_Word BornRTable_12,
  MR_Word * FormalRegionArgTable_13,
  MR_Word * ActualRegionArgTable_14)
{
  MR_Word PredIds_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Box conv3_FormalRegionArgTable_13;
  MR_Box conv2_ActualRegionArgTable_14;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_8, &PredIds_15);
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_3[0]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_region_arguments_7_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (ModuleInfo_8));
    MR_hl_field(0, Var_16, 4) = ((MR_Box) (RptaInfoTable_9));
    MR_hl_field(0, Var_16, 5) = ((MR_Box) (ConstantRTable_10));
    MR_hl_field(0, Var_16, 6) = ((MR_Box) (DeadRTable_11));
    MR_hl_field(0, Var_16, 7) = ((MR_Box) (BornRTable_12));
  }
  Var_17 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0));
  Var_18 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[0]));
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__region_arguments_scalar_common_1[2]), Var_16, PredIds_15, ((MR_Box) (Var_17)), &conv3_FormalRegionArgTable_13, ((MR_Box) (Var_18)), &conv2_ActualRegionArgTable_14);
  *FormalRegionArgTable_13 = ((MR_Word) (conv3_FormalRegionArgTable_13));
  *ActualRegionArgTable_14 = ((MR_Word) (conv2_ActualRegionArgTable_14));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____pp_actual_region_args_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__region_arguments____Unify____pp_actual_region_args_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____pp_actual_region_args_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__region_arguments____Compare____pp_actual_region_args_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____proc_formal_region_args_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__region_arguments____Unify____proc_formal_region_args_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____proc_formal_region_args_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__region_arguments____Compare____proc_formal_region_args_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____proc_pp_actual_region_args_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__region_arguments____Unify____proc_pp_actual_region_args_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____proc_pp_actual_region_args_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__region_arguments____Compare____proc_pp_actual_region_args_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____region_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__region_arguments____Unify____region_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____region_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__region_arguments____Compare____region_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__rbmm__region_arguments__init(void)
{
}

void mercury__transform_hlds__rbmm__region_arguments__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_pp_actual_region_args_table_0);
  MR_register_type_ctor_info(&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_proc_formal_region_args_table_0);
  MR_register_type_ctor_info(&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_proc_pp_actual_region_args_table_0);
  MR_register_type_ctor_info(&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0);
}

void mercury__transform_hlds__rbmm__region_arguments__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__rbmm__region_arguments__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.rbmm.region_arguments.
