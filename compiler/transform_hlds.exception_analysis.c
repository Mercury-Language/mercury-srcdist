/*
** Automatically generated from `exception_analysis.m'
** by the Mercury compiler,
** version rotd-2025-07-28
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


// :- module transform_hlds.exception_analysis.
// :- implementation.

/*
INIT mercury__transform_hlds__exception_analysis__init
ENDINIT
*/

#include "transform_hlds.exception_analysis.mih"


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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.intermod_analysis.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0_s {
  MR_bool transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__succeeded;
  MR_Word transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__CallPredInfo_18;
  jmp_buf transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__commit_0;
  MR_String transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__Name_23;
  MR_Integer transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__Arity_24;
  MR_Word transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__SpecialPredId_25;
  MR_String transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__Var_53;
  MR_Integer transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__Var_54;
};

struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s {
  MR_bool transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded;
  MR_Word transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__ProcResults_6;
  jmp_buf transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__commit_0;
  MR_Word transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__ProcResult_33;
  MR_Box transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__conv4_ProcResult_33;
  jmp_buf transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__commit_1;
  MR_Word transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__EResult_34;
  MR_Word transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_37;
  MR_Box transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__conv5_EResult_34;
  jmp_buf transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__commit_2;
  MR_Word transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_38;
  MR_Word transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__CResult_45;
  MR_Box transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__conv6_CResult_45;
  jmp_buf transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__commit_3;
  MR_Word transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Result_72;
  MR_Word transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_73;
  MR_Box transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__conv7_Result_72;
  jmp_buf transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__commit_4;
  MR_Word transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_39;
  MR_Word transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_40;
  MR_Word transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__EResult_67;
  MR_Box transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__conv8_EResult_67;
  jmp_buf transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__commit_5;
  MR_Word transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_41;
  MR_Word transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_42;
  MR_Word transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__TResult_46;
  MR_Box transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__conv9_TResult_46;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__exception_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__exception_analysis__list__pti_list_1__plain_transform_hlds__exception_analysis__type_ctor_info_excp_proc_result_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__exception_analysis__maybe__pti_maybe_1__plain_analysis__framework__type_ctor_info_analysis_status_0;

static const MR_DuFunctorDesc transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_functor_desc_closures_exception_status_0_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__exception_analysis__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo transform_hlds__exception_analysis__transform_hlds__exception_analysis__field_types_closures_exception_status_0_1[1];

static const MR_DuFunctorDesc transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_functor_desc_closures_exception_status_0_1;

static const MR_DuFunctorDescPtr transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_stag_ordered_closures_exception_status_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_stag_ordered_closures_exception_status_0_1[1];

static const MR_DuPtagLayout transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_ptag_ordered_closures_exception_status_0[2];

static const MR_DuFunctorDescPtr transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_name_ordered_closures_exception_status_0[2];

static const MR_Integer transform_hlds__exception_analysis__transform_hlds__exception_analysis__functor_number_map_closures_exception_status_0[2];

static const MR_Integer transform_hlds__exception_analysis__transform_hlds__exception_analysis__functor_number_map_exception_analysis_answer_0[1];

static const MR_NotagFunctorDesc transform_hlds__exception_analysis__transform_hlds__exception_analysis__notag_functor_desc_exception_analysis_answer_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__exception_analysis__maybe__ti_maybe_1analysis__framework__type_ctor_info_analysis_status_0;

static const MR_PseudoTypeInfo transform_hlds__exception_analysis__transform_hlds__exception_analysis__field_types_excp_proc_result_0_0[4];

static const MR_ConstString transform_hlds__exception_analysis__transform_hlds__exception_analysis__field_names_excp_proc_result_0_0[4];

static const MR_DuArgLocn transform_hlds__exception_analysis__transform_hlds__exception_analysis__field_locns_excp_proc_result_0_0[4];

static const MR_DuFunctorDesc transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_functor_desc_excp_proc_result_0_0;

static const MR_DuFunctorDescPtr transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_stag_ordered_excp_proc_result_0_0[1];

static const MR_DuPtagLayout transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_ptag_ordered_excp_proc_result_0[1];

static const MR_DuFunctorDescPtr transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_name_ordered_excp_proc_result_0[1];

static const MR_Integer transform_hlds__exception_analysis__transform_hlds__exception_analysis__functor_number_map_excp_proc_result_0[1];

static const MR_EnumFunctorDesc transform_hlds__exception_analysis__transform_hlds__exception_analysis__enum_functor_desc_type_excp_status_0_0;

static const MR_EnumFunctorDesc transform_hlds__exception_analysis__transform_hlds__exception_analysis__enum_functor_desc_type_excp_status_0_1;

static const MR_EnumFunctorDesc transform_hlds__exception_analysis__transform_hlds__exception_analysis__enum_functor_desc_type_excp_status_0_2;

static const MR_EnumFunctorDescPtr transform_hlds__exception_analysis__transform_hlds__exception_analysis__enum_ordinal_ordered_type_excp_status_0[3];

static const MR_EnumFunctorDescPtr transform_hlds__exception_analysis__transform_hlds__exception_analysis__enum_name_ordered_type_excp_status_0[3];

static const MR_Integer transform_hlds__exception_analysis__transform_hlds__exception_analysis__functor_number_map_type_excp_status_0[3];

static MR_Word MR_CALL 
transform_hlds__exception_analysis__IntroducedFrom__func__check_goal_for_exceptions_2__416__1_1_f_0(
  MR_Word LambdaHeadVar__1_93);

static MR_bool MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__from_term_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_Word MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__to_term_1_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__equivalent_3_3_p_0(
  MR_Word Status_8,
  MR_Word Status_3);

static MR_bool MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__more_precise_than_3_3_p_0(
  MR_Word Answer1_4,
  MR_Word Answer2_5);

static void MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__get_func_info_6_6_p_0(
  MR_Word HeadVar__1_17,
  MR_Word HeadVar__2_18,
  MR_Word HeadVar__3_19);

static MR_Word MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__top_2_2_f_0(void);

static MR_Word MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__bottom_2_2_f_0(void);

static MR_Word MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0(void);

static MR_Integer MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0(void);

static MR_String MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__analysis_name_2_2_f_0(void);

static void MR_CALL 
transform_hlds__exception_analysis____Compare____type_excp_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__exception_analysis____Unify____type_excp_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__exception_analysis____Compare____excp_proc_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__exception_analysis____Unify____excp_proc_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__exception_analysis____Compare____closures_exception_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__exception_analysis____Unify____closures_exception_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__exception_analysis__maybe_record_exception_result_2_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word PredInfo_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_18,
  MR_Word * STATE_VARIABLE_AnalysisInfo_19);

static void MR_CALL 
transform_hlds__exception_analysis__maybe_record_exception_result_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__exception_analysis__maybe_record_exception_result_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_10,
  MR_Word * STATE_VARIABLE_AnalysisInfo_11);

static void MR_CALL 
transform_hlds__exception_analysis__excp_check_type_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_Status_0_8,
  MR_Word * STATE_VARIABLE_Status_9);

static void MR_CALL 
transform_hlds__exception_analysis__excp_check_type_2_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__exception_analysis__excp_check_type_2_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
transform_hlds__exception_analysis__excp_check_type_2_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word CtorCat_7);

static void MR_CALL 
transform_hlds__exception_analysis__combine_maybe_analysis_status_3_p_0(
  MR_Word MaybeStatusA_4,
  MR_Word MaybeStatusB_5,
  MR_Word * MaybeStatus_6);

static void MR_CALL 
transform_hlds__exception_analysis__get_closure_exception_status_8_p_0(
  MR_Word IntermodAnalysis_9,
  MR_Word PPId_10,
  MR_Word STATE_VARIABLE_MaybeWillNotThrow_0_23,
  MR_Word * STATE_VARIABLE_MaybeWillNotThrow_24,
  MR_Word STATE_VARIABLE_AS_0_25,
  MR_Word * STATE_VARIABLE_AS_26,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28);

static MR_Box MR_CALL 
transform_hlds__exception_analysis__check_proc_for_exceptions_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__exception_analysis__check_proc_for_exceptions_6_p_0(
  MR_Word SCC_7,
  MR_Word PPId_8,
  MR_Word STATE_VARIABLE_Results_0_20,
  MR_Word * STATE_VARIABLE_Results_21,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23);

static MR_Box MR_CALL 
transform_hlds__exception_analysis__check_goal_for_exceptions_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__exception_analysis__check_goal_for_exceptions_7_p_0(
  MR_Word SCC_8,
  MR_Word VarTable_9,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Result_0_14,
  MR_Word * STATE_VARIABLE_Result_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17);

static void MR_CALL 
transform_hlds__exception_analysis__check_goals_for_exceptions_7_p_0(
  MR_Word SCC_1,
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Result_0_4,
  MR_Word * STATE_VARIABLE_Result_5,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7);

static void MR_CALL 
transform_hlds__exception_analysis__check_goal_for_exceptions_generic_call_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__exception_analysis__check_goal_for_exceptions_generic_call_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__exception_analysis__check_goal_for_exceptions_generic_call_8_p_0(
  MR_Word VarTable_9,
  MR_Word Details_10,
  MR_Word Args_11,
  MR_Word GoalInfo_12,
  MR_Word STATE_VARIABLE_Result_0_35,
  MR_Word * STATE_VARIABLE_Result_36,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38);

static void MR_CALL 
transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0(
  MR_Word SCC_10,
  MR_Word VarTable_11,
  MR_Word CallPredId_12,
  MR_Integer CallProcId_13,
  MR_Word CallArgs_14,
  MR_Word STATE_VARIABLE_Result_0_32,
  MR_Word * STATE_VARIABLE_Result_33,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35);

static void MR_CALL 
transform_hlds__exception_analysis__excp_check_nonrecursive_call_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__exception_analysis__excp_check_nonrecursive_call_8_p_0(
  MR_Word VarTable_9,
  MR_Word PPId_10,
  MR_Word Args_11,
  MR_Word PredInfo_12,
  MR_Word STATE_VARIABLE_Result_0_27,
  MR_Word * STATE_VARIABLE_Result_28,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30);

static void MR_CALL 
transform_hlds__exception_analysis__update_excp_proc_result_4_p_0(
  MR_Word CurrentStatus_5,
  MR_Word CurrentAnalysisStatus_6,
  MR_Word STATE_VARIABLE_Result_0_12,
  MR_Word * STATE_VARIABLE_Result_13);

