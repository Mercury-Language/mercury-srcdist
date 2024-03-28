/*
** Automatically generated from `intermod_decide.m'
** by the Mercury compiler,
** version rotd-2024-03-28
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


// :- module transform_hlds.intermod_decide.
// :- implementation.

/*
INIT mercury__transform_hlds__intermod_decide__init
ENDINIT
*/

#include "transform_hlds.intermod_decide.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "backend_libs.foreign.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_test.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
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
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.inlining.mih"
#include "transform_hlds.intermod_info.mih"
#include "transform_hlds.intermod_status.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0_s {
  MR_bool transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded;
  MR_Word transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__PredInfo_13;
  jmp_buf transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__commit_0;
  MR_Word transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__TypeCtorInfo_41_41;
  MR_Word transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__TypeCtorInfo_42_42;
  MR_Word transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__TypeInfo_50_50;
  MR_Word transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__Procs_17;
  MR_Integer transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__ProcId_19;
  MR_Word transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__ProcInfo_20;
  MR_Word transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__Var_29;
  MR_Word transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__Var_45;
  MR_Box transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__conv0_ProcId_19;
};

struct transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0_s {
  MR_Word transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__PredId_7;
  MR_bool transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded;
  MR_Word transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__Clauses_36;
  jmp_buf transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__commit_0;
  MR_Word transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__Goal1_75;
  MR_Word transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__Clause1_84;
  MR_Box transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__conv1_Clause1_84;
};

struct transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0_s {
  MR_Word transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__HeadVar__1_1;
  MR_Word transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__HeadVar__2_2;
  MR_bool transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__succeeded;
  jmp_buf transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__commit_0;
  MR_Word transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__Goals_4;
  MR_Word transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__FoundBranch_8;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_decide__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod_decide__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_decide__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_PseudoTypeInfo transform_hlds__intermod_decide__transform_hlds__intermod_decide__field_types_intermod_params_0_0[5];

static const MR_ConstString transform_hlds__intermod_decide__transform_hlds__intermod_decide__field_names_intermod_params_0_0[5];

static const MR_DuArgLocn transform_hlds__intermod_decide__transform_hlds__intermod_decide__field_locns_intermod_params_0_0[5];

static const MR_DuFunctorDesc transform_hlds__intermod_decide__transform_hlds__intermod_decide__du_functor_desc_intermod_params_0_0;

static const MR_DuFunctorDescPtr transform_hlds__intermod_decide__transform_hlds__intermod_decide__du_stag_ordered_intermod_params_0_0[1];

static const MR_DuPtagLayout transform_hlds__intermod_decide__transform_hlds__intermod_decide__du_ptag_ordered_intermod_params_0[1];

static const MR_DuFunctorDescPtr transform_hlds__intermod_decide__transform_hlds__intermod_decide__du_name_ordered_intermod_params_0[1];

static const MR_Integer transform_hlds__intermod_decide__transform_hlds__intermod_decide__functor_number_map_intermod_params_0[1];

static const MR_EnumFunctorDesc transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_may_opt_export_pred_0_0;

static const MR_EnumFunctorDesc transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_may_opt_export_pred_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_ordinal_ordered_may_opt_export_pred_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_name_ordered_may_opt_export_pred_0[2];

static const MR_Integer transform_hlds__intermod_decide__transform_hlds__intermod_decide__functor_number_map_may_opt_export_pred_0[2];

static const MR_EnumFunctorDesc transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_maybe_collect_types_0_0;

static const MR_EnumFunctorDesc transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_maybe_collect_types_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_ordinal_ordered_maybe_collect_types_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_name_ordered_maybe_collect_types_0[2];

static const MR_Integer transform_hlds__intermod_decide__transform_hlds__intermod_decide__functor_number_map_maybe_collect_types_0[2];

static const MR_EnumFunctorDesc transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_maybe_process_local_preds_0_0;

static const MR_EnumFunctorDesc transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_maybe_process_local_preds_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_ordinal_ordered_maybe_process_local_preds_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_name_ordered_maybe_process_local_preds_0[2];

static const MR_Integer transform_hlds__intermod_decide__transform_hlds__intermod_decide__functor_number_map_maybe_process_local_preds_0[2];

static MR_Word MR_CALL 
transform_hlds__intermod_decide__IntroducedFrom__func__find_func_matching_instance_method__982__1_1_f_0(
  MR_Word LambdaHeadVar__1_58);

static MR_Word MR_CALL 
transform_hlds__intermod_decide__IntroducedFrom__func__find_func_matching_instance_method__969__1_1_f_0(
  MR_Word LambdaHeadVar__1_54);

static MR_bool MR_CALL 
transform_hlds__intermod_decide__IntroducedFrom__pred__gather_opt_export_instance_in_instance_defn__830__1_2_p_0(
  MR_Word HeadVar__1_55,
  MR_Word HeadVar__2_87);

static void MR_CALL 
transform_hlds__intermod_decide__IntroducedFrom__pred__gather_opt_export_instance_in_instance_defn__811__1_3_p_0(
  MR_Word LambdaHeadVar__1_45,
  MR_Word LambdaHeadVar__2_46,
  MR_Word * LambdaHeadVar__3_47);

static void MR_CALL 
transform_hlds__intermod_decide____Compare____maybe_process_local_preds_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__intermod_decide____Unify____maybe_process_local_preds_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__intermod_decide____Compare____maybe_collect_types_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__intermod_decide____Unify____maybe_collect_types_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__intermod_decide____Compare____may_opt_export_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__intermod_decide____Unify____may_opt_export_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__intermod_decide____Compare____intermod_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__intermod_decide____Unify____intermod_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_types_in_type_defn_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word TypeDefn0_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_30,
  MR_Word * STATE_VARIABLE_IntermodInfo_31);

static void MR_CALL 
transform_hlds__intermod_decide__resolve_foreign_type_body_overloading_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word ForeignTypeBody0_9,
  MR_Word * ForeignTypeBody_10,
  MR_Word STATE_VARIABLE_IntermodInfo_0_20,
  MR_Word * STATE_VARIABLE_IntermodInfo_21);

static void MR_CALL 
transform_hlds__intermod_decide__resolve_unify_compare_overloading_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word MaybeCanonical0_9,
  MR_Word * MaybeCanonical_10,
  MR_Word STATE_VARIABLE_IntermodInfo_0_19,
  MR_Word * STATE_VARIABLE_IntermodInfo_20);

static MR_Box MR_CALL 
transform_hlds__intermod_decide__intermod_qualify_instance_method_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__intermod_decide__intermod_qualify_instance_method_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod_decide__intermod_qualify_instance_method_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word MethodNameToPredIdMap_8,
  MR_Word InstanceMethod0_9,
  MR_Word * InstanceMethod_10,
  MR_Word PredIds0_11,
  MR_Word * PredIds_12);

static MR_bool MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_instance_in_instance_defn_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_instance_in_instance_defn_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_instance_in_instance_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_instance_in_instance_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_instance_in_instance_defn_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefn_8,
  MR_Word STATE_VARIABLE_IntermodInfo_0_41,
  MR_Word * STATE_VARIABLE_IntermodInfo_42);

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_instances_in_class_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_instances_in_class_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefns_8,
  MR_Word STATE_VARIABLE_IntermodInfo_0_10,
  MR_Word * STATE_VARIABLE_IntermodInfo_11);

static MR_bool MR_CALL 
transform_hlds__intermod_decide__proc_has_a_higher_order_input_arg_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word ProcInfo_4);

static MR_bool MR_CALL 
transform_hlds__intermod_decide__some_input_arg_is_higher_order_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTable_6,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4);

static MR_bool MR_CALL 
transform_hlds__intermod_decide__proc_eval_method_is_normal_1_p_0(
  MR_Word ProcInfo_2);

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_types_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_types_2_p_0(
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7);

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_instances_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_instances_2_p_0(
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7);

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_preds_4_p_0(
  MR_Word Params0_5,
  MR_Word AllPredIds_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_10,
  MR_Word * STATE_VARIABLE_IntermodInfo_11);

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_preds_fixpoint_4_p_0(
  MR_Word Params_5,
  MR_Word ExtraExportedPreds0_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_12,
  MR_Word * STATE_VARIABLE_IntermodInfo_13);

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_preds_in_list_4_p_0(
  MR_Word Params_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_IntermodInfo_0_3,
  MR_Word * STATE_VARIABLE_IntermodInfo_4);

static void MR_CALL 
transform_hlds__intermod_decide__gather_entities_to_opt_export_in_clauses_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_IntermodInfo_0_3,
  MR_Word * STATE_VARIABLE_IntermodInfo_4);

static void MR_CALL 
transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(
  MR_Word tscc_proc_1_input_1_Goal_5,
  MR_Word * tscc_output_ptr_1_MayOptExportPred_6,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_IntermodInfo_11);

static void MR_CALL 
transform_hlds__intermod_decide__gather_entities_to_opt_export_in_unify_rhs_4_p_0(
  MR_Word tscc_proc_2_input_1_RHS_5,
  MR_Word * tscc_output_ptr_1_MayOptExportPred_6,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_24,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_IntermodInfo_11);

static void MR_CALL 
transform_hlds__intermod_decide__gather_entities_to_opt_export_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_IntermodInfo_0_3,
  MR_Word * STATE_VARIABLE_IntermodInfo_4);

static void MR_CALL 
transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_IntermodInfo_0_3,
  MR_Word * STATE_VARIABLE_IntermodInfo_4);

static void MR_CALL 
transform_hlds__intermod_decide__intermod_add_pred_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod_decide__intermod_add_pred_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod_decide__intermod_add_pred_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod_decide__intermod_add_pred_4_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod_decide__intermod_add_pred_4_p_0(
  MR_Word PredId_5,
  MR_Word * MayOptExportPred_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_8,
  MR_Word * STATE_VARIABLE_IntermodInfo_9);

static MR_bool MR_CALL 
transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_6(
  void * env_ptr_arg);

static MR_bool MR_CALL 
transform_hlds__intermod_decide__should_opt_export_pred_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word PredInfo_8,
  MR_Word Params_9,
  MR_Word TypeSpecForcePreds_10);

static void MR_CALL 
transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_3(
  void * env_ptr_arg);

static MR_bool MR_CALL 
transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__intermod_decide____Unify____intermod_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod_decide____Compare____intermod_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__intermod_decide____Unify____may_opt_export_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod_decide____Compare____may_opt_export_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__intermod_decide____Unify____maybe_collect_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod_decide____Compare____maybe_collect_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__intermod_decide____Unify____maybe_process_local_preds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod_decide____Compare____maybe_process_local_preds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__intermod_decide_scalar_common_1[5][2];

static /* final */ const MR_Box transform_hlds__intermod_decide_scalar_common_2[7][3];

static /* final */ const MR_Box transform_hlds__intermod_decide_scalar_common_3[2][4];

static /* final */ const MR_Box transform_hlds__intermod_decide_scalar_common_4[4][5];

static /* final */ const MR_Box transform_hlds__intermod_decide_scalar_common_6[2][8];

static /* final */ const MR_Box transform_hlds__intermod_decide_scalar_common_7[2][7];

static /* final */ const MR_Box transform_hlds__intermod_decide_scalar_common_8[1][6];

static /* final */ const MR_Box transform_hlds__intermod_decide_scalar_common_9[1][9];


struct transform_hlds__intermod_decide__vector_common_type_5_0_s {
  const MR_Word transform_hlds__intermod_decide__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct transform_hlds__intermod_decide__vector_common_type_5_0_s transform_hlds__intermod_decide_vector_common_5[25];



static /* final */ const MR_Box transform_hlds__intermod_decide_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_decide_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&transform_hlds__intermod_decide_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__intermod_decide_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__intermod_decide__gather_opt_export_types_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__intermod_decide_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__intermod_decide__gather_opt_export_instance_in_instance_defn_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__intermod_decide_scalar_common_7[1])),
    ((MR_Box) (transform_hlds__intermod_decide__gather_opt_export_instance_in_instance_defn_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__intermod_decide_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__intermod_decide__intermod_qualify_instance_method_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__intermod_decide_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__intermod_decide__intermod_qualify_instance_method_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_decide_scalar_common_3[2][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&transform_hlds__intermod_decide_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__intermod_decide__gather_opt_export_instance_in_instance_defn_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_decide_scalar_common_4[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__intermod_decide__transform_hlds__intermod_decide__type_ctor_info_may_opt_export_pred_0)),
    ((MR_Box) (&transform_hlds__intermod_decide__transform_hlds__intermod_decide__type_ctor_info_may_opt_export_pred_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_decide_scalar_common_6[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&transform_hlds__intermod_decide__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&transform_hlds__intermod_info__transform_hlds__intermod_info__type_ctor_info_intermod_info_0)),
    ((MR_Box) (&transform_hlds__intermod_info__transform_hlds__intermod_info__type_ctor_info_intermod_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&transform_hlds__intermod_info__transform_hlds__intermod_info__type_ctor_info_intermod_info_0)),
    ((MR_Box) (&transform_hlds__intermod_info__transform_hlds__intermod_info__type_ctor_info_intermod_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_decide_scalar_common_7[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__intermod_info__transform_hlds__intermod_info__type_ctor_info_intermod_info_0)),
    ((MR_Box) (&transform_hlds__intermod_info__transform_hlds__intermod_info__type_ctor_info_intermod_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__intermod_decide__transform_hlds__intermod_decide__type_ctor_info_may_opt_export_pred_0)),
    ((MR_Box) (&transform_hlds__intermod_info__transform_hlds__intermod_info__type_ctor_info_intermod_info_0)),
    ((MR_Box) (&transform_hlds__intermod_info__transform_hlds__intermod_info__type_ctor_info_intermod_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_decide_scalar_common_8[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0)),
    ((MR_Box) (&transform_hlds__intermod_decide__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__intermod_decide__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_decide_scalar_common_9[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod_decide__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&transform_hlds__intermod_decide__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__intermod_decide__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};


static /* final */ const struct transform_hlds__intermod_decide__vector_common_type_5_0_s transform_hlds__intermod_decide_vector_common_5[25] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 0 },
  /* row   2 */   { (MR_Integer) 0 },
  /* row   3 */   { (MR_Integer) 0 },
  /* row   4 */   { (MR_Integer) 1 },
  /* row   5 */   { (MR_Integer) 0 },
  /* row   6 */   { (MR_Integer) 0 },
  /* row   7 */   { (MR_Integer) 0 },
  /* row   8 */   { (MR_Integer) 0 },
  /* row   9 */   { (MR_Integer) 1 },
  /* row  10 */   { (MR_Integer) 0 },
  /* row  11 */   { (MR_Integer) 0 },
  /* row  12 */   { (MR_Integer) 0 },
  /* row  13 */   { (MR_Integer) 0 },
  /* row  14 */   { (MR_Integer) 1 },
  /* row  15 */   { (MR_Integer) 0 },
  /* row  16 */   { (MR_Integer) 0 },
  /* row  17 */   { (MR_Integer) 0 },
  /* row  18 */   { (MR_Integer) 0 },
  /* row  19 */   { (MR_Integer) 1 },
  /* row  20 */   { (MR_Integer) 0 },
  /* row  21 */   { (MR_Integer) 0 },
  /* row  22 */   { (MR_Integer) 0 },
  /* row  23 */   { (MR_Integer) 0 },
  /* row  24 */   { (MR_Integer) 1 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_decide__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod_decide__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_decide__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_PseudoTypeInfo transform_hlds__intermod_decide__transform_hlds__intermod_decide__field_types_intermod_params_0_0[5] = {
  (MR_PseudoTypeInfo) (&transform_hlds__intermod_decide__transform_hlds__intermod_decide__type_ctor_info_maybe_process_local_preds_0),
  (MR_PseudoTypeInfo) (&transform_hlds__intermod_decide__transform_hlds__intermod_decide__type_ctor_info_maybe_collect_types_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_deforest_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString transform_hlds__intermod_decide__transform_hlds__intermod_decide__field_names_intermod_params_0_0[5] = {
  (MR_String) "ip_maybe_process_local_preds",
  (MR_String) "ip_maybe_collect_types",
  (MR_String) "ip_maybe_deforest",
  (MR_String) "ip_inline_simple_threshold",
  (MR_String) "ip_higher_order_size_limit"
};

static const MR_DuArgLocn transform_hlds__intermod_decide__transform_hlds__intermod_decide__field_locns_intermod_params_0_0[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc transform_hlds__intermod_decide__transform_hlds__intermod_decide__du_functor_desc_intermod_params_0_0 = {
  (MR_String) "intermod_params",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__intermod_decide__transform_hlds__intermod_decide__field_types_intermod_params_0_0,
  transform_hlds__intermod_decide__transform_hlds__intermod_decide__field_names_intermod_params_0_0,
  transform_hlds__intermod_decide__transform_hlds__intermod_decide__field_locns_intermod_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__intermod_decide__transform_hlds__intermod_decide__du_stag_ordered_intermod_params_0_0[1] = { &transform_hlds__intermod_decide__transform_hlds__intermod_decide__du_functor_desc_intermod_params_0_0 };

static const MR_DuPtagLayout transform_hlds__intermod_decide__transform_hlds__intermod_decide__du_ptag_ordered_intermod_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__intermod_decide__transform_hlds__intermod_decide__du_stag_ordered_intermod_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__intermod_decide__transform_hlds__intermod_decide__du_name_ordered_intermod_params_0[1] = { &transform_hlds__intermod_decide__transform_hlds__intermod_decide__du_functor_desc_intermod_params_0_0 };

static const MR_Integer transform_hlds__intermod_decide__transform_hlds__intermod_decide__functor_number_map_intermod_params_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__intermod_decide__transform_hlds__intermod_decide__type_ctor_info_intermod_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__intermod_decide____Unify____intermod_params_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod_decide____Compare____intermod_params_0_0_10001)),
  (MR_String) "transform_hlds.intermod_decide",
  (MR_String) "intermod_params",
  { transform_hlds__intermod_decide__transform_hlds__intermod_decide__du_name_ordered_intermod_params_0 },
  { transform_hlds__intermod_decide__transform_hlds__intermod_decide__du_ptag_ordered_intermod_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__intermod_decide__transform_hlds__intermod_decide__functor_number_map_intermod_params_0,

};

static const MR_EnumFunctorDesc transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_may_opt_export_pred_0_0 = {
  (MR_String) "may_not_opt_export_pred",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_may_opt_export_pred_0_1 = {
  (MR_String) "may_opt_export_pred",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_ordinal_ordered_may_opt_export_pred_0[2] = {
  &transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_may_opt_export_pred_0_0,
  &transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_may_opt_export_pred_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_name_ordered_may_opt_export_pred_0[2] = {
  &transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_may_opt_export_pred_0_0,
  &transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_may_opt_export_pred_0_1
};

static const MR_Integer transform_hlds__intermod_decide__transform_hlds__intermod_decide__functor_number_map_may_opt_export_pred_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__intermod_decide__transform_hlds__intermod_decide__type_ctor_info_may_opt_export_pred_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__intermod_decide____Unify____may_opt_export_pred_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod_decide____Compare____may_opt_export_pred_0_0_10001)),
  (MR_String) "transform_hlds.intermod_decide",
  (MR_String) "may_opt_export_pred",
  { transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_name_ordered_may_opt_export_pred_0 },
  { transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_ordinal_ordered_may_opt_export_pred_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__intermod_decide__transform_hlds__intermod_decide__functor_number_map_may_opt_export_pred_0,

};

static const MR_EnumFunctorDesc transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_maybe_collect_types_0_0 = {
  (MR_String) "do_not_collect_types",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_maybe_collect_types_0_1 = {
  (MR_String) "do_collect_types",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_ordinal_ordered_maybe_collect_types_0[2] = {
  &transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_maybe_collect_types_0_0,
  &transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_maybe_collect_types_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_name_ordered_maybe_collect_types_0[2] = {
  &transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_maybe_collect_types_0_1,
  &transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_maybe_collect_types_0_0
};

static const MR_Integer transform_hlds__intermod_decide__transform_hlds__intermod_decide__functor_number_map_maybe_collect_types_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__intermod_decide__transform_hlds__intermod_decide__type_ctor_info_maybe_collect_types_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__intermod_decide____Unify____maybe_collect_types_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod_decide____Compare____maybe_collect_types_0_0_10001)),
  (MR_String) "transform_hlds.intermod_decide",
  (MR_String) "maybe_collect_types",
  { transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_name_ordered_maybe_collect_types_0 },
  { transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_ordinal_ordered_maybe_collect_types_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__intermod_decide__transform_hlds__intermod_decide__functor_number_map_maybe_collect_types_0,

};

static const MR_EnumFunctorDesc transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_maybe_process_local_preds_0_0 = {
  (MR_String) "do_not_process_local_preds",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_maybe_process_local_preds_0_1 = {
  (MR_String) "do_process_local_preds",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_ordinal_ordered_maybe_process_local_preds_0[2] = {
  &transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_maybe_process_local_preds_0_0,
  &transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_maybe_process_local_preds_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_name_ordered_maybe_process_local_preds_0[2] = {
  &transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_maybe_process_local_preds_0_0,
  &transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_functor_desc_maybe_process_local_preds_0_1
};

static const MR_Integer transform_hlds__intermod_decide__transform_hlds__intermod_decide__functor_number_map_maybe_process_local_preds_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__intermod_decide__transform_hlds__intermod_decide__type_ctor_info_maybe_process_local_preds_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__intermod_decide____Unify____maybe_process_local_preds_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod_decide____Compare____maybe_process_local_preds_0_0_10001)),
  (MR_String) "transform_hlds.intermod_decide",
  (MR_String) "maybe_process_local_preds",
  { transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_name_ordered_maybe_process_local_preds_0 },
  { transform_hlds__intermod_decide__transform_hlds__intermod_decide__enum_ordinal_ordered_maybe_process_local_preds_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__intermod_decide__transform_hlds__intermod_decide__functor_number_map_maybe_process_local_preds_0,

};

static MR_Word MR_CALL 
transform_hlds__intermod_decide__IntroducedFrom__func__find_func_matching_instance_method__982__1_1_f_0(
  MR_Word LambdaHeadVar__1_58)
{
  MR_Word LambdaHeadVar__2_59 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_58, (MR_Integer) 0))));

  return LambdaHeadVar__2_59;
}

static MR_Word MR_CALL 
transform_hlds__intermod_decide__IntroducedFrom__func__find_func_matching_instance_method__969__1_1_f_0(
  MR_Word LambdaHeadVar__1_54)
{
  MR_Word LambdaHeadVar__2_55 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_54, (MR_Integer) 2))));

  return LambdaHeadVar__2_55;
}

static MR_bool MR_CALL 
transform_hlds__intermod_decide__IntroducedFrom__pred__gather_opt_export_instance_in_instance_defn__830__1_2_p_0(
  MR_Word HeadVar__1_55,
  MR_Word HeadVar__2_87)
{
  MR_bool succeeded = (HeadVar__1_55 == HeadVar__2_87);

  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod_decide__IntroducedFrom__pred__gather_opt_export_instance_in_instance_defn__811__1_3_p_0(
  MR_Word LambdaHeadVar__1_45,
  MR_Word LambdaHeadVar__2_46,
  MR_Word * LambdaHeadVar__3_47)
{
  MR_bool succeeded;
  MR_Word MethodName_29 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_45, (MR_Integer) 1))));
  MR_Word PredId_30;
  MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_45, (MR_Integer) 2))));
  MR_Word Map1_32;

  PredId_30 = ((MR_Word) ((MR_hl_field(0, Var_64, (MR_Integer) 0))));
  succeeded = mercury__map__insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (MethodName_29)), ((MR_Box) (PredId_30)), LambdaHeadVar__2_46, &Map1_32);
  if (succeeded)
    *LambdaHeadVar__3_47 = Map1_32;
  else
    *LambdaHeadVar__3_47 = LambdaHeadVar__2_46;
}

