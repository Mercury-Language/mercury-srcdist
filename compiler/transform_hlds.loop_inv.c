/*
** Automatically generated from `loop_inv.m'
** by the Mercury compiler,
** version 2016-10-30
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


/* :- module transform_hlds.loop_inv. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__loop_inv__init
ENDINIT
*/

#include "transform_hlds.loop_inv.mih"


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
#include "check_hlds.inst_test.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s {
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__Goal_5;
  MR_bool transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded;
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__V_7_7;
  jmp_buf transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__commit_0;
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__InvariantGoal_13;
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15;
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17;
  MR_Box transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__conv0_InvariantGoal_13;
};

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
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Inputs_48;
  jmp_buf transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_0;
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__InvariantGoal_17;
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19;
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21;
  MR_Box transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv0_InvariantGoal_17;
  jmp_buf transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_1;
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeCtorInfo_9_44;
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__NonLocals_41;
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUV_42;
  MR_Box transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv1_UUV_42;
  jmp_buf transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_2;
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeInfo_9_50;
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__V_49;
  MR_Box transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv2_V_49;
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


static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

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

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0_10001(
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

static void MR_CALL 
transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0_10001(
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box transform_hlds__loop_inv__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____igc_info_0_0_10001(
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

static void MR_CALL 
transform_hlds__loop_inv____Compare____igc_info_0_0_10001(
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box transform_hlds__loop_inv__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____rec_call_0_0_10001(
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

static void MR_CALL 
transform_hlds__loop_inv____Compare____rec_call_0_0_10001(
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box transform_hlds__loop_inv__wrapper_arg_3);

static void MR_CALL 
transform_hlds__loop_inv__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
  MR_Word * transform_hlds__loop_inv__HeadVar__3_3);

static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__case_goals__1151__1_1_f_0(
  MR_Word transform_hlds__loop_inv__LambdaHeadVar__1_8);

static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__compute_initial_aux_instmap__728__1_2_f_0(
  MR_Word transform_hlds__loop_inv__LambdaHeadVar__1_12,
  MR_Word transform_hlds__loop_inv__LambdaHeadVar__2_13);

static MR_bool MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__pred__inv_args__501__1_2_p_0(
  MR_Word transform_hlds__loop_inv__HeadVar__1_27,
  MR_Word * transform_hlds__loop_inv__HeadVar__2_28);

static void MR_CALL 
transform_hlds__loop_inv____Compare____rec_call_0_0(
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
  MR_Word transform_hlds__loop_inv__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____rec_call_0_0(
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2);

static void MR_CALL 
transform_hlds__loop_inv____Compare____igc_info_0_0(
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
  MR_Word transform_hlds__loop_inv__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____igc_info_0_0(
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2);

static void MR_CALL 
transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0(
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
  MR_Word transform_hlds__loop_inv__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0(
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__loop_inv__is_output_arg_4_p_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
  MR_Word transform_hlds__loop_inv__Var_6,
  MR_Word transform_hlds__loop_inv__Mode_7,
  MR_Word * transform_hlds__loop_inv__Var_4);

static MR_bool MR_CALL 
transform_hlds__loop_inv__is_input_arg_4_p_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
  MR_Word transform_hlds__loop_inv__Var_6,
  MR_Word transform_hlds__loop_inv__Mode_7,
  MR_Word * transform_hlds__loop_inv__Var_4);

static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_6(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_5(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_4(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_3(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_2(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

static MR_Word MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
  MR_Word transform_hlds__loop_inv__Goal_5);

static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_8(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_7(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_6(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_5(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_4(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_3(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_2(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

static MR_Word MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
  MR_Word transform_hlds__loop_inv__Goal_5);

static MR_Word MR_CALL 
transform_hlds__loop_inv__argmodes_3_f_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
  MR_Word transform_hlds__loop_inv__PredId_6,
  MR_Integer transform_hlds__loop_inv__ProcId_7);

static MR_bool MR_CALL 
transform_hlds__loop_inv__uniquely_used_args_4_p_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
  MR_Word transform_hlds__loop_inv__X_6,
  MR_Word transform_hlds__loop_inv__M_7,
  MR_Word * transform_hlds__loop_inv__X_4);

static MR_Box MR_CALL 
transform_hlds__loop_inv__case_goals_1_f_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

static MR_Word MR_CALL 
transform_hlds__loop_inv__case_goals_1_f_0(
  MR_Word transform_hlds__loop_inv__Cases_3);

static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_8(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_7(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_6(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_5(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_4(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_3(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_2(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

static MR_Word MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
  MR_Word transform_hlds__loop_inv__Goal_5);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_call_3_p_0(
  MR_Word transform_hlds__loop_inv__Replacement_4,
  MR_Word transform_hlds__loop_inv__CallGoal_5,
  MR_Word * transform_hlds__loop_inv__AuxCallGoal_6);

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_case_4_p_0(
  MR_Word transform_hlds__loop_inv__PPId_5,
  MR_Word transform_hlds__loop_inv__Replacement_6,
  MR_Word transform_hlds__loop_inv__Case_7,
  MR_Word * transform_hlds__loop_inv__AuxCase_8);

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_3(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2);

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_2(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2);

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2);

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(
  MR_Word transform_hlds__loop_inv__PPId_5,
  MR_Word transform_hlds__loop_inv__Replacement_6,
  MR_Word transform_hlds__loop_inv__Goal_7,
  MR_Word * transform_hlds__loop_inv__AuxGoal_8);

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_8_p_0(
  MR_Word transform_hlds__loop_inv__PredProcId_9,
  MR_Word transform_hlds__loop_inv__PredInfo0_10,
  MR_Word transform_hlds__loop_inv__ProcInfo0_11,
  MR_Word * transform_hlds__loop_inv__ProcInfo_12,
  MR_Word transform_hlds__loop_inv__Replacement_13,
  MR_Word transform_hlds__loop_inv__Body0_14,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_26);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_1(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_3(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_2(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_4(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0(
  MR_Word transform_hlds__loop_inv__Info_4,
  MR_Word transform_hlds__loop_inv__Goal_5,
  MR_Word * transform_hlds__loop_inv__AuxGoal_6);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_case_3_p_0(
  MR_Word transform_hlds__loop_inv__Info_4,
  MR_Word transform_hlds__loop_inv__Case_5,
  MR_Word * transform_hlds__loop_inv__AuxCase_6);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_3(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_2(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(
  MR_Word transform_hlds__loop_inv__Info_4,
  MR_Word transform_hlds__loop_inv__Goal_5,
  MR_Word * transform_hlds__loop_inv__AuxGoal_6);

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_9_p_0(
  MR_Word transform_hlds__loop_inv__InvGoals_10,
  MR_Word transform_hlds__loop_inv__PredProcId_11,
  MR_Word transform_hlds__loop_inv__AuxPredProcId_12,
  MR_Word transform_hlds__loop_inv__Replacement_13,
  MR_Word transform_hlds__loop_inv__Body_14,
  MR_Word transform_hlds__loop_inv__AuxPredInfo_15,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_0_22,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_24);

static void MR_CALL 
transform_hlds__loop_inv__create_aux_pred_10_p_0(
  MR_Word transform_hlds__loop_inv__PredProcId_11,
  MR_Word transform_hlds__loop_inv__HeadVars_12,
  MR_Word transform_hlds__loop_inv__ComputedInvArgs_13,
  MR_Word transform_hlds__loop_inv__InitialAuxInstMap_14,
  MR_Word * transform_hlds__loop_inv__AuxPredProcId_15,
  MR_Word * transform_hlds__loop_inv__Replacement_16,
  MR_Word * transform_hlds__loop_inv__AuxPredInfo_17,
  MR_Word * transform_hlds__loop_inv__AuxProcInfo_18,
  MR_Word transform_hlds__loop_inv__ModuleInfo0_19,
  MR_Word * transform_hlds__loop_inv__ModuleInfo_20);

static MR_Box MR_CALL 
transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

static MR_Word MR_CALL 
transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0(
  MR_Word transform_hlds__loop_inv__Gs_4,
  MR_Word transform_hlds__loop_inv__IM_5);

static void MR_CALL 
transform_hlds__loop_inv__add_output_4_p_0(
  MR_Word transform_hlds__loop_inv__UniquelyUsedVars_5,
  MR_Word transform_hlds__loop_inv__X_6,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_8,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_InvVars_9);

static void MR_CALL 
transform_hlds__loop_inv__add_outputs_5_p_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

static void MR_CALL 
transform_hlds__loop_inv__add_outputs_5_p_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_6,
  MR_Word transform_hlds__loop_inv__UUVs_7,
  MR_Word transform_hlds__loop_inv__Goal_8,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_10,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_InvVars_11);

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_1(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_3(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_2(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_4(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_7,
  MR_Word transform_hlds__loop_inv__Goal_8,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_DHGs_0_11,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_DHGs_12,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_DHVs_0_13,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_DHVs_14);

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_4_p_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3,
  MR_Box transform_hlds__loop_inv__wrapper_arg_4,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_5);

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_4_p_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
  MR_Word transform_hlds__loop_inv__InvGoals_6,
  MR_Word * transform_hlds__loop_inv__DontHoistGoals_7,
  MR_Word * transform_hlds__loop_inv__DontHoistVars_8);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_13(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_1(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_3(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_2(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_4(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_5(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_7(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_6(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_8(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_9(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_11(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_10(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_12(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_8,
  MR_Word transform_hlds__loop_inv__UUVs_9,
  MR_Word transform_hlds__loop_inv__Goal_10,
  MR_Word transform_hlds__loop_inv__IGs0_11,
  MR_Word * transform_hlds__loop_inv__IGs_12,
  MR_Word transform_hlds__loop_inv__IVs0_13,
  MR_Word * transform_hlds__loop_inv__IVs_14);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_6_p_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3,
  MR_Box transform_hlds__loop_inv__wrapper_arg_4,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_5);

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_6_p_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_7,
  MR_Word transform_hlds__loop_inv__UniquelyUsedVars_8,
  MR_Word transform_hlds__loop_inv__InvGoals0_9,
  MR_Word * transform_hlds__loop_inv__InvGoals_10,
  MR_Word transform_hlds__loop_inv__InvVars0_11,
  MR_Word * transform_hlds__loop_inv__InvVars_12);

static MR_Word MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_2_f_0(
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
  MR_Word transform_hlds__loop_inv__Y_2);

static MR_Box MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

static MR_Word MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0(
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
  MR_Word transform_hlds__loop_inv__MaybeInvArgs_6);

static MR_Word MR_CALL 
transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_f_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
  MR_Word transform_hlds__loop_inv__Arg_6,
  MR_Word transform_hlds__loop_inv__Mode_7);

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_1(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_3(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_4(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_6(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_5(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_7(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_2(
  void * transform_hlds__loop_inv__env_ptr_arg);

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_8(
  void * transform_hlds__loop_inv__env_ptr_arg);

static MR_bool MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0(
  MR_Word transform_hlds__loop_inv__Goalss_3,
  MR_Word transform_hlds__loop_inv__Goal_4);

static MR_bool MR_CALL 
transform_hlds__loop_inv__all_instmap_deltas_are_ground_2_p_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2);

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_handle_primitive_goal_3_p_0(
  MR_Word transform_hlds__loop_inv__Goal_4,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_14);

static void MR_CALL 
transform_hlds__loop_inv__add_recursive_call_3_p_0(
  MR_Word transform_hlds__loop_inv__Goal_4,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_8);

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_switch_4_p_0(
  MR_Word transform_hlds__loop_inv__PPId_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4);

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_disj_4_p_0(
  MR_Word transform_hlds__loop_inv__PPId_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4);

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_parallel_conj_4_p_0(
  MR_Word transform_hlds__loop_inv__PPId_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4);

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_plain_conj_4_p_0(
  MR_Word transform_hlds__loop_inv__PPId_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4);

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_4_p_0(
  MR_Word transform_hlds__loop_inv__PPId_5,
  MR_Word transform_hlds__loop_inv__Goal_6,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_9,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_10);

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(
  MR_Word transform_hlds__loop_inv__PPId_5,
  MR_Word transform_hlds__loop_inv__Goal_6,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);

static MR_bool MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_4(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_3(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_2(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);


static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_2[13][3];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_3[5][5];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_4[5][7];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_5[6][6];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_6[1][10];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_7[1][9];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_8[1][1];




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
    ((MR_Box) (transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__loop_inv__case_goals_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_3[4])),
    ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_3[4])),
    ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_3[4])),
    ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_3[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__loop_inv__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_4[5][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&transform_hlds__loop_inv__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_5[6][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__loop_inv__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__loop_inv__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__loop_inv__transform_hlds__loop_inv__type_ctor_info_gen_aux_proc_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__loop_inv__transform_hlds__loop_inv__type_ctor_info_gen_aux_proc_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_6[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_7[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_8[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__loop_inv__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__loop_inv__transform_hlds__loop_inv__field_types_gen_aux_proc_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_ConstString transform_hlds__loop_inv__transform_hlds__loop_inv__field_names_gen_aux_proc_info_0_0[4] = {
  (MR_String) "gapi_module_info",
  (MR_String) "gapi_inv_goals",
  (MR_String) "gapi_pred_proc_id",
  (MR_String) "gapi_replament_goal"
};

static const MR_DuFunctorDesc transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_gen_aux_proc_info_0_0 = {
  (MR_String) "gen_aux_proc_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__loop_inv__transform_hlds__loop_inv__field_types_gen_aux_proc_info_0_0,
  transform_hlds__loop_inv__transform_hlds__loop_inv__field_names_gen_aux_proc_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_gen_aux_proc_info_0_0[1] = {
  &transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_gen_aux_proc_info_0_0
};

static const MR_DuPtagLayout transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_gen_aux_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_gen_aux_proc_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0_10001)),
  ((MR_Box) (transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0_10001)),
  (MR_String) "transform_hlds.loop_inv",
  (MR_String) "gen_aux_proc_info",
  {     transform_hlds__loop_inv__transform_hlds__loop_inv__du_name_ordered_gen_aux_proc_info_0 },
  {     transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_gen_aux_proc_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__loop_inv__transform_hlds__loop_inv__functor_number_map_gen_aux_proc_info_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__loop_inv__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_TypeInfo) &transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__loop_inv__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__loop_inv__transform_hlds__loop_inv__field_types_igc_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__loop_inv__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__loop_inv__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_ConstString transform_hlds__loop_inv__transform_hlds__loop_inv__field_names_igc_info_0_0[3] = {
  (MR_String) "igc_module_info",
  (MR_String) "igc_path_candidates",
  (MR_String) "igc_rec_calls"
};

static const MR_DuFunctorDesc transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_igc_info_0_0 = {
  (MR_String) "igc_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__loop_inv__transform_hlds__loop_inv__field_types_igc_info_0_0,
  transform_hlds__loop_inv__transform_hlds__loop_inv__field_names_igc_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_igc_info_0_0[1] = {
  &transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_igc_info_0_0
};

static const MR_DuPtagLayout transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_igc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_igc_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__loop_inv____Unify____igc_info_0_0_10001)),
  ((MR_Box) (transform_hlds__loop_inv____Compare____igc_info_0_0_10001)),
  (MR_String) "transform_hlds.loop_inv",
  (MR_String) "igc_info",
  {     transform_hlds__loop_inv__transform_hlds__loop_inv__du_name_ordered_igc_info_0 },
  {     transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_igc_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__loop_inv__transform_hlds__loop_inv__functor_number_map_igc_info_0
};

const MR_TypeCtorInfo_Struct transform_hlds__loop_inv__transform_hlds__loop_inv__type_ctor_info_rec_call_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__loop_inv____Unify____rec_call_0_0_10001)),
  ((MR_Box) (transform_hlds__loop_inv____Compare____rec_call_0_0_10001)),
  (MR_String) "transform_hlds.loop_inv",
  (MR_String) "rec_call",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__loop_inv__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0_10001(
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;

    {
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
    return transform_hlds__loop_inv__succeeded;
  }
}

static void MR_CALL 
transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0_10001(
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box transform_hlds__loop_inv__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__1_1;

    {
      transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0(&transform_hlds__loop_inv__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_3));
    }
    *transform_hlds__loop_inv__wrapper_arg_1 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____igc_info_0_0_10001(
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;

    {
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv____Unify____igc_info_0_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
    return transform_hlds__loop_inv__succeeded;
  }
}

static void MR_CALL 
transform_hlds__loop_inv____Compare____igc_info_0_0_10001(
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box transform_hlds__loop_inv__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__1_1;

    {
      transform_hlds__loop_inv____Compare____igc_info_0_0(&transform_hlds__loop_inv__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_3));
    }
    *transform_hlds__loop_inv__wrapper_arg_1 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____rec_call_0_0_10001(
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;

    {
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv____Unify____rec_call_0_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
    return transform_hlds__loop_inv__succeeded;
  }
}

static void MR_CALL 
transform_hlds__loop_inv____Compare____rec_call_0_0_10001(
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box transform_hlds__loop_inv__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__1_1;

    {
      transform_hlds__loop_inv____Compare____rec_call_0_0(&transform_hlds__loop_inv__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_3));
    }
    *transform_hlds__loop_inv__wrapper_arg_1 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
  MR_Word * transform_hlds__loop_inv__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;

    if ((transform_hlds__loop_inv__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__loop_inv__HeadVar__3_3 = transform_hlds__loop_inv__HeadVar__2_2;
    else
      {
        MR_Word transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 1)));
        MR_Box transform_hlds__loop_inv__V_18_18 = (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 0));

        if ((transform_hlds__loop_inv__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "predicate \140transform_hlds.loop_inv.replace_initial_args\'/3", (MR_String) "first arg longer than second");
              return;
            }
          }
        else
          {
            MR_Word transform_hlds__loop_inv__Xs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__loop_inv__Xs_9;
            MR_Box transform_hlds__loop_inv__V_7_7 = (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0));

            {
              transform_hlds__loop_inv__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(transform_hlds__loop_inv__V_17_17, transform_hlds__loop_inv__Xs0_8, &transform_hlds__loop_inv__Xs_9);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__loop_inv__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = transform_hlds__loop_inv__V_18_18;
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__loop_inv__Xs_9));
            }
          }
      }
  }
}

static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__case_goals__1151__1_1_f_0(
  MR_Word transform_hlds__loop_inv__LambdaHeadVar__1_8)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__LambdaHeadVar__2_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__LambdaHeadVar__1_8, (MR_Integer) 2)));
    MR_Word transform_hlds__loop_inv___MainConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__LambdaHeadVar__1_8, (MR_Integer) 0)));
    MR_Word transform_hlds__loop_inv___OtherConsIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__LambdaHeadVar__1_8, (MR_Integer) 1)));

    return transform_hlds__loop_inv__LambdaHeadVar__2_9;
  }
}

static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__compute_initial_aux_instmap__728__1_2_f_0(
  MR_Word transform_hlds__loop_inv__LambdaHeadVar__1_12,
  MR_Word transform_hlds__loop_inv__LambdaHeadVar__2_13)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__LambdaHeadVar__3_14;
    MR_Word transform_hlds__loop_inv__IMD_11;
    MR_Word transform_hlds__loop_inv__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__LambdaHeadVar__1_12, (MR_Integer) 1)));
    MR_Word transform_hlds__loop_inv___GoalExpr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__LambdaHeadVar__1_12, (MR_Integer) 0)));

    {
      transform_hlds__loop_inv__IMD_11 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__loop_inv__GoalInfo_17);
    }
    {
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__loop_inv__LambdaHeadVar__2_13, transform_hlds__loop_inv__IMD_11, &transform_hlds__loop_inv__LambdaHeadVar__3_14);
    }
    return transform_hlds__loop_inv__LambdaHeadVar__3_14;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__pred__inv_args__501__1_2_p_0(
  MR_Word transform_hlds__loop_inv__HeadVar__1_27,
  MR_Word * transform_hlds__loop_inv__HeadVar__2_28)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Box transform_hlds__loop_inv__conv0_HeadVar__2_28;

    {
      transform_hlds__loop_inv__succeeded = mercury__maybe__maybe_is_yes_2_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__HeadVar__1_27, &transform_hlds__loop_inv__conv0_HeadVar__2_28);
    }
    if (transform_hlds__loop_inv__succeeded)
      {
        *transform_hlds__loop_inv__HeadVar__2_28 = ((MR_Word) transform_hlds__loop_inv__conv0_HeadVar__2_28);
        transform_hlds__loop_inv__succeeded = MR_TRUE;
      }
    return transform_hlds__loop_inv__succeeded;
  }
}

static void MR_CALL 
transform_hlds__loop_inv____Compare____rec_call_0_0(
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
  MR_Word transform_hlds__loop_inv__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__Cast_HeadVar1_4 = transform_hlds__loop_inv__HeadVar__2_2;
    MR_Word transform_hlds__loop_inv__Cast_HeadVar2_5 = transform_hlds__loop_inv__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_2[0], transform_hlds__loop_inv__HeadVar__1_1, ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____rec_call_0_0(
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__Cast_HeadVar1_3 = transform_hlds__loop_inv__HeadVar__1_1;
    MR_Word transform_hlds__loop_inv__Cast_HeadVar2_4 = transform_hlds__loop_inv__HeadVar__2_2;

    {
      transform_hlds__loop_inv__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_2[0], ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar2_4)));
    }
    return transform_hlds__loop_inv__succeeded;
  }
}

static void MR_CALL 
transform_hlds__loop_inv____Compare____igc_info_0_0(
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
  MR_Word transform_hlds__loop_inv__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Integer transform_hlds__loop_inv__CastX_12 = (MR_Integer) transform_hlds__loop_inv__HeadVar__2_2;
    MR_Integer transform_hlds__loop_inv__CastY_13 = (MR_Integer) transform_hlds__loop_inv__HeadVar__3_3;

    transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__CastX_12 == transform_hlds__loop_inv__CastY_13);
    if (transform_hlds__loop_inv__succeeded)
      *transform_hlds__loop_inv__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__loop_inv__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__loop_inv__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__loop_inv__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__loop_inv__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__loop_inv__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__loop_inv__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__loop_inv__V_10_10;

        {
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__loop_inv__V_10_10, transform_hlds__loop_inv__V_4_4, transform_hlds__loop_inv__V_7_7);
        }
        transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_10_10 == (MR_Integer) 0);
        transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
        if (transform_hlds__loop_inv__succeeded)
          *transform_hlds__loop_inv__HeadVar__1_1 = transform_hlds__loop_inv__V_10_10;
        else
          {
            MR_Word transform_hlds__loop_inv__V_11_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[5], &transform_hlds__loop_inv__V_11_11, ((MR_Box) (transform_hlds__loop_inv__V_5_5)), ((MR_Box) (transform_hlds__loop_inv__V_8_8)));
            }
            transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_11_11 == (MR_Integer) 0);
            transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
            if (transform_hlds__loop_inv__succeeded)
              *transform_hlds__loop_inv__HeadVar__1_1 = transform_hlds__loop_inv__V_11_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[6], transform_hlds__loop_inv__HeadVar__1_1, ((MR_Box) (transform_hlds__loop_inv__V_6_6)), ((MR_Box) (transform_hlds__loop_inv__V_9_9)));
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____igc_info_0_0(
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Integer transform_hlds__loop_inv__CastX_9 = (MR_Integer) transform_hlds__loop_inv__HeadVar__1_1;
    MR_Integer transform_hlds__loop_inv__CastY_10 = (MR_Integer) transform_hlds__loop_inv__HeadVar__2_2;

    transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__CastX_9 == transform_hlds__loop_inv__CastY_10);
    if (transform_hlds__loop_inv__succeeded)
      transform_hlds__loop_inv__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__loop_inv__TypeInfo_12_12;
        MR_Word transform_hlds__loop_inv__TypeInfo_13_13;
        MR_Word transform_hlds__loop_inv__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__loop_inv__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__loop_inv__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__loop_inv__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__loop_inv__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__loop_inv__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 2)));

        {
          transform_hlds__loop_inv__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__loop_inv__V_3_3, transform_hlds__loop_inv__V_6_6);
        }
        if (transform_hlds__loop_inv__succeeded)
          {
            transform_hlds__loop_inv__TypeInfo_12_12 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[5];
            {
              transform_hlds__loop_inv__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__loop_inv__TypeInfo_12_12, ((MR_Box) (transform_hlds__loop_inv__V_4_4)), ((MR_Box) (transform_hlds__loop_inv__V_7_7)));
            }
            if (transform_hlds__loop_inv__succeeded)
              {
                transform_hlds__loop_inv__TypeInfo_13_13 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[6];
                {
                  transform_hlds__loop_inv__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__loop_inv__TypeInfo_13_13, ((MR_Box) (transform_hlds__loop_inv__V_5_5)), ((MR_Box) (transform_hlds__loop_inv__V_8_8)));
                }
              }
          }
      }
    return transform_hlds__loop_inv__succeeded;
  }
}

