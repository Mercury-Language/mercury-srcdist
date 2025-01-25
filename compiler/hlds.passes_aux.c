/*
** Automatically generated from `passes_aux.m'
** by the Mercury compiler,
** version rotd-2025-01-25
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


// :- module hlds.passes_aux.
// :- implementation.

/*
INIT mercury__hlds__passes_aux__init
ENDINIT
*/

#include "hlds.passes_aux.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "io.file.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_module.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s {
  MR_Integer hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNum_5;
  MR_String hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNumStr_6;
  MR_String hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageName_7;
  MR_Word hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStages_8;
  MR_bool hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded;
  jmp_buf hlds__passes_aux__should_dump_stage_4_p_0_env_0__commit_0;
  MR_String hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15;
  MR_Box hlds__passes_aux__should_dump_stage_4_p_0_env_0__conv0_DumpStage_15;
};


static const MR_FA_PseudoTypeInfo_Struct1 hlds__passes_aux__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_dump_info_0_0;

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_dump_info_0_1[2];

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_dump_info_0_1;

static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_dump_info_0_0[1];

static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_dump_info_0_1[1];

static const MR_DuPtagLayout hlds__passes_aux__hlds__passes_aux__du_ptag_ordered_dump_info_0[2];

static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_name_ordered_dump_info_0[2];

static const MR_Integer hlds__passes_aux__hlds__passes_aux__functor_number_map_dump_info_0[2];

static const MR_VA_TypeInfo_Struct7 hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0;

static const MR_VA_TypeInfo_Struct8 hlds__passes_aux____vti_pred_8hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0;

static const MR_VA_TypeInfo_Struct6 hlds__passes_aux____vti_pred_6hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0;

static const MR_VA_TypeInfo_Struct5 hlds__passes_aux____vti_pred_5hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__passes_aux__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_VA_TypeInfo_Struct7 hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_VA_TypeInfo_Struct5 hlds__passes_aux____vti_pred_5hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_VA_TypeInfo_Struct4 hlds__passes_aux____vti_pred_4hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_VA_TypeInfo_Struct3 hlds__passes_aux____vti_pred_3hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_Integer hlds__passes_aux__hlds__passes_aux__functor_number_map_update_pred_task_0[1];

static const MR_NotagFunctorDesc hlds__passes_aux__hlds__passes_aux__notag_functor_desc_update_pred_task_0;

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_0[1];

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_0;

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_1[1];

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_1;

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_2[1];

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_2;

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_3[1];

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_3;

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_4[1];

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_4;

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_5[2];

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_5;

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_6[2];

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_6;

static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_0[1];

static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_1[1];

static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_2[1];

static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_3[4];

static const MR_DuPtagLayout hlds__passes_aux__hlds__passes_aux__du_ptag_ordered_update_proc_task_0[4];

static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_name_ordered_update_proc_task_0[7];

static const MR_Integer hlds__passes_aux__hlds__passes_aux__functor_number_map_update_proc_task_0[7];

static void MR_CALL 
hlds__passes_aux__process_valid_nonimported_pred_6_p_0(
  MR_Word Task_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
hlds__passes_aux__dump_hlds_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_String DumpFile_9,
  MR_String HLDSStr_10);

static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
hlds__passes_aux__seq_process_valid_nonimported_procs_in_preds_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Task_0_2,
  MR_Word * STATE_VARIABLE_Task_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5);

static void MR_CALL 
hlds__passes_aux__seq_process_valid_nonimported_procs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Task_0_3,
  MR_Word * STATE_VARIABLE_Task_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6);

static void MR_CALL 
hlds__passes_aux__par_process_valid_nonimported_procs_in_preds_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Task_2,
  MR_Word ValidPredIdSet_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
hlds__passes_aux__par_process_valid_nonimported_procs_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Task_2,
  MR_Word PredId_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredInfo_0_5,
  MR_Word * STATE_VARIABLE_PredInfo_6);

static void MR_CALL 
hlds__passes_aux__process_valid_nonimported_preds_errors_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
hlds__passes_aux____Unify____dump_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__passes_aux____Compare____dump_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_cookie_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__passes_aux____Compare____module_cookie_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_pred_cookie_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__passes_aux____Compare____module_pred_cookie_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_pred_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__passes_aux____Compare____module_pred_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__passes_aux____Compare____module_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__passes_aux____Unify____pred_error_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__passes_aux____Compare____pred_error_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_ids_pred_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__passes_aux____Compare____proc_ids_pred_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_ids_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__passes_aux____Compare____proc_ids_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__passes_aux____Compare____proc_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__passes_aux____Unify____update_pred_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__passes_aux____Compare____update_pred_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__passes_aux____Unify____update_proc_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__passes_aux____Compare____update_proc_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__passes_aux_scalar_common_1[1][2];

static /* final */ const MR_Box hlds__passes_aux_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__passes_aux_scalar_common_3[3][9];

static /* final */ const MR_Box hlds__passes_aux_scalar_common_4[1][10];

static /* final */ const MR_Box hlds__passes_aux_scalar_common_5[1][8];

static /* final */ const MR_Box hlds__passes_aux_scalar_common_6[2][7];

static /* final */ const MR_Box hlds__passes_aux_scalar_common_7[1][6];

static /* final */ const MR_Box hlds__passes_aux_scalar_common_8[1][5];

static /* final */ const MR_Box hlds__passes_aux_scalar_common_9[2][1];




static /* final */ const MR_Box hlds__passes_aux_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__passes_aux_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_du_ctor_0)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0))
  },
};