static void MR_CALL 
transform_hlds__intermod_decide____Compare____maybe_process_local_preds_0_0(
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
transform_hlds__intermod_decide____Unify____maybe_process_local_preds_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod_decide____Compare____maybe_collect_types_0_0(
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
transform_hlds__intermod_decide____Unify____maybe_collect_types_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod_decide____Compare____may_opt_export_pred_0_0(
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
transform_hlds__intermod_decide____Unify____may_opt_export_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod_decide____Compare____intermod_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;
    MR_Integer Var_25 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_26 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_25 < Var_26);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_25 > Var_26);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_27 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_28 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_27 < Var_28);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_27 > Var_28);
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
      {
        MR_Word SubResult3_12;
        MR_Integer Var_29 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_30 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_29 < Var_30);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_29 > Var_30);
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
        {
          MR_Word SubResult4_15;

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (ArgX5_16 > ArgY5_17);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 2;
              else
                *HeadVar__1_1 = (MR_Integer) 0;
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod_decide____Unify____intermod_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
            succeeded = (ArgX5_11 == ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_types_in_type_defn_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word TypeDefn0_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_30,
  MR_Word * STATE_VARIABLE_IntermodInfo_31)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_8;
  MR_Word ModuleName_9;
  MR_Word TypeStatus_45;
  MR_Word Name_46;
  MR_Word Var_49;
  MR_Word Var_50;

  transform_hlds__intermod_info__intermod_info_get_module_info_2_p_0(STATE_VARIABLE_IntermodInfo_0_30, &ModuleInfo_8);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_9);
  hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn0_6, &TypeStatus_45);
  Name_46 = ((MR_Word) ((MR_hl_field(0, TypeCtor_5, (MR_Integer) 0))));
  succeeded = ((MR_tag((MR_Word) Name_46)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_50 = ((MR_Word) ((MR_hl_field(1, Name_46, (MR_Integer) 0))));
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_9, Var_50);
    if (succeeded)
    {
      Var_49 = transform_hlds__intermod_status__type_status_to_write_1_f_0(TypeStatus_45);
      succeeded = (Var_49 == (MR_Integer) 1);
    }
  }
  if (succeeded)
  {
    MR_Word TypeBody0_10;
    MR_Word TypeDefn_25;
    MR_Word Types0_29;
    MR_Word STATE_VARIABLE_IntermodInfo_34_34;
    MR_Word Var_38;
    MR_Word Var_40;

    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn0_6, &TypeBody0_10);
    switch (MR_tag((MR_Word) TypeBody0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeBodyDu0_11 = (MR_Word) ((MR_Word) (TypeBody0_10));
          MR_Word Ctors_12 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu0_11, (MR_Integer) 0))));
          MR_Word MaybeSuperType_13 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu0_11, (MR_Integer) 1))));
          MR_Word MaybeUserEqComp0_14 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu0_11, (MR_Integer) 2))));
          MR_Word MaybeRepn_15 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu0_11, (MR_Integer) 3))));
          MR_Word MaybeForeign0_16 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu0_11, (MR_Integer) 4))));
          MR_Word Globals_17;
          MR_Word Target_18;
          MR_Word MaybeForeign_21;
          MR_Word MaybeUserEqComp_22;
          MR_Word TypeBodyDu_23;
          MR_Word TypeBody_24;
          MR_Word ForeignTypeBody0_19;
          MR_Word Var_32;
          MR_Word Var_44;

          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_17);
          libs__globals__get_target_2_p_0(Globals_17, &Target_18);
          succeeded = (MaybeForeign0_16 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ForeignTypeBody0_19 = ((MR_Word) ((MR_hl_field(1, MaybeForeign0_16, (MR_Integer) 0))));
            Var_32 = (MR_Integer) 1;
            backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_18, ForeignTypeBody0_19, &Var_44);
            succeeded = (Var_32 == Var_44);
          }
          if (succeeded)
          {
            MR_Word ForeignTypeBody_20;
            MR_Word STATE_VARIABLE_IntermodInfo_33_33;
            MR_Word MaybeC0_52;
            MR_Word MaybeJava0_53;
            MR_Word MaybeCSharp0_54;
            MR_Word Globals_55;
            MR_Word Target_56;
            MR_Word MaybeC_57;
            MR_Word MaybeCSharp_58;
            MR_Word MaybeJava_59;

            transform_hlds__intermod_info__intermod_info_set_need_foreign_import_modules_2_p_0(STATE_VARIABLE_IntermodInfo_0_30, &STATE_VARIABLE_IntermodInfo_33_33);
            MaybeC0_52 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBody0_19, (MR_Integer) 0))));
            MaybeJava0_53 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBody0_19, (MR_Integer) 1))));
            MaybeCSharp0_54 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBody0_19, (MR_Integer) 2))));
            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_55);
            libs__globals__get_target_2_p_0(Globals_55, &Target_56);
            switch (Target_56) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  if ((MaybeC0_52 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MaybeC_57 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_IntermodInfo_34_34 = STATE_VARIABLE_IntermodInfo_33_33;
                  }
                  else
                  {
                    MR_Word Body_69;
                    MR_Word MaybeUserEqComp0_70;
                    MR_Word Assertions_71;
                    MR_Word MaybeUserEqComp_72;
                    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(1, MaybeC0_52, (MR_Integer) 0))));
                    MR_Word Var_74;

                    Body_69 = ((MR_Word) ((MR_hl_field(0, Var_73, (MR_Integer) 0))));
                    MaybeUserEqComp0_70 = ((MR_Word) ((MR_hl_field(0, Var_73, (MR_Integer) 1))));
                    Assertions_71 = ((MR_Word) ((MR_hl_field(0, Var_73, (MR_Integer) 2))));
                    transform_hlds__intermod_decide__resolve_unify_compare_overloading_6_p_0(ModuleInfo_8, TypeCtor_5, MaybeUserEqComp0_70, &MaybeUserEqComp_72, STATE_VARIABLE_IntermodInfo_33_33, &STATE_VARIABLE_IntermodInfo_34_34);
                    {
                      Var_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_74, 0) = ((MR_Box) (Body_69));
                      MR_hl_field(0, Var_74, 1) = ((MR_Box) (MaybeUserEqComp_72));
                      MR_hl_field(0, Var_74, 2) = ((MR_Box) (Assertions_71));
                    }
                    {
                      MaybeC_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, MaybeC_57, 0) = ((MR_Box) (Var_74));
                    }
                  }
                  MaybeCSharp_58 = MaybeCSharp0_54;
                  MaybeJava_59 = MaybeJava0_53;
                }
                break;
              case (MR_Integer) 1:
                {
                  MaybeC_57 = MaybeC0_52;
                  if ((MaybeCSharp0_54 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MaybeCSharp_58 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_IntermodInfo_34_34 = STATE_VARIABLE_IntermodInfo_33_33;
                  }
                  else
                  {
                    MR_Word Body_75;
                    MR_Word MaybeUserEqComp0_76;
                    MR_Word Assertions_77;
                    MR_Word MaybeUserEqComp_78;
                    MR_Word Var_79 = ((MR_Word) ((MR_hl_field(1, MaybeCSharp0_54, (MR_Integer) 0))));
                    MR_Word Var_80;

                    Body_75 = ((MR_Word) ((MR_hl_field(0, Var_79, (MR_Integer) 0))));
                    MaybeUserEqComp0_76 = ((MR_Word) ((MR_hl_field(0, Var_79, (MR_Integer) 1))));
                    Assertions_77 = ((MR_Word) ((MR_hl_field(0, Var_79, (MR_Integer) 2))));
                    transform_hlds__intermod_decide__resolve_unify_compare_overloading_6_p_0(ModuleInfo_8, TypeCtor_5, MaybeUserEqComp0_76, &MaybeUserEqComp_78, STATE_VARIABLE_IntermodInfo_33_33, &STATE_VARIABLE_IntermodInfo_34_34);
                    {
                      Var_80 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_80, 0) = ((MR_Box) (Body_75));
                      MR_hl_field(0, Var_80, 1) = ((MR_Box) (MaybeUserEqComp_78));
                      MR_hl_field(0, Var_80, 2) = ((MR_Box) (Assertions_77));
                    }
                    {
                      MaybeCSharp_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, MaybeCSharp_58, 0) = ((MR_Box) (Var_80));
                    }
                  }
                  MaybeJava_59 = MaybeJava0_53;
                }
                break;
              case (MR_Integer) 2:
                {
                  MaybeC_57 = MaybeC0_52;
                  MaybeCSharp_58 = MaybeCSharp0_54;
                  if ((MaybeJava0_53 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MaybeJava_59 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_IntermodInfo_34_34 = STATE_VARIABLE_IntermodInfo_33_33;
                  }
                  else
                  {
                    MR_Word Body_81;
                    MR_Word MaybeUserEqComp0_82;
                    MR_Word Assertions_83;
                    MR_Word MaybeUserEqComp_84;
                    MR_Word Var_85 = ((MR_Word) ((MR_hl_field(1, MaybeJava0_53, (MR_Integer) 0))));
                    MR_Word Var_86;

                    Body_81 = ((MR_Word) ((MR_hl_field(0, Var_85, (MR_Integer) 0))));
                    MaybeUserEqComp0_82 = ((MR_Word) ((MR_hl_field(0, Var_85, (MR_Integer) 1))));
                    Assertions_83 = ((MR_Word) ((MR_hl_field(0, Var_85, (MR_Integer) 2))));
                    transform_hlds__intermod_decide__resolve_unify_compare_overloading_6_p_0(ModuleInfo_8, TypeCtor_5, MaybeUserEqComp0_82, &MaybeUserEqComp_84, STATE_VARIABLE_IntermodInfo_33_33, &STATE_VARIABLE_IntermodInfo_34_34);
                    {
                      Var_86 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_86, 0) = ((MR_Box) (Body_81));
                      MR_hl_field(0, Var_86, 1) = ((MR_Box) (MaybeUserEqComp_84));
                      MR_hl_field(0, Var_86, 2) = ((MR_Box) (Assertions_83));
                    }
                    {
                      MaybeJava_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, MaybeJava_59, 0) = ((MR_Box) (Var_86));
                    }
                  }
                }
                break;
            }
            {
              ForeignTypeBody_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ForeignTypeBody_20, 0) = ((MR_Box) (MaybeC_57));
              MR_hl_field(0, ForeignTypeBody_20, 1) = ((MR_Box) (MaybeJava_59));
              MR_hl_field(0, ForeignTypeBody_20, 2) = ((MR_Box) (MaybeCSharp_58));
            }
            {
              MaybeForeign_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeForeign_21, 0) = ((MR_Box) (ForeignTypeBody_20));
            }
            MaybeUserEqComp_22 = MaybeUserEqComp0_14;
          }
          else
          {
            transform_hlds__intermod_decide__resolve_unify_compare_overloading_6_p_0(ModuleInfo_8, TypeCtor_5, MaybeUserEqComp0_14, &MaybeUserEqComp_22, STATE_VARIABLE_IntermodInfo_0_30, &STATE_VARIABLE_IntermodInfo_34_34);
            MaybeForeign_21 = MaybeForeign0_16;
          }
          {
            TypeBodyDu_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeBodyDu_23, 0) = ((MR_Box) (Ctors_12));
            MR_hl_field(0, TypeBodyDu_23, 1) = ((MR_Box) (MaybeSuperType_13));
            MR_hl_field(0, TypeBodyDu_23, 2) = ((MR_Box) (MaybeUserEqComp_22));
            MR_hl_field(0, TypeBodyDu_23, 3) = ((MR_Box) (MaybeRepn_15));
            MR_hl_field(0, TypeBodyDu_23, 4) = ((MR_Box) (MaybeForeign_21));
          }
          TypeBody_24 = (MR_Word) ((MR_Word) (TypeBodyDu_23));
          hlds__hlds_data__set_type_defn_body_3_p_0(TypeBody_24, TypeDefn0_6, &TypeDefn_25);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_IntermodInfo_36_36;
          MR_Word ForeignTypeBody0_41 = (MR_Word) (MR_body((MR_Word) (TypeBody0_10), (MR_Integer) 1));
          MR_Word ForeignTypeBody_42;
          MR_Word TypeBody_43;

          transform_hlds__intermod_info__intermod_info_set_need_foreign_import_modules_2_p_0(STATE_VARIABLE_IntermodInfo_0_30, &STATE_VARIABLE_IntermodInfo_36_36);
          transform_hlds__intermod_decide__resolve_foreign_type_body_overloading_6_p_0(ModuleInfo_8, TypeCtor_5, ForeignTypeBody0_41, &ForeignTypeBody_42, STATE_VARIABLE_IntermodInfo_36_36, &STATE_VARIABLE_IntermodInfo_34_34);
          TypeBody_43 = (MR_Word) (MR_mkword(1, (MR_Word) (ForeignTypeBody_42)));
          hlds__hlds_data__set_type_defn_body_3_p_0(TypeBody_43, TypeDefn0_6, &TypeDefn_25);
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          TypeDefn_25 = TypeDefn0_6;
          STATE_VARIABLE_IntermodInfo_34_34 = STATE_VARIABLE_IntermodInfo_0_30;
        }
        break;
    }
    transform_hlds__intermod_info__intermod_info_get_types_2_p_0(STATE_VARIABLE_IntermodInfo_34_34, &Types0_29);
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (TypeCtor_5));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) (TypeDefn_25));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_40));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) (Types0_29));
    }
    transform_hlds__intermod_info__intermod_info_set_types_3_p_0(Var_38, STATE_VARIABLE_IntermodInfo_34_34, STATE_VARIABLE_IntermodInfo_31);
  }
  else
    *STATE_VARIABLE_IntermodInfo_31 = STATE_VARIABLE_IntermodInfo_0_30;
}

static void MR_CALL 
transform_hlds__intermod_decide__resolve_foreign_type_body_overloading_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word ForeignTypeBody0_9,
  MR_Word * ForeignTypeBody_10,
  MR_Word STATE_VARIABLE_IntermodInfo_0_20,
  MR_Word * STATE_VARIABLE_IntermodInfo_21)
{
  MR_Word MaybeC0_12 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBody0_9, (MR_Integer) 0))));
  MR_Word MaybeJava0_13 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBody0_9, (MR_Integer) 1))));
  MR_Word MaybeCSharp0_14 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBody0_9, (MR_Integer) 2))));
  MR_Word Globals_15;
  MR_Word Target_16;
  MR_Word MaybeC_17;
  MR_Word MaybeCSharp_18;
  MR_Word MaybeJava_19;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_15);
  libs__globals__get_target_2_p_0(Globals_15, &Target_16);
  switch (Target_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        if ((MaybeC0_12 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeC_17 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_IntermodInfo_21 = STATE_VARIABLE_IntermodInfo_0_20;
        }
        else
        {
          MR_Word Body_31;
          MR_Word MaybeUserEqComp0_32;
          MR_Word Assertions_33;
          MR_Word MaybeUserEqComp_34;
          MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, MaybeC0_12, (MR_Integer) 0))));
          MR_Word Var_36;

          Body_31 = ((MR_Word) ((MR_hl_field(0, Var_35, (MR_Integer) 0))));
          MaybeUserEqComp0_32 = ((MR_Word) ((MR_hl_field(0, Var_35, (MR_Integer) 1))));
          Assertions_33 = ((MR_Word) ((MR_hl_field(0, Var_35, (MR_Integer) 2))));
          transform_hlds__intermod_decide__resolve_unify_compare_overloading_6_p_0(ModuleInfo_7, TypeCtor_8, MaybeUserEqComp0_32, &MaybeUserEqComp_34, STATE_VARIABLE_IntermodInfo_0_20, STATE_VARIABLE_IntermodInfo_21);
          {
            Var_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_36, 0) = ((MR_Box) (Body_31));
            MR_hl_field(0, Var_36, 1) = ((MR_Box) (MaybeUserEqComp_34));
            MR_hl_field(0, Var_36, 2) = ((MR_Box) (Assertions_33));
          }
          {
            MaybeC_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeC_17, 0) = ((MR_Box) (Var_36));
          }
        }
        MaybeCSharp_18 = MaybeCSharp0_14;
        MaybeJava_19 = MaybeJava0_13;
      }
      break;
    case (MR_Integer) 1:
      {
        MaybeC_17 = MaybeC0_12;
        if ((MaybeCSharp0_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeCSharp_18 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_IntermodInfo_21 = STATE_VARIABLE_IntermodInfo_0_20;
        }
        else
        {
          MR_Word Body_37;
          MR_Word MaybeUserEqComp0_38;
          MR_Word Assertions_39;
          MR_Word MaybeUserEqComp_40;
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(1, MaybeCSharp0_14, (MR_Integer) 0))));
          MR_Word Var_42;

          Body_37 = ((MR_Word) ((MR_hl_field(0, Var_41, (MR_Integer) 0))));
          MaybeUserEqComp0_38 = ((MR_Word) ((MR_hl_field(0, Var_41, (MR_Integer) 1))));
          Assertions_39 = ((MR_Word) ((MR_hl_field(0, Var_41, (MR_Integer) 2))));
          transform_hlds__intermod_decide__resolve_unify_compare_overloading_6_p_0(ModuleInfo_7, TypeCtor_8, MaybeUserEqComp0_38, &MaybeUserEqComp_40, STATE_VARIABLE_IntermodInfo_0_20, STATE_VARIABLE_IntermodInfo_21);
          {
            Var_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_42, 0) = ((MR_Box) (Body_37));
            MR_hl_field(0, Var_42, 1) = ((MR_Box) (MaybeUserEqComp_40));
            MR_hl_field(0, Var_42, 2) = ((MR_Box) (Assertions_39));
          }
          {
            MaybeCSharp_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeCSharp_18, 0) = ((MR_Box) (Var_42));
          }
        }
        MaybeJava_19 = MaybeJava0_13;
      }
      break;
    case (MR_Integer) 2:
      {
        MaybeC_17 = MaybeC0_12;
        MaybeCSharp_18 = MaybeCSharp0_14;
        if ((MaybeJava0_13 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeJava_19 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_IntermodInfo_21 = STATE_VARIABLE_IntermodInfo_0_20;
        }
        else
        {
          MR_Word Body_43;
          MR_Word MaybeUserEqComp0_44;
          MR_Word Assertions_45;
          MR_Word MaybeUserEqComp_46;
          MR_Word Var_47 = ((MR_Word) ((MR_hl_field(1, MaybeJava0_13, (MR_Integer) 0))));
          MR_Word Var_48;

          Body_43 = ((MR_Word) ((MR_hl_field(0, Var_47, (MR_Integer) 0))));
          MaybeUserEqComp0_44 = ((MR_Word) ((MR_hl_field(0, Var_47, (MR_Integer) 1))));
          Assertions_45 = ((MR_Word) ((MR_hl_field(0, Var_47, (MR_Integer) 2))));
          transform_hlds__intermod_decide__resolve_unify_compare_overloading_6_p_0(ModuleInfo_7, TypeCtor_8, MaybeUserEqComp0_44, &MaybeUserEqComp_46, STATE_VARIABLE_IntermodInfo_0_20, STATE_VARIABLE_IntermodInfo_21);
          {
            Var_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_48, 0) = ((MR_Box) (Body_43));
            MR_hl_field(0, Var_48, 1) = ((MR_Box) (MaybeUserEqComp_46));
            MR_hl_field(0, Var_48, 2) = ((MR_Box) (Assertions_45));
          }
          {
            MaybeJava_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeJava_19, 0) = ((MR_Box) (Var_48));
          }
        }
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *ForeignTypeBody_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MaybeC_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeJava_19));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeCSharp_18));
  }
}