static void MR_CALL 
transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0(
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
  MR_Word transform_hlds__loop_inv__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Integer transform_hlds__loop_inv__CastX_15 = (MR_Integer) transform_hlds__loop_inv__HeadVar__2_2;
    MR_Integer transform_hlds__loop_inv__CastY_16 = (MR_Integer) transform_hlds__loop_inv__HeadVar__3_3;

    transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__CastX_15 == transform_hlds__loop_inv__CastY_16);
    if (transform_hlds__loop_inv__succeeded)
      *transform_hlds__loop_inv__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__loop_inv__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__loop_inv__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__loop_inv__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__loop_inv__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__loop_inv__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__loop_inv__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__loop_inv__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__loop_inv__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word transform_hlds__loop_inv__V_12_12;

        {
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__loop_inv__V_12_12, transform_hlds__loop_inv__V_4_4, transform_hlds__loop_inv__V_8_8);
        }
        transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_12_12 == (MR_Integer) 0);
        transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
        if (transform_hlds__loop_inv__succeeded)
          *transform_hlds__loop_inv__HeadVar__1_1 = transform_hlds__loop_inv__V_12_12;
        else
          {
            MR_Word transform_hlds__loop_inv__V_13_13;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[1], &transform_hlds__loop_inv__V_13_13, ((MR_Box) (transform_hlds__loop_inv__V_5_5)), ((MR_Box) (transform_hlds__loop_inv__V_9_9)));
            }
            transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_13_13 == (MR_Integer) 0);
            transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
            if (transform_hlds__loop_inv__succeeded)
              *transform_hlds__loop_inv__HeadVar__1_1 = transform_hlds__loop_inv__V_13_13;
            else
              {
                MR_Word transform_hlds__loop_inv__V_14_14;

                {
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__loop_inv__V_14_14, transform_hlds__loop_inv__V_6_6, transform_hlds__loop_inv__V_10_10);
                }
                transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_14_14 == (MR_Integer) 0);
                transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
                if (transform_hlds__loop_inv__succeeded)
                  *transform_hlds__loop_inv__HeadVar__1_1 = transform_hlds__loop_inv__V_14_14;
                else
                  {
                    hlds__hlds_goal____Compare____hlds_goal_0_0(transform_hlds__loop_inv__HeadVar__1_1, transform_hlds__loop_inv__V_7_7, transform_hlds__loop_inv__V_11_11);
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0(
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Integer transform_hlds__loop_inv__CastX_11 = (MR_Integer) transform_hlds__loop_inv__HeadVar__1_1;
    MR_Integer transform_hlds__loop_inv__CastY_12 = (MR_Integer) transform_hlds__loop_inv__HeadVar__2_2;

    transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__CastX_11 == transform_hlds__loop_inv__CastY_12);
    if (transform_hlds__loop_inv__succeeded)
      transform_hlds__loop_inv__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__loop_inv__TypeInfo_14_14;
        MR_Word transform_hlds__loop_inv__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__loop_inv__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__loop_inv__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__loop_inv__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word transform_hlds__loop_inv__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__loop_inv__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__loop_inv__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__loop_inv__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 3)));

        {
          transform_hlds__loop_inv__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__loop_inv__V_3_3, transform_hlds__loop_inv__V_7_7);
        }
        if (transform_hlds__loop_inv__succeeded)
          {
            transform_hlds__loop_inv__TypeInfo_14_14 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[1];
            {
              transform_hlds__loop_inv__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__loop_inv__TypeInfo_14_14, ((MR_Box) (transform_hlds__loop_inv__V_4_4)), ((MR_Box) (transform_hlds__loop_inv__V_8_8)));
            }
            if (transform_hlds__loop_inv__succeeded)
              {
                {
                  transform_hlds__loop_inv__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__loop_inv__V_5_5, transform_hlds__loop_inv__V_9_9);
                }
                if (transform_hlds__loop_inv__succeeded)
                  {
                    transform_hlds__loop_inv__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__loop_inv__V_6_6, transform_hlds__loop_inv__V_10_10);
                  }
              }
          }
      }
    return transform_hlds__loop_inv__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__is_output_arg_4_p_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
  MR_Word transform_hlds__loop_inv__Var_6,
  MR_Word transform_hlds__loop_inv__Mode_7,
  MR_Word * transform_hlds__loop_inv__Var_4)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;

    *transform_hlds__loop_inv__Var_4 = transform_hlds__loop_inv__Var_6;
    {
      transform_hlds__loop_inv__succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__Mode_7);
    }
    return transform_hlds__loop_inv__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__is_input_arg_4_p_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
  MR_Word transform_hlds__loop_inv__Var_6,
  MR_Word transform_hlds__loop_inv__Mode_7,
  MR_Word * transform_hlds__loop_inv__Var_4)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__InitInst_8;
    MR_Word transform_hlds__loop_inv___FinalInst_9;

    *transform_hlds__loop_inv__Var_4 = transform_hlds__loop_inv__Var_6;
    {
      check_hlds__mode_util__mode_get_insts_4_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__Mode_7, &transform_hlds__loop_inv__InitInst_8, &transform_hlds__loop_inv___FinalInst_9);
    }
    {
      transform_hlds__loop_inv__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__InitInst_8);
    }
    transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
    return transform_hlds__loop_inv__succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_6(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv5_HeadVar__2_2;

    {
      transform_hlds__loop_inv__conv5_HeadVar__2_2 = check_hlds__mode_util__unify_modes_to_rhs_mode_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv5_HeadVar__2_2));
    return transform_hlds__loop_inv__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_5(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv4_Var_4;

    {
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__is_output_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv4_Var_4);
    }
    if (transform_hlds__loop_inv__succeeded)
      {
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv4_Var_4));
        transform_hlds__loop_inv__succeeded = MR_TRUE;
      }
    return transform_hlds__loop_inv__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_4(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv3_Var_4;

    {
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__is_output_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv3_Var_4);
    }
    if (transform_hlds__loop_inv__succeeded)
      {
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv3_Var_4));
        transform_hlds__loop_inv__succeeded = MR_TRUE;
      }
    return transform_hlds__loop_inv__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_3(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv2_Var_4;

    {
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__is_output_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv2_Var_4);
    }
    if (transform_hlds__loop_inv__succeeded)
      {
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv2_Var_4));
        transform_hlds__loop_inv__succeeded = MR_TRUE;
      }
    return transform_hlds__loop_inv__succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_2(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv1_HeadVar__2_2;

    {
      transform_hlds__loop_inv__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv1_HeadVar__2_2));
    return transform_hlds__loop_inv__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv0_Var_4;

    {
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__is_output_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv0_Var_4);
    }
    if (transform_hlds__loop_inv__succeeded)
      {
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_Var_4));
        transform_hlds__loop_inv__succeeded = MR_TRUE;
      }
    return transform_hlds__loop_inv__succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
  MR_Word transform_hlds__loop_inv__Goal_5)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__Outputs_6;
    MR_Word transform_hlds__loop_inv__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 0)));
    MR_Word transform_hlds__loop_inv___GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.goal_outputs\'/2", (MR_String) "compound goal");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__loop_inv__LHS_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
          MR_Word transform_hlds__loop_inv__Kind_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
          MR_Word transform_hlds__loop_inv___RHS_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
          MR_Word transform_hlds__loop_inv__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
          MR_Word transform_hlds__loop_inv__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));

          switch (MR_tag((MR_Word) transform_hlds__loop_inv__Kind_27)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  transform_hlds__loop_inv__Outputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Outputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_24));
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Outputs_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__loop_inv__TypeCtorInfo_105_105;
                MR_Word transform_hlds__loop_inv__TypeInfo_108_108;
                MR_Word transform_hlds__loop_inv__RHSArgs_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 2)));
                MR_Word transform_hlds__loop_inv__V_66_66;
                MR_Word transform_hlds__loop_inv__V_67_67;
                MR_Word transform_hlds__loop_inv__ArgModes_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 3)));
                MR_Word transform_hlds__loop_inv__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 0)));
                MR_Word transform_hlds__loop_inv__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 1)));
                MR_Word transform_hlds__loop_inv__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 4)));
                MR_Word transform_hlds__loop_inv__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 5)));

                {
                  transform_hlds__loop_inv__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_66_66, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[4]));
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_66_66, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_5));
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_66_66, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
                }
                transform_hlds__loop_inv__TypeCtorInfo_105_105 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                {
                  transform_hlds__loop_inv__V_67_67 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0, transform_hlds__loop_inv__TypeCtorInfo_105_105, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[12], transform_hlds__loop_inv__ArgModes_80);
                }
                transform_hlds__loop_inv__TypeInfo_108_108 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
                {
                  mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_108_108, transform_hlds__loop_inv__TypeCtorInfo_105_105, transform_hlds__loop_inv__TypeInfo_108_108, transform_hlds__loop_inv__V_66_66, transform_hlds__loop_inv__RHSArgs_38, transform_hlds__loop_inv__V_67_67, &transform_hlds__loop_inv__Outputs_6);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  transform_hlds__loop_inv__Outputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Outputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_24));
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Outputs_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__Kind_27, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  transform_hlds__loop_inv__Outputs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  break;
                case (MR_Integer) 1:
                  transform_hlds__loop_inv__Outputs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__loop_inv__TypeInfo_86_86;
          MR_Word transform_hlds__loop_inv__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
          MR_Integer transform_hlds__loop_inv__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
          MR_Word transform_hlds__loop_inv__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
          MR_Word transform_hlds__loop_inv__V_75_75;
          MR_Word transform_hlds__loop_inv__V_76_76;
          MR_Word transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
          MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
          MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

          {
            transform_hlds__loop_inv__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_75_75, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[4]));
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_75_75, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_4));
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_75_75, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
          }
          {
            transform_hlds__loop_inv__V_76_76 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_9, transform_hlds__loop_inv__ProcId_10);
          }
          transform_hlds__loop_inv__TypeInfo_86_86 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
          {
            mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_86_86, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_86_86, transform_hlds__loop_inv__V_75_75, transform_hlds__loop_inv__Args_11, transform_hlds__loop_inv__V_76_76, &transform_hlds__loop_inv__Outputs_6);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word transform_hlds__loop_inv__TypeInfo_91_91;
              MR_Word transform_hlds__loop_inv__ArgModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
              MR_Word transform_hlds__loop_inv__V_74_74;
              MR_Word transform_hlds__loop_inv__Args_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
              MR_Word transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
              MR_Word transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
              MR_Word transform_hlds__loop_inv__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

              {
                transform_hlds__loop_inv__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_74_74, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[4]));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_74_74, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_3));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_74_74, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
              }
              transform_hlds__loop_inv__TypeInfo_91_91 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
              {
                mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_91_91, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_91_91, transform_hlds__loop_inv__V_74_74, transform_hlds__loop_inv__Args_77, transform_hlds__loop_inv__ArgModes_16, &transform_hlds__loop_inv__Outputs_6);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__loop_inv__TypeInfo_97_97;
              MR_Word transform_hlds__loop_inv__ForeignArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
              MR_Word transform_hlds__loop_inv__V_70_70;
              MR_Word transform_hlds__loop_inv__V_71_71;
              MR_Word transform_hlds__loop_inv__V_72_72;
              MR_Word transform_hlds__loop_inv__PredId_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
              MR_Integer transform_hlds__loop_inv__ProcId_79 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
              MR_Word transform_hlds__loop_inv__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
              MR_Word transform_hlds__loop_inv__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));
              MR_Word transform_hlds__loop_inv__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 6)));
              MR_Word transform_hlds__loop_inv__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 7)));

              {
                transform_hlds__loop_inv__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_70_70, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[4]));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_70_70, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_1));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_70_70, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
              }
              transform_hlds__loop_inv__TypeInfo_97_97 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
              {
                transform_hlds__loop_inv__V_71_71 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, transform_hlds__loop_inv__TypeInfo_97_97, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[11], transform_hlds__loop_inv__ForeignArgs_20);
              }
              {
                transform_hlds__loop_inv__V_72_72 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_78, transform_hlds__loop_inv__ProcId_79);
              }
              {
                mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_97_97, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_97_97, transform_hlds__loop_inv__V_70_70, transform_hlds__loop_inv__V_71_71, transform_hlds__loop_inv__V_72_72, &transform_hlds__loop_inv__Outputs_6);
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.goal_outputs\'/2", (MR_String) "compound goal");
              }
            }
            break;
        }
        break;
    }
    return transform_hlds__loop_inv__Outputs_6;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_8(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv7_HeadVar__2_2;

    {
      transform_hlds__loop_inv__conv7_HeadVar__2_2 = check_hlds__mode_util__unify_modes_to_rhs_mode_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv7_HeadVar__2_2));
    return transform_hlds__loop_inv__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_7(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv6_Var_4;

    {
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__is_input_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv6_Var_4);
    }
    if (transform_hlds__loop_inv__succeeded)
      {
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv6_Var_4));
        transform_hlds__loop_inv__succeeded = MR_TRUE;
      }
    return transform_hlds__loop_inv__succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_6(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv5_HeadVar__2_2;

    {
      transform_hlds__loop_inv__conv5_HeadVar__2_2 = check_hlds__mode_util__unify_modes_to_rhs_mode_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv5_HeadVar__2_2));
    return transform_hlds__loop_inv__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_5(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv4_Var_4;

    {
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__is_input_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv4_Var_4);
    }
    if (transform_hlds__loop_inv__succeeded)
      {
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv4_Var_4));
        transform_hlds__loop_inv__succeeded = MR_TRUE;
      }
    return transform_hlds__loop_inv__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_4(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv3_Var_4;

    {
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__is_input_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv3_Var_4);
    }
    if (transform_hlds__loop_inv__succeeded)
      {
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv3_Var_4));
        transform_hlds__loop_inv__succeeded = MR_TRUE;
      }
    return transform_hlds__loop_inv__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_3(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv2_Var_4;

    {
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__is_input_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv2_Var_4);
    }
    if (transform_hlds__loop_inv__succeeded)
      {
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv2_Var_4));
        transform_hlds__loop_inv__succeeded = MR_TRUE;
      }
    return transform_hlds__loop_inv__succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_2(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv1_HeadVar__2_2;

    {
      transform_hlds__loop_inv__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv1_HeadVar__2_2));
    return transform_hlds__loop_inv__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv0_Var_4;

    {
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__is_input_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv0_Var_4);
    }
    if (transform_hlds__loop_inv__succeeded)
      {
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_Var_4));
        transform_hlds__loop_inv__succeeded = MR_TRUE;
      }
    return transform_hlds__loop_inv__succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
  MR_Word transform_hlds__loop_inv__Goal_5)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__Inputs_6;
    MR_Word transform_hlds__loop_inv__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 0)));
    MR_Word transform_hlds__loop_inv___GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.goal_inputs\'/2", (MR_String) "compound goal");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__loop_inv__LHS_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
          MR_Word transform_hlds__loop_inv__UnifyRHS_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
          MR_Word transform_hlds__loop_inv__Kind_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
          MR_Word transform_hlds__loop_inv__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
          MR_Word transform_hlds__loop_inv__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));

          switch (MR_tag((MR_Word) transform_hlds__loop_inv__Kind_29)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word transform_hlds__loop_inv__TypeCtorInfo_133_133;
                MR_Word transform_hlds__loop_inv__TypeInfo_136_136;
                MR_Word transform_hlds__loop_inv__RHSArgs_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 2)));
                MR_Word transform_hlds__loop_inv__V_89_89;
                MR_Word transform_hlds__loop_inv__V_90_90;
                MR_Word transform_hlds__loop_inv__ArgModes_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 3)));
                MR_Word transform_hlds__loop_inv__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 0)));
                MR_Word transform_hlds__loop_inv__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 1)));
                MR_Word transform_hlds__loop_inv__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 4)));
                MR_Word transform_hlds__loop_inv__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 5)));
                MR_Word transform_hlds__loop_inv__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 6)));

                {
                  transform_hlds__loop_inv__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_89_89, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[4]));
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_89_89, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_5));
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_89_89, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
                }
                transform_hlds__loop_inv__TypeCtorInfo_133_133 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                {
                  transform_hlds__loop_inv__V_90_90 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0, transform_hlds__loop_inv__TypeCtorInfo_133_133, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[9], transform_hlds__loop_inv__ArgModes_102);
                }
                transform_hlds__loop_inv__TypeInfo_136_136 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
                {
                  mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_136_136, transform_hlds__loop_inv__TypeCtorInfo_133_133, transform_hlds__loop_inv__TypeInfo_136_136, transform_hlds__loop_inv__V_89_89, transform_hlds__loop_inv__RHSArgs_33, transform_hlds__loop_inv__V_90_90, &transform_hlds__loop_inv__Inputs_6);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__loop_inv__TypeCtorInfo_141_141;
                MR_Word transform_hlds__loop_inv__TypeInfo_144_144;
                MR_Word transform_hlds__loop_inv__RHSInputs_41;
                MR_Word transform_hlds__loop_inv__V_86_86;
                MR_Word transform_hlds__loop_inv__V_87_87;
                MR_Word transform_hlds__loop_inv__ArgModes_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 3)));
                MR_Word transform_hlds__loop_inv__RHSArgs_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 2)));
                MR_Word transform_hlds__loop_inv__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 0)));
                MR_Word transform_hlds__loop_inv__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 1)));
                MR_Word transform_hlds__loop_inv__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 4)));
                MR_Word transform_hlds__loop_inv__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 5)));

                {
                  transform_hlds__loop_inv__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_86_86, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[4]));
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_86_86, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_7));
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_86_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_86_86, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
                }
                transform_hlds__loop_inv__TypeCtorInfo_141_141 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                {
                  transform_hlds__loop_inv__V_87_87 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0, transform_hlds__loop_inv__TypeCtorInfo_141_141, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[10], transform_hlds__loop_inv__ArgModes_103);
                }
                transform_hlds__loop_inv__TypeInfo_144_144 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
                {
                  mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_144_144, transform_hlds__loop_inv__TypeCtorInfo_141_141, transform_hlds__loop_inv__TypeInfo_144_144, transform_hlds__loop_inv__V_86_86, transform_hlds__loop_inv__RHSArgs_104, transform_hlds__loop_inv__V_87_87, &transform_hlds__loop_inv__RHSInputs_41);
                }
                {
                  transform_hlds__loop_inv__Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_26));
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 1) = ((MR_Box) (transform_hlds__loop_inv__RHSInputs_41));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word transform_hlds__loop_inv__RHS_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Kind_29, (MR_Integer) 1)));
                MR_Word transform_hlds__loop_inv__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Kind_29, (MR_Integer) 0)));

                {
                  transform_hlds__loop_inv__Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__RHS_43));
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__Kind_29, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word transform_hlds__loop_inv__V_83_83;
                    MR_Word transform_hlds__loop_inv__RHS_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__Kind_29, (MR_Integer) 2)));
                    MR_Word transform_hlds__loop_inv__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__Kind_29, (MR_Integer) 1)));

                    {
                      transform_hlds__loop_inv__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_83_83, 0) = ((MR_Box) (transform_hlds__loop_inv__RHS_105));
                      MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      transform_hlds__loop_inv__Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_26));
                      MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 1) = ((MR_Box) (transform_hlds__loop_inv__V_83_83));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  switch (MR_tag((MR_Word) transform_hlds__loop_inv__UnifyRHS_27)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word transform_hlds__loop_inv__V_81_81;
                        MR_Word transform_hlds__loop_inv__RHS_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__UnifyRHS_27, (MR_Integer) 0)));

                        {
                          transform_hlds__loop_inv__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_81_81, 0) = ((MR_Box) (transform_hlds__loop_inv__RHS_106));
                          MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          transform_hlds__loop_inv__Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_26));
                          MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 1) = ((MR_Box) (transform_hlds__loop_inv__V_81_81));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          transform_hlds__loop_inv__Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_26));
                          MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.goal_inputs\'/2", (MR_String) "lambda goal");
                        }
                      }
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
          MR_Word transform_hlds__loop_inv__TypeInfo_114_114;
          MR_Word transform_hlds__loop_inv__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
          MR_Integer transform_hlds__loop_inv__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
          MR_Word transform_hlds__loop_inv__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
          MR_Word transform_hlds__loop_inv__V_97_97;
          MR_Word transform_hlds__loop_inv__V_98_98;
          MR_Word transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
          MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
          MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

          {
            transform_hlds__loop_inv__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_97_97, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[4]));
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_97_97, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_4));
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_97_97, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_97_97, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
          }
          {
            transform_hlds__loop_inv__V_98_98 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_9, transform_hlds__loop_inv__ProcId_10);
          }
          transform_hlds__loop_inv__TypeInfo_114_114 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
          {
            mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_114_114, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_114_114, transform_hlds__loop_inv__V_97_97, transform_hlds__loop_inv__Args_11, transform_hlds__loop_inv__V_98_98, &transform_hlds__loop_inv__Inputs_6);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word transform_hlds__loop_inv__TypeInfo_119_119;
              MR_Word transform_hlds__loop_inv__GenericCall_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
              MR_Word transform_hlds__loop_inv__ArgModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
              MR_Word transform_hlds__loop_inv__GenericCallVars_19;
              MR_Word transform_hlds__loop_inv__Inputs0_20;
              MR_Word transform_hlds__loop_inv__V_96_96;
              MR_Word transform_hlds__loop_inv__Args_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
              MR_Word transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
              MR_Word transform_hlds__loop_inv__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

              {
                hlds__goal_util__generic_call_vars_2_p_0(transform_hlds__loop_inv__GenericCall_15, &transform_hlds__loop_inv__GenericCallVars_19);
              }
              {
                transform_hlds__loop_inv__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_96_96, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[4]));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_96_96, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_3));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_96_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_96_96, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
              }
              transform_hlds__loop_inv__TypeInfo_119_119 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
              {
                mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_119_119, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_119_119, transform_hlds__loop_inv__V_96_96, transform_hlds__loop_inv__Args_99, transform_hlds__loop_inv__ArgModes_16, &transform_hlds__loop_inv__Inputs0_20);
              }
              {
                transform_hlds__loop_inv__Inputs_6 = mercury__list__f_43_43_2_f_0(transform_hlds__loop_inv__TypeInfo_119_119, transform_hlds__loop_inv__GenericCallVars_19, transform_hlds__loop_inv__Inputs0_20);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__loop_inv__TypeInfo_125_125;
              MR_Word transform_hlds__loop_inv__ForeignArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
              MR_Word transform_hlds__loop_inv__V_92_92;
              MR_Word transform_hlds__loop_inv__V_93_93;
              MR_Word transform_hlds__loop_inv__V_94_94;
              MR_Word transform_hlds__loop_inv__PredId_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
              MR_Integer transform_hlds__loop_inv__ProcId_101 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
              MR_Word transform_hlds__loop_inv__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
              MR_Word transform_hlds__loop_inv__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));
              MR_Word transform_hlds__loop_inv__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 6)));
              MR_Word transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 7)));

              {
                transform_hlds__loop_inv__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_92_92, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[4]));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_92_92, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_1));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_92_92, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_92_92, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
              }
              transform_hlds__loop_inv__TypeInfo_125_125 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
              {
                transform_hlds__loop_inv__V_93_93 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, transform_hlds__loop_inv__TypeInfo_125_125, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[8], transform_hlds__loop_inv__ForeignArgs_22);
              }
              {
                transform_hlds__loop_inv__V_94_94 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_100, transform_hlds__loop_inv__ProcId_101);
              }
              {
                mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_125_125, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_125_125, transform_hlds__loop_inv__V_92_92, transform_hlds__loop_inv__V_93_93, transform_hlds__loop_inv__V_94_94, &transform_hlds__loop_inv__Inputs_6);
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.goal_inputs\'/2", (MR_String) "compound goal");
              }
            }
            break;
        }
        break;
    }
    return transform_hlds__loop_inv__Inputs_6;
  }
}

