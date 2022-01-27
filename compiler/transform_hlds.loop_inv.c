/*
** Automatically generated from `loop_inv.m'
** by the Mercury compiler,
** version rotd-2021-04-14
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


// :- module transform_hlds.loop_inv.
// :- implementation.

/*
INIT mercury__transform_hlds__loop_inv__init
ENDINIT
*/

#include "transform_hlds.loop_inv.mih"


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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s {
  MR_Word transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7;
  MR_bool transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded;
  MR_Word transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Modes_73;
  jmp_buf transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__commit_0;
  MR_Word transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__InitialInst_83;
  MR_Word transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__FinalInst_84;
  MR_Word transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Mode_85;
  MR_Box transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__conv0_Mode_85;
};

struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s {
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUVs_9;
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10;
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IGs0_11;
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IVs0_13;
  MR_bool transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded;
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Inputs_49;
  jmp_buf transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_0;
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__InvariantGoal_17;
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19;
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21;
  MR_Box transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv0_InvariantGoal_17;
  jmp_buf transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_1;
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeCtorInfo_9_45;
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__NonLocals_42;
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUV_43;
  MR_Box transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv1_UUV_43;
  jmp_buf transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_2;
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeInfo_9_51;
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__V_50;
  MR_Box transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv2_V_50;
};

struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s {
  MR_Word transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goalss_3;
  MR_Word transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goal_4;
  MR_bool transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded;
  jmp_buf transform_hlds__loop_inv__common_goal_2_p_0_env_0__commit_0;
  MR_Word transform_hlds__loop_inv__common_goal_2_p_0_env_0__Gs_5;
  MR_Box transform_hlds__loop_inv__common_goal_2_p_0_env_0__conv0_Gs_5;
  jmp_buf transform_hlds__loop_inv__common_goal_2_p_0_env_0__commit_1;
  MR_Word transform_hlds__loop_inv__common_goal_2_p_0_env_0__G_6;
  MR_Word transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9;
  MR_Word transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11;
  MR_Box transform_hlds__loop_inv__common_goal_2_p_0_env_0__conv1_G_6;
};

struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s {
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__Goal_5;
  MR_bool transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded;
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__Var_7;
  jmp_buf transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__commit_0;
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__InvariantGoal_13;
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15;
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17;
  MR_Box transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__conv0_InvariantGoal_13;
};


static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__loop_inv__transform_hlds__loop_inv__field_types_gen_aux_proc_info_0_0[4];

static const MR_ConstString transform_hlds__loop_inv__transform_hlds__loop_inv__field_names_gen_aux_proc_info_0_0[4];

static const MR_DuFunctorDesc transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_gen_aux_proc_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_gen_aux_proc_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_gen_aux_proc_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_name_ordered_gen_aux_proc_info_0[1];

static const MR_Integer transform_hlds__loop_inv__transform_hlds__loop_inv__functor_number_map_gen_aux_proc_info_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__loop_inv__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo transform_hlds__loop_inv__transform_hlds__loop_inv__field_types_igc_info_0_0[3];

static const MR_ConstString transform_hlds__loop_inv__transform_hlds__loop_inv__field_names_igc_info_0_0[3];

static const MR_DuFunctorDesc transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_igc_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_igc_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_igc_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_name_ordered_igc_info_0[1];

static const MR_Integer transform_hlds__loop_inv__transform_hlds__loop_inv__functor_number_map_igc_info_0[1];

static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__case_goals__1151__1_1_f_0(
  MR_Word LambdaHeadVar__1_8);

static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__compute_initial_aux_instmap__728__1_2_f_0(
  MR_Word LambdaHeadVar__1_12,
  MR_Word LambdaHeadVar__2_13);

static MR_bool MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__pred__inv_args__501__1_2_p_0(
  MR_Word HeadVar__1_27,
  MR_Word * HeadVar__2_28);

static void MR_CALL 
transform_hlds__loop_inv____Compare____rec_call_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____rec_call_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__loop_inv____Compare____igc_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____igc_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__loop_inv__is_output_arg_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Var_6,
  MR_Word Mode_7,
  MR_Word * Var_4);

static MR_bool MR_CALL 
transform_hlds__loop_inv__is_input_arg_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Var_6,
  MR_Word Mode_7,
  MR_Word * Var_4);

static MR_bool MR_CALL 
transform_hlds__loop_inv__uniquely_used_args_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word X_6,
  MR_Word M_7,
  MR_Word * X_4);

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_case_4_p_0(
  MR_Word PPId_5,
  MR_Word Replacement_6,
  MR_Word Case_7,
  MR_Word * AuxCase_8);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_case_3_p_0(
  MR_Word Info_4,
  MR_Word Case_5,
  MR_Word * AuxCase_6);

static void MR_CALL 
transform_hlds__loop_inv__add_output_4_p_0(
  MR_Word UniquelyUsedVars_5,
  MR_Word X_6,
  MR_Word STATE_VARIABLE_InvVars_0_8,
  MR_Word * STATE_VARIABLE_InvVars_9);

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_DHGs_0_11,
  MR_Word * STATE_VARIABLE_DHGs_12,
  MR_Word STATE_VARIABLE_DHVs_0_13,
  MR_Word * STATE_VARIABLE_DHVs_14);

static void MR_CALL 
transform_hlds__loop_inv__add_outputs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__loop_inv__add_outputs_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word UUVs_7,
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_InvVars_0_10,
  MR_Word * STATE_VARIABLE_InvVars_11);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_9(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_11(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_10(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_12(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word UUVs_9,
  MR_Word Goal_10,
  MR_Word IGs0_11,
  MR_Word * IGs_12,
  MR_Word IVs0_13,
  MR_Word * IVs_14);

static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Goal_5);

static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Goal_5);

static MR_Word MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word Y_2);

static MR_Box MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word MaybeInvArgs_6);

static MR_Word MR_CALL 
transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Arg_6,
  MR_Word Mode_7);

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_8(
  void * env_ptr_arg);

static MR_bool MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0(
  MR_Word Goalss_3,
  MR_Word Goal_4);

static MR_bool MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Goal_5);

static MR_Word MR_CALL 
transform_hlds__loop_inv__argmodes_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Integer ProcId_7);

static MR_Box MR_CALL 
transform_hlds__loop_inv__case_goals_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
transform_hlds__loop_inv__case_goals_1_f_0(
  MR_Word Cases_3);

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_8_p_0(
  MR_Word PredProcId_9,
  MR_Word PredInfo0_10,
  MR_Word ProcInfo0_11,
  MR_Word * ProcInfo_12,
  MR_Word Replacement_13,
  MR_Word Body0_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26);

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(
  MR_Word PPId_5,
  MR_Word Replacement_6,
  MR_Word Goal_7,
  MR_Word * AuxGoal_8);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_9_p_0(
  MR_Word InvGoals_10,
  MR_Word PredProcId_11,
  MR_Word AuxPredProcId_12,
  MR_Word Replacement_13,
  MR_Word Body_14,
  MR_Word AuxPredInfo_15,
  MR_Word STATE_VARIABLE_AuxProcInfo_0_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(
  MR_Word Info_4,
  MR_Word Goal_5,
  MR_Word * AuxGoal_6);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_call_3_p_0(
  MR_Word Replacement_4,
  MR_Word CallGoal_5,
  MR_Word * AuxCallGoal_6);

static void MR_CALL 
transform_hlds__loop_inv__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0(
  MR_Word Info_4,
  MR_Word Goal_5,
  MR_Word * AuxGoal_6);

static void MR_CALL 
transform_hlds__loop_inv__create_aux_pred_10_p_0(
  MR_Word PredProcId_11,
  MR_Word HeadVars_12,
  MR_Word ComputedInvArgs_13,
  MR_Word InitialAuxInstMap_14,
  MR_Word * AuxPredProcId_15,
  MR_Word * Replacement_16,
  MR_Word * AuxPredInfo_17,
  MR_Word * AuxProcInfo_18,
  MR_Word ModuleInfo0_19,
  MR_Word * ModuleInfo_20);

static MR_Box MR_CALL 
transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0(
  MR_Word Gs_4,
  MR_Word IM_5);

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word InvGoals_6,
  MR_Word * DontHoistGoals_7,
  MR_Word * DontHoistVars_8);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word UniquelyUsedVars_8,
  MR_Word InvGoals0_9,
  MR_Word * InvGoals_10,
  MR_Word InvVars0_11,
  MR_Word * InvVars_12);

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(
  MR_Word PPId_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_IGCs_0_47,
  MR_Word * STATE_VARIABLE_IGCs_48);

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_switch_4_p_0(
  MR_Word PPId_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_IGCs_0_3,
  MR_Word * STATE_VARIABLE_IGCs_4);

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_disj_4_p_0(
  MR_Word PPId_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_IGCs_0_3,
  MR_Word * STATE_VARIABLE_IGCs_4);

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_parallel_conj_4_p_0(
  MR_Word PPId_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_IGCs_0_3,
  MR_Word * STATE_VARIABLE_IGCs_4);

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_plain_conj_4_p_0(
  MR_Word PPId_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_IGCs_0_3,
  MR_Word * STATE_VARIABLE_IGCs_4);

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_4_p_0(
  MR_Word PPId_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_IGCs_0_9,
  MR_Word * STATE_VARIABLE_IGCs_10);

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_handle_primitive_goal_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_IGCs_0_13,
  MR_Word * STATE_VARIABLE_IGCs_14);

static MR_bool MR_CALL 
transform_hlds__loop_inv__all_instmap_deltas_are_ground_2_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__loop_inv__add_recursive_call_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_IGCs_0_7,
  MR_Word * STATE_VARIABLE_IGCs_8);

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____igc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__loop_inv____Compare____igc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____rec_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__loop_inv____Compare____rec_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_2[13][3];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_3[1][10];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_4[1][9];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_5[6][6];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_6[1][1];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_7[5][7];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_8[5][5];




static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_1[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_2[13][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__loop_inv__case_goals_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_8[1])),
    ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_8[1])),
    ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4])),
    ((MR_Box) (transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_8[3])),
    ((MR_Box) (transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[5])),
    ((MR_Box) (transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_8[1])),
    ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_8[4])),
    ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_8[4])),
    ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_8[1])),
    ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_8[4])),
    ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_3[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_4[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_5[6][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__loop_inv__transform_hlds__loop_inv__type_ctor_info_gen_aux_proc_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__loop_inv__transform_hlds__loop_inv__type_ctor_info_gen_aux_proc_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__loop_inv__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__loop_inv__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_6[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_7[5][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&transform_hlds__loop_inv__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_8[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__loop_inv__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__loop_inv__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__loop_inv__transform_hlds__loop_inv__field_types_gen_aux_proc_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
};

static const MR_ConstString transform_hlds__loop_inv__transform_hlds__loop_inv__field_names_gen_aux_proc_info_0_0[4] = {
  (MR_String) "gapi_module_info",
  (MR_String) "gapi_inv_goals",
  (MR_String) "gapi_pred_proc_id",
  (MR_String) "gapi_replament_goal"
};

static const MR_DuFunctorDesc transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_gen_aux_proc_info_0_0 = {
  (MR_String) "gen_aux_proc_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__loop_inv__transform_hlds__loop_inv__field_types_gen_aux_proc_info_0_0,
  transform_hlds__loop_inv__transform_hlds__loop_inv__field_names_gen_aux_proc_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_gen_aux_proc_info_0_0[1] = {
  &transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_gen_aux_proc_info_0_0
};

static const MR_DuPtagLayout transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_gen_aux_proc_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_gen_aux_proc_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_name_ordered_gen_aux_proc_info_0[1] = {
  &transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_gen_aux_proc_info_0_0
};

static const MR_Integer transform_hlds__loop_inv__transform_hlds__loop_inv__functor_number_map_gen_aux_proc_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__loop_inv__transform_hlds__loop_inv__type_ctor_info_gen_aux_proc_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0_10001)),
  ((MR_Box) (transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0_10001)),
  (MR_String) "transform_hlds.loop_inv",
  (MR_String) "gen_aux_proc_info",
  {     transform_hlds__loop_inv__transform_hlds__loop_inv__du_name_ordered_gen_aux_proc_info_0 },
  {     transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_gen_aux_proc_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__loop_inv__transform_hlds__loop_inv__functor_number_map_gen_aux_proc_info_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__loop_inv__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
    (MR_TypeInfo) (&transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__loop_inv__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__loop_inv__transform_hlds__loop_inv__field_types_igc_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__loop_inv__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&transform_hlds__loop_inv__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0)
};

static const MR_ConstString transform_hlds__loop_inv__transform_hlds__loop_inv__field_names_igc_info_0_0[3] = {
  (MR_String) "igc_module_info",
  (MR_String) "igc_path_candidates",
  (MR_String) "igc_rec_calls"
};

static const MR_DuFunctorDesc transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_igc_info_0_0 = {
  (MR_String) "igc_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__loop_inv__transform_hlds__loop_inv__field_types_igc_info_0_0,
  transform_hlds__loop_inv__transform_hlds__loop_inv__field_names_igc_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_igc_info_0_0[1] = {
  &transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_igc_info_0_0
};

static const MR_DuPtagLayout transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_igc_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_igc_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_name_ordered_igc_info_0[1] = {
  &transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_igc_info_0_0
};

static const MR_Integer transform_hlds__loop_inv__transform_hlds__loop_inv__functor_number_map_igc_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__loop_inv__transform_hlds__loop_inv__type_ctor_info_igc_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__loop_inv____Unify____igc_info_0_0_10001)),
  ((MR_Box) (transform_hlds__loop_inv____Compare____igc_info_0_0_10001)),
  (MR_String) "transform_hlds.loop_inv",
  (MR_String) "igc_info",
  {     transform_hlds__loop_inv__transform_hlds__loop_inv__du_name_ordered_igc_info_0 },
  {     transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_igc_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__loop_inv__transform_hlds__loop_inv__functor_number_map_igc_info_0,

};

const MR_TypeCtorInfo_Struct transform_hlds__loop_inv__transform_hlds__loop_inv__type_ctor_info_rec_call_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__loop_inv____Unify____rec_call_0_0_10001)),
  ((MR_Box) (transform_hlds__loop_inv____Compare____rec_call_0_0_10001)),
  (MR_String) "transform_hlds.loop_inv",
  (MR_String) "rec_call",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__loop_inv__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__case_goals__1151__1_1_f_0(
  MR_Word LambdaHeadVar__1_8)
{
  {
    MR_Word LambdaHeadVar__2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_8, (MR_Integer) 2))));

    return LambdaHeadVar__2_9;
  }
}