static void MR_CALL 
transform_hlds__exception_analysis__maybe_analysis_status_2_p_0(
  MR_Word ProcResult_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
transform_hlds__exception_analysis__set_exception_info_4_p_0(
  MR_Word ProcExceptionInfo_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_28(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_27(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_26(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_9(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_10(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_12(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_11(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_13(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_14(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_16(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_15(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_17(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_18(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_20(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_19(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_21(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_22(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_24(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_23(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_25(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0(
  MR_Word SCC_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11);

static MR_bool MR_CALL 
transform_hlds__exception_analysis__lookup_exception_analysis_result_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__exception_analysis__analyse_exceptions_in_module_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__exception_analysis__analyse_exceptions_in_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__exception_analysis____Unify____closures_exception_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__exception_analysis____Compare____closures_exception_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__exception_analysis____Unify____exception_analysis_answer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__exception_analysis____Compare____exception_analysis_answer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__exception_analysis____Unify____excp_proc_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__exception_analysis____Compare____excp_proc_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__exception_analysis____Unify____type_excp_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__exception_analysis____Compare____type_excp_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__analysis_name_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__bottom_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__top_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__get_func_info_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_6);


static /* final */ const MR_Box transform_hlds__exception_analysis_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__exception_analysis_scalar_common_2[7][3];

static /* final */ const MR_Box transform_hlds__exception_analysis_scalar_common_3[4][5];

static /* final */ const MR_Box transform_hlds__exception_analysis_scalar_common_4[3][6];

static /* final */ const MR_Box transform_hlds__exception_analysis_scalar_common_5[4][1];

static /* final */ const MR_Box transform_hlds__exception_analysis_scalar_common_6[3][7];

static /* final */ const MR_Box transform_hlds__exception_analysis_scalar_common_7[1][4];

static /* final */ const MR_Box transform_hlds__exception_analysis_scalar_common_8[2][9];

static /* final */ const MR_Box transform_hlds__exception_analysis_scalar_common_10[1][11];


struct transform_hlds__exception_analysis__vector_common_type_9_0_s {
  const MR_Word transform_hlds__exception_analysis__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct transform_hlds__exception_analysis__vector_common_type_9_0_s transform_hlds__exception_analysis_vector_common_9[2];

struct transform_hlds__exception_analysis__vector_common_type_11_0_s {
  const MR_String transform_hlds__exception_analysis__vector_common_type_11_0__vct_11_f_0;
};

static /* final */ const struct transform_hlds__exception_analysis__vector_common_type_11_0_s transform_hlds__exception_analysis_vector_common_11[64];

struct transform_hlds__exception_analysis__vector_common_type_12_0_s {
  const MR_String transform_hlds__exception_analysis__vector_common_type_12_0__vct_12_f_0;
  const MR_Integer transform_hlds__exception_analysis__vector_common_type_12_0__vct_12_f_1;
};

static /* final */ const struct transform_hlds__exception_analysis__vector_common_type_12_0_s transform_hlds__exception_analysis_vector_common_12[5];

struct transform_hlds__exception_analysis__vector_common_type_13_0_s {
  const MR_String transform_hlds__exception_analysis__vector_common_type_13_0__vct_13_f_0;
  const MR_Word transform_hlds__exception_analysis__vector_common_type_13_0__vct_13_f_1;
};

static /* final */ const struct transform_hlds__exception_analysis__vector_common_type_13_0_s transform_hlds__exception_analysis_vector_common_13[4];



static /* final */ const MR_Box transform_hlds__exception_analysis_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__analysis__operations__any_call__arity0__)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_any_call_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__exception_analysis__exception_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_exception_analysis_answer_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_excp_proc_result_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__exception_analysis_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_any_call_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__analysis__operations__no_func_info__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0__)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_exception_analysis_answer_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__exception_analysis_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__exception_analysis__analyse_exceptions_in_module_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__exception_analysis_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_26)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__exception_analysis_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_27)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__exception_analysis_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__exception_analysis__check_goal_for_exceptions_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__exception_analysis_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__exception_analysis__check_proc_for_exceptions_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__exception_analysis_scalar_common_3[4][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__call_pattern__arity2__analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__)),
    ((MR_Box) (&transform_hlds__exception_analysis_scalar_common_2[0])),
    ((MR_Box) (&transform_hlds__exception_analysis_scalar_common_1[1])),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_any_call_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__answer_pattern__arity2__analysis__operations__no_func_info__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__exception_analysis_scalar_common_2[1])),
    ((MR_Box) (&transform_hlds__exception_analysis_scalar_common_1[2])),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_exception_analysis_answer_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_excp_proc_result_0)),
    ((MR_Box) (&transform_hlds__exception_analysis__maybe__pti_maybe_1__plain_analysis__framework__type_ctor_info_analysis_status_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__exception_analysis_scalar_common_4[3][6] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__analysis__arity3__analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__exception_analysis_scalar_common_3[0])),
    ((MR_Box) (&transform_hlds__exception_analysis_scalar_common_3[1])),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_any_call_0)),
    ((MR_Box) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_exception_analysis_answer_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__exception_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__exception_analysis__maybe__pti_maybe_1__plain_analysis__framework__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&transform_hlds__exception_analysis__maybe__pti_maybe_1__plain_analysis__framework__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&transform_hlds__exception_analysis__maybe__pti_maybe_1__plain_analysis__framework__type_ctor_info_analysis_status_0))
  },
};

static /* final */ const MR_Box transform_hlds__exception_analysis_scalar_common_5[4][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 2)) },
  /* row   3 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box transform_hlds__exception_analysis_scalar_common_6[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_exception_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_type_excp_status_0)),
    ((MR_Box) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_type_excp_status_0))
  },
};

static /* final */ const MR_Box transform_hlds__exception_analysis_scalar_common_7[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__exception_analysis_scalar_common_8[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__exception_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__exception_analysis__list__pti_list_1__plain_transform_hlds__exception_analysis__type_ctor_info_excp_proc_result_0)),
    ((MR_Box) (&transform_hlds__exception_analysis__list__pti_list_1__plain_transform_hlds__exception_analysis__type_ctor_info_excp_proc_result_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__exception_analysis_scalar_common_10[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_closures_exception_status_0)),
    ((MR_Box) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_closures_exception_status_0)),
    ((MR_Box) (&transform_hlds__exception_analysis__maybe__pti_maybe_1__plain_analysis__framework__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&transform_hlds__exception_analysis__maybe__pti_maybe_1__plain_analysis__framework__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};


static /* final */ const struct transform_hlds__exception_analysis__vector_common_type_9_0_s transform_hlds__exception_analysis_vector_common_9[2] = {
  /* row   0 */   { (MR_Integer) 2 },
  /* row   1 */   { (MR_Integer) 0 },
};

static /* final */ const struct transform_hlds__exception_analysis__vector_common_type_11_0_s transform_hlds__exception_analysis_vector_common_11[64] = {
  /* row   0 */   { NULL },
  /* row   1 */   { NULL },
  /* row   2 */   { NULL },
  /* row   3 */   { NULL },
  /* row   4 */   { NULL },
  /* row   5 */   { NULL },
  /* row   6 */   { NULL },
  /* row   7 */   { (MR_String) "res" },
  /* row   8 */   { NULL },
  /* row   9 */   { NULL },
  /* row  10 */   { NULL },
  /* row  11 */   { NULL },
  /* row  12 */   { NULL },
  /* row  13 */   { NULL },
  /* row  14 */   { NULL },
  /* row  15 */   { (MR_String) "read_result" },
  /* row  16 */   { NULL },
  /* row  17 */   { NULL },
  /* row  18 */   { NULL },
  /* row  19 */   { NULL },
  /* row  20 */   { NULL },
  /* row  21 */   { NULL },
  /* row  22 */   { NULL },
  /* row  23 */   { NULL },
  /* row  24 */   { NULL },
  /* row  25 */   { (MR_String) "input_stream" },
  /* row  26 */   { NULL },
  /* row  27 */   { NULL },
  /* row  28 */   { NULL },
  /* row  29 */   { (MR_String) "error" },
  /* row  30 */   { NULL },
  /* row  31 */   { NULL },
  /* row  32 */   { NULL },
  /* row  33 */   { (MR_String) "binary_stream" },
  /* row  34 */   { NULL },
  /* row  35 */   { NULL },
  /* row  36 */   { NULL },
  /* row  37 */   { NULL },
  /* row  38 */   { NULL },
  /* row  39 */   { (MR_String) "stream_id" },
  /* row  40 */   { NULL },
  /* row  41 */   { NULL },
  /* row  42 */   { NULL },
  /* row  43 */   { NULL },
  /* row  44 */   { NULL },
  /* row  45 */   { NULL },
  /* row  46 */   { NULL },
  /* row  47 */   { (MR_String) "result" },
  /* row  48 */   { NULL },
  /* row  49 */   { (MR_String) "output_stream" },
  /* row  50 */   { NULL },
  /* row  51 */   { NULL },
  /* row  52 */   { (MR_String) "maybe_partial_res" },
  /* row  53 */   { NULL },
  /* row  54 */   { NULL },
  /* row  55 */   { NULL },
  /* row  56 */   { NULL },
  /* row  57 */   { NULL },
  /* row  58 */   { NULL },
  /* row  59 */   { NULL },
  /* row  60 */   { NULL },
  /* row  61 */   { NULL },
  /* row  62 */   { NULL },
  /* row  63 */   { NULL },
};

static /* final */ const struct transform_hlds__exception_analysis__vector_common_type_12_0_s transform_hlds__exception_analysis_vector_common_12[5] = {
  /* row   0 */
  {
    (MR_String) "const",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "context",
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_String) "term",
    (MR_Integer) 2
  },
  /* row   3 */
  {
    (MR_String) "var",
    (MR_Integer) 3
  },
  /* row   4 */
  {
    (MR_String) "var_supply",
    (MR_Integer) 4
  },
};

static /* final */ const struct transform_hlds__exception_analysis__vector_common_type_13_0_s transform_hlds__exception_analysis_vector_common_13[4] = {
  /* row   0 */
  {
    (MR_String) "conditional",
    (MR_Word) ((MR_Unsigned) 4U)
  },
  /* row   1 */
  {
    (MR_String) "may_throw_type_exception",
    (MR_Word) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[1]))
  },
  /* row   2 */
  {
    (MR_String) "may_throw_user_exception",
    (MR_Word) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[0]))
  },
  /* row   3 */
  {
    (MR_String) "will_not_throw",
    (MR_Word) ((MR_Unsigned) 0U)
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__exception_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__exception_analysis__list__pti_list_1__plain_transform_hlds__exception_analysis__type_ctor_info_excp_proc_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_excp_proc_result_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__exception_analysis__maybe__pti_maybe_1__plain_analysis__framework__type_ctor_info_analysis_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0) }
};

static const MR_DuFunctorDesc transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_functor_desc_closures_exception_status_0_0 = {
  (MR_String) "may_throw",
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

static const MR_FA_TypeInfo_Struct1 transform_hlds__exception_analysis__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_PseudoTypeInfo transform_hlds__exception_analysis__transform_hlds__exception_analysis__field_types_closures_exception_status_0_1[1] = { (MR_PseudoTypeInfo) (&transform_hlds__exception_analysis__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0) };

static const MR_DuFunctorDesc transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_functor_desc_closures_exception_status_0_1 = {
  (MR_String) "maybe_will_not_throw",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__exception_analysis__transform_hlds__exception_analysis__field_types_closures_exception_status_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_stag_ordered_closures_exception_status_0_0[1] = { &transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_functor_desc_closures_exception_status_0_0 };

static const MR_DuFunctorDescPtr transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_stag_ordered_closures_exception_status_0_1[1] = { &transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_functor_desc_closures_exception_status_0_1 };

static const MR_DuPtagLayout transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_ptag_ordered_closures_exception_status_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_stag_ordered_closures_exception_status_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_stag_ordered_closures_exception_status_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_name_ordered_closures_exception_status_0[2] = {
  &transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_functor_desc_closures_exception_status_0_0,
  &transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_functor_desc_closures_exception_status_0_1
};

static const MR_Integer transform_hlds__exception_analysis__transform_hlds__exception_analysis__functor_number_map_closures_exception_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_closures_exception_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__exception_analysis____Unify____closures_exception_status_0_0_10001)),
  ((MR_Box) (transform_hlds__exception_analysis____Compare____closures_exception_status_0_0_10001)),
  (MR_String) "transform_hlds.exception_analysis",
  (MR_String) "closures_exception_status",
  { transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_name_ordered_closures_exception_status_0 },
  { transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_ptag_ordered_closures_exception_status_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__exception_analysis__transform_hlds__exception_analysis__functor_number_map_closures_exception_status_0,

};

static const MR_Integer transform_hlds__exception_analysis__transform_hlds__exception_analysis__functor_number_map_exception_analysis_answer_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc transform_hlds__exception_analysis__transform_hlds__exception_analysis__notag_functor_desc_exception_analysis_answer_0 = {
  (MR_String) "exception_analysis_answer",
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_exception_status_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_exception_analysis_answer_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__exception_analysis____Unify____exception_analysis_answer_0_0_10001)),
  ((MR_Box) (transform_hlds__exception_analysis____Compare____exception_analysis_answer_0_0_10001)),
  (MR_String) "transform_hlds.exception_analysis",
  (MR_String) "exception_analysis_answer",
  { &transform_hlds__exception_analysis__transform_hlds__exception_analysis__notag_functor_desc_exception_analysis_answer_0 },
  { &transform_hlds__exception_analysis__transform_hlds__exception_analysis__notag_functor_desc_exception_analysis_answer_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__exception_analysis__transform_hlds__exception_analysis__functor_number_map_exception_analysis_answer_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__exception_analysis__maybe__ti_maybe_1analysis__framework__type_ctor_info_analysis_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0) }
};

static const MR_PseudoTypeInfo transform_hlds__exception_analysis__transform_hlds__exception_analysis__field_types_excp_proc_result_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_exception_status_0),
  (MR_PseudoTypeInfo) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_type_excp_status_0),
  (MR_PseudoTypeInfo) (&transform_hlds__exception_analysis__maybe__ti_maybe_1analysis__framework__type_ctor_info_analysis_status_0)
};

static const MR_ConstString transform_hlds__exception_analysis__transform_hlds__exception_analysis__field_names_excp_proc_result_0_0[4] = {
  (MR_String) "epr_ppid",
  (MR_String) "epr_status",
  (MR_String) "epr_rec_calls",
  (MR_String) "epr_maybe_analysis_status"
};

static const MR_DuArgLocn transform_hlds__exception_analysis__transform_hlds__exception_analysis__field_locns_excp_proc_result_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_functor_desc_excp_proc_result_0_0 = {
  (MR_String) "excp_proc_result",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__exception_analysis__transform_hlds__exception_analysis__field_types_excp_proc_result_0_0,
  transform_hlds__exception_analysis__transform_hlds__exception_analysis__field_names_excp_proc_result_0_0,
  transform_hlds__exception_analysis__transform_hlds__exception_analysis__field_locns_excp_proc_result_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_stag_ordered_excp_proc_result_0_0[1] = { &transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_functor_desc_excp_proc_result_0_0 };

static const MR_DuPtagLayout transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_ptag_ordered_excp_proc_result_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_stag_ordered_excp_proc_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_name_ordered_excp_proc_result_0[1] = { &transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_functor_desc_excp_proc_result_0_0 };

static const MR_Integer transform_hlds__exception_analysis__transform_hlds__exception_analysis__functor_number_map_excp_proc_result_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_excp_proc_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__exception_analysis____Unify____excp_proc_result_0_0_10001)),
  ((MR_Box) (transform_hlds__exception_analysis____Compare____excp_proc_result_0_0_10001)),
  (MR_String) "transform_hlds.exception_analysis",
  (MR_String) "excp_proc_result",
  { transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_name_ordered_excp_proc_result_0 },
  { transform_hlds__exception_analysis__transform_hlds__exception_analysis__du_ptag_ordered_excp_proc_result_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__exception_analysis__transform_hlds__exception_analysis__functor_number_map_excp_proc_result_0,

};

static const MR_EnumFunctorDesc transform_hlds__exception_analysis__transform_hlds__exception_analysis__enum_functor_desc_type_excp_status_0_0 = {
  (MR_String) "type_will_not_throw",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__exception_analysis__transform_hlds__exception_analysis__enum_functor_desc_type_excp_status_0_1 = {
  (MR_String) "type_may_throw",
  INT32_C(1)
};

static const MR_EnumFunctorDesc transform_hlds__exception_analysis__transform_hlds__exception_analysis__enum_functor_desc_type_excp_status_0_2 = {
  (MR_String) "type_conditional",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr transform_hlds__exception_analysis__transform_hlds__exception_analysis__enum_ordinal_ordered_type_excp_status_0[3] = {
  &transform_hlds__exception_analysis__transform_hlds__exception_analysis__enum_functor_desc_type_excp_status_0_0,
  &transform_hlds__exception_analysis__transform_hlds__exception_analysis__enum_functor_desc_type_excp_status_0_1,
  &transform_hlds__exception_analysis__transform_hlds__exception_analysis__enum_functor_desc_type_excp_status_0_2
};

static const MR_EnumFunctorDescPtr transform_hlds__exception_analysis__transform_hlds__exception_analysis__enum_name_ordered_type_excp_status_0[3] = {
  &transform_hlds__exception_analysis__transform_hlds__exception_analysis__enum_functor_desc_type_excp_status_0_2,
  &transform_hlds__exception_analysis__transform_hlds__exception_analysis__enum_functor_desc_type_excp_status_0_1,
  &transform_hlds__exception_analysis__transform_hlds__exception_analysis__enum_functor_desc_type_excp_status_0_0
};

static const MR_Integer transform_hlds__exception_analysis__transform_hlds__exception_analysis__functor_number_map_type_excp_status_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_type_excp_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__exception_analysis____Unify____type_excp_status_0_0_10001)),
  ((MR_Box) (transform_hlds__exception_analysis____Compare____type_excp_status_0_0_10001)),
  (MR_String) "transform_hlds.exception_analysis",
  (MR_String) "type_excp_status",
  { transform_hlds__exception_analysis__transform_hlds__exception_analysis__enum_name_ordered_type_excp_status_0 },
  { transform_hlds__exception_analysis__transform_hlds__exception_analysis__enum_ordinal_ordered_type_excp_status_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  transform_hlds__exception_analysis__transform_hlds__exception_analysis__functor_number_map_type_excp_status_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__exception_analysis__exception_analysis_answer__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__from_term_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__partial_order__arity2__analysis__operations__no_func_info__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__equivalent_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__answer_pattern__arity2__analysis__operations__no_func_info__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0__[5] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 0))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__analysis__arity3__analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0__[11] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 6)),
  ((MR_Box) (transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__analysis_name_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__bottom_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__top_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__get_func_info_6_6_p_0_10001))
};

static MR_Word MR_CALL 
transform_hlds__exception_analysis__IntroducedFrom__func__check_goal_for_exceptions_2__416__1_1_f_0(
  MR_Word LambdaHeadVar__1_93)
{
  MR_Word LambdaHeadVar__2_94 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_93, 2))));

  return LambdaHeadVar__2_94;
}

static MR_bool MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__from_term_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0);
  MR_Word Status_3;
  MR_String String_4;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  if (succeeded)
  {
    Var_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    Var_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    succeeded = ((MR_tag((MR_Word) Var_6)) == (MR_Integer) 0);
    if (succeeded)
    {
      String_4 = ((MR_String) ((MR_hl_field(0, Var_6, 0))));
      succeeded = (Var_7 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        // binary string simple lookup switch
        ;
        lo_0 = (MR_Integer) 0;
        hi_1 = (MR_Integer) 3;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(String_4, ((&transform_hlds__exception_analysis_vector_common_13[0 + mid_2]))->transform_hlds__exception_analysis__vector_common_type_13_0__vct_13_f_0);
          if ((result_3 == (MR_Integer) 0))
          {
            Status_3 = ((&transform_hlds__exception_analysis_vector_common_13[0 + mid_2]))->transform_hlds__exception_analysis__vector_common_type_13_0__vct_13_f_1;
            succeeded = MR_TRUE;
            // jump out of search loop
            ;
            goto label_0;
          }
          else
          if ((result_3 < (MR_Integer) 0))
            hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
          else
            lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
        }
        while ((lo_0 <= hi_1));
        succeeded = MR_FALSE;
      label_0:;
        if (succeeded)
        {
          *HeadVar__2_2 = (MR_Word) (Status_3);
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__to_term_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word Status_3 = (MR_Word) (HeadVar__1_1);
  MR_String String_4;
  MR_Word Var_5;
  MR_Word Var_7;

  switch (MR_tag((MR_Word) Status_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Status_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          String_4 = (MR_String) "will_not_throw";
          break;
        case (MR_Integer) 1:
          String_4 = (MR_String) "conditional";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(1, Status_3, 0))) & (MR_Integer) 1);

        switch (Var_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            String_4 = (MR_String) "may_throw_type_exception";
            break;
          case (MR_Integer) 0:
            String_4 = (MR_String) "may_throw_user_exception";
            break;
        }
      }
      break;
  }
  {
    Var_5 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_5, 0) = ((MR_Box) (String_4));
  }
  Var_7 = mercury__term_context__dummy_context_0_f_0();
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_7));
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__equivalent_3_3_p_0(
  MR_Word Status_8,
  MR_Word Status_3)
{
  MR_bool succeeded;

  succeeded = transform_hlds__exception_analysis____Unify____exception_analysis_answer_0_0(Status_3, Status_8);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__more_precise_than_3_3_p_0(
  MR_Word Answer1_4,
  MR_Word Answer2_5)
{
  MR_bool succeeded;
  MR_Word Status1_6 = (MR_Word) (Answer1_4);
  MR_Word Status2_7 = (MR_Word) (Answer2_5);

  switch (MR_tag((MR_Word) Status1_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Status1_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          if (((((MR_tag((MR_Word) Status2_7)) == (MR_Integer) 1)) || ((Status2_7 == (MR_Word) ((MR_Unsigned) 4U)))))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = ((MR_tag((MR_Word) Status2_7)) == (MR_Integer) 1);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ExceptionTypeA_11 = ((MR_Unsigned) ((MR_hl_field(1, Status1_6, 0))) & (MR_Integer) 1);
        MR_Word AMorePreciseThanB_14;

        switch (MR_tag((MR_Word) Status2_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            AMorePreciseThanB_14 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ExceptionTypeB_12 = ((MR_Unsigned) ((MR_hl_field(1, Status2_7, 0))) & (MR_Integer) 1);

              switch (ExceptionTypeA_11) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  switch (ExceptionTypeB_12) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      AMorePreciseThanB_14 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 0:
                      AMorePreciseThanB_14 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 0:
                  AMorePreciseThanB_14 = (MR_Integer) 0;
                  break;
              }
            }
            break;
        }
        succeeded = (AMorePreciseThanB_14 == (MR_Integer) 1);
      }
      break;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__get_func_info_6_6_p_0(
  MR_Word HeadVar__1_17,
  MR_Word HeadVar__2_18,
  MR_Word HeadVar__3_19)
{
}

static MR_Word MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__top_2_2_f_0(void)
{
  return (MR_Word) (((MR_Box) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[0]))));
}

