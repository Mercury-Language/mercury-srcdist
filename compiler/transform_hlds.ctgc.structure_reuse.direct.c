/*
** Automatically generated from `structure_reuse.direct.m'
** by the Mercury compiler,
** version rotd-2026-04-14
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


// :- module transform_hlds.ctgc.structure_reuse.direct.
// :- implementation.

/*
INIT mercury__transform_hlds__ctgc__structure_reuse__direct__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_reuse.direct.mih"


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
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
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
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
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
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "transform_hlds.ctgc.livedata.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.ctgc.util.mih"
#include "transform_hlds.ctgc.structure_reuse.dead_cell_table.mih"
#include "transform_hlds.ctgc.structure_reuse.direct_choose_reuse.mih"
#include "transform_hlds.ctgc.structure_reuse.direct_detect_garbage.mih"
#include "transform_hlds.ctgc.structure_reuse.domain.mih"
#include "transform_hlds.ctgc.structure_sharing.domain.mih"




static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0;

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_ppid_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word SharingTable_9,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word STATE_VARIABLE_ReuseTable_0_16,
  MR_Word * STATE_VARIABLE_ReuseTable_17);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word SharingTable_10,
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23,
  MR_Word STATE_VARIABLE_ReuseTable_0_24,
  MR_Word * STATE_VARIABLE_ReuseTable_25);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__set_external_pred_reuse_as_6_p_0(
  MR_Word PredId_7,
  MR_Word ReuseAs_8,
  MR_Word Status_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ReuseTable_0_12,
  MR_Word * STATE_VARIABLE_ReuseTable_13);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word SharingTable_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21,
  MR_Word STATE_VARIABLE_ReuseTable_0_22,
  MR_Word * STATE_VARIABLE_ReuseTable_23);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[1][5];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_2[2][10];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_3[1][9];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_4[1][11];




static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_2[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_3[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct_scalar_common_4[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)
  }
};

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_ppid_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word SharingTable_9,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word STATE_VARIABLE_ReuseTable_0_16,
  MR_Word * STATE_VARIABLE_ReuseTable_17)
{
  MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
  MR_Integer ProcId_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));

  transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_8_p_0(ProgressStream_8, SharingTable_9, PredId_10, ProcId_11, STATE_VARIABLE_ModuleInfo_0_14, STATE_VARIABLE_ModuleInfo_15, STATE_VARIABLE_ReuseTable_0_16, STATE_VARIABLE_ReuseTable_17);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word SharingTable_10,
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23,
  MR_Word STATE_VARIABLE_ReuseTable_0_24,
  MR_Word * STATE_VARIABLE_ReuseTable_25)
{
  MR_Word PredInfo0_15;
  MR_Word ProcInfo0_16;
  MR_Word ProcInfo_17;
  MR_Word ReuseAs_18;
  MR_Word AsAndStatus_20;
  MR_Word PredInfo_21;
  MR_Word Var_26;
  MR_Word Globals_27;
  MR_Word VeryVerbose_28;
  MR_Word Goal0_29;
  MR_Word DeadCellTable_30;
  MR_Word Goal_32;
  MR_Word Var_36;
  MR_Word DebugStream_31;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_22, PredId_11, &PredInfo0_15);
  hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo0_15, ProcId_12, &ProcInfo0_16);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_22, &Globals_27);
  libs__globals__lookup_bool_option_3_p_0(Globals_27, (MR_Integer) 132, &VeryVerbose_28);
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (PredId_11));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (ProcId_12));
  }
  hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(ProgressStream_9, STATE_VARIABLE_ModuleInfo_0_22, (MR_String) "Direct reuse analysis of", Var_36);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_16, &Goal0_29);
  transform_hlds__ctgc__structure_reuse__direct_detect_garbage__determine_dead_deconstructions_6_p_0(STATE_VARIABLE_ModuleInfo_0_22, PredInfo0_15, ProcInfo0_16, SharingTable_10, Goal0_29, &DeadCellTable_30);
  hlds__passes_aux__get_debug_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_0_22, &DebugStream_31);
  transform_hlds__ctgc__structure_reuse__dead_cell_table__dead_cell_table_maybe_dump_5_p_0(DebugStream_31, VeryVerbose_28, DeadCellTable_30);
  transform_hlds__ctgc__structure_reuse__direct_choose_reuse__determine_reuse_6_p_0(STATE_VARIABLE_ModuleInfo_0_22, ProcInfo0_16, DeadCellTable_30, Goal0_29, &Goal_32, &ReuseAs_18);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_32, ProcInfo0_16, &ProcInfo_17);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, VeryVerbose_28, (MR_String) "% reuse analysis done.\n");
  {
    AsAndStatus_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AsAndStatus_20, 0) = ((MR_Box) (ReuseAs_18));
    MR_hl_field(0, AsAndStatus_20, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
  }
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (PredId_11));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (ProcId_12));
  }
  transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_p_0(Var_26, AsAndStatus_20, STATE_VARIABLE_ReuseTable_0_24, STATE_VARIABLE_ReuseTable_25);
  hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_12, ProcInfo_17, PredInfo0_15, &PredInfo_21);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_11, PredInfo_21, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__set_external_pred_reuse_as_6_p_0(
  MR_Word PredId_7,
  MR_Word ReuseAs_8,
  MR_Word Status_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ReuseTable_0_12,
  MR_Word * STATE_VARIABLE_ReuseTable_13)
{
  MR_Word Var_14;
  MR_Word Var_15;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (PredId_7));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (ProcId_10));
  }
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (ReuseAs_8));
    MR_hl_field(0, Var_15, 1) = (MR_Box) ((MR_Unsigned) (Status_9));
  }
  transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_p_0(Var_14, Var_15, STATE_VARIABLE_ReuseTable_0_12, STATE_VARIABLE_ReuseTable_13);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_ModuleInfo_23;
  MR_Word conv2_STATE_VARIABLE_ReuseTable_25;

  transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ModuleInfo_23, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_ReuseTable_25);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_23));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_ReuseTable_25));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ReuseTable_13;

  transform_hlds__ctgc__structure_reuse__direct__set_external_pred_reuse_as_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ReuseTable_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ReuseTable_13));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word SharingTable_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21,
  MR_Word STATE_VARIABLE_ReuseTable_0_22,
  MR_Word * STATE_VARIABLE_ReuseTable_23)
{
  MR_bool succeeded;
  MR_Word PredInfo0_13;
  MR_Word Origin_14;
  MR_Word Var_24;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_20, PredId_10, &PredInfo0_13);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_13, &Origin_14);
  succeeded = ((MR_tag((MR_Word) Origin_14)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_24 = ((MR_Word) ((MR_hl_field(1, Origin_14, 0))));
    succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
  }
  if (succeeded)
  {
    *STATE_VARIABLE_ReuseTable_23 = STATE_VARIABLE_ReuseTable_0_22;
    *STATE_VARIABLE_ModuleInfo_21 = STATE_VARIABLE_ModuleInfo_0_20;
  }
  else
  {
    MR_Word PredStatus_17;
    MR_Word Var_25;

    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_13, &PredStatus_17);
    Var_25 = (MR_Word) (PredStatus_17);
    succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word ProcIds_19;
      MR_Word Var_26;
      MR_Word Var_28;
      MR_Box conv1_STATE_VARIABLE_ReuseTable_23;

      ProcIds_19 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo0_13);
      Var_28 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_f_0();
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_26, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_3[0]));
        MR_hl_field(0, Var_26, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_7_p_0_1));
        MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_26, 3) = ((MR_Box) (PredId_10));
        MR_hl_field(0, Var_26, 4) = ((MR_Box) (Var_28));
        MR_hl_field(0, Var_26, 5) = ((MR_Box) ((MR_Integer) 2));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0), Var_26, ProcIds_19, ((MR_Box) (STATE_VARIABLE_ReuseTable_0_22)), &conv1_STATE_VARIABLE_ReuseTable_23);
      *STATE_VARIABLE_ReuseTable_23 = ((MR_Word) (conv1_STATE_VARIABLE_ReuseTable_23));
      *STATE_VARIABLE_ModuleInfo_21 = STATE_VARIABLE_ModuleInfo_0_20;
    }
    else
    {
      MR_Word Var_30;
      MR_Word ProcIds_33;
      MR_Box conv5_STATE_VARIABLE_ModuleInfo_21;
      MR_Box conv4_STATE_VARIABLE_ReuseTable_23;

      ProcIds_33 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo0_13);
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_30, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_4[0]));
        MR_hl_field(0, Var_30, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_7_p_0_2));
        MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_30, 3) = ((MR_Box) (ProgressStream_8));
        MR_hl_field(0, Var_30, 4) = ((MR_Box) (SharingTable_9));
        MR_hl_field(0, Var_30, 5) = ((MR_Box) (PredId_10));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0), Var_30, ProcIds_33, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_20)), &conv5_STATE_VARIABLE_ModuleInfo_21, ((MR_Box) (STATE_VARIABLE_ReuseTable_0_22)), &conv4_STATE_VARIABLE_ReuseTable_23);
      *STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_21));
      *STATE_VARIABLE_ReuseTable_23 = ((MR_Word) (conv4_STATE_VARIABLE_ReuseTable_23));
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_15;
  MR_Word conv0_STATE_VARIABLE_ReuseTable_17;

  transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_ppid_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_15, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ReuseTable_17);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_15));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ReuseTable_17));
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word SharingTable_9,
  MR_Word PPIds_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14,
  MR_Word STATE_VARIABLE_ReuseTable_0_15,
  MR_Word * STATE_VARIABLE_ReuseTable_16)
{
  MR_Word Var_17;
  MR_Box conv3_STATE_VARIABLE_ModuleInfo_14;
  MR_Box conv2_STATE_VARIABLE_ReuseTable_16;

  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_2[1]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_7_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (ProgressStream_8));
    MR_hl_field(0, Var_17, 4) = ((MR_Box) (SharingTable_9));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0), Var_17, PPIds_10, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_13)), &conv3_STATE_VARIABLE_ModuleInfo_14, ((MR_Box) (STATE_VARIABLE_ReuseTable_0_15)), &conv2_STATE_VARIABLE_ReuseTable_16);
  *STATE_VARIABLE_ModuleInfo_14 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_14));
  *STATE_VARIABLE_ReuseTable_16 = ((MR_Word) (conv2_STATE_VARIABLE_ReuseTable_16));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_21;
  MR_Word conv0_STATE_VARIABLE_ReuseTable_23;

  transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_21, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ReuseTable_23);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_21));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ReuseTable_23));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__ctgc__util__pred_requires_analysis_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word SharingTable_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14,
  MR_Word STATE_VARIABLE_ReuseTable_0_15,
  MR_Word * STATE_VARIABLE_ReuseTable_16)
{
  MR_bool succeeded;
  MR_Word AllPredIds_11;
  MR_Word ToBeAnalysedPredIds_12;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Box conv3_STATE_VARIABLE_ModuleInfo_14;
  MR_Box conv2_STATE_VARIABLE_ReuseTable_16;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_13, &AllPredIds_11);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_1[0]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_6_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_13));
  }
  mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_17, AllPredIds_11, &ToBeAnalysedPredIds_12);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct_scalar_common_2[0]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_6_p_0_2));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (ProgressStream_7));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (SharingTable_8));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0), Var_18, ToBeAnalysedPredIds_12, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_13)), &conv3_STATE_VARIABLE_ModuleInfo_14, ((MR_Box) (STATE_VARIABLE_ReuseTable_0_15)), &conv2_STATE_VARIABLE_ReuseTable_16);
  *STATE_VARIABLE_ModuleInfo_14 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_14));
  *STATE_VARIABLE_ReuseTable_16 = ((MR_Word) (conv2_STATE_VARIABLE_ReuseTable_16));
}

void mercury__transform_hlds__ctgc__structure_reuse__direct__init(void)
{
}

void mercury__transform_hlds__ctgc__structure_reuse__direct__init_type_tables(void)
{
}

void mercury__transform_hlds__ctgc__structure_reuse__direct__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__ctgc__structure_reuse__direct__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.ctgc.structure_reuse.direct.
