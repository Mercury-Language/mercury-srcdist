/*
** Automatically generated from `passes_aux.m'
** by the Mercury compiler,
** version rotd-2022-05-04
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
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "io.file.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_module.mih"
#include "hlds.hlds_out.hlds_out_util.mih"



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


static const MR_FA_PseudoTypeInfo_Struct1 hlds__passes_aux__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

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

static const MR_FA_TypeInfo_Struct1 hlds__passes_aux__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_VA_TypeInfo_Struct7 hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

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
hlds__passes_aux__dump_hlds_4_p_0(
  MR_String DumpFile_5,
  MR_Word HLDS_6);

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
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0))
  },
};

static /* final */ const MR_Box hlds__passes_aux_scalar_common_3[3][9] = {
  /* row   0 */
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
  /* row   1 */
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
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__passes_aux__hlds__passes_aux__type_ctor_info_update_pred_task_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__passes_aux__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__passes_aux__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
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
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 1U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   1 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__passes_aux__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
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
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)
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

static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_dump_info_0_0[1] = {
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_dump_info_0_0
};

static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_dump_info_0_1[1] = {
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_dump_info_0_1
};

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

static const MR_FA_TypeInfo_Struct1 hlds__passes_aux__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_VA_TypeInfo_Struct7 hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
    (MR_TypeInfo) (&hlds__passes_aux__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0),
    (MR_TypeInfo) (&hlds__passes_aux__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0)
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
  { (MR_PseudoTypeInfo) (&hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0) },
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

