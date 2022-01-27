/*
** Automatically generated from `passes_aux.m'
** by the Mercury compiler,
** version rotd-2016-01-15
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


/* :- module hlds.passes_aux. */
/* :- implementation. */

/*
INIT mercury__hlds__passes_aux__init
ENDINIT
*/

#include "hlds.passes_aux.mih"


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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
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
#include "benchmarking.mih"
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
#include "int.mih"
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
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_module.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s {
  MR_Integer hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNum_5;
  MR_String hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNumStr_6;
  MR_String hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageName_7;
  MR_Word hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStages_8;
  MR_bool hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded;
  jmp_buf hlds__passes_aux__should_dump_stage_4_p_0_env_0__commit_0;
  MR_String hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15;
  MR_Box hlds__passes_aux__should_dump_stage_4_p_0_env_0__conv0_DumpStage_15;
  jmp_buf hlds__passes_aux__should_dump_stage_4_p_0_env_0__commit_1;
  MR_String hlds__passes_aux__should_dump_stage_4_p_0_env_0__From_10;
  MR_Integer hlds__passes_aux__should_dump_stage_4_p_0_env_0__FromInt_11;
  MR_String hlds__passes_aux__should_dump_stage_4_p_0_env_0__V_12_12;
  MR_String hlds__passes_aux__should_dump_stage_4_p_0_env_0__V_17_17;
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

static MR_bool MR_CALL 
hlds__passes_aux____Unify____dump_info_0_0_10001(
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2);

static void MR_CALL 
hlds__passes_aux____Compare____dump_info_0_0_10001(
  MR_Box * hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box hlds__passes_aux__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_cookie_task_0_0_10001(
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2);

static void MR_CALL 
hlds__passes_aux____Compare____module_cookie_task_0_0_10001(
  MR_Box * hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box hlds__passes_aux__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_pred_cookie_task_0_0_10001(
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2);

static void MR_CALL 
hlds__passes_aux____Compare____module_pred_cookie_task_0_0_10001(
  MR_Box * hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box hlds__passes_aux__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_pred_task_0_0_10001(
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2);

static void MR_CALL 
hlds__passes_aux____Compare____module_pred_task_0_0_10001(
  MR_Box * hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box hlds__passes_aux__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_task_0_0_10001(
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2);

static void MR_CALL 
hlds__passes_aux____Compare____module_task_0_0_10001(
  MR_Box * hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box hlds__passes_aux__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__passes_aux____Unify____pred_error_task_0_0_10001(
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2);

static void MR_CALL 
hlds__passes_aux____Compare____pred_error_task_0_0_10001(
  MR_Box * hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box hlds__passes_aux__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_ids_pred_task_0_0_10001(
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2);

static void MR_CALL 
hlds__passes_aux____Compare____proc_ids_pred_task_0_0_10001(
  MR_Box * hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box hlds__passes_aux__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_ids_task_0_0_10001(
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2);

static void MR_CALL 
hlds__passes_aux____Compare____proc_ids_task_0_0_10001(
  MR_Box * hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box hlds__passes_aux__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_task_0_0_10001(
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2);

static void MR_CALL 
hlds__passes_aux____Compare____proc_task_0_0_10001(
  MR_Box * hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box hlds__passes_aux__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__passes_aux____Unify____update_pred_task_0_0_10001(
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2);

static void MR_CALL 
hlds__passes_aux____Compare____update_pred_task_0_0_10001(
  MR_Box * hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box hlds__passes_aux__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__passes_aux____Unify____update_proc_task_0_0_10001(
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2);

static void MR_CALL 
hlds__passes_aux____Compare____update_proc_task_0_0_10001(
  MR_Box * hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box hlds__passes_aux__wrapper_arg_3);

static void MR_CALL 
hlds__passes_aux__dump_hlds_4_p_0(
  MR_String hlds__passes_aux__DumpFile_5,
  MR_Word hlds__passes_aux__HLDS_6);

static void MR_CALL 
hlds__passes_aux__seq_process_nonimported_procs_6_p_0(
  MR_Word hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2,
  MR_Word hlds__passes_aux__STATE_VARIABLE_Task_0_3,
  MR_Word * hlds__passes_aux__STATE_VARIABLE_Task_4,
  MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * hlds__passes_aux__STATE_VARIABLE_ModuleInfo_6);

static void MR_CALL 
hlds__passes_aux__seq_process_nonimported_procs_in_preds_5_p_0(
  MR_Word hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__STATE_VARIABLE_Task_0_2,
  MR_Word * hlds__passes_aux__STATE_VARIABLE_Task_3,
  MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * hlds__passes_aux__STATE_VARIABLE_ModuleInfo_5);

static void MR_CALL 
hlds__passes_aux__par_process_nonimported_procs_6_p_0(
  MR_Word hlds__passes_aux__ModuleInfo_1,
  MR_Word hlds__passes_aux__Task_2,
  MR_Word hlds__passes_aux__PredId_3,
  MR_Word hlds__passes_aux__HeadVar__4_4,
  MR_Word hlds__passes_aux__STATE_VARIABLE_PredInfo_0_5,
  MR_Word * hlds__passes_aux__STATE_VARIABLE_PredInfo_6);

static void MR_CALL 
hlds__passes_aux__par_process_nonimported_procs_in_preds_5_p_0(
  MR_Word hlds__passes_aux__ModuleInfo_1,
  MR_Word hlds__passes_aux__Task_2,
  MR_Word hlds__passes_aux__ValidPredIdSet_3,
  MR_Word hlds__passes_aux__HeadVar__4_4,
  MR_Word * hlds__passes_aux__HeadVar__5_5);

static void MR_CALL 
hlds__passes_aux__process_nonimported_pred_6_p_0(
  MR_Word hlds__passes_aux__Task_7,
  MR_Word hlds__passes_aux__PredId_8,
  MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * hlds__passes_aux__STATE_VARIABLE_ModuleInfo_15,
  MR_Word hlds__passes_aux__STATE_VARIABLE_Specs_0_16,
  MR_Word * hlds__passes_aux__STATE_VARIABLE_Specs_17);

static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_1(
  void * hlds__passes_aux__env_ptr_arg);

static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_3(
  void * hlds__passes_aux__env_ptr_arg);

static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_4(
  void * hlds__passes_aux__env_ptr_arg);

static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_5(
  void * hlds__passes_aux__env_ptr_arg);

static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_6(
  void * hlds__passes_aux__env_ptr_arg);

static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_2(
  void * hlds__passes_aux__env_ptr_arg);

static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_7(
  void * hlds__passes_aux__env_ptr_arg);

static void MR_CALL 
hlds__passes_aux__process_all_nonimported_preds_errors_7_p_0_1(
  MR_Box hlds__passes_aux__closure_arg,
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box * hlds__passes_aux__wrapper_arg_3,
  MR_Box hlds__passes_aux__wrapper_arg_4,
  MR_Box * hlds__passes_aux__wrapper_arg_5);


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
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__passes_aux_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0))
  },
};

static /* final */ const MR_Box hlds__passes_aux_scalar_common_3[3][9] = {
  /* row 0 */
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
  /* row 1 */
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
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__passes_aux__hlds__passes_aux__type_ctor_info_update_pred_task_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__passes_aux__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__passes_aux__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__passes_aux_scalar_common_4[1][10] = {
  /* row 0 */
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
  /* row 0 */
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
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
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
  /* row 0 */
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
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box hlds__passes_aux_scalar_common_9[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__passes_aux__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_dump_info_0_0 = {
  (MR_String) "no_prev_dump",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_dump_info_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0
};

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_dump_info_0_1 = {
  (MR_String) "prev_dumped_hlds",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__passes_aux__hlds__passes_aux__field_types_dump_info_0_1,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_dump_info_0_0[1] = {
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_dump_info_0_0
};

static const MR_DuFunctorDescPtr hlds__passes_aux__hlds__passes_aux__du_stag_ordered_dump_info_0_1[1] = {
  &hlds__passes_aux__hlds__passes_aux__du_functor_desc_dump_info_0_1
};

static const MR_DuPtagLayout hlds__passes_aux__hlds__passes_aux__du_ptag_ordered_dump_info_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__passes_aux__hlds__passes_aux__du_stag_ordered_dump_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__passes_aux__hlds__passes_aux__du_stag_ordered_dump_info_0_1
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
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__passes_aux____Unify____dump_info_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____dump_info_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "dump_info",
  {     hlds__passes_aux__hlds__passes_aux__du_name_ordered_dump_info_0 },
  {     hlds__passes_aux__hlds__passes_aux__du_ptag_ordered_dump_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__passes_aux__hlds__passes_aux__functor_number_map_dump_info_0
};

static const MR_VA_TypeInfo_Struct7 hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0,
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_module_cookie_task_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____module_cookie_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____module_cookie_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "module_cookie_task",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_VA_TypeInfo_Struct8 hlds__passes_aux____vti_pred_8hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0,
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_module_pred_cookie_task_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____module_pred_cookie_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____module_pred_cookie_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "module_pred_cookie_task",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_8hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_VA_TypeInfo_Struct6 hlds__passes_aux____vti_pred_6hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0
  }
};

const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_module_pred_task_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____module_pred_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____module_pred_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "module_pred_task",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_6hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_VA_TypeInfo_Struct5 hlds__passes_aux____vti_pred_5hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0
  }
};

const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_module_task_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____module_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____module_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "module_task",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_5hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__passes_aux__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_VA_TypeInfo_Struct7 hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
    (MR_TypeInfo) &hlds__passes_aux__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
    (MR_TypeInfo) &hlds__passes_aux__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_pred_error_task_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____pred_error_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____pred_error_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "pred_error_task",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_VA_TypeInfo_Struct5 hlds__passes_aux____vti_pred_5hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_proc_ids_pred_task_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____proc_ids_pred_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____proc_ids_pred_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "proc_ids_pred_task",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_5hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_VA_TypeInfo_Struct4 hlds__passes_aux____vti_pred_4hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_proc_ids_task_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____proc_ids_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____proc_ids_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "proc_ids_task",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_4hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_VA_TypeInfo_Struct3 hlds__passes_aux____vti_pred_3hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_proc_task_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____proc_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____proc_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "proc_task",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_3hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_Integer hlds__passes_aux__hlds__passes_aux__functor_number_map_update_pred_task_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc hlds__passes_aux__hlds__passes_aux__notag_functor_desc_update_pred_task_0 = {
  (MR_String) "update_pred_error",
  (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  NULL
};

const MR_TypeCtorInfo_Struct hlds__passes_aux__hlds__passes_aux__type_ctor_info_update_pred_task_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__passes_aux____Unify____update_pred_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____update_pred_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "update_pred_task",
  {     &hlds__passes_aux__hlds__passes_aux__notag_functor_desc_update_pred_task_0 },
  {     &hlds__passes_aux__hlds__passes_aux__notag_functor_desc_update_pred_task_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__passes_aux__hlds__passes_aux__functor_number_map_update_pred_task_0
};

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_3hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0
};

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_0 = {
  (MR_String) "update_proc",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_4hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0
};

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_1 = {
  (MR_String) "update_proc_ids",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_1,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_2[1] = {
  (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_5hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0
};

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_2 = {
  (MR_String) "update_proc_ids_pred",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_2,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_3[1] = {
  (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_5hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0
};

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_3 = {
  (MR_String) "update_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_3,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_4[1] = {
  (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_6hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0
};

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_4 = {
  (MR_String) "update_module_pred",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_4,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_5[2] = {
  (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_7hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0,
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
};

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_5 = {
  (MR_String) "update_module_cookie",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_5,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_6[2] = {
  (MR_PseudoTypeInfo) &hlds__passes_aux____vti_pred_8hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0,
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
};

static const MR_DuFunctorDesc hlds__passes_aux__hlds__passes_aux__du_functor_desc_update_proc_task_0_6 = {
  (MR_String) "update_module_pred_cookie",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  hlds__passes_aux__hlds__passes_aux__field_types_update_proc_task_0_6,
  NULL,
  NULL,
  NULL
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
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_2
  },
  {
    (MR_Integer) 4,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    hlds__passes_aux__hlds__passes_aux__du_stag_ordered_update_proc_task_0_3
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
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__passes_aux____Unify____update_proc_task_0_0_10001)),
  ((MR_Box) (hlds__passes_aux____Compare____update_proc_task_0_0_10001)),
  (MR_String) "hlds.passes_aux",
  (MR_String) "update_proc_task",
  {     hlds__passes_aux__hlds__passes_aux__du_name_ordered_update_proc_task_0 },
  {     hlds__passes_aux__hlds__passes_aux__du_ptag_ordered_update_proc_task_0 },
  (MR_Integer) 7,
  (MR_Integer) 4,
  hlds__passes_aux__hlds__passes_aux__functor_number_map_update_proc_task_0
};

static MR_bool MR_CALL 
hlds__passes_aux____Unify____dump_info_0_0_10001(
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2)
{
  {
    MR_bool hlds__passes_aux__succeeded;

    {
      hlds__passes_aux__succeeded = hlds__passes_aux____Unify____dump_info_0_0(((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2));
    }
    return hlds__passes_aux__succeeded;
  }
}

static void MR_CALL 
hlds__passes_aux____Compare____dump_info_0_0_10001(
  MR_Box * hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box hlds__passes_aux__wrapper_arg_3)
{
  {
    MR_Word hlds__passes_aux__conv0_HeadVar__1_1;

    {
      hlds__passes_aux____Compare____dump_info_0_0(&hlds__passes_aux__conv0_HeadVar__1_1, ((MR_Word) hlds__passes_aux__wrapper_arg_2), ((MR_Word) hlds__passes_aux__wrapper_arg_3));
    }
    *hlds__passes_aux__wrapper_arg_1 = ((MR_Box) (hlds__passes_aux__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_cookie_task_0_0_10001(
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2)
{
  {
    MR_bool hlds__passes_aux__succeeded;

    {
      hlds__passes_aux__succeeded = hlds__passes_aux____Unify____module_cookie_task_0_0(((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2));
    }
    return hlds__passes_aux__succeeded;
  }
}

static void MR_CALL 
hlds__passes_aux____Compare____module_cookie_task_0_0_10001(
  MR_Box * hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box hlds__passes_aux__wrapper_arg_3)
{
  {
    MR_Word hlds__passes_aux__conv0_HeadVar__1_1;

    {
      hlds__passes_aux____Compare____module_cookie_task_0_0(&hlds__passes_aux__conv0_HeadVar__1_1, ((MR_Word) hlds__passes_aux__wrapper_arg_2), ((MR_Word) hlds__passes_aux__wrapper_arg_3));
    }
    *hlds__passes_aux__wrapper_arg_1 = ((MR_Box) (hlds__passes_aux__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_pred_cookie_task_0_0_10001(
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2)
{
  {
    MR_bool hlds__passes_aux__succeeded;

    {
      hlds__passes_aux__succeeded = hlds__passes_aux____Unify____module_pred_cookie_task_0_0(((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2));
    }
    return hlds__passes_aux__succeeded;
  }
}

static void MR_CALL 
hlds__passes_aux____Compare____module_pred_cookie_task_0_0_10001(
  MR_Box * hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box hlds__passes_aux__wrapper_arg_3)
{
  {
    MR_Word hlds__passes_aux__conv0_HeadVar__1_1;

    {
      hlds__passes_aux____Compare____module_pred_cookie_task_0_0(&hlds__passes_aux__conv0_HeadVar__1_1, ((MR_Word) hlds__passes_aux__wrapper_arg_2), ((MR_Word) hlds__passes_aux__wrapper_arg_3));
    }
    *hlds__passes_aux__wrapper_arg_1 = ((MR_Box) (hlds__passes_aux__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_pred_task_0_0_10001(
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2)
{
  {
    MR_bool hlds__passes_aux__succeeded;

    {
      hlds__passes_aux__succeeded = hlds__passes_aux____Unify____module_pred_task_0_0(((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2));
    }
    return hlds__passes_aux__succeeded;
  }
}

static void MR_CALL 
hlds__passes_aux____Compare____module_pred_task_0_0_10001(
  MR_Box * hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box hlds__passes_aux__wrapper_arg_3)
{
  {
    MR_Word hlds__passes_aux__conv0_HeadVar__1_1;

    {
      hlds__passes_aux____Compare____module_pred_task_0_0(&hlds__passes_aux__conv0_HeadVar__1_1, ((MR_Word) hlds__passes_aux__wrapper_arg_2), ((MR_Word) hlds__passes_aux__wrapper_arg_3));
    }
    *hlds__passes_aux__wrapper_arg_1 = ((MR_Box) (hlds__passes_aux__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__passes_aux____Unify____module_task_0_0_10001(
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2)
{
  {
    MR_bool hlds__passes_aux__succeeded;

    {
      hlds__passes_aux__succeeded = hlds__passes_aux____Unify____module_task_0_0(((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2));
    }
    return hlds__passes_aux__succeeded;
  }
}

static void MR_CALL 
hlds__passes_aux____Compare____module_task_0_0_10001(
  MR_Box * hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box hlds__passes_aux__wrapper_arg_3)
{
  {
    MR_Word hlds__passes_aux__conv0_HeadVar__1_1;

    {
      hlds__passes_aux____Compare____module_task_0_0(&hlds__passes_aux__conv0_HeadVar__1_1, ((MR_Word) hlds__passes_aux__wrapper_arg_2), ((MR_Word) hlds__passes_aux__wrapper_arg_3));
    }
    *hlds__passes_aux__wrapper_arg_1 = ((MR_Box) (hlds__passes_aux__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__passes_aux____Unify____pred_error_task_0_0_10001(
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2)
{
  {
    MR_bool hlds__passes_aux__succeeded;

    {
      hlds__passes_aux__succeeded = hlds__passes_aux____Unify____pred_error_task_0_0(((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2));
    }
    return hlds__passes_aux__succeeded;
  }
}

static void MR_CALL 
hlds__passes_aux____Compare____pred_error_task_0_0_10001(
  MR_Box * hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box hlds__passes_aux__wrapper_arg_3)
{
  {
    MR_Word hlds__passes_aux__conv0_HeadVar__1_1;

    {
      hlds__passes_aux____Compare____pred_error_task_0_0(&hlds__passes_aux__conv0_HeadVar__1_1, ((MR_Word) hlds__passes_aux__wrapper_arg_2), ((MR_Word) hlds__passes_aux__wrapper_arg_3));
    }
    *hlds__passes_aux__wrapper_arg_1 = ((MR_Box) (hlds__passes_aux__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_ids_pred_task_0_0_10001(
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2)
{
  {
    MR_bool hlds__passes_aux__succeeded;

    {
      hlds__passes_aux__succeeded = hlds__passes_aux____Unify____proc_ids_pred_task_0_0(((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2));
    }
    return hlds__passes_aux__succeeded;
  }
}

static void MR_CALL 
hlds__passes_aux____Compare____proc_ids_pred_task_0_0_10001(
  MR_Box * hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box hlds__passes_aux__wrapper_arg_3)
{
  {
    MR_Word hlds__passes_aux__conv0_HeadVar__1_1;

    {
      hlds__passes_aux____Compare____proc_ids_pred_task_0_0(&hlds__passes_aux__conv0_HeadVar__1_1, ((MR_Word) hlds__passes_aux__wrapper_arg_2), ((MR_Word) hlds__passes_aux__wrapper_arg_3));
    }
    *hlds__passes_aux__wrapper_arg_1 = ((MR_Box) (hlds__passes_aux__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_ids_task_0_0_10001(
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2)
{
  {
    MR_bool hlds__passes_aux__succeeded;

    {
      hlds__passes_aux__succeeded = hlds__passes_aux____Unify____proc_ids_task_0_0(((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2));
    }
    return hlds__passes_aux__succeeded;
  }
}

static void MR_CALL 
hlds__passes_aux____Compare____proc_ids_task_0_0_10001(
  MR_Box * hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box hlds__passes_aux__wrapper_arg_3)
{
  {
    MR_Word hlds__passes_aux__conv0_HeadVar__1_1;

    {
      hlds__passes_aux____Compare____proc_ids_task_0_0(&hlds__passes_aux__conv0_HeadVar__1_1, ((MR_Word) hlds__passes_aux__wrapper_arg_2), ((MR_Word) hlds__passes_aux__wrapper_arg_3));
    }
    *hlds__passes_aux__wrapper_arg_1 = ((MR_Box) (hlds__passes_aux__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_task_0_0_10001(
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2)
{
  {
    MR_bool hlds__passes_aux__succeeded;

    {
      hlds__passes_aux__succeeded = hlds__passes_aux____Unify____proc_task_0_0(((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2));
    }
    return hlds__passes_aux__succeeded;
  }
}

static void MR_CALL 
hlds__passes_aux____Compare____proc_task_0_0_10001(
  MR_Box * hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box hlds__passes_aux__wrapper_arg_3)
{
  {
    MR_Word hlds__passes_aux__conv0_HeadVar__1_1;

    {
      hlds__passes_aux____Compare____proc_task_0_0(&hlds__passes_aux__conv0_HeadVar__1_1, ((MR_Word) hlds__passes_aux__wrapper_arg_2), ((MR_Word) hlds__passes_aux__wrapper_arg_3));
    }
    *hlds__passes_aux__wrapper_arg_1 = ((MR_Box) (hlds__passes_aux__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__passes_aux____Unify____update_pred_task_0_0_10001(
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2)
{
  {
    MR_bool hlds__passes_aux__succeeded;

    {
      hlds__passes_aux__succeeded = hlds__passes_aux____Unify____update_pred_task_0_0(((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2));
    }
    return hlds__passes_aux__succeeded;
  }
}

static void MR_CALL 
hlds__passes_aux____Compare____update_pred_task_0_0_10001(
  MR_Box * hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box hlds__passes_aux__wrapper_arg_3)
{
  {
    MR_Word hlds__passes_aux__conv0_HeadVar__1_1;

    {
      hlds__passes_aux____Compare____update_pred_task_0_0(&hlds__passes_aux__conv0_HeadVar__1_1, ((MR_Word) hlds__passes_aux__wrapper_arg_2), ((MR_Word) hlds__passes_aux__wrapper_arg_3));
    }
    *hlds__passes_aux__wrapper_arg_1 = ((MR_Box) (hlds__passes_aux__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__passes_aux____Unify____update_proc_task_0_0_10001(
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2)
{
  {
    MR_bool hlds__passes_aux__succeeded;

    {
      hlds__passes_aux__succeeded = hlds__passes_aux____Unify____update_proc_task_0_0(((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2));
    }
    return hlds__passes_aux__succeeded;
  }
}

static void MR_CALL 
hlds__passes_aux____Compare____update_proc_task_0_0_10001(
  MR_Box * hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box hlds__passes_aux__wrapper_arg_3)
{
  {
    MR_Word hlds__passes_aux__conv0_HeadVar__1_1;

    {
      hlds__passes_aux____Compare____update_proc_task_0_0(&hlds__passes_aux__conv0_HeadVar__1_1, ((MR_Word) hlds__passes_aux__wrapper_arg_2), ((MR_Word) hlds__passes_aux__wrapper_arg_3));
    }
    *hlds__passes_aux__wrapper_arg_1 = ((MR_Box) (hlds__passes_aux__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
hlds__passes_aux____Compare____update_proc_task_0_0(
  MR_Word * hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2,
  MR_Word hlds__passes_aux__HeadVar__3_3)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Integer hlds__passes_aux__CastX_132 = (MR_Integer) hlds__passes_aux__HeadVar__2_2;
    MR_Integer hlds__passes_aux__CastY_133 = (MR_Integer) hlds__passes_aux__HeadVar__3_3;

    hlds__passes_aux__succeeded = (hlds__passes_aux__CastX_132 == hlds__passes_aux__CastY_133);
    if (hlds__passes_aux__succeeded)
      *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) hlds__passes_aux__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word hlds__passes_aux__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__passes_aux__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__passes_aux__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_8[0], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__V_149_149)), ((MR_Box) (hlds__passes_aux__V_5_5)));
                  }
                }
                break;
              case (MR_Integer) 1:
                *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__passes_aux__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__passes_aux__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__passes_aux__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_7[0], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__V_150_150)), ((MR_Box) (hlds__passes_aux__V_23_23)));
                  }
                }
                break;
              case (MR_Integer) 2:
                *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word hlds__passes_aux__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__passes_aux__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__passes_aux__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_6[1], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__V_151_151)), ((MR_Box) (hlds__passes_aux__V_41_41)));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word hlds__passes_aux__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) hlds__passes_aux__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word hlds__passes_aux__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_6[0], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__V_143_143)), ((MR_Box) (hlds__passes_aux__V_59_59)));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word hlds__passes_aux__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) hlds__passes_aux__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word hlds__passes_aux__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_5[0], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__V_146_146)), ((MR_Box) (hlds__passes_aux__V_77_77)));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__passes_aux__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 2)));
                MR_Word hlds__passes_aux__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) hlds__passes_aux__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word hlds__passes_aux__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word hlds__passes_aux__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word hlds__passes_aux__V_103_103;

                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_3[0], &hlds__passes_aux__V_103_103, ((MR_Box) (hlds__passes_aux__V_145_145)), ((MR_Box) (hlds__passes_aux__V_101_101)));
                          }
                          hlds__passes_aux__succeeded = (hlds__passes_aux__V_103_103 == (MR_Integer) 0);
                          hlds__passes_aux__succeeded = !(hlds__passes_aux__succeeded);
                          if (hlds__passes_aux__succeeded)
                            *hlds__passes_aux__HeadVar__1_1 = hlds__passes_aux__V_103_103;
                          else
                            {
                              mercury__univ____Compare____univ_0_0(hlds__passes_aux__HeadVar__1_1, hlds__passes_aux__V_144_144, hlds__passes_aux__V_102_102);
                            }
                        }
                        break;
                      case (MR_Integer) 3:
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word hlds__passes_aux__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 2)));
                MR_Word hlds__passes_aux__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) hlds__passes_aux__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word hlds__passes_aux__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word hlds__passes_aux__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word hlds__passes_aux__V_131_131;

                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_4[0], &hlds__passes_aux__V_131_131, ((MR_Box) (hlds__passes_aux__V_148_148)), ((MR_Box) (hlds__passes_aux__V_129_129)));
                          }
                          hlds__passes_aux__succeeded = (hlds__passes_aux__V_131_131 == (MR_Integer) 0);
                          hlds__passes_aux__succeeded = !(hlds__passes_aux__succeeded);
                          if (hlds__passes_aux__succeeded)
                            *hlds__passes_aux__HeadVar__1_1 = hlds__passes_aux__V_131_131;
                          else
                            {
                              mercury__univ____Compare____univ_0_0(hlds__passes_aux__HeadVar__1_1, hlds__passes_aux__V_147_147, hlds__passes_aux__V_130_130);
                            }
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
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____update_proc_task_0_0(
  MR_Word hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Integer hlds__passes_aux__CastX_21 = (MR_Integer) hlds__passes_aux__HeadVar__1_1;
    MR_Integer hlds__passes_aux__CastY_22 = (MR_Integer) hlds__passes_aux__HeadVar__2_2;

    hlds__passes_aux__succeeded = (hlds__passes_aux__CastX_21 == hlds__passes_aux__CastY_22);
    if (hlds__passes_aux__succeeded)
      hlds__passes_aux__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) hlds__passes_aux__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word hlds__passes_aux__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__passes_aux__V_4_4;

            hlds__passes_aux__succeeded = ((MR_tag((MR_Word) hlds__passes_aux__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (hlds__passes_aux__succeeded)
              {
                hlds__passes_aux__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)));
                {
                  hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__V_3_3, (MR_Word) hlds__passes_aux__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__passes_aux__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__passes_aux__V_6_6;

            hlds__passes_aux__succeeded = ((MR_tag((MR_Word) hlds__passes_aux__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__passes_aux__succeeded)
              {
                hlds__passes_aux__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)));
                {
                  hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__V_5_5, (MR_Word) hlds__passes_aux__V_6_6);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word hlds__passes_aux__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__passes_aux__V_8_8;

            hlds__passes_aux__succeeded = ((MR_tag((MR_Word) hlds__passes_aux__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (hlds__passes_aux__succeeded)
              {
                hlds__passes_aux__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)));
                {
                  hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__V_7_7, (MR_Word) hlds__passes_aux__V_8_8);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word hlds__passes_aux__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word hlds__passes_aux__V_10_10;

                hlds__passes_aux__succeeded = ((((MR_tag((MR_Word) hlds__passes_aux__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (hlds__passes_aux__succeeded)
                  {
                    hlds__passes_aux__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__V_9_9, (MR_Word) hlds__passes_aux__V_10_10);
                    }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word hlds__passes_aux__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word hlds__passes_aux__V_12_12;

                hlds__passes_aux__succeeded = ((((MR_tag((MR_Word) hlds__passes_aux__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (hlds__passes_aux__succeeded)
                  {
                    hlds__passes_aux__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__V_11_11, (MR_Word) hlds__passes_aux__V_12_12);
                    }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__passes_aux__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word hlds__passes_aux__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word hlds__passes_aux__V_15_15;
                MR_Word hlds__passes_aux__V_16_16;

                hlds__passes_aux__succeeded = ((((MR_tag((MR_Word) hlds__passes_aux__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (hlds__passes_aux__succeeded)
                  {
                    hlds__passes_aux__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));
                    hlds__passes_aux__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 2)));
                    {
                      hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__V_13_13, (MR_Word) hlds__passes_aux__V_15_15);
                    }
                    if (hlds__passes_aux__succeeded)
                      {
                        hlds__passes_aux__succeeded = mercury__univ____Unify____univ_0_0(hlds__passes_aux__V_14_14, hlds__passes_aux__V_16_16);
                      }
                  }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word hlds__passes_aux__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word hlds__passes_aux__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word hlds__passes_aux__V_19_19;
                MR_Word hlds__passes_aux__V_20_20;

                hlds__passes_aux__succeeded = ((((MR_tag((MR_Word) hlds__passes_aux__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (hlds__passes_aux__succeeded)
                  {
                    hlds__passes_aux__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));
                    hlds__passes_aux__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 2)));
                    {
                      hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__V_17_17, (MR_Word) hlds__passes_aux__V_19_19);
                    }
                    if (hlds__passes_aux__succeeded)
                      {
                        hlds__passes_aux__succeeded = mercury__univ____Unify____univ_0_0(hlds__passes_aux__V_18_18, hlds__passes_aux__V_20_20);
                      }
                  }
              }
              break;
          }
          break;
      }
    return hlds__passes_aux__succeeded;
  }
}

void MR_CALL 
hlds__passes_aux____Compare____update_pred_task_0_0(
  MR_Word * hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2,
  MR_Word hlds__passes_aux__HeadVar__3_3)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Integer hlds__passes_aux__CastX_6 = (MR_Integer) hlds__passes_aux__HeadVar__2_2;
    MR_Integer hlds__passes_aux__CastY_7 = (MR_Integer) hlds__passes_aux__HeadVar__3_3;

    hlds__passes_aux__succeeded = (hlds__passes_aux__CastX_6 == hlds__passes_aux__CastY_7);
    if (hlds__passes_aux__succeeded)
      *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__passes_aux__V_4_4 = (MR_Word) hlds__passes_aux__HeadVar__2_2;
        MR_Word hlds__passes_aux__V_5_5 = (MR_Word) hlds__passes_aux__HeadVar__3_3;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_3[1], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__V_4_4)), ((MR_Box) (hlds__passes_aux__V_5_5)));
        }
      }
  }
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____update_pred_task_0_0(
  MR_Word hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Integer hlds__passes_aux__CastX_5 = (MR_Integer) hlds__passes_aux__HeadVar__1_1;
    MR_Integer hlds__passes_aux__CastY_6 = (MR_Integer) hlds__passes_aux__HeadVar__2_2;

    hlds__passes_aux__succeeded = (hlds__passes_aux__CastX_5 == hlds__passes_aux__CastY_6);
    if (hlds__passes_aux__succeeded)
      hlds__passes_aux__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__passes_aux__V_3_3 = (MR_Word) hlds__passes_aux__HeadVar__1_1;
        MR_Word hlds__passes_aux__V_4_4 = (MR_Word) hlds__passes_aux__HeadVar__2_2;

        {
          hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__V_3_3, (MR_Word) hlds__passes_aux__V_4_4);
        }
      }
    return hlds__passes_aux__succeeded;
  }
}

void MR_CALL 
hlds__passes_aux____Compare____proc_task_0_0(
  MR_Word * hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2,
  MR_Word hlds__passes_aux__HeadVar__3_3)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__Cast_HeadVar1_4 = hlds__passes_aux__HeadVar__2_2;
    MR_Word hlds__passes_aux__Cast_HeadVar2_5 = hlds__passes_aux__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_8[0], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__Cast_HeadVar1_4)), ((MR_Box) (hlds__passes_aux__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_task_0_0(
  MR_Word hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__Cast_HeadVar1_3 = hlds__passes_aux__HeadVar__1_1;
    MR_Word hlds__passes_aux__Cast_HeadVar2_4 = hlds__passes_aux__HeadVar__2_2;

    {
      hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__Cast_HeadVar1_3, (MR_Word) hlds__passes_aux__Cast_HeadVar2_4);
    }
    return hlds__passes_aux__succeeded;
  }
}

void MR_CALL 
hlds__passes_aux____Compare____proc_ids_task_0_0(
  MR_Word * hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2,
  MR_Word hlds__passes_aux__HeadVar__3_3)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__Cast_HeadVar1_4 = hlds__passes_aux__HeadVar__2_2;
    MR_Word hlds__passes_aux__Cast_HeadVar2_5 = hlds__passes_aux__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_7[0], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__Cast_HeadVar1_4)), ((MR_Box) (hlds__passes_aux__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_ids_task_0_0(
  MR_Word hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__Cast_HeadVar1_3 = hlds__passes_aux__HeadVar__1_1;
    MR_Word hlds__passes_aux__Cast_HeadVar2_4 = hlds__passes_aux__HeadVar__2_2;

    {
      hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__Cast_HeadVar1_3, (MR_Word) hlds__passes_aux__Cast_HeadVar2_4);
    }
    return hlds__passes_aux__succeeded;
  }
}

void MR_CALL 
hlds__passes_aux____Compare____proc_ids_pred_task_0_0(
  MR_Word * hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2,
  MR_Word hlds__passes_aux__HeadVar__3_3)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__Cast_HeadVar1_4 = hlds__passes_aux__HeadVar__2_2;
    MR_Word hlds__passes_aux__Cast_HeadVar2_5 = hlds__passes_aux__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_6[1], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__Cast_HeadVar1_4)), ((MR_Box) (hlds__passes_aux__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____proc_ids_pred_task_0_0(
  MR_Word hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__Cast_HeadVar1_3 = hlds__passes_aux__HeadVar__1_1;
    MR_Word hlds__passes_aux__Cast_HeadVar2_4 = hlds__passes_aux__HeadVar__2_2;

    {
      hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__Cast_HeadVar1_3, (MR_Word) hlds__passes_aux__Cast_HeadVar2_4);
    }
    return hlds__passes_aux__succeeded;
  }
}

void MR_CALL 
hlds__passes_aux____Compare____pred_error_task_0_0(
  MR_Word * hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2,
  MR_Word hlds__passes_aux__HeadVar__3_3)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__Cast_HeadVar1_4 = hlds__passes_aux__HeadVar__2_2;
    MR_Word hlds__passes_aux__Cast_HeadVar2_5 = hlds__passes_aux__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_3[1], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__Cast_HeadVar1_4)), ((MR_Box) (hlds__passes_aux__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____pred_error_task_0_0(
  MR_Word hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__Cast_HeadVar1_3 = hlds__passes_aux__HeadVar__1_1;
    MR_Word hlds__passes_aux__Cast_HeadVar2_4 = hlds__passes_aux__HeadVar__2_2;

    {
      hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__Cast_HeadVar1_3, (MR_Word) hlds__passes_aux__Cast_HeadVar2_4);
    }
    return hlds__passes_aux__succeeded;
  }
}

void MR_CALL 
hlds__passes_aux____Compare____module_task_0_0(
  MR_Word * hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2,
  MR_Word hlds__passes_aux__HeadVar__3_3)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__Cast_HeadVar1_4 = hlds__passes_aux__HeadVar__2_2;
    MR_Word hlds__passes_aux__Cast_HeadVar2_5 = hlds__passes_aux__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_6[0], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__Cast_HeadVar1_4)), ((MR_Box) (hlds__passes_aux__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____module_task_0_0(
  MR_Word hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__Cast_HeadVar1_3 = hlds__passes_aux__HeadVar__1_1;
    MR_Word hlds__passes_aux__Cast_HeadVar2_4 = hlds__passes_aux__HeadVar__2_2;

    {
      hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__Cast_HeadVar1_3, (MR_Word) hlds__passes_aux__Cast_HeadVar2_4);
    }
    return hlds__passes_aux__succeeded;
  }
}

void MR_CALL 
hlds__passes_aux____Compare____module_pred_task_0_0(
  MR_Word * hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2,
  MR_Word hlds__passes_aux__HeadVar__3_3)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__Cast_HeadVar1_4 = hlds__passes_aux__HeadVar__2_2;
    MR_Word hlds__passes_aux__Cast_HeadVar2_5 = hlds__passes_aux__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_5[0], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__Cast_HeadVar1_4)), ((MR_Box) (hlds__passes_aux__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____module_pred_task_0_0(
  MR_Word hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__Cast_HeadVar1_3 = hlds__passes_aux__HeadVar__1_1;
    MR_Word hlds__passes_aux__Cast_HeadVar2_4 = hlds__passes_aux__HeadVar__2_2;

    {
      hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__Cast_HeadVar1_3, (MR_Word) hlds__passes_aux__Cast_HeadVar2_4);
    }
    return hlds__passes_aux__succeeded;
  }
}

void MR_CALL 
hlds__passes_aux____Compare____module_pred_cookie_task_0_0(
  MR_Word * hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2,
  MR_Word hlds__passes_aux__HeadVar__3_3)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__Cast_HeadVar1_4 = hlds__passes_aux__HeadVar__2_2;
    MR_Word hlds__passes_aux__Cast_HeadVar2_5 = hlds__passes_aux__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_4[0], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__Cast_HeadVar1_4)), ((MR_Box) (hlds__passes_aux__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____module_pred_cookie_task_0_0(
  MR_Word hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__Cast_HeadVar1_3 = hlds__passes_aux__HeadVar__1_1;
    MR_Word hlds__passes_aux__Cast_HeadVar2_4 = hlds__passes_aux__HeadVar__2_2;

    {
      hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__Cast_HeadVar1_3, (MR_Word) hlds__passes_aux__Cast_HeadVar2_4);
    }
    return hlds__passes_aux__succeeded;
  }
}

void MR_CALL 
hlds__passes_aux____Compare____module_cookie_task_0_0(
  MR_Word * hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2,
  MR_Word hlds__passes_aux__HeadVar__3_3)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__Cast_HeadVar1_4 = hlds__passes_aux__HeadVar__2_2;
    MR_Word hlds__passes_aux__Cast_HeadVar2_5 = hlds__passes_aux__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__passes_aux_scalar_common_3[0], hlds__passes_aux__HeadVar__1_1, ((MR_Box) (hlds__passes_aux__Cast_HeadVar1_4)), ((MR_Box) (hlds__passes_aux__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____module_cookie_task_0_0(
  MR_Word hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__Cast_HeadVar1_3 = hlds__passes_aux__HeadVar__1_1;
    MR_Word hlds__passes_aux__Cast_HeadVar2_4 = hlds__passes_aux__HeadVar__2_2;

    {
      hlds__passes_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__passes_aux__Cast_HeadVar1_3, (MR_Word) hlds__passes_aux__Cast_HeadVar2_4);
    }
    return hlds__passes_aux__succeeded;
  }
}

void MR_CALL 
hlds__passes_aux____Compare____dump_info_0_0(
  MR_Word * hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2,
  MR_Word hlds__passes_aux__HeadVar__3_3)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Integer hlds__passes_aux__CastX_13 = (MR_Integer) hlds__passes_aux__HeadVar__2_2;
    MR_Integer hlds__passes_aux__CastY_14 = (MR_Integer) hlds__passes_aux__HeadVar__3_3;

    hlds__passes_aux__succeeded = (hlds__passes_aux__CastX_13 == hlds__passes_aux__CastY_14);
    if (hlds__passes_aux__succeeded)
      *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((hlds__passes_aux__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((hlds__passes_aux__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 0;
      else
        *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word hlds__passes_aux__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));
        MR_String hlds__passes_aux__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)));

        if ((hlds__passes_aux__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__passes_aux__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_String hlds__passes_aux__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word hlds__passes_aux__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word hlds__passes_aux__V_12_12;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__passes_aux__V_12_12, hlds__passes_aux__V_18_18, hlds__passes_aux__V_10_10);
            }
            hlds__passes_aux__succeeded = (hlds__passes_aux__V_12_12 == (MR_Integer) 0);
            hlds__passes_aux__succeeded = !(hlds__passes_aux__succeeded);
            if (hlds__passes_aux__succeeded)
              *hlds__passes_aux__HeadVar__1_1 = hlds__passes_aux__V_12_12;
            else
              {
                hlds__hlds_module____Compare____module_info_0_0(hlds__passes_aux__HeadVar__1_1, hlds__passes_aux__V_17_17, hlds__passes_aux__V_11_11);
              }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__passes_aux____Unify____dump_info_0_0(
  MR_Word hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Integer hlds__passes_aux__CastX_9 = (MR_Integer) hlds__passes_aux__HeadVar__1_1;
    MR_Integer hlds__passes_aux__CastY_10 = (MR_Integer) hlds__passes_aux__HeadVar__2_2;

    hlds__passes_aux__succeeded = (hlds__passes_aux__CastX_9 == hlds__passes_aux__CastY_10);
    if (hlds__passes_aux__succeeded)
      hlds__passes_aux__succeeded = MR_TRUE;
    else
    if ((hlds__passes_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer hlds__passes_aux__CastX_3 = (MR_Integer) hlds__passes_aux__HeadVar__1_1;
        MR_Integer hlds__passes_aux__CastY_4 = (MR_Integer) hlds__passes_aux__HeadVar__2_2;

        hlds__passes_aux__succeeded = (hlds__passes_aux__CastY_4 == hlds__passes_aux__CastX_3);
      }
    else
      {
        MR_String hlds__passes_aux__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__passes_aux__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 1)));
        MR_String hlds__passes_aux__V_7_7;
        MR_Word hlds__passes_aux__V_8_8;

        hlds__passes_aux__succeeded = ((MR_tag((MR_Word) hlds__passes_aux__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__passes_aux__succeeded)
          {
            hlds__passes_aux__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)));
            hlds__passes_aux__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));
            hlds__passes_aux__succeeded = (strcmp(hlds__passes_aux__V_5_5, hlds__passes_aux__V_7_7) == 0);
            if (hlds__passes_aux__succeeded)
              {
                hlds__passes_aux__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__passes_aux__V_6_6, hlds__passes_aux__V_8_8);
              }
          }
      }
    return hlds__passes_aux__succeeded;
  }
}

static void MR_CALL 
hlds__passes_aux__dump_hlds_4_p_0(
  MR_String hlds__passes_aux__DumpFile_5,
  MR_Word hlds__passes_aux__HLDS_6)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__Globals_8;
    MR_Word hlds__passes_aux__Verbose_9;
    MR_Word hlds__passes_aux__Stats_10;
    MR_Word hlds__passes_aux__Res_11;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__passes_aux__HLDS_6, &hlds__passes_aux__Globals_8);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(hlds__passes_aux__Globals_8, (MR_Integer) 47, &hlds__passes_aux__Verbose_9);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(hlds__passes_aux__Globals_8, (MR_Integer) 57, &hlds__passes_aux__Stats_10);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_9, (MR_String) "% Dumping out HLDS to \140");
    }
    {
      libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_9, hlds__passes_aux__DumpFile_5);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_9, (MR_String) "\'...");
    }
    {
      libs__file_util__maybe_flush_output_3_p_0(hlds__passes_aux__Verbose_9);
    }
    {
      mercury__io__open_output_4_p_0(hlds__passes_aux__DumpFile_5, &hlds__passes_aux__Res_11);
    }
    if (((MR_tag((MR_Word) hlds__passes_aux__Res_11)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__passes_aux__IOError_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__Res_11, (MR_Integer) 0)));
        MR_String hlds__passes_aux__Msg_16;
        MR_String hlds__passes_aux__V_31_31;
        MR_String hlds__passes_aux__V_32_32;
        MR_String hlds__passes_aux__V_34_34;

        {
          libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_9, (MR_String) "\n");
        }
        {
          hlds__passes_aux__V_34_34 = mercury__io__error_message_1_f_0(hlds__passes_aux__IOError_15);
        }
        {
          hlds__passes_aux__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", hlds__passes_aux__V_34_34);
        }
        {
          hlds__passes_aux__V_31_31 = mercury__string__f_43_43_2_f_0(hlds__passes_aux__DumpFile_5, hlds__passes_aux__V_32_32);
        }
        {
          hlds__passes_aux__Msg_16 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open file \140", hlds__passes_aux__V_31_31);
        }
        {
          libs__file_util__report_error_3_p_0(hlds__passes_aux__Msg_16);
        }
      }
    else
      {
        MR_Word hlds__passes_aux__FileStream_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__passes_aux__Res_11, (MR_Integer) 0)));
        MR_Word hlds__passes_aux__OutputStream_13;
        MR_Word hlds__passes_aux__V_14_14;

        {
          mercury__io__set_output_stream_4_p_0(hlds__passes_aux__FileStream_12, &hlds__passes_aux__OutputStream_13);
        }
        {
          hlds__hlds_out__hlds_out_module__write_hlds_4_p_0((MR_Integer) 0, hlds__passes_aux__HLDS_6);
        }
        {
          mercury__io__set_output_stream_4_p_0(hlds__passes_aux__OutputStream_13, &hlds__passes_aux__V_14_14);
        }
        {
          mercury__io__close_output_3_p_0(hlds__passes_aux__FileStream_12);
        }
        {
          libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_9, (MR_String) " done.\n");
        }
        {
          libs__file_util__maybe_report_stats_3_p_0(hlds__passes_aux__Stats_10);
        }
      }
  }
}