static /* final */ const MR_Box hlds__passes_aux_scalar_common_3[3][9] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__passes_aux_scalar_common_1[0])),
    ((MR_Box) (&hlds__passes_aux_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__passes_aux__hlds__passes_aux__type_ctor_info_update_pred_task_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__passes_aux__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__passes_aux__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__passes_aux_scalar_common_4[1][10] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};

static /* final */ const MR_Box hlds__passes_aux_scalar_common_5[1][8] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box hlds__passes_aux_scalar_common_6[2][7] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box hlds__passes_aux_scalar_common_7[1][6] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box hlds__passes_aux_scalar_common_8[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box hlds__passes_aux_scalar_common_9[2][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 1U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__passes_aux__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_dump_info_0_0 = {
  (MR_String) "no_prev_dump",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_dump_info_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_dump_info_0_1 = {
  (MR_String) "prev_dumped_hlds",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__passes_aux__hlds__passes_aux__field_types_dump_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_dump_info_0_0[1] = { &hlds__passes_aux__hlds__passes_aux__du_functor_desc_dump_info_0_0 };

static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_dump_info_0_1[1] = { &hlds__passes_aux__hlds__passes_aux__du_functor_desc_dump_info_0_1 };

static const MR_DuPtagLayout hlds__passes_aux__hlds__passes_aux__du_ptag_ordered_dump_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__passes_aux__hlds__passes_aux__du_stag_ordered_dump_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__passes_aux__hlds__passes_aux__du_stag_ordered_dump_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_name_ordered_dump_info_0[2] = {
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_dump_info_0_0,
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_dump_info_0_1
};

static const MR_Integer hlds__passes_aux__hlds__passes_aux__functor_number_map_dump_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_dump_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__passes_aux____Unify____dump_info_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____dump_info_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "dump_info",
  { hlds__passes_aux__hlds__passes_aux__du_name_ordered_dump_info_0 },
  { hlds__passes_aux__hlds__passes_aux__du_ptag_ordered_dump_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__passes_aux__hlds__passes_aux__functor_number_map_dump_info_0,

};

static const MR_VA_TypeInfo_Struct7 hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
    (MR_TypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0),
    (MR_TypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_module_cookie_task_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____module_cookie_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____module_cookie_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "module_cookie_task",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_VA_TypeInfo_Struct8 hlds__passes_aux____vti_pred_8hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
    (MR_TypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0),
    (MR_TypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_module_pred_cookie_task_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____module_pred_cookie_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____module_pred_cookie_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "module_pred_cookie_task",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__passes_aux____vti_pred_8hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_VA_TypeInfo_Struct6 hlds__passes_aux____vti_pred_6hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_module_pred_task_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____module_pred_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____module_pred_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "module_pred_task",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__passes_aux____vti_pred_6hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_VA_TypeInfo_Struct5 hlds__passes_aux____vti_pred_5hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_module_task_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____module_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____module_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "module_task",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__passes_aux____vti_pred_5hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 hlds__passes_aux__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_VA_TypeInfo_Struct7 hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
    (MR_TypeInfo) (&hlds__passes_aux__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0),
    (MR_TypeInfo) (&hlds__passes_aux__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_pred_error_task_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____pred_error_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____pred_error_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "pred_error_task",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_VA_TypeInfo_Struct5 hlds__passes_aux____vti_pred_5hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_proc_ids_pred_task_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____proc_ids_pred_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____proc_ids_pred_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "proc_ids_pred_task",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__passes_aux____vti_pred_5hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_VA_TypeInfo_Struct4 hlds__passes_aux____vti_pred_4hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_proc_ids_task_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____proc_ids_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____proc_ids_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "proc_ids_task",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__passes_aux____vti_pred_4hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_VA_TypeInfo_Struct3 hlds__passes_aux____vti_pred_3hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_proc_task_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____proc_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____proc_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "proc_task",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__passes_aux____vti_pred_3hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_Integer hlds__passes_aux__hlds__passes_aux__functor_number_map_update_pred_task_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc hlds__passes_aux__hlds__passes_aux__notag_functor_desc_update_pred_task_0 = {
  (MR_String) "update_pred_error",
  (MR_PseudoTypeInfo) (&hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_update_pred_task_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____update_pred_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____update_pred_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "update_pred_task",
  { &hlds__passes_aux__hlds__passes_aux__notag_functor_desc_update_pred_task_0 },
  { &hlds__passes_aux__hlds__passes_aux__notag_functor_desc_update_pred_task_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__passes_aux__hlds__passes_aux__functor_number_map_update_pred_task_0,

};

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__passes_aux____vti_pred_3hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0) };

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_0 = {
  (MR_String) "update_proc",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_1[1] = { (MR_PseudoTypeInfo) (&hlds__passes_aux____vti_pred_4hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0) };

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_1 = {
  (MR_String) "update_proc_ids",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_2[1] = { (MR_PseudoTypeInfo) (&hlds__passes_aux____vti_pred_5hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0) };

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_2 = {
  (MR_String) "update_proc_ids_pred",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_3[1] = { (MR_PseudoTypeInfo) (&hlds__passes_aux____vti_pred_5hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0) };

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_3 = {
  (MR_String) "update_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_4[1] = { (MR_PseudoTypeInfo) (&hlds__passes_aux____vti_pred_6hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0) };

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_4 = {
  (MR_String) "update_module_pred",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_5[2] = {
  (MR_PseudoTypeInfo) (&hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0),
  (MR_PseudoTypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0)
};

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_5 = {
  (MR_String) "update_module_cookie",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_6[2] = {
  (MR_PseudoTypeInfo) (&hlds__passes_aux____vti_pred_8hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0),
  (MR_PseudoTypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0)
};

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_6 = {
  (MR_String) "update_module_pred_cookie",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_0[1] = { &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_0 };

static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_1[1] = { &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_1 };

static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_2[1] = { &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_2 };

static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_3[4] = {
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_3,
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_4,
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_5,
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_6
};

static const MR_DuPtagLayout hlds__passes_aux__hlds__passes_aux__du_ptag_ordered_update_proc_task_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(4),
    MR_SECTAG_REMOTE_FULL_WORD,
    hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_name_ordered_update_proc_task_0[7] = {
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_3,
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_5,
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_4,
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_6,
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_0,
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_1,
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_2
};

static const MR_Integer hlds__passes_aux__hlds__passes_aux__functor_number_map_update_proc_task_0[7] = {
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_update_proc_task_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__passes_aux____Unify____update_proc_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____update_proc_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "update_proc_task",
  { hlds__passes_aux__hlds__passes_aux__du_name_ordered_update_proc_task_0 },
  { hlds__passes_aux__hlds__passes_aux__du_ptag_ordered_update_proc_task_0 },
  (MR_Integer) 7,
  UINT16_C(12),
  hlds__passes_aux__hlds__passes_aux__functor_number_map_update_proc_task_0,

};

void MR_CALL 
hlds__passes_aux____Compare____update_proc_task_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_8[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_7[0]), HeadVar__1_1, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_6[1]), HeadVar__1_1, ((MR_Box) (ArgX1_8)), ((MR_Box) (ArgY1_9)));
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_6[0]), HeadVar__1_1, ((MR_Box) (ArgX1_10)), ((MR_Box) (ArgY1_11)));
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_5[0]), HeadVar__1_1, ((MR_Box) (ArgX1_12)), ((MR_Box) (ArgY1_13)));
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ArgX1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                      MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                      MR_Word ArgY2_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                      MR_Word SubResult1_16;

                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_3[1]), &SubResult1_16, ((MR_Box) (ArgX1_14)), ((MR_Box) (ArgY1_15)));
                      succeeded = (SubResult1_16 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_16;
                      else
                        mercury__univ____Compare____univ_0_0(HeadVar__1_1, ArgX2_17, ArgY2_18);
                    }
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Word ArgY1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                      MR_Word ArgX2_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                      MR_Word ArgY2_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                      MR_Word SubResult1_21;

                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_4[0]), &SubResult1_21, ((MR_Box) (ArgX1_19)), ((MR_Box) (ArgY1_20)));
                      succeeded = (SubResult1_21 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_21;
                      else
                        mercury__univ____Compare____univ_0_0(HeadVar__1_1, ArgX2_22, ArgY2_23);
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____update_proc_task_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_3), (MR_Word) (ArgY1_4));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_5), (MR_Word) (ArgY1_6));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_7), (MR_Word) (ArgY1_8));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_9), (MR_Word) (ArgY1_10));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_11), (MR_Word) (ArgY1_12));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_14;
              MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_13), (MR_Word) (ArgY1_14));
                if (succeeded)
                  succeeded = mercury__univ____Unify____univ_0_0(ArgX2_15, ArgY2_16);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_18;
              MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_17), (MR_Word) (ArgY1_18));
                if (succeeded)
                  succeeded = mercury__univ____Unify____univ_0_0(ArgX2_19, ArgY2_20);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
