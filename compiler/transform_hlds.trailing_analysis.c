/*
** Automatically generated from `trailing_analysis.m'
** by the Mercury compiler,
** version rotd-2025-06-22
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


// :- module transform_hlds.trailing_analysis.
// :- implementation.

/*
INIT mercury__transform_hlds__trailing_analysis__init
ENDINIT
*/

#include "transform_hlds.trailing_analysis.mih"


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
#include "edit_seq.mih"
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
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
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
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
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
#include "parse_tree.write_error_spec.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.intermod_analysis.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s {
  MR_bool transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded;
  MR_Word transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45;
  jmp_buf transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__commit_0;
  MR_String transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Name_47;
  MR_Integer transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredFormArityInt_48;
  MR_Word transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__SpecialPredId_49;
  MR_String transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Var_137;
  MR_Integer transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Var_138;
};

struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s {
  MR_bool transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded;
  MR_Word transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48;
  jmp_buf transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__commit_0;
  MR_String transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Name_52;
  MR_Integer transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredFormArityInt_53;
  MR_Word transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__SpecialPredId_54;
  MR_String transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Var_160;
  MR_Integer transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Var_161;
};

struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s {
  MR_bool transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded;
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10;
  jmp_buf transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_0;
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_44;
  MR_Box transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv4_ProcResult_44;
  jmp_buf transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_1;
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_45;
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__Var_47;
  MR_Box transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv5_EResult_45;
  jmp_buf transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_2;
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__Var_48;
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_49;
  MR_Box transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv6_CResult_49;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__list__pti_list_1__plain_transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__framework__type_ctor_info_analysis_status_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__trailing_analysis__maybe__ti_maybe_1analysis__framework__type_ctor_info_analysis_status_0;

static const MR_PseudoTypeInfo transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_types_trail_proc_result_0_0[3];

static const MR_ConstString transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_names_trail_proc_result_0_0[3];

static const MR_DuArgLocn transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_locns_trail_proc_result_0_0[3];

static const MR_DuFunctorDesc transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_functor_desc_trail_proc_result_0_0;

static const MR_DuFunctorDescPtr transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_stag_ordered_trail_proc_result_0_0[1];

static const MR_DuPtagLayout transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_ptag_ordered_trail_proc_result_0[1];

static const MR_DuFunctorDescPtr transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_name_ordered_trail_proc_result_0[1];

static const MR_Integer transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trail_proc_result_0[1];

static const MR_Integer transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trailing_analysis_answer_0[1];

static const MR_NotagFunctorDesc transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__notag_functor_desc_trailing_analysis_answer_0;

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__IntroducedFrom__func__check_goal_for_trail_mods__466__1_1_f_0(
  MR_Word LambdaHeadVar__1_131);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__from_term_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__to_term_1_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__equivalent_3_3_p_0(
  MR_Word Status_8,
  MR_Word Status_3);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__more_precise_than_3_3_p_0(
  MR_Word Answer1_4,
  MR_Word Answer2_5);

static void MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__get_func_info_6_6_p_0(
  MR_Word HeadVar__1_17,
  MR_Word HeadVar__2_18,
  MR_Word HeadVar__3_19);

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__top_2_2_f_0(void);

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__bottom_2_2_f_0(void);

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0(void);

static MR_Integer MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0(void);

static MR_String MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__analysis_name_2_2_f_0(void);

static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__trailing_analysis__output_proc_name_5_p_0(
  MR_Word Stream_6,
  MR_Word Moduleinfo_7,
  MR_Word PPId_8);

static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_2_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word PredInfo_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_18,
  MR_Word * STATE_VARIABLE_AnalysisInfo_19);

static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_10,
  MR_Word * STATE_VARIABLE_AnalysisInfo_11);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_case_6_p_0(
  MR_Word VarTable_7,
  MR_Word STATE_VARIABLE_Case_0_15,
  MR_Word * STATE_VARIABLE_Case_16,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_proc_3_p_0(
  MR_Word PPId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(
  MR_Word VarTable_8,
  MR_Word GoalInfo_9,
  MR_Word STATE_VARIABLE_GoalExpr_0_110,
  MR_Word * STATE_VARIABLE_GoalExpr_111,
  MR_Word * Status_11,
  MR_Word STATE_VARIABLE_ModuleInfo_0_112,
  MR_Word * STATE_VARIABLE_ModuleInfo_113);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(
  MR_Word VarTable_7,
  MR_Word STATE_VARIABLE_Goal_0_15,
  MR_Word * STATE_VARIABLE_Goal_16,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0(
  MR_Word VarTable_7,
  MR_Word STATE_VARIABLE_Cases_0_12,
  MR_Word * STATE_VARIABLE_Cases_13,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0(
  MR_Word VarTable_7,
  MR_Word STATE_VARIABLE_Goals_0_12,
  MR_Word * STATE_VARIABLE_Goals_13,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15);

static void MR_CALL 
transform_hlds__trailing_analysis__acc_type_trailing_status_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_Status_0_8,
  MR_Word * STATE_VARIABLE_Status_9);

static void MR_CALL 
transform_hlds__trailing_analysis__type_and_cat_trailing_status_3_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__type_and_cat_trailing_status_3_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__type_and_cat_trailing_status_3_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__type_and_cat_trailing_status_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__type_and_cat_trailing_status_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__type_and_cat_trailing_status_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word TypeCtorCat_7);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word PPId_8,
  MR_Word Args_9,
  MR_Word * Result_10);

static void MR_CALL 
transform_hlds__trailing_analysis__combine_maybe_trail_analysis_status_3_p_0(
  MR_Word MaybeStatusA_4,
  MR_Word MaybeStatusB_5,
  MR_Word * MaybeStatus_6);

static void MR_CALL 
transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__trail_get_conditional_closure_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_Conditionals_0_14,
  MR_Word * STATE_VARIABLE_Conditionals_15);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__trail_get_conditional_closures_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__trail_get_conditional_closures_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Closures_5,
  MR_Word * Conditionals_6);

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__scope_implies_trail_mod_3_f_0(
  MR_Word InnerCodeModel_5,
  MR_Word OuterCodeModel_6,
  MR_Word InnerStatus_7);

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__attributes_imply_trail_mod_1_f_0(
  MR_Word Attributes_3);

static void MR_CALL 
transform_hlds__trailing_analysis__check_proc_for_trail_mods_6_p_0(
  MR_Word SCC_7,
  MR_Word PPId_8,
  MR_Word STATE_VARIABLE_Results_0_18,
  MR_Word * STATE_VARIABLE_Results_19,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21);

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(
  MR_Word SCC_8,
  MR_Word VarTable_9,
  MR_Word Goal_10,
  MR_Word * Result_11,
  MR_Word * MaybeAnalysisStatus_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_110,
  MR_Word * STATE_VARIABLE_ModuleInfo_111);

static void MR_CALL 
transform_hlds__trailing_analysis__search_trail_analysis_status_5_p_0(
  MR_Word PPId_6,
  MR_Word * Result_7,
  MR_Word * AnalysisStatus_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_vars_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_vars_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTable_6,
  MR_Word Vars_7);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_2_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word PPId_8,
  MR_Word Args_9,
  MR_Word * MaybeResult_10);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__pred_info_has_known_trail_status_2_p_0(
  MR_Word PredInfo_3,
  MR_Word * Status_4);

static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(
  MR_Word SCC_8,
  MR_Word VarTable_9,
  MR_Word Goals_10,
  MR_Word * Result_11,
  MR_Word * MaybeAnalysisStatus_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_maybe_analysis_status_2_p_0(
  MR_Word ProcResult_3,
  MR_Word * AnalysisStatus_4);

static void MR_CALL 
transform_hlds__trailing_analysis__set_trailing_info_4_p_0(
  MR_Word ProcTrailingInfo_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_9(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_10(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_12(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_11(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_13(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0(
  MR_Word Debug_6,
  MR_Word Pass1Only_7,
  MR_Word SCC_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17);

static void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_in_module_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_in_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trailing_analysis_answer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trailing_analysis_answer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__analysis_name_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__bottom_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__top_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__get_func_info_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_6);


static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_1[6][2];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_2[10][3];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_3[4][5];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_4[4][6];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_5[1][1];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_6[2][8];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_7[4][7];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_8[4][9];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_9[1][10];


struct transform_hlds__trailing_analysis__vector_common_type_10_0_s {
  const MR_Word transform_hlds__trailing_analysis__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct transform_hlds__trailing_analysis__vector_common_type_10_0_s transform_hlds__trailing_analysis_vector_common_10[4];



static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_1[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   4 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__analysis__operations__any_call__arity0__)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_any_call_0))
  },
  /* row   5 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0))
  },
};

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_2[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_any_call_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__analysis__operations__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_15)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_18)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_3[4][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__call_pattern__arity2__analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__)),
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_2[0])),
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_1[4])),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_any_call_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__answer_pattern__arity2__analysis__operations__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_2[1])),
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_1[5])),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__framework__type_ctor_info_analysis_status_0))
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

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_4[4][6] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__analysis__arity3__analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_3[0])),
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_3[1])),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_any_call_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__framework__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__framework__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__framework__type_ctor_info_analysis_status_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0))
  },
};

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_5[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 2)) },
};

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_6[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_7[4][7] = {
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
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_trailing_info_0)),
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_8[4][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__trailing_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__list__pti_list_1__plain_transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__list__pti_list_1__plain_transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   3 */
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

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_9[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__trailing_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__framework__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};


static /* final */ const struct transform_hlds__trailing_analysis__vector_common_type_10_0_s transform_hlds__trailing_analysis_vector_common_10[4] = {
  /* row   0 */   { (MR_Integer) 2 },
  /* row   1 */   { (MR_Integer) 0 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 0 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__list__pti_list_1__plain_transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__framework__type_ctor_info_analysis_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__trailing_analysis__maybe__ti_maybe_1analysis__framework__type_ctor_info_analysis_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0) }
};

static const MR_PseudoTypeInfo transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_types_trail_proc_result_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0),
  (MR_PseudoTypeInfo) (&transform_hlds__trailing_analysis__maybe__ti_maybe_1analysis__framework__type_ctor_info_analysis_status_0)
};

static const MR_ConstString transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_names_trail_proc_result_0_0[3] = {
  (MR_String) "tpr_ppid",
  (MR_String) "tpr_status",
  (MR_String) "tpr_maybe_analysis_status"
};

static const MR_DuArgLocn transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_locns_trail_proc_result_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_functor_desc_trail_proc_result_0_0 = {
  (MR_String) "trail_proc_result",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_types_trail_proc_result_0_0,
  transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_names_trail_proc_result_0_0,
  transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_locns_trail_proc_result_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_stag_ordered_trail_proc_result_0_0[1] = { &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_functor_desc_trail_proc_result_0_0 };

static const MR_DuPtagLayout transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_ptag_ordered_trail_proc_result_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_stag_ordered_trail_proc_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_name_ordered_trail_proc_result_0[1] = { &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_functor_desc_trail_proc_result_0_0 };

static const MR_Integer transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trail_proc_result_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0_10001)),
  (MR_String) "transform_hlds.trailing_analysis",
  (MR_String) "trail_proc_result",
  { transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_name_ordered_trail_proc_result_0 },
  { transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_ptag_ordered_trail_proc_result_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trail_proc_result_0,

};