static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__compute_initial_aux_instmap__728__1_2_f_0(
  MR_Word LambdaHeadVar__1_12,
  MR_Word LambdaHeadVar__2_13)
{
  {
    MR_Word LambdaHeadVar__3_14;
    MR_Word IMD_11;
    MR_Word GoalInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_12, (MR_Integer) 1))));

    IMD_11 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_17);
    hlds__instmap__apply_instmap_delta_3_p_0(IMD_11, LambdaHeadVar__2_13, &LambdaHeadVar__3_14);
    return LambdaHeadVar__3_14;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__pred__inv_args__501__1_2_p_0(
  MR_Word HeadVar__1_27,
  MR_Word * HeadVar__2_28)
{
  {
    MR_bool succeeded;
    MR_Box conv0_HeadVar__2_28;

    succeeded = mercury__maybe__maybe_is_yes_2_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), HeadVar__1_27, &conv0_HeadVar__2_28);
    if (succeeded)
    {
      *HeadVar__2_28 = ((MR_Word) (conv0_HeadVar__2_28));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__loop_inv____Compare____rec_call_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____rec_call_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__loop_inv____Compare____igc_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____igc_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[6]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
            hlds__hlds_goal____Compare____hlds_goal_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_14_14;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
            succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__is_output_arg_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Var_6,
  MR_Word Mode_7,
  MR_Word * Var_4)
{
  {
    MR_bool succeeded;

    *Var_4 = Var_6;
    succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0(ModuleInfo_5, Mode_7);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__is_input_arg_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Var_6,
  MR_Word Mode_7,
  MR_Word * Var_4)
{
  {
    MR_bool succeeded;
    MR_Word InitInst_8;
    MR_Word _FinalInst_9;

    *Var_4 = Var_6;
    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_5, Mode_7, &InitInst_8, &_FinalInst_9);
    succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_5, InitInst_8);
    succeeded = !(succeeded);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__uniquely_used_args_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word X_6,
  MR_Word M_7,
  MR_Word * X_4)
{
  {
    MR_bool succeeded;
    MR_Word InInst_8;
    MR_Word _OutInst_9;

    *X_4 = X_6;
    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_5, M_7, &InInst_8, &_OutInst_9);
    succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_5, InInst_8);
    succeeded = !(succeeded);
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_case_4_p_0(
  MR_Word PPId_5,
  MR_Word Replacement_6,
  MR_Word Case_7,
  MR_Word * AuxCase_8)
{
  {
    MR_Word MainConsId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_7, (MR_Integer) 0))));
    MR_Word OtherConsIds_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_7, (MR_Integer) 1))));
    MR_Word Goal_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_7, (MR_Integer) 2))));
    MR_Word AuxGoal_12;

    transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(PPId_5, Replacement_6, Goal_11, &AuxGoal_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *AuxCase_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (AuxGoal_12));
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_case_3_p_0(
  MR_Word Info_4,
  MR_Word Case_5,
  MR_Word * AuxCase_6)
{
  {
    MR_Word MainConsId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_5, (MR_Integer) 0))));
    MR_Word OtherConsIds_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_5, (MR_Integer) 1))));
    MR_Word Goal_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_5, (MR_Integer) 2))));
    MR_Word AuxGoal_10;

    transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(Info_4, Goal_9, &AuxGoal_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *AuxCase_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (AuxGoal_10));
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__add_output_4_p_0(
  MR_Word UniquelyUsedVars_5,
  MR_Word X_6,
  MR_Word STATE_VARIABLE_InvVars_0_8,
  MR_Word * STATE_VARIABLE_InvVars_9)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_12_12;

    succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), ((MR_Box) (X_6)), STATE_VARIABLE_InvVars_0_8);
    succeeded = !(succeeded);
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]);
      succeeded = mercury__list__member_2_p_0(TypeInfo_12_12, ((MR_Box) (X_6)), UniquelyUsedVars_5);
      succeeded = !(succeeded);
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_InvVars_9 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (X_6));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_InvVars_0_8));
      }
    else
      *STATE_VARIABLE_InvVars_9 = STATE_VARIABLE_InvVars_0_8;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Mode_85 = ((MR_Word) ((env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__conv0_Mode_85));
    transform_hlds__loop_inv__do_not_hoist_2_6_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s *) (env_ptr_arg);

    check_hlds__mode_util__mode_get_insts_4_p_0((env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, (env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Mode_85, &(env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__InitialInst_83, &(env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__FinalInst_84);
    (env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = check_hlds__inst_util__inst_contains_any_2_p_0((env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, (env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__InitialInst_83);
    if (!((env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
      (env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = check_hlds__inst_util__inst_contains_any_2_p_0((env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, (env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__FinalInst_84);
    if ((env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
      transform_hlds__loop_inv__do_not_hoist_2_6_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), &(env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__conv0_Mode_85, (env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Modes_73, transform_hlds__loop_inv__do_not_hoist_2_6_p_0_3, env_ptr);
        (env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_DHGs_0_11,
  MR_Word * STATE_VARIABLE_DHGs_12,
  MR_Word STATE_VARIABLE_DHVs_0_13,
  MR_Word * STATE_VARIABLE_DHVs_14)
{
  {
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s env;

    (env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7 = ModuleInfo_7;
    {
      MR_Word GoalExpr_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));
      MR_Word Construction_21;
      MR_Word Var_42;
      MR_Word Var_44;
      MR_Word _GoalInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1))));
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_43;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Unsigned packed_word_0;

      (env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) GoalExpr_19)) == (MR_Integer) 1);
      if ((env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
      {
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_19, (MR_Integer) 0))));
        Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_19, (MR_Integer) 1))));
        Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_19, (MR_Integer) 2))));
        Construction_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_19, (MR_Integer) 3))));
        Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_19, (MR_Integer) 4))));
        (env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) Construction_21)) == (MR_Integer) 0);
        if ((env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
        {
          Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Construction_21, (MR_Integer) 0))));
          Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Construction_21, (MR_Integer) 1))));
          Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Construction_21, (MR_Integer) 2))));
          Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Construction_21, (MR_Integer) 3))));
          Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Construction_21, (MR_Integer) 4))));
          packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Construction_21, (MR_Integer) 5)));
          Var_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Construction_21, (MR_Integer) 5))) & (MR_Integer) 1);
          Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Construction_21, (MR_Integer) 6))));
          (env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
          if (!((env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
            (env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (!((env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
    {
      {
        MR_Word GoalExpr_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));
        MR_Word Var_55;
        MR_Word _GoalInfo_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1))));
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Unsigned packed_word_1;

        (env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) GoalExpr_47)) == (MR_Integer) 1);
        if ((env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
        {
          Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_47, (MR_Integer) 0))));
          Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_47, (MR_Integer) 1))));
          Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_47, (MR_Integer) 2))));
          Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_47, (MR_Integer) 3))));
          Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_47, (MR_Integer) 4))));
          (env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_Integer) 1);
          if ((env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
          {
            Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_55, (MR_Integer) 0))));
            Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_55, (MR_Integer) 1))));
            Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_55, (MR_Integer) 2))));
            Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_55, (MR_Integer) 3))));
            packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_55, (MR_Integer) 4)));
            Var_53 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_55, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
            Var_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_55, (MR_Integer) 4))) & (MR_Integer) 1);
          }
        }
      }
      if (!((env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
      {
        {
          MR_Word Var_61;

          Var_61 = hlds__hlds_goal__goal_get_purity_1_f_0(Goal_8);
          (env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = (Var_61 == (MR_Integer) 2);
        }
        if (!((env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
        {
          {
            MR_Word GoalInfo_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1))));
            MR_Word Detism_64;
            MR_Word MaxSolns_66;
            MR_Word _GoalExpr_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));
            MR_Word _CanFail_65;

            Detism_64 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_63);
            parse_tree__prog_data__determinism_components_3_p_0(Detism_64, &_CanFail_65, &MaxSolns_66);
            (env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = (MaxSolns_66 == (MR_Integer) 0);
          }
          if (!((env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
          {
            MR_Word GoalExpr_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));
            MR_Word _GoalInfo_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1))));

            if (((MR_tag((MR_Word) GoalExpr_69)) == (MR_Integer) 2))
            {
              MR_Word PredId_76 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_69, (MR_Integer) 0))));
              MR_Integer ProcId_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_69, (MR_Integer) 1))));
              MR_Word ProcInfo_92;
              MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_69, (MR_Integer) 2))));
              MR_Word Var_79 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_69, (MR_Integer) 3))) & (MR_Integer) 1);
              MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_69, (MR_Integer) 4))));
              MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_69, (MR_Integer) 5))));
              MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_69, (MR_Integer) 3)));
              MR_Word Var_91;

              hlds__hlds_module__module_info_pred_proc_info_5_p_0((env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, PredId_76, ProcId_77, &Var_91, &ProcInfo_92);
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_92, &(env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Modes_73);
              (env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_TRUE;
            }
            else
            if (((((MR_tag((MR_Word) GoalExpr_69)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_69, (MR_Integer) 0)))) == (MR_Integer) 0))))
            {
              MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_69, (MR_Integer) 1))));
              MR_Word Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_69, (MR_Integer) 2))));
              MR_Word Var_74;
              MR_Word Var_75;
              MR_Unsigned packed_word_3;

              (env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Modes_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_69, (MR_Integer) 3))));
              Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_69, (MR_Integer) 4))));
              packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_69, (MR_Integer) 5)));
              Var_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_69, (MR_Integer) 5))) & (MR_Integer) 7);
              (env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_TRUE;
            }
            else
              (env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_FALSE;
            if ((env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
              transform_hlds__loop_inv__do_not_hoist_2_6_p_0_4(&env);
          }
        }
      }
    }
    if ((env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
    {
      mercury__list__cons_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_8)), STATE_VARIABLE_DHGs_0_11, STATE_VARIABLE_DHGs_12);
      transform_hlds__loop_inv__add_outputs_5_p_0((env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, (MR_Word) ((MR_Unsigned) 0U), Goal_8, STATE_VARIABLE_DHVs_0_13, STATE_VARIABLE_DHVs_14);
    }
    else
    {
      *STATE_VARIABLE_DHVs_14 = STATE_VARIABLE_DHVs_0_13;
      *STATE_VARIABLE_DHGs_12 = STATE_VARIABLE_DHGs_0_11;
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__add_outputs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_InvVars_9;

    transform_hlds__loop_inv__add_output_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvVars_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InvVars_9));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__add_outputs_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word UUVs_7,
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_InvVars_0_10,
  MR_Word * STATE_VARIABLE_InvVars_11)
{
  {
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Box conv1_STATE_VARIABLE_InvVars_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_7[4]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (transform_hlds__loop_inv__add_outputs_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (UUVs_7));
    }
    Var_13 = transform_hlds__loop_inv__goal_outputs_2_f_0(ModuleInfo_6, Goal_8);
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[4]), Var_12, Var_13, ((MR_Box) (STATE_VARIABLE_InvVars_0_10)), &conv1_STATE_VARIABLE_InvVars_11);
    *STATE_VARIABLE_InvVars_11 = ((MR_Word) (conv1_STATE_VARIABLE_InvVars_11));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_InvVars_9;

    transform_hlds__loop_inv__add_output_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_InvVars_9);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_InvVars_9));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__InvariantGoal_17 = ((MR_Word) ((env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv0_InvariantGoal_17));
    transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_20;
      MR_Word Var_22;

      (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__InvariantGoal_17, (MR_Integer) 0))));
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__InvariantGoal_17, (MR_Integer) 1))));
      (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10, (MR_Integer) 0))));
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10, (MR_Integer) 1))));
      (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0((env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21);
      if (!((env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded))
      {
        MR_Word TypeInfo_22_38;
        MR_Word PredId_23;
        MR_Integer ProcId_24;
        MR_Word Args_25;
        MR_Word Var_32;
        MR_Integer Var_33;
        MR_Word Var_34;
        MR_Word _BuiltinX_26;
        MR_Word _ContextX_27;
        MR_Word _SymNameX_28;
        MR_Unsigned packed_word_0;
        MR_Word _BuiltinY_29;
        MR_Word _ContextY_30;
        MR_Word _SymNameY_31;
        MR_Unsigned packed_word_1;

        (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19)) == (MR_Integer) 2);
        if ((env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
        {
          PredId_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 0))));
          ProcId_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 1))));
          Args_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 2))));
          packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 3)));
          _BuiltinX_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 3))) & (MR_Integer) 1);
          _ContextX_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 4))));
          _SymNameX_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 5))));
          (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21)) == (MR_Integer) 2);
          if ((env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
          {
            Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 0))));
            Var_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 1))));
            Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 2))));
            packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 3)));
            _BuiltinY_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 3))) & (MR_Integer) 1);
            _ContextY_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 4))));
            _SymNameY_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 5))));
            (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_23, Var_32);
            if ((env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
            {
              (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = (ProcId_24 == Var_33);
              if ((env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
              {
                TypeInfo_22_38 = (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[4]);
                (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_38, ((MR_Box) (Args_25)), ((MR_Box) (Var_34)));
              }
            }
          }
        }
      }
      if ((env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
        transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), &(env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv0_InvariantGoal_17, (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IGs0_11, transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_3, env_ptr);
        (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_5(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_7(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUV_43 = ((MR_Word) ((env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv1_UUV_43));
    transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_6(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_6(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeCtorInfo_9_45 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeCtorInfo_9_45, (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__NonLocals_42, (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUV_43);
    if ((env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
      transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_5(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_8(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_1) == 0)
      {
        {
          MR_Word GoalInfo_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10, (MR_Integer) 1))));
          MR_Word _GoalExpr_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10, (MR_Integer) 0))));

          (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__NonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_41);
          mercury__list__member_2_p_1((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), &(env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv1_UUV_43, (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUVs_9, transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_7, env_ptr);
        }
        (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_9(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_2, 1);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_11(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__V_50 = ((MR_Word) ((env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv2_V_50));
    transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_10(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_10(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = mercury__list__member_2_p_0((env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeInfo_9_51, ((MR_Box) ((env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__V_50)), (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IVs0_13);
    (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded);
    if ((env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
      transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_9(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_12(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_2) == 0)
      {
        (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeInfo_9_51 = (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]);
        mercury__list__member_2_p_1((env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeInfo_9_51, &(env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv2_V_50, (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Inputs_49, transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_11, env_ptr);
        (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word UUVs_9,
  MR_Word Goal_10,
  MR_Word IGs0_11,
  MR_Word * IGs_12,
  MR_Word IVs0_13,
  MR_Word * IVs_14)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s env;

    (env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUVs_9 = UUVs_9;
    (env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10 = Goal_10;
    (env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IGs0_11 = IGs0_11;
    (env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IVs0_13 = IVs0_13;
    transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_4(&env);
    (env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = !((env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded);
    if ((env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
    {
      transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_8(&env);
      (env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = !((env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded);
      if ((env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
      {
        (env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Inputs_49 = transform_hlds__loop_inv__goal_inputs_2_f_0(ModuleInfo_8, (env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10);
        transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_12(&env);
        (env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = !((env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded);
      }
    }
    if ((env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
    {
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Box conv4_IVs_14;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *IGs_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IGs0_11));
      }
      {
        Var_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_7[4]));
        MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_13));
        MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) ((env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUVs_9));
      }
      Var_59 = transform_hlds__loop_inv__goal_outputs_2_f_0(ModuleInfo_8, (env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10);
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[4]), Var_58, Var_59, ((MR_Box) ((env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IVs0_13)), &conv4_IVs_14);
      *IVs_14 = ((MR_Word) (conv4_IVs_14));
    }
    else
    {
      *IGs_12 = (env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IGs0_11;
      *IVs_14 = (env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IVs0_13;
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_2;

    conv5_HeadVar__2_2 = check_hlds__mode_util__unify_mode_to_rhs_mode_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv4_Var_4;

    succeeded = transform_hlds__loop_inv__is_output_arg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_Var_4);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv4_Var_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv3_Var_4;

    succeeded = transform_hlds__loop_inv__is_output_arg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Var_4);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv3_Var_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv2_Var_4;

    succeeded = transform_hlds__loop_inv__is_output_arg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Var_4);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv2_Var_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_Var_4;

    succeeded = transform_hlds__loop_inv__is_output_arg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Var_4);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_Var_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Goal_5)
{
  {
    MR_bool succeeded;
    MR_Word Outputs_6;
    MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) GoalExpr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.loop_inv.goal_outputs\'/2", (MR_String) "compound goal");
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_7, (MR_Integer) 0))));
          MR_Word Kind_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_7, (MR_Integer) 3))));

          switch (MR_tag((MR_Word) Kind_27)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Outputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Outputs_6, 0) = ((MR_Box) (LHS_24));
                MR_hl_field(MR_mktag(1), Outputs_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word RHSArgs_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Kind_27, (MR_Integer) 2))));
                MR_Word Var_65;
                MR_Word Var_66;
                MR_Word ArgModes_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Kind_27, (MR_Integer) 3))));

                {
                  Var_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_7[2]));
                  MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_5));
                  MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (ModuleInfo_4));
                }
                Var_66 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_2[12]), ArgModes_79);
                mercury__list__filter_map_corresponding_4_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), Var_65, RHSArgs_38, Var_66, &Outputs_6);
              }
              break;
            case (MR_Integer) 2:
              {
                Outputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Outputs_6, 0) = ((MR_Box) (LHS_24));
                MR_hl_field(MR_mktag(1), Outputs_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Kind_27, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Outputs_6 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 1:
                  Outputs_6 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 0))));
          MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 1))));
          MR_Word Args_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 2))));
          MR_Word Var_74;
          MR_Word Var_75;

          {
            Var_74 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_7[2]));
            MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_4));
            MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (ModuleInfo_4));
          }
          Var_75 = transform_hlds__loop_inv__argmodes_3_f_0(ModuleInfo_4, PredId_9, ProcId_10);
          mercury__list__filter_map_corresponding_4_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), Var_74, Args_11, Var_75, &Outputs_6);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgModes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
              MR_Word Var_73;
              MR_Word Args_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));

              {
                Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_7[2]));
                MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_3));
                MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (ModuleInfo_4));
              }
              mercury__list__filter_map_corresponding_4_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), Var_73, Args_76, ArgModes_16, &Outputs_6);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignArgs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 4))));
              MR_Word Var_69;
              MR_Word Var_70;
              MR_Word Var_71;
              MR_Word PredId_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
              MR_Integer ProcId_78 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));

              {
                Var_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_7[2]));
                MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_1));
                MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (ModuleInfo_4));
              }
              Var_70 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), (MR_Word) (&transform_hlds__loop_inv_scalar_common_2[11]), ForeignArgs_20);
              Var_71 = transform_hlds__loop_inv__argmodes_3_f_0(ModuleInfo_4, PredId_77, ProcId_78);
              mercury__list__filter_map_corresponding_4_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), Var_69, Var_70, Var_71, &Outputs_6);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.loop_inv.goal_outputs\'/2", (MR_String) "compound goal");
            break;
        }
        break;
    }
    return Outputs_6;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__2_2;

    conv7_HeadVar__2_2 = check_hlds__mode_util__unify_mode_to_rhs_mode_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv6_Var_4;

    succeeded = transform_hlds__loop_inv__is_input_arg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_Var_4);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv6_Var_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_2;

    conv5_HeadVar__2_2 = check_hlds__mode_util__unify_mode_to_rhs_mode_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv4_Var_4;

    succeeded = transform_hlds__loop_inv__is_input_arg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_Var_4);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv4_Var_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv3_Var_4;

    succeeded = transform_hlds__loop_inv__is_input_arg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Var_4);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv3_Var_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv2_Var_4;

    succeeded = transform_hlds__loop_inv__is_input_arg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Var_4);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv2_Var_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_Var_4;

    succeeded = transform_hlds__loop_inv__is_input_arg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Var_4);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_Var_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Goal_5)
{
  {
    MR_bool succeeded;
    MR_Word Inputs_6;
    MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) GoalExpr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.loop_inv.goal_inputs\'/2", (MR_String) "compound goal");
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_7, (MR_Integer) 0))));
          MR_Word UnifyRHS_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_7, (MR_Integer) 1))));
          MR_Word Kind_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_7, (MR_Integer) 3))));

          switch (MR_tag((MR_Word) Kind_29)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word RHSArgs_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Kind_29, (MR_Integer) 2))));
                MR_Word Var_87;
                MR_Word Var_88;
                MR_Word ArgModes_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Kind_29, (MR_Integer) 3))));

                {
                  Var_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_7[2]));
                  MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_5));
                  MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (ModuleInfo_4));
                }
                Var_88 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_2[9]), ArgModes_100);
                mercury__list__filter_map_corresponding_4_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), Var_87, RHSArgs_33, Var_88, &Inputs_6);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word RHSInputs_41;
                MR_Word Var_84;
                MR_Word Var_85;
                MR_Word ArgModes_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Kind_29, (MR_Integer) 3))));
                MR_Word RHSArgs_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Kind_29, (MR_Integer) 2))));

                {
                  Var_84 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_7[2]));
                  MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_7));
                  MR_hl_field(MR_mktag(0), Var_84, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_84, 3) = ((MR_Box) (ModuleInfo_4));
                }
                Var_85 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_2[10]), ArgModes_101);
                mercury__list__filter_map_corresponding_4_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), Var_84, RHSArgs_102, Var_85, &RHSInputs_41);
                {
                  Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Inputs_6, 0) = ((MR_Box) (LHS_26));
                  MR_hl_field(MR_mktag(1), Inputs_6, 1) = ((MR_Box) (RHSInputs_41));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word RHS_43 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Kind_29, (MR_Integer) 1))));

                {
                  Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Inputs_6, 0) = ((MR_Box) (RHS_43));
                  MR_hl_field(MR_mktag(1), Inputs_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Kind_29, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_81;
                    MR_Word RHS_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Kind_29, (MR_Integer) 2))));

                    {
                      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (RHS_103));
                      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Inputs_6, 0) = ((MR_Box) (LHS_26));
                      MR_hl_field(MR_mktag(1), Inputs_6, 1) = ((MR_Box) (Var_81));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  switch (MR_tag((MR_Word) UnifyRHS_27)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Var_79;
                        MR_Word RHS_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyRHS_27, (MR_Integer) 0))));

                        {
                          Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (RHS_104));
                          MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Inputs_6, 0) = ((MR_Box) (LHS_26));
                          MR_hl_field(MR_mktag(1), Inputs_6, 1) = ((MR_Box) (Var_79));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Inputs_6, 0) = ((MR_Box) (LHS_26));
                        MR_hl_field(MR_mktag(1), Inputs_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      break;
                    case (MR_Integer) 2:
                      mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.loop_inv.goal_inputs\'/2", (MR_String) "lambda goal");
                      break;
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 0))));
          MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 1))));
          MR_Word Args_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 2))));
          MR_Word Var_95;
          MR_Word Var_96;

          {
            Var_95 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_7[2]));
            MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_4));
            MR_hl_field(MR_mktag(0), Var_95, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_95, 3) = ((MR_Box) (ModuleInfo_4));
          }
          Var_96 = transform_hlds__loop_inv__argmodes_3_f_0(ModuleInfo_4, PredId_9, ProcId_10);
          mercury__list__filter_map_corresponding_4_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), Var_95, Args_11, Var_96, &Inputs_6);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
              MR_Word ArgModes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
              MR_Word GenericCallVars_19;
              MR_Word Inputs0_20;
              MR_Word Var_94;
              MR_Word Args_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));

              hlds__goal_util__generic_call_vars_2_p_0(GenericCall_15, &GenericCallVars_19);
              {
                Var_94 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_7[2]));
                MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_3));
                MR_hl_field(MR_mktag(0), Var_94, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_94, 3) = ((MR_Box) (ModuleInfo_4));
              }
              mercury__list__filter_map_corresponding_4_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), Var_94, Args_97, ArgModes_16, &Inputs0_20);
              Inputs_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), GenericCallVars_19, Inputs0_20);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignArgs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 4))));
              MR_Word Var_90;
              MR_Word Var_91;
              MR_Word Var_92;
              MR_Word PredId_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
              MR_Integer ProcId_99 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));

              {
                Var_90 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_7[2]));
                MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_1));
                MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (ModuleInfo_4));
              }
              Var_91 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), (MR_Word) (&transform_hlds__loop_inv_scalar_common_2[8]), ForeignArgs_22);
              Var_92 = transform_hlds__loop_inv__argmodes_3_f_0(ModuleInfo_4, PredId_98, ProcId_99);
              mercury__list__filter_map_corresponding_4_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), Var_90, Var_91, Var_92, &Inputs_6);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.loop_inv.goal_inputs\'/2", (MR_String) "compound goal");
            break;
        }
        break;
    }
    return Inputs_6;
  }
}