hlds__passes_aux____Compare____update_pred_task_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_3[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____update_pred_task_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_3), (MR_Word) (ArgY1_4));
  }
  return succeeded;
}

void MR_CALL 
hlds__passes_aux____Compare____proc_task_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_task_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

void MR_CALL 
hlds__passes_aux____Compare____proc_ids_task_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_ids_task_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

void MR_CALL 
hlds__passes_aux____Compare____proc_ids_pred_task_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_ids_pred_task_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

void MR_CALL 
hlds__passes_aux____Compare____pred_error_task_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____pred_error_task_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

void MR_CALL 
hlds__passes_aux____Compare____module_task_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____module_task_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

void MR_CALL 
hlds__passes_aux____Compare____module_pred_task_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____module_pred_task_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

void MR_CALL 
hlds__passes_aux____Compare____module_pred_cookie_task_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____module_pred_cookie_task_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

void MR_CALL 
hlds__passes_aux____Compare____module_cookie_task_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____module_cookie_task_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

void MR_CALL 
hlds__passes_aux____Compare____dump_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____dump_info_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4;
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__passes_aux__process_valid_nonimported_pred_6_p_0(
  MR_Word Task_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  MR_bool succeeded;
  MR_Word PredInfo0_11;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_14, PredId_8, &PredInfo0_11);
  succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_11);
  if (succeeded)
  {
    *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
    *STATE_VARIABLE_ModuleInfo_15 = STATE_VARIABLE_ModuleInfo_0_14;
  }
  else
  {
    MR_Word Closure_12 = (MR_Word) (Task_7);
    MR_Word PredInfo_13;
    MR_Word STATE_VARIABLE_ModuleInfo_18_18;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Closure_12, (MR_Integer) 1))));
    MR_Box conv3_STATE_VARIABLE_ModuleInfo_18_18;
    MR_Box conv2_PredInfo_13;
    MR_Box conv1_STATE_VARIABLE_Specs_17;

    func_0(((MR_Box) (Closure_12)), ((MR_Box) (PredId_8)), ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14)), &conv3_STATE_VARIABLE_ModuleInfo_18_18, ((MR_Box) (PredInfo0_11)), &conv2_PredInfo_13, ((MR_Box) (STATE_VARIABLE_Specs_0_16)), &conv1_STATE_VARIABLE_Specs_17);
    STATE_VARIABLE_ModuleInfo_18_18 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_18_18));
    PredInfo_13 = ((MR_Word) (conv2_PredInfo_13));
    *STATE_VARIABLE_Specs_17 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_17));
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_8, PredInfo_13, STATE_VARIABLE_ModuleInfo_18_18, STATE_VARIABLE_ModuleInfo_15);
  }
}