static const MR_Integer transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trailing_analysis_answer_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__notag_functor_desc_trailing_analysis_answer_0 = {
  (MR_String) "trailing_analysis_answer",
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__trailing_analysis____Unify____trailing_analysis_answer_0_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis____Compare____trailing_analysis_answer_0_0_10001)),
  (MR_String) "transform_hlds.trailing_analysis",
  (MR_String) "trailing_analysis_answer",
  { &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__notag_functor_desc_trailing_analysis_answer_0 },
  { &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__notag_functor_desc_trailing_analysis_answer_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trailing_analysis_answer_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__from_term_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__partial_order__arity2__analysis__operations__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__equivalent_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__answer_pattern__arity2__analysis__operations__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__[5] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 0))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__analysis__arity3__analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__[11] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 6)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__analysis_name_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__bottom_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__top_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__get_func_info_6_6_p_0_10001))
};

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__IntroducedFrom__func__check_goal_for_trail_mods__466__1_1_f_0(
  MR_Word LambdaHeadVar__1_131)
{
  MR_Word LambdaHeadVar__2_132 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_131, 2))));

  return LambdaHeadVar__2_132;
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__from_term_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0);
  MR_Word Status_3;
  MR_String String_4;
  MR_Word Var_6;
  MR_Word Var_7;

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
        if ((strcmp(String_4, (MR_String) "conditional") == 0))
        {
          Status_3 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        if ((strcmp(String_4, (MR_String) "may_modify_trail") == 0))
        {
          Status_3 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
        else
        if ((strcmp(String_4, (MR_String) "will_not_modify_trail") == 0))
        {
          Status_3 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
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
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__to_term_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word Status_3 = (MR_Word) (HeadVar__1_1);
  MR_String String_4;
  MR_Word Var_5;
  MR_Word Var_7;

  switch (Status_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      String_4 = (MR_String) "conditional";
      break;
    case (MR_Integer) 0:
      String_4 = (MR_String) "may_modify_trail";
      break;
    case (MR_Integer) 1:
      String_4 = (MR_String) "will_not_modify_trail";
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
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__equivalent_3_3_p_0(
  MR_Word Status_8,
  MR_Word Status_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (Status_3);
  MR_Integer CastY_12 = (MR_Integer) (Status_8);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_9 = (MR_Word) (Status_3);
    MR_Word ArgY1_10 = (MR_Word) (Status_8);

    succeeded = (ArgX1_9 == ArgY1_10);
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__more_precise_than_3_3_p_0(
  MR_Word Answer1_4,
  MR_Word Answer2_5)
{
  MR_bool succeeded;
  MR_Word Status1_6 = (MR_Word) (Answer1_4);
  MR_Word Status2_7 = (MR_Word) (Answer2_5);

  switch (Status1_6) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 2:
      succeeded = (Status2_7 == (MR_Integer) 0);
      break;
    case (MR_Integer) 1:
      switch (Status2_7) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
      break;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__get_func_info_6_6_p_0(
  MR_Word HeadVar__1_17,
  MR_Word HeadVar__2_18,
  MR_Word HeadVar__3_19)
{
}

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__top_2_2_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Integer) 0)));
}

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__bottom_2_2_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Integer) 1)));
}

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0(void)
{
  return (MR_Integer) 0;
}

static MR_Integer MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0(void)
{
  return (MR_Integer) 1;
}

static MR_String MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__analysis_name_2_2_f_0(void)
{
  return (MR_String) "trail_usage";
}

void MR_CALL 
transform_hlds__trailing_analysis____Compare____trailing_analysis_answer_0_0(
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
    MR_Integer Var_9 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_10 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_9 < Var_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 > Var_10);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trailing_analysis_answer_0_0(
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

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 3);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 3);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_17 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_18 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_17 < Var_18);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_17 > Var_18);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__trailing_analysis_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0(
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
  {
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 3);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 3);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&transform_hlds__trailing_analysis_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__trailing_analysis__output_proc_name_5_p_0(
  MR_Word Stream_6,
  MR_Word Moduleinfo_7,
  MR_Word PPId_8)
{
  MR_Word Pieces_10;
  MR_String Str_11;

  Pieces_10 = hlds__hlds_error_util__describe_qual_proc_name_2_f_0(Moduleinfo_7, PPId_8);
  Str_11 = parse_tree__write_error_spec__error_pieces_to_one_line_string_1_f_0(Pieces_10);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\t");
  mercury__io__write_string_4_p_0(Stream_6, Str_11);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
}

static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_2_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word PredInfo_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_18,
  MR_Word * STATE_VARIABLE_AnalysisInfo_19)
{
  MR_Word ShouldWrite_12;

  transform_hlds__intermod_analysis__should_write_trailing_info_6_p_0(ModuleInfo_7, PredId_8, ProcId_10, PredInfo_9, (MR_Integer) 0, &ShouldWrite_12);
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
        MR_Word MaybeProcTrailingInfo_26;
        MR_Word _PredInfo_24;

        {
          PPId_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PPId_13, 0) = ((MR_Box) (PredId_8));
          MR_hl_field(0, PPId_13, 1) = ((MR_Box) (ProcId_10));
        }
        hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_7, PPId_13, &_PredInfo_24, &ProcInfo_25);
        hlds__hlds_pred__proc_info_get_trailing_info_2_p_0(ProcInfo_25, &MaybeProcTrailingInfo_26);
        if ((MaybeProcTrailingInfo_26 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Status_14 = (MR_Integer) 0;
          ResultStatus_15 = (MR_Integer) 2;
        }
        else
        {
          MR_Word ProcTrailingInfo_27 = ((MR_Word) ((MR_hl_field(1, MaybeProcTrailingInfo_26, 0))));
          MR_Word MaybeResultStatus_28;

          Status_14 = ((MR_Unsigned) ((MR_hl_field(0, ProcTrailingInfo_27, 0))) & (MR_Integer) 3);
          MaybeResultStatus_28 = ((MR_Word) ((MR_hl_field(0, ProcTrailingInfo_27, 1))));
          if ((MaybeResultStatus_28 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.trailing_analysis.lookup_proc_trailing_info\'/4", (MR_String) "no result status");
              return;
            }
          else
            ResultStatus_15 = ((MR_Word) ((MR_hl_field(1, MaybeResultStatus_28, 0))));
        }
        transform_hlds__mmc_analysis__module_name_func_id_4_p_0(ModuleInfo_7, PPId_13, &ModuleName_16, &FuncId_17);
        Var_22 = (MR_Word) (Status_14);
        analysis__operations__record_result_7_p_0((MR_Word) (&transform_hlds__trailing_analysis_scalar_common_4[0]), ModuleName_16, FuncId_17, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Var_22)), ResultStatus_15, STATE_VARIABLE_AnalysisInfo_0_18, STATE_VARIABLE_AnalysisInfo_19);
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_AnalysisInfo_19;

  transform_hlds__trailing_analysis__maybe_record_trailing_result_2_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AnalysisInfo_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AnalysisInfo_19));
}