static MR_Word MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__bottom_2_2_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
}

static MR_Word MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0(void)
{
  return (MR_Integer) 0;
}

static MR_Integer MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0(void)
{
  return (MR_Integer) 1;
}

static MR_String MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__analysis_name_2_2_f_0(void)
{
  return (MR_String) "exception_analysis";
}

static void MR_CALL 
transform_hlds__exception_analysis____Compare____type_excp_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
transform_hlds__exception_analysis____Unify____type_excp_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__exception_analysis____Compare____excp_proc_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) & (MR_Integer) 3);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__prog_data_pragma____Compare____exception_status_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_21 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_22 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_21 < Var_22);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_21 > Var_22);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__exception_analysis_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__exception_analysis____Unify____excp_proc_result_0_0(
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
  {
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 3);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__prog_data_pragma____Unify____exception_status_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&transform_hlds__exception_analysis_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__exception_analysis____Compare____exception_analysis_answer_0_0(
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

    parse_tree__prog_data_pragma____Compare____exception_status_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
transform_hlds__exception_analysis____Unify____exception_analysis_answer_0_0(
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

    succeeded = parse_tree__prog_data_pragma____Unify____exception_status_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__exception_analysis____Compare____closures_exception_status_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__exception_analysis_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__exception_analysis____Unify____closures_exception_status_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&transform_hlds__exception_analysis_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__exception_analysis__maybe_record_exception_result_2_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word PredInfo_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_18,
  MR_Word * STATE_VARIABLE_AnalysisInfo_19)
{
  MR_Word ShouldWrite_12;

  transform_hlds__intermod_analysis__should_write_exception_info_6_p_0(ModuleInfo_7, PredId_8, ProcId_10, PredInfo_9, (MR_Integer) 0, &ShouldWrite_12);
  switch (ShouldWrite_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_AnalysisInfo_19 = STATE_VARIABLE_AnalysisInfo_0_18;
      break;
    case (MR_Integer) 1:
      {
        MR_Word PPId_13;
        MR_Word Status_14;
        MR_Word ResultStatus_15;
        MR_Word ModuleName_16;
        MR_Word FuncId_17;
        MR_Word Var_22;
        MR_Word ProcInfo_25;
        MR_Word MaybeExceptionInfo_26;
        MR_Word _PredInfo_24;

        {
          PPId_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PPId_13, 0) = ((MR_Box) (PredId_8));
          MR_hl_field(0, PPId_13, 1) = ((MR_Box) (ProcId_10));
        }
        hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_7, PPId_13, &_PredInfo_24, &ProcInfo_25);
        hlds__hlds_pred__proc_info_get_exception_info_2_p_0(ProcInfo_25, &MaybeExceptionInfo_26);
        if ((MaybeExceptionInfo_26 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Status_14 = (MR_Word) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[0]));
          ResultStatus_15 = (MR_Integer) 2;
        }
        else
        {
          MR_Word ProcExceptionInfo_27 = ((MR_Word) ((MR_hl_field(1, MaybeExceptionInfo_26, 0))));
          MR_Word MaybeResultStatus_28;

          Status_14 = ((MR_Word) ((MR_hl_field(0, ProcExceptionInfo_27, 0))));
          MaybeResultStatus_28 = ((MR_Word) ((MR_hl_field(0, ProcExceptionInfo_27, 1))));
          if ((MaybeResultStatus_28 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.exception_analysis.lookup_proc_exception_info\'/4", (MR_String) "no result status");
              return;
            }
          else
            ResultStatus_15 = ((MR_Word) ((MR_hl_field(1, MaybeResultStatus_28, 0))));
        }
        transform_hlds__mmc_analysis__module_name_func_id_4_p_0(ModuleInfo_7, PPId_13, &ModuleName_16, &FuncId_17);
        Var_22 = (MR_Word) (Status_14);
        analysis__operations__record_result_7_p_0((MR_Word) (&transform_hlds__exception_analysis_scalar_common_4[0]), ModuleName_16, FuncId_17, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Var_22)), ResultStatus_15, STATE_VARIABLE_AnalysisInfo_0_18, STATE_VARIABLE_AnalysisInfo_19);
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__exception_analysis__maybe_record_exception_result_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_AnalysisInfo_19;

  transform_hlds__exception_analysis__maybe_record_exception_result_2_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AnalysisInfo_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AnalysisInfo_19));
}

static void MR_CALL 
transform_hlds__exception_analysis__maybe_record_exception_result_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_10,
  MR_Word * STATE_VARIABLE_AnalysisInfo_11)
{
  MR_Word PredInfo_8;
  MR_Word ProcIds_9;
  MR_Word Var_12;
  MR_Box conv1_STATE_VARIABLE_AnalysisInfo_11;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_8);
  ProcIds_9 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_8);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&transform_hlds__exception_analysis_scalar_common_8[1]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (transform_hlds__exception_analysis__maybe_record_exception_result_4_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (PredId_6));
    MR_hl_field(0, Var_12, 5) = ((MR_Box) (PredInfo_8));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0), Var_12, ProcIds_9, ((MR_Box) (STATE_VARIABLE_AnalysisInfo_0_10)), &conv1_STATE_VARIABLE_AnalysisInfo_11);
  *STATE_VARIABLE_AnalysisInfo_11 = ((MR_Word) (conv1_STATE_VARIABLE_AnalysisInfo_11));
}

static void MR_CALL 
transform_hlds__exception_analysis__excp_check_type_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_Status_0_8,
  MR_Word * STATE_VARIABLE_Status_9)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_util__type_is_solver_type_2_p_0(ModuleInfo_5, Type_6);
  if (!(succeeded))
    succeeded = check_hlds__type_util__type_is_existq_type_2_p_0(ModuleInfo_5, Type_6);
  if (succeeded)
    *STATE_VARIABLE_Status_9 = (MR_Integer) 1;
  else
  {
    MR_Word TypeCategory_11;
    MR_Word Var_13;

    TypeCategory_11 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_5, Type_6);
    Var_13 = transform_hlds__exception_analysis__excp_check_type_2_3_f_0(ModuleInfo_5, Type_6, TypeCategory_11);
    switch (Var_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        switch (STATE_VARIABLE_Status_0_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            *STATE_VARIABLE_Status_9 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Status_9 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            *STATE_VARIABLE_Status_9 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Status_9 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        switch (STATE_VARIABLE_Status_0_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            *STATE_VARIABLE_Status_9 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Status_9 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            *STATE_VARIABLE_Status_9 = (MR_Integer) 0;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__exception_analysis__excp_check_type_2_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Status_9;

  transform_hlds__exception_analysis__excp_check_type_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Status_9);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Status_9));
}

static void MR_CALL 
transform_hlds__exception_analysis__excp_check_type_2_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Status_9;

  transform_hlds__exception_analysis__excp_check_type_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Status_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Status_9));
}

static MR_Word MR_CALL 
transform_hlds__exception_analysis__excp_check_type_2_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word CtorCat_7)
{
  MR_bool succeeded;
  MR_Word WillThrow_8;

  switch (MR_tag((MR_Word) CtorCat_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(CtorCat_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 3:
          WillThrow_8 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          WillThrow_8 = (MR_Integer) 2;
          break;
        case (MR_Integer) 4:
          {
            MR_Word Args_12;
            MR_Word Var_20;
            MR_Word _TypeCtor_11;
            MR_Box conv1_WillThrow_8;

            parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_6, &_TypeCtor_11, &Args_12);
            {
              Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_20, 0) = ((MR_Box) (&transform_hlds__exception_analysis_scalar_common_6[2]));
              MR_hl_field(0, Var_20, 1) = ((MR_Box) (transform_hlds__exception_analysis__excp_check_type_2_3_f_0_1));
              MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_20, 3) = ((MR_Box) (ModuleInfo_5));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_type_excp_status_0), Var_20, Args_12, ((MR_Box) ((MR_Integer) 0)), &conv1_WillThrow_8);
            WillThrow_8 = ((MR_Word) (conv1_WillThrow_8));
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      WillThrow_8 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      {
        MR_Word _UC_14;

        succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(ModuleInfo_5, Type_6, &_UC_14);
        if (succeeded)
          WillThrow_8 = (MR_Integer) 1;
        else
          WillThrow_8 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, CtorCat_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          WillThrow_8 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtor_16;
            MR_Word Args_19;
            MR_Word _UC_17;

            parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_6, &TypeCtor_16, &Args_19);
            succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(ModuleInfo_5, Type_6, &_UC_17);
            if (succeeded)
              WillThrow_8 = (MR_Integer) 1;
            else
            {
              MR_String ModuleName_24;
              MR_String CtorName_25;
              MR_Integer Arity_26 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_16, 1))));
              MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, TypeCtor_16, 0))));
              MR_Word Var_28;

              succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_28 = ((MR_Word) ((MR_hl_field(1, Var_27, 0))));
                CtorName_25 = ((MR_String) ((MR_hl_field(1, Var_27, 1))));
                succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 0);
                if (succeeded)
                {
                  ModuleName_24 = ((MR_String) ((MR_hl_field(0, Var_28, 0))));
                  {
                    MR_Integer case_num_6 = (MR_Integer) -1;

                    switch (MR_nth_code_unit(ModuleName_24, 0)) {
                      case (MR_Integer) 97:
                        if (MR_offset_streq(1, ModuleName_24, (MR_String) "assoc_list"))
                          case_num_6 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 98:
                        switch (MR_nth_code_unit(ModuleName_24, 1)) {
                          case (MR_Integer) 97:
                            if (MR_offset_streq(2, ModuleName_24, (MR_String) "bag"))
                              case_num_6 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 105:
                            if (MR_offset_streq(2, ModuleName_24, (MR_String) "bimap"))
                              case_num_6 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 117:
                            if (MR_offset_streq(2, ModuleName_24, (MR_String) "builtin"))
                              case_num_6 = (MR_Integer) 3;
                            break;
                        }
                        break;
                      case (MR_Integer) 99:
                        if (MR_offset_streq(1, ModuleName_24, (MR_String) "cord"))
                          case_num_6 = (MR_Integer) 4;
                        break;
                      case (MR_Integer) 101:
                        if (MR_offset_streq(1, ModuleName_24, (MR_String) "eqvclass"))
                          case_num_6 = (MR_Integer) 5;
                        break;
                      case (MR_Integer) 105:
                        switch (MR_nth_code_unit(ModuleName_24, 1)) {
                          case (MR_Integer) 110:
                            switch (MR_nth_code_unit(ModuleName_24, 2)) {
                              case (MR_Integer) 106:
                                if (MR_offset_streq(3, ModuleName_24, (MR_String) "injection"))
                                  case_num_6 = (MR_Integer) 6;
                                break;
                              case (MR_Integer) 116:
                                if (MR_offset_streq(3, ModuleName_24, (MR_String) "integer"))
                                  case_num_6 = (MR_Integer) 7;
                                break;
                            }
                            break;
                          case (MR_Integer) 111:
                            if (MR_offset_streq(2, ModuleName_24, (MR_String) "io"))
                              case_num_6 = (MR_Integer) 8;
                            break;
                        }
                        break;
                      case (MR_Integer) 108:
                        if (MR_offset_streq(1, ModuleName_24, (MR_String) "list"))
                          case_num_6 = (MR_Integer) 9;
                        break;
                      case (MR_Integer) 109:
                        switch (MR_nth_code_unit(ModuleName_24, 1)) {
                          case (MR_Integer) 97:
                            switch (MR_nth_code_unit(ModuleName_24, 2)) {
                              case (MR_Integer) 112:
                                if (MR_offset_streq(3, ModuleName_24, (MR_String) "map"))
                                  case_num_6 = (MR_Integer) 10;
                                break;
                              case (MR_Integer) 121:
                                if (MR_offset_strn_eq(3, 2, ModuleName_24, (MR_String) "maybe"))
                                  switch (MR_nth_code_unit(ModuleName_24, 5)) {
                                    case (MR_Integer) 0:
                                      case_num_6 = (MR_Integer) 11;
                                      break;
                                    case (MR_Integer) 95:
                                      if (MR_offset_streq(6, ModuleName_24, (MR_String) "maybe_error"))
                                        case_num_6 = (MR_Integer) 12;
                                      break;
                                  }
                                break;
                            }
                            break;
                          case (MR_Integer) 117:
                            if (MR_offset_streq(2, ModuleName_24, (MR_String) "multi_map"))
                              case_num_6 = (MR_Integer) 13;
                            break;
                        }
                        break;
                      case (MR_Integer) 112:
                        switch (MR_nth_code_unit(ModuleName_24, 1)) {
                          case (MR_Integer) 97:
                            if (MR_offset_streq(2, ModuleName_24, (MR_String) "pair"))
                              case_num_6 = (MR_Integer) 14;
                            break;
                          case (MR_Integer) 113:
                            if (MR_offset_streq(2, ModuleName_24, (MR_String) "pqueue"))
                              case_num_6 = (MR_Integer) 15;
                            break;
                        }
                        break;
                      case (MR_Integer) 113:
                        if (MR_offset_streq(1, ModuleName_24, (MR_String) "queue"))
                          case_num_6 = (MR_Integer) 16;
                        break;
                      case (MR_Integer) 114:
                        switch (MR_nth_code_unit(ModuleName_24, 1)) {
                          case (MR_Integer) 97:
                            if (MR_offset_streq(2, ModuleName_24, (MR_String) "rational"))
                              case_num_6 = (MR_Integer) 17;
                            break;
                          case (MR_Integer) 98:
                            if (MR_offset_streq(2, ModuleName_24, (MR_String) "rbtree"))
                              case_num_6 = (MR_Integer) 18;
                            break;
                          case (MR_Integer) 116:
                            if (MR_offset_streq(2, ModuleName_24, (MR_String) "rtree"))
                              case_num_6 = (MR_Integer) 19;
                            break;
                        }
                        break;
                      case (MR_Integer) 115:
                        switch (MR_nth_code_unit(ModuleName_24, 1)) {
                          case (MR_Integer) 101:
                            switch (MR_nth_code_unit(ModuleName_24, 2)) {
                              case (MR_Integer) 116:
                                switch (MR_nth_code_unit(ModuleName_24, 3)) {
                                  case (MR_Integer) 0:
                                    case_num_6 = (MR_Integer) 20;
                                    break;
                                  case (MR_Integer) 95:
                                    switch (MR_nth_code_unit(ModuleName_24, 4)) {
                                      case (MR_Integer) 98:
                                        if (MR_offset_streq(5, ModuleName_24, (MR_String) "set_bbbtree"))
                                          case_num_6 = (MR_Integer) 21;
                                        break;
                                      case (MR_Integer) 99:
                                        if (MR_offset_streq(5, ModuleName_24, (MR_String) "set_ctree234"))
                                          case_num_6 = (MR_Integer) 22;
                                        break;
                                      case (MR_Integer) 111:
                                        if (MR_offset_streq(5, ModuleName_24, (MR_String) "set_ordlist"))
                                          case_num_6 = (MR_Integer) 23;
                                        break;
                                      case (MR_Integer) 116:
                                        if (MR_offset_streq(5, ModuleName_24, (MR_String) "set_tree234"))
                                          case_num_6 = (MR_Integer) 24;
                                        break;
                                      case (MR_Integer) 117:
                                        if (MR_offset_streq(5, ModuleName_24, (MR_String) "set_unordlist"))
                                          case_num_6 = (MR_Integer) 25;
                                        break;
                                    }
                                    break;
                                }
                                break;
                            }
                            break;
                          case (MR_Integer) 116:
                            switch (MR_nth_code_unit(ModuleName_24, 2)) {
                              case (MR_Integer) 97:
                                if (MR_offset_streq(3, ModuleName_24, (MR_String) "stack"))
                                  case_num_6 = (MR_Integer) 26;
                                break;
                              case (MR_Integer) 114:
                                if (MR_offset_streq(3, ModuleName_24, (MR_String) "string"))
                                  case_num_6 = (MR_Integer) 27;
                                break;
                            }
                            break;
                        }
                        break;
                      case (MR_Integer) 116:
                        if (MR_offset_streq(1, ModuleName_24, (MR_String) "term"))
                          case_num_6 = (MR_Integer) 28;
                        break;
                      case (MR_Integer) 118:
                        if (MR_offset_streq(1, ModuleName_24, (MR_String) "varset"))
                          case_num_6 = (MR_Integer) 29;
                        break;
                    }
                    switch (case_num_6) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          // case "assoc_list"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "assoc_list") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 1);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          // case "bag"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "bag") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 1);
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          // case "bimap"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "bimap") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 2);
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          // case "builtin"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "c_pointer") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 0);
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          // case "cord"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "cord") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 1);
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          // case "eqvclass"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "eqvclass") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 1);
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          // case "injection"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "injection") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 2);
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          // case "integer"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "integer") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 0);
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          // case "io"
                          ;
                          {
                            MR_Integer slot_0 = ((MR_hash_string4(CtorName_25)) & (MR_Integer) 63);
                            MR_String str_1 = ((&transform_hlds__exception_analysis_vector_common_11[0 + slot_0]))->transform_hlds__exception_analysis__vector_common_type_11_0__vct_11_f_0;

                            // hashed string jump switch
                            ;
                            // compute the hash value of the input string
                            ;
                            // no collisions; no hash chain loop
                            ;
                            // lookup the string for this hash slot
                            ;
                            // did we find a match?
                            ;
                            if ((((str_1 != NULL)) && ((strcmp(str_1, CtorName_25) == 0))))
                            {
                              // we found a match; dispatch to the corresponding code
                              ;
                              switch (slot_0) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 7:
                                  {
                                    // case "res"
                                    ;
                                    switch (Arity_26) {
                                      default:
                                        succeeded = MR_FALSE;
                                        break;
                                      case (MR_Integer) 0:
                                        succeeded = MR_TRUE;
                                        break;
                                      case (MR_Integer) 1:
                                        succeeded = MR_TRUE;
                                        break;
                                    }
                                  }
                                  break;
                                case (MR_Integer) 15:
                                  {
                                    // case "read_result"
                                    ;
                                    succeeded = (Arity_26 == (MR_Integer) 1);
                                  }
                                  break;
                                case (MR_Integer) 25:
                                  {
                                    // case "input_stream"
                                    ;
                                    succeeded = (Arity_26 == (MR_Integer) 0);
                                  }
                                  break;
                                case (MR_Integer) 29:
                                  {
                                    // case "error"
                                    ;
                                    succeeded = (Arity_26 == (MR_Integer) 0);
                                  }
                                  break;
                                case (MR_Integer) 33:
                                  {
                                    // case "binary_stream"
                                    ;
                                    succeeded = (Arity_26 == (MR_Integer) 0);
                                  }
                                  break;
                                case (MR_Integer) 39:
                                  {
                                    // case "stream_id"
                                    ;
                                    succeeded = (Arity_26 == (MR_Integer) 0);
                                  }
                                  break;
                                case (MR_Integer) 47:
                                  {
                                    // case "result"
                                    ;
                                    switch (Arity_26) {
                                      default:
                                        succeeded = MR_FALSE;
                                        break;
                                      case (MR_Integer) 0:
                                        succeeded = MR_TRUE;
                                        break;
                                      case (MR_Integer) 1:
                                        succeeded = MR_TRUE;
                                        break;
                                    }
                                  }
                                  break;
                                case (MR_Integer) 49:
                                  {
                                    // case "output_stream"
                                    ;
                                    succeeded = (Arity_26 == (MR_Integer) 0);
                                  }
                                  break;
                                case (MR_Integer) 52:
                                  {
                                    // case "maybe_partial_res"
                                    ;
                                    succeeded = (Arity_26 == (MR_Integer) 1);
                                  }
                                  break;
                              }
                              // jump out of search loop
                              ;
                              goto label_0;
                            }
                            succeeded = MR_FALSE;
                          label_0:;
                          }
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          // case "list"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "list") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 1);
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          // case "map"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "map") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 2);
                        }
                        break;
                      case (MR_Integer) 11:
                        {
                          // case "maybe"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "maybe") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 1);
                        }
                        break;
                      case (MR_Integer) 12:
                        {
                          // case "maybe_error"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "maybe_error") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 1);
                        }
                        break;
                      case (MR_Integer) 13:
                        {
                          // case "multi_map"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "multi_map") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 2);
                        }
                        break;
                      case (MR_Integer) 14:
                        {
                          // case "pair"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "pair") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 2);
                        }
                        break;
                      case (MR_Integer) 15:
                        {
                          // case "pqueue"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "pqueue") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 2);
                        }
                        break;
                      case (MR_Integer) 16:
                        {
                          // case "queue"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "queue") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 1);
                        }
                        break;
                      case (MR_Integer) 17:
                        {
                          // case "rational"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "rational") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 0);
                        }
                        break;
                      case (MR_Integer) 18:
                        {
                          // case "rbtree"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "rbtree") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 2);
                        }
                        break;
                      case (MR_Integer) 19:
                        {
                          // case "rtree"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "rtree") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 2);
                        }
                        break;
                      case (MR_Integer) 20:
                        {
                          // case "set"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "set") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 1);
                        }
                        break;
                      case (MR_Integer) 21:
                        {
                          // case "set_bbbtree"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "set_bbbtree") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 1);
                        }
                        break;
                      case (MR_Integer) 22:
                        {
                          // case "set_ctree234"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "set_ctree234") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 1);
                        }
                        break;
                      case (MR_Integer) 23:
                        {
                          // case "set_ordlist"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "set_ordlist") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 1);
                        }
                        break;
                      case (MR_Integer) 24:
                        {
                          // case "set_tree234"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "set_tree234") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 1);
                        }
                        break;
                      case (MR_Integer) 25:
                        {
                          // case "set_unordlist"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "set_unordlist") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 1);
                        }
                        break;
                      case (MR_Integer) 26:
                        {
                          // case "stack"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "stack") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 1);
                        }
                        break;
                      case (MR_Integer) 27:
                        {
                          // case "string"
                          ;
                          succeeded = (Arity_26 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            if ((strcmp(CtorName_25, (MR_String) "poly_type") == 0))
                              succeeded = MR_TRUE;
                            else
                            if ((strcmp(CtorName_25, (MR_String) "justified_column") == 0))
                              succeeded = MR_TRUE;
                            else
                              succeeded = MR_FALSE;
                          }
                        }
                        break;
                      case (MR_Integer) 28:
                        {
                          // case "term"
                          ;
                          {
                            MR_Integer lo_2 = (MR_Integer) 0;
                            MR_Integer hi_3 = (MR_Integer) 4;
                            MR_Integer mid_4;
                            MR_Integer result_5;

                            // binary string jump switch
                            ;
                            do
                            {
                              mid_4 = (((MR_Integer) ((MR_Unsigned) lo_2 + (MR_Unsigned) hi_3)) / (MR_Integer) 2);
                              result_5 = MR_strcmp(CtorName_25, ((&transform_hlds__exception_analysis_vector_common_12[0 + mid_4]))->transform_hlds__exception_analysis__vector_common_type_12_0__vct_12_f_0);
                              if ((result_5 == (MR_Integer) 0))
                              {
                                switch (((&transform_hlds__exception_analysis_vector_common_12[0 + mid_4]))->transform_hlds__exception_analysis__vector_common_type_12_0__vct_12_f_1) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                      // case "const"
                                      ;
                                      succeeded = (Arity_26 == (MR_Integer) 0);
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      // case "context"
                                      ;
                                      succeeded = (Arity_26 == (MR_Integer) 0);
                                    }
                                    break;
                                  case (MR_Integer) 2:
                                    {
                                      // case "term"
                                      ;
                                      succeeded = (Arity_26 == (MR_Integer) 1);
                                    }
                                    break;
                                  case (MR_Integer) 3:
                                    {
                                      // case "var"
                                      ;
                                      succeeded = (Arity_26 == (MR_Integer) 1);
                                    }
                                    break;
                                  case (MR_Integer) 4:
                                    {
                                      // case "var_supply"
                                      ;
                                      succeeded = (Arity_26 == (MR_Integer) 1);
                                    }
                                    break;
                                }
                                // jump out of search loop
                                ;
                                goto label_1;
                              }
                              else
                              if ((result_5 < (MR_Integer) 0))
                                hi_3 = (MR_Integer) ((MR_Unsigned) mid_4 - (MR_Unsigned) 1);
                              else
                                lo_2 = (MR_Integer) ((MR_Unsigned) mid_4 + (MR_Unsigned) 1);
                            }
                            while ((lo_2 <= hi_3));
                            succeeded = MR_FALSE;
                          label_1:;
                          }
                        }
                        break;
                      case (MR_Integer) 29:
                        {
                          // case "varset"
                          ;
                          succeeded = (strcmp(CtorName_25, (MR_String) "varset") == 0);
                          if (succeeded)
                            succeeded = (Arity_26 == (MR_Integer) 1);
                        }
                        break;
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word Var_29;
                MR_Box conv3_WillThrow_8;

                {
                  Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_29, 0) = ((MR_Box) (&transform_hlds__exception_analysis_scalar_common_6[2]));
                  MR_hl_field(0, Var_29, 1) = ((MR_Box) (transform_hlds__exception_analysis__excp_check_type_2_3_f_0_2));
                  MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_29, 3) = ((MR_Box) (ModuleInfo_5));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_type_excp_status_0), Var_29, Args_19, ((MR_Box) ((MR_Integer) 0)), &conv3_WillThrow_8);
                WillThrow_8 = ((MR_Word) (conv3_WillThrow_8));
              }
              else
                WillThrow_8 = (MR_Integer) 1;
            }
          }
          break;
      }
      break;
  }
  return WillThrow_8;
}

