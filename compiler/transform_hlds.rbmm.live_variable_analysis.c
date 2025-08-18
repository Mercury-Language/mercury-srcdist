/*
** Automatically generated from `rbmm.live_variable_analysis.m'
** by the Mercury compiler,
** version rotd-2025-08-18
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


// :- module transform_hlds.rbmm.live_variable_analysis.
// :- implementation.

/*
INIT mercury__transform_hlds__rbmm__live_variable_analysis__init
ENDINIT
*/

#include "transform_hlds.rbmm.live_variable_analysis.mih"


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
#include "parse_tree.prog_type.mih"
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
#include "transform_hlds.rbmm.region_liveness_info.mih"




static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__void_var_4_p_0(
  MR_Word VarTable_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_VoidVars_0_9,
  MR_Word * STATE_VARIABLE_VoidVars_10);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word ExecPathTable_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word STATE_VARIABLE_LVBeforeTable_0_26,
  MR_Word * STATE_VARIABLE_LVBeforeTable_27,
  MR_Word STATE_VARIABLE_LVAfterTable_0_28,
  MR_Word * STATE_VARIABLE_LVAfterTable_29,
  MR_Word STATE_VARIABLE_VoidVarTable_0_30,
  MR_Word * STATE_VARIABLE_VoidVarTable_31);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Inputs_2,
  MR_Word Outputs_3,
  MR_Word ModuleInfo_4,
  MR_Word ProcInfo_5,
  MR_Word STATE_VARIABLE_ProcLVBefore_0_6,
  MR_Word * STATE_VARIABLE_ProcLVBefore_7,
  MR_Word STATE_VARIABLE_ProcLVAfter_0_8,
  MR_Word * STATE_VARIABLE_ProcLVAfter_9,
  MR_Word STATE_VARIABLE_ProcVoidVar_0_10,
  MR_Word * STATE_VARIABLE_ProcVoidVar_11);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Inputs_2,
  MR_Word HeadVar__3_3,
  MR_Word ModuleInfo_4,
  MR_Word ProcInfo_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_ProcLVBefore_0_8,
  MR_Word * STATE_VARIABLE_ProcLVBefore_9,
  MR_Word STATE_VARIABLE_ProcLVAfter_0_10,
  MR_Word * STATE_VARIABLE_ProcLVAfter_11,
  MR_Word STATE_VARIABLE_ProcVoidVar_0_12,
  MR_Word * STATE_VARIABLE_ProcVoidVar_13);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0(
  MR_Word ProgPoint_6,
  MR_Word ProducedSet_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_ProcVoidVar_0_13,
  MR_Word * STATE_VARIABLE_ProcVoidVar_14);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Goal_6,
  MR_Word * UsedSet_7,
  MR_Word * ProducedSet_8);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word Inputs_3,
  MR_Word Outputs_4,
  MR_Word STATE_VARIABLE_ActualInputs_0_5,
  MR_Word * STATE_VARIABLE_ActualInputs_6,
  MR_Word STATE_VARIABLE_ActualOutputs_0_7,
  MR_Word * STATE_VARIABLE_ActualOutputs_8);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_p_0(
  MR_Word ProgPoint_5,
  MR_Word LV_6,
  MR_Word STATE_VARIABLE_ProcLV_0_9,
  MR_Word * STATE_VARIABLE_ProcLV_10);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ExecPathTable_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_LVBeforeTable_0_18,
  MR_Word * STATE_VARIABLE_LVBeforeTable_19,
  MR_Word STATE_VARIABLE_LVAfterTable_0_20,
  MR_Word * STATE_VARIABLE_LVAfterTable_21,
  MR_Word STATE_VARIABLE_VoidVarTable_0_22,
  MR_Word * STATE_VARIABLE_VoidVarTable_23);

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);


static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_2[3][3];

static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_3[1][12];

static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_4[1][13];

static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_5[1][7];