static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0(
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
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_8[3]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (PredId_6));
    MR_hl_field(0, Var_12, 5) = ((MR_Box) (PredInfo_8));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0), Var_12, ProcIds_9, ((MR_Box) (STATE_VARIABLE_AnalysisInfo_0_10)), &conv1_STATE_VARIABLE_AnalysisInfo_11);
  *STATE_VARIABLE_AnalysisInfo_11 = ((MR_Word) (conv1_STATE_VARIABLE_AnalysisInfo_11));
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_case_6_p_0(
  MR_Word VarTable_7,
  MR_Word STATE_VARIABLE_Case_0_15,
  MR_Word * STATE_VARIABLE_Case_16,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18)
{
  MR_Word MainConsId_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_15, 0))));
  MR_Word OtherConsIds_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_15, 1))));
  MR_Word Goal0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_15, 2))));
  MR_Word Goal_14;
  MR_Word GoalExpr0_19 = ((MR_Word) ((MR_hl_field(0, Goal0_13, 0))));
  MR_Word GoalInfo0_20 = ((MR_Word) ((MR_hl_field(0, Goal0_13, 1))));
  MR_Word GoalExpr_21;
  MR_Word GoalInfo_22;

  transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(VarTable_7, GoalInfo0_20, GoalExpr0_19, &GoalExpr_21, Status_9, STATE_VARIABLE_ModuleInfo_0_17, STATE_VARIABLE_ModuleInfo_18);
  switch (*Status_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 0:
      GoalInfo_22 = GoalInfo0_20;
      break;
    case (MR_Integer) 1:
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 18, GoalInfo0_20, &GoalInfo_22);
      break;
  }
  {
    Goal_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal_14, 0) = ((MR_Box) (GoalExpr_21));
    MR_hl_field(0, Goal_14, 1) = ((MR_Box) (GoalInfo_22));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Case_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MainConsId_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (OtherConsIds_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Goal_14));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_proc_3_p_0(
  MR_Word PPId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  MR_Word PredInfo_8;
  MR_Word VarTable_9;
  MR_Word _Status_10;
  MR_Word STATE_VARIABLE_ProcInfo_1_13;
  MR_Word STATE_VARIABLE_Body_1_14;
  MR_Word STATE_VARIABLE_Body_2_15;
  MR_Word STATE_VARIABLE_ModuleInfo_1_16;
  MR_Word STATE_VARIABLE_ProcInfo_2_17;
  MR_Word GoalExpr0_18;
  MR_Word GoalInfo0_19;
  MR_Word GoalExpr_20;
  MR_Word GoalInfo_21;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_11, PPId_4, &PredInfo_8, &STATE_VARIABLE_ProcInfo_1_13);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_1_13, &STATE_VARIABLE_Body_1_14);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_1_13, &VarTable_9);
  GoalExpr0_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Body_1_14, 0))));
  GoalInfo0_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Body_1_14, 1))));
  transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(VarTable_9, GoalInfo0_19, GoalExpr0_18, &GoalExpr_20, &_Status_10, STATE_VARIABLE_ModuleInfo_0_11, &STATE_VARIABLE_ModuleInfo_1_16);
  switch (_Status_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 0:
      GoalInfo_21 = GoalInfo0_19;
      break;
    case (MR_Integer) 1:
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 18, GoalInfo0_19, &GoalInfo_21);
      break;
  }
  {
    STATE_VARIABLE_Body_2_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Body_2_15, 0) = ((MR_Box) (GoalExpr_20));
    MR_hl_field(0, STATE_VARIABLE_Body_2_15, 1) = ((MR_Box) (GoalInfo_21));
  }
  hlds__hlds_pred__proc_info_set_goal_3_p_0(STATE_VARIABLE_Body_2_15, STATE_VARIABLE_ProcInfo_1_13, &STATE_VARIABLE_ProcInfo_2_17);
  hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PPId_4, PredInfo_8, STATE_VARIABLE_ProcInfo_2_17, STATE_VARIABLE_ModuleInfo_1_16, STATE_VARIABLE_ModuleInfo_12);
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_String Var_50;

    mdbcomp__prim_data__special_pred_name_arity_4_p_0((env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__SpecialPredId_49, &(env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Var_137, &Var_50, &(env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Var_138);
    (env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (strcmp((env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Name_47, (env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Var_137) == 0);
    if ((env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
    {
      (env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredFormArityInt_48 == (env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Var_138);
      if ((env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
        transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__commit_0) == 0)
    {
      {
        MR_Word ModuleName_46;
        MR_Word Var_116;

        ModuleName_46 = hlds__hlds_pred__pred_info_module_1_f_0((env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
        (env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(ModuleName_46);
        if ((env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
        {
          (env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Name_47 = hlds__hlds_pred__pred_info_name_1_f_0((env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
          hlds__hlds_pred__pred_info_get_orig_arity_2_p_0((env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45, &Var_116);
          (env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredFormArityInt_48 = (MR_Integer) (Var_116);
          {
            MR_Integer slot_1 = (MR_Integer) 0;

            do
            {
              (env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__SpecialPredId_49 = ((&transform_hlds__trailing_analysis_vector_common_10[2 + slot_1]))->transform_hlds__trailing_analysis__vector_common_type_10_0__vct_10_f_0;
              transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_2(env_ptr);
              slot_1 = (MR_Integer) ((MR_Unsigned) slot_1 + (MR_Unsigned) 1);
            }
            while ((slot_1 < (MR_Integer) 2));
          }
        }
      }
      (env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(
  MR_Word VarTable_8,
  MR_Word GoalInfo_9,
  MR_Word STATE_VARIABLE_GoalExpr_0_110,
  MR_Word * STATE_VARIABLE_GoalExpr_111,
  MR_Word * Status_11,
  MR_Word STATE_VARIABLE_ModuleInfo_0_112,
  MR_Word * STATE_VARIABLE_ModuleInfo_113)
{
  struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s env;

  switch (MR_tag((MR_Word) STATE_VARIABLE_GoalExpr_0_110)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_98 = (MR_Word) ((MR_Word) (STATE_VARIABLE_GoalExpr_0_110));
        MR_Word SubGoal_99;

        transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(VarTable_8, SubGoal0_98, &SubGoal_99, Status_11, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113);
        *STATE_VARIABLE_GoalExpr_111 = (MR_Word) ((MR_Word) (SubGoal_99));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Kind_16 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_GoalExpr_0_110, 3))));
        MR_Word Var_13;
        MR_Word Var_14;
        MR_Word Var_15;
        MR_Word Var_17;

        switch (MR_tag((MR_Word) Kind_16)) {
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
            switch (((MR_Integer) ((MR_hl_field(3, Kind_16, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.trailing_analysis.trail_annotate_goal_2\'/7", (MR_String) "complicated unify");
                  return;
                }
                break;
            }
            break;
        }
        *Status_11 = (MR_Integer) 1;
        *STATE_VARIABLE_GoalExpr_111 = STATE_VARIABLE_GoalExpr_0_110;
        *STATE_VARIABLE_ModuleInfo_113 = STATE_VARIABLE_ModuleInfo_0_112;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word CallPredId_38 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_GoalExpr_0_110, 0))));
        MR_Integer CallProcId_39 = ((MR_Integer) ((MR_hl_field(2, STATE_VARIABLE_GoalExpr_0_110, 1))));
        MR_Word CallArgs_40 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_GoalExpr_0_110, 2))));
        MR_Word CallPPId_44;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;

        {
          CallPPId_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CallPPId_44, 0) = ((MR_Box) (CallPredId_38));
          MR_hl_field(0, CallPPId_44, 1) = ((MR_Box) (CallProcId_39));
        }
        hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_112, CallPredId_38, &(env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
        (env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
        if ((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
        {
          *Status_11 = (MR_Integer) 1;
          *STATE_VARIABLE_ModuleInfo_113 = STATE_VARIABLE_ModuleInfo_0_112;
        }
        else
        {
          transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_3(&env);
          if ((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
          {
            *Status_11 = (MR_Integer) 0;
            *STATE_VARIABLE_ModuleInfo_113 = STATE_VARIABLE_ModuleInfo_0_112;
          }
          else
          {
            MR_Word Status0_51;

            (env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = transform_hlds__trailing_analysis__pred_info_has_known_trail_status_2_p_0((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45, &Status0_51);
            if ((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
            {
              *Status_11 = Status0_51;
              *STATE_VARIABLE_ModuleInfo_113 = STATE_VARIABLE_ModuleInfo_0_112;
            }
            else
            {
              MR_Word Globals_52;
              MR_Word IntermodAnalysis_53;

              hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_112, &Globals_52);
              libs__globals__lookup_bool_option_3_p_0(Globals_52, (MR_Integer) 539, &IntermodAnalysis_53);
              (env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (IntermodAnalysis_53 == (MR_Integer) 1);
              if ((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
                (env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
              if ((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
              {
                MR_Word Result_54;
                MR_Word AnalysisStatus_55;

                transform_hlds__trailing_analysis__search_trail_analysis_status_5_p_0(CallPPId_44, &Result_54, &AnalysisStatus_55, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113);
                switch (AnalysisStatus_55) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *Status_11 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 1:
                    switch (Result_54) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 2:
                        *Status_11 = transform_hlds__trailing_analysis__trail_check_vars_3_f_0(*STATE_VARIABLE_ModuleInfo_113, VarTable_8, CallArgs_40);
                        break;
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                        *Status_11 = Result_54;
                        break;
                    }
                    break;
                }
              }
              else
              {
                transform_hlds__trailing_analysis__trail_check_call_5_p_0(STATE_VARIABLE_ModuleInfo_0_112, VarTable_8, CallPPId_44, CallArgs_40, Status_11);
                *STATE_VARIABLE_ModuleInfo_113 = STATE_VARIABLE_ModuleInfo_0_112;
              }
            }
          }
        }
        *STATE_VARIABLE_GoalExpr_111 = STATE_VARIABLE_GoalExpr_0_110;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_110, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_63 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_110, 1))));
            MR_Word Var_64;
            MR_Word Var_65;
            MR_Word Var_66;
            MR_Word Var_67;

            switch (MR_tag((MR_Word) GenericCall_63)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *Status_11 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                *Status_11 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                *Status_11 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *Status_11 = (MR_Integer) 1;
                break;
            }
            *STATE_VARIABLE_GoalExpr_111 = STATE_VARIABLE_GoalExpr_0_110;
            *STATE_VARIABLE_ModuleInfo_113 = STATE_VARIABLE_ModuleInfo_0_112;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Attributes_56 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_110, 1))));
            MR_Word Var_57;
            MR_Integer Var_58;
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word Var_62;

            *Status_11 = transform_hlds__trailing_analysis__attributes_imply_trail_mod_1_f_0(Attributes_56);
            *STATE_VARIABLE_GoalExpr_111 = STATE_VARIABLE_GoalExpr_0_110;
            *STATE_VARIABLE_ModuleInfo_113 = STATE_VARIABLE_ModuleInfo_0_112;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_79 = ((MR_Unsigned) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_110, 1))) & (MR_Integer) 1);
            MR_Word Conjuncts0_80 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_110, 2))));
            MR_Word Conjuncts_81;
            MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_110, 1)));

            transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0(VarTable_8, Conjuncts0_80, &Conjuncts_81, Status_11, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_GoalExpr_111 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_79));
              MR_hl_field(3, base, 2) = ((MR_Box) (Conjuncts_81));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts0_82 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_110, 1))));
            MR_Word Disjuncts_83;

            transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0(VarTable_8, Disjuncts0_82, &Disjuncts_83, Status_11, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_GoalExpr_111 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Disjuncts_83));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_84 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_110, 1))));
            MR_Word CanFail_85 = ((MR_Unsigned) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_110, 2))) & (MR_Integer) 1);
            MR_Word Cases0_86 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_110, 3))));
            MR_Word Cases_87;
            MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_110, 2)));

            transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0(VarTable_8, Cases0_86, &Cases_87, Status_11, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_GoalExpr_111 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var_84));
              MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (CanFail_85));
              MR_hl_field(3, base, 3) = ((MR_Box) (Cases_87));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_100 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_110, 1))));
            MR_Word InnerGoal0_101 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_110, 2))));
            MR_Word Var_131;
            MR_Word Var_102;
            MR_Unsigned packed_word_1;

            (env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Reason_100)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_100, 0)))) == (MR_Integer) 6)));
            if ((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
            {
              packed_word_1 = (MR_Unsigned) ((MR_hl_field(3, Reason_100, 2)));
              Var_131 = ((MR_Unsigned) ((MR_hl_field(3, Reason_100, 2))) & (MR_Integer) 3);
              (env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (Var_131 == (MR_Integer) 1);
            }
            if ((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
            {
              *Status_11 = (MR_Integer) 1;
              *STATE_VARIABLE_ModuleInfo_113 = STATE_VARIABLE_ModuleInfo_0_112;
              *STATE_VARIABLE_GoalExpr_111 = STATE_VARIABLE_GoalExpr_0_110;
            }
            else
            {
              MR_Word InnerGoal_104;
              MR_Word InnerGoalInfo_106;
              MR_Word InnerCodeModel_107;
              MR_Word OuterCodeModel_108;
              MR_Word Status0_136;
              MR_Word Var_105;

              transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(VarTable_8, InnerGoal0_101, &InnerGoal_104, &Status0_136, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113);
              InnerGoalInfo_106 = ((MR_Word) ((MR_hl_field(0, InnerGoal_104, 1))));
              InnerCodeModel_107 = hlds__code_model__goal_info_get_code_model_1_f_0(InnerGoalInfo_106);
              OuterCodeModel_108 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_9);
              *Status_11 = transform_hlds__trailing_analysis__scope_implies_trail_mod_3_f_0(InnerCodeModel_107, OuterCodeModel_108, Status0_136);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_GoalExpr_111 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Reason_100));
                MR_hl_field(3, base, 2) = ((MR_Box) (InnerGoal_104));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_88 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_110, 1))));
            MR_Word If0_89 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_110, 2))));
            MR_Word Then0_90 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_110, 3))));
            MR_Word Else0_91 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_110, 4))));
            MR_Word If_92;
            MR_Word IfStatus_93;
            MR_Word Then_94;
            MR_Word ThenStatus_95;
            MR_Word Else_96;
            MR_Word ElseStatus_97;
            MR_Word STATE_VARIABLE_ModuleInfo_5_125;
            MR_Word STATE_VARIABLE_ModuleInfo_6_126;

            transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(VarTable_8, If0_89, &If_92, &IfStatus_93, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_5_125);
            transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(VarTable_8, Then0_90, &Then_94, &ThenStatus_95, STATE_VARIABLE_ModuleInfo_5_125, &STATE_VARIABLE_ModuleInfo_6_126);
            transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(VarTable_8, Else0_91, &Else_96, &ElseStatus_97, STATE_VARIABLE_ModuleInfo_6_126, STATE_VARIABLE_ModuleInfo_113);
            (env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (IfStatus_93 == (MR_Integer) 1);
            if ((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
            {
              (env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (ThenStatus_95 == (MR_Integer) 1);
              if ((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
                (env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (ElseStatus_97 == (MR_Integer) 1);
            }
            if ((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
              *Status_11 = (MR_Integer) 1;
            else
              *Status_11 = (MR_Integer) 0;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_GoalExpr_111 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Vars_88));
              MR_hl_field(3, base, 2) = ((MR_Box) (If_92));
              MR_hl_field(3, base, 3) = ((MR_Box) (Then_94));
              MR_hl_field(3, base, 4) = ((MR_Box) (Else_96));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.trailing_analysis.trail_annotate_goal_2\'/7", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(
  MR_Word VarTable_7,
  MR_Word STATE_VARIABLE_Goal_0_15,
  MR_Word * STATE_VARIABLE_Goal_16,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18)
{
  MR_Word GoalExpr0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_15, 0))));
  MR_Word GoalInfo0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_15, 1))));
  MR_Word GoalExpr_13;
  MR_Word GoalInfo_14;

  transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(VarTable_7, GoalInfo0_12, GoalExpr0_11, &GoalExpr_13, Status_9, STATE_VARIABLE_ModuleInfo_0_17, STATE_VARIABLE_ModuleInfo_18);
  switch (*Status_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 0:
      GoalInfo_14 = GoalInfo0_12;
      break;
    case (MR_Integer) 1:
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 18, GoalInfo0_12, &GoalInfo_14);
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Goal_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_14));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__3_3;

  transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Case_16;
  MR_Word conv1_Status_9;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_18;

  transform_hlds__trailing_analysis__trail_annotate_case_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_Case_16, &conv1_Status_9, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_18);
  *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Case_16));
  *wrapper_arg_3 = ((MR_Box) (conv1_Status_9));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_18));
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0(
  MR_Word VarTable_7,
  MR_Word STATE_VARIABLE_Cases_0_12,
  MR_Word * STATE_VARIABLE_Cases_13,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15)
{
  MR_Word Statuses_11;
  MR_Word Var_16;
  MR_Box conv3_STATE_VARIABLE_ModuleInfo_15;
  MR_Box conv5_Status_9;

  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_8[2]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (VarTable_7));
  }
  mercury__list__map2_foldl_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_16, STATE_VARIABLE_Cases_0_12, STATE_VARIABLE_Cases_13, &Statuses_11, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14)), &conv3_STATE_VARIABLE_ModuleInfo_15);
  *STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_15));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0), (MR_Word) (&transform_hlds__trailing_analysis_scalar_common_2[9]), Statuses_11, ((MR_Box) ((MR_Integer) 1)), &conv5_Status_9);
  *Status_9 = ((MR_Word) (conv5_Status_9));
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__3_3;

  transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Goal_16;
  MR_Word conv1_Status_9;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_18;

  transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_Goal_16, &conv1_Status_9, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_18);
  *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Goal_16));
  *wrapper_arg_3 = ((MR_Box) (conv1_Status_9));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_18));
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0(
  MR_Word VarTable_7,
  MR_Word STATE_VARIABLE_Goals_0_12,
  MR_Word * STATE_VARIABLE_Goals_13,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15)
{
  MR_Word Statuses_11;
  MR_Word Var_16;
  MR_Box conv3_STATE_VARIABLE_ModuleInfo_15;
  MR_Box conv5_Status_9;

  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_8[1]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (VarTable_7));
  }
  mercury__list__map2_foldl_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_16, STATE_VARIABLE_Goals_0_12, STATE_VARIABLE_Goals_13, &Statuses_11, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14)), &conv3_STATE_VARIABLE_ModuleInfo_15);
  *STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_15));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0), (MR_Word) (&transform_hlds__trailing_analysis_scalar_common_2[8]), Statuses_11, ((MR_Box) ((MR_Integer) 1)), &conv5_Status_9);
  *Status_9 = ((MR_Word) (conv5_Status_9));
}