static void MR_CALL 
transform_hlds__exception_analysis__combine_maybe_analysis_status_3_p_0(
  MR_Word MaybeStatusA_4,
  MR_Word MaybeStatusB_5,
  MR_Word * MaybeStatus_6)
{
  MR_bool succeeded = (MaybeStatusA_4 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word StatusA_7;
  MR_Word StatusB_8;

  if (succeeded)
  {
    StatusA_7 = ((MR_Word) ((MR_hl_field(1, MaybeStatusA_4, 0))));
    succeeded = (MaybeStatusB_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      StatusB_8 = ((MR_Word) ((MR_hl_field(1, MaybeStatusB_5, 0))));
  }
  if (succeeded)
  {
    MR_Word Var_9;

    Var_9 = analysis__framework__lub_2_f_0(StatusA_7, StatusB_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeStatus_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_9));
    }
  }
  else
    *MaybeStatus_6 = (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
transform_hlds__exception_analysis__get_closure_exception_status_8_p_0(
  MR_Word IntermodAnalysis_9,
  MR_Word PPId_10,
  MR_Word STATE_VARIABLE_MaybeWillNotThrow_0_23,
  MR_Word * STATE_VARIABLE_MaybeWillNotThrow_24,
  MR_Word STATE_VARIABLE_AS_0_25,
  MR_Word * STATE_VARIABLE_AS_26,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28)
{
  MR_bool succeeded;
  MR_Word PredInfo_14;
  MR_Word ProcInfo_15;
  MR_Word ExceptionStatus_16;
  MR_Word MaybeAnalysisStatus_18;
  MR_Word StatusA_54;
  MR_Word StatusB_55;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_27, PPId_10, &PredInfo_14, &ProcInfo_15);
  succeeded = (IntermodAnalysis_9 == (MR_Integer) 1);
  if (succeeded)
    succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0(PredInfo_14);
  if (succeeded)
  {
    MR_Word AnalysisStatus_17;
    MR_Word AnalysisInfo0_33;
    MR_Word AnalysisInfo_34;
    MR_Word ModuleName_35;
    MR_Word FuncId_36;
    MR_Word MaybeBestResult_38;

    hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_27, &AnalysisInfo0_33);
    transform_hlds__mmc_analysis__module_name_func_id_4_p_0(STATE_VARIABLE_ModuleInfo_0_27, PPId_10, &ModuleName_35, &FuncId_36);
    analysis__operations__lookup_best_result_6_p_0((MR_Word) (&transform_hlds__exception_analysis_scalar_common_4[0]), AnalysisInfo0_33, ModuleName_35, FuncId_36, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)), &MaybeBestResult_38);
    if ((MaybeBestResult_38 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Answer_42;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Box conv1_Answer_42;

      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&transform_hlds__exception_analysis_scalar_common_4[0]), 0)), 9))));
      conv1_Answer_42 = func_0(((MR_Box) ((MR_Word) (&transform_hlds__exception_analysis_scalar_common_4[0]))), ((MR_Box) ((MR_Integer) 0)));
      Answer_42 = ((MR_Word) (conv1_Answer_42));
      ExceptionStatus_16 = (MR_Word) (Answer_42);
      AnalysisStatus_17 = (MR_Integer) 2;
      analysis__operations__record_request_6_p_0((MR_Word) (&transform_hlds__exception_analysis_scalar_common_3[0]), (MR_String) "exception_analysis", ModuleName_35, FuncId_36, ((MR_Box) ((MR_Integer) 0)), AnalysisInfo0_33, &AnalysisInfo_34);
    }
    else
    {
      MR_Word BestAnswer_40;
      MR_Word Var_44 = ((MR_Word) ((MR_hl_field(1, MaybeBestResult_38, 0))));

      BestAnswer_40 = ((MR_Word) ((MR_hl_field(0, Var_44, 1))));
      AnalysisStatus_17 = ((MR_Unsigned) ((MR_hl_field(0, Var_44, 2))) & (MR_Integer) 3);
      ExceptionStatus_16 = (MR_Word) (BestAnswer_40);
      analysis__operations__record_dependency_7_p_0((MR_Word) (&transform_hlds__exception_analysis_scalar_common_4[0]), ModuleName_35, FuncId_36, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)), AnalysisInfo0_33, &AnalysisInfo_34);
    }
    hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_34, STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28);
    {
      MaybeAnalysisStatus_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeAnalysisStatus_18, 0) = ((MR_Box) (AnalysisStatus_17));
    }
  }
  else
  {
    MR_Word MaybeExceptionInfo_19;

    hlds__hlds_pred__proc_info_get_exception_info_2_p_0(ProcInfo_15, &MaybeExceptionInfo_19);
    if ((MaybeExceptionInfo_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      ExceptionStatus_16 = (MR_Word) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[0]));
      switch (IntermodAnalysis_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeAnalysisStatus_18 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          MaybeAnalysisStatus_18 = (MR_Word) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[2]));
          break;
      }
    }
    else
    {
      MR_Word ProcExceptionInfo_20 = ((MR_Word) ((MR_hl_field(1, MaybeExceptionInfo_19, 0))));

      ExceptionStatus_16 = ((MR_Word) ((MR_hl_field(0, ProcExceptionInfo_20, 0))));
      MaybeAnalysisStatus_18 = ((MR_Word) ((MR_hl_field(0, ProcExceptionInfo_20, 1))));
    }
    *STATE_VARIABLE_ModuleInfo_28 = STATE_VARIABLE_ModuleInfo_0_27;
  }
  if ((STATE_VARIABLE_MaybeWillNotThrow_0_23 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_MaybeWillNotThrow_24 = STATE_VARIABLE_MaybeWillNotThrow_0_23;
  else
  {
    MR_Word Conditionals_21 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeWillNotThrow_0_23, 0))));

    switch (MR_tag((MR_Word) ExceptionStatus_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ExceptionStatus_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_MaybeWillNotThrow_24 = STATE_VARIABLE_MaybeWillNotThrow_0_23;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_32;

              {
                Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_32, 0) = ((MR_Box) (PPId_10));
                MR_hl_field(1, Var_32, 1) = ((MR_Box) (Conditionals_21));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_MaybeWillNotThrow_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_32));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_MaybeWillNotThrow_24 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
  }
  succeeded = (MaybeAnalysisStatus_18 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    StatusA_54 = ((MR_Word) ((MR_hl_field(1, MaybeAnalysisStatus_18, 0))));
    succeeded = (STATE_VARIABLE_AS_0_25 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      StatusB_55 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_AS_0_25, 0))));
  }
  if (succeeded)
  {
    MR_Word Var_56;

    Var_56 = analysis__framework__lub_2_f_0(StatusA_54, StatusB_55);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_AS_26 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_56));
    }
  }
  else
    *STATE_VARIABLE_AS_26 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_Box MR_CALL 