void MR_CALL 
hlds__passes_aux__maybe_dump_hlds_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word HLDS_10,
  MR_Integer StageNum_11,
  MR_String StageName_12,
  MR_Word STATE_VARIABLE_DumpInfo_0_37,
  MR_Word * STATE_VARIABLE_DumpInfo_38)
{
  MR_bool succeeded;
  MR_Word Globals_15;
  MR_Word Verbose_16;
  MR_Word DumpHLDSStages_17;
  MR_Word DumpTraceStages_18;
  MR_String UserFileSuffix_19;
  MR_String StageNumStr_20;
  MR_String BaseFileName_21;

  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_10, &Globals_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 78, &Verbose_16);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_15, (MR_Integer) 215, &DumpHLDSStages_17);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_15, (MR_Integer) 214, &DumpTraceStages_18);
  libs__globals__lookup_string_option_3_p_0(Globals_15, (MR_Integer) 225, &UserFileSuffix_19);
  StageNumStr_20 = hlds__passes_aux__stage_num_str_1_f_0(StageNum_11);
  hlds__hlds_module__module_info_get_dump_hlds_base_file_name_2_p_0(HLDS_10, &BaseFileName_21);
  succeeded = hlds__passes_aux__should_dump_stage_4_p_0(StageNum_11, StageNumStr_20, StageName_12, DumpHLDSStages_17);
  if (succeeded)
  {
    MR_String HLDSStr_22;
    MR_String HLDSDumpFileName_23;
    MR_String Var_105;
    MR_String Var_107;
    MR_String Var_108;
    MR_String Var_110;
    MR_String PrevHLDSDumpFileName_24;
    MR_String PrevHLDSStr_25;

    HLDSStr_22 = hlds__hlds_out__hlds_out_module__hlds_to_string_1_f_0(HLDS_10);
    Var_105 = mercury__string__f_43_43_2_f_0(StageName_12, UserFileSuffix_19);
    Var_107 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_105);
    Var_108 = mercury__string__f_43_43_2_f_0(StageNumStr_20, Var_107);
    Var_110 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_108);
    HLDSDumpFileName_23 = mercury__string__f_43_43_2_f_0(BaseFileName_21, Var_110);
    succeeded = (STATE_VARIABLE_DumpInfo_0_37 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      PrevHLDSDumpFileName_24 = ((MR_String) ((MR_hl_field(1, STATE_VARIABLE_DumpInfo_0_37, (MR_Integer) 0))));
      PrevHLDSStr_25 = ((MR_String) ((MR_hl_field(1, STATE_VARIABLE_DumpInfo_0_37, (MR_Integer) 1))));
      succeeded = (strcmp(HLDSStr_22, PrevHLDSStr_25) == 0);
    }
    if (succeeded)
    {
      MR_Word DumpSameHLDS_26;

      libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 226, &DumpSameHLDS_26);
      switch (DumpSameHLDS_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word _Result_27;

            switch (Verbose_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% HLDS dump \140");
                  mercury__io__write_string_4_p_0(ProgressStream_9, HLDSDumpFileName_23);
                  mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "\' would be identical to previous dump.\n");
                }
                break;
            }
            mercury__io__file__remove_file_4_p_0(HLDSDumpFileName_23, &_Result_27);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OpenDumpFileResult_28;

            mercury__io__open_output_4_p_0(HLDSDumpFileName_23, &OpenDumpFileResult_28);
            if (((MR_tag((MR_Word) OpenDumpFileResult_28)) == (MR_Integer) 1))
            {
              MR_Word IOError_30 = ((MR_Word) ((MR_hl_field(1, OpenDumpFileResult_28, (MR_Integer) 0))));
              MR_String IOErrorMsg_31;
              MR_String HLDSErrorMsg_32;
              MR_String Var_116;
              MR_String Var_118;
              MR_String Var_119;

              libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_16, (MR_String) "\n");
              IOErrorMsg_31 = mercury__io__error_message_1_f_0(IOError_30);
              Var_116 = mercury__string__f_43_43_2_f_0(IOErrorMsg_31, (MR_String) "\n");
              Var_118 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", Var_116);
              Var_119 = mercury__string__f_43_43_2_f_0(HLDSDumpFileName_23, Var_118);
              HLDSErrorMsg_32 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open file \140", Var_119);
              libs__file_util__report_error_4_p_0(ProgressStream_9, HLDSErrorMsg_32);
            }
            else
            {
              MR_Word FileStream_29 = ((MR_Word) ((MR_hl_field(0, OpenDumpFileResult_28, (MR_Integer) 0))));

              mercury__io__write_string_4_p_0(FileStream_29, (MR_String) "This stage is identical to the stage in ");
              mercury__io__write_string_4_p_0(FileStream_29, PrevHLDSDumpFileName_24);
              mercury__io__write_string_4_p_0(FileStream_29, (MR_String) ".\n");
              mercury__io__close_output_3_p_0(FileStream_29);
            }
          }
          break;
      }
      *STATE_VARIABLE_DumpInfo_38 = STATE_VARIABLE_DumpInfo_0_37;
    }
    else
    {
      hlds__passes_aux__dump_hlds_6_p_0(ProgressStream_9, Globals_15, HLDSDumpFileName_23, HLDSStr_22);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_DumpInfo_38 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HLDSDumpFileName_23));
        MR_hl_field(1, base, 1) = ((MR_Box) (HLDSStr_22));
      }
    }
  }
  else
    *STATE_VARIABLE_DumpInfo_38 = STATE_VARIABLE_DumpInfo_0_37;
  succeeded = hlds__passes_aux__should_dump_stage_4_p_0(StageNum_11, StageNumStr_20, StageName_12, DumpTraceStages_18);
  if (succeeded)
  {
    MR_String NoDumpName_33;
    MR_String TraceDumpFileName_34;
    MR_Word MaybeTraceCountsError_35;
    MR_String Var_125;
    MR_String Var_127;
    MR_String Var_128;
    MR_String Var_130;

    NoDumpName_33 = mercury__string__det_remove_suffix_2_f_0(BaseFileName_21, (MR_String) ".hlds_dump");
    Var_125 = mercury__string__f_43_43_2_f_0(StageName_12, UserFileSuffix_19);
    Var_127 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_125);
    Var_128 = mercury__string__f_43_43_2_f_0(StageNumStr_20, Var_127);
    Var_130 = mercury__string__f_43_43_2_f_0((MR_String) ".trace_counts.", Var_128);
    TraceDumpFileName_34 = mercury__string__f_43_43_2_f_0(NoDumpName_33, Var_130);
    mercury__benchmarking__write_out_trace_counts_4_p_0(TraceDumpFileName_34, &MaybeTraceCountsError_35);
    if ((MaybeTraceCountsError_35 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (Verbose_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% Dumped trace counts to \140");
            mercury__io__write_string_4_p_0(ProgressStream_9, TraceDumpFileName_34);
            mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "\'\n");
            mercury__io__flush_output_3_p_0(ProgressStream_9);
          }
          break;
      }
    else
    {
      MR_String TraceCountsError_36 = ((MR_String) ((MR_hl_field(1, MaybeTraceCountsError_35, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% ");
      mercury__io__write_string_4_p_0(ProgressStream_9, TraceCountsError_36);
      mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "\n");
      mercury__io__flush_output_3_p_0(ProgressStream_9);
    }
  }
}

static void MR_CALL 
hlds__passes_aux__dump_hlds_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_String DumpFile_9,
  MR_String HLDSStr_10)
{
  MR_Word Verbose_12;
  MR_Word Stats_13;
  MR_Word DumpFileResult_14;

  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 78, &Verbose_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 88, &Stats_13);
  switch (Verbose_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "% Dumping out HLDS to \140");
        mercury__io__write_string_4_p_0(ProgressStream_7, DumpFile_9);
        mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\'...");
        mercury__io__flush_output_3_p_0(ProgressStream_7);
      }
      break;
  }
  mercury__io__open_output_4_p_0(DumpFile_9, &DumpFileResult_14);
  if (((MR_tag((MR_Word) DumpFileResult_14)) == (MR_Integer) 1))
  {
    MR_Word IOError_16 = ((MR_Word) ((MR_hl_field(1, DumpFileResult_14, (MR_Integer) 0))));
    MR_String Msg_17;
    MR_String Var_41;
    MR_String Var_48;
    MR_String Var_49;

    libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_12, (MR_String) "\n");
    Var_41 = mercury__io__error_message_1_f_0(IOError_16);
    Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", Var_41);
    Var_49 = mercury__string__f_43_43_2_f_0(DumpFile_9, Var_48);
    Msg_17 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open file \140", Var_49);
    libs__file_util__report_error_4_p_0(ProgressStream_7, Msg_17);
  }
  else
  {
    MR_Word DumpFileStream_15 = ((MR_Word) ((MR_hl_field(0, DumpFileResult_14, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(DumpFileStream_15, HLDSStr_10);
    mercury__io__close_output_3_p_0(DumpFileStream_15);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_12, (MR_String) " done.\n");
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_7, Stats_13);
  }
}

MR_String MR_CALL 
hlds__passes_aux__stage_num_str_1_f_0(
  MR_Integer StageNum_3)
{
  MR_String HeadVar__2_2;

  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__passes_aux_scalar_common_9[0]), (MR_Integer) 3, StageNum_3, &HeadVar__2_2);
  return HeadVar__2_2;
}