static void MR_CALL 
transform_hlds__trailing_analysis__acc_type_trailing_status_4_p_0(
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
    *STATE_VARIABLE_Status_9 = (MR_Integer) 0;
  else
  {
    MR_Word TypeCtorCategory_11;
    MR_Word Var_14;

    TypeCtorCategory_11 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_5, Type_6);
    Var_14 = transform_hlds__trailing_analysis__type_and_cat_trailing_status_3_f_0(ModuleInfo_5, Type_6, TypeCtorCategory_11);
    switch (Var_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        switch (STATE_VARIABLE_Status_0_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            *STATE_VARIABLE_Status_9 = (MR_Integer) 2;
            break;
          case (MR_Integer) 0:
            *STATE_VARIABLE_Status_9 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Status_9 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_Status_9 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Status_9 = STATE_VARIABLE_Status_0_8;
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__type_and_cat_trailing_status_3_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Status_9;

  transform_hlds__trailing_analysis__acc_type_trailing_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Status_9);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Status_9));
}

static void MR_CALL 
transform_hlds__trailing_analysis__type_and_cat_trailing_status_3_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Status_9;

  transform_hlds__trailing_analysis__acc_type_trailing_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Status_9);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Status_9));
}

static void MR_CALL 
transform_hlds__trailing_analysis__type_and_cat_trailing_status_3_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Status_9;

  transform_hlds__trailing_analysis__acc_type_trailing_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Status_9);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Status_9));
}

static void MR_CALL 
transform_hlds__trailing_analysis__type_and_cat_trailing_status_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Status_9;

  transform_hlds__trailing_analysis__acc_type_trailing_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Status_9);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Status_9));
}