static MR_Word MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word Y_2)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word X_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), ((MR_Box) (X_5)), ((MR_Box) (Y_2)));
      if (succeeded)
        HeadVar__3_3 = HeadVar__1_1;
      else
        HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    }
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = transform_hlds__loop_inv__refine_candidate_inv_args_2_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word MaybeInvArgs_6)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;
    MR_Word RecCall_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word CallArgs_9;

    succeeded = ((MR_tag((MR_Word) RecCall_4)) == (MR_Integer) 2);
    if (succeeded)
    {
      CallArgs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RecCall_4, (MR_Integer) 2))));
      HeadVar__3_3 = mercury__list__map_corresponding_3_f_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[2]), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[2]), (MR_Word) (&transform_hlds__loop_inv_scalar_common_2[7]), MaybeInvArgs_6, CallArgs_9);
    }
    else
    {
      MR_Box conv1_HeadVar__3_3;

      conv1_HeadVar__3_3 = mercury__require__unexpected_2_f_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[3]), (MR_String) "function \140transform_hlds.loop_inv.refine_candidate_inv_args\'/2", (MR_String) "non call/6 found in argument 1");
      HeadVar__3_3 = ((MR_Word) (conv1_HeadVar__3_3));
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Arg_6,
  MR_Word Mode_7)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__4_4;
    MR_Word InvArg_8 = Arg_6;
    MR_Word InitInst_12;
    MR_Word _FinalInst_13;

    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_5, Mode_7, &InitInst_12, &_FinalInst_13);
    succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_5, InitInst_12);
    succeeded = !(succeeded);
    if (succeeded)
      {
        HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = ((MR_Box) (InvArg_8));
      }
    else
      HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    return HeadVar__4_4;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__Gs_5 = ((MR_Word) ((env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__conv0_Gs_5));
    transform_hlds__loop_inv__common_goal_2_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_6(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__G_6 = ((MR_Word) ((env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__conv1_G_6));
    transform_hlds__loop_inv__common_goal_2_p_0_5(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_5(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_10;
      MR_Word Var_12;

      (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__G_6, (MR_Integer) 0))));
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__G_6, (MR_Integer) 1))));
      (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goal_4, (MR_Integer) 0))));
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goal_4, (MR_Integer) 1))));
      (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0((env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11);
      if (!((env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded))
      {
        MR_Word TypeInfo_22_28;
        MR_Word PredId_13;
        MR_Integer ProcId_14;
        MR_Word Args_15;
        MR_Word Var_22;
        MR_Integer Var_23;
        MR_Word Var_24;
        MR_Word _BuiltinX_16;
        MR_Word _ContextX_17;
        MR_Word _SymNameX_18;
        MR_Unsigned packed_word_0;
        MR_Word _BuiltinY_19;
        MR_Word _ContextY_20;
        MR_Word _SymNameY_21;
        MR_Unsigned packed_word_1;

        (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9)) == (MR_Integer) 2);
        if ((env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
        {
          PredId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 0))));
          ProcId_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 1))));
          Args_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 2))));
          packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 3)));
          _BuiltinX_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 3))) & (MR_Integer) 1);
          _ContextX_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 4))));
          _SymNameX_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 5))));
          (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11)) == (MR_Integer) 2);
          if ((env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
          {
            Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 0))));
            Var_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 1))));
            Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 2))));
            packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 3)));
            _BuiltinY_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 3))) & (MR_Integer) 1);
            _ContextY_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 4))));
            _SymNameY_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 5))));
            (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_13, Var_22);
            if ((env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
            {
              (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = (ProcId_14 == Var_23);
              if ((env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
              {
                TypeInfo_22_28 = (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[4]);
                (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_28, ((MR_Box) (Args_15)), ((MR_Box) (Var_24)));
              }
            }
          }
        }
      }
      if ((env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
        transform_hlds__loop_inv__common_goal_2_p_0_4(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_7(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__commit_1) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), &(env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__conv1_G_6, (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__Gs_5, transform_hlds__loop_inv__common_goal_2_p_0_6, env_ptr);
        (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) (env_ptr_arg);

    transform_hlds__loop_inv__common_goal_2_p_0_7(env_ptr);
    (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded);
    if ((env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
      transform_hlds__loop_inv__common_goal_2_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_8(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[1]), &(env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__conv0_Gs_5, (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goalss_3, transform_hlds__loop_inv__common_goal_2_p_0_3, env_ptr);
        (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0(
  MR_Word Goalss_3,
  MR_Word Goal_4)
{
  {
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s env;

    (env).transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goalss_3 = Goalss_3;
    (env).transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goal_4 = Goal_4;
    transform_hlds__loop_inv__common_goal_2_p_0_8(&env);
    (env).transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = !((env).transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded);
    return (env).transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_28;

    succeeded = transform_hlds__loop_inv__IntroducedFrom__pred__inv_args__501__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_28);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_28));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    conv0_HeadVar__4_4 = transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__loop_inv__common_goal_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0(
  MR_Word PredProcId_7,
  MR_Word PredInfo_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_34,
  MR_Word * STATE_VARIABLE_ProcInfo_35,
  MR_Word STATE_VARIABLE_ModuleInfo_0_36,
  MR_Word * STATE_VARIABLE_ModuleInfo_37)
{
  {
    MR_bool succeeded;
    MR_Word Body_11;
    MR_Word HeadVars_12;
    MR_Word InvArgs_18;
    MR_Word InvGoals_23;
    MR_Word InvVars_24;
    MR_Word TypeInfo_43_43;
    MR_Word TypeCtorInfo_44_44;
    MR_Word TypeInfo_7_50;
    MR_Word TypeCtorInfo_19_64;
    MR_Word TypeInfo_20_65;
    MR_Word TypeInfo_16_81;
    MR_Word TypeCtorInfo_17_82;
    MR_Word TypeInfo_18_83;
    MR_Word TypeCtorInfo_22_87;
    MR_Word TypeInfo_23_88;
    MR_Word HeadVarModes_13;
    MR_Word UniquelyUsedVars_14;
    MR_Word InvGoals0_15;
    MR_Word RecCalls_16;
    MR_Word InvArgs0_17;
    MR_Word InvGoals1_19;
    MR_Word InvVars1_20;
    MR_Word DontHoistGoals_21;
    MR_Word DontHoistVars_22;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_Word GoalCandidates0_56;
    MR_Word GoalCandidates_57;
    MR_Word RecCalls_60;
    MR_Word CandidateInvGoalsList_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word MaybeInvArgs0_76;
    MR_Word MaybeInvArgs_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Box conv2_MaybeInvArgs_77;

    hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_8, &Var_46);
    succeeded = ((MR_Integer) 0 == Var_46);
    if (succeeded)
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_34, &Body_11);
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_34, &HeadVars_12);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_34, &HeadVarModes_13);
      TypeInfo_7_50 = (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]);
      Var_49 = transform_hlds__loop_inv__used_vars_2_f_0(STATE_VARIABLE_ModuleInfo_0_36, Body_11);
      UniquelyUsedVars_14 = mercury__list__sort_and_remove_dups_1_f_0(TypeInfo_7_50, Var_49);
      TypeCtorInfo_19_64 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
      Var_62 = mercury__cord__empty_0_f_0(TypeCtorInfo_19_64);
      Var_63 = (MR_Word) ((MR_Unsigned) 0U);
      {
        GoalCandidates0_56 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), GoalCandidates0_56, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_36));
        MR_hl_field(MR_mktag(0), GoalCandidates0_56, 1) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), GoalCandidates0_56, 2) = ((MR_Box) (Var_63));
      }
      transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(PredProcId_7, Body_11, GoalCandidates0_56, &GoalCandidates_57);
      RecCalls_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalCandidates_57, (MR_Integer) 2))));
      TypeInfo_20_65 = (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[1]);
      mercury__assoc_list__keys_and_values_3_p_0(TypeCtorInfo_19_64, TypeInfo_20_65, RecCalls_60, &RecCalls_16, &CandidateInvGoalsList_61);
      if ((CandidateInvGoalsList_61 == (MR_Word) ((MR_Unsigned) 0U)))
        InvGoals0_15 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Goals_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CandidateInvGoalsList_61, (MR_Integer) 0))));
        MR_Word Goalss_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CandidateInvGoalsList_61, (MR_Integer) 1))));
        MR_Word Var_68;

        {
          Var_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_8[2]));
          MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (Goalss_67));
        }
        InvGoals0_15 = mercury__list__filter_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_68, Goals_66);
      }
      TypeInfo_16_81 = (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]);
      TypeCtorInfo_17_82 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
      TypeInfo_18_83 = (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[2]);
      {
        Var_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_7[3]));
        MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_36));
      }
      MaybeInvArgs0_76 = mercury__list__map_corresponding_3_f_0(TypeInfo_16_81, TypeCtorInfo_17_82, TypeInfo_18_83, Var_78, HeadVars_12, HeadVarModes_13);
      TypeCtorInfo_22_87 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
      TypeInfo_23_88 = (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[3]);
      Var_79 = (MR_Word) (&transform_hlds__loop_inv_scalar_common_2[5]);
      conv2_MaybeInvArgs_77 = mercury__list__foldl_3_f_0(TypeCtorInfo_22_87, TypeInfo_23_88, Var_79, RecCalls_16, ((MR_Box) (MaybeInvArgs0_76)));
      MaybeInvArgs_77 = ((MR_Word) (conv2_MaybeInvArgs_77));
      Var_80 = (MR_Word) (&transform_hlds__loop_inv_scalar_common_2[6]);
      mercury__list__filter_map_3_p_0(TypeInfo_18_83, TypeInfo_16_81, Var_80, MaybeInvArgs_77, &InvArgs0_17);
      TypeInfo_43_43 = (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]);
      mercury__list__delete_elems_3_p_0(TypeInfo_43_43, InvArgs0_17, UniquelyUsedVars_14, &InvArgs_18);
      transform_hlds__loop_inv__inv_goals_vars_6_p_0(STATE_VARIABLE_ModuleInfo_0_36, UniquelyUsedVars_14, InvGoals0_15, &InvGoals1_19, InvArgs_18, &InvVars1_20);
      transform_hlds__loop_inv__do_not_hoist_4_p_0(STATE_VARIABLE_ModuleInfo_0_36, InvGoals1_19, &DontHoistGoals_21, &DontHoistVars_22);
      TypeCtorInfo_44_44 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
      mercury__list__delete_elems_3_p_0(TypeCtorInfo_44_44, InvGoals1_19, DontHoistGoals_21, &InvGoals_23);
      mercury__list__delete_elems_3_p_0(TypeInfo_43_43, InvVars1_20, DontHoistVars_22, &InvVars_24);
      succeeded = (InvGoals_23 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word ComputedInvVars_27;
      MR_Word InitialInstMap_28;
      MR_Word InitialAuxInstMap_29;
      MR_Word AuxPredProcId_30;
      MR_Word Replacement_31;
      MR_Word AuxPredInfo_32;
      MR_Word AuxProcInfo_33;
      MR_Word STATE_VARIABLE_ModuleInfo_39_39;
      MR_Word STATE_VARIABLE_ModuleInfo_40_40;

      mercury__list__delete_elems_3_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), InvVars_24, InvArgs_18, &ComputedInvVars_27);
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_36, STATE_VARIABLE_ProcInfo_0_34, &InitialInstMap_28);
      InitialAuxInstMap_29 = transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0(InvGoals_23, InitialInstMap_28);
      transform_hlds__loop_inv__create_aux_pred_10_p_0(PredProcId_7, HeadVars_12, ComputedInvVars_27, InitialAuxInstMap_29, &AuxPredProcId_30, &Replacement_31, &AuxPredInfo_32, &AuxProcInfo_33, STATE_VARIABLE_ModuleInfo_0_36, &STATE_VARIABLE_ModuleInfo_39_39);
      transform_hlds__loop_inv__gen_aux_proc_9_p_0(InvGoals_23, PredProcId_7, AuxPredProcId_30, Replacement_31, Body_11, AuxPredInfo_32, AuxProcInfo_33, STATE_VARIABLE_ModuleInfo_39_39, &STATE_VARIABLE_ModuleInfo_40_40);
      transform_hlds__loop_inv__gen_out_proc_8_p_0(PredProcId_7, PredInfo_8, STATE_VARIABLE_ProcInfo_0_34, STATE_VARIABLE_ProcInfo_35, Replacement_31, Body_11, STATE_VARIABLE_ModuleInfo_40_40, STATE_VARIABLE_ModuleInfo_37);
    }
    else
    {
      *STATE_VARIABLE_ModuleInfo_37 = STATE_VARIABLE_ModuleInfo_0_36;
      *STATE_VARIABLE_ProcInfo_35 = STATE_VARIABLE_ProcInfo_0_34;
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv7_UsedVars_6;

    conv7_UsedVars_6 = transform_hlds__loop_inv__used_vars_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_UsedVars_6));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv6_X_4;

    succeeded = transform_hlds__loop_inv__uniquely_used_args_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_X_4);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv6_X_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv5_X_4;

    succeeded = transform_hlds__loop_inv__uniquely_used_args_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_X_4);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv5_X_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_UsedVars_6;

    conv4_UsedVars_6 = transform_hlds__loop_inv__used_vars_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_UsedVars_6));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_UsedVars_6;

    conv3_UsedVars_6 = transform_hlds__loop_inv__used_vars_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_UsedVars_6));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_X_4;

    succeeded = transform_hlds__loop_inv__uniquely_used_args_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_X_4);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_X_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Goal_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word UsedVars_6;
    MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_41 = (MR_Word) ((MR_Word) (GoalExpr_7));
          MR_Word next_value_of_Goal_5 = SubGoal_41;

          // direct tailcall eliminated
          ;
          Goal_5 = next_value_of_Goal_5;
          continue;
        }
        break;
      case (MR_Integer) 1:
        UsedVars_6 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 0))));
          MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 1))));
          MR_Word Args_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 2))));
          MR_Word Var_63;
          MR_Word Var_64;

          {
            Var_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_7[2]));
            MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_7));
            MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (ModuleInfo_4));
          }
          Var_64 = transform_hlds__loop_inv__argmodes_3_f_0(ModuleInfo_4, PredId_9, ProcId_10);
          mercury__list__filter_map_corresponding_4_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), Var_63, Args_11, Var_64, &UsedVars_6);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Modes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
              MR_Word Var_62;
              MR_Word Args_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));

              {
                Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_7[2]));
                MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_6));
                MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (ModuleInfo_4));
              }
              mercury__list__filter_map_corresponding_4_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), Var_62, Args_65, Modes_16, &UsedVars_6);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignArgs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 4))));
              MR_Word ExtraForeignArgs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 5))));
              MR_Word UsedArgVars_24;
              MR_Word UsedExtraArgVars_25;
              MR_Word Var_57;
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Word PredId_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
              MR_Integer ProcId_67 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));

              {
                Var_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_7[2]));
                MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_1));
                MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (ModuleInfo_4));
              }
              Var_58 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), (MR_Word) (&transform_hlds__loop_inv_scalar_common_2[3]), ForeignArgs_20);
              Var_59 = transform_hlds__loop_inv__argmodes_3_f_0(ModuleInfo_4, PredId_66, ProcId_67);
              mercury__list__filter_map_corresponding_4_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), Var_57, Var_58, Var_59, &UsedArgVars_24);
              UsedExtraArgVars_25 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), (MR_Word) (&transform_hlds__loop_inv_scalar_common_2[4]), ExtraForeignArgs_21);
              UsedVars_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), UsedArgVars_24, UsedExtraArgVars_25);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Conjuncts_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
              MR_Word Var_55;
              MR_Word Var_56;

              {
                Var_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[3]));
                MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_4));
                MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (ModuleInfo_4));
              }
              Var_55 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[4]), Var_56, Conjuncts_32);
              UsedVars_6 = mercury__list__condense_1_f_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), Var_55);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
              MR_Word Var_53;
              MR_Word Var_54;

              {
                Var_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[3]));
                MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_5));
                MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (ModuleInfo_4));
              }
              Var_53 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[4]), Var_54, Disjuncts_33);
              UsedVars_6 = mercury__list__condense_1_f_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), Var_53);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
              MR_Word Var_50;
              MR_Word Var_51;
              MR_Word Var_52;

              {
                Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[3]));
                MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_8));
                MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (ModuleInfo_4));
              }
              Var_52 = transform_hlds__loop_inv__case_goals_1_f_0(Cases_36);
              Var_50 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[4]), Var_51, Var_52);
              UsedVars_6 = mercury__list__condense_1_f_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), Var_50);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
              MR_Word next_value_of_Goal_5 = SubGoal_68;

              // direct tailcall eliminated
              ;
              Goal_5 = next_value_of_Goal_5;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
              MR_Word Then_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
              MR_Word Else_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 4))));
              MR_Word Var_46;
              MR_Word Var_47;
              MR_Word Var_48;
              MR_Word Var_49;

              Var_46 = transform_hlds__loop_inv__used_vars_2_f_0(ModuleInfo_4, Cond_38);
              Var_48 = transform_hlds__loop_inv__used_vars_2_f_0(ModuleInfo_4, Then_39);
              Var_49 = transform_hlds__loop_inv__used_vars_2_f_0(ModuleInfo_4, Else_40);
              Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), Var_48, Var_49);
              UsedVars_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), Var_46, Var_47);
            }
            break;
          case (MR_Integer) 7:
            mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.loop_inv.used_vars\'/2", (MR_String) "shorthand");
            break;
        }
        break;
    }
    return UsedVars_6;
    break;
  }
}