static void MR_CALL 
hlds__passes_aux__seq_process_nonimported_procs_6_p_0(
  MR_Word hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__HeadVar__2_2,
  MR_Word hlds__passes_aux__STATE_VARIABLE_Task_0_3,
  MR_Word * hlds__passes_aux__STATE_VARIABLE_Task_4,
  MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * hlds__passes_aux__STATE_VARIABLE_ModuleInfo_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__passes_aux__succeeded;

        if ((hlds__passes_aux__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__passes_aux__STATE_VARIABLE_ModuleInfo_6 = hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_5;
            *hlds__passes_aux__STATE_VARIABLE_Task_4 = hlds__passes_aux__STATE_VARIABLE_Task_0_3;
          }
        else
          {
            MR_Word hlds__passes_aux__TypeCtorInfo_52_52;
            MR_Word hlds__passes_aux__TypeCtorInfo_53_53;
            MR_Word hlds__passes_aux__TypeCtorInfo_55_55;
            MR_Integer hlds__passes_aux__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__passes_aux__ProcIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__passes_aux__Preds0_19;
            MR_Word hlds__passes_aux__Pred0_20;
            MR_Word hlds__passes_aux__Procs0_21;
            MR_Word hlds__passes_aux__Proc0_22;
            MR_Word hlds__passes_aux__PredProcId_23;
            MR_Word hlds__passes_aux__Proc_25;
            MR_Word hlds__passes_aux__Preds8_28;
            MR_Word hlds__passes_aux__Pred8_29;
            MR_Word hlds__passes_aux__Procs8_30;
            MR_Word hlds__passes_aux__Procs_31;
            MR_Word hlds__passes_aux__Pred_32;
            MR_Word hlds__passes_aux__Preds_33;
            MR_Word hlds__passes_aux__STATE_VARIABLE_Task_41_41;
            MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_43_43;
            MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_44_44;
            MR_Box hlds__passes_aux__conv0_Pred0_20;
            MR_Box hlds__passes_aux__conv1_Proc0_22;
            MR_Box hlds__passes_aux__conv16_Pred8_29;

            {
              hlds__hlds_module__module_info_get_preds_2_p_0(hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_5, &hlds__passes_aux__Preds0_19);
            }
            hlds__passes_aux__TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
            hlds__passes_aux__TypeCtorInfo_53_53 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
            {
              mercury__map__lookup_3_p_0(hlds__passes_aux__TypeCtorInfo_52_52, hlds__passes_aux__TypeCtorInfo_53_53, hlds__passes_aux__Preds0_19, ((MR_Box) (hlds__passes_aux__HeadVar__1_1)), &hlds__passes_aux__conv0_Pred0_20);
            }
            hlds__passes_aux__Pred0_20 = ((MR_Word) hlds__passes_aux__conv0_Pred0_20);
            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__passes_aux__Pred0_20, &hlds__passes_aux__Procs0_21);
            }
            hlds__passes_aux__TypeCtorInfo_55_55 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__passes_aux__TypeCtorInfo_55_55, hlds__passes_aux__Procs0_21, hlds__passes_aux__ProcId_15, &hlds__passes_aux__conv1_Proc0_22);
            }
            hlds__passes_aux__Proc0_22 = ((MR_Word) hlds__passes_aux__conv1_Proc0_22);
            {
              hlds__passes_aux__PredProcId_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__passes_aux__PredProcId_23, 0) = ((MR_Box) (hlds__passes_aux__HeadVar__1_1));
              MR_hl_field(MR_mktag(0), hlds__passes_aux__PredProcId_23, 1) = ((MR_Box) (hlds__passes_aux__ProcId_15));
            }
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_0_3, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__passes_aux__Closure_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_0_3, (MR_Integer) 1)));
                  void MR_CALL (* hlds__passes_aux__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__passes_aux__Closure_24, (MR_Integer) 1)));
                  MR_Box hlds__passes_aux__conv4_Proc_25;
                  MR_Box hlds__passes_aux__conv3_STATE_VARIABLE_ModuleInfo_43_43;

                  {
                    hlds__passes_aux__func_2(((MR_Box) hlds__passes_aux__Closure_24), ((MR_Box) (hlds__passes_aux__PredProcId_23)), ((MR_Box) (hlds__passes_aux__Proc0_22)), &hlds__passes_aux__conv4_Proc_25, ((MR_Box) (hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_5)), &hlds__passes_aux__conv3_STATE_VARIABLE_ModuleInfo_43_43);
                  }
                  hlds__passes_aux__Proc_25 = ((MR_Word) hlds__passes_aux__conv4_Proc_25);
                  hlds__passes_aux__STATE_VARIABLE_ModuleInfo_43_43 = ((MR_Word) hlds__passes_aux__conv3_STATE_VARIABLE_ModuleInfo_43_43);
                  hlds__passes_aux__STATE_VARIABLE_Task_41_41 = hlds__passes_aux__STATE_VARIABLE_Task_0_3;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__passes_aux__Closure_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_0_3, (MR_Integer) 1)));
                  void MR_CALL (* hlds__passes_aux__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__passes_aux__Closure_47, (MR_Integer) 1)));
                  MR_Box hlds__passes_aux__conv11_Proc_25;
                  MR_Box hlds__passes_aux__conv10_STATE_VARIABLE_ModuleInfo_43_43;

                  {
                    hlds__passes_aux__func_9(((MR_Box) hlds__passes_aux__Closure_47), ((MR_Box) (hlds__passes_aux__PredProcId_23)), ((MR_Box) (hlds__passes_aux__Pred0_20)), ((MR_Box) (hlds__passes_aux__Proc0_22)), &hlds__passes_aux__conv11_Proc_25, ((MR_Box) (hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_5)), &hlds__passes_aux__conv10_STATE_VARIABLE_ModuleInfo_43_43);
                  }
                  hlds__passes_aux__Proc_25 = ((MR_Word) hlds__passes_aux__conv11_Proc_25);
                  hlds__passes_aux__STATE_VARIABLE_ModuleInfo_43_43 = ((MR_Word) hlds__passes_aux__conv10_STATE_VARIABLE_ModuleInfo_43_43);
                  hlds__passes_aux__STATE_VARIABLE_Task_41_41 = hlds__passes_aux__STATE_VARIABLE_Task_0_3;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__passes_aux__Cookie0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_0_3, (MR_Integer) 2)));
                  MR_Word hlds__passes_aux__Cookie_27;
                  MR_Word hlds__passes_aux__Closure_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_0_3, (MR_Integer) 1)));
                  void MR_CALL (* hlds__passes_aux__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__passes_aux__Closure_48, (MR_Integer) 1)));
                  MR_Box hlds__passes_aux__conv8_Proc_25;
                  MR_Box hlds__passes_aux__conv7_STATE_VARIABLE_ModuleInfo_43_43;
                  MR_Box hlds__passes_aux__conv6_Cookie_27;

                  {
                    hlds__passes_aux__func_5(((MR_Box) hlds__passes_aux__Closure_48), ((MR_Box) (hlds__passes_aux__PredProcId_23)), ((MR_Box) (hlds__passes_aux__Proc0_22)), &hlds__passes_aux__conv8_Proc_25, ((MR_Box) (hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_5)), &hlds__passes_aux__conv7_STATE_VARIABLE_ModuleInfo_43_43, ((MR_Box) (hlds__passes_aux__Cookie0_26)), &hlds__passes_aux__conv6_Cookie_27);
                  }
                  hlds__passes_aux__Proc_25 = ((MR_Word) hlds__passes_aux__conv8_Proc_25);
                  hlds__passes_aux__STATE_VARIABLE_ModuleInfo_43_43 = ((MR_Word) hlds__passes_aux__conv7_STATE_VARIABLE_ModuleInfo_43_43);
                  hlds__passes_aux__Cookie_27 = ((MR_Word) hlds__passes_aux__conv6_Cookie_27);
                  {
                    hlds__passes_aux__STATE_VARIABLE_Task_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_41_41, 1) = ((MR_Box) (hlds__passes_aux__Closure_48));
                    MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_41_41, 2) = ((MR_Box) (hlds__passes_aux__Cookie_27));
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word hlds__passes_aux__Closure_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_0_3, (MR_Integer) 1)));
                  MR_Word hlds__passes_aux__Cookie0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_0_3, (MR_Integer) 2)));
                  MR_Word hlds__passes_aux__Cookie_51;
                  void MR_CALL (* hlds__passes_aux__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__passes_aux__Closure_49, (MR_Integer) 1)));
                  MR_Box hlds__passes_aux__conv15_Proc_25;
                  MR_Box hlds__passes_aux__conv14_STATE_VARIABLE_ModuleInfo_43_43;
                  MR_Box hlds__passes_aux__conv13_Cookie_51;

                  {
                    hlds__passes_aux__func_12(((MR_Box) hlds__passes_aux__Closure_49), ((MR_Box) (hlds__passes_aux__PredProcId_23)), ((MR_Box) (hlds__passes_aux__Pred0_20)), ((MR_Box) (hlds__passes_aux__Proc0_22)), &hlds__passes_aux__conv15_Proc_25, ((MR_Box) (hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_5)), &hlds__passes_aux__conv14_STATE_VARIABLE_ModuleInfo_43_43, ((MR_Box) (hlds__passes_aux__Cookie0_50)), &hlds__passes_aux__conv13_Cookie_51);
                  }
                  hlds__passes_aux__Proc_25 = ((MR_Word) hlds__passes_aux__conv15_Proc_25);
                  hlds__passes_aux__STATE_VARIABLE_ModuleInfo_43_43 = ((MR_Word) hlds__passes_aux__conv14_STATE_VARIABLE_ModuleInfo_43_43);
                  hlds__passes_aux__Cookie_51 = ((MR_Word) hlds__passes_aux__conv13_Cookie_51);
                  {
                    hlds__passes_aux__STATE_VARIABLE_Task_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_41_41, 1) = ((MR_Box) (hlds__passes_aux__Closure_49));
                    MR_hl_field(MR_mktag(3), hlds__passes_aux__STATE_VARIABLE_Task_41_41, 2) = ((MR_Box) (hlds__passes_aux__Cookie_51));
                  }
                }
                break;
            }
            {
              hlds__hlds_module__module_info_get_preds_2_p_0(hlds__passes_aux__STATE_VARIABLE_ModuleInfo_43_43, &hlds__passes_aux__Preds8_28);
            }
            {
              mercury__map__lookup_3_p_0(hlds__passes_aux__TypeCtorInfo_52_52, hlds__passes_aux__TypeCtorInfo_53_53, hlds__passes_aux__Preds8_28, ((MR_Box) (hlds__passes_aux__HeadVar__1_1)), &hlds__passes_aux__conv16_Pred8_29);
            }
            hlds__passes_aux__Pred8_29 = ((MR_Word) hlds__passes_aux__conv16_Pred8_29);
            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__passes_aux__Pred8_29, &hlds__passes_aux__Procs8_30);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__passes_aux__TypeCtorInfo_55_55, hlds__passes_aux__ProcId_15, ((MR_Box) (hlds__passes_aux__Proc_25)), hlds__passes_aux__Procs8_30, &hlds__passes_aux__Procs_31);
            }
            {
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__passes_aux__Procs_31, hlds__passes_aux__Pred8_29, &hlds__passes_aux__Pred_32);
            }
            {
              mercury__map__det_update_4_p_0(hlds__passes_aux__TypeCtorInfo_52_52, hlds__passes_aux__TypeCtorInfo_53_53, ((MR_Box) (hlds__passes_aux__HeadVar__1_1)), ((MR_Box) (hlds__passes_aux__Pred_32)), hlds__passes_aux__Preds8_28, &hlds__passes_aux__Preds_33);
            }
            {
              hlds__hlds_module__module_info_set_preds_3_p_0(hlds__passes_aux__Preds_33, hlds__passes_aux__STATE_VARIABLE_ModuleInfo_43_43, &hlds__passes_aux__STATE_VARIABLE_ModuleInfo_44_44);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__passes_aux__HeadVar__2__tmp_copy_2 = hlds__passes_aux__ProcIds_16;
              MR_Word hlds__passes_aux__STATE_VARIABLE_Task_0__tmp_copy_3 = hlds__passes_aux__STATE_VARIABLE_Task_41_41;
              MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5 = hlds__passes_aux__STATE_VARIABLE_ModuleInfo_44_44;

              hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_5 = hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5;
              hlds__passes_aux__STATE_VARIABLE_Task_0_3 = hlds__passes_aux__STATE_VARIABLE_Task_0__tmp_copy_3;
              hlds__passes_aux__HeadVar__2_2 = hlds__passes_aux__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__passes_aux__seq_process_nonimported_procs_in_preds_5_p_0(
  MR_Word hlds__passes_aux__HeadVar__1_1,
  MR_Word hlds__passes_aux__STATE_VARIABLE_Task_0_2,
  MR_Word * hlds__passes_aux__STATE_VARIABLE_Task_3,
  MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * hlds__passes_aux__STATE_VARIABLE_ModuleInfo_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__passes_aux__succeeded;

        if ((hlds__passes_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__passes_aux__STATE_VARIABLE_ModuleInfo_5 = hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_4;
            *hlds__passes_aux__STATE_VARIABLE_Task_3 = hlds__passes_aux__STATE_VARIABLE_Task_0_2;
          }
        else
          {
            MR_Word hlds__passes_aux__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__passes_aux__PredIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__passes_aux__PredTable_16;
            MR_Word hlds__passes_aux__PredInfo_17;
            MR_Word hlds__passes_aux__ProcIds_18;
            MR_Word hlds__passes_aux__STATE_VARIABLE_Task_23_23;
            MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_24_24;
            MR_Box hlds__passes_aux__conv0_PredInfo_17;

            {
              hlds__hlds_module__module_info_get_preds_2_p_0(hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_4, &hlds__passes_aux__PredTable_16);
            }
            {
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__passes_aux__PredTable_16, ((MR_Box) (hlds__passes_aux__PredId_12)), &hlds__passes_aux__conv0_PredInfo_17);
            }
            hlds__passes_aux__PredInfo_17 = ((MR_Word) hlds__passes_aux__conv0_PredInfo_17);
            {
              hlds__passes_aux__ProcIds_18 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(hlds__passes_aux__PredInfo_17);
            }
            {
              hlds__passes_aux__seq_process_nonimported_procs_6_p_0(hlds__passes_aux__PredId_12, hlds__passes_aux__ProcIds_18, hlds__passes_aux__STATE_VARIABLE_Task_0_2, &hlds__passes_aux__STATE_VARIABLE_Task_23_23, hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_4, &hlds__passes_aux__STATE_VARIABLE_ModuleInfo_24_24);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__passes_aux__HeadVar__1__tmp_copy_1 = hlds__passes_aux__PredIds_13;
              MR_Word hlds__passes_aux__STATE_VARIABLE_Task_0__tmp_copy_2 = hlds__passes_aux__STATE_VARIABLE_Task_23_23;
              MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0__tmp_copy_4 = hlds__passes_aux__STATE_VARIABLE_ModuleInfo_24_24;

              hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_4 = hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0__tmp_copy_4;
              hlds__passes_aux__STATE_VARIABLE_Task_0_2 = hlds__passes_aux__STATE_VARIABLE_Task_0__tmp_copy_2;
              hlds__passes_aux__HeadVar__1_1 = hlds__passes_aux__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__passes_aux__par_process_nonimported_procs_6_p_0(
  MR_Word hlds__passes_aux__ModuleInfo_1,
  MR_Word hlds__passes_aux__Task_2,
  MR_Word hlds__passes_aux__PredId_3,
  MR_Word hlds__passes_aux__HeadVar__4_4,
  MR_Word hlds__passes_aux__STATE_VARIABLE_PredInfo_0_5,
  MR_Word * hlds__passes_aux__STATE_VARIABLE_PredInfo_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__passes_aux__succeeded;

        if ((hlds__passes_aux__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__passes_aux__STATE_VARIABLE_PredInfo_6 = hlds__passes_aux__STATE_VARIABLE_PredInfo_0_5;
        else
          {
            MR_Word hlds__passes_aux__TypeCtorInfo_32_32;
            MR_Integer hlds__passes_aux__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word hlds__passes_aux__ProcIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word hlds__passes_aux__ProcMap0_19;
            MR_Word hlds__passes_aux__Proc0_20;
            MR_Word hlds__passes_aux__PredProcId_21;
            MR_Word hlds__passes_aux__Proc_23;
            MR_Word hlds__passes_aux__ProcMap_24;
            MR_Word hlds__passes_aux__STATE_VARIABLE_PredInfo_27_27;
            MR_Box hlds__passes_aux__conv0_Proc0_20;

            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__passes_aux__STATE_VARIABLE_PredInfo_0_5, &hlds__passes_aux__ProcMap0_19);
            }
            hlds__passes_aux__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__passes_aux__TypeCtorInfo_32_32, hlds__passes_aux__ProcMap0_19, hlds__passes_aux__ProcId_16, &hlds__passes_aux__conv0_Proc0_20);
            }
            hlds__passes_aux__Proc0_20 = ((MR_Word) hlds__passes_aux__conv0_Proc0_20);
            {
              hlds__passes_aux__PredProcId_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__passes_aux__PredProcId_21, 0) = ((MR_Box) (hlds__passes_aux__PredId_3));
              MR_hl_field(MR_mktag(0), hlds__passes_aux__PredProcId_21, 1) = ((MR_Box) (hlds__passes_aux__ProcId_16));
            }
            switch (MR_tag((MR_Word) hlds__passes_aux__Task_2)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__passes_aux__Closure_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__passes_aux__Task_2, (MR_Integer) 0)));
                  void MR_CALL (* hlds__passes_aux__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__passes_aux__Closure_22, (MR_Integer) 1)));
                  MR_Box hlds__passes_aux__conv2_Proc_23;

                  {
                    hlds__passes_aux__func_1(((MR_Box) hlds__passes_aux__Closure_22), ((MR_Box) (hlds__passes_aux__ModuleInfo_1)), ((MR_Box) (hlds__passes_aux__Proc0_20)), &hlds__passes_aux__conv2_Proc_23);
                  }
                  hlds__passes_aux__Proc_23 = ((MR_Word) hlds__passes_aux__conv2_Proc_23);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__passes_aux__Closure_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__Task_2, (MR_Integer) 0)));
                  void MR_CALL (* hlds__passes_aux__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__passes_aux__Closure_29, (MR_Integer) 1)));
                  MR_Box hlds__passes_aux__conv4_Proc_23;

                  {
                    hlds__passes_aux__func_3(((MR_Box) hlds__passes_aux__Closure_29), ((MR_Box) (hlds__passes_aux__ModuleInfo_1)), ((MR_Box) (hlds__passes_aux__PredProcId_21)), ((MR_Box) (hlds__passes_aux__Proc0_20)), &hlds__passes_aux__conv4_Proc_23);
                  }
                  hlds__passes_aux__Proc_23 = ((MR_Word) hlds__passes_aux__conv4_Proc_23);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__passes_aux__Closure_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__passes_aux__Task_2, (MR_Integer) 0)));
                  void MR_CALL (* hlds__passes_aux__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__passes_aux__Closure_30, (MR_Integer) 1)));
                  MR_Box hlds__passes_aux__conv6_Proc_23;

                  {
                    hlds__passes_aux__func_5(((MR_Box) hlds__passes_aux__Closure_30), ((MR_Box) (hlds__passes_aux__ModuleInfo_1)), ((MR_Box) (hlds__passes_aux__PredProcId_21)), ((MR_Box) (hlds__passes_aux__STATE_VARIABLE_PredInfo_0_5)), ((MR_Box) (hlds__passes_aux__Proc0_20)), &hlds__passes_aux__conv6_Proc_23);
                  }
                  hlds__passes_aux__Proc_23 = ((MR_Word) hlds__passes_aux__conv6_Proc_23);
                }
                break;
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__passes_aux__TypeCtorInfo_32_32, hlds__passes_aux__ProcId_16, ((MR_Box) (hlds__passes_aux__Proc_23)), hlds__passes_aux__ProcMap0_19, &hlds__passes_aux__ProcMap_24);
            }
            {
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__passes_aux__ProcMap_24, hlds__passes_aux__STATE_VARIABLE_PredInfo_0_5, &hlds__passes_aux__STATE_VARIABLE_PredInfo_27_27);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__passes_aux__HeadVar__4__tmp_copy_4 = hlds__passes_aux__ProcIds_17;
              MR_Word hlds__passes_aux__STATE_VARIABLE_PredInfo_0__tmp_copy_5 = hlds__passes_aux__STATE_VARIABLE_PredInfo_27_27;

              hlds__passes_aux__STATE_VARIABLE_PredInfo_0_5 = hlds__passes_aux__STATE_VARIABLE_PredInfo_0__tmp_copy_5;
              hlds__passes_aux__HeadVar__4_4 = hlds__passes_aux__HeadVar__4__tmp_copy_4;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__passes_aux__par_process_nonimported_procs_in_preds_5_p_0(
  MR_Word hlds__passes_aux__ModuleInfo_1,
  MR_Word hlds__passes_aux__Task_2,
  MR_Word hlds__passes_aux__ValidPredIdSet_3,
  MR_Word hlds__passes_aux__HeadVar__4_4,
  MR_Word * hlds__passes_aux__HeadVar__5_5)
{
  {
    MR_bool hlds__passes_aux__succeeded;

    if ((hlds__passes_aux__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__passes_aux__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__passes_aux__PredIdInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word hlds__passes_aux__PredIdsInfos0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word hlds__passes_aux__PredIdInfo_14;
        MR_Word hlds__passes_aux__PredIdsInfos_15;
        MR_Word hlds__passes_aux__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__passes_aux__PredIdInfo0_12, (MR_Integer) 0)));
        MR_Word hlds__passes_aux__PredInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__passes_aux__PredIdInfo0_12, (MR_Integer) 1)));
        MR_Word hlds__passes_aux__ProcIds_18;
        MR_Integer hlds__passes_aux__V_19_19;
        MR_Word hlds__passes_aux__V_20_20;

        {
          hlds__passes_aux__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__passes_aux__ValidPredIdSet_3, ((MR_Box) (hlds__passes_aux__PredId_16)));
        }
        if (hlds__passes_aux__succeeded)
          {
            {
              hlds__passes_aux__ProcIds_18 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(hlds__passes_aux__PredInfo0_17);
            }
            hlds__passes_aux__succeeded = ((MR_tag((MR_Word) hlds__passes_aux__ProcIds_18)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__passes_aux__succeeded)
              {
                hlds__passes_aux__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__passes_aux__ProcIds_18, (MR_Integer) 0)));
                hlds__passes_aux__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__ProcIds_18, (MR_Integer) 1)));
              }
          }
        if (hlds__passes_aux__succeeded)
          {
            MR_Word hlds__passes_aux__PredInfo_21;

            {
              hlds__passes_aux__par_process_nonimported_procs_6_p_0(hlds__passes_aux__ModuleInfo_1, hlds__passes_aux__Task_2, hlds__passes_aux__PredId_16, hlds__passes_aux__ProcIds_18, hlds__passes_aux__PredInfo0_17, &hlds__passes_aux__PredInfo_21);
            }
            {
              hlds__passes_aux__PredIdInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__passes_aux__PredIdInfo_14, 0) = ((MR_Box) (hlds__passes_aux__PredId_16));
              MR_hl_field(MR_mktag(0), hlds__passes_aux__PredIdInfo_14, 1) = ((MR_Box) (hlds__passes_aux__PredInfo_21));
            }
            {
              hlds__passes_aux__par_process_nonimported_procs_in_preds_5_p_0(hlds__passes_aux__ModuleInfo_1, hlds__passes_aux__Task_2, hlds__passes_aux__ValidPredIdSet_3, hlds__passes_aux__PredIdsInfos0_13, &hlds__passes_aux__PredIdsInfos_15);
            }
          }
        else
          {
            hlds__passes_aux__PredIdInfo_14 = hlds__passes_aux__PredIdInfo0_12;
            {
              hlds__passes_aux__par_process_nonimported_procs_in_preds_5_p_0(hlds__passes_aux__ModuleInfo_1, hlds__passes_aux__Task_2, hlds__passes_aux__ValidPredIdSet_3, hlds__passes_aux__PredIdsInfos0_13, &hlds__passes_aux__PredIdsInfos_15);
            }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__passes_aux__HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__passes_aux__PredIdInfo_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__passes_aux__PredIdsInfos_15));
        }
      }
  }
}