static void MR_CALL 
transform_hlds__trailing_analysis__type_and_cat_trailing_status_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Status_9;

  transform_hlds__trailing_analysis__acc_type_trailing_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Status_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Status_9));
}

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__type_and_cat_trailing_status_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word TypeCtorCat_7)
{
  MR_bool succeeded;
  MR_Word Status_8;

  switch (MR_tag((MR_Word) TypeCtorCat_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(TypeCtorCat_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Status_8 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          Status_8 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          Status_8 = (MR_Integer) 2;
          break;
        case (MR_Integer) 3:
          Status_8 = (MR_Integer) 1;
          break;
        case (MR_Integer) 4:
          {
            MR_Word Args_24;
            MR_Word _TypeCtor_20;
            MR_Word _UnifyCompare_21;

            parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_6, &_TypeCtor_20, &Args_24);
            succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(ModuleInfo_5, Type_6, &_UnifyCompare_21);
            if (succeeded)
              Status_8 = (MR_Integer) 0;
            else
            {
              MR_Word Var_52;
              MR_Box conv3_Status_8;

              {
                Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_52, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[2]));
                MR_hl_field(0, Var_52, 1) = ((MR_Box) (transform_hlds__trailing_analysis__type_and_cat_trailing_status_3_f_0_2));
                MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_52, 3) = ((MR_Box) (ModuleInfo_5));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0), Var_52, Args_24, ((MR_Box) ((MR_Integer) 1)), &conv3_Status_8);
              Status_8 = ((MR_Word) (conv3_Status_8));
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      Status_8 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      {
        MR_Word Args_13;
        MR_Word _TypeCtor_12;
        MR_Word _UnifyCompare_14;

        parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_6, &_TypeCtor_12, &Args_13);
        succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(ModuleInfo_5, Type_6, &_UnifyCompare_14);
        if (succeeded)
          Status_8 = (MR_Integer) 0;
        else
        {
          MR_Word Var_48;
          MR_Box conv1_Status_8;

          {
            Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_48, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[2]));
            MR_hl_field(0, Var_48, 1) = ((MR_Box) (transform_hlds__trailing_analysis__type_and_cat_trailing_status_3_f_0_1));
            MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_48, 3) = ((MR_Box) (ModuleInfo_5));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0), Var_48, Args_13, ((MR_Box) ((MR_Integer) 1)), &conv1_Status_8);
          Status_8 = ((MR_Word) (conv1_Status_8));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeCtorCat_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Status_8 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_47 = ((MR_Unsigned) ((MR_hl_field(3, TypeCtorCat_7, 1))) & (MR_Integer) 7);

            switch (Var_47) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                Status_8 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Args_36;
                  MR_Word _TypeCtor_32;
                  MR_Word _UnifyCompare_33;

                  parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_6, &_TypeCtor_32, &Args_36);
                  succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(ModuleInfo_5, Type_6, &_UnifyCompare_33);
                  if (succeeded)
                    Status_8 = (MR_Integer) 0;
                  else
                  {
                    MR_Word Var_56;
                    MR_Box conv5_Status_8;

                    {
                      Var_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_56, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[2]));
                      MR_hl_field(0, Var_56, 1) = ((MR_Box) (transform_hlds__trailing_analysis__type_and_cat_trailing_status_3_f_0_3));
                      MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(0, Var_56, 3) = ((MR_Box) (ModuleInfo_5));
                    }
                    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0), Var_56, Args_36, ((MR_Box) ((MR_Integer) 1)), &conv5_Status_8);
                    Status_8 = ((MR_Word) (conv5_Status_8));
                  }
                }
                break;
              case (MR_Integer) 0:
                Status_8 = (MR_Integer) 1;
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Args_42;
                  MR_Word _TypeCtor_38;
                  MR_Word _UnifyCompare_39;

                  parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_6, &_TypeCtor_38, &Args_42);
                  succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(ModuleInfo_5, Type_6, &_UnifyCompare_39);
                  if (succeeded)
                    Status_8 = (MR_Integer) 0;
                  else
                  {
                    MR_Word Var_60;
                    MR_Box conv7_Status_8;

                    {
                      Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_60, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[2]));
                      MR_hl_field(0, Var_60, 1) = ((MR_Box) (transform_hlds__trailing_analysis__type_and_cat_trailing_status_3_f_0_4));
                      MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(0, Var_60, 3) = ((MR_Box) (ModuleInfo_5));
                    }
                    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0), Var_60, Args_42, ((MR_Box) ((MR_Integer) 1)), &conv7_Status_8);
                    Status_8 = ((MR_Word) (conv7_Status_8));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Args_30;
                  MR_Word _TypeCtor_26;
                  MR_Word _UnifyCompare_27;

                  parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_6, &_TypeCtor_26, &Args_30);
                  succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(ModuleInfo_5, Type_6, &_UnifyCompare_27);
                  if (succeeded)
                    Status_8 = (MR_Integer) 0;
                  else
                  {
                    MR_Word Var_64;
                    MR_Box conv9_Status_8;

                    {
                      Var_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_64, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[2]));
                      MR_hl_field(0, Var_64, 1) = ((MR_Box) (transform_hlds__trailing_analysis__type_and_cat_trailing_status_3_f_0_5));
                      MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(0, Var_64, 3) = ((MR_Box) (ModuleInfo_5));
                    }
                    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0), Var_64, Args_30, ((MR_Box) ((MR_Integer) 1)), &conv9_Status_8);
                    Status_8 = ((MR_Word) (conv9_Status_8));
                  }
                }
                break;
            }
          }
          break;
      }
      break;
  }
  return Status_8;
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Status_9;

  transform_hlds__trailing_analysis__acc_type_trailing_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Status_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Status_9));
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word PPId_8,
  MR_Word Args_9,
  MR_Word * Result_10)
{
  MR_Word MaybeResult_11;
  MR_Word ProcInfo_15;
  MR_Word MaybeCalleeTrailingInfo_16;
  MR_Word _PredInfo_14;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_6, PPId_8, &_PredInfo_14, &ProcInfo_15);
  hlds__hlds_pred__proc_info_get_trailing_info_2_p_0(ProcInfo_15, &MaybeCalleeTrailingInfo_16);
  if ((MaybeCalleeTrailingInfo_16 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeResult_11 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word CalleeTrailingInfo_17 = ((MR_Word) ((MR_hl_field(1, MaybeCalleeTrailingInfo_16, 0))));
    MR_Word CalleeTrailingStatus_18 = ((MR_Unsigned) ((MR_hl_field(0, CalleeTrailingInfo_17, 0))) & (MR_Integer) 3);
    MR_Word AnalysisStatus_19 = ((MR_Word) ((MR_hl_field(0, CalleeTrailingInfo_17, 1))));

    switch (CalleeTrailingStatus_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word TrailingStatus_20;
          MR_Word Var_21;
          MR_Word Types_22;
          MR_Word Var_23;
          MR_Box conv1_TrailingStatus_20;

          parse_tree__var_table__lookup_var_types_3_p_0(VarTable_7, Args_9, &Types_22);
          {
            Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_23, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[2]));
            MR_hl_field(0, Var_23, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_call_5_p_0_1));
            MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_23, 3) = ((MR_Box) (ModuleInfo_6));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0), Var_23, Types_22, ((MR_Box) ((MR_Integer) 1)), &conv1_TrailingStatus_20);
          TrailingStatus_20 = ((MR_Word) (conv1_TrailingStatus_20));
          {
            Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_21, 0) = (MR_Box) ((MR_Unsigned) (TrailingStatus_20));
            MR_hl_field(0, Var_21, 1) = ((MR_Box) (AnalysisStatus_19));
          }
          {
            MaybeResult_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeResult_11, 0) = ((MR_Box) (Var_21));
          }
        }
        break;
      case (MR_Integer) 0:
        MaybeResult_11 = MaybeCalleeTrailingInfo_16;
        break;
      case (MR_Integer) 1:
        MaybeResult_11 = MaybeCalleeTrailingInfo_16;
        break;
    }
  }
  if ((MaybeResult_11 == (MR_Word) ((MR_Unsigned) 0U)))
    *Result_10 = (MR_Integer) 0;
  else
  {
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, MaybeResult_11, 0))));

    *Result_10 = ((MR_Unsigned) ((MR_hl_field(0, Var_13, 0))) & (MR_Integer) 3);
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__combine_maybe_trail_analysis_status_3_p_0(
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
transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          *HeadVar__3_3 = (MR_Integer) 2;
          break;
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Integer) 2;
          break;
      }
      break;
    case (MR_Integer) 0:
      *HeadVar__3_3 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      *HeadVar__3_3 = HeadVar__2_2;
      break;
  }
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__trail_get_conditional_closure_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_Conditionals_0_14,
  MR_Word * STATE_VARIABLE_Conditionals_15)
{
  MR_bool succeeded;
  MR_Word ProcInfo_9;
  MR_Word MaybeProcTrailingInfo_10;
  MR_Word ProcTrailingInfo_11;
  MR_Word Status_12;
  MR_Word _PredInfo_8;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_5, PPId_6, &_PredInfo_8, &ProcInfo_9);
  hlds__hlds_pred__proc_info_get_trailing_info_2_p_0(ProcInfo_9, &MaybeProcTrailingInfo_10);
  succeeded = (MaybeProcTrailingInfo_10 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ProcTrailingInfo_11 = ((MR_Word) ((MR_hl_field(1, MaybeProcTrailingInfo_10, 0))));
    Status_12 = ((MR_Unsigned) ((MR_hl_field(0, ProcTrailingInfo_11, 0))) & (MR_Integer) 3);
    switch (Status_12) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        {
          mercury__list__cons_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PPId_6)), STATE_VARIABLE_Conditionals_0_14, STATE_VARIABLE_Conditionals_15);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_Conditionals_15 = STATE_VARIABLE_Conditionals_0_14;
          succeeded = MR_TRUE;
        }
        break;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__trail_get_conditional_closures_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Conditionals_15;

  succeeded = transform_hlds__trailing_analysis__trail_get_conditional_closure_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Conditionals_15);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Conditionals_15));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__trail_get_conditional_closures_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Closures_5,
  MR_Word * Conditionals_6)
{
  MR_bool succeeded;
  MR_Word Var_7;
  MR_Box conv1_Conditionals_6;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[3]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_get_conditional_closures_3_p_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (ModuleInfo_4));
  }
  succeeded = mercury__set__fold_4_p_3((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__trailing_analysis_scalar_common_1[3]), Var_7, Closures_5, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_Conditionals_6);
  if (succeeded)
  {
    *Conditionals_6 = ((MR_Word) (conv1_Conditionals_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__scope_implies_trail_mod_3_f_0(
  MR_Word InnerCodeModel_5,
  MR_Word OuterCodeModel_6,
  MR_Word InnerStatus_7)
{
  MR_bool succeeded = (InnerCodeModel_5 == (MR_Integer) 2);
  MR_Word HeadVar__4_4;

  if (succeeded)
    succeeded = (OuterCodeModel_6 != (MR_Integer) 2);
  if (succeeded)
    HeadVar__4_4 = (MR_Integer) 0;
  else
    HeadVar__4_4 = InnerStatus_7;
  return HeadVar__4_4;
}

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__attributes_imply_trail_mod_1_f_0(
  MR_Word Attributes_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;
  MR_Word Var_4;

  Var_4 = parse_tree__prog_data_foreign__get_may_modify_trail_1_f_0(Attributes_3);
  succeeded = (Var_4 == (MR_Integer) 0);
  if (succeeded)
    HeadVar__2_2 = (MR_Integer) 0;
  else
    HeadVar__2_2 = (MR_Integer) 1;
  return HeadVar__2_2;
}

static void MR_CALL 
transform_hlds__trailing_analysis__check_proc_for_trail_mods_6_p_0(
  MR_Word SCC_7,
  MR_Word PPId_8,
  MR_Word STATE_VARIABLE_Results_0_18,
  MR_Word * STATE_VARIABLE_Results_19,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21)
{
  MR_Word ProcInfo_12;
  MR_Word Body_13;
  MR_Word VarTable_14;
  MR_Word Result_15;
  MR_Word MaybeAnalysisStatus_16;
  MR_Word TrailProcResult_17;
  MR_Word Var_11;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_20, PPId_8, &Var_11, &ProcInfo_12);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_12, &Body_13);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_12, &VarTable_14);
  transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(SCC_7, VarTable_14, Body_13, &Result_15, &MaybeAnalysisStatus_16, STATE_VARIABLE_ModuleInfo_0_20, STATE_VARIABLE_ModuleInfo_21);
  {
    TrailProcResult_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TrailProcResult_17, 0) = ((MR_Box) (PPId_8));
    MR_hl_field(0, TrailProcResult_17, 1) = (MR_Box) ((MR_Unsigned) (Result_15));
    MR_hl_field(0, TrailProcResult_17, 2) = ((MR_Box) (MaybeAnalysisStatus_16));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Results_19 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (TrailProcResult_17));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Results_0_18));
  }
}

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_132;

  conv2_LambdaHeadVar__2_132 = transform_hlds__trailing_analysis__IntroducedFrom__func__check_goal_for_trail_mods__466__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_132));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Status_9;

  transform_hlds__trailing_analysis__acc_type_trailing_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Status_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Status_9));
}

