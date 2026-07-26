/*
** Automatically generated from `structure_sharing.analysis.m'
** by the Mercury compiler,
** version rotd-2026-07-26
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


// :- module transform_hlds.ctgc.structure_sharing.analysis.
// :- implementation.

/*
INIT mercury__transform_hlds__ctgc__structure_sharing__analysis__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_sharing.analysis.mih"


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
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "term_conversion.mih"
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
#include "check_hlds.simplify.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.trace_params.mih"
#include "ll_backend.liveness.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_ctgc.mih"
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
#include "parse_tree.prog_type_unify.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.intermod_analysis.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_proc.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "transform_hlds.ctgc.fixpoint_table.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.ctgc.util.mih"
#include "transform_hlds.ctgc.structure_sharing.domain.mih"



struct transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0_s {
  MR_Word transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__ModuleInfo_8;
  MR_Word transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__STATE_VARIABLE_AnalysisInfo_0_34;
  MR_bool transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__succeeded;
  MR_Word transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__Reasons_23;
  jmp_buf transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__commit_0;
  MR_Word transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__Reason_24;
  MR_Box transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__conv0_Reason_24;
  MR_Word transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__Reasons_114;
  jmp_buf transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__commit_1;
  MR_Word transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__Reason_84;
  MR_Box transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__conv1_Reason_84;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__analysis__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0;

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_functor_desc_structure_sharing_answer_0_0;

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_functor_desc_structure_sharing_answer_0_1;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__analysis__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__analysis__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__analysis__pair__ti_pair_2parse_tree__prog_data_pragma__type_ctor_info_datastruct_0parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__analysis__list__ti_list_1pair__ti_pair_2parse_tree__prog_data_pragma__type_ctor_info_datastruct_0parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__field_types_structure_sharing_answer_0_2[3];

static const MR_ConstString transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__field_names_structure_sharing_answer_0_2[3];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_functor_desc_structure_sharing_answer_0_2;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_stag_ordered_structure_sharing_answer_0_0[2];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_stag_ordered_structure_sharing_answer_0_1[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_ptag_ordered_structure_sharing_answer_0[2];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_name_ordered_structure_sharing_answer_0[3];

static const MR_Integer transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__functor_number_map_structure_sharing_answer_0[3];

static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__enum_functor_desc_structure_sharing_call_0_0;

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__enum_ordinal_ordered_structure_sharing_call_0[1];

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__enum_name_ordered_structure_sharing_call_0[1];

static const MR_Integer transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__functor_number_map_structure_sharing_call_0[1];

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__field_types_structure_sharing_func_info_0_0[2];

static const MR_ConstString transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__field_names_structure_sharing_func_info_0_0[2];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_functor_desc_structure_sharing_func_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_stag_ordered_structure_sharing_func_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_ptag_ordered_structure_sharing_func_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_name_ordered_structure_sharing_func_info_0[1];

static const MR_Integer transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__functor_number_map_structure_sharing_func_info_0[1];

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__IntroducedFrom__pred__analyse_scc__425__1_4_p_0(
  MR_Word SharingAndStatus_18,
  MR_Word LambdaHeadVar__1_35,
  MR_Word LambdaHeadVar__2_36,
  MR_Word * LambdaHeadVar__3_37);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__from_term_2_2_p_0(
  MR_Word Term_3);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__to_term_1_1_f_0(void);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__from_term_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__to_term_1_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__equivalent_3_3_p_0(
  MR_Word HeadVar__1_7);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__more_precise_than_3_3_p_0(
  MR_Word HeadVar__1_4);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__equivalent_3_3_p_0(
  MR_Word FuncInfo_4,
  MR_Word Answer1_5,
  MR_Word Answer2_6);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__more_precise_than_3_3_p_0(
  MR_Word FuncInfo_4,
  MR_Word Answer1_5,
  MR_Word Answer2_6);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__get_func_info_6_6_p_0(
  MR_Word ModuleInfo_17,
  MR_Word ModuleName_18,
  MR_Word FuncId_19,
  MR_Word * FuncInfo_22);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__top_2_2_f_0(
  MR_Word HeadVar__1_12);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__bottom_2_2_f_0(
  MR_Word HeadVar__1_10);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0(void);

static MR_Integer MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0(void);

static MR_String MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__analysis_name_2_2_f_0(void);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Compare____ss_fixpoint_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Unify____ss_fixpoint_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Compare____dep_procs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Unify____dep_procs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__handle_dep_procs_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word DepPPId_6,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_14,
  MR_Word * STATE_VARIABLE_AnalysisInfo_15);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word SharingAsTable_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_34,
  MR_Word * STATE_VARIABLE_AnalysisInfo_35);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word SharingAsTable_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_12,
  MR_Word * STATE_VARIABLE_AnalysisInfo_13);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__wrapped_init_1_f_0(
  MR_Word _Id_3);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_119_114_97_112_112_101_100_95_105_110_105_116_95_95_91_49_93_95_48_1_f_0(void);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__update_sharing_in_table_4_p_0(
  MR_Word FixpointTable_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_SharingTable_0_9,
  MR_Word * STATE_VARIABLE_SharingTable_10);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_case_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word PredInfo_17,
  MR_Word ProcInfo_18,
  MR_Word SharingTable_19,
  MR_Word Sharing0_20,
  MR_Word Verbose_21,
  MR_Word Case_22,
  MR_Word STATE_VARIABLE_FixpointTable_0_31,
  MR_Word * STATE_VARIABLE_FixpointTable_32,
  MR_Word STATE_VARIABLE_DepProcs_0_33,
  MR_Word * STATE_VARIABLE_DepProcs_34,
  MR_Word STATE_VARIABLE_Sharing_0_35,
  MR_Word * STATE_VARIABLE_Sharing_36,
  MR_Word STATE_VARIABLE_Status_0_37,
  MR_Word * STATE_VARIABLE_Status_38);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_disj_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word PredInfo_17,
  MR_Word ProcInfo_18,
  MR_Word SharingTable_19,
  MR_Word SharingBeforeDisj_20,
  MR_Word Verbose_21,
  MR_Word Goal_22,
  MR_Word STATE_VARIABLE_FixpointTable_0_28,
  MR_Word * STATE_VARIABLE_FixpointTable_29,
  MR_Word STATE_VARIABLE_DepProcs_0_30,
  MR_Word * STATE_VARIABLE_DepProcs_31,
  MR_Word STATE_VARIABLE_Sharing_0_32,
  MR_Word * STATE_VARIABLE_Sharing_33,
  MR_Word STATE_VARIABLE_Status_0_34,
  MR_Word * STATE_VARIABLE_Status_35);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_goal_with_progress_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word PredInfo_16,
  MR_Word ProcInfo_17,
  MR_Word SharingTable_18,
  MR_Word Verbose_19,
  MR_Word Goal_20,
  MR_Word STATE_VARIABLE_FixpointTable_0_27,
  MR_Word * STATE_VARIABLE_FixpointTable_28,
  MR_Word STATE_VARIABLE_DepProcs_0_29,
  MR_Word * STATE_VARIABLE_DepProcs_30,
  MR_Word STATE_VARIABLE_SharingAs_0_31,
  MR_Word * STATE_VARIABLE_SharingAs_32,
  MR_Word STATE_VARIABLE_Status_0_33,
  MR_Word * STATE_VARIABLE_Status_34);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_pred_proc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_pred_proc_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ModuleInfo_10,
  MR_Word SharingTable_11,
  MR_Word PPId_12,
  MR_Word STATE_VARIABLE_FixpointTable_0_35,
  MR_Word * STATE_VARIABLE_FixpointTable_36,
  MR_Word STATE_VARIABLE_DepProcs_0_37,
  MR_Word * STATE_VARIABLE_DepProcs_38);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_goal_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_goal_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_goal_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_goal_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word PredInfo_16,
  MR_Word ProcInfo_17,
  MR_Word SharingTable_18,
  MR_Word Verbose_19,
  MR_Word Goal_20,
  MR_Word STATE_VARIABLE_FixpointTable_0_80,
  MR_Word * STATE_VARIABLE_FixpointTable_81,
  MR_Word STATE_VARIABLE_DepProcs_0_82,
  MR_Word * STATE_VARIABLE_DepProcs_83,
  MR_Word STATE_VARIABLE_SharingAs_0_84,
  MR_Word * STATE_VARIABLE_SharingAs_85,
  MR_Word STATE_VARIABLE_Status_0_86,
  MR_Word * STATE_VARIABLE_Status_87);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_generic_call_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ProcInfo_10,
  MR_Word GenDetails_11,
  MR_Word CallArgs_12,
  MR_Word Modes_13,
  MR_Word GoalInfo_14,
  MR_Word STATE_VARIABLE_SharingAs_0_32,
  MR_Word * STATE_VARIABLE_SharingAs_33);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__lookup_sharing_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word SharingTable_10,
  MR_Word PPId_11,
  MR_Word STATE_VARIABLE_FixpointTable_0_17,
  MR_Word * STATE_VARIABLE_FixpointTable_18,
  MR_Word * SharingAs_13,
  MR_Word * Status_14,
  MR_Word * IsPredicted_15);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_scc_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_scc_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_scc_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_scc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_scc_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word ModuleInfo_9,
  MR_Word SCC_10,
  MR_Word STATE_VARIABLE_SharingTable_0_24,
  MR_Word * STATE_VARIABLE_SharingTable_25,
  MR_Word STATE_VARIABLE_DepProcs_0_26,
  MR_Word * STATE_VARIABLE_DepProcs_27);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_scc_until_fixpoint_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_scc_until_fixpoint_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ModuleInfo_10,
  MR_Word SCC_11,
  MR_Word SharingTable_12,
  MR_Word STATE_VARIABLE_FixpointTable_0_16,
  MR_Word * STATE_VARIABLE_FixpointTable_17,
  MR_Word STATE_VARIABLE_DepProcs_0_18,
  MR_Word * STATE_VARIABLE_DepProcs_19);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__save_sharing_in_module_info_4_p_0(
  MR_Word PPId_5,
  MR_Word SharingAs_Status_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__simplify_and_detect_liveness_proc_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word PredProcId_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_16,
  MR_Word * STATE_VARIABLE_ProcInfo_17,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__process_intermod_analysis_imported_sharing_in_proc_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word AnalysisInfo_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_ProcTable_0_25,
  MR_Word * STATE_VARIABLE_ProcTable_26);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer_to_domain_5_p_0(
  MR_Word MaybePPId_6,
  MR_Word HeadVarTypes_7,
  MR_Word ProcInfo_8,
  MR_Word Answer_9,
  MR_Word * Sharing_10);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__process_intermod_analysis_imported_sharing_in_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__process_intermod_analysis_imported_sharing_in_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__process_imported_sharing_in_proc_4_p_0(
  MR_Word PredInfo_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ProcTable_0_18,
  MR_Word * STATE_VARIABLE_ProcTable_19);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__process_imported_sharing_in_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__process_imported_sharing_in_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Unify____dep_procs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Compare____dep_procs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Unify____ss_fixpoint_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Compare____ss_fixpoint_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Unify____structure_sharing_answer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Compare____structure_sharing_answer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Unify____structure_sharing_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Compare____structure_sharing_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Unify____structure_sharing_func_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Compare____structure_sharing_func_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__analysis_name_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__bottom_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__top_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__get_func_info_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_6);


static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_1[10][3];

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[9][2];

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_3[3][5];

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_4[3][6];

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_5[4][1];

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_6[1][9];

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_7[3][10];

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_8[6][7];

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_9[1][8];

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_10[1][11];

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_11[1][17];

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_12[2][18];




static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_1[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_call_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_answer_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__analyse_scc_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[9][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_call_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_answer_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[0]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_1[5]))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_3[3][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__call_pattern__arity2__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[2])),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_call_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__answer_pattern__arity2__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_1[2])),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[3])),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_answer_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_4[3][6] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__analysis__arity3__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_3[0])),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_3[1])),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_call_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_answer_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_5[4][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "b")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "sharing")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "t")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "any")) },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_6[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_7[3][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_8[6][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_9[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_10[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_11[1][17] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__analysis_scalar_common_12[2][18] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0 = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__analysis__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_dep_procs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis____Unify____dep_procs_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis____Compare____dep_procs_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_sharing.analysis",
  (MR_String) "dep_procs",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__analysis__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0 = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_ss_fixpoint_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis____Unify____ss_fixpoint_table_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis____Compare____ss_fixpoint_table_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_sharing.analysis",
  (MR_String) "ss_fixpoint_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_functor_desc_structure_sharing_answer_0_0 = {
  (MR_String) "structure_sharing_answer_bottom",
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

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_functor_desc_structure_sharing_answer_0_1 = {
  (MR_String) "structure_sharing_answer_top",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__analysis__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__ctgc__structure_sharing__analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__analysis__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__analysis__pair__ti_pair_2parse_tree__prog_data_pragma__type_ctor_info_datastruct_0parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0),
    (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__analysis__list__ti_list_1pair__ti_pair_2parse_tree__prog_data_pragma__type_ctor_info_datastruct_0parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__ctgc__structure_sharing__analysis__pair__ti_pair_2parse_tree__prog_data_pragma__type_ctor_info_datastruct_0parse_tree__prog_data_pragma__type_ctor_info_datastruct_0) }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__field_types_structure_sharing_answer_0_2[3] = {
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__analysis__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__analysis__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__analysis__list__ti_list_1pair__ti_pair_2parse_tree__prog_data_pragma__type_ctor_info_datastruct_0parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)
};

static const MR_ConstString transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__field_names_structure_sharing_answer_0_2[3] = {
  (MR_String) "ssar_vars",
  (MR_String) "ssar_types",
  (MR_String) "ssar_sharing"
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_functor_desc_structure_sharing_answer_0_2 = {
  (MR_String) "structure_sharing_answer_real",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__field_types_structure_sharing_answer_0_2,
  transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__field_names_structure_sharing_answer_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_stag_ordered_structure_sharing_answer_0_0[2] = {
  &transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_functor_desc_structure_sharing_answer_0_0,
  &transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_functor_desc_structure_sharing_answer_0_1
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_stag_ordered_structure_sharing_answer_0_1[1] = { &transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_functor_desc_structure_sharing_answer_0_2 };

static const MR_DuPtagLayout transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_ptag_ordered_structure_sharing_answer_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_stag_ordered_structure_sharing_answer_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_stag_ordered_structure_sharing_answer_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_name_ordered_structure_sharing_answer_0[3] = {
  &transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_functor_desc_structure_sharing_answer_0_0,
  &transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_functor_desc_structure_sharing_answer_0_2,
  &transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_functor_desc_structure_sharing_answer_0_1
};

static const MR_Integer transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__functor_number_map_structure_sharing_answer_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_answer_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis____Unify____structure_sharing_answer_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis____Compare____structure_sharing_answer_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_sharing.analysis",
  (MR_String) "structure_sharing_answer",
  { transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_name_ordered_structure_sharing_answer_0 },
  { transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_ptag_ordered_structure_sharing_answer_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__functor_number_map_structure_sharing_answer_0,

};

static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__enum_functor_desc_structure_sharing_call_0_0 = {
  (MR_String) "structure_sharing_call",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__enum_ordinal_ordered_structure_sharing_call_0[1] = { &transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__enum_functor_desc_structure_sharing_call_0_0 };

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__enum_name_ordered_structure_sharing_call_0[1] = { &transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__enum_functor_desc_structure_sharing_call_0_0 };

static const MR_Integer transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__functor_number_map_structure_sharing_call_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_call_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis____Unify____structure_sharing_call_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis____Compare____structure_sharing_call_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_sharing.analysis",
  (MR_String) "structure_sharing_call",
  { transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__enum_name_ordered_structure_sharing_call_0 },
  { transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__enum_ordinal_ordered_structure_sharing_call_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__functor_number_map_structure_sharing_call_0,

};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__field_types_structure_sharing_func_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
};

static const MR_ConstString transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__field_names_structure_sharing_func_info_0_0[2] = {
  (MR_String) "ssfi_module",
  (MR_String) "ssfi_proc"
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_functor_desc_structure_sharing_func_info_0_0 = {
  (MR_String) "structure_sharing_func_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__field_types_structure_sharing_func_info_0_0,
  transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__field_names_structure_sharing_func_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_stag_ordered_structure_sharing_func_info_0_0[1] = { &transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_functor_desc_structure_sharing_func_info_0_0 };

static const MR_DuPtagLayout transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_ptag_ordered_structure_sharing_func_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_stag_ordered_structure_sharing_func_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_name_ordered_structure_sharing_func_info_0[1] = { &transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_functor_desc_structure_sharing_func_info_0_0 };

static const MR_Integer transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__functor_number_map_structure_sharing_func_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_func_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis____Unify____structure_sharing_func_info_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis____Compare____structure_sharing_func_info_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_sharing.analysis",
  (MR_String) "structure_sharing_func_info",
  { transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_name_ordered_structure_sharing_func_info_0 },
  { transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__du_ptag_ordered_structure_sharing_func_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__functor_number_map_structure_sharing_func_info_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__from_term_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__from_term_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__partial_order__arity2__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__equivalent_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__partial_order__arity2__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__equivalent_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__call_pattern__arity2__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__[5] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 0))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__answer_pattern__arity2__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0__[5] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 0))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__analysis__arity3__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0__[11] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 6)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__analysis_name_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__bottom_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__top_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__get_func_info_6_6_p_0_10001))
};

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__IntroducedFrom__pred__analyse_scc__425__1_4_p_0(
  MR_Word SharingAndStatus_18,
  MR_Word LambdaHeadVar__1_35,
  MR_Word LambdaHeadVar__2_36,
  MR_Word * LambdaHeadVar__3_37)
{
  transform_hlds__ctgc__structure_sharing__domain__sharing_as_table_set_4_p_0(LambdaHeadVar__1_35, SharingAndStatus_18, LambdaHeadVar__2_36, LambdaHeadVar__3_37);
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__from_term_2_2_p_0(
  MR_Word Term_3)
{
  MR_bool succeeded;
  MR_Word Var_5;
  MR_String Var_6;
  MR_Word Var_7;

  succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_5 = ((MR_Word) ((MR_hl_field(0, Term_3, 0))));
    Var_7 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));
    succeeded = (Var_7 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_6 = ((MR_String) ((MR_hl_field(0, Var_5, 0))));
        succeeded = (strcmp(Var_6, (MR_String) "any") == 0);
      }
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__to_term_1_1_f_0(void)
{
  MR_Word Term_3;
  MR_Word Var_8;

  Var_8 = mercury__term_context__dummy_context_0_f_0();
  {
    Term_3 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_3, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_5[3]));
    MR_hl_field(0, Term_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Term_3, 2) = ((MR_Box) (Var_8));
  }
  return Term_3;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__from_term_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0);
  MR_Word Var_29;
  MR_Word Var_30;
  MR_String Var_32;

  if (succeeded)
  {
    Var_30 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    Var_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_32 = ((MR_String) ((MR_hl_field(0, Var_30, 0))));
      if ((Var_29 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((strcmp(Var_32, (MR_String) "b") == 0))
        {
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
        else
        if ((strcmp(Var_32, (MR_String) "t") == 0))
        {
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 4U);
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
      else
      {
        MR_Word TypeCtorInfo_26_24;
        MR_Word TypeInfo_27_25;
        MR_Word TypeInfo_28_26;
        MR_Word TypeInfo_29_27;
        MR_Word HeadVarsTerm_5;
        MR_Word TypesTerm_6;
        MR_Word SharingPairsTerm_7;
        MR_Word HeadVars_9;
        MR_Word Types_10;
        MR_Word SharingPairs_11;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Box conv0_HeadVars_9;
        MR_Box conv1_Types_10;
        MR_Box conv2_SharingPairs_11;

        succeeded = (strcmp(Var_32, (MR_String) "sharing") == 0);
        if (succeeded)
        {
          HeadVarsTerm_5 = ((MR_Word) ((MR_hl_field(1, Var_29, 0))));
          Var_21 = ((MR_Word) ((MR_hl_field(1, Var_29, 1))));
          succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TypesTerm_6 = ((MR_Word) ((MR_hl_field(1, Var_21, 0))));
            Var_22 = ((MR_Word) ((MR_hl_field(1, Var_21, 1))));
            succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SharingPairsTerm_7 = ((MR_Word) ((MR_hl_field(1, Var_22, 0))));
              Var_23 = ((MR_Word) ((MR_hl_field(1, Var_22, 1))));
              succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TypeCtorInfo_26_24 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                TypeInfo_27_25 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[6]);
                succeeded = mercury__term_conversion__term_to_type_2_p_0(TypeCtorInfo_26_24, TypeInfo_27_25, HeadVarsTerm_5, &conv0_HeadVars_9);
                if (succeeded)
                {
                  HeadVars_9 = ((MR_Word) (conv0_HeadVars_9));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  TypeInfo_28_26 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[7]);
                  succeeded = mercury__term_conversion__term_to_type_2_p_0(TypeCtorInfo_26_24, TypeInfo_28_26, TypesTerm_6, &conv1_Types_10);
                  if (succeeded)
                  {
                    Types_10 = ((MR_Word) (conv1_Types_10));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    TypeInfo_29_27 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[8]);
                    succeeded = mercury__term_conversion__term_to_type_2_p_0(TypeCtorInfo_26_24, TypeInfo_29_27, SharingPairsTerm_7, &conv2_SharingPairs_11);
                    if (succeeded)
                    {
                      SharingPairs_11 = ((MR_Word) (conv2_SharingPairs_11));
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *HeadVar__2_2 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (HeadVars_9));
                        MR_hl_field(1, base, 1) = ((MR_Box) (Types_10));
                        MR_hl_field(1, base, 2) = ((MR_Box) (SharingPairs_11));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__to_term_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_12;

            Var_12 = mercury__term_context__dummy_context_0_f_0();
            {
              HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_5[0]));
              MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_12));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_16;

            Var_16 = mercury__term_context__dummy_context_0_f_0();
            {
              HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_5[2]));
              MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_16));
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word HeadVars_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
        MR_Word Types_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
        MR_Word SharingPairs_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
        MR_Word HeadVarsTerm_6;
        MR_Word TypesTerm_7;
        MR_Word SharingPairsTerm_8;
        MR_Word Var_19;
        MR_Word Var_20;
        MR_Word Var_21;
        MR_Word Var_23;

        mercury__term_conversion__type_to_term_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[6]), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ((MR_Box) (HeadVars_3)), &HeadVarsTerm_6);
        mercury__term_conversion__type_to_term_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[7]), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ((MR_Box) (Types_4)), &TypesTerm_7);
        mercury__term_conversion__type_to_term_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[8]), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ((MR_Box) (SharingPairs_5)), &SharingPairsTerm_8);
        {
          Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_21, 0) = ((MR_Box) (SharingPairsTerm_8));
          MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_20, 0) = ((MR_Box) (TypesTerm_7));
          MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_21));
        }
        {
          Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_19, 0) = ((MR_Box) (HeadVarsTerm_6));
          MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_20));
        }
        Var_23 = mercury__term_context__dummy_context_0_f_0();
        {
          HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_5[1]));
          MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Var_19));
          MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_23));
        }
      }
      break;
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__equivalent_3_3_p_0(
  MR_Word HeadVar__1_7)
{
  return MR_TRUE;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__more_precise_than_3_3_p_0(
  MR_Word HeadVar__1_4)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__semidet_fail_0_p_0();
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__equivalent_3_3_p_0(
  MR_Word FuncInfo_4,
  MR_Word Answer1_5,
  MR_Word Answer2_6)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__structure_sharing__analysis____Unify____structure_sharing_answer_0_0(Answer1_5, Answer2_6);
  if (!(succeeded))
  {
    MR_Word ModuleInfo_7 = ((MR_Word) ((MR_hl_field(0, FuncInfo_4, 0))));
    MR_Word ProcInfo_8 = ((MR_Word) ((MR_hl_field(0, FuncInfo_4, 1))));
    MR_Word HeadVars_9;
    MR_Word VarTable_10;
    MR_Word HeadVarTypes_11;
    MR_Word Sharing1_12;
    MR_Word Sharing2_13;
    MR_Word SharingAs1_14;
    MR_Word SharingAs2_15;

    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_8, &HeadVars_9);
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_8, &VarTable_10);
    parse_tree__var_table__lookup_var_types_3_p_0(VarTable_10, HeadVars_9, &HeadVarTypes_11);
    transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer_to_domain_5_p_0((MR_Word) ((MR_Unsigned) 0U), HeadVarTypes_11, ProcInfo_8, Answer1_5, &Sharing1_12);
    transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer_to_domain_5_p_0((MR_Word) ((MR_Unsigned) 0U), HeadVarTypes_11, ProcInfo_8, Answer2_6, &Sharing2_13);
    SharingAs1_14 = transform_hlds__ctgc__structure_sharing__domain__from_structure_sharing_domain_1_f_0(Sharing1_12);
    SharingAs2_15 = transform_hlds__ctgc__structure_sharing__domain__from_structure_sharing_domain_1_f_0(Sharing2_13);
    succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_p_0(ModuleInfo_7, ProcInfo_8, SharingAs2_15, SharingAs1_14);
    if (succeeded)
      succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_p_0(ModuleInfo_7, ProcInfo_8, SharingAs1_14, SharingAs2_15);
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__more_precise_than_3_3_p_0(
  MR_Word FuncInfo_4,
  MR_Word Answer1_5,
  MR_Word Answer2_6)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_7;
  MR_Word ProcInfo_8;
  MR_Word HeadVars_9;
  MR_Word VarTable_10;
  MR_Word HeadVarTypes_11;
  MR_Word Sharing1_12;
  MR_Word Sharing2_13;
  MR_Word SharingAs1_14;
  MR_Word SharingAs2_15;
  MR_Word Var_16;
  MR_Word Var_17;

  succeeded = transform_hlds__ctgc__structure_sharing__analysis____Unify____structure_sharing_answer_0_0(Answer1_5, Answer2_6);
  succeeded = !(succeeded);
  if (succeeded)
  {
    ModuleInfo_7 = ((MR_Word) ((MR_hl_field(0, FuncInfo_4, 0))));
    ProcInfo_8 = ((MR_Word) ((MR_hl_field(0, FuncInfo_4, 1))));
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_8, &HeadVars_9);
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_8, &VarTable_10);
    parse_tree__var_table__lookup_var_types_3_p_0(VarTable_10, HeadVars_9, &HeadVarTypes_11);
    Var_16 = (MR_Word) ((MR_Unsigned) 0U);
    transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer_to_domain_5_p_0(Var_16, HeadVarTypes_11, ProcInfo_8, Answer1_5, &Sharing1_12);
    Var_17 = (MR_Word) ((MR_Unsigned) 0U);
    transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer_to_domain_5_p_0(Var_17, HeadVarTypes_11, ProcInfo_8, Answer2_6, &Sharing2_13);
    SharingAs1_14 = transform_hlds__ctgc__structure_sharing__domain__from_structure_sharing_domain_1_f_0(Sharing1_12);
    SharingAs2_15 = transform_hlds__ctgc__structure_sharing__domain__from_structure_sharing_domain_1_f_0(Sharing2_13);
    succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_p_0(ModuleInfo_7, ProcInfo_8, SharingAs1_14, SharingAs2_15);
    if (succeeded)
    {
      succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_p_0(ModuleInfo_7, ProcInfo_8, SharingAs2_15, SharingAs1_14);
      succeeded = !(succeeded);
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__get_func_info_6_6_p_0(
  MR_Word ModuleInfo_17,
  MR_Word ModuleName_18,
  MR_Word FuncId_19,
  MR_Word * FuncInfo_22)
{
  MR_Word PPId_23;
  MR_Word ProcInfo_24;

  transform_hlds__mmc_analysis__func_id_to_ppid_4_p_0(ModuleInfo_17, ModuleName_18, FuncId_19, &PPId_23);
  hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_17, PPId_23, &ProcInfo_24);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *FuncInfo_22 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (ProcInfo_24));
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__top_2_2_f_0(
  MR_Word HeadVar__1_12)
{
  return (MR_Word) ((MR_Unsigned) 4U);
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__bottom_2_2_f_0(
  MR_Word HeadVar__1_10)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0(void)
{
  return (MR_Integer) 1;
}

static MR_Integer MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0(void)
{
  return (MR_Integer) 2;
}

static MR_String MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__analysis_name_2_2_f_0(void)
{
  return (MR_String) "structure_sharing";
}

void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Compare____structure_sharing_func_info_0_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      hlds__hlds_pred____Compare____proc_info_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Unify____structure_sharing_func_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Compare____structure_sharing_call_0_0(
  MR_Word * HeadVar__1_1)
{
  transform_hlds__ctgc__structure_sharing__analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_116_114_117_99_116_117_114_101_95_115_104_97_114_105_110_103_95_95_97_110_97_108_121_115_105_115_95_95_115_116_114_117_99_116_117_114_101_95_115_104_97_114_105_110_103_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_116_114_117_99_116_117_114_101_95_115_104_97_114_105_110_103_95_95_97_110_97_108_121_115_105_115_95_95_115_116_114_117_99_116_117_114_101_95_115_104_97_114_105_110_103_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Unify____structure_sharing_call_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Compare____structure_sharing_answer_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
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
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
              MR_Word SubResult1_6;

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[6]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
              {
                MR_Word SubResult2_9;

                mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[7]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
                succeeded = (SubResult2_9 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_9;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[8]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Unify____structure_sharing_answer_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_10 == CastX_9);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_13_13;
          MR_Word TypeInfo_14_14;
          MR_Word TypeInfo_15_15;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Word ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
          MR_Word ArgY3_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
            ArgY3_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
            TypeInfo_13_13 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[6]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
            if (succeeded)
            {
              TypeInfo_14_14 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[7]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
              if (succeeded)
              {
                TypeInfo_15_15 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[8]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
              }
            }
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Compare____ss_fixpoint_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Unify____ss_fixpoint_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Compare____dep_procs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Unify____dep_procs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__handle_dep_procs_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word DepPPId_6,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_14,
  MR_Word * STATE_VARIABLE_AnalysisInfo_15)
{
  MR_Word DepModuleName_8;
  MR_Word DepFuncId_9;
  MR_Word FuncInfo_13;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_FuncInfo_13;

  transform_hlds__mmc_analysis__ppid_to_module_name_func_id_4_p_0(ModuleInfo_5, DepPPId_6, &DepModuleName_8, &DepFuncId_9);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_4[0]), 0)), 10))));
  func_0(((MR_Box) ((MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_4[0]))), ((MR_Box) (ModuleInfo_5)), ((MR_Box) (DepModuleName_8)), ((MR_Box) (DepFuncId_9)), &conv1_FuncInfo_13);
  FuncInfo_13 = ((MR_Word) (conv1_FuncInfo_13));
  analysis__operations__record_dependency_7_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_4[0]), DepModuleName_8, DepFuncId_9, ((MR_Box) (FuncInfo_13)), ((MR_Box) ((MR_Integer) 0)), STATE_VARIABLE_AnalysisInfo_0_14, STATE_VARIABLE_AnalysisInfo_15);
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__Reason_24 = ((MR_Word) ((env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__conv0_Reason_24));
  transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0_s *) (env_ptr_arg);

  if (((MR_tag((MR_Word) (env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__Reason_24)) == (MR_Integer) 2))
    (env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) (env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__Reason_24)) == (MR_Integer) 0))
  {
    MR_Word ShroudedPPId_59 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__Reason_24, 0))));
    MR_Word PredId_60;
    MR_Word PredInfo_62;
    MR_Word PredModule_63;
    MR_Word Var_64;
    MR_Word Var_66;
    MR_Integer Var_61;

    Var_64 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPPId_59);
    PredId_60 = ((MR_Word) ((MR_hl_field(0, Var_64, 0))));
    hlds__hlds_module__module_info_pred_info_3_p_0((env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__ModuleInfo_8, PredId_60, &PredInfo_62);
    PredModule_63 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_62);
    analysis__operations__module_is_local_3_p_0((env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__STATE_VARIABLE_AnalysisInfo_0_34, PredModule_63, &Var_66);
    (env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__succeeded = ((MR_Integer) 0 == Var_66);
  }
  else
    (env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__succeeded = MR_FALSE;
  if ((env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__succeeded)
    transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_1(env_ptr);
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__commit_0) == 0)
    {
      mercury__set__member_2_p_1((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0), &(env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__conv0_Reason_24, (env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__Reasons_23, transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_3, env_ptr);
      (env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_5(
  void * env_ptr_arg)
{
  struct transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__commit_1, 1);
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_7(
  void * env_ptr_arg)
{
  struct transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__Reason_84 = ((MR_Word) ((env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__conv1_Reason_84));
  transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_6(env_ptr);
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_6(
  void * env_ptr_arg)
{
  struct transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0_s *) (env_ptr_arg);

  if (((MR_tag((MR_Word) (env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__Reason_84)) == (MR_Integer) 2))
    (env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) (env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__Reason_84)) == (MR_Integer) 0))
  {
    MR_Word ShroudedPPId_68 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__Reason_84, 0))));
    MR_Word PredId_69;
    MR_Word PredInfo_71;
    MR_Word PredModule_72;
    MR_Word Var_73;
    MR_Word Var_75;
    MR_Integer Var_67;

    Var_73 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPPId_68);
    PredId_69 = ((MR_Word) ((MR_hl_field(0, Var_73, 0))));
    hlds__hlds_module__module_info_pred_info_3_p_0((env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__ModuleInfo_8, PredId_69, &PredInfo_71);
    PredModule_72 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_71);
    analysis__operations__module_is_local_3_p_0((env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__STATE_VARIABLE_AnalysisInfo_0_34, PredModule_72, &Var_75);
    (env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__succeeded = ((MR_Integer) 0 == Var_75);
  }
  else
    (env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__succeeded = MR_FALSE;
  if ((env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__succeeded)
    transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_5(env_ptr);
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_8(
  void * env_ptr_arg)
{
  struct transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__commit_1) == 0)
    {
      mercury__set__member_2_p_1((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0), &(env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__conv1_Reason_84, (env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__Reasons_114, transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_7, env_ptr);
      (env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word SharingAsTable_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_34,
  MR_Word * STATE_VARIABLE_AnalysisInfo_35)
{
  struct transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0_s env;

  (env).transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__ModuleInfo_8 = ModuleInfo_8;
  (env).transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__STATE_VARIABLE_AnalysisInfo_0_34 = STATE_VARIABLE_AnalysisInfo_0_34;
  {
    MR_Word ShouldWrite_14;

    transform_hlds__intermod_analysis__should_write_sharing_info_6_p_0((env).transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__ModuleInfo_8, PredId_10, ProcId_12, PredInfo_11, (MR_Integer) 0, &ShouldWrite_14);
    switch (ShouldWrite_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_AnalysisInfo_35 = (env).transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__STATE_VARIABLE_AnalysisInfo_0_34;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ProcInfo_15;
          MR_Word PPId_16;
          MR_Word Answer_21;
          MR_Word Status_22;
          MR_Word ModuleName_32;
          MR_Word FuncId_33;
          MR_Word SharingAsPrime_17;
          MR_Word StatusPrime_18;
          MR_Word Var_37;
          MR_Unsigned packed_word_0;

          hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo_11, ProcId_12, &ProcInfo_15);
          {
            PPId_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PPId_16, 0) = ((MR_Box) (PredId_10));
            MR_hl_field(0, PPId_16, 1) = ((MR_Box) (ProcId_12));
          }
          (env).transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_table_search_3_p_0(PPId_16, SharingAsTable_9, &Var_37);
          if ((env).transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__succeeded)
          {
            SharingAsPrime_17 = ((MR_Word) ((MR_hl_field(0, Var_37, 0))));
            packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_37, 1)));
            StatusPrime_18 = ((MR_Unsigned) ((MR_hl_field(0, Var_37, 1))) & (MR_Integer) 3);
            (env).transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__succeeded = MR_TRUE;
          }
          if ((env).transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__succeeded)
          {
            MR_Word Sharing_19;

            Sharing_19 = transform_hlds__ctgc__structure_sharing__domain__to_structure_sharing_domain_1_f_0(SharingAsPrime_17);
            switch (MR_tag((MR_Word) Sharing_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  Answer_21 = (MR_Word) ((MR_Unsigned) 0U);
                  Status_22 = (MR_Integer) 2;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word SharingPairs_28 = ((MR_Word) ((MR_hl_field(1, Sharing_19, 0))));
                  MR_Word HeadVars_29;
                  MR_Word VarTable_30;
                  MR_Word HeadVarTypes_31;

                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_15, &HeadVars_29);
                  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_15, &VarTable_30);
                  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_30, HeadVars_29, &HeadVarTypes_31);
                  {
                    Answer_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Answer_21, 0) = ((MR_Box) (HeadVars_29));
                    MR_hl_field(1, Answer_21, 1) = ((MR_Box) (HeadVarTypes_31));
                    MR_hl_field(1, Answer_21, 2) = ((MR_Box) (SharingPairs_28));
                  }
                  Status_22 = StatusPrime_18;
                }
                break;
              case (MR_Integer) 2:
                {
                  (env).transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__Reasons_23 = ((MR_Word) ((MR_hl_field(2, Sharing_19, 0))));
                  Answer_21 = (MR_Word) ((MR_Unsigned) 4U);
                  transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_4(&env);
                  if ((env).transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__succeeded)
                    Status_22 = (MR_Integer) 2;
                  else
                    Status_22 = StatusPrime_18;
                }
                break;
            }
          }
          else
          {
            (env).transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__succeeded = transform_hlds__ctgc__structure_sharing__domain__bottom_sharing_is_safe_approximation_3_p_0((env).transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__ModuleInfo_8, PredInfo_11, ProcInfo_15);
            if ((env).transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__succeeded)
            {
              Answer_21 = (MR_Word) ((MR_Unsigned) 0U);
              Status_22 = (MR_Integer) 2;
            }
            else
            {
              (env).transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__Reasons_114 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0));
              Answer_21 = (MR_Word) ((MR_Unsigned) 4U);
              transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_8(&env);
              if ((env).transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__succeeded)
                Status_22 = (MR_Integer) 2;
              else
                Status_22 = (MR_Integer) 2;
            }
          }
          transform_hlds__mmc_analysis__ppid_to_module_name_func_id_4_p_0((env).transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__ModuleInfo_8, PPId_16, &ModuleName_32, &FuncId_33);
          analysis__operations__record_result_7_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_4[0]), ModuleName_32, FuncId_33, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Answer_21)), Status_22, (env).transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0_env_0__STATE_VARIABLE_AnalysisInfo_0_34, STATE_VARIABLE_AnalysisInfo_35);
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_AnalysisInfo_35;

  transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_2_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AnalysisInfo_35);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AnalysisInfo_35));
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word SharingAsTable_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_12,
  MR_Word * STATE_VARIABLE_AnalysisInfo_13)
{
  MR_Word PredInfo_10;
  MR_Word ProcIds_11;
  MR_Word Var_14;
  MR_Box conv1_STATE_VARIABLE_AnalysisInfo_13;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_8, &PredInfo_10);
  ProcIds_11 = hlds__hlds_pred__pred_info_all_proc_ids_1_f_0(PredInfo_10);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_7[2]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_5_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (SharingAsTable_7));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (PredId_8));
    MR_hl_field(0, Var_14, 6) = ((MR_Box) (PredInfo_10));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0), Var_14, ProcIds_11, ((MR_Box) (STATE_VARIABLE_AnalysisInfo_0_12)), &conv1_STATE_VARIABLE_AnalysisInfo_13);
  *STATE_VARIABLE_AnalysisInfo_13 = ((MR_Word) (conv1_STATE_VARIABLE_AnalysisInfo_13));
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__wrapped_init_1_f_0(
  MR_Word _Id_3)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = transform_hlds__ctgc__structure_sharing__analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_119_114_97_112_112_101_100_95_105_110_105_116_95_95_91_49_93_95_48_1_f_0();
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_119_114_97_112_112_101_100_95_105_110_105_116_95_95_91_49_93_95_48_1_f_0(void)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;

  Var_4 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_init_0_f_0();
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
  }
  return HeadVar__2_2;
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__update_sharing_in_table_4_p_0(
  MR_Word FixpointTable_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_SharingTable_0_9,
  MR_Word * STATE_VARIABLE_SharingTable_10)
{
  MR_Word SharingAs_Status_8;
  MR_Box conv0_SharingAs_Status_8;

  conv0_SharingAs_Status_8 = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0), ((MR_Box) (PPId_6)), FixpointTable_5);
  SharingAs_Status_8 = ((MR_Word) (conv0_SharingAs_Status_8));
  transform_hlds__ctgc__structure_sharing__domain__sharing_as_table_set_4_p_0(PPId_6, SharingAs_Status_8, STATE_VARIABLE_SharingTable_0_9, STATE_VARIABLE_SharingTable_10);
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_case_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word PredInfo_17,
  MR_Word ProcInfo_18,
  MR_Word SharingTable_19,
  MR_Word Sharing0_20,
  MR_Word Verbose_21,
  MR_Word Case_22,
  MR_Word STATE_VARIABLE_FixpointTable_0_31,
  MR_Word * STATE_VARIABLE_FixpointTable_32,
  MR_Word STATE_VARIABLE_DepProcs_0_33,
  MR_Word * STATE_VARIABLE_DepProcs_34,
  MR_Word STATE_VARIABLE_Sharing_0_35,
  MR_Word * STATE_VARIABLE_Sharing_36,
  MR_Word STATE_VARIABLE_Status_0_37,
  MR_Word * STATE_VARIABLE_Status_38)
{
  MR_Word Goal_29 = ((MR_Word) ((MR_hl_field(0, Case_22, 2))));
  MR_Word CaseSharing_30;

  transform_hlds__ctgc__structure_sharing__analysis__analyse_goal_14_p_0(ModuleInfo_16, PredInfo_17, ProcInfo_18, SharingTable_19, Verbose_21, Goal_29, STATE_VARIABLE_FixpointTable_0_31, STATE_VARIABLE_FixpointTable_32, STATE_VARIABLE_DepProcs_0_33, STATE_VARIABLE_DepProcs_34, Sharing0_20, &CaseSharing_30, STATE_VARIABLE_Status_0_37, STATE_VARIABLE_Status_38);
  *STATE_VARIABLE_Sharing_36 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_4_f_0(ModuleInfo_16, ProcInfo_18, STATE_VARIABLE_Sharing_0_35, CaseSharing_30);
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_disj_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word PredInfo_17,
  MR_Word ProcInfo_18,
  MR_Word SharingTable_19,
  MR_Word SharingBeforeDisj_20,
  MR_Word Verbose_21,
  MR_Word Goal_22,
  MR_Word STATE_VARIABLE_FixpointTable_0_28,
  MR_Word * STATE_VARIABLE_FixpointTable_29,
  MR_Word STATE_VARIABLE_DepProcs_0_30,
  MR_Word * STATE_VARIABLE_DepProcs_31,
  MR_Word STATE_VARIABLE_Sharing_0_32,
  MR_Word * STATE_VARIABLE_Sharing_33,
  MR_Word STATE_VARIABLE_Status_0_34,
  MR_Word * STATE_VARIABLE_Status_35)
{
  MR_Word GoalSharing_27;

  transform_hlds__ctgc__structure_sharing__analysis__analyse_goal_14_p_0(ModuleInfo_16, PredInfo_17, ProcInfo_18, SharingTable_19, Verbose_21, Goal_22, STATE_VARIABLE_FixpointTable_0_28, STATE_VARIABLE_FixpointTable_29, STATE_VARIABLE_DepProcs_0_30, STATE_VARIABLE_DepProcs_31, SharingBeforeDisj_20, &GoalSharing_27, STATE_VARIABLE_Status_0_34, STATE_VARIABLE_Status_35);
  *STATE_VARIABLE_Sharing_33 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_4_f_0(ModuleInfo_16, ProcInfo_18, STATE_VARIABLE_Sharing_0_32, GoalSharing_27);
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_goal_with_progress_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word PredInfo_16,
  MR_Word ProcInfo_17,
  MR_Word SharingTable_18,
  MR_Word Verbose_19,
  MR_Word Goal_20,
  MR_Word STATE_VARIABLE_FixpointTable_0_27,
  MR_Word * STATE_VARIABLE_FixpointTable_28,
  MR_Word STATE_VARIABLE_DepProcs_0_29,
  MR_Word * STATE_VARIABLE_DepProcs_30,
  MR_Word STATE_VARIABLE_SharingAs_0_31,
  MR_Word * STATE_VARIABLE_SharingAs_32,
  MR_Word STATE_VARIABLE_Status_0_33,
  MR_Word * STATE_VARIABLE_Status_34)
{
  switch (Verbose_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DebugStream_26;

        hlds__passes_aux__get_debug_output_stream_4_p_0(ModuleInfo_15, &DebugStream_26);
        mercury__io__write_char_4_p_0(DebugStream_26, (MR_Char) 46);
        mercury__io__flush_output_3_p_0(DebugStream_26);
      }
      break;
  }
  transform_hlds__ctgc__structure_sharing__analysis__analyse_goal_14_p_0(ModuleInfo_15, PredInfo_16, ProcInfo_17, SharingTable_18, Verbose_19, Goal_20, STATE_VARIABLE_FixpointTable_0_27, STATE_VARIABLE_FixpointTable_28, STATE_VARIABLE_DepProcs_0_29, STATE_VARIABLE_DepProcs_30, STATE_VARIABLE_SharingAs_0_31, STATE_VARIABLE_SharingAs_32, STATE_VARIABLE_Status_0_33, STATE_VARIABLE_Status_34);
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_pred_proc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_and_status_is_subsumed_by_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_pred_proc_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ModuleInfo_10,
  MR_Word SharingTable_11,
  MR_Word PPId_12,
  MR_Word STATE_VARIABLE_FixpointTable_0_35,
  MR_Word * STATE_VARIABLE_FixpointTable_36,
  MR_Word STATE_VARIABLE_DepProcs_0_37,
  MR_Word * STATE_VARIABLE_DepProcs_38)
{
  MR_bool succeeded;
  MR_Word Globals_15;
  MR_Word Verbose_16;
  MR_Integer WideningLimit_17;
  MR_Word PredInfo_18;
  MR_Word ProcInfo_19;
  MR_Word HeadVars_20;
  MR_Integer Run_21;
  MR_String TabledAsDescr_22;
  MR_Word Status_26;
  MR_Word SharingAs_Status_33;
  MR_String Desc_34;
  MR_Word STATE_VARIABLE_Sharing_1_48;
  MR_Word STATE_VARIABLE_FixpointTable_1_53;
  MR_Word STATE_VARIABLE_Sharing_4_58;
  MR_Word Var_91;
  MR_Word SharingAs_Status_86;
  MR_Box conv0_SharingAs_Status_86;
  MR_String Var_42;
  MR_String Var_45;
  MR_String Var_46;
  MR_String Var_76;
  MR_String Var_79;
  MR_Word DebugStream_83;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 132, &Verbose_16);
  libs__globals__lookup_int_option_3_p_0(Globals_15, (MR_Integer) 366, &WideningLimit_17);
  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_10, PPId_12, &PredInfo_18, &ProcInfo_19);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_19, &HeadVars_20);
  Run_21 = transform_hlds__ctgc__fixpoint_table__which_run_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0), STATE_VARIABLE_FixpointTable_0_35);
  succeeded = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_semidet_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0), ((MR_Box) (PPId_12)), STATE_VARIABLE_FixpointTable_0_35, &conv0_SharingAs_Status_86);
  if (succeeded)
  {
    SharingAs_Status_86 = ((MR_Word) (conv0_SharingAs_Status_86));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word As_87 = ((MR_Word) ((MR_hl_field(0, SharingAs_Status_86, 0))));

    TabledAsDescr_22 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_short_description_1_f_0(As_87);
  }
  else
    TabledAsDescr_22 = (MR_String) "-";
  Var_46 = mercury__string__int_to_string_1_f_0(Run_21);
  Var_45 = mercury__string__f_43_43_2_f_0(Var_46, (MR_String) ")");
  Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "Sharing analysis (run ", Var_45);
  hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(ProgressStream_9, ModuleInfo_10, Var_42, PPId_12);
  STATE_VARIABLE_Sharing_1_48 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_init_0_f_0();
  succeeded = transform_hlds__ctgc__structure_sharing__domain__bottom_sharing_is_safe_approximation_3_p_0(ModuleInfo_10, PredInfo_18, ProcInfo_19);
  if (succeeded)
  {
    MR_Word DebugStream_81;

    hlds__passes_aux__get_debug_output_stream_4_p_0(ModuleInfo_10, &DebugStream_81);
    libs__file_util__maybe_write_string_5_p_0(DebugStream_81, Verbose_16, (MR_String) "\t\t: bottom predicted");
    Status_26 = (MR_Integer) 2;
    STATE_VARIABLE_Sharing_4_58 = STATE_VARIABLE_Sharing_1_48;
    *STATE_VARIABLE_DepProcs_38 = STATE_VARIABLE_DepProcs_0_37;
    STATE_VARIABLE_FixpointTable_1_53 = STATE_VARIABLE_FixpointTable_0_35;
  }
  else
  {
    MR_Word Goal_27;
    MR_String FullAsDescr_28;
    MR_String ProjAsDescr_29;
    MR_Word VarTable_30;
    MR_Word WideningDone_31;
    MR_String WidenAsDescr_32;
    MR_Word STATE_VARIABLE_Sharing_2_55;
    MR_Word STATE_VARIABLE_Sharing_3_57;
    MR_String Var_61;
    MR_String Var_64;
    MR_String Var_65;
    MR_String Var_67;
    MR_String Var_68;
    MR_String Var_70;
    MR_String Var_71;
    MR_Word DebugStream_82;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_19, &Goal_27);
    transform_hlds__ctgc__structure_sharing__analysis__analyse_goal_14_p_0(ModuleInfo_10, PredInfo_18, ProcInfo_19, SharingTable_11, Verbose_16, Goal_27, STATE_VARIABLE_FixpointTable_0_35, &STATE_VARIABLE_FixpointTable_1_53, STATE_VARIABLE_DepProcs_0_37, STATE_VARIABLE_DepProcs_38, STATE_VARIABLE_Sharing_1_48, &STATE_VARIABLE_Sharing_2_55, (MR_Integer) 2, &Status_26);
    FullAsDescr_28 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_short_description_1_f_0(STATE_VARIABLE_Sharing_2_55);
    transform_hlds__ctgc__structure_sharing__domain__sharing_as_project_3_p_0(HeadVars_20, STATE_VARIABLE_Sharing_2_55, &STATE_VARIABLE_Sharing_3_57);
    ProjAsDescr_29 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_short_description_1_f_0(STATE_VARIABLE_Sharing_3_57);
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_19, &VarTable_30);
    transform_hlds__ctgc__structure_sharing__domain__apply_widening_6_p_0(ModuleInfo_10, VarTable_30, WideningLimit_17, &WideningDone_31, STATE_VARIABLE_Sharing_3_57, &STATE_VARIABLE_Sharing_4_58);
    switch (WideningDone_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        WidenAsDescr_32 = (MR_String) "-";
        break;
      case (MR_Integer) 1:
        WidenAsDescr_32 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_short_description_1_f_0(STATE_VARIABLE_Sharing_4_58);
        break;
    }
    hlds__passes_aux__get_debug_output_stream_4_p_0(ModuleInfo_10, &DebugStream_82);
    Var_71 = mercury__string__f_43_43_2_f_0((MR_String) "/", WidenAsDescr_32);
    Var_70 = mercury__string__f_43_43_2_f_0(ProjAsDescr_29, Var_71);
    Var_68 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_70);
    Var_67 = mercury__string__f_43_43_2_f_0(FullAsDescr_28, Var_68);
    Var_65 = mercury__string__f_43_43_2_f_0((MR_String) "->", Var_67);
    Var_64 = mercury__string__f_43_43_2_f_0(TabledAsDescr_22, Var_65);
    Var_61 = mercury__string__f_43_43_2_f_0((MR_String) "\n\t\t: ", Var_64);
    libs__file_util__maybe_write_string_5_p_0(DebugStream_82, Verbose_16, Var_61);
  }
  {
    SharingAs_Status_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SharingAs_Status_33, 0) = ((MR_Box) (STATE_VARIABLE_Sharing_4_58));
    MR_hl_field(0, SharingAs_Status_33, 1) = (MR_Box) ((MR_Unsigned) (Status_26));
  }
  {
    Var_91 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_91, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_8[5]));
    MR_hl_field(0, Var_91, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__analyse_pred_proc_8_p_0_1));
    MR_hl_field(0, Var_91, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_91, 3) = ((MR_Box) (ModuleInfo_10));
    MR_hl_field(0, Var_91, 4) = ((MR_Box) (ProcInfo_19));
  }
  transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_91, ((MR_Box) (PPId_12)), ((MR_Box) (SharingAs_Status_33)), STATE_VARIABLE_FixpointTable_1_53, STATE_VARIABLE_FixpointTable_36);
  Desc_34 = transform_hlds__ctgc__fixpoint_table__description_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0), *STATE_VARIABLE_FixpointTable_36);
  hlds__passes_aux__get_debug_output_stream_4_p_0(ModuleInfo_10, &DebugStream_83);
  Var_79 = mercury__string__f_43_43_2_f_0(Desc_34, (MR_String) ")\n");
  Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t (ft = ", Var_79);
  libs__file_util__maybe_write_string_5_p_0(DebugStream_83, Verbose_16, Var_76);
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_goal_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv19_STATE_VARIABLE_FixpointTable_32;
  MR_Word conv18_STATE_VARIABLE_DepProcs_34;
  MR_Word conv17_STATE_VARIABLE_Sharing_36;
  MR_Word conv16_STATE_VARIABLE_Status_38;

  transform_hlds__ctgc__structure_sharing__analysis__analyse_case_15_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv19_STATE_VARIABLE_FixpointTable_32, ((MR_Word) (wrapper_arg_4)), &conv18_STATE_VARIABLE_DepProcs_34, ((MR_Word) (wrapper_arg_6)), &conv17_STATE_VARIABLE_Sharing_36, ((MR_Word) (wrapper_arg_8)), &conv16_STATE_VARIABLE_Status_38);
  *wrapper_arg_3 = ((MR_Box) (conv19_STATE_VARIABLE_FixpointTable_32));
  *wrapper_arg_5 = ((MR_Box) (conv18_STATE_VARIABLE_DepProcs_34));
  *wrapper_arg_7 = ((MR_Box) (conv17_STATE_VARIABLE_Sharing_36));
  *wrapper_arg_9 = ((MR_Box) (conv16_STATE_VARIABLE_Status_38));
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_goal_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_STATE_VARIABLE_FixpointTable_29;
  MR_Word conv10_STATE_VARIABLE_DepProcs_31;
  MR_Word conv9_STATE_VARIABLE_Sharing_33;
  MR_Word conv8_STATE_VARIABLE_Status_35;

  transform_hlds__ctgc__structure_sharing__analysis__analyse_disj_15_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_FixpointTable_29, ((MR_Word) (wrapper_arg_4)), &conv10_STATE_VARIABLE_DepProcs_31, ((MR_Word) (wrapper_arg_6)), &conv9_STATE_VARIABLE_Sharing_33, ((MR_Word) (wrapper_arg_8)), &conv8_STATE_VARIABLE_Status_35);
  *wrapper_arg_3 = ((MR_Box) (conv11_STATE_VARIABLE_FixpointTable_29));
  *wrapper_arg_5 = ((MR_Box) (conv10_STATE_VARIABLE_DepProcs_31));
  *wrapper_arg_7 = ((MR_Box) (conv9_STATE_VARIABLE_Sharing_33));
  *wrapper_arg_9 = ((MR_Box) (conv8_STATE_VARIABLE_Status_35));
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_goal_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_FixpointTable_28;
  MR_Word conv2_STATE_VARIABLE_DepProcs_30;
  MR_Word conv1_STATE_VARIABLE_SharingAs_32;
  MR_Word conv0_STATE_VARIABLE_Status_34;

  transform_hlds__ctgc__structure_sharing__analysis__analyse_goal_with_progress_14_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_FixpointTable_28, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_DepProcs_30, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_SharingAs_32, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_Status_34);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_FixpointTable_28));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_DepProcs_30));
  *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_SharingAs_32));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_Status_34));
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_goal_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word PredInfo_16,
  MR_Word ProcInfo_17,
  MR_Word SharingTable_18,
  MR_Word Verbose_19,
  MR_Word Goal_20,
  MR_Word STATE_VARIABLE_FixpointTable_0_80,
  MR_Word * STATE_VARIABLE_FixpointTable_81,
  MR_Word STATE_VARIABLE_DepProcs_0_82,
  MR_Word * STATE_VARIABLE_DepProcs_83,
  MR_Word STATE_VARIABLE_SharingAs_0_84,
  MR_Word * STATE_VARIABLE_SharingAs_85,
  MR_Word STATE_VARIABLE_Status_0_86,
  MR_Word * STATE_VARIABLE_Status_87)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_25 = ((MR_Word) ((MR_hl_field(0, Goal_20, 0))));
    MR_Word GoalInfo_26 = ((MR_Word) ((MR_hl_field(0, Goal_20, 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_25)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_FixpointTable_81 = STATE_VARIABLE_FixpointTable_0_80;
          *STATE_VARIABLE_DepProcs_83 = STATE_VARIABLE_DepProcs_0_82;
          *STATE_VARIABLE_SharingAs_85 = STATE_VARIABLE_SharingAs_0_84;
          *STATE_VARIABLE_Status_87 = STATE_VARIABLE_Status_0_86;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_55 = ((MR_Word) ((MR_hl_field(1, GoalExpr_25, 3))));

          *STATE_VARIABLE_SharingAs_85 = transform_hlds__ctgc__structure_sharing__domain__add_unify_sharing_5_f_0(ModuleInfo_15, ProcInfo_17, Unification_55, GoalInfo_26, STATE_VARIABLE_SharingAs_0_84);
          *STATE_VARIABLE_FixpointTable_81 = STATE_VARIABLE_FixpointTable_0_80;
          *STATE_VARIABLE_DepProcs_83 = STATE_VARIABLE_DepProcs_0_82;
          *STATE_VARIABLE_Status_87 = STATE_VARIABLE_Status_0_86;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CalleePredId_31 = ((MR_Word) ((MR_hl_field(2, GoalExpr_25, 0))));
          MR_Integer CalleeProcId_32 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_25, 1))));
          MR_Word CallArgs_33 = ((MR_Word) ((MR_hl_field(2, GoalExpr_25, 2))));
          MR_Word CalleePPId_37;
          MR_Word CalleeSharing_38;
          MR_Word CalleeStatus_39;
          MR_Word IsPredicted_40;
          MR_Word CallerVarTable_43;
          MR_Word ActualTypes_44;
          MR_Word CallerTypeVarSet_45;
          MR_Word CallerHeadParams_46;
          MR_Word RenamedSharing_47;
          MR_Word PredStatus_41;
          MR_Word CalleePredInfo_42;
          MR_Word Var_100;

          {
            CalleePPId_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, CalleePPId_37, 0) = ((MR_Box) (CalleePredId_31));
            MR_hl_field(0, CalleePPId_37, 1) = ((MR_Box) (CalleeProcId_32));
          }
          transform_hlds__ctgc__structure_sharing__analysis__lookup_sharing_8_p_0(ModuleInfo_15, SharingTable_18, CalleePPId_37, STATE_VARIABLE_FixpointTable_0_80, STATE_VARIABLE_FixpointTable_81, &CalleeSharing_38, &CalleeStatus_39, &IsPredicted_40);
          succeeded = (IsPredicted_40 == (MR_Integer) 0);
          if (succeeded)
          {
            hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_16, &PredStatus_41);
            Var_100 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_41);
            succeeded = (Var_100 == (MR_Integer) 1);
            if (succeeded)
            {
              hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_15, CalleePredId_31, &CalleePredInfo_42);
              succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0(CalleePredInfo_42);
              if (succeeded)
              {
                succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(CalleePredInfo_42);
                succeeded = !(succeeded);
              }
            }
          }
          if (succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_DepProcs_83 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (CalleePPId_37));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_DepProcs_0_82));
            }
          else
            *STATE_VARIABLE_DepProcs_83 = STATE_VARIABLE_DepProcs_0_82;
          hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_17, &CallerVarTable_43);
          parse_tree__var_table__lookup_var_types_3_p_0(CallerVarTable_43, CallArgs_33, &ActualTypes_44);
          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_16, &CallerTypeVarSet_45);
          hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(PredInfo_16, &CallerHeadParams_46);
          transform_hlds__ctgc__structure_sharing__domain__sharing_as_rename_using_module_info_8_p_0(ModuleInfo_15, CalleePPId_37, CallArgs_33, ActualTypes_44, CallerTypeVarSet_45, CallerHeadParams_46, CalleeSharing_38, &RenamedSharing_47);
          *STATE_VARIABLE_SharingAs_85 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_comb_4_f_0(ModuleInfo_15, ProcInfo_17, RenamedSharing_47, STATE_VARIABLE_SharingAs_0_84);
          *STATE_VARIABLE_Status_87 = analysis__framework__lub_2_f_0(CalleeStatus_39, STATE_VARIABLE_Status_0_86);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_25, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenDetails_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr_25, 1))));
              MR_Word Modes_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_25, 3))));
              MR_Word CallArgs_136 = ((MR_Word) ((MR_hl_field(3, GoalExpr_25, 2))));

              transform_hlds__ctgc__structure_sharing__analysis__analyse_generic_call_8_p_0(ModuleInfo_15, ProcInfo_17, GenDetails_48, CallArgs_136, Modes_49, GoalInfo_26, STATE_VARIABLE_SharingAs_0_84, STATE_VARIABLE_SharingAs_85);
              *STATE_VARIABLE_FixpointTable_81 = STATE_VARIABLE_FixpointTable_0_80;
              *STATE_VARIABLE_DepProcs_83 = STATE_VARIABLE_DepProcs_0_82;
              *STATE_VARIABLE_Status_87 = STATE_VARIABLE_Status_0_86;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_25, 1))));
              MR_Word ForeignPredId_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr_25, 2))));
              MR_Integer ForeignProcId_73 = ((MR_Integer) ((MR_hl_field(3, GoalExpr_25, 3))));
              MR_Word Args_74 = ((MR_Word) ((MR_hl_field(3, GoalExpr_25, 4))));
              MR_Word ForeignPPId_78;
              MR_Word Context_138;

              Context_138 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_26);
              {
                ForeignPPId_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ForeignPPId_78, 0) = ((MR_Box) (ForeignPredId_72));
                MR_hl_field(0, ForeignPPId_78, 1) = ((MR_Box) (ForeignProcId_73));
              }
              transform_hlds__ctgc__structure_sharing__domain__add_foreign_proc_sharing_9_p_0(ModuleInfo_15, PredInfo_16, ProcInfo_17, ForeignPPId_78, Attributes_71, Args_74, Context_138, STATE_VARIABLE_SharingAs_0_84, STATE_VARIABLE_SharingAs_85);
              *STATE_VARIABLE_FixpointTable_81 = STATE_VARIABLE_FixpointTable_0_80;
              *STATE_VARIABLE_DepProcs_83 = STATE_VARIABLE_DepProcs_0_82;
              *STATE_VARIABLE_Status_87 = STATE_VARIABLE_Status_0_86;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_27 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_25, 1))) & (MR_Integer) 1);
              MR_Word Goals_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr_25, 2))));

              switch (ConjType_27) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Context_29;
                    MR_String ContextStr_30;
                    MR_Word Var_94;
                    MR_String Var_95;
                    MR_String Var_97;

                    Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_26);
                    ContextStr_30 = parse_tree__parse_tree_out_misc__context_to_string_1_f_0(Context_29);
                    Var_97 = mercury__string__f_43_43_2_f_0(ContextStr_30, (MR_String) ")");
                    Var_95 = mercury__string__f_43_43_2_f_0((MR_String) "par_conj (", Var_97);
                    {
                      Var_94 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_94, 0) = ((MR_Box) (Var_95));
                    }
                    *STATE_VARIABLE_SharingAs_85 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_sharing_accumulate_2_f_0(Var_94, STATE_VARIABLE_SharingAs_0_84);
                    *STATE_VARIABLE_FixpointTable_81 = STATE_VARIABLE_FixpointTable_0_80;
                    *STATE_VARIABLE_DepProcs_83 = STATE_VARIABLE_DepProcs_0_82;
                    *STATE_VARIABLE_Status_87 = STATE_VARIABLE_Status_0_86;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_88;
                    MR_Box conv7_STATE_VARIABLE_FixpointTable_81;
                    MR_Box conv6_STATE_VARIABLE_DepProcs_83;
                    MR_Box conv5_STATE_VARIABLE_SharingAs_85;
                    MR_Box conv4_STATE_VARIABLE_Status_87;

                    {
                      Var_88 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_88, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_11[0]));
                      MR_hl_field(0, Var_88, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__analyse_goal_14_p_0_1));
                      MR_hl_field(0, Var_88, 2) = ((MR_Box) ((MR_Integer) 5));
                      MR_hl_field(0, Var_88, 3) = ((MR_Box) (ModuleInfo_15));
                      MR_hl_field(0, Var_88, 4) = ((MR_Box) (PredInfo_16));
                      MR_hl_field(0, Var_88, 5) = ((MR_Box) (ProcInfo_17));
                      MR_hl_field(0, Var_88, 6) = ((MR_Box) (SharingTable_18));
                      MR_hl_field(0, Var_88, 7) = ((MR_Box) (Verbose_19));
                    }
                    mercury__list__foldl4_10_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_1[4]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[5]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0), (MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0), Var_88, Goals_28, ((MR_Box) (STATE_VARIABLE_FixpointTable_0_80)), &conv7_STATE_VARIABLE_FixpointTable_81, ((MR_Box) (STATE_VARIABLE_DepProcs_0_82)), &conv6_STATE_VARIABLE_DepProcs_83, ((MR_Box) (STATE_VARIABLE_SharingAs_0_84)), &conv5_STATE_VARIABLE_SharingAs_85, ((MR_Box) (STATE_VARIABLE_Status_0_86)), &conv4_STATE_VARIABLE_Status_87);
                    *STATE_VARIABLE_FixpointTable_81 = ((MR_Word) (conv7_STATE_VARIABLE_FixpointTable_81));
                    *STATE_VARIABLE_DepProcs_83 = ((MR_Word) (conv6_STATE_VARIABLE_DepProcs_83));
                    *STATE_VARIABLE_SharingAs_85 = ((MR_Word) (conv5_STATE_VARIABLE_SharingAs_85));
                    *STATE_VARIABLE_Status_87 = ((MR_Word) (conv4_STATE_VARIABLE_Status_87));
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_106;
              MR_Word Var_109;
              MR_Word Goals_137 = ((MR_Word) ((MR_hl_field(3, GoalExpr_25, 1))));
              MR_Box conv15_STATE_VARIABLE_FixpointTable_81;
              MR_Box conv14_STATE_VARIABLE_DepProcs_83;
              MR_Box conv13_STATE_VARIABLE_SharingAs_85;
              MR_Box conv12_STATE_VARIABLE_Status_87;

              {
                Var_106 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_106, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_12[0]));
                MR_hl_field(0, Var_106, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__analyse_goal_14_p_0_2));
                MR_hl_field(0, Var_106, 2) = ((MR_Box) ((MR_Integer) 6));
                MR_hl_field(0, Var_106, 3) = ((MR_Box) (ModuleInfo_15));
                MR_hl_field(0, Var_106, 4) = ((MR_Box) (PredInfo_16));
                MR_hl_field(0, Var_106, 5) = ((MR_Box) (ProcInfo_17));
                MR_hl_field(0, Var_106, 6) = ((MR_Box) (SharingTable_18));
                MR_hl_field(0, Var_106, 7) = ((MR_Box) (STATE_VARIABLE_SharingAs_0_84));
                MR_hl_field(0, Var_106, 8) = ((MR_Box) (Verbose_19));
              }
              Var_109 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_init_0_f_0();
              mercury__list__foldl4_10_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_1[4]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[5]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0), (MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0), Var_106, Goals_137, ((MR_Box) (STATE_VARIABLE_FixpointTable_0_80)), &conv15_STATE_VARIABLE_FixpointTable_81, ((MR_Box) (STATE_VARIABLE_DepProcs_0_82)), &conv14_STATE_VARIABLE_DepProcs_83, ((MR_Box) (Var_109)), &conv13_STATE_VARIABLE_SharingAs_85, ((MR_Box) (STATE_VARIABLE_Status_0_86)), &conv12_STATE_VARIABLE_Status_87);
              *STATE_VARIABLE_FixpointTable_81 = ((MR_Word) (conv15_STATE_VARIABLE_FixpointTable_81));
              *STATE_VARIABLE_DepProcs_83 = ((MR_Word) (conv14_STATE_VARIABLE_DepProcs_83));
              *STATE_VARIABLE_SharingAs_85 = ((MR_Word) (conv13_STATE_VARIABLE_SharingAs_85));
              *STATE_VARIABLE_Status_87 = ((MR_Word) (conv12_STATE_VARIABLE_Status_87));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr_25, 3))));
              MR_Word Var_112;
              MR_Word Var_115;
              MR_Box conv23_STATE_VARIABLE_FixpointTable_81;
              MR_Box conv22_STATE_VARIABLE_DepProcs_83;
              MR_Box conv21_STATE_VARIABLE_SharingAs_85;
              MR_Box conv20_STATE_VARIABLE_Status_87;

              {
                Var_112 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_112, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_12[1]));
                MR_hl_field(0, Var_112, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__analyse_goal_14_p_0_3));
                MR_hl_field(0, Var_112, 2) = ((MR_Box) ((MR_Integer) 6));
                MR_hl_field(0, Var_112, 3) = ((MR_Box) (ModuleInfo_15));
                MR_hl_field(0, Var_112, 4) = ((MR_Box) (PredInfo_16));
                MR_hl_field(0, Var_112, 5) = ((MR_Box) (ProcInfo_17));
                MR_hl_field(0, Var_112, 6) = ((MR_Box) (SharingTable_18));
                MR_hl_field(0, Var_112, 7) = ((MR_Box) (STATE_VARIABLE_SharingAs_0_84));
                MR_hl_field(0, Var_112, 8) = ((MR_Box) (Verbose_19));
              }
              Var_115 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_init_0_f_0();
              mercury__list__foldl4_10_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_1[4]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[5]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0), (MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0), Var_112, Cases_59, ((MR_Box) (STATE_VARIABLE_FixpointTable_0_80)), &conv23_STATE_VARIABLE_FixpointTable_81, ((MR_Box) (STATE_VARIABLE_DepProcs_0_82)), &conv22_STATE_VARIABLE_DepProcs_83, ((MR_Box) (Var_115)), &conv21_STATE_VARIABLE_SharingAs_85, ((MR_Box) (STATE_VARIABLE_Status_0_86)), &conv20_STATE_VARIABLE_Status_87);
              *STATE_VARIABLE_FixpointTable_81 = ((MR_Word) (conv23_STATE_VARIABLE_FixpointTable_81));
              *STATE_VARIABLE_DepProcs_83 = ((MR_Word) (conv22_STATE_VARIABLE_DepProcs_83));
              *STATE_VARIABLE_SharingAs_85 = ((MR_Word) (conv21_STATE_VARIABLE_SharingAs_85));
              *STATE_VARIABLE_Status_87 = ((MR_Word) (conv20_STATE_VARIABLE_Status_87));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr_25, 1))));
              MR_Word SubGoal_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr_25, 2))));
              MR_Word Var_118;

              succeeded = ((((MR_tag((MR_Word) Reason_61)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_61, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_118 = ((MR_Unsigned) ((MR_hl_field(3, Reason_61, 2))) & (MR_Integer) 3);
                succeeded = (Var_118 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                *STATE_VARIABLE_Status_87 = STATE_VARIABLE_Status_0_86;
                *STATE_VARIABLE_SharingAs_85 = STATE_VARIABLE_SharingAs_0_84;
                *STATE_VARIABLE_DepProcs_83 = STATE_VARIABLE_DepProcs_0_82;
                *STATE_VARIABLE_FixpointTable_81 = STATE_VARIABLE_FixpointTable_0_80;
              }
              else
              {
                MR_Word next_value_of_Goal_20 = SubGoal_62;

                // direct tailcall eliminated
                ;
                Goal_20 = next_value_of_Goal_20;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word IfGoal_65 = ((MR_Word) ((MR_hl_field(3, GoalExpr_25, 2))));
              MR_Word ThenGoal_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr_25, 3))));
              MR_Word ElseGoal_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr_25, 4))));
              MR_Word IfSharingAs_68;
              MR_Word ThenSharingAs_69;
              MR_Word ElseSharingAs_70;
              MR_Word STATE_VARIABLE_FixpointTable_6_123;
              MR_Word STATE_VARIABLE_DepProcs_6_124;
              MR_Word STATE_VARIABLE_Status_6_125;
              MR_Word STATE_VARIABLE_FixpointTable_7_126;
              MR_Word STATE_VARIABLE_DepProcs_7_127;
              MR_Word STATE_VARIABLE_Status_7_128;

              transform_hlds__ctgc__structure_sharing__analysis__analyse_goal_14_p_0(ModuleInfo_15, PredInfo_16, ProcInfo_17, SharingTable_18, Verbose_19, IfGoal_65, STATE_VARIABLE_FixpointTable_0_80, &STATE_VARIABLE_FixpointTable_6_123, STATE_VARIABLE_DepProcs_0_82, &STATE_VARIABLE_DepProcs_6_124, STATE_VARIABLE_SharingAs_0_84, &IfSharingAs_68, STATE_VARIABLE_Status_0_86, &STATE_VARIABLE_Status_6_125);
              transform_hlds__ctgc__structure_sharing__analysis__analyse_goal_14_p_0(ModuleInfo_15, PredInfo_16, ProcInfo_17, SharingTable_18, Verbose_19, ThenGoal_66, STATE_VARIABLE_FixpointTable_6_123, &STATE_VARIABLE_FixpointTable_7_126, STATE_VARIABLE_DepProcs_6_124, &STATE_VARIABLE_DepProcs_7_127, IfSharingAs_68, &ThenSharingAs_69, STATE_VARIABLE_Status_6_125, &STATE_VARIABLE_Status_7_128);
              transform_hlds__ctgc__structure_sharing__analysis__analyse_goal_14_p_0(ModuleInfo_15, PredInfo_16, ProcInfo_17, SharingTable_18, Verbose_19, ElseGoal_67, STATE_VARIABLE_FixpointTable_7_126, STATE_VARIABLE_FixpointTable_81, STATE_VARIABLE_DepProcs_7_127, STATE_VARIABLE_DepProcs_83, STATE_VARIABLE_SharingAs_0_84, &ElseSharingAs_70, STATE_VARIABLE_Status_7_128, STATE_VARIABLE_Status_87);
              *STATE_VARIABLE_SharingAs_85 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_4_f_0(ModuleInfo_15, ProcInfo_17, ThenSharingAs_69, ElseSharingAs_70);
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_sharing.analysis.analyse_goal\'/14", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_generic_call_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ProcInfo_10,
  MR_Word GenDetails_11,
  MR_Word CallArgs_12,
  MR_Word Modes_13,
  MR_Word GoalInfo_14,
  MR_Word STATE_VARIABLE_SharingAs_0_32,
  MR_Word * STATE_VARIABLE_SharingAs_33)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GenDetails_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_Word CallerVarTable_25;
        MR_Word ActualTypes_26;

        hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_10, &CallerVarTable_25);
        parse_tree__var_table__lookup_var_types_3_p_0(CallerVarTable_25, CallArgs_12, &ActualTypes_26);
        succeeded = transform_hlds__ctgc__structure_sharing__domain__bottom_sharing_is_safe_approximation_by_args_3_p_0(ModuleInfo_9, Modes_13, ActualTypes_26);
        if (succeeded)
          *STATE_VARIABLE_SharingAs_33 = STATE_VARIABLE_SharingAs_0_32;
        else
        {
          MR_Word Context_40;
          MR_String ContextStr_41;
          MR_Word Var_42;
          MR_String Var_43;
          MR_String Var_45;

          Context_40 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_14);
          ContextStr_41 = parse_tree__parse_tree_out_misc__context_to_string_1_f_0(Context_40);
          Var_45 = mercury__string__f_43_43_2_f_0(ContextStr_41, (MR_String) ")");
          Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "generic call (", Var_45);
          {
            Var_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_42, 0) = ((MR_Box) (Var_43));
          }
          *STATE_VARIABLE_SharingAs_33 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_sharing_accumulate_2_f_0(Var_42, STATE_VARIABLE_SharingAs_0_32);
        }
      }
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        MR_Word Context_30;
        MR_String ContextStr_31;
        MR_Word Var_35;
        MR_String Var_36;
        MR_String Var_38;

        Context_30 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_14);
        ContextStr_31 = parse_tree__parse_tree_out_misc__context_to_string_1_f_0(Context_30);
        Var_38 = mercury__string__f_43_43_2_f_0(ContextStr_31, (MR_String) ")");
        Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "generic call (", Var_38);
        {
          Var_35 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_35, 0) = ((MR_Box) (Var_36));
        }
        *STATE_VARIABLE_SharingAs_33 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_sharing_accumulate_2_f_0(Var_35, STATE_VARIABLE_SharingAs_0_32);
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__lookup_sharing_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word SharingTable_10,
  MR_Word PPId_11,
  MR_Word STATE_VARIABLE_FixpointTable_0_17,
  MR_Word * STATE_VARIABLE_FixpointTable_18,
  MR_Word * SharingAs_13,
  MR_Word * Status_14,
  MR_Word * IsPredicted_15)
{
  MR_bool succeeded;
  MR_Word SharingAs_Status_16;
  MR_Word STATE_VARIABLE_FixpointTable_1_19;
  MR_Box conv0_SharingAs_Status_16;

  succeeded = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0), ((MR_Box) (PPId_11)), &conv0_SharingAs_Status_16, STATE_VARIABLE_FixpointTable_0_17, &STATE_VARIABLE_FixpointTable_1_19);
  if (succeeded)
  {
    SharingAs_Status_16 = ((MR_Word) (conv0_SharingAs_Status_16));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *STATE_VARIABLE_FixpointTable_18 = STATE_VARIABLE_FixpointTable_1_19;
    *SharingAs_13 = ((MR_Word) ((MR_hl_field(0, SharingAs_Status_16, 0))));
    *Status_14 = ((MR_Unsigned) ((MR_hl_field(0, SharingAs_Status_16, 1))) & (MR_Integer) 3);
    *IsPredicted_15 = (MR_Integer) 0;
  }
  else
  {
    transform_hlds__ctgc__structure_sharing__domain__lookup_sharing_or_predict_6_p_0(ModuleInfo_9, SharingTable_10, PPId_11, SharingAs_13, Status_14, IsPredicted_15);
    *STATE_VARIABLE_FixpointTable_18 = STATE_VARIABLE_FixpointTable_0_17;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_scc_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_SharingTable_10;

  transform_hlds__ctgc__structure_sharing__analysis__update_sharing_in_table_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_SharingTable_10);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_SharingTable_10));
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_scc_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  conv3_HeadVar__2_2 = transform_hlds__ctgc__structure_sharing__analysis__wrapped_init_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_scc_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__3_37;

  transform_hlds__ctgc__structure_sharing__analysis__IntroducedFrom__pred__analyse_scc__425__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_37);
  *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_37));
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_scc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = hlds__hlds_out__hlds_out_util__pred_proc_id_to_dev_string_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_scc_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word ModuleInfo_9,
  MR_Word SCC_10,
  MR_Word STATE_VARIABLE_SharingTable_0_24,
  MR_Word * STATE_VARIABLE_SharingTable_25,
  MR_Word STATE_VARIABLE_DepProcs_0_26,
  MR_Word * STATE_VARIABLE_DepProcs_27)
{
  MR_bool succeeded;
  MR_Word SCCProcs_13;

  mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCC_10, &SCCProcs_13);
  succeeded = transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0(ModuleInfo_9, SCC_10);
  if (succeeded)
  {
    MR_Word ProcsStrs_14;
    MR_String ProcsStr_15;
    MR_String Msg_16;
    MR_Word SharingAs_17;
    MR_Word SharingAndStatus_18;
    MR_Word Var_28;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_Box conv2_STATE_VARIABLE_SharingTable_25;

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_4[2]));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__analyse_scc_7_p_0_1));
      MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_28, 3) = ((MR_Box) (ModuleInfo_9));
    }
    ProcsStrs_14 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_28, SCCProcs_13);
    ProcsStr_15 = mercury__string__join_list_2_f_0((MR_String) ", ", ProcsStrs_14);
    Msg_16 = mercury__string__f_43_43_2_f_0((MR_String) "SCC cannot be analysed: ", ProcsStr_15);
    {
      Var_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_31, 0) = ((MR_Box) (Msg_16));
    }
    SharingAs_17 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_sharing_1_f_0(Var_31);
    {
      SharingAndStatus_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SharingAndStatus_18, 0) = ((MR_Box) (SharingAs_17));
      MR_hl_field(0, SharingAndStatus_18, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    }
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_33, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_8[3]));
      MR_hl_field(0, Var_33, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__analyse_scc_7_p_0_2));
      MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_33, 3) = ((MR_Box) (SharingAndStatus_18));
    }
    mercury__set__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_1[3]), Var_33, SCC_10, ((MR_Box) (STATE_VARIABLE_SharingTable_0_24)), &conv2_STATE_VARIABLE_SharingTable_25);
    *STATE_VARIABLE_SharingTable_25 = ((MR_Word) (conv2_STATE_VARIABLE_SharingTable_25));
    *STATE_VARIABLE_DepProcs_27 = STATE_VARIABLE_DepProcs_0_26;
  }
  else
  {
    MR_Word FixpointTable0_22;
    MR_Word FixpointTable_23;
    MR_Word Var_39;
    MR_Box conv5_STATE_VARIABLE_SharingTable_25;

    FixpointTable0_22 = transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_1[9]), SCCProcs_13);
    transform_hlds__ctgc__structure_sharing__analysis__analyse_scc_until_fixpoint_8_p_0(ProgressStream_8, ModuleInfo_9, SCCProcs_13, STATE_VARIABLE_SharingTable_0_24, FixpointTable0_22, &FixpointTable_23, STATE_VARIABLE_DepProcs_0_26, STATE_VARIABLE_DepProcs_27);
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_39, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_8[4]));
      MR_hl_field(0, Var_39, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__analyse_scc_7_p_0_4));
      MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_39, 3) = ((MR_Box) (FixpointTable_23));
    }
    mercury__set__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_1[3]), Var_39, SCC_10, ((MR_Box) (STATE_VARIABLE_SharingTable_0_24)), &conv5_STATE_VARIABLE_SharingTable_25);
    *STATE_VARIABLE_SharingTable_25 = ((MR_Word) (conv5_STATE_VARIABLE_SharingTable_25));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_scc_until_fixpoint_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_FixpointTable_36;
  MR_Word conv0_STATE_VARIABLE_DepProcs_38;

  transform_hlds__ctgc__structure_sharing__analysis__analyse_pred_proc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_FixpointTable_36, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_DepProcs_38);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_FixpointTable_36));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_DepProcs_38));
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__analyse_scc_until_fixpoint_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ModuleInfo_10,
  MR_Word SCC_11,
  MR_Word SharingTable_12,
  MR_Word STATE_VARIABLE_FixpointTable_0_16,
  MR_Word * STATE_VARIABLE_FixpointTable_17,
  MR_Word STATE_VARIABLE_DepProcs_0_18,
  MR_Word * STATE_VARIABLE_DepProcs_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Run_15;
    MR_Word Var_28;
    MR_Word STATE_VARIABLE_FixpointTable_1_29;
    MR_Word STATE_VARIABLE_DepProcs_1_30;
    MR_Box conv3_STATE_VARIABLE_FixpointTable_1_29;
    MR_Box conv2_STATE_VARIABLE_DepProcs_1_30;

    // setup for model_det tailcalls optimized into a loop
    ;
    Run_15 = transform_hlds__ctgc__fixpoint_table__which_run_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0), STATE_VARIABLE_FixpointTable_0_16);
    succeeded = (Run_15 > (MR_Integer) 100);
    if (succeeded)
    {
      MR_String Var_22;
      MR_String Var_24;
      MR_String Var_25;

      Var_25 = mercury__string__from_int_1_f_0((MR_Integer) 100);
      Var_24 = mercury__string__f_43_43_2_f_0(Var_25, (MR_String) " runs");
      Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "fixpoint not reached after ", Var_24);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_sharing.analysis.analyse_scc_until_fixpoint\'/8", Var_22);
        return;
      }
    }
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_10[0]));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__analyse_scc_until_fixpoint_8_p_0_1));
      MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_28, 3) = ((MR_Box) (ProgressStream_9));
      MR_hl_field(0, Var_28, 4) = ((MR_Box) (ModuleInfo_10));
      MR_hl_field(0, Var_28, 5) = ((MR_Box) (SharingTable_12));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_1[4]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[5]), Var_28, SCC_11, ((MR_Box) (STATE_VARIABLE_FixpointTable_0_16)), &conv3_STATE_VARIABLE_FixpointTable_1_29, ((MR_Box) (STATE_VARIABLE_DepProcs_0_18)), &conv2_STATE_VARIABLE_DepProcs_1_30);
    STATE_VARIABLE_FixpointTable_1_29 = ((MR_Word) (conv3_STATE_VARIABLE_FixpointTable_1_29));
    STATE_VARIABLE_DepProcs_1_30 = ((MR_Word) (conv2_STATE_VARIABLE_DepProcs_1_30));
    succeeded = transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0), STATE_VARIABLE_FixpointTable_1_29);
    if (succeeded)
    {
      *STATE_VARIABLE_DepProcs_19 = STATE_VARIABLE_DepProcs_1_30;
      *STATE_VARIABLE_FixpointTable_17 = STATE_VARIABLE_FixpointTable_1_29;
    }
    else
    {
      MR_Word STATE_VARIABLE_FixpointTable_2_31;
      MR_Word next_value_of_STATE_VARIABLE_FixpointTable_0_16;
      MR_Word next_value_of_STATE_VARIABLE_DepProcs_0_18;

      transform_hlds__ctgc__fixpoint_table__new_run_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0), STATE_VARIABLE_FixpointTable_1_29, &STATE_VARIABLE_FixpointTable_2_31);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_FixpointTable_0_16 = STATE_VARIABLE_FixpointTable_2_31;
      next_value_of_STATE_VARIABLE_DepProcs_0_18 = STATE_VARIABLE_DepProcs_1_30;
      STATE_VARIABLE_FixpointTable_0_16 = next_value_of_STATE_VARIABLE_FixpointTable_0_16;
      STATE_VARIABLE_DepProcs_0_18 = next_value_of_STATE_VARIABLE_DepProcs_0_18;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__save_sharing_in_module_info_4_p_0(
  MR_Word PPId_5,
  MR_Word SharingAs_Status_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15)
{
  MR_Word SharingAs_8 = ((MR_Word) ((MR_hl_field(0, SharingAs_Status_6, 0))));
  MR_Word Status_9 = ((MR_Unsigned) ((MR_hl_field(0, SharingAs_Status_6, 1))) & (MR_Integer) 3);
  MR_Word PredInfo_10;
  MR_Word ProcInfo0_11;
  MR_Word SharingDomain_12;
  MR_Word ProcInfo_13;
  MR_Word Var_16;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_14, PPId_5, &PredInfo_10, &ProcInfo0_11);
  SharingDomain_12 = transform_hlds__ctgc__structure_sharing__domain__to_structure_sharing_domain_1_f_0(SharingAs_8);
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (SharingDomain_12));
    MR_hl_field(0, Var_16, 1) = (MR_Box) ((MR_Unsigned) (Status_9));
  }
  hlds__hlds_pred__proc_info_set_structure_sharing_3_p_0(Var_16, ProcInfo0_11, &ProcInfo_13);
  hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PPId_5, PredInfo_10, ProcInfo_13, STATE_VARIABLE_ModuleInfo_0_14, STATE_VARIABLE_ModuleInfo_15);
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__simplify_and_detect_liveness_proc_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word PredProcId_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_16,
  MR_Word * STATE_VARIABLE_ProcInfo_17,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19)
{
  MR_Word Globals_11;
  MR_Word SimplifyTasks_12;
  MR_Word PredId_13;
  MR_Integer ProcId_14;
  MR_Word STATE_VARIABLE_ProcInfo_1_21;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_18, &Globals_11);
  SimplifyTasks_12 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_2_f_0(Globals_11, (MR_Word) ((MR_Unsigned) 0U));
  PredId_13 = ((MR_Word) ((MR_hl_field(0, PredProcId_8, 0))));
  ProcId_14 = ((MR_Integer) ((MR_hl_field(0, PredProcId_8, 1))));
  check_hlds__simplify__simplify_proc__simplify_proc_9_p_0((MR_Word) ((MR_Unsigned) 0U), ProgressStream_7, SimplifyTasks_12, PredId_13, ProcId_14, STATE_VARIABLE_ProcInfo_0_16, &STATE_VARIABLE_ProcInfo_1_21, STATE_VARIABLE_ModuleInfo_0_18, STATE_VARIABLE_ModuleInfo_19);
  ll_backend__liveness__detect_liveness_proc_4_p_0(*STATE_VARIABLE_ModuleInfo_19, PredProcId_8, STATE_VARIABLE_ProcInfo_1_21, STATE_VARIABLE_ProcInfo_17);
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__process_intermod_analysis_imported_sharing_in_proc_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word AnalysisInfo_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_ProcTable_0_25,
  MR_Word * STATE_VARIABLE_ProcTable_26)
{
  MR_Word PPId_14;
  MR_Word ModuleName_16;
  MR_Word FuncId_17;
  MR_Word FuncInfo_18;
  MR_Word MaybeBestResult_19;
  MR_Word STATE_VARIABLE_ProcInfo_1_27;
  MR_Box conv0_STATE_VARIABLE_ProcInfo_1_27;

  {
    PPId_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PPId_14, 0) = ((MR_Box) (PredId_10));
    MR_hl_field(0, PPId_14, 1) = ((MR_Box) (ProcId_12));
  }
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_25, ((MR_Box) (ProcId_12)), &conv0_STATE_VARIABLE_ProcInfo_1_27);
  STATE_VARIABLE_ProcInfo_1_27 = ((MR_Word) (conv0_STATE_VARIABLE_ProcInfo_1_27));
  transform_hlds__mmc_analysis__ppid_to_module_name_func_id_4_p_0(ModuleInfo_8, PPId_14, &ModuleName_16, &FuncId_17);
  {
    FuncInfo_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FuncInfo_18, 0) = ((MR_Box) (ModuleInfo_8));
    MR_hl_field(0, FuncInfo_18, 1) = ((MR_Box) (STATE_VARIABLE_ProcInfo_1_27));
  }
  analysis__operations__lookup_best_result_6_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_4[0]), AnalysisInfo_9, ModuleName_16, FuncId_17, ((MR_Box) (FuncInfo_18)), ((MR_Box) ((MR_Integer) 0)), &MaybeBestResult_19);
  if ((MaybeBestResult_19 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_ProcTable_26 = STATE_VARIABLE_ProcTable_0_25;
  else
  {
    MR_Word Answer_21;
    MR_Word ResultStatus_22;
    MR_Word HeadVarTypes_23;
    MR_Word Sharing_24;
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(1, MaybeBestResult_19, 0))));
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_ProcInfo_2_32;

    Answer_21 = ((MR_Word) ((MR_hl_field(0, Var_29, 1))));
    ResultStatus_22 = ((MR_Unsigned) ((MR_hl_field(0, Var_29, 2))) & (MR_Integer) 3);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_11, &HeadVarTypes_23);
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (PPId_14));
    }
    transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer_to_domain_5_p_0(Var_30, HeadVarTypes_23, STATE_VARIABLE_ProcInfo_1_27, Answer_21, &Sharing_24);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_31, 0) = ((MR_Box) (Sharing_24));
      MR_hl_field(0, Var_31, 1) = (MR_Box) ((MR_Unsigned) (ResultStatus_22));
    }
    hlds__hlds_pred__proc_info_set_structure_sharing_3_p_0(Var_31, STATE_VARIABLE_ProcInfo_1_27, &STATE_VARIABLE_ProcInfo_2_32);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_12)), ((MR_Box) (STATE_VARIABLE_ProcInfo_2_32)), STATE_VARIABLE_ProcTable_0_25, STATE_VARIABLE_ProcTable_26);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer_to_domain_5_p_0(
  MR_Word MaybePPId_6,
  MR_Word HeadVarTypes_7,
  MR_Word ProcInfo_8,
  MR_Word Answer_9,
  MR_Word * Sharing_10)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Answer_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Answer_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Sharing_10 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            MR_Word TopReason_12;

            if ((MaybePPId_6 == (MR_Word) ((MR_Unsigned) 0U)))
              TopReason_12 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0));
            else
            {
              MR_Word PPId_11 = ((MR_Word) ((MR_hl_field(1, MaybePPId_6, 0))));
              MR_Word Var_20;
              MR_Word Var_21;

              Var_21 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(PPId_11);
              {
                Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
              }
              TopReason_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0), ((MR_Box) (Var_20)));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Sharing_10 = base;
              MR_hl_field(2, base, 0) = ((MR_Box) (TopReason_12));
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ImpHeadVars_13 = ((MR_Word) ((MR_hl_field(1, Answer_9, 0))));
        MR_Word ImpTypes_14 = ((MR_Word) ((MR_hl_field(1, Answer_9, 1))));
        MR_Word ImpSharingPairs_15 = ((MR_Word) ((MR_hl_field(1, Answer_9, 2))));
        MR_Word HeadVars_16;
        MR_Word VarRenaming_17;
        MR_Word TypeSubst_18;
        MR_Word Var_23;

        hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_8, &HeadVars_16);
        mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[0]), ImpHeadVars_13, HeadVars_16, &VarRenaming_17);
        Var_23 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
        succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(ImpTypes_14, HeadVarTypes_7, (MR_Word) ((MR_Unsigned) 0U), Var_23, &TypeSubst_18);
        if (succeeded)
        {
          MR_Word SharingPairs_19;

          parse_tree__prog_ctgc__rename_structure_sharing_4_p_0(VarRenaming_17, TypeSubst_18, ImpSharingPairs_15, &SharingPairs_19);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Sharing_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (SharingPairs_19));
          }
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_sharing.analysis.structure_sharing_answer_to_domain\'/5", (MR_String) "type_unify_list failed");
            return;
          }
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__process_intermod_analysis_imported_sharing_in_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ProcTable_26;

  transform_hlds__ctgc__structure_sharing__analysis__process_intermod_analysis_imported_sharing_in_proc_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ProcTable_26);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ProcTable_26));
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__process_intermod_analysis_imported_sharing_in_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  MR_bool succeeded;
  MR_Word PredInfo0_6;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_9, PredId_4, &PredInfo0_6);
  succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0(PredInfo0_6);
  if (succeeded)
  {
    MR_Word AnalysisInfo_7;
    MR_Word PredInfo_8;
    MR_Word ProcIds_11;
    MR_Word STATE_VARIABLE_ProcTable_1_12;
    MR_Word Var_13;
    MR_Word STATE_VARIABLE_ProcTable_2_14;
    MR_Box conv1_STATE_VARIABLE_ProcTable_2_14;

    hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_9, &AnalysisInfo_7);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_6, &STATE_VARIABLE_ProcTable_1_12);
    ProcIds_11 = hlds__hlds_pred__pred_info_all_proc_ids_1_f_0(PredInfo0_6);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_13, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_7[1]));
      MR_hl_field(0, Var_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__process_intermod_analysis_imported_sharing_in_pred_3_p_0_1));
      MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_13, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_9));
      MR_hl_field(0, Var_13, 4) = ((MR_Box) (AnalysisInfo_7));
      MR_hl_field(0, Var_13, 5) = ((MR_Box) (PredId_4));
      MR_hl_field(0, Var_13, 6) = ((MR_Box) (PredInfo0_6));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_1[0]), Var_13, ProcIds_11, ((MR_Box) (STATE_VARIABLE_ProcTable_1_12)), &conv1_STATE_VARIABLE_ProcTable_2_14);
    STATE_VARIABLE_ProcTable_2_14 = ((MR_Word) (conv1_STATE_VARIABLE_ProcTable_2_14));
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(STATE_VARIABLE_ProcTable_2_14, PredInfo0_6, &PredInfo_8);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_4, PredInfo_8, STATE_VARIABLE_ModuleInfo_0_9, STATE_VARIABLE_ModuleInfo_10);
  }
  else
    *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_0_9;
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__process_imported_sharing_in_proc_4_p_0(
  MR_Word PredInfo_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ProcTable_0_18,
  MR_Word * STATE_VARIABLE_ProcTable_19)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_ProcInfo_1_20;
  MR_Box conv0_STATE_VARIABLE_ProcInfo_1_20;
  MR_Word ImpHeadVars_9;
  MR_Word ImpTypes_10;
  MR_Word ImpSharing_11;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_18, ((MR_Box) (ProcId_6)), &conv0_STATE_VARIABLE_ProcInfo_1_20);
  STATE_VARIABLE_ProcInfo_1_20 = ((MR_Word) (conv0_STATE_VARIABLE_ProcInfo_1_20));
  succeeded = hlds__hlds_pred__proc_info_get_imported_structure_sharing_4_p_0(STATE_VARIABLE_ProcInfo_1_20, &ImpHeadVars_9, &ImpTypes_10, &ImpSharing_11);
  if (succeeded)
  {
    MR_Word HeadVars_12;
    MR_Word HeadVarTypes_13;
    MR_Word VarRenaming_14;
    MR_Word Sharing_17;
    MR_Word STATE_VARIABLE_TypeSubst_1_21;
    MR_Word STATE_VARIABLE_TypeSubst_2_23;
    MR_Word Var_24;
    MR_Word STATE_VARIABLE_ProcInfo_2_25;
    MR_Word STATE_VARIABLE_ProcInfo_3_27;
    MR_Word TypeSubstNew_16;

    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_1_20, &HeadVars_12);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_5, &HeadVarTypes_13);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[0]), ImpHeadVars_9, HeadVars_12, &VarRenaming_14);
    STATE_VARIABLE_TypeSubst_1_21 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
    succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(ImpTypes_10, HeadVarTypes_13, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_TypeSubst_1_21, &TypeSubstNew_16);
    if (succeeded)
      STATE_VARIABLE_TypeSubst_2_23 = TypeSubstNew_16;
    else
      STATE_VARIABLE_TypeSubst_2_23 = STATE_VARIABLE_TypeSubst_1_21;
    parse_tree__prog_ctgc__rename_structure_sharing_domain_4_p_0(VarRenaming_14, STATE_VARIABLE_TypeSubst_2_23, ImpSharing_11, &Sharing_17);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (Sharing_17));
      MR_hl_field(0, Var_24, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    }
    hlds__hlds_pred__proc_info_set_structure_sharing_3_p_0(Var_24, STATE_VARIABLE_ProcInfo_1_20, &STATE_VARIABLE_ProcInfo_2_25);
    hlds__hlds_pred__proc_info_reset_imported_structure_sharing_2_p_0(STATE_VARIABLE_ProcInfo_2_25, &STATE_VARIABLE_ProcInfo_3_27);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_6)), ((MR_Box) (STATE_VARIABLE_ProcInfo_3_27)), STATE_VARIABLE_ProcTable_0_18, STATE_VARIABLE_ProcTable_19);
  }
  else
    *STATE_VARIABLE_ProcTable_19 = STATE_VARIABLE_ProcTable_0_18;
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__process_imported_sharing_in_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ProcTable_19;

  transform_hlds__ctgc__structure_sharing__analysis__process_imported_sharing_in_proc_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ProcTable_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ProcTable_19));
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__process_imported_sharing_in_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  MR_Word PredInfo0_6;
  MR_Word PredInfo_7;
  MR_Word ProcIds_10;
  MR_Word STATE_VARIABLE_ProcTable_1_11;
  MR_Word Var_12;
  MR_Word STATE_VARIABLE_ProcTable_2_13;
  MR_Box conv1_STATE_VARIABLE_ProcTable_2_13;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_8, PredId_4, &PredInfo0_6);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_6, &STATE_VARIABLE_ProcTable_1_11);
  ProcIds_10 = hlds__hlds_pred__pred_info_all_proc_ids_1_f_0(PredInfo0_6);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_8[2]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__process_imported_sharing_in_pred_3_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (PredInfo0_6));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_1[0]), Var_12, ProcIds_10, ((MR_Box) (STATE_VARIABLE_ProcTable_1_11)), &conv1_STATE_VARIABLE_ProcTable_2_13);
  STATE_VARIABLE_ProcTable_2_13 = ((MR_Word) (conv1_STATE_VARIABLE_ProcTable_2_13));
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(STATE_VARIABLE_ProcTable_2_13, PredInfo0_6, &PredInfo_7);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_4, PredInfo_7, STATE_VARIABLE_ModuleInfo_0_8, STATE_VARIABLE_ModuleInfo_9);
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_STATE_VARIABLE_AnalysisInfo_15;

  transform_hlds__ctgc__structure_sharing__analysis__handle_dep_procs_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_AnalysisInfo_15);
  *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_AnalysisInfo_15));
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_AnalysisInfo_13;

  transform_hlds__ctgc__structure_sharing__analysis__maybe_record_sharing_analysis_result_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_AnalysisInfo_13);
  *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_AnalysisInfo_13));
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_ModuleInfo_15;

  transform_hlds__ctgc__structure_sharing__analysis__save_sharing_in_module_info_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv10_STATE_VARIABLE_ModuleInfo_15);
  *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_ModuleInfo_15));
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_SharingTable_25;
  MR_Word conv6_STATE_VARIABLE_DepProcs_27;

  transform_hlds__ctgc__structure_sharing__analysis__analyse_scc_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_SharingTable_25, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_DepProcs_27);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_SharingTable_25));
  *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_DepProcs_27));
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_ProcInfo_17;
  MR_Word conv4_STATE_VARIABLE_ModuleInfo_19;

  transform_hlds__ctgc__structure_sharing__analysis__simplify_and_detect_liveness_proc_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_ProcInfo_17, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_ModuleInfo_19);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_ProcInfo_17));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_ModuleInfo_19));
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_10;

  transform_hlds__ctgc__structure_sharing__analysis__process_intermod_analysis_imported_sharing_in_pred_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_10);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_10));
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_9;

  transform_hlds__ctgc__structure_sharing__analysis__process_imported_sharing_in_pred_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_9));
}

void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0(
  MR_Word ProgressStream_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  MR_bool succeeded;
  MR_Word Globals_6;
  MR_Word IntermodAnalysis_7;
  MR_Word LoadedSharingTable_8;
  MR_Word ProcAnalysisKinds0_9;
  MR_Word ProcAnalysisKinds_10;
  MR_Word STATE_VARIABLE_ModuleInfo_1_14;
  MR_Word STATE_VARIABLE_ModuleInfo_3_16;
  MR_Word STATE_VARIABLE_ModuleInfo_4_17;
  MR_Word STATE_VARIABLE_ModuleInfo_5_18;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word DepInfo_31;
  MR_Word SCCs_32;
  MR_Word DepProcs_33;
  MR_Word Globals_34;
  MR_Word OpMode_35;
  MR_Word STATE_VARIABLE_ModuleInfo_1_38;
  MR_Word Var_39;
  MR_Word STATE_VARIABLE_SharingTable_1_40;
  MR_Word STATE_VARIABLE_ModuleInfo_2_43;
  MR_Box conv9_STATE_VARIABLE_SharingTable_1_40;
  MR_Box conv8_DepProcs_33;
  MR_Box conv11_STATE_VARIABLE_ModuleInfo_2_43;
  MR_Word Var_44;
  MR_Word Var_45;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &Globals_6);
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 436, &IntermodAnalysis_7);
  switch (IntermodAnalysis_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PredIds_21;
        MR_Box conv1_STATE_VARIABLE_ModuleInfo_1_14;

        hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &PredIds_21);
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_1[6]), PredIds_21, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_11)), &conv1_STATE_VARIABLE_ModuleInfo_1_14);
        STATE_VARIABLE_ModuleInfo_1_14 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_1_14));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredIds_25;
        MR_Box conv3_STATE_VARIABLE_ModuleInfo_1_14;

        hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &PredIds_25);
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_1[7]), PredIds_25, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_11)), &conv3_STATE_VARIABLE_ModuleInfo_1_14);
        STATE_VARIABLE_ModuleInfo_1_14 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_1_14));
      }
      break;
  }
  hlds__arg_info__generate_arg_info_2_p_0(STATE_VARIABLE_ModuleInfo_1_14, &STATE_VARIABLE_ModuleInfo_3_16);
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_6[0]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0_3));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) (ProgressStream_4));
  }
  {
    Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_29, 1) = ((MR_Box) (Var_30));
  }
  hlds__passes_aux__process_valid_nonimported_procs_3_p_0(Var_29, STATE_VARIABLE_ModuleInfo_3_16, &STATE_VARIABLE_ModuleInfo_4_17);
  LoadedSharingTable_8 = transform_hlds__ctgc__structure_sharing__domain__load_structure_sharing_table_1_f_0(STATE_VARIABLE_ModuleInfo_4_17);
  hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_4_17, &STATE_VARIABLE_ModuleInfo_1_38, &DepInfo_31);
  SCCs_32 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_31);
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_7[0]));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0_4));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_39, 3) = ((MR_Box) (ProgressStream_4));
    MR_hl_field(0, Var_39, 4) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_38));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[4]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_2[5]), Var_39, SCCs_32, ((MR_Box) (LoadedSharingTable_8)), &conv9_STATE_VARIABLE_SharingTable_1_40, ((MR_Box) ((MR_Unsigned) 0U)), &conv8_DepProcs_33);
  STATE_VARIABLE_SharingTable_1_40 = ((MR_Word) (conv9_STATE_VARIABLE_SharingTable_1_40));
  DepProcs_33 = ((MR_Word) (conv8_DepProcs_33));
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_1[8]), STATE_VARIABLE_SharingTable_1_40, ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_38)), &conv11_STATE_VARIABLE_ModuleInfo_2_43);
  STATE_VARIABLE_ModuleInfo_2_43 = ((MR_Word) (conv11_STATE_VARIABLE_ModuleInfo_2_43));
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_2_43, &Globals_34);
  libs__globals__get_op_mode_2_p_0(Globals_34, &OpMode_35);
  succeeded = ((MR_tag((MR_Word) OpMode_35)) == (MR_Integer) 3);
  if (succeeded)
  {
    Var_44 = ((MR_Word) ((MR_hl_field(3, OpMode_35, 0))));
    succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_45 = ((MR_Word) ((MR_hl_field(3, Var_44, 0))));
      succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 8U));
    }
  }
  if (succeeded)
  {
    MR_Word PredIds_37;
    MR_Word STATE_VARIABLE_AnalysisInfo_1_46;
    MR_Word Var_47;
    MR_Word STATE_VARIABLE_AnalysisInfo_2_48;
    MR_Word Var_49;
    MR_Word STATE_VARIABLE_AnalysisInfo_3_50;
    MR_Box conv13_STATE_VARIABLE_AnalysisInfo_2_48;
    MR_Box conv15_STATE_VARIABLE_AnalysisInfo_3_50;

    hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_2_43, &STATE_VARIABLE_AnalysisInfo_1_46);
    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_2_43, &PredIds_37);
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_47, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_9[0]));
      MR_hl_field(0, Var_47, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0_6));
      MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_47, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_2_43));
      MR_hl_field(0, Var_47, 4) = ((MR_Box) (STATE_VARIABLE_SharingTable_1_40));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0), Var_47, PredIds_37, ((MR_Box) (STATE_VARIABLE_AnalysisInfo_1_46)), &conv13_STATE_VARIABLE_AnalysisInfo_2_48);
    STATE_VARIABLE_AnalysisInfo_2_48 = ((MR_Word) (conv13_STATE_VARIABLE_AnalysisInfo_2_48));
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_49, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__analysis_scalar_common_8[1]));
      MR_hl_field(0, Var_49, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0_7));
      MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_49, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_2_43));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0), Var_49, DepProcs_33, ((MR_Box) (STATE_VARIABLE_AnalysisInfo_2_48)), &conv15_STATE_VARIABLE_AnalysisInfo_3_50);
    STATE_VARIABLE_AnalysisInfo_3_50 = ((MR_Word) (conv15_STATE_VARIABLE_AnalysisInfo_3_50));
    hlds__hlds_module__module_info_set_analysis_info_3_p_0(STATE_VARIABLE_AnalysisInfo_3_50, STATE_VARIABLE_ModuleInfo_2_43, &STATE_VARIABLE_ModuleInfo_5_18);
  }
  else
    STATE_VARIABLE_ModuleInfo_5_18 = STATE_VARIABLE_ModuleInfo_2_43;
  hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(STATE_VARIABLE_ModuleInfo_5_18, &ProcAnalysisKinds0_9);
  mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ((MR_Box) ((MR_Integer) 5)), ProcAnalysisKinds0_9, &ProcAnalysisKinds_10);
  hlds__hlds_module__module_info_set_proc_analysis_kinds_3_p_0(ProcAnalysisKinds_10, STATE_VARIABLE_ModuleInfo_5_18, STATE_VARIABLE_ModuleInfo_12);
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Unify____dep_procs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__structure_sharing__analysis____Unify____dep_procs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Compare____dep_procs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__structure_sharing__analysis____Compare____dep_procs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Unify____ss_fixpoint_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__structure_sharing__analysis____Unify____ss_fixpoint_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Compare____ss_fixpoint_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__structure_sharing__analysis____Compare____ss_fixpoint_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Unify____structure_sharing_answer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__structure_sharing__analysis____Unify____structure_sharing_answer_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Compare____structure_sharing_answer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__structure_sharing__analysis____Compare____structure_sharing_answer_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Unify____structure_sharing_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__structure_sharing__analysis____Unify____structure_sharing_call_0_0();
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Compare____structure_sharing_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__structure_sharing__analysis____Compare____structure_sharing_call_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Unify____structure_sharing_func_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__structure_sharing__analysis____Unify____structure_sharing_func_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis____Compare____structure_sharing_func_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__structure_sharing__analysis____Compare____structure_sharing_func_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__to_term_1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  succeeded = transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__from_term_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Term_3;

  conv0_Term_3 = transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__to_term_1_1_f_0();
  wrapper_arg_2 = ((MR_Box) (conv0_Term_3));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__from_term_2_2_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__more_precise_than_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__equivalent_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__more_precise_than_3_3_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__partial_order____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0______analysis__framework__equivalent_3_3_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__analysis_name_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__analysis_name_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__bottom_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__bottom_2_2_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__top_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__top_2_2_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__get_func_info_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_FuncInfo_22;

  transform_hlds__ctgc__structure_sharing__analysis__ClassMethod_for_analysis__framework__analysis____transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_func_info__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_call__arity0__transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_answer__arity0______analysis__framework__get_func_info_6_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_FuncInfo_22);
  *wrapper_arg_6 = ((MR_Box) (conv0_FuncInfo_22));
}

void mercury__transform_hlds__ctgc__structure_sharing__analysis__init(void)
{
}

void mercury__transform_hlds__ctgc__structure_sharing__analysis__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_dep_procs_0);
  MR_register_type_ctor_info(&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_ss_fixpoint_table_0);
  MR_register_type_ctor_info(&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_answer_0);
  MR_register_type_ctor_info(&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_call_0);
  MR_register_type_ctor_info(&transform_hlds__ctgc__structure_sharing__analysis__transform_hlds__ctgc__structure_sharing__analysis__type_ctor_info_structure_sharing_func_info_0);
}

void mercury__transform_hlds__ctgc__structure_sharing__analysis__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__ctgc__structure_sharing__analysis__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.ctgc.structure_sharing.analysis.
