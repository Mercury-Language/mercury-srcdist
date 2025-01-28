/*
** Automatically generated from `rbmm.live_region_analysis.m'
** by the Mercury compiler,
** version rotd-2025-01-28
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


// :- module transform_hlds.rbmm.live_region_analysis.
// :- implementation.

/*
INIT mercury__transform_hlds__rbmm__live_region_analysis__init
ENDINIT
*/

#include "transform_hlds.rbmm.live_region_analysis.mih"


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
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
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
#include "parse_tree.module_qual.mq_info.mih"
#include "transform_hlds.rbmm.points_to_graph.mih"
#include "transform_hlds.rbmm.points_to_info.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__live_region_analysis__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__live_region_analysis__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_p_0(
  MR_Word Graph_8,
  MR_Word ModuleInfo_9,
  MR_Word ProcInfo_10,
  MR_Word ProgPoint_11,
  MR_Word LVs_12,
  MR_Word STATE_VARIABLE_ProcLRMap_0_15,
  MR_Word * STATE_VARIABLE_ProcLRMap_16);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0(
  MR_Word ModuleInfo_24,
  MR_Word RptaInfoTable_25,
  MR_Word LVBeforeTable_26,
  MR_Word LVAfterTable_27,
  MR_Word VoidVarTable_28,
  MR_Word PredId_29,
  MR_Integer ProcId_30,
  MR_Word STATE_VARIABLE_LRBeforeTable_0_58,
  MR_Word * STATE_VARIABLE_LRBeforeTable_59,
  MR_Word STATE_VARIABLE_LRAfterTable_0_60,
  MR_Word * STATE_VARIABLE_LRAfterTable_61,
  MR_Word STATE_VARIABLE_VoidVarRegionTable_0_62,
  MR_Word * STATE_VARIABLE_VoidVarRegionTable_63,
  MR_Word STATE_VARIABLE_InputRTable_0_64,
  MR_Word * STATE_VARIABLE_InputRTable_65,
  MR_Word STATE_VARIABLE_OutputRTable_0_66,
  MR_Word * STATE_VARIABLE_OutputRTable_67,
  MR_Word STATE_VARIABLE_BornRTable_0_68,
  MR_Word * STATE_VARIABLE_BornRTable_69,
  MR_Word STATE_VARIABLE_DeadRTable_0_70,
  MR_Word * STATE_VARIABLE_DeadRTable_71,
  MR_Word STATE_VARIABLE_LocalRTable_0_72,
  MR_Word * STATE_VARIABLE_LocalRTable_73);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11,
  MR_Box wrapper_arg_12,
  MR_Box * wrapper_arg_13,
  MR_Box wrapper_arg_14,
  MR_Box * wrapper_arg_15,
  MR_Box wrapper_arg_16,
  MR_Box * wrapper_arg_17);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_p_0(
  MR_Word ModuleInfo_23,
  MR_Word RptaInfoTable_24,
  MR_Word LVBeforeTable_25,
  MR_Word LVAfterTable_26,
  MR_Word VoidVarTable_27,
  MR_Word PredId_28,
  MR_Word STATE_VARIABLE_LRBeforeTable_0_39,
  MR_Word * STATE_VARIABLE_LRBeforeTable_40,
  MR_Word STATE_VARIABLE_LRAfterTable_0_41,
  MR_Word * STATE_VARIABLE_LRAfterTable_42,
  MR_Word STATE_VARIABLE_VoidVarRegionTable_0_43,
  MR_Word * STATE_VARIABLE_VoidVarRegionTable_44,
  MR_Word STATE_VARIABLE_InputRTable_0_45,
  MR_Word * STATE_VARIABLE_InputRTable_46,
  MR_Word STATE_VARIABLE_OutputRTable_0_47,
  MR_Word * STATE_VARIABLE_OutputRTable_48,
  MR_Word STATE_VARIABLE_BornRTable_0_49,
  MR_Word * STATE_VARIABLE_BornRTable_50,
  MR_Word STATE_VARIABLE_DeadRTable_0_51,
  MR_Word * STATE_VARIABLE_DeadRTable_52,
  MR_Word STATE_VARIABLE_LocalRTable_0_53,
  MR_Word * STATE_VARIABLE_LocalRTable_54);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11,
  MR_Box wrapper_arg_12,
  MR_Box * wrapper_arg_13,
  MR_Box wrapper_arg_14,
  MR_Box * wrapper_arg_15,
  MR_Box wrapper_arg_16,
  MR_Box * wrapper_arg_17);