static void MR_CALL 
transform_hlds__intermod_decide__resolve_unify_compare_overloading_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word MaybeCanonical0_9,
  MR_Word * MaybeCanonical_10,
  MR_Word STATE_VARIABLE_IntermodInfo_0_19,
  MR_Word * STATE_VARIABLE_IntermodInfo_20)
{
  if ((MaybeCanonical0_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeCanonical_10 = MaybeCanonical0_9;
    *STATE_VARIABLE_IntermodInfo_20 = STATE_VARIABLE_IntermodInfo_0_19;
  }
  else
  {
    MR_Word NonCanonical0_12 = ((MR_Word) ((MR_hl_field(1, MaybeCanonical0_9, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) NonCanonical0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *MaybeCanonical_10 = MaybeCanonical0_9;
          *STATE_VARIABLE_IntermodInfo_20 = STATE_VARIABLE_IntermodInfo_0_19;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Uni0_14 = ((MR_Word) ((MR_hl_field(1, NonCanonical0_12, (MR_Integer) 0))));
          MR_Word Cmp0_15 = ((MR_Word) ((MR_hl_field(1, NonCanonical0_12, (MR_Integer) 1))));
          MR_Word Uni_16;
          MR_Word Cmp_17;
          MR_Word NonCanonical_18;
          MR_Word STATE_VARIABLE_IntermodInfo_22_22;
          MR_Word SpecialPredMaps_49;
          MR_Word SpecialPredId_50;
          MR_Word SpecialPredInfo_51;
          MR_Word TVarSet_52;
          MR_Word ExistQVars_53;
          MR_Word ArgTypes_54;
          MR_Word ExternalTypeParams_55;
          MR_Word Markers0_56;
          MR_Word Markers_57;
          MR_Word Context_58;
          MR_Word UserEqPredId_59;
          MR_Word SpecialPredMaps_63;
          MR_Word SpecialPredId_64;
          MR_Word SpecialPredInfo_65;
          MR_Word TVarSet_66;
          MR_Word ExistQVars_67;
          MR_Word ArgTypes_68;
          MR_Word ExternalTypeParams_69;
          MR_Word Markers0_70;
          MR_Word Markers_71;
          MR_Word Context_72;
          MR_Word UserEqPredId_73;
          MR_Word _ResolveSpecs_60;
          MR_Word Var_61;
          MR_Word _ResolveSpecs_74;
          MR_Word Var_75;

          hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(ModuleInfo_7, &SpecialPredMaps_49);
          hlds__special_pred__lookup_special_pred_maps_4_p_0(SpecialPredMaps_49, (MR_Integer) 0, TypeCtor_8, &SpecialPredId_50);
          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, SpecialPredId_50, &SpecialPredInfo_51);
          hlds__hlds_pred__pred_info_get_arg_types_4_p_0(SpecialPredInfo_51, &TVarSet_52, &ExistQVars_53, &ArgTypes_54);
          hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(SpecialPredInfo_51, &ExternalTypeParams_55);
          hlds__hlds_pred__init_markers_1_p_0(&Markers0_56);
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 22, Markers0_56, &Markers_57);
          hlds__hlds_pred__pred_info_get_context_2_p_0(SpecialPredInfo_51, &Context_58);
          hlds__pred_table__resolve_pred_overloading_11_p_0(ModuleInfo_7, Markers_57, TVarSet_52, ExistQVars_53, ArgTypes_54, ExternalTypeParams_55, Context_58, Uni0_14, &Uni_16, &UserEqPredId_59, &_ResolveSpecs_60);
          transform_hlds__intermod_decide__intermod_add_pred_4_p_0(UserEqPredId_59, &Var_61, STATE_VARIABLE_IntermodInfo_0_19, &STATE_VARIABLE_IntermodInfo_22_22);
          hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(ModuleInfo_7, &SpecialPredMaps_63);
          hlds__special_pred__lookup_special_pred_maps_4_p_0(SpecialPredMaps_63, (MR_Integer) 2, TypeCtor_8, &SpecialPredId_64);
          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, SpecialPredId_64, &SpecialPredInfo_65);
          hlds__hlds_pred__pred_info_get_arg_types_4_p_0(SpecialPredInfo_65, &TVarSet_66, &ExistQVars_67, &ArgTypes_68);
          hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(SpecialPredInfo_65, &ExternalTypeParams_69);
          hlds__hlds_pred__init_markers_1_p_0(&Markers0_70);
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 22, Markers0_70, &Markers_71);
          hlds__hlds_pred__pred_info_get_context_2_p_0(SpecialPredInfo_65, &Context_72);
          hlds__pred_table__resolve_pred_overloading_11_p_0(ModuleInfo_7, Markers_71, TVarSet_66, ExistQVars_67, ArgTypes_68, ExternalTypeParams_69, Context_72, Cmp0_15, &Cmp_17, &UserEqPredId_73, &_ResolveSpecs_74);
          transform_hlds__intermod_decide__intermod_add_pred_4_p_0(UserEqPredId_73, &Var_75, STATE_VARIABLE_IntermodInfo_22_22, STATE_VARIABLE_IntermodInfo_20);
          {
            NonCanonical_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NonCanonical_18, 0) = ((MR_Box) (Uni_16));
            MR_hl_field(1, NonCanonical_18, 1) = ((MR_Box) (Cmp_17));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeCanonical_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (NonCanonical_18));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uni0_29 = ((MR_Word) ((MR_hl_field(2, NonCanonical0_12, (MR_Integer) 0))));
          MR_Word Uni_30;
          MR_Word NonCanonical_31;
          MR_Word SpecialPredMaps_77;
          MR_Word SpecialPredId_78;
          MR_Word SpecialPredInfo_79;
          MR_Word TVarSet_80;
          MR_Word ExistQVars_81;
          MR_Word ArgTypes_82;
          MR_Word ExternalTypeParams_83;
          MR_Word Markers0_84;
          MR_Word Markers_85;
          MR_Word Context_86;
          MR_Word UserEqPredId_87;
          MR_Word _ResolveSpecs_88;
          MR_Word Var_89;

          hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(ModuleInfo_7, &SpecialPredMaps_77);
          hlds__special_pred__lookup_special_pred_maps_4_p_0(SpecialPredMaps_77, (MR_Integer) 0, TypeCtor_8, &SpecialPredId_78);
          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, SpecialPredId_78, &SpecialPredInfo_79);
          hlds__hlds_pred__pred_info_get_arg_types_4_p_0(SpecialPredInfo_79, &TVarSet_80, &ExistQVars_81, &ArgTypes_82);
          hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(SpecialPredInfo_79, &ExternalTypeParams_83);
          hlds__hlds_pred__init_markers_1_p_0(&Markers0_84);
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 22, Markers0_84, &Markers_85);
          hlds__hlds_pred__pred_info_get_context_2_p_0(SpecialPredInfo_79, &Context_86);
          hlds__pred_table__resolve_pred_overloading_11_p_0(ModuleInfo_7, Markers_85, TVarSet_80, ExistQVars_81, ArgTypes_82, ExternalTypeParams_83, Context_86, Uni0_29, &Uni_30, &UserEqPredId_87, &_ResolveSpecs_88);
          transform_hlds__intermod_decide__intermod_add_pred_4_p_0(UserEqPredId_87, &Var_89, STATE_VARIABLE_IntermodInfo_0_19, STATE_VARIABLE_IntermodInfo_20);
          {
            NonCanonical_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, NonCanonical_31, 0) = ((MR_Box) (Uni_30));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeCanonical_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (NonCanonical_31));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, NonCanonical0_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Cmp0_32 = ((MR_Word) ((MR_hl_field(3, NonCanonical0_12, (MR_Integer) 1))));
              MR_Word Cmp_33;
              MR_Word NonCanonical_34;
              MR_Word SpecialPredMaps_35;
              MR_Word SpecialPredId_36;
              MR_Word SpecialPredInfo_37;
              MR_Word TVarSet_38;
              MR_Word ExistQVars_39;
              MR_Word ArgTypes_40;
              MR_Word ExternalTypeParams_41;
              MR_Word Markers0_42;
              MR_Word Markers_43;
              MR_Word Context_44;
              MR_Word UserEqPredId_45;
              MR_Word _ResolveSpecs_46;
              MR_Word Var_47;

              hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(ModuleInfo_7, &SpecialPredMaps_35);
              hlds__special_pred__lookup_special_pred_maps_4_p_0(SpecialPredMaps_35, (MR_Integer) 2, TypeCtor_8, &SpecialPredId_36);
              hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, SpecialPredId_36, &SpecialPredInfo_37);
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(SpecialPredInfo_37, &TVarSet_38, &ExistQVars_39, &ArgTypes_40);
              hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(SpecialPredInfo_37, &ExternalTypeParams_41);
              hlds__hlds_pred__init_markers_1_p_0(&Markers0_42);
              hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 22, Markers0_42, &Markers_43);
              hlds__hlds_pred__pred_info_get_context_2_p_0(SpecialPredInfo_37, &Context_44);
              hlds__pred_table__resolve_pred_overloading_11_p_0(ModuleInfo_7, Markers_43, TVarSet_38, ExistQVars_39, ArgTypes_40, ExternalTypeParams_41, Context_44, Cmp0_32, &Cmp_33, &UserEqPredId_45, &_ResolveSpecs_46);
              transform_hlds__intermod_decide__intermod_add_pred_4_p_0(UserEqPredId_45, &Var_47, STATE_VARIABLE_IntermodInfo_0_19, STATE_VARIABLE_IntermodInfo_20);
              {
                NonCanonical_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, NonCanonical_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, NonCanonical_34, 1) = ((MR_Box) (Cmp_33));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeCanonical_10 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (NonCanonical_34));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *MaybeCanonical_10 = MaybeCanonical0_9;
              *STATE_VARIABLE_IntermodInfo_20 = STATE_VARIABLE_IntermodInfo_0_19;
            }
            break;
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod_decide__intermod_qualify_instance_method_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_LambdaHeadVar__2_59;

  conv3_LambdaHeadVar__2_59 = transform_hlds__intermod_decide__IntroducedFrom__func__find_func_matching_instance_method__982__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_59));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