static MR_Word MR_CALL 
transform_hlds__loop_inv__argmodes_3_f_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
  MR_Word transform_hlds__loop_inv__PredId_6,
  MR_Integer transform_hlds__loop_inv__ProcId_7)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__ArgModes_8;
    MR_Word transform_hlds__loop_inv__ProcInfo_10;
    MR_Word transform_hlds__loop_inv__V_9_9;

    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__PredId_6, transform_hlds__loop_inv__ProcId_7, &transform_hlds__loop_inv__V_9_9, &transform_hlds__loop_inv__ProcInfo_10);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__loop_inv__ProcInfo_10, &transform_hlds__loop_inv__ArgModes_8);
    }
    return transform_hlds__loop_inv__ArgModes_8;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__uniquely_used_args_4_p_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
  MR_Word transform_hlds__loop_inv__X_6,
  MR_Word transform_hlds__loop_inv__M_7,
  MR_Word * transform_hlds__loop_inv__X_4)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__InInst_8;
    MR_Word transform_hlds__loop_inv___OutInst_9;

    *transform_hlds__loop_inv__X_4 = transform_hlds__loop_inv__X_6;
    {
      check_hlds__mode_util__mode_get_insts_4_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__M_7, &transform_hlds__loop_inv__InInst_8, &transform_hlds__loop_inv___OutInst_9);
    }
    {
      transform_hlds__loop_inv__succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__InInst_8);
    }
    transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
    return transform_hlds__loop_inv__succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__case_goals_1_f_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv0_LambdaHeadVar__2_9;

    {
      transform_hlds__loop_inv__conv0_LambdaHeadVar__2_9 = transform_hlds__loop_inv__IntroducedFrom__func__case_goals__1151__1_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv0_LambdaHeadVar__2_9));
    return transform_hlds__loop_inv__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