static void MR_CALL 
hlds__passes_aux__process_nonimported_pred_6_p_0(
  MR_Word hlds__passes_aux__Task_7,
  MR_Word hlds__passes_aux__PredId_8,
  MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * hlds__passes_aux__STATE_VARIABLE_ModuleInfo_15,
  MR_Word hlds__passes_aux__STATE_VARIABLE_Specs_0_16,
  MR_Word * hlds__passes_aux__STATE_VARIABLE_Specs_17)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__PredInfo0_11;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_14, hlds__passes_aux__PredId_8, &hlds__passes_aux__PredInfo0_11);
    }
    {
      hlds__passes_aux__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__passes_aux__PredInfo0_11);
    }
    if (hlds__passes_aux__succeeded)
      {
        *hlds__passes_aux__STATE_VARIABLE_Specs_17 = hlds__passes_aux__STATE_VARIABLE_Specs_0_16;
        *hlds__passes_aux__STATE_VARIABLE_ModuleInfo_15 = hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_14;
      }
    else
      {
        MR_Word hlds__passes_aux__Closure_12 = (MR_Word) hlds__passes_aux__Task_7;
        MR_Word hlds__passes_aux__PredInfo_13;
        MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_18_18;
        void MR_CALL (* hlds__passes_aux__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__passes_aux__Closure_12, (MR_Integer) 1)));
        MR_Box hlds__passes_aux__conv3_STATE_VARIABLE_ModuleInfo_18_18;
        MR_Box hlds__passes_aux__conv2_PredInfo_13;
        MR_Box hlds__passes_aux__conv1_STATE_VARIABLE_Specs_17;

        {
          hlds__passes_aux__func_0(((MR_Box) hlds__passes_aux__Closure_12), ((MR_Box) (hlds__passes_aux__PredId_8)), ((MR_Box) (hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_14)), &hlds__passes_aux__conv3_STATE_VARIABLE_ModuleInfo_18_18, ((MR_Box) (hlds__passes_aux__PredInfo0_11)), &hlds__passes_aux__conv2_PredInfo_13, ((MR_Box) (hlds__passes_aux__STATE_VARIABLE_Specs_0_16)), &hlds__passes_aux__conv1_STATE_VARIABLE_Specs_17);
        }
        hlds__passes_aux__STATE_VARIABLE_ModuleInfo_18_18 = ((MR_Word) hlds__passes_aux__conv3_STATE_VARIABLE_ModuleInfo_18_18);
        hlds__passes_aux__PredInfo_13 = ((MR_Word) hlds__passes_aux__conv2_PredInfo_13);
        *hlds__passes_aux__STATE_VARIABLE_Specs_17 = ((MR_Word) hlds__passes_aux__conv1_STATE_VARIABLE_Specs_17);
        {
          hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__passes_aux__PredId_8, hlds__passes_aux__PredInfo_13, hlds__passes_aux__STATE_VARIABLE_ModuleInfo_18_18, hlds__passes_aux__STATE_VARIABLE_ModuleInfo_15);
        }
      }
  }
}