transform_hlds__intermod_decide__intermod_qualify_instance_method_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_55;

  conv2_LambdaHeadVar__2_55 = transform_hlds__intermod_decide__IntroducedFrom__func__find_func_matching_instance_method__969__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_55));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__intermod_decide__intermod_qualify_instance_method_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word MethodNameToPredIdMap_8,
  MR_Word InstanceMethod0_9,
  MR_Word * InstanceMethod_10,
  MR_Word PredIds0_11,
  MR_Word * PredIds_12)
{
  MR_bool succeeded;
  MR_Word MethodName_13 = ((MR_Word) ((MR_hl_field(0, InstanceMethod0_9, (MR_Integer) 0))));
  MR_Word InstanceMethodDefn0_14 = ((MR_Word) ((MR_hl_field(0, InstanceMethod0_9, (MR_Integer) 1))));
  MR_Word MethodContext_15 = ((MR_Word) ((MR_hl_field(0, InstanceMethod0_9, (MR_Integer) 2))));
  MR_Word PredOrFunc_16 = ((MR_Unsigned) ((MR_hl_field(0, MethodName_13, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word MethodUserArity_18 = ((MR_Word) ((MR_hl_field(0, MethodName_13, (MR_Integer) 2))));
  MR_Word MethodPredId_19;
  MR_Word MethodPredInfo_20;
  MR_Word MethodTVarSet_21;
  MR_Word MethodExistQTVars_22;
  MR_Word MethodArgTypes_23;
  MR_Word MethodExternalTypeParams_24;
  MR_Word InstanceMethodDefn_29;
  MR_Box conv0_MethodPredId_19;

  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), MethodNameToPredIdMap_8, ((MR_Box) (MethodName_13)), &conv0_MethodPredId_19);
  MethodPredId_19 = ((MR_Word) (conv0_MethodPredId_19));
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, MethodPredId_19, &MethodPredInfo_20);
  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(MethodPredInfo_20, &MethodTVarSet_21, &MethodExistQTVars_22, &MethodArgTypes_23);
  hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(MethodPredInfo_20, &MethodExternalTypeParams_24);
  if (((MR_tag((MR_Word) InstanceMethodDefn0_14)) == (MR_Integer) 1))
  {
    MR_Word PredId_37;

    PredId_37 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *PredIds_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (PredId_37));
      MR_hl_field(1, base, 1) = ((MR_Box) (PredIds0_11));
    }
    InstanceMethodDefn_29 = InstanceMethodDefn0_14;
  }
  else
  {
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, InstanceMethodDefn0_14, (MR_Integer) 0))));

    switch (PredOrFunc_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word MaybePredId_26;
          MR_Word InstanceMethodName_27;
          MR_Word CtorFieldTable_41;
          MR_Integer MethodUserArityInt_42;
          MR_Word TypeCtors0_46;
          MR_Word Ctors_47;
          MR_Word TypeCtors1_50;
          MR_Word TypeCtors_51;
          MR_Word PredicateTable_52;
          MR_Word PredIds_53;
          MR_Word FieldDefns_45;
          MR_Word TypeCtorInfo_76_73;
          MR_Word TypeInfo_77_74;
          MR_Word FieldName_44;
          MR_Integer Var_80;
          MR_Word Var_43;
          MR_Box conv1_FieldDefns_45;
          MR_Word MatchingConstructors_49;
          MR_Word ConsId_48;
          MR_Word Var_66;
          MR_Word PredId_56;
          MR_Word InstanceMethodFuncName_57;
          MR_Word Var_69;
          MR_Word _ResolveSpecs_58;

          hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(ModuleInfo_7, &CtorFieldTable_41);
          MethodUserArityInt_42 = (MR_Integer) (MethodUserArity_18);
          succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(ModuleInfo_7, Var_40, &Var_80, &Var_43, &FieldName_44);
          if (succeeded)
          {
            succeeded = (MethodUserArityInt_42 == Var_80);
            if (succeeded)
            {
              TypeCtorInfo_76_73 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
              TypeInfo_77_74 = (MR_Word) (&transform_hlds__intermod_decide_scalar_common_1[2]);
              succeeded = mercury__map__search_3_p_0(TypeCtorInfo_76_73, TypeInfo_77_74, CtorFieldTable_41, ((MR_Box) (FieldName_44)), &conv1_FieldDefns_45);
              if (succeeded)
              {
                FieldDefns_45 = ((MR_Word) (conv1_FieldDefns_45));
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            TypeCtors0_46 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__intermod_decide_scalar_common_2[5]), FieldDefns_45);
          else
            TypeCtors0_46 = (MR_Word) ((MR_Unsigned) 0U);
          hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_7, &Ctors_47);
          Var_66 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
          {
            ConsId_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ConsId_48, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, ConsId_48, 1) = ((MR_Box) (Var_40));
            MR_hl_field(3, ConsId_48, 2) = ((MR_Box) (MethodUserArityInt_42));
            MR_hl_field(3, ConsId_48, 3) = ((MR_Box) (Var_66));
          }
          succeeded = hlds__hlds_cons__search_cons_table_3_p_0(Ctors_47, ConsId_48, &MatchingConstructors_49);
          if (succeeded)
            TypeCtors1_50 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__intermod_decide_scalar_common_2[6]), MatchingConstructors_49);
          else
            TypeCtors1_50 = (MR_Word) ((MR_Unsigned) 0U);
          TypeCtors_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), TypeCtors0_46, TypeCtors1_50);
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_7, &PredicateTable_52);
          hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(PredicateTable_52, (MR_Integer) 1, Var_40, MethodUserArity_18, &PredIds_53);
          succeeded = (PredIds_53 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_69 = (MR_Word) ((MR_Unsigned) 0U);
            succeeded = hlds__pred_table__find_matching_pred_id_11_p_0(ModuleInfo_7, PredIds_53, MethodTVarSet_21, MethodExistQTVars_22, MethodArgTypes_23, MethodExternalTypeParams_24, Var_69, MethodContext_15, &PredId_56, &InstanceMethodFuncName_57, &_ResolveSpecs_58);
          }
          if (succeeded)
          {
            succeeded = (TypeCtors_51 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              InstanceMethodName_27 = InstanceMethodFuncName_57;
              {
                MaybePredId_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybePredId_26, 0) = ((MR_Box) (PredId_56));
              }
              succeeded = MR_TRUE;
            }
          }
          else
          {
            MR_Word TheTypeCtor_59;
            MR_Word TypeCtorSymName_60;
            MR_Word Var_70;

            succeeded = (TypeCtors_51 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TheTypeCtor_59 = ((MR_Word) ((MR_hl_field(1, TypeCtors_51, (MR_Integer) 0))));
              Var_70 = ((MR_Word) ((MR_hl_field(1, TypeCtors_51, (MR_Integer) 1))));
              succeeded = (Var_70 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MaybePredId_26 = (MR_Word) ((MR_Unsigned) 0U);
                TypeCtorSymName_60 = ((MR_Word) ((MR_hl_field(0, TheTypeCtor_59, (MR_Integer) 0))));
                if (((MR_tag((MR_Word) TypeCtorSymName_60)) == (MR_Integer) 1))
                {
                  MR_Word TypeModule_62 = ((MR_Word) ((MR_hl_field(1, TypeCtorSymName_60, (MR_Integer) 0))));
                  MR_String UnqualMethodName_64;

                  UnqualMethodName_64 = mdbcomp__sym_name__unqualify_name_1_f_0(Var_40);
                  {
                    InstanceMethodName_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, InstanceMethodName_27, 0) = ((MR_Box) (TypeModule_62));
                    MR_hl_field(1, InstanceMethodName_27, 1) = ((MR_Box) (UnqualMethodName_64));
                  }
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod_decide.find_func_matching_instance_method\'/10", (MR_String) "unqualified type_ctor in hlds_cons_defn or hlds_ctor_field_defn");
                    return;
                  }
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
          {
            if ((MaybePredId_26 == (MR_Word) ((MR_Unsigned) 0U)))
              *PredIds_12 = PredIds0_11;
            else
            {
              MR_Word PredId_28 = ((MR_Word) ((MR_hl_field(1, MaybePredId_26, (MR_Integer) 0))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *PredIds_12 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (PredId_28));
                MR_hl_field(1, base, 1) = ((MR_Box) (PredIds0_11));
              }
            }
            {
              InstanceMethodDefn_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, InstanceMethodDefn_29, 0) = ((MR_Box) (InstanceMethodName_27));
            }
          }
          else
          {
            MR_Word PredId_33;

            PredId_33 = hlds__hlds_pred__invalid_pred_id_0_f_0();
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *PredIds_12 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (PredId_33));
              MR_hl_field(1, base, 1) = ((MR_Box) (PredIds0_11));
            }
            InstanceMethodDefn_29 = InstanceMethodDefn0_14;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Markers_30;
          MR_Word InstanceMethodName_35;
          MR_Word PredId_36;
          MR_Word _ResolveSpecs_31;

          hlds__hlds_pred__init_markers_1_p_0(&Markers_30);
          hlds__pred_table__resolve_pred_overloading_11_p_0(ModuleInfo_7, Markers_30, MethodTVarSet_21, MethodExistQTVars_22, MethodArgTypes_23, MethodExternalTypeParams_24, MethodContext_15, Var_40, &InstanceMethodName_35, &PredId_36, &_ResolveSpecs_31);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *PredIds_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (PredId_36));
            MR_hl_field(1, base, 1) = ((MR_Box) (PredIds0_11));
          }
          {
            InstanceMethodDefn_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, InstanceMethodDefn_29, 0) = ((MR_Box) (InstanceMethodName_35));
          }
        }
        break;
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *InstanceMethod_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MethodName_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (InstanceMethodDefn_29));
    MR_hl_field(0, base, 2) = ((MR_Box) (MethodContext_15));
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_instance_in_instance_defn_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__intermod_decide__IntroducedFrom__pred__gather_opt_export_instance_in_instance_defn__830__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_instance_in_instance_defn_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_MayOptExportPred_6;
  MR_Word conv5_STATE_VARIABLE_IntermodInfo_9;

  transform_hlds__intermod_decide__intermod_add_pred_4_p_0(((MR_Word) (wrapper_arg_1)), &conv6_MayOptExportPred_6, ((MR_Word) (wrapper_arg_3)), &conv5_STATE_VARIABLE_IntermodInfo_9);
  *wrapper_arg_2 = ((MR_Box) (conv6_MayOptExportPred_6));
  *wrapper_arg_4 = ((MR_Box) (conv5_STATE_VARIABLE_IntermodInfo_9));
}

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_instance_in_instance_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_InstanceMethod_10;
  MR_Word conv2_PredIds_12;

  transform_hlds__intermod_decide__intermod_qualify_instance_method_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_InstanceMethod_10, ((MR_Word) (wrapper_arg_3)), &conv2_PredIds_12);
  *wrapper_arg_2 = ((MR_Box) (conv3_InstanceMethod_10));
  *wrapper_arg_4 = ((MR_Box) (conv2_PredIds_12));
}

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_instance_in_instance_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_47;

  transform_hlds__intermod_decide__IntroducedFrom__pred__gather_opt_export_instance_in_instance_defn__811__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_47);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_47));
}

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_instance_in_instance_defn_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefn_8,
  MR_Word STATE_VARIABLE_IntermodInfo_0_41,
  MR_Word * STATE_VARIABLE_IntermodInfo_42)
{
  MR_bool succeeded;
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 0))));
  MR_Word InstanceStatus_11 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 1))));
  MR_Word TVarSet_12 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 2))));
  MR_Word OriginalTypes_13 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 3))));
  MR_Word Types_14 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 4))));
  MR_Word InstanceConstraints_15 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 5))));
  MR_Word MaybeSubsumedContext_16 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 6))));
  MR_Word Proofs_17 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 7))));
  MR_Word InstanceBody0_18 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 8))));
  MR_Word MaybeMethodInfos_19 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 9))));
  MR_Word Context_20 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 10))));
  MR_Word DefinedThisModule_21;

  DefinedThisModule_21 = hlds__status__instance_status_defined_in_this_module_1_f_0(InstanceStatus_11);
  switch (DefinedThisModule_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_IntermodInfo_42 = STATE_VARIABLE_IntermodInfo_0_41;
      break;
    case (MR_Integer) 1:
      {
        MR_Word InstanceBody_37;
        MR_Word STATE_VARIABLE_IntermodInfo_56_56;
        MR_Word Var_57;

        if ((InstanceBody0_18 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          InstanceBody_37 = InstanceBody0_18;
          STATE_VARIABLE_IntermodInfo_56_56 = STATE_VARIABLE_IntermodInfo_0_41;
        }
        else
        {
          MR_Word Methods0_23 = ((MR_Word) ((MR_hl_field(1, InstanceBody0_18, (MR_Integer) 0))));
          MR_Word MethodInfos_24;
          MR_Word MethodNameToPredIdMap_33;
          MR_Word Methods_34;
          MR_Word PredIds_35;
          MR_Word MethodMayOptExportPreds_36;
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word STATE_VARIABLE_IntermodInfo_53_53;
          MR_Box conv1_MethodNameToPredIdMap_33;
          MR_Box conv4_PredIds_35;
          MR_Box conv7_STATE_VARIABLE_IntermodInfo_53_53;

          if ((MaybeMethodInfos_19 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod_decide.gather_opt_export_instance_in_instance_defn\'/5", (MR_String) "method infos not filled in");
              return;
            }
          else
            MethodInfos_24 = ((MR_Word) ((MR_hl_field(1, MaybeMethodInfos_19, (MR_Integer) 0))));
          Var_49 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
          mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0), (MR_Word) (&transform_hlds__intermod_decide_scalar_common_2[0]), (MR_Word) (&transform_hlds__intermod_decide_scalar_common_2[3]), MethodInfos_24, ((MR_Box) (Var_49)), &conv1_MethodNameToPredIdMap_33);
          MethodNameToPredIdMap_33 = ((MR_Word) (conv1_MethodNameToPredIdMap_33));
          {
            Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_50, 0) = ((MR_Box) (&transform_hlds__intermod_decide_scalar_common_9[0]));
            MR_hl_field(0, Var_50, 1) = ((MR_Box) (transform_hlds__intermod_decide__gather_opt_export_instance_in_instance_defn_5_p_0_2));
            MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_50, 3) = ((MR_Box) (ModuleInfo_6));
            MR_hl_field(0, Var_50, 4) = ((MR_Box) (MethodNameToPredIdMap_33));
          }
          mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&transform_hlds__intermod_decide_scalar_common_1[1]), Var_50, Methods0_23, &Methods_34, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_PredIds_35);
          PredIds_35 = ((MR_Word) (conv4_PredIds_35));
          mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__intermod_decide__transform_hlds__intermod_decide__type_ctor_info_may_opt_export_pred_0), (MR_Word) (&transform_hlds__intermod_info__transform_hlds__intermod_info__type_ctor_info_intermod_info_0), (MR_Word) (&transform_hlds__intermod_decide_scalar_common_2[4]), PredIds_35, &MethodMayOptExportPreds_36, ((MR_Box) (STATE_VARIABLE_IntermodInfo_0_41)), &conv7_STATE_VARIABLE_IntermodInfo_53_53);
          STATE_VARIABLE_IntermodInfo_53_53 = ((MR_Word) (conv7_STATE_VARIABLE_IntermodInfo_53_53));
          succeeded = mercury__list__all_true_2_p_0((MR_Word) (&transform_hlds__intermod_decide__transform_hlds__intermod_decide__type_ctor_info_may_opt_export_pred_0), (MR_Word) (&transform_hlds__intermod_decide_scalar_common_3[1]), MethodMayOptExportPreds_36);
          if (succeeded)
          {
            {
              InstanceBody_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, InstanceBody_37, 0) = ((MR_Box) (Methods_34));
            }
            STATE_VARIABLE_IntermodInfo_56_56 = STATE_VARIABLE_IntermodInfo_53_53;
          }
          else
          {
            InstanceBody_37 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_IntermodInfo_56_56 = STATE_VARIABLE_IntermodInfo_0_41;
          }
        }
        succeeded = (InstanceBody_37 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_57 = hlds__status__instance_status_is_exported_1_f_0(InstanceStatus_11);
          succeeded = (Var_57 != (MR_Integer) 0);
        }
        succeeded = !(succeeded);
        if (succeeded)
        {
          MR_Word InstanceDefnToWrite_38;
          MR_Word Instances0_39;
          MR_Word Instances_40;
          MR_Word Var_58;

          {
            InstanceDefnToWrite_38 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, InstanceDefnToWrite_38, 0) = ((MR_Box) (ModuleName_10));
            MR_hl_field(0, InstanceDefnToWrite_38, 1) = ((MR_Box) (InstanceStatus_11));
            MR_hl_field(0, InstanceDefnToWrite_38, 2) = ((MR_Box) (TVarSet_12));
            MR_hl_field(0, InstanceDefnToWrite_38, 3) = ((MR_Box) (OriginalTypes_13));
            MR_hl_field(0, InstanceDefnToWrite_38, 4) = ((MR_Box) (Types_14));
            MR_hl_field(0, InstanceDefnToWrite_38, 5) = ((MR_Box) (InstanceConstraints_15));
            MR_hl_field(0, InstanceDefnToWrite_38, 6) = ((MR_Box) (MaybeSubsumedContext_16));
            MR_hl_field(0, InstanceDefnToWrite_38, 7) = ((MR_Box) (Proofs_17));
            MR_hl_field(0, InstanceDefnToWrite_38, 8) = ((MR_Box) (InstanceBody_37));
            MR_hl_field(0, InstanceDefnToWrite_38, 9) = ((MR_Box) (MaybeMethodInfos_19));
            MR_hl_field(0, InstanceDefnToWrite_38, 10) = ((MR_Box) (Context_20));
          }
          transform_hlds__intermod_info__intermod_info_get_instances_2_p_0(STATE_VARIABLE_IntermodInfo_56_56, &Instances0_39);
          {
            Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_58, 0) = ((MR_Box) (ClassId_7));
            MR_hl_field(0, Var_58, 1) = ((MR_Box) (InstanceDefnToWrite_38));
          }
          {
            Instances_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Instances_40, 0) = ((MR_Box) (Var_58));
            MR_hl_field(1, Instances_40, 1) = ((MR_Box) (Instances0_39));
          }
          transform_hlds__intermod_info__intermod_info_set_instances_3_p_0(Instances_40, STATE_VARIABLE_IntermodInfo_56_56, STATE_VARIABLE_IntermodInfo_42);
        }
        else
          *STATE_VARIABLE_IntermodInfo_42 = STATE_VARIABLE_IntermodInfo_56_56;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_instances_in_class_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_IntermodInfo_42;

  transform_hlds__intermod_decide__gather_opt_export_instance_in_instance_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_IntermodInfo_42);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_IntermodInfo_42));
}

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_instances_in_class_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefns_8,
  MR_Word STATE_VARIABLE_IntermodInfo_0_10,
  MR_Word * STATE_VARIABLE_IntermodInfo_11)
{
  MR_Word Var_12;
  MR_Box conv1_STATE_VARIABLE_IntermodInfo_11;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&transform_hlds__intermod_decide_scalar_common_6[1]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (transform_hlds__intermod_decide__gather_opt_export_instances_in_class_5_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (ClassId_7));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&transform_hlds__intermod_info__transform_hlds__intermod_info__type_ctor_info_intermod_info_0), Var_12, InstanceDefns_8, ((MR_Box) (STATE_VARIABLE_IntermodInfo_0_10)), &conv1_STATE_VARIABLE_IntermodInfo_11);
  *STATE_VARIABLE_IntermodInfo_11 = ((MR_Word) (conv1_STATE_VARIABLE_IntermodInfo_11));
}

static MR_bool MR_CALL 
transform_hlds__intermod_decide__proc_has_a_higher_order_input_arg_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word ProcInfo_4)
{
  MR_bool succeeded;
  MR_Word HeadVars_5;
  MR_Word ArgModes_6;
  MR_Word VarTable_7;

  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_4, &HeadVars_5);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_4, &ArgModes_6);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_4, &VarTable_7);
  succeeded = transform_hlds__intermod_decide__some_input_arg_is_higher_order_4_p_0(ModuleInfo_3, VarTable_7, HeadVars_5, ArgModes_6);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__intermod_decide__some_input_arg_is_higher_order_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTable_6,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word HeadVar_7;
    MR_Word HeadVars_8;
    MR_Word ArgMode_9;
    MR_Word ArgModes_10;
    MR_Word Type_11;
    MR_Word Var_12;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      HeadVar_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      HeadVars_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgMode_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
        ArgModes_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
        succeeded = check_hlds__mode_test__mode_is_input_2_p_0(ModuleInfo_5, ArgMode_9);
        if (succeeded)
        {
          parse_tree__var_table__lookup_var_type_3_p_0(VarTable_6, HeadVar_7, &Type_11);
          Var_12 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_5, Type_11);
          succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 12U));
        }
        if (succeeded)
          succeeded = MR_TRUE;
        else
        {
          MR_Word next_value_of_HeadVar__3_3 = HeadVars_8;
          MR_Word next_value_of_HeadVar__4_4 = ArgModes_10;

          // direct tailcall eliminated
          ;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod_decide__proc_eval_method_is_normal_1_p_0(
  MR_Word ProcInfo_2)
{
  MR_bool succeeded;
  MR_Word Var_4;

  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_2, &Var_4);
  succeeded = parse_tree__prog_data_pragma____Unify____eval_method_0_0((MR_Word) ((MR_Unsigned) 0U), Var_4);
  return succeeded;
}