transform_hlds__loop_inv__case_goals_1_f_0(
  MR_Word transform_hlds__loop_inv__Cases_3)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__HeadVar__2_2;

    {
      transform_hlds__loop_inv__HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[7], transform_hlds__loop_inv__Cases_3);
    }
    return transform_hlds__loop_inv__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_8(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv7_UsedVars_6;

    {
      transform_hlds__loop_inv__conv7_UsedVars_6 = transform_hlds__loop_inv__used_vars_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv7_UsedVars_6));
    return transform_hlds__loop_inv__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_7(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv6_X_4;

    {
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__uniquely_used_args_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv6_X_4);
    }
    if (transform_hlds__loop_inv__succeeded)
      {
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv6_X_4));
        transform_hlds__loop_inv__succeeded = MR_TRUE;
      }
    return transform_hlds__loop_inv__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_6(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv5_X_4;

    {
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__uniquely_used_args_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv5_X_4);
    }
    if (transform_hlds__loop_inv__succeeded)
      {
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv5_X_4));
        transform_hlds__loop_inv__succeeded = MR_TRUE;
      }
    return transform_hlds__loop_inv__succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_5(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv4_UsedVars_6;

    {
      transform_hlds__loop_inv__conv4_UsedVars_6 = transform_hlds__loop_inv__used_vars_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv4_UsedVars_6));
    return transform_hlds__loop_inv__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_4(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv3_UsedVars_6;

    {
      transform_hlds__loop_inv__conv3_UsedVars_6 = transform_hlds__loop_inv__used_vars_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv3_UsedVars_6));
    return transform_hlds__loop_inv__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_3(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv2_HeadVar__2_2;

    {
      transform_hlds__loop_inv__conv2_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv2_HeadVar__2_2));
    return transform_hlds__loop_inv__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_2(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv1_HeadVar__2_2;

    {
      transform_hlds__loop_inv__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv1_HeadVar__2_2));
    return transform_hlds__loop_inv__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv0_X_4;

    {
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__uniquely_used_args_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv0_X_4);
    }
    if (transform_hlds__loop_inv__succeeded)
      {
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_X_4));
        transform_hlds__loop_inv__succeeded = MR_TRUE;
      }
    return transform_hlds__loop_inv__succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
  MR_Word transform_hlds__loop_inv__Goal_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__loop_inv__succeeded;
        MR_Word transform_hlds__loop_inv__UsedVars_6;
        MR_Word transform_hlds__loop_inv__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 0)));
        MR_Word transform_hlds__loop_inv___GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word transform_hlds__loop_inv__SubGoal_41 = (MR_Word) MR_body(((MR_Word) transform_hlds__loop_inv__GoalExpr_7), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word transform_hlds__loop_inv__Goal__tmp_copy_5 = transform_hlds__loop_inv__SubGoal_41;

                transform_hlds__loop_inv__Goal_5 = transform_hlds__loop_inv__Goal__tmp_copy_5;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            transform_hlds__loop_inv__UsedVars_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__loop_inv__TypeInfo_73_73;
              MR_Word transform_hlds__loop_inv__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
              MR_Integer transform_hlds__loop_inv__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
              MR_Word transform_hlds__loop_inv__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
              MR_Word transform_hlds__loop_inv__V_64_64;
              MR_Word transform_hlds__loop_inv__V_65_65;
              MR_Word transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
              MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
              MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

              {
                transform_hlds__loop_inv__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_64_64, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[4]));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_64_64, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_7));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_64_64, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
              }
              {
                transform_hlds__loop_inv__V_65_65 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_9, transform_hlds__loop_inv__ProcId_10);
              }
              transform_hlds__loop_inv__TypeInfo_73_73 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
              {
                mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_73_73, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_73_73, transform_hlds__loop_inv__V_64_64, transform_hlds__loop_inv__Args_11, transform_hlds__loop_inv__V_65_65, &transform_hlds__loop_inv__UsedVars_6);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word transform_hlds__loop_inv__TypeInfo_78_78;
                  MR_Word transform_hlds__loop_inv__Modes_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
                  MR_Word transform_hlds__loop_inv__V_63_63;
                  MR_Word transform_hlds__loop_inv__Args_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
                  MR_Word transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
                  MR_Word transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
                  MR_Word transform_hlds__loop_inv__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

                  {
                    transform_hlds__loop_inv__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_63_63, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[4]));
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_63_63, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_6));
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_63_63, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
                  }
                  transform_hlds__loop_inv__TypeInfo_78_78 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
                  {
                    mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_78_78, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_78_78, transform_hlds__loop_inv__V_63_63, transform_hlds__loop_inv__Args_66, transform_hlds__loop_inv__Modes_16, &transform_hlds__loop_inv__UsedVars_6);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__loop_inv__TypeCtorInfo_83_83;
                  MR_Word transform_hlds__loop_inv__TypeInfo_84_84;
                  MR_Word transform_hlds__loop_inv__ForeignArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
                  MR_Word transform_hlds__loop_inv__ExtraForeignArgs_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));
                  MR_Word transform_hlds__loop_inv__UsedArgVars_24;
                  MR_Word transform_hlds__loop_inv__UsedExtraArgVars_25;
                  MR_Word transform_hlds__loop_inv__V_58_58;
                  MR_Word transform_hlds__loop_inv__V_59_59;
                  MR_Word transform_hlds__loop_inv__V_60_60;
                  MR_Word transform_hlds__loop_inv__PredId_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
                  MR_Integer transform_hlds__loop_inv__ProcId_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
                  MR_Word transform_hlds__loop_inv__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
                  MR_Word transform_hlds__loop_inv__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 6)));
                  MR_Word transform_hlds__loop_inv__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 7)));

                  {
                    transform_hlds__loop_inv__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[4]));
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_1));
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
                  }
                  transform_hlds__loop_inv__TypeCtorInfo_83_83 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
                  transform_hlds__loop_inv__TypeInfo_84_84 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
                  {
                    transform_hlds__loop_inv__V_59_59 = mercury__list__map_2_f_0(transform_hlds__loop_inv__TypeCtorInfo_83_83, transform_hlds__loop_inv__TypeInfo_84_84, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[5], transform_hlds__loop_inv__ForeignArgs_20);
                  }
                  {
                    transform_hlds__loop_inv__V_60_60 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_67, transform_hlds__loop_inv__ProcId_68);
                  }
                  {
                    mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_84_84, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_84_84, transform_hlds__loop_inv__V_58_58, transform_hlds__loop_inv__V_59_59, transform_hlds__loop_inv__V_60_60, &transform_hlds__loop_inv__UsedArgVars_24);
                  }
                  {
                    transform_hlds__loop_inv__UsedExtraArgVars_25 = mercury__list__map_2_f_0(transform_hlds__loop_inv__TypeCtorInfo_83_83, transform_hlds__loop_inv__TypeInfo_84_84, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[6], transform_hlds__loop_inv__ExtraForeignArgs_21);
                  }
                  {
                    transform_hlds__loop_inv__UsedVars_6 = mercury__list__f_43_43_2_f_0(transform_hlds__loop_inv__TypeInfo_84_84, transform_hlds__loop_inv__UsedArgVars_24, transform_hlds__loop_inv__UsedExtraArgVars_25);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word transform_hlds__loop_inv__Conjuncts_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
                  MR_Word transform_hlds__loop_inv__V_56_56;
                  MR_Word transform_hlds__loop_inv__V_57_57;
                  MR_Word transform_hlds__loop_inv__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));

                  {
                    transform_hlds__loop_inv__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[5]));
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_4));
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
                  }
                  {
                    transform_hlds__loop_inv__V_56_56 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_57_57, transform_hlds__loop_inv__Conjuncts_32);
                  }
                  {
                    transform_hlds__loop_inv__UsedVars_6 = mercury__list__condense_1_f_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__V_56_56);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word transform_hlds__loop_inv__Disjuncts_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
                  MR_Word transform_hlds__loop_inv__V_54_54;
                  MR_Word transform_hlds__loop_inv__V_55_55;

                  {
                    transform_hlds__loop_inv__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_55_55, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[5]));
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_55_55, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_5));
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_55_55, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
                  }
                  {
                    transform_hlds__loop_inv__V_54_54 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_55_55, transform_hlds__loop_inv__Disjuncts_33);
                  }
                  {
                    transform_hlds__loop_inv__UsedVars_6 = mercury__list__condense_1_f_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__V_54_54);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word transform_hlds__loop_inv__Cases_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
                  MR_Word transform_hlds__loop_inv__V_51_51;
                  MR_Word transform_hlds__loop_inv__V_52_52;
                  MR_Word transform_hlds__loop_inv__V_53_53;
                  MR_Word transform_hlds__loop_inv__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
                  MR_Word transform_hlds__loop_inv__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));

                  {
                    transform_hlds__loop_inv__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_52_52, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[5]));
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_52_52, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_8));
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_52_52, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
                  }
                  {
                    transform_hlds__loop_inv__V_53_53 = transform_hlds__loop_inv__case_goals_1_f_0(transform_hlds__loop_inv__Cases_36);
                  }
                  {
                    transform_hlds__loop_inv__V_51_51 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_52_52, transform_hlds__loop_inv__V_53_53);
                  }
                  {
                    transform_hlds__loop_inv__UsedVars_6 = mercury__list__condense_1_f_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__V_51_51);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word transform_hlds__loop_inv__SubGoal_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
                  MR_Word transform_hlds__loop_inv___Reason_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word transform_hlds__loop_inv__Goal__tmp_copy_5 = transform_hlds__loop_inv__SubGoal_69;

                    transform_hlds__loop_inv__Goal_5 = transform_hlds__loop_inv__Goal__tmp_copy_5;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word transform_hlds__loop_inv__TypeInfo_105_105 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
                  MR_Word transform_hlds__loop_inv__Cond_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
                  MR_Word transform_hlds__loop_inv__Then_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
                  MR_Word transform_hlds__loop_inv__Else_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
                  MR_Word transform_hlds__loop_inv__V_47_47;
                  MR_Word transform_hlds__loop_inv__V_48_48;
                  MR_Word transform_hlds__loop_inv__V_49_49;
                  MR_Word transform_hlds__loop_inv__V_50_50;
                  MR_Word transform_hlds__loop_inv__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));

                  {
                    transform_hlds__loop_inv__V_47_47 = transform_hlds__loop_inv__used_vars_2_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__Cond_38);
                  }
                  {
                    transform_hlds__loop_inv__V_49_49 = transform_hlds__loop_inv__used_vars_2_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__Then_39);
                  }
                  {
                    transform_hlds__loop_inv__V_50_50 = transform_hlds__loop_inv__used_vars_2_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__Else_40);
                  }
                  {
                    transform_hlds__loop_inv__V_48_48 = mercury__list__f_43_43_2_f_0(transform_hlds__loop_inv__TypeInfo_105_105, transform_hlds__loop_inv__V_49_49, transform_hlds__loop_inv__V_50_50);
                  }
                  {
                    transform_hlds__loop_inv__UsedVars_6 = mercury__list__f_43_43_2_f_0(transform_hlds__loop_inv__TypeInfo_105_105, transform_hlds__loop_inv__V_47_47, transform_hlds__loop_inv__V_48_48);
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.used_vars\'/2", (MR_String) "shorthand");
                  }
                }
                break;
            }
            break;
        }
        return transform_hlds__loop_inv__UsedVars_6;
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_call_3_p_0(
  MR_Word transform_hlds__loop_inv__Replacement_4,
  MR_Word transform_hlds__loop_inv__CallGoal_5,
  MR_Word * transform_hlds__loop_inv__AuxCallGoal_6)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__ReplacementExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Replacement_4, (MR_Integer) 0)));
    MR_Word transform_hlds__loop_inv__CallExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__CallGoal_5, (MR_Integer) 0)));
    MR_Word transform_hlds__loop_inv__CallInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__CallGoal_5, (MR_Integer) 1)));
    MR_Word transform_hlds__loop_inv___ReplacementInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Replacement_4, (MR_Integer) 1)));
    MR_Word transform_hlds__loop_inv__AuxCallGoalExpr_14;
    MR_Word transform_hlds__loop_inv__ReplacementArgs0_11;
    MR_Word transform_hlds__loop_inv__Args0_12;
    MR_Word transform_hlds__loop_inv__Args_13;
    MR_Word transform_hlds__loop_inv__V_18_18;
    MR_Integer transform_hlds__loop_inv__V_19_19;
    MR_Word transform_hlds__loop_inv__V_20_20;
    MR_Word transform_hlds__loop_inv__V_21_21;
    MR_Word transform_hlds__loop_inv__V_22_22;
    MR_Word transform_hlds__loop_inv__V_23_23;
    MR_Integer transform_hlds__loop_inv__V_24_24;
    MR_Word transform_hlds__loop_inv__V_25_25;
    MR_Word transform_hlds__loop_inv__V_26_26;
    MR_Word transform_hlds__loop_inv__V_27_27;
    MR_Word transform_hlds__loop_inv__V_28_28;
    MR_Integer transform_hlds__loop_inv__V_29_29;
    MR_Word transform_hlds__loop_inv__V_31_31;
    MR_Word transform_hlds__loop_inv__V_32_32;
    MR_Word transform_hlds__loop_inv__V_33_33;
    MR_Word transform_hlds__loop_inv__V_30_30;

    transform_hlds__loop_inv__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__ReplacementExpr_7)) == (MR_mktag((MR_Integer) 2)));
    if (transform_hlds__loop_inv__succeeded)
      {
        transform_hlds__loop_inv__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 0)));
        transform_hlds__loop_inv__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 1)));
        transform_hlds__loop_inv__ReplacementArgs0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 2)));
        transform_hlds__loop_inv__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 3)));
        transform_hlds__loop_inv__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 4)));
        transform_hlds__loop_inv__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 5)));
        transform_hlds__loop_inv__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__CallExpr_9)) == (MR_mktag((MR_Integer) 2)));
        if (transform_hlds__loop_inv__succeeded)
          {
            transform_hlds__loop_inv__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallExpr_9, (MR_Integer) 0)));
            transform_hlds__loop_inv__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallExpr_9, (MR_Integer) 1)));
            transform_hlds__loop_inv__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallExpr_9, (MR_Integer) 2)));
            transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallExpr_9, (MR_Integer) 3)));
            transform_hlds__loop_inv__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallExpr_9, (MR_Integer) 4)));
            transform_hlds__loop_inv__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallExpr_9, (MR_Integer) 5)));
            {
              transform_hlds__loop_inv__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(transform_hlds__loop_inv__Args0_12, transform_hlds__loop_inv__ReplacementArgs0_11, &transform_hlds__loop_inv__Args_13);
            }
            transform_hlds__loop_inv__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 0)));
            transform_hlds__loop_inv__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 1)));
            transform_hlds__loop_inv__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 2)));
            transform_hlds__loop_inv__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 3)));
            transform_hlds__loop_inv__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 4)));
            transform_hlds__loop_inv__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 5)));
            {
              transform_hlds__loop_inv__AuxCallGoalExpr_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__AuxCallGoalExpr_14, 0) = ((MR_Box) (transform_hlds__loop_inv__V_28_28));
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__AuxCallGoalExpr_14, 1) = ((MR_Box) (transform_hlds__loop_inv__V_29_29));
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__AuxCallGoalExpr_14, 2) = ((MR_Box) (transform_hlds__loop_inv__Args_13));
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__AuxCallGoalExpr_14, 3) = ((MR_Box) (transform_hlds__loop_inv__V_31_31));
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__AuxCallGoalExpr_14, 4) = ((MR_Box) (transform_hlds__loop_inv__V_32_32));
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__AuxCallGoalExpr_14, 5) = ((MR_Box) (transform_hlds__loop_inv__V_33_33));
            }
            transform_hlds__loop_inv__succeeded = MR_TRUE;
          }
      }
    if (transform_hlds__loop_inv__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *transform_hlds__loop_inv__AuxCallGoal_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxCallGoalExpr_14));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__CallInfo_10));
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "predicate \140transform_hlds.loop_inv.gen_aux_call\'/3", (MR_String) "args not both ordinary calls");
          return;
        }
      }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_case_4_p_0(
  MR_Word transform_hlds__loop_inv__PPId_5,
  MR_Word transform_hlds__loop_inv__Replacement_6,
  MR_Word transform_hlds__loop_inv__Case_7,
  MR_Word * transform_hlds__loop_inv__AuxCase_8)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__MainConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_7, (MR_Integer) 0)));
    MR_Word transform_hlds__loop_inv__OtherConsIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_7, (MR_Integer) 1)));
    MR_Word transform_hlds__loop_inv__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_7, (MR_Integer) 2)));
    MR_Word transform_hlds__loop_inv__AuxGoal_12;

    {
      transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Replacement_6, transform_hlds__loop_inv__Goal_11, &transform_hlds__loop_inv__AuxGoal_12);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__loop_inv__AuxCase_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__MainConsId_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__OtherConsIds_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxGoal_12));
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_3(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv2_AuxCase_8;

    {
      transform_hlds__loop_inv__gen_out_proc_case_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), &transform_hlds__loop_inv__conv2_AuxCase_8);
    }
    *transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv2_AuxCase_8));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_2(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv1_AuxGoal_8;

    {
      transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), &transform_hlds__loop_inv__conv1_AuxGoal_8);
    }
    *transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv1_AuxGoal_8));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv0_AuxGoal_8;

    {
      transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), &transform_hlds__loop_inv__conv0_AuxGoal_8);
    }
    *transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv0_AuxGoal_8));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(
  MR_Word transform_hlds__loop_inv__PPId_5,
  MR_Word transform_hlds__loop_inv__Replacement_6,
  MR_Word transform_hlds__loop_inv__Goal_7,
  MR_Word * transform_hlds__loop_inv__AuxGoal_8)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_7, (MR_Integer) 0)));
    MR_Word transform_hlds__loop_inv__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_7, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__loop_inv__SubGoal_44 = (MR_Word) MR_body(((MR_Word) transform_hlds__loop_inv__GoalExpr_9), (MR_Integer) 0);
          MR_Word transform_hlds__loop_inv__AuxSubGoal_45;
          MR_Word transform_hlds__loop_inv__AuxGoalExpr_63;

          {
            transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Replacement_6, transform_hlds__loop_inv__SubGoal_44, &transform_hlds__loop_inv__AuxSubGoal_45);
          }
          transform_hlds__loop_inv__AuxGoalExpr_63 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__loop_inv__AuxSubGoal_45);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__loop_inv__AuxGoal_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_63));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
          }
        }
        break;
      case (MR_Integer) 1:
        *transform_hlds__loop_inv__AuxGoal_8 = transform_hlds__loop_inv__Goal_7;
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__loop_inv__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 0)));
          MR_Integer transform_hlds__loop_inv__ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
          MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 2)));
          MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 3)));
          MR_Word transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 4)));
          MR_Word transform_hlds__loop_inv__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 5)));
          MR_Word transform_hlds__loop_inv__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PPId_5, (MR_Integer) 0)));
          MR_Integer transform_hlds__loop_inv__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PPId_5, (MR_Integer) 1)));

          {
            transform_hlds__loop_inv__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__loop_inv__PredId_11, transform_hlds__loop_inv__V_77_77);
          }
          if (transform_hlds__loop_inv__succeeded)
            transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__ProcId_12 == transform_hlds__loop_inv__V_78_78);
          if (transform_hlds__loop_inv__succeeded)
            {
              transform_hlds__loop_inv__gen_aux_call_3_p_0(transform_hlds__loop_inv__Replacement_6, transform_hlds__loop_inv__Goal_7, transform_hlds__loop_inv__AuxGoal_8);
            }
          else
            *transform_hlds__loop_inv__AuxGoal_8 = transform_hlds__loop_inv__Goal_7;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *transform_hlds__loop_inv__AuxGoal_8 = transform_hlds__loop_inv__Goal_7;
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__loop_inv__TypeCtorInfo_70_70;
              MR_Word transform_hlds__loop_inv__ConjType_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
              MR_Word transform_hlds__loop_inv__Conjuncts_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 2)));
              MR_Word transform_hlds__loop_inv__AuxConjuncts_36;
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_37;
              MR_Word transform_hlds__loop_inv__V_60_60;

              {
                transform_hlds__loop_inv__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_60_60, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_60_60, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_1));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_60_60, 3) = ((MR_Box) (transform_hlds__loop_inv__PPId_5));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_60_60, 4) = ((MR_Box) (transform_hlds__loop_inv__Replacement_6));
              }
              transform_hlds__loop_inv__TypeCtorInfo_70_70 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                mercury__list__map_3_p_0(transform_hlds__loop_inv__TypeCtorInfo_70_70, transform_hlds__loop_inv__TypeCtorInfo_70_70, transform_hlds__loop_inv__V_60_60, transform_hlds__loop_inv__Conjuncts_35, &transform_hlds__loop_inv__AuxConjuncts_36);
              }
              {
                transform_hlds__loop_inv__AuxGoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_37, 1) = ((MR_Box) (transform_hlds__loop_inv__ConjType_34));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_37, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxConjuncts_36));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__loop_inv__AuxGoal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_37));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__loop_inv__TypeCtorInfo_73_73;
              MR_Word transform_hlds__loop_inv__Disjuncts_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
              MR_Word transform_hlds__loop_inv__AuxDisjuncts_39;
              MR_Word transform_hlds__loop_inv__V_59_59;
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_61;

              {
                transform_hlds__loop_inv__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_2));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 3) = ((MR_Box) (transform_hlds__loop_inv__PPId_5));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 4) = ((MR_Box) (transform_hlds__loop_inv__Replacement_6));
              }
              transform_hlds__loop_inv__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                mercury__list__map_3_p_0(transform_hlds__loop_inv__TypeCtorInfo_73_73, transform_hlds__loop_inv__TypeCtorInfo_73_73, transform_hlds__loop_inv__V_59_59, transform_hlds__loop_inv__Disjuncts_38, &transform_hlds__loop_inv__AuxDisjuncts_39);
              }
              {
                transform_hlds__loop_inv__AuxGoalExpr_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_61, 1) = ((MR_Box) (transform_hlds__loop_inv__AuxDisjuncts_39));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__loop_inv__AuxGoal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_61));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__loop_inv__TypeCtorInfo_76_76;
              MR_Word transform_hlds__loop_inv__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
              MR_Word transform_hlds__loop_inv__CanFail_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 2)));
              MR_Word transform_hlds__loop_inv__Cases_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 3)));
              MR_Word transform_hlds__loop_inv__AuxCases_43;
              MR_Word transform_hlds__loop_inv__V_58_58;
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_62;

              {
                transform_hlds__loop_inv__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[3]));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_3));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 3) = ((MR_Box) (transform_hlds__loop_inv__PPId_5));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 4) = ((MR_Box) (transform_hlds__loop_inv__Replacement_6));
              }
              transform_hlds__loop_inv__TypeCtorInfo_76_76 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
              {
                mercury__list__map_3_p_0(transform_hlds__loop_inv__TypeCtorInfo_76_76, transform_hlds__loop_inv__TypeCtorInfo_76_76, transform_hlds__loop_inv__V_58_58, transform_hlds__loop_inv__Cases_42, &transform_hlds__loop_inv__AuxCases_43);
              }
              {
                transform_hlds__loop_inv__AuxGoalExpr_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 1) = ((MR_Box) (transform_hlds__loop_inv__Var_40));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 2) = ((MR_Box) (transform_hlds__loop_inv__CanFail_41));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 3) = ((MR_Box) (transform_hlds__loop_inv__AuxCases_43));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__loop_inv__AuxGoal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_62));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__loop_inv__Reason_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_64;
              MR_Word transform_hlds__loop_inv__SubGoal_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 2)));
              MR_Word transform_hlds__loop_inv__AuxSubGoal_66;

              {
                transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Replacement_6, transform_hlds__loop_inv__SubGoal_65, &transform_hlds__loop_inv__AuxSubGoal_66);
              }
              {
                transform_hlds__loop_inv__AuxGoalExpr_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 1) = ((MR_Box) (transform_hlds__loop_inv__Reason_46));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxSubGoal_66));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__loop_inv__AuxGoal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_64));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__loop_inv__Vars_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
              MR_Word transform_hlds__loop_inv__Cond_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 2)));
              MR_Word transform_hlds__loop_inv__Then_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 3)));
              MR_Word transform_hlds__loop_inv__Else_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 4)));
              MR_Word transform_hlds__loop_inv__AuxCond_51;
              MR_Word transform_hlds__loop_inv__AuxThen_52;
              MR_Word transform_hlds__loop_inv__AuxElse_53;
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_67;

              {
                transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Replacement_6, transform_hlds__loop_inv__Cond_48, &transform_hlds__loop_inv__AuxCond_51);
              }
              {
                transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Replacement_6, transform_hlds__loop_inv__Then_49, &transform_hlds__loop_inv__AuxThen_52);
              }
              {
                transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Replacement_6, transform_hlds__loop_inv__Else_50, &transform_hlds__loop_inv__AuxElse_53);
              }
              {
                transform_hlds__loop_inv__AuxGoalExpr_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 1) = ((MR_Box) (transform_hlds__loop_inv__Vars_47));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxCond_51));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 3) = ((MR_Box) (transform_hlds__loop_inv__AuxThen_52));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 4) = ((MR_Box) (transform_hlds__loop_inv__AuxElse_53));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__loop_inv__AuxGoal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_67));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "predicate \140transform_hlds.loop_inv.gen_out_proc_goal\'/4", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_8_p_0(
  MR_Word transform_hlds__loop_inv__PredProcId_9,
  MR_Word transform_hlds__loop_inv__PredInfo0_10,
  MR_Word transform_hlds__loop_inv__ProcInfo0_11,
  MR_Word * transform_hlds__loop_inv__ProcInfo_12,
  MR_Word transform_hlds__loop_inv__Replacement_13,
  MR_Word transform_hlds__loop_inv__Body0_14,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_26)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__Body_16;
    MR_Word transform_hlds__loop_inv__PredId_17;
    MR_Integer transform_hlds__loop_inv__ProcId_18;
    MR_Word transform_hlds__loop_inv__VarSet_19;
    MR_Word transform_hlds__loop_inv__VarTypes_20;
    MR_Word transform_hlds__loop_inv__HeadVars_21;
    MR_Word transform_hlds__loop_inv__RttiVarMaps_22;
    MR_Word transform_hlds__loop_inv__ProcInfo1_23;
    MR_Word transform_hlds__loop_inv__ProcInfo2_24;
    MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_29_29;

    {
      transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(transform_hlds__loop_inv__PredProcId_9, transform_hlds__loop_inv__Replacement_13, transform_hlds__loop_inv__Body0_14, &transform_hlds__loop_inv__Body_16);
    }
    transform_hlds__loop_inv__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PredProcId_9, (MR_Integer) 0)));
    transform_hlds__loop_inv__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PredProcId_9, (MR_Integer) 1)));
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__loop_inv__ProcInfo0_11, &transform_hlds__loop_inv__VarSet_19);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__loop_inv__ProcInfo0_11, &transform_hlds__loop_inv__VarTypes_20);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__loop_inv__ProcInfo0_11, &transform_hlds__loop_inv__HeadVars_21);
    }
    {
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__loop_inv__ProcInfo0_11, &transform_hlds__loop_inv__RttiVarMaps_22);
    }
    {
      hlds__hlds_pred__proc_info_set_body_7_p_0(transform_hlds__loop_inv__VarSet_19, transform_hlds__loop_inv__VarTypes_20, transform_hlds__loop_inv__HeadVars_21, transform_hlds__loop_inv__Body_16, transform_hlds__loop_inv__RttiVarMaps_22, transform_hlds__loop_inv__ProcInfo0_11, &transform_hlds__loop_inv__ProcInfo1_23);
    }
    {
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__loop_inv__ProcInfo1_23, &transform_hlds__loop_inv__ProcInfo2_24);
    }
    {
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__loop_inv__ProcInfo2_24, transform_hlds__loop_inv__ProcInfo_12, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_25, &transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_29_29);
    }
    {
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__loop_inv__PredId_17, transform_hlds__loop_inv__ProcId_18, transform_hlds__loop_inv__PredInfo0_10, *transform_hlds__loop_inv__ProcInfo_12, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_29_29, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_26);
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_1(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_3(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__InvariantGoal_13 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__conv0_InvariantGoal_13);
    {
      transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_2(transform_hlds__loop_inv__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_2(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    {
      MR_Word transform_hlds__loop_inv__V_16_16;
      MR_Word transform_hlds__loop_inv__V_18_18;

      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__InvariantGoal_13, (MR_Integer) 0)));
      transform_hlds__loop_inv__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__InvariantGoal_13, (MR_Integer) 1)));
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__Goal_5, (MR_Integer) 0)));
      transform_hlds__loop_inv__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__Goal_5, (MR_Integer) 1)));
      {
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17);
      }
      if (!((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded))
        {
          MR_Word transform_hlds__loop_inv__TypeInfo_21_33;
          MR_Word transform_hlds__loop_inv__PredId_19;
          MR_Integer transform_hlds__loop_inv__ProcId_20;
          MR_Word transform_hlds__loop_inv__Args_21;
          MR_Word transform_hlds__loop_inv__V_28_28;
          MR_Integer transform_hlds__loop_inv__V_29_29;
          MR_Word transform_hlds__loop_inv__V_30_30;
          MR_Word transform_hlds__loop_inv___BuiltinX_22;
          MR_Word transform_hlds__loop_inv___ContextX_23;
          MR_Word transform_hlds__loop_inv___SymNameX_24;
          MR_Word transform_hlds__loop_inv___BuiltinY_25;
          MR_Word transform_hlds__loop_inv___ContextY_26;
          MR_Word transform_hlds__loop_inv___SymNameY_27;

          (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15)) == (MR_mktag((MR_Integer) 2)));
          if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded)
            {
              {
                transform_hlds__loop_inv__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15, (MR_Integer) 0)));
                transform_hlds__loop_inv__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15, (MR_Integer) 1)));
                transform_hlds__loop_inv__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15, (MR_Integer) 2)));
                transform_hlds__loop_inv___BuiltinX_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15, (MR_Integer) 3)));
                transform_hlds__loop_inv___ContextX_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15, (MR_Integer) 4)));
                transform_hlds__loop_inv___SymNameX_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15, (MR_Integer) 5)));
              }
              {
                (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17)) == (MR_mktag((MR_Integer) 2)));
                if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded)
                  {
                    {
                      transform_hlds__loop_inv__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17, (MR_Integer) 0)));
                      transform_hlds__loop_inv__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17, (MR_Integer) 1)));
                      transform_hlds__loop_inv__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17, (MR_Integer) 2)));
                      transform_hlds__loop_inv___BuiltinY_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17, (MR_Integer) 3)));
                      transform_hlds__loop_inv___ContextY_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17, (MR_Integer) 4)));
                      transform_hlds__loop_inv___SymNameY_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17, (MR_Integer) 5)));
                    }
                    {
                      {
                        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__loop_inv__PredId_19, transform_hlds__loop_inv__V_28_28);
                      }
                      if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded)
                        {
                          (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = (transform_hlds__loop_inv__ProcId_20 == transform_hlds__loop_inv__V_29_29);
                          if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded)
                            {
                              transform_hlds__loop_inv__TypeInfo_21_33 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4];
                              {
                                (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__loop_inv__TypeInfo_21_33, ((MR_Box) (transform_hlds__loop_inv__Args_21)), ((MR_Box) (transform_hlds__loop_inv__V_30_30)));
                              }
                            }
                        }
                    }
                  }
              }
            }
        }
      if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded)
        {
          transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_1(transform_hlds__loop_inv__env_ptr);
        }
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_4(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__conv0_InvariantGoal_13, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__V_7_7, transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_3, transform_hlds__loop_inv__env_ptr);
          }
        }
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0(
  MR_Word transform_hlds__loop_inv__Info_4,
  MR_Word transform_hlds__loop_inv__Goal_5,
  MR_Word * transform_hlds__loop_inv__AuxGoal_6)
{
  {
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s transform_hlds__loop_inv__env;

    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__Goal_5 = transform_hlds__loop_inv__Goal_5;
    {
      MR_Word transform_hlds__loop_inv__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 0)));
      MR_Word transform_hlds__loop_inv__V_9_9;
      MR_Word transform_hlds__loop_inv__V_10_10;

      (transform_hlds__loop_inv__env).transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 1)));
      transform_hlds__loop_inv__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 2)));
      transform_hlds__loop_inv__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 3)));
      {
        transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_4(&transform_hlds__loop_inv__env);
      }
      if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded)
        {
          *transform_hlds__loop_inv__AuxGoal_6 = hlds__make_goal__true_goal_0_f_0();
        }
      else
        *transform_hlds__loop_inv__AuxGoal_6 = (transform_hlds__loop_inv__env).transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__Goal_5;
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_case_3_p_0(
  MR_Word transform_hlds__loop_inv__Info_4,
  MR_Word transform_hlds__loop_inv__Case_5,
  MR_Word * transform_hlds__loop_inv__AuxCase_6)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__MainConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_5, (MR_Integer) 0)));
    MR_Word transform_hlds__loop_inv__OtherConsIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_5, (MR_Integer) 1)));
    MR_Word transform_hlds__loop_inv__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_5, (MR_Integer) 2)));
    MR_Word transform_hlds__loop_inv__AuxGoal_10;

    {
      transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Goal_9, &transform_hlds__loop_inv__AuxGoal_10);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__loop_inv__AuxCase_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__MainConsId_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__OtherConsIds_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxGoal_10));
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_3(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv2_AuxCase_6;

    {
      transform_hlds__loop_inv__gen_aux_proc_case_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), &transform_hlds__loop_inv__conv2_AuxCase_6);
    }
    *transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv2_AuxCase_6));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_2(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv1_AuxGoal_6;

    {
      transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), &transform_hlds__loop_inv__conv1_AuxGoal_6);
    }
    *transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv1_AuxGoal_6));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv0_AuxGoal_6;

    {
      transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), &transform_hlds__loop_inv__conv0_AuxGoal_6);
    }
    *transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv0_AuxGoal_6));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(
  MR_Word transform_hlds__loop_inv__Info_4,
  MR_Word transform_hlds__loop_inv__Goal_5,
  MR_Word * transform_hlds__loop_inv__AuxGoal_6)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 0)));
    MR_Word transform_hlds__loop_inv__GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__loop_inv__SubGoal_42 = (MR_Word) MR_body(((MR_Word) transform_hlds__loop_inv__GoalExpr_7), (MR_Integer) 0);
          MR_Word transform_hlds__loop_inv__AuxSubGoal_43;
          MR_Word transform_hlds__loop_inv__AuxGoalExpr_63;

          {
            transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__SubGoal_42, &transform_hlds__loop_inv__AuxSubGoal_43);
          }
          transform_hlds__loop_inv__AuxGoalExpr_63 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__loop_inv__AuxSubGoal_43);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__loop_inv__AuxGoal_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_63));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Goal_5, transform_hlds__loop_inv__AuxGoal_6);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__loop_inv__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
          MR_Integer transform_hlds__loop_inv__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
          MR_Word transform_hlds__loop_inv__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
          MR_Word transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
          MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
          MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));
          MR_Word transform_hlds__loop_inv__V_59_59;
          MR_Word transform_hlds__loop_inv__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 2)));
          MR_Word transform_hlds__loop_inv__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 0)));
          MR_Word transform_hlds__loop_inv__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 1)));
          MR_Word transform_hlds__loop_inv__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 3)));

          {
            transform_hlds__loop_inv__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 0) = ((MR_Box) (transform_hlds__loop_inv__PredId_9));
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 1) = ((MR_Box) (transform_hlds__loop_inv__ProcId_10));
          }
          {
            transform_hlds__loop_inv__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__loop_inv__V_59_59, transform_hlds__loop_inv__V_83_83);
          }
          if (transform_hlds__loop_inv__succeeded)
            {
              MR_Word transform_hlds__loop_inv__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 3)));
              MR_Word transform_hlds__loop_inv__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 0)));
              MR_Word transform_hlds__loop_inv__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 1)));
              MR_Word transform_hlds__loop_inv__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 2)));

              {
                transform_hlds__loop_inv__gen_aux_call_3_p_0(transform_hlds__loop_inv__V_60_60, transform_hlds__loop_inv__Goal_5, transform_hlds__loop_inv__AuxGoal_6);
              }
            }
          else
            {
              transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Goal_5, transform_hlds__loop_inv__AuxGoal_6);
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Goal_5, transform_hlds__loop_inv__AuxGoal_6);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__loop_inv__TypeCtorInfo_76_76;
              MR_Word transform_hlds__loop_inv__ConjType_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
              MR_Word transform_hlds__loop_inv__Conjuncts_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
              MR_Word transform_hlds__loop_inv__AuxConjuncts_34;
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_35;
              MR_Word transform_hlds__loop_inv__V_58_58;

              {
                transform_hlds__loop_inv__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[3]));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_1));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 3) = ((MR_Box) (transform_hlds__loop_inv__Info_4));
              }
              transform_hlds__loop_inv__TypeCtorInfo_76_76 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                mercury__list__map_3_p_0(transform_hlds__loop_inv__TypeCtorInfo_76_76, transform_hlds__loop_inv__TypeCtorInfo_76_76, transform_hlds__loop_inv__V_58_58, transform_hlds__loop_inv__Conjuncts_33, &transform_hlds__loop_inv__AuxConjuncts_34);
              }
              {
                transform_hlds__loop_inv__AuxGoalExpr_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_35, 1) = ((MR_Box) (transform_hlds__loop_inv__ConjType_32));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_35, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxConjuncts_34));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__loop_inv__AuxGoal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_35));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__loop_inv__TypeCtorInfo_79_79;
              MR_Word transform_hlds__loop_inv__Disjuncts_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
              MR_Word transform_hlds__loop_inv__AuxDisjuncts_37;
              MR_Word transform_hlds__loop_inv__V_57_57;
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_61;

              {
                transform_hlds__loop_inv__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[3]));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_2));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 3) = ((MR_Box) (transform_hlds__loop_inv__Info_4));
              }
              transform_hlds__loop_inv__TypeCtorInfo_79_79 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                mercury__list__map_3_p_0(transform_hlds__loop_inv__TypeCtorInfo_79_79, transform_hlds__loop_inv__TypeCtorInfo_79_79, transform_hlds__loop_inv__V_57_57, transform_hlds__loop_inv__Disjuncts_36, &transform_hlds__loop_inv__AuxDisjuncts_37);
              }
              {
                transform_hlds__loop_inv__AuxGoalExpr_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_61, 1) = ((MR_Box) (transform_hlds__loop_inv__AuxDisjuncts_37));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__loop_inv__AuxGoal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_61));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__loop_inv__TypeCtorInfo_82_82;
              MR_Word transform_hlds__loop_inv__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
              MR_Word transform_hlds__loop_inv__CanFail_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
              MR_Word transform_hlds__loop_inv__Cases_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
              MR_Word transform_hlds__loop_inv__AuxCases_41;
              MR_Word transform_hlds__loop_inv__V_56_56;
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_62;

              {
                transform_hlds__loop_inv__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_56_56, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_56_56, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_3));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_56_56, 3) = ((MR_Box) (transform_hlds__loop_inv__Info_4));
              }
              transform_hlds__loop_inv__TypeCtorInfo_82_82 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
              {
                mercury__list__map_3_p_0(transform_hlds__loop_inv__TypeCtorInfo_82_82, transform_hlds__loop_inv__TypeCtorInfo_82_82, transform_hlds__loop_inv__V_56_56, transform_hlds__loop_inv__Cases_40, &transform_hlds__loop_inv__AuxCases_41);
              }
              {
                transform_hlds__loop_inv__AuxGoalExpr_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 1) = ((MR_Box) (transform_hlds__loop_inv__Var_38));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 2) = ((MR_Box) (transform_hlds__loop_inv__CanFail_39));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 3) = ((MR_Box) (transform_hlds__loop_inv__AuxCases_41));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__loop_inv__AuxGoal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_62));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__loop_inv__Reason_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_64;
              MR_Word transform_hlds__loop_inv__SubGoal_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
              MR_Word transform_hlds__loop_inv__AuxSubGoal_66;

              {
                transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__SubGoal_65, &transform_hlds__loop_inv__AuxSubGoal_66);
              }
              {
                transform_hlds__loop_inv__AuxGoalExpr_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 1) = ((MR_Box) (transform_hlds__loop_inv__Reason_44));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxSubGoal_66));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__loop_inv__AuxGoal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_64));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__loop_inv__Vars_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
              MR_Word transform_hlds__loop_inv__Cond_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
              MR_Word transform_hlds__loop_inv__Then_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
              MR_Word transform_hlds__loop_inv__Else_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
              MR_Word transform_hlds__loop_inv__AuxCond_49;
              MR_Word transform_hlds__loop_inv__AuxThen_50;
              MR_Word transform_hlds__loop_inv__AuxElse_51;
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_67;

              {
                transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Cond_46, &transform_hlds__loop_inv__AuxCond_49);
              }
              {
                transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Then_47, &transform_hlds__loop_inv__AuxThen_50);
              }
              {
                transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Else_48, &transform_hlds__loop_inv__AuxElse_51);
              }
              {
                transform_hlds__loop_inv__AuxGoalExpr_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 1) = ((MR_Box) (transform_hlds__loop_inv__Vars_45));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxCond_49));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 3) = ((MR_Box) (transform_hlds__loop_inv__AuxThen_50));
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 4) = ((MR_Box) (transform_hlds__loop_inv__AuxElse_51));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__loop_inv__AuxGoal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_67));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "predicate \140transform_hlds.loop_inv.gen_aux_proc_goal\'/3", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_9_p_0(
  MR_Word transform_hlds__loop_inv__InvGoals_10,
  MR_Word transform_hlds__loop_inv__PredProcId_11,
  MR_Word transform_hlds__loop_inv__AuxPredProcId_12,
  MR_Word transform_hlds__loop_inv__Replacement_13,
  MR_Word transform_hlds__loop_inv__Body_14,
  MR_Word transform_hlds__loop_inv__AuxPredInfo_15,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_0_22,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_24)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__GapInfo_18;
    MR_Word transform_hlds__loop_inv__AuxBody_19;
    MR_Word transform_hlds__loop_inv__AuxPredId_20;
    MR_Integer transform_hlds__loop_inv__AuxProcId_21;
    MR_Word transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_25_25;
    MR_Word transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_27_27;
    MR_Word transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_29_29;
    MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_30_30;

    {
      transform_hlds__loop_inv__GapInfo_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GapInfo_18, 0) = ((MR_Box) (transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_23));
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GapInfo_18, 1) = ((MR_Box) (transform_hlds__loop_inv__InvGoals_10));
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GapInfo_18, 2) = ((MR_Box) (transform_hlds__loop_inv__PredProcId_11));
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GapInfo_18, 3) = ((MR_Box) (transform_hlds__loop_inv__Replacement_13));
    }
    {
      transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(transform_hlds__loop_inv__GapInfo_18, transform_hlds__loop_inv__Body_14, &transform_hlds__loop_inv__AuxBody_19);
    }
    transform_hlds__loop_inv__AuxPredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxPredProcId_12, (MR_Integer) 0)));
    transform_hlds__loop_inv__AuxProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxPredProcId_12, (MR_Integer) 1)));
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__loop_inv__AuxBody_19, transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_0_22, &transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_25_25);
    }
    {
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_25_25, &transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_27_27);
    }
    {
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_27_27, &transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_29_29, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_23, &transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_30_30);
    }
    {
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__loop_inv__AuxPredId_20, transform_hlds__loop_inv__AuxProcId_21, transform_hlds__loop_inv__AuxPredInfo_15, transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_29_29, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_30_30, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_24);
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__create_aux_pred_10_p_0(
  MR_Word transform_hlds__loop_inv__PredProcId_11,
  MR_Word transform_hlds__loop_inv__HeadVars_12,
  MR_Word transform_hlds__loop_inv__ComputedInvArgs_13,
  MR_Word transform_hlds__loop_inv__InitialAuxInstMap_14,
  MR_Word * transform_hlds__loop_inv__AuxPredProcId_15,
  MR_Word * transform_hlds__loop_inv__Replacement_16,
  MR_Word * transform_hlds__loop_inv__AuxPredInfo_17,
  MR_Word * transform_hlds__loop_inv__AuxProcInfo_18,
  MR_Word transform_hlds__loop_inv__ModuleInfo0_19,
  MR_Word * transform_hlds__loop_inv__ModuleInfo_20)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PredProcId_11, (MR_Integer) 0)));
    MR_Integer transform_hlds__loop_inv__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PredProcId_11, (MR_Integer) 1)));
    MR_Word transform_hlds__loop_inv__AuxHeadVars_23;
    MR_Word transform_hlds__loop_inv__PredInfo_24;
    MR_Word transform_hlds__loop_inv__ProcInfo_25;
    MR_Word transform_hlds__loop_inv__Goal_26;
    MR_Word transform_hlds__loop_inv__GoalInfo_28;
    MR_Word transform_hlds__loop_inv__TVarSet_29;
    MR_Word transform_hlds__loop_inv__VarTypes_30;
    MR_Word transform_hlds__loop_inv__ClassContext_31;
    MR_Word transform_hlds__loop_inv__RttiVarMaps_32;
    MR_Word transform_hlds__loop_inv__VarSet_33;
    MR_Word transform_hlds__loop_inv__InstVarSet_34;
    MR_Word transform_hlds__loop_inv__Markers_35;
    MR_Word transform_hlds__loop_inv__OrigOrigin_36;
    MR_Word transform_hlds__loop_inv__HasParallelConj_37;
    MR_Word transform_hlds__loop_inv__VarNameRemap_38;
    MR_Word transform_hlds__loop_inv__PredModule_39;
    MR_String transform_hlds__loop_inv__PredName_40;
    MR_Word transform_hlds__loop_inv__PredOrFunc_41;
    MR_Word transform_hlds__loop_inv__Context_42;
    MR_Integer transform_hlds__loop_inv__Line_43;
    MR_Integer transform_hlds__loop_inv__Counter_44;
    MR_Word transform_hlds__loop_inv__AuxPredSymName0_45;
    MR_Integer transform_hlds__loop_inv__ProcNo_46;
    MR_String transform_hlds__loop_inv__Suffix_47;
    MR_Word transform_hlds__loop_inv__AuxPredSymName_48;
    MR_Word transform_hlds__loop_inv__Origin_49;
    MR_Word transform_hlds__loop_inv__AuxPredId_51;
    MR_Integer transform_hlds__loop_inv__AuxProcId_52;
    MR_Word transform_hlds__loop_inv__V_59_59;
    MR_String transform_hlds__loop_inv__V_62_62;
    MR_Word transform_hlds__loop_inv___GoalExpr_27;
    MR_Word transform_hlds__loop_inv___ExtraArgs_50;

    {
      transform_hlds__loop_inv__AuxHeadVars_23 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__HeadVars_12, transform_hlds__loop_inv__ComputedInvArgs_13);
    }
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__loop_inv__ModuleInfo0_19, transform_hlds__loop_inv__PredId_21, transform_hlds__loop_inv__ProcId_22, &transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__ProcInfo_25);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__loop_inv__ProcInfo_25, &transform_hlds__loop_inv__Goal_26);
    }
    transform_hlds__loop_inv___GoalExpr_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_26, (MR_Integer) 0)));
    transform_hlds__loop_inv__GoalInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_26, (MR_Integer) 1)));
    {
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__TVarSet_29);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__loop_inv__ProcInfo_25, &transform_hlds__loop_inv__VarTypes_30);
    }
    {
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__ClassContext_31);
    }
    {
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__loop_inv__ProcInfo_25, &transform_hlds__loop_inv__RttiVarMaps_32);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__loop_inv__ProcInfo_25, &transform_hlds__loop_inv__VarSet_33);
    }
    {
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__loop_inv__ProcInfo_25, &transform_hlds__loop_inv__InstVarSet_34);
    }
    {
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__Markers_35);
    }
    {
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__OrigOrigin_36);
    }
    {
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__loop_inv__ProcInfo_25, &transform_hlds__loop_inv__HasParallelConj_37);
    }
    {
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__VarNameRemap_38);
    }
    {
      transform_hlds__loop_inv__PredModule_39 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__loop_inv__PredInfo_24);
    }
    {
      transform_hlds__loop_inv__PredName_40 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__loop_inv__PredInfo_24);
    }
    {
      transform_hlds__loop_inv__PredOrFunc_41 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__loop_inv__PredInfo_24);
    }
    {
      transform_hlds__loop_inv__Context_42 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__loop_inv__GoalInfo_28);
    }
    {
      mercury__term__context_line_2_p_0(transform_hlds__loop_inv__Context_42, &transform_hlds__loop_inv__Line_43);
    }
    transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__Line_43 == (MR_Integer) 0);
    if (transform_hlds__loop_inv__succeeded)
      {
        transform_hlds__loop_inv__Counter_44 = hlds__hlds_pred__pred_id_to_int_1_f_0(transform_hlds__loop_inv__PredId_21);
      }
    else
      transform_hlds__loop_inv__Counter_44 = (MR_Integer) 1;
    {
      parse_tree__prog_util__make_pred_name_with_context_7_p_0(transform_hlds__loop_inv__PredModule_39, (MR_String) "loop_inv", transform_hlds__loop_inv__PredOrFunc_41, transform_hlds__loop_inv__PredName_40, transform_hlds__loop_inv__Line_43, transform_hlds__loop_inv__Counter_44, &transform_hlds__loop_inv__AuxPredSymName0_45);
    }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__loop_inv__ProcId_22, &transform_hlds__loop_inv__ProcNo_46);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_8[0], transform_hlds__loop_inv__ProcNo_46, &transform_hlds__loop_inv__V_62_62);
    }
    {
      transform_hlds__loop_inv__Suffix_47 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__loop_inv__V_62_62);
    }
    {
      mdbcomp__sym_name__add_sym_name_suffix_3_p_0(transform_hlds__loop_inv__AuxPredSymName0_45, transform_hlds__loop_inv__Suffix_47, &transform_hlds__loop_inv__AuxPredSymName_48);
    }
    {
      transform_hlds__loop_inv__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__V_59_59, 1) = ((MR_Box) (transform_hlds__loop_inv__ProcNo_46));
    }
    {
      transform_hlds__loop_inv__Origin_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Origin_49, 0) = ((MR_Box) (transform_hlds__loop_inv__V_59_59));
      MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Origin_49, 1) = ((MR_Box) (transform_hlds__loop_inv__OrigOrigin_36));
      MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Origin_49, 2) = ((MR_Box) (transform_hlds__loop_inv__PredId_21));
    }
    {
      hlds__hlds_pred__define_new_pred_20_p_0(transform_hlds__loop_inv__Origin_49, transform_hlds__loop_inv__Goal_26, transform_hlds__loop_inv__Replacement_16, transform_hlds__loop_inv__AuxHeadVars_23, &transform_hlds__loop_inv___ExtraArgs_50, transform_hlds__loop_inv__InitialAuxInstMap_14, transform_hlds__loop_inv__AuxPredSymName_48, transform_hlds__loop_inv__TVarSet_29, transform_hlds__loop_inv__VarTypes_30, transform_hlds__loop_inv__ClassContext_31, transform_hlds__loop_inv__RttiVarMaps_32, transform_hlds__loop_inv__VarSet_33, transform_hlds__loop_inv__InstVarSet_34, transform_hlds__loop_inv__Markers_35, (MR_Integer) 1, transform_hlds__loop_inv__HasParallelConj_37, transform_hlds__loop_inv__VarNameRemap_38, transform_hlds__loop_inv__ModuleInfo0_19, transform_hlds__loop_inv__ModuleInfo_20, transform_hlds__loop_inv__AuxPredProcId_15);
    }
    transform_hlds__loop_inv__AuxPredId_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__loop_inv__AuxPredProcId_15, (MR_Integer) 0)));
    transform_hlds__loop_inv__AuxProcId_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *transform_hlds__loop_inv__AuxPredProcId_15, (MR_Integer) 1)));
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(*transform_hlds__loop_inv__ModuleInfo_20, transform_hlds__loop_inv__AuxPredId_51, transform_hlds__loop_inv__AuxProcId_52, transform_hlds__loop_inv__AuxPredInfo_17, transform_hlds__loop_inv__AuxProcInfo_18);
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__loop_inv__wrapper_arg_3;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv0_LambdaHeadVar__3_14;

    {
      transform_hlds__loop_inv__conv0_LambdaHeadVar__3_14 = transform_hlds__loop_inv__IntroducedFrom__func__compute_initial_aux_instmap__728__1_2_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
    transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_LambdaHeadVar__3_14));
    return transform_hlds__loop_inv__wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0(
  MR_Word transform_hlds__loop_inv__Gs_4,
  MR_Word transform_hlds__loop_inv__IM_5)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__HeadVar__3_3;
    MR_Box transform_hlds__loop_inv__conv1_HeadVar__3_3;

    {
      transform_hlds__loop_inv__conv1_HeadVar__3_3 = mercury__list__foldl_3_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[4], transform_hlds__loop_inv__Gs_4, ((MR_Box) (transform_hlds__loop_inv__IM_5)));
    }
    transform_hlds__loop_inv__HeadVar__3_3 = ((MR_Word) transform_hlds__loop_inv__conv1_HeadVar__3_3);
    return transform_hlds__loop_inv__HeadVar__3_3;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__add_output_4_p_0(
  MR_Word transform_hlds__loop_inv__UniquelyUsedVars_5,
  MR_Word transform_hlds__loop_inv__X_6,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_8,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_InvVars_9)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__TypeInfo_12_12;

    {
      transform_hlds__loop_inv__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], ((MR_Box) (transform_hlds__loop_inv__X_6)), transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_8);
    }
    transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
    if (transform_hlds__loop_inv__succeeded)
      {
        transform_hlds__loop_inv__TypeInfo_12_12 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
        {
          transform_hlds__loop_inv__succeeded = mercury__list__member_2_p_0(transform_hlds__loop_inv__TypeInfo_12_12, ((MR_Box) (transform_hlds__loop_inv__X_6)), transform_hlds__loop_inv__UniquelyUsedVars_5);
        }
        transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
      }
    if (transform_hlds__loop_inv__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *transform_hlds__loop_inv__STATE_VARIABLE_InvVars_9 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__loop_inv__X_6));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_8));
      }
    else
      *transform_hlds__loop_inv__STATE_VARIABLE_InvVars_9 = transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_8;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__add_outputs_5_p_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv0_STATE_VARIABLE_InvVars_9;

    {
      transform_hlds__loop_inv__add_output_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv0_STATE_VARIABLE_InvVars_9);
    }
    *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_STATE_VARIABLE_InvVars_9));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__add_outputs_5_p_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_6,
  MR_Word transform_hlds__loop_inv__UUVs_7,
  MR_Word transform_hlds__loop_inv__Goal_8,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_10,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_InvVars_11)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__V_12_12;
    MR_Word transform_hlds__loop_inv__V_13_13;
    MR_Box transform_hlds__loop_inv__conv1_STATE_VARIABLE_InvVars_11;

    {
      transform_hlds__loop_inv__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_12_12, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_12_12, 1) = ((MR_Box) (transform_hlds__loop_inv__add_outputs_5_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_12_12, 3) = ((MR_Box) (transform_hlds__loop_inv__UUVs_7));
    }
    {
      transform_hlds__loop_inv__V_13_13 = transform_hlds__loop_inv__goal_outputs_2_f_0(transform_hlds__loop_inv__ModuleInfo_6, transform_hlds__loop_inv__Goal_8);
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_12_12, transform_hlds__loop_inv__V_13_13, ((MR_Box) (transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_10)), &transform_hlds__loop_inv__conv1_STATE_VARIABLE_InvVars_11);
    }
    *transform_hlds__loop_inv__STATE_VARIABLE_InvVars_11 = ((MR_Word) transform_hlds__loop_inv__conv1_STATE_VARIABLE_InvVars_11);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_1(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_3(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Mode_85 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__conv0_Mode_85);
    {
      transform_hlds__loop_inv__do_not_hoist_2_6_p_0_2(transform_hlds__loop_inv__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_2(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    {
      check_hlds__mode_util__mode_get_insts_4_p_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Mode_85, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__InitialInst_83, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__FinalInst_84);
    }
    {
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = check_hlds__inst_util__inst_contains_any_2_p_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__InitialInst_83);
    }
    if (!((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
      {
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = check_hlds__inst_util__inst_contains_any_2_p_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__FinalInst_84);
      }
    if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
      {
        transform_hlds__loop_inv__do_not_hoist_2_6_p_0_1(transform_hlds__loop_inv__env_ptr);
      }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_4(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__conv0_Mode_85, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Modes_73, transform_hlds__loop_inv__do_not_hoist_2_6_p_0_3, transform_hlds__loop_inv__env_ptr);
          }
        }
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_7,
  MR_Word transform_hlds__loop_inv__Goal_8,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_DHGs_0_11,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_DHGs_12,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_DHVs_0_13,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_DHVs_14)
{
  {
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s transform_hlds__loop_inv__env;

    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7 = transform_hlds__loop_inv__ModuleInfo_7;
    {
      MR_Word transform_hlds__loop_inv__GoalExpr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 0)));
      MR_Word transform_hlds__loop_inv__Construction_21;
      MR_Word transform_hlds__loop_inv__V_42_42;
      MR_Word transform_hlds__loop_inv__V_44_44;
      MR_Word transform_hlds__loop_inv___GoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 1)));
      MR_Word transform_hlds__loop_inv__V_24_24;
      MR_Word transform_hlds__loop_inv__V_25_25;
      MR_Word transform_hlds__loop_inv__V_26_26;
      MR_Word transform_hlds__loop_inv__V_27_27;
      MR_Word transform_hlds__loop_inv__V_40_40;
      MR_Word transform_hlds__loop_inv__V_41_41;
      MR_Word transform_hlds__loop_inv__V_43_43;
      MR_Word transform_hlds__loop_inv__V_45_45;
      MR_Word transform_hlds__loop_inv__V_46_46;

      (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_19)) == (MR_mktag((MR_Integer) 1)));
      if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
        {
          transform_hlds__loop_inv__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_19, (MR_Integer) 0)));
          transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_19, (MR_Integer) 1)));
          transform_hlds__loop_inv__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_19, (MR_Integer) 2)));
          transform_hlds__loop_inv__Construction_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_19, (MR_Integer) 3)));
          transform_hlds__loop_inv__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_19, (MR_Integer) 4)));
          (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__Construction_21)) == (MR_mktag((MR_Integer) 0)));
          if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
            {
              transform_hlds__loop_inv__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 0)));
              transform_hlds__loop_inv__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 1)));
              transform_hlds__loop_inv__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 2)));
              transform_hlds__loop_inv__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 3)));
              transform_hlds__loop_inv__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 4)));
              transform_hlds__loop_inv__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 5)));
              transform_hlds__loop_inv__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 6)));
              (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = (transform_hlds__loop_inv__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (!((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
                (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = (transform_hlds__loop_inv__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
        }
    }
    if (!((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
      {
        {
          MR_Word transform_hlds__loop_inv__GoalExpr_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 0)));
          MR_Word transform_hlds__loop_inv__V_55_55;
          MR_Word transform_hlds__loop_inv___GoalInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 1)));
          MR_Word transform_hlds__loop_inv__V_56_56;
          MR_Word transform_hlds__loop_inv__V_57_57;
          MR_Word transform_hlds__loop_inv__V_58_58;
          MR_Word transform_hlds__loop_inv__V_59_59;
          MR_Word transform_hlds__loop_inv__V_49_49;
          MR_Word transform_hlds__loop_inv__V_50_50;
          MR_Word transform_hlds__loop_inv__V_51_51;
          MR_Word transform_hlds__loop_inv__V_52_52;
          MR_Word transform_hlds__loop_inv__V_53_53;
          MR_Word transform_hlds__loop_inv__V_54_54;

          (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_47)) == (MR_mktag((MR_Integer) 1)));
          if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
            {
              transform_hlds__loop_inv__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_47, (MR_Integer) 0)));
              transform_hlds__loop_inv__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_47, (MR_Integer) 1)));
              transform_hlds__loop_inv__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_47, (MR_Integer) 2)));
              transform_hlds__loop_inv__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_47, (MR_Integer) 3)));
              transform_hlds__loop_inv__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_47, (MR_Integer) 4)));
              (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__V_55_55)) == (MR_mktag((MR_Integer) 1)));
              if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
                {
                  transform_hlds__loop_inv__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 0)));
                  transform_hlds__loop_inv__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 1)));
                  transform_hlds__loop_inv__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 2)));
                  transform_hlds__loop_inv__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 3)));
                  transform_hlds__loop_inv__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 4)));
                  transform_hlds__loop_inv__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 5)));
                }
            }
        }
        if (!((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
          {
            {
              MR_Word transform_hlds__loop_inv__V_61_61;

              {
                transform_hlds__loop_inv__V_61_61 = hlds__hlds_goal__goal_get_purity_1_f_0(transform_hlds__loop_inv__Goal_8);
              }
              (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = (transform_hlds__loop_inv__V_61_61 == (MR_Integer) 2);
            }
            if (!((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
              {
                {
                  MR_Word transform_hlds__loop_inv__GoalInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 1)));
                  MR_Word transform_hlds__loop_inv__Detism_64;
                  MR_Word transform_hlds__loop_inv__MaxSolns_66;
                  MR_Word transform_hlds__loop_inv___GoalExpr_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 0)));
                  MR_Word transform_hlds__loop_inv___CanFail_65;

                  {
                    transform_hlds__loop_inv__Detism_64 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__loop_inv__GoalInfo_63);
                  }
                  {
                    parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__loop_inv__Detism_64, &transform_hlds__loop_inv___CanFail_65, &transform_hlds__loop_inv__MaxSolns_66);
                  }
                  (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = (transform_hlds__loop_inv__MaxSolns_66 == (MR_Integer) 0);
                }
                if (!((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
                  {
                    MR_Word transform_hlds__loop_inv__GoalExpr_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 0)));
                    MR_Word transform_hlds__loop_inv___GoalInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 1)));

                    if (((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_69)) == (MR_mktag((MR_Integer) 2))))
                      {
                        MR_Word transform_hlds__loop_inv__PredId_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 0)));
                        MR_Integer transform_hlds__loop_inv__ProcId_77 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 1)));
                        MR_Word transform_hlds__loop_inv__ProcInfo_92;
                        MR_Word transform_hlds__loop_inv__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 2)));
                        MR_Word transform_hlds__loop_inv__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 3)));
                        MR_Word transform_hlds__loop_inv__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 4)));
                        MR_Word transform_hlds__loop_inv__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 5)));
                        MR_Word transform_hlds__loop_inv__V_91_91;

                        {
                          hlds__hlds_module__module_info_pred_proc_info_5_p_0((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, transform_hlds__loop_inv__PredId_76, transform_hlds__loop_inv__ProcId_77, &transform_hlds__loop_inv__V_91_91, &transform_hlds__loop_inv__ProcInfo_92);
                        }
                        {
                          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__loop_inv__ProcInfo_92, &(transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Modes_73);
                        }
                        (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_TRUE;
                      }
                    else
                    if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_69)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 0)))) == (MR_Integer) 0))))
                      {
                        MR_Word transform_hlds__loop_inv__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 1)));
                        MR_Word transform_hlds__loop_inv__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 2)));
                        MR_Word transform_hlds__loop_inv__V_74_74;
                        MR_Word transform_hlds__loop_inv__V_75_75;

                        (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Modes_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 3)));
                        transform_hlds__loop_inv__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 4)));
                        transform_hlds__loop_inv__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 5)));
                        (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_TRUE;
                      }
                    else
                      (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_FALSE;
                    if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
                      {
                        transform_hlds__loop_inv__do_not_hoist_2_6_p_0_4(&transform_hlds__loop_inv__env);
                      }
                  }
              }
          }
      }
    if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
      {
        {
          mercury__list__cons_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__loop_inv__Goal_8)), transform_hlds__loop_inv__STATE_VARIABLE_DHGs_0_11, transform_hlds__loop_inv__STATE_VARIABLE_DHGs_12);
        }
        {
          transform_hlds__loop_inv__add_outputs_5_p_0((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__loop_inv__Goal_8, transform_hlds__loop_inv__STATE_VARIABLE_DHVs_0_13, transform_hlds__loop_inv__STATE_VARIABLE_DHVs_14);
        }
      }
    else
      {
        *transform_hlds__loop_inv__STATE_VARIABLE_DHVs_14 = transform_hlds__loop_inv__STATE_VARIABLE_DHVs_0_13;
        *transform_hlds__loop_inv__STATE_VARIABLE_DHGs_12 = transform_hlds__loop_inv__STATE_VARIABLE_DHGs_0_11;
      }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_4_p_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3,
  MR_Box transform_hlds__loop_inv__wrapper_arg_4,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv1_STATE_VARIABLE_DHGs_12;
    MR_Word transform_hlds__loop_inv__conv0_STATE_VARIABLE_DHVs_14;

    {
      transform_hlds__loop_inv__do_not_hoist_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv1_STATE_VARIABLE_DHGs_12, ((MR_Word) transform_hlds__loop_inv__wrapper_arg_4), &transform_hlds__loop_inv__conv0_STATE_VARIABLE_DHVs_14);
    }
    *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv1_STATE_VARIABLE_DHGs_12));
    *transform_hlds__loop_inv__wrapper_arg_5 = ((MR_Box) (transform_hlds__loop_inv__conv0_STATE_VARIABLE_DHVs_14));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_4_p_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
  MR_Word transform_hlds__loop_inv__InvGoals_6,
  MR_Word * transform_hlds__loop_inv__DontHoistGoals_7,
  MR_Word * transform_hlds__loop_inv__DontHoistVars_8)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__V_9_9;
    MR_Box transform_hlds__loop_inv__conv3_DontHoistGoals_7;
    MR_Box transform_hlds__loop_inv__conv2_DontHoistVars_8;

    {
      transform_hlds__loop_inv__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_9_9, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_9_9, 1) = ((MR_Box) (transform_hlds__loop_inv__do_not_hoist_4_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_9_9, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_5));
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_1[1], (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_9_9, transform_hlds__loop_inv__InvGoals_6, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__loop_inv__conv3_DontHoistGoals_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__loop_inv__conv2_DontHoistVars_8);
    }
    *transform_hlds__loop_inv__DontHoistGoals_7 = ((MR_Word) transform_hlds__loop_inv__conv3_DontHoistGoals_7);
    *transform_hlds__loop_inv__DontHoistVars_8 = ((MR_Word) transform_hlds__loop_inv__conv2_DontHoistVars_8);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_13(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv3_STATE_VARIABLE_InvVars_9;

    {
      transform_hlds__loop_inv__add_output_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv3_STATE_VARIABLE_InvVars_9);
    }
    *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv3_STATE_VARIABLE_InvVars_9));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_1(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_3(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__InvariantGoal_17 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv0_InvariantGoal_17);
    {
      transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_2(transform_hlds__loop_inv__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_2(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    {
      MR_Word transform_hlds__loop_inv__V_20_20;
      MR_Word transform_hlds__loop_inv__V_22_22;

      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__InvariantGoal_17, (MR_Integer) 0)));
      transform_hlds__loop_inv__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__InvariantGoal_17, (MR_Integer) 1)));
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10, (MR_Integer) 0)));
      transform_hlds__loop_inv__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10, (MR_Integer) 1)));
      {
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21);
      }
      if (!((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded))
        {
          MR_Word transform_hlds__loop_inv__TypeInfo_21_37;
          MR_Word transform_hlds__loop_inv__PredId_23;
          MR_Integer transform_hlds__loop_inv__ProcId_24;
          MR_Word transform_hlds__loop_inv__Args_25;
          MR_Word transform_hlds__loop_inv__V_32_32;
          MR_Integer transform_hlds__loop_inv__V_33_33;
          MR_Word transform_hlds__loop_inv__V_34_34;
          MR_Word transform_hlds__loop_inv___BuiltinX_26;
          MR_Word transform_hlds__loop_inv___ContextX_27;
          MR_Word transform_hlds__loop_inv___SymNameX_28;
          MR_Word transform_hlds__loop_inv___BuiltinY_29;
          MR_Word transform_hlds__loop_inv___ContextY_30;
          MR_Word transform_hlds__loop_inv___SymNameY_31;

          (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19)) == (MR_mktag((MR_Integer) 2)));
          if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
            {
              {
                transform_hlds__loop_inv__PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 0)));
                transform_hlds__loop_inv__ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 1)));
                transform_hlds__loop_inv__Args_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 2)));
                transform_hlds__loop_inv___BuiltinX_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 3)));
                transform_hlds__loop_inv___ContextX_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 4)));
                transform_hlds__loop_inv___SymNameX_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 5)));
              }
              {
                (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21)) == (MR_mktag((MR_Integer) 2)));
                if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
                  {
                    {
                      transform_hlds__loop_inv__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 0)));
                      transform_hlds__loop_inv__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 1)));
                      transform_hlds__loop_inv__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 2)));
                      transform_hlds__loop_inv___BuiltinY_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 3)));
                      transform_hlds__loop_inv___ContextY_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 4)));
                      transform_hlds__loop_inv___SymNameY_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 5)));
                    }
                    {
                      {
                        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__loop_inv__PredId_23, transform_hlds__loop_inv__V_32_32);
                      }
                      if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
                        {
                          (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = (transform_hlds__loop_inv__ProcId_24 == transform_hlds__loop_inv__V_33_33);
                          if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
                            {
                              transform_hlds__loop_inv__TypeInfo_21_37 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4];
                              {
                                (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__loop_inv__TypeInfo_21_37, ((MR_Box) (transform_hlds__loop_inv__Args_25)), ((MR_Box) (transform_hlds__loop_inv__V_34_34)));
                              }
                            }
                        }
                    }
                  }
              }
            }
        }
      if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
        {
          transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_1(transform_hlds__loop_inv__env_ptr);
        }
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_4(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv0_InvariantGoal_17, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IGs0_11, transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_3, transform_hlds__loop_inv__env_ptr);
          }
        }
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_5(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_7(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUV_42 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv1_UUV_42);
    {
      transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_6(transform_hlds__loop_inv__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_6(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeCtorInfo_9_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeCtorInfo_9_44, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__NonLocals_41, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUV_42);
    }
    if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
      {
        transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_5(transform_hlds__loop_inv__env_ptr);
      }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_8(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_1) == 0)
      {
        {
          MR_Word transform_hlds__loop_inv__GoalInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10, (MR_Integer) 1)));
          MR_Word transform_hlds__loop_inv___GoalExpr_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10, (MR_Integer) 0)));

          {
            (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__NonLocals_41 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__loop_inv__GoalInfo_40);
          }
          {
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv1_UUV_42, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUVs_9, transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_7, transform_hlds__loop_inv__env_ptr);
          }
        }
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_9(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_2, 1);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_11(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__V_49 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv2_V_49);
    {
      transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_10(transform_hlds__loop_inv__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_10(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    {
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = mercury__list__member_2_p_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeInfo_9_50, ((MR_Box) ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__V_49)), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IVs0_13);
    }
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = !((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded);
    if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
      {
        transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_9(transform_hlds__loop_inv__env_ptr);
      }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_12(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_2) == 0)
      {
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeInfo_9_50 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
        {
          mercury__list__member_2_p_1((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeInfo_9_50, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv2_V_49, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Inputs_48, transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_11, transform_hlds__loop_inv__env_ptr);
        }
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_8,
  MR_Word transform_hlds__loop_inv__UUVs_9,
  MR_Word transform_hlds__loop_inv__Goal_10,
  MR_Word transform_hlds__loop_inv__IGs0_11,
  MR_Word * transform_hlds__loop_inv__IGs_12,
  MR_Word transform_hlds__loop_inv__IVs0_13,
  MR_Word * transform_hlds__loop_inv__IVs_14)
{
  {
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s transform_hlds__loop_inv__env;

    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUVs_9 = transform_hlds__loop_inv__UUVs_9;
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10 = transform_hlds__loop_inv__Goal_10;
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IGs0_11 = transform_hlds__loop_inv__IGs0_11;
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IVs0_13 = transform_hlds__loop_inv__IVs0_13;
    {
      transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_4(&transform_hlds__loop_inv__env);
    }
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = !((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded);
    if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
      {
        {
          transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_8(&transform_hlds__loop_inv__env);
        }
        (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = !((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded);
        if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
          {
            {
              (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Inputs_48 = transform_hlds__loop_inv__goal_inputs_2_f_0(transform_hlds__loop_inv__ModuleInfo_8, (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10);
            }
            {
              transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_12(&transform_hlds__loop_inv__env);
            }
            (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = !((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded);
          }
      }
    if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
      {
        MR_Word transform_hlds__loop_inv__V_57_57;
        MR_Word transform_hlds__loop_inv__V_58_58;
        MR_Box transform_hlds__loop_inv__conv4_IVs_14;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__loop_inv__IGs_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IGs0_11));
        }
        {
          transform_hlds__loop_inv__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 1) = ((MR_Box) (transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_13));
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 3) = ((MR_Box) ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUVs_9));
        }
        {
          transform_hlds__loop_inv__V_58_58 = transform_hlds__loop_inv__goal_outputs_2_f_0(transform_hlds__loop_inv__ModuleInfo_8, (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10);
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_57_57, transform_hlds__loop_inv__V_58_58, ((MR_Box) ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IVs0_13)), &transform_hlds__loop_inv__conv4_IVs_14);
        }
        *transform_hlds__loop_inv__IVs_14 = ((MR_Word) transform_hlds__loop_inv__conv4_IVs_14);
      }
    else
      {
        *transform_hlds__loop_inv__IGs_12 = (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IGs0_11;
        *transform_hlds__loop_inv__IVs_14 = (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IVs0_13;
      }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_6_p_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3,
  MR_Box transform_hlds__loop_inv__wrapper_arg_4,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv1_IGs_12;
    MR_Word transform_hlds__loop_inv__conv0_IVs_14;

    {
      transform_hlds__loop_inv__inv_goals_vars_2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv1_IGs_12, ((MR_Word) transform_hlds__loop_inv__wrapper_arg_4), &transform_hlds__loop_inv__conv0_IVs_14);
    }
    *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv1_IGs_12));
    *transform_hlds__loop_inv__wrapper_arg_5 = ((MR_Box) (transform_hlds__loop_inv__conv0_IVs_14));
  }
}

static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_6_p_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_7,
  MR_Word transform_hlds__loop_inv__UniquelyUsedVars_8,
  MR_Word transform_hlds__loop_inv__InvGoals0_9,
  MR_Word * transform_hlds__loop_inv__InvGoals_10,
  MR_Word transform_hlds__loop_inv__InvVars0_11,
  MR_Word * transform_hlds__loop_inv__InvVars_12)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__V_13_13;
    MR_Box transform_hlds__loop_inv__conv3_InvGoals_10;
    MR_Box transform_hlds__loop_inv__conv2_InvVars_12;

    {
      transform_hlds__loop_inv__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_13_13, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_13_13, 1) = ((MR_Box) (transform_hlds__loop_inv__inv_goals_vars_6_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_13_13, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_7));
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_13_13, 4) = ((MR_Box) (transform_hlds__loop_inv__UniquelyUsedVars_8));
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_1[1], (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_13_13, transform_hlds__loop_inv__InvGoals0_9, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__loop_inv__conv3_InvGoals_10, ((MR_Box) (transform_hlds__loop_inv__InvVars0_11)), &transform_hlds__loop_inv__conv2_InvVars_12);
    }
    *transform_hlds__loop_inv__InvGoals_10 = ((MR_Word) transform_hlds__loop_inv__conv3_InvGoals_10);
    *transform_hlds__loop_inv__InvVars_12 = ((MR_Word) transform_hlds__loop_inv__conv2_InvVars_12);
  }
}

