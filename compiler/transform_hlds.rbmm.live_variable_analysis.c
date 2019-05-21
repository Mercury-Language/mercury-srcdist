/*
** Automatically generated from `rbmm.live_variable_analysis.m'
** by the Mercury compiler,
** version rotd-2017-08-08
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


/* :- module transform_hlds.rbmm.live_variable_analysis. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__rbmm__live_variable_analysis__init
ENDINIT
*/

#include "transform_hlds.rbmm.live_variable_analysis.mih"


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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
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
#include "transform_hlds.rbmm.add_rbmm_goal_infos.mih"
#include "transform_hlds.rbmm.condition_renaming.mih"
#include "transform_hlds.rbmm.execution_path.mih"
#include "transform_hlds.rbmm.interproc_region_lifetime.mih"
#include "transform_hlds.rbmm.live_region_analysis.mih"
#include "transform_hlds.rbmm.points_to_analysis.mih"
#include "transform_hlds.rbmm.points_to_graph.mih"
#include "transform_hlds.rbmm.points_to_info.mih"
#include "transform_hlds.rbmm.region_arguments.mih"
#include "transform_hlds.rbmm.region_instruction.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"
#include "transform_hlds.rbmm.region_resurrection_renaming.mih"
#include "transform_hlds.rbmm.region_transformation.mih"