MR_bool MR_CALL 
transform_hlds__intermod_decide__should_opt_export_type_defn_3_p_0(
  MR_Word ModuleName_4,
  MR_Word TypeCtor_5,
  MR_Word TypeDefn_6)
{
  MR_bool succeeded;
  MR_Word TypeStatus_7;
  MR_Word Name_8;
  MR_Word Var_11;
  MR_Word Var_12;

  hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_6, &TypeStatus_7);
  Name_8 = ((MR_Word) ((MR_hl_field(0, TypeCtor_5, (MR_Integer) 0))));
  succeeded = ((MR_tag((MR_Word) Name_8)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_12 = ((MR_Word) ((MR_hl_field(1, Name_8, (MR_Integer) 0))));
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_4, Var_12);
    if (succeeded)
    {
      Var_11 = transform_hlds__intermod_status__type_status_to_write_1_f_0(TypeStatus_7);
      succeeded = (Var_11 == (MR_Integer) 1);
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__intermod_decide__decide_what_to_opt_export_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * STATE_VARIABLE_IntermodInfo_15)
{
  MR_Word Globals_5;
  MR_Word OptTuple_6;
  MR_Integer InlineSimpleThreshold_7;
  MR_Integer HigherOrderSizeLimit_8;
  MR_Word Deforest_9;
  MR_Word RealPredIds_10;
  MR_Word AssertionTable_11;
  MR_Word AssertPredIds_12;
  MR_Word PredIds_13;
  MR_Word Params_14;
  MR_Word STATE_VARIABLE_IntermodInfo_18_18;
  MR_Word STATE_VARIABLE_IntermodInfo_19_19;
  MR_Word STATE_VARIABLE_IntermodInfo_20_20;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_3, &Globals_5);
  libs__globals__get_opt_tuple_2_p_0(Globals_5, &OptTuple_6);
  Deforest_9 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_6, (MR_Integer) 1))) >> 26)) & (MR_Integer) 1);
  InlineSimpleThreshold_7 = ((MR_Integer) ((MR_hl_field(0, OptTuple_6, (MR_Integer) 7))));
  HigherOrderSizeLimit_8 = ((MR_Integer) ((MR_hl_field(0, OptTuple_6, (MR_Integer) 17))));
  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_3, &RealPredIds_10);
  hlds__hlds_module__module_info_get_assertion_table_2_p_0(ModuleInfo_3, &AssertionTable_11);
  hlds__hlds_promise__assertion_table_pred_ids_2_p_0(AssertionTable_11, &AssertPredIds_12);
  PredIds_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), AssertPredIds_12, RealPredIds_10);
  {
    Params_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_14, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (Deforest_9)))));
    MR_hl_field(0, Params_14, 1) = ((MR_Box) (InlineSimpleThreshold_7));
    MR_hl_field(0, Params_14, 2) = ((MR_Box) (HigherOrderSizeLimit_8));
  }
  transform_hlds__intermod_info__init_intermod_info_2_p_0(ModuleInfo_3, &STATE_VARIABLE_IntermodInfo_18_18);
  transform_hlds__intermod_decide__gather_opt_export_preds_4_p_0(Params_14, PredIds_13, STATE_VARIABLE_IntermodInfo_18_18, &STATE_VARIABLE_IntermodInfo_19_19);
  transform_hlds__intermod_decide__gather_opt_export_instances_2_p_0(STATE_VARIABLE_IntermodInfo_19_19, &STATE_VARIABLE_IntermodInfo_20_20);
  transform_hlds__intermod_decide__gather_opt_export_types_2_p_0(STATE_VARIABLE_IntermodInfo_20_20, STATE_VARIABLE_IntermodInfo_15);
}

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_types_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_IntermodInfo_31;

  transform_hlds__intermod_decide__gather_opt_export_types_in_type_defn_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_IntermodInfo_31);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_IntermodInfo_31));
}

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_types_2_p_0(
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7)
{
  MR_Word ModuleInfo_4;
  MR_Word TypeTable_5;
  MR_Box conv1_STATE_VARIABLE_IntermodInfo_7;

  transform_hlds__intermod_info__intermod_info_get_module_info_2_p_0(STATE_VARIABLE_IntermodInfo_0_6, &ModuleInfo_4);
  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_5);
  hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) (&transform_hlds__intermod_info__transform_hlds__intermod_info__type_ctor_info_intermod_info_0), (MR_Word) (&transform_hlds__intermod_decide_scalar_common_2[2]), TypeTable_5, ((MR_Box) (STATE_VARIABLE_IntermodInfo_0_6)), &conv1_STATE_VARIABLE_IntermodInfo_7);
  *STATE_VARIABLE_IntermodInfo_7 = ((MR_Word) (conv1_STATE_VARIABLE_IntermodInfo_7));
}

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_instances_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_IntermodInfo_11;

  transform_hlds__intermod_decide__gather_opt_export_instances_in_class_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_IntermodInfo_11);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_IntermodInfo_11));
}

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_instances_2_p_0(
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7)
{
  MR_Word ModuleInfo_4;
  MR_Word Instances_5;
  MR_Word Var_8;
  MR_Box conv1_STATE_VARIABLE_IntermodInfo_7;

  transform_hlds__intermod_info__intermod_info_get_module_info_2_p_0(STATE_VARIABLE_IntermodInfo_0_6, &ModuleInfo_4);
  hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_4, &Instances_5);
  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&transform_hlds__intermod_decide_scalar_common_6[0]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (transform_hlds__intermod_decide__gather_opt_export_instances_2_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (ModuleInfo_4));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&transform_hlds__intermod_decide_scalar_common_1[0]), (MR_Word) (&transform_hlds__intermod_info__transform_hlds__intermod_info__type_ctor_info_intermod_info_0), Var_8, Instances_5, ((MR_Box) (STATE_VARIABLE_IntermodInfo_0_6)), &conv1_STATE_VARIABLE_IntermodInfo_7);
  *STATE_VARIABLE_IntermodInfo_7 = ((MR_Word) (conv1_STATE_VARIABLE_IntermodInfo_7));
}

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_preds_4_p_0(
  MR_Word Params0_5,
  MR_Word AllPredIds_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_10,
  MR_Word * STATE_VARIABLE_IntermodInfo_11)
{
  MR_Word Params_8;
  MR_Word ExtraExportedPreds0_9;
  MR_Word STATE_VARIABLE_IntermodInfo_12_12;
  MR_Integer Var_17;
  MR_Integer Var_18;
  MR_Unsigned packed_word_0;

  transform_hlds__intermod_decide__gather_opt_export_preds_in_list_4_p_0(Params0_5, AllPredIds_6, STATE_VARIABLE_IntermodInfo_0_10, &STATE_VARIABLE_IntermodInfo_12_12);
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Params0_5, (MR_Integer) 0)));
  Var_17 = ((MR_Integer) ((MR_hl_field(0, Params0_5, (MR_Integer) 1))));
  Var_18 = ((MR_Integer) ((MR_hl_field(0, Params0_5, (MR_Integer) 2))));
  {
    Params_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_8, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 2))));
    MR_hl_field(0, Params_8, 1) = ((MR_Box) (Var_17));
    MR_hl_field(0, Params_8, 2) = ((MR_Box) (Var_18));
  }
  mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &ExtraExportedPreds0_9);
  transform_hlds__intermod_decide__gather_opt_export_preds_fixpoint_4_p_0(Params_8, ExtraExportedPreds0_9, STATE_VARIABLE_IntermodInfo_12_12, STATE_VARIABLE_IntermodInfo_11);
}

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_preds_fixpoint_4_p_0(
  MR_Word Params_5,
  MR_Word ExtraExportedPreds0_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_12,
  MR_Word * STATE_VARIABLE_IntermodInfo_13)
{
  while (MR_TRUE)
  {
    MR_Word ExtraExportedPreds_8;
    MR_Word NewlyExportedPreds_9;
    MR_Word Var_14;

    // setup for model_det tailcalls optimized into a loop
    ;
    transform_hlds__intermod_info__intermod_info_get_pred_decls_2_p_0(STATE_VARIABLE_IntermodInfo_0_12, &ExtraExportedPreds_8);
    Var_14 = mercury__set__difference_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ExtraExportedPreds_8, ExtraExportedPreds0_6);
    NewlyExportedPreds_9 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_14);
    if ((NewlyExportedPreds_9 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_IntermodInfo_13 = STATE_VARIABLE_IntermodInfo_0_12;
    else
    {
      MR_Word STATE_VARIABLE_IntermodInfo_15_15;
      MR_Word next_value_of_ExtraExportedPreds0_6;
      MR_Word next_value_of_STATE_VARIABLE_IntermodInfo_0_12;

      transform_hlds__intermod_decide__gather_opt_export_preds_in_list_4_p_0(Params_5, NewlyExportedPreds_9, STATE_VARIABLE_IntermodInfo_0_12, &STATE_VARIABLE_IntermodInfo_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_ExtraExportedPreds0_6 = ExtraExportedPreds_8;
      next_value_of_STATE_VARIABLE_IntermodInfo_0_12 = STATE_VARIABLE_IntermodInfo_15_15;
      ExtraExportedPreds0_6 = next_value_of_ExtraExportedPreds0_6;
      STATE_VARIABLE_IntermodInfo_0_12 = next_value_of_STATE_VARIABLE_IntermodInfo_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod_decide__gather_opt_export_preds_in_list_4_p_0(
  MR_Word Params_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_IntermodInfo_0_3,
  MR_Word * STATE_VARIABLE_IntermodInfo_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_IntermodInfo_4 = STATE_VARIABLE_IntermodInfo_0_3;
    else
    {
      MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PredIds_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ModuleInfo_13;
      MR_Word PredInfo_14;
      MR_Word TypeSpecInfo_15;
      MR_Word TypeSpecForcePreds_17;
      MR_Word ClausesInfo_20;
      MR_Word STATE_VARIABLE_IntermodInfo_35_35;
      MR_Word ExplicitVarTypes_21;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_IntermodInfo_0_3;

      transform_hlds__intermod_info__intermod_info_get_module_info_2_p_0(STATE_VARIABLE_IntermodInfo_0_3, &ModuleInfo_13);
      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_13, PredId_10, &PredInfo_14);
      hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_13, &TypeSpecInfo_15);
      TypeSpecForcePreds_17 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo_15, (MR_Integer) 1))));
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_14, &ClausesInfo_20);
      hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_p_0(ClausesInfo_20, &ExplicitVarTypes_21);
      succeeded = parse_tree__vartypes__vartypes_is_empty_1_p_0(ExplicitVarTypes_21);
      if (succeeded)
        succeeded = transform_hlds__intermod_decide__should_opt_export_pred_5_p_0(ModuleInfo_13, PredId_10, PredInfo_14, Params_1, TypeSpecForcePreds_17);
      if (succeeded)
      {
        MR_Word MayOptExportPred0_23;
        MR_Word ClausesRep_24;
        MR_Word STATE_VARIABLE_IntermodInfo_32_32;
        MR_Word _ItemNumbers_25;

        transform_hlds__intermod_decide__intermod_add_pred_4_p_0(PredId_10, &MayOptExportPred0_23, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_32_32);
        hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_20, &ClausesRep_24, &_ItemNumbers_25);
        switch (MayOptExportPred0_23) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_IntermodInfo_35_35 = STATE_VARIABLE_IntermodInfo_0_3;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Clauses_26;
              MR_Word MayOptExportPred_37;
              MR_Word STATE_VARIABLE_IntermodInfo_33_38;

              hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep_24, &Clauses_26);
              transform_hlds__intermod_decide__gather_entities_to_opt_export_in_clauses_4_p_0(Clauses_26, &MayOptExportPred_37, STATE_VARIABLE_IntermodInfo_32_32, &STATE_VARIABLE_IntermodInfo_33_38);
              switch (MayOptExportPred_37) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_IntermodInfo_35_35 = STATE_VARIABLE_IntermodInfo_0_3;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word PredDefns0_28;
                    MR_Word PredDefns_29;
                    MR_Word STATE_VARIABLE_IntermodInfo_34_34;

                    succeeded = hlds__hlds_pred__pred_info_defn_has_foreign_proc_1_p_0(PredInfo_14);
                    if (succeeded)
                      transform_hlds__intermod_info__intermod_info_set_need_foreign_import_modules_2_p_0(STATE_VARIABLE_IntermodInfo_33_38, &STATE_VARIABLE_IntermodInfo_34_34);
                    else
                      STATE_VARIABLE_IntermodInfo_34_34 = STATE_VARIABLE_IntermodInfo_33_38;
                    transform_hlds__intermod_info__intermod_info_get_pred_defns_2_p_0(STATE_VARIABLE_IntermodInfo_34_34, &PredDefns0_28);
                    mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_10)), PredDefns0_28, &PredDefns_29);
                    transform_hlds__intermod_info__intermod_info_set_pred_defns_3_p_0(PredDefns_29, STATE_VARIABLE_IntermodInfo_34_34, &STATE_VARIABLE_IntermodInfo_35_35);
                  }
                  break;
              }
            }
            break;
        }
      }
      else
        STATE_VARIABLE_IntermodInfo_35_35 = STATE_VARIABLE_IntermodInfo_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_11;
      next_value_of_STATE_VARIABLE_IntermodInfo_0_3 = STATE_VARIABLE_IntermodInfo_35_35;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_IntermodInfo_0_3 = next_value_of_STATE_VARIABLE_IntermodInfo_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod_decide__gather_entities_to_opt_export_in_clauses_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_IntermodInfo_0_3,
  MR_Word * STATE_VARIABLE_IntermodInfo_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Integer) 1;
      *STATE_VARIABLE_IntermodInfo_4 = STATE_VARIABLE_IntermodInfo_0_3;
    }
    else
    {
      MR_Word Clause_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Clauses_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MayOptExportPred1_12;
      MR_Word Var_15;
      MR_Word STATE_VARIABLE_IntermodInfo_16_16;
      MR_Word GoalExpr_17;

      Var_15 = hlds__hlds_clauses__clause_body_1_f_0(Clause_8);
      GoalExpr_17 = ((MR_Word) ((MR_hl_field(0, Var_15, (MR_Integer) 0))));
      switch (MR_tag((MR_Word) GoalExpr_17)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_66 = (MR_Word) ((MR_Word) (GoalExpr_17));

            transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(SubGoal_66, &MayOptExportPred1_12, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_16_16);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RHS_20 = ((MR_Word) ((MR_hl_field(1, GoalExpr_17, (MR_Integer) 1))));

            transform_hlds__intermod_decide__gather_entities_to_opt_export_in_unify_rhs_4_p_0(RHS_20, &MayOptExportPred1_12, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_16_16);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_24 = ((MR_Word) ((MR_hl_field(2, GoalExpr_17, (MR_Integer) 0))));

            transform_hlds__intermod_decide__intermod_add_pred_4_p_0(PredId_24, &MayOptExportPred1_12, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_16_16);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_17, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CallType_30 = ((MR_Word) ((MR_hl_field(3, GoalExpr_17, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) CallType_30)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    MayOptExportPred1_12 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    MayOptExportPred1_12 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    MayOptExportPred1_12 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word CastType_44 = ((MR_Unsigned) ((MR_hl_field(3, CallType_30, (MR_Integer) 0))) & (MR_Integer) 7);

                      MayOptExportPred1_12 = ((&transform_hlds__intermod_decide_vector_common_5[20 + CastType_44]))->transform_hlds__intermod_decide__vector_common_type_5_0__vct_5_f_0;
                    }
                    break;
                }
                STATE_VARIABLE_IntermodInfo_16_16 = STATE_VARIABLE_IntermodInfo_0_3;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attrs_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_17, (MR_Integer) 1))));
                MR_Word MaybeMayDuplicate_52;
                MR_Word MaybeMayExportBody_53;

                MaybeMayDuplicate_52 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(Attrs_45);
                MaybeMayExportBody_53 = parse_tree__prog_data_foreign__get_may_export_body_1_f_0(Attrs_45);
                {
                  MR_Word Var_83;

                  succeeded = (MaybeMayDuplicate_52 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_83 = ((MR_Word) ((MR_hl_field(1, MaybeMayDuplicate_52, (MR_Integer) 0))));
                    succeeded = (Var_83 == (MR_Integer) 1);
                  }
                }
                if (!(succeeded))
                {
                  MR_Word Var_84;

                  succeeded = (MaybeMayExportBody_53 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_84 = ((MR_Word) ((MR_hl_field(1, MaybeMayExportBody_53, (MR_Integer) 0))));
                    succeeded = (Var_84 == (MR_Integer) 1);
                  }
                }
                if (succeeded)
                  MayOptExportPred1_12 = (MR_Integer) 0;
                else
                  MayOptExportPred1_12 = (MR_Integer) 1;
                STATE_VARIABLE_IntermodInfo_16_16 = STATE_VARIABLE_IntermodInfo_0_3;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr_17, (MR_Integer) 2))));

                transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goals_4_p_0(Goals_55, &MayOptExportPred1_12, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_16_16);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_90 = ((MR_Word) ((MR_hl_field(3, GoalExpr_17, (MR_Integer) 1))));

                transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goals_4_p_0(Goals_90, &MayOptExportPred1_12, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_16_16);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr_17, (MR_Integer) 3))));

                transform_hlds__intermod_decide__gather_entities_to_opt_export_in_cases_4_p_0(Cases_58, &MayOptExportPred1_12, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_16_16);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_91 = ((MR_Word) ((MR_hl_field(3, GoalExpr_17, (MR_Integer) 2))));

                transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(SubGoal_91, &MayOptExportPred1_12, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_16_16);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr_17, (MR_Integer) 2))));
                MR_Word Then_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr_17, (MR_Integer) 3))));
                MR_Word Else_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr_17, (MR_Integer) 4))));
                MR_Word MayOptExportPredCond_63;
                MR_Word MayOptExportPredThen_64;
                MR_Word MayOptExportPredElse_65;
                MR_Word STATE_VARIABLE_IntermodInfo_81_85;
                MR_Word STATE_VARIABLE_IntermodInfo_82_86;

                transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(Cond_60, &MayOptExportPredCond_63, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_81_85);
                transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(Then_61, &MayOptExportPredThen_64, STATE_VARIABLE_IntermodInfo_81_85, &STATE_VARIABLE_IntermodInfo_82_86);
                transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(Else_62, &MayOptExportPredElse_65, STATE_VARIABLE_IntermodInfo_82_86, &STATE_VARIABLE_IntermodInfo_16_16);
                succeeded = (MayOptExportPredCond_63 == (MR_Integer) 1);
                if (succeeded)
                {
                  succeeded = (MayOptExportPredThen_64 == (MR_Integer) 1);
                  if (succeeded)
                    succeeded = (MayOptExportPredElse_65 == (MR_Integer) 1);
                }
                if (succeeded)
                  MayOptExportPred1_12 = (MR_Integer) 1;
                else
                  MayOptExportPred1_12 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr_17, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_68)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod_decide.gather_entities_to_opt_export_in_goal_expr\'/4", (MR_String) "bi_implication");
                      return;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MainGoal_73 = ((MR_Word) ((MR_hl_field(1, ShortHand_68, (MR_Integer) 4))));
                      MR_Word OrElseGoals_74 = ((MR_Word) ((MR_hl_field(1, ShortHand_68, (MR_Integer) 5))));
                      MR_Word MayOptExportPredMain_76;
                      MR_Word MayOptExportPredOrElse_77;
                      MR_Word STATE_VARIABLE_IntermodInfo_86_87;

                      transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(MainGoal_73, &MayOptExportPredMain_76, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_86_87);
                      transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goals_4_p_0(OrElseGoals_74, &MayOptExportPredOrElse_77, STATE_VARIABLE_IntermodInfo_86_87, &STATE_VARIABLE_IntermodInfo_16_16);
                      succeeded = (MayOptExportPredMain_76 == (MR_Integer) 1);
                      if (succeeded)
                        succeeded = (MayOptExportPredOrElse_77 == (MR_Integer) 1);
                      if (succeeded)
                        MayOptExportPred1_12 = (MR_Integer) 1;
                      else
                        MayOptExportPred1_12 = (MR_Integer) 0;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MayOptExportPred1_12 = (MR_Integer) 0;
                      STATE_VARIABLE_IntermodInfo_16_16 = STATE_VARIABLE_IntermodInfo_0_3;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      switch (MayOptExportPred1_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__2_2 = (MR_Integer) 0;
            *STATE_VARIABLE_IntermodInfo_4 = STATE_VARIABLE_IntermodInfo_16_16;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__1_1 = Clauses_9;
            MR_Word next_value_of_STATE_VARIABLE_IntermodInfo_0_3 = STATE_VARIABLE_IntermodInfo_16_16;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            STATE_VARIABLE_IntermodInfo_0_3 = next_value_of_STATE_VARIABLE_IntermodInfo_0_3;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(
  MR_Word tscc_proc_1_input_1_Goal_5,
  MR_Word * tscc_output_ptr_1_MayOptExportPred_6,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_IntermodInfo_11)
{
  MR_Word tscc_proc_2_input_1_RHS_5;
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_24;
  MR_Word tscc_output_1_MayOptExportPred_6;
  MR_Word tscc_output_2_STATE_VARIABLE_IntermodInfo_11;

  // The code for TSCC PROC 1: pred transform_hlds.intermod_decide.gather_entities_to_opt_export_in_goal/4-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred transform_hlds.intermod_decide.gather_entities_to_opt_export_in_goal/4-0
  ;
  // proc 2 in TSCC: pred transform_hlds.intermod_decide.gather_entities_to_opt_export_in_unify_rhs/4-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Goal_5 = tscc_proc_1_input_1_Goal_5;
    MR_Word MayOptExportPred_6;
    MR_Word STATE_VARIABLE_IntermodInfo_0_10 = tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
    MR_Word STATE_VARIABLE_IntermodInfo_11;
    MR_bool succeeded;
    MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Goal_5, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) GoalExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_59 = (MR_Word) ((MR_Word) (GoalExpr_8));
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_59;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = STATE_VARIABLE_IntermodInfo_0_10;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
          tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RHS_13 = ((MR_Word) ((MR_hl_field(1, GoalExpr_8, (MR_Integer) 1))));
          MR_Word next_value_of_tscc_proc_2_input_1_RHS_5 = RHS_13;
          MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_24 = STATE_VARIABLE_IntermodInfo_0_10;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_RHS_5 = next_value_of_tscc_proc_2_input_1_RHS_5;
          tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_24 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_24;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_17 = ((MR_Word) ((MR_hl_field(2, GoalExpr_8, (MR_Integer) 0))));

          transform_hlds__intermod_decide__intermod_add_pred_4_p_0(PredId_17, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_10, &STATE_VARIABLE_IntermodInfo_11);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CallType_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) CallType_23)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  MayOptExportPred_6 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  MayOptExportPred_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 2:
                  MayOptExportPred_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word CastType_37 = ((MR_Unsigned) ((MR_hl_field(3, CallType_23, (MR_Integer) 0))) & (MR_Integer) 7);

                    MayOptExportPred_6 = ((&transform_hlds__intermod_decide_vector_common_5[10 + CastType_37]))->transform_hlds__intermod_decide__vector_common_type_5_0__vct_5_f_0;
                  }
                  break;
              }
              STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_0_10;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attrs_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));
              MR_Word MaybeMayDuplicate_45;
              MR_Word MaybeMayExportBody_46;

              MaybeMayDuplicate_45 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(Attrs_38);
              MaybeMayExportBody_46 = parse_tree__prog_data_foreign__get_may_export_body_1_f_0(Attrs_38);
              {
                MR_Word Var_76;

                succeeded = (MaybeMayDuplicate_45 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_76 = ((MR_Word) ((MR_hl_field(1, MaybeMayDuplicate_45, (MR_Integer) 0))));
                  succeeded = (Var_76 == (MR_Integer) 1);
                }
              }
              if (!(succeeded))
              {
                MR_Word Var_77;

                succeeded = (MaybeMayExportBody_46 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_77 = ((MR_Word) ((MR_hl_field(1, MaybeMayExportBody_46, (MR_Integer) 0))));
                  succeeded = (Var_77 == (MR_Integer) 1);
                }
              }
              if (succeeded)
                MayOptExportPred_6 = (MR_Integer) 0;
              else
                MayOptExportPred_6 = (MR_Integer) 1;
              STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_0_10;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));

              transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goals_4_p_0(Goals_48, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_10, &STATE_VARIABLE_IntermodInfo_11);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_83 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));

              transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goals_4_p_0(Goals_83, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_10, &STATE_VARIABLE_IntermodInfo_11);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 3))));

              transform_hlds__intermod_decide__gather_entities_to_opt_export_in_cases_4_p_0(Cases_51, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_10, &STATE_VARIABLE_IntermodInfo_11);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_84 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_84;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = STATE_VARIABLE_IntermodInfo_0_10;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
              tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));
              MR_Word Then_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 3))));
              MR_Word Else_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 4))));
              MR_Word MayOptExportPredCond_56;
              MR_Word MayOptExportPredThen_57;
              MR_Word MayOptExportPredElse_58;
              MR_Word STATE_VARIABLE_IntermodInfo_81_78;
              MR_Word STATE_VARIABLE_IntermodInfo_82_79;

              transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(Cond_53, &MayOptExportPredCond_56, STATE_VARIABLE_IntermodInfo_0_10, &STATE_VARIABLE_IntermodInfo_81_78);
              transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(Then_54, &MayOptExportPredThen_57, STATE_VARIABLE_IntermodInfo_81_78, &STATE_VARIABLE_IntermodInfo_82_79);
              transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(Else_55, &MayOptExportPredElse_58, STATE_VARIABLE_IntermodInfo_82_79, &STATE_VARIABLE_IntermodInfo_11);
              succeeded = (MayOptExportPredCond_56 == (MR_Integer) 1);
              if (succeeded)
              {
                succeeded = (MayOptExportPredThen_57 == (MR_Integer) 1);
                if (succeeded)
                  succeeded = (MayOptExportPredElse_58 == (MR_Integer) 1);
              }
              if (succeeded)
                MayOptExportPred_6 = (MR_Integer) 1;
              else
                MayOptExportPred_6 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_61)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod_decide.gather_entities_to_opt_export_in_goal_expr\'/4", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_66 = ((MR_Word) ((MR_hl_field(1, ShortHand_61, (MR_Integer) 4))));
                    MR_Word OrElseGoals_67 = ((MR_Word) ((MR_hl_field(1, ShortHand_61, (MR_Integer) 5))));
                    MR_Word MayOptExportPredMain_69;
                    MR_Word MayOptExportPredOrElse_70;
                    MR_Word STATE_VARIABLE_IntermodInfo_86_80;

                    transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(MainGoal_66, &MayOptExportPredMain_69, STATE_VARIABLE_IntermodInfo_0_10, &STATE_VARIABLE_IntermodInfo_86_80);
                    transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goals_4_p_0(OrElseGoals_67, &MayOptExportPredOrElse_70, STATE_VARIABLE_IntermodInfo_86_80, &STATE_VARIABLE_IntermodInfo_11);
                    succeeded = (MayOptExportPredMain_69 == (MR_Integer) 1);
                    if (succeeded)
                      succeeded = (MayOptExportPredOrElse_70 == (MR_Integer) 1);
                    if (succeeded)
                      MayOptExportPred_6 = (MR_Integer) 1;
                    else
                      MayOptExportPred_6 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MayOptExportPred_6 = (MR_Integer) 0;
                    STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_0_10;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_MayOptExportPred_6 = MayOptExportPred_6;
    tscc_output_2_STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_11;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word RHS_5 = tscc_proc_2_input_1_RHS_5;
    MR_Word MayOptExportPred_6;
    MR_Word STATE_VARIABLE_IntermodInfo_0_24 = tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_24;
    MR_Word STATE_VARIABLE_IntermodInfo_25;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) RHS_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MayOptExportPred_6 = (MR_Integer) 1;
          STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Functor_17 = ((MR_Word) ((MR_hl_field(1, RHS_5, (MR_Integer) 0))));
          MR_Word ShroudedPredProcId_20;

          succeeded = ((((MR_tag((MR_Word) Functor_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_17, (MR_Integer) 0)))) == (MR_Integer) 4)));
          if (succeeded)
          {
            ShroudedPredProcId_20 = ((MR_Word) ((MR_hl_field(3, Functor_17, (MR_Integer) 1))));
            {
              MR_Word PredId_22;
              MR_Word Var_27;

              Var_27 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_20);
              PredId_22 = ((MR_Word) ((MR_hl_field(0, Var_27, (MR_Integer) 0))));
              transform_hlds__intermod_decide__intermod_add_pred_4_p_0(PredId_22, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_24, &STATE_VARIABLE_IntermodInfo_25);
            }
          }
          else
          {
            MayOptExportPred_6 = (MR_Integer) 1;
            STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Goal_16 = ((MR_Word) ((MR_hl_field(2, RHS_5, (MR_Integer) 5))));
          MR_Word GoalExpr_28 = ((MR_Word) ((MR_hl_field(0, Goal_16, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) GoalExpr_28)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word SubGoal_77 = (MR_Word) ((MR_Word) (GoalExpr_28));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_77;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = STATE_VARIABLE_IntermodInfo_0_24;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word RHS_31 = ((MR_Word) ((MR_hl_field(1, GoalExpr_28, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_RHS_5 = RHS_31;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_24 = STATE_VARIABLE_IntermodInfo_0_24;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_RHS_5 = next_value_of_tscc_proc_2_input_1_RHS_5;
                tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_24 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_24;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word PredId_35 = ((MR_Word) ((MR_hl_field(2, GoalExpr_28, (MR_Integer) 0))));

                transform_hlds__intermod_decide__intermod_add_pred_4_p_0(PredId_35, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_24, &STATE_VARIABLE_IntermodInfo_25);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_28, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word CallType_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_28, (MR_Integer) 1))));

                    switch (MR_tag((MR_Word) CallType_41)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        MayOptExportPred_6 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        MayOptExportPred_6 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 2:
                        MayOptExportPred_6 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word CastType_55 = ((MR_Unsigned) ((MR_hl_field(3, CallType_41, (MR_Integer) 0))) & (MR_Integer) 7);

                          MayOptExportPred_6 = ((&transform_hlds__intermod_decide_vector_common_5[15 + CastType_55]))->transform_hlds__intermod_decide__vector_common_type_5_0__vct_5_f_0;
                        }
                        break;
                    }
                    STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Attrs_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr_28, (MR_Integer) 1))));
                    MR_Word MaybeMayDuplicate_63;
                    MR_Word MaybeMayExportBody_64;

                    MaybeMayDuplicate_63 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(Attrs_56);
                    MaybeMayExportBody_64 = parse_tree__prog_data_foreign__get_may_export_body_1_f_0(Attrs_56);
                    {
                      MR_Word Var_94;

                      succeeded = (MaybeMayDuplicate_63 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_94 = ((MR_Word) ((MR_hl_field(1, MaybeMayDuplicate_63, (MR_Integer) 0))));
                        succeeded = (Var_94 == (MR_Integer) 1);
                      }
                    }
                    if (!(succeeded))
                    {
                      MR_Word Var_95;

                      succeeded = (MaybeMayExportBody_64 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_95 = ((MR_Word) ((MR_hl_field(1, MaybeMayExportBody_64, (MR_Integer) 0))));
                        succeeded = (Var_95 == (MR_Integer) 1);
                      }
                    }
                    if (succeeded)
                      MayOptExportPred_6 = (MR_Integer) 0;
                    else
                      MayOptExportPred_6 = (MR_Integer) 1;
                    STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Goals_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr_28, (MR_Integer) 2))));

                    transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goals_4_p_0(Goals_66, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_24, &STATE_VARIABLE_IntermodInfo_25);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word Goals_101 = ((MR_Word) ((MR_hl_field(3, GoalExpr_28, (MR_Integer) 1))));

                    transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goals_4_p_0(Goals_101, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_24, &STATE_VARIABLE_IntermodInfo_25);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word Cases_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr_28, (MR_Integer) 3))));

                    transform_hlds__intermod_decide__gather_entities_to_opt_export_in_cases_4_p_0(Cases_69, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_24, &STATE_VARIABLE_IntermodInfo_25);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word SubGoal_102 = ((MR_Word) ((MR_hl_field(3, GoalExpr_28, (MR_Integer) 2))));
                    MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_102;
                    MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = STATE_VARIABLE_IntermodInfo_0_24;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                    tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word Cond_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_28, (MR_Integer) 2))));
                    MR_Word Then_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr_28, (MR_Integer) 3))));
                    MR_Word Else_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr_28, (MR_Integer) 4))));
                    MR_Word MayOptExportPredCond_74;
                    MR_Word MayOptExportPredThen_75;
                    MR_Word MayOptExportPredElse_76;
                    MR_Word STATE_VARIABLE_IntermodInfo_81_96;
                    MR_Word STATE_VARIABLE_IntermodInfo_82_97;

                    transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(Cond_71, &MayOptExportPredCond_74, STATE_VARIABLE_IntermodInfo_0_24, &STATE_VARIABLE_IntermodInfo_81_96);
                    transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(Then_72, &MayOptExportPredThen_75, STATE_VARIABLE_IntermodInfo_81_96, &STATE_VARIABLE_IntermodInfo_82_97);
                    transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(Else_73, &MayOptExportPredElse_76, STATE_VARIABLE_IntermodInfo_82_97, &STATE_VARIABLE_IntermodInfo_25);
                    succeeded = (MayOptExportPredCond_74 == (MR_Integer) 1);
                    if (succeeded)
                    {
                      succeeded = (MayOptExportPredThen_75 == (MR_Integer) 1);
                      if (succeeded)
                        succeeded = (MayOptExportPredElse_76 == (MR_Integer) 1);
                    }
                    if (succeeded)
                      MayOptExportPred_6 = (MR_Integer) 1;
                    else
                      MayOptExportPred_6 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word ShortHand_79 = ((MR_Word) ((MR_hl_field(3, GoalExpr_28, (MR_Integer) 1))));

                    switch (MR_tag((MR_Word) ShortHand_79)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod_decide.gather_entities_to_opt_export_in_goal_expr\'/4", (MR_String) "bi_implication");
                          return;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word MainGoal_84 = ((MR_Word) ((MR_hl_field(1, ShortHand_79, (MR_Integer) 4))));
                          MR_Word OrElseGoals_85 = ((MR_Word) ((MR_hl_field(1, ShortHand_79, (MR_Integer) 5))));
                          MR_Word MayOptExportPredMain_87;
                          MR_Word MayOptExportPredOrElse_88;
                          MR_Word STATE_VARIABLE_IntermodInfo_86_98;

                          transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(MainGoal_84, &MayOptExportPredMain_87, STATE_VARIABLE_IntermodInfo_0_24, &STATE_VARIABLE_IntermodInfo_86_98);
                          transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goals_4_p_0(OrElseGoals_85, &MayOptExportPredOrElse_88, STATE_VARIABLE_IntermodInfo_86_98, &STATE_VARIABLE_IntermodInfo_25);
                          succeeded = (MayOptExportPredMain_87 == (MR_Integer) 1);
                          if (succeeded)
                            succeeded = (MayOptExportPredOrElse_88 == (MR_Integer) 1);
                          if (succeeded)
                            MayOptExportPred_6 = (MR_Integer) 1;
                          else
                            MayOptExportPred_6 = (MR_Integer) 0;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MayOptExportPred_6 = (MR_Integer) 0;
                          STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
                        }
                        break;
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
    }
    tscc_output_1_MayOptExportPred_6 = MayOptExportPred_6;
    tscc_output_2_STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_25;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_MayOptExportPred_6 = tscc_output_1_MayOptExportPred_6;
  *tscc_output_ptr_2_STATE_VARIABLE_IntermodInfo_11 = tscc_output_2_STATE_VARIABLE_IntermodInfo_11;
  return;
}

