/*
** Automatically generated from `rbmm.add_rbmm_goal_infos.m'
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


/* :- module transform_hlds.rbmm.add_rbmm_goal_infos. */
/* :- implementation. */

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
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__LambdaHeadVar__1_167,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__LambdaHeadVar__2_168,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__LambdaHeadVar__3_169);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_case_9_p_0(
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_11,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Graph_12,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_13,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_14,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_15,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVar_16,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Case_0_22,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Case_23);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_proc_8_p_0(
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RptaInfoTable_9,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingTable_10,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingTable_11,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVarTable_12,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__PPId_13,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_14,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_30);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_6(
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_5(
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1,
  MR_Box * transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_4(
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_3(
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1,
  MR_Box * transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_2(
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_1(
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1,
  MR_Box * transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0(
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_12,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_13,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Graph_14,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_15,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_16,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_17,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVar_18,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_134,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_135,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_136);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_11,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Graph_12,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_13,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_14,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_15,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVar_16,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Goal_0_22,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Goal_23);

static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__is_create_region_call_3_p_0(
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__CreatedRegion_11);

static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__is_remove_region_call_3_p_0(
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegion_11);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_unification_8_p_0(
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Graph_11,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenaming_12,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenaming_13,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RegionNameToVar_14,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_46,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_47);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_goals_3_p_0(
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_3);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_conjunction_3_p_0(
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_3);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__keep_allocated_regions_4_p_0(
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Graph_3,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4);

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_7_p_0_1(
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_3,
  MR_Box * transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_4);


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
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__add_rbmm_goal_infos__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &transform_hlds__rbmm__add_rbmm_goal_infos__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__add_rbmm_goal_infos__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &transform_hlds__rbmm__add_rbmm_goal_infos__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__add_rbmm_goal_infos__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__add_rbmm_goal_infos__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__add_rbmm_goal_infos__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__add_rbmm_goal_infos__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__add_rbmm_goal_infos__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__add_rbmm_goal_infos__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__IntroducedFrom__pred__collect_rbmm_goal_info_goal_expr__296__1_3_p_0(
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__LambdaHeadVar__1_167,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__LambdaHeadVar__2_168,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__LambdaHeadVar__3_169)
{
  {
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__G_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__LambdaHeadVar__1_167, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__LambdaHeadVar__1_167, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__LambdaHeadVar__1_167, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *transform_hlds__rbmm__add_rbmm_goal_infos__LambdaHeadVar__3_169 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__G_99));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__LambdaHeadVar__2_168));
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_case_9_p_0(
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_11,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Graph_12,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_13,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_14,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_15,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVar_16,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Case_0_22,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Case_23)
{
  {
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Case_0_22, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Case_0_22, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Case_0_22, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Goal_21;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Expr0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal0_20, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Info0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal0_20, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Expr_37;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Info_38;

    {
      transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10, transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_11, transform_hlds__rbmm__add_rbmm_goal_infos__Graph_12, transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_13, transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_14, transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_15, transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVar_16, transform_hlds__rbmm__add_rbmm_goal_infos__Expr0_35, &transform_hlds__rbmm__add_rbmm_goal_infos__Expr_37, transform_hlds__rbmm__add_rbmm_goal_infos__Info0_36, &transform_hlds__rbmm__add_rbmm_goal_infos__Info_38);
    }
    {
      transform_hlds__rbmm__add_rbmm_goal_infos__Goal_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal_21, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Expr_37));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal_21, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Info_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Case_23 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__MainConsId_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__OtherConsIds_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Goal_21));
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_proc_8_p_0(
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RptaInfoTable_9,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingTable_10,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingTable_11,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVarTable_12,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__PPId_13,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_14,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_30)
{
  {
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_32_32;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__PredInfo_16;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo0_17;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Body0_18;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RptaInfo_19;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Graph_20;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_23;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_25;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVar_26;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Body_27;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_28;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Expr0_51;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Info0_52;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Expr_53;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Info_54;
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv0_RptaInfo_19;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_21;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc0_22;
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv1_ResurRenamingProc0_22;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc0_24;
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv2_IteRenamingProc0_24;
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv3_NameToRegionVar_26;

    {
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_0_29, transform_hlds__rbmm__add_rbmm_goal_infos__PPId_13, &transform_hlds__rbmm__add_rbmm_goal_infos__PredInfo_16, &transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo0_17);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo0_17, &transform_hlds__rbmm__add_rbmm_goal_infos__Body0_18);
    }
    transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    {
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_32_32, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__add_rbmm_goal_infos__RptaInfoTable_9, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__PPId_13)), &transform_hlds__rbmm__add_rbmm_goal_infos__conv0_RptaInfo_19);
    }
    transform_hlds__rbmm__add_rbmm_goal_infos__RptaInfo_19 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv0_RptaInfo_19);
    transform_hlds__rbmm__add_rbmm_goal_infos__Graph_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RptaInfo_19, (MR_Integer) 0)));
    transform_hlds__rbmm__add_rbmm_goal_infos__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RptaInfo_19, (MR_Integer) 1)));
    {
      transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_32_32, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[2], transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingTable_10, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__PPId_13)), &transform_hlds__rbmm__add_rbmm_goal_infos__conv1_ResurRenamingProc0_22);
    }
    if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
      {
        transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc0_22 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv1_ResurRenamingProc0_22);
        transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = MR_TRUE;
      }
    if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
      transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_23 = transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc0_22;
    else
      {
        {
          transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_23 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[1]);
        }
      }
    {
      transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_32_32, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[2], transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingTable_11, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__PPId_13)), &transform_hlds__rbmm__add_rbmm_goal_infos__conv2_IteRenamingProc0_24);
    }
    if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
      {
        transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc0_24 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv2_IteRenamingProc0_24);
        transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = MR_TRUE;
      }
    if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
      transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_25 = transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc0_24;
    else
      {
        {
          transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_25 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[1]);
        }
      }
    {
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_32_32, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[3], transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVarTable_12, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__PPId_13)), &transform_hlds__rbmm__add_rbmm_goal_infos__conv3_NameToRegionVar_26);
    }
    transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVar_26 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv3_NameToRegionVar_26);
    transform_hlds__rbmm__add_rbmm_goal_infos__Expr0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Body0_18, (MR_Integer) 0)));
    transform_hlds__rbmm__add_rbmm_goal_infos__Info0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Body0_18, (MR_Integer) 1)));
    {
      transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_0_29, transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo0_17, transform_hlds__rbmm__add_rbmm_goal_infos__Graph_20, transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_14, transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_23, transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_25, transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVar_26, transform_hlds__rbmm__add_rbmm_goal_infos__Expr0_51, &transform_hlds__rbmm__add_rbmm_goal_infos__Expr_53, transform_hlds__rbmm__add_rbmm_goal_infos__Info0_52, &transform_hlds__rbmm__add_rbmm_goal_infos__Info_54);
    }
    {
      transform_hlds__rbmm__add_rbmm_goal_infos__Body_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Body_27, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Expr_53));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Body_27, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Info_54));
    }
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Body_27, transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo0_17, &transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_28);
    }
    {
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__PPId_13, transform_hlds__rbmm__add_rbmm_goal_infos__PredInfo_16, transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_28, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_0_29, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_30);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_6(
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure = transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__conv4_LambdaHeadVar__3_169;

    {
      transform_hlds__rbmm__add_rbmm_goal_infos__IntroducedFrom__pred__collect_rbmm_goal_info_goal_expr__296__1_3_p_0(((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2), &transform_hlds__rbmm__add_rbmm_goal_infos__conv4_LambdaHeadVar__3_169);
    }
    *transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__conv4_LambdaHeadVar__3_169));
  }
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_5(
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1,
  MR_Box * transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure = transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__conv3_STATE_VARIABLE_Case_23;

    {
      transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_case_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 9))), ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1), &transform_hlds__rbmm__add_rbmm_goal_infos__conv3_STATE_VARIABLE_Case_23);
    }
    *transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2 = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__conv3_STATE_VARIABLE_Case_23));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_4(
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure = transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg;

    {
      transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = check_hlds__type_util__is_region_var_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1));
    }
    return transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_3(
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1,
  MR_Box * transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure = transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__conv1_STATE_VARIABLE_Goal_23;

    {
      transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 9))), ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1), &transform_hlds__rbmm__add_rbmm_goal_infos__conv1_STATE_VARIABLE_Goal_23);
    }
    *transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2 = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__conv1_STATE_VARIABLE_Goal_23));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_2(
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure = transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg;

    {
      transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = check_hlds__type_util__is_region_var_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1));
    }
    return transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_1(
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1,
  MR_Box * transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure = transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__conv0_STATE_VARIABLE_Goal_23;

    {
      transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 9))), ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1), &transform_hlds__rbmm__add_rbmm_goal_infos__conv0_STATE_VARIABLE_Goal_23);
    }
    *transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2 = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__conv0_STATE_VARIABLE_Goal_23));
  }
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0(
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_12,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_13,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Graph_14,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_15,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_16,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_17,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVar_18,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_134,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_135,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_136)
{
  {
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Info_20;
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Goal0_102 = (MR_Word) MR_body(((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133), (MR_Integer) 0);
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_159;
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_255;
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Goal_256;
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_103;

          {
            transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_12, transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_13, transform_hlds__rbmm__add_rbmm_goal_infos__Graph_14, transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_15, transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_16, transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_17, transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVar_18, transform_hlds__rbmm__add_rbmm_goal_infos__Goal0_102, &transform_hlds__rbmm__add_rbmm_goal_infos__Goal_256);
          }
          *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_134 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__Goal_256);
          transform_hlds__rbmm__add_rbmm_goal_infos__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal_256, (MR_Integer) 0)));
          transform_hlds__rbmm__add_rbmm_goal_infos__Info_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal_256, (MR_Integer) 1)));
          {
            transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_255 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__Info_20);
          }
          {
            transform_hlds__rbmm__add_rbmm_goal_infos__Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_159, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_255));
          }
          {
            hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Var_159, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_135, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_136);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Unification_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 3)));
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ProgPoint_26;
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenaming_28;
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenaming_30;
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 0)));
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 1)));
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 2)));
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 4)));
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenaming0_27;
          MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv6_ResurRenaming0_27;
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenaming0_29;
          MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv7_IteRenaming0_29;

          {
            transform_hlds__rbmm__add_rbmm_goal_infos__ProgPoint_26 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_135);
          }
          {
            transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[1], transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_16, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ProgPoint_26)), &transform_hlds__rbmm__add_rbmm_goal_infos__conv6_ResurRenaming0_27);
          }
          if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
            {
              transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenaming0_27 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv6_ResurRenaming0_27);
              transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = MR_TRUE;
            }
          if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
            transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenaming_28 = transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenaming0_27;
          else
            {
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenaming_28 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[0]);
              }
            }
          {
            transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[1], transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_17, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ProgPoint_26)), &transform_hlds__rbmm__add_rbmm_goal_infos__conv7_IteRenaming0_29);
          }
          if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
            {
              transform_hlds__rbmm__add_rbmm_goal_infos__IteRenaming0_29 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv7_IteRenaming0_29);
              transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = MR_TRUE;
            }
          if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
            transform_hlds__rbmm__add_rbmm_goal_infos__IteRenaming_30 = transform_hlds__rbmm__add_rbmm_goal_infos__IteRenaming0_29;
          else
            {
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__IteRenaming_30 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[0]);
              }
            }
          {
            transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_unification_8_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Unification_24, transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_12, transform_hlds__rbmm__add_rbmm_goal_infos__Graph_14, transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenaming_28, transform_hlds__rbmm__add_rbmm_goal_infos__IteRenaming_30, transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVar_18, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_135, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_136);
          }
          *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_134 = transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__PredId_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 0)));
          MR_Integer transform_hlds__rbmm__add_rbmm_goal_infos__ProcId_32 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 1)));
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Args_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 2)));
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CalleePPId_37;
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 3)));
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 4)));
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 5)));
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CreatedRegion_38;

          {
            transform_hlds__rbmm__add_rbmm_goal_infos__CalleePPId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CalleePPId_37, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__PredId_31));
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CalleePPId_37, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ProcId_32));
          }
          {
            transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = transform_hlds__rbmm__add_rbmm_goal_infos__is_create_region_call_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_12, &transform_hlds__rbmm__add_rbmm_goal_infos__CreatedRegion_38);
          }
          if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
            {
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_272_272 = (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1];
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_39;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_192;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_193;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_194;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_195;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_196;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_197;

              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_192 = mercury__set__make_singleton_set_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_272_272, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__CreatedRegion_38)));
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_193 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_272_272);
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_194 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_272_272);
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_195 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_272_272);
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_196 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_272_272);
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_39, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_192));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_39, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_193));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_39, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_194));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_39, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_195));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_39, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_196));
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_197, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_39));
              }
              {
                hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Var_197, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_135, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_136);
              }
            }
          else
            {
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegion_40;

              {
                transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = transform_hlds__rbmm__add_rbmm_goal_infos__is_remove_region_call_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_12, &transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegion_40);
              }
              if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
                {
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_273_273 = (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1];
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_199;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_200;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_201;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_202;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_203;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_204;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_223;

                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__Var_199 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_273_273);
                  }
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__Var_200 = mercury__set__make_singleton_set_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_273_273, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegion_40)));
                  }
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__Var_201 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_273_273);
                  }
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__Var_202 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_273_273);
                  }
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__Var_203 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_273_273);
                  }
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_223 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_223, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_199));
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_223, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_200));
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_223, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_201));
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_223, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_202));
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_223, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_203));
                  }
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_204, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_223));
                  }
                  {
                    hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Var_204, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_135, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_136);
                  }
                }
              else
                {
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_206;

                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_206, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__CalleePPId_37));
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Var_206, transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_12);
                  }
                  if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
                    {
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_208;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_210;

                      {
                        transform_hlds__rbmm__add_rbmm_goal_infos__Var_210 = hlds__hlds_goal__rbmm_info_init_0_f_0();
                      }
                      {
                        transform_hlds__rbmm__add_rbmm_goal_infos__Var_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_208, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_210));
                      }
                      {
                        hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Var_208, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_135, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_136);
                      }
                    }
                  else
                    {
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_274_274;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_278_278;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CallSite_41;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__VarTypes_42;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RegionArgs_43;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionArgs_44;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Constants_45;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Inputs_46;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CarriedRegions_48;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RemovedAndCreated_49;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegions_50;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CreatedRegions_51;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedIntoAndReadFrom_52;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Globals_53;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__UseAllocRegions_54;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedIntoRegions_56;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_211;
                      MR_Integer transform_hlds__rbmm__add_rbmm_goal_infos__Var_212;
                      MR_Integer transform_hlds__rbmm__add_rbmm_goal_infos__Var_213;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_214;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_217;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_218;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_219;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_220;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_224;
                      MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv2_ActualRegionArgs_44;
                      MR_Word transform_hlds__rbmm__add_rbmm_goal_infos___Outputs_47;

                      {
                        transform_hlds__rbmm__add_rbmm_goal_infos__CallSite_41 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_135);
                      }
                      {
                        hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_13, &transform_hlds__rbmm__add_rbmm_goal_infos__VarTypes_42);
                      }
                      transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_274_274 = (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1];
                      {
                        transform_hlds__rbmm__add_rbmm_goal_infos__Var_211 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_211, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_5[0]));
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_211, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_4));
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_211, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_211, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__VarTypes_42));
                      }
                      {
                        transform_hlds__rbmm__add_rbmm_goal_infos__RegionArgs_43 = mercury__list__filter_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_274_274, transform_hlds__rbmm__add_rbmm_goal_infos__Var_211, transform_hlds__rbmm__add_rbmm_goal_infos__Args_33);
                      }
                      {
                        mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0, transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_15, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__CallSite_41)), &transform_hlds__rbmm__add_rbmm_goal_infos__conv2_ActualRegionArgs_44);
                      }
                      transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionArgs_44 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv2_ActualRegionArgs_44);
                      transform_hlds__rbmm__add_rbmm_goal_infos__Constants_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionArgs_44, (MR_Integer) 0)));
                      transform_hlds__rbmm__add_rbmm_goal_infos__Inputs_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionArgs_44, (MR_Integer) 1)));
                      transform_hlds__rbmm__add_rbmm_goal_infos___Outputs_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionArgs_44, (MR_Integer) 2)));
                      transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_278_278 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
                      {
                        transform_hlds__rbmm__add_rbmm_goal_infos__Var_212 = mercury__list__length_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_278_278, transform_hlds__rbmm__add_rbmm_goal_infos__Constants_45);
                      }
                      {
                        mercury__list__det_split_list_4_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_274_274, transform_hlds__rbmm__add_rbmm_goal_infos__Var_212, transform_hlds__rbmm__add_rbmm_goal_infos__RegionArgs_43, &transform_hlds__rbmm__add_rbmm_goal_infos__CarriedRegions_48, &transform_hlds__rbmm__add_rbmm_goal_infos__RemovedAndCreated_49);
                      }
                      {
                        transform_hlds__rbmm__add_rbmm_goal_infos__Var_213 = mercury__list__length_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_278_278, transform_hlds__rbmm__add_rbmm_goal_infos__Inputs_46);
                      }
                      {
                        mercury__list__det_split_list_4_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_274_274, transform_hlds__rbmm__add_rbmm_goal_infos__Var_213, transform_hlds__rbmm__add_rbmm_goal_infos__RemovedAndCreated_49, &transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegions_50, &transform_hlds__rbmm__add_rbmm_goal_infos__CreatedRegions_51);
                      }
                      {
                        transform_hlds__rbmm__add_rbmm_goal_infos__Var_214 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_274_274, transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegions_50, transform_hlds__rbmm__add_rbmm_goal_infos__CarriedRegions_48);
                      }
                      {
                        transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedIntoAndReadFrom_52 = mercury__set__from_list_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_274_274, transform_hlds__rbmm__add_rbmm_goal_infos__Var_214);
                      }
                      {
                        hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_12, &transform_hlds__rbmm__add_rbmm_goal_infos__Globals_53);
                      }
                      {
                        libs__globals__lookup_bool_option_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Globals_53, (MR_Integer) 240, &transform_hlds__rbmm__add_rbmm_goal_infos__UseAllocRegions_54);
                      }
                      switch (transform_hlds__rbmm__add_rbmm_goal_infos__UseAllocRegions_54) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedIntoRegions_56 = transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedIntoAndReadFrom_52;
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RemovedAndAllocRegions_55;
                            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_216;

                            {
                              transform_hlds__rbmm__add_rbmm_goal_infos__keep_allocated_regions_4_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Inputs_46, transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegions_50, transform_hlds__rbmm__add_rbmm_goal_infos__Graph_14, &transform_hlds__rbmm__add_rbmm_goal_infos__RemovedAndAllocRegions_55);
                            }
                            {
                              transform_hlds__rbmm__add_rbmm_goal_infos__Var_216 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_274_274, transform_hlds__rbmm__add_rbmm_goal_infos__RemovedAndAllocRegions_55, transform_hlds__rbmm__add_rbmm_goal_infos__CarriedRegions_48);
                            }
                            {
                              transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedIntoRegions_56 = mercury__set__from_list_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_274_274, transform_hlds__rbmm__add_rbmm_goal_infos__Var_216);
                            }
                          }
                          break;
                      }
                      {
                        transform_hlds__rbmm__add_rbmm_goal_infos__Var_217 = mercury__set__from_list_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_274_274, transform_hlds__rbmm__add_rbmm_goal_infos__CreatedRegions_51);
                      }
                      {
                        transform_hlds__rbmm__add_rbmm_goal_infos__Var_218 = mercury__set__from_list_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_274_274, transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegions_50);
                      }
                      {
                        transform_hlds__rbmm__add_rbmm_goal_infos__Var_219 = mercury__set__from_list_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_274_274, transform_hlds__rbmm__add_rbmm_goal_infos__CarriedRegions_48);
                      }
                      {
                        transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_224 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_224, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_217));
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_224, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_218));
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_224, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_219));
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_224, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedIntoRegions_56));
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_224, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedIntoAndReadFrom_52));
                      }
                      {
                        transform_hlds__rbmm__add_rbmm_goal_infos__Var_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_220, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RbmmGoalInfo_224));
                      }
                      {
                        hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Var_220, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_135, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_136);
                      }
                    }
                }
            }
          *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_134 = transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "transform_hlds.rbmm.add_rbmm_goal_infos", (MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.collect_rbmm_goal_info_goal_expr\'/11", (MR_String) "generic call not handled");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "transform_hlds.rbmm.add_rbmm_goal_infos", (MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.collect_rbmm_goal_info_goal_expr\'/11", (MR_String) "call to foreign proc not handled");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_281_281;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_282_282;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_284_284;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ConjType_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 1)));
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Conjs0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 2)));
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Conjs_59;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_60;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Created_61;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Removed_62;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto_64;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Used_65;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NonLocals_66;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NonLocalRegionsSet_67;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NonLocalRegions_68;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Carried_69;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_70;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_185;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_187;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_188;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_189;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_190;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__VarTypes_227;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_63;

              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_185, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_185, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_1));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_185, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_185, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_12));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_185, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_13));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_185, 5) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Graph_14));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_185, 6) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_15));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_185, 7) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_16));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_185, 8) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_17));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_185, 9) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVar_18));
              }
              transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_281_281 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                mercury__list__map_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_281_281, transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_281_281, transform_hlds__rbmm__add_rbmm_goal_infos__Var_185, transform_hlds__rbmm__add_rbmm_goal_infos__Conjs0_58, &transform_hlds__rbmm__add_rbmm_goal_infos__Conjs_59);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_134 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ConjType_57));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Conjs_59));
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_187 = hlds__hlds_goal__rbmm_info_init_0_f_0();
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_conjunction_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Conjs_59, transform_hlds__rbmm__add_rbmm_goal_infos__Var_187, &transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_60);
              }
              transform_hlds__rbmm__add_rbmm_goal_infos__Created_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_60, (MR_Integer) 0)));
              transform_hlds__rbmm__add_rbmm_goal_infos__Removed_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_60, (MR_Integer) 1)));
              transform_hlds__rbmm__add_rbmm_goal_infos__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_60, (MR_Integer) 2)));
              transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_60, (MR_Integer) 3)));
              transform_hlds__rbmm__add_rbmm_goal_infos__Used_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_60, (MR_Integer) 4)));
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__NonLocals_66 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_135);
              }
              {
                hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_13, &transform_hlds__rbmm__add_rbmm_goal_infos__VarTypes_227);
              }
              transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_282_282 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_188 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_188, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_188, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_2));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_188, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_188, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__VarTypes_227));
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__NonLocalRegionsSet_67 = parse_tree__set_of_var__filter_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_282_282, transform_hlds__rbmm__add_rbmm_goal_infos__Var_188, transform_hlds__rbmm__add_rbmm_goal_infos__NonLocals_66);
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__NonLocalRegions_68 = parse_tree__set_of_var__bitset_to_set_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_282_282, transform_hlds__rbmm__add_rbmm_goal_infos__NonLocalRegionsSet_67);
              }
              transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_284_284 = (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1];
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_189 = mercury__set__union_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_284_284, transform_hlds__rbmm__add_rbmm_goal_infos__Created_61, transform_hlds__rbmm__add_rbmm_goal_infos__Removed_62);
              }
              {
                mercury__set__difference_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_284_284, transform_hlds__rbmm__add_rbmm_goal_infos__NonLocalRegions_68, transform_hlds__rbmm__add_rbmm_goal_infos__Var_189, &transform_hlds__rbmm__add_rbmm_goal_infos__Carried_69);
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_70, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Created_61));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_70, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Removed_62));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_70, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Carried_69));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_70, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto_64));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_70, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Used_65));
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_190, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_70));
              }
              {
                hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Var_190, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_135, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_136);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_287_287;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Disjs0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 1)));
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Disjs_72;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_175;

              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_175, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_175, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_3));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_175, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_175, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_12));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_175, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_13));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_175, 5) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Graph_14));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_175, 6) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_15));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_175, 7) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_16));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_175, 8) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_17));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_175, 9) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVar_18));
              }
              transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_287_287 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                mercury__list__map_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_287_287, transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_287_287, transform_hlds__rbmm__add_rbmm_goal_infos__Var_175, transform_hlds__rbmm__add_rbmm_goal_infos__Disjs0_71, &transform_hlds__rbmm__add_rbmm_goal_infos__Disjs_72);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_134 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Disjs_72));
              }
              if ((transform_hlds__rbmm__add_rbmm_goal_infos__Disjs_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_182;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_184;

                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__Var_184 = hlds__hlds_goal__rbmm_info_init_0_f_0();
                  }
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_182, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_184));
                  }
                  {
                    hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Var_182, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_135, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_136);
                  }
                }
              else
                {
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_288_288;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__DInfo_74;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__DRbmmInfo_76;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Disjs_72, (MR_Integer) 0)));
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_178;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_179;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_180;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_228;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Created_229;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Removed_230;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Carried_231;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_232;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Disjs_72, (MR_Integer) 1)));
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_177, (MR_Integer) 0)));
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_77;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_78;

                  transform_hlds__rbmm__add_rbmm_goal_infos__DInfo_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_177, (MR_Integer) 1)));
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__DRbmmInfo_76 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__DInfo_74);
                  }
                  transform_hlds__rbmm__add_rbmm_goal_infos__Created_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__DRbmmInfo_76, (MR_Integer) 0)));
                  transform_hlds__rbmm__add_rbmm_goal_infos__Removed_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__DRbmmInfo_76, (MR_Integer) 1)));
                  transform_hlds__rbmm__add_rbmm_goal_infos__Carried_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__DRbmmInfo_76, (MR_Integer) 2)));
                  transform_hlds__rbmm__add_rbmm_goal_infos__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__DRbmmInfo_76, (MR_Integer) 3)));
                  transform_hlds__rbmm__add_rbmm_goal_infos__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__DRbmmInfo_76, (MR_Integer) 4)));
                  transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_288_288 = (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1];
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__Var_178 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_288_288);
                  }
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__Var_179 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_288_288);
                  }
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_228 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_228, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Created_229));
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_228, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Removed_230));
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_228, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Carried_231));
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_228, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_178));
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_228, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_179));
                  }
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_goals_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Disjs_72, transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo0_228, &transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_232);
                  }
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_180, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_232));
                  }
                  {
                    hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Var_180, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_135, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_136);
                  }
                }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_291_291;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__A_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 1)));
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__B_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 2)));
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Cases0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 3)));
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Cases_82;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_161;

              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_161, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_161, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0_5));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_161, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_161, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_12));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_161, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_13));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_161, 5) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Graph_14));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_161, 6) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_15));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_161, 7) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_16));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_161, 8) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_17));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_161, 9) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVar_18));
              }
              transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_291_291 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
              {
                mercury__list__map_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_291_291, transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_291_291, transform_hlds__rbmm__add_rbmm_goal_infos__Var_161, transform_hlds__rbmm__add_rbmm_goal_infos__Cases0_81, &transform_hlds__rbmm__add_rbmm_goal_infos__Cases_82);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_134 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__A_79));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__B_80));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Cases_82));
              }
              if ((transform_hlds__rbmm__add_rbmm_goal_infos__Cases_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.add_rbmm_goal_infos", (MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.collect_rbmm_goal_info_goal_expr\'/11", (MR_String) "empty switch");
                    return;
                  }
                }
              else
                {
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_292_292;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Case_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Cases_82, (MR_Integer) 0)));
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Goal_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Case_83, (MR_Integer) 2)));
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CaseInfo_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal_87, (MR_Integer) 1)));
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CaseRbmmInfo_90;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__SwitchRbmmInfo0_93;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Goals_100;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__SwitchRbmmInfo_101;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_163;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_164;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_170;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Created_246;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Removed_247;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Carried_248;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Cases_82, (MR_Integer) 1)));
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Case_83, (MR_Integer) 0)));
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Case_83, (MR_Integer) 1)));
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal_87, (MR_Integer) 0)));
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_91;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_92;
                  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv5_Goals_100;

                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__CaseRbmmInfo_90 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__CaseInfo_89);
                  }
                  transform_hlds__rbmm__add_rbmm_goal_infos__Created_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CaseRbmmInfo_90, (MR_Integer) 0)));
                  transform_hlds__rbmm__add_rbmm_goal_infos__Removed_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CaseRbmmInfo_90, (MR_Integer) 1)));
                  transform_hlds__rbmm__add_rbmm_goal_infos__Carried_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CaseRbmmInfo_90, (MR_Integer) 2)));
                  transform_hlds__rbmm__add_rbmm_goal_infos__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CaseRbmmInfo_90, (MR_Integer) 3)));
                  transform_hlds__rbmm__add_rbmm_goal_infos__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CaseRbmmInfo_90, (MR_Integer) 4)));
                  transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_292_292 = (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1];
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__Var_163 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_292_292);
                  }
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__Var_164 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_292_292);
                  }
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__SwitchRbmmInfo0_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__SwitchRbmmInfo0_93, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Created_246));
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__SwitchRbmmInfo0_93, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Removed_247));
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__SwitchRbmmInfo0_93, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Carried_248));
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__SwitchRbmmInfo0_93, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_163));
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__SwitchRbmmInfo0_93, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_164));
                  }
                  {
                    mercury__list__foldl_4_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeCtorInfo_291_291, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[2], (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[4], transform_hlds__rbmm__add_rbmm_goal_infos__Cases_82, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__rbmm__add_rbmm_goal_infos__conv5_Goals_100);
                  }
                  transform_hlds__rbmm__add_rbmm_goal_infos__Goals_100 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv5_Goals_100);
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_goals_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Goals_100, transform_hlds__rbmm__add_rbmm_goal_infos__SwitchRbmmInfo0_93, &transform_hlds__rbmm__add_rbmm_goal_infos__SwitchRbmmInfo_101);
                  }
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_170, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__SwitchRbmmInfo_101));
                  }
                  {
                    hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Var_170, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_135, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_136);
                  }
                }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Reason_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 1)));
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_156;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Info_257;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_258;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Goal_259;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Goal0_260 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 2)));
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_105;

              {
                transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_12, transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_13, transform_hlds__rbmm__add_rbmm_goal_infos__Graph_14, transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_15, transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_16, transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_17, transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVar_18, transform_hlds__rbmm__add_rbmm_goal_infos__Goal0_260, &transform_hlds__rbmm__add_rbmm_goal_infos__Goal_259);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_134 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Reason_104));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Goal_259));
              }
              transform_hlds__rbmm__add_rbmm_goal_infos__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal_259, (MR_Integer) 0)));
              transform_hlds__rbmm__add_rbmm_goal_infos__Info_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal_259, (MR_Integer) 1)));
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_258 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__Info_257);
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_156, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_258));
              }
              {
                hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Var_156, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_135, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_136);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_294_294;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Vars_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 1)));
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Cond0_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 2)));
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Then0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 3)));
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Else0_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_0_133, (MR_Integer) 4)));
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Cond_110;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Then_111;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Else_112;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ElseInfo_114;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ElseRbmmInfo_115;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRbmmInfo0_118;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRbmmInfo_119;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_147;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_148;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_149;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_150;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_151;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_153;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Created_261;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Removed_262;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Carried_263;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_113;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_116;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_117;

              {
                transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_12, transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_13, transform_hlds__rbmm__add_rbmm_goal_infos__Graph_14, transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_15, transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_16, transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_17, transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVar_18, transform_hlds__rbmm__add_rbmm_goal_infos__Cond0_107, &transform_hlds__rbmm__add_rbmm_goal_infos__Cond_110);
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_12, transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_13, transform_hlds__rbmm__add_rbmm_goal_infos__Graph_14, transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_15, transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_16, transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_17, transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVar_18, transform_hlds__rbmm__add_rbmm_goal_infos__Then0_108, &transform_hlds__rbmm__add_rbmm_goal_infos__Then_111);
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_9_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_12, transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_13, transform_hlds__rbmm__add_rbmm_goal_infos__Graph_14, transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_15, transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_16, transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_17, transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVar_18, transform_hlds__rbmm__add_rbmm_goal_infos__Else0_109, &transform_hlds__rbmm__add_rbmm_goal_infos__Else_112);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Expr_134 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Vars_106));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Cond_110));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Then_111));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Else_112));
              }
              transform_hlds__rbmm__add_rbmm_goal_infos__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Else_112, (MR_Integer) 0)));
              transform_hlds__rbmm__add_rbmm_goal_infos__ElseInfo_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Else_112, (MR_Integer) 1)));
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__ElseRbmmInfo_115 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__ElseInfo_114);
              }
              transform_hlds__rbmm__add_rbmm_goal_infos__Created_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__ElseRbmmInfo_115, (MR_Integer) 0)));
              transform_hlds__rbmm__add_rbmm_goal_infos__Removed_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__ElseRbmmInfo_115, (MR_Integer) 1)));
              transform_hlds__rbmm__add_rbmm_goal_infos__Carried_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__ElseRbmmInfo_115, (MR_Integer) 2)));
              transform_hlds__rbmm__add_rbmm_goal_infos__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__ElseRbmmInfo_115, (MR_Integer) 3)));
              transform_hlds__rbmm__add_rbmm_goal_infos__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__ElseRbmmInfo_115, (MR_Integer) 4)));
              transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_294_294 = (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1];
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_147 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_294_294);
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_148 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_294_294);
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__IteRbmmInfo0_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__IteRbmmInfo0_118, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Created_261));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__IteRbmmInfo0_118, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Removed_262));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__IteRbmmInfo0_118, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Carried_263));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__IteRbmmInfo0_118, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_147));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__IteRbmmInfo0_118, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_148));
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_151, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Else_112));
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_150, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Then_111));
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_150, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_151));
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_149, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Cond_110));
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_149, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_150));
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_goals_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Var_149, transform_hlds__rbmm__add_rbmm_goal_infos__IteRbmmInfo0_118, &transform_hlds__rbmm__add_rbmm_goal_infos__IteRbmmInfo_119);
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_153, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__IteRbmmInfo_119));
              }
              {
                hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Var_153, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_135, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_136);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.add_rbmm_goal_infos", (MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.collect_rbmm_goal_info_goal_expr\'/11", (MR_String) "shorthand");
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
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_11,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Graph_12,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_13,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_14,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_15,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVar_16,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Goal_0_22,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Goal_23)
{
  {
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Expr0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Goal_0_22, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Info0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Goal_0_22, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Expr_20;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Info_21;

    {
      transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_goal_expr_11_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10, transform_hlds__rbmm__add_rbmm_goal_infos__ProcInfo_11, transform_hlds__rbmm__add_rbmm_goal_infos__Graph_12, transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionsArgsProc_13, transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingProc_14, transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingProc_15, transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVar_16, transform_hlds__rbmm__add_rbmm_goal_infos__Expr0_18, &transform_hlds__rbmm__add_rbmm_goal_infos__Expr_20, transform_hlds__rbmm__add_rbmm_goal_infos__Info0_19, &transform_hlds__rbmm__add_rbmm_goal_infos__Info_21);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Goal_23 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Expr_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Info_21));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__is_create_region_call_3_p_0(
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__CreatedRegion_11)
{
  {
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__PredId_4;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Args_6;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__PredInfo_12;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_13;
    MR_String transform_hlds__rbmm__add_rbmm_goal_infos__Var_14;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_15;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_16;
    MR_String transform_hlds__rbmm__add_rbmm_goal_infos__Var_17;
    MR_Integer transform_hlds__rbmm__add_rbmm_goal_infos___ProcId_5;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_7;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_8;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_9;

    if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
      {
        transform_hlds__rbmm__add_rbmm_goal_infos__PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 0)));
        transform_hlds__rbmm__add_rbmm_goal_infos___ProcId_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 1)));
        transform_hlds__rbmm__add_rbmm_goal_infos__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 2)));
        transform_hlds__rbmm__add_rbmm_goal_infos__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 3)));
        transform_hlds__rbmm__add_rbmm_goal_infos__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 4)));
        transform_hlds__rbmm__add_rbmm_goal_infos__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 5)));
        {
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10, transform_hlds__rbmm__add_rbmm_goal_infos__PredId_4, &transform_hlds__rbmm__add_rbmm_goal_infos__PredInfo_12);
        }
        {
          transform_hlds__rbmm__add_rbmm_goal_infos__Var_13 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__PredInfo_12);
        }
        {
          transform_hlds__rbmm__add_rbmm_goal_infos__Var_16 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
        }
        {
          transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__rbmm__add_rbmm_goal_infos__Var_13, transform_hlds__rbmm__add_rbmm_goal_infos__Var_16);
        }
        if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
          {
            {
              transform_hlds__rbmm__add_rbmm_goal_infos__Var_14 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__PredInfo_12);
            }
            {
              transform_hlds__rbmm__add_rbmm_goal_infos__Var_17 = transform_hlds__rbmm__region_transformation__create_region_pred_name_0_f_0();
            }
            transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = (strcmp(transform_hlds__rbmm__add_rbmm_goal_infos__Var_14, transform_hlds__rbmm__add_rbmm_goal_infos__Var_17) == 0);
            if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__Args_6)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
                  {
                    *transform_hlds__rbmm__add_rbmm_goal_infos__CreatedRegion_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Args_6, (MR_Integer) 0)));
                    transform_hlds__rbmm__add_rbmm_goal_infos__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Args_6, (MR_Integer) 1)));
                    transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = (transform_hlds__rbmm__add_rbmm_goal_infos__Var_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
          }
      }
    return transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__is_remove_region_call_3_p_0(
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegion_11)
{
  {
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__PredId_4;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Args_6;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__PredInfo_12;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_13;
    MR_String transform_hlds__rbmm__add_rbmm_goal_infos__Var_14;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_15;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_16;
    MR_String transform_hlds__rbmm__add_rbmm_goal_infos__Var_17;
    MR_Integer transform_hlds__rbmm__add_rbmm_goal_infos___ProcId_5;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_7;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_8;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_9;

    if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
      {
        transform_hlds__rbmm__add_rbmm_goal_infos__PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 0)));
        transform_hlds__rbmm__add_rbmm_goal_infos___ProcId_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 1)));
        transform_hlds__rbmm__add_rbmm_goal_infos__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 2)));
        transform_hlds__rbmm__add_rbmm_goal_infos__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 3)));
        transform_hlds__rbmm__add_rbmm_goal_infos__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 4)));
        transform_hlds__rbmm__add_rbmm_goal_infos__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 5)));
        {
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10, transform_hlds__rbmm__add_rbmm_goal_infos__PredId_4, &transform_hlds__rbmm__add_rbmm_goal_infos__PredInfo_12);
        }
        {
          transform_hlds__rbmm__add_rbmm_goal_infos__Var_13 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__PredInfo_12);
        }
        {
          transform_hlds__rbmm__add_rbmm_goal_infos__Var_16 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
        }
        {
          transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__rbmm__add_rbmm_goal_infos__Var_13, transform_hlds__rbmm__add_rbmm_goal_infos__Var_16);
        }
        if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
          {
            {
              transform_hlds__rbmm__add_rbmm_goal_infos__Var_14 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__PredInfo_12);
            }
            {
              transform_hlds__rbmm__add_rbmm_goal_infos__Var_17 = transform_hlds__rbmm__region_transformation__remove_region_pred_name_0_f_0();
            }
            transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = (strcmp(transform_hlds__rbmm__add_rbmm_goal_infos__Var_14, transform_hlds__rbmm__add_rbmm_goal_infos__Var_17) == 0);
            if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__Args_6)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
                  {
                    *transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegion_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Args_6, (MR_Integer) 0)));
                    transform_hlds__rbmm__add_rbmm_goal_infos__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Args_6, (MR_Integer) 1)));
                    transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = (transform_hlds__rbmm__add_rbmm_goal_infos__Var_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
          }
      }
    return transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_unification_8_p_0(
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Graph_11,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenaming_12,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenaming_13,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RegionNameToVar_14,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_46,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_47)
{
  {
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HowToConstruct_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 4)));
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 0)));
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 1)));
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 2)));
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 3)));
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 5)));
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 6)));

          switch (MR_tag((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__HowToConstruct_20)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_64;
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_66;

                {
                  transform_hlds__rbmm__add_rbmm_goal_infos__Var_66 = hlds__hlds_goal__rbmm_info_init_0_f_0();
                }
                {
                  transform_hlds__rbmm__add_rbmm_goal_infos__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_64, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_66));
                }
                {
                  hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Var_64, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_46, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_47);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_64;
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_66;

                {
                  transform_hlds__rbmm__add_rbmm_goal_infos__Var_66 = hlds__hlds_goal__rbmm_info_init_0_f_0();
                }
                {
                  transform_hlds__rbmm__add_rbmm_goal_infos__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_64, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_66));
                }
                {
                  hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Var_64, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_46, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_47);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_77_77 = (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1];
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedIntoRegion_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__add_rbmm_goal_infos__HowToConstruct_20, (MR_Integer) 0)));
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_24;
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_67;
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_68;
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_69;
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_70;
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_71;
                MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_72;

                {
                  transform_hlds__rbmm__add_rbmm_goal_infos__Var_67 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_77_77);
                }
                {
                  transform_hlds__rbmm__add_rbmm_goal_infos__Var_68 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_77_77);
                }
                {
                  transform_hlds__rbmm__add_rbmm_goal_infos__Var_69 = mercury__set__make_singleton_set_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_77_77, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedIntoRegion_23)));
                }
                {
                  transform_hlds__rbmm__add_rbmm_goal_infos__Var_70 = mercury__set__make_singleton_set_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_77_77, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedIntoRegion_23)));
                }
                {
                  transform_hlds__rbmm__add_rbmm_goal_infos__Var_71 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_77_77);
                }
                {
                  transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_24, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_67));
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_24, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_68));
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_24, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_69));
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_24, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_70));
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_24, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_71));
                }
                {
                  transform_hlds__rbmm__add_rbmm_goal_infos__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_72, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_24));
                }
                {
                  hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Var_72, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_46, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_47);
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__DeconsCellVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 0)));
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Node_32;
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NodeType_33;
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 1)));
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 2)));
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 3)));
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 4)));
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 5)));

          {
            transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Graph_11, transform_hlds__rbmm__add_rbmm_goal_infos__DeconsCellVar_26, &transform_hlds__rbmm__add_rbmm_goal_infos__Node_32);
          }
          {
            transform_hlds__rbmm__add_rbmm_goal_infos__NodeType_33 = transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__Graph_11, transform_hlds__rbmm__add_rbmm_goal_infos__Node_32);
          }
          {
            transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = check_hlds__type_util__type_not_stored_in_region_2_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__NodeType_33, transform_hlds__rbmm__add_rbmm_goal_infos__ModuleInfo_10);
          }
          if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
            {
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_54;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_56;

              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_56 = hlds__hlds_goal__rbmm_info_init_0_f_0();
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_54, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_56));
              }
              {
                hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Var_54, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_46, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_47);
              }
            }
          else
            {
              MR_String transform_hlds__rbmm__add_rbmm_goal_infos__OriginalName_34;
              MR_String transform_hlds__rbmm__add_rbmm_goal_infos__Name_36;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_62;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_74;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurNameList_35;
              MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv0_ResurNameList_35;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RegionVar_38;
              MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv4_RegionVar_38;

              {
                transform_hlds__rbmm__add_rbmm_goal_infos__OriginalName_34 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__Graph_11, transform_hlds__rbmm__add_rbmm_goal_infos__Node_32);
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[0], transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenaming_12, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__OriginalName_34)), &transform_hlds__rbmm__add_rbmm_goal_infos__conv0_ResurNameList_35);
              }
              if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
                {
                  transform_hlds__rbmm__add_rbmm_goal_infos__ResurNameList_35 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv0_ResurNameList_35);
                  transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = MR_TRUE;
                }
              if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
                {
                  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv1_Name_36;

                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__conv1_Name_36 = mercury__list__det_last_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__add_rbmm_goal_infos__ResurNameList_35);
                  }
                  transform_hlds__rbmm__add_rbmm_goal_infos__Name_36 = ((MR_String) transform_hlds__rbmm__add_rbmm_goal_infos__conv1_Name_36);
                }
              else
                {
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteNameList_37;
                  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv2_IteNameList_37;

                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[0], transform_hlds__rbmm__add_rbmm_goal_infos__IteRenaming_13, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__OriginalName_34)), &transform_hlds__rbmm__add_rbmm_goal_infos__conv2_IteNameList_37);
                  }
                  if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
                    {
                      transform_hlds__rbmm__add_rbmm_goal_infos__IteNameList_37 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv2_IteNameList_37);
                      transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = MR_TRUE;
                    }
                  if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
                    {
                      MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv3_Name_36;

                      {
                        transform_hlds__rbmm__add_rbmm_goal_infos__conv3_Name_36 = mercury__list__det_last_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__add_rbmm_goal_infos__IteNameList_37);
                      }
                      transform_hlds__rbmm__add_rbmm_goal_infos__Name_36 = ((MR_String) transform_hlds__rbmm__add_rbmm_goal_infos__conv3_Name_36);
                    }
                  else
                    transform_hlds__rbmm__add_rbmm_goal_infos__Name_36 = transform_hlds__rbmm__add_rbmm_goal_infos__OriginalName_34;
                }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1], transform_hlds__rbmm__add_rbmm_goal_infos__RegionNameToVar_14, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Name_36)), &transform_hlds__rbmm__add_rbmm_goal_infos__conv4_RegionVar_38);
              }
              if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
                {
                  transform_hlds__rbmm__add_rbmm_goal_infos__RegionVar_38 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv4_RegionVar_38);
                  transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = MR_TRUE;
                }
              if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
                {
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_86_86 = (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1];
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_57;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_58;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_59;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_60;
                  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_61;

                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__Var_57 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_86_86);
                  }
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__Var_58 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_86_86);
                  }
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__Var_59 = mercury__set__make_singleton_set_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_86_86, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RegionVar_38)));
                  }
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__Var_60 = mercury__set__init_0_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_86_86);
                  }
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__Var_61 = mercury__set__make_singleton_set_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_86_86, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RegionVar_38)));
                  }
                  {
                    transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_74, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_57));
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_74, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_58));
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_74, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_59));
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_74, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_60));
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_74, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_61));
                  }
                }
              else
                {
                  transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_74 = hlds__hlds_goal__rbmm_info_init_0_f_0();
                }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_62, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RbmmInfo_74));
              }
              {
                hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Var_62, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_46, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_47);
              }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_51;
          MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_53;

          {
            transform_hlds__rbmm__add_rbmm_goal_infos__Var_53 = hlds__hlds_goal__rbmm_info_init_0_f_0();
          }
          {
            transform_hlds__rbmm__add_rbmm_goal_infos__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_51, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_53));
          }
          {
            hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Var_51, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_46, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_47);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__add_rbmm_goal_infos__Unification_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_51;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_53;

              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_53 = hlds__hlds_goal__rbmm_info_init_0_f_0();
              }
              {
                transform_hlds__rbmm__add_rbmm_goal_infos__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__Var_51, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Var_53));
              }
              {
                hlds__hlds_goal__goal_info_set_maybe_rbmm_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Var_51, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_0_46, transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_Info_47);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.add_rbmm_goal_infos", (MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.collect_rbmm_goal_info_unification\'/8", (MR_String) "complicated unification");
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
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;

        if ((transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_3 = transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2;
        else
          {
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_31_31;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Info_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal_7, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__GoalRbmmInfo_12;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__GoalAllocatedInto_16;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__GoalUsed_17;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Created_18;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Removed_19;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Carried_20;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto0_21;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Used0_22;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto_23;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Used_24;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_27;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_28;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_29_29;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Goal_7, (MR_Integer) 0)));
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_13;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_14;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_15;

            {
              transform_hlds__rbmm__add_rbmm_goal_infos__GoalRbmmInfo_12 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__Info_11);
            }
            transform_hlds__rbmm__add_rbmm_goal_infos__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__GoalRbmmInfo_12, (MR_Integer) 0)));
            transform_hlds__rbmm__add_rbmm_goal_infos__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__GoalRbmmInfo_12, (MR_Integer) 1)));
            transform_hlds__rbmm__add_rbmm_goal_infos__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__GoalRbmmInfo_12, (MR_Integer) 2)));
            transform_hlds__rbmm__add_rbmm_goal_infos__GoalAllocatedInto_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__GoalRbmmInfo_12, (MR_Integer) 3)));
            transform_hlds__rbmm__add_rbmm_goal_infos__GoalUsed_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__GoalRbmmInfo_12, (MR_Integer) 4)));
            transform_hlds__rbmm__add_rbmm_goal_infos__Created_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 0)));
            transform_hlds__rbmm__add_rbmm_goal_infos__Removed_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 1)));
            transform_hlds__rbmm__add_rbmm_goal_infos__Carried_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 2)));
            transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 3)));
            transform_hlds__rbmm__add_rbmm_goal_infos__Used0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 4)));
            transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_31_31 = (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1];
            {
              transform_hlds__rbmm__add_rbmm_goal_infos__Var_27 = mercury__set__union_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_31_31, transform_hlds__rbmm__add_rbmm_goal_infos__GoalAllocatedInto_16, transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto0_21);
            }
            {
              mercury__set__difference_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_31_31, transform_hlds__rbmm__add_rbmm_goal_infos__Var_27, transform_hlds__rbmm__add_rbmm_goal_infos__Created_18, &transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto_23);
            }
            {
              transform_hlds__rbmm__add_rbmm_goal_infos__Var_28 = mercury__set__union_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_31_31, transform_hlds__rbmm__add_rbmm_goal_infos__GoalUsed_17, transform_hlds__rbmm__add_rbmm_goal_infos__Used0_22);
            }
            {
              mercury__set__difference_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_31_31, transform_hlds__rbmm__add_rbmm_goal_infos__Var_28, transform_hlds__rbmm__add_rbmm_goal_infos__Created_18, &transform_hlds__rbmm__add_rbmm_goal_infos__Used_24);
            }
            {
              transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_29_29, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Created_18));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_29_29, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Removed_19));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_29_29, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Carried_20));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_29_29, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto_23));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_29_29, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Used_24));
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__next_value_of_HeadVar__1_1 = transform_hlds__rbmm__add_rbmm_goal_infos__Goals_8;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__next_value_of_STATE_VARIABLE_RbmmInfo_0_2 = transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_29_29;

              transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2 = transform_hlds__rbmm__add_rbmm_goal_infos__next_value_of_STATE_VARIABLE_RbmmInfo_0_2;
              transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1 = transform_hlds__rbmm__add_rbmm_goal_infos__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__compute_rbmm_info_conjunction_3_p_0(
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;

        if ((transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_3 = transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2;
        else
          {
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_34_34;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Conj_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Conjs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Conj_7, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CRbmmInfo_12;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CCreated_13;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CRemoved_14;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CAllocatedInto_16;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__CUsed_17;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Created0_18;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Removed0_19;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Carried_20;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto0_21;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Used0_22;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Created_23;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Removed_24;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto_25;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Used_26;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_29;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_30;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_31;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_32_32;
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Conj_7, (MR_Integer) 0)));
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_15;

            {
              transform_hlds__rbmm__add_rbmm_goal_infos__CRbmmInfo_12 = hlds__hlds_goal__goal_info_get_rbmm_1_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__CInfo_11);
            }
            transform_hlds__rbmm__add_rbmm_goal_infos__CCreated_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CRbmmInfo_12, (MR_Integer) 0)));
            transform_hlds__rbmm__add_rbmm_goal_infos__CRemoved_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CRbmmInfo_12, (MR_Integer) 1)));
            transform_hlds__rbmm__add_rbmm_goal_infos__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CRbmmInfo_12, (MR_Integer) 2)));
            transform_hlds__rbmm__add_rbmm_goal_infos__CAllocatedInto_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CRbmmInfo_12, (MR_Integer) 3)));
            transform_hlds__rbmm__add_rbmm_goal_infos__CUsed_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__CRbmmInfo_12, (MR_Integer) 4)));
            transform_hlds__rbmm__add_rbmm_goal_infos__Created0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 0)));
            transform_hlds__rbmm__add_rbmm_goal_infos__Removed0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 1)));
            transform_hlds__rbmm__add_rbmm_goal_infos__Carried_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 2)));
            transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 3)));
            transform_hlds__rbmm__add_rbmm_goal_infos__Used0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2, (MR_Integer) 4)));
            transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_34_34 = (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_2[1];
            {
              mercury__set__union_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_34_34, transform_hlds__rbmm__add_rbmm_goal_infos__CCreated_13, transform_hlds__rbmm__add_rbmm_goal_infos__Created0_18, &transform_hlds__rbmm__add_rbmm_goal_infos__Created_23);
            }
            {
              transform_hlds__rbmm__add_rbmm_goal_infos__Var_29 = mercury__set__union_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_34_34, transform_hlds__rbmm__add_rbmm_goal_infos__CRemoved_14, transform_hlds__rbmm__add_rbmm_goal_infos__Removed0_19);
            }
            {
              mercury__set__difference_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_34_34, transform_hlds__rbmm__add_rbmm_goal_infos__Var_29, transform_hlds__rbmm__add_rbmm_goal_infos__Created_23, &transform_hlds__rbmm__add_rbmm_goal_infos__Removed_24);
            }
            {
              transform_hlds__rbmm__add_rbmm_goal_infos__Var_30 = mercury__set__union_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_34_34, transform_hlds__rbmm__add_rbmm_goal_infos__CAllocatedInto_16, transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto0_21);
            }
            {
              mercury__set__difference_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_34_34, transform_hlds__rbmm__add_rbmm_goal_infos__Var_30, transform_hlds__rbmm__add_rbmm_goal_infos__Created_23, &transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto_25);
            }
            {
              transform_hlds__rbmm__add_rbmm_goal_infos__Var_31 = mercury__set__union_2_f_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_34_34, transform_hlds__rbmm__add_rbmm_goal_infos__CUsed_17, transform_hlds__rbmm__add_rbmm_goal_infos__Used0_22);
            }
            {
              mercury__set__difference_3_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__TypeInfo_34_34, transform_hlds__rbmm__add_rbmm_goal_infos__Var_31, transform_hlds__rbmm__add_rbmm_goal_infos__Created_23, &transform_hlds__rbmm__add_rbmm_goal_infos__Used_26);
            }
            {
              transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_32_32, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Created_23));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_32_32, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Removed_24));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_32_32, 2) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Carried_20));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_32_32, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__AllocatedInto_25));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_32_32, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__Used_26));
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__next_value_of_HeadVar__1_1 = transform_hlds__rbmm__add_rbmm_goal_infos__Conjs_8;
              MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__next_value_of_STATE_VARIABLE_RbmmInfo_0_2 = transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_32_32;

              transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_RbmmInfo_0_2 = transform_hlds__rbmm__add_rbmm_goal_infos__next_value_of_STATE_VARIABLE_RbmmInfo_0_2;
              transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1 = transform_hlds__rbmm__add_rbmm_goal_infos__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__keep_allocated_regions_4_p_0(
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Graph_3,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4)
{
  {
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;

    if ((transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          *transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.add_rbmm_goal_infos", (MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.keep_allocated_regions\'/4", (MR_String) "length mismatch");
            return;
          }
        }
    else
      {
        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__1_1, (MR_Integer) 0)));

        if ((transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.add_rbmm_goal_infos", (MR_String) "predicate \140transform_hlds.rbmm.add_rbmm_goal_infos.keep_allocated_regions\'/4", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegion_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegions_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RemovedAndAllocRegions0_24;

            {
              transform_hlds__rbmm__add_rbmm_goal_infos__keep_allocated_regions_4_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Var_25, transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegions_21, transform_hlds__rbmm__add_rbmm_goal_infos__Graph_3, &transform_hlds__rbmm__add_rbmm_goal_infos__RemovedAndAllocRegions0_24);
            }
            {
              transform_hlds__rbmm__add_rbmm_goal_infos__succeeded = transform_hlds__rbmm__points_to_graph__rptg_is_allocated_node_2_p_0(transform_hlds__rbmm__add_rbmm_goal_infos__Graph_3, transform_hlds__rbmm__add_rbmm_goal_infos__Var_26);
            }
            if (transform_hlds__rbmm__add_rbmm_goal_infos__succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RemovedRegion_20));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RemovedAndAllocRegions0_24));
              }
            else
              *transform_hlds__rbmm__add_rbmm_goal_infos__HeadVar__4_4 = transform_hlds__rbmm__add_rbmm_goal_infos__RemovedAndAllocRegions0_24;
          }
      }
  }
}