static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s * env_ptr = (struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_3(
  void * env_ptr_arg)
{
  struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s * env_ptr = (struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15 = ((MR_String) ((env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__conv0_DumpStage_15));
  hlds__passes_aux__should_dump_stage_4_p_0_2(env_ptr);
}

static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s * env_ptr = (struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = (strcmp((env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageName_7, (env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15) == 0);
  if (!((env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded))
  {
    (env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = (strcmp((env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15, (MR_String) "all") == 0);
    if (!((env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded))
    {
      (env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = (strcmp((env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15, (env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNumStr_6) == 0);
      if (!((env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded))
      {
        (env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = mercury__string__append_3_p_0((MR_String) "0", (env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15, (env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNumStr_6);
        if (!((env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded))
        {
          (env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = mercury__string__append_3_p_0((MR_String) "00", (env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15, (env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNumStr_6);
          if (!((env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded))
          {
            MR_String From_10;
            MR_Integer FromInt_11;

            (env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = mercury__string__append_3_p_3(&From_10, (MR_String) "+", (env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15);
            if ((env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded)
            {
              (env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = mercury__string__to_int_2_p_0(From_10, &FromInt_11);
              if ((env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded)
                (env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = ((env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNum_5 >= FromInt_11);
            }
          }
        }
      }
    }
  }
  if ((env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded)
    hlds__passes_aux__should_dump_stage_4_p_0_1(env_ptr);
}

static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_4(
  void * env_ptr_arg)
{
  struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s * env_ptr = (struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &(env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__conv0_DumpStage_15, (env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStages_8, hlds__passes_aux__should_dump_stage_4_p_0_3, env_ptr);
      (env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = MR_TRUE;
}

MR_bool MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0(
  MR_Integer StageNum_5,
  MR_String StageNumStr_6,
  MR_String StageName_7,
  MR_Word DumpStages_8)
{
  struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s env;

  (env).hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNum_5 = StageNum_5;
  (env).hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNumStr_6 = StageNumStr_6;
  (env).hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageName_7 = StageName_7;
  (env).hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStages_8 = DumpStages_8;
  hlds__passes_aux__should_dump_stage_4_p_0_4(&env);
  return (env).hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded;
}

void MR_CALL 
hlds__passes_aux__get_debug_output_stream_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word * Stream_6)
{
  MR_Word Globals_8;
  MR_Word ModuleName_9;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_8);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_9);
  libs__globals__get_debug_output_stream_5_p_0(Globals_8, ModuleName_9, Stream_6);
}

void MR_CALL 
hlds__passes_aux__get_error_output_stream_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word * Stream_6)
{
  MR_Word Globals_8;
  MR_Word ModuleName_9;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_8);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_9);
  libs__globals__get_error_output_stream_5_p_0(Globals_8, ModuleName_9, Stream_6);
}

void MR_CALL 
hlds__passes_aux__maybe_report_sizes_3_p_0(
  MR_Word HLDS_4)
{
  MR_Word Globals_6;
  MR_Word Statistics_7;

  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_4, &Globals_6);
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 88, &Statistics_7);
  switch (Statistics_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Stream_11;
        MR_Word PredIdTable_12;
        MR_Word TypeTable_13;
        MR_Word TypeCtorDefns_14;
        MR_Word CtorTable_15;
        MR_Word CtorDefns_16;
        MR_Integer Var_22;
        MR_Integer Var_28;
        MR_Integer Var_33;
        MR_String Var_42;
        MR_String Var_53;
        MR_String Var_64;
        MR_Word Globals_72;
        MR_Word ModuleName_73;

        hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_4, &Globals_72);
        hlds__hlds_module__module_info_get_name_2_p_0(HLDS_4, &ModuleName_73);
        libs__globals__get_debug_output_stream_5_p_0(Globals_72, ModuleName_73, &Stream_11);
        hlds__hlds_module__module_info_get_pred_id_table_2_p_0(HLDS_4, &PredIdTable_12);
        Var_22 = mercury__map__count_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_12);
        mercury__io__write_string_4_p_0(Stream_11, (MR_String) "Pred table size = ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_9[1]), Var_22, &Var_42);
        mercury__io__write_string_4_p_0(Stream_11, Var_42);
        mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
        hlds__hlds_module__module_info_get_type_table_2_p_0(HLDS_4, &TypeTable_13);
        hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_13, &TypeCtorDefns_14);
        Var_28 = mercury__list__length_1_f_0((MR_Word) (&hlds__passes_aux_scalar_common_2[0]), TypeCtorDefns_14);
        mercury__io__write_string_4_p_0(Stream_11, (MR_String) "Type table size = ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_9[1]), Var_28, &Var_53);
        mercury__io__write_string_4_p_0(Stream_11, Var_53);
        mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
        hlds__hlds_module__module_info_get_cons_table_2_p_0(HLDS_4, &CtorTable_15);
        hlds__hlds_cons__get_all_cons_defns_2_p_0(CtorTable_15, &CtorDefns_16);
        Var_33 = mercury__list__length_1_f_0((MR_Word) (&hlds__passes_aux_scalar_common_2[1]), CtorDefns_16);
        mercury__io__write_string_4_p_0(Stream_11, (MR_String) "Constructor table size = ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_9[1]), Var_33, &Var_64);
        mercury__io__write_string_4_p_0(Stream_11, Var_64);
        mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
      }
      break;
  }
}

void MR_CALL 
hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word ModuleInfo_8,
  MR_String Message_9,
  MR_Word PredProcId_10)
{
  MR_Word Globals_12;
  MR_Word VeryVerbose_13;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 79, &VeryVerbose_13);
  switch (VeryVerbose_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String ProcStr_14;

        ProcStr_14 = hlds__hlds_out__hlds_out_util__pred_proc_id_to_user_string_2_f_0(ModuleInfo_8, PredProcId_10);
        mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "% ");
        mercury__io__write_string_4_p_0(ProgressStream_7, Message_9);
        mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) " ");
        mercury__io__write_string_4_p_0(ProgressStream_7, ProcStr_14);
        mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\n");
        mercury__io__flush_output_3_p_0(ProgressStream_7);
      }
      break;
  }
}

void MR_CALL 
hlds__passes_aux__maybe_write_pred_progress_message_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word ModuleInfo_8,
  MR_String Message_9,
  MR_Word PredId_10)
{
  MR_Word Globals_12;
  MR_Word VeryVerbose_13;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 79, &VeryVerbose_13);
  switch (VeryVerbose_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String PredStr_14;

        PredStr_14 = hlds__hlds_out__hlds_out_util__pred_id_to_user_string_2_f_0(ModuleInfo_8, PredId_10);
        mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "% ");
        mercury__io__write_string_4_p_0(ProgressStream_7, Message_9);
        mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) " ");
        mercury__io__write_string_4_p_0(ProgressStream_7, PredStr_14);
        mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\n");
        mercury__io__flush_output_3_p_0(ProgressStream_7);
      }
      break;
  }
}

void MR_CALL 
hlds__passes_aux__process_valid_nonimported_procs_3_p_0(
  MR_Word Task_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  MR_Word Var_6;

  hlds__passes_aux__process_valid_nonimported_procs_update_4_p_0(Task_4, &Var_6, STATE_VARIABLE_ModuleInfo_0_7, STATE_VARIABLE_ModuleInfo_8);
}

void MR_CALL 
hlds__passes_aux__process_valid_nonimported_procs_update_4_p_0(
  MR_Word STATE_VARIABLE_Task_0_22,
  MR_Word * STATE_VARIABLE_Task_23,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25)
{
  MR_Word ValidPredIds_7;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_24, &ValidPredIds_7);
  switch (MR_tag((MR_Word) STATE_VARIABLE_Task_0_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        MR_Word ValidPredIdSet_11;
        MR_Word PredIdTable0_12;
        MR_Word PredIdsInfos0_13;
        MR_Word PredIdsInfos_14;
        MR_Word PredIdTable_15;

        ValidPredIdSet_11 = mercury__set_tree234__list_to_set_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ValidPredIds_7);
        hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_24, &PredIdTable0_12);
        mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable0_12, &PredIdsInfos0_13);
        hlds__passes_aux__par_process_valid_nonimported_procs_in_preds_5_p_0(STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_Task_0_22, ValidPredIdSet_11, PredIdsInfos0_13, &PredIdsInfos_14);
        mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdsInfos_14, &PredIdTable_15);
        hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_15, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25);
        *STATE_VARIABLE_Task_23 = STATE_VARIABLE_Task_0_22;
      }
      break;
    case (MR_Integer) 3:
      hlds__passes_aux__seq_process_valid_nonimported_procs_in_preds_5_p_0(ValidPredIds_7, STATE_VARIABLE_Task_0_22, STATE_VARIABLE_Task_23, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25);
      break;
  }
}

static void MR_CALL 
hlds__passes_aux__seq_process_valid_nonimported_procs_in_preds_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Task_0_2,
  MR_Word * STATE_VARIABLE_Task_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_5 = STATE_VARIABLE_ModuleInfo_0_4;
      *STATE_VARIABLE_Task_3 = STATE_VARIABLE_Task_0_2;
    }
    else
    {
      MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PredIds_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PredInfo_16;
      MR_Word ProcIds_17;
      MR_Word STATE_VARIABLE_Task_22_22;
      MR_Word STATE_VARIABLE_ModuleInfo_23_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Task_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_4;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_4, PredId_12, &PredInfo_16);
      ProcIds_17 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo_16);
      hlds__passes_aux__seq_process_valid_nonimported_procs_6_p_0(PredId_12, ProcIds_17, STATE_VARIABLE_Task_0_2, &STATE_VARIABLE_Task_22_22, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_23_23);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredIds_13;
      next_value_of_STATE_VARIABLE_Task_0_2 = STATE_VARIABLE_Task_22_22;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_4 = STATE_VARIABLE_ModuleInfo_23_23;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Task_0_2 = next_value_of_STATE_VARIABLE_Task_0_2;
      STATE_VARIABLE_ModuleInfo_0_4 = next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__passes_aux__seq_process_valid_nonimported_procs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Task_0_3,
  MR_Word * STATE_VARIABLE_Task_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_6 = STATE_VARIABLE_ModuleInfo_0_5;
      *STATE_VARIABLE_Task_4 = STATE_VARIABLE_Task_0_3;
    }
    else
    {
      MR_Integer ProcId_15 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ProcIds_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PredInfo0_19;
      MR_Word ProcInfo0_20;
      MR_Word PredProcId_21;
      MR_Word ProcInfo_23;
      MR_Word PredInfo8_26;
      MR_Word PredInfo_27;
      MR_Word STATE_VARIABLE_ModuleInfo_32_32;
      MR_Word STATE_VARIABLE_Task_35_35;
      MR_Word STATE_VARIABLE_ModuleInfo_38_38;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Task_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_5;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_5, HeadVar__1_1, &PredInfo0_19);
      hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo0_19, ProcId_15, &ProcInfo0_20);
      {
        PredProcId_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredProcId_21, 0) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(0, PredProcId_21, 1) = ((MR_Box) (ProcId_15));
      }
      switch (((MR_Integer) ((MR_hl_field(3, STATE_VARIABLE_Task_0_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Closure_22 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_Task_0_3, (MR_Integer) 1))));
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Closure_22, (MR_Integer) 1))));
            MR_Box conv2_ProcInfo_23;
            MR_Box conv1_STATE_VARIABLE_ModuleInfo_32_32;

            func_0(((MR_Box) (Closure_22)), ((MR_Box) (PredProcId_21)), ((MR_Box) (ProcInfo0_20)), &conv2_ProcInfo_23, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_5)), &conv1_STATE_VARIABLE_ModuleInfo_32_32);
            ProcInfo_23 = ((MR_Word) (conv2_ProcInfo_23));
            STATE_VARIABLE_ModuleInfo_32_32 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_32_32));
            STATE_VARIABLE_Task_35_35 = STATE_VARIABLE_Task_0_3;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Closure_41 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_Task_0_3, (MR_Integer) 1))));
            void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Closure_41, (MR_Integer) 1))));
            MR_Box conv9_ProcInfo_23;
            MR_Box conv8_STATE_VARIABLE_ModuleInfo_32_32;

            func_7(((MR_Box) (Closure_41)), ((MR_Box) (PredProcId_21)), ((MR_Box) (PredInfo0_19)), ((MR_Box) (ProcInfo0_20)), &conv9_ProcInfo_23, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_5)), &conv8_STATE_VARIABLE_ModuleInfo_32_32);
            ProcInfo_23 = ((MR_Word) (conv9_ProcInfo_23));
            STATE_VARIABLE_ModuleInfo_32_32 = ((MR_Word) (conv8_STATE_VARIABLE_ModuleInfo_32_32));
            STATE_VARIABLE_Task_35_35 = STATE_VARIABLE_Task_0_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Cookie0_24 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_Task_0_3, (MR_Integer) 2))));
            MR_Word Cookie_25;
            MR_Word Closure_42 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_Task_0_3, (MR_Integer) 1))));
            void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Closure_42, (MR_Integer) 1))));
            MR_Box conv6_ProcInfo_23;
            MR_Box conv5_STATE_VARIABLE_ModuleInfo_32_32;
            MR_Box conv4_Cookie_25;

            func_3(((MR_Box) (Closure_42)), ((MR_Box) (PredProcId_21)), ((MR_Box) (ProcInfo0_20)), &conv6_ProcInfo_23, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_5)), &conv5_STATE_VARIABLE_ModuleInfo_32_32, ((MR_Box) (Cookie0_24)), &conv4_Cookie_25);
            ProcInfo_23 = ((MR_Word) (conv6_ProcInfo_23));
            STATE_VARIABLE_ModuleInfo_32_32 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_32_32));
            Cookie_25 = ((MR_Word) (conv4_Cookie_25));
            {
              STATE_VARIABLE_Task_35_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, STATE_VARIABLE_Task_35_35, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, STATE_VARIABLE_Task_35_35, 1) = ((MR_Box) (Closure_42));
              MR_hl_field(3, STATE_VARIABLE_Task_35_35, 2) = ((MR_Box) (Cookie_25));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Closure_43 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_Task_0_3, (MR_Integer) 1))));
            MR_Word Cookie0_44 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_Task_0_3, (MR_Integer) 2))));
            MR_Word Cookie_45;
            void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Closure_43, (MR_Integer) 1))));
            MR_Box conv13_ProcInfo_23;
            MR_Box conv12_STATE_VARIABLE_ModuleInfo_32_32;
            MR_Box conv11_Cookie_45;

            func_10(((MR_Box) (Closure_43)), ((MR_Box) (PredProcId_21)), ((MR_Box) (PredInfo0_19)), ((MR_Box) (ProcInfo0_20)), &conv13_ProcInfo_23, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_5)), &conv12_STATE_VARIABLE_ModuleInfo_32_32, ((MR_Box) (Cookie0_44)), &conv11_Cookie_45);
            ProcInfo_23 = ((MR_Word) (conv13_ProcInfo_23));
            STATE_VARIABLE_ModuleInfo_32_32 = ((MR_Word) (conv12_STATE_VARIABLE_ModuleInfo_32_32));
            Cookie_45 = ((MR_Word) (conv11_Cookie_45));
            {
              STATE_VARIABLE_Task_35_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, STATE_VARIABLE_Task_35_35, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, STATE_VARIABLE_Task_35_35, 1) = ((MR_Box) (Closure_43));
              MR_hl_field(3, STATE_VARIABLE_Task_35_35, 2) = ((MR_Box) (Cookie_45));
            }
          }
          break;
      }
      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_32_32, HeadVar__1_1, &PredInfo8_26);
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_15, ProcInfo_23, PredInfo8_26, &PredInfo_27);
      hlds__hlds_module__module_info_set_pred_info_4_p_0(HeadVar__1_1, PredInfo_27, STATE_VARIABLE_ModuleInfo_32_32, &STATE_VARIABLE_ModuleInfo_38_38);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ProcIds_16;
      next_value_of_STATE_VARIABLE_Task_0_3 = STATE_VARIABLE_Task_35_35;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_5 = STATE_VARIABLE_ModuleInfo_38_38;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Task_0_3 = next_value_of_STATE_VARIABLE_Task_0_3;
      STATE_VARIABLE_ModuleInfo_0_5 = next_value_of_STATE_VARIABLE_ModuleInfo_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__passes_aux__par_process_valid_nonimported_procs_in_preds_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Task_2,
  MR_Word ValidPredIdSet_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word PredIdInfo0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word PredIdsInfos0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word PredIdInfo_14;
    MR_Word PredIdsInfos_15;
    MR_Word PredId_16 = ((MR_Word) ((MR_hl_field(0, PredIdInfo0_12, (MR_Integer) 0))));
    MR_Word PredInfo0_17 = ((MR_Word) ((MR_hl_field(0, PredIdInfo0_12, (MR_Integer) 1))));
    MR_Word ProcIds_18;

    succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ValidPredIdSet_3, ((MR_Box) (PredId_16)));
    if (succeeded)
    {
      ProcIds_18 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo0_17);
      succeeded = (ProcIds_18 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word PredInfo_21;

      hlds__passes_aux__par_process_valid_nonimported_procs_6_p_0(ModuleInfo_1, Task_2, PredId_16, ProcIds_18, PredInfo0_17, &PredInfo_21);
      {
        PredIdInfo_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredIdInfo_14, 0) = ((MR_Box) (PredId_16));
        MR_hl_field(0, PredIdInfo_14, 1) = ((MR_Box) (PredInfo_21));
      }
      hlds__passes_aux__par_process_valid_nonimported_procs_in_preds_5_p_0(ModuleInfo_1, Task_2, ValidPredIdSet_3, PredIdsInfos0_13, &PredIdsInfos_15);
    }
    else
    {
      PredIdInfo_14 = PredIdInfo0_12;
      hlds__passes_aux__par_process_valid_nonimported_procs_in_preds_5_p_0(ModuleInfo_1, Task_2, ValidPredIdSet_3, PredIdsInfos0_13, &PredIdsInfos_15);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (PredIdInfo_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (PredIdsInfos_15));
    }
  }
}