static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__void_var_4_p_0(
  MR_Word transform_hlds__rbmm__live_variable_analysis__VarSet_5,
  MR_Word transform_hlds__rbmm__live_variable_analysis__Var_6,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVars_0_9,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVars_10);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_p_0(
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_11,
  MR_Word transform_hlds__rbmm__live_variable_analysis__ExecPathTable_12,
  MR_Word transform_hlds__rbmm__live_variable_analysis__PredId_13,
  MR_Integer transform_hlds__rbmm__live_variable_analysis__ProcId_14,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_0_26,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_27,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_0_28,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_29,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_0_30,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_31);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_p_0(
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__live_variable_analysis__Inputs_2,
  MR_Word transform_hlds__rbmm__live_variable_analysis__Outputs_3,
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4,
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProcInfo_5,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_6,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_7,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_8,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_9,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_10,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_11);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_p_0_1(
  MR_Box transform_hlds__rbmm__live_variable_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_p_0(
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__live_variable_analysis__Inputs_2,
  MR_Word transform_hlds__rbmm__live_variable_analysis__Outputs_3,
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4,
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProcInfo_5,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_6,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_7,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_8,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_9,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_10,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_11);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_p_0(
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__live_variable_analysis__Inputs_2,
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__3_3,
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4,
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProcInfo_5,
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__6_6,
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__7_7,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_8,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_9,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_10,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_11,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_12,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_13);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0_1(
  MR_Box transform_hlds__rbmm__live_variable_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0(
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProgPoint_6,
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProducedSet_7,
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProcInfo_8,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_13,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_14);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_p_0(
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_5,
  MR_Word transform_hlds__rbmm__live_variable_analysis__Goal_6,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__UsedSet_7,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__ProducedSet_8);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_p_0(
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__live_variable_analysis__Inputs_3,
  MR_Word transform_hlds__rbmm__live_variable_analysis__Outputs_4,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualInputs_0_5,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualInputs_6,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualOutputs_0_7,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualOutputs_8);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_p_0(
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProgPoint_5,
  MR_Word transform_hlds__rbmm__live_variable_analysis__LV_6,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLV_0_9,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLV_10);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_p_0_1(
  MR_Box transform_hlds__rbmm__live_variable_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_5,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_6,
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_7);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_p_0(
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_10,
  MR_Word transform_hlds__rbmm__live_variable_analysis__ExecPathTable_11,
  MR_Word transform_hlds__rbmm__live_variable_analysis__PredId_12,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_0_18,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_19,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_0_20,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_21,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_0_22,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_23);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_p_0_1(
  MR_Box transform_hlds__rbmm__live_variable_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_5,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_6,
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_7);


static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_2[3][3];

static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_3[1][12];

static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_4[1][13];

static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_5[1][7];




static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_2[2]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[2]))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_3[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_4[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__live_variable_analysis__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__live_variable_analysis__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__live_variable_analysis__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__live_variable_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__live_variable_analysis__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__live_variable_analysis__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__live_variable_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__void_var_4_p_0(
  MR_Word transform_hlds__rbmm__live_variable_analysis__VarSet_5,
  MR_Word transform_hlds__rbmm__live_variable_analysis__Var_6,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVars_0_9,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVars_10)
{
  {
    MR_bool transform_hlds__rbmm__live_variable_analysis__succeeded;
    MR_String transform_hlds__rbmm__live_variable_analysis__VarName_8;
    MR_Char transform_hlds__rbmm__live_variable_analysis__Var_16;

    transform_hlds__rbmm__live_variable_analysis__VarName_8 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__rbmm__live_variable_analysis__VarSet_5, transform_hlds__rbmm__live_variable_analysis__Var_6);
    transform_hlds__rbmm__live_variable_analysis__succeeded = mercury__string__index_3_p_0(transform_hlds__rbmm__live_variable_analysis__VarName_8, (MR_Integer) 0, &transform_hlds__rbmm__live_variable_analysis__Var_16);
    if (transform_hlds__rbmm__live_variable_analysis__succeeded)
      transform_hlds__rbmm__live_variable_analysis__succeeded = ((MR_Char) 95 == transform_hlds__rbmm__live_variable_analysis__Var_16);
    if (transform_hlds__rbmm__live_variable_analysis__succeeded)
    {
      mercury__set__insert_3_p_0((MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0], ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__Var_6)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVars_0_9, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVars_10);
    }
    else
      *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVars_10 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVars_0_9;
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_p_0(
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_11,
  MR_Word transform_hlds__rbmm__live_variable_analysis__ExecPathTable_12,
  MR_Word transform_hlds__rbmm__live_variable_analysis__PredId_13,
  MR_Integer transform_hlds__rbmm__live_variable_analysis__ProcId_14,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_0_26,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_27,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_0_28,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_29,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_0_30,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_31)
{
  {
    MR_bool transform_hlds__rbmm__live_variable_analysis__succeeded;
    MR_Word transform_hlds__rbmm__live_variable_analysis__PPId_18;
    MR_Word transform_hlds__rbmm__live_variable_analysis__Var_32;

    {
      transform_hlds__rbmm__live_variable_analysis__PPId_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__PPId_18, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__PredId_13));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__PPId_18, 1) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProcId_14));
    }
    {
      transform_hlds__rbmm__live_variable_analysis__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Var_32, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__PPId_18));
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    transform_hlds__rbmm__live_variable_analysis__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__live_variable_analysis__Var_32, transform_hlds__rbmm__live_variable_analysis__ModuleInfo_11);
    if (transform_hlds__rbmm__live_variable_analysis__succeeded)
    {
      *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_31 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_0_30;
      *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_29 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_0_28;
      *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_27 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_0_26;
    }
    else
    {
      MR_Word transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_40_40;
      MR_Word transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_42_42;
      MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_43_43;
      MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_44_44;
      MR_Word transform_hlds__rbmm__live_variable_analysis__ProcInfo_19;
      MR_Word transform_hlds__rbmm__live_variable_analysis__Inputs_20;
      MR_Word transform_hlds__rbmm__live_variable_analysis__Outputs_21;
      MR_Word transform_hlds__rbmm__live_variable_analysis__ExecPaths_22;
      MR_Word transform_hlds__rbmm__live_variable_analysis__ProcLVBefore_23;
      MR_Word transform_hlds__rbmm__live_variable_analysis__ProcLVAfter_24;
      MR_Word transform_hlds__rbmm__live_variable_analysis__ProcVoidVar_25;
      MR_Word transform_hlds__rbmm__live_variable_analysis__Var_34;
      MR_Word transform_hlds__rbmm__live_variable_analysis__Var_35;
      MR_Word transform_hlds__rbmm__live_variable_analysis__Var_36;
      MR_Box transform_hlds__rbmm__live_variable_analysis__conv0_ExecPaths_22;

      hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__rbmm__live_variable_analysis__ModuleInfo_11, transform_hlds__rbmm__live_variable_analysis__PPId_18, &transform_hlds__rbmm__live_variable_analysis__ProcInfo_19);
      transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_p_0(transform_hlds__rbmm__live_variable_analysis__ModuleInfo_11, transform_hlds__rbmm__live_variable_analysis__ProcInfo_19, &transform_hlds__rbmm__live_variable_analysis__Inputs_20, &transform_hlds__rbmm__live_variable_analysis__Outputs_21);
      transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_40_40, (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[3], transform_hlds__rbmm__live_variable_analysis__ExecPathTable_12, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__PPId_18)), &transform_hlds__rbmm__live_variable_analysis__conv0_ExecPaths_22);
      transform_hlds__rbmm__live_variable_analysis__ExecPaths_22 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv0_ExecPaths_22);
      transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_42_42 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
      transform_hlds__rbmm__live_variable_analysis__TypeInfo_43_43 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1];
      transform_hlds__rbmm__live_variable_analysis__Var_34 = mercury__map__init_0_f_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_42_42, transform_hlds__rbmm__live_variable_analysis__TypeInfo_43_43);
      transform_hlds__rbmm__live_variable_analysis__Var_35 = mercury__map__init_0_f_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_42_42, transform_hlds__rbmm__live_variable_analysis__TypeInfo_43_43);
      transform_hlds__rbmm__live_variable_analysis__Var_36 = mercury__map__init_0_f_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_42_42, transform_hlds__rbmm__live_variable_analysis__TypeInfo_43_43);
      transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_p_0(transform_hlds__rbmm__live_variable_analysis__ExecPaths_22, transform_hlds__rbmm__live_variable_analysis__Inputs_20, transform_hlds__rbmm__live_variable_analysis__Outputs_21, transform_hlds__rbmm__live_variable_analysis__ModuleInfo_11, transform_hlds__rbmm__live_variable_analysis__ProcInfo_19, transform_hlds__rbmm__live_variable_analysis__Var_34, &transform_hlds__rbmm__live_variable_analysis__ProcLVBefore_23, transform_hlds__rbmm__live_variable_analysis__Var_35, &transform_hlds__rbmm__live_variable_analysis__ProcLVAfter_24, transform_hlds__rbmm__live_variable_analysis__Var_36, &transform_hlds__rbmm__live_variable_analysis__ProcVoidVar_25);
      transform_hlds__rbmm__live_variable_analysis__TypeInfo_44_44 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_2[0];
      mercury__map__set_4_p_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_40_40, transform_hlds__rbmm__live_variable_analysis__TypeInfo_44_44, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__PPId_18)), ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProcLVBefore_23)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_0_26, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_27);
      mercury__map__set_4_p_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_40_40, transform_hlds__rbmm__live_variable_analysis__TypeInfo_44_44, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__PPId_18)), ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProcLVAfter_24)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_0_28, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_29);
      mercury__map__set_4_p_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_40_40, transform_hlds__rbmm__live_variable_analysis__TypeInfo_44_44, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__PPId_18)), ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProcVoidVar_25)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_0_30, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_31);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_p_0(
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__live_variable_analysis__Inputs_2,
  MR_Word transform_hlds__rbmm__live_variable_analysis__Outputs_3,
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4,
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProcInfo_5,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_6,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_7,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_8,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_9,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_10,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__rbmm__live_variable_analysis__succeeded;

      if ((transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_11 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_10;
        *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_9 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_8;
        *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_7 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_6;
      }
      else
      {
        MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_53_53 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_2[2];
        MR_Word transform_hlds__rbmm__live_variable_analysis__ExecPath0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__live_variable_analysis__ExecPaths_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__live_variable_analysis__ExecPath_34;
        MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_42_42;
        MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_43_43;
        MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_44_44;
        MR_Integer transform_hlds__rbmm__live_variable_analysis__Var_41;

        mercury__list__reverse_2_p_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_53_53, transform_hlds__rbmm__live_variable_analysis__ExecPath0_25, &transform_hlds__rbmm__live_variable_analysis__ExecPath_34);
        transform_hlds__rbmm__live_variable_analysis__Var_41 = mercury__list__length_1_f_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_53_53, transform_hlds__rbmm__live_variable_analysis__ExecPath_34);
        transform_hlds__rbmm__live_variable_analysis__succeeded = (transform_hlds__rbmm__live_variable_analysis__Var_41 == (MR_Integer) 1);
        if (transform_hlds__rbmm__live_variable_analysis__succeeded)
          transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_p_0(transform_hlds__rbmm__live_variable_analysis__ExecPath_34, transform_hlds__rbmm__live_variable_analysis__Inputs_2, transform_hlds__rbmm__live_variable_analysis__Outputs_3, transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4, transform_hlds__rbmm__live_variable_analysis__ProcInfo_5, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_6, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_42_42, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_8, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_43_43, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_10, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_44_44);
        else
        {
          MR_Word transform_hlds__rbmm__live_variable_analysis__Var_46;

          transform_hlds__rbmm__live_variable_analysis__Var_46 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]);
          transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_p_0(transform_hlds__rbmm__live_variable_analysis__ExecPath_34, transform_hlds__rbmm__live_variable_analysis__Inputs_2, transform_hlds__rbmm__live_variable_analysis__Outputs_3, transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4, transform_hlds__rbmm__live_variable_analysis__ProcInfo_5, (MR_Integer) 1, transform_hlds__rbmm__live_variable_analysis__Var_46, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_6, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_42_42, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_8, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_43_43, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_10, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_44_44);
        }
        /* direct tailcall eliminated */
        {
          MR_Word transform_hlds__rbmm__live_variable_analysis__next_value_of_HeadVar__1_1 = transform_hlds__rbmm__live_variable_analysis__ExecPaths_26;
          MR_Word transform_hlds__rbmm__live_variable_analysis__next_value_of_STATE_VARIABLE_ProcLVBefore_0_6 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_42_42;
          MR_Word transform_hlds__rbmm__live_variable_analysis__next_value_of_STATE_VARIABLE_ProcLVAfter_0_8 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_43_43;
          MR_Word transform_hlds__rbmm__live_variable_analysis__next_value_of_STATE_VARIABLE_ProcVoidVar_0_10 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_44_44;

          transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1 = transform_hlds__rbmm__live_variable_analysis__next_value_of_HeadVar__1_1;
          transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_6 = transform_hlds__rbmm__live_variable_analysis__next_value_of_STATE_VARIABLE_ProcLVBefore_0_6;
          transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_8 = transform_hlds__rbmm__live_variable_analysis__next_value_of_STATE_VARIABLE_ProcLVAfter_0_8;
          transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_10 = transform_hlds__rbmm__live_variable_analysis__next_value_of_STATE_VARIABLE_ProcVoidVar_0_10;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_p_0_1(
  MR_Box transform_hlds__rbmm__live_variable_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__rbmm__live_variable_analysis__closure = transform_hlds__rbmm__live_variable_analysis__closure_arg;
    MR_Word transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_VoidVars_10;

    transform_hlds__rbmm__live_variable_analysis__void_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2), &transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_VoidVars_10);
    *transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_VoidVars_10));
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_p_0(
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__live_variable_analysis__Inputs_2,
  MR_Word transform_hlds__rbmm__live_variable_analysis__Outputs_3,
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4,
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProcInfo_5,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_6,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_7,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_8,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_9,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_10,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_11)
{
  {
    MR_bool transform_hlds__rbmm__live_variable_analysis__succeeded;

    if ((transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.live_variable_analysis", (MR_String) "predicate \140transform_hlds.rbmm.live_variable_analysis.live_variable_analysis_singleton_exec_path\'/11", (MR_String) "empty list");
        return;
      }
    }
    else
    {
      MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_52_52;
      MR_Word transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_53_53;
      MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_54_54;
      MR_Word transform_hlds__rbmm__live_variable_analysis__ProgPoint_12;
      MR_Word transform_hlds__rbmm__live_variable_analysis__Goal_13;
      MR_Word transform_hlds__rbmm__live_variable_analysis__LVBefore_22;
      MR_Word transform_hlds__rbmm__live_variable_analysis__LVAfter_23;
      MR_Word transform_hlds__rbmm__live_variable_analysis__ProducedSet_25;
      MR_Word transform_hlds__rbmm__live_variable_analysis__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__rbmm__live_variable_analysis__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__rbmm__live_variable_analysis___UsedSet_24;
      MR_Word transform_hlds__rbmm__live_variable_analysis___DeadVars_61;
      MR_Box transform_hlds__rbmm__live_variable_analysis__conv0__DeadVars_61;

      transform_hlds__rbmm__live_variable_analysis__ProgPoint_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_32, (MR_Integer) 0)));
      transform_hlds__rbmm__live_variable_analysis__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_32, (MR_Integer) 1)));
      transform_hlds__rbmm__live_variable_analysis__TypeInfo_52_52 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0];
      transform_hlds__rbmm__live_variable_analysis__LVBefore_22 = mercury__set__list_to_set_1_f_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_52_52, transform_hlds__rbmm__live_variable_analysis__Inputs_2);
      transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_53_53 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
      transform_hlds__rbmm__live_variable_analysis__TypeInfo_54_54 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1];
      mercury__map__set_4_p_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_53_53, transform_hlds__rbmm__live_variable_analysis__TypeInfo_54_54, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProgPoint_12)), ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__LVBefore_22)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_6, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_7);
      transform_hlds__rbmm__live_variable_analysis__LVAfter_23 = mercury__set__list_to_set_1_f_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_52_52, transform_hlds__rbmm__live_variable_analysis__Outputs_3);
      mercury__map__set_4_p_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_53_53, transform_hlds__rbmm__live_variable_analysis__TypeInfo_54_54, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProgPoint_12)), ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__LVAfter_23)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_8, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_9);
      transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_p_0(transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4, transform_hlds__rbmm__live_variable_analysis__Goal_13, &transform_hlds__rbmm__live_variable_analysis___UsedSet_24, &transform_hlds__rbmm__live_variable_analysis__ProducedSet_25);
      transform_hlds__rbmm__live_variable_analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1], transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_10, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProgPoint_12)), &transform_hlds__rbmm__live_variable_analysis__conv0__DeadVars_61);
      if (transform_hlds__rbmm__live_variable_analysis__succeeded)
      {
        transform_hlds__rbmm__live_variable_analysis___DeadVars_61 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv0__DeadVars_61);
        transform_hlds__rbmm__live_variable_analysis__succeeded = MR_TRUE;
      }
      if (transform_hlds__rbmm__live_variable_analysis__succeeded)
        *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_11 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_10;
      else
      {
        MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_23_72;
        MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_24_73;
        MR_Word transform_hlds__rbmm__live_variable_analysis__VarSet_62;
        MR_Word transform_hlds__rbmm__live_variable_analysis__VoidVars_63;
        MR_Word transform_hlds__rbmm__live_variable_analysis__Var_64;
        MR_Word transform_hlds__rbmm__live_variable_analysis__Var_65;
        MR_Box transform_hlds__rbmm__live_variable_analysis__conv2_VoidVars_63;

        hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__rbmm__live_variable_analysis__ProcInfo_5, &transform_hlds__rbmm__live_variable_analysis__VarSet_62);
        {
          transform_hlds__rbmm__live_variable_analysis__Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_64, 0) = ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_64, 1) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_p_0_1));
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_64, 3) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__VarSet_62));
        }
        transform_hlds__rbmm__live_variable_analysis__TypeInfo_23_72 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0];
        transform_hlds__rbmm__live_variable_analysis__Var_65 = mercury__set__init_0_f_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_23_72);
        transform_hlds__rbmm__live_variable_analysis__TypeInfo_24_73 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1];
        mercury__set__fold_4_p_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_23_72, transform_hlds__rbmm__live_variable_analysis__TypeInfo_24_73, transform_hlds__rbmm__live_variable_analysis__Var_64, transform_hlds__rbmm__live_variable_analysis__ProducedSet_25, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__Var_65)), &transform_hlds__rbmm__live_variable_analysis__conv2_VoidVars_63);
        transform_hlds__rbmm__live_variable_analysis__VoidVars_63 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv2_VoidVars_63);
        mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, transform_hlds__rbmm__live_variable_analysis__TypeInfo_24_73, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProgPoint_12)), ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__VoidVars_63)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_10, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_11);
      }
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_p_0(
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__live_variable_analysis__Inputs_2,
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__3_3,
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4,
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProcInfo_5,
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__6_6,
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__7_7,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_8,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_9,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_10,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_11,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_12,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__rbmm__live_variable_analysis__succeeded;

      if ((transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_13 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_12;
        *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_11 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_10;
        *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_9 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_8;
      }
      else
      {
        MR_Word transform_hlds__rbmm__live_variable_analysis__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__live_variable_analysis__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__live_variable_analysis__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_132, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__live_variable_analysis__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_132, (MR_Integer) 0)));

        switch (transform_hlds__rbmm__live_variable_analysis__HeadVar__6_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if ((transform_hlds__rbmm__live_variable_analysis__Var_131 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word transform_hlds__rbmm__live_variable_analysis__ProducedSet_105;
              MR_Word transform_hlds__rbmm__live_variable_analysis___LVBeforeFirst_102;
              MR_Box transform_hlds__rbmm__live_variable_analysis__conv0__LVBeforeFirst_102;
              MR_Word transform_hlds__rbmm__live_variable_analysis___UsedSet_104;

              transform_hlds__rbmm__live_variable_analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1], transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_8, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__Var_136)), &transform_hlds__rbmm__live_variable_analysis__conv0__LVBeforeFirst_102);
              if (transform_hlds__rbmm__live_variable_analysis__succeeded)
              {
                transform_hlds__rbmm__live_variable_analysis___LVBeforeFirst_102 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv0__LVBeforeFirst_102);
                transform_hlds__rbmm__live_variable_analysis__succeeded = MR_TRUE;
              }
              if (transform_hlds__rbmm__live_variable_analysis__succeeded)
                *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_9 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_8;
              else
              {
                MR_Word transform_hlds__rbmm__live_variable_analysis__LVBeforeFirst_103;

                transform_hlds__rbmm__live_variable_analysis__LVBeforeFirst_103 = mercury__set__list_to_set_1_f_0((MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0], transform_hlds__rbmm__live_variable_analysis__Inputs_2);
                mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1], ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__Var_136)), ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__LVBeforeFirst_103)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_8, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_9);
              }
              transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_p_0(transform_hlds__rbmm__live_variable_analysis__Var_136, transform_hlds__rbmm__live_variable_analysis__HeadVar__7_7, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_10, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_11);
              transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_p_0(transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4, transform_hlds__rbmm__live_variable_analysis__Var_135, &transform_hlds__rbmm__live_variable_analysis___UsedSet_104, &transform_hlds__rbmm__live_variable_analysis__ProducedSet_105);
              transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0(transform_hlds__rbmm__live_variable_analysis__Var_136, transform_hlds__rbmm__live_variable_analysis__ProducedSet_105, transform_hlds__rbmm__live_variable_analysis__ProcInfo_5, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_12, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_13);
            }
            else
            {
              MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_123_123;
              MR_Word transform_hlds__rbmm__live_variable_analysis__UsedSet_72;
              MR_Word transform_hlds__rbmm__live_variable_analysis__ProducedSet_73;
              MR_Word transform_hlds__rbmm__live_variable_analysis__LVBeforeInThisExecPath_74;
              MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_83_83;
              MR_Word transform_hlds__rbmm__live_variable_analysis__Var_84;
              MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_85_85;
              MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_86_86;

              transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_p_0(transform_hlds__rbmm__live_variable_analysis__Var_136, transform_hlds__rbmm__live_variable_analysis__HeadVar__7_7, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_10, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_83_83);
              transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_p_0(transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4, transform_hlds__rbmm__live_variable_analysis__Var_135, &transform_hlds__rbmm__live_variable_analysis__UsedSet_72, &transform_hlds__rbmm__live_variable_analysis__ProducedSet_73);
              transform_hlds__rbmm__live_variable_analysis__TypeInfo_123_123 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0];
              transform_hlds__rbmm__live_variable_analysis__Var_84 = mercury__set__difference_2_f_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_123_123, transform_hlds__rbmm__live_variable_analysis__HeadVar__7_7, transform_hlds__rbmm__live_variable_analysis__ProducedSet_73);
              mercury__set__union_3_p_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_123_123, transform_hlds__rbmm__live_variable_analysis__Var_84, transform_hlds__rbmm__live_variable_analysis__UsedSet_72, &transform_hlds__rbmm__live_variable_analysis__LVBeforeInThisExecPath_74);
              transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_p_0(transform_hlds__rbmm__live_variable_analysis__Var_136, transform_hlds__rbmm__live_variable_analysis__LVBeforeInThisExecPath_74, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_8, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_85_85);
              transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0(transform_hlds__rbmm__live_variable_analysis__Var_136, transform_hlds__rbmm__live_variable_analysis__ProducedSet_73, transform_hlds__rbmm__live_variable_analysis__ProcInfo_5, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_12, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_86_86);
              /* direct tailcall eliminated */
              {
                MR_Word transform_hlds__rbmm__live_variable_analysis__next_value_of_HeadVar__1_1 = transform_hlds__rbmm__live_variable_analysis__Var_131;
                MR_Word transform_hlds__rbmm__live_variable_analysis__next_value_of_HeadVar__7_7 = transform_hlds__rbmm__live_variable_analysis__LVBeforeInThisExecPath_74;
                MR_Word transform_hlds__rbmm__live_variable_analysis__next_value_of_STATE_VARIABLE_ProcLVBefore_0_8 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_85_85;
                MR_Word transform_hlds__rbmm__live_variable_analysis__next_value_of_STATE_VARIABLE_ProcLVAfter_0_10 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_83_83;
                MR_Word transform_hlds__rbmm__live_variable_analysis__next_value_of_STATE_VARIABLE_ProcVoidVar_0_12 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_86_86;

                transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1 = transform_hlds__rbmm__live_variable_analysis__next_value_of_HeadVar__1_1;
                transform_hlds__rbmm__live_variable_analysis__HeadVar__6_6 = (MR_Integer) 0;
                transform_hlds__rbmm__live_variable_analysis__HeadVar__7_7 = transform_hlds__rbmm__live_variable_analysis__next_value_of_HeadVar__7_7;
                transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_8 = transform_hlds__rbmm__live_variable_analysis__next_value_of_STATE_VARIABLE_ProcLVBefore_0_8;
                transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_10 = transform_hlds__rbmm__live_variable_analysis__next_value_of_STATE_VARIABLE_ProcLVAfter_0_10;
                transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_12 = transform_hlds__rbmm__live_variable_analysis__next_value_of_STATE_VARIABLE_ProcVoidVar_0_12;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_122_122;
              MR_Word transform_hlds__rbmm__live_variable_analysis__LVAfterLast_41;
              MR_Word transform_hlds__rbmm__live_variable_analysis__UsedSet_42;
              MR_Word transform_hlds__rbmm__live_variable_analysis__ProducedSet_43;
              MR_Word transform_hlds__rbmm__live_variable_analysis__LVBeforeLastInThisExecPath_44;
              MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_52_52;
              MR_Word transform_hlds__rbmm__live_variable_analysis__Var_53;
              MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_54_54;
              MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_55_55;
              MR_Word transform_hlds__rbmm__live_variable_analysis__LVAfterLast0_40;
              MR_Box transform_hlds__rbmm__live_variable_analysis__conv1_LVAfterLast0_40;

              transform_hlds__rbmm__live_variable_analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1], transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_10, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__Var_136)), &transform_hlds__rbmm__live_variable_analysis__conv1_LVAfterLast0_40);
              if (transform_hlds__rbmm__live_variable_analysis__succeeded)
              {
                transform_hlds__rbmm__live_variable_analysis__LVAfterLast0_40 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv1_LVAfterLast0_40);
                transform_hlds__rbmm__live_variable_analysis__succeeded = MR_TRUE;
              }
              if (transform_hlds__rbmm__live_variable_analysis__succeeded)
              {
                transform_hlds__rbmm__live_variable_analysis__LVAfterLast_41 = transform_hlds__rbmm__live_variable_analysis__LVAfterLast0_40;
                transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_52_52 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_10;
              }
              else
              {
                transform_hlds__rbmm__live_variable_analysis__LVAfterLast_41 = mercury__set__list_to_set_1_f_0((MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0], transform_hlds__rbmm__live_variable_analysis__HeadVar__3_3);
                mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1], ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__Var_136)), ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__LVAfterLast_41)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_10, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_52_52);
              }
              transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_p_0(transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4, transform_hlds__rbmm__live_variable_analysis__Var_135, &transform_hlds__rbmm__live_variable_analysis__UsedSet_42, &transform_hlds__rbmm__live_variable_analysis__ProducedSet_43);
              transform_hlds__rbmm__live_variable_analysis__TypeInfo_122_122 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0];
              transform_hlds__rbmm__live_variable_analysis__Var_53 = mercury__set__difference_2_f_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_122_122, transform_hlds__rbmm__live_variable_analysis__LVAfterLast_41, transform_hlds__rbmm__live_variable_analysis__ProducedSet_43);
              mercury__set__union_3_p_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_122_122, transform_hlds__rbmm__live_variable_analysis__Var_53, transform_hlds__rbmm__live_variable_analysis__UsedSet_42, &transform_hlds__rbmm__live_variable_analysis__LVBeforeLastInThisExecPath_44);
              transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_p_0(transform_hlds__rbmm__live_variable_analysis__Var_136, transform_hlds__rbmm__live_variable_analysis__LVBeforeLastInThisExecPath_44, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_8, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_54_54);
              transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0(transform_hlds__rbmm__live_variable_analysis__Var_136, transform_hlds__rbmm__live_variable_analysis__ProducedSet_43, transform_hlds__rbmm__live_variable_analysis__ProcInfo_5, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_12, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_55_55);
              /* direct tailcall eliminated */
              {
                MR_Word transform_hlds__rbmm__live_variable_analysis__next_value_of_HeadVar__1_1 = transform_hlds__rbmm__live_variable_analysis__Var_131;
                MR_Word transform_hlds__rbmm__live_variable_analysis__next_value_of_HeadVar__7_7 = transform_hlds__rbmm__live_variable_analysis__LVBeforeLastInThisExecPath_44;
                MR_Word transform_hlds__rbmm__live_variable_analysis__next_value_of_STATE_VARIABLE_ProcLVBefore_0_8 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_54_54;
                MR_Word transform_hlds__rbmm__live_variable_analysis__next_value_of_STATE_VARIABLE_ProcLVAfter_0_10 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_52_52;
                MR_Word transform_hlds__rbmm__live_variable_analysis__next_value_of_STATE_VARIABLE_ProcVoidVar_0_12 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_55_55;

                transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1 = transform_hlds__rbmm__live_variable_analysis__next_value_of_HeadVar__1_1;
                transform_hlds__rbmm__live_variable_analysis__HeadVar__6_6 = (MR_Integer) 0;
                transform_hlds__rbmm__live_variable_analysis__HeadVar__7_7 = transform_hlds__rbmm__live_variable_analysis__next_value_of_HeadVar__7_7;
                transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_8 = transform_hlds__rbmm__live_variable_analysis__next_value_of_STATE_VARIABLE_ProcLVBefore_0_8;
                transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_10 = transform_hlds__rbmm__live_variable_analysis__next_value_of_STATE_VARIABLE_ProcLVAfter_0_10;
                transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_12 = transform_hlds__rbmm__live_variable_analysis__next_value_of_STATE_VARIABLE_ProcVoidVar_0_12;
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
transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0_1(
  MR_Box transform_hlds__rbmm__live_variable_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__rbmm__live_variable_analysis__closure = transform_hlds__rbmm__live_variable_analysis__closure_arg;
    MR_Word transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_VoidVars_10;

    transform_hlds__rbmm__live_variable_analysis__void_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2), &transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_VoidVars_10);
    *transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_VoidVars_10));
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0(
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProgPoint_6,
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProducedSet_7,
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProcInfo_8,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_13,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_14)
{
  {
    MR_bool transform_hlds__rbmm__live_variable_analysis__succeeded;
    MR_Word transform_hlds__rbmm__live_variable_analysis___DeadVars_10;
    MR_Box transform_hlds__rbmm__live_variable_analysis__conv0__DeadVars_10;

    transform_hlds__rbmm__live_variable_analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1], transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_13, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProgPoint_6)), &transform_hlds__rbmm__live_variable_analysis__conv0__DeadVars_10);
    if (transform_hlds__rbmm__live_variable_analysis__succeeded)
    {
      transform_hlds__rbmm__live_variable_analysis___DeadVars_10 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv0__DeadVars_10);
      transform_hlds__rbmm__live_variable_analysis__succeeded = MR_TRUE;
    }
    if (transform_hlds__rbmm__live_variable_analysis__succeeded)
      *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_14 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_13;
    else
    {
      MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_23_23;
      MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_24_24;
      MR_Word transform_hlds__rbmm__live_variable_analysis__VarSet_11;
      MR_Word transform_hlds__rbmm__live_variable_analysis__VoidVars_12;
      MR_Word transform_hlds__rbmm__live_variable_analysis__Var_15;
      MR_Word transform_hlds__rbmm__live_variable_analysis__Var_16;
      MR_Box transform_hlds__rbmm__live_variable_analysis__conv2_VoidVars_12;

      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__rbmm__live_variable_analysis__ProcInfo_8, &transform_hlds__rbmm__live_variable_analysis__VarSet_11);
      {
        transform_hlds__rbmm__live_variable_analysis__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_15, 0) = ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_15, 1) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0_1));
        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_15, 3) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__VarSet_11));
      }
      transform_hlds__rbmm__live_variable_analysis__TypeInfo_23_23 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0];
      transform_hlds__rbmm__live_variable_analysis__Var_16 = mercury__set__init_0_f_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_23_23);
      transform_hlds__rbmm__live_variable_analysis__TypeInfo_24_24 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1];
      mercury__set__fold_4_p_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_23_23, transform_hlds__rbmm__live_variable_analysis__TypeInfo_24_24, transform_hlds__rbmm__live_variable_analysis__Var_15, transform_hlds__rbmm__live_variable_analysis__ProducedSet_7, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__Var_16)), &transform_hlds__rbmm__live_variable_analysis__conv2_VoidVars_12);
      transform_hlds__rbmm__live_variable_analysis__VoidVars_12 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv2_VoidVars_12);
      mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, transform_hlds__rbmm__live_variable_analysis__TypeInfo_24_24, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProgPoint_6)), ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__VoidVars_12)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_13, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_14);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_p_0(
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_5,
  MR_Word transform_hlds__rbmm__live_variable_analysis__Goal_6,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__UsedSet_7,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__ProducedSet_8)
{
  {
    MR_bool transform_hlds__rbmm__live_variable_analysis__succeeded;
    MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_37_37;
    MR_Word transform_hlds__rbmm__live_variable_analysis__Useds_13;
    MR_Word transform_hlds__rbmm__live_variable_analysis__Produceds_14;
    MR_Word transform_hlds__rbmm__live_variable_analysis__Var_9;
    MR_Word transform_hlds__rbmm__live_variable_analysis__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Goal_6, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__live_variable_analysis___SwitchInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Goal_6, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__live_variable_analysis__Var_10;
    MR_Word transform_hlds__rbmm__live_variable_analysis__Var_11;

    transform_hlds__rbmm__live_variable_analysis__succeeded = ((((MR_tag((MR_Word) transform_hlds__rbmm__live_variable_analysis__Var_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__Var_29, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (transform_hlds__rbmm__live_variable_analysis__succeeded)
    {
      transform_hlds__rbmm__live_variable_analysis__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__Var_29, (MR_Integer) 1)));
      transform_hlds__rbmm__live_variable_analysis__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__Var_29, (MR_Integer) 2)));
      transform_hlds__rbmm__live_variable_analysis__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__Var_29, (MR_Integer) 3)));
      {
        transform_hlds__rbmm__live_variable_analysis__Useds_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Useds_13, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__Var_9));
        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Useds_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      transform_hlds__rbmm__live_variable_analysis__Produceds_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word transform_hlds__rbmm__live_variable_analysis__Expr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Goal_6, (MR_Integer) 0)));
      MR_Word transform_hlds__rbmm__live_variable_analysis___Info_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Goal_6, (MR_Integer) 1)));
      MR_Word transform_hlds__rbmm__live_variable_analysis__CalleePredId_17;
      MR_Integer transform_hlds__rbmm__live_variable_analysis__CalleeProcId_18;
      MR_Word transform_hlds__rbmm__live_variable_analysis__Args_19;
      MR_Word transform_hlds__rbmm__live_variable_analysis___BuiltIn_20;
      MR_Word transform_hlds__rbmm__live_variable_analysis___Context_21;
      MR_Word transform_hlds__rbmm__live_variable_analysis___Name_22;

      transform_hlds__rbmm__live_variable_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__live_variable_analysis__Expr_15)) == (MR_mktag((MR_Integer) 2)));
      if (transform_hlds__rbmm__live_variable_analysis__succeeded)
      {
        transform_hlds__rbmm__live_variable_analysis__CalleePredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 0)));
        transform_hlds__rbmm__live_variable_analysis__CalleeProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 1)));
        transform_hlds__rbmm__live_variable_analysis__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 2)));
        transform_hlds__rbmm__live_variable_analysis___BuiltIn_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 3)));
        transform_hlds__rbmm__live_variable_analysis___Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 4)));
        transform_hlds__rbmm__live_variable_analysis___Name_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 5)));
        {
          MR_Word transform_hlds__rbmm__live_variable_analysis__Var_31;
          MR_Word transform_hlds__rbmm__live_variable_analysis__CalleeInfo_44;
          MR_Word transform_hlds__rbmm__live_variable_analysis__Inputs_45;
          MR_Word transform_hlds__rbmm__live_variable_analysis__Outputs_46;
          MR_Word transform_hlds__rbmm__live_variable_analysis__FormalArgs_47;
          MR_Word transform_hlds__rbmm__live_variable_analysis___PredInfo_43;

          {
            transform_hlds__rbmm__live_variable_analysis__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_31, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__CalleePredId_17));
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_31, 1) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__CalleeProcId_18));
          }
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__rbmm__live_variable_analysis__ModuleInfo_5, transform_hlds__rbmm__live_variable_analysis__Var_31, &transform_hlds__rbmm__live_variable_analysis___PredInfo_43, &transform_hlds__rbmm__live_variable_analysis__CalleeInfo_44);
          transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_p_0(transform_hlds__rbmm__live_variable_analysis__ModuleInfo_5, transform_hlds__rbmm__live_variable_analysis__CalleeInfo_44, &transform_hlds__rbmm__live_variable_analysis__Inputs_45, &transform_hlds__rbmm__live_variable_analysis__Outputs_46);
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__rbmm__live_variable_analysis__CalleeInfo_44, &transform_hlds__rbmm__live_variable_analysis__FormalArgs_47);
          transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_p_0(transform_hlds__rbmm__live_variable_analysis__FormalArgs_47, transform_hlds__rbmm__live_variable_analysis__Args_19, transform_hlds__rbmm__live_variable_analysis__Inputs_45, transform_hlds__rbmm__live_variable_analysis__Outputs_46, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__rbmm__live_variable_analysis__Useds_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__rbmm__live_variable_analysis__Produceds_14);
        }
      }
      else
      {
        MR_Word transform_hlds__rbmm__live_variable_analysis__Unification_26;
        MR_Word transform_hlds__rbmm__live_variable_analysis__Var_23;
        MR_Word transform_hlds__rbmm__live_variable_analysis__Var_24;
        MR_Word transform_hlds__rbmm__live_variable_analysis__Var_25;
        MR_Word transform_hlds__rbmm__live_variable_analysis__Var_27;

        transform_hlds__rbmm__live_variable_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__live_variable_analysis__Expr_15)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__rbmm__live_variable_analysis__succeeded)
        {
          transform_hlds__rbmm__live_variable_analysis__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 0)));
          transform_hlds__rbmm__live_variable_analysis__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 1)));
          transform_hlds__rbmm__live_variable_analysis__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 2)));
          transform_hlds__rbmm__live_variable_analysis__Unification_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 3)));
          transform_hlds__rbmm__live_variable_analysis__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 4)));
          switch (MR_tag((MR_Word) transform_hlds__rbmm__live_variable_analysis__Unification_26)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word transform_hlds__rbmm__live_variable_analysis__LVar_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 0)));
                MR_Word transform_hlds__rbmm__live_variable_analysis__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 1)));
                MR_Word transform_hlds__rbmm__live_variable_analysis__Var_53;
                MR_Word transform_hlds__rbmm__live_variable_analysis__Var_54;
                MR_Word transform_hlds__rbmm__live_variable_analysis__Var_55;
                MR_Word transform_hlds__rbmm__live_variable_analysis__Var_56;

                transform_hlds__rbmm__live_variable_analysis__Useds_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 2)));
                transform_hlds__rbmm__live_variable_analysis__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 3)));
                transform_hlds__rbmm__live_variable_analysis__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 4)));
                transform_hlds__rbmm__live_variable_analysis__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 5)));
                transform_hlds__rbmm__live_variable_analysis__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 6)));
                {
                  transform_hlds__rbmm__live_variable_analysis__Produceds_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Produceds_14, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__LVar_50));
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Produceds_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__rbmm__live_variable_analysis__LVar_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 0)));
                MR_Word transform_hlds__rbmm__live_variable_analysis__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 1)));
                MR_Word transform_hlds__rbmm__live_variable_analysis__Var_61;
                MR_Word transform_hlds__rbmm__live_variable_analysis__Var_62;
                MR_Word transform_hlds__rbmm__live_variable_analysis__Var_63;

                transform_hlds__rbmm__live_variable_analysis__Produceds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 2)));
                transform_hlds__rbmm__live_variable_analysis__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 3)));
                transform_hlds__rbmm__live_variable_analysis__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 4)));
                transform_hlds__rbmm__live_variable_analysis__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 5)));
                {
                  transform_hlds__rbmm__live_variable_analysis__Useds_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Useds_13, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__LVar_58));
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Useds_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word transform_hlds__rbmm__live_variable_analysis__LVar_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 0)));
                MR_Word transform_hlds__rbmm__live_variable_analysis__RVar_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 1)));

                {
                  transform_hlds__rbmm__live_variable_analysis__Useds_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Useds_13, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__RVar_66));
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Useds_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  transform_hlds__rbmm__live_variable_analysis__Produceds_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Produceds_14, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__LVar_65));
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Produceds_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word transform_hlds__rbmm__live_variable_analysis__LVar_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 1)));
                    MR_Word transform_hlds__rbmm__live_variable_analysis__RVar_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 2)));
                    MR_Word transform_hlds__rbmm__live_variable_analysis__Var_71;

                    {
                      transform_hlds__rbmm__live_variable_analysis__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Var_71, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__RVar_70));
                      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      transform_hlds__rbmm__live_variable_analysis__Useds_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Useds_13, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__LVar_69));
                      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Useds_13, 1) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__Var_71));
                    }
                    transform_hlds__rbmm__live_variable_analysis__Produceds_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    transform_hlds__rbmm__live_variable_analysis__Useds_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    transform_hlds__rbmm__live_variable_analysis__Produceds_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                  break;
              }
              break;
          }
        }
        else
        {
          if (((((MR_tag((MR_Word) transform_hlds__rbmm__live_variable_analysis__Expr_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 0)))) == (MR_Integer) 2))))
          {
            MR_Word transform_hlds__rbmm__live_variable_analysis__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 2)));
            MR_Word transform_hlds__rbmm__live_variable_analysis__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 1)));

            transform_hlds__rbmm__live_variable_analysis__succeeded = (transform_hlds__rbmm__live_variable_analysis__Var_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          else
          if (((((MR_tag((MR_Word) transform_hlds__rbmm__live_variable_analysis__Expr_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 0)))) == (MR_Integer) 3))))
          {
            MR_Word transform_hlds__rbmm__live_variable_analysis__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 1)));

            transform_hlds__rbmm__live_variable_analysis__succeeded = (transform_hlds__rbmm__live_variable_analysis__Var_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          else
            transform_hlds__rbmm__live_variable_analysis__succeeded = MR_FALSE;
          if (transform_hlds__rbmm__live_variable_analysis__succeeded)
          {
            transform_hlds__rbmm__live_variable_analysis__Useds_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            transform_hlds__rbmm__live_variable_analysis__Produceds_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.live_variable_analysis", (MR_String) "predicate \140transform_hlds.rbmm.live_variable_analysis.compute_useds_produceds\'/4", (MR_String) "the expression must be either call, unify, true, or fail");
              return;
            }
          }
        }
      }
    }
    transform_hlds__rbmm__live_variable_analysis__TypeInfo_37_37 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0];
    mercury__set__list_to_set_2_p_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_37_37, transform_hlds__rbmm__live_variable_analysis__Useds_13, transform_hlds__rbmm__live_variable_analysis__UsedSet_7);
    mercury__set__list_to_set_2_p_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_37_37, transform_hlds__rbmm__live_variable_analysis__Produceds_14, transform_hlds__rbmm__live_variable_analysis__ProducedSet_8);
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_p_0(
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__live_variable_analysis__Inputs_3,
  MR_Word transform_hlds__rbmm__live_variable_analysis__Outputs_4,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualInputs_0_5,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualInputs_6,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualOutputs_0_7,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualOutputs_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__rbmm__live_variable_analysis__succeeded;

      if ((transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        if ((transform_hlds__rbmm__live_variable_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualOutputs_8 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualOutputs_0_7;
          *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualInputs_6 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualInputs_0_5;
        }
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.live_variable_analysis", (MR_String) "predicate \140transform_hlds.rbmm.live_variable_analysis.get_inputs_outputs_proc_call_2\'/8", (MR_String) "mismatched lists");
            return;
          }
        }
      else
      {
        MR_Word transform_hlds__rbmm__live_variable_analysis__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__live_variable_analysis__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1, (MR_Integer) 0)));

        if ((transform_hlds__rbmm__live_variable_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.live_variable_analysis", (MR_String) "predicate \140transform_hlds.rbmm.live_variable_analysis.get_inputs_outputs_proc_call_2\'/8", (MR_String) "mismatched lists");
            return;
          }
        }
        else
        {
          MR_Word transform_hlds__rbmm__live_variable_analysis__ActualArg_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word transform_hlds__rbmm__live_variable_analysis__ActualArgs_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word transform_hlds__rbmm__live_variable_analysis__ActualInputs1_51;
          MR_Word transform_hlds__rbmm__live_variable_analysis__ActualOutputs1_52;

          transform_hlds__rbmm__live_variable_analysis__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0], ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__Var_62)), transform_hlds__rbmm__live_variable_analysis__Inputs_3);
          if (transform_hlds__rbmm__live_variable_analysis__succeeded)
          {
            {
              transform_hlds__rbmm__live_variable_analysis__ActualInputs1_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__ActualInputs1_51, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ActualArg_45));
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__ActualInputs1_51, 1) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualInputs_0_5));
            }
            transform_hlds__rbmm__live_variable_analysis__ActualOutputs1_52 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualOutputs_0_7;
          }
          else
          {
            transform_hlds__rbmm__live_variable_analysis__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0], ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__Var_62)), transform_hlds__rbmm__live_variable_analysis__Outputs_4);
            if (transform_hlds__rbmm__live_variable_analysis__succeeded)
            {
              {
                transform_hlds__rbmm__live_variable_analysis__ActualOutputs1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__ActualOutputs1_52, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ActualArg_45));
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__ActualOutputs1_52, 1) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualOutputs_0_7));
              }
              transform_hlds__rbmm__live_variable_analysis__ActualInputs1_51 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualInputs_0_5;
            }
            else
            {
              transform_hlds__rbmm__live_variable_analysis__ActualInputs1_51 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualInputs_0_5;
              transform_hlds__rbmm__live_variable_analysis__ActualOutputs1_52 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualOutputs_0_7;
            }
          }
          /* direct tailcall eliminated */
          {
            MR_Word transform_hlds__rbmm__live_variable_analysis__next_value_of_HeadVar__1_1 = transform_hlds__rbmm__live_variable_analysis__Var_61;
            MR_Word transform_hlds__rbmm__live_variable_analysis__next_value_of_HeadVar__2_2 = transform_hlds__rbmm__live_variable_analysis__ActualArgs_46;
            MR_Word transform_hlds__rbmm__live_variable_analysis__next_value_of_STATE_VARIABLE_ActualInputs_0_5 = transform_hlds__rbmm__live_variable_analysis__ActualInputs1_51;
            MR_Word transform_hlds__rbmm__live_variable_analysis__next_value_of_STATE_VARIABLE_ActualOutputs_0_7 = transform_hlds__rbmm__live_variable_analysis__ActualOutputs1_52;

            transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1 = transform_hlds__rbmm__live_variable_analysis__next_value_of_HeadVar__1_1;
            transform_hlds__rbmm__live_variable_analysis__HeadVar__2_2 = transform_hlds__rbmm__live_variable_analysis__next_value_of_HeadVar__2_2;
            transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualInputs_0_5 = transform_hlds__rbmm__live_variable_analysis__next_value_of_STATE_VARIABLE_ActualInputs_0_5;
            transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualOutputs_0_7 = transform_hlds__rbmm__live_variable_analysis__next_value_of_STATE_VARIABLE_ActualOutputs_0_7;
          }
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_p_0(
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProgPoint_5,
  MR_Word transform_hlds__rbmm__live_variable_analysis__LV_6,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLV_0_9,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLV_10)
{
  {
    MR_bool transform_hlds__rbmm__live_variable_analysis__succeeded;
    MR_Word transform_hlds__rbmm__live_variable_analysis__ExistingLV_8;
    MR_Box transform_hlds__rbmm__live_variable_analysis__conv0_ExistingLV_8;

    transform_hlds__rbmm__live_variable_analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1], transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLV_0_9, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProgPoint_5)), &transform_hlds__rbmm__live_variable_analysis__conv0_ExistingLV_8);
    if (transform_hlds__rbmm__live_variable_analysis__succeeded)
    {
      transform_hlds__rbmm__live_variable_analysis__ExistingLV_8 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv0_ExistingLV_8);
      transform_hlds__rbmm__live_variable_analysis__succeeded = MR_TRUE;
    }
    if (transform_hlds__rbmm__live_variable_analysis__succeeded)
    {
      MR_Word transform_hlds__rbmm__live_variable_analysis__Var_11;

      transform_hlds__rbmm__live_variable_analysis__Var_11 = mercury__set__union_2_f_0((MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0], transform_hlds__rbmm__live_variable_analysis__ExistingLV_8, transform_hlds__rbmm__live_variable_analysis__LV_6);
      mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1], ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProgPoint_5)), ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__Var_11)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLV_0_9, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLV_10);
    }
    else
    {
      mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1], ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProgPoint_5)), ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__LV_6)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLV_0_9, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLV_10);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_p_0_1(
  MR_Box transform_hlds__rbmm__live_variable_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_5,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_6,
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_7)
{
  {
    MR_Box transform_hlds__rbmm__live_variable_analysis__closure = transform_hlds__rbmm__live_variable_analysis__closure_arg;
    MR_Word transform_hlds__rbmm__live_variable_analysis__conv2_STATE_VARIABLE_LVBeforeTable_27;
    MR_Word transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_LVAfterTable_29;
    MR_Word transform_hlds__rbmm__live_variable_analysis__conv0_STATE_VARIABLE_VoidVarTable_31;

    transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__closure, (MR_Integer) 5))), ((MR_Integer) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2), &transform_hlds__rbmm__live_variable_analysis__conv2_STATE_VARIABLE_LVBeforeTable_27, ((MR_Word) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_4), &transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_LVAfterTable_29, ((MR_Word) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_6), &transform_hlds__rbmm__live_variable_analysis__conv0_STATE_VARIABLE_VoidVarTable_31);
    *transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__conv2_STATE_VARIABLE_LVBeforeTable_27));
    *transform_hlds__rbmm__live_variable_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_LVAfterTable_29));
    *transform_hlds__rbmm__live_variable_analysis__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__conv0_STATE_VARIABLE_VoidVarTable_31));
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_p_0(
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_10,
  MR_Word transform_hlds__rbmm__live_variable_analysis__ExecPathTable_11,
  MR_Word transform_hlds__rbmm__live_variable_analysis__PredId_12,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_0_18,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_19,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_0_20,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_21,
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_0_22,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_23)
{
  {
    MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_36_36;
    MR_Word transform_hlds__rbmm__live_variable_analysis__PredInfo_16;
    MR_Word transform_hlds__rbmm__live_variable_analysis__ProcIds_17;
    MR_Word transform_hlds__rbmm__live_variable_analysis__Var_24;
    MR_Box transform_hlds__rbmm__live_variable_analysis__conv5_STATE_VARIABLE_LVBeforeTable_19;
    MR_Box transform_hlds__rbmm__live_variable_analysis__conv4_STATE_VARIABLE_LVAfterTable_21;
    MR_Box transform_hlds__rbmm__live_variable_analysis__conv3_STATE_VARIABLE_VoidVarTable_23;

    hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__live_variable_analysis__ModuleInfo_10, transform_hlds__rbmm__live_variable_analysis__PredId_12, &transform_hlds__rbmm__live_variable_analysis__PredInfo_16);
    transform_hlds__rbmm__live_variable_analysis__ProcIds_17 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__rbmm__live_variable_analysis__PredInfo_16);
    {
      transform_hlds__rbmm__live_variable_analysis__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_24, 0) = ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_24, 1) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_24, 3) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ModuleInfo_10));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_24, 4) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ExecPathTable_11));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_24, 5) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__PredId_12));
    }
    transform_hlds__rbmm__live_variable_analysis__TypeInfo_36_36 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_2[1];
    mercury__list__foldl3_8_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__rbmm__live_variable_analysis__TypeInfo_36_36, transform_hlds__rbmm__live_variable_analysis__TypeInfo_36_36, transform_hlds__rbmm__live_variable_analysis__TypeInfo_36_36, transform_hlds__rbmm__live_variable_analysis__Var_24, transform_hlds__rbmm__live_variable_analysis__ProcIds_17, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_0_18)), &transform_hlds__rbmm__live_variable_analysis__conv5_STATE_VARIABLE_LVBeforeTable_19, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_0_20)), &transform_hlds__rbmm__live_variable_analysis__conv4_STATE_VARIABLE_LVAfterTable_21, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_0_22)), &transform_hlds__rbmm__live_variable_analysis__conv3_STATE_VARIABLE_VoidVarTable_23);
    *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_19 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv5_STATE_VARIABLE_LVBeforeTable_19);
    *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_21 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv4_STATE_VARIABLE_LVAfterTable_21);
    *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_23 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv3_STATE_VARIABLE_VoidVarTable_23);
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_p_0_1(
  MR_Box transform_hlds__rbmm__live_variable_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_5,
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_6,
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_7)
{
  {
    MR_Box transform_hlds__rbmm__live_variable_analysis__closure = transform_hlds__rbmm__live_variable_analysis__closure_arg;
    MR_Word transform_hlds__rbmm__live_variable_analysis__conv2_STATE_VARIABLE_LVBeforeTable_19;
    MR_Word transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_LVAfterTable_21;
    MR_Word transform_hlds__rbmm__live_variable_analysis__conv0_STATE_VARIABLE_VoidVarTable_23;

    transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2), &transform_hlds__rbmm__live_variable_analysis__conv2_STATE_VARIABLE_LVBeforeTable_19, ((MR_Word) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_4), &transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_LVAfterTable_21, ((MR_Word) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_6), &transform_hlds__rbmm__live_variable_analysis__conv0_STATE_VARIABLE_VoidVarTable_23);
    *transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__conv2_STATE_VARIABLE_LVBeforeTable_19));
    *transform_hlds__rbmm__live_variable_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_LVAfterTable_21));
    *transform_hlds__rbmm__live_variable_analysis__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__conv0_STATE_VARIABLE_VoidVarTable_23));
  }
}