static MR_Word MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_2_f_0(
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
  MR_Word transform_hlds__loop_inv__Y_2)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__HeadVar__3_3;

    if ((transform_hlds__loop_inv__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      transform_hlds__loop_inv__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word transform_hlds__loop_inv__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 0)));

        {
          transform_hlds__loop_inv__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], ((MR_Box) (transform_hlds__loop_inv__X_5)), ((MR_Box) (transform_hlds__loop_inv__Y_2)));
        }
        if (transform_hlds__loop_inv__succeeded)
          transform_hlds__loop_inv__HeadVar__3_3 = transform_hlds__loop_inv__HeadVar__1_1;
        else
          transform_hlds__loop_inv__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    return transform_hlds__loop_inv__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__loop_inv__wrapper_arg_3;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__3_3;

    {
      transform_hlds__loop_inv__conv0_HeadVar__3_3 = transform_hlds__loop_inv__refine_candidate_inv_args_2_2_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
    transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__3_3));
    return transform_hlds__loop_inv__wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0(
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
  MR_Word transform_hlds__loop_inv__MaybeInvArgs_6)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__HeadVar__3_3;
    MR_Word transform_hlds__loop_inv__RecCall_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word transform_hlds__loop_inv___RecCallInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word transform_hlds__loop_inv__CallArgs_9;
    MR_Word transform_hlds__loop_inv__V_7_7;
    MR_Integer transform_hlds__loop_inv__V_8_8;
    MR_Word transform_hlds__loop_inv__V_10_10;
    MR_Word transform_hlds__loop_inv__V_11_11;
    MR_Word transform_hlds__loop_inv__V_12_12;

    transform_hlds__loop_inv__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__RecCall_4)) == (MR_mktag((MR_Integer) 2)));
    if (transform_hlds__loop_inv__succeeded)
      {
        transform_hlds__loop_inv__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 0)));
        transform_hlds__loop_inv__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 1)));
        transform_hlds__loop_inv__CallArgs_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 2)));
        transform_hlds__loop_inv__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 3)));
        transform_hlds__loop_inv__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 4)));
        transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 5)));
        {
          MR_Word transform_hlds__loop_inv__TypeInfo_17_17 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[2];

          {
            transform_hlds__loop_inv__HeadVar__3_3 = mercury__list__map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_17_17, (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__TypeInfo_17_17, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[3], transform_hlds__loop_inv__MaybeInvArgs_6, transform_hlds__loop_inv__CallArgs_9);
          }
        }
      }
    else
      {
        MR_Box transform_hlds__loop_inv__conv1_HeadVar__3_3;

        {
          transform_hlds__loop_inv__conv1_HeadVar__3_3 = mercury__require__unexpected_3_f_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[3], (MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.refine_candidate_inv_args\'/2", (MR_String) "non call/6 found in argument 1");
        }
        transform_hlds__loop_inv__HeadVar__3_3 = ((MR_Word) transform_hlds__loop_inv__conv1_HeadVar__3_3);
      }
    return transform_hlds__loop_inv__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_f_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
  MR_Word transform_hlds__loop_inv__Arg_6,
  MR_Word transform_hlds__loop_inv__Mode_7)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__HeadVar__4_4;
    MR_Word transform_hlds__loop_inv__InvArg_8 = transform_hlds__loop_inv__Arg_6;
    MR_Word transform_hlds__loop_inv__InitInst_12;
    MR_Word transform_hlds__loop_inv___FinalInst_13;

    {
      check_hlds__mode_util__mode_get_insts_4_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__Mode_7, &transform_hlds__loop_inv__InitInst_12, &transform_hlds__loop_inv___FinalInst_13);
    }
    {
      transform_hlds__loop_inv__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__InitInst_12);
    }
    transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
    if (transform_hlds__loop_inv__succeeded)
      {
        transform_hlds__loop_inv__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__4_4, 0) = ((MR_Box) (transform_hlds__loop_inv__InvArg_8));
      }
    else
      transform_hlds__loop_inv__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    return transform_hlds__loop_inv__HeadVar__4_4;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_1(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_3(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__Gs_5 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__conv0_Gs_5);
    {
      transform_hlds__loop_inv__common_goal_2_p_0_2(transform_hlds__loop_inv__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_4(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_6(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__G_6 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__conv1_G_6);
    {
      transform_hlds__loop_inv__common_goal_2_p_0_5(transform_hlds__loop_inv__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_5(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    {
      MR_Word transform_hlds__loop_inv__V_10_10;
      MR_Word transform_hlds__loop_inv__V_12_12;

      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__G_6, (MR_Integer) 0)));
      transform_hlds__loop_inv__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__G_6, (MR_Integer) 1)));
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goal_4, (MR_Integer) 0)));
      transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goal_4, (MR_Integer) 1)));
      {
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11);
      }
      if (!((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded))
        {
          MR_Word transform_hlds__loop_inv__TypeInfo_21_27;
          MR_Word transform_hlds__loop_inv__PredId_13;
          MR_Integer transform_hlds__loop_inv__ProcId_14;
          MR_Word transform_hlds__loop_inv__Args_15;
          MR_Word transform_hlds__loop_inv__V_22_22;
          MR_Integer transform_hlds__loop_inv__V_23_23;
          MR_Word transform_hlds__loop_inv__V_24_24;
          MR_Word transform_hlds__loop_inv___BuiltinX_16;
          MR_Word transform_hlds__loop_inv___ContextX_17;
          MR_Word transform_hlds__loop_inv___SymNameX_18;
          MR_Word transform_hlds__loop_inv___BuiltinY_19;
          MR_Word transform_hlds__loop_inv___ContextY_20;
          MR_Word transform_hlds__loop_inv___SymNameY_21;

          (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9)) == (MR_mktag((MR_Integer) 2)));
          if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
            {
              {
                transform_hlds__loop_inv__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 0)));
                transform_hlds__loop_inv__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 1)));
                transform_hlds__loop_inv__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 2)));
                transform_hlds__loop_inv___BuiltinX_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 3)));
                transform_hlds__loop_inv___ContextX_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 4)));
                transform_hlds__loop_inv___SymNameX_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 5)));
              }
              {
                (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11)) == (MR_mktag((MR_Integer) 2)));
                if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
                  {
                    {
                      transform_hlds__loop_inv__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 0)));
                      transform_hlds__loop_inv__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 1)));
                      transform_hlds__loop_inv__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 2)));
                      transform_hlds__loop_inv___BuiltinY_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 3)));
                      transform_hlds__loop_inv___ContextY_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 4)));
                      transform_hlds__loop_inv___SymNameY_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 5)));
                    }
                    {
                      {
                        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__loop_inv__PredId_13, transform_hlds__loop_inv__V_22_22);
                      }
                      if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
                        {
                          (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = (transform_hlds__loop_inv__ProcId_14 == transform_hlds__loop_inv__V_23_23);
                          if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
                            {
                              transform_hlds__loop_inv__TypeInfo_21_27 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4];
                              {
                                (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__loop_inv__TypeInfo_21_27, ((MR_Box) (transform_hlds__loop_inv__Args_15)), ((MR_Box) (transform_hlds__loop_inv__V_24_24)));
                              }
                            }
                        }
                    }
                  }
              }
            }
        }
      if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
        {
          transform_hlds__loop_inv__common_goal_2_p_0_4(transform_hlds__loop_inv__env_ptr);
        }
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_7(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__commit_1) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__conv1_G_6, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__Gs_5, transform_hlds__loop_inv__common_goal_2_p_0_6, transform_hlds__loop_inv__env_ptr);
          }
        }
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_2(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    {
      transform_hlds__loop_inv__common_goal_2_p_0_7(transform_hlds__loop_inv__env_ptr);
    }
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = !((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded);
    if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
      {
        transform_hlds__loop_inv__common_goal_2_p_0_1(transform_hlds__loop_inv__env_ptr);
      }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_8(
  void * transform_hlds__loop_inv__env_ptr_arg)
{
  {
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__loop_inv_scalar_common_1[1], &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__conv0_Gs_5, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goalss_3, transform_hlds__loop_inv__common_goal_2_p_0_3, transform_hlds__loop_inv__env_ptr);
          }
        }
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0(
  MR_Word transform_hlds__loop_inv__Goalss_3,
  MR_Word transform_hlds__loop_inv__Goal_4)
{
  {
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s transform_hlds__loop_inv__env;

    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goalss_3 = transform_hlds__loop_inv__Goalss_3;
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goal_4 = transform_hlds__loop_inv__Goal_4;
    {
      transform_hlds__loop_inv__common_goal_2_p_0_8(&transform_hlds__loop_inv__env);
    }
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = !((transform_hlds__loop_inv__env).transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded);
    return (transform_hlds__loop_inv__env).transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__all_instmap_deltas_are_ground_2_p_0(
  MR_Word transform_hlds__loop_inv__ModuleInfo_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__loop_inv__succeeded;

        if ((transform_hlds__loop_inv__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          transform_hlds__loop_inv__succeeded = MR_TRUE;
        else
          {
            MR_Word transform_hlds__loop_inv__Inst_6;
            MR_Word transform_hlds__loop_inv__VarInsts_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__loop_inv__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__loop_inv___Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_8_8, (MR_Integer) 0)));

            transform_hlds__loop_inv__Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_8_8, (MR_Integer) 1)));
            {
              transform_hlds__loop_inv__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(transform_hlds__loop_inv__ModuleInfo_1, transform_hlds__loop_inv__Inst_6);
            }
            if (transform_hlds__loop_inv__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__loop_inv__HeadVar__2__tmp_copy_2 = transform_hlds__loop_inv__VarInsts_7;

                  transform_hlds__loop_inv__HeadVar__2_2 = transform_hlds__loop_inv__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
        return transform_hlds__loop_inv__succeeded;
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_handle_primitive_goal_3_p_0(
  MR_Word transform_hlds__loop_inv__Goal_4,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_14)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_4, (MR_Integer) 1)));
    MR_Word transform_hlds__loop_inv___GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_4, (MR_Integer) 0)));
    MR_Word transform_hlds__loop_inv__Detism_8;
    MR_Word transform_hlds__loop_inv__CodeModel_9;
    MR_Word transform_hlds__loop_inv__InstMapDelta_10;
    MR_Word transform_hlds__loop_inv__InstMapDeltaPairs_11;
    MR_Word transform_hlds__loop_inv__ModuleInfo_12;
    MR_Word transform_hlds__loop_inv__V_15_15;
    MR_Word transform_hlds__loop_inv__V_19_19;
    MR_Word transform_hlds__loop_inv__V_20_20;

    {
      transform_hlds__loop_inv__Detism_8 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__loop_inv__GoalInfo_7);
    }
    {
      hlds__code_model__determinism_to_code_model_2_p_0(transform_hlds__loop_inv__Detism_8, &transform_hlds__loop_inv__CodeModel_9);
    }
    switch (transform_hlds__loop_inv__CodeModel_9) {
      default:
        transform_hlds__loop_inv__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        transform_hlds__loop_inv__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 1:
        transform_hlds__loop_inv__succeeded = MR_TRUE;
        break;
    }
    if (transform_hlds__loop_inv__succeeded)
      {
        {
          transform_hlds__loop_inv__V_15_15 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__loop_inv__GoalInfo_7);
        }
        transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_15_15 == (MR_Integer) 0);
        if (transform_hlds__loop_inv__succeeded)
          {
            {
              transform_hlds__loop_inv__InstMapDelta_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__loop_inv__GoalInfo_7);
            }
            {
              hlds__instmap__instmap_delta_to_assoc_list_2_p_0(transform_hlds__loop_inv__InstMapDelta_10, &transform_hlds__loop_inv__InstMapDeltaPairs_11);
            }
            transform_hlds__loop_inv__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 0)));
            transform_hlds__loop_inv__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 1)));
            transform_hlds__loop_inv__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 2)));
            {
              transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__all_instmap_deltas_are_ground_2_p_0(transform_hlds__loop_inv__ModuleInfo_12, transform_hlds__loop_inv__InstMapDeltaPairs_11);
            }
          }
      }
    if (transform_hlds__loop_inv__succeeded)
      {
        MR_Word transform_hlds__loop_inv__V_17_17;
        MR_Word transform_hlds__loop_inv__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 1)));
        MR_Word transform_hlds__loop_inv__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 0)));
        MR_Word transform_hlds__loop_inv__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 2)));
        MR_Word transform_hlds__loop_inv__V_23_23;
        MR_Word transform_hlds__loop_inv__V_25_25;
        MR_Word transform_hlds__loop_inv__V_24_24;

        {
          transform_hlds__loop_inv__V_17_17 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__loop_inv__V_18_18, ((MR_Box) (transform_hlds__loop_inv__Goal_4)));
        }
        transform_hlds__loop_inv__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 0)));
        transform_hlds__loop_inv__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 1)));
        transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 2)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__V_23_23));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__V_17_17));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__loop_inv__V_25_25));
        }
      }
    else
      *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_14 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13;
  }
}