static void MR_CALL 
hlds__passes_aux__par_process_valid_nonimported_procs_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Task_2,
  MR_Word PredId_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredInfo_0_5,
  MR_Word * STATE_VARIABLE_PredInfo_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_PredInfo_6 = STATE_VARIABLE_PredInfo_0_5;
    else
    {
      MR_Integer ProcId_16 = ((MR_Integer) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ProcIds_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word ProcMap0_19;
      MR_Word Proc0_20;
      MR_Word PredProcId_21;
      MR_Word Proc_23;
      MR_Word ProcMap_24;
      MR_Word STATE_VARIABLE_PredInfo_27_27;
      MR_Box conv0_Proc0_20;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_PredInfo_0_5;

      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_0_5, &ProcMap0_19);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcMap0_19, ((MR_Box) (ProcId_16)), &conv0_Proc0_20);
      Proc0_20 = ((MR_Word) (conv0_Proc0_20));
      {
        PredProcId_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredProcId_21, 0) = ((MR_Box) (PredId_3));
        MR_hl_field(0, PredProcId_21, 1) = ((MR_Box) (ProcId_16));
      }
      switch (MR_tag((MR_Word) Task_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Closure_22 = ((MR_Word) ((MR_hl_field(0, Task_2, (MR_Integer) 0))));
            void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Closure_22, (MR_Integer) 1))));
            MR_Box conv2_Proc_23;

            func_1(((MR_Box) (Closure_22)), ((MR_Box) (ModuleInfo_1)), ((MR_Box) (Proc0_20)), &conv2_Proc_23);
            Proc_23 = ((MR_Word) (conv2_Proc_23));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Closure_29 = ((MR_Word) ((MR_hl_field(1, Task_2, (MR_Integer) 0))));
            void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Closure_29, (MR_Integer) 1))));
            MR_Box conv4_Proc_23;

            func_3(((MR_Box) (Closure_29)), ((MR_Box) (ModuleInfo_1)), ((MR_Box) (PredProcId_21)), ((MR_Box) (Proc0_20)), &conv4_Proc_23);
            Proc_23 = ((MR_Word) (conv4_Proc_23));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Closure_30 = ((MR_Word) ((MR_hl_field(2, Task_2, (MR_Integer) 0))));
            void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Closure_30, (MR_Integer) 1))));
            MR_Box conv6_Proc_23;

            func_5(((MR_Box) (Closure_30)), ((MR_Box) (ModuleInfo_1)), ((MR_Box) (PredProcId_21)), ((MR_Box) (STATE_VARIABLE_PredInfo_0_5)), ((MR_Box) (Proc0_20)), &conv6_Proc_23);
            Proc_23 = ((MR_Word) (conv6_Proc_23));
          }
          break;
      }
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_16)), ((MR_Box) (Proc_23)), ProcMap0_19, &ProcMap_24);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcMap_24, STATE_VARIABLE_PredInfo_0_5, &STATE_VARIABLE_PredInfo_27_27);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ProcIds_17;
      next_value_of_STATE_VARIABLE_PredInfo_0_5 = STATE_VARIABLE_PredInfo_27_27;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_PredInfo_0_5 = next_value_of_STATE_VARIABLE_PredInfo_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__passes_aux__process_valid_nonimported_preds_errors_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_15;
  MR_Word conv0_STATE_VARIABLE_Specs_17;

  hlds__passes_aux__process_valid_nonimported_pred_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_15, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_17);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_15));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_17));
}