static const MR_Integer hlds__passes_aux__hlds__passes_aux__functor_number_map_update_pred_task_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc hlds__passes_aux__hlds__passes_aux__notag_functor_desc_update_pred_task_0 = {
  (MR_String) "update_pred_error",
  (MR_PseudoTypeInfo) (&hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0),
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

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_0[1] = {
  (MR_PseudoTypeInfo) (&hlds__passes_aux____vti_pred_3hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0)
};

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

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_1[1] = {
  (MR_PseudoTypeInfo) (&hlds__passes_aux____vti_pred_4hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0)
};

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

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_2[1] = {
  (MR_PseudoTypeInfo) (&hlds__passes_aux____vti_pred_5hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0)
};

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

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_3[1] = {
  (MR_PseudoTypeInfo) (&hlds__passes_aux____vti_pred_5hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0)
};

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

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_4[1] = {
  (MR_PseudoTypeInfo) (&hlds__passes_aux____vti_pred_6hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0)
};

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

static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_0[1] = {
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_0
};

static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_1[1] = {
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_1
};

static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_2[1] = {
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_2
};

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
  MR_Integer CastX_132 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_133 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_132 == CastY_133);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_8[0]), HeadVar__1_1, ((MR_Box) (Var_149)), ((MR_Box) (ArgY1_5)));
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_7[0]), HeadVar__1_1, ((MR_Box) (Var_150)), ((MR_Box) (ArgY1_23)));
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_6[1]), HeadVar__1_1, ((MR_Box) (Var_151)), ((MR_Box) (ArgY1_41)));
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ArgY1_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_6[0]), HeadVar__1_1, ((MR_Box) (Var_143)), ((MR_Box) (ArgY1_59)));
                      }
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ArgY1_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_5[0]), HeadVar__1_1, ((MR_Box) (Var_146)), ((MR_Box) (ArgY1_77)));
                      }
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ArgY1_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_101;

                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_3[0]), &SubResult1_101, ((MR_Box) (Var_145)), ((MR_Box) (ArgY1_100)));
                        succeeded = (SubResult1_101 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_101;
                        else
                          mercury__univ____Compare____univ_0_0(HeadVar__1_1, Var_144, ArgY2_103);
                      }
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word ArgY1_128 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_131 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_129;

                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_4[0]), &SubResult1_129, ((MR_Box) (Var_148)), ((MR_Box) (ArgY1_128)));
                        succeeded = (SubResult1_129 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_129;
                        else
                          mercury__univ____Compare____univ_0_0(HeadVar__1_1, Var_147, ArgY2_131);
                      }
                      break;
                  }
                  break;
              }
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_3), (MR_Word) (ArgY1_4));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_5), (MR_Word) (ArgY1_6));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_7), (MR_Word) (ArgY1_8));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_9), (MR_Word) (ArgY1_10));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_11), (MR_Word) (ArgY1_12));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_14;
              MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_13), (MR_Word) (ArgY1_14));
                if (succeeded)
                  succeeded = mercury__univ____Unify____univ_0_0(ArgX2_15, ArgY2_16);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_18;
              MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
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

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_3[1]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_8[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_task_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
hlds__passes_aux____Compare____proc_ids_task_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_7[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_ids_task_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
hlds__passes_aux____Compare____proc_ids_pred_task_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_6[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_ids_pred_task_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
hlds__passes_aux____Compare____pred_error_task_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_3[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____pred_error_task_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
hlds__passes_aux____Compare____module_task_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_6[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____module_task_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
hlds__passes_aux____Compare____module_pred_task_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_5[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____module_pred_task_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
hlds__passes_aux____Compare____module_pred_cookie_task_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_4[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____module_pred_cookie_task_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
hlds__passes_aux____Compare____module_cookie_task_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__passes_aux_scalar_common_3[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____module_cookie_task_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
hlds__passes_aux____Compare____dump_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_String ArgY1_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_10;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_10, Var_18, ArgY1_9);
      succeeded = (SubResult1_10 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_10;
      else
        hlds__hlds_module____Compare____module_info_0_0(HeadVar__1_1, Var_17, ArgY2_12);
    }
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
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
      if (succeeded)
        succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX2_7, ArgY2_8);
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
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Closure_12, (MR_Integer) 1))));
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
hlds__passes_aux__maybe_dump_hlds_7_p_0(
  MR_Word HLDS_8,
  MR_Integer StageNum_9,
  MR_String StageName_10,
  MR_Word STATE_VARIABLE_DumpInfo_0_35,
  MR_Word * STATE_VARIABLE_DumpInfo_36)
{
  MR_bool succeeded;
  MR_Word Globals_13;
  MR_Word Verbose_14;
  MR_Word DumpHLDSStages_15;
  MR_Word DumpTraceStages_16;
  MR_String UserFileSuffix_17;
  MR_String StageNumStr_18;

  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_8, &Globals_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 71, &Verbose_14);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_13, (MR_Integer) 186, &DumpHLDSStages_15);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_13, (MR_Integer) 185, &DumpTraceStages_16);
  libs__globals__lookup_string_option_3_p_0(Globals_13, (MR_Integer) 195, &UserFileSuffix_17);
  StageNumStr_18 = hlds__passes_aux__stage_num_str_1_f_0(StageNum_9);
  succeeded = hlds__passes_aux__should_dump_stage_4_p_0(StageNum_9, StageNumStr_18, StageName_10, DumpHLDSStages_15);
  if (succeeded)
  {
    MR_String BaseFileName_19;
    MR_String DumpFileName_20;
    MR_String Var_43;
    MR_String Var_45;
    MR_String Var_46;
    MR_String Var_48;
    MR_String PrevDumpFileName_21;
    MR_Word PrevHLDS_22;

    hlds__hlds_module__module_info_get_dump_hlds_base_file_name_2_p_0(HLDS_8, &BaseFileName_19);
    Var_48 = mercury__string__f_43_43_2_f_0(StageName_10, UserFileSuffix_17);
    Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_48);
    Var_45 = mercury__string__f_43_43_2_f_0(StageNumStr_18, Var_46);
    Var_43 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_45);
    DumpFileName_20 = mercury__string__f_43_43_2_f_0(BaseFileName_19, Var_43);
    succeeded = (STATE_VARIABLE_DumpInfo_0_35 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      PrevDumpFileName_21 = ((MR_String) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_DumpInfo_0_35, (MR_Integer) 0))));
      PrevHLDS_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_DumpInfo_0_35, (MR_Integer) 1))));
      succeeded = hlds__hlds_module____Unify____module_info_0_0(HLDS_8, PrevHLDS_22);
    }
    if (succeeded)
    {
      MR_Word DumpSameHLDS_23;
      MR_Word ProgressStream_24;

      libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 196, &DumpSameHLDS_23);
      hlds__passes_aux__get_progress_output_stream_4_p_0(HLDS_8, &ProgressStream_24);
      switch (DumpSameHLDS_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word _Result_25;

            switch (Verbose_14) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_4_p_0(ProgressStream_24, (MR_String) "% HLDS dump \140");
                  mercury__io__write_string_4_p_0(ProgressStream_24, DumpFileName_20);
                  mercury__io__write_string_4_p_0(ProgressStream_24, (MR_String) "\' would be identical to previous dump.\n");
                }
                break;
            }
            mercury__io__file__remove_file_4_p_0(DumpFileName_20, &_Result_25);
            *STATE_VARIABLE_DumpInfo_36 = STATE_VARIABLE_DumpInfo_0_35;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Res_27;

            mercury__io__open_output_4_p_0(DumpFileName_20, &Res_27);
            if (((MR_tag((MR_Word) Res_27)) == (MR_Integer) 1))
            {
              MR_Word IOError_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_27, (MR_Integer) 0))));
              MR_String IOErrorMsg_30;
              MR_String Msg_31;
              MR_Word ErrorStream_32;
              MR_String Var_110;
              MR_String Var_112;
              MR_String Var_113;

              libs__file_util__maybe_write_string_5_p_0(ProgressStream_24, Verbose_14, (MR_String) "\n");
              IOErrorMsg_30 = mercury__io__error_message_1_f_0(IOError_29);
              Var_110 = mercury__string__f_43_43_2_f_0(IOErrorMsg_30, (MR_String) "\n");
              Var_112 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", Var_110);
              Var_113 = mercury__string__f_43_43_2_f_0(DumpFileName_20, Var_112);
              Msg_31 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open file \140", Var_113);
              hlds__passes_aux__get_error_output_stream_4_p_0(HLDS_8, &ErrorStream_32);
              libs__file_util__report_error_4_p_0(ErrorStream_32, Msg_31);
            }
            else
            {
              MR_Word FileStream_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_27, (MR_Integer) 0))));

              mercury__io__write_string_4_p_0(FileStream_28, (MR_String) "This stage is identical to the stage in ");
              mercury__io__write_string_4_p_0(FileStream_28, PrevDumpFileName_21);
              mercury__io__write_string_4_p_0(FileStream_28, (MR_String) ".\n");
              mercury__io__close_output_3_p_0(FileStream_28);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_DumpInfo_36 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PrevDumpFileName_21));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HLDS_8));
            }
          }
          break;
      }
    }
    else
    {
      hlds__passes_aux__dump_hlds_4_p_0(DumpFileName_20, HLDS_8);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_DumpInfo_36 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DumpFileName_20));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HLDS_8));
      }
    }
  }
  else
  {
    succeeded = hlds__passes_aux__should_dump_stage_4_p_0(StageNum_9, StageNumStr_18, StageName_10, DumpTraceStages_16);
    if (succeeded)
    {
      MR_Word MaybeTraceCountsError_33;
      MR_String Var_79;
      MR_String Var_81;
      MR_String Var_83;
      MR_String Var_84;
      MR_String Var_86;
      MR_String BaseFileName_102;
      MR_String DumpFileName_103;
      MR_Word ProgressStream_104;

      hlds__hlds_module__module_info_get_dump_hlds_base_file_name_2_p_0(HLDS_8, &BaseFileName_102);
      Var_79 = mercury__string__det_remove_suffix_2_f_0(BaseFileName_102, (MR_String) ".hlds_dump");
      Var_86 = mercury__string__f_43_43_2_f_0(StageName_10, UserFileSuffix_17);
      Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_86);
      Var_83 = mercury__string__f_43_43_2_f_0(StageNumStr_18, Var_84);
      Var_81 = mercury__string__f_43_43_2_f_0((MR_String) ".trace_counts.", Var_83);
      DumpFileName_103 = mercury__string__f_43_43_2_f_0(Var_79, Var_81);
      mercury__benchmarking__write_out_trace_counts_4_p_0(DumpFileName_103, &MaybeTraceCountsError_33);
      hlds__passes_aux__get_progress_output_stream_4_p_0(HLDS_8, &ProgressStream_104);
      if ((MaybeTraceCountsError_33 == (MR_Word) ((MR_Unsigned) 0U)))
        switch (Verbose_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_4_p_0(ProgressStream_104, (MR_String) "% Dumped trace counts to \140");
              mercury__io__write_string_4_p_0(ProgressStream_104, DumpFileName_103);
              mercury__io__write_string_4_p_0(ProgressStream_104, (MR_String) "\'\n");
              mercury__io__flush_output_3_p_0(ProgressStream_104);
            }
            break;
        }
      else
      {
        MR_String TraceCountsError_34 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeTraceCountsError_33, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(ProgressStream_104, (MR_String) "% ");
        mercury__io__write_string_4_p_0(ProgressStream_104, TraceCountsError_34);
        mercury__io__write_string_4_p_0(ProgressStream_104, (MR_String) "\n");
        mercury__io__flush_output_3_p_0(ProgressStream_104);
      }
    }
    *STATE_VARIABLE_DumpInfo_36 = STATE_VARIABLE_DumpInfo_0_35;
  }
}