static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_2[4][3];

static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_3[1][25];

static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_4[1][26];

static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_5[1][9];

static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_6[1][10];




static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_2[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[2]))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_3[1][25] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_4[1][26] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 23)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_5[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_6[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&transform_hlds__rbmm__live_region_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__live_region_analysis__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__live_region_analysis__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__live_region_analysis__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__live_region_analysis__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__live_region_analysis__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__live_region_analysis__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__live_region_analysis__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__live_region_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__live_region_analysis__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__6_6;

  transform_hlds__rbmm__points_to_graph__rptg_reach_from_a_variable_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__6_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_p_0(
  MR_Word Graph_8,
  MR_Word ModuleInfo_9,
  MR_Word ProcInfo_10,
  MR_Word ProgPoint_11,
  MR_Word LVs_12,
  MR_Word STATE_VARIABLE_ProcLRMap_0_15,
  MR_Word * STATE_VARIABLE_ProcLRMap_16)
{
  MR_bool succeeded;
  MR_Word LRs_14;

  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[1]), LVs_12);
  if (succeeded)
    mercury__set__init_1_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), &LRs_14);
  else
  {
    MR_Word LRSet0_19;
    MR_Word Var_20;
    MR_Box conv1_LRs_14;

    mercury__set__init_1_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), &LRSet0_19);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_20, 0) = ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_5[0]));
      MR_hl_field(0, Var_20, 1) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_p_0_1));
      MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_20, 3) = ((MR_Box) (Graph_8));
      MR_hl_field(0, Var_20, 4) = ((MR_Box) (ModuleInfo_9));
      MR_hl_field(0, Var_20, 5) = ((MR_Box) (ProcInfo_10));
    }
    mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), Var_20, LVs_12, ((MR_Box) (LRSet0_19)), &conv1_LRs_14);
    LRs_14 = ((MR_Word) (conv1_LRs_14));
  }
  mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), ((MR_Box) (ProgPoint_11)), ((MR_Box) (LRs_14)), STATE_VARIABLE_ProcLRMap_0_15, STATE_VARIABLE_ProcLRMap_16);
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_ProcLRMap_16;

  transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv5_STATE_VARIABLE_ProcLRMap_16);
  *wrapper_arg_4 = ((MR_Box) (conv5_STATE_VARIABLE_ProcLRMap_16));
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__6_6;

  transform_hlds__rbmm__points_to_graph__rptg_reach_from_a_variable_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__6_6);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__6_6));
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__6_6;

  transform_hlds__rbmm__points_to_graph__rptg_reach_from_a_variable_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__6_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0(
  MR_Word ModuleInfo_24,
  MR_Word RptaInfoTable_25,
  MR_Word LVBeforeTable_26,
  MR_Word LVAfterTable_27,
  MR_Word VoidVarTable_28,
  MR_Word PredId_29,
  MR_Integer ProcId_30,
  MR_Word STATE_VARIABLE_LRBeforeTable_0_58,
  MR_Word * STATE_VARIABLE_LRBeforeTable_59,
  MR_Word STATE_VARIABLE_LRAfterTable_0_60,
  MR_Word * STATE_VARIABLE_LRAfterTable_61,
  MR_Word STATE_VARIABLE_VoidVarRegionTable_0_62,
  MR_Word * STATE_VARIABLE_VoidVarRegionTable_63,
  MR_Word STATE_VARIABLE_InputRTable_0_64,
  MR_Word * STATE_VARIABLE_InputRTable_65,
  MR_Word STATE_VARIABLE_OutputRTable_0_66,
  MR_Word * STATE_VARIABLE_OutputRTable_67,
  MR_Word STATE_VARIABLE_BornRTable_0_68,
  MR_Word * STATE_VARIABLE_BornRTable_69,
  MR_Word STATE_VARIABLE_DeadRTable_0_70,
  MR_Word * STATE_VARIABLE_DeadRTable_71,
  MR_Word STATE_VARIABLE_LocalRTable_0_72,
  MR_Word * STATE_VARIABLE_LocalRTable_73)
{
  MR_bool succeeded;
  MR_Word PPId_39;
  MR_Word Var_74;

  {
    PPId_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PPId_39, 0) = ((MR_Box) (PredId_29));
    MR_hl_field(0, PPId_39, 1) = ((MR_Box) (ProcId_30));
  }
  {
    Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_74, 0) = ((MR_Box) (PPId_39));
    MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(Var_74, ModuleInfo_24);
  if (succeeded)
  {
    *STATE_VARIABLE_LocalRTable_73 = STATE_VARIABLE_LocalRTable_0_72;
    *STATE_VARIABLE_DeadRTable_71 = STATE_VARIABLE_DeadRTable_0_70;
    *STATE_VARIABLE_BornRTable_69 = STATE_VARIABLE_BornRTable_0_68;
    *STATE_VARIABLE_OutputRTable_67 = STATE_VARIABLE_OutputRTable_0_66;
    *STATE_VARIABLE_InputRTable_65 = STATE_VARIABLE_InputRTable_0_64;
    *STATE_VARIABLE_VoidVarRegionTable_63 = STATE_VARIABLE_VoidVarRegionTable_0_62;
    *STATE_VARIABLE_LRAfterTable_61 = STATE_VARIABLE_LRAfterTable_0_60;
    *STATE_VARIABLE_LRBeforeTable_59 = STATE_VARIABLE_LRBeforeTable_0_58;
  }
  else
  {
    MR_Word RptaInfo_40;

    succeeded = transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_3_p_0(RptaInfoTable_25, PPId_39, &RptaInfo_40);
    if (succeeded)
    {
      MR_Word Graph_41 = ((MR_Word) ((MR_hl_field(0, RptaInfo_40, (MR_Integer) 0))));
      MR_Word ProcInfo_43;
      MR_Word Inputs_44;
      MR_Word Outputs_45;
      MR_Word InputR_46;
      MR_Word OutputR_47;
      MR_Word BornR_48;
      MR_Word DeadR_49;
      MR_Word Nodes_50;
      MR_Word LocalR_51;
      MR_Word ProcLVBefore_52;
      MR_Word ProcLRBefore_53;
      MR_Word ProcLVAfter_54;
      MR_Word ProcLRAfter_55;
      MR_Word ProcVoidVar_56;
      MR_Word ProcVoidVarRegion_57;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_89;
      MR_Word Var_92;
      MR_Box conv4_ProcLVBefore_52;
      MR_Box conv6_ProcLRBefore_53;
      MR_Box conv7_ProcLVAfter_54;
      MR_Box conv8_ProcLRAfter_55;
      MR_Box conv9_ProcVoidVar_56;
      MR_Box conv10_ProcVoidVarRegion_57;

      hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_24, PPId_39, &ProcInfo_43);
      transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_p_0(ModuleInfo_24, ProcInfo_43, &Inputs_44, &Outputs_45);
      Var_76 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[1]), Inputs_44);
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[1]), Var_76);
      if (succeeded)
        mercury__set__init_1_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), &InputR_46);
      else
      {
        MR_Word LRSet0_108;
        MR_Word Var_109;
        MR_Box conv1_InputR_46;

        mercury__set__init_1_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), &LRSet0_108);
        {
          Var_109 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_109, 0) = ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_5[0]));
          MR_hl_field(0, Var_109, 1) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0_1));
          MR_hl_field(0, Var_109, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_109, 3) = ((MR_Box) (Graph_41));
          MR_hl_field(0, Var_109, 4) = ((MR_Box) (ModuleInfo_24));
          MR_hl_field(0, Var_109, 5) = ((MR_Box) (ProcInfo_43));
        }
        mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), Var_109, Var_76, ((MR_Box) (LRSet0_108)), &conv1_InputR_46);
        InputR_46 = ((MR_Word) (conv1_InputR_46));
      }
      Var_77 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[1]), Outputs_45);
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[1]), Var_77);
      if (succeeded)
        mercury__set__init_1_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), &OutputR_47);
      else
      {
        MR_Word LRSet0_115;
        MR_Word Var_116;
        MR_Box conv3_OutputR_47;

        mercury__set__init_1_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), &LRSet0_115);
        {
          Var_116 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_116, 0) = ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_5[0]));
          MR_hl_field(0, Var_116, 1) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0_2));
          MR_hl_field(0, Var_116, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_116, 3) = ((MR_Box) (Graph_41));
          MR_hl_field(0, Var_116, 4) = ((MR_Box) (ModuleInfo_24));
          MR_hl_field(0, Var_116, 5) = ((MR_Box) (ProcInfo_43));
        }
        mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), Var_116, Var_77, ((MR_Box) (LRSet0_115)), &conv3_OutputR_47);
        OutputR_47 = ((MR_Word) (conv3_OutputR_47));
      }
      mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), ((MR_Box) (PPId_39)), ((MR_Box) (InputR_46)), STATE_VARIABLE_InputRTable_0_64, STATE_VARIABLE_InputRTable_65);
      mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), ((MR_Box) (PPId_39)), ((MR_Box) (OutputR_47)), STATE_VARIABLE_OutputRTable_0_66, STATE_VARIABLE_OutputRTable_67);
      mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), OutputR_47, InputR_46, &BornR_48);
      mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), ((MR_Box) (PPId_39)), ((MR_Box) (BornR_48)), STATE_VARIABLE_BornRTable_0_68, STATE_VARIABLE_BornRTable_69);
      mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), InputR_46, OutputR_47, &DeadR_49);
      mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), ((MR_Box) (PPId_39)), ((MR_Box) (DeadR_49)), STATE_VARIABLE_DeadRTable_0_70, STATE_VARIABLE_DeadRTable_71);
      Nodes_50 = transform_hlds__rbmm__points_to_graph__rptg_get_nodes_as_list_1_f_0(Graph_41);
      Var_83 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Nodes_50);
      Var_82 = mercury__set__difference_2_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Var_83, InputR_46);
      mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Var_82, OutputR_47, &LocalR_51);
      mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), ((MR_Box) (PPId_39)), ((MR_Box) (LocalR_51)), STATE_VARIABLE_LocalRTable_0_72, STATE_VARIABLE_LocalRTable_73);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[3]), LVBeforeTable_26, ((MR_Box) (PPId_39)), &conv4_ProcLVBefore_52);
      ProcLVBefore_52 = ((MR_Word) (conv4_ProcLVBefore_52));
      {
        Var_85 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_85, 0) = ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_6[0]));
        MR_hl_field(0, Var_85, 1) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0_3));
        MR_hl_field(0, Var_85, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_85, 3) = ((MR_Box) (Graph_41));
        MR_hl_field(0, Var_85, 4) = ((MR_Box) (ModuleInfo_24));
        MR_hl_field(0, Var_85, 5) = ((MR_Box) (ProcInfo_43));
      }
      Var_86 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]));
      mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[2]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[0]), Var_85, ProcLVBefore_52, ((MR_Box) (Var_86)), &conv6_ProcLRBefore_53);
      ProcLRBefore_53 = ((MR_Word) (conv6_ProcLRBefore_53));
      mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[0]), ((MR_Box) (PPId_39)), ((MR_Box) (ProcLRBefore_53)), STATE_VARIABLE_LRBeforeTable_0_58, STATE_VARIABLE_LRBeforeTable_59);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[3]), LVAfterTable_27, ((MR_Box) (PPId_39)), &conv7_ProcLVAfter_54);
      ProcLVAfter_54 = ((MR_Word) (conv7_ProcLVAfter_54));
      Var_89 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]));
      mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[2]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[0]), Var_85, ProcLVAfter_54, ((MR_Box) (Var_89)), &conv8_ProcLRAfter_55);
      ProcLRAfter_55 = ((MR_Word) (conv8_ProcLRAfter_55));
      mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[0]), ((MR_Box) (PPId_39)), ((MR_Box) (ProcLRAfter_55)), STATE_VARIABLE_LRAfterTable_0_60, STATE_VARIABLE_LRAfterTable_61);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[3]), VoidVarTable_28, ((MR_Box) (PPId_39)), &conv9_ProcVoidVar_56);
      ProcVoidVar_56 = ((MR_Word) (conv9_ProcVoidVar_56));
      Var_92 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]));
      mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[2]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[0]), Var_85, ProcVoidVar_56, ((MR_Box) (Var_92)), &conv10_ProcVoidVarRegion_57);
      ProcVoidVarRegion_57 = ((MR_Word) (conv10_ProcVoidVarRegion_57));
      mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[0]), ((MR_Box) (PPId_39)), ((MR_Box) (ProcVoidVarRegion_57)), STATE_VARIABLE_VoidVarRegionTable_0_62, STATE_VARIABLE_VoidVarRegionTable_63);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.live_region_analysis.live_region_analysis_proc\'/23", (MR_String) "no rpta_info");
        return;
      }
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11,
  MR_Box wrapper_arg_12,
  MR_Box * wrapper_arg_13,
  MR_Box wrapper_arg_14,
  MR_Box * wrapper_arg_15,
  MR_Box wrapper_arg_16,
  MR_Box * wrapper_arg_17)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_LRBeforeTable_59;
  MR_Word conv6_STATE_VARIABLE_LRAfterTable_61;
  MR_Word conv5_STATE_VARIABLE_VoidVarRegionTable_63;
  MR_Word conv4_STATE_VARIABLE_InputRTable_65;
  MR_Word conv3_STATE_VARIABLE_OutputRTable_67;
  MR_Word conv2_STATE_VARIABLE_BornRTable_69;
  MR_Word conv1_STATE_VARIABLE_DeadRTable_71;
  MR_Word conv0_STATE_VARIABLE_LocalRTable_73;

  transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_LRBeforeTable_59, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_LRAfterTable_61, ((MR_Word) (wrapper_arg_6)), &conv5_STATE_VARIABLE_VoidVarRegionTable_63, ((MR_Word) (wrapper_arg_8)), &conv4_STATE_VARIABLE_InputRTable_65, ((MR_Word) (wrapper_arg_10)), &conv3_STATE_VARIABLE_OutputRTable_67, ((MR_Word) (wrapper_arg_12)), &conv2_STATE_VARIABLE_BornRTable_69, ((MR_Word) (wrapper_arg_14)), &conv1_STATE_VARIABLE_DeadRTable_71, ((MR_Word) (wrapper_arg_16)), &conv0_STATE_VARIABLE_LocalRTable_73);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_LRBeforeTable_59));
  *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_LRAfterTable_61));
  *wrapper_arg_7 = ((MR_Box) (conv5_STATE_VARIABLE_VoidVarRegionTable_63));
  *wrapper_arg_9 = ((MR_Box) (conv4_STATE_VARIABLE_InputRTable_65));
  *wrapper_arg_11 = ((MR_Box) (conv3_STATE_VARIABLE_OutputRTable_67));
  *wrapper_arg_13 = ((MR_Box) (conv2_STATE_VARIABLE_BornRTable_69));
  *wrapper_arg_15 = ((MR_Box) (conv1_STATE_VARIABLE_DeadRTable_71));
  *wrapper_arg_17 = ((MR_Box) (conv0_STATE_VARIABLE_LocalRTable_73));
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_p_0(
  MR_Word ModuleInfo_23,
  MR_Word RptaInfoTable_24,
  MR_Word LVBeforeTable_25,
  MR_Word LVAfterTable_26,
  MR_Word VoidVarTable_27,
  MR_Word PredId_28,
  MR_Word STATE_VARIABLE_LRBeforeTable_0_39,
  MR_Word * STATE_VARIABLE_LRBeforeTable_40,
  MR_Word STATE_VARIABLE_LRAfterTable_0_41,
  MR_Word * STATE_VARIABLE_LRAfterTable_42,
  MR_Word STATE_VARIABLE_VoidVarRegionTable_0_43,
  MR_Word * STATE_VARIABLE_VoidVarRegionTable_44,
  MR_Word STATE_VARIABLE_InputRTable_0_45,
  MR_Word * STATE_VARIABLE_InputRTable_46,
  MR_Word STATE_VARIABLE_OutputRTable_0_47,
  MR_Word * STATE_VARIABLE_OutputRTable_48,
  MR_Word STATE_VARIABLE_BornRTable_0_49,
  MR_Word * STATE_VARIABLE_BornRTable_50,
  MR_Word STATE_VARIABLE_DeadRTable_0_51,
  MR_Word * STATE_VARIABLE_DeadRTable_52,
  MR_Word STATE_VARIABLE_LocalRTable_0_53,
  MR_Word * STATE_VARIABLE_LocalRTable_54)
{
  MR_Word PredInfo_37;
  MR_Word ProcIds_38;
  MR_Word Var_55;
  MR_Box conv15_STATE_VARIABLE_LRBeforeTable_40;
  MR_Box conv14_STATE_VARIABLE_LRAfterTable_42;
  MR_Box conv13_STATE_VARIABLE_VoidVarRegionTable_44;
  MR_Box conv12_STATE_VARIABLE_InputRTable_46;
  MR_Box conv11_STATE_VARIABLE_OutputRTable_48;
  MR_Box conv10_STATE_VARIABLE_BornRTable_50;
  MR_Box conv9_STATE_VARIABLE_DeadRTable_52;
  MR_Box conv8_STATE_VARIABLE_LocalRTable_54;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_23, PredId_28, &PredInfo_37);
  ProcIds_38 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo_37);
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_4[0]));
    MR_hl_field(0, Var_55, 1) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_p_0_1));
    MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 6));
    MR_hl_field(0, Var_55, 3) = ((MR_Box) (ModuleInfo_23));
    MR_hl_field(0, Var_55, 4) = ((MR_Box) (RptaInfoTable_24));
    MR_hl_field(0, Var_55, 5) = ((MR_Box) (LVBeforeTable_25));
    MR_hl_field(0, Var_55, 6) = ((MR_Box) (LVAfterTable_26));
    MR_hl_field(0, Var_55, 7) = ((MR_Box) (VoidVarTable_27));
    MR_hl_field(0, Var_55, 8) = ((MR_Box) (PredId_28));
  }
  mercury__list__foldl8_18_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[1]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[1]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[1]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[2]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[2]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[2]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[2]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[2]), Var_55, ProcIds_38, ((MR_Box) (STATE_VARIABLE_LRBeforeTable_0_39)), &conv15_STATE_VARIABLE_LRBeforeTable_40, ((MR_Box) (STATE_VARIABLE_LRAfterTable_0_41)), &conv14_STATE_VARIABLE_LRAfterTable_42, ((MR_Box) (STATE_VARIABLE_VoidVarRegionTable_0_43)), &conv13_STATE_VARIABLE_VoidVarRegionTable_44, ((MR_Box) (STATE_VARIABLE_InputRTable_0_45)), &conv12_STATE_VARIABLE_InputRTable_46, ((MR_Box) (STATE_VARIABLE_OutputRTable_0_47)), &conv11_STATE_VARIABLE_OutputRTable_48, ((MR_Box) (STATE_VARIABLE_BornRTable_0_49)), &conv10_STATE_VARIABLE_BornRTable_50, ((MR_Box) (STATE_VARIABLE_DeadRTable_0_51)), &conv9_STATE_VARIABLE_DeadRTable_52, ((MR_Box) (STATE_VARIABLE_LocalRTable_0_53)), &conv8_STATE_VARIABLE_LocalRTable_54);
  *STATE_VARIABLE_LRBeforeTable_40 = ((MR_Word) (conv15_STATE_VARIABLE_LRBeforeTable_40));
  *STATE_VARIABLE_LRAfterTable_42 = ((MR_Word) (conv14_STATE_VARIABLE_LRAfterTable_42));
  *STATE_VARIABLE_VoidVarRegionTable_44 = ((MR_Word) (conv13_STATE_VARIABLE_VoidVarRegionTable_44));
  *STATE_VARIABLE_InputRTable_46 = ((MR_Word) (conv12_STATE_VARIABLE_InputRTable_46));
  *STATE_VARIABLE_OutputRTable_48 = ((MR_Word) (conv11_STATE_VARIABLE_OutputRTable_48));
  *STATE_VARIABLE_BornRTable_50 = ((MR_Word) (conv10_STATE_VARIABLE_BornRTable_50));
  *STATE_VARIABLE_DeadRTable_52 = ((MR_Word) (conv9_STATE_VARIABLE_DeadRTable_52));
  *STATE_VARIABLE_LocalRTable_54 = ((MR_Word) (conv8_STATE_VARIABLE_LocalRTable_54));
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11,
  MR_Box wrapper_arg_12,
  MR_Box * wrapper_arg_13,
  MR_Box wrapper_arg_14,
  MR_Box * wrapper_arg_15,
  MR_Box wrapper_arg_16,
  MR_Box * wrapper_arg_17)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_LRBeforeTable_40;
  MR_Word conv6_STATE_VARIABLE_LRAfterTable_42;
  MR_Word conv5_STATE_VARIABLE_VoidVarRegionTable_44;
  MR_Word conv4_STATE_VARIABLE_InputRTable_46;
  MR_Word conv3_STATE_VARIABLE_OutputRTable_48;
  MR_Word conv2_STATE_VARIABLE_BornRTable_50;
  MR_Word conv1_STATE_VARIABLE_DeadRTable_52;
  MR_Word conv0_STATE_VARIABLE_LocalRTable_54;

  transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_LRBeforeTable_40, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_LRAfterTable_42, ((MR_Word) (wrapper_arg_6)), &conv5_STATE_VARIABLE_VoidVarRegionTable_44, ((MR_Word) (wrapper_arg_8)), &conv4_STATE_VARIABLE_InputRTable_46, ((MR_Word) (wrapper_arg_10)), &conv3_STATE_VARIABLE_OutputRTable_48, ((MR_Word) (wrapper_arg_12)), &conv2_STATE_VARIABLE_BornRTable_50, ((MR_Word) (wrapper_arg_14)), &conv1_STATE_VARIABLE_DeadRTable_52, ((MR_Word) (wrapper_arg_16)), &conv0_STATE_VARIABLE_LocalRTable_54);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_LRBeforeTable_40));
  *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_LRAfterTable_42));
  *wrapper_arg_7 = ((MR_Box) (conv5_STATE_VARIABLE_VoidVarRegionTable_44));
  *wrapper_arg_9 = ((MR_Box) (conv4_STATE_VARIABLE_InputRTable_46));
  *wrapper_arg_11 = ((MR_Box) (conv3_STATE_VARIABLE_OutputRTable_48));
  *wrapper_arg_13 = ((MR_Box) (conv2_STATE_VARIABLE_BornRTable_50));
  *wrapper_arg_15 = ((MR_Box) (conv1_STATE_VARIABLE_DeadRTable_52));
  *wrapper_arg_17 = ((MR_Box) (conv0_STATE_VARIABLE_LocalRTable_54));
}