static void MR_CALL 
transform_hlds__loop_inv__add_recursive_call_3_p_0(
  MR_Word transform_hlds__loop_inv__Goal_4,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_8)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__RecCall_6;
    MR_Word transform_hlds__loop_inv__V_9_9;
    MR_Word transform_hlds__loop_inv__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7, (MR_Integer) 1)));
    MR_Word transform_hlds__loop_inv__V_12_12;
    MR_Word transform_hlds__loop_inv__V_13_13;
    MR_Word transform_hlds__loop_inv__V_16_16;
    MR_Word transform_hlds__loop_inv__V_17_17;
    MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7, (MR_Integer) 0)));
    MR_Word transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7, (MR_Integer) 2)));

    {
      transform_hlds__loop_inv__V_9_9 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__loop_inv__V_10_10);
    }
    {
      transform_hlds__loop_inv__RecCall_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__RecCall_6, 0) = ((MR_Box) (transform_hlds__loop_inv__Goal_4));
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__RecCall_6, 1) = ((MR_Box) (transform_hlds__loop_inv__V_9_9));
    }
    transform_hlds__loop_inv__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7, (MR_Integer) 0)));
    transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7, (MR_Integer) 1)));
    transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7, (MR_Integer) 2)));
    {
      transform_hlds__loop_inv__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_12_12, 0) = ((MR_Box) (transform_hlds__loop_inv__RecCall_6));
      MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_12_12, 1) = ((MR_Box) (transform_hlds__loop_inv__V_13_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__V_16_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__V_17_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__loop_inv__V_12_12));
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_switch_4_p_0(
  MR_Word transform_hlds__loop_inv__PPId_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__loop_inv__succeeded;

        if ((transform_hlds__loop_inv__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3;
        else
          {
            MR_Word transform_hlds__loop_inv__Case_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__loop_inv__Cases_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__loop_inv__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_10, (MR_Integer) 2)));
            MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_18_18;
            MR_Word transform_hlds__loop_inv__PathCandidates0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 1)));
            MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_26;
            MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_10, (MR_Integer) 0)));
            MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_10, (MR_Integer) 1)));
            MR_Word transform_hlds__loop_inv__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 0)));
            MR_Word transform_hlds__loop_inv__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 2)));
            MR_Word transform_hlds__loop_inv__V_30_30;
            MR_Word transform_hlds__loop_inv__V_32_32;
            MR_Word transform_hlds__loop_inv__V_31_31;

            {
              transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PPId_1, transform_hlds__loop_inv__Goal_15, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, &transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_26);
            }
            transform_hlds__loop_inv__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_26, (MR_Integer) 0)));
            transform_hlds__loop_inv__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_26, (MR_Integer) 1)));
            transform_hlds__loop_inv__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_26, (MR_Integer) 2)));
            {
              transform_hlds__loop_inv__STATE_VARIABLE_IGCs_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_18_18, 0) = ((MR_Box) (transform_hlds__loop_inv__V_30_30));
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_18_18, 1) = ((MR_Box) (transform_hlds__loop_inv__PathCandidates0_25));
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_18_18, 2) = ((MR_Box) (transform_hlds__loop_inv__V_32_32));
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__loop_inv__HeadVar__2__tmp_copy_2 = transform_hlds__loop_inv__Cases_11;
              MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_18_18;

              transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3;
              transform_hlds__loop_inv__HeadVar__2_2 = transform_hlds__loop_inv__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_disj_4_p_0(
  MR_Word transform_hlds__loop_inv__PPId_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__loop_inv__succeeded;

        if ((transform_hlds__loop_inv__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3;
        else
          {
            MR_Word transform_hlds__loop_inv__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__loop_inv__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15;
            MR_Word transform_hlds__loop_inv__PathCandidates0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 1)));
            MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23;
            MR_Word transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 0)));
            MR_Word transform_hlds__loop_inv__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 2)));
            MR_Word transform_hlds__loop_inv__V_27_27;
            MR_Word transform_hlds__loop_inv__V_29_29;
            MR_Word transform_hlds__loop_inv__V_28_28;

            {
              transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PPId_1, transform_hlds__loop_inv__Goal_10, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, &transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23);
            }
            transform_hlds__loop_inv__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23, (MR_Integer) 0)));
            transform_hlds__loop_inv__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23, (MR_Integer) 1)));
            transform_hlds__loop_inv__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23, (MR_Integer) 2)));
            {
              transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15, 0) = ((MR_Box) (transform_hlds__loop_inv__V_27_27));
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15, 1) = ((MR_Box) (transform_hlds__loop_inv__PathCandidates0_22));
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15, 2) = ((MR_Box) (transform_hlds__loop_inv__V_29_29));
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__loop_inv__HeadVar__2__tmp_copy_2 = transform_hlds__loop_inv__Goals_11;
              MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15;

              transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3;
              transform_hlds__loop_inv__HeadVar__2_2 = transform_hlds__loop_inv__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_parallel_conj_4_p_0(
  MR_Word transform_hlds__loop_inv__PPId_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__loop_inv__succeeded;

        if ((transform_hlds__loop_inv__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3;
        else
          {
            MR_Word transform_hlds__loop_inv__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__loop_inv__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15;
            MR_Word transform_hlds__loop_inv__PathCandidates0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 1)));
            MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23;
            MR_Word transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 0)));
            MR_Word transform_hlds__loop_inv__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 2)));
            MR_Word transform_hlds__loop_inv__V_27_27;
            MR_Word transform_hlds__loop_inv__V_29_29;
            MR_Word transform_hlds__loop_inv__V_28_28;

            {
              transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PPId_1, transform_hlds__loop_inv__Goal_10, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, &transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23);
            }
            transform_hlds__loop_inv__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23, (MR_Integer) 0)));
            transform_hlds__loop_inv__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23, (MR_Integer) 1)));
            transform_hlds__loop_inv__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23, (MR_Integer) 2)));
            {
              transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15, 0) = ((MR_Box) (transform_hlds__loop_inv__V_27_27));
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15, 1) = ((MR_Box) (transform_hlds__loop_inv__PathCandidates0_22));
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15, 2) = ((MR_Box) (transform_hlds__loop_inv__V_29_29));
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__loop_inv__HeadVar__2__tmp_copy_2 = transform_hlds__loop_inv__Goals_11;
              MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15;

              transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3;
              transform_hlds__loop_inv__HeadVar__2_2 = transform_hlds__loop_inv__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_plain_conj_4_p_0(
  MR_Word transform_hlds__loop_inv__PPId_1,
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__loop_inv__succeeded;

        if ((transform_hlds__loop_inv__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3;
        else
          {
            MR_Word transform_hlds__loop_inv__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__loop_inv__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15;

            {
              transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PPId_1, transform_hlds__loop_inv__Goal_10, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, &transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__loop_inv__HeadVar__2__tmp_copy_2 = transform_hlds__loop_inv__Goals_11;
              MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15;

              transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3;
              transform_hlds__loop_inv__HeadVar__2_2 = transform_hlds__loop_inv__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_4_p_0(
  MR_Word transform_hlds__loop_inv__PPId_5,
  MR_Word transform_hlds__loop_inv__Goal_6,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_9,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_10)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__PathCandidates0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_9, (MR_Integer) 1)));
    MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_11;
    MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_9, (MR_Integer) 0)));
    MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_9, (MR_Integer) 2)));
    MR_Word transform_hlds__loop_inv__V_15_15;
    MR_Word transform_hlds__loop_inv__V_17_17;
    MR_Word transform_hlds__loop_inv__V_16_16;

    {
      transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Goal_6, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_9, &transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_11);
    }
    transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_11, (MR_Integer) 0)));
    transform_hlds__loop_inv__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_11, (MR_Integer) 1)));
    transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_11, (MR_Integer) 2)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__V_15_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__PathCandidates0_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__loop_inv__V_17_17));
    }
  }
}