static void MR_CALL 
hlds__passes_aux__dump_hlds_4_p_0(
  MR_String DumpFile_5,
  MR_Word HLDS_6)
{
  MR_Word Globals_8;
  MR_Word Verbose_9;
  MR_Word Stats_10;
  MR_Word ProgressStream_11;
  MR_Word DumpFileResult_12;
  MR_Word Globals_52;
  MR_Word ModuleName_53;

  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_6, &Globals_8);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 71, &Verbose_9);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 81, &Stats_10);
  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_6, &Globals_52);
  hlds__hlds_module__module_info_get_name_2_p_0(HLDS_6, &ModuleName_53);
  libs__globals__get_progress_output_stream_5_p_0(Globals_52, ModuleName_53, &ProgressStream_11);
  switch (Verbose_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_string_4_p_0(ProgressStream_11, (MR_String) "% Dumping out HLDS to \140");
        mercury__io__write_string_4_p_0(ProgressStream_11, DumpFile_5);
        mercury__io__write_string_4_p_0(ProgressStream_11, (MR_String) "\'...");
        mercury__io__flush_output_3_p_0(ProgressStream_11);
      }
      break;
  }
  mercury__io__open_output_4_p_0(DumpFile_5, &DumpFileResult_12);
  if (((MR_tag((MR_Word) DumpFileResult_12)) == (MR_Integer) 1))
  {
    MR_Word IOError_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DumpFileResult_12, (MR_Integer) 0))));
    MR_Word ErrorStream_15;
    MR_String Msg_16;
    MR_String Var_37;
    MR_String Var_49;
    MR_String Var_50;
    MR_Word Globals_54;
    MR_Word ModuleName_55;

    libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_9, (MR_String) "\n");
    hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_6, &Globals_54);
    hlds__hlds_module__module_info_get_name_2_p_0(HLDS_6, &ModuleName_55);
    libs__globals__get_error_output_stream_5_p_0(Globals_54, ModuleName_55, &ErrorStream_15);
    Var_37 = mercury__io__error_message_1_f_0(IOError_14);
    Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", Var_37);
    Var_50 = mercury__string__f_43_43_2_f_0(DumpFile_5, Var_49);
    Msg_16 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open file \140", Var_50);
    libs__file_util__report_error_4_p_0(ErrorStream_15, Msg_16);
  }
  else
  {
    MR_Word DumpFileStream_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DumpFileResult_12, (MR_Integer) 0))));

    hlds__hlds_out__hlds_out_module__write_hlds_4_p_0(DumpFileStream_13, HLDS_6);
    mercury__io__close_output_3_p_0(DumpFileStream_13);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_9, (MR_String) " done.\n");
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_11, Stats_10);
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
hlds__passes_aux__get_progress_output_stream_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word * Stream_6)
{
  MR_Word Globals_8;
  MR_Word ModuleName_9;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_8);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_9);
  libs__globals__get_progress_output_stream_5_p_0(Globals_8, ModuleName_9, Stream_6);
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
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 81, &Statistics_7);
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
hlds__passes_aux__write_proc_progress_message_5_p_0(
  MR_Word ModuleInfo_6,
  MR_String Message_7,
  MR_Word HeadVar__3_3)
{
  MR_Word PredId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
  MR_Integer ProcId_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));

  hlds__passes_aux__write_proc_progress_message_6_p_0(ModuleInfo_6, Message_7, PredId_8, ProcId_9);
}