transform_hlds__exception_analysis__check_proc_for_exceptions_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_94;

  conv0_LambdaHeadVar__2_94 = transform_hlds__exception_analysis__IntroducedFrom__func__check_goal_for_exceptions_2__416__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_94));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__exception_analysis__check_proc_for_exceptions_6_p_0(
  MR_Word SCC_7,
  MR_Word PPId_8,
  MR_Word STATE_VARIABLE_Results_0_20,
  MR_Word * STATE_VARIABLE_Results_21,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23)
{
  MR_bool succeeded;
  MR_Word ProcInfo_12;
  MR_Word Body_13;
  MR_Word VarTable_14;
  MR_Word Globals_15;
  MR_Word IntermodAnalysis_16;
  MR_Word MaybeAnalysisStatus0_17;
  MR_Word Result0_18;
  MR_Word Result_19;
  MR_Word GoalExpr_29;
  MR_Word GoalInfo_30;
  MR_Word Var_11;
  MR_Word Var_31;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_22, PPId_8, &Var_11, &ProcInfo_12);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_12, &Body_13);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_12, &VarTable_14);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_22, &Globals_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 411, &IntermodAnalysis_16);
  switch (IntermodAnalysis_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MaybeAnalysisStatus0_17 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      MaybeAnalysisStatus0_17 = (MR_Word) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[2]));
      break;
  }
  {
    Result0_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Result0_18, 0) = ((MR_Box) (PPId_8));
    MR_hl_field(0, Result0_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Result0_18, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, Result0_18, 3) = ((MR_Box) (MaybeAnalysisStatus0_17));
  }
  GoalExpr_29 = ((MR_Word) ((MR_hl_field(0, Body_13, 0))));
  GoalInfo_30 = ((MR_Word) ((MR_hl_field(0, Body_13, 1))));
  Var_31 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_30);
  succeeded = (Var_31 == (MR_Integer) 6);
  if (succeeded)
  {
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Result0_18, 0))));
    MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, Result0_18, 2))) & (MR_Integer) 3);
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Result0_18, 3))));

    {
      Result_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_19, 0) = ((MR_Box) (Var_34));
      MR_hl_field(0, Result_19, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[0])));
      MR_hl_field(0, Result_19, 2) = (MR_Box) ((MR_Unsigned) (Var_36));
      MR_hl_field(0, Result_19, 3) = ((MR_Box) (Var_37));
    }
    *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_0_22;
  }
  else
    switch (MR_tag((MR_Word) GoalExpr_29)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_72 = (MR_Word) ((MR_Word) (GoalExpr_29));

          transform_hlds__exception_analysis__check_goal_for_exceptions_7_p_0(SCC_7, VarTable_14, SubGoal_72, Result0_18, &Result_19, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Kind_41 = ((MR_Word) ((MR_hl_field(1, GoalExpr_29, 3))));

          switch (MR_tag((MR_Word) Kind_41)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
              }
              break;
            case (MR_Integer) 2:
              {
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Kind_41, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.exception_analysis.check_goal_for_exceptions_2\'/8", (MR_String) "complicated unify during exception analysis.");
                    return;
                  }
                  break;
              }
              break;
          }
          Result_19 = Result0_18;
          *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_0_22;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CallPredId_43 = ((MR_Word) ((MR_hl_field(2, GoalExpr_29, 0))));
          MR_Integer CallProcId_44 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_29, 1))));
          MR_Word Args_45 = ((MR_Word) ((MR_hl_field(2, GoalExpr_29, 2))));

          transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0(SCC_7, VarTable_14, CallPredId_43, CallProcId_44, Args_45, Result0_18, &Result_19, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_29, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Details_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_29, 1))));
              MR_Word Args_86 = ((MR_Word) ((MR_hl_field(3, GoalExpr_29, 2))));

              transform_hlds__exception_analysis__check_goal_for_exceptions_generic_call_8_p_0(VarTable_14, Details_49, Args_86, GoalInfo_30, Result0_18, &Result_19, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr_29, 1))));
              MR_Word MayCallMercury_60;

              MayCallMercury_60 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_53);
              switch (MayCallMercury_60) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word MayThrowException_61;

                    MayThrowException_61 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(Attributes_53);
                    switch (MayThrowException_61) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, Result0_18, 0))));
                          MR_Word Var_90 = ((MR_Unsigned) ((MR_hl_field(0, Result0_18, 2))) & (MR_Integer) 3);
                          MR_Word Var_91 = ((MR_Word) ((MR_hl_field(0, Result0_18, 3))));

                          {
                            Result_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Result_19, 0) = ((MR_Box) (Var_88));
                            MR_hl_field(0, Result_19, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[0])));
                            MR_hl_field(0, Result_19, 2) = (MR_Box) ((MR_Unsigned) (Var_90));
                            MR_hl_field(0, Result_19, 3) = ((MR_Box) (Var_91));
                          }
                        }
                        break;
                      case (MR_Integer) 0:
                        Result_19 = Result0_18;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  Result_19 = Result0_18;
                  break;
              }
              *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_0_22;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr_29, 2))));

              transform_hlds__exception_analysis__check_goals_for_exceptions_7_p_0(SCC_7, VarTable_14, Goals_62, Result0_18, &Result_19, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_94 = ((MR_Word) ((MR_hl_field(3, GoalExpr_29, 1))));

              transform_hlds__exception_analysis__check_goals_for_exceptions_7_p_0(SCC_7, VarTable_14, Goals_94, Result0_18, &Result_19, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr_29, 3))));
              MR_Word CaseGoals_67;

              CaseGoals_67 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__exception_analysis_scalar_common_2[6]), Cases_66);
              transform_hlds__exception_analysis__check_goals_for_exceptions_7_p_0(SCC_7, VarTable_14, CaseGoals_67, Result0_18, &Result_19, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr_29, 1))));
              MR_Word SubGoal_87 = ((MR_Word) ((MR_hl_field(3, GoalExpr_29, 2))));
              MR_Word FGT_75;

              succeeded = ((((MR_tag((MR_Word) Reason_73)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_73, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_75 = ((MR_Unsigned) ((MR_hl_field(3, Reason_73, 2))) & (MR_Integer) 3);
                switch (FGT_75) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
              {
                *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_0_22;
                Result_19 = Result0_18;
              }
              else
                transform_hlds__exception_analysis__check_goal_for_exceptions_7_p_0(SCC_7, VarTable_14, SubGoal_87, Result0_18, &Result_19, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Then_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr_29, 3))));
              MR_Word Else_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_29, 4))));
              MR_Word Var_82;
              MR_Word Goal_103 = ((MR_Word) ((MR_hl_field(3, GoalExpr_29, 2))));
              MR_Word Goals_104;
              MR_Word CurrentStatus_105;
              MR_Word STATE_VARIABLE_Result_1_110;
              MR_Word STATE_VARIABLE_ModuleInfo_1_111;

              {
                Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_82, 0) = ((MR_Box) (Else_71));
                MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Goals_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Goals_104, 0) = ((MR_Box) (Then_70));
                MR_hl_field(1, Goals_104, 1) = ((MR_Box) (Var_82));
              }
              transform_hlds__exception_analysis__check_goal_for_exceptions_7_p_0(SCC_7, VarTable_14, Goal_103, Result0_18, &STATE_VARIABLE_Result_1_110, STATE_VARIABLE_ModuleInfo_0_22, &STATE_VARIABLE_ModuleInfo_1_111);
              CurrentStatus_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Result_1_110, 1))));
              switch (MR_tag((MR_Word) CurrentStatus_105)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(CurrentStatus_105)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      transform_hlds__exception_analysis__check_goals_for_exceptions_7_p_0(SCC_7, VarTable_14, Goals_104, STATE_VARIABLE_Result_1_110, &Result_19, STATE_VARIABLE_ModuleInfo_1_111, STATE_VARIABLE_ModuleInfo_23);
                      break;
                    case (MR_Integer) 1:
                      transform_hlds__exception_analysis__check_goals_for_exceptions_7_p_0(SCC_7, VarTable_14, Goals_104, STATE_VARIABLE_Result_1_110, &Result_19, STATE_VARIABLE_ModuleInfo_1_111, STATE_VARIABLE_ModuleInfo_23);
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_117 = ((MR_Unsigned) ((MR_hl_field(1, CurrentStatus_105, 0))) & (MR_Integer) 1);

                    switch (Var_117) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          MR_Word Goal_126 = ((MR_Word) ((MR_hl_field(1, Goals_104, 0))));
                          MR_Word Goals_127 = ((MR_Word) ((MR_hl_field(1, Goals_104, 1))));
                          MR_Word CurrentStatus_128;
                          MR_Word STATE_VARIABLE_Result_1_133;
                          MR_Word STATE_VARIABLE_ModuleInfo_1_134;

                          transform_hlds__exception_analysis__check_goal_for_exceptions_7_p_0(SCC_7, VarTable_14, Goal_126, STATE_VARIABLE_Result_1_110, &STATE_VARIABLE_Result_1_133, STATE_VARIABLE_ModuleInfo_1_111, &STATE_VARIABLE_ModuleInfo_1_134);
                          CurrentStatus_128 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Result_1_133, 1))));
                          switch (MR_tag((MR_Word) CurrentStatus_128)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              switch (MR_unmkbody(CurrentStatus_128)) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  transform_hlds__exception_analysis__check_goals_for_exceptions_7_p_0(SCC_7, VarTable_14, Goals_127, STATE_VARIABLE_Result_1_133, &Result_19, STATE_VARIABLE_ModuleInfo_1_134, STATE_VARIABLE_ModuleInfo_23);
                                  break;
                                case (MR_Integer) 1:
                                  transform_hlds__exception_analysis__check_goals_for_exceptions_7_p_0(SCC_7, VarTable_14, Goals_127, STATE_VARIABLE_Result_1_133, &Result_19, STATE_VARIABLE_ModuleInfo_1_134, STATE_VARIABLE_ModuleInfo_23);
                                  break;
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_Word Var_140 = ((MR_Unsigned) ((MR_hl_field(1, CurrentStatus_128, 0))) & (MR_Integer) 1);

                                switch (Var_140) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 1:
                                    {
                                      MR_Word Goal_149 = ((MR_Word) ((MR_hl_field(1, Goals_127, 0))));
                                      MR_Word Goals_150 = ((MR_Word) ((MR_hl_field(1, Goals_127, 1))));
                                      MR_Word CurrentStatus_151;
                                      MR_Word STATE_VARIABLE_Result_1_156;
                                      MR_Word STATE_VARIABLE_ModuleInfo_1_157;

                                      transform_hlds__exception_analysis__check_goal_for_exceptions_7_p_0(SCC_7, VarTable_14, Goal_149, STATE_VARIABLE_Result_1_133, &STATE_VARIABLE_Result_1_156, STATE_VARIABLE_ModuleInfo_1_134, &STATE_VARIABLE_ModuleInfo_1_157);
                                      CurrentStatus_151 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Result_1_156, 1))));
                                      switch (MR_tag((MR_Word) CurrentStatus_151)) {
                                        default: /*NOTREACHED*/ MR_assert(0);
                                        case (MR_Integer) 0:
                                          switch (MR_unmkbody(CurrentStatus_151)) {
                                            default: /*NOTREACHED*/ MR_assert(0);
                                            case (MR_Integer) 0:
                                              transform_hlds__exception_analysis__check_goals_for_exceptions_7_p_0(SCC_7, VarTable_14, Goals_150, STATE_VARIABLE_Result_1_156, &Result_19, STATE_VARIABLE_ModuleInfo_1_157, STATE_VARIABLE_ModuleInfo_23);
                                              break;
                                            case (MR_Integer) 1:
                                              {
                                                *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_1_157;
                                                Result_19 = STATE_VARIABLE_Result_1_156;
                                              }
                                              break;
                                          }
                                          break;
                                        case (MR_Integer) 1:
                                          {
                                            MR_Word Var_163 = ((MR_Unsigned) ((MR_hl_field(1, CurrentStatus_151, 0))) & (MR_Integer) 1);

                                            switch (Var_163) {
                                              default: /*NOTREACHED*/ MR_assert(0);
                                              case (MR_Integer) 1:
                                                {
                                                  *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_1_157;
                                                  Result_19 = STATE_VARIABLE_Result_1_156;
                                                }
                                                break;
                                              case (MR_Integer) 0:
                                                {
                                                  Result_19 = STATE_VARIABLE_Result_1_156;
                                                  *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_1_157;
                                                }
                                                break;
                                            }
                                          }
                                          break;
                                      }
                                    }
                                    break;
                                  case (MR_Integer) 0:
                                    {
                                      Result_19 = STATE_VARIABLE_Result_1_133;
                                      *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_1_134;
                                    }
                                    break;
                                }
                              }
                              break;
                          }
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          Result_19 = STATE_VARIABLE_Result_1_110;
                          *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_1_111;
                        }
                        break;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.exception_analysis.check_goal_for_exceptions_2\'/8", (MR_String) "shorthand goal encountered during exception analysis.");
              return;
            }
            break;
        }
        break;
    }
  mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_excp_proc_result_0), ((MR_Box) (Result_19)), STATE_VARIABLE_Results_0_20, STATE_VARIABLE_Results_21);
}