static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(
  MR_Word transform_hlds__loop_inv__PPId_5,
  MR_Word transform_hlds__loop_inv__Goal_6,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_6, (MR_Integer) 0)));
    MR_Word transform_hlds__loop_inv___GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_6, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__loop_inv__SubGoal_39 = (MR_Word) MR_body(((MR_Word) transform_hlds__loop_inv__GoalExpr_8), (MR_Integer) 0);

          {
            transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__SubGoal_39, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__loop_inv__Detism_80;
          MR_Word transform_hlds__loop_inv__CodeModel_81;
          MR_Word transform_hlds__loop_inv__InstMapDelta_82;
          MR_Word transform_hlds__loop_inv__InstMapDeltaPairs_83;
          MR_Word transform_hlds__loop_inv__ModuleInfo_84;
          MR_Word transform_hlds__loop_inv__V_85_85;
          MR_Word transform_hlds__loop_inv__V_89_89;
          MR_Word transform_hlds__loop_inv__V_90_90;

          {
            transform_hlds__loop_inv__Detism_80 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__loop_inv___GoalInfo_9);
          }
          {
            hlds__code_model__determinism_to_code_model_2_p_0(transform_hlds__loop_inv__Detism_80, &transform_hlds__loop_inv__CodeModel_81);
          }
          switch (transform_hlds__loop_inv__CodeModel_81) {
            default:
              transform_hlds__loop_inv__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              transform_hlds__loop_inv__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 1:
              transform_hlds__loop_inv__succeeded = MR_TRUE;
              break;
          }
          if (transform_hlds__loop_inv__succeeded)
            {
              {
                transform_hlds__loop_inv__V_85_85 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__loop_inv___GoalInfo_9);
              }
              transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_85_85 == (MR_Integer) 0);
              if (transform_hlds__loop_inv__succeeded)
                {
                  {
                    transform_hlds__loop_inv__InstMapDelta_82 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__loop_inv___GoalInfo_9);
                  }
                  {
                    hlds__instmap__instmap_delta_to_assoc_list_2_p_0(transform_hlds__loop_inv__InstMapDelta_82, &transform_hlds__loop_inv__InstMapDeltaPairs_83);
                  }
                  transform_hlds__loop_inv__ModuleInfo_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 0)));
                  transform_hlds__loop_inv__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 1)));
                  transform_hlds__loop_inv__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 2)));
                  {
                    transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__all_instmap_deltas_are_ground_2_p_0(transform_hlds__loop_inv__ModuleInfo_84, transform_hlds__loop_inv__InstMapDeltaPairs_83);
                  }
                }
            }
          if (transform_hlds__loop_inv__succeeded)
            {
              MR_Word transform_hlds__loop_inv__V_87_87;
              MR_Word transform_hlds__loop_inv__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 1)));
              MR_Word transform_hlds__loop_inv__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 0)));
              MR_Word transform_hlds__loop_inv__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 2)));
              MR_Word transform_hlds__loop_inv__V_93_93;
              MR_Word transform_hlds__loop_inv__V_95_95;
              MR_Word transform_hlds__loop_inv__V_94_94;

              {
                transform_hlds__loop_inv__V_87_87 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__loop_inv__V_88_88, ((MR_Box) (transform_hlds__loop_inv__Goal_6)));
              }
              transform_hlds__loop_inv__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 0)));
              transform_hlds__loop_inv__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 1)));
              transform_hlds__loop_inv__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 2)));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__V_93_93));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__V_87_87));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__loop_inv__V_95_95));
              }
            }
          else
            *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__loop_inv__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 0)));
          MR_Integer transform_hlds__loop_inv__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 1)));
          MR_Word transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 2)));
          MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 3)));
          MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 4)));
          MR_Word transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 5)));
          MR_Word transform_hlds__loop_inv__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PPId_5, (MR_Integer) 0)));
          MR_Integer transform_hlds__loop_inv__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PPId_5, (MR_Integer) 1)));

          {
            transform_hlds__loop_inv__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__loop_inv__PredId_10, transform_hlds__loop_inv__V_71_71);
          }
          if (transform_hlds__loop_inv__succeeded)
            transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__ProcId_11 == transform_hlds__loop_inv__V_72_72);
          if (transform_hlds__loop_inv__succeeded)
            {
              transform_hlds__loop_inv__add_recursive_call_3_p_0(transform_hlds__loop_inv__Goal_6, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
            }
          else
            {
              transform_hlds__loop_inv__invariant_goal_candidates_handle_primitive_goal_3_p_0(transform_hlds__loop_inv__Goal_6, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__loop_inv__Detism_80;
              MR_Word transform_hlds__loop_inv__CodeModel_81;
              MR_Word transform_hlds__loop_inv__InstMapDelta_82;
              MR_Word transform_hlds__loop_inv__InstMapDeltaPairs_83;
              MR_Word transform_hlds__loop_inv__ModuleInfo_84;
              MR_Word transform_hlds__loop_inv__V_85_85;
              MR_Word transform_hlds__loop_inv__V_89_89;
              MR_Word transform_hlds__loop_inv__V_90_90;

              {
                transform_hlds__loop_inv__Detism_80 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__loop_inv___GoalInfo_9);
              }
              {
                hlds__code_model__determinism_to_code_model_2_p_0(transform_hlds__loop_inv__Detism_80, &transform_hlds__loop_inv__CodeModel_81);
              }
              switch (transform_hlds__loop_inv__CodeModel_81) {
                default:
                  transform_hlds__loop_inv__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  transform_hlds__loop_inv__succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 1:
                  transform_hlds__loop_inv__succeeded = MR_TRUE;
                  break;
              }
              if (transform_hlds__loop_inv__succeeded)
                {
                  {
                    transform_hlds__loop_inv__V_85_85 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__loop_inv___GoalInfo_9);
                  }
                  transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_85_85 == (MR_Integer) 0);
                  if (transform_hlds__loop_inv__succeeded)
                    {
                      {
                        transform_hlds__loop_inv__InstMapDelta_82 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__loop_inv___GoalInfo_9);
                      }
                      {
                        hlds__instmap__instmap_delta_to_assoc_list_2_p_0(transform_hlds__loop_inv__InstMapDelta_82, &transform_hlds__loop_inv__InstMapDeltaPairs_83);
                      }
                      transform_hlds__loop_inv__ModuleInfo_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 0)));
                      transform_hlds__loop_inv__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 1)));
                      transform_hlds__loop_inv__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 2)));
                      {
                        transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__all_instmap_deltas_are_ground_2_p_0(transform_hlds__loop_inv__ModuleInfo_84, transform_hlds__loop_inv__InstMapDeltaPairs_83);
                      }
                    }
                }
              if (transform_hlds__loop_inv__succeeded)
                {
                  MR_Word transform_hlds__loop_inv__V_87_87;
                  MR_Word transform_hlds__loop_inv__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 1)));
                  MR_Word transform_hlds__loop_inv__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 0)));
                  MR_Word transform_hlds__loop_inv__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 2)));
                  MR_Word transform_hlds__loop_inv__V_93_93;
                  MR_Word transform_hlds__loop_inv__V_95_95;
                  MR_Word transform_hlds__loop_inv__V_94_94;

                  {
                    transform_hlds__loop_inv__V_87_87 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__loop_inv__V_88_88, ((MR_Box) (transform_hlds__loop_inv__Goal_6)));
                  }
                  transform_hlds__loop_inv__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 0)));
                  transform_hlds__loop_inv__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 1)));
                  transform_hlds__loop_inv__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 2)));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__V_93_93));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__V_87_87));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__loop_inv__V_95_95));
                  }
                }
              else
                *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__loop_inv__ConjType_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 1)));
              MR_Word transform_hlds__loop_inv__Conjuncts_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 2)));

              switch (transform_hlds__loop_inv__ConjType_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    transform_hlds__loop_inv__invariant_goal_candidates_in_parallel_conj_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Conjuncts_34, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    transform_hlds__loop_inv__invariant_goal_candidates_in_plain_conj_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Conjuncts_34, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__loop_inv__Disjuncts_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 1)));

              {
                transform_hlds__loop_inv__invariant_goal_candidates_in_disj_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Disjuncts_35, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__loop_inv__Cases_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 3)));
              MR_Word transform_hlds__loop_inv__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 1)));
              MR_Word transform_hlds__loop_inv__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 2)));

              {
                transform_hlds__loop_inv__invariant_goal_candidates_in_switch_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Cases_38, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__loop_inv__SubGoal_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 2)));
              MR_Word transform_hlds__loop_inv___Reason_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 1)));

              {
                transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__SubGoal_65, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__loop_inv__Cond_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 2)));
              MR_Word transform_hlds__loop_inv__Then_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 3)));
              MR_Word transform_hlds__loop_inv__Else_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 4)));
              MR_Word transform_hlds__loop_inv__PathCandidates0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 1)));
              MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_52_52;
              MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_53_53;
              MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_54_54;
              MR_Word transform_hlds__loop_inv___XVs_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 1)));
              MR_Word transform_hlds__loop_inv__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 0)));
              MR_Word transform_hlds__loop_inv__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 2)));
              MR_Word transform_hlds__loop_inv__V_68_68;
              MR_Word transform_hlds__loop_inv__V_70_70;
              MR_Word transform_hlds__loop_inv__V_69_69;

              {
                transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Cond_42, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, &transform_hlds__loop_inv__STATE_VARIABLE_IGCs_52_52);
              }
              {
                transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Then_43, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_52_52, &transform_hlds__loop_inv__STATE_VARIABLE_IGCs_53_53);
              }
              transform_hlds__loop_inv__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_53_53, (MR_Integer) 0)));
              transform_hlds__loop_inv__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_53_53, (MR_Integer) 1)));
              transform_hlds__loop_inv__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_53_53, (MR_Integer) 2)));
              {
                transform_hlds__loop_inv__STATE_VARIABLE_IGCs_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_54_54, 0) = ((MR_Box) (transform_hlds__loop_inv__V_68_68));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_54_54, 1) = ((MR_Box) (transform_hlds__loop_inv__PathCandidates0_45));
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_54_54, 2) = ((MR_Box) (transform_hlds__loop_inv__V_70_70));
              }
              {
                transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Else_44, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_54_54, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "predicate \140transform_hlds.loop_inv.invariant_goal_candidates_in_goal\'/4", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_4(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv3_HeadVar__2_28;

    {
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__IntroducedFrom__pred__inv_args__501__1_2_p_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), &transform_hlds__loop_inv__conv3_HeadVar__2_28);
    }
    if (transform_hlds__loop_inv__succeeded)
      {
        *transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv3_HeadVar__2_28));
        transform_hlds__loop_inv__succeeded = MR_TRUE;
      }
    return transform_hlds__loop_inv__succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_3(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__loop_inv__wrapper_arg_3;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv1_HeadVar__3_3;

    {
      transform_hlds__loop_inv__conv1_HeadVar__3_3 = transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
    transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv1_HeadVar__3_3));
    return transform_hlds__loop_inv__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_2(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__loop_inv__wrapper_arg_3;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__4_4;

    {
      transform_hlds__loop_inv__conv0_HeadVar__4_4 = transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
    transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__4_4));
    return transform_hlds__loop_inv__wrapper_arg_3;
  }
}