void MR_CALL 
hlds__passes_aux__write_proc_progress_message_6_p_0(
  MR_Word ModuleInfo_7,
  MR_String Message_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10)
{
  MR_Word Globals_12;
  MR_Word VeryVerbose_13;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 72, &VeryVerbose_13);
  switch (VeryVerbose_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_14;
        MR_Word Stream_15;
        MR_String ProcStr_16;

        hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_7, &ModuleName_14);
        libs__globals__get_progress_output_stream_5_p_0(Globals_12, ModuleName_14, &Stream_15);
        ProcStr_16 = hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_f_0(ModuleInfo_7, PredId_9, ProcId_10);
        mercury__io__write_string_4_p_0(Stream_15, (MR_String) "% ");
        mercury__io__write_string_4_p_0(Stream_15, Message_8);
        mercury__io__write_string_4_p_0(Stream_15, (MR_String) " ");
        mercury__io__write_string_4_p_0(Stream_15, ProcStr_16);
        mercury__io__write_string_4_p_0(Stream_15, (MR_String) "\n");
        mercury__io__flush_output_3_p_0(Stream_15);
      }
      break;
  }
}

void MR_CALL 
hlds__passes_aux__write_pred_progress_message_5_p_0(
  MR_Word ModuleInfo_6,
  MR_String Message_7,
  MR_Word PredId_8)
{
  MR_Word Globals_10;
  MR_Word VeryVerbose_11;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_10);
  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 72, &VeryVerbose_11);
  switch (VeryVerbose_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_12;
        MR_Word Stream_13;
        MR_String PredStr_14;

        hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_6, &ModuleName_12);
        libs__globals__get_progress_output_stream_5_p_0(Globals_10, ModuleName_12, &Stream_13);
        PredStr_14 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(ModuleInfo_6, PredId_8);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% ");
        mercury__io__write_string_4_p_0(Stream_13, Message_7);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
        mercury__io__write_string_4_p_0(Stream_13, PredStr_14);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
        mercury__io__flush_output_3_p_0(Stream_13);
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
      MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PredIds_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PredInfo_16;
      MR_Word ProcIds_17;
      MR_Word STATE_VARIABLE_Task_22_22;
      MR_Word STATE_VARIABLE_ModuleInfo_23_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Task_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_4;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_4, PredId_12, &PredInfo_16);
      ProcIds_17 = hlds__hlds_pred__pred_info_valid_non_imported_procids_1_f_0(PredInfo_16);
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
      MR_Integer ProcId_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ProcIds_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PredInfo0_19;
      MR_Word ProcInfo0_20;
      MR_Word PredProcId_21;
      MR_Word ProcInfo_23;
      MR_Word PredInfo8_26;
      MR_Word PredInfo_27;
      MR_Word STATE_VARIABLE_Task_35_35;
      MR_Word STATE_VARIABLE_ModuleInfo_37_37;
      MR_Word STATE_VARIABLE_ModuleInfo_38_38;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Task_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_5;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_5, HeadVar__1_1, &PredInfo0_19);
      hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo0_19, ProcId_15, &ProcInfo0_20);
      {
        PredProcId_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredProcId_21, 0) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(MR_mktag(0), PredProcId_21, 1) = ((MR_Box) (ProcId_15));
      }
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Task_0_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Closure_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Task_0_3, (MR_Integer) 1))));
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Closure_22, (MR_Integer) 1))));
            MR_Box conv2_ProcInfo_23;
            MR_Box conv1_STATE_VARIABLE_ModuleInfo_37_37;

            func_0(((MR_Box) (Closure_22)), ((MR_Box) (PredProcId_21)), ((MR_Box) (ProcInfo0_20)), &conv2_ProcInfo_23, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_5)), &conv1_STATE_VARIABLE_ModuleInfo_37_37);
            ProcInfo_23 = ((MR_Word) (conv2_ProcInfo_23));
            STATE_VARIABLE_ModuleInfo_37_37 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_37_37));
            STATE_VARIABLE_Task_35_35 = STATE_VARIABLE_Task_0_3;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Closure_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Task_0_3, (MR_Integer) 1))));
            void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Closure_41, (MR_Integer) 1))));
            MR_Box conv9_ProcInfo_23;
            MR_Box conv8_STATE_VARIABLE_ModuleInfo_37_37;

            func_7(((MR_Box) (Closure_41)), ((MR_Box) (PredProcId_21)), ((MR_Box) (PredInfo0_19)), ((MR_Box) (ProcInfo0_20)), &conv9_ProcInfo_23, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_5)), &conv8_STATE_VARIABLE_ModuleInfo_37_37);
            ProcInfo_23 = ((MR_Word) (conv9_ProcInfo_23));
            STATE_VARIABLE_ModuleInfo_37_37 = ((MR_Word) (conv8_STATE_VARIABLE_ModuleInfo_37_37));
            STATE_VARIABLE_Task_35_35 = STATE_VARIABLE_Task_0_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Cookie0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Task_0_3, (MR_Integer) 2))));
            MR_Word Cookie_25;
            MR_Word Closure_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Task_0_3, (MR_Integer) 1))));
            void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Closure_42, (MR_Integer) 1))));
            MR_Box conv6_ProcInfo_23;
            MR_Box conv5_STATE_VARIABLE_ModuleInfo_37_37;
            MR_Box conv4_Cookie_25;

            func_3(((MR_Box) (Closure_42)), ((MR_Box) (PredProcId_21)), ((MR_Box) (ProcInfo0_20)), &conv6_ProcInfo_23, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_5)), &conv5_STATE_VARIABLE_ModuleInfo_37_37, ((MR_Box) (Cookie0_24)), &conv4_Cookie_25);
            ProcInfo_23 = ((MR_Word) (conv6_ProcInfo_23));
            STATE_VARIABLE_ModuleInfo_37_37 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_37_37));
            Cookie_25 = ((MR_Word) (conv4_Cookie_25));
            {
              STATE_VARIABLE_Task_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), STATE_VARIABLE_Task_35_35, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), STATE_VARIABLE_Task_35_35, 1) = ((MR_Box) (Closure_42));
              MR_hl_field(MR_mktag(3), STATE_VARIABLE_Task_35_35, 2) = ((MR_Box) (Cookie_25));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Closure_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Task_0_3, (MR_Integer) 1))));
            MR_Word Cookie0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Task_0_3, (MR_Integer) 2))));
            MR_Word Cookie_45;
            void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Closure_43, (MR_Integer) 1))));
            MR_Box conv13_ProcInfo_23;
            MR_Box conv12_STATE_VARIABLE_ModuleInfo_37_37;
            MR_Box conv11_Cookie_45;

            func_10(((MR_Box) (Closure_43)), ((MR_Box) (PredProcId_21)), ((MR_Box) (PredInfo0_19)), ((MR_Box) (ProcInfo0_20)), &conv13_ProcInfo_23, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_5)), &conv12_STATE_VARIABLE_ModuleInfo_37_37, ((MR_Box) (Cookie0_44)), &conv11_Cookie_45);
            ProcInfo_23 = ((MR_Word) (conv13_ProcInfo_23));
            STATE_VARIABLE_ModuleInfo_37_37 = ((MR_Word) (conv12_STATE_VARIABLE_ModuleInfo_37_37));
            Cookie_45 = ((MR_Word) (conv11_Cookie_45));
            {
              STATE_VARIABLE_Task_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), STATE_VARIABLE_Task_35_35, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), STATE_VARIABLE_Task_35_35, 1) = ((MR_Box) (Closure_43));
              MR_hl_field(MR_mktag(3), STATE_VARIABLE_Task_35_35, 2) = ((MR_Box) (Cookie_45));
            }
          }
          break;
      }
      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_37_37, HeadVar__1_1, &PredInfo8_26);
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_15, ProcInfo_23, PredInfo8_26, &PredInfo_27);
      hlds__hlds_module__module_info_set_pred_info_4_p_0(HeadVar__1_1, PredInfo_27, STATE_VARIABLE_ModuleInfo_37_37, &STATE_VARIABLE_ModuleInfo_38_38);
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
    MR_Word PredIdInfo0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word PredIdsInfos0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word PredIdInfo_14;
    MR_Word PredIdsInfos_15;
    MR_Word PredId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredIdInfo0_12, (MR_Integer) 0))));
    MR_Word PredInfo0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredIdInfo0_12, (MR_Integer) 1))));
    MR_Word ProcIds_18;

    succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ValidPredIdSet_3, ((MR_Box) (PredId_16)));
    if (succeeded)
    {
      ProcIds_18 = hlds__hlds_pred__pred_info_valid_non_imported_procids_1_f_0(PredInfo0_17);
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
        MR_hl_field(MR_mktag(0), PredIdInfo_14, 0) = ((MR_Box) (PredId_16));
        MR_hl_field(MR_mktag(0), PredIdInfo_14, 1) = ((MR_Box) (PredInfo_21));
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
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredIdInfo_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PredIdsInfos_15));
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
      MR_Integer ProcId_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ProcIds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
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
        MR_hl_field(MR_mktag(0), PredProcId_21, 0) = ((MR_Box) (PredId_3));
        MR_hl_field(MR_mktag(0), PredProcId_21, 1) = ((MR_Box) (ProcId_16));
      }
      switch (MR_tag((MR_Word) Task_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Closure_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Task_2, (MR_Integer) 0))));
            void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Closure_22, (MR_Integer) 1))));
            MR_Box conv2_Proc_23;

            func_1(((MR_Box) (Closure_22)), ((MR_Box) (ModuleInfo_1)), ((MR_Box) (Proc0_20)), &conv2_Proc_23);
            Proc_23 = ((MR_Word) (conv2_Proc_23));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Closure_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Task_2, (MR_Integer) 0))));
            void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Closure_29, (MR_Integer) 1))));
            MR_Box conv4_Proc_23;

            func_3(((MR_Box) (Closure_29)), ((MR_Box) (ModuleInfo_1)), ((MR_Box) (PredProcId_21)), ((MR_Box) (Proc0_20)), &conv4_Proc_23);
            Proc_23 = ((MR_Word) (conv4_Proc_23));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Closure_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Task_2, (MR_Integer) 0))));
            void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Closure_30, (MR_Integer) 1))));
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

  hlds__passes_aux__process_valid_nonimported_pred_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_15, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_17);
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
    MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&hlds__passes_aux_scalar_common_3[2]));
    MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (hlds__passes_aux__process_valid_nonimported_preds_errors_7_p_0_1));
    MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Task_8));
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