static MR_Box MR_CALL 
transform_hlds__exception_analysis__check_goal_for_exceptions_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_94;

  conv0_LambdaHeadVar__2_94 = transform_hlds__exception_analysis__IntroducedFrom__func__check_goal_for_exceptions_2__416__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_94));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__exception_analysis__check_goal_for_exceptions_7_p_0(
  MR_Word SCC_8,
  MR_Word VarTable_9,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Result_0_14,
  MR_Word * STATE_VARIABLE_Result_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word Var_18;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_18 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_11);
    succeeded = (Var_18 == (MR_Integer) 6);
    if (succeeded)
    {
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Result_0_14, 0))));
      MR_Word Var_24 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Result_0_14, 2))) & (MR_Integer) 3);
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Result_0_14, 3))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Result_15 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_22));
        MR_hl_field(0, base, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[0])));
        MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_24));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_25));
      }
      *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_0_16;
    }
    else
      switch (MR_tag((MR_Word) GoalExpr_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_60 = (MR_Word) ((MR_Word) (GoalExpr_10));
            MR_Word next_value_of_HeadVar__3_3 = SubGoal_60;

            // direct tailcall eliminated
            ;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Kind_29 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, 3))));

            switch (MR_tag((MR_Word) Kind_29)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                }
                break;
              case (MR_Integer) 2:
                {
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Kind_29, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.exception_analysis.check_goal_for_exceptions_2\'/8", (MR_String) "complicated unify during exception analysis.");
                      return;
                    }
                    break;
                }
                break;
            }
            *STATE_VARIABLE_Result_15 = STATE_VARIABLE_Result_0_14;
            *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_0_16;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word CallPredId_31 = ((MR_Word) ((MR_hl_field(2, GoalExpr_10, 0))));
            MR_Integer CallProcId_32 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_10, 1))));
            MR_Word Args_33 = ((MR_Word) ((MR_hl_field(2, GoalExpr_10, 2))));

            transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0(SCC_8, VarTable_9, CallPredId_31, CallProcId_32, Args_33, STATE_VARIABLE_Result_0_14, STATE_VARIABLE_Result_15, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_10, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Details_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
                MR_Word Args_74 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));

                transform_hlds__exception_analysis__check_goal_for_exceptions_generic_call_8_p_0(VarTable_9, Details_37, Args_74, GoalInfo_11, STATE_VARIABLE_Result_0_14, STATE_VARIABLE_Result_15, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attributes_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
                MR_Word MayCallMercury_48;

                MayCallMercury_48 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_41);
                switch (MayCallMercury_48) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word MayThrowException_49;

                      MayThrowException_49 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(Attributes_41);
                      switch (MayThrowException_49) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            MR_Word Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Result_0_14, 0))));
                            MR_Word Var_78 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Result_0_14, 2))) & (MR_Integer) 3);
                            MR_Word Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Result_0_14, 3))));

                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                              *STATE_VARIABLE_Result_15 = base;
                              MR_hl_field(0, base, 0) = ((MR_Box) (Var_76));
                              MR_hl_field(0, base, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[0])));
                              MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_78));
                              MR_hl_field(0, base, 3) = ((MR_Box) (Var_79));
                            }
                          }
                          break;
                        case (MR_Integer) 0:
                          *STATE_VARIABLE_Result_15 = STATE_VARIABLE_Result_0_14;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    *STATE_VARIABLE_Result_15 = STATE_VARIABLE_Result_0_14;
                    break;
                }
                *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_0_16;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));

                transform_hlds__exception_analysis__check_goals_for_exceptions_7_p_0(SCC_8, VarTable_9, Goals_50, STATE_VARIABLE_Result_0_14, STATE_VARIABLE_Result_15, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_82 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));

                transform_hlds__exception_analysis__check_goals_for_exceptions_7_p_0(SCC_8, VarTable_9, Goals_82, STATE_VARIABLE_Result_0_14, STATE_VARIABLE_Result_15, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 3))));
                MR_Word CaseGoals_55;

                CaseGoals_55 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__exception_analysis_scalar_common_2[5]), Cases_54);
                transform_hlds__exception_analysis__check_goals_for_exceptions_7_p_0(SCC_8, VarTable_9, CaseGoals_55, STATE_VARIABLE_Result_0_14, STATE_VARIABLE_Result_15, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
                MR_Word SubGoal_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));
                MR_Word FGT_63;

                succeeded = ((((MR_tag((MR_Word) Reason_61)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_61, 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_63 = ((MR_Unsigned) ((MR_hl_field(3, Reason_61, 2))) & (MR_Integer) 3);
                  switch (FGT_63) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      succeeded = MR_TRUE;
                      break;
                  }
                }
                if (succeeded)
                {
                  *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_0_16;
                  *STATE_VARIABLE_Result_15 = STATE_VARIABLE_Result_0_14;
                }
                else
                {
                  MR_Word next_value_of_HeadVar__3_3 = SubGoal_75;

                  // direct tailcall eliminated
                  ;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  continue;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Then_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 3))));
                MR_Word Else_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 4))));
                MR_Word Var_70;
                MR_Word Goal_91 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));
                MR_Word Goals_92;
                MR_Word CurrentStatus_93;
                MR_Word STATE_VARIABLE_Result_1_98;
                MR_Word STATE_VARIABLE_ModuleInfo_1_99;

                {
                  Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_70, 0) = ((MR_Box) (Else_59));
                  MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Goals_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Goals_92, 0) = ((MR_Box) (Then_58));
                  MR_hl_field(1, Goals_92, 1) = ((MR_Box) (Var_70));
                }
                transform_hlds__exception_analysis__check_goal_for_exceptions_7_p_0(SCC_8, VarTable_9, Goal_91, STATE_VARIABLE_Result_0_14, &STATE_VARIABLE_Result_1_98, STATE_VARIABLE_ModuleInfo_0_16, &STATE_VARIABLE_ModuleInfo_1_99);
                CurrentStatus_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Result_1_98, 1))));
                switch (MR_tag((MR_Word) CurrentStatus_93)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(CurrentStatus_93)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        transform_hlds__exception_analysis__check_goals_for_exceptions_7_p_0(SCC_8, VarTable_9, Goals_92, STATE_VARIABLE_Result_1_98, STATE_VARIABLE_Result_15, STATE_VARIABLE_ModuleInfo_1_99, STATE_VARIABLE_ModuleInfo_17);
                        break;
                      case (MR_Integer) 1:
                        transform_hlds__exception_analysis__check_goals_for_exceptions_7_p_0(SCC_8, VarTable_9, Goals_92, STATE_VARIABLE_Result_1_98, STATE_VARIABLE_Result_15, STATE_VARIABLE_ModuleInfo_1_99, STATE_VARIABLE_ModuleInfo_17);
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_105 = ((MR_Unsigned) ((MR_hl_field(1, CurrentStatus_93, 0))) & (MR_Integer) 1);

                      switch (Var_105) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          transform_hlds__exception_analysis__check_goals_for_exceptions_7_p_0(SCC_8, VarTable_9, Goals_92, STATE_VARIABLE_Result_1_98, STATE_VARIABLE_Result_15, STATE_VARIABLE_ModuleInfo_1_99, STATE_VARIABLE_ModuleInfo_17);
                          break;
                        case (MR_Integer) 0:
                          {
                            *STATE_VARIABLE_Result_15 = STATE_VARIABLE_Result_1_98;
                            *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_1_99;
                          }
                          break;
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.exception_analysis.check_goal_for_exceptions_2\'/8", (MR_String) "shorthand goal encountered during exception analysis.");
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
transform_hlds__exception_analysis__check_goals_for_exceptions_7_p_0(
  MR_Word SCC_1,
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Result_0_4,
  MR_Word * STATE_VARIABLE_Result_5,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_7 = STATE_VARIABLE_ModuleInfo_0_6;
      *STATE_VARIABLE_Result_5 = STATE_VARIABLE_Result_0_4;
    }
    else
    {
      MR_Word Goal_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Goals_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word CurrentStatus_22;
      MR_Word STATE_VARIABLE_Result_1_27;
      MR_Word STATE_VARIABLE_ModuleInfo_1_28;

      transform_hlds__exception_analysis__check_goal_for_exceptions_7_p_0(SCC_1, VarTable_2, Goal_18, STATE_VARIABLE_Result_0_4, &STATE_VARIABLE_Result_1_27, STATE_VARIABLE_ModuleInfo_0_6, &STATE_VARIABLE_ModuleInfo_1_28);
      CurrentStatus_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Result_1_27, 1))));
      switch (MR_tag((MR_Word) CurrentStatus_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(CurrentStatus_22)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word next_value_of_HeadVar__3_3 = Goals_19;
                MR_Word next_value_of_STATE_VARIABLE_Result_0_4 = STATE_VARIABLE_Result_1_27;
                MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_6 = STATE_VARIABLE_ModuleInfo_1_28;

                // direct tailcall eliminated
                ;
                HeadVar__3_3 = next_value_of_HeadVar__3_3;
                STATE_VARIABLE_Result_0_4 = next_value_of_STATE_VARIABLE_Result_0_4;
                STATE_VARIABLE_ModuleInfo_0_6 = next_value_of_STATE_VARIABLE_ModuleInfo_0_6;
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word next_value_of_HeadVar__3_3 = Goals_19;
                MR_Word next_value_of_STATE_VARIABLE_Result_0_4 = STATE_VARIABLE_Result_1_27;
                MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_6 = STATE_VARIABLE_ModuleInfo_1_28;

                // direct tailcall eliminated
                ;
                HeadVar__3_3 = next_value_of_HeadVar__3_3;
                STATE_VARIABLE_Result_0_4 = next_value_of_STATE_VARIABLE_Result_0_4;
                STATE_VARIABLE_ModuleInfo_0_6 = next_value_of_STATE_VARIABLE_ModuleInfo_0_6;
                continue;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_34 = ((MR_Unsigned) ((MR_hl_field(1, CurrentStatus_22, 0))) & (MR_Integer) 1);

            switch (Var_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word next_value_of_HeadVar__3_3 = Goals_19;
                  MR_Word next_value_of_STATE_VARIABLE_Result_0_4 = STATE_VARIABLE_Result_1_27;
                  MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_6 = STATE_VARIABLE_ModuleInfo_1_28;

                  // direct tailcall eliminated
                  ;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  STATE_VARIABLE_Result_0_4 = next_value_of_STATE_VARIABLE_Result_0_4;
                  STATE_VARIABLE_ModuleInfo_0_6 = next_value_of_STATE_VARIABLE_ModuleInfo_0_6;
                  continue;
                }
                break;
              case (MR_Integer) 0:
                {
                  *STATE_VARIABLE_Result_5 = STATE_VARIABLE_Result_1_27;
                  *STATE_VARIABLE_ModuleInfo_7 = STATE_VARIABLE_ModuleInfo_1_28;
                }
                break;
            }
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__exception_analysis__check_goal_for_exceptions_generic_call_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_Status_9;

  transform_hlds__exception_analysis__excp_check_type_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Status_9);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_Status_9));
}

static void MR_CALL 
transform_hlds__exception_analysis__check_goal_for_exceptions_generic_call_8_p_0_1(
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
  MR_Word conv3_STATE_VARIABLE_MaybeWillNotThrow_24;
  MR_Word conv2_STATE_VARIABLE_AS_26;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_28;

  transform_hlds__exception_analysis__get_closure_exception_status_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_MaybeWillNotThrow_24, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_AS_26, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_ModuleInfo_28);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_MaybeWillNotThrow_24));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_AS_26));
  *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_28));
}

static void MR_CALL 
transform_hlds__exception_analysis__check_goal_for_exceptions_generic_call_8_p_0(
  MR_Word VarTable_9,
  MR_Word Details_10,
  MR_Word Args_11,
  MR_Word GoalInfo_12,
  MR_Word STATE_VARIABLE_Result_0_35,
  MR_Word * STATE_VARIABLE_Result_36,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38)
{
  MR_bool succeeded;
  MR_Word Globals_15;
  MR_Word IntermodAnalysis_16;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_37, &Globals_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 411, &IntermodAnalysis_16);
  switch (MR_tag((MR_Word) Details_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, Details_10, 0))));
        MR_Word ClosureValueMap_22;
        MR_Word ClosureValues_23;
        MR_Box conv0_ClosureValues_23;

        ClosureValueMap_22 = hlds__hlds_goal__goal_info_get_higher_order_value_map_1_f_0(GoalInfo_12);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__exception_analysis_scalar_common_1[5]), (MR_Word) (&transform_hlds__exception_analysis_scalar_common_1[0]), ClosureValueMap_22, ((MR_Box) (Var_17)), &conv0_ClosureValues_23);
        if (succeeded)
        {
          ClosureValues_23 = ((MR_Word) (conv0_ClosureValues_23));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word MaybeWillNotThrow_24;
          MR_Word MaybeAnalysisStatus_25;
          MR_Word AnalysisStatus0_65;
          MR_Word Var_66;
          MR_Box conv6_MaybeWillNotThrow_24;
          MR_Box conv5_MaybeAnalysisStatus_25;
          MR_Box conv4_STATE_VARIABLE_ModuleInfo_38;

          switch (IntermodAnalysis_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              AnalysisStatus0_65 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              AnalysisStatus0_65 = (MR_Word) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[2]));
              break;
          }
          {
            Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_66, 0) = ((MR_Box) (&transform_hlds__exception_analysis_scalar_common_10[0]));
            MR_hl_field(0, Var_66, 1) = ((MR_Box) (transform_hlds__exception_analysis__check_goal_for_exceptions_generic_call_8_p_0_1));
            MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_66, 3) = ((MR_Box) (IntermodAnalysis_16));
          }
          mercury__set__fold3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_closures_exception_status_0), (MR_Word) (&transform_hlds__exception_analysis_scalar_common_1[4]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_66, ClosureValues_23, ((MR_Box) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[3]))), &conv6_MaybeWillNotThrow_24, ((MR_Box) (AnalysisStatus0_65)), &conv5_MaybeAnalysisStatus_25, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_37)), &conv4_STATE_VARIABLE_ModuleInfo_38);
          MaybeWillNotThrow_24 = ((MR_Word) (conv6_MaybeWillNotThrow_24));
          MaybeAnalysisStatus_25 = ((MR_Word) (conv5_MaybeAnalysisStatus_25));
          *STATE_VARIABLE_ModuleInfo_38 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_38));
          if ((MaybeWillNotThrow_24 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Result_0_35, 0))));
            MR_Word Var_53 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Result_0_35, 2))) & (MR_Integer) 3);
            MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Result_0_35, 3))));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Result_36 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_51));
              MR_hl_field(0, base, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[0])));
              MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_53));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_54));
            }
          }
          else
          {
            MR_Word ConditionalProcs_26 = ((MR_Word) ((MR_hl_field(1, MaybeWillNotThrow_24, 0))));

            if ((ConditionalProcs_26 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_Result_36 = STATE_VARIABLE_Result_0_35;
            else
            {
              MR_Word Types_73;
              MR_Word TypeStatus_74;
              MR_Word Var_78;
              MR_Box conv8_TypeStatus_74;

              parse_tree__var_table__lookup_var_types_3_p_0(VarTable_9, Args_11, &Types_73);
              {
                Var_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_78, 0) = ((MR_Box) (&transform_hlds__exception_analysis_scalar_common_6[2]));
                MR_hl_field(0, Var_78, 1) = ((MR_Box) (transform_hlds__exception_analysis__check_goal_for_exceptions_generic_call_8_p_0_2));
                MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_78, 3) = ((MR_Box) (*STATE_VARIABLE_ModuleInfo_38));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_type_excp_status_0), Var_78, Types_73, ((MR_Box) ((MR_Integer) 0)), &conv8_TypeStatus_74);
              TypeStatus_74 = ((MR_Word) (conv8_TypeStatus_74));
              switch (TypeStatus_74) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  transform_hlds__exception_analysis__update_excp_proc_result_4_p_0((MR_Word) ((MR_Unsigned) 4U), MaybeAnalysisStatus_25, STATE_VARIABLE_Result_0_35, STATE_VARIABLE_Result_36);
                  break;
                case (MR_Integer) 1:
                  transform_hlds__exception_analysis__update_excp_proc_result_4_p_0((MR_Word) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[1])), MaybeAnalysisStatus_25, STATE_VARIABLE_Result_0_35, STATE_VARIABLE_Result_36);
                  break;
                case (MR_Integer) 0:
                  *STATE_VARIABLE_Result_36 = STATE_VARIABLE_Result_0_35;
                  break;
              }
            }
          }
        }
        else
        {
          MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Result_0_35, 0))));
          MR_Word Var_57 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Result_0_35, 2))) & (MR_Integer) 3);
          MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Result_0_35, 3))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Result_36 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_55));
            MR_hl_field(0, base, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[0])));
            MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_57));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_58));
          }
          *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_0_37;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Result_0_35, 0))));
        MR_Word Var_61 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Result_0_35, 2))) & (MR_Integer) 3);
        MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Result_0_35, 3))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Result_36 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_59));
          MR_hl_field(0, base, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[0])));
          MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_61));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_62));
        }
        *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_0_37;
      }
      break;
    case (MR_Integer) 2:
      {
        *STATE_VARIABLE_Result_36 = STATE_VARIABLE_Result_0_35;
        *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_0_37;
      }
      break;
    case (MR_Integer) 3:
      {
        *STATE_VARIABLE_Result_36 = STATE_VARIABLE_Result_0_35;
        *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_0_37;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Status_9;

  transform_hlds__exception_analysis__excp_check_type_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Status_9);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Status_9));
}

static void MR_CALL 
transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Status_9;

  transform_hlds__exception_analysis__excp_check_type_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Status_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Status_9));
}