void MR_CALL 
hlds__passes_aux__maybe_dump_hlds_7_p_0(
  MR_Word hlds__passes_aux__HLDS_8,
  MR_Integer hlds__passes_aux__StageNum_9,
  MR_String hlds__passes_aux__StageName_10,
  MR_Word hlds__passes_aux__STATE_VARIABLE_DumpInfo_0_32,
  MR_Word * hlds__passes_aux__STATE_VARIABLE_DumpInfo_33)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__Globals_13;
    MR_Word hlds__passes_aux__Verbose_14;
    MR_Word hlds__passes_aux__DumpHLDSStages_15;
    MR_Word hlds__passes_aux__DumpTraceStages_16;
    MR_String hlds__passes_aux__UserFileSuffix_17;
    MR_String hlds__passes_aux__StageNumStr_18;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__passes_aux__HLDS_8, &hlds__passes_aux__Globals_13);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(hlds__passes_aux__Globals_13, (MR_Integer) 47, &hlds__passes_aux__Verbose_14);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(hlds__passes_aux__Globals_13, (MR_Integer) 149, &hlds__passes_aux__DumpHLDSStages_15);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(hlds__passes_aux__Globals_13, (MR_Integer) 148, &hlds__passes_aux__DumpTraceStages_16);
    }
    {
      libs__globals__lookup_string_option_3_p_0(hlds__passes_aux__Globals_13, (MR_Integer) 156, &hlds__passes_aux__UserFileSuffix_17);
    }
    {
      hlds__passes_aux__StageNumStr_18 = hlds__passes_aux__stage_num_str_1_f_0(hlds__passes_aux__StageNum_9);
    }
    {
      hlds__passes_aux__succeeded = hlds__passes_aux__should_dump_stage_4_p_0(hlds__passes_aux__StageNum_9, hlds__passes_aux__StageNumStr_18, hlds__passes_aux__StageName_10, hlds__passes_aux__DumpHLDSStages_15);
    }
    if (hlds__passes_aux__succeeded)
      {
        MR_String hlds__passes_aux__BaseFileName_19;
        MR_String hlds__passes_aux__DumpFileName_20;
        MR_String hlds__passes_aux__V_40_40;
        MR_String hlds__passes_aux__V_42_42;
        MR_String hlds__passes_aux__V_43_43;
        MR_String hlds__passes_aux__V_45_45;
        MR_String hlds__passes_aux__PrevDumpFileName_21;
        MR_Word hlds__passes_aux__PrevHLDS_22;

        {
          hlds__hlds_module__module_info_get_dump_hlds_base_file_name_2_p_0(hlds__passes_aux__HLDS_8, &hlds__passes_aux__BaseFileName_19);
        }
        {
          hlds__passes_aux__V_45_45 = mercury__string__f_43_43_2_f_0(hlds__passes_aux__StageName_10, hlds__passes_aux__UserFileSuffix_17);
        }
        {
          hlds__passes_aux__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) "-", hlds__passes_aux__V_45_45);
        }
        {
          hlds__passes_aux__V_42_42 = mercury__string__f_43_43_2_f_0(hlds__passes_aux__StageNumStr_18, hlds__passes_aux__V_43_43);
        }
        {
          hlds__passes_aux__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__passes_aux__V_42_42);
        }
        {
          hlds__passes_aux__DumpFileName_20 = mercury__string__f_43_43_2_f_0(hlds__passes_aux__BaseFileName_19, hlds__passes_aux__V_40_40);
        }
        hlds__passes_aux__succeeded = ((MR_tag((MR_Word) hlds__passes_aux__STATE_VARIABLE_DumpInfo_0_32)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__passes_aux__succeeded)
          {
            hlds__passes_aux__PrevDumpFileName_21 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__passes_aux__STATE_VARIABLE_DumpInfo_0_32, (MR_Integer) 0)));
            hlds__passes_aux__PrevHLDS_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__STATE_VARIABLE_DumpInfo_0_32, (MR_Integer) 1)));
            {
              hlds__passes_aux__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__passes_aux__HLDS_8, hlds__passes_aux__PrevHLDS_22);
            }
          }
        if (hlds__passes_aux__succeeded)
          {
            MR_Word hlds__passes_aux__DumpSameHLDS_23;

            {
              libs__globals__lookup_bool_option_3_p_0(hlds__passes_aux__Globals_13, (MR_Integer) 157, &hlds__passes_aux__DumpSameHLDS_23);
            }
            switch (hlds__passes_aux__DumpSameHLDS_23) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__passes_aux___Result_24;

                  {
                    libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_14, (MR_String) "% HLDS dump \140");
                  }
                  {
                    libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_14, hlds__passes_aux__DumpFileName_20);
                  }
                  {
                    libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_14, (MR_String) "\' would be identical ");
                  }
                  {
                    libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_14, (MR_String) "to previous dump.\n");
                  }
                  {
                    mercury__io__remove_file_4_p_0(hlds__passes_aux__DumpFileName_20, &hlds__passes_aux___Result_24);
                  }
                  *hlds__passes_aux__STATE_VARIABLE_DumpInfo_33 = hlds__passes_aux__STATE_VARIABLE_DumpInfo_0_32;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__passes_aux__Res_26;

                  {
                    mercury__io__open_output_4_p_0(hlds__passes_aux__DumpFileName_20, &hlds__passes_aux__Res_26);
                  }
                  if (((MR_tag((MR_Word) hlds__passes_aux__Res_26)) == (MR_mktag((MR_Integer) 1))))
                    {
                      MR_Word hlds__passes_aux__IOError_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__Res_26, (MR_Integer) 0)));
                      MR_String hlds__passes_aux__Msg_29;
                      MR_String hlds__passes_aux__V_51_51;
                      MR_String hlds__passes_aux__V_52_52;
                      MR_String hlds__passes_aux__V_54_54;

                      {
                        libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_14, (MR_String) "\n");
                      }
                      {
                        hlds__passes_aux__V_54_54 = mercury__io__error_message_1_f_0(hlds__passes_aux__IOError_28);
                      }
                      {
                        hlds__passes_aux__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", hlds__passes_aux__V_54_54);
                      }
                      {
                        hlds__passes_aux__V_51_51 = mercury__string__f_43_43_2_f_0(hlds__passes_aux__DumpFileName_20, hlds__passes_aux__V_52_52);
                      }
                      {
                        hlds__passes_aux__Msg_29 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open file \140", hlds__passes_aux__V_51_51);
                      }
                      {
                        libs__file_util__report_error_3_p_0(hlds__passes_aux__Msg_29);
                      }
                    }
                  else
                    {
                      MR_Word hlds__passes_aux__FileStream_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__passes_aux__Res_26, (MR_Integer) 0)));
                      MR_String hlds__passes_aux__V_56_56;
                      MR_String hlds__passes_aux__V_59_59;
                      MR_String hlds__passes_aux__V_61_61;

                      {
                        hlds__passes_aux__V_61_61 = mercury__string__f_43_43_2_f_0(hlds__passes_aux__PrevDumpFileName_21, (MR_String) ".\n");
                      }
                      {
                        hlds__passes_aux__V_59_59 = mercury__string__f_43_43_2_f_0((MR_String) "to the stage in ", hlds__passes_aux__V_61_61);
                      }
                      {
                        hlds__passes_aux__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) "This stage is identical ", hlds__passes_aux__V_59_59);
                      }
                      {
                        mercury__io__write_string_4_p_0(hlds__passes_aux__FileStream_27, hlds__passes_aux__V_56_56);
                      }
                      {
                        mercury__io__close_output_3_p_0(hlds__passes_aux__FileStream_27);
                      }
                    }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *hlds__passes_aux__STATE_VARIABLE_DumpInfo_33 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__passes_aux__PrevDumpFileName_21));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__passes_aux__HLDS_8));
                  }
                }
                break;
            }
          }
        else
          {
            {
              hlds__passes_aux__dump_hlds_4_p_0(hlds__passes_aux__DumpFileName_20, hlds__passes_aux__HLDS_8);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__passes_aux__STATE_VARIABLE_DumpInfo_33 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__passes_aux__DumpFileName_20));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__passes_aux__HLDS_8));
            }
          }
      }
    else
      {
        {
          hlds__passes_aux__succeeded = hlds__passes_aux__should_dump_stage_4_p_0(hlds__passes_aux__StageNum_9, hlds__passes_aux__StageNumStr_18, hlds__passes_aux__StageName_10, hlds__passes_aux__DumpTraceStages_16);
        }
        if (hlds__passes_aux__succeeded)
          {
            MR_Word hlds__passes_aux__MaybeTraceCountsError_30;
            MR_String hlds__passes_aux__V_75_75;
            MR_String hlds__passes_aux__V_77_77;
            MR_String hlds__passes_aux__V_79_79;
            MR_String hlds__passes_aux__V_80_80;
            MR_String hlds__passes_aux__V_82_82;
            MR_String hlds__passes_aux__BaseFileName_96;
            MR_String hlds__passes_aux__DumpFileName_97;

            {
              hlds__hlds_module__module_info_get_dump_hlds_base_file_name_2_p_0(hlds__passes_aux__HLDS_8, &hlds__passes_aux__BaseFileName_96);
            }
            {
              hlds__passes_aux__V_75_75 = mercury__string__det_remove_suffix_2_f_0(hlds__passes_aux__BaseFileName_96, (MR_String) ".hlds_dump");
            }
            {
              hlds__passes_aux__V_82_82 = mercury__string__f_43_43_2_f_0(hlds__passes_aux__StageName_10, hlds__passes_aux__UserFileSuffix_17);
            }
            {
              hlds__passes_aux__V_80_80 = mercury__string__f_43_43_2_f_0((MR_String) "-", hlds__passes_aux__V_82_82);
            }
            {
              hlds__passes_aux__V_79_79 = mercury__string__f_43_43_2_f_0(hlds__passes_aux__StageNumStr_18, hlds__passes_aux__V_80_80);
            }
            {
              hlds__passes_aux__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) ".trace_counts.", hlds__passes_aux__V_79_79);
            }
            {
              hlds__passes_aux__DumpFileName_97 = mercury__string__f_43_43_2_f_0(hlds__passes_aux__V_75_75, hlds__passes_aux__V_77_77);
            }
            {
              mercury__benchmarking__write_out_trace_counts_4_p_0(hlds__passes_aux__DumpFileName_97, &hlds__passes_aux__MaybeTraceCountsError_30);
            }
            if ((hlds__passes_aux__MaybeTraceCountsError_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_14, (MR_String) "% Dumped trace counts to \140");
                }
                {
                  libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_14, hlds__passes_aux__DumpFileName_97);
                }
                {
                  libs__file_util__maybe_write_string_4_p_0(hlds__passes_aux__Verbose_14, (MR_String) "\'\n");
                }
                {
                  libs__file_util__maybe_flush_output_3_p_0(hlds__passes_aux__Verbose_14);
                }
              }
            else
              {
                MR_String hlds__passes_aux__TraceCountsError_31 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__passes_aux__MaybeTraceCountsError_30, (MR_Integer) 0)));

                {
                  mercury__io__write_string_3_p_0((MR_String) "% ");
                }
                {
                  mercury__io__write_string_3_p_0(hlds__passes_aux__TraceCountsError_31);
                }
                {
                  mercury__io__nl_2_p_0();
                }
                {
                  mercury__io__flush_output_2_p_0();
                }
              }
          }
        else
          {
          }
        *hlds__passes_aux__STATE_VARIABLE_DumpInfo_33 = hlds__passes_aux__STATE_VARIABLE_DumpInfo_0_32;
      }
  }
}