void MR_CALL 
hlds__passes_aux__process_valid_nonimported_preds_errors_7_p_0(
  MR_Word Task_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_Word PredIds_12;
  MR_Word Var_19;
  MR_Box conv3_STATE_VARIABLE_ModuleInfo_14;
  MR_Box conv2_STATE_VARIABLE_Specs_16;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_13, &PredIds_12);
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&hlds__passes_aux_scalar_common_3[2]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (hlds__passes_aux__process_valid_nonimported_preds_errors_7_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (Task_8));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__passes_aux_scalar_common_1[0]), Var_19, PredIds_12, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_13)), &conv3_STATE_VARIABLE_ModuleInfo_14, ((MR_Box) (STATE_VARIABLE_Specs_0_15)), &conv2_STATE_VARIABLE_Specs_16);
  *STATE_VARIABLE_ModuleInfo_14 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_14));
  *STATE_VARIABLE_Specs_16 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_16));
}

static MR_bool MR_CALL 
hlds__passes_aux____Unify____dump_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__passes_aux____Unify____dump_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__passes_aux____Compare____dump_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__passes_aux____Compare____dump_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_cookie_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__passes_aux____Unify____module_cookie_task_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__passes_aux____Compare____module_cookie_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__passes_aux____Compare____module_cookie_task_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_pred_cookie_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__passes_aux____Unify____module_pred_cookie_task_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__passes_aux____Compare____module_pred_cookie_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__passes_aux____Compare____module_pred_cookie_task_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_pred_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__passes_aux____Unify____module_pred_task_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__passes_aux____Compare____module_pred_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__passes_aux____Compare____module_pred_task_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__passes_aux____Unify____module_task_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__passes_aux____Compare____module_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__passes_aux____Compare____module_task_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__passes_aux____Unify____pred_error_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__passes_aux____Unify____pred_error_task_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__passes_aux____Compare____pred_error_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__passes_aux____Compare____pred_error_task_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_ids_pred_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__passes_aux____Unify____proc_ids_pred_task_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__passes_aux____Compare____proc_ids_pred_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__passes_aux____Compare____proc_ids_pred_task_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_ids_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__passes_aux____Unify____proc_ids_task_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__passes_aux____Compare____proc_ids_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__passes_aux____Compare____proc_ids_task_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__passes_aux____Unify____proc_task_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__passes_aux____Compare____proc_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__passes_aux____Compare____proc_task_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__passes_aux____Unify____update_pred_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__passes_aux____Unify____update_pred_task_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__passes_aux____Compare____update_pred_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__passes_aux____Compare____update_pred_task_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__passes_aux____Unify____update_proc_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__passes_aux____Unify____update_proc_task_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__passes_aux____Compare____update_proc_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__passes_aux____Compare____update_proc_task_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__passes_aux__init(void)
{
}