static void MR_CALL 
transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_String Var_26;

    mdbcomp__prim_data__special_pred_name_arity_4_p_0((env_ptr)->transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__SpecialPredId_25, &(env_ptr)->transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__Var_53, &Var_26, &(env_ptr)->transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__Var_54);
    (env_ptr)->transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__succeeded = (strcmp((env_ptr)->transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__Name_23, (env_ptr)->transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__Var_53) == 0);
    if ((env_ptr)->transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__succeeded)
    {
      (env_ptr)->transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__Arity_24 == (env_ptr)->transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__Var_54);
      if ((env_ptr)->transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__succeeded)
        transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_2(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__commit_0) == 0)
    {
      {
        MR_Word ModuleName_22;
        MR_Word Var_38;

        ModuleName_22 = hlds__hlds_pred__pred_info_module_1_f_0((env_ptr)->transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__CallPredInfo_18);
        (env_ptr)->transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(ModuleName_22);
        if ((env_ptr)->transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__succeeded)
        {
          (env_ptr)->transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__Name_23 = hlds__hlds_pred__pred_info_name_1_f_0((env_ptr)->transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__CallPredInfo_18);
          hlds__hlds_pred__pred_info_get_orig_arity_2_p_0((env_ptr)->transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__CallPredInfo_18, &Var_38);
          (env_ptr)->transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__Arity_24 = (MR_Integer) (Var_38);
          {
            MR_Integer slot_1 = (MR_Integer) 0;

            do
            {
              (env_ptr)->transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__SpecialPredId_25 = ((&transform_hlds__exception_analysis_vector_common_9[0 + slot_1]))->transform_hlds__exception_analysis__vector_common_type_9_0__vct_9_f_0;
              transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_3(env_ptr);
              slot_1 = (MR_Integer) ((MR_Unsigned) slot_1 + (MR_Unsigned) 1);
            }
            while ((slot_1 < (MR_Integer) 2));
          }
        }
      }
      (env_ptr)->transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0(
  MR_Word SCC_10,
  MR_Word VarTable_11,
  MR_Word CallPredId_12,
  MR_Integer CallProcId_13,
  MR_Word CallArgs_14,
  MR_Word STATE_VARIABLE_Result_0_32,
  MR_Word * STATE_VARIABLE_Result_33,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35)
{
  struct transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0_s env;

  {
    MR_Word CallPPId_17;

    {
      CallPPId_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CallPPId_17, 0) = ((MR_Box) (CallPredId_12));
      MR_hl_field(0, CallPPId_17, 1) = ((MR_Box) (CallProcId_13));
    }
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_34, CallPredId_12, &(env).transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__CallPredInfo_18);
    (env).transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (CallPPId_17)), SCC_10);
    if ((env).transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__succeeded)
    {
      MR_Word Types_19;
      MR_Word TypeStatus_20;
      MR_Word NewTypeStatus_21;
      MR_Word Var_36;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_55;
      MR_Box conv1_TypeStatus_20;
      MR_Unsigned packed_word_0;

      parse_tree__var_table__lookup_var_types_3_p_0(VarTable_11, CallArgs_14, &Types_19);
      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_55, 0) = ((MR_Box) (&transform_hlds__exception_analysis_scalar_common_6[2]));
        MR_hl_field(0, Var_55, 1) = ((MR_Box) (transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_1));
        MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_55, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_34));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_type_excp_status_0), Var_55, Types_19, ((MR_Box) ((MR_Integer) 0)), &conv1_TypeStatus_20);
      TypeStatus_20 = ((MR_Word) (conv1_TypeStatus_20));
      Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Result_0_32, 0))));
      Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Result_0_32, 1))));
      packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Result_0_32, 2)));
      Var_36 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Result_0_32, 2))) & (MR_Integer) 3);
      Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Result_0_32, 3))));
      switch (TypeStatus_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          switch (Var_36) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              NewTypeStatus_21 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              NewTypeStatus_21 = (MR_Integer) 1;
              break;
            case (MR_Integer) 0:
              NewTypeStatus_21 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          NewTypeStatus_21 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          switch (Var_36) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              NewTypeStatus_21 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              NewTypeStatus_21 = (MR_Integer) 1;
              break;
            case (MR_Integer) 0:
              NewTypeStatus_21 = (MR_Integer) 0;
              break;
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Result_33 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_45));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_46));
        MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (NewTypeStatus_21));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_47));
      }
      *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
    }
    else
    {
      (env).transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0((env).transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__CallPredInfo_18);
      if ((env).transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__succeeded)
      {
        *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
        *STATE_VARIABLE_Result_33 = STATE_VARIABLE_Result_0_32;
      }
      else
      {
        transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_4(&env);
        if (!((env).transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__succeeded))
        {
          MR_Word Origin_27;
          MR_Word Var_39;
          MR_Word SpecialPredId_44;
          MR_Word Var_28;
          MR_Unsigned packed_word_1;

          hlds__hlds_pred__pred_info_get_origin_2_p_0((env).transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__CallPredInfo_18, &Origin_27);
          (env).transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) Origin_27)) == (MR_Integer) 1);
          if ((env).transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__succeeded)
          {
            Var_39 = ((MR_Word) ((MR_hl_field(1, Origin_27, 0))));
            (env).transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) Var_39)) == (MR_Integer) 0);
            if ((env).transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__succeeded)
            {
              packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_39, 0)));
              SpecialPredId_44 = ((MR_Unsigned) ((MR_hl_field(0, Var_39, 0))) & (MR_Integer) 3);
              switch (SpecialPredId_44) {
                default:
                  (env).transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  (env).transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 0:
                  (env).transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__succeeded = MR_TRUE;
                  break;
              }
            }
          }
        }
        if ((env).transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__succeeded)
        {
          MR_Word Globals_29;
          MR_Word IntermodAnalysis_30;
          MR_Word MaybeAnalysisStatus_31;
          MR_Word Types_61;
          MR_Word TypeStatus_62;
          MR_Word Var_66;
          MR_Box conv3_TypeStatus_62;

          hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_34, &Globals_29);
          libs__globals__lookup_bool_option_3_p_0(Globals_29, (MR_Integer) 411, &IntermodAnalysis_30);
          switch (IntermodAnalysis_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              MaybeAnalysisStatus_31 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              MaybeAnalysisStatus_31 = (MR_Word) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[2]));
              break;
          }
          parse_tree__var_table__lookup_var_types_3_p_0(VarTable_11, CallArgs_14, &Types_61);
          {
            Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_66, 0) = ((MR_Box) (&transform_hlds__exception_analysis_scalar_common_6[2]));
            MR_hl_field(0, Var_66, 1) = ((MR_Box) (transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_5));
            MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_66, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_34));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_type_excp_status_0), Var_66, Types_61, ((MR_Box) ((MR_Integer) 0)), &conv3_TypeStatus_62);
          TypeStatus_62 = ((MR_Word) (conv3_TypeStatus_62));
          switch (TypeStatus_62) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              transform_hlds__exception_analysis__update_excp_proc_result_4_p_0((MR_Word) ((MR_Unsigned) 4U), MaybeAnalysisStatus_31, STATE_VARIABLE_Result_0_32, STATE_VARIABLE_Result_33);
              break;
            case (MR_Integer) 1:
              transform_hlds__exception_analysis__update_excp_proc_result_4_p_0((MR_Word) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[1])), MaybeAnalysisStatus_31, STATE_VARIABLE_Result_0_32, STATE_VARIABLE_Result_33);
              break;
            case (MR_Integer) 0:
              *STATE_VARIABLE_Result_33 = STATE_VARIABLE_Result_0_32;
              break;
          }
          *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
        }
        else
          transform_hlds__exception_analysis__excp_check_nonrecursive_call_8_p_0(VarTable_11, CallPPId_17, CallArgs_14, (env).transform_hlds__exception_analysis__check_goal_for_exceptions_plain_call_9_p_0_env_0__CallPredInfo_18, STATE_VARIABLE_Result_0_32, STATE_VARIABLE_Result_33, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
      }
    }
  }
}

static void MR_CALL 
transform_hlds__exception_analysis__excp_check_nonrecursive_call_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Status_9;

  transform_hlds__exception_analysis__excp_check_type_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Status_9);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Status_9));
}

static void MR_CALL 
transform_hlds__exception_analysis__excp_check_nonrecursive_call_8_p_0(
  MR_Word VarTable_9,
  MR_Word PPId_10,
  MR_Word Args_11,
  MR_Word PredInfo_12,
  MR_Word STATE_VARIABLE_Result_0_27,
  MR_Word * STATE_VARIABLE_Result_28,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30)
{
  MR_bool succeeded;
  MR_Word Globals_15;
  MR_Word IntermodAnalysis_16;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_29, &Globals_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 411, &IntermodAnalysis_16);
  succeeded = (IntermodAnalysis_16 == (MR_Integer) 1);
  if (succeeded)
    succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0(PredInfo_12);
  if (succeeded)
  {
    MR_Word CalleeResult_17;
    MR_Word AnalysisStatus_18;
    MR_Word MaybeAnalysisStatus_19;
    MR_Word AnalysisInfo0_44;
    MR_Word AnalysisInfo_45;
    MR_Word ModuleName_46;
    MR_Word FuncId_47;
    MR_Word MaybeBestResult_49;

    hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_29, &AnalysisInfo0_44);
    transform_hlds__mmc_analysis__module_name_func_id_4_p_0(STATE_VARIABLE_ModuleInfo_0_29, PPId_10, &ModuleName_46, &FuncId_47);
    analysis__operations__lookup_best_result_6_p_0((MR_Word) (&transform_hlds__exception_analysis_scalar_common_4[0]), AnalysisInfo0_44, ModuleName_46, FuncId_47, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)), &MaybeBestResult_49);
    if ((MaybeBestResult_49 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Answer_53;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Box conv1_Answer_53;

      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&transform_hlds__exception_analysis_scalar_common_4[0]), 0)), 9))));
      conv1_Answer_53 = func_0(((MR_Box) ((MR_Word) (&transform_hlds__exception_analysis_scalar_common_4[0]))), ((MR_Box) ((MR_Integer) 0)));
      Answer_53 = ((MR_Word) (conv1_Answer_53));
      CalleeResult_17 = (MR_Word) (Answer_53);
      AnalysisStatus_18 = (MR_Integer) 2;
      analysis__operations__record_request_6_p_0((MR_Word) (&transform_hlds__exception_analysis_scalar_common_3[0]), (MR_String) "exception_analysis", ModuleName_46, FuncId_47, ((MR_Box) ((MR_Integer) 0)), AnalysisInfo0_44, &AnalysisInfo_45);
    }
    else
    {
      MR_Word BestAnswer_51;
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(1, MaybeBestResult_49, 0))));

      BestAnswer_51 = ((MR_Word) ((MR_hl_field(0, Var_55, 1))));
      AnalysisStatus_18 = ((MR_Unsigned) ((MR_hl_field(0, Var_55, 2))) & (MR_Integer) 3);
      CalleeResult_17 = (MR_Word) (BestAnswer_51);
      analysis__operations__record_dependency_7_p_0((MR_Word) (&transform_hlds__exception_analysis_scalar_common_4[0]), ModuleName_46, FuncId_47, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)), AnalysisInfo0_44, &AnalysisInfo_45);
    }
    hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_45, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30);
    {
      MaybeAnalysisStatus_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeAnalysisStatus_19, 0) = ((MR_Box) (AnalysisStatus_18));
    }
    transform_hlds__exception_analysis__update_excp_proc_result_4_p_0(CalleeResult_17, MaybeAnalysisStatus_19, STATE_VARIABLE_Result_0_27, STATE_VARIABLE_Result_28);
  }
  else
  {
    MR_Integer ProcId_21 = ((MR_Integer) ((MR_hl_field(0, PPId_10, 1))));
    MR_Word ProcInfo_22;
    MR_Word MaybeCalleeExceptionInfo_23;

    hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo_12, ProcId_21, &ProcInfo_22);
    hlds__hlds_pred__proc_info_get_exception_info_2_p_0(ProcInfo_22, &MaybeCalleeExceptionInfo_23);
    if ((MaybeCalleeExceptionInfo_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeAnalysisStatus_43;

      switch (IntermodAnalysis_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeAnalysisStatus_43 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          MaybeAnalysisStatus_43 = (MR_Word) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[2]));
          break;
      }
      transform_hlds__exception_analysis__update_excp_proc_result_4_p_0((MR_Word) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[0])), MaybeAnalysisStatus_43, STATE_VARIABLE_Result_0_27, STATE_VARIABLE_Result_28);
    }
    else
    {
      MR_Word CalleeExceptionInfo_24 = ((MR_Word) ((MR_hl_field(1, MaybeCalleeExceptionInfo_23, 0))));
      MR_Word CalleeExceptionStatus_25 = ((MR_Word) ((MR_hl_field(0, CalleeExceptionInfo_24, 0))));
      MR_Word MaybeAnalysisStatus_42 = ((MR_Word) ((MR_hl_field(0, CalleeExceptionInfo_24, 1))));

      switch (MR_tag((MR_Word) CalleeExceptionStatus_25)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(CalleeExceptionStatus_25)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              transform_hlds__exception_analysis__update_excp_proc_result_4_p_0((MR_Word) ((MR_Unsigned) 0U), MaybeAnalysisStatus_42, STATE_VARIABLE_Result_0_27, STATE_VARIABLE_Result_28);
              break;
            case (MR_Integer) 1:
              {
                MR_Word Types_65;
                MR_Word TypeStatus_66;
                MR_Word Var_70;
                MR_Box conv3_TypeStatus_66;

                parse_tree__var_table__lookup_var_types_3_p_0(VarTable_9, Args_11, &Types_65);
                {
                  Var_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_70, 0) = ((MR_Box) (&transform_hlds__exception_analysis_scalar_common_6[2]));
                  MR_hl_field(0, Var_70, 1) = ((MR_Box) (transform_hlds__exception_analysis__excp_check_nonrecursive_call_8_p_0_1));
                  MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_70, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_29));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_type_excp_status_0), Var_70, Types_65, ((MR_Box) ((MR_Integer) 0)), &conv3_TypeStatus_66);
                TypeStatus_66 = ((MR_Word) (conv3_TypeStatus_66));
                switch (TypeStatus_66) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                    transform_hlds__exception_analysis__update_excp_proc_result_4_p_0((MR_Word) ((MR_Unsigned) 4U), MaybeAnalysisStatus_42, STATE_VARIABLE_Result_0_27, STATE_VARIABLE_Result_28);
                    break;
                  case (MR_Integer) 1:
                    transform_hlds__exception_analysis__update_excp_proc_result_4_p_0((MR_Word) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[1])), MaybeAnalysisStatus_42, STATE_VARIABLE_Result_0_27, STATE_VARIABLE_Result_28);
                    break;
                  case (MR_Integer) 0:
                    *STATE_VARIABLE_Result_28 = STATE_VARIABLE_Result_0_27;
                    break;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          transform_hlds__exception_analysis__update_excp_proc_result_4_p_0(CalleeExceptionStatus_25, MaybeAnalysisStatus_42, STATE_VARIABLE_Result_0_27, STATE_VARIABLE_Result_28);
          break;
      }
    }
    *STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_0_29;
  }
}

static void MR_CALL 
transform_hlds__exception_analysis__update_excp_proc_result_4_p_0(
  MR_Word CurrentStatus_5,
  MR_Word CurrentAnalysisStatus_6,
  MR_Word STATE_VARIABLE_Result_0_12,
  MR_Word * STATE_VARIABLE_Result_13)
{
  MR_bool succeeded;
  MR_Word OldStatus_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Result_0_12, 1))));
  MR_Word OldAnalysisStatus_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Result_0_12, 3))));
  MR_Word NewStatus_10;
  MR_Word NewAnalysisStatus_11;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_Word StatusA_43;
  MR_Word StatusB_44;

  switch (MR_tag((MR_Word) CurrentStatus_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(CurrentStatus_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          NewStatus_10 = OldStatus_8;
          break;
        case (MR_Integer) 1:
          switch (MR_tag((MR_Word) OldStatus_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(OldStatus_8)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  NewStatus_10 = (MR_Word) ((MR_Unsigned) 4U);
                  break;
                case (MR_Integer) 1:
                  NewStatus_10 = (MR_Word) ((MR_Unsigned) 4U);
                  break;
              }
              break;
            case (MR_Integer) 1:
              NewStatus_10 = OldStatus_8;
              break;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_42 = ((MR_Unsigned) ((MR_hl_field(1, CurrentStatus_5, 0))) & (MR_Integer) 1);

        switch (Var_42) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) OldStatus_8)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(OldStatus_8)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    NewStatus_10 = CurrentStatus_5;
                    break;
                  case (MR_Integer) 1:
                    NewStatus_10 = CurrentStatus_5;
                    break;
                }
                break;
              case (MR_Integer) 1:
                NewStatus_10 = OldStatus_8;
                break;
            }
            break;
          case (MR_Integer) 0:
            NewStatus_10 = CurrentStatus_5;
            break;
        }
      }
      break;
  }
  succeeded = (CurrentAnalysisStatus_6 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    StatusA_43 = ((MR_Word) ((MR_hl_field(1, CurrentAnalysisStatus_6, 0))));
    succeeded = (OldAnalysisStatus_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      StatusB_44 = ((MR_Word) ((MR_hl_field(1, OldAnalysisStatus_9, 0))));
  }
  if (succeeded)
  {
    MR_Word Var_45;

    Var_45 = analysis__framework__lub_2_f_0(StatusA_43, StatusB_44);
    {
      NewAnalysisStatus_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, NewAnalysisStatus_11, 0) = ((MR_Box) (Var_45));
    }
  }
  else
    NewAnalysisStatus_11 = (MR_Word) ((MR_Unsigned) 0U);
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Result_0_12, 0))));
  Var_23 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Result_0_12, 2))) & (MR_Integer) 3);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Result_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 1) = ((MR_Box) (NewStatus_10));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_23));
    MR_hl_field(0, base, 3) = ((MR_Box) (NewAnalysisStatus_11));
  }
}

static void MR_CALL 
transform_hlds__exception_analysis__maybe_analysis_status_2_p_0(
  MR_Word ProcResult_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, ProcResult_3, 3))));
}