static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_String Var_55;

    mdbcomp__prim_data__special_pred_name_arity_4_p_0((env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__SpecialPredId_54, &(env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Var_160, &Var_55, &(env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Var_161);
    (env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (strcmp((env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Name_52, (env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Var_160) == 0);
    if ((env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
    {
      (env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredFormArityInt_53 == (env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Var_161);
      if ((env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
        transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_2(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__commit_0) == 0)
    {
      {
        MR_Word ModuleName_51;
        MR_Word Var_117;

        ModuleName_51 = hlds__hlds_pred__pred_info_module_1_f_0((env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
        (env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(ModuleName_51);
        if ((env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
        {
          (env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Name_52 = hlds__hlds_pred__pred_info_name_1_f_0((env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
          hlds__hlds_pred__pred_info_get_orig_arity_2_p_0((env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48, &Var_117);
          (env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredFormArityInt_53 = (MR_Integer) (Var_117);
          {
            MR_Integer slot_1 = (MR_Integer) 0;

            do
            {
              (env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__SpecialPredId_54 = ((&transform_hlds__trailing_analysis_vector_common_10[0 + slot_1]))->transform_hlds__trailing_analysis__vector_common_type_10_0__vct_10_f_0;
              transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_3(env_ptr);
              slot_1 = (MR_Integer) ((MR_Unsigned) slot_1 + (MR_Unsigned) 1);
            }
            while ((slot_1 < (MR_Integer) 2));
          }
        }
      }
      (env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(
  MR_Word SCC_8,
  MR_Word VarTable_9,
  MR_Word Goal_10,
  MR_Word * Result_11,
  MR_Word * MaybeAnalysisStatus_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_110,
  MR_Word * STATE_VARIABLE_ModuleInfo_111)
{
  struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s env;

  while (MR_TRUE)
  {
    MR_Word GoalExpr_14 = ((MR_Word) ((MR_hl_field(0, Goal_10, 0))));
    MR_Word GoalInfo_15 = ((MR_Word) ((MR_hl_field(0, Goal_10, 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_100 = (MR_Word) ((MR_Word) (GoalExpr_14));
          MR_Word next_value_of_Goal_10 = SubGoal_100;

          // direct tailcall eliminated
          ;
          Goal_10 = next_value_of_Goal_10;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Kind_19 = ((MR_Word) ((MR_hl_field(1, GoalExpr_14, 3))));
          MR_Word Var_16;
          MR_Word Var_17;
          MR_Word Var_18;
          MR_Word Var_20;

          *Result_11 = (MR_Integer) 1;
          *MaybeAnalysisStatus_12 = (MR_Word) (MR_mkword(1, &transform_hlds__trailing_analysis_scalar_common_5[0]));
          switch (MR_tag((MR_Word) Kind_19)) {
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
              switch (((MR_Integer) ((MR_hl_field(3, Kind_19, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.trailing_analysis.check_goal_for_trail_mods\'/7", (MR_String) "complicated unify");
                    return;
                  }
                  break;
              }
              break;
          }
          *STATE_VARIABLE_ModuleInfo_111 = STATE_VARIABLE_ModuleInfo_0_110;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CallPredId_41 = ((MR_Word) ((MR_hl_field(2, GoalExpr_14, 0))));
          MR_Integer CallProcId_42 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_14, 1))));
          MR_Word CallArgs_43 = ((MR_Word) ((MR_hl_field(2, GoalExpr_14, 2))));
          MR_Word CallPPId_47;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;

          {
            CallPPId_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, CallPPId_47, 0) = ((MR_Box) (CallPredId_41));
            MR_hl_field(0, CallPPId_47, 1) = ((MR_Box) (CallProcId_42));
          }
          hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_110, CallPredId_41, &(env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
          (env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (CallPPId_47)), SCC_8);
          if ((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
          {
            MR_Word Types_49;
            MR_Word Var_163;
            MR_Box conv1_Result_11;

            parse_tree__var_table__lookup_var_types_3_p_0(VarTable_9, CallArgs_43, &Types_49);
            {
              Var_163 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_163, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[2]));
              MR_hl_field(0, Var_163, 1) = ((MR_Box) (transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_1));
              MR_hl_field(0, Var_163, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_163, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_110));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0), Var_163, Types_49, ((MR_Box) ((MR_Integer) 1)), &conv1_Result_11);
            *Result_11 = ((MR_Word) (conv1_Result_11));
            *MaybeAnalysisStatus_12 = (MR_Word) (MR_mkword(1, &transform_hlds__trailing_analysis_scalar_common_5[0]));
            *STATE_VARIABLE_ModuleInfo_111 = STATE_VARIABLE_ModuleInfo_0_110;
          }
          else
          {
            (env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
            if ((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
            {
              *Result_11 = (MR_Integer) 1;
              *MaybeAnalysisStatus_12 = (MR_Word) (MR_mkword(1, &transform_hlds__trailing_analysis_scalar_common_5[0]));
              *STATE_VARIABLE_ModuleInfo_111 = STATE_VARIABLE_ModuleInfo_0_110;
            }
            else
            {
              transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_4(&env);
              if ((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
              {
                *Result_11 = (MR_Integer) 0;
                *MaybeAnalysisStatus_12 = (MR_Word) (MR_mkword(1, &transform_hlds__trailing_analysis_scalar_common_5[0]));
                *STATE_VARIABLE_ModuleInfo_111 = STATE_VARIABLE_ModuleInfo_0_110;
              }
              else
              {
                MR_Word Result0_56;

                (env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = transform_hlds__trailing_analysis__pred_info_has_known_trail_status_2_p_0((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48, &Result0_56);
                if ((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
                {
                  *Result_11 = Result0_56;
                  *MaybeAnalysisStatus_12 = (MR_Word) (MR_mkword(1, &transform_hlds__trailing_analysis_scalar_common_5[0]));
                  *STATE_VARIABLE_ModuleInfo_111 = STATE_VARIABLE_ModuleInfo_0_110;
                }
                else
                {
                  MR_Word Globals_57;
                  MR_Word Intermod_58;

                  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_110, &Globals_57);
                  libs__globals__lookup_bool_option_3_p_0(Globals_57, (MR_Integer) 539, &Intermod_58);
                  (env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (Intermod_58 == (MR_Integer) 1);
                  if ((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
                    (env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
                  if ((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
                  {
                    MR_Word AnalysisStatus_59;
                    MR_Word Result0_146;

                    transform_hlds__trailing_analysis__search_trail_analysis_status_5_p_0(CallPPId_47, &Result0_146, &AnalysisStatus_59, STATE_VARIABLE_ModuleInfo_0_110, STATE_VARIABLE_ModuleInfo_111);
                    switch (Result0_146) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 2:
                        *Result_11 = transform_hlds__trailing_analysis__trail_check_vars_3_f_0(*STATE_VARIABLE_ModuleInfo_111, VarTable_9, CallArgs_43);
                        break;
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                        *Result_11 = Result0_146;
                        break;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeAnalysisStatus_12 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (AnalysisStatus_59));
                    }
                  }
                  else
                  {
                    MR_Word MaybeResult_60;

                    transform_hlds__trailing_analysis__trail_check_call_2_5_p_0(STATE_VARIABLE_ModuleInfo_0_110, VarTable_9, CallPPId_47, CallArgs_43, &MaybeResult_60);
                    if ((MaybeResult_60 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      *Result_11 = (MR_Integer) 0;
                      switch (Intermod_58) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *MaybeAnalysisStatus_12 = (MR_Word) ((MR_Unsigned) 0U);
                          break;
                        case (MR_Integer) 1:
                          *MaybeAnalysisStatus_12 = (MR_Word) (MR_mkword(1, &transform_hlds__trailing_analysis_scalar_common_5[0]));
                          break;
                      }
                    }
                    else
                    {
                      MR_Word Var_122 = ((MR_Word) ((MR_hl_field(1, MaybeResult_60, 0))));
                      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_122, 0)));

                      *Result_11 = ((MR_Unsigned) ((MR_hl_field(0, Var_122, 0))) & (MR_Integer) 3);
                      *MaybeAnalysisStatus_12 = ((MR_Word) ((MR_hl_field(0, Var_122, 1))));
                    }
                    *STATE_VARIABLE_ModuleInfo_111 = STATE_VARIABLE_ModuleInfo_0_110;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_14, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Details_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 1))));
              MR_Word _Args_62;
              MR_Word _ArgModes_63;
              MR_Word Var_64;
              MR_Word Var_65;

              switch (MR_tag((MR_Word) Details_61)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *Result_11 = (MR_Integer) 0;
                    *MaybeAnalysisStatus_12 = (MR_Word) (MR_mkword(1, &transform_hlds__trailing_analysis_scalar_common_5[0]));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *Result_11 = (MR_Integer) 0;
                    *MaybeAnalysisStatus_12 = (MR_Word) (MR_mkword(1, &transform_hlds__trailing_analysis_scalar_common_5[0]));
                  }
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  {
                    *Result_11 = (MR_Integer) 1;
                    *MaybeAnalysisStatus_12 = (MR_Word) (MR_mkword(1, &transform_hlds__trailing_analysis_scalar_common_5[0]));
                  }
                  break;
              }
              *STATE_VARIABLE_ModuleInfo_111 = STATE_VARIABLE_ModuleInfo_0_110;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 1))));
              MR_Word Var_78;
              MR_Integer Var_79;
              MR_Word Var_80;
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_Word Var_162;

              Var_162 = parse_tree__prog_data_foreign__get_may_modify_trail_1_f_0(Attributes_77);
              (env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (Var_162 == (MR_Integer) 0);
              if ((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
                *Result_11 = (MR_Integer) 0;
              else
                *Result_11 = (MR_Integer) 1;
              *MaybeAnalysisStatus_12 = (MR_Word) (MR_mkword(1, &transform_hlds__trailing_analysis_scalar_common_5[0]));
              *STATE_VARIABLE_ModuleInfo_111 = STATE_VARIABLE_ModuleInfo_0_110;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_85 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 2))));
              MR_Word _ConjType_84;

              transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(SCC_8, VarTable_9, Goals_85, Result_11, MaybeAnalysisStatus_12, STATE_VARIABLE_ModuleInfo_0_110, STATE_VARIABLE_ModuleInfo_111);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_149 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 1))));
              MR_Word _Result0_86;

              transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(SCC_8, VarTable_9, Goals_149, &_Result0_86, MaybeAnalysisStatus_12, STATE_VARIABLE_ModuleInfo_0_110, STATE_VARIABLE_ModuleInfo_111);
              *Result_11 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_89 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 3))));
              MR_Word CaseGoals_90;
              MR_Word Var_87;
              MR_Word Var_88;

              CaseGoals_90 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__trailing_analysis_scalar_common_2[7]), Cases_89);
              transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(SCC_8, VarTable_9, CaseGoals_90, Result_11, MaybeAnalysisStatus_12, STATE_VARIABLE_ModuleInfo_0_110, STATE_VARIABLE_ModuleInfo_111);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_101 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 1))));
              MR_Word InnerGoal_102 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 2))));
              MR_Word Var_141;
              MR_Word Var_103;
              MR_Unsigned packed_word_1;

              (env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Reason_101)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_101, 0)))) == (MR_Integer) 6)));
              if ((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
              {
                packed_word_1 = (MR_Unsigned) ((MR_hl_field(3, Reason_101, 2)));
                Var_141 = ((MR_Unsigned) ((MR_hl_field(3, Reason_101, 2))) & (MR_Integer) 3);
                (env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (Var_141 == (MR_Integer) 1);
              }
              if ((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
              {
                *Result_11 = (MR_Integer) 1;
                *MaybeAnalysisStatus_12 = (MR_Word) (MR_mkword(1, &transform_hlds__trailing_analysis_scalar_common_5[0]));
                *STATE_VARIABLE_ModuleInfo_111 = STATE_VARIABLE_ModuleInfo_0_110;
              }
              else
              {
                MR_Word InnerGoalInfo_106;
                MR_Word InnerCodeModel_107;
                MR_Word OuterCodeModel_108;
                MR_Word Result0_156;
                MR_Word Var_105;

                transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(SCC_8, VarTable_9, InnerGoal_102, &Result0_156, MaybeAnalysisStatus_12, STATE_VARIABLE_ModuleInfo_0_110, STATE_VARIABLE_ModuleInfo_111);
                InnerGoalInfo_106 = ((MR_Word) ((MR_hl_field(0, InnerGoal_102, 1))));
                InnerCodeModel_107 = hlds__code_model__goal_info_get_code_model_1_f_0(InnerGoalInfo_106);
                OuterCodeModel_108 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_15);
                (env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (InnerCodeModel_107 == (MR_Integer) 2);
                if ((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
                  (env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (OuterCodeModel_108 != (MR_Integer) 2);
                if ((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
                  *Result_11 = (MR_Integer) 0;
                else
                  *Result_11 = Result0_156;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_95 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 2))));
              MR_Word Then_96 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 3))));
              MR_Word Else_97 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 4))));
              MR_Word Var_134;
              MR_Word Var_136;
              MR_Word Var_137;
              MR_Word Result0_155;
              MR_Word Var_94;
              MR_Word CondGoalInfo_99;
              MR_Word _CondGoalExpr_98;
              MR_Word Var_139;

              {
                Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_137, 0) = ((MR_Box) (Else_97));
                MR_hl_field(1, Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_136, 0) = ((MR_Box) (Then_96));
                MR_hl_field(1, Var_136, 1) = ((MR_Box) (Var_137));
              }
              {
                Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_134, 0) = ((MR_Box) (Cond_95));
                MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_136));
              }
              transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(SCC_8, VarTable_9, Var_134, &Result0_155, MaybeAnalysisStatus_12, STATE_VARIABLE_ModuleInfo_0_110, STATE_VARIABLE_ModuleInfo_111);
              (env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (Result0_155 == (MR_Integer) 1);
              if ((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
              {
                CondGoalInfo_99 = ((MR_Word) ((MR_hl_field(0, Cond_95, 1))));
                Var_139 = hlds__code_model__goal_info_get_code_model_1_f_0(CondGoalInfo_99);
                (env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (Var_139 != (MR_Integer) 2);
              }
              if ((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
                *Result_11 = (MR_Integer) 1;
              else
                *Result_11 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.trailing_analysis.check_goal_for_trail_mods\'/7", (MR_String) "shorthand");
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
transform_hlds__trailing_analysis__search_trail_analysis_status_5_p_0(
  MR_Word PPId_6,
  MR_Word * Result_7,
  MR_Word * AnalysisStatus_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13)
{
  MR_Word AnalysisInfo0_10;
  MR_Word AnalysisInfo_11;
  MR_Word ModuleName_14;
  MR_Word FuncId_15;
  MR_Word MaybeBestStatus_17;

  hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, &AnalysisInfo0_10);
  transform_hlds__mmc_analysis__module_name_func_id_4_p_0(STATE_VARIABLE_ModuleInfo_0_12, PPId_6, &ModuleName_14, &FuncId_15);
  analysis__operations__lookup_best_result_6_p_0((MR_Word) (&transform_hlds__trailing_analysis_scalar_common_4[0]), AnalysisInfo0_10, ModuleName_14, FuncId_15, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)), &MaybeBestStatus_17);
  if ((MaybeBestStatus_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Answer_20;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Answer_20;

    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&transform_hlds__trailing_analysis_scalar_common_4[0]), 0)), 9))));
    conv1_Answer_20 = func_0(((MR_Box) ((MR_Word) (&transform_hlds__trailing_analysis_scalar_common_4[0]))), ((MR_Box) ((MR_Integer) 0)));
    Answer_20 = ((MR_Word) (conv1_Answer_20));
    *Result_7 = (MR_Word) (Answer_20);
    *AnalysisStatus_8 = (MR_Integer) 2;
    analysis__operations__record_request_6_p_0((MR_Word) (&transform_hlds__trailing_analysis_scalar_common_3[0]), (MR_String) "trail_usage", ModuleName_14, FuncId_15, ((MR_Box) ((MR_Integer) 0)), AnalysisInfo0_10, &AnalysisInfo_11);
  }
  else
  {
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, MaybeBestStatus_17, 0))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_22, 1))));

    *AnalysisStatus_8 = ((MR_Unsigned) ((MR_hl_field(0, Var_22, 2))) & (MR_Integer) 3);
    *Result_7 = (MR_Word) (Var_23);
    analysis__operations__record_dependency_7_p_0((MR_Word) (&transform_hlds__trailing_analysis_scalar_common_4[0]), ModuleName_14, FuncId_15, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)), AnalysisInfo0_10, &AnalysisInfo_11);
  }
  hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_11, STATE_VARIABLE_ModuleInfo_0_12, STATE_VARIABLE_ModuleInfo_13);
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_vars_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Status_9;

  transform_hlds__trailing_analysis__acc_type_trailing_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Status_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Status_9));
}

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_vars_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTable_6,
  MR_Word Vars_7)
{
  MR_Word Result_8;
  MR_Word Types_9;
  MR_Word Var_10;
  MR_Box conv1_Result_8;

  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_6, Vars_7, &Types_9);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[2]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_vars_3_f_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (ModuleInfo_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0), Var_10, Types_9, ((MR_Box) ((MR_Integer) 1)), &conv1_Result_8);
  Result_8 = ((MR_Word) (conv1_Result_8));
  return Result_8;
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Status_9;

  transform_hlds__trailing_analysis__acc_type_trailing_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Status_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Status_9));
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_2_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word PPId_8,
  MR_Word Args_9,
  MR_Word * MaybeResult_10)
{
  MR_Word ProcInfo_12;
  MR_Word MaybeCalleeTrailingInfo_13;
  MR_Word _PredInfo_11;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_6, PPId_8, &_PredInfo_11, &ProcInfo_12);
  hlds__hlds_pred__proc_info_get_trailing_info_2_p_0(ProcInfo_12, &MaybeCalleeTrailingInfo_13);
  if ((MaybeCalleeTrailingInfo_13 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeResult_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word CalleeTrailingInfo_14 = ((MR_Word) ((MR_hl_field(1, MaybeCalleeTrailingInfo_13, 0))));
    MR_Word CalleeTrailingStatus_15 = ((MR_Unsigned) ((MR_hl_field(0, CalleeTrailingInfo_14, 0))) & (MR_Integer) 3);
    MR_Word AnalysisStatus_16 = ((MR_Word) ((MR_hl_field(0, CalleeTrailingInfo_14, 1))));

    switch (CalleeTrailingStatus_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word TrailingStatus_17;
          MR_Word Var_18;
          MR_Word Types_19;
          MR_Word Var_20;
          MR_Box conv1_TrailingStatus_17;

          parse_tree__var_table__lookup_var_types_3_p_0(VarTable_7, Args_9, &Types_19);
          {
            Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_20, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[2]));
            MR_hl_field(0, Var_20, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_call_2_5_p_0_1));
            MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_20, 3) = ((MR_Box) (ModuleInfo_6));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0), Var_20, Types_19, ((MR_Box) ((MR_Integer) 1)), &conv1_TrailingStatus_17);
          TrailingStatus_17 = ((MR_Word) (conv1_TrailingStatus_17));
          {
            Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_18, 0) = (MR_Box) ((MR_Unsigned) (TrailingStatus_17));
            MR_hl_field(0, Var_18, 1) = ((MR_Box) (AnalysisStatus_16));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeResult_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_18));
          }
        }
        break;
      case (MR_Integer) 0:
        *MaybeResult_10 = MaybeCalleeTrailingInfo_13;
        break;
      case (MR_Integer) 1:
        *MaybeResult_10 = MaybeCalleeTrailingInfo_13;
        break;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__pred_info_has_known_trail_status_2_p_0(
  MR_Word PredInfo_3,
  MR_Word * Status_4)
{
  MR_bool succeeded;
  MR_String Name_5;
  MR_Word PredOrFunc_6;
  MR_Word ModuleName_7;
  MR_String ModuleNameStr_8;
  MR_Integer Arity_9;
  MR_Word Var_10;

  Name_5 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_3);
  PredOrFunc_6 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_3);
  ModuleName_7 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_3);
  succeeded = ((MR_tag((MR_Word) ModuleName_7)) == (MR_Integer) 0);
  if (succeeded)
  {
    ModuleNameStr_8 = ((MR_String) ((MR_hl_field(0, ModuleName_7, 0))));
    hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_3, &Var_10);
    Arity_9 = (MR_Integer) (Var_10);
    succeeded = (Arity_9 == (MR_Integer) 1);
    if (succeeded)
    {
      if ((strcmp(ModuleNameStr_8, (MR_String) "require") == 0))
        switch (PredOrFunc_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              succeeded = (strcmp(Name_5, (MR_String) "func_error") == 0);
              if (succeeded)
              {
                *Status_4 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 0:
            {
              succeeded = (strcmp(Name_5, (MR_String) "error") == 0);
              if (succeeded)
              {
                *Status_4 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
            }
            break;
        }
      else
      if ((strcmp(ModuleNameStr_8, (MR_String) "exception") == 0))
        if ((strcmp(Name_5, (MR_String) "throw") == 0))
        {
          *Status_4 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        if ((strcmp(Name_5, (MR_String) "rethrow") == 0))
        {
          *Status_4 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
      else
        succeeded = MR_FALSE;
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_MaybeStatus_6;

  transform_hlds__trailing_analysis__combine_maybe_trail_analysis_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_MaybeStatus_6);
  *wrapper_arg_3 = ((MR_Box) (conv6_MaybeStatus_6));
}

static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__3_3;

  transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Result_11;
  MR_Word conv1_MaybeAnalysisStatus_12;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_111;

  transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_Result_11, &conv1_MaybeAnalysisStatus_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_111);
  *wrapper_arg_2 = ((MR_Box) (conv2_Result_11));
  *wrapper_arg_3 = ((MR_Box) (conv1_MaybeAnalysisStatus_12));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_111));
}