static MR_Word MR_CALL 
transform_hlds__loop_inv__argmodes_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Integer ProcId_7)
{
  {
    MR_Word ArgModes_8;
    MR_Word ProcInfo_10;
    MR_Word Var_9;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_5, PredId_6, ProcId_7, &Var_9, &ProcInfo_10);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_10, &ArgModes_8);
    return ArgModes_8;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__case_goals_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_9;

    conv0_LambdaHeadVar__2_9 = transform_hlds__loop_inv__IntroducedFrom__func__case_goals__1151__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_9));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
transform_hlds__loop_inv__case_goals_1_f_0(
  MR_Word Cases_3)
{
  {
    MR_Word HeadVar__2_2;

    HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_2[2]), Cases_3);
    return HeadVar__2_2;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_8_p_0(
  MR_Word PredProcId_9,
  MR_Word PredInfo0_10,
  MR_Word ProcInfo0_11,
  MR_Word * ProcInfo_12,
  MR_Word Replacement_13,
  MR_Word Body0_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26)
{
  {
    MR_Word Body_16;
    MR_Word PredId_17;
    MR_Integer ProcId_18;
    MR_Word VarSet_19;
    MR_Word VarTypes_20;
    MR_Word HeadVars_21;
    MR_Word RttiVarMaps_22;
    MR_Word ProcInfo1_23;
    MR_Word ProcInfo2_24;
    MR_Word STATE_VARIABLE_ModuleInfo_29_29;

    transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(PredProcId_9, Replacement_13, Body0_14, &Body_16);
    PredId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_9, (MR_Integer) 0))));
    ProcId_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_9, (MR_Integer) 1))));
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo0_11, &VarSet_19);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo0_11, &VarTypes_20);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_11, &HeadVars_21);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo0_11, &RttiVarMaps_22);
    hlds__hlds_pred__proc_info_set_body_7_p_0(VarSet_19, VarTypes_20, HeadVars_21, Body_16, RttiVarMaps_22, ProcInfo0_11, &ProcInfo1_23);
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ProcInfo1_23, &ProcInfo2_24);
    check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, ProcInfo2_24, ProcInfo_12, STATE_VARIABLE_ModuleInfo_0_25, &STATE_VARIABLE_ModuleInfo_29_29);
    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_17, ProcId_18, PredInfo0_10, *ProcInfo_12, STATE_VARIABLE_ModuleInfo_29_29, STATE_VARIABLE_ModuleInfo_26);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_AuxCase_8;

    transform_hlds__loop_inv__gen_out_proc_case_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_AuxCase_8);
    *wrapper_arg_2 = ((MR_Box) (conv2_AuxCase_8));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_AuxGoal_8;

    transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_AuxGoal_8);
    *wrapper_arg_2 = ((MR_Box) (conv1_AuxGoal_8));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_AuxGoal_8;

    transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_AuxGoal_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_AuxGoal_8));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(
  MR_Word PPId_5,
  MR_Word Replacement_6,
  MR_Word Goal_7,
  MR_Word * AuxGoal_8)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 0))));
    MR_Word GoalInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_44 = (MR_Word) ((MR_Word) (GoalExpr_9));
          MR_Word AuxSubGoal_45;
          MR_Word AuxGoalExpr_62;

          transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(PPId_5, Replacement_6, SubGoal_44, &AuxSubGoal_45);
          AuxGoalExpr_62 = (MR_Word) ((MR_Word) (AuxSubGoal_45));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *AuxGoal_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AuxGoalExpr_62));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_10));
          }
        }
        break;
      case (MR_Integer) 1:
        *AuxGoal_8 = Goal_7;
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_9, (MR_Integer) 0))));
          MR_Integer ProcId_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_9, (MR_Integer) 1))));
          MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PPId_5, (MR_Integer) 0))));
          MR_Integer Var_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PPId_5, (MR_Integer) 1))));

          succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_11, Var_76);
          if (succeeded)
            succeeded = (ProcId_12 == Var_77);
          if (succeeded)
            transform_hlds__loop_inv__gen_aux_call_3_p_0(Replacement_6, Goal_7, AuxGoal_8);
          else
            *AuxGoal_8 = Goal_7;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *AuxGoal_8 = Goal_7;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Conjuncts_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))));
              MR_Word AuxConjuncts_36;
              MR_Word AuxGoalExpr_37;
              MR_Word Var_59;

              {
                Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_7[0]));
                MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_1));
                MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (PPId_5));
                MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (Replacement_6));
              }
              mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_59, Conjuncts_35, &AuxConjuncts_36);
              {
                AuxGoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_37, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_37, 1) = (MR_Box) ((MR_Unsigned) (ConjType_34));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_37, 2) = ((MR_Box) (AuxConjuncts_36));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *AuxGoal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AuxGoalExpr_37));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_10));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));
              MR_Word AuxDisjuncts_39;
              MR_Word Var_58;
              MR_Word AuxGoalExpr_60;

              {
                Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_7[0]));
                MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_2));
                MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (PPId_5));
                MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) (Replacement_6));
              }
              mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_58, Disjuncts_38, &AuxDisjuncts_39);
              {
                AuxGoalExpr_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_60, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_60, 1) = ((MR_Box) (AuxDisjuncts_39));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *AuxGoal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AuxGoalExpr_60));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_10));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));
              MR_Word CanFail_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 3))));
              MR_Word AuxCases_43;
              MR_Word Var_57;
              MR_Word AuxGoalExpr_61;

              {
                Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_7[1]));
                MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_3));
                MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (PPId_5));
                MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Replacement_6));
              }
              mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Var_57, Cases_42, &AuxCases_43);
              {
                AuxGoalExpr_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_61, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_61, 1) = ((MR_Box) (Var_40));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_61, 2) = (MR_Box) ((MR_Unsigned) (CanFail_41));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_61, 3) = ((MR_Box) (AuxCases_43));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *AuxGoal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AuxGoalExpr_61));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_10));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));
              MR_Word AuxGoalExpr_63;
              MR_Word SubGoal_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))));
              MR_Word AuxSubGoal_65;

              transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(PPId_5, Replacement_6, SubGoal_64, &AuxSubGoal_65);
              {
                AuxGoalExpr_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_63, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_63, 1) = ((MR_Box) (Reason_46));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_63, 2) = ((MR_Box) (AuxSubGoal_65));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *AuxGoal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AuxGoalExpr_63));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_10));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));
              MR_Word Cond_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))));
              MR_Word Then_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 3))));
              MR_Word Else_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 4))));
              MR_Word AuxCond_51;
              MR_Word AuxThen_52;
              MR_Word AuxElse_53;
              MR_Word AuxGoalExpr_66;

              transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(PPId_5, Replacement_6, Cond_48, &AuxCond_51);
              transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(PPId_5, Replacement_6, Then_49, &AuxThen_52);
              transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(PPId_5, Replacement_6, Else_50, &AuxElse_53);
              {
                AuxGoalExpr_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_66, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_66, 1) = ((MR_Box) (Vars_47));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_66, 2) = ((MR_Box) (AuxCond_51));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_66, 3) = ((MR_Box) (AuxThen_52));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_66, 4) = ((MR_Box) (AuxElse_53));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *AuxGoal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AuxGoalExpr_66));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_10));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.loop_inv.gen_out_proc_goal\'/4", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_9_p_0(
  MR_Word InvGoals_10,
  MR_Word PredProcId_11,
  MR_Word AuxPredProcId_12,
  MR_Word Replacement_13,
  MR_Word Body_14,
  MR_Word AuxPredInfo_15,
  MR_Word STATE_VARIABLE_AuxProcInfo_0_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24)
{
  {
    MR_Word GapInfo_18;
    MR_Word AuxBody_19;
    MR_Word AuxPredId_20;
    MR_Integer AuxProcId_21;
    MR_Word STATE_VARIABLE_AuxProcInfo_25_25;
    MR_Word STATE_VARIABLE_AuxProcInfo_27_27;
    MR_Word STATE_VARIABLE_AuxProcInfo_29_29;
    MR_Word STATE_VARIABLE_ModuleInfo_30_30;

    {
      GapInfo_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), GapInfo_18, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_23));
      MR_hl_field(MR_mktag(0), GapInfo_18, 1) = ((MR_Box) (InvGoals_10));
      MR_hl_field(MR_mktag(0), GapInfo_18, 2) = ((MR_Box) (PredProcId_11));
      MR_hl_field(MR_mktag(0), GapInfo_18, 3) = ((MR_Box) (Replacement_13));
    }
    transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(GapInfo_18, Body_14, &AuxBody_19);
    AuxPredId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AuxPredProcId_12, (MR_Integer) 0))));
    AuxProcId_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), AuxPredProcId_12, (MR_Integer) 1))));
    hlds__hlds_pred__proc_info_set_goal_3_p_0(AuxBody_19, STATE_VARIABLE_AuxProcInfo_0_22, &STATE_VARIABLE_AuxProcInfo_25_25);
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_AuxProcInfo_25_25, &STATE_VARIABLE_AuxProcInfo_27_27);
    check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, STATE_VARIABLE_AuxProcInfo_27_27, &STATE_VARIABLE_AuxProcInfo_29_29, STATE_VARIABLE_ModuleInfo_0_23, &STATE_VARIABLE_ModuleInfo_30_30);
    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(AuxPredId_20, AuxProcId_21, AuxPredInfo_15, STATE_VARIABLE_AuxProcInfo_29_29, STATE_VARIABLE_ModuleInfo_30_30, STATE_VARIABLE_ModuleInfo_24);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_AuxCase_6;

    transform_hlds__loop_inv__gen_aux_proc_case_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_AuxCase_6);
    *wrapper_arg_2 = ((MR_Box) (conv2_AuxCase_6));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_AuxGoal_6;

    transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_AuxGoal_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_AuxGoal_6));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_AuxGoal_6;

    transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_AuxGoal_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_AuxGoal_6));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(
  MR_Word Info_4,
  MR_Word Goal_5,
  MR_Word * AuxGoal_6)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
    MR_Word GoalInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_42 = (MR_Word) ((MR_Word) (GoalExpr_7));
          MR_Word AuxSubGoal_43;
          MR_Word AuxGoalExpr_62;

          transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(Info_4, SubGoal_42, &AuxSubGoal_43);
          AuxGoalExpr_62 = (MR_Word) ((MR_Word) (AuxSubGoal_43));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *AuxGoal_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AuxGoalExpr_62));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_8));
          }
        }
        break;
      case (MR_Integer) 1:
        transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0(Info_4, Goal_5, AuxGoal_6);
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 0))));
          MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 1))));
          MR_Word Var_58;
          MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 2))));

          {
            Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (PredId_9));
            MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (ProcId_10));
          }
          succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(Var_58, Var_82);
          if (succeeded)
          {
            MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 3))));

            transform_hlds__loop_inv__gen_aux_call_3_p_0(Var_59, Goal_5, AuxGoal_6);
          }
          else
            transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0(Info_4, Goal_5, AuxGoal_6);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0(Info_4, Goal_5, AuxGoal_6);
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Conjuncts_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
              MR_Word AuxConjuncts_34;
              MR_Word AuxGoalExpr_35;
              MR_Word Var_57;

              {
                Var_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_1));
                MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (Info_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_57, Conjuncts_33, &AuxConjuncts_34);
              {
                AuxGoalExpr_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_35, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_35, 1) = (MR_Box) ((MR_Unsigned) (ConjType_32));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_35, 2) = ((MR_Box) (AuxConjuncts_34));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *AuxGoal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AuxGoalExpr_35));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_8));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
              MR_Word AuxDisjuncts_37;
              MR_Word Var_56;
              MR_Word AuxGoalExpr_60;

              {
                Var_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_2));
                MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (Info_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_56, Disjuncts_36, &AuxDisjuncts_37);
              {
                AuxGoalExpr_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_60, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_60, 1) = ((MR_Box) (AuxDisjuncts_37));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *AuxGoal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AuxGoalExpr_60));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_8));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
              MR_Word CanFail_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
              MR_Word AuxCases_41;
              MR_Word Var_55;
              MR_Word AuxGoalExpr_61;

              {
                Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[2]));
                MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_3));
                MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Info_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Var_55, Cases_40, &AuxCases_41);
              {
                AuxGoalExpr_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_61, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_61, 1) = ((MR_Box) (Var_38));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_61, 2) = (MR_Box) ((MR_Unsigned) (CanFail_39));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_61, 3) = ((MR_Box) (AuxCases_41));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *AuxGoal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AuxGoalExpr_61));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_8));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
              MR_Word AuxGoalExpr_63;
              MR_Word SubGoal_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
              MR_Word AuxSubGoal_65;

              transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(Info_4, SubGoal_64, &AuxSubGoal_65);
              {
                AuxGoalExpr_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_63, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_63, 1) = ((MR_Box) (Reason_44));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_63, 2) = ((MR_Box) (AuxSubGoal_65));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *AuxGoal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AuxGoalExpr_63));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_8));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
              MR_Word Cond_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
              MR_Word Then_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
              MR_Word Else_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 4))));
              MR_Word AuxCond_49;
              MR_Word AuxThen_50;
              MR_Word AuxElse_51;
              MR_Word AuxGoalExpr_66;

              transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(Info_4, Cond_46, &AuxCond_49);
              transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(Info_4, Then_47, &AuxThen_50);
              transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(Info_4, Else_48, &AuxElse_51);
              {
                AuxGoalExpr_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_66, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_66, 1) = ((MR_Box) (Vars_45));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_66, 2) = ((MR_Box) (AuxCond_49));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_66, 3) = ((MR_Box) (AuxThen_50));
                MR_hl_field(MR_mktag(3), AuxGoalExpr_66, 4) = ((MR_Box) (AuxElse_51));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *AuxGoal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AuxGoalExpr_66));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_8));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.loop_inv.gen_aux_proc_goal\'/3", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_call_3_p_0(
  MR_Word Replacement_4,
  MR_Word CallGoal_5,
  MR_Word * AuxCallGoal_6)
{
  {
    MR_bool succeeded;
    MR_Word ReplacementExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Replacement_4, (MR_Integer) 0))));
    MR_Word CallExpr_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallGoal_5, (MR_Integer) 0))));
    MR_Word CallInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallGoal_5, (MR_Integer) 1))));
    MR_Word AuxCallGoalExpr_14;
    MR_Word ReplacementArgs0_11;
    MR_Word Args0_12;
    MR_Word Args_13;
    MR_Word Var_27;
    MR_Integer Var_28;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;

    succeeded = ((MR_tag((MR_Word) ReplacementExpr_7)) == (MR_Integer) 2);
    if (succeeded)
    {
      ReplacementArgs0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReplacementExpr_7, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) CallExpr_9)) == (MR_Integer) 2);
      if (succeeded)
      {
        Args0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CallExpr_9, (MR_Integer) 2))));
        transform_hlds__loop_inv__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(Args0_12, ReplacementArgs0_11, &Args_13);
        Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReplacementExpr_7, (MR_Integer) 0))));
        Var_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), ReplacementExpr_7, (MR_Integer) 1))));
        Var_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), ReplacementExpr_7, (MR_Integer) 3))) & (MR_Integer) 1);
        Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReplacementExpr_7, (MR_Integer) 4))));
        Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReplacementExpr_7, (MR_Integer) 5))));
        {
          AuxCallGoalExpr_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), AuxCallGoalExpr_14, 0) = ((MR_Box) (Var_27));
          MR_hl_field(MR_mktag(2), AuxCallGoalExpr_14, 1) = ((MR_Box) (Var_28));
          MR_hl_field(MR_mktag(2), AuxCallGoalExpr_14, 2) = ((MR_Box) (Args_13));
          MR_hl_field(MR_mktag(2), AuxCallGoalExpr_14, 3) = (MR_Box) ((MR_Unsigned) (Var_30));
          MR_hl_field(MR_mktag(2), AuxCallGoalExpr_14, 4) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(2), AuxCallGoalExpr_14, 5) = ((MR_Box) (Var_32));
        }
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *AuxCallGoal_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AuxCallGoalExpr_14));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CallInfo_10));
      }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.loop_inv.gen_aux_call\'/3", (MR_String) "args not both ordinary calls");
        return;
      }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = HeadVar__2_2;
  else
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Box Var_17 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.loop_inv.replace_initial_args\'/3", (MR_String) "first arg longer than second");
        return;
      }
    else
    {
      MR_Word Xs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Xs_9;

      transform_hlds__loop_inv__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(Var_16, Xs0_8, &Xs_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = Var_17;
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Xs_9));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__InvariantGoal_13 = ((MR_Word) ((env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__conv0_InvariantGoal_13));
    transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_16;
      MR_Word Var_18;

      (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__InvariantGoal_13, (MR_Integer) 0))));
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__InvariantGoal_13, (MR_Integer) 1))));
      (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__Goal_5, (MR_Integer) 0))));
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__Goal_5, (MR_Integer) 1))));
      (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0((env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15, (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17);
      if (!((env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded))
      {
        MR_Word TypeInfo_22_34;
        MR_Word PredId_19;
        MR_Integer ProcId_20;
        MR_Word Args_21;
        MR_Word Var_28;
        MR_Integer Var_29;
        MR_Word Var_30;
        MR_Word _BuiltinX_22;
        MR_Word _ContextX_23;
        MR_Word _SymNameX_24;
        MR_Unsigned packed_word_0;
        MR_Word _BuiltinY_25;
        MR_Word _ContextY_26;
        MR_Word _SymNameY_27;
        MR_Unsigned packed_word_1;

        (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15)) == (MR_Integer) 2);
        if ((env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded)
        {
          PredId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15, (MR_Integer) 0))));
          ProcId_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15, (MR_Integer) 1))));
          Args_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15, (MR_Integer) 2))));
          packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15, (MR_Integer) 3)));
          _BuiltinX_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15, (MR_Integer) 3))) & (MR_Integer) 1);
          _ContextX_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15, (MR_Integer) 4))));
          _SymNameX_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15, (MR_Integer) 5))));
          (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17)) == (MR_Integer) 2);
          if ((env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded)
          {
            Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17, (MR_Integer) 0))));
            Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17, (MR_Integer) 1))));
            Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17, (MR_Integer) 2))));
            packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17, (MR_Integer) 3)));
            _BuiltinY_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17, (MR_Integer) 3))) & (MR_Integer) 1);
            _ContextY_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17, (MR_Integer) 4))));
            _SymNameY_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17, (MR_Integer) 5))));
            (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_19, Var_28);
            if ((env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded)
            {
              (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = (ProcId_20 == Var_29);
              if ((env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded)
              {
                TypeInfo_22_34 = (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[4]);
                (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_34, ((MR_Box) (Args_21)), ((MR_Box) (Var_30)));
              }
            }
          }
        }
      }
      if ((env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded)
        transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s * env_ptr = (struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), &(env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__conv0_InvariantGoal_13, (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__Var_7, transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_3, env_ptr);
        (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0(
  MR_Word Info_4,
  MR_Word Goal_5,
  MR_Word * AuxGoal_6)
{
  {
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s env;

    (env).transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__Goal_5 = Goal_5;
    {
      MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0))));
      MR_Word Var_9;
      MR_Word Var_10;

      (env).transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 1))));
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 2))));
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 3))));
      transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_4(&env);
      if ((env).transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded)
        *AuxGoal_6 = hlds__make_goal__true_goal_0_f_0();
      else
        *AuxGoal_6 = (env).transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__Goal_5;
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__create_aux_pred_10_p_0(
  MR_Word PredProcId_11,
  MR_Word HeadVars_12,
  MR_Word ComputedInvArgs_13,
  MR_Word InitialAuxInstMap_14,
  MR_Word * AuxPredProcId_15,
  MR_Word * Replacement_16,
  MR_Word * AuxPredInfo_17,
  MR_Word * AuxProcInfo_18,
  MR_Word ModuleInfo0_19,
  MR_Word * ModuleInfo_20)
{
  {
    MR_bool succeeded;
    MR_Word PredId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_11, (MR_Integer) 0))));
    MR_Integer ProcId_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_11, (MR_Integer) 1))));
    MR_Word AuxHeadVars_23;
    MR_Word PredInfo_24;
    MR_Word ProcInfo_25;
    MR_Word Goal_26;
    MR_Word GoalInfo_28;
    MR_Word TVarSet_29;
    MR_Word VarTypes_30;
    MR_Word ClassContext_31;
    MR_Word RttiVarMaps_32;
    MR_Word VarSet_33;
    MR_Word InstVarSet_34;
    MR_Word Markers_35;
    MR_Word OrigOrigin_36;
    MR_Word HasParallelConj_37;
    MR_Word VarNameRemap_38;
    MR_Word PredModule_39;
    MR_String PredName_40;
    MR_Word PredOrFunc_41;
    MR_Word Context_42;
    MR_Integer Line_43;
    MR_Integer Counter_44;
    MR_Word AuxPredSymName0_45;
    MR_Integer ProcNo_46;
    MR_String Suffix_47;
    MR_Word AuxPredSymName_48;
    MR_Word Origin_49;
    MR_Word AuxPredId_51;
    MR_Integer AuxProcId_52;
    MR_Word Var_59;
    MR_String Var_62;
    MR_Word _ExtraArgs_50;

    AuxHeadVars_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_1[0]), HeadVars_12, ComputedInvArgs_13);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo0_19, PredId_21, ProcId_22, &PredInfo_24, &ProcInfo_25);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_25, &Goal_26);
    GoalInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_26, (MR_Integer) 1))));
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_24, &TVarSet_29);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_25, &VarTypes_30);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_24, &ClassContext_31);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_25, &RttiVarMaps_32);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_25, &VarSet_33);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_25, &InstVarSet_34);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_24, &Markers_35);
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_24, &OrigOrigin_36);
    hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo_25, &HasParallelConj_37);
    hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo_24, &VarNameRemap_38);
    PredModule_39 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_24);
    PredName_40 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_24);
    PredOrFunc_41 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_24);
    Context_42 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_28);
    mercury__term__context_line_2_p_0(Context_42, &Line_43);
    succeeded = (Line_43 == (MR_Integer) 0);
    if (succeeded)
      Counter_44 = hlds__hlds_pred__pred_id_to_int_1_f_0(PredId_21);
    else
      Counter_44 = (MR_Integer) 1;
    parse_tree__prog_util__make_pred_name_with_context_7_p_0(PredModule_39, (MR_String) "loop_inv", PredOrFunc_41, PredName_40, Line_43, Counter_44, &AuxPredSymName0_45);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_22, &ProcNo_46);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__loop_inv_scalar_common_6[0]), ProcNo_46, &Var_62);
    Suffix_47 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_62);
    mdbcomp__sym_name__add_sym_name_suffix_3_p_0(AuxPredSymName0_45, Suffix_47, &AuxPredSymName_48);
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (ProcNo_46));
    }
    {
      Origin_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Origin_49, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Origin_49, 1) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(3), Origin_49, 2) = ((MR_Box) (OrigOrigin_36));
      MR_hl_field(MR_mktag(3), Origin_49, 3) = ((MR_Box) (PredId_21));
    }
    hlds__hlds_pred__define_new_pred_20_p_0(Origin_49, Goal_26, Replacement_16, AuxHeadVars_23, &_ExtraArgs_50, InitialAuxInstMap_14, AuxPredSymName_48, TVarSet_29, VarTypes_30, ClassContext_31, RttiVarMaps_32, VarSet_33, InstVarSet_34, Markers_35, (MR_Integer) 1, HasParallelConj_37, VarNameRemap_38, ModuleInfo0_19, ModuleInfo_20, AuxPredProcId_15);
    AuxPredId_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *AuxPredProcId_15, (MR_Integer) 0))));
    AuxProcId_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), *AuxPredProcId_15, (MR_Integer) 1))));
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(*ModuleInfo_20, AuxPredId_51, AuxProcId_52, AuxPredInfo_17, AuxProcInfo_18);
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_14;

    conv0_LambdaHeadVar__3_14 = transform_hlds__loop_inv__IntroducedFrom__func__compute_initial_aux_instmap__728__1_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_14));
    return wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0(
  MR_Word Gs_4,
  MR_Word IM_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Box conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = mercury__list__foldl_3_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_2[1]), Gs_4, ((MR_Box) (IM_5)));
    HeadVar__3_3 = ((MR_Word) (conv1_HeadVar__3_3));
    return HeadVar__3_3;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_DHGs_12;
    MR_Word conv0_STATE_VARIABLE_DHVs_14;

    transform_hlds__loop_inv__do_not_hoist_2_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_DHGs_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_DHVs_14);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_DHGs_12));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_DHVs_14));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word InvGoals_6,
  MR_Word * DontHoistGoals_7,
  MR_Word * DontHoistVars_8)
{
  {
    MR_Word Var_9;
    MR_Box conv3_DontHoistGoals_7;
    MR_Box conv2_DontHoistVars_8;

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (transform_hlds__loop_inv__do_not_hoist_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (ModuleInfo_5));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[1]), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[4]), Var_9, InvGoals_6, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_DontHoistGoals_7, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_DontHoistVars_8);
    *DontHoistGoals_7 = ((MR_Word) (conv3_DontHoistGoals_7));
    *DontHoistVars_8 = ((MR_Word) (conv2_DontHoistVars_8));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_IGs_12;
    MR_Word conv0_IVs_14;

    transform_hlds__loop_inv__inv_goals_vars_2_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_IGs_12, ((MR_Word) (wrapper_arg_4)), &conv0_IVs_14);
    *wrapper_arg_3 = ((MR_Box) (conv1_IGs_12));
    *wrapper_arg_5 = ((MR_Box) (conv0_IVs_14));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word UniquelyUsedVars_8,
  MR_Word InvGoals0_9,
  MR_Word * InvGoals_10,
  MR_Word InvVars0_11,
  MR_Word * InvVars_12)
{
  {
    MR_Word Var_13;
    MR_Box conv3_InvGoals_10;
    MR_Box conv2_InvVars_12;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (transform_hlds__loop_inv__inv_goals_vars_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (ModuleInfo_7));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (UniquelyUsedVars_8));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[1]), (MR_Word) (&transform_hlds__loop_inv_scalar_common_1[4]), Var_13, InvGoals0_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_InvGoals_10, ((MR_Box) (InvVars0_11)), &conv2_InvVars_12);
    *InvGoals_10 = ((MR_Word) (conv3_InvGoals_10));
    *InvVars_12 = ((MR_Word) (conv2_InvVars_12));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(
  MR_Word PPId_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_IGCs_0_47,
  MR_Word * STATE_VARIABLE_IGCs_48)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 0))));
    MR_Word _GoalInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_39 = (MR_Word) ((MR_Word) (GoalExpr_8));

          transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_4_p_0(PPId_5, SubGoal_39, STATE_VARIABLE_IGCs_0_47, STATE_VARIABLE_IGCs_48);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Detism_80;
          MR_Word CodeModel_81;
          MR_Word InstMapDelta_82;
          MR_Word InstMapDeltaPairs_83;
          MR_Word ModuleInfo_84;
          MR_Word Var_85;

          Detism_80 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(_GoalInfo_9);
          hlds__code_model__determinism_to_code_model_2_p_0(Detism_80, &CodeModel_81);
          switch (CodeModel_81) {
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
          if (succeeded)
          {
            Var_85 = hlds__hlds_goal__goal_info_get_purity_1_f_0(_GoalInfo_9);
            succeeded = (Var_85 == (MR_Integer) 0);
            if (succeeded)
            {
              InstMapDelta_82 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(_GoalInfo_9);
              hlds__instmap__instmap_delta_to_assoc_list_2_p_0(InstMapDelta_82, &InstMapDeltaPairs_83);
              ModuleInfo_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_0_47, (MR_Integer) 0))));
              succeeded = transform_hlds__loop_inv__all_instmap_deltas_are_ground_2_p_0(ModuleInfo_84, InstMapDeltaPairs_83);
            }
          }
          if (succeeded)
          {
            MR_Word Var_87;
            MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_0_47, (MR_Integer) 1))));
            MR_Word Var_93;
            MR_Word Var_95;

            Var_87 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_88, ((MR_Box) (Goal_6)));
            Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_0_47, (MR_Integer) 0))));
            Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_0_47, (MR_Integer) 2))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_IGCs_48 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_93));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_87));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_95));
            }
          }
          else
            *STATE_VARIABLE_IGCs_48 = STATE_VARIABLE_IGCs_0_47;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 0))));
          MR_Integer ProcId_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 1))));
          MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PPId_5, (MR_Integer) 0))));
          MR_Integer Var_71 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PPId_5, (MR_Integer) 1))));

          succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_10, Var_70);
          if (succeeded)
            succeeded = (ProcId_11 == Var_71);
          if (succeeded)
            transform_hlds__loop_inv__add_recursive_call_3_p_0(Goal_6, STATE_VARIABLE_IGCs_0_47, STATE_VARIABLE_IGCs_48);
          else
            transform_hlds__loop_inv__invariant_goal_candidates_handle_primitive_goal_3_p_0(Goal_6, STATE_VARIABLE_IGCs_0_47, STATE_VARIABLE_IGCs_48);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              MR_Word Detism_80;
              MR_Word CodeModel_81;
              MR_Word InstMapDelta_82;
              MR_Word InstMapDeltaPairs_83;
              MR_Word ModuleInfo_84;
              MR_Word Var_85;

              Detism_80 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(_GoalInfo_9);
              hlds__code_model__determinism_to_code_model_2_p_0(Detism_80, &CodeModel_81);
              switch (CodeModel_81) {
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
              if (succeeded)
              {
                Var_85 = hlds__hlds_goal__goal_info_get_purity_1_f_0(_GoalInfo_9);
                succeeded = (Var_85 == (MR_Integer) 0);
                if (succeeded)
                {
                  InstMapDelta_82 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(_GoalInfo_9);
                  hlds__instmap__instmap_delta_to_assoc_list_2_p_0(InstMapDelta_82, &InstMapDeltaPairs_83);
                  ModuleInfo_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_0_47, (MR_Integer) 0))));
                  succeeded = transform_hlds__loop_inv__all_instmap_deltas_are_ground_2_p_0(ModuleInfo_84, InstMapDeltaPairs_83);
                }
              }
              if (succeeded)
              {
                MR_Word Var_87;
                MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_0_47, (MR_Integer) 1))));
                MR_Word Var_93;
                MR_Word Var_95;

                Var_87 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_88, ((MR_Box) (Goal_6)));
                Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_0_47, (MR_Integer) 0))));
                Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_0_47, (MR_Integer) 2))));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_IGCs_48 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_93));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_87));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_95));
                }
              }
              else
                *STATE_VARIABLE_IGCs_48 = STATE_VARIABLE_IGCs_0_47;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Conjuncts_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));

              switch (ConjType_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  transform_hlds__loop_inv__invariant_goal_candidates_in_parallel_conj_4_p_0(PPId_5, Conjuncts_34, STATE_VARIABLE_IGCs_0_47, STATE_VARIABLE_IGCs_48);
                  break;
                case (MR_Integer) 0:
                  transform_hlds__loop_inv__invariant_goal_candidates_in_plain_conj_4_p_0(PPId_5, Conjuncts_34, STATE_VARIABLE_IGCs_0_47, STATE_VARIABLE_IGCs_48);
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));

              transform_hlds__loop_inv__invariant_goal_candidates_in_disj_4_p_0(PPId_5, Disjuncts_35, STATE_VARIABLE_IGCs_0_47, STATE_VARIABLE_IGCs_48);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));

              transform_hlds__loop_inv__invariant_goal_candidates_in_switch_4_p_0(PPId_5, Cases_38, STATE_VARIABLE_IGCs_0_47, STATE_VARIABLE_IGCs_48);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));

              transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_4_p_0(PPId_5, SubGoal_64, STATE_VARIABLE_IGCs_0_47, STATE_VARIABLE_IGCs_48);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
              MR_Word Then_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));
              MR_Word Else_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4))));
              MR_Word PathCandidates0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_0_47, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_IGCs_51_51;
              MR_Word STATE_VARIABLE_IGCs_52_52;
              MR_Word STATE_VARIABLE_IGCs_53_53;
              MR_Word Var_67;
              MR_Word Var_69;

              transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(PPId_5, Cond_42, STATE_VARIABLE_IGCs_0_47, &STATE_VARIABLE_IGCs_51_51);
              transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(PPId_5, Then_43, STATE_VARIABLE_IGCs_51_51, &STATE_VARIABLE_IGCs_52_52);
              Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_52_52, (MR_Integer) 0))));
              Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_52_52, (MR_Integer) 2))));
              {
                STATE_VARIABLE_IGCs_53_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_53_53, 0) = ((MR_Box) (Var_67));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_53_53, 1) = ((MR_Box) (PathCandidates0_45));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_53_53, 2) = ((MR_Box) (Var_69));
              }
              transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_4_p_0(PPId_5, Else_44, STATE_VARIABLE_IGCs_53_53, STATE_VARIABLE_IGCs_48);
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.loop_inv.invariant_goal_candidates_in_goal\'/4", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_switch_4_p_0(
  MR_Word PPId_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_IGCs_0_3,
  MR_Word * STATE_VARIABLE_IGCs_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_IGCs_4 = STATE_VARIABLE_IGCs_0_3;
    else
    {
      MR_Word Case_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Cases_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_10, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_IGCs_18_18;
      MR_Word PathCandidates0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_0_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_IGCs_11_26;
      MR_Word Var_30;
      MR_Word Var_32;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_IGCs_0_3;

      transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(PPId_1, Goal_15, STATE_VARIABLE_IGCs_0_3, &STATE_VARIABLE_IGCs_11_26);
      Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_11_26, (MR_Integer) 0))));
      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_11_26, (MR_Integer) 2))));
      {
        STATE_VARIABLE_IGCs_18_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_18_18, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_18_18, 1) = ((MR_Box) (PathCandidates0_25));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_18_18, 2) = ((MR_Box) (Var_32));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Cases_11;
      next_value_of_STATE_VARIABLE_IGCs_0_3 = STATE_VARIABLE_IGCs_18_18;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_IGCs_0_3 = next_value_of_STATE_VARIABLE_IGCs_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_disj_4_p_0(
  MR_Word PPId_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_IGCs_0_3,
  MR_Word * STATE_VARIABLE_IGCs_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_IGCs_4 = STATE_VARIABLE_IGCs_0_3;
    else
    {
      MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_IGCs_15_15;
      MR_Word PathCandidates0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_0_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_IGCs_11_23;
      MR_Word Var_27;
      MR_Word Var_29;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_IGCs_0_3;

      transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(PPId_1, Goal_10, STATE_VARIABLE_IGCs_0_3, &STATE_VARIABLE_IGCs_11_23);
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_11_23, (MR_Integer) 0))));
      Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_11_23, (MR_Integer) 2))));
      {
        STATE_VARIABLE_IGCs_15_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_15_15, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_15_15, 1) = ((MR_Box) (PathCandidates0_22));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_15_15, 2) = ((MR_Box) (Var_29));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Goals_11;
      next_value_of_STATE_VARIABLE_IGCs_0_3 = STATE_VARIABLE_IGCs_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_IGCs_0_3 = next_value_of_STATE_VARIABLE_IGCs_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_parallel_conj_4_p_0(
  MR_Word PPId_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_IGCs_0_3,
  MR_Word * STATE_VARIABLE_IGCs_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_IGCs_4 = STATE_VARIABLE_IGCs_0_3;
    else
    {
      MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_IGCs_15_15;
      MR_Word PathCandidates0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_0_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_IGCs_11_23;
      MR_Word Var_27;
      MR_Word Var_29;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_IGCs_0_3;

      transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(PPId_1, Goal_10, STATE_VARIABLE_IGCs_0_3, &STATE_VARIABLE_IGCs_11_23);
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_11_23, (MR_Integer) 0))));
      Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_11_23, (MR_Integer) 2))));
      {
        STATE_VARIABLE_IGCs_15_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_15_15, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_15_15, 1) = ((MR_Box) (PathCandidates0_22));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_15_15, 2) = ((MR_Box) (Var_29));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Goals_11;
      next_value_of_STATE_VARIABLE_IGCs_0_3 = STATE_VARIABLE_IGCs_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_IGCs_0_3 = next_value_of_STATE_VARIABLE_IGCs_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_plain_conj_4_p_0(
  MR_Word PPId_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_IGCs_0_3,
  MR_Word * STATE_VARIABLE_IGCs_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_IGCs_4 = STATE_VARIABLE_IGCs_0_3;
    else
    {
      MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_IGCs_15_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_IGCs_0_3;

      transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(PPId_1, Goal_10, STATE_VARIABLE_IGCs_0_3, &STATE_VARIABLE_IGCs_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Goals_11;
      next_value_of_STATE_VARIABLE_IGCs_0_3 = STATE_VARIABLE_IGCs_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_IGCs_0_3 = next_value_of_STATE_VARIABLE_IGCs_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_4_p_0(
  MR_Word PPId_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_IGCs_0_9,
  MR_Word * STATE_VARIABLE_IGCs_10)
{
  {
    MR_Word PathCandidates0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_0_9, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_IGCs_11_11;
    MR_Word Var_15;
    MR_Word Var_17;

    transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(PPId_5, Goal_6, STATE_VARIABLE_IGCs_0_9, &STATE_VARIABLE_IGCs_11_11);
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_11_11, (MR_Integer) 0))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_11_11, (MR_Integer) 2))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IGCs_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PathCandidates0_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_17));
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_handle_primitive_goal_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_IGCs_0_13,
  MR_Word * STATE_VARIABLE_IGCs_14)
{
  {
    MR_bool succeeded;
    MR_Word GoalInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 1))));
    MR_Word Detism_8;
    MR_Word CodeModel_9;
    MR_Word InstMapDelta_10;
    MR_Word InstMapDeltaPairs_11;
    MR_Word ModuleInfo_12;
    MR_Word Var_15;

    Detism_8 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_7);
    hlds__code_model__determinism_to_code_model_2_p_0(Detism_8, &CodeModel_9);
    switch (CodeModel_9) {
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
    if (succeeded)
    {
      Var_15 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_7);
      succeeded = (Var_15 == (MR_Integer) 0);
      if (succeeded)
      {
        InstMapDelta_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_7);
        hlds__instmap__instmap_delta_to_assoc_list_2_p_0(InstMapDelta_10, &InstMapDeltaPairs_11);
        ModuleInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_0_13, (MR_Integer) 0))));
        succeeded = transform_hlds__loop_inv__all_instmap_deltas_are_ground_2_p_0(ModuleInfo_12, InstMapDeltaPairs_11);
      }
    }
    if (succeeded)
    {
      MR_Word Var_17;
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_0_13, (MR_Integer) 1))));
      MR_Word Var_23;
      MR_Word Var_25;

      Var_17 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_18, ((MR_Box) (Goal_4)));
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_0_13, (MR_Integer) 0))));
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_0_13, (MR_Integer) 2))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_IGCs_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_25));
      }
    }
    else
      *STATE_VARIABLE_IGCs_14 = STATE_VARIABLE_IGCs_0_13;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__all_instmap_deltas_are_ground_2_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Inst_6;
      MR_Word VarInsts_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;

      Inst_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1))));
      succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_1, Inst_6);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = VarInsts_7;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__add_recursive_call_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_IGCs_0_7,
  MR_Word * STATE_VARIABLE_IGCs_8)
{
  {
    MR_Word RecCall_6;
    MR_Word Var_9;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_0_7, (MR_Integer) 1))));
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_16;
    MR_Word Var_17;

    Var_9 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_10);
    {
      RecCall_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RecCall_6, 0) = ((MR_Box) (Goal_4));
      MR_hl_field(MR_mktag(0), RecCall_6, 1) = ((MR_Box) (Var_9));
    }
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_0_7, (MR_Integer) 0))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_0_7, (MR_Integer) 1))));
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IGCs_0_7, (MR_Integer) 2))));
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (RecCall_6));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IGCs_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____igc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__loop_inv____Unify____igc_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__loop_inv____Compare____igc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__loop_inv____Compare____igc_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____rec_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__loop_inv____Unify____rec_call_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__loop_inv____Compare____rec_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__loop_inv____Compare____rec_call_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__loop_inv__init(void)
{
}

void mercury__transform_hlds__loop_inv__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__loop_inv__transform_hlds__loop_inv__type_ctor_info_gen_aux_proc_info_0);
	MR_register_type_ctor_info(&transform_hlds__loop_inv__transform_hlds__loop_inv__type_ctor_info_igc_info_0);
	MR_register_type_ctor_info(&transform_hlds__loop_inv__transform_hlds__loop_inv__type_ctor_info_rec_call_0);
}

void mercury__transform_hlds__loop_inv__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__loop_inv__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.loop_inv.