static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_2[2]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[2]))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_3[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
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
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
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
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__rbmm__live_variable_analysis__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__rbmm__live_variable_analysis__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__live_variable_analysis__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&transform_hlds__rbmm__live_variable_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__live_variable_analysis__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__live_variable_analysis__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__live_variable_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__void_var_4_p_0(
  MR_Word VarTable_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_VoidVars_0_9,
  MR_Word * STATE_VARIABLE_VoidVars_10)
{
  MR_bool succeeded;
  MR_Word VarEntry_8;
  MR_String Var_11;
  MR_Char Var_17;

  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_5, Var_6, &VarEntry_8);
  Var_11 = ((MR_String) ((MR_hl_field(0, VarEntry_8, 0))));
  succeeded = mercury__string__index_3_p_0(Var_11, (MR_Integer) 0, &Var_17);
  if (succeeded)
    succeeded = ((MR_Char) 95 == Var_17);
  if (succeeded)
    mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]), ((MR_Box) (Var_6)), STATE_VARIABLE_VoidVars_0_9, STATE_VARIABLE_VoidVars_10);
  else
    *STATE_VARIABLE_VoidVars_10 = STATE_VARIABLE_VoidVars_0_9;
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word ExecPathTable_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word STATE_VARIABLE_LVBeforeTable_0_26,
  MR_Word * STATE_VARIABLE_LVBeforeTable_27,
  MR_Word STATE_VARIABLE_LVAfterTable_0_28,
  MR_Word * STATE_VARIABLE_LVAfterTable_29,
  MR_Word STATE_VARIABLE_VoidVarTable_0_30,
  MR_Word * STATE_VARIABLE_VoidVarTable_31)
{
  MR_bool succeeded;
  MR_Word PPId_18;
  MR_Word Var_32;

  {
    PPId_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PPId_18, 0) = ((MR_Box) (PredId_13));
    MR_hl_field(0, PPId_18, 1) = ((MR_Box) (ProcId_14));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (PPId_18));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(Var_32, ModuleInfo_11);
  if (succeeded)
  {
    *STATE_VARIABLE_VoidVarTable_31 = STATE_VARIABLE_VoidVarTable_0_30;
    *STATE_VARIABLE_LVAfterTable_29 = STATE_VARIABLE_LVAfterTable_0_28;
    *STATE_VARIABLE_LVBeforeTable_27 = STATE_VARIABLE_LVBeforeTable_0_26;
  }
  else
  {
    MR_Word ProcInfo_19;
    MR_Word Inputs_20;
    MR_Word Outputs_21;
    MR_Word ExecPaths_22;
    MR_Word ProcLVBefore_23;
    MR_Word ProcLVAfter_24;
    MR_Word ProcVoidVar_25;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Box conv0_ExecPaths_22;

    hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_11, PPId_18, &ProcInfo_19);
    transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_p_0(ModuleInfo_11, ProcInfo_19, &Inputs_20, &Outputs_21);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[3]), ExecPathTable_12, ((MR_Box) (PPId_18)), &conv0_ExecPaths_22);
    ExecPaths_22 = ((MR_Word) (conv0_ExecPaths_22));
    Var_34 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1]));
    Var_35 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1]));
    Var_36 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1]));
    transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_p_0(ExecPaths_22, Inputs_20, Outputs_21, ModuleInfo_11, ProcInfo_19, Var_34, &ProcLVBefore_23, Var_35, &ProcLVAfter_24, Var_36, &ProcVoidVar_25);
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_2[0]), ((MR_Box) (PPId_18)), ((MR_Box) (ProcLVBefore_23)), STATE_VARIABLE_LVBeforeTable_0_26, STATE_VARIABLE_LVBeforeTable_27);
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_2[0]), ((MR_Box) (PPId_18)), ((MR_Box) (ProcLVAfter_24)), STATE_VARIABLE_LVAfterTable_0_28, STATE_VARIABLE_LVAfterTable_29);
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_2[0]), ((MR_Box) (PPId_18)), ((MR_Box) (ProcVoidVar_25)), STATE_VARIABLE_VoidVarTable_0_30, STATE_VARIABLE_VoidVarTable_31);
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_VoidVars_10;

  transform_hlds__rbmm__live_variable_analysis__void_var_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_VoidVars_10);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_VoidVars_10));
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Inputs_2,
  MR_Word Outputs_3,
  MR_Word ModuleInfo_4,
  MR_Word ProcInfo_5,
  MR_Word STATE_VARIABLE_ProcLVBefore_0_6,
  MR_Word * STATE_VARIABLE_ProcLVBefore_7,
  MR_Word STATE_VARIABLE_ProcLVAfter_0_8,
  MR_Word * STATE_VARIABLE_ProcLVAfter_9,
  MR_Word STATE_VARIABLE_ProcVoidVar_0_10,
  MR_Word * STATE_VARIABLE_ProcVoidVar_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ProcVoidVar_11 = STATE_VARIABLE_ProcVoidVar_0_10;
      *STATE_VARIABLE_ProcLVAfter_9 = STATE_VARIABLE_ProcLVAfter_0_8;
      *STATE_VARIABLE_ProcLVBefore_7 = STATE_VARIABLE_ProcLVBefore_0_6;
    }
    else
    {
      MR_Word ExecPath0_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ExecPaths_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ExecPath_34;
      MR_Word STATE_VARIABLE_ProcLVBefore_1_42;
      MR_Word STATE_VARIABLE_ProcLVAfter_1_43;
      MR_Word STATE_VARIABLE_ProcVoidVar_1_44;
      MR_Integer Var_41;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ProcLVBefore_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ProcLVAfter_0_8;
      MR_Word next_value_of_STATE_VARIABLE_ProcVoidVar_0_10;

      mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_2[2]), ExecPath0_25, &ExecPath_34);
      Var_41 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_2[2]), ExecPath_34);
      succeeded = (Var_41 == (MR_Integer) 1);
      if (succeeded)
        if ((ExecPath_34 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.live_variable_analysis.live_variable_analysis_singleton_exec_path\'/11", (MR_String) "empty list");
            return;
          }
        else
        {
          MR_Word ProgPoint_49;
          MR_Word Goal_50;
          MR_Word LVBefore_56;
          MR_Word LVAfter_57;
          MR_Word ProducedSet_59;
          MR_Word Var_66 = ((MR_Word) ((MR_hl_field(1, ExecPath_34, 0))));
          MR_Word _UsedSet_58;
          MR_Box conv0__DeadVars_82;

          ProgPoint_49 = ((MR_Word) ((MR_hl_field(0, Var_66, 0))));
          Goal_50 = ((MR_Word) ((MR_hl_field(0, Var_66, 1))));
          LVBefore_56 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]), Inputs_2);
          mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1]), ((MR_Box) (ProgPoint_49)), ((MR_Box) (LVBefore_56)), STATE_VARIABLE_ProcLVBefore_0_6, &STATE_VARIABLE_ProcLVBefore_1_42);
          LVAfter_57 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]), Outputs_3);
          mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1]), ((MR_Box) (ProgPoint_49)), ((MR_Box) (LVAfter_57)), STATE_VARIABLE_ProcLVAfter_0_8, &STATE_VARIABLE_ProcLVAfter_1_43);
          transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_p_0(ModuleInfo_4, Goal_50, &_UsedSet_58, &ProducedSet_59);
          succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1]), STATE_VARIABLE_ProcVoidVar_0_10, ((MR_Box) (ProgPoint_49)), &conv0__DeadVars_82);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
            STATE_VARIABLE_ProcVoidVar_1_44 = STATE_VARIABLE_ProcVoidVar_0_10;
          else
          {
            MR_Word VarTable_83;
            MR_Word VoidVars_84;
            MR_Word Var_85;
            MR_Word Var_86;
            MR_Box conv2_VoidVars_84;

            hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_5, &VarTable_83);
            {
              Var_85 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_85, 0) = ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_5[0]));
              MR_hl_field(0, Var_85, 1) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_p_0_1));
              MR_hl_field(0, Var_85, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_85, 3) = ((MR_Box) (VarTable_83));
            }
            Var_86 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]));
            mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1]), Var_85, ProducedSet_59, ((MR_Box) (Var_86)), &conv2_VoidVars_84);
            VoidVars_84 = ((MR_Word) (conv2_VoidVars_84));
            mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1]), ((MR_Box) (ProgPoint_49)), ((MR_Box) (VoidVars_84)), STATE_VARIABLE_ProcVoidVar_0_10, &STATE_VARIABLE_ProcVoidVar_1_44);
          }
        }
      else
      {
        MR_Word Var_46;

        Var_46 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]));
        transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_p_0(ExecPath_34, Inputs_2, Outputs_3, ModuleInfo_4, ProcInfo_5, (MR_Integer) 1, Var_46, STATE_VARIABLE_ProcLVBefore_0_6, &STATE_VARIABLE_ProcLVBefore_1_42, STATE_VARIABLE_ProcLVAfter_0_8, &STATE_VARIABLE_ProcLVAfter_1_43, STATE_VARIABLE_ProcVoidVar_0_10, &STATE_VARIABLE_ProcVoidVar_1_44);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ExecPaths_26;
      next_value_of_STATE_VARIABLE_ProcLVBefore_0_6 = STATE_VARIABLE_ProcLVBefore_1_42;
      next_value_of_STATE_VARIABLE_ProcLVAfter_0_8 = STATE_VARIABLE_ProcLVAfter_1_43;
      next_value_of_STATE_VARIABLE_ProcVoidVar_0_10 = STATE_VARIABLE_ProcVoidVar_1_44;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ProcLVBefore_0_6 = next_value_of_STATE_VARIABLE_ProcLVBefore_0_6;
      STATE_VARIABLE_ProcLVAfter_0_8 = next_value_of_STATE_VARIABLE_ProcLVAfter_0_8;
      STATE_VARIABLE_ProcVoidVar_0_10 = next_value_of_STATE_VARIABLE_ProcVoidVar_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Inputs_2,
  MR_Word HeadVar__3_3,
  MR_Word ModuleInfo_4,
  MR_Word ProcInfo_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_ProcLVBefore_0_8,
  MR_Word * STATE_VARIABLE_ProcLVBefore_9,
  MR_Word STATE_VARIABLE_ProcLVAfter_0_10,
  MR_Word * STATE_VARIABLE_ProcLVAfter_11,
  MR_Word STATE_VARIABLE_ProcVoidVar_0_12,
  MR_Word * STATE_VARIABLE_ProcVoidVar_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ProcVoidVar_13 = STATE_VARIABLE_ProcVoidVar_0_12;
      *STATE_VARIABLE_ProcLVAfter_11 = STATE_VARIABLE_ProcLVAfter_0_10;
      *STATE_VARIABLE_ProcLVBefore_9 = STATE_VARIABLE_ProcLVBefore_0_8;
    }
    else
    {
      MR_Word Var_128 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_129 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Var_132 = ((MR_Word) ((MR_hl_field(0, Var_129, 1))));
      MR_Word Var_133 = ((MR_Word) ((MR_hl_field(0, Var_129, 0))));

      switch (HeadVar__6_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          if ((Var_128 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ProducedSet_105;
            MR_Box conv0__LVBeforeFirst_102;
            MR_Word _UsedSet_104;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1]), STATE_VARIABLE_ProcLVBefore_0_8, ((MR_Box) (Var_133)), &conv0__LVBeforeFirst_102);
            if (succeeded)
              succeeded = MR_TRUE;
            if (succeeded)
              *STATE_VARIABLE_ProcLVBefore_9 = STATE_VARIABLE_ProcLVBefore_0_8;
            else
            {
              MR_Word LVBeforeFirst_103;

              LVBeforeFirst_103 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]), Inputs_2);
              mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1]), ((MR_Box) (Var_133)), ((MR_Box) (LVBeforeFirst_103)), STATE_VARIABLE_ProcLVBefore_0_8, STATE_VARIABLE_ProcLVBefore_9);
            }
            transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_p_0(Var_133, HeadVar__7_7, STATE_VARIABLE_ProcLVAfter_0_10, STATE_VARIABLE_ProcLVAfter_11);
            transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_p_0(ModuleInfo_4, Var_132, &_UsedSet_104, &ProducedSet_105);
            transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0(Var_133, ProducedSet_105, ProcInfo_5, STATE_VARIABLE_ProcVoidVar_0_12, STATE_VARIABLE_ProcVoidVar_13);
          }
          else
          {
            MR_Word UsedSet_72;
            MR_Word ProducedSet_73;
            MR_Word LVBeforeInThisExecPath_74;
            MR_Word STATE_VARIABLE_ProcLVAfter_1_83;
            MR_Word Var_84;
            MR_Word STATE_VARIABLE_ProcLVBefore_1_85;
            MR_Word STATE_VARIABLE_ProcVoidVar_1_86;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__7_7;
            MR_Word next_value_of_STATE_VARIABLE_ProcLVBefore_0_8;
            MR_Word next_value_of_STATE_VARIABLE_ProcLVAfter_0_10;
            MR_Word next_value_of_STATE_VARIABLE_ProcVoidVar_0_12;

            transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_p_0(Var_133, HeadVar__7_7, STATE_VARIABLE_ProcLVAfter_0_10, &STATE_VARIABLE_ProcLVAfter_1_83);
            transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_p_0(ModuleInfo_4, Var_132, &UsedSet_72, &ProducedSet_73);
            Var_84 = mercury__set__difference_2_f_0((MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]), HeadVar__7_7, ProducedSet_73);
            mercury__set__union_3_p_0((MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]), Var_84, UsedSet_72, &LVBeforeInThisExecPath_74);
            transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_p_0(Var_133, LVBeforeInThisExecPath_74, STATE_VARIABLE_ProcLVBefore_0_8, &STATE_VARIABLE_ProcLVBefore_1_85);
            transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0(Var_133, ProducedSet_73, ProcInfo_5, STATE_VARIABLE_ProcVoidVar_0_12, &STATE_VARIABLE_ProcVoidVar_1_86);
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Var_128;
            next_value_of_HeadVar__7_7 = LVBeforeInThisExecPath_74;
            next_value_of_STATE_VARIABLE_ProcLVBefore_0_8 = STATE_VARIABLE_ProcLVBefore_1_85;
            next_value_of_STATE_VARIABLE_ProcLVAfter_0_10 = STATE_VARIABLE_ProcLVAfter_1_83;
            next_value_of_STATE_VARIABLE_ProcVoidVar_0_12 = STATE_VARIABLE_ProcVoidVar_1_86;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__6_6 = (MR_Integer) 0;
            HeadVar__7_7 = next_value_of_HeadVar__7_7;
            STATE_VARIABLE_ProcLVBefore_0_8 = next_value_of_STATE_VARIABLE_ProcLVBefore_0_8;
            STATE_VARIABLE_ProcLVAfter_0_10 = next_value_of_STATE_VARIABLE_ProcLVAfter_0_10;
            STATE_VARIABLE_ProcVoidVar_0_12 = next_value_of_STATE_VARIABLE_ProcVoidVar_0_12;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word LVAfterLast_41;
            MR_Word UsedSet_42;
            MR_Word ProducedSet_43;
            MR_Word LVBeforeLastInThisExecPath_44;
            MR_Word STATE_VARIABLE_ProcLVAfter_1_52;
            MR_Word Var_53;
            MR_Word STATE_VARIABLE_ProcLVBefore_1_54;
            MR_Word STATE_VARIABLE_ProcVoidVar_1_55;
            MR_Word LVAfterLast0_40;
            MR_Box conv1_LVAfterLast0_40;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__7_7;
            MR_Word next_value_of_STATE_VARIABLE_ProcLVBefore_0_8;
            MR_Word next_value_of_STATE_VARIABLE_ProcLVAfter_0_10;
            MR_Word next_value_of_STATE_VARIABLE_ProcVoidVar_0_12;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1]), STATE_VARIABLE_ProcLVAfter_0_10, ((MR_Box) (Var_133)), &conv1_LVAfterLast0_40);
            if (succeeded)
            {
              LVAfterLast0_40 = ((MR_Word) (conv1_LVAfterLast0_40));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              LVAfterLast_41 = LVAfterLast0_40;
              STATE_VARIABLE_ProcLVAfter_1_52 = STATE_VARIABLE_ProcLVAfter_0_10;
            }
            else
            {
              LVAfterLast_41 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]), HeadVar__3_3);
              mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1]), ((MR_Box) (Var_133)), ((MR_Box) (LVAfterLast_41)), STATE_VARIABLE_ProcLVAfter_0_10, &STATE_VARIABLE_ProcLVAfter_1_52);
            }
            transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_p_0(ModuleInfo_4, Var_132, &UsedSet_42, &ProducedSet_43);
            Var_53 = mercury__set__difference_2_f_0((MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]), LVAfterLast_41, ProducedSet_43);
            mercury__set__union_3_p_0((MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]), Var_53, UsedSet_42, &LVBeforeLastInThisExecPath_44);
            transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_p_0(Var_133, LVBeforeLastInThisExecPath_44, STATE_VARIABLE_ProcLVBefore_0_8, &STATE_VARIABLE_ProcLVBefore_1_54);
            transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0(Var_133, ProducedSet_43, ProcInfo_5, STATE_VARIABLE_ProcVoidVar_0_12, &STATE_VARIABLE_ProcVoidVar_1_55);
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Var_128;
            next_value_of_HeadVar__7_7 = LVBeforeLastInThisExecPath_44;
            next_value_of_STATE_VARIABLE_ProcLVBefore_0_8 = STATE_VARIABLE_ProcLVBefore_1_54;
            next_value_of_STATE_VARIABLE_ProcLVAfter_0_10 = STATE_VARIABLE_ProcLVAfter_1_52;
            next_value_of_STATE_VARIABLE_ProcVoidVar_0_12 = STATE_VARIABLE_ProcVoidVar_1_55;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__6_6 = (MR_Integer) 0;
            HeadVar__7_7 = next_value_of_HeadVar__7_7;
            STATE_VARIABLE_ProcLVBefore_0_8 = next_value_of_STATE_VARIABLE_ProcLVBefore_0_8;
            STATE_VARIABLE_ProcLVAfter_0_10 = next_value_of_STATE_VARIABLE_ProcLVAfter_0_10;
            STATE_VARIABLE_ProcVoidVar_0_12 = next_value_of_STATE_VARIABLE_ProcVoidVar_0_12;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_VoidVars_10;

  transform_hlds__rbmm__live_variable_analysis__void_var_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_VoidVars_10);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_VoidVars_10));
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0(
  MR_Word ProgPoint_6,
  MR_Word ProducedSet_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_ProcVoidVar_0_13,
  MR_Word * STATE_VARIABLE_ProcVoidVar_14)
{
  MR_bool succeeded;
  MR_Box conv0__DeadVars_10;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1]), STATE_VARIABLE_ProcVoidVar_0_13, ((MR_Box) (ProgPoint_6)), &conv0__DeadVars_10);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
    *STATE_VARIABLE_ProcVoidVar_14 = STATE_VARIABLE_ProcVoidVar_0_13;
  else
  {
    MR_Word VarTable_11;
    MR_Word VoidVars_12;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Box conv2_VoidVars_12;

    hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_8, &VarTable_11);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_15, 0) = ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_5[0]));
      MR_hl_field(0, Var_15, 1) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0_1));
      MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_15, 3) = ((MR_Box) (VarTable_11));
    }
    Var_16 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]));
    mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1]), Var_15, ProducedSet_7, ((MR_Box) (Var_16)), &conv2_VoidVars_12);
    VoidVars_12 = ((MR_Word) (conv2_VoidVars_12));
    mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1]), ((MR_Box) (ProgPoint_6)), ((MR_Box) (VoidVars_12)), STATE_VARIABLE_ProcVoidVar_0_13, STATE_VARIABLE_ProcVoidVar_14);
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Goal_6,
  MR_Word * UsedSet_7,
  MR_Word * ProducedSet_8)
{
  MR_bool succeeded;
  MR_Word Useds_13;
  MR_Word Produceds_14;
  MR_Word Var_9;
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Goal_6, 0))));

  succeeded = ((((MR_tag((MR_Word) Var_29)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_29, 0)))) == (MR_Integer) 4)));
  if (succeeded)
  {
    Var_9 = ((MR_Word) ((MR_hl_field(3, Var_29, 1))));
    {
      Useds_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Useds_13, 0) = ((MR_Box) (Var_9));
      MR_hl_field(1, Useds_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Produceds_14 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Expr_15 = ((MR_Word) ((MR_hl_field(0, Goal_6, 0))));
    MR_Word CalleePredId_17;
    MR_Integer CalleeProcId_18;
    MR_Word Args_19;

    succeeded = ((MR_tag((MR_Word) Expr_15)) == (MR_Integer) 2);
    if (succeeded)
    {
      CalleePredId_17 = ((MR_Word) ((MR_hl_field(2, Expr_15, 0))));
      CalleeProcId_18 = ((MR_Integer) ((MR_hl_field(2, Expr_15, 1))));
      Args_19 = ((MR_Word) ((MR_hl_field(2, Expr_15, 2))));
      {
        MR_Word Var_31;
        MR_Word CalleeInfo_38;
        MR_Word Inputs_39;
        MR_Word Outputs_40;
        MR_Word FormalArgs_41;
        MR_Word _PredInfo_37;

        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_31, 0) = ((MR_Box) (CalleePredId_17));
          MR_hl_field(0, Var_31, 1) = ((MR_Box) (CalleeProcId_18));
        }
        hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_5, Var_31, &_PredInfo_37, &CalleeInfo_38);
        transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_p_0(ModuleInfo_5, CalleeInfo_38, &Inputs_39, &Outputs_40);
        hlds__hlds_pred__proc_info_get_headvars_2_p_0(CalleeInfo_38, &FormalArgs_41);
        transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_p_0(FormalArgs_41, Args_19, Inputs_39, Outputs_40, (MR_Word) ((MR_Unsigned) 0U), &Useds_13, (MR_Word) ((MR_Unsigned) 0U), &Produceds_14);
      }
    }
    else
    {
      MR_Word Unification_26;

      succeeded = ((MR_tag((MR_Word) Expr_15)) == (MR_Integer) 1);
      if (succeeded)
      {
        Unification_26 = ((MR_Word) ((MR_hl_field(1, Expr_15, 3))));
        switch (MR_tag((MR_Word) Unification_26)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LVar_44 = ((MR_Word) ((MR_hl_field(0, Unification_26, 0))));

              Useds_13 = ((MR_Word) ((MR_hl_field(0, Unification_26, 2))));
              {
                Produceds_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Produceds_14, 0) = ((MR_Box) (LVar_44));
                MR_hl_field(1, Produceds_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word LVar_52 = ((MR_Word) ((MR_hl_field(1, Unification_26, 0))));

              Produceds_14 = ((MR_Word) ((MR_hl_field(1, Unification_26, 2))));
              {
                Useds_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Useds_13, 0) = ((MR_Box) (LVar_52));
                MR_hl_field(1, Useds_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word LVar_59 = ((MR_Word) ((MR_hl_field(2, Unification_26, 0))));
              MR_Word RVar_60 = ((MR_Word) ((MR_hl_field(2, Unification_26, 1))));

              {
                Useds_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Useds_13, 0) = ((MR_Box) (RVar_60));
                MR_hl_field(1, Useds_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Produceds_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Produceds_14, 0) = ((MR_Box) (LVar_59));
                MR_hl_field(1, Produceds_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Unification_26, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word LVar_63 = ((MR_Word) ((MR_hl_field(3, Unification_26, 1))));
                  MR_Word RVar_64 = ((MR_Word) ((MR_hl_field(3, Unification_26, 2))));
                  MR_Word Var_65;

                  {
                    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_65, 0) = ((MR_Box) (RVar_64));
                    MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Useds_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Useds_13, 0) = ((MR_Box) (LVar_63));
                    MR_hl_field(1, Useds_13, 1) = ((MR_Box) (Var_65));
                  }
                  Produceds_14 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 1:
                {
                  Useds_13 = (MR_Word) ((MR_Unsigned) 0U);
                  Produceds_14 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
            }
            break;
        }
      }
      else
      {
        if (((((MR_tag((MR_Word) Expr_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Expr_15, 0)))) == (MR_Integer) 2))))
        {
          MR_Word Var_32 = ((MR_Word) ((MR_hl_field(3, Expr_15, 2))));

          succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
        }
        else
        if (((((MR_tag((MR_Word) Expr_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Expr_15, 0)))) == (MR_Integer) 3))))
        {
          MR_Word Var_33 = ((MR_Word) ((MR_hl_field(3, Expr_15, 1))));

          succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          Useds_13 = (MR_Word) ((MR_Unsigned) 0U);
          Produceds_14 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.live_variable_analysis.compute_useds_produceds\'/4", (MR_String) "the expression must be either call, unify, true, or fail");
            return;
          }
      }
    }
  }
  mercury__set__list_to_set_2_p_0((MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]), Useds_13, UsedSet_7);
  mercury__set__list_to_set_2_p_0((MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]), Produceds_14, ProducedSet_8);
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word Inputs_3,
  MR_Word Outputs_4,
  MR_Word STATE_VARIABLE_ActualInputs_0_5,
  MR_Word * STATE_VARIABLE_ActualInputs_6,
  MR_Word STATE_VARIABLE_ActualOutputs_0_7,
  MR_Word * STATE_VARIABLE_ActualOutputs_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_ActualOutputs_8 = STATE_VARIABLE_ActualOutputs_0_7;
        *STATE_VARIABLE_ActualInputs_6 = STATE_VARIABLE_ActualInputs_0_5;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.live_variable_analysis.get_inputs_outputs_proc_call_2\'/8", (MR_String) "mismatched lists");
          return;
        }
    else
    {
      MR_Word Var_57 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.live_variable_analysis.get_inputs_outputs_proc_call_2\'/8", (MR_String) "mismatched lists");
          return;
        }
      else
      {
        MR_Word ActualArg_43 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
        MR_Word ActualArgs_44 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Word ActualInputs1_49;
        MR_Word ActualOutputs1_50;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_ActualInputs_0_5;
        MR_Word next_value_of_STATE_VARIABLE_ActualOutputs_0_7;

        succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]), ((MR_Box) (Var_58)), Inputs_3);
        if (succeeded)
        {
          {
            ActualInputs1_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ActualInputs1_49, 0) = ((MR_Box) (ActualArg_43));
            MR_hl_field(1, ActualInputs1_49, 1) = ((MR_Box) (STATE_VARIABLE_ActualInputs_0_5));
          }
          ActualOutputs1_50 = STATE_VARIABLE_ActualOutputs_0_7;
        }
        else
        {
          succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]), ((MR_Box) (Var_58)), Outputs_4);
          if (succeeded)
          {
            {
              ActualOutputs1_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ActualOutputs1_50, 0) = ((MR_Box) (ActualArg_43));
              MR_hl_field(1, ActualOutputs1_50, 1) = ((MR_Box) (STATE_VARIABLE_ActualOutputs_0_7));
            }
            ActualInputs1_49 = STATE_VARIABLE_ActualInputs_0_5;
          }
          else
          {
            ActualInputs1_49 = STATE_VARIABLE_ActualInputs_0_5;
            ActualOutputs1_50 = STATE_VARIABLE_ActualOutputs_0_7;
          }
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_57;
        next_value_of_HeadVar__2_2 = ActualArgs_44;
        next_value_of_STATE_VARIABLE_ActualInputs_0_5 = ActualInputs1_49;
        next_value_of_STATE_VARIABLE_ActualOutputs_0_7 = ActualOutputs1_50;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_ActualInputs_0_5 = next_value_of_STATE_VARIABLE_ActualInputs_0_5;
        STATE_VARIABLE_ActualOutputs_0_7 = next_value_of_STATE_VARIABLE_ActualOutputs_0_7;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_p_0(
  MR_Word ProgPoint_5,
  MR_Word LV_6,
  MR_Word STATE_VARIABLE_ProcLV_0_9,
  MR_Word * STATE_VARIABLE_ProcLV_10)
{
  MR_bool succeeded;
  MR_Word ExistingLV_8;
  MR_Box conv0_ExistingLV_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1]), STATE_VARIABLE_ProcLV_0_9, ((MR_Box) (ProgPoint_5)), &conv0_ExistingLV_8);
  if (succeeded)
  {
    ExistingLV_8 = ((MR_Word) (conv0_ExistingLV_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_11;

    Var_11 = mercury__set__union_2_f_0((MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]), ExistingLV_8, LV_6);
    mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1]), ((MR_Box) (ProgPoint_5)), ((MR_Box) (Var_11)), STATE_VARIABLE_ProcLV_0_9, STATE_VARIABLE_ProcLV_10);
  }
  else
    mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1]), ((MR_Box) (ProgPoint_5)), ((MR_Box) (LV_6)), STATE_VARIABLE_ProcLV_0_9, STATE_VARIABLE_ProcLV_10);
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_LVBeforeTable_27;
  MR_Word conv1_STATE_VARIABLE_LVAfterTable_29;
  MR_Word conv0_STATE_VARIABLE_VoidVarTable_31;

  transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_LVBeforeTable_27, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_LVAfterTable_29, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_VoidVarTable_31);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_LVBeforeTable_27));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_LVAfterTable_29));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_VoidVarTable_31));
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ExecPathTable_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_LVBeforeTable_0_18,
  MR_Word * STATE_VARIABLE_LVBeforeTable_19,
  MR_Word STATE_VARIABLE_LVAfterTable_0_20,
  MR_Word * STATE_VARIABLE_LVAfterTable_21,
  MR_Word STATE_VARIABLE_VoidVarTable_0_22,
  MR_Word * STATE_VARIABLE_VoidVarTable_23)
{
  MR_Word PredInfo_16;
  MR_Word ProcIds_17;
  MR_Word Var_24;
  MR_Box conv5_STATE_VARIABLE_LVBeforeTable_19;
  MR_Box conv4_STATE_VARIABLE_LVAfterTable_21;
  MR_Box conv3_STATE_VARIABLE_VoidVarTable_23;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_10, PredId_12, &PredInfo_16);
  ProcIds_17 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo_16);
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_4[0]));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_p_0_1));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_24, 3) = ((MR_Box) (ModuleInfo_10));
    MR_hl_field(0, Var_24, 4) = ((MR_Box) (ExecPathTable_11));
    MR_hl_field(0, Var_24, 5) = ((MR_Box) (PredId_12));
  }
  mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_2[1]), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_2[1]), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_2[1]), Var_24, ProcIds_17, ((MR_Box) (STATE_VARIABLE_LVBeforeTable_0_18)), &conv5_STATE_VARIABLE_LVBeforeTable_19, ((MR_Box) (STATE_VARIABLE_LVAfterTable_0_20)), &conv4_STATE_VARIABLE_LVAfterTable_21, ((MR_Box) (STATE_VARIABLE_VoidVarTable_0_22)), &conv3_STATE_VARIABLE_VoidVarTable_23);
  *STATE_VARIABLE_LVBeforeTable_19 = ((MR_Word) (conv5_STATE_VARIABLE_LVBeforeTable_19));
  *STATE_VARIABLE_LVAfterTable_21 = ((MR_Word) (conv4_STATE_VARIABLE_LVAfterTable_21));
  *STATE_VARIABLE_VoidVarTable_23 = ((MR_Word) (conv3_STATE_VARIABLE_VoidVarTable_23));
}