static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(
  MR_Word SCC_8,
  MR_Word VarTable_9,
  MR_Word Goals_10,
  MR_Word * Result_11,
  MR_Word * MaybeAnalysisStatus_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17)
{
  MR_Word Results_14;
  MR_Word MaybeAnalysisStatuses_15;
  MR_Word Var_18;
  MR_Box conv3_STATE_VARIABLE_ModuleInfo_17;
  MR_Box conv5_Result_11;
  MR_Box conv7_MaybeAnalysisStatus_12;

  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_9[0]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (SCC_8));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (VarTable_9));
  }
  mercury__list__map2_foldl_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0), (MR_Word) (&transform_hlds__trailing_analysis_scalar_common_1[2]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_18, Goals_10, &Results_14, &MaybeAnalysisStatuses_15, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_16)), &conv3_STATE_VARIABLE_ModuleInfo_17);
  *STATE_VARIABLE_ModuleInfo_17 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_17));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0), (MR_Word) (&transform_hlds__trailing_analysis_scalar_common_2[5]), Results_14, ((MR_Box) ((MR_Integer) 1)), &conv5_Result_11);
  *Result_11 = ((MR_Word) (conv5_Result_11));
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__trailing_analysis_scalar_common_1[2]), (MR_Word) (&transform_hlds__trailing_analysis_scalar_common_1[2]), (MR_Word) (&transform_hlds__trailing_analysis_scalar_common_2[6]), MaybeAnalysisStatuses_15, ((MR_Box) (MR_mkword(1, &transform_hlds__trailing_analysis_scalar_common_5[0]))), &conv7_MaybeAnalysisStatus_12);
  *MaybeAnalysisStatus_12 = ((MR_Word) (conv7_MaybeAnalysisStatus_12));
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_maybe_analysis_status_2_p_0(
  MR_Word ProcResult_3,
  MR_Word * AnalysisStatus_4)
{
  *AnalysisStatus_4 = ((MR_Word) ((MR_hl_field(0, ProcResult_3, 2))));
}