void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word RptaInfoTable_15,
  MR_Word LVBeforeTable_16,
  MR_Word LVAfterTable_17,
  MR_Word VoidVarTable_18,
  MR_Word * LRBeforeTable_19,
  MR_Word * LRAfterTable_20,
  MR_Word * VoidVarRegionTable_21,
  MR_Word * InputRTable_22,
  MR_Word * OutputRTable_23,
  MR_Word * BornRTable_24,
  MR_Word * DeadRTable_25,
  MR_Word * LocalRTable_26)
{
  MR_Word PredIds_27;
  MR_Word LRBeforeTable0_28;
  MR_Word LRAfterTable0_29;
  MR_Word VoidVarRegionTable0_30;
  MR_Word InputRTable0_31;
  MR_Word OutputRTable0_32;
  MR_Word BornRTable0_33;
  MR_Word DeadRTable0_34;
  MR_Word LocalRTable0_35;
  MR_Word Var_36;
  MR_Box conv15_LRBeforeTable_19;
  MR_Box conv14_LRAfterTable_20;
  MR_Box conv13_VoidVarRegionTable_21;
  MR_Box conv12_InputRTable_22;
  MR_Box conv11_OutputRTable_23;
  MR_Box conv10_BornRTable_24;
  MR_Box conv9_DeadRTable_25;
  MR_Box conv8_LocalRTable_26;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_14, &PredIds_27);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[0]), &LRBeforeTable0_28);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[0]), &LRAfterTable0_29);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[0]), &VoidVarRegionTable0_30);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), &InputRTable0_31);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), &OutputRTable0_32);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), &BornRTable0_33);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), &DeadRTable0_34);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), &LocalRTable0_35);
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_3[0]));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_p_0_1));
    MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_36, 3) = ((MR_Box) (ModuleInfo_14));
    MR_hl_field(0, Var_36, 4) = ((MR_Box) (RptaInfoTable_15));
    MR_hl_field(0, Var_36, 5) = ((MR_Box) (LVBeforeTable_16));
    MR_hl_field(0, Var_36, 6) = ((MR_Box) (LVAfterTable_17));
    MR_hl_field(0, Var_36, 7) = ((MR_Box) (VoidVarTable_18));
  }
  mercury__list__foldl8_18_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[1]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[1]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[1]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[2]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[2]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[2]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[2]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[2]), Var_36, PredIds_27, ((MR_Box) (LRBeforeTable0_28)), &conv15_LRBeforeTable_19, ((MR_Box) (LRAfterTable0_29)), &conv14_LRAfterTable_20, ((MR_Box) (VoidVarRegionTable0_30)), &conv13_VoidVarRegionTable_21, ((MR_Box) (InputRTable0_31)), &conv12_InputRTable_22, ((MR_Box) (OutputRTable0_32)), &conv11_OutputRTable_23, ((MR_Box) (BornRTable0_33)), &conv10_BornRTable_24, ((MR_Box) (DeadRTable0_34)), &conv9_DeadRTable_25, ((MR_Box) (LocalRTable0_35)), &conv8_LocalRTable_26);
  *LRBeforeTable_19 = ((MR_Word) (conv15_LRBeforeTable_19));
  *LRAfterTable_20 = ((MR_Word) (conv14_LRAfterTable_20));
  *VoidVarRegionTable_21 = ((MR_Word) (conv13_VoidVarRegionTable_21));
  *InputRTable_22 = ((MR_Word) (conv12_InputRTable_22));
  *OutputRTable_23 = ((MR_Word) (conv11_OutputRTable_23));
  *BornRTable_24 = ((MR_Word) (conv10_BornRTable_24));
  *DeadRTable_25 = ((MR_Word) (conv9_DeadRTable_25));
  *LocalRTable_26 = ((MR_Word) (conv8_LocalRTable_26));
}

void mercury__transform_hlds__rbmm__live_region_analysis__init(void)
{
}

void mercury__transform_hlds__rbmm__live_region_analysis__init_type_tables(void)
{
}

void mercury__transform_hlds__rbmm__live_region_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__rbmm__live_region_analysis__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.rbmm.live_region_analysis.