static void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_7_p_0_1(
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg,
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_3,
  MR_Box * transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_4)
{
  {
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__closure = transform_hlds__rbmm__add_rbmm_goal_infos__closure_arg;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__conv0_STATE_VARIABLE_ModuleInfo_30;

    {
      transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_3), &transform_hlds__rbmm__add_rbmm_goal_infos__conv0_STATE_VARIABLE_ModuleInfo_30);
    }
    *transform_hlds__rbmm__add_rbmm_goal_infos__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__conv0_STATE_VARIABLE_ModuleInfo_30));
  }
}

void MR_CALL 
transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_7_p_0(
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__RptaInfoTable_8,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionArgumentTable_9,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingTable_10,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingTable_11,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVarTable_12,
  MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_15)
{
  {
    MR_bool transform_hlds__rbmm__add_rbmm_goal_infos__succeeded;
    MR_Word transform_hlds__rbmm__add_rbmm_goal_infos__Var_16;
    MR_Box transform_hlds__rbmm__add_rbmm_goal_infos__conv1_STATE_VARIABLE_ModuleInfo_15;

    {
      transform_hlds__rbmm__add_rbmm_goal_infos__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_16, 0) = ((MR_Box) (&transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_16, 1) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_7_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_16, 3) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__RptaInfoTable_8));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_16, 4) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__ResurRenamingTable_10));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_16, 5) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__IteRenamingTable_11));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__add_rbmm_goal_infos__Var_16, 6) = ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__NameToRegionVarTable_12));
    }
    {
      mercury__map__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__add_rbmm_goal_infos_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__rbmm__add_rbmm_goal_infos__Var_16, transform_hlds__rbmm__add_rbmm_goal_infos__ActualRegionArgumentTable_9, ((MR_Box) (transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_0_14)), &transform_hlds__rbmm__add_rbmm_goal_infos__conv1_STATE_VARIABLE_ModuleInfo_15);
    }
    *transform_hlds__rbmm__add_rbmm_goal_infos__STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) transform_hlds__rbmm__add_rbmm_goal_infos__conv1_STATE_VARIABLE_ModuleInfo_15);
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

/* :- end_module transform_hlds.rbmm.add_rbmm_goal_infos. */
