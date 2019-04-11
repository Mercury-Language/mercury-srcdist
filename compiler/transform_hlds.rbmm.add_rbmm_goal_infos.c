/*
** Automatically generated from `rbmm.add_rbmm_goal_infos.m'
** by the Mercury compiler,
** version rotd-2018-07-20
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
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
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
transform_hlds__rbmm__add_rbmm_goal_infos__IntroducedFrom__pred__collect_rbmm_goal_info_goal_expr__296__1_3_p_0(
  MR_Word LambdaHeadVar__1_164,
  MR_Word LambdaHeadVar__2_165,
  MR_Word * LambdaHeadVar__3_166);

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
  MR_Word STATE_VARIABLE_Expr_0_133,
  MR_Word * STATE_VARIABLE_Expr_134,
  MR_Word STATE_VARIABLE_Info_0_135,
  MR_Word * STATE_VARIABLE_Info_136);

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
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47);

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
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_3[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
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
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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
transform_hlds__rbmm__add_rbmm_goal_infos__IntroducedFrom__pred__collect_rbmm_goal_info_goal_expr__296__1_3_p_0(
  MR_Word LambdaHeadVar__1_164,
  MR_Word LambdaHeadVar__2_165,
  MR_Word * LambdaHeadVar__3_166)
{
  {
    MR_Word G_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_164, (MR_Integer) 2))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *LambdaHeadVar__3_166 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (G_99));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LambdaHeadVar__2_165));
    }
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
  {
    MR_Word MainConsId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_22, (MR_Integer) 0))));
    MR_Word OtherConsIds_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_22, (MR_Integer) 1))));
    MR_Word Goal0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_22, (MR_Integer) 2))));
    MR_Word Goal_21;
    MR_Word Expr0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_20, (MR_Integer) 0))));
    MR_Word Info0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_20, (MR_Integer) 1))));
    MR_Word Expr_37;
    MR_Word Info_38;

    transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0(ModuleInfo_10, ProcInfo_11, Graph_12, ActualRegionsArgsProc_13, ResurRenamingProc_14, IteRenamingProc_15, NameToRegionVar_16, Expr0_35, &Expr_37, Info0_36, &Info_38);
    {
      Goal_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_21, 0) = ((MR_Box) (Expr_37));
      MR_hl_field(MR_mktag(0), Goal_21, 1) = ((MR_Box) (Info_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Case_23 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_21));
    }
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
    MR_Word Expr0_51;
    MR_Word Info0_52;
    MR_Word Expr_53;
    MR_Word Info_54;
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
    {
      ResurRenamingProc_23 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[1]));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[2]), IteRenamingTable_11, ((MR_Box) (PPId_13)), &conv2_IteRenamingProc0_24);
    if (succeeded)
    {
      IteRenamingProc0_24 = ((MR_Word) (conv2_IteRenamingProc0_24));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      IteRenamingProc_25 = IteRenamingProc0_24;
    else
    {
      IteRenamingProc_25 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[1]));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[3]), NameToRegionVarTable_12, ((MR_Box) (PPId_13)), &conv3_NameToRegionVar_26);
    NameToRegionVar_26 = ((MR_Word) (conv3_NameToRegionVar_26));
    Expr0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Body0_18, (MR_Integer) 0))));
    Info0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Body0_18, (MR_Integer) 1))));
    transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0(STATE_VARIABLE_ModuleInfo_0_29, ProcInfo0_17, Graph_20, ActualRegionsArgsProc_14, ResurRenamingProc_23, IteRenamingProc_25, NameToRegionVar_26, Expr0_51, &Expr_53, Info0_52, &Info_54);
    {
      Body_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Body_27, 0) = ((MR_Box) (Expr_53));
      MR_hl_field(MR_mktag(0), Body_27, 1) = ((MR_Box) (Info_54));
    }
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Body_27, ProcInfo0_17, &ProcInfo_28);
    hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PPId_13, PredInfo_16, ProcInfo_28, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30);
  }
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_LambdaHeadVar__3_166;

    transform_hlds__rbmm__add_rbmm_goal_infos__IntroducedFrom__pred__collect_rbmm_goal_info_goal_expr__296__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_LambdaHeadVar__3_166);
    *wrapper_arg_3 = ((MR_Box) (conv4_LambdaHeadVar__3_166));
  }
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Case_23;

    transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_case_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), &conv3_STATE_VARIABLE_Case_23);
    *wrapper_arg_2 = ((MR_Box) (conv3_STATE_VARIABLE_Case_23));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__type_util__is_region_var_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Goal_23;

    transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Goal_23);
    *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Goal_23));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__type_util__is_region_var_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Goal_23;

    transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Goal_23);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Goal_23));
  }
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
  MR_Word STATE_VARIABLE_Expr_0_133,
  MR_Word * STATE_VARIABLE_Expr_134,
  MR_Word STATE_VARIABLE_Info_0_135,
  MR_Word * STATE_VARIABLE_Info_136)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) STATE_VARIABLE_Expr_0_133)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Info_20;
          MR_Word Goal0_102 = (MR_Word) (MR_body((MR_Word) (STATE_VARIABLE_Expr_0_133), (MR_Integer) 0));
          MR_Word Var_156;
          MR_Word RbmmInfo_251;
          MR_Word Goal_252;

          transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(ModuleInfo_12, ProcInfo_13, Graph_14, ActualRegionsArgsProc_15, ResurRenamingProc_16, IteRenamingProc_17, NameToRegionVar_18, Goal0_102, &Goal_252);
          *STATE_VARIABLE_Expr_134 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (Goal_252)));
          Info_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_252, (MR_Integer) 1))));
          RbmmInfo_251 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(Info_20);
          {
            Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (RbmmInfo_251));
          }
          hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_156, STATE_VARIABLE_Info_0_135, STATE_VARIABLE_Info_136);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Expr_0_133, (MR_Integer) 3))));
          MR_Word ProgPoint_26;
          MR_Word ResurRenaming_28;
          MR_Word IteRenaming_30;
          MR_Word ResurRenaming0_27;
          MR_Box conv6_ResurRenaming0_27;
          MR_Word IteRenaming0_29;
          MR_Box conv7_IteRenaming0_29;

          ProgPoint_26 = transform_hlds__smm_common__program_point_init_1_f_0(STATE_VARIABLE_Info_0_135);
          succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[1]), ResurRenamingProc_16, ((MR_Box) (ProgPoint_26)), &conv6_ResurRenaming0_27);
          if (succeeded)
          {
            ResurRenaming0_27 = ((MR_Word) (conv6_ResurRenaming0_27));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            ResurRenaming_28 = ResurRenaming0_27;
          else
          {
            ResurRenaming_28 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[0]));
          }
          succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[1]), IteRenamingProc_17, ((MR_Box) (ProgPoint_26)), &conv7_IteRenaming0_29);
          if (succeeded)
          {
            IteRenaming0_29 = ((MR_Word) (conv7_IteRenaming0_29));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            IteRenaming_30 = IteRenaming0_29;
          else
          {
            IteRenaming_30 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[0]));
          }
          transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_unification_8_p_0(Unification_24, ModuleInfo_12, Graph_14, ResurRenaming_28, IteRenaming_30, NameToRegionVar_18, STATE_VARIABLE_Info_0_135, STATE_VARIABLE_Info_136);
          *STATE_VARIABLE_Expr_134 = STATE_VARIABLE_Expr_0_133;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_Expr_0_133, (MR_Integer) 0))));
          MR_Integer ProcId_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_Expr_0_133, (MR_Integer) 1))));
          MR_Word Args_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_Expr_0_133, (MR_Integer) 2))));
          MR_Word CalleePPId_37;
          MR_Word CreatedRegion_38;

          {
            CalleePPId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CalleePPId_37, 0) = ((MR_Box) (PredId_31));
            MR_hl_field(MR_mktag(0), CalleePPId_37, 1) = ((MR_Box) (ProcId_32));
          }
          succeeded = transform_hlds__rbmm__add_rbmm_goal_infos__is_create_region_call_3_p_0(STATE_VARIABLE_Expr_0_133, ModuleInfo_12, &CreatedRegion_38);
          if (succeeded)
          {
            MR_Word RbmmGoalInfo_39;
            MR_Word Var_188;
            MR_Word Var_189;
            MR_Word Var_190;
            MR_Word Var_191;
            MR_Word Var_192;
            MR_Word Var_193;

            Var_188 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), ((MR_Box) (CreatedRegion_38)));
            Var_189 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
            Var_190 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
            Var_191 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
            Var_192 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
            {
              RbmmGoalInfo_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RbmmGoalInfo_39, 0) = ((MR_Box) (Var_188));
              MR_hl_field(MR_mktag(0), RbmmGoalInfo_39, 1) = ((MR_Box) (Var_189));
              MR_hl_field(MR_mktag(0), RbmmGoalInfo_39, 2) = ((MR_Box) (Var_190));
              MR_hl_field(MR_mktag(0), RbmmGoalInfo_39, 3) = ((MR_Box) (Var_191));
              MR_hl_field(MR_mktag(0), RbmmGoalInfo_39, 4) = ((MR_Box) (Var_192));
            }
            {
              Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_193, 0) = ((MR_Box) (RbmmGoalInfo_39));
            }
            hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_193, STATE_VARIABLE_Info_0_135, STATE_VARIABLE_Info_136);
          }
          else
          {
            MR_Word RemovedRegion_40;

            succeeded = transform_hlds__rbmm__add_rbmm_goal_infos__is_remove_region_call_3_p_0(STATE_VARIABLE_Expr_0_133, ModuleInfo_12, &RemovedRegion_40);
            if (succeeded)
            {
              MR_Word Var_195;
              MR_Word Var_196;
              MR_Word Var_197;
              MR_Word Var_198;
              MR_Word Var_199;
              MR_Word Var_200;
              MR_Word RbmmGoalInfo_219;

              Var_195 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
              Var_196 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), ((MR_Box) (RemovedRegion_40)));
              Var_197 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
              Var_198 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
              Var_199 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
              {
                RbmmGoalInfo_219 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RbmmGoalInfo_219, 0) = ((MR_Box) (Var_195));
                MR_hl_field(MR_mktag(0), RbmmGoalInfo_219, 1) = ((MR_Box) (Var_196));
                MR_hl_field(MR_mktag(0), RbmmGoalInfo_219, 2) = ((MR_Box) (Var_197));
                MR_hl_field(MR_mktag(0), RbmmGoalInfo_219, 3) = ((MR_Box) (Var_198));
                MR_hl_field(MR_mktag(0), RbmmGoalInfo_219, 4) = ((MR_Box) (Var_199));
              }
              {
                Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_200, 0) = ((MR_Box) (RbmmGoalInfo_219));
              }
              hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_200, STATE_VARIABLE_Info_0_135, STATE_VARIABLE_Info_136);
            }
            else
            {
              MR_Word Var_202;

              {
                Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) (CalleePPId_37));
                MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(Var_202, ModuleInfo_12);
              if (succeeded)
              {
                MR_Word Var_204;
                MR_Word Var_206;

                Var_206 = hlds__hlds_goal__rbmm_info_init_0_f_0();
                {
                  Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) (Var_206));
                }
                hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_204, STATE_VARIABLE_Info_0_135, STATE_VARIABLE_Info_136);
              }
              else
              {
                MR_Word CallSite_41;
                MR_Word VarTypes_42;
                MR_Word RegionArgs_43;
                MR_Word ActualRegionArgs_44;
                MR_Word Constants_45;
                MR_Word Inputs_46;
                MR_Word CarriedRegions_48;
                MR_Word RemovedAndCreated_49;
                MR_Word RemovedRegions_50;
                MR_Word CreatedRegions_51;
                MR_Word AllocatedIntoAndReadFrom_52;
                MR_Word Globals_53;
                MR_Word UseAllocRegions_54;
                MR_Word AllocatedIntoRegions_56;
                MR_Word Var_207;
                MR_Integer Var_208;
                MR_Integer Var_209;
                MR_Word Var_210;
                MR_Word Var_213;
                MR_Word Var_214;
                MR_Word Var_215;
                MR_Word Var_216;
                MR_Word RbmmGoalInfo_220;
                MR_Box conv2_ActualRegionArgs_44;

                CallSite_41 = transform_hlds__smm_common__program_point_init_1_f_0(STATE_VARIABLE_Info_0_135);
                hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_13, &VarTypes_42);
                {
                  Var_207 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_207, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_5[0]));
                  MR_hl_field(MR_mktag(0), Var_207, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_4));
                  MR_hl_field(MR_mktag(0), Var_207, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_207, 3) = ((MR_Box) (VarTypes_42));
                }
                RegionArgs_43 = mercury__list__filter_2_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), Var_207, Args_33);
                mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0), ActualRegionsArgsProc_15, ((MR_Box) (CallSite_41)), &conv2_ActualRegionArgs_44);
                ActualRegionArgs_44 = ((MR_Word) (conv2_ActualRegionArgs_44));
                Constants_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualRegionArgs_44, (MR_Integer) 0))));
                Inputs_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualRegionArgs_44, (MR_Integer) 1))));
                Var_208 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Constants_45);
                mercury__list__det_split_list_4_p_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), Var_208, RegionArgs_43, &CarriedRegions_48, &RemovedAndCreated_49);
                Var_209 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Inputs_46);
                mercury__list__det_split_list_4_p_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), Var_209, RemovedAndCreated_49, &RemovedRegions_50, &CreatedRegions_51);
                Var_210 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), RemovedRegions_50, CarriedRegions_48);
                AllocatedIntoAndReadFrom_52 = mercury__set__from_list_1_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), Var_210);
                hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_12, &Globals_53);
                libs__globals__lookup_bool_option_3_p_0(Globals_53, (MR_Integer) 247, &UseAllocRegions_54);
                switch (UseAllocRegions_54) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    AllocatedIntoRegions_56 = AllocatedIntoAndReadFrom_52;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word RemovedAndAllocRegions_55;
                      MR_Word Var_212;

                      transform_hlds__rbmm__add_rbmm_goal_infos__keep_allocated_regions_4_p_0(Inputs_46, RemovedRegions_50, Graph_14, &RemovedAndAllocRegions_55);
                      Var_212 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), RemovedAndAllocRegions_55, CarriedRegions_48);
                      AllocatedIntoRegions_56 = mercury__set__from_list_1_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), Var_212);
                    }
                    break;
                }
                Var_213 = mercury__set__from_list_1_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), CreatedRegions_51);
                Var_214 = mercury__set__from_list_1_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), RemovedRegions_50);
                Var_215 = mercury__set__from_list_1_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), CarriedRegions_48);
                {
                  RbmmGoalInfo_220 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RbmmGoalInfo_220, 0) = ((MR_Box) (Var_213));
                  MR_hl_field(MR_mktag(0), RbmmGoalInfo_220, 1) = ((MR_Box) (Var_214));
                  MR_hl_field(MR_mktag(0), RbmmGoalInfo_220, 2) = ((MR_Box) (Var_215));
                  MR_hl_field(MR_mktag(0), RbmmGoalInfo_220, 3) = ((MR_Box) (AllocatedIntoRegions_56));
                  MR_hl_field(MR_mktag(0), RbmmGoalInfo_220, 4) = ((MR_Box) (AllocatedIntoAndReadFrom_52));
                }
                {
                  Var_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_216, 0) = ((MR_Box) (RbmmGoalInfo_220));
                }
                hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_216, STATE_VARIABLE_Info_0_135, STATE_VARIABLE_Info_136);
              }
            }
          }
          *STATE_VARIABLE_Expr_134 = STATE_VARIABLE_Expr_0_133;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_133, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.collect_rbmm_goal_info_goal_expr\'/11", (MR_String) "generic call not handled");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.collect_rbmm_goal_info_goal_expr\'/11", (MR_String) "call to foreign proc not handled");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_133, (MR_Integer) 1))));
              MR_Word Conjs0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_133, (MR_Integer) 2))));
              MR_Word Conjs_59;
              MR_Word RbmmInfo0_60;
              MR_Word Created_61;
              MR_Word Removed_62;
              MR_Word AllocatedInto_64;
              MR_Word Used_65;
              MR_Word NonLocals_66;
              MR_Word NonLocalRegionsSet_67;
              MR_Word NonLocalRegions_68;
              MR_Word Carried_69;
              MR_Word RbmmInfo_70;
              MR_Word Var_181;
              MR_Word Var_183;
              MR_Word Var_184;
              MR_Word Var_185;
              MR_Word Var_186;
              MR_Word VarTypes_223;

              {
                Var_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_181, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_181, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_1));
                MR_hl_field(MR_mktag(0), Var_181, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(0), Var_181, 3) = ((MR_Box) (ModuleInfo_12));
                MR_hl_field(MR_mktag(0), Var_181, 4) = ((MR_Box) (ProcInfo_13));
                MR_hl_field(MR_mktag(0), Var_181, 5) = ((MR_Box) (Graph_14));
                MR_hl_field(MR_mktag(0), Var_181, 6) = ((MR_Box) (ActualRegionsArgsProc_15));
                MR_hl_field(MR_mktag(0), Var_181, 7) = ((MR_Box) (ResurRenamingProc_16));
                MR_hl_field(MR_mktag(0), Var_181, 8) = ((MR_Box) (IteRenamingProc_17));
                MR_hl_field(MR_mktag(0), Var_181, 9) = ((MR_Box) (NameToRegionVar_18));
              }
              mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_181, Conjs0_58, &Conjs_59);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Expr_134 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ConjType_57));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Conjs_59));
              }
              Var_183 = hlds__hlds_goal__rbmm_info_init_0_f_0();
              transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_conjunction_3_p_0(Conjs_59, Var_183, &RbmmInfo0_60);
              Created_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RbmmInfo0_60, (MR_Integer) 0))));
              Removed_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RbmmInfo0_60, (MR_Integer) 1))));
              AllocatedInto_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RbmmInfo0_60, (MR_Integer) 3))));
              Used_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RbmmInfo0_60, (MR_Integer) 4))));
              NonLocals_66 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(STATE_VARIABLE_Info_0_135);
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_13, &VarTypes_223);
              {
                Var_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_184, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), Var_184, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_2));
                MR_hl_field(MR_mktag(0), Var_184, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_184, 3) = ((MR_Box) (VarTypes_223));
              }
              NonLocalRegionsSet_67 = parse_tree__set_of_var__filter_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_184, NonLocals_66);
              NonLocalRegions_68 = parse_tree__set_of_var__bitset_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalRegionsSet_67);
              Var_185 = mercury__set__union_2_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), Created_61, Removed_62);
              mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), NonLocalRegions_68, Var_185, &Carried_69);
              {
                RbmmInfo_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RbmmInfo_70, 0) = ((MR_Box) (Created_61));
                MR_hl_field(MR_mktag(0), RbmmInfo_70, 1) = ((MR_Box) (Removed_62));
                MR_hl_field(MR_mktag(0), RbmmInfo_70, 2) = ((MR_Box) (Carried_69));
                MR_hl_field(MR_mktag(0), RbmmInfo_70, 3) = ((MR_Box) (AllocatedInto_64));
                MR_hl_field(MR_mktag(0), RbmmInfo_70, 4) = ((MR_Box) (Used_65));
              }
              {
                Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_186, 0) = ((MR_Box) (RbmmInfo_70));
              }
              hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_186, STATE_VARIABLE_Info_0_135, STATE_VARIABLE_Info_136);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjs0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_133, (MR_Integer) 1))));
              MR_Word Disjs_72;
              MR_Word Var_171;

              {
                Var_171 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_171, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_171, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_3));
                MR_hl_field(MR_mktag(0), Var_171, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(0), Var_171, 3) = ((MR_Box) (ModuleInfo_12));
                MR_hl_field(MR_mktag(0), Var_171, 4) = ((MR_Box) (ProcInfo_13));
                MR_hl_field(MR_mktag(0), Var_171, 5) = ((MR_Box) (Graph_14));
                MR_hl_field(MR_mktag(0), Var_171, 6) = ((MR_Box) (ActualRegionsArgsProc_15));
                MR_hl_field(MR_mktag(0), Var_171, 7) = ((MR_Box) (ResurRenamingProc_16));
                MR_hl_field(MR_mktag(0), Var_171, 8) = ((MR_Box) (IteRenamingProc_17));
                MR_hl_field(MR_mktag(0), Var_171, 9) = ((MR_Box) (NameToRegionVar_18));
              }
              mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_171, Disjs0_71, &Disjs_72);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Expr_134 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Disjs_72));
              }
              if ((Disjs_72 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_178;
                MR_Word Var_180;

                Var_180 = hlds__hlds_goal__rbmm_info_init_0_f_0();
                {
                  Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_178, 0) = ((MR_Box) (Var_180));
                }
                hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_178, STATE_VARIABLE_Info_0_135, STATE_VARIABLE_Info_136);
              }
              else
              {
                MR_Word DInfo_74;
                MR_Word DRbmmInfo_76;
                MR_Word Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Disjs_72, (MR_Integer) 0))));
                MR_Word Var_174;
                MR_Word Var_175;
                MR_Word Var_176;
                MR_Word RbmmInfo0_224;
                MR_Word Created_225;
                MR_Word Removed_226;
                MR_Word Carried_227;
                MR_Word RbmmInfo_228;

                DInfo_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_173, (MR_Integer) 1))));
                DRbmmInfo_76 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(DInfo_74);
                Created_225 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DRbmmInfo_76, (MR_Integer) 0))));
                Removed_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DRbmmInfo_76, (MR_Integer) 1))));
                Carried_227 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DRbmmInfo_76, (MR_Integer) 2))));
                Var_174 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
                Var_175 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
                {
                  RbmmInfo0_224 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RbmmInfo0_224, 0) = ((MR_Box) (Created_225));
                  MR_hl_field(MR_mktag(0), RbmmInfo0_224, 1) = ((MR_Box) (Removed_226));
                  MR_hl_field(MR_mktag(0), RbmmInfo0_224, 2) = ((MR_Box) (Carried_227));
                  MR_hl_field(MR_mktag(0), RbmmInfo0_224, 3) = ((MR_Box) (Var_174));
                  MR_hl_field(MR_mktag(0), RbmmInfo0_224, 4) = ((MR_Box) (Var_175));
                }
                transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_goals_3_p_0(Disjs_72, RbmmInfo0_224, &RbmmInfo_228);
                {
                  Var_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_176, 0) = ((MR_Box) (RbmmInfo_228));
                }
                hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_176, STATE_VARIABLE_Info_0_135, STATE_VARIABLE_Info_136);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word A_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_133, (MR_Integer) 1))));
              MR_Word B_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_133, (MR_Integer) 2))));
              MR_Word Cases0_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_133, (MR_Integer) 3))));
              MR_Word Cases_82;
              MR_Word Var_158;

              {
                Var_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_158, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_158, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_5));
                MR_hl_field(MR_mktag(0), Var_158, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(0), Var_158, 3) = ((MR_Box) (ModuleInfo_12));
                MR_hl_field(MR_mktag(0), Var_158, 4) = ((MR_Box) (ProcInfo_13));
                MR_hl_field(MR_mktag(0), Var_158, 5) = ((MR_Box) (Graph_14));
                MR_hl_field(MR_mktag(0), Var_158, 6) = ((MR_Box) (ActualRegionsArgsProc_15));
                MR_hl_field(MR_mktag(0), Var_158, 7) = ((MR_Box) (ResurRenamingProc_16));
                MR_hl_field(MR_mktag(0), Var_158, 8) = ((MR_Box) (IteRenamingProc_17));
                MR_hl_field(MR_mktag(0), Var_158, 9) = ((MR_Box) (NameToRegionVar_18));
              }
              mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Var_158, Cases0_81, &Cases_82);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Expr_134 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (A_79));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (B_80));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_82));
              }
              if ((Cases_82 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.collect_rbmm_goal_info_goal_expr\'/11", (MR_String) "empty switch");
                  return;
                }
              }
              else
              {
                MR_Word Case_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cases_82, (MR_Integer) 0))));
                MR_Word Goal_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_83, (MR_Integer) 2))));
                MR_Word CaseInfo_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_87, (MR_Integer) 1))));
                MR_Word CaseRbmmInfo_90;
                MR_Word SwitchRbmmInfo0_93;
                MR_Word Goals_100;
                MR_Word SwitchRbmmInfo_101;
                MR_Word Var_160;
                MR_Word Var_161;
                MR_Word Var_167;
                MR_Word Created_242;
                MR_Word Removed_243;
                MR_Word Carried_244;
                MR_Box conv5_Goals_100;

                CaseRbmmInfo_90 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(CaseInfo_89);
                Created_242 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseRbmmInfo_90, (MR_Integer) 0))));
                Removed_243 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseRbmmInfo_90, (MR_Integer) 1))));
                Carried_244 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseRbmmInfo_90, (MR_Integer) 2))));
                Var_160 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
                Var_161 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
                {
                  SwitchRbmmInfo0_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SwitchRbmmInfo0_93, 0) = ((MR_Box) (Created_242));
                  MR_hl_field(MR_mktag(0), SwitchRbmmInfo0_93, 1) = ((MR_Box) (Removed_243));
                  MR_hl_field(MR_mktag(0), SwitchRbmmInfo0_93, 2) = ((MR_Box) (Carried_244));
                  MR_hl_field(MR_mktag(0), SwitchRbmmInfo0_93, 3) = ((MR_Box) (Var_160));
                  MR_hl_field(MR_mktag(0), SwitchRbmmInfo0_93, 4) = ((MR_Box) (Var_161));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[2]), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[4]), Cases_82, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_Goals_100);
                Goals_100 = ((MR_Word) (conv5_Goals_100));
                transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_goals_3_p_0(Goals_100, SwitchRbmmInfo0_93, &SwitchRbmmInfo_101);
                {
                  Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (SwitchRbmmInfo_101));
                }
                hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_167, STATE_VARIABLE_Info_0_135, STATE_VARIABLE_Info_136);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_133, (MR_Integer) 1))));
              MR_Word Var_153;
              MR_Word Info_253;
              MR_Word RbmmInfo_254;
              MR_Word Goal_255;
              MR_Word Goal0_256 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_133, (MR_Integer) 2))));

              transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(ModuleInfo_12, ProcInfo_13, Graph_14, ActualRegionsArgsProc_15, ResurRenamingProc_16, IteRenamingProc_17, NameToRegionVar_18, Goal0_256, &Goal_255);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Expr_134 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_104));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goal_255));
              }
              Info_253 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_255, (MR_Integer) 1))));
              RbmmInfo_254 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(Info_253);
              {
                Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (RbmmInfo_254));
              }
              hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_153, STATE_VARIABLE_Info_0_135, STATE_VARIABLE_Info_136);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_133, (MR_Integer) 1))));
              MR_Word Cond0_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_133, (MR_Integer) 2))));
              MR_Word Then0_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_133, (MR_Integer) 3))));
              MR_Word Else0_109 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_133, (MR_Integer) 4))));
              MR_Word Cond_110;
              MR_Word Then_111;
              MR_Word Else_112;
              MR_Word ElseInfo_114;
              MR_Word ElseRbmmInfo_115;
              MR_Word IteRbmmInfo0_118;
              MR_Word IteRbmmInfo_119;
              MR_Word Var_144;
              MR_Word Var_145;
              MR_Word Var_146;
              MR_Word Var_147;
              MR_Word Var_148;
              MR_Word Var_150;
              MR_Word Created_257;
              MR_Word Removed_258;
              MR_Word Carried_259;

              transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(ModuleInfo_12, ProcInfo_13, Graph_14, ActualRegionsArgsProc_15, ResurRenamingProc_16, IteRenamingProc_17, NameToRegionVar_18, Cond0_107, &Cond_110);
              transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(ModuleInfo_12, ProcInfo_13, Graph_14, ActualRegionsArgsProc_15, ResurRenamingProc_16, IteRenamingProc_17, NameToRegionVar_18, Then0_108, &Then_111);
              transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(ModuleInfo_12, ProcInfo_13, Graph_14, ActualRegionsArgsProc_15, ResurRenamingProc_16, IteRenamingProc_17, NameToRegionVar_18, Else0_109, &Else_112);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Expr_134 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_106));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_110));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_111));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_112));
              }
              ElseInfo_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Else_112, (MR_Integer) 1))));
              ElseRbmmInfo_115 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(ElseInfo_114);
              Created_257 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ElseRbmmInfo_115, (MR_Integer) 0))));
              Removed_258 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ElseRbmmInfo_115, (MR_Integer) 1))));
              Carried_259 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ElseRbmmInfo_115, (MR_Integer) 2))));
              Var_144 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
              Var_145 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
              {
                IteRbmmInfo0_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), IteRbmmInfo0_118, 0) = ((MR_Box) (Created_257));
                MR_hl_field(MR_mktag(0), IteRbmmInfo0_118, 1) = ((MR_Box) (Removed_258));
                MR_hl_field(MR_mktag(0), IteRbmmInfo0_118, 2) = ((MR_Box) (Carried_259));
                MR_hl_field(MR_mktag(0), IteRbmmInfo0_118, 3) = ((MR_Box) (Var_144));
                MR_hl_field(MR_mktag(0), IteRbmmInfo0_118, 4) = ((MR_Box) (Var_145));
              }
              {
                Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (Else_112));
                MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (Then_111));
                MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (Var_148));
              }
              {
                Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (Cond_110));
                MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (Var_147));
              }
              transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_goals_3_p_0(Var_146, IteRbmmInfo0_118, &IteRbmmInfo_119);
              {
                Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (IteRbmmInfo_119));
              }
              hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_150, STATE_VARIABLE_Info_0_135, STATE_VARIABLE_Info_136);
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.collect_rbmm_goal_info_goal_expr\'/11", (MR_String) "shorthand");
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
  {
    MR_Word Expr0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_22, (MR_Integer) 0))));
    MR_Word Info0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_22, (MR_Integer) 1))));
    MR_Word Expr_20;
    MR_Word Info_21;

    transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0(ModuleInfo_10, ProcInfo_11, Graph_12, ActualRegionsArgsProc_13, ResurRenamingProc_14, IteRenamingProc_15, NameToRegionVar_16, Expr0_18, &Expr_20, Info0_19, &Info_21);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Goal_23 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Expr_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Info_21));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__is_create_region_call_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_10,
  MR_Word * CreatedRegion_11)
{
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
          succeeded = ((MR_tag((MR_Word) Args_6)) == (MR_Integer) 1);
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
}

static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__is_remove_region_call_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_10,
  MR_Word * RemovedRegion_11)
{
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
          succeeded = ((MR_tag((MR_Word) Args_6)) == (MR_Integer) 1);
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
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_unification_8_p_0(
  MR_Word Unification_9,
  MR_Word ModuleInfo_10,
  MR_Word Graph_11,
  MR_Word ResurRenaming_12,
  MR_Word IteRenaming_13,
  MR_Word RegionNameToVar_14,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47)
{
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
                MR_Word Var_63;
                MR_Word Var_65;

                Var_65 = hlds__hlds_goal__rbmm_info_init_0_f_0();
                {
                  Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_65));
                }
                hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_63, STATE_VARIABLE_Info_0_46, STATE_VARIABLE_Info_47);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_63;
                MR_Word Var_65;

                Var_65 = hlds__hlds_goal__rbmm_info_init_0_f_0();
                {
                  Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_65));
                }
                hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_63, STATE_VARIABLE_Info_0_46, STATE_VARIABLE_Info_47);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word AllocatedIntoRegion_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HowToConstruct_20, (MR_Integer) 0))));
                MR_Word RbmmInfo_24;
                MR_Word Var_66;
                MR_Word Var_67;
                MR_Word Var_68;
                MR_Word Var_69;
                MR_Word Var_70;
                MR_Word Var_71;

                Var_66 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
                Var_67 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
                Var_68 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), ((MR_Box) (AllocatedIntoRegion_23)));
                Var_69 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), ((MR_Box) (AllocatedIntoRegion_23)));
                Var_70 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
                {
                  RbmmInfo_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RbmmInfo_24, 0) = ((MR_Box) (Var_66));
                  MR_hl_field(MR_mktag(0), RbmmInfo_24, 1) = ((MR_Box) (Var_67));
                  MR_hl_field(MR_mktag(0), RbmmInfo_24, 2) = ((MR_Box) (Var_68));
                  MR_hl_field(MR_mktag(0), RbmmInfo_24, 3) = ((MR_Box) (Var_69));
                  MR_hl_field(MR_mktag(0), RbmmInfo_24, 4) = ((MR_Box) (Var_70));
                }
                {
                  Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (RbmmInfo_24));
                }
                hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_71, STATE_VARIABLE_Info_0_46, STATE_VARIABLE_Info_47);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DeconsCellVar_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_9, (MR_Integer) 0))));
          MR_Word Node_32;
          MR_Word NodeType_33;

          transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(Graph_11, DeconsCellVar_26, &Node_32);
          NodeType_33 = transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_f_0(Graph_11, Node_32);
          succeeded = check_hlds__type_util__type_not_stored_in_region_2_p_0(NodeType_33, ModuleInfo_10);
          if (succeeded)
          {
            MR_Word Var_53;
            MR_Word Var_55;

            Var_55 = hlds__hlds_goal__rbmm_info_init_0_f_0();
            {
              Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_55));
            }
            hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_53, STATE_VARIABLE_Info_0_46, STATE_VARIABLE_Info_47);
          }
          else
          {
            MR_String OriginalName_34;
            MR_String Name_36;
            MR_Word Var_61;
            MR_Word RbmmInfo_73;
            MR_Word ResurNameList_35;
            MR_Box conv0_ResurNameList_35;
            MR_Word RegionVar_38;
            MR_Box conv4_RegionVar_38;

            OriginalName_34 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(Graph_11, Node_32);
            succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[0]), ResurRenaming_12, ((MR_Box) (OriginalName_34)), &conv0_ResurNameList_35);
            if (succeeded)
            {
              ResurNameList_35 = ((MR_Word) (conv0_ResurNameList_35));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Box conv1_Name_36;

              conv1_Name_36 = mercury__list__det_last_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ResurNameList_35);
              Name_36 = ((MR_String) (conv1_Name_36));
            }
            else
            {
              MR_Word IteNameList_37;
              MR_Box conv2_IteNameList_37;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[0]), IteRenaming_13, ((MR_Box) (OriginalName_34)), &conv2_IteNameList_37);
              if (succeeded)
              {
                IteNameList_37 = ((MR_Word) (conv2_IteNameList_37));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Box conv3_Name_36;

                conv3_Name_36 = mercury__list__det_last_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IteNameList_37);
                Name_36 = ((MR_String) (conv3_Name_36));
              }
              else
                Name_36 = OriginalName_34;
            }
            succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), RegionNameToVar_14, ((MR_Box) (Name_36)), &conv4_RegionVar_38);
            if (succeeded)
            {
              RegionVar_38 = ((MR_Word) (conv4_RegionVar_38));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word Var_56;
              MR_Word Var_57;
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Word Var_60;

              Var_56 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
              Var_57 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
              Var_58 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), ((MR_Box) (RegionVar_38)));
              Var_59 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]));
              Var_60 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1]), ((MR_Box) (RegionVar_38)));
              {
                RbmmInfo_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RbmmInfo_73, 0) = ((MR_Box) (Var_56));
                MR_hl_field(MR_mktag(0), RbmmInfo_73, 1) = ((MR_Box) (Var_57));
                MR_hl_field(MR_mktag(0), RbmmInfo_73, 2) = ((MR_Box) (Var_58));
                MR_hl_field(MR_mktag(0), RbmmInfo_73, 3) = ((MR_Box) (Var_59));
                MR_hl_field(MR_mktag(0), RbmmInfo_73, 4) = ((MR_Box) (Var_60));
              }
            }
            else
              RbmmInfo_73 = hlds__hlds_goal__rbmm_info_init_0_f_0();
            {
              Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (RbmmInfo_73));
            }
            hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_61, STATE_VARIABLE_Info_0_46, STATE_VARIABLE_Info_47);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_50;
          MR_Word Var_52;

          Var_52 = hlds__hlds_goal__rbmm_info_init_0_f_0();
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_52));
          }
          hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_50, STATE_VARIABLE_Info_0_46, STATE_VARIABLE_Info_47);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Unification_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_50;
              MR_Word Var_52;

              Var_52 = hlds__hlds_goal__rbmm_info_init_0_f_0();
              {
                Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_52));
              }
              hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(Var_50, STATE_VARIABLE_Info_0_46, STATE_VARIABLE_Info_47);
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.collect_rbmm_goal_info_unification\'/8", (MR_String) "complicated unification");
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
        STATE_VARIABLE_RbmmInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
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
        STATE_VARIABLE_RbmmInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
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
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RemovedRegion_18));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RemovedAndAllocRegions0_22));
          }
        else
          *HeadVar__4_4 = RemovedAndAllocRegions0_22;
      }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_30;

    transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_proc_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ModuleInfo_30);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_30));
  }
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
  {
    MR_Word Var_16;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_15;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (RptaInfoTable_8));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (ResurRenamingTable_10));
      MR_hl_field(MR_mktag(0), Var_16, 5) = ((MR_Box) (IteRenamingTable_11));
      MR_hl_field(MR_mktag(0), Var_16, 6) = ((MR_Box) (NameToRegionVarTable_12));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_16, ActualRegionArgumentTable_9, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14)), &conv1_STATE_VARIABLE_ModuleInfo_15);
    *STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_15));
  }
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