static void MR_CALL 
transform_hlds__intermod_decide__gather_entities_to_opt_export_in_unify_rhs_4_p_0(
  MR_Word tscc_proc_2_input_1_RHS_5,
  MR_Word * tscc_output_ptr_1_MayOptExportPred_6,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_24,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_IntermodInfo_11)
{
  MR_Word tscc_proc_1_input_1_Goal_5;
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
  MR_Word tscc_output_1_MayOptExportPred_6;
  MR_Word tscc_output_2_STATE_VARIABLE_IntermodInfo_11;

  // The code for TSCC PROC 2: pred transform_hlds.intermod_decide.gather_entities_to_opt_export_in_unify_rhs/4-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred transform_hlds.intermod_decide.gather_entities_to_opt_export_in_goal/4-0
  ;
  // proc 2 in TSCC: pred transform_hlds.intermod_decide.gather_entities_to_opt_export_in_unify_rhs/4-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Goal_5 = tscc_proc_1_input_1_Goal_5;
    MR_Word MayOptExportPred_6;
    MR_Word STATE_VARIABLE_IntermodInfo_0_10 = tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
    MR_Word STATE_VARIABLE_IntermodInfo_11;
    MR_bool succeeded;
    MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Goal_5, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) GoalExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_59 = (MR_Word) ((MR_Word) (GoalExpr_8));
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_59;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = STATE_VARIABLE_IntermodInfo_0_10;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
          tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RHS_13 = ((MR_Word) ((MR_hl_field(1, GoalExpr_8, (MR_Integer) 1))));
          MR_Word next_value_of_tscc_proc_2_input_1_RHS_5 = RHS_13;
          MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_24 = STATE_VARIABLE_IntermodInfo_0_10;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_RHS_5 = next_value_of_tscc_proc_2_input_1_RHS_5;
          tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_24 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_24;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_17 = ((MR_Word) ((MR_hl_field(2, GoalExpr_8, (MR_Integer) 0))));

          transform_hlds__intermod_decide__intermod_add_pred_4_p_0(PredId_17, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_10, &STATE_VARIABLE_IntermodInfo_11);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CallType_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) CallType_23)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  MayOptExportPred_6 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  MayOptExportPred_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 2:
                  MayOptExportPred_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word CastType_37 = ((MR_Unsigned) ((MR_hl_field(3, CallType_23, (MR_Integer) 0))) & (MR_Integer) 7);

                    MayOptExportPred_6 = ((&transform_hlds__intermod_decide_vector_common_5[10 + CastType_37]))->transform_hlds__intermod_decide__vector_common_type_5_0__vct_5_f_0;
                  }
                  break;
              }
              STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_0_10;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attrs_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));
              MR_Word MaybeMayDuplicate_45;
              MR_Word MaybeMayExportBody_46;

              MaybeMayDuplicate_45 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(Attrs_38);
              MaybeMayExportBody_46 = parse_tree__prog_data_foreign__get_may_export_body_1_f_0(Attrs_38);
              {
                MR_Word Var_76;

                succeeded = (MaybeMayDuplicate_45 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_76 = ((MR_Word) ((MR_hl_field(1, MaybeMayDuplicate_45, (MR_Integer) 0))));
                  succeeded = (Var_76 == (MR_Integer) 1);
                }
              }
              if (!(succeeded))
              {
                MR_Word Var_77;

                succeeded = (MaybeMayExportBody_46 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_77 = ((MR_Word) ((MR_hl_field(1, MaybeMayExportBody_46, (MR_Integer) 0))));
                  succeeded = (Var_77 == (MR_Integer) 1);
                }
              }
              if (succeeded)
                MayOptExportPred_6 = (MR_Integer) 0;
              else
                MayOptExportPred_6 = (MR_Integer) 1;
              STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_0_10;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));

              transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goals_4_p_0(Goals_48, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_10, &STATE_VARIABLE_IntermodInfo_11);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_83 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));

              transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goals_4_p_0(Goals_83, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_10, &STATE_VARIABLE_IntermodInfo_11);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 3))));

              transform_hlds__intermod_decide__gather_entities_to_opt_export_in_cases_4_p_0(Cases_51, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_10, &STATE_VARIABLE_IntermodInfo_11);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_84 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_84;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = STATE_VARIABLE_IntermodInfo_0_10;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
              tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));
              MR_Word Then_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 3))));
              MR_Word Else_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 4))));
              MR_Word MayOptExportPredCond_56;
              MR_Word MayOptExportPredThen_57;
              MR_Word MayOptExportPredElse_58;
              MR_Word STATE_VARIABLE_IntermodInfo_81_78;
              MR_Word STATE_VARIABLE_IntermodInfo_82_79;

              transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(Cond_53, &MayOptExportPredCond_56, STATE_VARIABLE_IntermodInfo_0_10, &STATE_VARIABLE_IntermodInfo_81_78);
              transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(Then_54, &MayOptExportPredThen_57, STATE_VARIABLE_IntermodInfo_81_78, &STATE_VARIABLE_IntermodInfo_82_79);
              transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(Else_55, &MayOptExportPredElse_58, STATE_VARIABLE_IntermodInfo_82_79, &STATE_VARIABLE_IntermodInfo_11);
              succeeded = (MayOptExportPredCond_56 == (MR_Integer) 1);
              if (succeeded)
              {
                succeeded = (MayOptExportPredThen_57 == (MR_Integer) 1);
                if (succeeded)
                  succeeded = (MayOptExportPredElse_58 == (MR_Integer) 1);
              }
              if (succeeded)
                MayOptExportPred_6 = (MR_Integer) 1;
              else
                MayOptExportPred_6 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_61)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod_decide.gather_entities_to_opt_export_in_goal_expr\'/4", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_66 = ((MR_Word) ((MR_hl_field(1, ShortHand_61, (MR_Integer) 4))));
                    MR_Word OrElseGoals_67 = ((MR_Word) ((MR_hl_field(1, ShortHand_61, (MR_Integer) 5))));
                    MR_Word MayOptExportPredMain_69;
                    MR_Word MayOptExportPredOrElse_70;
                    MR_Word STATE_VARIABLE_IntermodInfo_86_80;

                    transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(MainGoal_66, &MayOptExportPredMain_69, STATE_VARIABLE_IntermodInfo_0_10, &STATE_VARIABLE_IntermodInfo_86_80);
                    transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goals_4_p_0(OrElseGoals_67, &MayOptExportPredOrElse_70, STATE_VARIABLE_IntermodInfo_86_80, &STATE_VARIABLE_IntermodInfo_11);
                    succeeded = (MayOptExportPredMain_69 == (MR_Integer) 1);
                    if (succeeded)
                      succeeded = (MayOptExportPredOrElse_70 == (MR_Integer) 1);
                    if (succeeded)
                      MayOptExportPred_6 = (MR_Integer) 1;
                    else
                      MayOptExportPred_6 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MayOptExportPred_6 = (MR_Integer) 0;
                    STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_0_10;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_MayOptExportPred_6 = MayOptExportPred_6;
    tscc_output_2_STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_11;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word RHS_5 = tscc_proc_2_input_1_RHS_5;
    MR_Word MayOptExportPred_6;
    MR_Word STATE_VARIABLE_IntermodInfo_0_24 = tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_24;
    MR_Word STATE_VARIABLE_IntermodInfo_25;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) RHS_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MayOptExportPred_6 = (MR_Integer) 1;
          STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Functor_17 = ((MR_Word) ((MR_hl_field(1, RHS_5, (MR_Integer) 0))));
          MR_Word ShroudedPredProcId_20;

          succeeded = ((((MR_tag((MR_Word) Functor_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_17, (MR_Integer) 0)))) == (MR_Integer) 4)));
          if (succeeded)
          {
            ShroudedPredProcId_20 = ((MR_Word) ((MR_hl_field(3, Functor_17, (MR_Integer) 1))));
            {
              MR_Word PredId_22;
              MR_Word Var_27;

              Var_27 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_20);
              PredId_22 = ((MR_Word) ((MR_hl_field(0, Var_27, (MR_Integer) 0))));
              transform_hlds__intermod_decide__intermod_add_pred_4_p_0(PredId_22, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_24, &STATE_VARIABLE_IntermodInfo_25);
            }
          }
          else
          {
            MayOptExportPred_6 = (MR_Integer) 1;
            STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Goal_16 = ((MR_Word) ((MR_hl_field(2, RHS_5, (MR_Integer) 5))));
          MR_Word GoalExpr_28 = ((MR_Word) ((MR_hl_field(0, Goal_16, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) GoalExpr_28)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word SubGoal_77 = (MR_Word) ((MR_Word) (GoalExpr_28));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_77;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = STATE_VARIABLE_IntermodInfo_0_24;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word RHS_31 = ((MR_Word) ((MR_hl_field(1, GoalExpr_28, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_RHS_5 = RHS_31;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_24 = STATE_VARIABLE_IntermodInfo_0_24;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_RHS_5 = next_value_of_tscc_proc_2_input_1_RHS_5;
                tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_24 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_24;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word PredId_35 = ((MR_Word) ((MR_hl_field(2, GoalExpr_28, (MR_Integer) 0))));

                transform_hlds__intermod_decide__intermod_add_pred_4_p_0(PredId_35, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_24, &STATE_VARIABLE_IntermodInfo_25);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_28, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word CallType_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_28, (MR_Integer) 1))));

                    switch (MR_tag((MR_Word) CallType_41)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        MayOptExportPred_6 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        MayOptExportPred_6 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 2:
                        MayOptExportPred_6 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word CastType_55 = ((MR_Unsigned) ((MR_hl_field(3, CallType_41, (MR_Integer) 0))) & (MR_Integer) 7);

                          MayOptExportPred_6 = ((&transform_hlds__intermod_decide_vector_common_5[15 + CastType_55]))->transform_hlds__intermod_decide__vector_common_type_5_0__vct_5_f_0;
                        }
                        break;
                    }
                    STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Attrs_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr_28, (MR_Integer) 1))));
                    MR_Word MaybeMayDuplicate_63;
                    MR_Word MaybeMayExportBody_64;

                    MaybeMayDuplicate_63 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(Attrs_56);
                    MaybeMayExportBody_64 = parse_tree__prog_data_foreign__get_may_export_body_1_f_0(Attrs_56);
                    {
                      MR_Word Var_94;

                      succeeded = (MaybeMayDuplicate_63 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_94 = ((MR_Word) ((MR_hl_field(1, MaybeMayDuplicate_63, (MR_Integer) 0))));
                        succeeded = (Var_94 == (MR_Integer) 1);
                      }
                    }
                    if (!(succeeded))
                    {
                      MR_Word Var_95;

                      succeeded = (MaybeMayExportBody_64 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_95 = ((MR_Word) ((MR_hl_field(1, MaybeMayExportBody_64, (MR_Integer) 0))));
                        succeeded = (Var_95 == (MR_Integer) 1);
                      }
                    }
                    if (succeeded)
                      MayOptExportPred_6 = (MR_Integer) 0;
                    else
                      MayOptExportPred_6 = (MR_Integer) 1;
                    STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Goals_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr_28, (MR_Integer) 2))));

                    transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goals_4_p_0(Goals_66, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_24, &STATE_VARIABLE_IntermodInfo_25);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word Goals_101 = ((MR_Word) ((MR_hl_field(3, GoalExpr_28, (MR_Integer) 1))));

                    transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goals_4_p_0(Goals_101, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_24, &STATE_VARIABLE_IntermodInfo_25);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word Cases_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr_28, (MR_Integer) 3))));

                    transform_hlds__intermod_decide__gather_entities_to_opt_export_in_cases_4_p_0(Cases_69, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_24, &STATE_VARIABLE_IntermodInfo_25);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word SubGoal_102 = ((MR_Word) ((MR_hl_field(3, GoalExpr_28, (MR_Integer) 2))));
                    MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_102;
                    MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = STATE_VARIABLE_IntermodInfo_0_24;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                    tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word Cond_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_28, (MR_Integer) 2))));
                    MR_Word Then_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr_28, (MR_Integer) 3))));
                    MR_Word Else_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr_28, (MR_Integer) 4))));
                    MR_Word MayOptExportPredCond_74;
                    MR_Word MayOptExportPredThen_75;
                    MR_Word MayOptExportPredElse_76;
                    MR_Word STATE_VARIABLE_IntermodInfo_81_96;
                    MR_Word STATE_VARIABLE_IntermodInfo_82_97;

                    transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(Cond_71, &MayOptExportPredCond_74, STATE_VARIABLE_IntermodInfo_0_24, &STATE_VARIABLE_IntermodInfo_81_96);
                    transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(Then_72, &MayOptExportPredThen_75, STATE_VARIABLE_IntermodInfo_81_96, &STATE_VARIABLE_IntermodInfo_82_97);
                    transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(Else_73, &MayOptExportPredElse_76, STATE_VARIABLE_IntermodInfo_82_97, &STATE_VARIABLE_IntermodInfo_25);
                    succeeded = (MayOptExportPredCond_74 == (MR_Integer) 1);
                    if (succeeded)
                    {
                      succeeded = (MayOptExportPredThen_75 == (MR_Integer) 1);
                      if (succeeded)
                        succeeded = (MayOptExportPredElse_76 == (MR_Integer) 1);
                    }
                    if (succeeded)
                      MayOptExportPred_6 = (MR_Integer) 1;
                    else
                      MayOptExportPred_6 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word ShortHand_79 = ((MR_Word) ((MR_hl_field(3, GoalExpr_28, (MR_Integer) 1))));

                    switch (MR_tag((MR_Word) ShortHand_79)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod_decide.gather_entities_to_opt_export_in_goal_expr\'/4", (MR_String) "bi_implication");
                          return;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word MainGoal_84 = ((MR_Word) ((MR_hl_field(1, ShortHand_79, (MR_Integer) 4))));
                          MR_Word OrElseGoals_85 = ((MR_Word) ((MR_hl_field(1, ShortHand_79, (MR_Integer) 5))));
                          MR_Word MayOptExportPredMain_87;
                          MR_Word MayOptExportPredOrElse_88;
                          MR_Word STATE_VARIABLE_IntermodInfo_86_98;

                          transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(MainGoal_84, &MayOptExportPredMain_87, STATE_VARIABLE_IntermodInfo_0_24, &STATE_VARIABLE_IntermodInfo_86_98);
                          transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goals_4_p_0(OrElseGoals_85, &MayOptExportPredOrElse_88, STATE_VARIABLE_IntermodInfo_86_98, &STATE_VARIABLE_IntermodInfo_25);
                          succeeded = (MayOptExportPredMain_87 == (MR_Integer) 1);
                          if (succeeded)
                            succeeded = (MayOptExportPredOrElse_88 == (MR_Integer) 1);
                          if (succeeded)
                            MayOptExportPred_6 = (MR_Integer) 1;
                          else
                            MayOptExportPred_6 = (MR_Integer) 0;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MayOptExportPred_6 = (MR_Integer) 0;
                          STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
                        }
                        break;
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
    }
    tscc_output_1_MayOptExportPred_6 = MayOptExportPred_6;
    tscc_output_2_STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_25;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_MayOptExportPred_6 = tscc_output_1_MayOptExportPred_6;
  *tscc_output_ptr_2_STATE_VARIABLE_IntermodInfo_11 = tscc_output_2_STATE_VARIABLE_IntermodInfo_11;
  return;
}