static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_LVBeforeTable_19;
  MR_Word conv1_STATE_VARIABLE_LVAfterTable_21;
  MR_Word conv0_STATE_VARIABLE_VoidVarTable_23;

  transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_LVBeforeTable_19, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_LVAfterTable_21, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_VoidVarTable_23);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_LVBeforeTable_19));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_LVAfterTable_21));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_VoidVarTable_23));
}

void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ExecPathTable_7,
  MR_Word * LVBeforeTable_8,
  MR_Word * LVAfterTable_9,
  MR_Word * VoidVarTable_10)
{
  MR_Word PredIds_11;
  MR_Word LVBeforeTable0_12;
  MR_Word LVAfterTable0_13;
  MR_Word VoidVarTable0_14;
  MR_Word Var_15;
  MR_Box conv5_LVBeforeTable_8;
  MR_Box conv4_LVAfterTable_9;
  MR_Box conv3_VoidVarTable_10;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_6, &PredIds_11);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_2[0]), &LVBeforeTable0_12);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_2[0]), &LVAfterTable0_13);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_2[0]), &VoidVarTable0_14);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_3[0]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) (ExecPathTable_7));
  }
  mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_2[1]), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_2[1]), (MR_Word) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_2[1]), Var_15, PredIds_11, ((MR_Box) (LVBeforeTable0_12)), &conv5_LVBeforeTable_8, ((MR_Box) (LVAfterTable0_13)), &conv4_LVAfterTable_9, ((MR_Box) (VoidVarTable0_14)), &conv3_VoidVarTable_10);
  *LVBeforeTable_8 = ((MR_Word) (conv5_LVBeforeTable_8));
  *LVAfterTable_9 = ((MR_Word) (conv4_LVAfterTable_9));
  *VoidVarTable_10 = ((MR_Word) (conv3_VoidVarTable_10));
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

// :- end_module transform_hlds.rbmm.live_variable_analysis.