void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_p_0(
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_6,
  MR_Word transform_hlds__rbmm__live_variable_analysis__ExecPathTable_7,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__LVBeforeTable_8,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__LVAfterTable_9,
  MR_Word * transform_hlds__rbmm__live_variable_analysis__VoidVarTable_10)
{
  {
    MR_Word transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_16_16;
    MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_17_17;
    MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_26_26;
    MR_Word transform_hlds__rbmm__live_variable_analysis__PredIds_11;
    MR_Word transform_hlds__rbmm__live_variable_analysis__LVBeforeTable0_12;
    MR_Word transform_hlds__rbmm__live_variable_analysis__LVAfterTable0_13;
    MR_Word transform_hlds__rbmm__live_variable_analysis__VoidVarTable0_14;
    MR_Word transform_hlds__rbmm__live_variable_analysis__Var_15;
    MR_Box transform_hlds__rbmm__live_variable_analysis__conv5_LVBeforeTable_8;
    MR_Box transform_hlds__rbmm__live_variable_analysis__conv4_LVAfterTable_9;
    MR_Box transform_hlds__rbmm__live_variable_analysis__conv3_VoidVarTable_10;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__rbmm__live_variable_analysis__ModuleInfo_6, &transform_hlds__rbmm__live_variable_analysis__PredIds_11);
    transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_16_16 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    transform_hlds__rbmm__live_variable_analysis__TypeInfo_17_17 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_2[0];
    mercury__map__init_1_p_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_16_16, transform_hlds__rbmm__live_variable_analysis__TypeInfo_17_17, &transform_hlds__rbmm__live_variable_analysis__LVBeforeTable0_12);
    mercury__map__init_1_p_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_16_16, transform_hlds__rbmm__live_variable_analysis__TypeInfo_17_17, &transform_hlds__rbmm__live_variable_analysis__LVAfterTable0_13);
    mercury__map__init_1_p_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_16_16, transform_hlds__rbmm__live_variable_analysis__TypeInfo_17_17, &transform_hlds__rbmm__live_variable_analysis__VoidVarTable0_14);
    {
      transform_hlds__rbmm__live_variable_analysis__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_15, 0) = ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_15, 1) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_15, 3) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ModuleInfo_6));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Var_15, 4) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ExecPathTable_7));
    }
    transform_hlds__rbmm__live_variable_analysis__TypeInfo_26_26 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_2[1];
    mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__rbmm__live_variable_analysis__TypeInfo_26_26, transform_hlds__rbmm__live_variable_analysis__TypeInfo_26_26, transform_hlds__rbmm__live_variable_analysis__TypeInfo_26_26, transform_hlds__rbmm__live_variable_analysis__Var_15, transform_hlds__rbmm__live_variable_analysis__PredIds_11, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__LVBeforeTable0_12)), &transform_hlds__rbmm__live_variable_analysis__conv5_LVBeforeTable_8, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__LVAfterTable0_13)), &transform_hlds__rbmm__live_variable_analysis__conv4_LVAfterTable_9, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__VoidVarTable0_14)), &transform_hlds__rbmm__live_variable_analysis__conv3_VoidVarTable_10);
    *transform_hlds__rbmm__live_variable_analysis__LVBeforeTable_8 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv5_LVBeforeTable_8);
    *transform_hlds__rbmm__live_variable_analysis__LVAfterTable_9 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv4_LVAfterTable_9);
    *transform_hlds__rbmm__live_variable_analysis__VoidVarTable_10 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv3_VoidVarTable_10);
  }
}

void mercury__transform_hlds__rbmm__live_variable_analysis__init(void)
{
}

void mercury__transform_hlds__rbmm__live_variable_analysis__init_type_tables(void)
{
}

void mercury__transform_hlds__rbmm__live_variable_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__rbmm__live_variable_analysis__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module transform_hlds.rbmm.live_variable_analysis. */