static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_1(
  void * hlds__passes_aux__env_ptr_arg)
{
  {
    struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s * hlds__passes_aux__env_ptr = (struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s *) hlds__passes_aux__env_ptr_arg;

    MR_builtin_longjmp((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_3(
  void * hlds__passes_aux__env_ptr_arg)
{
  {
    struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s * hlds__passes_aux__env_ptr = (struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s *) hlds__passes_aux__env_ptr_arg;

    (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15 = ((MR_String) (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__conv0_DumpStage_15);
    {
      hlds__passes_aux__should_dump_stage_4_p_0_2(hlds__passes_aux__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_4(
  void * hlds__passes_aux__env_ptr_arg)
{
  {
    struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s * hlds__passes_aux__env_ptr = (struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s *) hlds__passes_aux__env_ptr_arg;

    MR_builtin_longjmp((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_5(
  void * hlds__passes_aux__env_ptr_arg)
{
  {
    struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s * hlds__passes_aux__env_ptr = (struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s *) hlds__passes_aux__env_ptr_arg;

    (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = (strcmp((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__V_12_12, (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__V_17_17) == 0);
    if ((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded)
      {
        {
          (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = mercury__string__to_int_2_p_0((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__From_10, &(hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__FromInt_11);
        }
        if ((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded)
          {
            (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = ((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNum_5 >= (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__FromInt_11);
            if ((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded)
              {
                hlds__passes_aux__should_dump_stage_4_p_0_4(hlds__passes_aux__env_ptr);
              }
          }
      }
  }
}

static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_6(
  void * hlds__passes_aux__env_ptr_arg)
{
  {
    struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s * hlds__passes_aux__env_ptr = (struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s *) hlds__passes_aux__env_ptr_arg;

    if (MR_builtin_setjmp((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__commit_1) == 0)
      {
        (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__V_12_12 = (MR_String) "+";
        {
          mercury__string__append_3_p_3(&(hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__From_10, &(hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__V_17_17, (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15, hlds__passes_aux__should_dump_stage_4_p_0_5, hlds__passes_aux__env_ptr);
        }
        (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_2(
  void * hlds__passes_aux__env_ptr_arg)
{
  {
    struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s * hlds__passes_aux__env_ptr = (struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s *) hlds__passes_aux__env_ptr_arg;

    (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = (strcmp((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageName_7, (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15) == 0);
    if (!((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded))
      {
        (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = (strcmp((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15, (MR_String) "all") == 0);
        if (!((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded))
          {
            (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = (strcmp((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15, (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNumStr_6) == 0);
            if (!((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded))
              {
                {
                  {
                    (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = mercury__string__append_3_p_0((MR_String) "0", (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15, (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNumStr_6);
                  }
                }
                if (!((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded))
                  {
                    {
                      {
                        (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = mercury__string__append_3_p_0((MR_String) "00", (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStage_15, (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNumStr_6);
                      }
                    }
                    if (!((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded))
                      {
                        {
                          hlds__passes_aux__should_dump_stage_4_p_0_6(hlds__passes_aux__env_ptr);
                        }
                      }
                  }
              }
          }
      }
    if ((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded)
      {
        hlds__passes_aux__should_dump_stage_4_p_0_1(hlds__passes_aux__env_ptr);
      }
  }
}

static void MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0_7(
  void * hlds__passes_aux__env_ptr_arg)
{
  {
    struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s * hlds__passes_aux__env_ptr = (struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s *) hlds__passes_aux__env_ptr_arg;

    if (MR_builtin_setjmp((hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &(hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__conv0_DumpStage_15, (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStages_8, hlds__passes_aux__should_dump_stage_4_p_0_3, hlds__passes_aux__env_ptr);
          }
        }
        (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (hlds__passes_aux__env_ptr)->hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
hlds__passes_aux__should_dump_stage_4_p_0(
  MR_Integer hlds__passes_aux__StageNum_5,
  MR_String hlds__passes_aux__StageNumStr_6,
  MR_String hlds__passes_aux__StageName_7,
  MR_Word hlds__passes_aux__DumpStages_8)
{
  {
    struct hlds__passes_aux__should_dump_stage_4_p_0_env_0_s hlds__passes_aux__env;

    (hlds__passes_aux__env).hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNum_5 = hlds__passes_aux__StageNum_5;
    (hlds__passes_aux__env).hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageNumStr_6 = hlds__passes_aux__StageNumStr_6;
    (hlds__passes_aux__env).hlds__passes_aux__should_dump_stage_4_p_0_env_0__StageName_7 = hlds__passes_aux__StageName_7;
    (hlds__passes_aux__env).hlds__passes_aux__should_dump_stage_4_p_0_env_0__DumpStages_8 = hlds__passes_aux__DumpStages_8;
    {
      hlds__passes_aux__should_dump_stage_4_p_0_7(&hlds__passes_aux__env);
    }
    return (hlds__passes_aux__env).hlds__passes_aux__should_dump_stage_4_p_0_env_0__succeeded;
  }
}

MR_String MR_CALL 
hlds__passes_aux__stage_num_str_1_f_0(
  MR_Integer hlds__passes_aux__StageNum_3)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_String hlds__passes_aux__HeadVar__2_2;

    {
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) &hlds__passes_aux_scalar_common_9[1], (MR_Integer) 3, hlds__passes_aux__StageNum_3, &hlds__passes_aux__HeadVar__2_2);
    }
    return hlds__passes_aux__HeadVar__2_2;
  }
}

void MR_CALL 
hlds__passes_aux__report_pred_name_mode_5_p_0(
  MR_Word hlds__passes_aux__HeadVar__1_1,
  MR_String hlds__passes_aux__HeadVar__2_2,
  MR_Word hlds__passes_aux__ArgModes_3)
{
  {
    MR_bool hlds__passes_aux__succeeded;

    switch (hlds__passes_aux__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word hlds__passes_aux__InstVarSet_25;
          MR_Word hlds__passes_aux__StrippedArgModes_26;
          MR_Word hlds__passes_aux__FuncArgModes_27;
          MR_Word hlds__passes_aux__FuncRetMode_28;
          MR_Box hlds__passes_aux__conv0_FuncRetMode_28;

          {
            mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__passes_aux__InstVarSet_25);
          }
          {
            parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(hlds__passes_aux__ArgModes_3, &hlds__passes_aux__StrippedArgModes_26);
          }
          {
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__passes_aux__StrippedArgModes_26, &hlds__passes_aux__FuncArgModes_27, &hlds__passes_aux__conv0_FuncRetMode_28);
          }
          hlds__passes_aux__FuncRetMode_28 = ((MR_Word) hlds__passes_aux__conv0_FuncRetMode_28);
          {
            mercury__io__write_string_3_p_0(hlds__passes_aux__HeadVar__2_2);
          }
          if ((hlds__passes_aux__FuncArgModes_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                parse_tree__parse_tree_out_inst__mercury_output_mode_list_5_p_0((MR_Integer) 1, hlds__passes_aux__InstVarSet_25, hlds__passes_aux__FuncArgModes_27);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
          {
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
          {
            parse_tree__parse_tree_out_inst__mercury_output_mode_5_p_0((MR_Integer) 1, hlds__passes_aux__InstVarSet_25, hlds__passes_aux__FuncRetMode_28);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0(hlds__passes_aux__HeadVar__2_2);
          }
          if ((hlds__passes_aux__ArgModes_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              MR_Word hlds__passes_aux__InstVarSet_11;
              MR_Word hlds__passes_aux__StrippedArgModes_12;

              {
                mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__passes_aux__InstVarSet_11);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(hlds__passes_aux__ArgModes_3, &hlds__passes_aux__StrippedArgModes_12);
              }
              {
                parse_tree__parse_tree_out_inst__mercury_output_mode_list_5_p_0((MR_Integer) 1, hlds__passes_aux__InstVarSet_11, hlds__passes_aux__StrippedArgModes_12);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
        }
        break;
    }
  }
}

void MR_CALL 
hlds__passes_aux__report_pred_proc_id_7_p_0(
  MR_Word hlds__passes_aux__ModuleInfo_8,
  MR_Word hlds__passes_aux__PredId_9,
  MR_Integer hlds__passes_aux__ProcId_10,
  MR_Word hlds__passes_aux__MaybeContext_11,
  MR_Word * hlds__passes_aux__Context_12)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__TypeCtorInfo_36_36;
    MR_Word hlds__passes_aux__PredInfo_14;
    MR_Word hlds__passes_aux__ProcInfo_15;
    MR_String hlds__passes_aux__PredName_16;
    MR_Integer hlds__passes_aux__Arity_17;
    MR_Word hlds__passes_aux__PredOrFunc_18;
    MR_Word hlds__passes_aux__ArgModes0_19;
    MR_Integer hlds__passes_aux__NumArgModes_20;
    MR_Integer hlds__passes_aux__NumToDrop_21;
    MR_Word hlds__passes_aux__ArgModes_23;
    MR_Word hlds__passes_aux__OutContext_24;
    MR_Word hlds__passes_aux__ArgModes1_22;

    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__passes_aux__ModuleInfo_8, hlds__passes_aux__PredId_9, hlds__passes_aux__ProcId_10, &hlds__passes_aux__PredInfo_14, &hlds__passes_aux__ProcInfo_15);
    }
    {
      hlds__passes_aux__PredName_16 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__passes_aux__PredInfo_14);
    }
    {
      hlds__passes_aux__Arity_17 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__passes_aux__PredInfo_14);
    }
    {
      hlds__passes_aux__PredOrFunc_18 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__passes_aux__PredInfo_14);
    }
    {
      hlds__hlds_pred__proc_info_get_context_2_p_0(hlds__passes_aux__ProcInfo_15, hlds__passes_aux__Context_12);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__passes_aux__ProcInfo_15, &hlds__passes_aux__ArgModes0_19);
    }
    hlds__passes_aux__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
    {
      mercury__list__length_2_p_0(hlds__passes_aux__TypeCtorInfo_36_36, hlds__passes_aux__ArgModes0_19, &hlds__passes_aux__NumArgModes_20);
    }
    hlds__passes_aux__NumToDrop_21 = (hlds__passes_aux__NumArgModes_20 - hlds__passes_aux__Arity_17);
    {
      hlds__passes_aux__succeeded = mercury__list__drop_3_p_0(hlds__passes_aux__TypeCtorInfo_36_36, hlds__passes_aux__NumToDrop_21, hlds__passes_aux__ArgModes0_19, &hlds__passes_aux__ArgModes1_22);
    }
    if (hlds__passes_aux__succeeded)
      hlds__passes_aux__ArgModes_23 = hlds__passes_aux__ArgModes1_22;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.passes_aux", (MR_String) "predicate \140hlds.passes_aux.report_pred_proc_id\'/7", (MR_String) "list.drop failed");
          return;
        }
      }
    if ((hlds__passes_aux__MaybeContext_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__passes_aux__OutContext_24 = *hlds__passes_aux__Context_12;
    else
      hlds__passes_aux__OutContext_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__passes_aux__MaybeContext_11, (MR_Integer) 0)));
    {
      parse_tree__prog_out__write_context_3_p_0(hlds__passes_aux__OutContext_24);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "In \140");
    }
    {
      hlds__passes_aux__report_pred_name_mode_5_p_0(hlds__passes_aux__PredOrFunc_18, hlds__passes_aux__PredName_16, hlds__passes_aux__ArgModes_23);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\':\n");
    }
  }
}

void MR_CALL 
hlds__passes_aux__maybe_report_sizes_3_p_0(
  MR_Word hlds__passes_aux__HLDS_4)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__Globals_6;
    MR_Word hlds__passes_aux__Statistics_7;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__passes_aux__HLDS_4, &hlds__passes_aux__Globals_6);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(hlds__passes_aux__Globals_6, (MR_Integer) 57, &hlds__passes_aux__Statistics_7);
    }
    switch (hlds__passes_aux__Statistics_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__passes_aux__PredTable_16;
          MR_Word hlds__passes_aux__TypeTable_17;
          MR_Word hlds__passes_aux__TypeCtorDefns_18;
          MR_Word hlds__passes_aux__CtorTable_19;
          MR_Word hlds__passes_aux__CtorDefns_20;
          MR_Integer hlds__passes_aux__V_25_25;
          MR_Integer hlds__passes_aux__V_31_31;
          MR_Integer hlds__passes_aux__V_37_37;
          MR_String hlds__passes_aux__V_46_46;
          MR_Word hlds__passes_aux__V_52_52;
          MR_String hlds__passes_aux__V_57_57;
          MR_String hlds__passes_aux__V_68_68;

          {
            hlds__hlds_module__module_info_get_preds_2_p_0(hlds__passes_aux__HLDS_4, &hlds__passes_aux__PredTable_16);
          }
          {
            hlds__passes_aux__V_25_25 = mercury__map__count_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__passes_aux__PredTable_16);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "Pred table size = ");
          }
          hlds__passes_aux__V_52_52 = (MR_Word) &hlds__passes_aux_scalar_common_9[0];
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__passes_aux__V_52_52, hlds__passes_aux__V_25_25, &hlds__passes_aux__V_46_46);
          }
          {
            mercury__io__write_string_3_p_0(hlds__passes_aux__V_46_46);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          {
            hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__passes_aux__HLDS_4, &hlds__passes_aux__TypeTable_17);
          }
          {
            hlds__hlds_data__get_all_type_ctor_defns_2_p_0(hlds__passes_aux__TypeTable_17, &hlds__passes_aux__TypeCtorDefns_18);
          }
          {
            hlds__passes_aux__V_31_31 = mercury__list__length_1_f_0((MR_Word) &hlds__passes_aux_scalar_common_2[0], hlds__passes_aux__TypeCtorDefns_18);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "Type table size = ");
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__passes_aux__V_52_52, hlds__passes_aux__V_31_31, &hlds__passes_aux__V_57_57);
          }
          {
            mercury__io__write_string_3_p_0(hlds__passes_aux__V_57_57);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          {
            hlds__hlds_module__module_info_get_cons_table_2_p_0(hlds__passes_aux__HLDS_4, &hlds__passes_aux__CtorTable_19);
          }
          {
            hlds__hlds_data__get_all_cons_defns_2_p_0(hlds__passes_aux__CtorTable_19, &hlds__passes_aux__CtorDefns_20);
          }
          {
            hlds__passes_aux__V_37_37 = mercury__list__length_1_f_0((MR_Word) &hlds__passes_aux_scalar_common_2[1], hlds__passes_aux__CtorDefns_20);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "Constructor table size = ");
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__passes_aux__V_52_52, hlds__passes_aux__V_37_37, &hlds__passes_aux__V_68_68);
          }
          {
            mercury__io__write_string_3_p_0(hlds__passes_aux__V_68_68);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
        }
        break;
    }
  }
}

void MR_CALL 
hlds__passes_aux__write_proc_progress_message_6_p_0(
  MR_String hlds__passes_aux__Message_7,
  MR_Word hlds__passes_aux__PredId_8,
  MR_Integer hlds__passes_aux__ProcId_9,
  MR_Word hlds__passes_aux__ModuleInfo_10)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__Globals_12;
    MR_Word hlds__passes_aux__VeryVerbose_13;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__passes_aux__ModuleInfo_10, &hlds__passes_aux__Globals_12);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(hlds__passes_aux__Globals_12, (MR_Integer) 48, &hlds__passes_aux__VeryVerbose_13);
    }
    switch (hlds__passes_aux__VeryVerbose_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0(hlds__passes_aux__Message_7);
          }
          {
            hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_p_0(hlds__passes_aux__ModuleInfo_10, hlds__passes_aux__PredId_8, hlds__passes_aux__ProcId_9);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
        }
        break;
    }
  }
}

void MR_CALL 
hlds__passes_aux__write_proc_progress_message_5_p_0(
  MR_String hlds__passes_aux__Message_6,
  MR_Word hlds__passes_aux__HeadVar__2_2,
  MR_Word hlds__passes_aux__ModuleInfo_9)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 0)));
    MR_Integer hlds__passes_aux__ProcId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__passes_aux__HeadVar__2_2, (MR_Integer) 1)));

    {
      hlds__passes_aux__write_proc_progress_message_6_p_0(hlds__passes_aux__Message_6, hlds__passes_aux__PredId_7, hlds__passes_aux__ProcId_8, hlds__passes_aux__ModuleInfo_9);
    }
  }
}

void MR_CALL 
hlds__passes_aux__write_pred_progress_message_5_p_0(
  MR_String hlds__passes_aux__Message_6,
  MR_Word hlds__passes_aux__PredId_7,
  MR_Word hlds__passes_aux__ModuleInfo_8)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__Globals_10;
    MR_Word hlds__passes_aux__VeryVerbose_11;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__passes_aux__ModuleInfo_8, &hlds__passes_aux__Globals_10);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(hlds__passes_aux__Globals_10, (MR_Integer) 48, &hlds__passes_aux__VeryVerbose_11);
    }
    switch (hlds__passes_aux__VeryVerbose_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0(hlds__passes_aux__Message_6);
          }
          {
            hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(hlds__passes_aux__ModuleInfo_8, hlds__passes_aux__PredId_7);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
        }
        break;
    }
  }
}

void MR_CALL 
hlds__passes_aux__process_all_nonimported_procs_update_4_p_0(
  MR_Word hlds__passes_aux__STATE_VARIABLE_Task_0_22,
  MR_Word * hlds__passes_aux__STATE_VARIABLE_Task_23,
  MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * hlds__passes_aux__STATE_VARIABLE_ModuleInfo_25)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__ValidPredIds_7;

    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_24, &hlds__passes_aux__ValidPredIds_7);
    }
    switch (MR_tag((MR_Word) hlds__passes_aux__STATE_VARIABLE_Task_0_22)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word hlds__passes_aux__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
          MR_Word hlds__passes_aux__TypeCtorInfo_30_30;
          MR_Word hlds__passes_aux__ValidPredIdSet_11;
          MR_Word hlds__passes_aux__PredMap0_12;
          MR_Word hlds__passes_aux__PredIdsInfos0_13;
          MR_Word hlds__passes_aux__PredIdsInfos_14;
          MR_Word hlds__passes_aux__PredMap_15;

          {
            hlds__passes_aux__ValidPredIdSet_11 = mercury__set_tree234__list_to_set_1_f_0(hlds__passes_aux__TypeCtorInfo_29_29, hlds__passes_aux__ValidPredIds_7);
          }
          {
            hlds__hlds_module__module_info_get_preds_2_p_0(hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_24, &hlds__passes_aux__PredMap0_12);
          }
          hlds__passes_aux__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
          {
            mercury__map__to_assoc_list_2_p_0(hlds__passes_aux__TypeCtorInfo_29_29, hlds__passes_aux__TypeCtorInfo_30_30, hlds__passes_aux__PredMap0_12, &hlds__passes_aux__PredIdsInfos0_13);
          }
          {
            hlds__passes_aux__par_process_nonimported_procs_in_preds_5_p_0(hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_24, hlds__passes_aux__STATE_VARIABLE_Task_0_22, hlds__passes_aux__ValidPredIdSet_11, hlds__passes_aux__PredIdsInfos0_13, &hlds__passes_aux__PredIdsInfos_14);
          }
          {
            mercury__map__from_sorted_assoc_list_2_p_0(hlds__passes_aux__TypeCtorInfo_29_29, hlds__passes_aux__TypeCtorInfo_30_30, hlds__passes_aux__PredIdsInfos_14, &hlds__passes_aux__PredMap_15);
          }
          {
            hlds__hlds_module__module_info_set_preds_3_p_0(hlds__passes_aux__PredMap_15, hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_24, hlds__passes_aux__STATE_VARIABLE_ModuleInfo_25);
          }
          *hlds__passes_aux__STATE_VARIABLE_Task_23 = hlds__passes_aux__STATE_VARIABLE_Task_0_22;
        }
        break;
      case (MR_Integer) 3:
        {
          hlds__passes_aux__seq_process_nonimported_procs_in_preds_5_p_0(hlds__passes_aux__ValidPredIds_7, hlds__passes_aux__STATE_VARIABLE_Task_0_22, hlds__passes_aux__STATE_VARIABLE_Task_23, hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_24, hlds__passes_aux__STATE_VARIABLE_ModuleInfo_25);
        }
        break;
    }
  }
}

void MR_CALL 
hlds__passes_aux__process_all_nonimported_procs_3_p_0(
  MR_Word hlds__passes_aux__Task_4,
  MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * hlds__passes_aux__STATE_VARIABLE_ModuleInfo_8)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__V_6_6;

    {
      hlds__passes_aux__process_all_nonimported_procs_update_4_p_0(hlds__passes_aux__Task_4, &hlds__passes_aux__V_6_6, hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_7, hlds__passes_aux__STATE_VARIABLE_ModuleInfo_8);
    }
  }
}

static void MR_CALL 
hlds__passes_aux__process_all_nonimported_preds_errors_7_p_0_1(
  MR_Box hlds__passes_aux__closure_arg,
  MR_Box hlds__passes_aux__wrapper_arg_1,
  MR_Box hlds__passes_aux__wrapper_arg_2,
  MR_Box * hlds__passes_aux__wrapper_arg_3,
  MR_Box hlds__passes_aux__wrapper_arg_4,
  MR_Box * hlds__passes_aux__wrapper_arg_5)
{
  {
    MR_Box hlds__passes_aux__closure = hlds__passes_aux__closure_arg;
    MR_Word hlds__passes_aux__conv1_STATE_VARIABLE_ModuleInfo_15;
    MR_Word hlds__passes_aux__conv0_STATE_VARIABLE_Specs_17;

    {
      hlds__passes_aux__process_nonimported_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__passes_aux__closure, (MR_Integer) 3))), ((MR_Word) hlds__passes_aux__wrapper_arg_1), ((MR_Word) hlds__passes_aux__wrapper_arg_2), &hlds__passes_aux__conv1_STATE_VARIABLE_ModuleInfo_15, ((MR_Word) hlds__passes_aux__wrapper_arg_4), &hlds__passes_aux__conv0_STATE_VARIABLE_Specs_17);
    }
    *hlds__passes_aux__wrapper_arg_3 = ((MR_Box) (hlds__passes_aux__conv1_STATE_VARIABLE_ModuleInfo_15));
    *hlds__passes_aux__wrapper_arg_5 = ((MR_Box) (hlds__passes_aux__conv0_STATE_VARIABLE_Specs_17));
  }
}

void MR_CALL 
hlds__passes_aux__process_all_nonimported_preds_errors_7_p_0(
  MR_Word hlds__passes_aux__Task_8,
  MR_Word hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * hlds__passes_aux__STATE_VARIABLE_ModuleInfo_14,
  MR_Word hlds__passes_aux__STATE_VARIABLE_Specs_0_15,
  MR_Word * hlds__passes_aux__STATE_VARIABLE_Specs_16)
{
  {
    MR_bool hlds__passes_aux__succeeded;
    MR_Word hlds__passes_aux__PredIds_12;
    MR_Word hlds__passes_aux__V_19_19;
    MR_Box hlds__passes_aux__conv3_STATE_VARIABLE_ModuleInfo_14;
    MR_Box hlds__passes_aux__conv2_STATE_VARIABLE_Specs_16;

    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_13, &hlds__passes_aux__PredIds_12);
    }
    {
      hlds__passes_aux__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__passes_aux__V_19_19, 0) = ((MR_Box) (&hlds__passes_aux_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), hlds__passes_aux__V_19_19, 1) = ((MR_Box) (hlds__passes_aux__process_all_nonimported_preds_errors_7_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__passes_aux__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__passes_aux__V_19_19, 3) = ((MR_Box) (hlds__passes_aux__Task_8));
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__passes_aux_scalar_common_1[0], hlds__passes_aux__V_19_19, hlds__passes_aux__PredIds_12, ((MR_Box) (hlds__passes_aux__STATE_VARIABLE_ModuleInfo_0_13)), &hlds__passes_aux__conv3_STATE_VARIABLE_ModuleInfo_14, ((MR_Box) (hlds__passes_aux__STATE_VARIABLE_Specs_0_15)), &hlds__passes_aux__conv2_STATE_VARIABLE_Specs_16);
    }
    *hlds__passes_aux__STATE_VARIABLE_ModuleInfo_14 = ((MR_Word) hlds__passes_aux__conv3_STATE_VARIABLE_ModuleInfo_14);
    *hlds__passes_aux__STATE_VARIABLE_Specs_16 = ((MR_Word) hlds__passes_aux__conv2_STATE_VARIABLE_Specs_16);
  }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.passes_aux. */