void mercury__hlds__passes_aux__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__passes_aux__hlds__passes_aux__type_ctor_info_dump_info_0);
	MR_register_type_ctor_info(&hlds__passes_aux__hlds__passes_aux__type_ctor_info_module_cookie_task_0);
	MR_register_type_ctor_info(&hlds__passes_aux__hlds__passes_aux__type_ctor_info_module_pred_cookie_task_0);
	MR_register_type_ctor_info(&hlds__passes_aux__hlds__passes_aux__type_ctor_info_module_pred_task_0);
	MR_register_type_ctor_info(&hlds__passes_aux__hlds__passes_aux__type_ctor_info_module_task_0);
	MR_register_type_ctor_info(&hlds__passes_aux__hlds__passes_aux__type_ctor_info_pred_error_task_0);
	MR_register_type_ctor_info(&hlds__passes_aux__hlds__passes_aux__type_ctor_info_proc_ids_pred_task_0);
	MR_register_type_ctor_info(&hlds__passes_aux__hlds__passes_aux__type_ctor_info_proc_ids_task_0);
	MR_register_type_ctor_info(&hlds__passes_aux__hlds__passes_aux__type_ctor_info_proc_task_0);
	MR_register_type_ctor_info(&hlds__passes_aux__hlds__passes_aux__type_ctor_info_update_pred_task_0);
	MR_register_type_ctor_info(&hlds__passes_aux__hlds__passes_aux__type_ctor_info_update_proc_task_0);
}

void mercury__hlds__passes_aux__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__passes_aux__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.passes_aux.