static void MR_CALL 
transform_hlds__trailing_analysis__set_trailing_info_4_p_0(
  MR_Word ProcTrailingInfo_5,
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
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (ProcTrailingInfo_5));
  }
  hlds__hlds_pred__proc_info_set_trailing_info_3_p_0(Var_13, ProcInfo0_9, &ProcInfo_10);
  hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PPId_6, PredInfo0_8, ProcInfo_10, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_STATE_VARIABLE_ModuleInfo_12;

  transform_hlds__trailing_analysis__trail_annotate_proc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_ModuleInfo_12);
  *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_ModuleInfo_12));
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_STATE_VARIABLE_ModuleInfo_12;

  transform_hlds__trailing_analysis__set_trailing_info_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_ModuleInfo_12);
  *wrapper_arg_3 = ((MR_Box) (conv11_STATE_VARIABLE_ModuleInfo_12));
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__trailing_analysis__output_proc_name_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_MaybeStatus_6;

  transform_hlds__trailing_analysis__combine_maybe_trail_analysis_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_MaybeStatus_6);
  *wrapper_arg_3 = ((MR_Box) (conv8_MaybeStatus_6));
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_AnalysisStatus_4;

  transform_hlds__trailing_analysis__trail_maybe_analysis_status_2_p_0(((MR_Word) (wrapper_arg_1)), &conv7_AnalysisStatus_4);
  *wrapper_arg_2 = ((MR_Box) (conv7_AnalysisStatus_4));
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Results_19;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_21;

  transform_hlds__trailing_analysis__check_proc_for_trail_mods_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Results_19, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_21);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Results_19));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_21));
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_44 = ((MR_Word) ((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv4_ProcResult_44));
  transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_3(env_ptr);
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_46 = ((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_44, 1))) & (MR_Integer) 3);
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_44, 1)));

    (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = (Var_46 != (MR_Integer) 1);
    if ((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
      transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_5(
  void * env_ptr_arg)
{
  struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0), &(env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv4_ProcResult_44, (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10, transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_4, env_ptr);
      (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_6(
  void * env_ptr_arg)
{
  struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_1, 1);
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_8(
  void * env_ptr_arg)
{
  struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_45 = ((MR_Word) ((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv5_EResult_45));
  transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_7(env_ptr);
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_7(
  void * env_ptr_arg)
{
  struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_45, 1)));

    (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__Var_47 = ((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_45, 1))) & (MR_Integer) 3);
    (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__Var_47 == (MR_Integer) 0);
    if ((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
      transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_6(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_9(
  void * env_ptr_arg)
{
  struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_1) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0), &(env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv5_EResult_45, (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10, transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_8, env_ptr);
      (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_10(
  void * env_ptr_arg)
{
  struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_2, 1);
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_12(
  void * env_ptr_arg)
{
  struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_49 = ((MR_Word) ((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv6_CResult_49));
  transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_11(env_ptr);
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_11(
  void * env_ptr_arg)
{
  struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_49, 1)));

    (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__Var_48 = ((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_49, 1))) & (MR_Integer) 3);
    (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__Var_48 == (MR_Integer) 2);
    if ((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
      transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_10(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_13(
  void * env_ptr_arg)
{
  struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_2) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0), &(env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv6_CResult_49, (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10, transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_12, env_ptr);
      (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0(
  MR_Word Debug_6,
  MR_Word Pass1Only_7,
  MR_Word SCC_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17)
{
  struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s env;

  {
    MR_Word TrailingStatus_11;
    MR_Word MaybeAnalysisStatus_12;
    MR_Word ProcTrailingInfo_15;
    MR_Word STATE_VARIABLE_ModuleInfo_1_18;
    MR_Word Var_22;
    MR_Word STATE_VARIABLE_ModuleInfo_2_23;
    MR_Word Var_30;
    MR_Box conv3_ProcResults_10;
    MR_Box conv2_STATE_VARIABLE_ModuleInfo_1_18;
    MR_Box conv12_STATE_VARIABLE_ModuleInfo_2_23;

    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_30, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_8[0]));
      MR_hl_field(0, Var_30, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_1));
      MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_30, 3) = ((MR_Box) (SCC_8));
    }
    mercury__set__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__trailing_analysis_scalar_common_1[1]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_30, SCC_8, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_ProcResults_10, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_16)), &conv2_STATE_VARIABLE_ModuleInfo_1_18);
    (env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10 = ((MR_Word) (conv3_ProcResults_10));
    STATE_VARIABLE_ModuleInfo_1_18 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_1_18));
    if (((env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.trailing_analysis.trail_combine_individual_proc_results\'/3", (MR_String) "empty SCC");
        return;
      }
    else
    {
      MR_Word MaybeAnalysisStatuses_59;
      MR_Box conv9_MaybeAnalysisStatus_12;

      transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_5(&env);
      (env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = !((env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded);
      if ((env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
        TrailingStatus_11 = (MR_Integer) 1;
      else
      {
        transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_9(&env);
        (env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = !((env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded);
        if ((env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
          transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_13(&env);
        if ((env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
          TrailingStatus_11 = (MR_Integer) 2;
        else
          TrailingStatus_11 = (MR_Integer) 0;
      }
      mercury__list__map_3_p_0((MR_Word) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0), (MR_Word) (&transform_hlds__trailing_analysis_scalar_common_1[2]), (MR_Word) (&transform_hlds__trailing_analysis_scalar_common_2[2]), (env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10, &MaybeAnalysisStatuses_59);
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__trailing_analysis_scalar_common_1[2]), (MR_Word) (&transform_hlds__trailing_analysis_scalar_common_1[2]), (MR_Word) (&transform_hlds__trailing_analysis_scalar_common_2[3]), MaybeAnalysisStatuses_59, ((MR_Box) (MR_mkword(1, &transform_hlds__trailing_analysis_scalar_common_5[0]))), &conv9_MaybeAnalysisStatus_12);
      MaybeAnalysisStatus_12 = ((MR_Word) (conv9_MaybeAnalysisStatus_12));
    }
    switch (Debug_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DebugStream_14;
          MR_Word Var_70;
          MR_Box conv10_STATE_VARIABLE_IO_3_68;

          hlds__passes_aux__get_debug_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_1_18, &DebugStream_14);
          mercury__io__write_string_4_p_0(DebugStream_14, (MR_String) "SCC: ");
          mercury__io__write_line_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0), DebugStream_14, ((MR_Box) (TrailingStatus_11)));
          {
            Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_70, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[1]));
            MR_hl_field(0, Var_70, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_16));
            MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_70, 3) = ((MR_Box) (DebugStream_14));
            MR_hl_field(0, Var_70, 4) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_18));
          }
          mercury__set__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, SCC_8, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_3_68);
          mercury__io__nl_3_p_0(DebugStream_14);
        }
        break;
    }
    {
      ProcTrailingInfo_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ProcTrailingInfo_15, 0) = (MR_Box) ((MR_Unsigned) (TrailingStatus_11));
      MR_hl_field(0, ProcTrailingInfo_15, 1) = ((MR_Box) (MaybeAnalysisStatus_12));
    }
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_22, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[1]));
      MR_hl_field(0, Var_22, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_17));
      MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_22, 3) = ((MR_Box) (ProcTrailingInfo_15));
    }
    mercury__set__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_22, SCC_8, ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_18)), &conv12_STATE_VARIABLE_ModuleInfo_2_23);
    STATE_VARIABLE_ModuleInfo_2_23 = ((MR_Word) (conv12_STATE_VARIABLE_ModuleInfo_2_23));
    switch (Pass1Only_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box conv14_STATE_VARIABLE_ModuleInfo_17;

          mercury__set__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__trailing_analysis_scalar_common_2[4]), SCC_8, ((MR_Box) (STATE_VARIABLE_ModuleInfo_2_23)), &conv14_STATE_VARIABLE_ModuleInfo_17);
          *STATE_VARIABLE_ModuleInfo_17 = ((MR_Word) (conv14_STATE_VARIABLE_ModuleInfo_17));
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_2_23;
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_in_module_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_AnalysisInfo_11;

  transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_AnalysisInfo_11);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_AnalysisInfo_11));
}

static void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_in_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_17;

  transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_17));
}

void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_in_module_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21)
{
  MR_bool succeeded;
  MR_Word Globals_4;
  MR_Word UseTrail_5;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_20, &Globals_4);
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 301, &UseTrail_5);
  switch (UseTrail_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_ModuleInfo_21 = STATE_VARIABLE_ModuleInfo_0_20;
      break;
    case (MR_Integer) 1:
      {
        MR_Word OpMode_6;
        MR_Word Pass1Only_9;
        MR_Word DepInfo_10;
        MR_Word SCCs_11;
        MR_Word Debug_12;
        MR_Word ProcAnalysisKinds0_13;
        MR_Word ProcAnalysisKinds_14;
        MR_Word STATE_VARIABLE_ModuleInfo_1_24;
        MR_Word Var_26;
        MR_Word STATE_VARIABLE_ModuleInfo_2_27;
        MR_Word STATE_VARIABLE_ModuleInfo_3_29;
        MR_Word OpModeAugment_7;
        MR_Word Var_23;
        MR_Box conv1_STATE_VARIABLE_ModuleInfo_2_27;
        MR_Word OpModeArgs_15;
        MR_Word Var_30;

        libs__globals__get_op_mode_2_p_0(Globals_4, &OpMode_6);
        succeeded = ((MR_tag((MR_Word) OpMode_6)) == (MR_Integer) 3);
        if (succeeded)
        {
          Var_23 = ((MR_Word) ((MR_hl_field(3, OpMode_6, 0))));
          succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 3);
          if (succeeded)
          {
            OpModeAugment_7 = ((MR_Word) ((MR_hl_field(3, Var_23, 0))));
            switch (MR_tag((MR_Word) OpModeAugment_7)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                switch (MR_unmkbody(OpModeAugment_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
                break;
            }
          }
        }
        if (succeeded)
          Pass1Only_9 = (MR_Integer) 1;
        else
          Pass1Only_9 = (MR_Integer) 0;
        hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_20, &STATE_VARIABLE_ModuleInfo_1_24, &DepInfo_10);
        SCCs_11 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_10);
        libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 137, &Debug_12);
        {
          Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_26, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[0]));
          MR_hl_field(0, Var_26, 1) = ((MR_Box) (transform_hlds__trailing_analysis__analyse_trail_usage_in_module_2_p_0_1));
          MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_26, 3) = ((MR_Box) (Debug_12));
          MR_hl_field(0, Var_26, 4) = ((MR_Box) (Pass1Only_9));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__trailing_analysis_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_26, SCCs_11, ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_24)), &conv1_STATE_VARIABLE_ModuleInfo_2_27);
        STATE_VARIABLE_ModuleInfo_2_27 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_2_27));
        hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(STATE_VARIABLE_ModuleInfo_2_27, &ProcAnalysisKinds0_13);
        mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ((MR_Box) ((MR_Integer) 1)), ProcAnalysisKinds0_13, &ProcAnalysisKinds_14);
        hlds__hlds_module__module_info_set_proc_analysis_kinds_3_p_0(ProcAnalysisKinds_14, STATE_VARIABLE_ModuleInfo_2_27, &STATE_VARIABLE_ModuleInfo_3_29);
        succeeded = ((MR_tag((MR_Word) OpMode_6)) == (MR_Integer) 3);
        if (succeeded)
        {
          OpModeArgs_15 = ((MR_Word) ((MR_hl_field(3, OpMode_6, 0))));
          succeeded = ((MR_tag((MR_Word) OpModeArgs_15)) == (MR_Integer) 3);
          if (succeeded)
          {
            Var_30 = ((MR_Word) ((MR_hl_field(3, OpModeArgs_15, 0))));
            succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 8U));
          }
        }
        if (succeeded)
        {
          MR_Word AnalysisInfo0_17;
          MR_Word PredIds_18;
          MR_Word AnalysisInfo_19;
          MR_Word Var_31;
          MR_Box conv3_AnalysisInfo_19;

          hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_3_29, &AnalysisInfo0_17);
          hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_3_29, &PredIds_18);
          {
            Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_31, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[0]));
            MR_hl_field(0, Var_31, 1) = ((MR_Box) (transform_hlds__trailing_analysis__analyse_trail_usage_in_module_2_p_0_2));
            MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_31, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_3_29));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0), Var_31, PredIds_18, ((MR_Box) (AnalysisInfo0_17)), &conv3_AnalysisInfo_19);
          AnalysisInfo_19 = ((MR_Word) (conv3_AnalysisInfo_19));
          hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_19, STATE_VARIABLE_ModuleInfo_3_29, STATE_VARIABLE_ModuleInfo_21);
        }
        else
          *STATE_VARIABLE_ModuleInfo_21 = STATE_VARIABLE_ModuleInfo_3_29;
      }
      break;
  }
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trailing_analysis_answer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__trailing_analysis____Unify____trailing_analysis_answer_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trailing_analysis_answer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__trailing_analysis____Compare____trailing_analysis_answer_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__to_term_1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  succeeded = transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__from_term_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__more_precise_than_3_3_p_0(((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__equivalent_3_3_p_0(((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__analysis_name_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__analysis_name_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__bottom_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__bottom_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__top_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__top_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__get_func_info_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;

  transform_hlds__trailing_analysis__ClassMethod_for_analysis__framework__analysis____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__framework__get_func_info_6_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
}

void mercury__transform_hlds__trailing_analysis__init(void)
{
}

void mercury__transform_hlds__trailing_analysis__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0);
  MR_register_type_ctor_info(&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0);
}

void mercury__transform_hlds__trailing_analysis__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__trailing_analysis__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.trailing_analysis.
