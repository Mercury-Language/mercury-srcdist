/*
** Automatically generated from `rbmm.add_rbmm_goal_infos.m'
** by the Mercury compiler,
** version rotd-2022-04-30
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


// :- module transform_hlds.rbmm.add_rbmm_goal_infos.
// :- implementation.

/*
INIT mercury__transform_hlds__rbmm__add_rbmm_goal_infos__init
ENDINIT
*/

#include "transform_hlds.rbmm.add_rbmm_goal_infos.mih"


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
#include "hlds.pred_table.mih"
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
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
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
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.rbmm.condition_renaming.mih"
#include "transform_hlds.rbmm.execution_path.mih"
#include "transform_hlds.rbmm.interproc_region_lifetime.mih"
#include "transform_hlds.rbmm.live_region_analysis.mih"
#include "transform_hlds.rbmm.live_variable_analysis.mih"
#include "transform_hlds.rbmm.points_to_analysis.mih"
#include "transform_hlds.rbmm.points_to_graph.mih"
#include "transform_hlds.rbmm.points_to_info.mih"
#include "transform_hlds.rbmm.region_arguments.mih"
#include "transform_hlds.rbmm.region_instruction.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"
#include "transform_hlds.rbmm.region_resurrection_renaming.mih"
#include "transform_hlds.rbmm.region_transformation.mih"




static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__add_rbmm_goal_infos__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__add_rbmm_goal_infos__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__add_rbmm_goal_infos__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__add_rbmm_goal_infos__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__IntroducedFrom__pred__collect_rbmm_goal_info_goal_expr__297__1_3_p_0(
  MR_Word LambdaHeadVar__1_165,
  MR_Word LambdaHeadVar__2_166,
  MR_Word * LambdaHeadVar__3_167);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_case_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ProcInfo_11,
  MR_Word Graph_12,
  MR_Word ActualRegionsArgsProc_13,
  MR_Word ResurRenamingProc_14,
  MR_Word IteRenamingProc_15,
  MR_Word NameToRegionVar_16,
  MR_Word STATE_VARIABLE_Case_0_22,
  MR_Word * STATE_VARIABLE_Case_23);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_proc_8_p_0(
  MR_Word RptaInfoTable_9,
  MR_Word ResurRenamingTable_10,
  MR_Word IteRenamingTable_11,
  MR_Word NameToRegionVarTable_12,
  MR_Word PPId_13,
  MR_Word ActualRegionsArgsProc_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word ProcInfo_13,
  MR_Word Graph_14,
  MR_Word ActualRegionsArgsProc_15,
  MR_Word ResurRenamingProc_16,
  MR_Word IteRenamingProc_17,
  MR_Word NameToRegionVar_18,
  MR_Word STATE_VARIABLE_Expr_0_134,
  MR_Word * STATE_VARIABLE_Expr_135,
  MR_Word STATE_VARIABLE_Info_0_136,
  MR_Word * STATE_VARIABLE_Info_137);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ProcInfo_11,
  MR_Word Graph_12,
  MR_Word ActualRegionsArgsProc_13,
  MR_Word ResurRenamingProc_14,
  MR_Word IteRenamingProc_15,
  MR_Word NameToRegionVar_16,
  MR_Word STATE_VARIABLE_Goal_0_22,
  MR_Word * STATE_VARIABLE_Goal_23);

static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__is_create_region_call_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_10,
  MR_Word * CreatedRegion_11);

static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__is_remove_region_call_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_10,
  MR_Word * RemovedRegion_11);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_unification_8_p_0(
  MR_Word Unification_9,
  MR_Word ModuleInfo_10,
  MR_Word Graph_11,
  MR_Word ResurRenaming_12,
  MR_Word IteRenaming_13,
  MR_Word RegionNameToVar_14,
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RbmmInfo_0_2,
  MR_Word * STATE_VARIABLE_RbmmInfo_3);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_conjunction_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RbmmInfo_0_2,
  MR_Word * STATE_VARIABLE_RbmmInfo_3);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__keep_allocated_regions_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word Graph_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);


static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[5][3];

static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[3][2];

static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_3[1][11];

static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_4[2][12];

static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_5[1][5];

static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_6[1][6];