static void MR_CALL 
transform_hlds__intermod_decide__gather_entities_to_opt_export_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_IntermodInfo_0_3,
  MR_Word * STATE_VARIABLE_IntermodInfo_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Integer) 1;
      *STATE_VARIABLE_IntermodInfo_4 = STATE_VARIABLE_IntermodInfo_0_3;
    }
    else
    {
      MR_Word Case_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_14 = ((MR_Word) ((MR_hl_field(0, Case_8, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_MayOptExportPred_18_18;
      MR_Word STATE_VARIABLE_IntermodInfo_19_19;
      MR_Word GoalExpr_20 = ((MR_Word) ((MR_hl_field(0, Goal_14, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) GoalExpr_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_69 = (MR_Word) ((MR_Word) (GoalExpr_20));

            transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(SubGoal_69, &STATE_VARIABLE_MayOptExportPred_18_18, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_19_19);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RHS_23 = ((MR_Word) ((MR_hl_field(1, GoalExpr_20, (MR_Integer) 1))));

            transform_hlds__intermod_decide__gather_entities_to_opt_export_in_unify_rhs_4_p_0(RHS_23, &STATE_VARIABLE_MayOptExportPred_18_18, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_19_19);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_27 = ((MR_Word) ((MR_hl_field(2, GoalExpr_20, (MR_Integer) 0))));

            transform_hlds__intermod_decide__intermod_add_pred_4_p_0(PredId_27, &STATE_VARIABLE_MayOptExportPred_18_18, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_19_19);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CallType_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) CallType_33)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_MayOptExportPred_18_18 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_MayOptExportPred_18_18 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    STATE_VARIABLE_MayOptExportPred_18_18 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word CastType_47 = ((MR_Unsigned) ((MR_hl_field(3, CallType_33, (MR_Integer) 0))) & (MR_Integer) 7);

                      STATE_VARIABLE_MayOptExportPred_18_18 = ((&transform_hlds__intermod_decide_vector_common_5[5 + CastType_47]))->transform_hlds__intermod_decide__vector_common_type_5_0__vct_5_f_0;
                    }
                    break;
                }
                STATE_VARIABLE_IntermodInfo_19_19 = STATE_VARIABLE_IntermodInfo_0_3;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attrs_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 1))));
                MR_Word MaybeMayDuplicate_55;
                MR_Word MaybeMayExportBody_56;

                MaybeMayDuplicate_55 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(Attrs_48);
                MaybeMayExportBody_56 = parse_tree__prog_data_foreign__get_may_export_body_1_f_0(Attrs_48);
                {
                  MR_Word Var_86;

                  succeeded = (MaybeMayDuplicate_55 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_86 = ((MR_Word) ((MR_hl_field(1, MaybeMayDuplicate_55, (MR_Integer) 0))));
                    succeeded = (Var_86 == (MR_Integer) 1);
                  }
                }
                if (!(succeeded))
                {
                  MR_Word Var_87;

                  succeeded = (MaybeMayExportBody_56 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_87 = ((MR_Word) ((MR_hl_field(1, MaybeMayExportBody_56, (MR_Integer) 0))));
                    succeeded = (Var_87 == (MR_Integer) 1);
                  }
                }
                if (succeeded)
                  STATE_VARIABLE_MayOptExportPred_18_18 = (MR_Integer) 0;
                else
                  STATE_VARIABLE_MayOptExportPred_18_18 = (MR_Integer) 1;
                STATE_VARIABLE_IntermodInfo_19_19 = STATE_VARIABLE_IntermodInfo_0_3;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 2))));

                transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goals_4_p_0(Goals_58, &STATE_VARIABLE_MayOptExportPred_18_18, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_19_19);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_93 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 1))));

                transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goals_4_p_0(Goals_93, &STATE_VARIABLE_MayOptExportPred_18_18, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_19_19);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 3))));

                transform_hlds__intermod_decide__gather_entities_to_opt_export_in_cases_4_p_0(Cases_61, &STATE_VARIABLE_MayOptExportPred_18_18, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_19_19);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_94 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 2))));

                transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(SubGoal_94, &STATE_VARIABLE_MayOptExportPred_18_18, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_19_19);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 2))));
                MR_Word Then_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 3))));
                MR_Word Else_65 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 4))));
                MR_Word MayOptExportPredCond_66;
                MR_Word MayOptExportPredThen_67;
                MR_Word MayOptExportPredElse_68;
                MR_Word STATE_VARIABLE_IntermodInfo_81_88;
                MR_Word STATE_VARIABLE_IntermodInfo_82_89;

                transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(Cond_63, &MayOptExportPredCond_66, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_81_88);
                transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(Then_64, &MayOptExportPredThen_67, STATE_VARIABLE_IntermodInfo_81_88, &STATE_VARIABLE_IntermodInfo_82_89);
                transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(Else_65, &MayOptExportPredElse_68, STATE_VARIABLE_IntermodInfo_82_89, &STATE_VARIABLE_IntermodInfo_19_19);
                succeeded = (MayOptExportPredCond_66 == (MR_Integer) 1);
                if (succeeded)
                {
                  succeeded = (MayOptExportPredThen_67 == (MR_Integer) 1);
                  if (succeeded)
                    succeeded = (MayOptExportPredElse_68 == (MR_Integer) 1);
                }
                if (succeeded)
                  STATE_VARIABLE_MayOptExportPred_18_18 = (MR_Integer) 1;
                else
                  STATE_VARIABLE_MayOptExportPred_18_18 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_71)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod_decide.gather_entities_to_opt_export_in_goal_expr\'/4", (MR_String) "bi_implication");
                      return;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MainGoal_76 = ((MR_Word) ((MR_hl_field(1, ShortHand_71, (MR_Integer) 4))));
                      MR_Word OrElseGoals_77 = ((MR_Word) ((MR_hl_field(1, ShortHand_71, (MR_Integer) 5))));
                      MR_Word MayOptExportPredMain_79;
                      MR_Word MayOptExportPredOrElse_80;
                      MR_Word STATE_VARIABLE_IntermodInfo_86_90;

                      transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(MainGoal_76, &MayOptExportPredMain_79, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_86_90);
                      transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goals_4_p_0(OrElseGoals_77, &MayOptExportPredOrElse_80, STATE_VARIABLE_IntermodInfo_86_90, &STATE_VARIABLE_IntermodInfo_19_19);
                      succeeded = (MayOptExportPredMain_79 == (MR_Integer) 1);
                      if (succeeded)
                        succeeded = (MayOptExportPredOrElse_80 == (MR_Integer) 1);
                      if (succeeded)
                        STATE_VARIABLE_MayOptExportPred_18_18 = (MR_Integer) 1;
                      else
                        STATE_VARIABLE_MayOptExportPred_18_18 = (MR_Integer) 0;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      STATE_VARIABLE_MayOptExportPred_18_18 = (MR_Integer) 0;
                      STATE_VARIABLE_IntermodInfo_19_19 = STATE_VARIABLE_IntermodInfo_0_3;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      switch (STATE_VARIABLE_MayOptExportPred_18_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__2_2 = STATE_VARIABLE_MayOptExportPred_18_18;
            *STATE_VARIABLE_IntermodInfo_4 = STATE_VARIABLE_IntermodInfo_19_19;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__1_1 = Cases_9;
            MR_Word next_value_of_STATE_VARIABLE_IntermodInfo_0_3 = STATE_VARIABLE_IntermodInfo_19_19;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            STATE_VARIABLE_IntermodInfo_0_3 = next_value_of_STATE_VARIABLE_IntermodInfo_0_3;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_IntermodInfo_0_3,
  MR_Word * STATE_VARIABLE_IntermodInfo_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Integer) 1;
      *STATE_VARIABLE_IntermodInfo_4 = STATE_VARIABLE_IntermodInfo_0_3;
    }
    else
    {
      MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_MayOptExportPred_15_15;
      MR_Word STATE_VARIABLE_IntermodInfo_16_16;
      MR_Word GoalExpr_17 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) GoalExpr_17)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_66 = (MR_Word) ((MR_Word) (GoalExpr_17));

            transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(SubGoal_66, &STATE_VARIABLE_MayOptExportPred_15_15, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_16_16);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RHS_20 = ((MR_Word) ((MR_hl_field(1, GoalExpr_17, (MR_Integer) 1))));

            transform_hlds__intermod_decide__gather_entities_to_opt_export_in_unify_rhs_4_p_0(RHS_20, &STATE_VARIABLE_MayOptExportPred_15_15, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_16_16);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_24 = ((MR_Word) ((MR_hl_field(2, GoalExpr_17, (MR_Integer) 0))));

            transform_hlds__intermod_decide__intermod_add_pred_4_p_0(PredId_24, &STATE_VARIABLE_MayOptExportPred_15_15, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_16_16);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_17, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CallType_30 = ((MR_Word) ((MR_hl_field(3, GoalExpr_17, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) CallType_30)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_MayOptExportPred_15_15 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_MayOptExportPred_15_15 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    STATE_VARIABLE_MayOptExportPred_15_15 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word CastType_44 = ((MR_Unsigned) ((MR_hl_field(3, CallType_30, (MR_Integer) 0))) & (MR_Integer) 7);

                      STATE_VARIABLE_MayOptExportPred_15_15 = ((&transform_hlds__intermod_decide_vector_common_5[0 + CastType_44]))->transform_hlds__intermod_decide__vector_common_type_5_0__vct_5_f_0;
                    }
                    break;
                }
                STATE_VARIABLE_IntermodInfo_16_16 = STATE_VARIABLE_IntermodInfo_0_3;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attrs_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_17, (MR_Integer) 1))));
                MR_Word MaybeMayDuplicate_52;
                MR_Word MaybeMayExportBody_53;

                MaybeMayDuplicate_52 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(Attrs_45);
                MaybeMayExportBody_53 = parse_tree__prog_data_foreign__get_may_export_body_1_f_0(Attrs_45);
                {
                  MR_Word Var_83;

                  succeeded = (MaybeMayDuplicate_52 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_83 = ((MR_Word) ((MR_hl_field(1, MaybeMayDuplicate_52, (MR_Integer) 0))));
                    succeeded = (Var_83 == (MR_Integer) 1);
                  }
                }
                if (!(succeeded))
                {
                  MR_Word Var_84;

                  succeeded = (MaybeMayExportBody_53 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_84 = ((MR_Word) ((MR_hl_field(1, MaybeMayExportBody_53, (MR_Integer) 0))));
                    succeeded = (Var_84 == (MR_Integer) 1);
                  }
                }
                if (succeeded)
                  STATE_VARIABLE_MayOptExportPred_15_15 = (MR_Integer) 0;
                else
                  STATE_VARIABLE_MayOptExportPred_15_15 = (MR_Integer) 1;
                STATE_VARIABLE_IntermodInfo_16_16 = STATE_VARIABLE_IntermodInfo_0_3;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr_17, (MR_Integer) 2))));

                transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goals_4_p_0(Goals_55, &STATE_VARIABLE_MayOptExportPred_15_15, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_16_16);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_90 = ((MR_Word) ((MR_hl_field(3, GoalExpr_17, (MR_Integer) 1))));

                transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goals_4_p_0(Goals_90, &STATE_VARIABLE_MayOptExportPred_15_15, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_16_16);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr_17, (MR_Integer) 3))));

                transform_hlds__intermod_decide__gather_entities_to_opt_export_in_cases_4_p_0(Cases_58, &STATE_VARIABLE_MayOptExportPred_15_15, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_16_16);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_91 = ((MR_Word) ((MR_hl_field(3, GoalExpr_17, (MR_Integer) 2))));

                transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(SubGoal_91, &STATE_VARIABLE_MayOptExportPred_15_15, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_16_16);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr_17, (MR_Integer) 2))));
                MR_Word Then_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr_17, (MR_Integer) 3))));
                MR_Word Else_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr_17, (MR_Integer) 4))));
                MR_Word MayOptExportPredCond_63;
                MR_Word MayOptExportPredThen_64;
                MR_Word MayOptExportPredElse_65;
                MR_Word STATE_VARIABLE_IntermodInfo_81_85;
                MR_Word STATE_VARIABLE_IntermodInfo_82_86;

                transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(Cond_60, &MayOptExportPredCond_63, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_81_85);
                transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(Then_61, &MayOptExportPredThen_64, STATE_VARIABLE_IntermodInfo_81_85, &STATE_VARIABLE_IntermodInfo_82_86);
                transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(Else_62, &MayOptExportPredElse_65, STATE_VARIABLE_IntermodInfo_82_86, &STATE_VARIABLE_IntermodInfo_16_16);
                succeeded = (MayOptExportPredCond_63 == (MR_Integer) 1);
                if (succeeded)
                {
                  succeeded = (MayOptExportPredThen_64 == (MR_Integer) 1);
                  if (succeeded)
                    succeeded = (MayOptExportPredElse_65 == (MR_Integer) 1);
                }
                if (succeeded)
                  STATE_VARIABLE_MayOptExportPred_15_15 = (MR_Integer) 1;
                else
                  STATE_VARIABLE_MayOptExportPred_15_15 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr_17, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_68)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod_decide.gather_entities_to_opt_export_in_goal_expr\'/4", (MR_String) "bi_implication");
                      return;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MainGoal_73 = ((MR_Word) ((MR_hl_field(1, ShortHand_68, (MR_Integer) 4))));
                      MR_Word OrElseGoals_74 = ((MR_Word) ((MR_hl_field(1, ShortHand_68, (MR_Integer) 5))));
                      MR_Word MayOptExportPredMain_76;
                      MR_Word MayOptExportPredOrElse_77;
                      MR_Word STATE_VARIABLE_IntermodInfo_86_87;

                      transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goal_4_p_0(MainGoal_73, &MayOptExportPredMain_76, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_86_87);
                      transform_hlds__intermod_decide__gather_entities_to_opt_export_in_goals_4_p_0(OrElseGoals_74, &MayOptExportPredOrElse_77, STATE_VARIABLE_IntermodInfo_86_87, &STATE_VARIABLE_IntermodInfo_16_16);
                      succeeded = (MayOptExportPredMain_76 == (MR_Integer) 1);
                      if (succeeded)
                        succeeded = (MayOptExportPredOrElse_77 == (MR_Integer) 1);
                      if (succeeded)
                        STATE_VARIABLE_MayOptExportPred_15_15 = (MR_Integer) 1;
                      else
                        STATE_VARIABLE_MayOptExportPred_15_15 = (MR_Integer) 0;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      STATE_VARIABLE_MayOptExportPred_15_15 = (MR_Integer) 0;
                      STATE_VARIABLE_IntermodInfo_16_16 = STATE_VARIABLE_IntermodInfo_0_3;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      switch (STATE_VARIABLE_MayOptExportPred_15_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__2_2 = STATE_VARIABLE_MayOptExportPred_15_15;
            *STATE_VARIABLE_IntermodInfo_4 = STATE_VARIABLE_IntermodInfo_16_16;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__1_1 = Goals_9;
            MR_Word next_value_of_STATE_VARIABLE_IntermodInfo_0_3 = STATE_VARIABLE_IntermodInfo_16_16;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            STATE_VARIABLE_IntermodInfo_0_3 = next_value_of_STATE_VARIABLE_IntermodInfo_0_3;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod_decide__intermod_add_pred_4_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__intermod_decide__intermod_add_pred_4_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__ProcId_19 = ((MR_Integer) ((env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__conv0_ProcId_19));
  transform_hlds__intermod_decide__intermod_add_pred_4_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__intermod_decide__intermod_add_pred_4_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Box conv1_ProcInfo_20;

    (env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__TypeCtorInfo_42_42 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0);
    mercury__map__lookup_3_p_0((env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__TypeCtorInfo_41_41, (env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__TypeCtorInfo_42_42, (env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__Procs_17, ((MR_Box) ((env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__ProcId_19)), &conv1_ProcInfo_20);
    (env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__ProcInfo_20 = ((MR_Word) (conv1_ProcInfo_20));
    (env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__Var_29 = (MR_Word) ((MR_Unsigned) 0U);
    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__ProcInfo_20, &(env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__Var_45);
    (env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__TypeInfo_50_50 = (MR_Word) (&transform_hlds__intermod_decide_scalar_common_1[3]);
    (env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__TypeInfo_50_50, ((MR_Box) ((env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__Var_29)), ((MR_Box) ((env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__Var_45)));
    if ((env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded)
      transform_hlds__intermod_decide__intermod_add_pred_4_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__intermod_decide__intermod_add_pred_4_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__commit_0) == 0)
    {
      {
        MR_Word ProcIds_18;

        hlds__hlds_pred__pred_info_get_proc_table_2_p_0((env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__PredInfo_13, &(env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__Procs_17);
        ProcIds_18 = hlds__hlds_pred__pred_info_all_procids_1_f_0((env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__PredInfo_13);
        (env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__TypeCtorInfo_41_41 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0);
        mercury__list__member_2_p_1((env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__TypeCtorInfo_41_41, &(env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__conv0_ProcId_19, ProcIds_18, transform_hlds__intermod_decide__intermod_add_pred_4_p_0_3, env_ptr);
      }
      (env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__intermod_decide__intermod_add_pred_4_p_0(
  MR_Word PredId_5,
  MR_Word * MayOptExportPred_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_8,
  MR_Word * STATE_VARIABLE_IntermodInfo_9)
{
  struct transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0_s env;

  {
    MR_Word Var_10;

    Var_10 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    (env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_5, Var_10);
    if ((env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded)
    {
      *MayOptExportPred_6 = (MR_Integer) 0;
      *STATE_VARIABLE_IntermodInfo_9 = STATE_VARIABLE_IntermodInfo_0_8;
    }
    else
    {
      MR_Word ModuleInfo_12;
      MR_Word PredStatus_14;
      MR_Word Markers_15;

      transform_hlds__intermod_info__intermod_info_get_module_info_2_p_0(STATE_VARIABLE_IntermodInfo_0_8, &ModuleInfo_12);
      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_12, PredId_5, &(env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__PredInfo_13);
      hlds__hlds_pred__pred_info_get_status_2_p_0((env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__PredInfo_13, &PredStatus_14);
      hlds__hlds_pred__pred_info_get_markers_2_p_0((env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__PredInfo_13, &Markers_15);
      (env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0((env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__PredInfo_13);
      if (!((env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded))
      {
        MR_Word Var_16;

        (env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0((env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__PredInfo_13, &Var_16);
      }
      if ((env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded)
      {
        *MayOptExportPred_6 = (MR_Integer) 1;
        *STATE_VARIABLE_IntermodInfo_9 = STATE_VARIABLE_IntermodInfo_0_8;
      }
      else
      {
        (env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_15, (MR_Integer) 3);
        if (!((env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded))
          transform_hlds__intermod_decide__intermod_add_pred_4_p_0_4(&env);
        if ((env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded)
        {
          *MayOptExportPred_6 = (MR_Integer) 0;
          *STATE_VARIABLE_IntermodInfo_9 = STATE_VARIABLE_IntermodInfo_0_8;
        }
        else
        {
          MR_Word Var_46;
          MR_Word Var_31;

          hlds__hlds_pred__pred_info_get_purity_2_p_0((env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__PredInfo_13, &Var_46);
          (env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded = ((MR_Integer) 2 == Var_46);
          if ((env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded)
          {
            Var_31 = (MR_Integer) 24;
            (env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_15, Var_31);
            (env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded = !((env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded);
          }
          if ((env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded)
          {
            *MayOptExportPred_6 = (MR_Integer) 0;
            *STATE_VARIABLE_IntermodInfo_9 = STATE_VARIABLE_IntermodInfo_0_8;
          }
          else
          {
            MR_Word Var_48 = (MR_Word) (PredStatus_14);

            if ((Var_48 == (MR_Word) ((MR_Unsigned) 12U)))
              (env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded = MR_TRUE;
            else
            if (((MR_tag((MR_Word) Var_48)) == (MR_Integer) 1))
            {
              MR_Word OldExternalStatus_21 = ((MR_Word) ((MR_hl_field(1, Var_48, (MR_Integer) 0))));
              MR_Word Var_34;

              Var_34 = hlds__status__old_status_is_exported_1_f_0(OldExternalStatus_21);
              (env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded = (Var_34 == (MR_Integer) 1);
            }
            else
              (env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded = MR_FALSE;
            if ((env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded)
            {
              *MayOptExportPred_6 = (MR_Integer) 1;
              *STATE_VARIABLE_IntermodInfo_9 = STATE_VARIABLE_IntermodInfo_0_8;
            }
            else
            {
              MR_Word Var_35;
              MR_Word Var_47;

              hlds__hlds_pred__pred_info_get_markers_2_p_0((env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__PredInfo_13, &Var_47);
              (env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__intermod_decide_scalar_common_1[4]), ((MR_Box) (Markers_15)), ((MR_Box) (Var_47)));
              if ((env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded)
              {
                Var_35 = (MR_Integer) 11;
                (env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_15, Var_35);
              }
              if ((env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded)
              {
                *MayOptExportPred_6 = (MR_Integer) 1;
                *STATE_VARIABLE_IntermodInfo_9 = STATE_VARIABLE_IntermodInfo_0_8;
              }
              else
              {
                MR_Word Var_36;

                Var_36 = transform_hlds__intermod_status__pred_status_to_write_1_f_0(PredStatus_14);
                (env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded = (Var_36 == (MR_Integer) 1);
                if ((env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded)
                {
                  MR_Word PredDecls0_22;
                  MR_Word PredDecls_23;

                  *MayOptExportPred_6 = (MR_Integer) 1;
                  transform_hlds__intermod_info__intermod_info_get_pred_decls_2_p_0(STATE_VARIABLE_IntermodInfo_0_8, &PredDecls0_22);
                  mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_5)), PredDecls0_22, &PredDecls_23);
                  transform_hlds__intermod_info__intermod_info_set_pred_decls_3_p_0(PredDecls_23, STATE_VARIABLE_IntermodInfo_0_8, STATE_VARIABLE_IntermodInfo_9);
                }
                else
                {
                  MR_Word Var_49 = (MR_Word) (PredStatus_14);

                  if ((Var_49 == (MR_Word) ((MR_Unsigned) 0U)))
                    (env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded = MR_TRUE;
                  else
                  if (((MR_tag((MR_Word) Var_49)) == (MR_Integer) 2))
                    (env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded = MR_TRUE;
                  else
                    (env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded = MR_FALSE;
                  if ((env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__succeeded)
                  {
                    MR_Word PredModule_25;
                    MR_Word Modules0_26;
                    MR_Word Modules_27;

                    *MayOptExportPred_6 = (MR_Integer) 1;
                    PredModule_25 = hlds__hlds_pred__pred_info_module_1_f_0((env).transform_hlds__intermod_decide__intermod_add_pred_4_p_0_env_0__PredInfo_13);
                    transform_hlds__intermod_info__intermod_info_get_use_modules_2_p_0(STATE_VARIABLE_IntermodInfo_0_8, &Modules0_26);
                    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (PredModule_25)), Modules0_26, &Modules_27);
                    transform_hlds__intermod_info__intermod_info_set_use_modules_3_p_0(Modules_27, STATE_VARIABLE_IntermodInfo_0_8, STATE_VARIABLE_IntermodInfo_9);
                  }
                  else
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod_decide.intermod_do_add_pred\'/4", (MR_String) "unexpected status");
                      return;
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

static MR_bool MR_CALL 
transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__intermod_decide__proc_has_a_higher_order_input_arg_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__intermod_decide__proc_eval_method_is_normal_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_5(
  void * env_ptr_arg)
{
  struct transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__Clause1_84 = ((MR_Word) ((env_ptr)->transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__conv1_Clause1_84));
  transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_4(env_ptr);
}

static void MR_CALL 
transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__Goal1_75 = hlds__hlds_clauses__clause_body_1_f_0((env_ptr)->transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__Clause1_84);
  (env_ptr)->transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0((env_ptr)->transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__Goal1_75, (env_ptr)->transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__PredId_7);
  if ((env_ptr)->transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded)
    transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_3(env_ptr);
}

static void MR_CALL 
transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_6(
  void * env_ptr_arg)
{
  struct transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), &(env_ptr)->transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__conv1_Clause1_84, (env_ptr)->transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__Clauses_36, transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_5, env_ptr);
      (env_ptr)->transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
transform_hlds__intermod_decide__should_opt_export_pred_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word PredInfo_8,
  MR_Word Params_9,
  MR_Word TypeSpecForcePreds_10)
{
  struct transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0_s env;

  (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__PredId_7 = PredId_7;
  {
    MR_Word ProcessLocalPreds_11 = ((((MR_Unsigned) ((MR_hl_field(0, Params_9, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, Params_9, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_16 = ((MR_Unsigned) ((MR_hl_field(0, Params_9, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(0, Params_9, (MR_Integer) 1))));
    MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, Params_9, (MR_Integer) 2))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Params_9, (MR_Integer) 0)));

    switch (ProcessLocalPreds_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_8);
          if (!((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded))
            (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_exported_to_submodules_1_p_0(PredInfo_8);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_19;

          hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_8, &Var_19);
          (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = hlds__status____Unify____pred_status_0_0((MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), Var_19);
        }
        break;
    }
    if ((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded)
    {
      {
        MR_Word Var_12;

        (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(PredInfo_8, &Var_12);
      }
      if (!((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded))
      {
        MR_Word TypeCtorInfo_17_31;
        MR_Word TypeCtorInfo_18_32;
        MR_Word Markers_21;
        MR_Word ProcTable_22;
        MR_Word ProcInfos_23;
        MR_Word Var_29;
        MR_Word ClauseInfo_33;
        MR_Word ClausesRep_34;
        MR_Integer Arity_37;
        MR_Word Var_41;
        MR_Word Var_25;
        MR_Word Var_26;
        MR_Word TypeCtorInfo_16_30;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word _ItemNumbers_35;

        hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_8, &Markers_21);
        (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_21, (MR_Integer) 11);
        (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = !((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded);
        if ((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded)
        {
          Var_25 = (MR_Integer) 12;
          (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_21, Var_25);
          (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = !((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded);
          if ((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded)
          {
            Var_26 = (MR_Integer) 0;
            (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_21, Var_26);
            (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = !((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded);
            if ((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded)
            {
              (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_8);
              (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = !((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded);
              if ((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded)
              {
                (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo_8);
                (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = !((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded);
                if ((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded)
                {
                  TypeCtorInfo_16_30 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
                  (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = mercury__set__member_2_p_0(TypeCtorInfo_16_30, ((MR_Box) ((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__PredId_7)), TypeSpecForcePreds_10);
                  (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = !((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded);
                  if ((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded)
                  {
                    Var_27 = (MR_Integer) 8;
                    (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_21, Var_27);
                    (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = !((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded);
                    if ((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded)
                    {
                      Var_28 = (MR_Integer) 9;
                      (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_21, Var_28);
                      (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = !((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded);
                      if ((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded)
                      {
                        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_8, &ProcTable_22);
                        TypeCtorInfo_17_31 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0);
                        TypeCtorInfo_18_32 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0);
                        mercury__map__values_2_p_0(TypeCtorInfo_17_31, TypeCtorInfo_18_32, ProcTable_22, &ProcInfos_23);
                        Var_29 = (MR_Word) (&transform_hlds__intermod_decide_scalar_common_2[1]);
                        (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = mercury__list__all_true_2_p_0(TypeCtorInfo_18_32, Var_29, ProcInfos_23);
                        if ((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded)
                        {
                          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_8, &ClauseInfo_33);
                          hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClauseInfo_33, &ClausesRep_34, &_ItemNumbers_35);
                          hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_34, &(env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__Clauses_36);
                          hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_8, &Var_41);
                          Arity_37 = (MR_Integer) (Var_41);
                          {
                            MR_Integer Var_42;
                            MR_Integer Var_43 = ((MR_Integer) ((MR_hl_field(0, Params_9, (MR_Integer) 1))));
                            MR_Word Var_53 = ((((MR_Unsigned) ((MR_hl_field(0, Params_9, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
                            MR_Word Var_54 = ((((MR_Unsigned) ((MR_hl_field(0, Params_9, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
                            MR_Word Var_55 = ((MR_Unsigned) ((MR_hl_field(0, Params_9, (MR_Integer) 0))) & (MR_Integer) 1);
                            MR_Integer Var_56 = ((MR_Integer) ((MR_hl_field(0, Params_9, (MR_Integer) 2))));
                            MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Params_9, (MR_Integer) 0)));

                            Var_42 = (MR_Integer) ((MR_Unsigned) Var_43 + (MR_Unsigned) Arity_37);
                            (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = transform_hlds__inlining__is_simple_clause_list_2_p_0((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__Clauses_36, Var_42);
                          }
                          if (!((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded))
                          {
                            (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_requested_inlining_1_p_0(PredInfo_8);
                            if (!((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded))
                            {
                              {
                                MR_Word Markers_38;

                                hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_8, &Markers_38);
                                (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_38, (MR_Integer) 24);
                              }
                              if (!((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded))
                              {
                                {
                                  MR_Integer GoalSize_39;
                                  MR_Integer Var_45;
                                  MR_Integer Var_46;
                                  MR_Word ProcTable_69;
                                  MR_Word ProcInfos_70;
                                  MR_Word Var_72;
                                  MR_Word _FirstProcInfoWithHoInput_71;
                                  MR_Box conv0__FirstProcInfoWithHoInput_71;
                                  MR_Word Var_57;
                                  MR_Word Var_58;
                                  MR_Word Var_59;
                                  MR_Integer Var_60;
                                  MR_Unsigned packed_word_2;

                                  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_8, &ProcTable_69);
                                  mercury__map__values_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_69, &ProcInfos_70);
                                  {
                                    Var_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(0, Var_72, 0) = ((MR_Box) (&transform_hlds__intermod_decide_scalar_common_4[0]));
                                    MR_hl_field(0, Var_72, 1) = ((MR_Box) (transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_2));
                                    MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 1));
                                    MR_hl_field(0, Var_72, 3) = ((MR_Box) (ModuleInfo_6));
                                  }
                                  (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = mercury__list__find_first_match_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Var_72, ProcInfos_70, &conv0__FirstProcInfoWithHoInput_71);
                                  if ((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded)
                                  {
                                    _FirstProcInfoWithHoInput_71 = ((MR_Word) (conv0__FirstProcInfoWithHoInput_71));
                                    (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = MR_TRUE;
                                  }
                                  if ((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded)
                                  {
                                    hlds__goal_util__clause_list_size_2_p_0((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__Clauses_36, &GoalSize_39);
                                    packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, Params_9, (MR_Integer) 0)));
                                    Var_57 = ((((MR_Unsigned) ((MR_hl_field(0, Params_9, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
                                    Var_58 = ((((MR_Unsigned) ((MR_hl_field(0, Params_9, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
                                    Var_59 = ((MR_Unsigned) ((MR_hl_field(0, Params_9, (MR_Integer) 0))) & (MR_Integer) 1);
                                    Var_60 = ((MR_Integer) ((MR_hl_field(0, Params_9, (MR_Integer) 1))));
                                    Var_46 = ((MR_Integer) ((MR_hl_field(0, Params_9, (MR_Integer) 2))));
                                    Var_45 = (MR_Integer) ((MR_Unsigned) Var_46 + (MR_Unsigned) Arity_37);
                                    (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = (GoalSize_39 <= Var_45);
                                  }
                                }
                                if (!((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded))
                                {
                                  MR_Integer DeforestThreshold_40;
                                  MR_Word Var_47 = ((MR_Unsigned) ((MR_hl_field(0, Params_9, (MR_Integer) 0))) & (MR_Integer) 1);
                                  MR_Integer Var_48;
                                  MR_Integer Var_50;
                                  MR_Integer Var_51;
                                  MR_Integer Var_52;
                                  MR_Integer Var_63 = ((MR_Integer) ((MR_hl_field(0, Params_9, (MR_Integer) 1))));
                                  MR_Word Var_86;
                                  MR_Word Var_87;
                                  MR_Word Var_61 = ((((MR_Unsigned) ((MR_hl_field(0, Params_9, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
                                  MR_Word Var_62 = ((((MR_Unsigned) ((MR_hl_field(0, Params_9, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
                                  MR_Integer Var_64 = ((MR_Integer) ((MR_hl_field(0, Params_9, (MR_Integer) 2))));
                                  MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, Params_9, (MR_Integer) 0)));

                                  (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = (Var_47 == (MR_Integer) 0);
                                  if ((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded)
                                  {
                                    Var_50 = (MR_Integer) 2;
                                    Var_48 = (MR_Integer) ((MR_Unsigned) Var_63 * (MR_Unsigned) Var_50);
                                    Var_51 = (MR_Integer) 1;
                                    DeforestThreshold_40 = (MR_Integer) ((MR_Unsigned) Var_48 + (MR_Unsigned) Var_51);
                                    Var_52 = (MR_Integer) ((MR_Unsigned) DeforestThreshold_40 + (MR_Unsigned) Arity_37);
                                    (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = transform_hlds__inlining__is_simple_clause_list_2_p_0((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__Clauses_36, Var_52);
                                    if ((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded)
                                    {
                                      transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_6(&env);
                                      if ((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded)
                                      {
                                        (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = ((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__Clauses_36 != (MR_Word) ((MR_Unsigned) 0U));
                                        if ((env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded)
                                        {
                                          Var_87 = ((MR_Word) ((MR_hl_field(1, (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__Clauses_36, (MR_Integer) 0))));
                                          Var_86 = ((MR_Word) ((MR_hl_field(1, (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__Clauses_36, (MR_Integer) 1))));
                                          if ((Var_86 == (MR_Word) ((MR_Unsigned) 0U)))
                                          {
                                            MR_Word Goal2_80;
                                            MR_Word GoalList_81;

                                            Goal2_80 = hlds__hlds_clauses__clause_body_1_f_0(Var_87);
                                            hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal2_80, &GoalList_81);
                                            (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0(GoalList_81, (MR_Integer) 0);
                                          }
                                          else
                                            (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded = MR_TRUE;
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
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return (env).transform_hlds__intermod_decide__should_opt_export_pred_5_p_0_env_0__succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__succeeded = transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0((env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__Goals_4, (env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__FoundBranch_8);
  if ((env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__succeeded)
    transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_1(env_ptr);
}

static void MR_CALL 
transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__commit_0) == 0)
    {
      {
        MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__HeadVar__1_1, (MR_Integer) 0))));
        MR_Word GoalExpr_6;
        MR_Word Var_7;

        (env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__Goals_4 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__HeadVar__1_1, (MR_Integer) 1))));
        GoalExpr_6 = ((MR_Word) ((MR_hl_field(0, Goal_3, (MR_Integer) 0))));
        Var_7 = ((MR_Word) ((MR_hl_field(0, Goal_3, (MR_Integer) 1))));
        (env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__succeeded = hlds__goal_util__goal_is_branched_1_p_0(GoalExpr_6);
        if ((env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__succeeded)
        {
          (env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__HeadVar__2_2 == (MR_Integer) 0);
          if ((env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__succeeded)
          {
            (env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__FoundBranch_8 = (MR_Integer) 1;
            (env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__succeeded = MR_TRUE;
          }
        }
        if ((env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__succeeded)
          transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_2(env_ptr);
        {
          MR_Word Var_9;

          Var_9 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(GoalExpr_6);
          (env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__succeeded = (Var_9 == (MR_Integer) 1);
          if ((env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__succeeded)
          {
            (env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__FoundBranch_8 = (env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__HeadVar__2_2;
            (env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__succeeded = MR_TRUE;
          }
          if ((env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__succeeded)
            transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_2(env_ptr);
        }
      }
      (env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  struct transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0_s env;

  (env).transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__HeadVar__1_1 = HeadVar__1_1;
  (env).transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__HeadVar__2_2 = HeadVar__2_2;
  if (((env).transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    (env).transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__succeeded = ((env).transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__HeadVar__2_2 == (MR_Integer) 1);
  else
    transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_3(&env);
  return (env).transform_hlds__intermod_decide__goal_contains_one_branched_goal_acc_2_p_0_env_0__succeeded;
}

static MR_bool MR_CALL 
transform_hlds__intermod_decide____Unify____intermod_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__intermod_decide____Unify____intermod_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod_decide____Compare____intermod_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__intermod_decide____Compare____intermod_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__intermod_decide____Unify____may_opt_export_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__intermod_decide____Unify____may_opt_export_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod_decide____Compare____may_opt_export_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__intermod_decide____Compare____may_opt_export_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__intermod_decide____Unify____maybe_collect_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__intermod_decide____Unify____maybe_collect_types_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod_decide____Compare____maybe_collect_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__intermod_decide____Compare____maybe_collect_types_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__intermod_decide____Unify____maybe_process_local_preds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__intermod_decide____Unify____maybe_process_local_preds_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod_decide____Compare____maybe_process_local_preds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__intermod_decide____Compare____maybe_process_local_preds_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__intermod_decide__init(void)
{
}

void mercury__transform_hlds__intermod_decide__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__intermod_decide__transform_hlds__intermod_decide__type_ctor_info_intermod_params_0);
	MR_register_type_ctor_info(&transform_hlds__intermod_decide__transform_hlds__intermod_decide__type_ctor_info_may_opt_export_pred_0);
	MR_register_type_ctor_info(&transform_hlds__intermod_decide__transform_hlds__intermod_decide__type_ctor_info_maybe_collect_types_0);
	MR_register_type_ctor_info(&transform_hlds__intermod_decide__transform_hlds__intermod_decide__type_ctor_info_maybe_process_local_preds_0);
}

void mercury__transform_hlds__intermod_decide__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__intermod_decide__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.intermod_decide.