static void MR_CALL 
transform_hlds__exception_analysis__set_exception_info_4_p_0(
  MR_Word ProcExceptionInfo_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  MR_Word PredInfo0_8;
  MR_Word ProcInfo0_9;
  MR_Word ProcInfo_10;
  MR_Word Var_13;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_11, PPId_6, &PredInfo0_8, &ProcInfo0_9);
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (ProcExceptionInfo_5));
  }
  hlds__hlds_pred__proc_info_set_exception_info_3_p_0(Var_13, ProcInfo0_9, &ProcInfo_10);
  hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PPId_6, PredInfo0_8, ProcInfo_10, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_28(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_STATE_VARIABLE_ModuleInfo_12;

  transform_hlds__exception_analysis__set_exception_info_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_ModuleInfo_12);
  *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_ModuleInfo_12));
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_27(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_MaybeStatus_6;

  transform_hlds__exception_analysis__combine_maybe_analysis_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_MaybeStatus_6);
  *wrapper_arg_3 = ((MR_Box) (conv11_MaybeStatus_6));
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_26(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_HeadVar__2_2;

  transform_hlds__exception_analysis__maybe_analysis_status_2_p_0(((MR_Word) (wrapper_arg_1)), &conv10_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__2_2));
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Results_21;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_23;

  transform_hlds__exception_analysis__check_proc_for_exceptions_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Results_21, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_23);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Results_21));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_23));
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__ProcResult_33 = ((MR_Word) ((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__conv4_ProcResult_33));
  transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_3(env_ptr);
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__ProcResult_33, 1))));
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;

    (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
    if ((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded)
      transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_5(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_excp_proc_result_0), &(env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__conv4_ProcResult_33, (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__ProcResults_6, transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_4, env_ptr);
      (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_6(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__commit_1, 1);
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_8(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__EResult_34 = ((MR_Word) ((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__conv5_EResult_34));
  transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_7(env_ptr);
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_7(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_35;

    (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_37 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__EResult_34, 1))));
    (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_37)) == (MR_Integer) 1);
    if ((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded)
      transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_6(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_9(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__commit_1) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_excp_proc_result_0), &(env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__conv5_EResult_34, (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__ProcResults_6, transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_8, env_ptr);
      (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_10(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__commit_2, 1);
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_12(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__CResult_45 = ((MR_Word) ((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__conv6_CResult_45));
  transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_11(env_ptr);
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_11(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;

    (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_38 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__CResult_45, 1))));
    (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_38 == (MR_Word) ((MR_Unsigned) 4U));
    if ((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded)
      transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_10(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_13(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__commit_2) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_excp_proc_result_0), &(env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__conv6_CResult_45, (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__ProcResults_6, transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_12, env_ptr);
      (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_14(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__commit_3, 1);
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_16(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Result_72 = ((MR_Word) ((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__conv7_Result_72));
  transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_15(env_ptr);
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_15(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Result_72, 2)));

    (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_73 = ((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Result_72, 2))) & (MR_Integer) 3);
    (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_73 == (MR_Integer) 1);
    if ((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded)
      transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_14(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_17(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__commit_3) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_excp_proc_result_0), &(env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__conv7_Result_72, (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__ProcResults_6, transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_16, env_ptr);
      (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_18(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__commit_4, 1);
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_20(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__EResult_67 = ((MR_Word) ((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__conv8_EResult_67));
  transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_19(env_ptr);
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_19(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Unsigned packed_word_1;

    (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_39 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__EResult_67, 1))));
    (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_39)) == (MR_Integer) 1);
    if ((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded)
    {
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(1, (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_39, 0)));
      (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_40 = ((MR_Unsigned) ((MR_hl_field(1, (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_39, 0))) & (MR_Integer) 1);
      (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_40 == (MR_Integer) 0);
      if ((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded)
        transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_18(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_21(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__commit_4) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_excp_proc_result_0), &(env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__conv8_EResult_67, (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__ProcResults_6, transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_20, env_ptr);
      (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_22(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__commit_5, 1);
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_24(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__TResult_46 = ((MR_Word) ((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__conv9_TResult_46));
  transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_23(env_ptr);
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_23(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Unsigned packed_word_2;

    (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_41 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__TResult_46, 1))));
    (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_41)) == (MR_Integer) 1);
    if ((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded)
    {
      packed_word_2 = (MR_Unsigned) ((MR_hl_field(1, (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_41, 0)));
      (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_42 = ((MR_Unsigned) ((MR_hl_field(1, (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_41, 0))) & (MR_Integer) 1);
      (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__Var_42 == (MR_Integer) 1);
      if ((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded)
        transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_22(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_25(
  void * env_ptr_arg)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s * env_ptr = (struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__commit_5) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_excp_proc_result_0), &(env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__conv9_TResult_46, (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__ProcResults_6, transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_24, env_ptr);
      (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0(
  MR_Word SCC_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11)
{
  struct transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0_s env;

  {
    MR_Word Status_7;
    MR_Word MaybeAnalysisStatus_8;
    MR_Word ProcExceptionInfo_9;
    MR_Word STATE_VARIABLE_ModuleInfo_1_12;
    MR_Word Var_13;
    MR_Word Var_19;
    MR_Box conv3_ProcResults_6;
    MR_Box conv2_STATE_VARIABLE_ModuleInfo_1_12;
    MR_Box conv14_STATE_VARIABLE_ModuleInfo_11;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_19, 0) = ((MR_Box) (&transform_hlds__exception_analysis_scalar_common_8[0]));
      MR_hl_field(0, Var_19, 1) = ((MR_Box) (transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_1));
      MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_19, 3) = ((MR_Box) (SCC_4));
    }
    mercury__set__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__exception_analysis_scalar_common_1[3]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_19, SCC_4, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_ProcResults_6, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_10)), &conv2_STATE_VARIABLE_ModuleInfo_1_12);
    (env).transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__ProcResults_6 = ((MR_Word) (conv3_ProcResults_6));
    STATE_VARIABLE_ModuleInfo_1_12 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_1_12));
    if (((env).transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__ProcResults_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.exception_analysis.excp_combine_individual_proc_results\'/3", (MR_String) "Empty SCC during exception analysis.");
        return;
      }
    else
    {
      MR_Word MaybeAnalysisStatuses_79;
      MR_Box conv12_MaybeAnalysisStatus_8;

      transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_5(&env);
      (env).transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = !((env).transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded);
      if ((env).transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded)
        Status_7 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_9(&env);
        (env).transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = !((env).transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded);
        if ((env).transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded)
          transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_13(&env);
        if ((env).transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded)
        {
          transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_17(&env);
          (env).transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = !((env).transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded);
          if ((env).transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded)
            Status_7 = (MR_Word) ((MR_Unsigned) 4U);
          else
            Status_7 = (MR_Word) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[1]));
        }
        else
        {
          transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_21(&env);
          (env).transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded = !((env).transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded);
          if ((env).transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded)
            transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_25(&env);
          if ((env).transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__succeeded)
            Status_7 = (MR_Word) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[1]));
          else
            Status_7 = (MR_Word) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[0]));
        }
      }
      mercury__list__map_3_p_0((MR_Word) (&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_excp_proc_result_0), (MR_Word) (&transform_hlds__exception_analysis_scalar_common_1[4]), (MR_Word) (&transform_hlds__exception_analysis_scalar_common_2[3]), (env).transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_env_0__ProcResults_6, &MaybeAnalysisStatuses_79);
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__exception_analysis_scalar_common_1[4]), (MR_Word) (&transform_hlds__exception_analysis_scalar_common_1[4]), (MR_Word) (&transform_hlds__exception_analysis_scalar_common_2[4]), MaybeAnalysisStatuses_79, ((MR_Box) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[2]))), &conv12_MaybeAnalysisStatus_8);
      MaybeAnalysisStatus_8 = ((MR_Word) (conv12_MaybeAnalysisStatus_8));
    }
    {
      ProcExceptionInfo_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ProcExceptionInfo_9, 0) = ((MR_Box) (Status_7));
      MR_hl_field(0, ProcExceptionInfo_9, 1) = ((MR_Box) (MaybeAnalysisStatus_8));
    }
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_13, 0) = ((MR_Box) (&transform_hlds__exception_analysis_scalar_common_6[1]));
      MR_hl_field(0, Var_13, 1) = ((MR_Box) (transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0_28));
      MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_13, 3) = ((MR_Box) (ProcExceptionInfo_9));
    }
    mercury__set__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_13, SCC_4, ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_12)), &conv14_STATE_VARIABLE_ModuleInfo_11);
    *STATE_VARIABLE_ModuleInfo_11 = ((MR_Word) (conv14_STATE_VARIABLE_ModuleInfo_11));
  }
}

static MR_bool MR_CALL 
transform_hlds__exception_analysis__lookup_exception_analysis_result_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))));
  return succeeded;
}

void MR_CALL 
transform_hlds__exception_analysis__lookup_exception_analysis_result_4_p_0(
  MR_Word PPId_5,
  MR_Word * ExceptionStatus_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30)
{
  MR_bool succeeded;
  MR_Word PredId_8 = ((MR_Word) ((MR_hl_field(0, PPId_5, 0))));
  MR_Integer ProcId_9 = ((MR_Integer) ((MR_hl_field(0, PPId_5, 1))));
  MR_Word PredInfo_10;
  MR_Word ProcInfo_11;
  MR_Word IsImported_12;
  MR_Word Globals_13;
  MR_Word IntermodAnalysis_14;
  MR_Word ExceptionAnalysis_15;
  MR_Word UseAnalysisRegistry_16;
  MR_Word Var_31;
  MR_Word Var_34;

  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredId_8, ProcId_9, &PredInfo_10, &ProcInfo_11);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&transform_hlds__exception_analysis_scalar_common_7[0]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (transform_hlds__exception_analysis__lookup_exception_analysis_result_4_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (PredInfo_10));
  }
  IsImported_12 = mercury__bool__pred_to_bool_1_f_0(Var_31);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_29, &Globals_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 411, &IntermodAnalysis_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 430, &ExceptionAnalysis_15);
  Var_34 = mercury__bool__and_2_f_0(IsImported_12, IntermodAnalysis_14);
  UseAnalysisRegistry_16 = mercury__bool__and_2_f_0(Var_34, ExceptionAnalysis_15);
  switch (UseAnalysisRegistry_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word MaybeProcExceptionInfo_17;

        hlds__hlds_pred__proc_info_get_exception_info_2_p_0(ProcInfo_11, &MaybeProcExceptionInfo_17);
        if ((MaybeProcExceptionInfo_17 == (MR_Word) ((MR_Unsigned) 0U)))
          *ExceptionStatus_6 = (MR_Word) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[0]));
        else
        {
          MR_Word ProcExceptionInfo_18 = ((MR_Word) ((MR_hl_field(1, MaybeProcExceptionInfo_17, 0))));

          *ExceptionStatus_6 = ((MR_Word) ((MR_hl_field(0, ProcExceptionInfo_18, 0))));
        }
        *STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_0_29;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_21;
        MR_Word FuncId_22;
        MR_Word MaybeBestResult_23;
        MR_Word STATE_VARIABLE_AnalysisInfo_1_36;
        MR_Word STATE_VARIABLE_AnalysisInfo_2_45;

        hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_29, &STATE_VARIABLE_AnalysisInfo_1_36);
        transform_hlds__mmc_analysis__module_name_func_id_4_p_0(STATE_VARIABLE_ModuleInfo_0_29, PPId_5, &ModuleName_21, &FuncId_22);
        analysis__operations__lookup_best_result_6_p_0((MR_Word) (&transform_hlds__exception_analysis_scalar_common_4[0]), STATE_VARIABLE_AnalysisInfo_1_36, ModuleName_21, FuncId_22, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)), &MaybeBestResult_23);
        if ((MaybeBestResult_23 == (MR_Word) ((MR_Unsigned) 0U)))
          *ExceptionStatus_6 = (MR_Word) (MR_mkword(1, &transform_hlds__exception_analysis_scalar_common_5[0]));
        else
        {
          MR_Word BestResult_24 = ((MR_Word) ((MR_hl_field(1, MaybeBestResult_23, 0))));
          MR_Word Answer_26 = ((MR_Word) ((MR_hl_field(0, BestResult_24, 1))));
          MR_Word AnalysisStatus_27 = ((MR_Unsigned) ((MR_hl_field(0, BestResult_24, 2))) & (MR_Integer) 3);

          switch (AnalysisStatus_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.exception_analysis.lookup_exception_analysis_result\'/4", (MR_String) "invalid exception_analysis answer");
                return;
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              *ExceptionStatus_6 = (MR_Word) (Answer_26);
              break;
          }
        }
        analysis__operations__record_dependency_7_p_0((MR_Word) (&transform_hlds__exception_analysis_scalar_common_4[0]), ModuleName_21, FuncId_22, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)), STATE_VARIABLE_AnalysisInfo_1_36, &STATE_VARIABLE_AnalysisInfo_2_45);
        hlds__hlds_module__module_info_set_analysis_info_3_p_0(STATE_VARIABLE_AnalysisInfo_2_45, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30);
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__exception_analysis__analyse_exceptions_in_module_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_AnalysisInfo_11;

  transform_hlds__exception_analysis__maybe_record_exception_result_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_AnalysisInfo_11);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_AnalysisInfo_11));
}

static void MR_CALL 
transform_hlds__exception_analysis__analyse_exceptions_in_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_11;

  transform_hlds__exception_analysis__check_scc_for_exceptions_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_11));
}

void MR_CALL 
transform_hlds__exception_analysis__analyse_exceptions_in_module_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15)
{
  MR_bool succeeded;
  MR_Word DepInfo_4;
  MR_Word SCCs_5;
  MR_Word ProcAnalysisKinds0_6;
  MR_Word ProcAnalysisKinds_7;
  MR_Word Globals_8;
  MR_Word OpMode_9;
  MR_Word STATE_VARIABLE_ModuleInfo_1_16;
  MR_Word STATE_VARIABLE_ModuleInfo_2_18;
  MR_Word STATE_VARIABLE_ModuleInfo_3_20;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_2_18;
  MR_Word Var_21;
  MR_Word Var_22;

  hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_14, &STATE_VARIABLE_ModuleInfo_1_16, &DepInfo_4);
  SCCs_5 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_4);
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__exception_analysis_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__exception_analysis_scalar_common_2[2]), SCCs_5, ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_16)), &conv1_STATE_VARIABLE_ModuleInfo_2_18);
  STATE_VARIABLE_ModuleInfo_2_18 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_2_18));
  hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(STATE_VARIABLE_ModuleInfo_2_18, &ProcAnalysisKinds0_6);
  mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ((MR_Box) ((MR_Integer) 0)), ProcAnalysisKinds0_6, &ProcAnalysisKinds_7);
  hlds__hlds_module__module_info_set_proc_analysis_kinds_3_p_0(ProcAnalysisKinds_7, STATE_VARIABLE_ModuleInfo_2_18, &STATE_VARIABLE_ModuleInfo_3_20);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_3_20, &Globals_8);
  libs__globals__get_op_mode_2_p_0(Globals_8, &OpMode_9);
  succeeded = ((MR_tag((MR_Word) OpMode_9)) == (MR_Integer) 3);
  if (succeeded)
  {
    Var_21 = ((MR_Word) ((MR_hl_field(3, OpMode_9, 0))));
    succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_22 = ((MR_Word) ((MR_hl_field(3, Var_21, 0))));
      succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 8U));
    }
  }
  if (succeeded)
  {
    MR_Word AnalysisInfo0_11;
    MR_Word PredIds_12;
    MR_Word AnalysisInfo_13;
    MR_Word Var_23;
    MR_Box conv3_AnalysisInfo_13;

    hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_3_20, &AnalysisInfo0_11);
    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_3_20, &PredIds_12);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_23, 0) = ((MR_Box) (&transform_hlds__exception_analysis_scalar_common_6[0]));
      MR_hl_field(0, Var_23, 1) = ((MR_Box) (transform_hlds__exception_analysis__analyse_exceptions_in_module_2_p_0_2));
      MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_23, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_3_20));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0), Var_23, PredIds_12, ((MR_Box) (AnalysisInfo0_11)), &conv3_AnalysisInfo_13);
    AnalysisInfo_13 = ((MR_Word) (conv3_AnalysisInfo_13));
    hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_13, STATE_VARIABLE_ModuleInfo_3_20, STATE_VARIABLE_ModuleInfo_15);
  }
  else
    *STATE_VARIABLE_ModuleInfo_15 = STATE_VARIABLE_ModuleInfo_3_20;
}

static MR_bool MR_CALL 
transform_hlds__exception_analysis____Unify____closures_exception_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__exception_analysis____Unify____closures_exception_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__exception_analysis____Compare____closures_exception_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__exception_analysis____Compare____closures_exception_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__exception_analysis____Unify____exception_analysis_answer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__exception_analysis____Unify____exception_analysis_answer_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__exception_analysis____Compare____exception_analysis_answer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__exception_analysis____Compare____exception_analysis_answer_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__exception_analysis____Unify____excp_proc_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__exception_analysis____Unify____excp_proc_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__exception_analysis____Compare____excp_proc_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__exception_analysis____Compare____excp_proc_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__exception_analysis____Unify____type_excp_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__exception_analysis____Unify____type_excp_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__exception_analysis____Compare____type_excp_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__exception_analysis____Compare____type_excp_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_Box MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__to_term_1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  succeeded = transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__from_term_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__more_precise_than_3_3_p_0(((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__equivalent_3_3_p_0(((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__analysis_name_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__analysis_name_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__bottom_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__bottom_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__top_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__top_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__get_func_info_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;

  transform_hlds__exception_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__exception_analysis__exception_analysis_answer__arity0______analysis__framework__get_func_info_6_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
}

void mercury__transform_hlds__exception_analysis__init(void)
{
}

void mercury__transform_hlds__exception_analysis__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_closures_exception_status_0);
  MR_register_type_ctor_info(&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_exception_analysis_answer_0);
  MR_register_type_ctor_info(&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_excp_proc_result_0);
  MR_register_type_ctor_info(&transform_hlds__exception_analysis__transform_hlds__exception_analysis__type_ctor_info_type_excp_status_0);
}

void mercury__transform_hlds__exception_analysis__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__exception_analysis__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.exception_analysis.