static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_3[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_4[2][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_6[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__add_rbmm_goal_infos__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__add_rbmm_goal_infos__list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__add_rbmm_goal_infos__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__add_rbmm_goal_infos__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__add_rbmm_goal_infos__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__add_rbmm_goal_infos__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__add_rbmm_goal_infos__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__add_rbmm_goal_infos__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__IntroducedFrom__pred__collect_rbmm_goal_info_goal_expr__297__1_3_p_0(
  MR_Word LambdaHeadVar__1_165,
  MR_Word LambdaHeadVar__2_166,
  MR_Word * LambdaHeadVar__3_167)
{
  MR_Word G_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_165, (MR_Integer) 2))));

  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *LambdaHeadVar__3_167 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (G_100));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LambdaHeadVar__2_166));
  }
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_case_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ProcInfo_11,
  MR_Word Graph_12,
  MR_Word ActualRegionsArgsProc_13,
  MR_Word ResurRenamingProc_14,
  MR_Word IteRenamingProc_15,
  MR_Word NameToRegionVar_16,
  MR_Word STATE_VARIABLE_Case_0_22,
  MR_Word * STATE_VARIABLE_Case_23)
{
  MR_Word MainConsId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_22, (MR_Integer) 0))));
  MR_Word OtherConsIds_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_22, (MR_Integer) 1))));
  MR_Word Goal0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_22, (MR_Integer) 2))));
  MR_Word Goal_21;
  MR_Word Expr0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_20, (MR_Integer) 0))));
  MR_Word Info0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_20, (MR_Integer) 1))));
  MR_Word Expr_26;
  MR_Word Info_27;

  transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0(ModuleInfo_10, ProcInfo_11, Graph_12, ActualRegionsArgsProc_13, ResurRenamingProc_14, IteRenamingProc_15, NameToRegionVar_16, Expr0_24, &Expr_26, Info0_25, &Info_27);
  {
    Goal_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Goal_21, 0) = ((MR_Box) (Expr_26));
    MR_hl_field(MR_mktag(0), Goal_21, 1) = ((MR_Box) (Info_27));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Case_23 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_18));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_19));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_21));
  }
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_proc_8_p_0(
  MR_Word RptaInfoTable_9,
  MR_Word ResurRenamingTable_10,
  MR_Word IteRenamingTable_11,
  MR_Word NameToRegionVarTable_12,
  MR_Word PPId_13,
  MR_Word ActualRegionsArgsProc_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30)
{
  MR_bool succeeded;
  MR_Word PredInfo_16;
  MR_Word ProcInfo0_17;
  MR_Word Body0_18;
  MR_Word RptaInfo_19;
  MR_Word Graph_20;
  MR_Word ResurRenamingProc_23;
  MR_Word IteRenamingProc_25;
  MR_Word NameToRegionVar_26;
  MR_Word Body_27;
  MR_Word ProcInfo_28;
  MR_Word Expr0_41;
  MR_Word Info0_42;
  MR_Word Expr_43;
  MR_Word Info_44;
  MR_Box conv0_RptaInfo_19;
  MR_Word ResurRenamingProc0_22;
  MR_Box conv1_ResurRenamingProc0_22;
  MR_Word IteRenamingProc0_24;
  MR_Box conv2_IteRenamingProc0_24;
  MR_Box conv3_NameToRegionVar_26;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_29, PPId_13, &PredInfo_16, &ProcInfo0_17);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_17, &Body0_18);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), RptaInfoTable_9, ((MR_Box) (PPId_13)), &conv0_RptaInfo_19);
  RptaInfo_19 = ((MR_Word) (conv0_RptaInfo_19));
  Graph_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RptaInfo_19, (MR_Integer) 0))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[2]), ResurRenamingTable_10, ((MR_Box) (PPId_13)), &conv1_ResurRenamingProc0_22);
  if (succeeded)
  {
    ResurRenamingProc0_22 = ((MR_Word) (conv1_ResurRenamingProc0_22));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    ResurRenamingProc_23 = ResurRenamingProc0_22;
  else
    ResurRenamingProc_23 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[1]));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[2]), IteRenamingTable_11, ((MR_Box) (PPId_13)), &conv2_IteRenamingProc0_24);
  if (succeeded)
  {
    IteRenamingProc0_24 = ((MR_Word) (conv2_IteRenamingProc0_24));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    IteRenamingProc_25 = IteRenamingProc0_24;
  else
    IteRenamingProc_25 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[1]));
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[3]), NameToRegionVarTable_12, ((MR_Box) (PPId_13)), &conv3_NameToRegionVar_26);
  NameToRegionVar_26 = ((MR_Word) (conv3_NameToRegionVar_26));
  Expr0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Body0_18, (MR_Integer) 0))));
  Info0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Body0_18, (MR_Integer) 1))));
  transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0(STATE_VARIABLE_ModuleInfo_0_29, ProcInfo0_17, Graph_20, ActualRegionsArgsProc_14, ResurRenamingProc_23, IteRenamingProc_25, NameToRegionVar_26, Expr0_41, &Expr_43, Info0_42, &Info_44);
  {
    Body_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Body_27, 0) = ((MR_Box) (Expr_43));
    MR_hl_field(MR_mktag(0), Body_27, 1) = ((MR_Box) (Info_44));
  }
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Body_27, ProcInfo0_17, &ProcInfo_28);
  hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PPId_13, PredInfo_16, ProcInfo_28, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30);
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__3_167;

  transform_hlds__rbmm__add_rbmm_goal_infos__IntroducedFrom__pred__collect_rbmm_goal_info_goal_expr__297__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_LambdaHeadVar__3_167);
  *wrapper_arg_3 = ((MR_Box) (conv4_LambdaHeadVar__3_167));
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Case_23;

  transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_case_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), &conv3_STATE_VARIABLE_Case_23);
  *wrapper_arg_2 = ((MR_Box) (conv3_STATE_VARIABLE_Case_23));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__type_util__is_region_var_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Goal_23;

  transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Goal_23);
  *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Goal_23));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__type_util__is_region_var_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Goal_23;

  transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Goal_23);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Goal_23));
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word ProcInfo_13,
  MR_Word Graph_14,
  MR_Word ActualRegionsArgsProc_15,
  MR_Word ResurRenamingProc_16,
  MR_Word IteRenamingProc_17,
  MR_Word NameToRegionVar_18,
  MR_Word STATE_VARIABLE_Expr_0_134,
  MR_Word * STATE_VARIABLE_Expr_135,
  MR_Word STATE_VARIABLE_Info_0_136,
  MR_Word * STATE_VARIABLE_Info_137)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) STATE_VARIABLE_Expr_0_134)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Info_20;
        MR_Word Goal0_103 = (MR_Word) ((MR_Word) (STATE_VARIABLE_Expr_0_134));
        MR_Word Var_157;
        MR_Word RbmmInfo_254;
        MR_Word Goal_255;

        transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(ModuleInfo_12, ProcInfo_13, Graph_14, ActualRegionsArgsProc_15, ResurRenamingProc_16, IteRenamingProc_17, NameToRegionVar_18, Goal0_103, &Goal_255);
        *STATE_VARIABLE_Expr_135 = (MR_Word) ((MR_Word) (Goal_255));
        Info_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_255, (MR_Integer) 1))));
        RbmmInfo_254 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(Info_20);
        {
          Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) (RbmmInfo_254));
        }
        hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_157, STATE_VARIABLE_Info_0_136, STATE_VARIABLE_Info_137);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unification_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Expr_0_134, (MR_Integer) 3))));
        MR_Word ProgPoint_26;
        MR_Word ResurRenaming_28;
        MR_Word IteRenaming_30;
        MR_Word ResurRenaming0_27;
        MR_Box conv6_ResurRenaming0_27;
        MR_Word IteRenaming0_29;
        MR_Box conv7_IteRenaming0_29;

        ProgPoint_26 = transform_hlds__smm_common__program_point_init_1_f_0(STATE_VARIABLE_Info_0_136);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[1]), ResurRenamingProc_16, ((MR_Box) (ProgPoint_26)), &conv6_ResurRenaming0_27);
        if (succeeded)
        {
          ResurRenaming0_27 = ((MR_Word) (conv6_ResurRenaming0_27));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          ResurRenaming_28 = ResurRenaming0_27;
        else
          ResurRenaming_28 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[0]));
        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[1]), IteRenamingProc_17, ((MR_Box) (ProgPoint_26)), &conv7_IteRenaming0_29);
        if (succeeded)
        {
          IteRenaming0_29 = ((MR_Word) (conv7_IteRenaming0_29));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          IteRenaming_30 = IteRenaming0_29;
        else
          IteRenaming_30 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[0]));
        transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_unification_8_p_0(Unification_24, ModuleInfo_12, Graph_14, ResurRenaming_28, IteRenaming_30, NameToRegionVar_18, STATE_VARIABLE_Info_0_136, STATE_VARIABLE_Info_137);
        *STATE_VARIABLE_Expr_135 = STATE_VARIABLE_Expr_0_134;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_Expr_0_134, (MR_Integer) 0))));
        MR_Integer ProcId_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_Expr_0_134, (MR_Integer) 1))));
        MR_Word Args_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_Expr_0_134, (MR_Integer) 2))));
        MR_Word CalleePPId_37;
        MR_Word CreatedRegion_38;

        {
          CalleePPId_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CalleePPId_37, 0) = ((MR_Box) (PredId_31));
          MR_hl_field(MR_mktag(0), CalleePPId_37, 1) = ((MR_Box) (ProcId_32));
        }
        succeeded = transform_hlds__rbmm__add_rbmm_goal_infos__is_create_region_call_3_p_0(STATE_VARIABLE_Expr_0_134, ModuleInfo_12, &CreatedRegion_38);
        if (succeeded)
        {
          MR_Word RbmmGoalInfo_39;
          MR_Word Var_189;
          MR_Word Var_190;
          MR_Word Var_191;
          MR_Word Var_192;
          MR_Word Var_193;
          MR_Word Var_194;

          Var_189 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), ((MR_Box) (CreatedRegion_38)));
          Var_190 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
          Var_191 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
          Var_192 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
          Var_193 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
          {
            RbmmGoalInfo_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), RbmmGoalInfo_39, 0) = ((MR_Box) (Var_189));
            MR_hl_field(MR_mktag(0), RbmmGoalInfo_39, 1) = ((MR_Box) (Var_190));
            MR_hl_field(MR_mktag(0), RbmmGoalInfo_39, 2) = ((MR_Box) (Var_191));
            MR_hl_field(MR_mktag(0), RbmmGoalInfo_39, 3) = ((MR_Box) (Var_192));
            MR_hl_field(MR_mktag(0), RbmmGoalInfo_39, 4) = ((MR_Box) (Var_193));
          }
          {
            Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_194, 0) = ((MR_Box) (RbmmGoalInfo_39));
          }
          hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_194, STATE_VARIABLE_Info_0_136, STATE_VARIABLE_Info_137);
        }
        else
        {
          MR_Word RemovedRegion_40;

          succeeded = transform_hlds__rbmm__add_rbmm_goal_infos__is_remove_region_call_3_p_0(STATE_VARIABLE_Expr_0_134, ModuleInfo_12, &RemovedRegion_40);
          if (succeeded)
          {
            MR_Word Var_196;
            MR_Word Var_197;
            MR_Word Var_198;
            MR_Word Var_199;
            MR_Word Var_200;
            MR_Word Var_201;
            MR_Word RbmmGoalInfo_220;

            Var_196 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
            Var_197 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), ((MR_Box) (RemovedRegion_40)));
            Var_198 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
            Var_199 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
            Var_200 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
            {
              RbmmGoalInfo_220 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RbmmGoalInfo_220, 0) = ((MR_Box) (Var_196));
              MR_hl_field(MR_mktag(0), RbmmGoalInfo_220, 1) = ((MR_Box) (Var_197));
              MR_hl_field(MR_mktag(0), RbmmGoalInfo_220, 2) = ((MR_Box) (Var_198));
              MR_hl_field(MR_mktag(0), RbmmGoalInfo_220, 3) = ((MR_Box) (Var_199));
              MR_hl_field(MR_mktag(0), RbmmGoalInfo_220, 4) = ((MR_Box) (Var_200));
            }
            {
              Var_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_201, 0) = ((MR_Box) (RbmmGoalInfo_220));
            }
            hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_201, STATE_VARIABLE_Info_0_136, STATE_VARIABLE_Info_137);
          }
          else
          {
            MR_Word Var_203;

            {
              Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_203, 0) = ((MR_Box) (CalleePPId_37));
              MR_hl_field(MR_mktag(1), Var_203, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(Var_203, ModuleInfo_12);
            if (succeeded)
            {
              MR_Word Var_205;
              MR_Word Var_207;

              Var_207 = hlds__hlds_goal__rbmm_info_init_0_f_0();
              {
                Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_205, 0) = ((MR_Box) (Var_207));
              }
              hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_205, STATE_VARIABLE_Info_0_136, STATE_VARIABLE_Info_137);
            }
            else
            {
              MR_Word CallSite_41;
              MR_Word VarTypes_43;
              MR_Word RegionArgs_44;
              MR_Word ActualRegionArgs_45;
              MR_Word Constants_46;
              MR_Word Inputs_47;
              MR_Word CarriedRegions_49;
              MR_Word RemovedAndCreated_50;
              MR_Word RemovedRegions_51;
              MR_Word CreatedRegions_52;
              MR_Word AllocatedIntoAndReadFrom_53;
              MR_Word Globals_54;
              MR_Word UseAllocRegions_55;
              MR_Word AllocatedIntoRegions_57;
              MR_Word Var_208;
              MR_Integer Var_209;
              MR_Integer Var_210;
              MR_Word Var_211;
              MR_Word Var_214;
              MR_Word Var_215;
              MR_Word Var_216;
              MR_Word Var_217;
              MR_Word RbmmGoalInfo_221;
              MR_Word _VarSet_42;
              MR_Box conv2_ActualRegionArgs_45;

              CallSite_41 = transform_hlds__smm_common__program_point_init_1_f_0(STATE_VARIABLE_Info_0_136);
              hlds__hlds_pred__proc_info_get_varset_vartypes_3_p_0(ProcInfo_13, &_VarSet_42, &VarTypes_43);
              {
                Var_208 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_208, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), Var_208, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_4));
                MR_hl_field(MR_mktag(0), Var_208, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_208, 3) = ((MR_Box) (VarTypes_43));
              }
              RegionArgs_44 = mercury__list__filter_2_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), Var_208, Args_33);
              mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0), ActualRegionsArgsProc_15, ((MR_Box) (CallSite_41)), &conv2_ActualRegionArgs_45);
              ActualRegionArgs_45 = ((MR_Word) (conv2_ActualRegionArgs_45));
              Constants_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualRegionArgs_45, (MR_Integer) 0))));
              Inputs_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualRegionArgs_45, (MR_Integer) 1))));
              Var_209 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Constants_46);
              mercury__list__det_split_list_4_p_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), Var_209, RegionArgs_44, &CarriedRegions_49, &RemovedAndCreated_50);
              Var_210 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Inputs_47);
              mercury__list__det_split_list_4_p_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), Var_210, RemovedAndCreated_50, &RemovedRegions_51, &CreatedRegions_52);
              Var_211 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), RemovedRegions_51, CarriedRegions_49);
              AllocatedIntoAndReadFrom_53 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), Var_211);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_12, &Globals_54);
              libs__globals__lookup_bool_option_3_p_0(Globals_54, (MR_Integer) 272, &UseAllocRegions_55);
              switch (UseAllocRegions_55) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  AllocatedIntoRegions_57 = AllocatedIntoAndReadFrom_53;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word RemovedAndAllocRegions_56;
                    MR_Word Var_213;

                    transform_hlds__rbmm__add_rbmm_goal_infos__keep_allocated_regions_4_p_0(Inputs_47, RemovedRegions_51, Graph_14, &RemovedAndAllocRegions_56);
                    Var_213 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), RemovedAndAllocRegions_56, CarriedRegions_49);
                    AllocatedIntoRegions_57 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), Var_213);
                  }
                  break;
              }
              Var_214 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), CreatedRegions_52);
              Var_215 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), RemovedRegions_51);
              Var_216 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), CarriedRegions_49);
              {
                RbmmGoalInfo_221 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RbmmGoalInfo_221, 0) = ((MR_Box) (Var_214));
                MR_hl_field(MR_mktag(0), RbmmGoalInfo_221, 1) = ((MR_Box) (Var_215));
                MR_hl_field(MR_mktag(0), RbmmGoalInfo_221, 2) = ((MR_Box) (Var_216));
                MR_hl_field(MR_mktag(0), RbmmGoalInfo_221, 3) = ((MR_Box) (AllocatedIntoRegions_57));
                MR_hl_field(MR_mktag(0), RbmmGoalInfo_221, 4) = ((MR_Box) (AllocatedIntoAndReadFrom_53));
              }
              {
                Var_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_217, 0) = ((MR_Box) (RbmmGoalInfo_221));
              }
              hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_217, STATE_VARIABLE_Info_0_136, STATE_VARIABLE_Info_137);
            }
          }
        }
        *STATE_VARIABLE_Expr_135 = STATE_VARIABLE_Expr_0_134;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_134, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.collect_rbmm_goal_info_goal_expr\'/11", (MR_String) "generic call not handled");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.collect_rbmm_goal_info_goal_expr\'/11", (MR_String) "call to foreign proc not handled");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_134, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Conjs0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_134, (MR_Integer) 2))));
            MR_Word Conjs_60;
            MR_Word RbmmInfo0_61;
            MR_Word Created_62;
            MR_Word Removed_63;
            MR_Word AllocatedInto_65;
            MR_Word Used_66;
            MR_Word NonLocals_67;
            MR_Word NonLocalRegionsSet_68;
            MR_Word NonLocalRegions_69;
            MR_Word Carried_70;
            MR_Word RbmmInfo_71;
            MR_Word Var_182;
            MR_Word Var_184;
            MR_Word Var_185;
            MR_Word Var_186;
            MR_Word Var_187;
            MR_Word VarTypes_226;
            MR_Word _VarSet_224;

            {
              Var_182 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_182, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_4[0]));
              MR_hl_field(MR_mktag(0), Var_182, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_1));
              MR_hl_field(MR_mktag(0), Var_182, 2) = ((MR_Box) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(0), Var_182, 3) = ((MR_Box) (ModuleInfo_12));
              MR_hl_field(MR_mktag(0), Var_182, 4) = ((MR_Box) (ProcInfo_13));
              MR_hl_field(MR_mktag(0), Var_182, 5) = ((MR_Box) (Graph_14));
              MR_hl_field(MR_mktag(0), Var_182, 6) = ((MR_Box) (ActualRegionsArgsProc_15));
              MR_hl_field(MR_mktag(0), Var_182, 7) = ((MR_Box) (ResurRenamingProc_16));
              MR_hl_field(MR_mktag(0), Var_182, 8) = ((MR_Box) (IteRenamingProc_17));
              MR_hl_field(MR_mktag(0), Var_182, 9) = ((MR_Box) (NameToRegionVar_18));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_182, Conjs0_59, &Conjs_60);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Expr_135 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_58));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Conjs_60));
            }
            Var_184 = hlds__hlds_goal__rbmm_info_init_0_f_0();
            transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_conjunction_3_p_0(Conjs_60, Var_184, &RbmmInfo0_61);
            Created_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RbmmInfo0_61, (MR_Integer) 0))));
            Removed_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RbmmInfo0_61, (MR_Integer) 1))));
            AllocatedInto_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RbmmInfo0_61, (MR_Integer) 3))));
            Used_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RbmmInfo0_61, (MR_Integer) 4))));
            NonLocals_67 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(STATE_VARIABLE_Info_0_136);
            hlds__hlds_pred__proc_info_get_varset_vartypes_3_p_0(ProcInfo_13, &_VarSet_224, &VarTypes_226);
            {
              Var_185 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_185, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), Var_185, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_2));
              MR_hl_field(MR_mktag(0), Var_185, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_185, 3) = ((MR_Box) (VarTypes_226));
            }
            NonLocalRegionsSet_68 = parse_tree__set_of_var__filter_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_185, NonLocals_67);
            NonLocalRegions_69 = parse_tree__set_of_var__bitset_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalRegionsSet_68);
            Var_186 = mercury__set__union_2_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), Created_62, Removed_63);
            mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), NonLocalRegions_69, Var_186, &Carried_70);
            {
              RbmmInfo_71 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RbmmInfo_71, 0) = ((MR_Box) (Created_62));
              MR_hl_field(MR_mktag(0), RbmmInfo_71, 1) = ((MR_Box) (Removed_63));
              MR_hl_field(MR_mktag(0), RbmmInfo_71, 2) = ((MR_Box) (Carried_70));
              MR_hl_field(MR_mktag(0), RbmmInfo_71, 3) = ((MR_Box) (AllocatedInto_65));
              MR_hl_field(MR_mktag(0), RbmmInfo_71, 4) = ((MR_Box) (Used_66));
            }
            {
              Var_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_187, 0) = ((MR_Box) (RbmmInfo_71));
            }
            hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_187, STATE_VARIABLE_Info_0_136, STATE_VARIABLE_Info_137);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjs0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_134, (MR_Integer) 1))));
            MR_Word Disjs_73;
            MR_Word Var_172;

            {
              Var_172 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_172, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_4[0]));
              MR_hl_field(MR_mktag(0), Var_172, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_3));
              MR_hl_field(MR_mktag(0), Var_172, 2) = ((MR_Box) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(0), Var_172, 3) = ((MR_Box) (ModuleInfo_12));
              MR_hl_field(MR_mktag(0), Var_172, 4) = ((MR_Box) (ProcInfo_13));
              MR_hl_field(MR_mktag(0), Var_172, 5) = ((MR_Box) (Graph_14));
              MR_hl_field(MR_mktag(0), Var_172, 6) = ((MR_Box) (ActualRegionsArgsProc_15));
              MR_hl_field(MR_mktag(0), Var_172, 7) = ((MR_Box) (ResurRenamingProc_16));
              MR_hl_field(MR_mktag(0), Var_172, 8) = ((MR_Box) (IteRenamingProc_17));
              MR_hl_field(MR_mktag(0), Var_172, 9) = ((MR_Box) (NameToRegionVar_18));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_172, Disjs0_72, &Disjs_73);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Expr_135 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Disjs_73));
            }
            if ((Disjs_73 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_179;
              MR_Word Var_181;

              Var_181 = hlds__hlds_goal__rbmm_info_init_0_f_0();
              {
                Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (Var_181));
              }
              hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_179, STATE_VARIABLE_Info_0_136, STATE_VARIABLE_Info_137);
            }
            else
            {
              MR_Word DInfo_75;
              MR_Word DRbmmInfo_77;
              MR_Word Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Disjs_73, (MR_Integer) 0))));
              MR_Word Var_175;
              MR_Word Var_176;
              MR_Word Var_177;
              MR_Word RbmmInfo0_227;
              MR_Word Created_228;
              MR_Word Removed_229;
              MR_Word Carried_230;
              MR_Word RbmmInfo_231;

              DInfo_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_174, (MR_Integer) 1))));
              DRbmmInfo_77 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(DInfo_75);
              Created_228 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DRbmmInfo_77, (MR_Integer) 0))));
              Removed_229 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DRbmmInfo_77, (MR_Integer) 1))));
              Carried_230 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DRbmmInfo_77, (MR_Integer) 2))));
              Var_175 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
              Var_176 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
              {
                RbmmInfo0_227 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RbmmInfo0_227, 0) = ((MR_Box) (Created_228));
                MR_hl_field(MR_mktag(0), RbmmInfo0_227, 1) = ((MR_Box) (Removed_229));
                MR_hl_field(MR_mktag(0), RbmmInfo0_227, 2) = ((MR_Box) (Carried_230));
                MR_hl_field(MR_mktag(0), RbmmInfo0_227, 3) = ((MR_Box) (Var_175));
                MR_hl_field(MR_mktag(0), RbmmInfo0_227, 4) = ((MR_Box) (Var_176));
              }
              transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_goals_3_p_0(Disjs_73, RbmmInfo0_227, &RbmmInfo_231);
              {
                Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_177, 0) = ((MR_Box) (RbmmInfo_231));
              }
              hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_177, STATE_VARIABLE_Info_0_136, STATE_VARIABLE_Info_137);
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word A_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_134, (MR_Integer) 1))));
            MR_Word B_81 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_134, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_134, (MR_Integer) 3))));
            MR_Word Cases_83;
            MR_Word Var_159;

            {
              Var_159 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_159, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), Var_159, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_5));
              MR_hl_field(MR_mktag(0), Var_159, 2) = ((MR_Box) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(0), Var_159, 3) = ((MR_Box) (ModuleInfo_12));
              MR_hl_field(MR_mktag(0), Var_159, 4) = ((MR_Box) (ProcInfo_13));
              MR_hl_field(MR_mktag(0), Var_159, 5) = ((MR_Box) (Graph_14));
              MR_hl_field(MR_mktag(0), Var_159, 6) = ((MR_Box) (ActualRegionsArgsProc_15));
              MR_hl_field(MR_mktag(0), Var_159, 7) = ((MR_Box) (ResurRenamingProc_16));
              MR_hl_field(MR_mktag(0), Var_159, 8) = ((MR_Box) (IteRenamingProc_17));
              MR_hl_field(MR_mktag(0), Var_159, 9) = ((MR_Box) (NameToRegionVar_18));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Var_159, Cases0_82, &Cases_83);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Expr_135 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (A_80));
              MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (B_81));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_83));
            }
            if ((Cases_83 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.collect_rbmm_goal_info_goal_expr\'/11", (MR_String) "empty switch");
                return;
              }
            else
            {
              MR_Word Case_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cases_83, (MR_Integer) 0))));
              MR_Word Goal_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_84, (MR_Integer) 2))));
              MR_Word CaseInfo_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_88, (MR_Integer) 1))));
              MR_Word CaseRbmmInfo_91;
              MR_Word SwitchRbmmInfo0_94;
              MR_Word Goals_101;
              MR_Word SwitchRbmmInfo_102;
              MR_Word Var_161;
              MR_Word Var_162;
              MR_Word Var_168;
              MR_Word Created_245;
              MR_Word Removed_246;
              MR_Word Carried_247;
              MR_Box conv5_Goals_101;

              CaseRbmmInfo_91 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(CaseInfo_90);
              Created_245 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseRbmmInfo_91, (MR_Integer) 0))));
              Removed_246 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseRbmmInfo_91, (MR_Integer) 1))));
              Carried_247 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseRbmmInfo_91, (MR_Integer) 2))));
              Var_161 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
              Var_162 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
              {
                SwitchRbmmInfo0_94 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SwitchRbmmInfo0_94, 0) = ((MR_Box) (Created_245));
                MR_hl_field(MR_mktag(0), SwitchRbmmInfo0_94, 1) = ((MR_Box) (Removed_246));
                MR_hl_field(MR_mktag(0), SwitchRbmmInfo0_94, 2) = ((MR_Box) (Carried_247));
                MR_hl_field(MR_mktag(0), SwitchRbmmInfo0_94, 3) = ((MR_Box) (Var_161));
                MR_hl_field(MR_mktag(0), SwitchRbmmInfo0_94, 4) = ((MR_Box) (Var_162));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[2]), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[4]), Cases_83, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_Goals_101);
              Goals_101 = ((MR_Word) (conv5_Goals_101));
              transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_goals_3_p_0(Goals_101, SwitchRbmmInfo0_94, &SwitchRbmmInfo_102);
              {
                Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (SwitchRbmmInfo_102));
              }
              hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_168, STATE_VARIABLE_Info_0_136, STATE_VARIABLE_Info_137);
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_134, (MR_Integer) 1))));
            MR_Word Var_154;
            MR_Word Info_256;
            MR_Word RbmmInfo_257;
            MR_Word Goal_258;
            MR_Word Goal0_259 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_134, (MR_Integer) 2))));

            transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(ModuleInfo_12, ProcInfo_13, Graph_14, ActualRegionsArgsProc_15, ResurRenamingProc_16, IteRenamingProc_17, NameToRegionVar_18, Goal0_259, &Goal_258);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Expr_135 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_105));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goal_258));
            }
            Info_256 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_258, (MR_Integer) 1))));
            RbmmInfo_257 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(Info_256);
            {
              Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (RbmmInfo_257));
            }
            hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_154, STATE_VARIABLE_Info_0_136, STATE_VARIABLE_Info_137);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_134, (MR_Integer) 1))));
            MR_Word Cond0_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_134, (MR_Integer) 2))));
            MR_Word Then0_109 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_134, (MR_Integer) 3))));
            MR_Word Else0_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_134, (MR_Integer) 4))));
            MR_Word Cond_111;
            MR_Word Then_112;
            MR_Word Else_113;
            MR_Word ElseInfo_115;
            MR_Word ElseRbmmInfo_116;
            MR_Word IteRbmmInfo0_119;
            MR_Word IteRbmmInfo_120;
            MR_Word Var_145;
            MR_Word Var_146;
            MR_Word Var_147;
            MR_Word Var_148;
            MR_Word Var_149;
            MR_Word Var_151;
            MR_Word Created_260;
            MR_Word Removed_261;
            MR_Word Carried_262;

            transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(ModuleInfo_12, ProcInfo_13, Graph_14, ActualRegionsArgsProc_15, ResurRenamingProc_16, IteRenamingProc_17, NameToRegionVar_18, Cond0_108, &Cond_111);
            transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(ModuleInfo_12, ProcInfo_13, Graph_14, ActualRegionsArgsProc_15, ResurRenamingProc_16, IteRenamingProc_17, NameToRegionVar_18, Then0_109, &Then_112);
            transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(ModuleInfo_12, ProcInfo_13, Graph_14, ActualRegionsArgsProc_15, ResurRenamingProc_16, IteRenamingProc_17, NameToRegionVar_18, Else0_110, &Else_113);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Expr_135 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_107));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_111));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_112));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_113));
            }
            ElseInfo_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Else_113, (MR_Integer) 1))));
            ElseRbmmInfo_116 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(ElseInfo_115);
            Created_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ElseRbmmInfo_116, (MR_Integer) 0))));
            Removed_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ElseRbmmInfo_116, (MR_Integer) 1))));
            Carried_262 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ElseRbmmInfo_116, (MR_Integer) 2))));
            Var_145 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
            Var_146 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
            {
              IteRbmmInfo0_119 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), IteRbmmInfo0_119, 0) = ((MR_Box) (Created_260));
              MR_hl_field(MR_mktag(0), IteRbmmInfo0_119, 1) = ((MR_Box) (Removed_261));
              MR_hl_field(MR_mktag(0), IteRbmmInfo0_119, 2) = ((MR_Box) (Carried_262));
              MR_hl_field(MR_mktag(0), IteRbmmInfo0_119, 3) = ((MR_Box) (Var_145));
              MR_hl_field(MR_mktag(0), IteRbmmInfo0_119, 4) = ((MR_Box) (Var_146));
            }
            {
              Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (Else_113));
              MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (Then_112));
              MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (Var_149));
            }
            {
              Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (Cond_111));
              MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (Var_148));
            }
            transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_goals_3_p_0(Var_147, IteRbmmInfo0_119, &IteRbmmInfo_120);
            {
              Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (IteRbmmInfo_120));
            }
            hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_151, STATE_VARIABLE_Info_0_136, STATE_VARIABLE_Info_137);
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.collect_rbmm_goal_info_goal_expr\'/11", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ProcInfo_11,
  MR_Word Graph_12,
  MR_Word ActualRegionsArgsProc_13,
  MR_Word ResurRenamingProc_14,
  MR_Word IteRenamingProc_15,
  MR_Word NameToRegionVar_16,
  MR_Word STATE_VARIABLE_Goal_0_22,
  MR_Word * STATE_VARIABLE_Goal_23)
{
  MR_Word Expr0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_22, (MR_Integer) 0))));
  MR_Word Info0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_22, (MR_Integer) 1))));
  MR_Word Expr_20;
  MR_Word Info_21;

  transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0(ModuleInfo_10, ProcInfo_11, Graph_12, ActualRegionsArgsProc_13, ResurRenamingProc_14, IteRenamingProc_15, NameToRegionVar_16, Expr0_18, &Expr_20, Info0_19, &Info_21);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Goal_23 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Expr_20));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Info_21));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__is_create_region_call_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_10,
  MR_Word * CreatedRegion_11)
{
  MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 2);
  MR_Word PredId_4;
  MR_Word Args_6;
  MR_Word PredInfo_12;
  MR_Word Var_13;
  MR_String Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_String Var_17;

  if (succeeded)
  {
    PredId_4 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
    Args_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_10, PredId_4, &PredInfo_12);
    Var_13 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_12);
    Var_16 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_13, Var_16);
    if (succeeded)
    {
      Var_14 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_12);
      Var_17 = transform_hlds__rbmm__region_transformation__create_region_pred_name_0_f_0();
      succeeded = (strcmp(Var_14, Var_17) == 0);
      if (succeeded)
      {
        succeeded = (Args_6 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *CreatedRegion_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 0))));
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 1))));
          succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__is_remove_region_call_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_10,
  MR_Word * RemovedRegion_11)
{
  MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 2);
  MR_Word PredId_4;
  MR_Word Args_6;
  MR_Word PredInfo_12;
  MR_Word Var_13;
  MR_String Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_String Var_17;

  if (succeeded)
  {
    PredId_4 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
    Args_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_10, PredId_4, &PredInfo_12);
    Var_13 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_12);
    Var_16 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_13, Var_16);
    if (succeeded)
    {
      Var_14 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_12);
      Var_17 = transform_hlds__rbmm__region_transformation__remove_region_pred_name_0_f_0();
      succeeded = (strcmp(Var_14, Var_17) == 0);
      if (succeeded)
      {
        succeeded = (Args_6 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *RemovedRegion_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 0))));
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 1))));
          succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_unification_8_p_0(
  MR_Word Unification_9,
  MR_Word ModuleInfo_10,
  MR_Word Graph_11,
  MR_Word ResurRenaming_12,
  MR_Word IteRenaming_13,
  MR_Word RegionNameToVar_14,
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Unification_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word HowToConstruct_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_9, (MR_Integer) 4))));

        switch (MR_tag((MR_Word) HowToConstruct_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_64;
              MR_Word Var_66;

              Var_66 = hlds__hlds_goal__rbmm_info_init_0_f_0();
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_66));
              }
              hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_64, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_64;
              MR_Word Var_66;

              Var_66 = hlds__hlds_goal__rbmm_info_init_0_f_0();
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_66));
              }
              hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_64, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_64;
              MR_Word Var_66;

              Var_66 = hlds__hlds_goal__rbmm_info_init_0_f_0();
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_66));
              }
              hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_64, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word AllocatedIntoRegion_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HowToConstruct_20, (MR_Integer) 0))));
              MR_Word RbmmInfo_24;
              MR_Word Var_67;
              MR_Word Var_68;
              MR_Word Var_69;
              MR_Word Var_70;
              MR_Word Var_71;
              MR_Word Var_72;

              Var_67 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
              Var_68 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
              Var_69 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), ((MR_Box) (AllocatedIntoRegion_23)));
              Var_70 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), ((MR_Box) (AllocatedIntoRegion_23)));
              Var_71 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
              {
                RbmmInfo_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RbmmInfo_24, 0) = ((MR_Box) (Var_67));
                MR_hl_field(MR_mktag(0), RbmmInfo_24, 1) = ((MR_Box) (Var_68));
                MR_hl_field(MR_mktag(0), RbmmInfo_24, 2) = ((MR_Box) (Var_69));
                MR_hl_field(MR_mktag(0), RbmmInfo_24, 3) = ((MR_Box) (Var_70));
                MR_hl_field(MR_mktag(0), RbmmInfo_24, 4) = ((MR_Box) (Var_71));
              }
              {
                Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (RbmmInfo_24));
              }
              hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_72, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DeconsCellVar_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_9, (MR_Integer) 0))));
        MR_Word Node_33;
        MR_Word NodeType_34;

        transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(Graph_11, DeconsCellVar_27, &Node_33);
        NodeType_34 = transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_f_0(Graph_11, Node_33);
        succeeded = check_hlds__type_util__type_not_stored_in_region_2_p_0(NodeType_34, ModuleInfo_10);
        if (succeeded)
        {
          MR_Word Var_54;
          MR_Word Var_56;

          Var_56 = hlds__hlds_goal__rbmm_info_init_0_f_0();
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_56));
          }
          hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_54, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
        }
        else
        {
          MR_String OriginalName_35;
          MR_String Name_37;
          MR_Word Var_62;
          MR_Word RbmmInfo_74;
          MR_Word ResurNameList_36;
          MR_Box conv0_ResurNameList_36;
          MR_Word RegionVar_39;
          MR_Box conv4_RegionVar_39;

          OriginalName_35 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(Graph_11, Node_33);
          succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[0]), ResurRenaming_12, ((MR_Box) (OriginalName_35)), &conv0_ResurNameList_36);
          if (succeeded)
          {
            ResurNameList_36 = ((MR_Word) (conv0_ResurNameList_36));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Box conv1_Name_37;

            conv1_Name_37 = mercury__list__det_last_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ResurNameList_36);
            Name_37 = ((MR_String) (conv1_Name_37));
          }
          else
          {
            MR_Word IteNameList_38;
            MR_Box conv2_IteNameList_38;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[0]), IteRenaming_13, ((MR_Box) (OriginalName_35)), &conv2_IteNameList_38);
            if (succeeded)
            {
              IteNameList_38 = ((MR_Word) (conv2_IteNameList_38));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Box conv3_Name_37;

              conv3_Name_37 = mercury__list__det_last_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IteNameList_38);
              Name_37 = ((MR_String) (conv3_Name_37));
            }
            else
              Name_37 = OriginalName_35;
          }
          succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), RegionNameToVar_14, ((MR_Box) (Name_37)), &conv4_RegionVar_39);
          if (succeeded)
          {
            RegionVar_39 = ((MR_Word) (conv4_RegionVar_39));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word Var_57;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_61;

            Var_57 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
            Var_58 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
            Var_59 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), ((MR_Box) (RegionVar_39)));
            Var_60 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
            Var_61 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), ((MR_Box) (RegionVar_39)));
            {
              RbmmInfo_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RbmmInfo_74, 0) = ((MR_Box) (Var_57));
              MR_hl_field(MR_mktag(0), RbmmInfo_74, 1) = ((MR_Box) (Var_58));
              MR_hl_field(MR_mktag(0), RbmmInfo_74, 2) = ((MR_Box) (Var_59));
              MR_hl_field(MR_mktag(0), RbmmInfo_74, 3) = ((MR_Box) (Var_60));
              MR_hl_field(MR_mktag(0), RbmmInfo_74, 4) = ((MR_Box) (Var_61));
            }
          }
          else
            RbmmInfo_74 = hlds__hlds_goal__rbmm_info_init_0_f_0();
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (RbmmInfo_74));
          }
          hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_62, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_51;
        MR_Word Var_53;

        Var_53 = hlds__hlds_goal__rbmm_info_init_0_f_0();
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_53));
        }
        hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_51, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_51;
            MR_Word Var_53;

            Var_53 = hlds__hlds_goal__rbmm_info_init_0_f_0();
            {
              Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_53));
            }
            hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_51, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.collect_rbmm_goal_info_unification\'/8", (MR_String) "complicated unification");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RbmmInfo_0_2,
  MR_Word * STATE_VARIABLE_RbmmInfo_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RbmmInfo_3 = STATE_VARIABLE_RbmmInfo_0_2;
    else
    {
      MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Info_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 1))));
      MR_Word GoalRbmmInfo_12;
      MR_Word GoalAllocatedInto_16;
      MR_Word GoalUsed_17;
      MR_Word Created_18;
      MR_Word Removed_19;
      MR_Word Carried_20;
      MR_Word AllocatedInto0_21;
      MR_Word Used0_22;
      MR_Word AllocatedInto_23;
      MR_Word Used_24;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word STATE_VARIABLE_RbmmInfo_29_29;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RbmmInfo_0_2;

      GoalRbmmInfo_12 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(Info_11);
      GoalAllocatedInto_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalRbmmInfo_12, (MR_Integer) 3))));
      GoalUsed_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalRbmmInfo_12, (MR_Integer) 4))));
      Created_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 0))));
      Removed_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 1))));
      Carried_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 2))));
      AllocatedInto0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 3))));
      Used0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 4))));
      Var_27 = mercury__set__union_2_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), GoalAllocatedInto_16, AllocatedInto0_21);
      mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), Var_27, Created_18, &AllocatedInto_23);
      Var_28 = mercury__set__union_2_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), GoalUsed_17, Used0_22);
      mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), Var_28, Created_18, &Used_24);
      {
        STATE_VARIABLE_RbmmInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_RbmmInfo_29_29, 0) = ((MR_Box) (Created_18));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_RbmmInfo_29_29, 1) = ((MR_Box) (Removed_19));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_RbmmInfo_29_29, 2) = ((MR_Box) (Carried_20));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_RbmmInfo_29_29, 3) = ((MR_Box) (AllocatedInto_23));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_RbmmInfo_29_29, 4) = ((MR_Box) (Used_24));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_8;
      next_value_of_STATE_VARIABLE_RbmmInfo_0_2 = STATE_VARIABLE_RbmmInfo_29_29;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RbmmInfo_0_2 = next_value_of_STATE_VARIABLE_RbmmInfo_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_conjunction_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RbmmInfo_0_2,
  MR_Word * STATE_VARIABLE_RbmmInfo_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RbmmInfo_3 = STATE_VARIABLE_RbmmInfo_0_2;
    else
    {
      MR_Word Conj_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Conjs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word CInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Conj_7, (MR_Integer) 1))));
      MR_Word CRbmmInfo_12;
      MR_Word CCreated_13;
      MR_Word CRemoved_14;
      MR_Word CAllocatedInto_16;
      MR_Word CUsed_17;
      MR_Word Created0_18;
      MR_Word Removed0_19;
      MR_Word Carried_20;
      MR_Word AllocatedInto0_21;
      MR_Word Used0_22;
      MR_Word Created_23;
      MR_Word Removed_24;
      MR_Word AllocatedInto_25;
      MR_Word Used_26;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word STATE_VARIABLE_RbmmInfo_32_32;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RbmmInfo_0_2;

      CRbmmInfo_12 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(CInfo_11);
      CCreated_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CRbmmInfo_12, (MR_Integer) 0))));
      CRemoved_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CRbmmInfo_12, (MR_Integer) 1))));
      CAllocatedInto_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CRbmmInfo_12, (MR_Integer) 3))));
      CUsed_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CRbmmInfo_12, (MR_Integer) 4))));
      Created0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 0))));
      Removed0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 1))));
      Carried_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 2))));
      AllocatedInto0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 3))));
      Used0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 4))));
      mercury__set__union_3_p_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), CCreated_13, Created0_18, &Created_23);
      Var_29 = mercury__set__union_2_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), CRemoved_14, Removed0_19);
      mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), Var_29, Created_23, &Removed_24);
      Var_30 = mercury__set__union_2_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), CAllocatedInto_16, AllocatedInto0_21);
      mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), Var_30, Created_23, &AllocatedInto_25);
      Var_31 = mercury__set__union_2_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), CUsed_17, Used0_22);
      mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), Var_31, Created_23, &Used_26);
      {
        STATE_VARIABLE_RbmmInfo_32_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_RbmmInfo_32_32, 0) = ((MR_Box) (Created_23));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_RbmmInfo_32_32, 1) = ((MR_Box) (Removed_24));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_RbmmInfo_32_32, 2) = ((MR_Box) (Carried_20));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_RbmmInfo_32_32, 3) = ((MR_Box) (AllocatedInto_25));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_RbmmInfo_32_32, 4) = ((MR_Box) (Used_26));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Conjs_8;
      next_value_of_STATE_VARIABLE_RbmmInfo_0_2 = STATE_VARIABLE_RbmmInfo_32_32;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RbmmInfo_0_2 = next_value_of_STATE_VARIABLE_RbmmInfo_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__keep_allocated_regions_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word Graph_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.keep_allocated_regions\'/4", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.keep_allocated_regions\'/4", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word RemovedRegion_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word RemovedRegions_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word RemovedAndAllocRegions0_22;

      transform_hlds__rbmm__add_rbmm_goal_infos__keep_allocated_regions_4_p_0(Var_23, RemovedRegions_19, Graph_3, &RemovedAndAllocRegions0_22);
      succeeded = transform_hlds__rbmm__points_to_graph__rptg_is_allocated_node_2_p_0(Graph_3, Var_24);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RemovedRegion_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RemovedAndAllocRegions0_22));
        }
      else
        *HeadVar__4_4 = RemovedAndAllocRegions0_22;
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_30;

  transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_proc_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ModuleInfo_30);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_30));
}

void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_7_p_0(
  MR_Word RptaInfoTable_8,
  MR_Word ActualRegionArgumentTable_9,
  MR_Word ResurRenamingTable_10,
  MR_Word IteRenamingTable_11,
  MR_Word NameToRegionVarTable_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15)
{
  MR_Word Var_16;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_15;

  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_3[0]));
    MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_7_p_0_1));
    MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (RptaInfoTable_8));
    MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (ResurRenamingTable_10));
    MR_hl_field(MR_mktag(0), Var_16, 5) = ((MR_Box) (IteRenamingTable_11));
    MR_hl_field(MR_mktag(0), Var_16, 6) = ((MR_Box) (NameToRegionVarTable_12));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_16, ActualRegionArgumentTable_9, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14)), &conv1_STATE_VARIABLE_ModuleInfo_15);
  *STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_15));
}

void mercury__transform_hlds__rbmm__add_rbmm_goal_infos__init(void)
{
}

void mercury__transform_hlds__rbmm__add_rbmm_goal_infos__init_type_tables(void)
{
}

void mercury__transform_hlds__rbmm__add_rbmm_goal_infos__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__rbmm__add_rbmm_goal_infos__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.rbmm.add_rbmm_goal_infos.