static MR_bool MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_1(
  MR_Box transform_hlds__loop_inv__closure_arg,
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;

    {
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__common_goal_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
    return transform_hlds__loop_inv__succeeded;
  }
}

void MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0(
  MR_Word transform_hlds__loop_inv__PredProcId_7,
  MR_Word transform_hlds__loop_inv__PredInfo_8,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_0_34,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_35,
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36,
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_37)
{
  {
    MR_bool transform_hlds__loop_inv__succeeded;
    MR_Word transform_hlds__loop_inv__Body_11;
    MR_Word transform_hlds__loop_inv__HeadVars_12;
    MR_Word transform_hlds__loop_inv__InvArgs_18;
    MR_Word transform_hlds__loop_inv__InvGoals_23;
    MR_Word transform_hlds__loop_inv__InvVars_24;
    MR_Word transform_hlds__loop_inv__TypeInfo_43_43;
    MR_Word transform_hlds__loop_inv__TypeCtorInfo_44_44;
    MR_Word transform_hlds__loop_inv__TypeInfo_7_50;
    MR_Word transform_hlds__loop_inv__TypeCtorInfo_19_64;
    MR_Word transform_hlds__loop_inv__TypeInfo_20_65;
    MR_Word transform_hlds__loop_inv__TypeInfo_16_81;
    MR_Word transform_hlds__loop_inv__TypeCtorInfo_17_82;
    MR_Word transform_hlds__loop_inv__TypeInfo_18_83;
    MR_Word transform_hlds__loop_inv__TypeCtorInfo_22_87;
    MR_Word transform_hlds__loop_inv__TypeInfo_23_88;
    MR_Word transform_hlds__loop_inv__HeadVarModes_13;
    MR_Word transform_hlds__loop_inv__UniquelyUsedVars_14;
    MR_Word transform_hlds__loop_inv__InvGoals0_15;
    MR_Word transform_hlds__loop_inv__RecCalls_16;
    MR_Word transform_hlds__loop_inv__InvArgs0_17;
    MR_Word transform_hlds__loop_inv__InvGoals1_19;
    MR_Word transform_hlds__loop_inv__InvVars1_20;
    MR_Word transform_hlds__loop_inv__DontHoistGoals_21;
    MR_Word transform_hlds__loop_inv__DontHoistVars_22;
    MR_Word transform_hlds__loop_inv__V_46_46;
    MR_Word transform_hlds__loop_inv__V_49_49;
    MR_Word transform_hlds__loop_inv__GoalCandidates0_56;
    MR_Word transform_hlds__loop_inv__GoalCandidates_57;
    MR_Word transform_hlds__loop_inv__RecCalls_60;
    MR_Word transform_hlds__loop_inv__CandidateInvGoalsList_61;
    MR_Word transform_hlds__loop_inv__V_62_62;
    MR_Word transform_hlds__loop_inv__V_63_63;
    MR_Word transform_hlds__loop_inv__MaybeInvArgs0_76;
    MR_Word transform_hlds__loop_inv__MaybeInvArgs_77;
    MR_Word transform_hlds__loop_inv__V_78_78;
    MR_Word transform_hlds__loop_inv__V_79_79;
    MR_Word transform_hlds__loop_inv__V_80_80;
    MR_Word transform_hlds__loop_inv__V_58_58;
    MR_Word transform_hlds__loop_inv__V_59_59;
    MR_Box transform_hlds__loop_inv__conv2_MaybeInvArgs_77;
    MR_Word transform_hlds__loop_inv__V_25_25;
    MR_Word transform_hlds__loop_inv__V_26_26;

    {
      hlds__hlds_pred__pred_info_get_purity_2_p_0(transform_hlds__loop_inv__PredInfo_8, &transform_hlds__loop_inv__V_46_46);
    }
    transform_hlds__loop_inv__succeeded = ((MR_Integer) 0 == transform_hlds__loop_inv__V_46_46);
    if (transform_hlds__loop_inv__succeeded)
      {
        {
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_0_34, &transform_hlds__loop_inv__Body_11);
        }
        {
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_0_34, &transform_hlds__loop_inv__HeadVars_12);
        }
        {
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_0_34, &transform_hlds__loop_inv__HeadVarModes_13);
        }
        transform_hlds__loop_inv__TypeInfo_7_50 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
        {
          transform_hlds__loop_inv__V_49_49 = transform_hlds__loop_inv__used_vars_2_f_0(transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36, transform_hlds__loop_inv__Body_11);
        }
        {
          transform_hlds__loop_inv__UniquelyUsedVars_14 = mercury__list__sort_and_remove_dups_1_f_0(transform_hlds__loop_inv__TypeInfo_7_50, transform_hlds__loop_inv__V_49_49);
        }
        transform_hlds__loop_inv__TypeCtorInfo_19_64 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
        {
          transform_hlds__loop_inv__V_62_62 = mercury__cord__empty_0_f_0(transform_hlds__loop_inv__TypeCtorInfo_19_64);
        }
        transform_hlds__loop_inv__V_63_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          transform_hlds__loop_inv__GoalCandidates0_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GoalCandidates0_56, 0) = ((MR_Box) (transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36));
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GoalCandidates0_56, 1) = ((MR_Box) (transform_hlds__loop_inv__V_62_62));
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GoalCandidates0_56, 2) = ((MR_Box) (transform_hlds__loop_inv__V_63_63));
        }
        {
          transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PredProcId_7, transform_hlds__loop_inv__Body_11, transform_hlds__loop_inv__GoalCandidates0_56, &transform_hlds__loop_inv__GoalCandidates_57);
        }
        transform_hlds__loop_inv__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GoalCandidates_57, (MR_Integer) 0)));
        transform_hlds__loop_inv__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GoalCandidates_57, (MR_Integer) 1)));
        transform_hlds__loop_inv__RecCalls_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GoalCandidates_57, (MR_Integer) 2)));
        transform_hlds__loop_inv__TypeInfo_20_65 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[1];
        {
          mercury__assoc_list__keys_and_values_3_p_0(transform_hlds__loop_inv__TypeCtorInfo_19_64, transform_hlds__loop_inv__TypeInfo_20_65, transform_hlds__loop_inv__RecCalls_60, &transform_hlds__loop_inv__RecCalls_16, &transform_hlds__loop_inv__CandidateInvGoalsList_61);
        }
        if ((transform_hlds__loop_inv__CandidateInvGoalsList_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          transform_hlds__loop_inv__InvGoals0_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word transform_hlds__loop_inv__Goals_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__CandidateInvGoalsList_61, (MR_Integer) 0)));
            MR_Word transform_hlds__loop_inv__Goalss_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__CandidateInvGoalsList_61, (MR_Integer) 1)));
            MR_Word transform_hlds__loop_inv__V_68_68;

            {
              transform_hlds__loop_inv__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_68_68, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_68_68, 1) = ((MR_Box) (transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_1));
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_68_68, 3) = ((MR_Box) (transform_hlds__loop_inv__Goalss_67));
            }
            {
              transform_hlds__loop_inv__InvGoals0_15 = mercury__list__filter_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__loop_inv__V_68_68, transform_hlds__loop_inv__Goals_66);
            }
          }
        transform_hlds__loop_inv__TypeInfo_16_81 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
        transform_hlds__loop_inv__TypeCtorInfo_17_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
        transform_hlds__loop_inv__TypeInfo_18_83 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[2];
        {
          transform_hlds__loop_inv__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_78_78, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_78_78, 1) = ((MR_Box) (transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_2));
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_78_78, 3) = ((MR_Box) (transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36));
        }
        {
          transform_hlds__loop_inv__MaybeInvArgs0_76 = mercury__list__map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_16_81, transform_hlds__loop_inv__TypeCtorInfo_17_82, transform_hlds__loop_inv__TypeInfo_18_83, transform_hlds__loop_inv__V_78_78, transform_hlds__loop_inv__HeadVars_12, transform_hlds__loop_inv__HeadVarModes_13);
        }
        transform_hlds__loop_inv__TypeCtorInfo_22_87 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
        transform_hlds__loop_inv__TypeInfo_23_88 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[3];
        transform_hlds__loop_inv__V_79_79 = (MR_Word) &transform_hlds__loop_inv_scalar_common_2[1];
        {
          transform_hlds__loop_inv__conv2_MaybeInvArgs_77 = mercury__list__foldl_3_f_0(transform_hlds__loop_inv__TypeCtorInfo_22_87, transform_hlds__loop_inv__TypeInfo_23_88, transform_hlds__loop_inv__V_79_79, transform_hlds__loop_inv__RecCalls_16, ((MR_Box) (transform_hlds__loop_inv__MaybeInvArgs0_76)));
        }
        transform_hlds__loop_inv__MaybeInvArgs_77 = ((MR_Word) transform_hlds__loop_inv__conv2_MaybeInvArgs_77);
        transform_hlds__loop_inv__V_80_80 = (MR_Word) &transform_hlds__loop_inv_scalar_common_2[2];
        {
          mercury__list__filter_map_3_p_0(transform_hlds__loop_inv__TypeInfo_18_83, transform_hlds__loop_inv__TypeInfo_16_81, transform_hlds__loop_inv__V_80_80, transform_hlds__loop_inv__MaybeInvArgs_77, &transform_hlds__loop_inv__InvArgs0_17);
        }
        transform_hlds__loop_inv__TypeInfo_43_43 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
        {
          mercury__list__delete_elems_3_p_0(transform_hlds__loop_inv__TypeInfo_43_43, transform_hlds__loop_inv__InvArgs0_17, transform_hlds__loop_inv__UniquelyUsedVars_14, &transform_hlds__loop_inv__InvArgs_18);
        }
        {
          transform_hlds__loop_inv__inv_goals_vars_6_p_0(transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36, transform_hlds__loop_inv__UniquelyUsedVars_14, transform_hlds__loop_inv__InvGoals0_15, &transform_hlds__loop_inv__InvGoals1_19, transform_hlds__loop_inv__InvArgs_18, &transform_hlds__loop_inv__InvVars1_20);
        }
        {
          transform_hlds__loop_inv__do_not_hoist_4_p_0(transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36, transform_hlds__loop_inv__InvGoals1_19, &transform_hlds__loop_inv__DontHoistGoals_21, &transform_hlds__loop_inv__DontHoistVars_22);
        }
        transform_hlds__loop_inv__TypeCtorInfo_44_44 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
        {
          mercury__list__delete_elems_3_p_0(transform_hlds__loop_inv__TypeCtorInfo_44_44, transform_hlds__loop_inv__InvGoals1_19, transform_hlds__loop_inv__DontHoistGoals_21, &transform_hlds__loop_inv__InvGoals_23);
        }
        {
          mercury__list__delete_elems_3_p_0(transform_hlds__loop_inv__TypeInfo_43_43, transform_hlds__loop_inv__InvVars1_20, transform_hlds__loop_inv__DontHoistVars_22, &transform_hlds__loop_inv__InvVars_24);
        }
        transform_hlds__loop_inv__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__InvGoals_23)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__loop_inv__succeeded)
          {
            transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__InvGoals_23, (MR_Integer) 0)));
            transform_hlds__loop_inv__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__InvGoals_23, (MR_Integer) 1)));
          }
      }
    if (transform_hlds__loop_inv__succeeded)
      {
        MR_Word transform_hlds__loop_inv__ComputedInvVars_27;
        MR_Word transform_hlds__loop_inv__InitialInstMap_28;
        MR_Word transform_hlds__loop_inv__InitialAuxInstMap_29;
        MR_Word transform_hlds__loop_inv__AuxPredProcId_30;
        MR_Word transform_hlds__loop_inv__Replacement_31;
        MR_Word transform_hlds__loop_inv__AuxPredInfo_32;
        MR_Word transform_hlds__loop_inv__AuxProcInfo_33;
        MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_39_39;
        MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_40_40;

        {
          mercury__list__delete_elems_3_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__InvVars_24, transform_hlds__loop_inv__InvArgs_18, &transform_hlds__loop_inv__ComputedInvVars_27);
        }
        {
          hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_0_34, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36, &transform_hlds__loop_inv__InitialInstMap_28);
        }
        {
          transform_hlds__loop_inv__InitialAuxInstMap_29 = transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0(transform_hlds__loop_inv__InvGoals_23, transform_hlds__loop_inv__InitialInstMap_28);
        }
        {
          transform_hlds__loop_inv__create_aux_pred_10_p_0(transform_hlds__loop_inv__PredProcId_7, transform_hlds__loop_inv__HeadVars_12, transform_hlds__loop_inv__ComputedInvVars_27, transform_hlds__loop_inv__InitialAuxInstMap_29, &transform_hlds__loop_inv__AuxPredProcId_30, &transform_hlds__loop_inv__Replacement_31, &transform_hlds__loop_inv__AuxPredInfo_32, &transform_hlds__loop_inv__AuxProcInfo_33, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36, &transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_39_39);
        }
        {
          transform_hlds__loop_inv__gen_aux_proc_9_p_0(transform_hlds__loop_inv__InvGoals_23, transform_hlds__loop_inv__PredProcId_7, transform_hlds__loop_inv__AuxPredProcId_30, transform_hlds__loop_inv__Replacement_31, transform_hlds__loop_inv__Body_11, transform_hlds__loop_inv__AuxPredInfo_32, transform_hlds__loop_inv__AuxProcInfo_33, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_39_39, &transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_40_40);
        }
        {
          transform_hlds__loop_inv__gen_out_proc_8_p_0(transform_hlds__loop_inv__PredProcId_7, transform_hlds__loop_inv__PredInfo_8, transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_0_34, transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_35, transform_hlds__loop_inv__Replacement_31, transform_hlds__loop_inv__Body_11, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_40_40, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_37);
        }
      }
    else
      {
        *transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_37 = transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36;
        *transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_35 = transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_0_34;
      }
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

/* :- end_module transform_hlds.loop_inv. */
