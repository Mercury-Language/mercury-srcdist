/*
** Automatically generated from `loop_inv.m'
** by the Mercury compiler,
** version 2015-10-27
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
#include "check_hlds.inst_match.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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



#line 936 "loop_inv.m"
struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s {
#line 936 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__Goal_5;
#line 942 "loop_inv.m"
  MR_bool transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded;
#line 940 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__V_7_7;
#line 588 "loop_inv.m"
  jmp_buf transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__commit_0;
#line 588 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__InvariantGoal_13;
#line 588 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15;
#line 588 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17;
#line 589 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__conv0_InvariantGoal_13;
#line 936 "loop_inv.m"
};

#line 614 "loop_inv.m"
struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s {
#line 614 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7;
#line 629 "loop_inv.m"
  MR_bool transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded;
#line 677 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Modes_73;
#line 686 "loop_inv.m"
  jmp_buf transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__commit_0;
#line 686 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__InitialInst_83;
#line 686 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__FinalInst_84;
#line 686 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Mode_85;
#line 686 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__conv0_Mode_85;
#line 614 "loop_inv.m"
};

#line 558 "loop_inv.m"
struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s {
#line 558 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUVs_9;
#line 558 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10;
#line 558 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IGs0_11;
#line 558 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IVs0_13;
#line 570 "loop_inv.m"
  MR_bool transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded;
#line 564 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Inputs_48;
#line 588 "loop_inv.m"
  jmp_buf transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_0;
#line 588 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__InvariantGoal_17;
#line 588 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19;
#line 588 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21;
#line 589 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv0_InvariantGoal_17;
#line 579 "loop_inv.m"
  jmp_buf transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_1;
#line 579 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeCtorInfo_9_44;
#line 579 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__NonLocals_41;
#line 579 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUV_42;
#line 581 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv1_UUV_42;
#line 599 "loop_inv.m"
  jmp_buf transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_2;
#line 599 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeInfo_9_50;
#line 599 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__V_49;
#line 600 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv2_V_49;
#line 558 "loop_inv.m"
};

#line 461 "loop_inv.m"
struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s {
#line 461 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goalss_3;
#line 461 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goal_4;
#line 464 "loop_inv.m"
  MR_bool transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded;
#line 464 "loop_inv.m"
  jmp_buf transform_hlds__loop_inv__common_goal_2_p_0_env_0__commit_0;
#line 464 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__common_goal_2_p_0_env_0__Gs_5;
#line 465 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__common_goal_2_p_0_env_0__conv0_Gs_5;
#line 468 "loop_inv.m"
  jmp_buf transform_hlds__loop_inv__common_goal_2_p_0_env_0__commit_1;
#line 468 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__common_goal_2_p_0_env_0__G_6;
#line 468 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9;
#line 468 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11;
#line 468 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__common_goal_2_p_0_env_0__conv1_G_6;
#line 461 "loop_inv.m"
};


#line 263 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 266 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 269 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 272 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 275 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 278 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 281 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 284 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 287 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 290 "transform_hlds.loop_inv.c"
static const MR_PseudoTypeInfo transform_hlds__loop_inv__transform_hlds__loop_inv__field_types_gen_aux_proc_info_0_0[4];

#line 293 "transform_hlds.loop_inv.c"
static const MR_ConstString transform_hlds__loop_inv__transform_hlds__loop_inv__field_names_gen_aux_proc_info_0_0[4];

#line 296 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDesc transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_gen_aux_proc_info_0_0;

#line 299 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_gen_aux_proc_info_0_0[1];

#line 302 "transform_hlds.loop_inv.c"
static const MR_DuPtagLayout transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_gen_aux_proc_info_0[1];

#line 305 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_name_ordered_gen_aux_proc_info_0[1];

#line 308 "transform_hlds.loop_inv.c"
static const MR_Integer transform_hlds__loop_inv__transform_hlds__loop_inv__functor_number_map_gen_aux_proc_info_0[1];

#line 311 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 314 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__loop_inv__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 317 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 320 "transform_hlds.loop_inv.c"
static const MR_PseudoTypeInfo transform_hlds__loop_inv__transform_hlds__loop_inv__field_types_igc_info_0_0[3];

#line 323 "transform_hlds.loop_inv.c"
static const MR_ConstString transform_hlds__loop_inv__transform_hlds__loop_inv__field_names_igc_info_0_0[3];

#line 326 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDesc transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_igc_info_0_0;

#line 329 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_igc_info_0_0[1];

#line 332 "transform_hlds.loop_inv.c"
static const MR_DuPtagLayout transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_igc_info_0[1];

#line 335 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_name_ordered_igc_info_0[1];

#line 338 "transform_hlds.loop_inv.c"
static const MR_Integer transform_hlds__loop_inv__transform_hlds__loop_inv__functor_number_map_igc_info_0[1];

#line 341 "transform_hlds.loop_inv.c"
static const MR_VA_TypeInfo_Struct2 transform_hlds__loop_inv____vti_tuple_2hlds__hlds_module__type_ctor_info_module_info_0hlds__instmap__type_ctor_info_instmap_0;

#line 344 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0_10001(
#line 347 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 349 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

#line 352 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0_10001(
#line 355 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 357 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 359 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3);

#line 362 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____igc_info_0_0_10001(
#line 365 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 367 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

#line 370 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____igc_info_0_0_10001(
#line 373 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 375 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 377 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3);

#line 380 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____inst_info_0_0_10001(
#line 383 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 385 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

#line 388 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____inst_info_0_0_10001(
#line 391 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 393 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 395 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3);

#line 398 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____rec_call_0_0_10001(
#line 401 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 403 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

#line 406 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____rec_call_0_0_10001(
#line 409 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 411 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 413 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3);

#line 1078 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
#line 1078 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 1078 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 1078 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__3_3);

#line 1333 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__rhs_modes__1333__1_1_f_0(
#line 1333 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__LambdaHeadVar__1_9);

#line 1164 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__case_goals__1164__1_1_f_0(
#line 1164 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__LambdaHeadVar__1_8);

#line 743 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__compute_initial_aux_instmap__743__1_2_f_0(
#line 743 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__LambdaHeadVar__1_12,
#line 743 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__LambdaHeadVar__2_13);

#line 498 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__pred__inv_args__498__1_2_p_0(
#line 498 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_27,
#line 498 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__2_28);

#line 260 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv____Compare____rec_call_0_0(
#line 260 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
#line 260 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 260 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__3_3);

#line 260 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____rec_call_0_0(
#line 260 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 260 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2);

#line 697 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv____Compare____inst_info_0_0(
#line 697 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
#line 697 "loop_inv.m"
  MR_Tuple transform_hlds__loop_inv__HeadVar__2_2,
#line 697 "loop_inv.m"
  MR_Tuple transform_hlds__loop_inv__HeadVar__3_3);

#line 697 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____inst_info_0_0(
#line 697 "loop_inv.m"
  MR_Tuple transform_hlds__loop_inv__HeadVar__1_1,
#line 697 "loop_inv.m"
  MR_Tuple transform_hlds__loop_inv__HeadVar__2_2);

#line 267 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv____Compare____igc_info_0_0(
#line 267 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
#line 267 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 267 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__3_3);

#line 267 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____igc_info_0_0(
#line 267 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 267 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2);

#line 835 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0(
#line 835 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
#line 835 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 835 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__3_3);

#line 835 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0(
#line 835 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 835 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2);

#line 1333 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__rhs_modes_1_f_0_1(
#line 1333 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1333 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1330 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__rhs_modes_1_f_0(
#line 1330 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UniModes_3);

#line 1322 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__output_arg_4_p_0(
#line 1322 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 1322 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__X_6,
#line 1322 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__M_7,
#line 1322 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__X_4);

#line 1313 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__input_arg_4_p_0(
#line 1313 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 1313 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__X_6,
#line 1313 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__M_7,
#line 1313 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__X_4);

#line 1284 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_5(
#line 1284 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1284 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1284 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1284 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1264 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_4(
#line 1264 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1264 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1264 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1264 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1268 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_3(
#line 1268 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1268 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1268 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1268 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1273 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_2(
#line 1273 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1273 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1272 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_1(
#line 1272 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1272 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1272 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1272 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1258 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0(
#line 1258 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
#line 1258 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5);

#line 1217 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_6(
#line 1217 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1217 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1217 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1217 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1212 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_5(
#line 1212 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1212 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1212 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1212 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1194 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_4(
#line 1194 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1194 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1194 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1194 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1199 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_3(
#line 1199 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1199 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1199 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1199 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1205 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_2(
#line 1205 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1205 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1204 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_1(
#line 1204 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1204 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1204 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1204 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1188 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0(
#line 1188 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
#line 1188 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5);

#line 1177 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__argmodes_3_f_0(
#line 1177 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 1177 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredId_6,
#line 1177 "loop_inv.m"
  MR_Integer transform_hlds__loop_inv__ProcId_7);

#line 1168 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__uniquely_used_args_4_p_0(
#line 1168 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 1168 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__X_6,
#line 1168 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__M_7,
#line 1168 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__X_4);

#line 1164 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__case_goals_1_f_0_1(
#line 1164 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1164 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1161 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__case_goals_1_f_0(
#line 1161 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Cases_3);

#line 1142 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_8(
#line 1142 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1142 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1109 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_7(
#line 1109 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1109 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1109 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1109 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1113 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_6(
#line 1113 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1113 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1113 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1113 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1139 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_5(
#line 1139 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1139 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1136 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_4(
#line 1136 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1136 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1128 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_3(
#line 1128 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1128 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1126 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_2(
#line 1126 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1126 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1125 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_1(
#line 1125 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1125 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1125 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1125 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1103 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0(
#line 1103 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
#line 1103 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5);

#line 1052 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_call_3_p_0(
#line 1052 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Replacement_4,
#line 1052 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__CallGoal_5,
#line 1052 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxCallGoal_6);

#line 1042 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_case_4_p_0(
#line 1042 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_5,
#line 1042 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Replacement_6,
#line 1042 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Case_7,
#line 1042 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxCase_8);

#line 1015 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_3(
#line 1015 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1015 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1015 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2);

#line 1010 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_2(
#line 1010 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1010 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1010 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2);

#line 1005 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_1(
#line 1005 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1005 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1005 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2);

#line 985 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(
#line 985 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_5,
#line 985 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Replacement_6,
#line 985 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_7,
#line 985 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxGoal_8);

#line 951 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_8_p_0(
#line 951 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredProcId_9,
#line 951 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredInfo0_10,
#line 951 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ProcInfo0_11,
#line 951 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__ProcInfo_12,
#line 951 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Replacement_13,
#line 951 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Body0_14,
#line 951 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_25,
#line 951 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_26);

#line 588 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_1(
#line 588 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 589 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_3(
#line 589 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 588 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_2(
#line 588 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 588 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_4(
#line 588 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 936 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0(
#line 936 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Info_4,
#line 936 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5,
#line 936 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxGoal_6);

#line 927 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_case_3_p_0(
#line 927 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Info_4,
#line 927 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Case_5,
#line 927 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxCase_6);

#line 900 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_3(
#line 900 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 900 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 900 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2);

#line 895 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_2(
#line 895 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 895 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 895 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2);

#line 890 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_1(
#line 890 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 890 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 890 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2);

#line 870 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(
#line 870 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Info_4,
#line 870 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5,
#line 870 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxGoal_6);

#line 846 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_9_p_0(
#line 846 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InvGoals_10,
#line 846 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredProcId_11,
#line 846 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__AuxPredProcId_12,
#line 846 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Replacement_13,
#line 846 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Body_14,
#line 846 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__AuxPredInfo_15,
#line 846 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_0_22,
#line 846 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_23,
#line 846 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_24);

#line 751 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__create_aux_pred_10_p_0(
#line 751 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredProcId_11,
#line 751 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVars_12,
#line 751 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ComputedInvArgs_13,
#line 751 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InitialAuxInstMap_14,
#line 751 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxPredProcId_15,
#line 751 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__Replacement_16,
#line 751 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxPredInfo_17,
#line 751 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxProcInfo_18,
#line 751 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo0_19,
#line 751 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__ModuleInfo_20);

#line 743 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0_1(
#line 743 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 743 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 743 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

#line 740 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0(
#line 740 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Gs_4,
#line 740 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__IM_5);

#line 725 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__add_output_4_p_0(
#line 725 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UniquelyUsedVars_5,
#line 725 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__X_6,
#line 725 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_8,
#line 725 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_InvVars_9);

#line 723 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__add_outputs_5_p_0_1(
#line 723 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 723 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 723 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 723 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 719 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__add_outputs_5_p_0(
#line 719 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_6,
#line 719 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UUVs_7,
#line 719 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_8,
#line 719 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_10,
#line 719 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_InvVars_11);

#line 686 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_1(
#line 686 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 686 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_3(
#line 686 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 686 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_2(
#line 686 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 686 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_4(
#line 686 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 614 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0(
#line 614 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_7,
#line 614 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_8,
#line 614 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_DHGs_0_11,
#line 614 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_DHGs_12,
#line 614 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_DHVs_0_13,
#line 614 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_DHVs_14);

#line 611 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_4_p_0_1(
#line 611 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 611 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 611 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 611 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3,
#line 611 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_4,
#line 611 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_5);

#line 607 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_4_p_0(
#line 607 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 607 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InvGoals_6,
#line 607 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__DontHoistGoals_7,
#line 607 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__DontHoistVars_8);

#line 723 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_13(
#line 723 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 723 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 723 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 723 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 588 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_1(
#line 588 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 589 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_3(
#line 589 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 588 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_2(
#line 588 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 588 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_4(
#line 588 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 579 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_5(
#line 579 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 581 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_7(
#line 581 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 579 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_6(
#line 579 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 579 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_8(
#line 579 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 599 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_9(
#line 599 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 600 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_11(
#line 600 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 599 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_10(
#line 599 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 599 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_12(
#line 599 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 558 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0(
#line 558 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_8,
#line 558 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UUVs_9,
#line 558 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_10,
#line 558 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__IGs0_11,
#line 558 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__IGs_12,
#line 558 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__IVs0_13,
#line 558 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__IVs_14);

#line 553 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_6_p_0_1(
#line 553 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 553 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 553 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 553 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3,
#line 553 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_4,
#line 553 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_5);

#line 547 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_6_p_0(
#line 547 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_7,
#line 547 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UniquelyUsedVars_8,
#line 547 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InvGoals0_9,
#line 547 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__InvGoals_10,
#line 547 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InvVars0_11,
#line 547 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__InvVars_12);

#line 524 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_2_f_0(
#line 524 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 524 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Y_2);

#line 518 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0_1(
#line 518 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 518 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 518 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

#line 513 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0(
#line 513 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 513 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__MaybeInvArgs_6);

#line 505 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_f_0(
#line 505 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 505 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Arg_6,
#line 505 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Mode_7);

#line 464 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_1(
#line 464 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 465 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_3(
#line 465 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 468 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_4(
#line 468 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 468 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_6(
#line 468 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 468 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_5(
#line 468 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 468 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_7(
#line 468 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 464 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_2(
#line 464 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 464 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_8(
#line 464 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 461 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0(
#line 461 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goalss_3,
#line 461 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_4);

#line 443 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__all_instmap_deltas_are_ground_2_p_0(
#line 443 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_1,
#line 443 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2);

#line 416 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_handle_primitive_goal_3_p_0(
#line 416 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_4,
#line 416 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13,
#line 416 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_14);

#line 403 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__add_recursive_call_3_p_0(
#line 403 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_4,
#line 403 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7,
#line 403 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_8);

#line 392 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_switch_4_p_0(
#line 392 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_1,
#line 392 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 392 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
#line 392 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4);

#line 384 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_disj_4_p_0(
#line 384 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_1,
#line 384 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 384 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
#line 384 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4);

#line 376 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_parallel_conj_4_p_0(
#line 376 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_1,
#line 376 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 376 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
#line 376 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4);

#line 368 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_plain_conj_4_p_0(
#line 368 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_1,
#line 368 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 368 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
#line 368 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4);

#line 358 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_4_p_0(
#line 358 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_5,
#line 358 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_6,
#line 358 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_9,
#line 358 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_10);

#line 302 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(
#line 302 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_5,
#line 302 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_6,
#line 302 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47,
#line 302 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);

#line 498 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_4(
#line 498 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 498 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 498 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2);

#line 497 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_3(
#line 497 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 497 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 497 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

#line 494 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_2(
#line 494 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 494 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 494 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

#line 457 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_1(
#line 457 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 457 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);


static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_2[11][3];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_3[1][4];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_4[5][5];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_5[5][7];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_6[6][6];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_7[1][10];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_8[1][9];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_9[1][1];




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

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_2[11][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_6[2])),
    ((MR_Box) (transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__loop_inv__case_goals_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[4])),
    ((MR_Box) (transform_hlds__loop_inv__rhs_modes_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
};

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_4[5][5] = {
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
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_5[5][7] = {
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

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_6[6][6] = {
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

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_7[1][10] = {
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

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_8[1][9] = {
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

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_9[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1865 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1873 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1881 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1889 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1897 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1905 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1913 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__loop_inv__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1921 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1929 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1937 "transform_hlds.loop_inv.c"
static const MR_PseudoTypeInfo transform_hlds__loop_inv__transform_hlds__loop_inv__field_types_gen_aux_proc_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1945 "transform_hlds.loop_inv.c"
static const MR_ConstString transform_hlds__loop_inv__transform_hlds__loop_inv__field_names_gen_aux_proc_info_0_0[4] = {
  (MR_String) "gapi_module_info",
  (MR_String) "gapi_inv_goals",
  (MR_String) "gapi_pred_proc_id",
  (MR_String) "gapi_replament_goal"
};

#line 1953 "transform_hlds.loop_inv.c"
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
  NULL
};

#line 1968 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_gen_aux_proc_info_0_0[1] = {
  &transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_gen_aux_proc_info_0_0
};

#line 1973 "transform_hlds.loop_inv.c"
static const MR_DuPtagLayout transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_gen_aux_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_gen_aux_proc_info_0_0
  }
};

#line 1982 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_name_ordered_gen_aux_proc_info_0[1] = {
  &transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_gen_aux_proc_info_0_0
};

#line 1987 "transform_hlds.loop_inv.c"
static const MR_Integer transform_hlds__loop_inv__transform_hlds__loop_inv__functor_number_map_gen_aux_proc_info_0[1] = {
  (MR_Integer) 0
};

#line 1992 "transform_hlds.loop_inv.c"
const MR_TypeCtorInfo_Struct transform_hlds__loop_inv__transform_hlds__loop_inv__type_ctor_info_gen_aux_proc_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 2009 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 2017 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__loop_inv__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_TypeInfo) &transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 2026 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__loop_inv__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 2034 "transform_hlds.loop_inv.c"
static const MR_PseudoTypeInfo transform_hlds__loop_inv__transform_hlds__loop_inv__field_types_igc_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__loop_inv__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__loop_inv__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 2041 "transform_hlds.loop_inv.c"
static const MR_ConstString transform_hlds__loop_inv__transform_hlds__loop_inv__field_names_igc_info_0_0[3] = {
  (MR_String) "igc_module_info",
  (MR_String) "igc_path_candidates",
  (MR_String) "igc_rec_calls"
};

#line 2048 "transform_hlds.loop_inv.c"
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
  NULL
};

#line 2063 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_igc_info_0_0[1] = {
  &transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_igc_info_0_0
};

#line 2068 "transform_hlds.loop_inv.c"
static const MR_DuPtagLayout transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_igc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_igc_info_0_0
  }
};

#line 2077 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_name_ordered_igc_info_0[1] = {
  &transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_igc_info_0_0
};

#line 2082 "transform_hlds.loop_inv.c"
static const MR_Integer transform_hlds__loop_inv__transform_hlds__loop_inv__functor_number_map_igc_info_0[1] = {
  (MR_Integer) 0
};

#line 2087 "transform_hlds.loop_inv.c"
const MR_TypeCtorInfo_Struct transform_hlds__loop_inv__transform_hlds__loop_inv__type_ctor_info_igc_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 2104 "transform_hlds.loop_inv.c"
static const MR_VA_TypeInfo_Struct2 transform_hlds__loop_inv____vti_tuple_2hlds__hlds_module__type_ctor_info_module_info_0hlds__instmap__type_ctor_info_instmap_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0
  }
};

#line 2114 "transform_hlds.loop_inv.c"
const MR_TypeCtorInfo_Struct transform_hlds__loop_inv__transform_hlds__loop_inv__type_ctor_info_inst_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__loop_inv____Unify____inst_info_0_0_10001)),
  ((MR_Box) (transform_hlds__loop_inv____Compare____inst_info_0_0_10001)),
  (MR_String) "transform_hlds.loop_inv",
  (MR_String) "inst_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__loop_inv____vti_tuple_2hlds__hlds_module__type_ctor_info_module_info_0hlds__instmap__type_ctor_info_instmap_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2131 "transform_hlds.loop_inv.c"
const MR_TypeCtorInfo_Struct transform_hlds__loop_inv__transform_hlds__loop_inv__type_ctor_info_rec_call_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 2148 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0_10001(
#line 2151 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 2153 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
#line 2155 "transform_hlds.loop_inv.c"
{
#line 2157 "transform_hlds.loop_inv.c"
  {
#line 2159 "transform_hlds.loop_inv.c"
    MR_bool transform_hlds__loop_inv__succeeded;

#line 2162 "transform_hlds.loop_inv.c"
    {
#line 2164 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
#line 2167 "transform_hlds.loop_inv.c"
    return transform_hlds__loop_inv__succeeded;
#line 2169 "transform_hlds.loop_inv.c"
  }
#line 2171 "transform_hlds.loop_inv.c"
}

#line 2174 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0_10001(
#line 2177 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 2179 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 2181 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3)
#line 2183 "transform_hlds.loop_inv.c"
{
#line 2185 "transform_hlds.loop_inv.c"
  {
#line 2187 "transform_hlds.loop_inv.c"
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__1_1;

#line 2190 "transform_hlds.loop_inv.c"
    {
#line 2192 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0(&transform_hlds__loop_inv__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_3));
    }
#line 2195 "transform_hlds.loop_inv.c"
    *transform_hlds__loop_inv__wrapper_arg_1 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__1_1));
#line 2197 "transform_hlds.loop_inv.c"
  }
#line 2199 "transform_hlds.loop_inv.c"
}

#line 2202 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____igc_info_0_0_10001(
#line 2205 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 2207 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
#line 2209 "transform_hlds.loop_inv.c"
{
#line 2211 "transform_hlds.loop_inv.c"
  {
#line 2213 "transform_hlds.loop_inv.c"
    MR_bool transform_hlds__loop_inv__succeeded;

#line 2216 "transform_hlds.loop_inv.c"
    {
#line 2218 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv____Unify____igc_info_0_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
#line 2221 "transform_hlds.loop_inv.c"
    return transform_hlds__loop_inv__succeeded;
#line 2223 "transform_hlds.loop_inv.c"
  }
#line 2225 "transform_hlds.loop_inv.c"
}

#line 2228 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____igc_info_0_0_10001(
#line 2231 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 2233 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 2235 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3)
#line 2237 "transform_hlds.loop_inv.c"
{
#line 2239 "transform_hlds.loop_inv.c"
  {
#line 2241 "transform_hlds.loop_inv.c"
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__1_1;

#line 2244 "transform_hlds.loop_inv.c"
    {
#line 2246 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv____Compare____igc_info_0_0(&transform_hlds__loop_inv__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_3));
    }
#line 2249 "transform_hlds.loop_inv.c"
    *transform_hlds__loop_inv__wrapper_arg_1 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__1_1));
#line 2251 "transform_hlds.loop_inv.c"
  }
#line 2253 "transform_hlds.loop_inv.c"
}

#line 2256 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____inst_info_0_0_10001(
#line 2259 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 2261 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
#line 2263 "transform_hlds.loop_inv.c"
{
#line 2265 "transform_hlds.loop_inv.c"
  {
#line 2267 "transform_hlds.loop_inv.c"
    MR_bool transform_hlds__loop_inv__succeeded;

#line 2270 "transform_hlds.loop_inv.c"
    {
#line 2272 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv____Unify____inst_info_0_0(((MR_Tuple) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Tuple) transform_hlds__loop_inv__wrapper_arg_2));
    }
#line 2275 "transform_hlds.loop_inv.c"
    return transform_hlds__loop_inv__succeeded;
#line 2277 "transform_hlds.loop_inv.c"
  }
#line 2279 "transform_hlds.loop_inv.c"
}

#line 2282 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____inst_info_0_0_10001(
#line 2285 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 2287 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 2289 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3)
#line 2291 "transform_hlds.loop_inv.c"
{
#line 2293 "transform_hlds.loop_inv.c"
  {
#line 2295 "transform_hlds.loop_inv.c"
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__1_1;

#line 2298 "transform_hlds.loop_inv.c"
    {
#line 2300 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv____Compare____inst_info_0_0(&transform_hlds__loop_inv__conv0_HeadVar__1_1, ((MR_Tuple) transform_hlds__loop_inv__wrapper_arg_2), ((MR_Tuple) transform_hlds__loop_inv__wrapper_arg_3));
    }
#line 2303 "transform_hlds.loop_inv.c"
    *transform_hlds__loop_inv__wrapper_arg_1 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__1_1));
#line 2305 "transform_hlds.loop_inv.c"
  }
#line 2307 "transform_hlds.loop_inv.c"
}

#line 2310 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____rec_call_0_0_10001(
#line 2313 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 2315 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
#line 2317 "transform_hlds.loop_inv.c"
{
#line 2319 "transform_hlds.loop_inv.c"
  {
#line 2321 "transform_hlds.loop_inv.c"
    MR_bool transform_hlds__loop_inv__succeeded;

#line 2324 "transform_hlds.loop_inv.c"
    {
#line 2326 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv____Unify____rec_call_0_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
#line 2329 "transform_hlds.loop_inv.c"
    return transform_hlds__loop_inv__succeeded;
#line 2331 "transform_hlds.loop_inv.c"
  }
#line 2333 "transform_hlds.loop_inv.c"
}

#line 2336 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____rec_call_0_0_10001(
#line 2339 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 2341 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 2343 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3)
#line 2345 "transform_hlds.loop_inv.c"
{
#line 2347 "transform_hlds.loop_inv.c"
  {
#line 2349 "transform_hlds.loop_inv.c"
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__1_1;

#line 2352 "transform_hlds.loop_inv.c"
    {
#line 2354 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv____Compare____rec_call_0_0(&transform_hlds__loop_inv__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_3));
    }
#line 2357 "transform_hlds.loop_inv.c"
    *transform_hlds__loop_inv__wrapper_arg_1 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__1_1));
#line 2359 "transform_hlds.loop_inv.c"
  }
#line 2361 "transform_hlds.loop_inv.c"
}

#line 1078 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
#line 1078 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 1078 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 1078 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__3_3)
#line 1078 "loop_inv.m"
{
#line 1080 "loop_inv.m"
  {
#line 1080 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;

#line 1080 "loop_inv.m"
    if ((transform_hlds__loop_inv__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1080 "loop_inv.m"
      *transform_hlds__loop_inv__HeadVar__3_3 = transform_hlds__loop_inv__HeadVar__2_2;
#line 1080 "loop_inv.m"
    else
#line 1080 "loop_inv.m"
      {
#line 1080 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 1)));
#line 1080 "loop_inv.m"
        MR_Box transform_hlds__loop_inv__V_18_18 = (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 0));

#line 1080 "loop_inv.m"
        if ((transform_hlds__loop_inv__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1083 "loop_inv.m"
          {
#line 1084 "loop_inv.m"
            {
#line 1084 "loop_inv.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "predicate \140transform_hlds.loop_inv.replace_initial_args\'/3", (MR_String) "first arg longer than second");
#line 1084 "loop_inv.m"
              return;
            }
#line 1083 "loop_inv.m"
          }
#line 1080 "loop_inv.m"
        else
#line 1081 "loop_inv.m"
          {
#line 1081 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Xs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 1081 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Xs_9;
#line 1081 "loop_inv.m"
            MR_Box transform_hlds__loop_inv__V_7_7 = (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0));

#line 1082 "loop_inv.m"
            {
#line 1082 "loop_inv.m"
              transform_hlds__loop_inv__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(transform_hlds__loop_inv__V_17_17, transform_hlds__loop_inv__Xs0_8, &transform_hlds__loop_inv__Xs_9);
            }
#line 1081 "loop_inv.m"
            {
#line 1081 "loop_inv.m"
              MR_Word base;
#line 1081 "loop_inv.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "loop_inv.m"
              *transform_hlds__loop_inv__HeadVar__3_3 = base;
#line 1081 "loop_inv.m"
              MR_hl_field(MR_mktag(1), base, 0) = transform_hlds__loop_inv__V_18_18;
#line 1081 "loop_inv.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__loop_inv__Xs_9));
#line 1081 "loop_inv.m"
            }
#line 1081 "loop_inv.m"
          }
#line 1080 "loop_inv.m"
      }
#line 1080 "loop_inv.m"
  }
#line 1078 "loop_inv.m"
}

#line 1333 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__rhs_modes__1333__1_1_f_0(
#line 1333 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__LambdaHeadVar__1_9)
#line 1333 "loop_inv.m"
{
#line 1333 "loop_inv.m"
  {
#line 1333 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1333 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__LambdaHeadVar__2_10;
#line 1333 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__LambdaHeadVar__1_9, (MR_Integer) 0)));
#line 1333 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__LambdaHeadVar__1_9, (MR_Integer) 1)));
#line 1333 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Pre_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_11_11, (MR_Integer) 1)));
#line 1333 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Post_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_12_12, (MR_Integer) 1)));
#line 1333 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_11_11, (MR_Integer) 0)));
#line 1333 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_12_12, (MR_Integer) 0)));

#line 1333 "loop_inv.m"
    {
#line 1333 "loop_inv.m"
      transform_hlds__loop_inv__LambdaHeadVar__2_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1333 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__LambdaHeadVar__2_10, 0) = ((MR_Box) (transform_hlds__loop_inv__Pre_16));
#line 1333 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__LambdaHeadVar__2_10, 1) = ((MR_Box) (transform_hlds__loop_inv__Post_18));
#line 1333 "loop_inv.m"
    }
#line 1333 "loop_inv.m"
    return transform_hlds__loop_inv__LambdaHeadVar__2_10;
#line 1333 "loop_inv.m"
  }
#line 1333 "loop_inv.m"
}

#line 1164 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__case_goals__1164__1_1_f_0(
#line 1164 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__LambdaHeadVar__1_8)
#line 1164 "loop_inv.m"
{
#line 1164 "loop_inv.m"
  {
#line 1164 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1164 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__LambdaHeadVar__2_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__LambdaHeadVar__1_8, (MR_Integer) 2)));
#line 1164 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___MainConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__LambdaHeadVar__1_8, (MR_Integer) 0)));
#line 1164 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___OtherConsIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__LambdaHeadVar__1_8, (MR_Integer) 1)));

#line 1164 "loop_inv.m"
    return transform_hlds__loop_inv__LambdaHeadVar__2_9;
#line 1164 "loop_inv.m"
  }
#line 1164 "loop_inv.m"
}

#line 743 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__compute_initial_aux_instmap__743__1_2_f_0(
#line 743 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__LambdaHeadVar__1_12,
#line 743 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__LambdaHeadVar__2_13)
#line 743 "loop_inv.m"
{
#line 743 "loop_inv.m"
  {
#line 743 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 743 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__LambdaHeadVar__3_14;
#line 743 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__IMD_11;
#line 743 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__LambdaHeadVar__1_12, (MR_Integer) 1)));
#line 744 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___GoalExpr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__LambdaHeadVar__1_12, (MR_Integer) 0)));

#line 745 "loop_inv.m"
    {
#line 745 "loop_inv.m"
      transform_hlds__loop_inv__IMD_11 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__loop_inv__GoalInfo_17);
    }
#line 746 "loop_inv.m"
    {
#line 746 "loop_inv.m"
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__loop_inv__LambdaHeadVar__2_13, transform_hlds__loop_inv__IMD_11, &transform_hlds__loop_inv__LambdaHeadVar__3_14);
    }
#line 743 "loop_inv.m"
    return transform_hlds__loop_inv__LambdaHeadVar__3_14;
#line 743 "loop_inv.m"
  }
#line 743 "loop_inv.m"
}

#line 498 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__pred__inv_args__498__1_2_p_0(
#line 498 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_27,
#line 498 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__2_28)
#line 498 "loop_inv.m"
{
#line 498 "loop_inv.m"
  {
#line 498 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 498 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__conv0_HeadVar__2_28;

#line 498 "loop_inv.m"
    {
#line 498 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = mercury__maybe__maybe_is_yes_2_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__HeadVar__1_27, &transform_hlds__loop_inv__conv0_HeadVar__2_28);
    }
#line 498 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 498 "loop_inv.m"
      {
#line 498 "loop_inv.m"
        *transform_hlds__loop_inv__HeadVar__2_28 = ((MR_Word) transform_hlds__loop_inv__conv0_HeadVar__2_28);
#line 498 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 498 "loop_inv.m"
      }
#line 498 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 498 "loop_inv.m"
  }
#line 498 "loop_inv.m"
}

#line 260 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv____Compare____rec_call_0_0(
#line 260 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
#line 260 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 260 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__3_3)
#line 260 "loop_inv.m"
{
#line 260 "loop_inv.m"
  {
#line 260 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 260 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Cast_HeadVar1_4 = transform_hlds__loop_inv__HeadVar__2_2;
#line 260 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Cast_HeadVar2_5 = transform_hlds__loop_inv__HeadVar__3_3;

#line 260 "loop_inv.m"
    {
#line 260 "loop_inv.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_2[0], transform_hlds__loop_inv__HeadVar__1_1, ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar2_5)));
#line 260 "loop_inv.m"
      return;
    }
#line 260 "loop_inv.m"
  }
#line 260 "loop_inv.m"
}

#line 260 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____rec_call_0_0(
#line 260 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 260 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2)
#line 260 "loop_inv.m"
{
#line 260 "loop_inv.m"
  {
#line 260 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 260 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Cast_HeadVar1_3 = transform_hlds__loop_inv__HeadVar__1_1;
#line 260 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Cast_HeadVar2_4 = transform_hlds__loop_inv__HeadVar__2_2;

#line 260 "loop_inv.m"
    {
#line 260 "loop_inv.m"
      return transform_hlds__loop_inv__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_2[0], ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar2_4)));
    }
#line 260 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 260 "loop_inv.m"
  }
#line 260 "loop_inv.m"
}

#line 697 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv____Compare____inst_info_0_0(
#line 697 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
#line 697 "loop_inv.m"
  MR_Tuple transform_hlds__loop_inv__HeadVar__2_2,
#line 697 "loop_inv.m"
  MR_Tuple transform_hlds__loop_inv__HeadVar__3_3)
#line 697 "loop_inv.m"
{
#line 697 "loop_inv.m"
  {
#line 697 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 697 "loop_inv.m"
    MR_Tuple transform_hlds__loop_inv__Cast_HeadVar1_4 = transform_hlds__loop_inv__HeadVar__2_2;
#line 697 "loop_inv.m"
    MR_Tuple transform_hlds__loop_inv__Cast_HeadVar2_5 = transform_hlds__loop_inv__HeadVar__3_3;

#line 697 "loop_inv.m"
    {
#line 697 "loop_inv.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_3[0], transform_hlds__loop_inv__HeadVar__1_1, ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar2_5)));
#line 697 "loop_inv.m"
      return;
    }
#line 697 "loop_inv.m"
  }
#line 697 "loop_inv.m"
}

#line 697 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____inst_info_0_0(
#line 697 "loop_inv.m"
  MR_Tuple transform_hlds__loop_inv__HeadVar__1_1,
#line 697 "loop_inv.m"
  MR_Tuple transform_hlds__loop_inv__HeadVar__2_2)
#line 697 "loop_inv.m"
{
#line 697 "loop_inv.m"
  {
#line 697 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 697 "loop_inv.m"
    MR_Tuple transform_hlds__loop_inv__Cast_HeadVar1_3 = transform_hlds__loop_inv__HeadVar__1_1;
#line 697 "loop_inv.m"
    MR_Tuple transform_hlds__loop_inv__Cast_HeadVar2_4 = transform_hlds__loop_inv__HeadVar__2_2;

#line 697 "loop_inv.m"
    {
#line 697 "loop_inv.m"
      return transform_hlds__loop_inv__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_3[0], ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar2_4)));
    }
#line 697 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 697 "loop_inv.m"
  }
#line 697 "loop_inv.m"
}

#line 267 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv____Compare____igc_info_0_0(
#line 267 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
#line 267 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 267 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__3_3)
#line 267 "loop_inv.m"
{
#line 267 "loop_inv.m"
  {
#line 267 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 267 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__CastX_12 = (MR_Integer) transform_hlds__loop_inv__HeadVar__2_2;
#line 267 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__CastY_13 = (MR_Integer) transform_hlds__loop_inv__HeadVar__3_3;

#line 267 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__CastX_12 == transform_hlds__loop_inv__CastY_13);
#line 267 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 2738 "transform_hlds.loop_inv.c"
      *transform_hlds__loop_inv__HeadVar__1_1 = (MR_Integer) 0;
#line 267 "loop_inv.m"
    else
#line 267 "loop_inv.m"
      {
#line 267 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
#line 267 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 267 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 2)));
#line 267 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 0)));
#line 267 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 1)));
#line 267 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 2)));
#line 267 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_10_10;

#line 267 "loop_inv.m"
        {
#line 267 "loop_inv.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__loop_inv__V_10_10, transform_hlds__loop_inv__V_4_4, transform_hlds__loop_inv__V_7_7);
        }
#line 2764 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_10_10 == (MR_Integer) 0);
#line 267 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 267 "loop_inv.m"
        if (transform_hlds__loop_inv__succeeded)
#line 267 "loop_inv.m"
          *transform_hlds__loop_inv__HeadVar__1_1 = transform_hlds__loop_inv__V_10_10;
#line 267 "loop_inv.m"
        else
#line 267 "loop_inv.m"
          {
#line 267 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_11_11;

#line 267 "loop_inv.m"
            {
#line 267 "loop_inv.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[5], &transform_hlds__loop_inv__V_11_11, ((MR_Box) (transform_hlds__loop_inv__V_5_5)), ((MR_Box) (transform_hlds__loop_inv__V_8_8)));
            }
#line 2784 "transform_hlds.loop_inv.c"
            transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_11_11 == (MR_Integer) 0);
#line 267 "loop_inv.m"
            transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 267 "loop_inv.m"
            if (transform_hlds__loop_inv__succeeded)
#line 267 "loop_inv.m"
              *transform_hlds__loop_inv__HeadVar__1_1 = transform_hlds__loop_inv__V_11_11;
#line 267 "loop_inv.m"
            else
#line 267 "loop_inv.m"
              {
#line 267 "loop_inv.m"
                {
#line 267 "loop_inv.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[6], transform_hlds__loop_inv__HeadVar__1_1, ((MR_Box) (transform_hlds__loop_inv__V_6_6)), ((MR_Box) (transform_hlds__loop_inv__V_9_9)));
#line 267 "loop_inv.m"
                  return;
                }
#line 267 "loop_inv.m"
              }
#line 267 "loop_inv.m"
          }
#line 267 "loop_inv.m"
      }
#line 267 "loop_inv.m"
  }
#line 267 "loop_inv.m"
}

#line 267 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____igc_info_0_0(
#line 267 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 267 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2)
#line 267 "loop_inv.m"
{
#line 267 "loop_inv.m"
  {
#line 267 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 267 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__CastX_9 = (MR_Integer) transform_hlds__loop_inv__HeadVar__1_1;
#line 267 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__CastY_10 = (MR_Integer) transform_hlds__loop_inv__HeadVar__2_2;

#line 267 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__CastX_9 == transform_hlds__loop_inv__CastY_10);
#line 267 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 267 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 267 "loop_inv.m"
    else
#line 267 "loop_inv.m"
      {
#line 267 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__TypeInfo_12_12;
#line 267 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__TypeInfo_13_13;
#line 267 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 0)));
#line 267 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 1)));
#line 267 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 2)));
#line 267 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
#line 267 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 267 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 2)));

#line 2859 "transform_hlds.loop_inv.c"
        {
#line 2861 "transform_hlds.loop_inv.c"
          transform_hlds__loop_inv__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__loop_inv__V_3_3, transform_hlds__loop_inv__V_6_6);
        }
#line 267 "loop_inv.m"
        if (transform_hlds__loop_inv__succeeded)
#line 267 "loop_inv.m"
          {
#line 2868 "transform_hlds.loop_inv.c"
            transform_hlds__loop_inv__TypeInfo_12_12 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[5];
#line 2870 "transform_hlds.loop_inv.c"
            {
#line 2872 "transform_hlds.loop_inv.c"
              transform_hlds__loop_inv__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__loop_inv__TypeInfo_12_12, ((MR_Box) (transform_hlds__loop_inv__V_4_4)), ((MR_Box) (transform_hlds__loop_inv__V_7_7)));
            }
#line 267 "loop_inv.m"
            if (transform_hlds__loop_inv__succeeded)
#line 267 "loop_inv.m"
              {
#line 2879 "transform_hlds.loop_inv.c"
                transform_hlds__loop_inv__TypeInfo_13_13 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[6];
#line 2881 "transform_hlds.loop_inv.c"
                {
#line 2883 "transform_hlds.loop_inv.c"
                  return transform_hlds__loop_inv__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__loop_inv__TypeInfo_13_13, ((MR_Box) (transform_hlds__loop_inv__V_5_5)), ((MR_Box) (transform_hlds__loop_inv__V_8_8)));
                }
#line 267 "loop_inv.m"
              }
#line 267 "loop_inv.m"
          }
#line 267 "loop_inv.m"
      }
#line 267 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 267 "loop_inv.m"
  }
#line 267 "loop_inv.m"
}

#line 835 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0(
#line 835 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
#line 835 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 835 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__3_3)
#line 835 "loop_inv.m"
{
#line 835 "loop_inv.m"
  {
#line 835 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 835 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__CastX_15 = (MR_Integer) transform_hlds__loop_inv__HeadVar__2_2;
#line 835 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__CastY_16 = (MR_Integer) transform_hlds__loop_inv__HeadVar__3_3;

#line 835 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__CastX_15 == transform_hlds__loop_inv__CastY_16);
#line 835 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 2923 "transform_hlds.loop_inv.c"
      *transform_hlds__loop_inv__HeadVar__1_1 = (MR_Integer) 0;
#line 835 "loop_inv.m"
    else
#line 835 "loop_inv.m"
      {
#line 835 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
#line 835 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 835 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 2)));
#line 835 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 3)));
#line 835 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 0)));
#line 835 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 1)));
#line 835 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 2)));
#line 835 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 3)));
#line 835 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_12_12;

#line 835 "loop_inv.m"
        {
#line 835 "loop_inv.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__loop_inv__V_12_12, transform_hlds__loop_inv__V_4_4, transform_hlds__loop_inv__V_8_8);
        }
#line 2953 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_12_12 == (MR_Integer) 0);
#line 835 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 835 "loop_inv.m"
        if (transform_hlds__loop_inv__succeeded)
#line 835 "loop_inv.m"
          *transform_hlds__loop_inv__HeadVar__1_1 = transform_hlds__loop_inv__V_12_12;
#line 835 "loop_inv.m"
        else
#line 835 "loop_inv.m"
          {
#line 835 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_13_13;

#line 835 "loop_inv.m"
            {
#line 835 "loop_inv.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[1], &transform_hlds__loop_inv__V_13_13, ((MR_Box) (transform_hlds__loop_inv__V_5_5)), ((MR_Box) (transform_hlds__loop_inv__V_9_9)));
            }
#line 2973 "transform_hlds.loop_inv.c"
            transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_13_13 == (MR_Integer) 0);
#line 835 "loop_inv.m"
            transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 835 "loop_inv.m"
            if (transform_hlds__loop_inv__succeeded)
#line 835 "loop_inv.m"
              *transform_hlds__loop_inv__HeadVar__1_1 = transform_hlds__loop_inv__V_13_13;
#line 835 "loop_inv.m"
            else
#line 835 "loop_inv.m"
              {
#line 835 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_14_14;

#line 835 "loop_inv.m"
                {
#line 835 "loop_inv.m"
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__loop_inv__V_14_14, transform_hlds__loop_inv__V_6_6, transform_hlds__loop_inv__V_10_10);
                }
#line 2993 "transform_hlds.loop_inv.c"
                transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_14_14 == (MR_Integer) 0);
#line 835 "loop_inv.m"
                transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 835 "loop_inv.m"
                if (transform_hlds__loop_inv__succeeded)
#line 835 "loop_inv.m"
                  *transform_hlds__loop_inv__HeadVar__1_1 = transform_hlds__loop_inv__V_14_14;
#line 835 "loop_inv.m"
                else
#line 835 "loop_inv.m"
                  {
#line 835 "loop_inv.m"
                    hlds__hlds_goal____Compare____hlds_goal_0_0(transform_hlds__loop_inv__HeadVar__1_1, transform_hlds__loop_inv__V_7_7, transform_hlds__loop_inv__V_11_11);
#line 835 "loop_inv.m"
                    return;
                  }
#line 835 "loop_inv.m"
              }
#line 835 "loop_inv.m"
          }
#line 835 "loop_inv.m"
      }
#line 835 "loop_inv.m"
  }
#line 835 "loop_inv.m"
}

#line 835 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0(
#line 835 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 835 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2)
#line 835 "loop_inv.m"
{
#line 835 "loop_inv.m"
  {
#line 835 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 835 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__CastX_11 = (MR_Integer) transform_hlds__loop_inv__HeadVar__1_1;
#line 835 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__CastY_12 = (MR_Integer) transform_hlds__loop_inv__HeadVar__2_2;

#line 835 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__CastX_11 == transform_hlds__loop_inv__CastY_12);
#line 835 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 835 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 835 "loop_inv.m"
    else
#line 835 "loop_inv.m"
      {
#line 835 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__TypeInfo_14_14;
#line 835 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 0)));
#line 835 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 1)));
#line 835 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 2)));
#line 835 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 3)));
#line 835 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
#line 835 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 835 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 2)));
#line 835 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 3)));

#line 3068 "transform_hlds.loop_inv.c"
        {
#line 3070 "transform_hlds.loop_inv.c"
          transform_hlds__loop_inv__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__loop_inv__V_3_3, transform_hlds__loop_inv__V_7_7);
        }
#line 835 "loop_inv.m"
        if (transform_hlds__loop_inv__succeeded)
#line 835 "loop_inv.m"
          {
#line 3077 "transform_hlds.loop_inv.c"
            transform_hlds__loop_inv__TypeInfo_14_14 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[1];
#line 3079 "transform_hlds.loop_inv.c"
            {
#line 3081 "transform_hlds.loop_inv.c"
              transform_hlds__loop_inv__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__loop_inv__TypeInfo_14_14, ((MR_Box) (transform_hlds__loop_inv__V_4_4)), ((MR_Box) (transform_hlds__loop_inv__V_8_8)));
            }
#line 835 "loop_inv.m"
            if (transform_hlds__loop_inv__succeeded)
#line 835 "loop_inv.m"
              {
#line 3088 "transform_hlds.loop_inv.c"
                {
#line 3090 "transform_hlds.loop_inv.c"
                  transform_hlds__loop_inv__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__loop_inv__V_5_5, transform_hlds__loop_inv__V_9_9);
                }
#line 835 "loop_inv.m"
                if (transform_hlds__loop_inv__succeeded)
#line 3095 "transform_hlds.loop_inv.c"
                  {
#line 3097 "transform_hlds.loop_inv.c"
                    return transform_hlds__loop_inv__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__loop_inv__V_6_6, transform_hlds__loop_inv__V_10_10);
                  }
#line 835 "loop_inv.m"
              }
#line 835 "loop_inv.m"
          }
#line 835 "loop_inv.m"
      }
#line 835 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 835 "loop_inv.m"
  }
#line 835 "loop_inv.m"
}

#line 1333 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__rhs_modes_1_f_0_1(
#line 1333 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1333 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1333 "loop_inv.m"
{
#line 1333 "loop_inv.m"
  {
#line 1333 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1333 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1333 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_LambdaHeadVar__2_10;

#line 1333 "loop_inv.m"
    {
#line 1333 "loop_inv.m"
      transform_hlds__loop_inv__conv0_LambdaHeadVar__2_10 = transform_hlds__loop_inv__IntroducedFrom__func__rhs_modes__1333__1_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1333 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv0_LambdaHeadVar__2_10));
#line 1333 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1333 "loop_inv.m"
  }
#line 1333 "loop_inv.m"
}

#line 1330 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__rhs_modes_1_f_0(
#line 1330 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UniModes_3)
#line 1330 "loop_inv.m"
{
#line 1332 "loop_inv.m"
  {
#line 1332 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1332 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__2_2;

#line 1333 "loop_inv.m"
    {
#line 1333 "loop_inv.m"
      transform_hlds__loop_inv__HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[10], transform_hlds__loop_inv__UniModes_3);
    }
#line 1332 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__2_2;
#line 1332 "loop_inv.m"
  }
#line 1330 "loop_inv.m"
}

#line 1322 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__output_arg_4_p_0(
#line 1322 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 1322 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__X_6,
#line 1322 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__M_7,
#line 1322 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__X_4)
#line 1322 "loop_inv.m"
{
#line 1325 "loop_inv.m"
  {
#line 1325 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;

#line 1325 "loop_inv.m"
    *transform_hlds__loop_inv__X_4 = transform_hlds__loop_inv__X_6;
#line 1326 "loop_inv.m"
    {
#line 1326 "loop_inv.m"
      return transform_hlds__loop_inv__succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__M_7);
    }
#line 1325 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1325 "loop_inv.m"
  }
#line 1322 "loop_inv.m"
}

#line 1313 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__input_arg_4_p_0(
#line 1313 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 1313 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__X_6,
#line 1313 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__M_7,
#line 1313 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__X_4)
#line 1313 "loop_inv.m"
{
#line 1316 "loop_inv.m"
  {
#line 1316 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1316 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InInst_8;
#line 1317 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___OutInst_9;

#line 1316 "loop_inv.m"
    *transform_hlds__loop_inv__X_4 = transform_hlds__loop_inv__X_6;
#line 1317 "loop_inv.m"
    {
#line 1317 "loop_inv.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__M_7, &transform_hlds__loop_inv__InInst_8, &transform_hlds__loop_inv___OutInst_9);
    }
#line 1318 "loop_inv.m"
    {
#line 1318 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__InInst_8);
    }
#line 1318 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 1316 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1316 "loop_inv.m"
  }
#line 1313 "loop_inv.m"
}

#line 1284 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_5(
#line 1284 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1284 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1284 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1284 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1284 "loop_inv.m"
{
#line 1284 "loop_inv.m"
  {
#line 1284 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1284 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1284 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv4_X_4;

#line 1284 "loop_inv.m"
    {
#line 1284 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__output_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv4_X_4);
    }
#line 1284 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1284 "loop_inv.m"
      {
#line 1284 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv4_X_4));
#line 1284 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1284 "loop_inv.m"
      }
#line 1284 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1284 "loop_inv.m"
  }
#line 1284 "loop_inv.m"
}

#line 1264 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_4(
#line 1264 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1264 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1264 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1264 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1264 "loop_inv.m"
{
#line 1264 "loop_inv.m"
  {
#line 1264 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1264 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1264 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv3_X_4;

#line 1264 "loop_inv.m"
    {
#line 1264 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__output_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv3_X_4);
    }
#line 1264 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1264 "loop_inv.m"
      {
#line 1264 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv3_X_4));
#line 1264 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1264 "loop_inv.m"
      }
#line 1264 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1264 "loop_inv.m"
  }
#line 1264 "loop_inv.m"
}

#line 1268 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_3(
#line 1268 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1268 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1268 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1268 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1268 "loop_inv.m"
{
#line 1268 "loop_inv.m"
  {
#line 1268 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1268 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1268 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv2_X_4;

#line 1268 "loop_inv.m"
    {
#line 1268 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__output_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv2_X_4);
    }
#line 1268 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1268 "loop_inv.m"
      {
#line 1268 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv2_X_4));
#line 1268 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1268 "loop_inv.m"
      }
#line 1268 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1268 "loop_inv.m"
  }
#line 1268 "loop_inv.m"
}

#line 1273 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_2(
#line 1273 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1273 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1273 "loop_inv.m"
{
#line 1273 "loop_inv.m"
  {
#line 1273 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1273 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1273 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv1_HeadVar__2_2;

#line 1273 "loop_inv.m"
    {
#line 1273 "loop_inv.m"
      transform_hlds__loop_inv__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1273 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv1_HeadVar__2_2));
#line 1273 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1273 "loop_inv.m"
  }
#line 1273 "loop_inv.m"
}

#line 1272 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_1(
#line 1272 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1272 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1272 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1272 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1272 "loop_inv.m"
{
#line 1272 "loop_inv.m"
  {
#line 1272 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1272 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1272 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_X_4;

#line 1272 "loop_inv.m"
    {
#line 1272 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__output_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv0_X_4);
    }
#line 1272 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1272 "loop_inv.m"
      {
#line 1272 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_X_4));
#line 1272 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1272 "loop_inv.m"
      }
#line 1272 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1272 "loop_inv.m"
  }
#line 1272 "loop_inv.m"
}

#line 1258 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0(
#line 1258 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
#line 1258 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5)
#line 1258 "loop_inv.m"
{
#line 1260 "loop_inv.m"
  {
#line 1260 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1260 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Outputs_6;
#line 1260 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 0)));
#line 1261 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 1)));

#line 1266 "loop_inv.m"
#line 1266 "loop_inv.m"
    switch (MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) {
#line 1266 "loop_inv.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1266 "loop_inv.m"
      case (MR_Integer) 0:
#line 1307 "loop_inv.m"
        {
#line 1308 "loop_inv.m"
          {
#line 1308 "loop_inv.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.goal_outputs\'/2", (MR_String) "compound goal");
          }
#line 1307 "loop_inv.m"
        }
#line 1266 "loop_inv.m"
        break;
#line 1266 "loop_inv.m"
      case (MR_Integer) 1:
#line 1276 "loop_inv.m"
        {
#line 1276 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__LHS_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
#line 1276 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__Kind_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1276 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___RHS_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1276 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1276 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));

#line 1281 "loop_inv.m"
#line 1281 "loop_inv.m"
          switch (MR_tag((MR_Word) transform_hlds__loop_inv__Kind_27)) {
#line 1281 "loop_inv.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1281 "loop_inv.m"
            case (MR_Integer) 0:
#line 1279 "loop_inv.m"
              {
#line 1280 "loop_inv.m"
                {
#line 1280 "loop_inv.m"
                  transform_hlds__loop_inv__Outputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1280 "loop_inv.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Outputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_24));
#line 1280 "loop_inv.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Outputs_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1280 "loop_inv.m"
                }
#line 1279 "loop_inv.m"
              }
#line 1281 "loop_inv.m"
              break;
#line 1281 "loop_inv.m"
            case (MR_Integer) 1:
#line 1283 "loop_inv.m"
              {
#line 1283 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__TypeInfo_101_101;
#line 1283 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__RHSArgs_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 2)));
#line 1283 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__ArgUniModes_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 3)));
#line 1283 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_67_67;
#line 1283 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_68_68;
#line 1283 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 0)));
#line 1283 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 1)));
#line 1283 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 4)));
#line 1283 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 5)));

#line 1284 "loop_inv.m"
                {
#line 1284 "loop_inv.m"
                  transform_hlds__loop_inv__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1284 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_67_67, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1284 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_67_67, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_5));
#line 1284 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1284 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_67_67, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1284 "loop_inv.m"
                }
#line 1285 "loop_inv.m"
                {
#line 1285 "loop_inv.m"
                  transform_hlds__loop_inv__V_68_68 = transform_hlds__loop_inv__rhs_modes_1_f_0(transform_hlds__loop_inv__ArgUniModes_39);
                }
#line 3572 "transform_hlds.loop_inv.c"
                transform_hlds__loop_inv__TypeInfo_101_101 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1284 "loop_inv.m"
                {
#line 1284 "loop_inv.m"
                  mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_101_101, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_101_101, transform_hlds__loop_inv__V_67_67, transform_hlds__loop_inv__RHSArgs_38, transform_hlds__loop_inv__V_68_68, &transform_hlds__loop_inv__Outputs_6);
                }
#line 1283 "loop_inv.m"
              }
#line 1281 "loop_inv.m"
              break;
#line 1281 "loop_inv.m"
            case (MR_Integer) 2:
#line 1288 "loop_inv.m"
              {
#line 1289 "loop_inv.m"
                {
#line 1289 "loop_inv.m"
                  transform_hlds__loop_inv__Outputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1289 "loop_inv.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Outputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_24));
#line 1289 "loop_inv.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Outputs_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1289 "loop_inv.m"
                }
#line 1288 "loop_inv.m"
              }
#line 1281 "loop_inv.m"
              break;
#line 1281 "loop_inv.m"
            case (MR_Integer) 3:
#line 1281 "loop_inv.m"
#line 1281 "loop_inv.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__Kind_27, (MR_Integer) 0)))) {
#line 1281 "loop_inv.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1281 "loop_inv.m"
                case (MR_Integer) 0:
#line 1293 "loop_inv.m"
                  transform_hlds__loop_inv__Outputs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1281 "loop_inv.m"
                  break;
#line 1281 "loop_inv.m"
                case (MR_Integer) 1:
#line 1297 "loop_inv.m"
                  transform_hlds__loop_inv__Outputs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1281 "loop_inv.m"
                  break;
#line 1281 "loop_inv.m"
              }
#line 1281 "loop_inv.m"
              break;
#line 1281 "loop_inv.m"
          }
#line 1276 "loop_inv.m"
        }
#line 1266 "loop_inv.m"
        break;
#line 1266 "loop_inv.m"
      case (MR_Integer) 2:
#line 1263 "loop_inv.m"
        {
#line 1263 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__TypeInfo_83_83;
#line 1263 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
#line 1263 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1263 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1263 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_75_75;
#line 1263 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_76_76;
#line 1263 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1263 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1263 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

#line 1264 "loop_inv.m"
          {
#line 1264 "loop_inv.m"
            transform_hlds__loop_inv__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1264 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_75_75, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1264 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_75_75, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_4));
#line 1264 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1264 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_75_75, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1264 "loop_inv.m"
          }
#line 1265 "loop_inv.m"
          {
#line 1265 "loop_inv.m"
            transform_hlds__loop_inv__V_76_76 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_9, transform_hlds__loop_inv__ProcId_10);
          }
#line 3672 "transform_hlds.loop_inv.c"
          transform_hlds__loop_inv__TypeInfo_83_83 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1264 "loop_inv.m"
          {
#line 1264 "loop_inv.m"
            mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_83_83, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_83_83, transform_hlds__loop_inv__V_75_75, transform_hlds__loop_inv__Args_11, transform_hlds__loop_inv__V_76_76, &transform_hlds__loop_inv__Outputs_6);
          }
#line 1263 "loop_inv.m"
        }
#line 1266 "loop_inv.m"
        break;
#line 1266 "loop_inv.m"
      case (MR_Integer) 3:
#line 1266 "loop_inv.m"
#line 1266 "loop_inv.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) {
#line 1266 "loop_inv.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1266 "loop_inv.m"
          case (MR_Integer) 0:
#line 1267 "loop_inv.m"
            {
#line 1267 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeInfo_88_88;
#line 1267 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__ArgModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1267 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_74_74;
#line 1267 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Args_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1267 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1267 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1267 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

#line 1268 "loop_inv.m"
              {
#line 1268 "loop_inv.m"
                transform_hlds__loop_inv__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1268 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_74_74, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1268 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_74_74, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_3));
#line 1268 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1268 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_74_74, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1268 "loop_inv.m"
              }
#line 3723 "transform_hlds.loop_inv.c"
              transform_hlds__loop_inv__TypeInfo_88_88 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1268 "loop_inv.m"
              {
#line 1268 "loop_inv.m"
                mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_88_88, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_88_88, transform_hlds__loop_inv__V_74_74, transform_hlds__loop_inv__Args_77, transform_hlds__loop_inv__ArgModes_16, &transform_hlds__loop_inv__Outputs_6);
              }
#line 1267 "loop_inv.m"
            }
#line 1266 "loop_inv.m"
            break;
#line 1266 "loop_inv.m"
          case (MR_Integer) 1:
#line 1271 "loop_inv.m"
            {
#line 1271 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeInfo_94_94;
#line 1271 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__ForeignArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1271 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_70_70;
#line 1271 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_71_71;
#line 1271 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_72_72;
#line 1271 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__PredId_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1271 "loop_inv.m"
              MR_Integer transform_hlds__loop_inv__ProcId_79 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1271 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1271 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));
#line 1271 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 6)));
#line 1271 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 7)));

#line 1272 "loop_inv.m"
              {
#line 1272 "loop_inv.m"
                transform_hlds__loop_inv__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1272 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_70_70, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1272 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_70_70, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_1));
#line 1272 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1272 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_70_70, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1272 "loop_inv.m"
              }
#line 3775 "transform_hlds.loop_inv.c"
              transform_hlds__loop_inv__TypeInfo_94_94 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1273 "loop_inv.m"
              {
#line 1273 "loop_inv.m"
                transform_hlds__loop_inv__V_71_71 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, transform_hlds__loop_inv__TypeInfo_94_94, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[9], transform_hlds__loop_inv__ForeignArgs_20);
              }
#line 1274 "loop_inv.m"
              {
#line 1274 "loop_inv.m"
                transform_hlds__loop_inv__V_72_72 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_78, transform_hlds__loop_inv__ProcId_79);
              }
#line 1272 "loop_inv.m"
              {
#line 1272 "loop_inv.m"
                mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_94_94, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_94_94, transform_hlds__loop_inv__V_70_70, transform_hlds__loop_inv__V_71_71, transform_hlds__loop_inv__V_72_72, &transform_hlds__loop_inv__Outputs_6);
              }
#line 1271 "loop_inv.m"
            }
#line 1266 "loop_inv.m"
            break;
#line 1266 "loop_inv.m"
          case (MR_Integer) 2:
#line 1266 "loop_inv.m"
          case (MR_Integer) 3:
#line 1266 "loop_inv.m"
          case (MR_Integer) 4:
#line 1266 "loop_inv.m"
          case (MR_Integer) 5:
#line 1266 "loop_inv.m"
          case (MR_Integer) 6:
#line 1266 "loop_inv.m"
          case (MR_Integer) 7:
#line 1307 "loop_inv.m"
            {
#line 1308 "loop_inv.m"
              {
#line 1308 "loop_inv.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.goal_outputs\'/2", (MR_String) "compound goal");
              }
#line 1307 "loop_inv.m"
            }
#line 1266 "loop_inv.m"
            break;
#line 1266 "loop_inv.m"
        }
#line 1266 "loop_inv.m"
        break;
#line 1266 "loop_inv.m"
    }
#line 1260 "loop_inv.m"
    return transform_hlds__loop_inv__Outputs_6;
#line 1260 "loop_inv.m"
  }
#line 1258 "loop_inv.m"
}

#line 1217 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_6(
#line 1217 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1217 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1217 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1217 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1217 "loop_inv.m"
{
#line 1217 "loop_inv.m"
  {
#line 1217 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1217 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1217 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv5_X_4;

#line 1217 "loop_inv.m"
    {
#line 1217 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__input_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv5_X_4);
    }
#line 1217 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1217 "loop_inv.m"
      {
#line 1217 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv5_X_4));
#line 1217 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1217 "loop_inv.m"
      }
#line 1217 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1217 "loop_inv.m"
  }
#line 1217 "loop_inv.m"
}

#line 1212 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_5(
#line 1212 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1212 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1212 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1212 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1212 "loop_inv.m"
{
#line 1212 "loop_inv.m"
  {
#line 1212 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1212 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1212 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv4_X_4;

#line 1212 "loop_inv.m"
    {
#line 1212 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__input_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv4_X_4);
    }
#line 1212 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1212 "loop_inv.m"
      {
#line 1212 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv4_X_4));
#line 1212 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1212 "loop_inv.m"
      }
#line 1212 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1212 "loop_inv.m"
  }
#line 1212 "loop_inv.m"
}

#line 1194 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_4(
#line 1194 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1194 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1194 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1194 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1194 "loop_inv.m"
{
#line 1194 "loop_inv.m"
  {
#line 1194 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1194 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1194 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv3_X_4;

#line 1194 "loop_inv.m"
    {
#line 1194 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__input_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv3_X_4);
    }
#line 1194 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1194 "loop_inv.m"
      {
#line 1194 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv3_X_4));
#line 1194 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1194 "loop_inv.m"
      }
#line 1194 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1194 "loop_inv.m"
  }
#line 1194 "loop_inv.m"
}

#line 1199 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_3(
#line 1199 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1199 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1199 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1199 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1199 "loop_inv.m"
{
#line 1199 "loop_inv.m"
  {
#line 1199 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1199 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1199 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv2_X_4;

#line 1199 "loop_inv.m"
    {
#line 1199 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__input_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv2_X_4);
    }
#line 1199 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1199 "loop_inv.m"
      {
#line 1199 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv2_X_4));
#line 1199 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1199 "loop_inv.m"
      }
#line 1199 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1199 "loop_inv.m"
  }
#line 1199 "loop_inv.m"
}

#line 1205 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_2(
#line 1205 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1205 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1205 "loop_inv.m"
{
#line 1205 "loop_inv.m"
  {
#line 1205 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1205 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1205 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv1_HeadVar__2_2;

#line 1205 "loop_inv.m"
    {
#line 1205 "loop_inv.m"
      transform_hlds__loop_inv__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1205 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv1_HeadVar__2_2));
#line 1205 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1205 "loop_inv.m"
  }
#line 1205 "loop_inv.m"
}

#line 1204 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_1(
#line 1204 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1204 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1204 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1204 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1204 "loop_inv.m"
{
#line 1204 "loop_inv.m"
  {
#line 1204 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1204 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1204 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_X_4;

#line 1204 "loop_inv.m"
    {
#line 1204 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__input_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv0_X_4);
    }
#line 1204 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1204 "loop_inv.m"
      {
#line 1204 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_X_4));
#line 1204 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1204 "loop_inv.m"
      }
#line 1204 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1204 "loop_inv.m"
  }
#line 1204 "loop_inv.m"
}

#line 1188 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0(
#line 1188 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
#line 1188 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5)
#line 1188 "loop_inv.m"
{
#line 1190 "loop_inv.m"
  {
#line 1190 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1190 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Inputs_6;
#line 1190 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 0)));
#line 1191 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 1)));

#line 1196 "loop_inv.m"
#line 1196 "loop_inv.m"
    switch (MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) {
#line 1196 "loop_inv.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1196 "loop_inv.m"
      case (MR_Integer) 0:
#line 1251 "loop_inv.m"
        {
#line 1252 "loop_inv.m"
          {
#line 1252 "loop_inv.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.goal_inputs\'/2", (MR_String) "compound goal");
          }
#line 1251 "loop_inv.m"
        }
#line 1196 "loop_inv.m"
        break;
#line 1196 "loop_inv.m"
      case (MR_Integer) 1:
#line 1208 "loop_inv.m"
        {
#line 1208 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__LHS_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
#line 1208 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__UnifyRHS_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1208 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__Kind_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1208 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1208 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));

#line 1214 "loop_inv.m"
#line 1214 "loop_inv.m"
          switch (MR_tag((MR_Word) transform_hlds__loop_inv__Kind_29)) {
#line 1214 "loop_inv.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1214 "loop_inv.m"
            case (MR_Integer) 0:
#line 1211 "loop_inv.m"
              {
#line 1211 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__TypeInfo_128_128;
#line 1211 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__RHSArgs_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 2)));
#line 1211 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__ArgUniModes_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 3)));
#line 1211 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_89_89;
#line 1211 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_90_90;
#line 1211 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 0)));
#line 1211 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 1)));
#line 1211 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 4)));
#line 1211 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 5)));
#line 1211 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 6)));

#line 1212 "loop_inv.m"
                {
#line 1212 "loop_inv.m"
                  transform_hlds__loop_inv__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1212 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_89_89, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1212 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_89_89, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_5));
#line 1212 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1212 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_89_89, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1212 "loop_inv.m"
                }
#line 1213 "loop_inv.m"
                {
#line 1213 "loop_inv.m"
                  transform_hlds__loop_inv__V_90_90 = transform_hlds__loop_inv__rhs_modes_1_f_0(transform_hlds__loop_inv__ArgUniModes_34);
                }
#line 4186 "transform_hlds.loop_inv.c"
                transform_hlds__loop_inv__TypeInfo_128_128 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1212 "loop_inv.m"
                {
#line 1212 "loop_inv.m"
                  mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_128_128, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_128_128, transform_hlds__loop_inv__V_89_89, transform_hlds__loop_inv__RHSArgs_33, transform_hlds__loop_inv__V_90_90, &transform_hlds__loop_inv__Inputs_6);
                }
#line 1211 "loop_inv.m"
              }
#line 1214 "loop_inv.m"
              break;
#line 1214 "loop_inv.m"
            case (MR_Integer) 1:
#line 1216 "loop_inv.m"
              {
#line 1216 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__TypeInfo_133_133;
#line 1216 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__RHSInputs_42;
#line 1216 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_87_87;
#line 1216 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_88_88;
#line 1216 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__RHSArgs_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 2)));
#line 1216 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__ArgUniModes_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 3)));
#line 1216 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 0)));
#line 1216 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 1)));
#line 1216 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 4)));
#line 1216 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 5)));

#line 1217 "loop_inv.m"
                {
#line 1217 "loop_inv.m"
                  transform_hlds__loop_inv__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1217 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_87_87, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1217 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_87_87, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_6));
#line 1217 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1217 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_87_87, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1217 "loop_inv.m"
                }
#line 1218 "loop_inv.m"
                {
#line 1218 "loop_inv.m"
                  transform_hlds__loop_inv__V_88_88 = transform_hlds__loop_inv__rhs_modes_1_f_0(transform_hlds__loop_inv__ArgUniModes_102);
                }
#line 4241 "transform_hlds.loop_inv.c"
                transform_hlds__loop_inv__TypeInfo_133_133 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1217 "loop_inv.m"
                {
#line 1217 "loop_inv.m"
                  mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_133_133, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_133_133, transform_hlds__loop_inv__V_87_87, transform_hlds__loop_inv__RHSArgs_101, transform_hlds__loop_inv__V_88_88, &transform_hlds__loop_inv__RHSInputs_42);
                }
#line 1219 "loop_inv.m"
                {
#line 1219 "loop_inv.m"
                  transform_hlds__loop_inv__Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1219 "loop_inv.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_26));
#line 1219 "loop_inv.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 1) = ((MR_Box) (transform_hlds__loop_inv__RHSInputs_42));
#line 1219 "loop_inv.m"
                }
#line 1216 "loop_inv.m"
              }
#line 1214 "loop_inv.m"
              break;
#line 1214 "loop_inv.m"
            case (MR_Integer) 2:
#line 1222 "loop_inv.m"
              {
#line 1222 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__RHS_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Kind_29, (MR_Integer) 1)));
#line 1222 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Kind_29, (MR_Integer) 0)));

#line 1223 "loop_inv.m"
                {
#line 1223 "loop_inv.m"
                  transform_hlds__loop_inv__Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "loop_inv.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__RHS_44));
#line 1223 "loop_inv.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1223 "loop_inv.m"
                }
#line 1222 "loop_inv.m"
              }
#line 1214 "loop_inv.m"
              break;
#line 1214 "loop_inv.m"
            case (MR_Integer) 3:
#line 1214 "loop_inv.m"
#line 1214 "loop_inv.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__Kind_29, (MR_Integer) 0)))) {
#line 1214 "loop_inv.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1214 "loop_inv.m"
                case (MR_Integer) 0:
#line 1226 "loop_inv.m"
                  {
#line 1226 "loop_inv.m"
                    MR_Word transform_hlds__loop_inv__V_84_84;
#line 1226 "loop_inv.m"
                    MR_Word transform_hlds__loop_inv__RHS_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__Kind_29, (MR_Integer) 2)));
#line 1226 "loop_inv.m"
                    MR_Word transform_hlds__loop_inv__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__Kind_29, (MR_Integer) 1)));

#line 1227 "loop_inv.m"
                    {
#line 1227 "loop_inv.m"
                      transform_hlds__loop_inv__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "loop_inv.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_84_84, 0) = ((MR_Box) (transform_hlds__loop_inv__RHS_103));
#line 1227 "loop_inv.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1227 "loop_inv.m"
                    }
#line 1227 "loop_inv.m"
                    {
#line 1227 "loop_inv.m"
                      transform_hlds__loop_inv__Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "loop_inv.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_26));
#line 1227 "loop_inv.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 1) = ((MR_Box) (transform_hlds__loop_inv__V_84_84));
#line 1227 "loop_inv.m"
                    }
#line 1226 "loop_inv.m"
                  }
#line 1214 "loop_inv.m"
                  break;
#line 1214 "loop_inv.m"
                case (MR_Integer) 1:
#line 1234 "loop_inv.m"
#line 1234 "loop_inv.m"
                  switch (MR_tag((MR_Word) transform_hlds__loop_inv__UnifyRHS_27)) {
#line 1234 "loop_inv.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1234 "loop_inv.m"
                    case (MR_Integer) 0:
#line 1232 "loop_inv.m"
                      {
#line 1232 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_82_82;
#line 1232 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__RHS_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__UnifyRHS_27, (MR_Integer) 0)));

#line 1233 "loop_inv.m"
                        {
#line 1233 "loop_inv.m"
                          transform_hlds__loop_inv__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1233 "loop_inv.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_82_82, 0) = ((MR_Box) (transform_hlds__loop_inv__RHS_104));
#line 1233 "loop_inv.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1233 "loop_inv.m"
                        }
#line 1233 "loop_inv.m"
                        {
#line 1233 "loop_inv.m"
                          transform_hlds__loop_inv__Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1233 "loop_inv.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_26));
#line 1233 "loop_inv.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 1) = ((MR_Box) (transform_hlds__loop_inv__V_82_82));
#line 1233 "loop_inv.m"
                        }
#line 1232 "loop_inv.m"
                      }
#line 1234 "loop_inv.m"
                      break;
#line 1234 "loop_inv.m"
                    case (MR_Integer) 1:
#line 1235 "loop_inv.m"
                      {
#line 1236 "loop_inv.m"
                        {
#line 1236 "loop_inv.m"
                          transform_hlds__loop_inv__Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "loop_inv.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_26));
#line 1236 "loop_inv.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1236 "loop_inv.m"
                        }
#line 1235 "loop_inv.m"
                      }
#line 1234 "loop_inv.m"
                      break;
#line 1234 "loop_inv.m"
                    case (MR_Integer) 2:
#line 1238 "loop_inv.m"
                      {
#line 1240 "loop_inv.m"
                        {
#line 1240 "loop_inv.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.goal_inputs\'/2", (MR_String) "lambda goal");
                        }
#line 1238 "loop_inv.m"
                      }
#line 1234 "loop_inv.m"
                      break;
#line 1234 "loop_inv.m"
                  }
#line 1214 "loop_inv.m"
                  break;
#line 1214 "loop_inv.m"
              }
#line 1214 "loop_inv.m"
              break;
#line 1214 "loop_inv.m"
          }
#line 1208 "loop_inv.m"
        }
#line 1196 "loop_inv.m"
        break;
#line 1196 "loop_inv.m"
      case (MR_Integer) 2:
#line 1193 "loop_inv.m"
        {
#line 1193 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__TypeInfo_110_110;
#line 1193 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
#line 1193 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1193 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1193 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_96_96;
#line 1193 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_97_97;
#line 1193 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1193 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1193 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

#line 1194 "loop_inv.m"
          {
#line 1194 "loop_inv.m"
            transform_hlds__loop_inv__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1194 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_96_96, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1194 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_96_96, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_4));
#line 1194 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_96_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1194 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_96_96, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1194 "loop_inv.m"
          }
#line 1195 "loop_inv.m"
          {
#line 1195 "loop_inv.m"
            transform_hlds__loop_inv__V_97_97 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_9, transform_hlds__loop_inv__ProcId_10);
          }
#line 4454 "transform_hlds.loop_inv.c"
          transform_hlds__loop_inv__TypeInfo_110_110 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1194 "loop_inv.m"
          {
#line 1194 "loop_inv.m"
            mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_110_110, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_110_110, transform_hlds__loop_inv__V_96_96, transform_hlds__loop_inv__Args_11, transform_hlds__loop_inv__V_97_97, &transform_hlds__loop_inv__Inputs_6);
          }
#line 1193 "loop_inv.m"
        }
#line 1196 "loop_inv.m"
        break;
#line 1196 "loop_inv.m"
      case (MR_Integer) 3:
#line 1196 "loop_inv.m"
#line 1196 "loop_inv.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) {
#line 1196 "loop_inv.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1196 "loop_inv.m"
          case (MR_Integer) 0:
#line 1197 "loop_inv.m"
            {
#line 1197 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeInfo_115_115;
#line 1197 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__GenericCall_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1197 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__ArgModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1197 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__GenericCallVars_19;
#line 1197 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Inputs0_20;
#line 1197 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_95_95;
#line 1197 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Args_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1197 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1197 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

#line 1198 "loop_inv.m"
              {
#line 1198 "loop_inv.m"
                hlds__goal_util__generic_call_vars_2_p_0(transform_hlds__loop_inv__GenericCall_15, &transform_hlds__loop_inv__GenericCallVars_19);
              }
#line 1199 "loop_inv.m"
              {
#line 1199 "loop_inv.m"
                transform_hlds__loop_inv__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1199 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_95_95, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1199 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_95_95, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_3));
#line 1199 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_95_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1199 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_95_95, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1199 "loop_inv.m"
              }
#line 4514 "transform_hlds.loop_inv.c"
              transform_hlds__loop_inv__TypeInfo_115_115 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1199 "loop_inv.m"
              {
#line 1199 "loop_inv.m"
                mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_115_115, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_115_115, transform_hlds__loop_inv__V_95_95, transform_hlds__loop_inv__Args_98, transform_hlds__loop_inv__ArgModes_16, &transform_hlds__loop_inv__Inputs0_20);
              }
#line 1201 "loop_inv.m"
              {
#line 1201 "loop_inv.m"
                transform_hlds__loop_inv__Inputs_6 = mercury__list__f_43_43_2_f_0(transform_hlds__loop_inv__TypeInfo_115_115, transform_hlds__loop_inv__GenericCallVars_19, transform_hlds__loop_inv__Inputs0_20);
              }
#line 1197 "loop_inv.m"
            }
#line 1196 "loop_inv.m"
            break;
#line 1196 "loop_inv.m"
          case (MR_Integer) 1:
#line 1203 "loop_inv.m"
            {
#line 1203 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeInfo_121_121;
#line 1203 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__ForeignArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1203 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_91_91;
#line 1203 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_92_92;
#line 1203 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_93_93;
#line 1203 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__PredId_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1203 "loop_inv.m"
              MR_Integer transform_hlds__loop_inv__ProcId_100 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1203 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1203 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));
#line 1203 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 6)));
#line 1203 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 7)));

#line 1204 "loop_inv.m"
              {
#line 1204 "loop_inv.m"
                transform_hlds__loop_inv__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1204 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_91_91, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1204 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_91_91, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_1));
#line 1204 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1204 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_91_91, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1204 "loop_inv.m"
              }
#line 4571 "transform_hlds.loop_inv.c"
              transform_hlds__loop_inv__TypeInfo_121_121 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1205 "loop_inv.m"
              {
#line 1205 "loop_inv.m"
                transform_hlds__loop_inv__V_92_92 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, transform_hlds__loop_inv__TypeInfo_121_121, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[8], transform_hlds__loop_inv__ForeignArgs_22);
              }
#line 1206 "loop_inv.m"
              {
#line 1206 "loop_inv.m"
                transform_hlds__loop_inv__V_93_93 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_99, transform_hlds__loop_inv__ProcId_100);
              }
#line 1204 "loop_inv.m"
              {
#line 1204 "loop_inv.m"
                mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_121_121, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_121_121, transform_hlds__loop_inv__V_91_91, transform_hlds__loop_inv__V_92_92, transform_hlds__loop_inv__V_93_93, &transform_hlds__loop_inv__Inputs_6);
              }
#line 1203 "loop_inv.m"
            }
#line 1196 "loop_inv.m"
            break;
#line 1196 "loop_inv.m"
          case (MR_Integer) 2:
#line 1196 "loop_inv.m"
          case (MR_Integer) 3:
#line 1196 "loop_inv.m"
          case (MR_Integer) 4:
#line 1196 "loop_inv.m"
          case (MR_Integer) 5:
#line 1196 "loop_inv.m"
          case (MR_Integer) 6:
#line 1196 "loop_inv.m"
          case (MR_Integer) 7:
#line 1251 "loop_inv.m"
            {
#line 1252 "loop_inv.m"
              {
#line 1252 "loop_inv.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.goal_inputs\'/2", (MR_String) "compound goal");
              }
#line 1251 "loop_inv.m"
            }
#line 1196 "loop_inv.m"
            break;
#line 1196 "loop_inv.m"
        }
#line 1196 "loop_inv.m"
        break;
#line 1196 "loop_inv.m"
    }
#line 1190 "loop_inv.m"
    return transform_hlds__loop_inv__Inputs_6;
#line 1190 "loop_inv.m"
  }
#line 1188 "loop_inv.m"
}

#line 1177 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__argmodes_3_f_0(
#line 1177 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 1177 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredId_6,
#line 1177 "loop_inv.m"
  MR_Integer transform_hlds__loop_inv__ProcId_7)
#line 1177 "loop_inv.m"
{
#line 1179 "loop_inv.m"
  {
#line 1179 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1179 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ArgModes_8;
#line 1179 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ProcInfo_10;
#line 1180 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_9_9;

#line 1180 "loop_inv.m"
    {
#line 1180 "loop_inv.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__PredId_6, transform_hlds__loop_inv__ProcId_7, &transform_hlds__loop_inv__V_9_9, &transform_hlds__loop_inv__ProcInfo_10);
    }
#line 1181 "loop_inv.m"
    {
#line 1181 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__loop_inv__ProcInfo_10, &transform_hlds__loop_inv__ArgModes_8);
    }
#line 1179 "loop_inv.m"
    return transform_hlds__loop_inv__ArgModes_8;
#line 1179 "loop_inv.m"
  }
#line 1177 "loop_inv.m"
}

#line 1168 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__uniquely_used_args_4_p_0(
#line 1168 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 1168 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__X_6,
#line 1168 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__M_7,
#line 1168 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__X_4)
#line 1168 "loop_inv.m"
{
#line 1171 "loop_inv.m"
  {
#line 1171 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1171 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InInst_8;
#line 1172 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___OutInst_9;

#line 1171 "loop_inv.m"
    *transform_hlds__loop_inv__X_4 = transform_hlds__loop_inv__X_6;
#line 1172 "loop_inv.m"
    {
#line 1172 "loop_inv.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__M_7, &transform_hlds__loop_inv__InInst_8, &transform_hlds__loop_inv___OutInst_9);
    }
#line 1173 "loop_inv.m"
    {
#line 1173 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__InInst_8);
    }
#line 1173 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 1171 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1171 "loop_inv.m"
  }
#line 1168 "loop_inv.m"
}

#line 1164 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__case_goals_1_f_0_1(
#line 1164 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1164 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1164 "loop_inv.m"
{
#line 1164 "loop_inv.m"
  {
#line 1164 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1164 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1164 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_LambdaHeadVar__2_9;

#line 1164 "loop_inv.m"
    {
#line 1164 "loop_inv.m"
      transform_hlds__loop_inv__conv0_LambdaHeadVar__2_9 = transform_hlds__loop_inv__IntroducedFrom__func__case_goals__1164__1_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1164 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv0_LambdaHeadVar__2_9));
#line 1164 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1164 "loop_inv.m"
  }
#line 1164 "loop_inv.m"
}

#line 1161 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__case_goals_1_f_0(
#line 1161 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Cases_3)
#line 1161 "loop_inv.m"
{
#line 1163 "loop_inv.m"
  {
#line 1163 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1163 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__2_2;

#line 1164 "loop_inv.m"
    {
#line 1164 "loop_inv.m"
      transform_hlds__loop_inv__HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[7], transform_hlds__loop_inv__Cases_3);
    }
#line 1163 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__2_2;
#line 1163 "loop_inv.m"
  }
#line 1161 "loop_inv.m"
}

#line 1142 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_8(
#line 1142 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1142 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1142 "loop_inv.m"
{
#line 1142 "loop_inv.m"
  {
#line 1142 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1142 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1142 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv7_UsedVars_6;

#line 1142 "loop_inv.m"
    {
#line 1142 "loop_inv.m"
      transform_hlds__loop_inv__conv7_UsedVars_6 = transform_hlds__loop_inv__used_vars_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1142 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv7_UsedVars_6));
#line 1142 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1142 "loop_inv.m"
  }
#line 1142 "loop_inv.m"
}

#line 1109 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_7(
#line 1109 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1109 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1109 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1109 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1109 "loop_inv.m"
{
#line 1109 "loop_inv.m"
  {
#line 1109 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1109 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1109 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv6_X_4;

#line 1109 "loop_inv.m"
    {
#line 1109 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__uniquely_used_args_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv6_X_4);
    }
#line 1109 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1109 "loop_inv.m"
      {
#line 1109 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv6_X_4));
#line 1109 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1109 "loop_inv.m"
      }
#line 1109 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1109 "loop_inv.m"
  }
#line 1109 "loop_inv.m"
}

#line 1113 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_6(
#line 1113 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1113 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1113 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1113 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1113 "loop_inv.m"
{
#line 1113 "loop_inv.m"
  {
#line 1113 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1113 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1113 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv5_X_4;

#line 1113 "loop_inv.m"
    {
#line 1113 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__uniquely_used_args_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv5_X_4);
    }
#line 1113 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1113 "loop_inv.m"
      {
#line 1113 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv5_X_4));
#line 1113 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1113 "loop_inv.m"
      }
#line 1113 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1113 "loop_inv.m"
  }
#line 1113 "loop_inv.m"
}

#line 1139 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_5(
#line 1139 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1139 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1139 "loop_inv.m"
{
#line 1139 "loop_inv.m"
  {
#line 1139 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1139 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1139 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv4_UsedVars_6;

#line 1139 "loop_inv.m"
    {
#line 1139 "loop_inv.m"
      transform_hlds__loop_inv__conv4_UsedVars_6 = transform_hlds__loop_inv__used_vars_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1139 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv4_UsedVars_6));
#line 1139 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1139 "loop_inv.m"
  }
#line 1139 "loop_inv.m"
}

#line 1136 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_4(
#line 1136 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1136 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1136 "loop_inv.m"
{
#line 1136 "loop_inv.m"
  {
#line 1136 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1136 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1136 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv3_UsedVars_6;

#line 1136 "loop_inv.m"
    {
#line 1136 "loop_inv.m"
      transform_hlds__loop_inv__conv3_UsedVars_6 = transform_hlds__loop_inv__used_vars_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1136 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv3_UsedVars_6));
#line 1136 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1136 "loop_inv.m"
  }
#line 1136 "loop_inv.m"
}

#line 1128 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_3(
#line 1128 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1128 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1128 "loop_inv.m"
{
#line 1128 "loop_inv.m"
  {
#line 1128 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1128 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1128 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv2_HeadVar__2_2;

#line 1128 "loop_inv.m"
    {
#line 1128 "loop_inv.m"
      transform_hlds__loop_inv__conv2_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1128 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv2_HeadVar__2_2));
#line 1128 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1128 "loop_inv.m"
  }
#line 1128 "loop_inv.m"
}

#line 1126 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_2(
#line 1126 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1126 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1126 "loop_inv.m"
{
#line 1126 "loop_inv.m"
  {
#line 1126 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1126 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1126 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv1_HeadVar__2_2;

#line 1126 "loop_inv.m"
    {
#line 1126 "loop_inv.m"
      transform_hlds__loop_inv__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1126 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv1_HeadVar__2_2));
#line 1126 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1126 "loop_inv.m"
  }
#line 1126 "loop_inv.m"
}

#line 1125 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_1(
#line 1125 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1125 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1125 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1125 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1125 "loop_inv.m"
{
#line 1125 "loop_inv.m"
  {
#line 1125 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1125 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1125 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_X_4;

#line 1125 "loop_inv.m"
    {
#line 1125 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__uniquely_used_args_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv0_X_4);
    }
#line 1125 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1125 "loop_inv.m"
      {
#line 1125 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_X_4));
#line 1125 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1125 "loop_inv.m"
      }
#line 1125 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1125 "loop_inv.m"
  }
#line 1125 "loop_inv.m"
}

#line 1103 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0(
#line 1103 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
#line 1103 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5)
#line 1103 "loop_inv.m"
{
#line 1105 "loop_inv.m"
  while (MR_TRUE)
#line 1105 "loop_inv.m"
    {
#line 1105 "loop_inv.m"
      /* tailcall optimized into a loop */
#line 1105 "loop_inv.m"
      {
#line 1105 "loop_inv.m"
        MR_bool transform_hlds__loop_inv__succeeded;
#line 1105 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__UsedVars_6;
#line 1105 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 0)));
#line 1106 "loop_inv.m"
        MR_Word transform_hlds__loop_inv___GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 1)));

#line 1111 "loop_inv.m"
#line 1111 "loop_inv.m"
        switch (MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) {
#line 1111 "loop_inv.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1111 "loop_inv.m"
          case (MR_Integer) 0:
#line 1149 "loop_inv.m"
            {
#line 1149 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__SubGoal_41 = (MR_Word) MR_body(((MR_Word) transform_hlds__loop_inv__GoalExpr_7), (MR_Integer) 0);

#line 1150 "loop_inv.m"
              /* direct tailcall eliminated */
#line 1150 "loop_inv.m"
              {
#line 1150 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__Goal__tmp_copy_5 = transform_hlds__loop_inv__SubGoal_41;

#line 1150 "loop_inv.m"
                transform_hlds__loop_inv__Goal_5 = transform_hlds__loop_inv__Goal__tmp_copy_5;
#line 1150 "loop_inv.m"
              }
#line 1150 "loop_inv.m"
              continue;
#line 1149 "loop_inv.m"
            }
#line 1111 "loop_inv.m"
            break;
#line 1111 "loop_inv.m"
          case (MR_Integer) 1:
#line 1133 "loop_inv.m"
            transform_hlds__loop_inv__UsedVars_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1111 "loop_inv.m"
            break;
#line 1111 "loop_inv.m"
          case (MR_Integer) 2:
#line 1108 "loop_inv.m"
            {
#line 1108 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeInfo_73_73;
#line 1108 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
#line 1108 "loop_inv.m"
              MR_Integer transform_hlds__loop_inv__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1108 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1108 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_64_64;
#line 1108 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_65_65;
#line 1108 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1108 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1108 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

#line 1109 "loop_inv.m"
              {
#line 1109 "loop_inv.m"
                transform_hlds__loop_inv__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1109 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_64_64, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1109 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_64_64, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_7));
#line 1109 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1109 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_64_64, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1109 "loop_inv.m"
              }
#line 1110 "loop_inv.m"
              {
#line 1110 "loop_inv.m"
                transform_hlds__loop_inv__V_65_65 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_9, transform_hlds__loop_inv__ProcId_10);
              }
#line 5163 "transform_hlds.loop_inv.c"
              transform_hlds__loop_inv__TypeInfo_73_73 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1109 "loop_inv.m"
              {
#line 1109 "loop_inv.m"
                mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_73_73, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_73_73, transform_hlds__loop_inv__V_64_64, transform_hlds__loop_inv__Args_11, transform_hlds__loop_inv__V_65_65, &transform_hlds__loop_inv__UsedVars_6);
              }
#line 1108 "loop_inv.m"
            }
#line 1111 "loop_inv.m"
            break;
#line 1111 "loop_inv.m"
          case (MR_Integer) 3:
#line 1111 "loop_inv.m"
#line 1111 "loop_inv.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) {
#line 1111 "loop_inv.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1111 "loop_inv.m"
              case (MR_Integer) 0:
#line 1112 "loop_inv.m"
                {
#line 1112 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__TypeInfo_78_78;
#line 1112 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__Modes_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1112 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_63_63;
#line 1112 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__Args_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1112 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1112 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1112 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

#line 1113 "loop_inv.m"
                  {
#line 1113 "loop_inv.m"
                    transform_hlds__loop_inv__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1113 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_63_63, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1113 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_63_63, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_6));
#line 1113 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1113 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_63_63, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1113 "loop_inv.m"
                  }
#line 5214 "transform_hlds.loop_inv.c"
                  transform_hlds__loop_inv__TypeInfo_78_78 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1113 "loop_inv.m"
                  {
#line 1113 "loop_inv.m"
                    mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_78_78, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_78_78, transform_hlds__loop_inv__V_63_63, transform_hlds__loop_inv__Args_66, transform_hlds__loop_inv__Modes_16, &transform_hlds__loop_inv__UsedVars_6);
                  }
#line 1112 "loop_inv.m"
                }
#line 1111 "loop_inv.m"
                break;
#line 1111 "loop_inv.m"
              case (MR_Integer) 1:
#line 1117 "loop_inv.m"
                {
#line 1117 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__TypeCtorInfo_83_83;
#line 1117 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__TypeInfo_84_84;
#line 1117 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__ForeignArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1117 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__ExtraForeignArgs_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));
#line 1117 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__UsedArgVars_24;
#line 1117 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__UsedExtraArgVars_25;
#line 1117 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_58_58;
#line 1117 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_59_59;
#line 1117 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_60_60;
#line 1117 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__PredId_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1117 "loop_inv.m"
                  MR_Integer transform_hlds__loop_inv__ProcId_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1116 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1116 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 6)));
#line 1116 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 7)));

#line 1125 "loop_inv.m"
                  {
#line 1125 "loop_inv.m"
                    transform_hlds__loop_inv__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1125 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1125 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_1));
#line 1125 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1125 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1125 "loop_inv.m"
                  }
#line 5272 "transform_hlds.loop_inv.c"
                  transform_hlds__loop_inv__TypeCtorInfo_83_83 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 5274 "transform_hlds.loop_inv.c"
                  transform_hlds__loop_inv__TypeInfo_84_84 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1126 "loop_inv.m"
                  {
#line 1126 "loop_inv.m"
                    transform_hlds__loop_inv__V_59_59 = mercury__list__map_2_f_0(transform_hlds__loop_inv__TypeCtorInfo_83_83, transform_hlds__loop_inv__TypeInfo_84_84, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[5], transform_hlds__loop_inv__ForeignArgs_20);
                  }
#line 1127 "loop_inv.m"
                  {
#line 1127 "loop_inv.m"
                    transform_hlds__loop_inv__V_60_60 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_67, transform_hlds__loop_inv__ProcId_68);
                  }
#line 1125 "loop_inv.m"
                  {
#line 1125 "loop_inv.m"
                    mercury__list__filter_map_corresponding_4_p_0(transform_hlds__loop_inv__TypeInfo_84_84, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_84_84, transform_hlds__loop_inv__V_58_58, transform_hlds__loop_inv__V_59_59, transform_hlds__loop_inv__V_60_60, &transform_hlds__loop_inv__UsedArgVars_24);
                  }
#line 1128 "loop_inv.m"
                  {
#line 1128 "loop_inv.m"
                    transform_hlds__loop_inv__UsedExtraArgVars_25 = mercury__list__map_2_f_0(transform_hlds__loop_inv__TypeCtorInfo_83_83, transform_hlds__loop_inv__TypeInfo_84_84, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[6], transform_hlds__loop_inv__ExtraForeignArgs_21);
                  }
#line 1129 "loop_inv.m"
                  {
#line 1129 "loop_inv.m"
                    transform_hlds__loop_inv__UsedVars_6 = mercury__list__f_43_43_2_f_0(transform_hlds__loop_inv__TypeInfo_84_84, transform_hlds__loop_inv__UsedArgVars_24, transform_hlds__loop_inv__UsedExtraArgVars_25);
                  }
#line 1117 "loop_inv.m"
                }
#line 1111 "loop_inv.m"
                break;
#line 1111 "loop_inv.m"
              case (MR_Integer) 2:
#line 1135 "loop_inv.m"
                {
#line 1135 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__Conjuncts_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1135 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_56_56;
#line 1135 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_57_57;
#line 1135 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));

#line 1136 "loop_inv.m"
                  {
#line 1136 "loop_inv.m"
                    transform_hlds__loop_inv__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1136 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_6[5]));
#line 1136 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_4));
#line 1136 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1136 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1136 "loop_inv.m"
                  }
#line 1136 "loop_inv.m"
                  {
#line 1136 "loop_inv.m"
                    transform_hlds__loop_inv__V_56_56 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_57_57, transform_hlds__loop_inv__Conjuncts_32);
                  }
#line 1136 "loop_inv.m"
                  {
#line 1136 "loop_inv.m"
                    transform_hlds__loop_inv__UsedVars_6 = mercury__list__condense_1_f_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__V_56_56);
                  }
#line 1135 "loop_inv.m"
                }
#line 1111 "loop_inv.m"
                break;
#line 1111 "loop_inv.m"
              case (MR_Integer) 3:
#line 1138 "loop_inv.m"
                {
#line 1138 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__Disjuncts_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1138 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_54_54;
#line 1138 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_55_55;

#line 1139 "loop_inv.m"
                  {
#line 1139 "loop_inv.m"
                    transform_hlds__loop_inv__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1139 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_55_55, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_6[5]));
#line 1139 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_55_55, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_5));
#line 1139 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1139 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_55_55, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1139 "loop_inv.m"
                  }
#line 1139 "loop_inv.m"
                  {
#line 1139 "loop_inv.m"
                    transform_hlds__loop_inv__V_54_54 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_55_55, transform_hlds__loop_inv__Disjuncts_33);
                  }
#line 1139 "loop_inv.m"
                  {
#line 1139 "loop_inv.m"
                    transform_hlds__loop_inv__UsedVars_6 = mercury__list__condense_1_f_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__V_54_54);
                  }
#line 1138 "loop_inv.m"
                }
#line 1111 "loop_inv.m"
                break;
#line 1111 "loop_inv.m"
              case (MR_Integer) 4:
#line 1141 "loop_inv.m"
                {
#line 1141 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__Cases_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1141 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_51_51;
#line 1141 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_52_52;
#line 1141 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_53_53;
#line 1141 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1141 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));

#line 1142 "loop_inv.m"
                  {
#line 1142 "loop_inv.m"
                    transform_hlds__loop_inv__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1142 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_52_52, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_6[5]));
#line 1142 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_52_52, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_8));
#line 1142 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1142 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_52_52, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1142 "loop_inv.m"
                  }
#line 1143 "loop_inv.m"
                  {
#line 1143 "loop_inv.m"
                    transform_hlds__loop_inv__V_53_53 = transform_hlds__loop_inv__case_goals_1_f_0(transform_hlds__loop_inv__Cases_36);
                  }
#line 1142 "loop_inv.m"
                  {
#line 1142 "loop_inv.m"
                    transform_hlds__loop_inv__V_51_51 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_52_52, transform_hlds__loop_inv__V_53_53);
                  }
#line 1142 "loop_inv.m"
                  {
#line 1142 "loop_inv.m"
                    transform_hlds__loop_inv__UsedVars_6 = mercury__list__condense_1_f_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__V_51_51);
                  }
#line 1141 "loop_inv.m"
                }
#line 1111 "loop_inv.m"
                break;
#line 1111 "loop_inv.m"
              case (MR_Integer) 5:
#line 1152 "loop_inv.m"
                {
#line 1152 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__SubGoal_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1152 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv___Reason_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));

#line 1155 "loop_inv.m"
                  /* direct tailcall eliminated */
#line 1155 "loop_inv.m"
                  {
#line 1155 "loop_inv.m"
                    MR_Word transform_hlds__loop_inv__Goal__tmp_copy_5 = transform_hlds__loop_inv__SubGoal_69;

#line 1155 "loop_inv.m"
                    transform_hlds__loop_inv__Goal_5 = transform_hlds__loop_inv__Goal__tmp_copy_5;
#line 1155 "loop_inv.m"
                  }
#line 1155 "loop_inv.m"
                  continue;
#line 1152 "loop_inv.m"
                }
#line 1111 "loop_inv.m"
                break;
#line 1111 "loop_inv.m"
              case (MR_Integer) 6:
#line 1145 "loop_inv.m"
                {
#line 1145 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__TypeInfo_105_105 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1145 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__Cond_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1145 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__Then_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1145 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__Else_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1145 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_47_47;
#line 1145 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_48_48;
#line 1145 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_49_49;
#line 1145 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_50_50;
#line 1145 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));

#line 1146 "loop_inv.m"
                  {
#line 1146 "loop_inv.m"
                    transform_hlds__loop_inv__V_47_47 = transform_hlds__loop_inv__used_vars_2_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__Cond_38);
                  }
#line 1147 "loop_inv.m"
                  {
#line 1147 "loop_inv.m"
                    transform_hlds__loop_inv__V_49_49 = transform_hlds__loop_inv__used_vars_2_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__Then_39);
                  }
#line 1147 "loop_inv.m"
                  {
#line 1147 "loop_inv.m"
                    transform_hlds__loop_inv__V_50_50 = transform_hlds__loop_inv__used_vars_2_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__Else_40);
                  }
#line 1147 "loop_inv.m"
                  {
#line 1147 "loop_inv.m"
                    transform_hlds__loop_inv__V_48_48 = mercury__list__f_43_43_2_f_0(transform_hlds__loop_inv__TypeInfo_105_105, transform_hlds__loop_inv__V_49_49, transform_hlds__loop_inv__V_50_50);
                  }
#line 1146 "loop_inv.m"
                  {
#line 1146 "loop_inv.m"
                    transform_hlds__loop_inv__UsedVars_6 = mercury__list__f_43_43_2_f_0(transform_hlds__loop_inv__TypeInfo_105_105, transform_hlds__loop_inv__V_47_47, transform_hlds__loop_inv__V_48_48);
                  }
#line 1145 "loop_inv.m"
                }
#line 1111 "loop_inv.m"
                break;
#line 1111 "loop_inv.m"
              case (MR_Integer) 7:
#line 1157 "loop_inv.m"
                {
#line 1158 "loop_inv.m"
                  {
#line 1158 "loop_inv.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.used_vars\'/2", (MR_String) "shorthand");
                  }
#line 1157 "loop_inv.m"
                }
#line 1111 "loop_inv.m"
                break;
#line 1111 "loop_inv.m"
            }
#line 1111 "loop_inv.m"
            break;
#line 1111 "loop_inv.m"
        }
#line 1105 "loop_inv.m"
        return transform_hlds__loop_inv__UsedVars_6;
#line 1105 "loop_inv.m"
      }
#line 1105 "loop_inv.m"
      break;
#line 1105 "loop_inv.m"
    }
#line 1103 "loop_inv.m"
}

#line 1052 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_call_3_p_0(
#line 1052 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Replacement_4,
#line 1052 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__CallGoal_5,
#line 1052 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxCallGoal_6)
#line 1052 "loop_inv.m"
{
#line 1054 "loop_inv.m"
  {
#line 1054 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1054 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ReplacementExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Replacement_4, (MR_Integer) 0)));
#line 1054 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__CallExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__CallGoal_5, (MR_Integer) 0)));
#line 1054 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__CallInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__CallGoal_5, (MR_Integer) 1)));
#line 1055 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___ReplacementInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Replacement_4, (MR_Integer) 1)));
#line 1070 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxCallGoalExpr_14;
#line 1058 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ReplacementArgs0_11;
#line 1058 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Args0_12;
#line 1058 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Args_13;
#line 1058 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_18_18;
#line 1058 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__V_19_19;
#line 1058 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_20_20;
#line 1058 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_21_21;
#line 1058 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_22_22;
#line 1059 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_23_23;
#line 1059 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__V_24_24;
#line 1059 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_25_25;
#line 1059 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_26_26;
#line 1059 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_27_27;
#line 1061 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_28_28;
#line 1061 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__V_29_29;
#line 1061 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_31_31;
#line 1061 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_32_32;
#line 1061 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_33_33;
#line 1061 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_30_30;

#line 1058 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__ReplacementExpr_7)) == (MR_mktag((MR_Integer) 2)));
#line 1058 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1058 "loop_inv.m"
      {
#line 1058 "loop_inv.m"
        transform_hlds__loop_inv__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 0)));
#line 1058 "loop_inv.m"
        transform_hlds__loop_inv__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 1)));
#line 1058 "loop_inv.m"
        transform_hlds__loop_inv__ReplacementArgs0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 2)));
#line 1058 "loop_inv.m"
        transform_hlds__loop_inv__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 3)));
#line 1058 "loop_inv.m"
        transform_hlds__loop_inv__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 4)));
#line 1058 "loop_inv.m"
        transform_hlds__loop_inv__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 5)));
#line 1059 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__CallExpr_9)) == (MR_mktag((MR_Integer) 2)));
#line 1059 "loop_inv.m"
        if (transform_hlds__loop_inv__succeeded)
#line 1059 "loop_inv.m"
          {
#line 1059 "loop_inv.m"
            transform_hlds__loop_inv__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallExpr_9, (MR_Integer) 0)));
#line 1059 "loop_inv.m"
            transform_hlds__loop_inv__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallExpr_9, (MR_Integer) 1)));
#line 1059 "loop_inv.m"
            transform_hlds__loop_inv__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallExpr_9, (MR_Integer) 2)));
#line 1059 "loop_inv.m"
            transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallExpr_9, (MR_Integer) 3)));
#line 1059 "loop_inv.m"
            transform_hlds__loop_inv__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallExpr_9, (MR_Integer) 4)));
#line 1059 "loop_inv.m"
            transform_hlds__loop_inv__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallExpr_9, (MR_Integer) 5)));
#line 1060 "loop_inv.m"
            {
#line 1060 "loop_inv.m"
              transform_hlds__loop_inv__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(transform_hlds__loop_inv__Args0_12, transform_hlds__loop_inv__ReplacementArgs0_11, &transform_hlds__loop_inv__Args_13);
            }
#line 1061 "loop_inv.m"
            transform_hlds__loop_inv__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 0)));
#line 1061 "loop_inv.m"
            transform_hlds__loop_inv__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 1)));
#line 1061 "loop_inv.m"
            transform_hlds__loop_inv__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 2)));
#line 1061 "loop_inv.m"
            transform_hlds__loop_inv__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 3)));
#line 1061 "loop_inv.m"
            transform_hlds__loop_inv__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 4)));
#line 1061 "loop_inv.m"
            transform_hlds__loop_inv__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__ReplacementExpr_7, (MR_Integer) 5)));
#line 1061 "loop_inv.m"
            {
#line 1061 "loop_inv.m"
              transform_hlds__loop_inv__AuxCallGoalExpr_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1061 "loop_inv.m"
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__AuxCallGoalExpr_14, 0) = ((MR_Box) (transform_hlds__loop_inv__V_28_28));
#line 1061 "loop_inv.m"
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__AuxCallGoalExpr_14, 1) = ((MR_Box) (transform_hlds__loop_inv__V_29_29));
#line 1061 "loop_inv.m"
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__AuxCallGoalExpr_14, 2) = ((MR_Box) (transform_hlds__loop_inv__Args_13));
#line 1061 "loop_inv.m"
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__AuxCallGoalExpr_14, 3) = ((MR_Box) (transform_hlds__loop_inv__V_31_31));
#line 1061 "loop_inv.m"
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__AuxCallGoalExpr_14, 4) = ((MR_Box) (transform_hlds__loop_inv__V_32_32));
#line 1061 "loop_inv.m"
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__AuxCallGoalExpr_14, 5) = ((MR_Box) (transform_hlds__loop_inv__V_33_33));
#line 1061 "loop_inv.m"
            }
#line 1061 "loop_inv.m"
            transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1059 "loop_inv.m"
          }
#line 1058 "loop_inv.m"
      }
#line 1070 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1069 "loop_inv.m"
      {
#line 1069 "loop_inv.m"
        MR_Word base;
#line 1069 "loop_inv.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1069 "loop_inv.m"
        *transform_hlds__loop_inv__AuxCallGoal_6 = base;
#line 1069 "loop_inv.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxCallGoalExpr_14));
#line 1069 "loop_inv.m"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__CallInfo_10));
#line 1069 "loop_inv.m"
      }
#line 1070 "loop_inv.m"
    else
#line 1071 "loop_inv.m"
      {
#line 1071 "loop_inv.m"
        {
#line 1071 "loop_inv.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "predicate \140transform_hlds.loop_inv.gen_aux_call\'/3", (MR_String) "args not both ordinary calls");
#line 1071 "loop_inv.m"
          return;
        }
#line 1071 "loop_inv.m"
      }
#line 1054 "loop_inv.m"
  }
#line 1052 "loop_inv.m"
}

#line 1042 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_case_4_p_0(
#line 1042 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_5,
#line 1042 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Replacement_6,
#line 1042 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Case_7,
#line 1042 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxCase_8)
#line 1042 "loop_inv.m"
{
#line 1045 "loop_inv.m"
  {
#line 1045 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1045 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__MainConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_7, (MR_Integer) 0)));
#line 1045 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__OtherConsIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_7, (MR_Integer) 1)));
#line 1045 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_7, (MR_Integer) 2)));
#line 1045 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxGoal_12;

#line 1047 "loop_inv.m"
    {
#line 1047 "loop_inv.m"
      transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Replacement_6, transform_hlds__loop_inv__Goal_11, &transform_hlds__loop_inv__AuxGoal_12);
    }
#line 1048 "loop_inv.m"
    {
#line 1048 "loop_inv.m"
      MR_Word base;
#line 1048 "loop_inv.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1048 "loop_inv.m"
      *transform_hlds__loop_inv__AuxCase_8 = base;
#line 1048 "loop_inv.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__MainConsId_9));
#line 1048 "loop_inv.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__OtherConsIds_10));
#line 1048 "loop_inv.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxGoal_12));
#line 1048 "loop_inv.m"
    }
#line 1045 "loop_inv.m"
  }
#line 1042 "loop_inv.m"
}

#line 1015 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_3(
#line 1015 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1015 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1015 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2)
#line 1015 "loop_inv.m"
{
#line 1015 "loop_inv.m"
  {
#line 1015 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1015 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv2_AuxCase_8;

#line 1015 "loop_inv.m"
    {
#line 1015 "loop_inv.m"
      transform_hlds__loop_inv__gen_out_proc_case_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), &transform_hlds__loop_inv__conv2_AuxCase_8);
    }
#line 1015 "loop_inv.m"
    *transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv2_AuxCase_8));
#line 1015 "loop_inv.m"
  }
#line 1015 "loop_inv.m"
}

#line 1010 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_2(
#line 1010 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1010 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1010 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2)
#line 1010 "loop_inv.m"
{
#line 1010 "loop_inv.m"
  {
#line 1010 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1010 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv1_AuxGoal_8;

#line 1010 "loop_inv.m"
    {
#line 1010 "loop_inv.m"
      transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), &transform_hlds__loop_inv__conv1_AuxGoal_8);
    }
#line 1010 "loop_inv.m"
    *transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv1_AuxGoal_8));
#line 1010 "loop_inv.m"
  }
#line 1010 "loop_inv.m"
}

#line 1005 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_1(
#line 1005 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1005 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1005 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2)
#line 1005 "loop_inv.m"
{
#line 1005 "loop_inv.m"
  {
#line 1005 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1005 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_AuxGoal_8;

#line 1005 "loop_inv.m"
    {
#line 1005 "loop_inv.m"
      transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), &transform_hlds__loop_inv__conv0_AuxGoal_8);
    }
#line 1005 "loop_inv.m"
    *transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv0_AuxGoal_8));
#line 1005 "loop_inv.m"
  }
#line 1005 "loop_inv.m"
}

#line 985 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(
#line 985 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_5,
#line 985 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Replacement_6,
#line 985 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_7,
#line 985 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxGoal_8)
#line 985 "loop_inv.m"
{
#line 988 "loop_inv.m"
  {
#line 988 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 988 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_7, (MR_Integer) 0)));
#line 988 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_7, (MR_Integer) 1)));

#line 997 "loop_inv.m"
#line 997 "loop_inv.m"
    switch (MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_9)) {
#line 997 "loop_inv.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 997 "loop_inv.m"
      case (MR_Integer) 0:
#line 1019 "loop_inv.m"
        {
#line 1019 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__SubGoal_44 = (MR_Word) MR_body(((MR_Word) transform_hlds__loop_inv__GoalExpr_9), (MR_Integer) 0);
#line 1019 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__AuxSubGoal_45;
#line 1019 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__AuxGoalExpr_63;

#line 1020 "loop_inv.m"
          {
#line 1020 "loop_inv.m"
            transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Replacement_6, transform_hlds__loop_inv__SubGoal_44, &transform_hlds__loop_inv__AuxSubGoal_45);
          }
#line 1021 "loop_inv.m"
          transform_hlds__loop_inv__AuxGoalExpr_63 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__loop_inv__AuxSubGoal_45);
#line 1022 "loop_inv.m"
          {
#line 1022 "loop_inv.m"
            MR_Word base;
#line 1022 "loop_inv.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1022 "loop_inv.m"
            *transform_hlds__loop_inv__AuxGoal_8 = base;
#line 1022 "loop_inv.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_63));
#line 1022 "loop_inv.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
#line 1022 "loop_inv.m"
          }
#line 1019 "loop_inv.m"
        }
#line 997 "loop_inv.m"
        break;
#line 997 "loop_inv.m"
      case (MR_Integer) 1:
#line 1002 "loop_inv.m"
        *transform_hlds__loop_inv__AuxGoal_8 = transform_hlds__loop_inv__Goal_7;
#line 997 "loop_inv.m"
        break;
#line 997 "loop_inv.m"
      case (MR_Integer) 2:
#line 991 "loop_inv.m"
        {
#line 991 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 0)));
#line 991 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
#line 991 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 2)));
#line 991 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 3)));
#line 991 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 4)));
#line 991 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 5)));
#line 992 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PPId_5, (MR_Integer) 0)));
#line 992 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PPId_5, (MR_Integer) 1)));

#line 992 "loop_inv.m"
          {
#line 992 "loop_inv.m"
            transform_hlds__loop_inv__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__loop_inv__PredId_11, transform_hlds__loop_inv__V_77_77);
          }
#line 992 "loop_inv.m"
          if (transform_hlds__loop_inv__succeeded)
#line 992 "loop_inv.m"
            transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__ProcId_12 == transform_hlds__loop_inv__V_78_78);
#line 994 "loop_inv.m"
          if (transform_hlds__loop_inv__succeeded)
#line 993 "loop_inv.m"
            {
#line 993 "loop_inv.m"
              transform_hlds__loop_inv__gen_aux_call_3_p_0(transform_hlds__loop_inv__Replacement_6, transform_hlds__loop_inv__Goal_7, transform_hlds__loop_inv__AuxGoal_8);
#line 993 "loop_inv.m"
              return;
            }
#line 994 "loop_inv.m"
          else
#line 995 "loop_inv.m"
            *transform_hlds__loop_inv__AuxGoal_8 = transform_hlds__loop_inv__Goal_7;
#line 991 "loop_inv.m"
        }
#line 997 "loop_inv.m"
        break;
#line 997 "loop_inv.m"
      case (MR_Integer) 3:
#line 997 "loop_inv.m"
#line 997 "loop_inv.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 0)))) {
#line 997 "loop_inv.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 997 "loop_inv.m"
          case (MR_Integer) 0:
#line 997 "loop_inv.m"
          case (MR_Integer) 1:
#line 1002 "loop_inv.m"
            *transform_hlds__loop_inv__AuxGoal_8 = transform_hlds__loop_inv__Goal_7;
#line 997 "loop_inv.m"
            break;
#line 997 "loop_inv.m"
          case (MR_Integer) 2:
#line 1004 "loop_inv.m"
            {
#line 1004 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeCtorInfo_70_70;
#line 1004 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__ConjType_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
#line 1004 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Conjuncts_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 2)));
#line 1004 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxConjuncts_36;
#line 1004 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_37;
#line 1004 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_60_60;

#line 1005 "loop_inv.m"
              {
#line 1005 "loop_inv.m"
                transform_hlds__loop_inv__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1005 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_60_60, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[2]));
#line 1005 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_60_60, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_1));
#line 1005 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1005 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_60_60, 3) = ((MR_Box) (transform_hlds__loop_inv__PPId_5));
#line 1005 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_60_60, 4) = ((MR_Box) (transform_hlds__loop_inv__Replacement_6));
#line 1005 "loop_inv.m"
              }
#line 6024 "transform_hlds.loop_inv.c"
              transform_hlds__loop_inv__TypeCtorInfo_70_70 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1005 "loop_inv.m"
              {
#line 1005 "loop_inv.m"
                mercury__list__map_3_p_0(transform_hlds__loop_inv__TypeCtorInfo_70_70, transform_hlds__loop_inv__TypeCtorInfo_70_70, transform_hlds__loop_inv__V_60_60, transform_hlds__loop_inv__Conjuncts_35, &transform_hlds__loop_inv__AuxConjuncts_36);
              }
#line 1006 "loop_inv.m"
              {
#line 1006 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1006 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1006 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_37, 1) = ((MR_Box) (transform_hlds__loop_inv__ConjType_34));
#line 1006 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_37, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxConjuncts_36));
#line 1006 "loop_inv.m"
              }
#line 1007 "loop_inv.m"
              {
#line 1007 "loop_inv.m"
                MR_Word base;
#line 1007 "loop_inv.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1007 "loop_inv.m"
                *transform_hlds__loop_inv__AuxGoal_8 = base;
#line 1007 "loop_inv.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_37));
#line 1007 "loop_inv.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
#line 1007 "loop_inv.m"
              }
#line 1004 "loop_inv.m"
            }
#line 997 "loop_inv.m"
            break;
#line 997 "loop_inv.m"
          case (MR_Integer) 3:
#line 1009 "loop_inv.m"
            {
#line 1009 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeCtorInfo_73_73;
#line 1009 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Disjuncts_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
#line 1009 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxDisjuncts_39;
#line 1009 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_59_59;
#line 1009 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_61;

#line 1010 "loop_inv.m"
              {
#line 1010 "loop_inv.m"
                transform_hlds__loop_inv__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1010 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[2]));
#line 1010 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_2));
#line 1010 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1010 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 3) = ((MR_Box) (transform_hlds__loop_inv__PPId_5));
#line 1010 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 4) = ((MR_Box) (transform_hlds__loop_inv__Replacement_6));
#line 1010 "loop_inv.m"
              }
#line 6092 "transform_hlds.loop_inv.c"
              transform_hlds__loop_inv__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1010 "loop_inv.m"
              {
#line 1010 "loop_inv.m"
                mercury__list__map_3_p_0(transform_hlds__loop_inv__TypeCtorInfo_73_73, transform_hlds__loop_inv__TypeCtorInfo_73_73, transform_hlds__loop_inv__V_59_59, transform_hlds__loop_inv__Disjuncts_38, &transform_hlds__loop_inv__AuxDisjuncts_39);
              }
#line 1011 "loop_inv.m"
              {
#line 1011 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoalExpr_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1011 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_61, 1) = ((MR_Box) (transform_hlds__loop_inv__AuxDisjuncts_39));
#line 1011 "loop_inv.m"
              }
#line 1012 "loop_inv.m"
              {
#line 1012 "loop_inv.m"
                MR_Word base;
#line 1012 "loop_inv.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1012 "loop_inv.m"
                *transform_hlds__loop_inv__AuxGoal_8 = base;
#line 1012 "loop_inv.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_61));
#line 1012 "loop_inv.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
#line 1012 "loop_inv.m"
              }
#line 1009 "loop_inv.m"
            }
#line 997 "loop_inv.m"
            break;
#line 997 "loop_inv.m"
          case (MR_Integer) 4:
#line 1014 "loop_inv.m"
            {
#line 1014 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeCtorInfo_76_76;
#line 1014 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
#line 1014 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__CanFail_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 2)));
#line 1014 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Cases_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 3)));
#line 1014 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxCases_43;
#line 1014 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_58_58;
#line 1014 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_62;

#line 1015 "loop_inv.m"
              {
#line 1015 "loop_inv.m"
                transform_hlds__loop_inv__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1015 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[3]));
#line 1015 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_out_proc_goal_4_p_0_3));
#line 1015 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1015 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 3) = ((MR_Box) (transform_hlds__loop_inv__PPId_5));
#line 1015 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 4) = ((MR_Box) (transform_hlds__loop_inv__Replacement_6));
#line 1015 "loop_inv.m"
              }
#line 6162 "transform_hlds.loop_inv.c"
              transform_hlds__loop_inv__TypeCtorInfo_76_76 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 1015 "loop_inv.m"
              {
#line 1015 "loop_inv.m"
                mercury__list__map_3_p_0(transform_hlds__loop_inv__TypeCtorInfo_76_76, transform_hlds__loop_inv__TypeCtorInfo_76_76, transform_hlds__loop_inv__V_58_58, transform_hlds__loop_inv__Cases_42, &transform_hlds__loop_inv__AuxCases_43);
              }
#line 1016 "loop_inv.m"
              {
#line 1016 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoalExpr_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1016 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 1) = ((MR_Box) (transform_hlds__loop_inv__Var_40));
#line 1016 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 2) = ((MR_Box) (transform_hlds__loop_inv__CanFail_41));
#line 1016 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 3) = ((MR_Box) (transform_hlds__loop_inv__AuxCases_43));
#line 1016 "loop_inv.m"
              }
#line 1017 "loop_inv.m"
              {
#line 1017 "loop_inv.m"
                MR_Word base;
#line 1017 "loop_inv.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1017 "loop_inv.m"
                *transform_hlds__loop_inv__AuxGoal_8 = base;
#line 1017 "loop_inv.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_62));
#line 1017 "loop_inv.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
#line 1017 "loop_inv.m"
              }
#line 1014 "loop_inv.m"
            }
#line 997 "loop_inv.m"
            break;
#line 997 "loop_inv.m"
          case (MR_Integer) 5:
#line 1024 "loop_inv.m"
            {
#line 1024 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Reason_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
#line 1024 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_64;
#line 1024 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__SubGoal_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 2)));
#line 1024 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxSubGoal_66;

#line 1027 "loop_inv.m"
              {
#line 1027 "loop_inv.m"
                transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Replacement_6, transform_hlds__loop_inv__SubGoal_65, &transform_hlds__loop_inv__AuxSubGoal_66);
              }
#line 1028 "loop_inv.m"
              {
#line 1028 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoalExpr_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1028 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 1) = ((MR_Box) (transform_hlds__loop_inv__Reason_46));
#line 1028 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxSubGoal_66));
#line 1028 "loop_inv.m"
              }
#line 1029 "loop_inv.m"
              {
#line 1029 "loop_inv.m"
                MR_Word base;
#line 1029 "loop_inv.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1029 "loop_inv.m"
                *transform_hlds__loop_inv__AuxGoal_8 = base;
#line 1029 "loop_inv.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_64));
#line 1029 "loop_inv.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
#line 1029 "loop_inv.m"
              }
#line 1024 "loop_inv.m"
            }
#line 997 "loop_inv.m"
            break;
#line 997 "loop_inv.m"
          case (MR_Integer) 6:
#line 1031 "loop_inv.m"
            {
#line 1031 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Vars_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
#line 1031 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Cond_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 2)));
#line 1031 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Then_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 3)));
#line 1031 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Else_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 4)));
#line 1031 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxCond_51;
#line 1031 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxThen_52;
#line 1031 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxElse_53;
#line 1031 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_67;

#line 1032 "loop_inv.m"
              {
#line 1032 "loop_inv.m"
                transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Replacement_6, transform_hlds__loop_inv__Cond_48, &transform_hlds__loop_inv__AuxCond_51);
              }
#line 1033 "loop_inv.m"
              {
#line 1033 "loop_inv.m"
                transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Replacement_6, transform_hlds__loop_inv__Then_49, &transform_hlds__loop_inv__AuxThen_52);
              }
#line 1034 "loop_inv.m"
              {
#line 1034 "loop_inv.m"
                transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Replacement_6, transform_hlds__loop_inv__Else_50, &transform_hlds__loop_inv__AuxElse_53);
              }
#line 1035 "loop_inv.m"
              {
#line 1035 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoalExpr_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1035 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1035 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 1) = ((MR_Box) (transform_hlds__loop_inv__Vars_47));
#line 1035 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxCond_51));
#line 1035 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 3) = ((MR_Box) (transform_hlds__loop_inv__AuxThen_52));
#line 1035 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 4) = ((MR_Box) (transform_hlds__loop_inv__AuxElse_53));
#line 1035 "loop_inv.m"
              }
#line 1036 "loop_inv.m"
              {
#line 1036 "loop_inv.m"
                MR_Word base;
#line 1036 "loop_inv.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1036 "loop_inv.m"
                *transform_hlds__loop_inv__AuxGoal_8 = base;
#line 1036 "loop_inv.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_67));
#line 1036 "loop_inv.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
#line 1036 "loop_inv.m"
              }
#line 1031 "loop_inv.m"
            }
#line 997 "loop_inv.m"
            break;
#line 997 "loop_inv.m"
          case (MR_Integer) 7:
#line 1038 "loop_inv.m"
            {
#line 1039 "loop_inv.m"
              {
#line 1039 "loop_inv.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "predicate \140transform_hlds.loop_inv.gen_out_proc_goal\'/4", (MR_String) "shorthand");
#line 1039 "loop_inv.m"
                return;
              }
#line 1038 "loop_inv.m"
            }
#line 997 "loop_inv.m"
            break;
#line 997 "loop_inv.m"
        }
#line 997 "loop_inv.m"
        break;
#line 997 "loop_inv.m"
    }
#line 988 "loop_inv.m"
  }
#line 985 "loop_inv.m"
}

#line 951 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_8_p_0(
#line 951 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredProcId_9,
#line 951 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredInfo0_10,
#line 951 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ProcInfo0_11,
#line 951 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__ProcInfo_12,
#line 951 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Replacement_13,
#line 951 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Body0_14,
#line 951 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_25,
#line 951 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_26)
#line 951 "loop_inv.m"
{
#line 956 "loop_inv.m"
  {
#line 956 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 956 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Body_16;
#line 956 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__PredId_17;
#line 956 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__ProcId_18;
#line 956 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__VarSet_19;
#line 956 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__VarTypes_20;
#line 956 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVars_21;
#line 956 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__RttiVarMaps_22;
#line 956 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ProcInfo1_23;
#line 956 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ProcInfo2_24;
#line 956 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_29_29;

#line 958 "loop_inv.m"
    {
#line 958 "loop_inv.m"
      transform_hlds__loop_inv__gen_out_proc_goal_4_p_0(transform_hlds__loop_inv__PredProcId_9, transform_hlds__loop_inv__Replacement_13, transform_hlds__loop_inv__Body0_14, &transform_hlds__loop_inv__Body_16);
    }
#line 961 "loop_inv.m"
    transform_hlds__loop_inv__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PredProcId_9, (MR_Integer) 0)));
#line 961 "loop_inv.m"
    transform_hlds__loop_inv__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PredProcId_9, (MR_Integer) 1)));
#line 963 "loop_inv.m"
    {
#line 963 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__loop_inv__ProcInfo0_11, &transform_hlds__loop_inv__VarSet_19);
    }
#line 964 "loop_inv.m"
    {
#line 964 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__loop_inv__ProcInfo0_11, &transform_hlds__loop_inv__VarTypes_20);
    }
#line 965 "loop_inv.m"
    {
#line 965 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__loop_inv__ProcInfo0_11, &transform_hlds__loop_inv__HeadVars_21);
    }
#line 966 "loop_inv.m"
    {
#line 966 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__loop_inv__ProcInfo0_11, &transform_hlds__loop_inv__RttiVarMaps_22);
    }
#line 968 "loop_inv.m"
    {
#line 968 "loop_inv.m"
      hlds__hlds_pred__proc_info_set_body_7_p_0(transform_hlds__loop_inv__VarSet_19, transform_hlds__loop_inv__VarTypes_20, transform_hlds__loop_inv__HeadVars_21, transform_hlds__loop_inv__Body_16, transform_hlds__loop_inv__RttiVarMaps_22, transform_hlds__loop_inv__ProcInfo0_11, &transform_hlds__loop_inv__ProcInfo1_23);
    }
#line 971 "loop_inv.m"
    {
#line 971 "loop_inv.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__loop_inv__ProcInfo1_23, &transform_hlds__loop_inv__ProcInfo2_24);
    }
#line 973 "loop_inv.m"
    {
#line 973 "loop_inv.m"
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__loop_inv__ProcInfo2_24, transform_hlds__loop_inv__ProcInfo_12, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_25, &transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_29_29);
    }
#line 976 "loop_inv.m"
    {
#line 976 "loop_inv.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__loop_inv__PredId_17, transform_hlds__loop_inv__ProcId_18, transform_hlds__loop_inv__PredInfo0_10, *transform_hlds__loop_inv__ProcInfo_12, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_29_29, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_26);
#line 976 "loop_inv.m"
      return;
    }
#line 956 "loop_inv.m"
  }
#line 951 "loop_inv.m"
}

#line 588 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_1(
#line 588 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 588 "loop_inv.m"
{
#line 588 "loop_inv.m"
  {
#line 588 "loop_inv.m"
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 588 "loop_inv.m"
    MR_builtin_longjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__commit_0, 1);
#line 588 "loop_inv.m"
  }
#line 588 "loop_inv.m"
}

#line 589 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_3(
#line 589 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 589 "loop_inv.m"
{
#line 589 "loop_inv.m"
  {
#line 589 "loop_inv.m"
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 589 "loop_inv.m"
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__InvariantGoal_13 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__conv0_InvariantGoal_13);
#line 589 "loop_inv.m"
    {
#line 589 "loop_inv.m"
      transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_2(transform_hlds__loop_inv__env_ptr);
#line 589 "loop_inv.m"
      return;
    }
#line 589 "loop_inv.m"
  }
#line 589 "loop_inv.m"
}

#line 588 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_2(
#line 588 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 588 "loop_inv.m"
{
#line 588 "loop_inv.m"
  {
#line 588 "loop_inv.m"
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 588 "loop_inv.m"
    {
#line 477 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_16_16;
#line 477 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_18_18;

#line 477 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__InvariantGoal_13, (MR_Integer) 0)));
#line 477 "loop_inv.m"
      transform_hlds__loop_inv__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__InvariantGoal_13, (MR_Integer) 1)));
#line 477 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__Goal_5, (MR_Integer) 0)));
#line 477 "loop_inv.m"
      transform_hlds__loop_inv__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__Goal_5, (MR_Integer) 1)));
#line 479 "loop_inv.m"
      {
#line 479 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17);
      }
#line 480 "loop_inv.m"
      if (!((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded))
#line 482 "loop_inv.m"
        {
#line 482 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__TypeInfo_21_33;
#line 482 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__PredId_19;
#line 482 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__ProcId_20;
#line 482 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__Args_21;
#line 482 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_28_28;
#line 482 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__V_29_29;
#line 482 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_30_30;
#line 481 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___BuiltinX_22;
#line 481 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___ContextX_23;
#line 481 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___SymNameX_24;
#line 483 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___BuiltinY_25;
#line 483 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___ContextY_26;
#line 483 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___SymNameY_27;

#line 481 "loop_inv.m"
          (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15)) == (MR_mktag((MR_Integer) 2)));
#line 481 "loop_inv.m"
          if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded)
#line 481 "loop_inv.m"
            {
#line 481 "loop_inv.m"
              {
#line 481 "loop_inv.m"
                transform_hlds__loop_inv__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15, (MR_Integer) 0)));
#line 481 "loop_inv.m"
                transform_hlds__loop_inv__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15, (MR_Integer) 1)));
#line 481 "loop_inv.m"
                transform_hlds__loop_inv__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15, (MR_Integer) 2)));
#line 481 "loop_inv.m"
                transform_hlds__loop_inv___BuiltinX_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15, (MR_Integer) 3)));
#line 481 "loop_inv.m"
                transform_hlds__loop_inv___ContextX_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15, (MR_Integer) 4)));
#line 481 "loop_inv.m"
                transform_hlds__loop_inv___SymNameX_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprX_15, (MR_Integer) 5)));
#line 481 "loop_inv.m"
              }
#line 482 "loop_inv.m"
              {
#line 483 "loop_inv.m"
                (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17)) == (MR_mktag((MR_Integer) 2)));
#line 483 "loop_inv.m"
                if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded)
#line 483 "loop_inv.m"
                  {
#line 483 "loop_inv.m"
                    {
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17, (MR_Integer) 0)));
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17, (MR_Integer) 1)));
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17, (MR_Integer) 2)));
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv___BuiltinY_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17, (MR_Integer) 3)));
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv___ContextY_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17, (MR_Integer) 4)));
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv___SymNameY_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__GoalExprY_17, (MR_Integer) 5)));
#line 483 "loop_inv.m"
                    }
#line 482 "loop_inv.m"
                    {
#line 483 "loop_inv.m"
                      {
#line 483 "loop_inv.m"
                        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__loop_inv__PredId_19, transform_hlds__loop_inv__V_28_28);
                      }
#line 482 "loop_inv.m"
                      if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded)
#line 482 "loop_inv.m"
                        {
#line 483 "loop_inv.m"
                          (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = (transform_hlds__loop_inv__ProcId_20 == transform_hlds__loop_inv__V_29_29);
#line 482 "loop_inv.m"
                          if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded)
#line 482 "loop_inv.m"
                            {
#line 6618 "transform_hlds.loop_inv.c"
                              transform_hlds__loop_inv__TypeInfo_21_33 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4];
#line 483 "loop_inv.m"
                              {
#line 483 "loop_inv.m"
                                (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__loop_inv__TypeInfo_21_33, ((MR_Box) (transform_hlds__loop_inv__Args_21)), ((MR_Box) (transform_hlds__loop_inv__V_30_30)));
                              }
#line 482 "loop_inv.m"
                            }
#line 482 "loop_inv.m"
                        }
#line 482 "loop_inv.m"
                    }
#line 483 "loop_inv.m"
                  }
#line 482 "loop_inv.m"
              }
#line 481 "loop_inv.m"
            }
#line 482 "loop_inv.m"
        }
#line 480 "loop_inv.m"
      if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded)
#line 480 "loop_inv.m"
        {
#line 480 "loop_inv.m"
          transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_1(transform_hlds__loop_inv__env_ptr);
#line 480 "loop_inv.m"
          return;
        }
#line 588 "loop_inv.m"
    }
#line 588 "loop_inv.m"
  }
#line 588 "loop_inv.m"
}

#line 588 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_4(
#line 588 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 588 "loop_inv.m"
{
#line 588 "loop_inv.m"
  {
#line 588 "loop_inv.m"
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 588 "loop_inv.m"
    if (MR_builtin_setjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__commit_0) == 0)
#line 588 "loop_inv.m"
      {
#line 588 "loop_inv.m"
        {
#line 589 "loop_inv.m"
          {
#line 589 "loop_inv.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__conv0_InvariantGoal_13, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__V_7_7, transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_3, transform_hlds__loop_inv__env_ptr);
          }
#line 588 "loop_inv.m"
        }
#line 588 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = MR_FALSE;
#line 588 "loop_inv.m"
      }
#line 588 "loop_inv.m"
    else
#line 588 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded = MR_TRUE;
#line 588 "loop_inv.m"
  }
#line 588 "loop_inv.m"
}

#line 936 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0(
#line 936 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Info_4,
#line 936 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5,
#line 936 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxGoal_6)
#line 936 "loop_inv.m"
{
#line 936 "loop_inv.m"
  {
#line 936 "loop_inv.m"
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0_s transform_hlds__loop_inv__env;

#line 936 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__Goal_5 = transform_hlds__loop_inv__Goal_5;
#line 942 "loop_inv.m"
    {
#line 940 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 0)));
#line 940 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_9_9;
#line 940 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_10_10;

#line 940 "loop_inv.m"
      (transform_hlds__loop_inv__env).transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 1)));
#line 940 "loop_inv.m"
      transform_hlds__loop_inv__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 2)));
#line 940 "loop_inv.m"
      transform_hlds__loop_inv__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 3)));
#line 588 "loop_inv.m"
      {
#line 588 "loop_inv.m"
        transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_4(&transform_hlds__loop_inv__env);
      }
#line 942 "loop_inv.m"
      if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__succeeded)
#line 941 "loop_inv.m"
        {
#line 941 "loop_inv.m"
          *transform_hlds__loop_inv__AuxGoal_6 = hlds__make_goal__true_goal_0_f_0();
        }
#line 942 "loop_inv.m"
      else
#line 943 "loop_inv.m"
        *transform_hlds__loop_inv__AuxGoal_6 = (transform_hlds__loop_inv__env).transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0_env_0__Goal_5;
#line 942 "loop_inv.m"
    }
#line 936 "loop_inv.m"
  }
#line 936 "loop_inv.m"
}

#line 927 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_case_3_p_0(
#line 927 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Info_4,
#line 927 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Case_5,
#line 927 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxCase_6)
#line 927 "loop_inv.m"
{
#line 929 "loop_inv.m"
  {
#line 929 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 929 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__MainConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_5, (MR_Integer) 0)));
#line 929 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__OtherConsIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_5, (MR_Integer) 1)));
#line 929 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_5, (MR_Integer) 2)));
#line 929 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxGoal_10;

#line 931 "loop_inv.m"
    {
#line 931 "loop_inv.m"
      transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Goal_9, &transform_hlds__loop_inv__AuxGoal_10);
    }
#line 932 "loop_inv.m"
    {
#line 932 "loop_inv.m"
      MR_Word base;
#line 932 "loop_inv.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 932 "loop_inv.m"
      *transform_hlds__loop_inv__AuxCase_6 = base;
#line 932 "loop_inv.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__MainConsId_7));
#line 932 "loop_inv.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__OtherConsIds_8));
#line 932 "loop_inv.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxGoal_10));
#line 932 "loop_inv.m"
    }
#line 929 "loop_inv.m"
  }
#line 927 "loop_inv.m"
}

#line 900 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_3(
#line 900 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 900 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 900 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2)
#line 900 "loop_inv.m"
{
#line 900 "loop_inv.m"
  {
#line 900 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 900 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv2_AuxCase_6;

#line 900 "loop_inv.m"
    {
#line 900 "loop_inv.m"
      transform_hlds__loop_inv__gen_aux_proc_case_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), &transform_hlds__loop_inv__conv2_AuxCase_6);
    }
#line 900 "loop_inv.m"
    *transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv2_AuxCase_6));
#line 900 "loop_inv.m"
  }
#line 900 "loop_inv.m"
}

#line 895 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_2(
#line 895 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 895 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 895 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2)
#line 895 "loop_inv.m"
{
#line 895 "loop_inv.m"
  {
#line 895 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 895 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv1_AuxGoal_6;

#line 895 "loop_inv.m"
    {
#line 895 "loop_inv.m"
      transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), &transform_hlds__loop_inv__conv1_AuxGoal_6);
    }
#line 895 "loop_inv.m"
    *transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv1_AuxGoal_6));
#line 895 "loop_inv.m"
  }
#line 895 "loop_inv.m"
}

#line 890 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_1(
#line 890 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 890 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 890 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2)
#line 890 "loop_inv.m"
{
#line 890 "loop_inv.m"
  {
#line 890 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 890 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_AuxGoal_6;

#line 890 "loop_inv.m"
    {
#line 890 "loop_inv.m"
      transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), &transform_hlds__loop_inv__conv0_AuxGoal_6);
    }
#line 890 "loop_inv.m"
    *transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv0_AuxGoal_6));
#line 890 "loop_inv.m"
  }
#line 890 "loop_inv.m"
}

#line 870 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(
#line 870 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Info_4,
#line 870 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5,
#line 870 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxGoal_6)
#line 870 "loop_inv.m"
{
#line 873 "loop_inv.m"
  {
#line 873 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 873 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 0)));
#line 873 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 1)));

#line 882 "loop_inv.m"
#line 882 "loop_inv.m"
    switch (MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) {
#line 882 "loop_inv.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 882 "loop_inv.m"
      case (MR_Integer) 0:
#line 904 "loop_inv.m"
        {
#line 904 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__SubGoal_42 = (MR_Word) MR_body(((MR_Word) transform_hlds__loop_inv__GoalExpr_7), (MR_Integer) 0);
#line 904 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__AuxSubGoal_43;
#line 904 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__AuxGoalExpr_63;

#line 905 "loop_inv.m"
          {
#line 905 "loop_inv.m"
            transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__SubGoal_42, &transform_hlds__loop_inv__AuxSubGoal_43);
          }
#line 906 "loop_inv.m"
          transform_hlds__loop_inv__AuxGoalExpr_63 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__loop_inv__AuxSubGoal_43);
#line 907 "loop_inv.m"
          {
#line 907 "loop_inv.m"
            MR_Word base;
#line 907 "loop_inv.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 907 "loop_inv.m"
            *transform_hlds__loop_inv__AuxGoal_6 = base;
#line 907 "loop_inv.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_63));
#line 907 "loop_inv.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
#line 907 "loop_inv.m"
          }
#line 904 "loop_inv.m"
        }
#line 882 "loop_inv.m"
        break;
#line 882 "loop_inv.m"
      case (MR_Integer) 1:
#line 887 "loop_inv.m"
        {
#line 887 "loop_inv.m"
          transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Goal_5, transform_hlds__loop_inv__AuxGoal_6);
#line 887 "loop_inv.m"
          return;
        }
#line 882 "loop_inv.m"
        break;
#line 882 "loop_inv.m"
      case (MR_Integer) 2:
#line 876 "loop_inv.m"
        {
#line 876 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
#line 876 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 876 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 876 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 876 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 876 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));
#line 877 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_59_59;
#line 877 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 2)));
#line 877 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 0)));
#line 877 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 1)));
#line 877 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 3)));

#line 877 "loop_inv.m"
          {
#line 877 "loop_inv.m"
            transform_hlds__loop_inv__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 877 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 0) = ((MR_Box) (transform_hlds__loop_inv__PredId_9));
#line 877 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 1) = ((MR_Box) (transform_hlds__loop_inv__ProcId_10));
#line 877 "loop_inv.m"
          }
#line 877 "loop_inv.m"
          {
#line 877 "loop_inv.m"
            transform_hlds__loop_inv__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__loop_inv__V_59_59, transform_hlds__loop_inv__V_83_83);
          }
#line 879 "loop_inv.m"
          if (transform_hlds__loop_inv__succeeded)
#line 878 "loop_inv.m"
            {
#line 878 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 3)));
#line 878 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 0)));
#line 878 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 1)));
#line 878 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 2)));

#line 878 "loop_inv.m"
              {
#line 878 "loop_inv.m"
                transform_hlds__loop_inv__gen_aux_call_3_p_0(transform_hlds__loop_inv__V_60_60, transform_hlds__loop_inv__Goal_5, transform_hlds__loop_inv__AuxGoal_6);
#line 878 "loop_inv.m"
                return;
              }
#line 878 "loop_inv.m"
            }
#line 879 "loop_inv.m"
          else
#line 880 "loop_inv.m"
            {
#line 880 "loop_inv.m"
              transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Goal_5, transform_hlds__loop_inv__AuxGoal_6);
#line 880 "loop_inv.m"
              return;
            }
#line 876 "loop_inv.m"
        }
#line 882 "loop_inv.m"
        break;
#line 882 "loop_inv.m"
      case (MR_Integer) 3:
#line 882 "loop_inv.m"
#line 882 "loop_inv.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) {
#line 882 "loop_inv.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 882 "loop_inv.m"
          case (MR_Integer) 0:
#line 882 "loop_inv.m"
          case (MR_Integer) 1:
#line 887 "loop_inv.m"
            {
#line 887 "loop_inv.m"
              transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_p_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Goal_5, transform_hlds__loop_inv__AuxGoal_6);
#line 887 "loop_inv.m"
              return;
            }
#line 882 "loop_inv.m"
            break;
#line 882 "loop_inv.m"
          case (MR_Integer) 2:
#line 889 "loop_inv.m"
            {
#line 889 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeCtorInfo_76_76;
#line 889 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__ConjType_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 889 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Conjuncts_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 889 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxConjuncts_34;
#line 889 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_35;
#line 889 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_58_58;

#line 890 "loop_inv.m"
              {
#line 890 "loop_inv.m"
                transform_hlds__loop_inv__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 890 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_6[3]));
#line 890 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_1));
#line 890 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 890 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 3) = ((MR_Box) (transform_hlds__loop_inv__Info_4));
#line 890 "loop_inv.m"
              }
#line 7089 "transform_hlds.loop_inv.c"
              transform_hlds__loop_inv__TypeCtorInfo_76_76 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 890 "loop_inv.m"
              {
#line 890 "loop_inv.m"
                mercury__list__map_3_p_0(transform_hlds__loop_inv__TypeCtorInfo_76_76, transform_hlds__loop_inv__TypeCtorInfo_76_76, transform_hlds__loop_inv__V_58_58, transform_hlds__loop_inv__Conjuncts_33, &transform_hlds__loop_inv__AuxConjuncts_34);
              }
#line 891 "loop_inv.m"
              {
#line 891 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoalExpr_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 891 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 891 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_35, 1) = ((MR_Box) (transform_hlds__loop_inv__ConjType_32));
#line 891 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_35, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxConjuncts_34));
#line 891 "loop_inv.m"
              }
#line 892 "loop_inv.m"
              {
#line 892 "loop_inv.m"
                MR_Word base;
#line 892 "loop_inv.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 892 "loop_inv.m"
                *transform_hlds__loop_inv__AuxGoal_6 = base;
#line 892 "loop_inv.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_35));
#line 892 "loop_inv.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
#line 892 "loop_inv.m"
              }
#line 889 "loop_inv.m"
            }
#line 882 "loop_inv.m"
            break;
#line 882 "loop_inv.m"
          case (MR_Integer) 3:
#line 894 "loop_inv.m"
            {
#line 894 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeCtorInfo_79_79;
#line 894 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Disjuncts_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 894 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxDisjuncts_37;
#line 894 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_57_57;
#line 894 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_61;

#line 895 "loop_inv.m"
              {
#line 895 "loop_inv.m"
                transform_hlds__loop_inv__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 895 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_6[3]));
#line 895 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_2));
#line 895 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 895 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 3) = ((MR_Box) (transform_hlds__loop_inv__Info_4));
#line 895 "loop_inv.m"
              }
#line 7155 "transform_hlds.loop_inv.c"
              transform_hlds__loop_inv__TypeCtorInfo_79_79 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 895 "loop_inv.m"
              {
#line 895 "loop_inv.m"
                mercury__list__map_3_p_0(transform_hlds__loop_inv__TypeCtorInfo_79_79, transform_hlds__loop_inv__TypeCtorInfo_79_79, transform_hlds__loop_inv__V_57_57, transform_hlds__loop_inv__Disjuncts_36, &transform_hlds__loop_inv__AuxDisjuncts_37);
              }
#line 896 "loop_inv.m"
              {
#line 896 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoalExpr_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 896 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 896 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_61, 1) = ((MR_Box) (transform_hlds__loop_inv__AuxDisjuncts_37));
#line 896 "loop_inv.m"
              }
#line 897 "loop_inv.m"
              {
#line 897 "loop_inv.m"
                MR_Word base;
#line 897 "loop_inv.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 897 "loop_inv.m"
                *transform_hlds__loop_inv__AuxGoal_6 = base;
#line 897 "loop_inv.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_61));
#line 897 "loop_inv.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
#line 897 "loop_inv.m"
              }
#line 894 "loop_inv.m"
            }
#line 882 "loop_inv.m"
            break;
#line 882 "loop_inv.m"
          case (MR_Integer) 4:
#line 899 "loop_inv.m"
            {
#line 899 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeCtorInfo_82_82;
#line 899 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 899 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__CanFail_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 899 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Cases_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 899 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxCases_41;
#line 899 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_56_56;
#line 899 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_62;

#line 900 "loop_inv.m"
              {
#line 900 "loop_inv.m"
                transform_hlds__loop_inv__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 900 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_56_56, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_6[4]));
#line 900 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_56_56, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0_3));
#line 900 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 900 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_56_56, 3) = ((MR_Box) (transform_hlds__loop_inv__Info_4));
#line 900 "loop_inv.m"
              }
#line 7223 "transform_hlds.loop_inv.c"
              transform_hlds__loop_inv__TypeCtorInfo_82_82 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 900 "loop_inv.m"
              {
#line 900 "loop_inv.m"
                mercury__list__map_3_p_0(transform_hlds__loop_inv__TypeCtorInfo_82_82, transform_hlds__loop_inv__TypeCtorInfo_82_82, transform_hlds__loop_inv__V_56_56, transform_hlds__loop_inv__Cases_40, &transform_hlds__loop_inv__AuxCases_41);
              }
#line 901 "loop_inv.m"
              {
#line 901 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoalExpr_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 901 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 901 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 1) = ((MR_Box) (transform_hlds__loop_inv__Var_38));
#line 901 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 2) = ((MR_Box) (transform_hlds__loop_inv__CanFail_39));
#line 901 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 3) = ((MR_Box) (transform_hlds__loop_inv__AuxCases_41));
#line 901 "loop_inv.m"
              }
#line 902 "loop_inv.m"
              {
#line 902 "loop_inv.m"
                MR_Word base;
#line 902 "loop_inv.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 902 "loop_inv.m"
                *transform_hlds__loop_inv__AuxGoal_6 = base;
#line 902 "loop_inv.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_62));
#line 902 "loop_inv.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
#line 902 "loop_inv.m"
              }
#line 899 "loop_inv.m"
            }
#line 882 "loop_inv.m"
            break;
#line 882 "loop_inv.m"
          case (MR_Integer) 5:
#line 909 "loop_inv.m"
            {
#line 909 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Reason_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 909 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_64;
#line 909 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__SubGoal_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 909 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxSubGoal_66;

#line 912 "loop_inv.m"
              {
#line 912 "loop_inv.m"
                transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__SubGoal_65, &transform_hlds__loop_inv__AuxSubGoal_66);
              }
#line 913 "loop_inv.m"
              {
#line 913 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoalExpr_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 913 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 913 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 1) = ((MR_Box) (transform_hlds__loop_inv__Reason_44));
#line 913 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxSubGoal_66));
#line 913 "loop_inv.m"
              }
#line 914 "loop_inv.m"
              {
#line 914 "loop_inv.m"
                MR_Word base;
#line 914 "loop_inv.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 914 "loop_inv.m"
                *transform_hlds__loop_inv__AuxGoal_6 = base;
#line 914 "loop_inv.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_64));
#line 914 "loop_inv.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
#line 914 "loop_inv.m"
              }
#line 909 "loop_inv.m"
            }
#line 882 "loop_inv.m"
            break;
#line 882 "loop_inv.m"
          case (MR_Integer) 6:
#line 916 "loop_inv.m"
            {
#line 916 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Vars_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 916 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Cond_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 916 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Then_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 916 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Else_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 916 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxCond_49;
#line 916 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxThen_50;
#line 916 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxElse_51;
#line 916 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_67;

#line 917 "loop_inv.m"
              {
#line 917 "loop_inv.m"
                transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Cond_46, &transform_hlds__loop_inv__AuxCond_49);
              }
#line 918 "loop_inv.m"
              {
#line 918 "loop_inv.m"
                transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Then_47, &transform_hlds__loop_inv__AuxThen_50);
              }
#line 919 "loop_inv.m"
              {
#line 919 "loop_inv.m"
                transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Else_48, &transform_hlds__loop_inv__AuxElse_51);
              }
#line 920 "loop_inv.m"
              {
#line 920 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoalExpr_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 920 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 920 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 1) = ((MR_Box) (transform_hlds__loop_inv__Vars_45));
#line 920 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxCond_49));
#line 920 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 3) = ((MR_Box) (transform_hlds__loop_inv__AuxThen_50));
#line 920 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 4) = ((MR_Box) (transform_hlds__loop_inv__AuxElse_51));
#line 920 "loop_inv.m"
              }
#line 921 "loop_inv.m"
              {
#line 921 "loop_inv.m"
                MR_Word base;
#line 921 "loop_inv.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 921 "loop_inv.m"
                *transform_hlds__loop_inv__AuxGoal_6 = base;
#line 921 "loop_inv.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_67));
#line 921 "loop_inv.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
#line 921 "loop_inv.m"
              }
#line 916 "loop_inv.m"
            }
#line 882 "loop_inv.m"
            break;
#line 882 "loop_inv.m"
          case (MR_Integer) 7:
#line 923 "loop_inv.m"
            {
#line 924 "loop_inv.m"
              {
#line 924 "loop_inv.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "predicate \140transform_hlds.loop_inv.gen_aux_proc_goal\'/3", (MR_String) "shorthand");
#line 924 "loop_inv.m"
                return;
              }
#line 923 "loop_inv.m"
            }
#line 882 "loop_inv.m"
            break;
#line 882 "loop_inv.m"
        }
#line 882 "loop_inv.m"
        break;
#line 882 "loop_inv.m"
    }
#line 873 "loop_inv.m"
  }
#line 870 "loop_inv.m"
}

#line 846 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_9_p_0(
#line 846 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InvGoals_10,
#line 846 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredProcId_11,
#line 846 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__AuxPredProcId_12,
#line 846 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Replacement_13,
#line 846 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Body_14,
#line 846 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__AuxPredInfo_15,
#line 846 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_0_22,
#line 846 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_23,
#line 846 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_24)
#line 846 "loop_inv.m"
{
#line 851 "loop_inv.m"
  {
#line 851 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 851 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GapInfo_18;
#line 851 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxBody_19;
#line 851 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxPredId_20;
#line 851 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__AuxProcId_21;
#line 851 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_25_25;
#line 851 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_27_27;
#line 851 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_29_29;
#line 851 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_30_30;

#line 853 "loop_inv.m"
    {
#line 853 "loop_inv.m"
      transform_hlds__loop_inv__GapInfo_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 853 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GapInfo_18, 0) = ((MR_Box) (transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_23));
#line 853 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GapInfo_18, 1) = ((MR_Box) (transform_hlds__loop_inv__InvGoals_10));
#line 853 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GapInfo_18, 2) = ((MR_Box) (transform_hlds__loop_inv__PredProcId_11));
#line 853 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GapInfo_18, 3) = ((MR_Box) (transform_hlds__loop_inv__Replacement_13));
#line 853 "loop_inv.m"
    }
#line 855 "loop_inv.m"
    {
#line 855 "loop_inv.m"
      transform_hlds__loop_inv__gen_aux_proc_goal_3_p_0(transform_hlds__loop_inv__GapInfo_18, transform_hlds__loop_inv__Body_14, &transform_hlds__loop_inv__AuxBody_19);
    }
#line 858 "loop_inv.m"
    transform_hlds__loop_inv__AuxPredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxPredProcId_12, (MR_Integer) 0)));
#line 858 "loop_inv.m"
    transform_hlds__loop_inv__AuxProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxPredProcId_12, (MR_Integer) 1)));
#line 859 "loop_inv.m"
    {
#line 859 "loop_inv.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__loop_inv__AuxBody_19, transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_0_22, &transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_25_25);
    }
#line 861 "loop_inv.m"
    {
#line 861 "loop_inv.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_25_25, &transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_27_27);
    }
#line 862 "loop_inv.m"
    {
#line 862 "loop_inv.m"
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_27_27, &transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_29_29, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_23, &transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_30_30);
    }
#line 865 "loop_inv.m"
    {
#line 865 "loop_inv.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__loop_inv__AuxPredId_20, transform_hlds__loop_inv__AuxProcId_21, transform_hlds__loop_inv__AuxPredInfo_15, transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_29_29, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_30_30, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_24);
#line 865 "loop_inv.m"
      return;
    }
#line 851 "loop_inv.m"
  }
#line 846 "loop_inv.m"
}

#line 751 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__create_aux_pred_10_p_0(
#line 751 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredProcId_11,
#line 751 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVars_12,
#line 751 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ComputedInvArgs_13,
#line 751 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InitialAuxInstMap_14,
#line 751 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxPredProcId_15,
#line 751 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__Replacement_16,
#line 751 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxPredInfo_17,
#line 751 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxProcInfo_18,
#line 751 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo0_19,
#line 751 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__ModuleInfo_20)
#line 751 "loop_inv.m"
{
#line 758 "loop_inv.m"
  {
#line 758 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PredProcId_11, (MR_Integer) 0)));
#line 758 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PredProcId_11, (MR_Integer) 1)));
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxHeadVars_23;
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__PredInfo_24;
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ProcInfo_25;
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Goal_26;
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalInfo_28;
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TVarSet_29;
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__VarTypes_30;
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ClassContext_31;
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__RttiVarMaps_32;
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__VarSet_33;
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InstVarSet_34;
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Markers_35;
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__OrigOrigin_36;
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HasParallelConj_37;
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__VarNameRemap_38;
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__PredModule_39;
#line 758 "loop_inv.m"
    MR_String transform_hlds__loop_inv__PredName_40;
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__PredOrFunc_41;
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Context_42;
#line 758 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__Line_43;
#line 758 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__Counter_44;
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxPredSymName0_45;
#line 758 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__ProcNo_46;
#line 758 "loop_inv.m"
    MR_String transform_hlds__loop_inv__Suffix_47;
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxPredSymName_48;
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Origin_49;
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxPredId_51;
#line 758 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__AuxProcId_52;
#line 758 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_59_59;
#line 758 "loop_inv.m"
    MR_String transform_hlds__loop_inv__V_62_62;
#line 766 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___GoalExpr_27;
#line 798 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___ExtraArgs_50;

#line 761 "loop_inv.m"
    {
#line 761 "loop_inv.m"
      transform_hlds__loop_inv__AuxHeadVars_23 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__HeadVars_12, transform_hlds__loop_inv__ComputedInvArgs_13);
    }
#line 763 "loop_inv.m"
    {
#line 763 "loop_inv.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__loop_inv__ModuleInfo0_19, transform_hlds__loop_inv__PredId_21, transform_hlds__loop_inv__ProcId_22, &transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__ProcInfo_25);
    }
#line 766 "loop_inv.m"
    {
#line 766 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__loop_inv__ProcInfo_25, &transform_hlds__loop_inv__Goal_26);
    }
#line 766 "loop_inv.m"
    transform_hlds__loop_inv___GoalExpr_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_26, (MR_Integer) 0)));
#line 766 "loop_inv.m"
    transform_hlds__loop_inv__GoalInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_26, (MR_Integer) 1)));
#line 767 "loop_inv.m"
    {
#line 767 "loop_inv.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__TVarSet_29);
    }
#line 768 "loop_inv.m"
    {
#line 768 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__loop_inv__ProcInfo_25, &transform_hlds__loop_inv__VarTypes_30);
    }
#line 769 "loop_inv.m"
    {
#line 769 "loop_inv.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__ClassContext_31);
    }
#line 770 "loop_inv.m"
    {
#line 770 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__loop_inv__ProcInfo_25, &transform_hlds__loop_inv__RttiVarMaps_32);
    }
#line 771 "loop_inv.m"
    {
#line 771 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__loop_inv__ProcInfo_25, &transform_hlds__loop_inv__VarSet_33);
    }
#line 772 "loop_inv.m"
    {
#line 772 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__loop_inv__ProcInfo_25, &transform_hlds__loop_inv__InstVarSet_34);
    }
#line 773 "loop_inv.m"
    {
#line 773 "loop_inv.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__Markers_35);
    }
#line 774 "loop_inv.m"
    {
#line 774 "loop_inv.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__OrigOrigin_36);
    }
#line 775 "loop_inv.m"
    {
#line 775 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__loop_inv__ProcInfo_25, &transform_hlds__loop_inv__HasParallelConj_37);
    }
#line 776 "loop_inv.m"
    {
#line 776 "loop_inv.m"
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__VarNameRemap_38);
    }
#line 778 "loop_inv.m"
    {
#line 778 "loop_inv.m"
      transform_hlds__loop_inv__PredModule_39 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__loop_inv__PredInfo_24);
    }
#line 779 "loop_inv.m"
    {
#line 779 "loop_inv.m"
      transform_hlds__loop_inv__PredName_40 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__loop_inv__PredInfo_24);
    }
#line 780 "loop_inv.m"
    {
#line 780 "loop_inv.m"
      transform_hlds__loop_inv__PredOrFunc_41 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__loop_inv__PredInfo_24);
    }
#line 781 "loop_inv.m"
    {
#line 781 "loop_inv.m"
      transform_hlds__loop_inv__Context_42 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__loop_inv__GoalInfo_28);
    }
#line 782 "loop_inv.m"
    {
#line 782 "loop_inv.m"
      mercury__term__context_line_2_p_0(transform_hlds__loop_inv__Context_42, &transform_hlds__loop_inv__Line_43);
    }
#line 783 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__Line_43 == (MR_Integer) 0);
#line 787 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 786 "loop_inv.m"
      {
#line 786 "loop_inv.m"
        transform_hlds__loop_inv__Counter_44 = hlds__hlds_pred__pred_id_to_int_1_f_0(transform_hlds__loop_inv__PredId_21);
      }
#line 787 "loop_inv.m"
    else
#line 788 "loop_inv.m"
      transform_hlds__loop_inv__Counter_44 = (MR_Integer) 1;
#line 790 "loop_inv.m"
    {
#line 790 "loop_inv.m"
      parse_tree__prog_util__make_pred_name_with_context_7_p_0(transform_hlds__loop_inv__PredModule_39, (MR_String) "loop_inv", transform_hlds__loop_inv__PredOrFunc_41, transform_hlds__loop_inv__PredName_40, transform_hlds__loop_inv__Line_43, transform_hlds__loop_inv__Counter_44, &transform_hlds__loop_inv__AuxPredSymName0_45);
    }
#line 792 "loop_inv.m"
    {
#line 792 "loop_inv.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__loop_inv__ProcId_22, &transform_hlds__loop_inv__ProcNo_46);
    }
#line 793 "loop_inv.m"
    {
#line 793 "loop_inv.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_9[0], transform_hlds__loop_inv__ProcNo_46, &transform_hlds__loop_inv__V_62_62);
    }
#line 793 "loop_inv.m"
    {
#line 793 "loop_inv.m"
      transform_hlds__loop_inv__Suffix_47 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__loop_inv__V_62_62);
    }
#line 794 "loop_inv.m"
    {
#line 794 "loop_inv.m"
      mdbcomp__sym_name__add_sym_name_suffix_3_p_0(transform_hlds__loop_inv__AuxPredSymName0_45, transform_hlds__loop_inv__Suffix_47, &transform_hlds__loop_inv__AuxPredSymName_48);
    }
#line 796 "loop_inv.m"
    {
#line 796 "loop_inv.m"
      transform_hlds__loop_inv__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "loop_inv.m"
      MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 796 "loop_inv.m"
      MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__V_59_59, 1) = ((MR_Box) (transform_hlds__loop_inv__ProcNo_46));
#line 796 "loop_inv.m"
    }
#line 796 "loop_inv.m"
    {
#line 796 "loop_inv.m"
      transform_hlds__loop_inv__Origin_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 796 "loop_inv.m"
      MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Origin_49, 0) = ((MR_Box) (transform_hlds__loop_inv__V_59_59));
#line 796 "loop_inv.m"
      MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Origin_49, 1) = ((MR_Box) (transform_hlds__loop_inv__OrigOrigin_36));
#line 796 "loop_inv.m"
      MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Origin_49, 2) = ((MR_Box) (transform_hlds__loop_inv__PredId_21));
#line 796 "loop_inv.m"
    }
#line 798 "loop_inv.m"
    {
#line 798 "loop_inv.m"
      hlds__hlds_pred__define_new_pred_20_p_0(transform_hlds__loop_inv__Origin_49, transform_hlds__loop_inv__Goal_26, transform_hlds__loop_inv__Replacement_16, transform_hlds__loop_inv__AuxHeadVars_23, &transform_hlds__loop_inv___ExtraArgs_50, transform_hlds__loop_inv__InitialAuxInstMap_14, transform_hlds__loop_inv__AuxPredSymName_48, transform_hlds__loop_inv__TVarSet_29, transform_hlds__loop_inv__VarTypes_30, transform_hlds__loop_inv__ClassContext_31, transform_hlds__loop_inv__RttiVarMaps_32, transform_hlds__loop_inv__VarSet_33, transform_hlds__loop_inv__InstVarSet_34, transform_hlds__loop_inv__Markers_35, (MR_Integer) 1, transform_hlds__loop_inv__HasParallelConj_37, transform_hlds__loop_inv__VarNameRemap_38, transform_hlds__loop_inv__ModuleInfo0_19, transform_hlds__loop_inv__ModuleInfo_20, transform_hlds__loop_inv__AuxPredProcId_15);
    }
#line 829 "loop_inv.m"
    transform_hlds__loop_inv__AuxPredId_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__loop_inv__AuxPredProcId_15, (MR_Integer) 0)));
#line 829 "loop_inv.m"
    transform_hlds__loop_inv__AuxProcId_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *transform_hlds__loop_inv__AuxPredProcId_15, (MR_Integer) 1)));
#line 830 "loop_inv.m"
    {
#line 830 "loop_inv.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(*transform_hlds__loop_inv__ModuleInfo_20, transform_hlds__loop_inv__AuxPredId_51, transform_hlds__loop_inv__AuxProcId_52, transform_hlds__loop_inv__AuxPredInfo_17, transform_hlds__loop_inv__AuxProcInfo_18);
#line 830 "loop_inv.m"
      return;
    }
#line 758 "loop_inv.m"
  }
#line 751 "loop_inv.m"
}

#line 743 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0_1(
#line 743 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 743 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 743 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
#line 743 "loop_inv.m"
{
#line 743 "loop_inv.m"
  {
#line 743 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_3;
#line 743 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 743 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_LambdaHeadVar__3_14;

#line 743 "loop_inv.m"
    {
#line 743 "loop_inv.m"
      transform_hlds__loop_inv__conv0_LambdaHeadVar__3_14 = transform_hlds__loop_inv__IntroducedFrom__func__compute_initial_aux_instmap__743__1_2_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
#line 743 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_LambdaHeadVar__3_14));
#line 743 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_3;
#line 743 "loop_inv.m"
  }
#line 743 "loop_inv.m"
}

#line 740 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0(
#line 740 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Gs_4,
#line 740 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__IM_5)
#line 740 "loop_inv.m"
{
#line 742 "loop_inv.m"
  {
#line 742 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 742 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__3_3;
#line 742 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__conv1_HeadVar__3_3;

#line 742 "loop_inv.m"
    {
#line 742 "loop_inv.m"
      transform_hlds__loop_inv__conv1_HeadVar__3_3 = mercury__list__foldl_3_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[4], transform_hlds__loop_inv__Gs_4, ((MR_Box) (transform_hlds__loop_inv__IM_5)));
    }
#line 742 "loop_inv.m"
    transform_hlds__loop_inv__HeadVar__3_3 = ((MR_Word) transform_hlds__loop_inv__conv1_HeadVar__3_3);
#line 742 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__3_3;
#line 742 "loop_inv.m"
  }
#line 740 "loop_inv.m"
}

#line 725 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__add_output_4_p_0(
#line 725 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UniquelyUsedVars_5,
#line 725 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__X_6,
#line 725 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_8,
#line 725 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_InvVars_9)
#line 725 "loop_inv.m"
{
#line 734 "loop_inv.m"
  {
#line 734 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 731 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeInfo_12_12;

#line 730 "loop_inv.m"
    {
#line 730 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], ((MR_Box) (transform_hlds__loop_inv__X_6)), transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_8);
    }
#line 730 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 730 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 730 "loop_inv.m"
      {
#line 7870 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeInfo_12_12 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 731 "loop_inv.m"
        {
#line 731 "loop_inv.m"
          transform_hlds__loop_inv__succeeded = mercury__list__member_2_p_0(transform_hlds__loop_inv__TypeInfo_12_12, ((MR_Box) (transform_hlds__loop_inv__X_6)), transform_hlds__loop_inv__UniquelyUsedVars_5);
        }
#line 731 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 730 "loop_inv.m"
      }
#line 734 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 733 "loop_inv.m"
      {
#line 733 "loop_inv.m"
        MR_Word base;
#line 733 "loop_inv.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "loop_inv.m"
        *transform_hlds__loop_inv__STATE_VARIABLE_InvVars_9 = base;
#line 733 "loop_inv.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__loop_inv__X_6));
#line 733 "loop_inv.m"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_8));
#line 733 "loop_inv.m"
      }
#line 734 "loop_inv.m"
    else
#line 734 "loop_inv.m"
      *transform_hlds__loop_inv__STATE_VARIABLE_InvVars_9 = transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_8;
#line 734 "loop_inv.m"
  }
#line 725 "loop_inv.m"
}

#line 723 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__add_outputs_5_p_0_1(
#line 723 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 723 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 723 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 723 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 723 "loop_inv.m"
{
#line 723 "loop_inv.m"
  {
#line 723 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 723 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_STATE_VARIABLE_InvVars_9;

#line 723 "loop_inv.m"
    {
#line 723 "loop_inv.m"
      transform_hlds__loop_inv__add_output_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv0_STATE_VARIABLE_InvVars_9);
    }
#line 723 "loop_inv.m"
    *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_STATE_VARIABLE_InvVars_9));
#line 723 "loop_inv.m"
  }
#line 723 "loop_inv.m"
}

#line 719 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__add_outputs_5_p_0(
#line 719 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_6,
#line 719 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UUVs_7,
#line 719 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_8,
#line 719 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_10,
#line 719 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_InvVars_11)
#line 719 "loop_inv.m"
{
#line 722 "loop_inv.m"
  {
#line 722 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 722 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_12_12;
#line 722 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_13_13;
#line 723 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__conv1_STATE_VARIABLE_InvVars_11;

#line 723 "loop_inv.m"
    {
#line 723 "loop_inv.m"
      transform_hlds__loop_inv__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 723 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_12_12, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[1]));
#line 723 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_12_12, 1) = ((MR_Box) (transform_hlds__loop_inv__add_outputs_5_p_0_1));
#line 723 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 723 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_12_12, 3) = ((MR_Box) (transform_hlds__loop_inv__UUVs_7));
#line 723 "loop_inv.m"
    }
#line 723 "loop_inv.m"
    {
#line 723 "loop_inv.m"
      transform_hlds__loop_inv__V_13_13 = transform_hlds__loop_inv__goal_outputs_2_f_0(transform_hlds__loop_inv__ModuleInfo_6, transform_hlds__loop_inv__Goal_8);
    }
#line 723 "loop_inv.m"
    {
#line 723 "loop_inv.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_12_12, transform_hlds__loop_inv__V_13_13, ((MR_Box) (transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_10)), &transform_hlds__loop_inv__conv1_STATE_VARIABLE_InvVars_11);
    }
#line 723 "loop_inv.m"
    *transform_hlds__loop_inv__STATE_VARIABLE_InvVars_11 = ((MR_Word) transform_hlds__loop_inv__conv1_STATE_VARIABLE_InvVars_11);
#line 722 "loop_inv.m"
  }
#line 719 "loop_inv.m"
}

#line 686 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_1(
#line 686 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 686 "loop_inv.m"
{
#line 686 "loop_inv.m"
  {
#line 686 "loop_inv.m"
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 686 "loop_inv.m"
    MR_builtin_longjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__commit_0, 1);
#line 686 "loop_inv.m"
  }
#line 686 "loop_inv.m"
}

#line 686 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_3(
#line 686 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 686 "loop_inv.m"
{
#line 686 "loop_inv.m"
  {
#line 686 "loop_inv.m"
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 686 "loop_inv.m"
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Mode_85 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__conv0_Mode_85);
#line 686 "loop_inv.m"
    {
#line 686 "loop_inv.m"
      transform_hlds__loop_inv__do_not_hoist_2_6_p_0_2(transform_hlds__loop_inv__env_ptr);
#line 686 "loop_inv.m"
      return;
    }
#line 686 "loop_inv.m"
  }
#line 686 "loop_inv.m"
}

#line 686 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_2(
#line 686 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 686 "loop_inv.m"
{
#line 686 "loop_inv.m"
  {
#line 686 "loop_inv.m"
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 687 "loop_inv.m"
    {
#line 687 "loop_inv.m"
      check_hlds__mode_util__mode_get_insts_4_p_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Mode_85, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__InitialInst_83, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__FinalInst_84);
    }
#line 689 "loop_inv.m"
    {
#line 689 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = check_hlds__inst_util__inst_contains_any_2_p_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__InitialInst_83);
    }
#line 690 "loop_inv.m"
    if (!((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
#line 691 "loop_inv.m"
      {
#line 691 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = check_hlds__inst_util__inst_contains_any_2_p_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__FinalInst_84);
      }
#line 690 "loop_inv.m"
    if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
#line 690 "loop_inv.m"
      {
#line 690 "loop_inv.m"
        transform_hlds__loop_inv__do_not_hoist_2_6_p_0_1(transform_hlds__loop_inv__env_ptr);
#line 690 "loop_inv.m"
        return;
      }
#line 686 "loop_inv.m"
  }
#line 686 "loop_inv.m"
}

#line 686 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_4(
#line 686 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 686 "loop_inv.m"
{
#line 686 "loop_inv.m"
  {
#line 686 "loop_inv.m"
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 686 "loop_inv.m"
    if (MR_builtin_setjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__commit_0) == 0)
#line 686 "loop_inv.m"
      {
#line 686 "loop_inv.m"
        {
#line 686 "loop_inv.m"
          {
#line 686 "loop_inv.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__conv0_Mode_85, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Modes_73, transform_hlds__loop_inv__do_not_hoist_2_6_p_0_3, transform_hlds__loop_inv__env_ptr);
          }
#line 686 "loop_inv.m"
        }
#line 686 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_FALSE;
#line 686 "loop_inv.m"
      }
#line 686 "loop_inv.m"
    else
#line 686 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_TRUE;
#line 686 "loop_inv.m"
  }
#line 686 "loop_inv.m"
}

#line 614 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0(
#line 614 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_7,
#line 614 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_8,
#line 614 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_DHGs_0_11,
#line 614 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_DHGs_12,
#line 614 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_DHVs_0_13,
#line 614 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_DHVs_14)
#line 614 "loop_inv.m"
{
#line 614 "loop_inv.m"
  {
#line 614 "loop_inv.m"
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s transform_hlds__loop_inv__env;

#line 614 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7 = transform_hlds__loop_inv__ModuleInfo_7;
#line 641 "loop_inv.m"
    {
#line 641 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__GoalExpr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 0)));
#line 641 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__Construction_21;
#line 641 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_42_42;
#line 641 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_44_44;
#line 641 "loop_inv.m"
      MR_Word transform_hlds__loop_inv___GoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 1)));
#line 642 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_24_24;
#line 642 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_25_25;
#line 642 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_26_26;
#line 642 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_27_27;
#line 643 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_40_40;
#line 643 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_41_41;
#line 643 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_43_43;
#line 643 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_45_45;
#line 643 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_46_46;

#line 642 "loop_inv.m"
      (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_19)) == (MR_mktag((MR_Integer) 1)));
#line 642 "loop_inv.m"
      if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
#line 642 "loop_inv.m"
        {
#line 642 "loop_inv.m"
          transform_hlds__loop_inv__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_19, (MR_Integer) 0)));
#line 642 "loop_inv.m"
          transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_19, (MR_Integer) 1)));
#line 642 "loop_inv.m"
          transform_hlds__loop_inv__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_19, (MR_Integer) 2)));
#line 642 "loop_inv.m"
          transform_hlds__loop_inv__Construction_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_19, (MR_Integer) 3)));
#line 642 "loop_inv.m"
          transform_hlds__loop_inv__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_19, (MR_Integer) 4)));
#line 643 "loop_inv.m"
          (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__Construction_21)) == (MR_mktag((MR_Integer) 0)));
#line 643 "loop_inv.m"
          if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
#line 643 "loop_inv.m"
            {
#line 643 "loop_inv.m"
              transform_hlds__loop_inv__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 0)));
#line 643 "loop_inv.m"
              transform_hlds__loop_inv__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 1)));
#line 643 "loop_inv.m"
              transform_hlds__loop_inv__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 2)));
#line 643 "loop_inv.m"
              transform_hlds__loop_inv__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 3)));
#line 643 "loop_inv.m"
              transform_hlds__loop_inv__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 4)));
#line 643 "loop_inv.m"
              transform_hlds__loop_inv__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 5)));
#line 643 "loop_inv.m"
              transform_hlds__loop_inv__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 6)));
#line 643 "loop_inv.m"
              (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = (transform_hlds__loop_inv__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 644 "loop_inv.m"
              if (!((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
#line 644 "loop_inv.m"
                (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = (transform_hlds__loop_inv__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 643 "loop_inv.m"
            }
#line 642 "loop_inv.m"
        }
#line 641 "loop_inv.m"
    }
#line 621 "loop_inv.m"
    if (!((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
#line 621 "loop_inv.m"
      {
#line 651 "loop_inv.m"
        {
#line 651 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__GoalExpr_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 0)));
#line 651 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_55_55;
#line 651 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___GoalInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 1)));
#line 652 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_56_56;
#line 652 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_57_57;
#line 652 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_58_58;
#line 652 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_59_59;
#line 652 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_49_49;
#line 652 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_50_50;
#line 652 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_51_51;
#line 652 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_52_52;
#line 652 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_53_53;
#line 652 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_54_54;

#line 652 "loop_inv.m"
          (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_47)) == (MR_mktag((MR_Integer) 1)));
#line 652 "loop_inv.m"
          if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
#line 652 "loop_inv.m"
            {
#line 652 "loop_inv.m"
              transform_hlds__loop_inv__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_47, (MR_Integer) 0)));
#line 652 "loop_inv.m"
              transform_hlds__loop_inv__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_47, (MR_Integer) 1)));
#line 652 "loop_inv.m"
              transform_hlds__loop_inv__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_47, (MR_Integer) 2)));
#line 652 "loop_inv.m"
              transform_hlds__loop_inv__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_47, (MR_Integer) 3)));
#line 652 "loop_inv.m"
              transform_hlds__loop_inv__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_47, (MR_Integer) 4)));
#line 652 "loop_inv.m"
              (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__V_55_55)) == (MR_mktag((MR_Integer) 1)));
#line 652 "loop_inv.m"
              if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
#line 652 "loop_inv.m"
                {
#line 652 "loop_inv.m"
                  transform_hlds__loop_inv__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 0)));
#line 652 "loop_inv.m"
                  transform_hlds__loop_inv__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 1)));
#line 652 "loop_inv.m"
                  transform_hlds__loop_inv__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 2)));
#line 652 "loop_inv.m"
                  transform_hlds__loop_inv__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 3)));
#line 652 "loop_inv.m"
                  transform_hlds__loop_inv__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 4)));
#line 652 "loop_inv.m"
                  transform_hlds__loop_inv__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 5)));
#line 652 "loop_inv.m"
                }
#line 652 "loop_inv.m"
            }
#line 651 "loop_inv.m"
        }
#line 621 "loop_inv.m"
        if (!((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
#line 621 "loop_inv.m"
          {
#line 658 "loop_inv.m"
            {
#line 658 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_61_61;

#line 659 "loop_inv.m"
              {
#line 659 "loop_inv.m"
                transform_hlds__loop_inv__V_61_61 = hlds__hlds_goal__goal_get_purity_1_f_0(transform_hlds__loop_inv__Goal_8);
              }
#line 659 "loop_inv.m"
              (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = (transform_hlds__loop_inv__V_61_61 == (MR_Integer) 2);
#line 658 "loop_inv.m"
            }
#line 621 "loop_inv.m"
            if (!((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
#line 621 "loop_inv.m"
              {
#line 665 "loop_inv.m"
                {
#line 665 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__GoalInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 1)));
#line 665 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__Detism_64;
#line 665 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__MaxSolns_66;
#line 665 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv___GoalExpr_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 0)));
#line 667 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv___CanFail_65;

#line 666 "loop_inv.m"
                  {
#line 666 "loop_inv.m"
                    transform_hlds__loop_inv__Detism_64 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__loop_inv__GoalInfo_63);
                  }
#line 667 "loop_inv.m"
                  {
#line 667 "loop_inv.m"
                    parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__loop_inv__Detism_64, &transform_hlds__loop_inv___CanFail_65, &transform_hlds__loop_inv__MaxSolns_66);
                  }
#line 668 "loop_inv.m"
                  (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = (transform_hlds__loop_inv__MaxSolns_66 == (MR_Integer) 0);
#line 665 "loop_inv.m"
                }
#line 621 "loop_inv.m"
                if (!((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
#line 677 "loop_inv.m"
                  {
#line 677 "loop_inv.m"
                    MR_Word transform_hlds__loop_inv__GoalExpr_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 0)));
#line 678 "loop_inv.m"
                    MR_Word transform_hlds__loop_inv___GoalInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 1)));

#line 681 "loop_inv.m"
                    if (((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_69)) == (MR_mktag((MR_Integer) 2))))
#line 682 "loop_inv.m"
                      {
#line 682 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__PredId_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 0)));
#line 682 "loop_inv.m"
                        MR_Integer transform_hlds__loop_inv__ProcId_77 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 1)));
#line 682 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__ProcInfo_92;
#line 682 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 2)));
#line 682 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 3)));
#line 682 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 4)));
#line 682 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 5)));
#line 1180 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_91_91;

#line 1180 "loop_inv.m"
                        {
#line 1180 "loop_inv.m"
                          hlds__hlds_module__module_info_pred_proc_info_5_p_0((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, transform_hlds__loop_inv__PredId_76, transform_hlds__loop_inv__ProcId_77, &transform_hlds__loop_inv__V_91_91, &transform_hlds__loop_inv__ProcInfo_92);
                        }
#line 1181 "loop_inv.m"
                        {
#line 1181 "loop_inv.m"
                          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__loop_inv__ProcInfo_92, &(transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Modes_73);
                        }
#line 682 "loop_inv.m"
                        (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_TRUE;
#line 682 "loop_inv.m"
                      }
#line 681 "loop_inv.m"
                    else
#line 681 "loop_inv.m"
                    if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_69)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 680 "loop_inv.m"
                      {
#line 680 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 1)));
#line 680 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 2)));
#line 680 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_74_74;
#line 680 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_75_75;

#line 680 "loop_inv.m"
                        (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Modes_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 3)));
#line 680 "loop_inv.m"
                        transform_hlds__loop_inv__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 4)));
#line 680 "loop_inv.m"
                        transform_hlds__loop_inv__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 5)));
#line 680 "loop_inv.m"
                        (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_TRUE;
#line 680 "loop_inv.m"
                      }
#line 681 "loop_inv.m"
                    else
#line 681 "loop_inv.m"
                      (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_FALSE;
#line 677 "loop_inv.m"
                    if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
#line 686 "loop_inv.m"
                      {
#line 686 "loop_inv.m"
                        transform_hlds__loop_inv__do_not_hoist_2_6_p_0_4(&transform_hlds__loop_inv__env);
                      }
#line 677 "loop_inv.m"
                  }
#line 621 "loop_inv.m"
              }
#line 621 "loop_inv.m"
          }
#line 621 "loop_inv.m"
      }
#line 629 "loop_inv.m"
    if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
#line 627 "loop_inv.m"
      {
#line 627 "loop_inv.m"
        {
#line 627 "loop_inv.m"
          mercury__list__cons_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__loop_inv__Goal_8)), transform_hlds__loop_inv__STATE_VARIABLE_DHGs_0_11, transform_hlds__loop_inv__STATE_VARIABLE_DHGs_12);
        }
#line 628 "loop_inv.m"
        {
#line 628 "loop_inv.m"
          transform_hlds__loop_inv__add_outputs_5_p_0((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__loop_inv__Goal_8, transform_hlds__loop_inv__STATE_VARIABLE_DHVs_0_13, transform_hlds__loop_inv__STATE_VARIABLE_DHVs_14);
#line 628 "loop_inv.m"
          return;
        }
#line 627 "loop_inv.m"
      }
#line 629 "loop_inv.m"
    else
#line 630 "loop_inv.m"
      {
#line 630 "loop_inv.m"
        *transform_hlds__loop_inv__STATE_VARIABLE_DHVs_14 = transform_hlds__loop_inv__STATE_VARIABLE_DHVs_0_13;
#line 630 "loop_inv.m"
        *transform_hlds__loop_inv__STATE_VARIABLE_DHGs_12 = transform_hlds__loop_inv__STATE_VARIABLE_DHGs_0_11;
#line 630 "loop_inv.m"
      }
#line 614 "loop_inv.m"
  }
#line 614 "loop_inv.m"
}

#line 611 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_4_p_0_1(
#line 611 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 611 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 611 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 611 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3,
#line 611 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_4,
#line 611 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_5)
#line 611 "loop_inv.m"
{
#line 611 "loop_inv.m"
  {
#line 611 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 611 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv1_STATE_VARIABLE_DHGs_12;
#line 611 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_STATE_VARIABLE_DHVs_14;

#line 611 "loop_inv.m"
    {
#line 611 "loop_inv.m"
      transform_hlds__loop_inv__do_not_hoist_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv1_STATE_VARIABLE_DHGs_12, ((MR_Word) transform_hlds__loop_inv__wrapper_arg_4), &transform_hlds__loop_inv__conv0_STATE_VARIABLE_DHVs_14);
    }
#line 611 "loop_inv.m"
    *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv1_STATE_VARIABLE_DHGs_12));
#line 611 "loop_inv.m"
    *transform_hlds__loop_inv__wrapper_arg_5 = ((MR_Box) (transform_hlds__loop_inv__conv0_STATE_VARIABLE_DHVs_14));
#line 611 "loop_inv.m"
  }
#line 611 "loop_inv.m"
}

#line 607 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_4_p_0(
#line 607 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 607 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InvGoals_6,
#line 607 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__DontHoistGoals_7,
#line 607 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__DontHoistVars_8)
#line 607 "loop_inv.m"
{
#line 610 "loop_inv.m"
  {
#line 610 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 610 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_9_9;
#line 611 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__conv3_DontHoistGoals_7;
#line 611 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__conv2_DontHoistVars_8;

#line 611 "loop_inv.m"
    {
#line 611 "loop_inv.m"
      transform_hlds__loop_inv__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 611 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_9_9, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_8[0]));
#line 611 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_9_9, 1) = ((MR_Box) (transform_hlds__loop_inv__do_not_hoist_4_p_0_1));
#line 611 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 611 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_9_9, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_5));
#line 611 "loop_inv.m"
    }
#line 611 "loop_inv.m"
    {
#line 611 "loop_inv.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_1[1], (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_9_9, transform_hlds__loop_inv__InvGoals_6, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__loop_inv__conv3_DontHoistGoals_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__loop_inv__conv2_DontHoistVars_8);
    }
#line 611 "loop_inv.m"
    *transform_hlds__loop_inv__DontHoistGoals_7 = ((MR_Word) transform_hlds__loop_inv__conv3_DontHoistGoals_7);
#line 611 "loop_inv.m"
    *transform_hlds__loop_inv__DontHoistVars_8 = ((MR_Word) transform_hlds__loop_inv__conv2_DontHoistVars_8);
#line 610 "loop_inv.m"
  }
#line 607 "loop_inv.m"
}

#line 723 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_13(
#line 723 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 723 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 723 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 723 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 723 "loop_inv.m"
{
#line 723 "loop_inv.m"
  {
#line 723 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 723 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv3_STATE_VARIABLE_InvVars_9;

#line 723 "loop_inv.m"
    {
#line 723 "loop_inv.m"
      transform_hlds__loop_inv__add_output_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv3_STATE_VARIABLE_InvVars_9);
    }
#line 723 "loop_inv.m"
    *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv3_STATE_VARIABLE_InvVars_9));
#line 723 "loop_inv.m"
  }
#line 723 "loop_inv.m"
}

#line 588 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_1(
#line 588 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 588 "loop_inv.m"
{
#line 588 "loop_inv.m"
  {
#line 588 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 588 "loop_inv.m"
    MR_builtin_longjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_0, 1);
#line 588 "loop_inv.m"
  }
#line 588 "loop_inv.m"
}

#line 589 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_3(
#line 589 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 589 "loop_inv.m"
{
#line 589 "loop_inv.m"
  {
#line 589 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 589 "loop_inv.m"
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__InvariantGoal_17 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv0_InvariantGoal_17);
#line 589 "loop_inv.m"
    {
#line 589 "loop_inv.m"
      transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_2(transform_hlds__loop_inv__env_ptr);
#line 589 "loop_inv.m"
      return;
    }
#line 589 "loop_inv.m"
  }
#line 589 "loop_inv.m"
}

#line 588 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_2(
#line 588 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 588 "loop_inv.m"
{
#line 588 "loop_inv.m"
  {
#line 588 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 588 "loop_inv.m"
    {
#line 477 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_20_20;
#line 477 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_22_22;

#line 477 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__InvariantGoal_17, (MR_Integer) 0)));
#line 477 "loop_inv.m"
      transform_hlds__loop_inv__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__InvariantGoal_17, (MR_Integer) 1)));
#line 477 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10, (MR_Integer) 0)));
#line 477 "loop_inv.m"
      transform_hlds__loop_inv__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10, (MR_Integer) 1)));
#line 479 "loop_inv.m"
      {
#line 479 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21);
      }
#line 480 "loop_inv.m"
      if (!((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded))
#line 482 "loop_inv.m"
        {
#line 482 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__TypeInfo_21_37;
#line 482 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__PredId_23;
#line 482 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__ProcId_24;
#line 482 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__Args_25;
#line 482 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_32_32;
#line 482 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__V_33_33;
#line 482 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_34_34;
#line 481 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___BuiltinX_26;
#line 481 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___ContextX_27;
#line 481 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___SymNameX_28;
#line 483 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___BuiltinY_29;
#line 483 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___ContextY_30;
#line 483 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___SymNameY_31;

#line 481 "loop_inv.m"
          (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19)) == (MR_mktag((MR_Integer) 2)));
#line 481 "loop_inv.m"
          if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
#line 481 "loop_inv.m"
            {
#line 481 "loop_inv.m"
              {
#line 481 "loop_inv.m"
                transform_hlds__loop_inv__PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 0)));
#line 481 "loop_inv.m"
                transform_hlds__loop_inv__ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 1)));
#line 481 "loop_inv.m"
                transform_hlds__loop_inv__Args_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 2)));
#line 481 "loop_inv.m"
                transform_hlds__loop_inv___BuiltinX_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 3)));
#line 481 "loop_inv.m"
                transform_hlds__loop_inv___ContextX_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 4)));
#line 481 "loop_inv.m"
                transform_hlds__loop_inv___SymNameX_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 5)));
#line 481 "loop_inv.m"
              }
#line 482 "loop_inv.m"
              {
#line 483 "loop_inv.m"
                (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21)) == (MR_mktag((MR_Integer) 2)));
#line 483 "loop_inv.m"
                if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
#line 483 "loop_inv.m"
                  {
#line 483 "loop_inv.m"
                    {
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 0)));
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 1)));
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 2)));
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv___BuiltinY_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 3)));
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv___ContextY_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 4)));
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv___SymNameY_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 5)));
#line 483 "loop_inv.m"
                    }
#line 482 "loop_inv.m"
                    {
#line 483 "loop_inv.m"
                      {
#line 483 "loop_inv.m"
                        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__loop_inv__PredId_23, transform_hlds__loop_inv__V_32_32);
                      }
#line 482 "loop_inv.m"
                      if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
#line 482 "loop_inv.m"
                        {
#line 483 "loop_inv.m"
                          (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = (transform_hlds__loop_inv__ProcId_24 == transform_hlds__loop_inv__V_33_33);
#line 482 "loop_inv.m"
                          if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
#line 482 "loop_inv.m"
                            {
#line 8762 "transform_hlds.loop_inv.c"
                              transform_hlds__loop_inv__TypeInfo_21_37 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4];
#line 483 "loop_inv.m"
                              {
#line 483 "loop_inv.m"
                                (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__loop_inv__TypeInfo_21_37, ((MR_Box) (transform_hlds__loop_inv__Args_25)), ((MR_Box) (transform_hlds__loop_inv__V_34_34)));
                              }
#line 482 "loop_inv.m"
                            }
#line 482 "loop_inv.m"
                        }
#line 482 "loop_inv.m"
                    }
#line 483 "loop_inv.m"
                  }
#line 482 "loop_inv.m"
              }
#line 481 "loop_inv.m"
            }
#line 482 "loop_inv.m"
        }
#line 480 "loop_inv.m"
      if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
#line 480 "loop_inv.m"
        {
#line 480 "loop_inv.m"
          transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_1(transform_hlds__loop_inv__env_ptr);
#line 480 "loop_inv.m"
          return;
        }
#line 588 "loop_inv.m"
    }
#line 588 "loop_inv.m"
  }
#line 588 "loop_inv.m"
}

#line 588 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_4(
#line 588 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 588 "loop_inv.m"
{
#line 588 "loop_inv.m"
  {
#line 588 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 588 "loop_inv.m"
    if (MR_builtin_setjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_0) == 0)
#line 588 "loop_inv.m"
      {
#line 588 "loop_inv.m"
        {
#line 589 "loop_inv.m"
          {
#line 589 "loop_inv.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv0_InvariantGoal_17, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IGs0_11, transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_3, transform_hlds__loop_inv__env_ptr);
          }
#line 588 "loop_inv.m"
        }
#line 588 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_FALSE;
#line 588 "loop_inv.m"
      }
#line 588 "loop_inv.m"
    else
#line 588 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_TRUE;
#line 588 "loop_inv.m"
  }
#line 588 "loop_inv.m"
}

#line 579 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_5(
#line 579 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 579 "loop_inv.m"
{
#line 579 "loop_inv.m"
  {
#line 579 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 579 "loop_inv.m"
    MR_builtin_longjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_1, 1);
#line 579 "loop_inv.m"
  }
#line 579 "loop_inv.m"
}

#line 581 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_7(
#line 581 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 581 "loop_inv.m"
{
#line 581 "loop_inv.m"
  {
#line 581 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 581 "loop_inv.m"
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUV_42 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv1_UUV_42);
#line 581 "loop_inv.m"
    {
#line 581 "loop_inv.m"
      transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_6(transform_hlds__loop_inv__env_ptr);
#line 581 "loop_inv.m"
      return;
    }
#line 581 "loop_inv.m"
  }
#line 581 "loop_inv.m"
}

#line 579 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_6(
#line 579 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 579 "loop_inv.m"
{
#line 579 "loop_inv.m"
  {
#line 579 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 8894 "transform_hlds.loop_inv.c"
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeCtorInfo_9_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 582 "loop_inv.m"
    {
#line 582 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeCtorInfo_9_44, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__NonLocals_41, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUV_42);
    }
#line 582 "loop_inv.m"
    if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
#line 582 "loop_inv.m"
      {
#line 582 "loop_inv.m"
        transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_5(transform_hlds__loop_inv__env_ptr);
#line 582 "loop_inv.m"
        return;
      }
#line 579 "loop_inv.m"
  }
#line 579 "loop_inv.m"
}

#line 579 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_8(
#line 579 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 579 "loop_inv.m"
{
#line 579 "loop_inv.m"
  {
#line 579 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 579 "loop_inv.m"
    if (MR_builtin_setjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_1) == 0)
#line 579 "loop_inv.m"
      {
#line 579 "loop_inv.m"
        {
#line 579 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__GoalInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10, (MR_Integer) 1)));
#line 579 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___GoalExpr_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10, (MR_Integer) 0)));

#line 580 "loop_inv.m"
          {
#line 580 "loop_inv.m"
            (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__NonLocals_41 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__loop_inv__GoalInfo_40);
          }
#line 581 "loop_inv.m"
          {
#line 581 "loop_inv.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv1_UUV_42, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUVs_9, transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_7, transform_hlds__loop_inv__env_ptr);
          }
#line 579 "loop_inv.m"
        }
#line 579 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_FALSE;
#line 579 "loop_inv.m"
      }
#line 579 "loop_inv.m"
    else
#line 579 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_TRUE;
#line 579 "loop_inv.m"
  }
#line 579 "loop_inv.m"
}

#line 599 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_9(
#line 599 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 599 "loop_inv.m"
{
#line 599 "loop_inv.m"
  {
#line 599 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 599 "loop_inv.m"
    MR_builtin_longjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_2, 1);
#line 599 "loop_inv.m"
  }
#line 599 "loop_inv.m"
}

#line 600 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_11(
#line 600 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 600 "loop_inv.m"
{
#line 600 "loop_inv.m"
  {
#line 600 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 600 "loop_inv.m"
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__V_49 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv2_V_49);
#line 600 "loop_inv.m"
    {
#line 600 "loop_inv.m"
      transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_10(transform_hlds__loop_inv__env_ptr);
#line 600 "loop_inv.m"
      return;
    }
#line 600 "loop_inv.m"
  }
#line 600 "loop_inv.m"
}

#line 599 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_10(
#line 599 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 599 "loop_inv.m"
{
#line 599 "loop_inv.m"
  {
#line 599 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 602 "loop_inv.m"
    {
#line 602 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = mercury__list__member_2_p_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeInfo_9_50, ((MR_Box) ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__V_49)), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IVs0_13);
    }
#line 601 "loop_inv.m"
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = !((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded);
#line 601 "loop_inv.m"
    if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
#line 601 "loop_inv.m"
      {
#line 601 "loop_inv.m"
        transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_9(transform_hlds__loop_inv__env_ptr);
#line 601 "loop_inv.m"
        return;
      }
#line 599 "loop_inv.m"
  }
#line 599 "loop_inv.m"
}

#line 599 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_12(
#line 599 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 599 "loop_inv.m"
{
#line 599 "loop_inv.m"
  {
#line 599 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 599 "loop_inv.m"
    if (MR_builtin_setjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_2) == 0)
#line 599 "loop_inv.m"
      {
#line 9057 "transform_hlds.loop_inv.c"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeInfo_9_50 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 600 "loop_inv.m"
        {
#line 600 "loop_inv.m"
          mercury__list__member_2_p_1((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeInfo_9_50, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv2_V_49, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Inputs_48, transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_11, transform_hlds__loop_inv__env_ptr);
        }
#line 599 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_FALSE;
#line 599 "loop_inv.m"
      }
#line 599 "loop_inv.m"
    else
#line 599 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_TRUE;
#line 599 "loop_inv.m"
  }
#line 599 "loop_inv.m"
}

#line 558 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0(
#line 558 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_8,
#line 558 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UUVs_9,
#line 558 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_10,
#line 558 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__IGs0_11,
#line 558 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__IGs_12,
#line 558 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__IVs0_13,
#line 558 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__IVs_14)
#line 558 "loop_inv.m"
{
#line 558 "loop_inv.m"
  {
#line 558 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s transform_hlds__loop_inv__env;

#line 558 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUVs_9 = transform_hlds__loop_inv__UUVs_9;
#line 558 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10 = transform_hlds__loop_inv__Goal_10;
#line 558 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IGs0_11 = transform_hlds__loop_inv__IGs0_11;
#line 558 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IVs0_13 = transform_hlds__loop_inv__IVs0_13;
#line 588 "loop_inv.m"
    {
#line 588 "loop_inv.m"
      transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_4(&transform_hlds__loop_inv__env);
    }
#line 564 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = !((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded);
#line 564 "loop_inv.m"
    if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
#line 564 "loop_inv.m"
      {
#line 579 "loop_inv.m"
        {
#line 579 "loop_inv.m"
          transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_8(&transform_hlds__loop_inv__env);
        }
#line 565 "loop_inv.m"
        (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = !((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded);
#line 564 "loop_inv.m"
        if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
#line 564 "loop_inv.m"
          {
#line 598 "loop_inv.m"
            {
#line 598 "loop_inv.m"
              (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Inputs_48 = transform_hlds__loop_inv__goal_inputs_2_f_0(transform_hlds__loop_inv__ModuleInfo_8, (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10);
            }
#line 599 "loop_inv.m"
            {
#line 599 "loop_inv.m"
              transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_12(&transform_hlds__loop_inv__env);
            }
#line 599 "loop_inv.m"
            (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = !((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded);
#line 564 "loop_inv.m"
          }
#line 564 "loop_inv.m"
      }
#line 570 "loop_inv.m"
    if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
#line 568 "loop_inv.m"
      {
#line 568 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_57_57;
#line 568 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_58_58;
#line 723 "loop_inv.m"
        MR_Box transform_hlds__loop_inv__conv4_IVs_14;

#line 568 "loop_inv.m"
        {
#line 568 "loop_inv.m"
          MR_Word base;
#line 568 "loop_inv.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "loop_inv.m"
          *transform_hlds__loop_inv__IGs_12 = base;
#line 568 "loop_inv.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10));
#line 568 "loop_inv.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IGs0_11));
#line 568 "loop_inv.m"
        }
#line 723 "loop_inv.m"
        {
#line 723 "loop_inv.m"
          transform_hlds__loop_inv__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 723 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[1]));
#line 723 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 1) = ((MR_Box) (transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_13));
#line 723 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 723 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 3) = ((MR_Box) ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUVs_9));
#line 723 "loop_inv.m"
        }
#line 723 "loop_inv.m"
        {
#line 723 "loop_inv.m"
          transform_hlds__loop_inv__V_58_58 = transform_hlds__loop_inv__goal_outputs_2_f_0(transform_hlds__loop_inv__ModuleInfo_8, (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10);
        }
#line 723 "loop_inv.m"
        {
#line 723 "loop_inv.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_57_57, transform_hlds__loop_inv__V_58_58, ((MR_Box) ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IVs0_13)), &transform_hlds__loop_inv__conv4_IVs_14);
        }
#line 723 "loop_inv.m"
        *transform_hlds__loop_inv__IVs_14 = ((MR_Word) transform_hlds__loop_inv__conv4_IVs_14);
#line 568 "loop_inv.m"
      }
#line 570 "loop_inv.m"
    else
#line 571 "loop_inv.m"
      {
#line 571 "loop_inv.m"
        *transform_hlds__loop_inv__IGs_12 = (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IGs0_11;
#line 572 "loop_inv.m"
        *transform_hlds__loop_inv__IVs_14 = (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IVs0_13;
#line 571 "loop_inv.m"
      }
#line 558 "loop_inv.m"
  }
#line 558 "loop_inv.m"
}

#line 553 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_6_p_0_1(
#line 553 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 553 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 553 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 553 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3,
#line 553 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_4,
#line 553 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_5)
#line 553 "loop_inv.m"
{
#line 553 "loop_inv.m"
  {
#line 553 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 553 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv1_IGs_12;
#line 553 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_IVs_14;

#line 553 "loop_inv.m"
    {
#line 553 "loop_inv.m"
      transform_hlds__loop_inv__inv_goals_vars_2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv1_IGs_12, ((MR_Word) transform_hlds__loop_inv__wrapper_arg_4), &transform_hlds__loop_inv__conv0_IVs_14);
    }
#line 553 "loop_inv.m"
    *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv1_IGs_12));
#line 553 "loop_inv.m"
    *transform_hlds__loop_inv__wrapper_arg_5 = ((MR_Box) (transform_hlds__loop_inv__conv0_IVs_14));
#line 553 "loop_inv.m"
  }
#line 553 "loop_inv.m"
}

#line 547 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_6_p_0(
#line 547 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_7,
#line 547 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UniquelyUsedVars_8,
#line 547 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InvGoals0_9,
#line 547 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__InvGoals_10,
#line 547 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InvVars0_11,
#line 547 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__InvVars_12)
#line 547 "loop_inv.m"
{
#line 552 "loop_inv.m"
  {
#line 552 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 552 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_13_13;
#line 553 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__conv3_InvGoals_10;
#line 553 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__conv2_InvVars_12;

#line 553 "loop_inv.m"
    {
#line 553 "loop_inv.m"
      transform_hlds__loop_inv__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 553 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_13_13, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_7[0]));
#line 553 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_13_13, 1) = ((MR_Box) (transform_hlds__loop_inv__inv_goals_vars_6_p_0_1));
#line 553 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 553 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_13_13, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_7));
#line 553 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_13_13, 4) = ((MR_Box) (transform_hlds__loop_inv__UniquelyUsedVars_8));
#line 553 "loop_inv.m"
    }
#line 553 "loop_inv.m"
    {
#line 553 "loop_inv.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_1[1], (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_13_13, transform_hlds__loop_inv__InvGoals0_9, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__loop_inv__conv3_InvGoals_10, ((MR_Box) (transform_hlds__loop_inv__InvVars0_11)), &transform_hlds__loop_inv__conv2_InvVars_12);
    }
#line 553 "loop_inv.m"
    *transform_hlds__loop_inv__InvGoals_10 = ((MR_Word) transform_hlds__loop_inv__conv3_InvGoals_10);
#line 553 "loop_inv.m"
    *transform_hlds__loop_inv__InvVars_12 = ((MR_Word) transform_hlds__loop_inv__conv2_InvVars_12);
#line 552 "loop_inv.m"
  }
#line 547 "loop_inv.m"
}

#line 524 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_2_f_0(
#line 524 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 524 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Y_2)
#line 524 "loop_inv.m"
{
#line 527 "loop_inv.m"
  {
#line 527 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 527 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__3_3;

#line 527 "loop_inv.m"
    if ((transform_hlds__loop_inv__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 527 "loop_inv.m"
      transform_hlds__loop_inv__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 527 "loop_inv.m"
    else
#line 528 "loop_inv.m"
      {
#line 528 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 0)));

#line 528 "loop_inv.m"
        {
#line 528 "loop_inv.m"
          transform_hlds__loop_inv__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], ((MR_Box) (transform_hlds__loop_inv__X_5)), ((MR_Box) (transform_hlds__loop_inv__Y_2)));
        }
#line 528 "loop_inv.m"
        if (transform_hlds__loop_inv__succeeded)
#line 528 "loop_inv.m"
          transform_hlds__loop_inv__HeadVar__3_3 = transform_hlds__loop_inv__HeadVar__1_1;
#line 528 "loop_inv.m"
        else
#line 528 "loop_inv.m"
          transform_hlds__loop_inv__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "loop_inv.m"
      }
#line 527 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__3_3;
#line 527 "loop_inv.m"
  }
#line 524 "loop_inv.m"
}

#line 518 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0_1(
#line 518 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 518 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 518 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
#line 518 "loop_inv.m"
{
#line 518 "loop_inv.m"
  {
#line 518 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_3;
#line 518 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 518 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__3_3;

#line 518 "loop_inv.m"
    {
#line 518 "loop_inv.m"
      transform_hlds__loop_inv__conv0_HeadVar__3_3 = transform_hlds__loop_inv__refine_candidate_inv_args_2_2_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
#line 518 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__3_3));
#line 518 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_3;
#line 518 "loop_inv.m"
  }
#line 518 "loop_inv.m"
}

#line 513 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0(
#line 513 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 513 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__MaybeInvArgs_6)
#line 513 "loop_inv.m"
{
#line 516 "loop_inv.m"
  {
#line 516 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 516 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__3_3;
#line 516 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__RecCall_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 0)));
#line 516 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___RecCallInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 1)));
#line 516 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__CallArgs_9;
#line 517 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_7_7;
#line 517 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__V_8_8;
#line 517 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_10_10;
#line 517 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_11_11;
#line 517 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_12_12;

#line 517 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__RecCall_4)) == (MR_mktag((MR_Integer) 2)));
#line 517 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 517 "loop_inv.m"
      {
#line 517 "loop_inv.m"
        transform_hlds__loop_inv__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 0)));
#line 517 "loop_inv.m"
        transform_hlds__loop_inv__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 1)));
#line 517 "loop_inv.m"
        transform_hlds__loop_inv__CallArgs_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 2)));
#line 517 "loop_inv.m"
        transform_hlds__loop_inv__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 3)));
#line 517 "loop_inv.m"
        transform_hlds__loop_inv__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 4)));
#line 517 "loop_inv.m"
        transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 5)));
#line 518 "loop_inv.m"
        {
#line 518 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__TypeInfo_17_17 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[2];

#line 518 "loop_inv.m"
          {
#line 518 "loop_inv.m"
            transform_hlds__loop_inv__HeadVar__3_3 = mercury__list__map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_17_17, (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__TypeInfo_17_17, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[3], transform_hlds__loop_inv__MaybeInvArgs_6, transform_hlds__loop_inv__CallArgs_9);
          }
#line 518 "loop_inv.m"
        }
#line 517 "loop_inv.m"
      }
#line 517 "loop_inv.m"
    else
#line 521 "loop_inv.m"
      {
#line 521 "loop_inv.m"
        MR_Box transform_hlds__loop_inv__conv1_HeadVar__3_3;

#line 521 "loop_inv.m"
        {
#line 521 "loop_inv.m"
          transform_hlds__loop_inv__conv1_HeadVar__3_3 = mercury__require__unexpected_3_f_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[3], (MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.refine_candidate_inv_args\'/2", (MR_String) "non call/6 found in argument 1");
        }
#line 521 "loop_inv.m"
        transform_hlds__loop_inv__HeadVar__3_3 = ((MR_Word) transform_hlds__loop_inv__conv1_HeadVar__3_3);
#line 521 "loop_inv.m"
      }
#line 516 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__3_3;
#line 516 "loop_inv.m"
  }
#line 513 "loop_inv.m"
}

#line 505 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_f_0(
#line 505 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 505 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Arg_6,
#line 505 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Mode_7)
#line 505 "loop_inv.m"
{
#line 508 "loop_inv.m"
  {
#line 508 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 508 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__4_4;
#line 508 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InvArg_8 = transform_hlds__loop_inv__Arg_6;
#line 1316 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InInst_12;
#line 1317 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___OutInst_13;

#line 1317 "loop_inv.m"
    {
#line 1317 "loop_inv.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__Mode_7, &transform_hlds__loop_inv__InInst_12, &transform_hlds__loop_inv___OutInst_13);
    }
#line 1318 "loop_inv.m"
    {
#line 1318 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__InInst_12);
    }
#line 1318 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 508 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 509 "loop_inv.m"
      {
#line 509 "loop_inv.m"
        transform_hlds__loop_inv__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 509 "loop_inv.m"
        MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__4_4, 0) = ((MR_Box) (transform_hlds__loop_inv__InvArg_8));
#line 509 "loop_inv.m"
      }
#line 508 "loop_inv.m"
    else
#line 509 "loop_inv.m"
      transform_hlds__loop_inv__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 508 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__4_4;
#line 508 "loop_inv.m"
  }
#line 505 "loop_inv.m"
}

#line 464 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_1(
#line 464 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 464 "loop_inv.m"
{
#line 464 "loop_inv.m"
  {
#line 464 "loop_inv.m"
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 464 "loop_inv.m"
    MR_builtin_longjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__commit_0, 1);
#line 464 "loop_inv.m"
  }
#line 464 "loop_inv.m"
}

#line 465 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_3(
#line 465 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 465 "loop_inv.m"
{
#line 465 "loop_inv.m"
  {
#line 465 "loop_inv.m"
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 465 "loop_inv.m"
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__Gs_5 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__conv0_Gs_5);
#line 465 "loop_inv.m"
    {
#line 465 "loop_inv.m"
      transform_hlds__loop_inv__common_goal_2_p_0_2(transform_hlds__loop_inv__env_ptr);
#line 465 "loop_inv.m"
      return;
    }
#line 465 "loop_inv.m"
  }
#line 465 "loop_inv.m"
}

#line 468 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_4(
#line 468 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 468 "loop_inv.m"
{
#line 468 "loop_inv.m"
  {
#line 468 "loop_inv.m"
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 468 "loop_inv.m"
    MR_builtin_longjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__commit_1, 1);
#line 468 "loop_inv.m"
  }
#line 468 "loop_inv.m"
}

#line 468 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_6(
#line 468 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 468 "loop_inv.m"
{
#line 468 "loop_inv.m"
  {
#line 468 "loop_inv.m"
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 468 "loop_inv.m"
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__G_6 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__conv1_G_6);
#line 468 "loop_inv.m"
    {
#line 468 "loop_inv.m"
      transform_hlds__loop_inv__common_goal_2_p_0_5(transform_hlds__loop_inv__env_ptr);
#line 468 "loop_inv.m"
      return;
    }
#line 468 "loop_inv.m"
  }
#line 468 "loop_inv.m"
}

#line 468 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_5(
#line 468 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 468 "loop_inv.m"
{
#line 468 "loop_inv.m"
  {
#line 468 "loop_inv.m"
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 468 "loop_inv.m"
    {
#line 477 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_10_10;
#line 477 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_12_12;

#line 477 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__G_6, (MR_Integer) 0)));
#line 477 "loop_inv.m"
      transform_hlds__loop_inv__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__G_6, (MR_Integer) 1)));
#line 477 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goal_4, (MR_Integer) 0)));
#line 477 "loop_inv.m"
      transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goal_4, (MR_Integer) 1)));
#line 479 "loop_inv.m"
      {
#line 479 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11);
      }
#line 480 "loop_inv.m"
      if (!((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded))
#line 482 "loop_inv.m"
        {
#line 482 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__TypeInfo_21_27;
#line 482 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__PredId_13;
#line 482 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__ProcId_14;
#line 482 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__Args_15;
#line 482 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_22_22;
#line 482 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__V_23_23;
#line 482 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_24_24;
#line 481 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___BuiltinX_16;
#line 481 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___ContextX_17;
#line 481 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___SymNameX_18;
#line 483 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___BuiltinY_19;
#line 483 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___ContextY_20;
#line 483 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___SymNameY_21;

#line 481 "loop_inv.m"
          (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9)) == (MR_mktag((MR_Integer) 2)));
#line 481 "loop_inv.m"
          if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
#line 481 "loop_inv.m"
            {
#line 481 "loop_inv.m"
              {
#line 481 "loop_inv.m"
                transform_hlds__loop_inv__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 0)));
#line 481 "loop_inv.m"
                transform_hlds__loop_inv__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 1)));
#line 481 "loop_inv.m"
                transform_hlds__loop_inv__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 2)));
#line 481 "loop_inv.m"
                transform_hlds__loop_inv___BuiltinX_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 3)));
#line 481 "loop_inv.m"
                transform_hlds__loop_inv___ContextX_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 4)));
#line 481 "loop_inv.m"
                transform_hlds__loop_inv___SymNameX_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 5)));
#line 481 "loop_inv.m"
              }
#line 482 "loop_inv.m"
              {
#line 483 "loop_inv.m"
                (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11)) == (MR_mktag((MR_Integer) 2)));
#line 483 "loop_inv.m"
                if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
#line 483 "loop_inv.m"
                  {
#line 483 "loop_inv.m"
                    {
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 0)));
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 1)));
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 2)));
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv___BuiltinY_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 3)));
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv___ContextY_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 4)));
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv___SymNameY_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 5)));
#line 483 "loop_inv.m"
                    }
#line 482 "loop_inv.m"
                    {
#line 483 "loop_inv.m"
                      {
#line 483 "loop_inv.m"
                        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__loop_inv__PredId_13, transform_hlds__loop_inv__V_22_22);
                      }
#line 482 "loop_inv.m"
                      if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
#line 482 "loop_inv.m"
                        {
#line 483 "loop_inv.m"
                          (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = (transform_hlds__loop_inv__ProcId_14 == transform_hlds__loop_inv__V_23_23);
#line 482 "loop_inv.m"
                          if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
#line 482 "loop_inv.m"
                            {
#line 9756 "transform_hlds.loop_inv.c"
                              transform_hlds__loop_inv__TypeInfo_21_27 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4];
#line 483 "loop_inv.m"
                              {
#line 483 "loop_inv.m"
                                (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__loop_inv__TypeInfo_21_27, ((MR_Box) (transform_hlds__loop_inv__Args_15)), ((MR_Box) (transform_hlds__loop_inv__V_24_24)));
                              }
#line 482 "loop_inv.m"
                            }
#line 482 "loop_inv.m"
                        }
#line 482 "loop_inv.m"
                    }
#line 483 "loop_inv.m"
                  }
#line 482 "loop_inv.m"
              }
#line 481 "loop_inv.m"
            }
#line 482 "loop_inv.m"
        }
#line 480 "loop_inv.m"
      if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
#line 480 "loop_inv.m"
        {
#line 480 "loop_inv.m"
          transform_hlds__loop_inv__common_goal_2_p_0_4(transform_hlds__loop_inv__env_ptr);
#line 480 "loop_inv.m"
          return;
        }
#line 468 "loop_inv.m"
    }
#line 468 "loop_inv.m"
  }
#line 468 "loop_inv.m"
}

#line 468 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_7(
#line 468 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 468 "loop_inv.m"
{
#line 468 "loop_inv.m"
  {
#line 468 "loop_inv.m"
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 468 "loop_inv.m"
    if (MR_builtin_setjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__commit_1) == 0)
#line 468 "loop_inv.m"
      {
#line 468 "loop_inv.m"
        {
#line 468 "loop_inv.m"
          {
#line 468 "loop_inv.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__conv1_G_6, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__Gs_5, transform_hlds__loop_inv__common_goal_2_p_0_6, transform_hlds__loop_inv__env_ptr);
          }
#line 468 "loop_inv.m"
        }
#line 468 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = MR_FALSE;
#line 468 "loop_inv.m"
      }
#line 468 "loop_inv.m"
    else
#line 468 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = MR_TRUE;
#line 468 "loop_inv.m"
  }
#line 468 "loop_inv.m"
}

#line 464 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_2(
#line 464 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 464 "loop_inv.m"
{
#line 464 "loop_inv.m"
  {
#line 464 "loop_inv.m"
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 468 "loop_inv.m"
    {
#line 468 "loop_inv.m"
      transform_hlds__loop_inv__common_goal_2_p_0_7(transform_hlds__loop_inv__env_ptr);
    }
#line 466 "loop_inv.m"
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = !((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded);
#line 466 "loop_inv.m"
    if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
#line 466 "loop_inv.m"
      {
#line 466 "loop_inv.m"
        transform_hlds__loop_inv__common_goal_2_p_0_1(transform_hlds__loop_inv__env_ptr);
#line 466 "loop_inv.m"
        return;
      }
#line 464 "loop_inv.m"
  }
#line 464 "loop_inv.m"
}

#line 464 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_8(
#line 464 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 464 "loop_inv.m"
{
#line 464 "loop_inv.m"
  {
#line 464 "loop_inv.m"
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 464 "loop_inv.m"
    if (MR_builtin_setjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__commit_0) == 0)
#line 464 "loop_inv.m"
      {
#line 464 "loop_inv.m"
        {
#line 465 "loop_inv.m"
          {
#line 465 "loop_inv.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__loop_inv_scalar_common_1[1], &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__conv0_Gs_5, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goalss_3, transform_hlds__loop_inv__common_goal_2_p_0_3, transform_hlds__loop_inv__env_ptr);
          }
#line 464 "loop_inv.m"
        }
#line 464 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = MR_FALSE;
#line 464 "loop_inv.m"
      }
#line 464 "loop_inv.m"
    else
#line 464 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = MR_TRUE;
#line 464 "loop_inv.m"
  }
#line 464 "loop_inv.m"
}

#line 461 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0(
#line 461 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goalss_3,
#line 461 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_4)
#line 461 "loop_inv.m"
{
#line 461 "loop_inv.m"
  {
#line 461 "loop_inv.m"
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s transform_hlds__loop_inv__env;

#line 461 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goalss_3 = transform_hlds__loop_inv__Goalss_3;
#line 461 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goal_4 = transform_hlds__loop_inv__Goal_4;
#line 464 "loop_inv.m"
    {
#line 464 "loop_inv.m"
      transform_hlds__loop_inv__common_goal_2_p_0_8(&transform_hlds__loop_inv__env);
    }
#line 464 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = !((transform_hlds__loop_inv__env).transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded);
#line 464 "loop_inv.m"
    return (transform_hlds__loop_inv__env).transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded;
#line 461 "loop_inv.m"
  }
#line 461 "loop_inv.m"
}

#line 443 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__all_instmap_deltas_are_ground_2_p_0(
#line 443 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_1,
#line 443 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2)
#line 443 "loop_inv.m"
{
#line 446 "loop_inv.m"
  while (MR_TRUE)
#line 446 "loop_inv.m"
    {
#line 446 "loop_inv.m"
      /* tailcall optimized into a loop */
#line 446 "loop_inv.m"
      {
#line 446 "loop_inv.m"
        MR_bool transform_hlds__loop_inv__succeeded;

#line 446 "loop_inv.m"
        if ((transform_hlds__loop_inv__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 446 "loop_inv.m"
          transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 446 "loop_inv.m"
        else
#line 447 "loop_inv.m"
          {
#line 447 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Inst_6;
#line 447 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__VarInsts_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 447 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
#line 447 "loop_inv.m"
            MR_Word transform_hlds__loop_inv___Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_8_8, (MR_Integer) 0)));

#line 447 "loop_inv.m"
            transform_hlds__loop_inv__Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_8_8, (MR_Integer) 1)));
#line 448 "loop_inv.m"
            {
#line 448 "loop_inv.m"
              transform_hlds__loop_inv__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__loop_inv__ModuleInfo_1, transform_hlds__loop_inv__Inst_6);
            }
#line 447 "loop_inv.m"
            if (transform_hlds__loop_inv__succeeded)
#line 449 "loop_inv.m"
              {
#line 449 "loop_inv.m"
                /* direct tailcall eliminated */
#line 449 "loop_inv.m"
                {
#line 449 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__HeadVar__2__tmp_copy_2 = transform_hlds__loop_inv__VarInsts_7;

#line 449 "loop_inv.m"
                  transform_hlds__loop_inv__HeadVar__2_2 = transform_hlds__loop_inv__HeadVar__2__tmp_copy_2;
#line 449 "loop_inv.m"
                }
#line 449 "loop_inv.m"
                continue;
#line 449 "loop_inv.m"
              }
#line 447 "loop_inv.m"
          }
#line 446 "loop_inv.m"
        return transform_hlds__loop_inv__succeeded;
#line 446 "loop_inv.m"
      }
#line 446 "loop_inv.m"
      break;
#line 446 "loop_inv.m"
    }
#line 443 "loop_inv.m"
}

#line 416 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_handle_primitive_goal_3_p_0(
#line 416 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_4,
#line 416 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13,
#line 416 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_14)
#line 416 "loop_inv.m"
{
#line 419 "loop_inv.m"
  {
#line 419 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 419 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_4, (MR_Integer) 1)));
#line 420 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_4, (MR_Integer) 0)));
#line 422 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Detism_8;
#line 422 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__CodeModel_9;
#line 422 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InstMapDelta_10;
#line 422 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InstMapDeltaPairs_11;
#line 422 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ModuleInfo_12;
#line 422 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_15_15;
#line 432 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_19_19;
#line 432 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_20_20;

#line 422 "loop_inv.m"
    {
#line 422 "loop_inv.m"
      transform_hlds__loop_inv__Detism_8 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__loop_inv__GoalInfo_7);
    }
#line 423 "loop_inv.m"
    {
#line 423 "loop_inv.m"
      hlds__code_model__determinism_to_code_model_2_p_0(transform_hlds__loop_inv__Detism_8, &transform_hlds__loop_inv__CodeModel_9);
    }
#line 425 "loop_inv.m"
#line 425 "loop_inv.m"
    switch (transform_hlds__loop_inv__CodeModel_9) {
#line 425 "loop_inv.m"
      default:
#line 425 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_FALSE;
#line 425 "loop_inv.m"
        break;
#line 425 "loop_inv.m"
      case (MR_Integer) 0:
#line 424 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 425 "loop_inv.m"
        break;
#line 425 "loop_inv.m"
      case (MR_Integer) 1:
#line 425 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 425 "loop_inv.m"
        break;
#line 425 "loop_inv.m"
    }
#line 422 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 422 "loop_inv.m"
      {
#line 428 "loop_inv.m"
        {
#line 428 "loop_inv.m"
          transform_hlds__loop_inv__V_15_15 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__loop_inv__GoalInfo_7);
        }
#line 428 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_15_15 == (MR_Integer) 0);
#line 422 "loop_inv.m"
        if (transform_hlds__loop_inv__succeeded)
#line 422 "loop_inv.m"
          {
#line 430 "loop_inv.m"
            {
#line 430 "loop_inv.m"
              transform_hlds__loop_inv__InstMapDelta_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__loop_inv__GoalInfo_7);
            }
#line 431 "loop_inv.m"
            {
#line 431 "loop_inv.m"
              hlds__instmap__instmap_delta_to_assoc_list_2_p_0(transform_hlds__loop_inv__InstMapDelta_10, &transform_hlds__loop_inv__InstMapDeltaPairs_11);
            }
#line 432 "loop_inv.m"
            transform_hlds__loop_inv__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 0)));
#line 432 "loop_inv.m"
            transform_hlds__loop_inv__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 1)));
#line 432 "loop_inv.m"
            transform_hlds__loop_inv__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 2)));
#line 433 "loop_inv.m"
            {
#line 433 "loop_inv.m"
              transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__all_instmap_deltas_are_ground_2_p_0(transform_hlds__loop_inv__ModuleInfo_12, transform_hlds__loop_inv__InstMapDeltaPairs_11);
            }
#line 422 "loop_inv.m"
          }
#line 422 "loop_inv.m"
      }
#line 437 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 435 "loop_inv.m"
      {
#line 435 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_17_17;
#line 435 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 1)));
#line 436 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 0)));
#line 436 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 2)));
#line 435 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_23_23;
#line 435 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_25_25;
#line 435 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_24_24;

#line 436 "loop_inv.m"
        {
#line 436 "loop_inv.m"
          transform_hlds__loop_inv__V_17_17 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__loop_inv__V_18_18, ((MR_Box) (transform_hlds__loop_inv__Goal_4)));
        }
#line 435 "loop_inv.m"
        transform_hlds__loop_inv__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 0)));
#line 435 "loop_inv.m"
        transform_hlds__loop_inv__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 1)));
#line 435 "loop_inv.m"
        transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 2)));
#line 435 "loop_inv.m"
        {
#line 435 "loop_inv.m"
          MR_Word base;
#line 435 "loop_inv.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 435 "loop_inv.m"
          *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_14 = base;
#line 435 "loop_inv.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__V_23_23));
#line 435 "loop_inv.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__V_17_17));
#line 435 "loop_inv.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__loop_inv__V_25_25));
#line 435 "loop_inv.m"
        }
#line 435 "loop_inv.m"
      }
#line 437 "loop_inv.m"
    else
#line 437 "loop_inv.m"
      *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_14 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13;
#line 419 "loop_inv.m"
  }
#line 416 "loop_inv.m"
}

#line 403 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__add_recursive_call_3_p_0(
#line 403 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_4,
#line 403 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7,
#line 403 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_8)
#line 403 "loop_inv.m"
{
#line 406 "loop_inv.m"
  {
#line 406 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 406 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__RecCall_6;
#line 406 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_9_9;
#line 406 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7, (MR_Integer) 1)));
#line 406 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_12_12;
#line 406 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_13_13;
#line 406 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_16_16;
#line 406 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_17_17;
#line 407 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7, (MR_Integer) 0)));
#line 407 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7, (MR_Integer) 2)));

#line 407 "loop_inv.m"
    {
#line 407 "loop_inv.m"
      transform_hlds__loop_inv__V_9_9 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__loop_inv__V_10_10);
    }
#line 407 "loop_inv.m"
    {
#line 407 "loop_inv.m"
      transform_hlds__loop_inv__RecCall_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 407 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__RecCall_6, 0) = ((MR_Box) (transform_hlds__loop_inv__Goal_4));
#line 407 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__RecCall_6, 1) = ((MR_Box) (transform_hlds__loop_inv__V_9_9));
#line 407 "loop_inv.m"
    }
#line 408 "loop_inv.m"
    transform_hlds__loop_inv__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7, (MR_Integer) 0)));
#line 408 "loop_inv.m"
    transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7, (MR_Integer) 1)));
#line 408 "loop_inv.m"
    transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7, (MR_Integer) 2)));
#line 408 "loop_inv.m"
    {
#line 408 "loop_inv.m"
      transform_hlds__loop_inv__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "loop_inv.m"
      MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_12_12, 0) = ((MR_Box) (transform_hlds__loop_inv__RecCall_6));
#line 408 "loop_inv.m"
      MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_12_12, 1) = ((MR_Box) (transform_hlds__loop_inv__V_13_13));
#line 408 "loop_inv.m"
    }
#line 408 "loop_inv.m"
    {
#line 408 "loop_inv.m"
      MR_Word base;
#line 408 "loop_inv.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 408 "loop_inv.m"
      *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_8 = base;
#line 408 "loop_inv.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__V_16_16));
#line 408 "loop_inv.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__V_17_17));
#line 408 "loop_inv.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__loop_inv__V_12_12));
#line 408 "loop_inv.m"
    }
#line 406 "loop_inv.m"
  }
#line 403 "loop_inv.m"
}

#line 392 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_switch_4_p_0(
#line 392 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_1,
#line 392 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 392 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
#line 392 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4)
#line 392 "loop_inv.m"
{
#line 395 "loop_inv.m"
  while (MR_TRUE)
#line 395 "loop_inv.m"
    {
#line 395 "loop_inv.m"
      /* tailcall optimized into a loop */
#line 395 "loop_inv.m"
      {
#line 395 "loop_inv.m"
        MR_bool transform_hlds__loop_inv__succeeded;

#line 395 "loop_inv.m"
        if ((transform_hlds__loop_inv__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "loop_inv.m"
          *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3;
#line 395 "loop_inv.m"
        else
#line 396 "loop_inv.m"
          {
#line 396 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Case_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
#line 396 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Cases_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 396 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_10, (MR_Integer) 2)));
#line 396 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_18_18;
#line 396 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__PathCandidates0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 1)));
#line 396 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_26;
#line 397 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_10, (MR_Integer) 0)));
#line 397 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_10, (MR_Integer) 1)));
#line 362 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 0)));
#line 362 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 2)));
#line 364 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_30_30;
#line 364 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_32_32;
#line 364 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_31_31;

#line 363 "loop_inv.m"
            {
#line 363 "loop_inv.m"
              transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PPId_1, transform_hlds__loop_inv__Goal_15, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, &transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_26);
            }
#line 364 "loop_inv.m"
            transform_hlds__loop_inv__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_26, (MR_Integer) 0)));
#line 364 "loop_inv.m"
            transform_hlds__loop_inv__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_26, (MR_Integer) 1)));
#line 364 "loop_inv.m"
            transform_hlds__loop_inv__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_26, (MR_Integer) 2)));
#line 364 "loop_inv.m"
            {
#line 364 "loop_inv.m"
              transform_hlds__loop_inv__STATE_VARIABLE_IGCs_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 364 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_18_18, 0) = ((MR_Box) (transform_hlds__loop_inv__V_30_30));
#line 364 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_18_18, 1) = ((MR_Box) (transform_hlds__loop_inv__PathCandidates0_25));
#line 364 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_18_18, 2) = ((MR_Box) (transform_hlds__loop_inv__V_32_32));
#line 364 "loop_inv.m"
            }
#line 399 "loop_inv.m"
            /* direct tailcall eliminated */
#line 399 "loop_inv.m"
            {
#line 399 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__HeadVar__2__tmp_copy_2 = transform_hlds__loop_inv__Cases_11;
#line 399 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_18_18;

#line 399 "loop_inv.m"
              transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3;
#line 399 "loop_inv.m"
              transform_hlds__loop_inv__HeadVar__2_2 = transform_hlds__loop_inv__HeadVar__2__tmp_copy_2;
#line 399 "loop_inv.m"
            }
#line 399 "loop_inv.m"
            continue;
#line 396 "loop_inv.m"
          }
#line 395 "loop_inv.m"
      }
#line 395 "loop_inv.m"
      break;
#line 395 "loop_inv.m"
    }
#line 392 "loop_inv.m"
}

#line 384 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_disj_4_p_0(
#line 384 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_1,
#line 384 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 384 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
#line 384 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4)
#line 384 "loop_inv.m"
{
#line 387 "loop_inv.m"
  while (MR_TRUE)
#line 387 "loop_inv.m"
    {
#line 387 "loop_inv.m"
      /* tailcall optimized into a loop */
#line 387 "loop_inv.m"
      {
#line 387 "loop_inv.m"
        MR_bool transform_hlds__loop_inv__succeeded;

#line 387 "loop_inv.m"
        if ((transform_hlds__loop_inv__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 387 "loop_inv.m"
          *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3;
#line 387 "loop_inv.m"
        else
#line 388 "loop_inv.m"
          {
#line 388 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
#line 388 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 388 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15;
#line 388 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__PathCandidates0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 1)));
#line 388 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23;
#line 362 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 0)));
#line 362 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 2)));
#line 364 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_27_27;
#line 364 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_29_29;
#line 364 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_28_28;

#line 363 "loop_inv.m"
            {
#line 363 "loop_inv.m"
              transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PPId_1, transform_hlds__loop_inv__Goal_10, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, &transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23);
            }
#line 364 "loop_inv.m"
            transform_hlds__loop_inv__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23, (MR_Integer) 0)));
#line 364 "loop_inv.m"
            transform_hlds__loop_inv__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23, (MR_Integer) 1)));
#line 364 "loop_inv.m"
            transform_hlds__loop_inv__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23, (MR_Integer) 2)));
#line 364 "loop_inv.m"
            {
#line 364 "loop_inv.m"
              transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 364 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15, 0) = ((MR_Box) (transform_hlds__loop_inv__V_27_27));
#line 364 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15, 1) = ((MR_Box) (transform_hlds__loop_inv__PathCandidates0_22));
#line 364 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15, 2) = ((MR_Box) (transform_hlds__loop_inv__V_29_29));
#line 364 "loop_inv.m"
            }
#line 390 "loop_inv.m"
            /* direct tailcall eliminated */
#line 390 "loop_inv.m"
            {
#line 390 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__HeadVar__2__tmp_copy_2 = transform_hlds__loop_inv__Goals_11;
#line 390 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15;

#line 390 "loop_inv.m"
              transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3;
#line 390 "loop_inv.m"
              transform_hlds__loop_inv__HeadVar__2_2 = transform_hlds__loop_inv__HeadVar__2__tmp_copy_2;
#line 390 "loop_inv.m"
            }
#line 390 "loop_inv.m"
            continue;
#line 388 "loop_inv.m"
          }
#line 387 "loop_inv.m"
      }
#line 387 "loop_inv.m"
      break;
#line 387 "loop_inv.m"
    }
#line 384 "loop_inv.m"
}

#line 376 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_parallel_conj_4_p_0(
#line 376 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_1,
#line 376 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 376 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
#line 376 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4)
#line 376 "loop_inv.m"
{
#line 379 "loop_inv.m"
  while (MR_TRUE)
#line 379 "loop_inv.m"
    {
#line 379 "loop_inv.m"
      /* tailcall optimized into a loop */
#line 379 "loop_inv.m"
      {
#line 379 "loop_inv.m"
        MR_bool transform_hlds__loop_inv__succeeded;

#line 379 "loop_inv.m"
        if ((transform_hlds__loop_inv__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 379 "loop_inv.m"
          *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3;
#line 379 "loop_inv.m"
        else
#line 380 "loop_inv.m"
          {
#line 380 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
#line 380 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 380 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15;
#line 380 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__PathCandidates0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 1)));
#line 380 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23;
#line 362 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 0)));
#line 362 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 2)));
#line 364 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_27_27;
#line 364 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_29_29;
#line 364 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_28_28;

#line 363 "loop_inv.m"
            {
#line 363 "loop_inv.m"
              transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PPId_1, transform_hlds__loop_inv__Goal_10, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, &transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23);
            }
#line 364 "loop_inv.m"
            transform_hlds__loop_inv__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23, (MR_Integer) 0)));
#line 364 "loop_inv.m"
            transform_hlds__loop_inv__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23, (MR_Integer) 1)));
#line 364 "loop_inv.m"
            transform_hlds__loop_inv__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23, (MR_Integer) 2)));
#line 364 "loop_inv.m"
            {
#line 364 "loop_inv.m"
              transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 364 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15, 0) = ((MR_Box) (transform_hlds__loop_inv__V_27_27));
#line 364 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15, 1) = ((MR_Box) (transform_hlds__loop_inv__PathCandidates0_22));
#line 364 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15, 2) = ((MR_Box) (transform_hlds__loop_inv__V_29_29));
#line 364 "loop_inv.m"
            }
#line 382 "loop_inv.m"
            /* direct tailcall eliminated */
#line 382 "loop_inv.m"
            {
#line 382 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__HeadVar__2__tmp_copy_2 = transform_hlds__loop_inv__Goals_11;
#line 382 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15;

#line 382 "loop_inv.m"
              transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3;
#line 382 "loop_inv.m"
              transform_hlds__loop_inv__HeadVar__2_2 = transform_hlds__loop_inv__HeadVar__2__tmp_copy_2;
#line 382 "loop_inv.m"
            }
#line 382 "loop_inv.m"
            continue;
#line 380 "loop_inv.m"
          }
#line 379 "loop_inv.m"
      }
#line 379 "loop_inv.m"
      break;
#line 379 "loop_inv.m"
    }
#line 376 "loop_inv.m"
}

#line 368 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_plain_conj_4_p_0(
#line 368 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_1,
#line 368 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 368 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
#line 368 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4)
#line 368 "loop_inv.m"
{
#line 371 "loop_inv.m"
  while (MR_TRUE)
#line 371 "loop_inv.m"
    {
#line 371 "loop_inv.m"
      /* tailcall optimized into a loop */
#line 371 "loop_inv.m"
      {
#line 371 "loop_inv.m"
        MR_bool transform_hlds__loop_inv__succeeded;

#line 371 "loop_inv.m"
        if ((transform_hlds__loop_inv__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 371 "loop_inv.m"
          *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3;
#line 371 "loop_inv.m"
        else
#line 372 "loop_inv.m"
          {
#line 372 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
#line 372 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 372 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15;

#line 373 "loop_inv.m"
            {
#line 373 "loop_inv.m"
              transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PPId_1, transform_hlds__loop_inv__Goal_10, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, &transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15);
            }
#line 374 "loop_inv.m"
            /* direct tailcall eliminated */
#line 374 "loop_inv.m"
            {
#line 374 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__HeadVar__2__tmp_copy_2 = transform_hlds__loop_inv__Goals_11;
#line 374 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15;

#line 374 "loop_inv.m"
              transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3;
#line 374 "loop_inv.m"
              transform_hlds__loop_inv__HeadVar__2_2 = transform_hlds__loop_inv__HeadVar__2__tmp_copy_2;
#line 374 "loop_inv.m"
            }
#line 374 "loop_inv.m"
            continue;
#line 372 "loop_inv.m"
          }
#line 371 "loop_inv.m"
      }
#line 371 "loop_inv.m"
      break;
#line 371 "loop_inv.m"
    }
#line 368 "loop_inv.m"
}

#line 358 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_4_p_0(
#line 358 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_5,
#line 358 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_6,
#line 358 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_9,
#line 358 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_10)
#line 358 "loop_inv.m"
{
#line 361 "loop_inv.m"
  {
#line 361 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 361 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__PathCandidates0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_9, (MR_Integer) 1)));
#line 361 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_11;
#line 362 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_9, (MR_Integer) 0)));
#line 362 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_9, (MR_Integer) 2)));
#line 364 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_15_15;
#line 364 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_17_17;
#line 364 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_16_16;

#line 363 "loop_inv.m"
    {
#line 363 "loop_inv.m"
      transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Goal_6, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_9, &transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_11);
    }
#line 364 "loop_inv.m"
    transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_11, (MR_Integer) 0)));
#line 364 "loop_inv.m"
    transform_hlds__loop_inv__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_11, (MR_Integer) 1)));
#line 364 "loop_inv.m"
    transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_11, (MR_Integer) 2)));
#line 364 "loop_inv.m"
    {
#line 364 "loop_inv.m"
      MR_Word base;
#line 364 "loop_inv.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 364 "loop_inv.m"
      *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_10 = base;
#line 364 "loop_inv.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__V_15_15));
#line 364 "loop_inv.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__PathCandidates0_8));
#line 364 "loop_inv.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__loop_inv__V_17_17));
#line 364 "loop_inv.m"
    }
#line 361 "loop_inv.m"
  }
#line 358 "loop_inv.m"
}

#line 302 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(
#line 302 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_5,
#line 302 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_6,
#line 302 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47,
#line 302 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48)
#line 302 "loop_inv.m"
{
#line 305 "loop_inv.m"
  {
#line 305 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 305 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_6, (MR_Integer) 0)));
#line 305 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_6, (MR_Integer) 1)));

#line 314 "loop_inv.m"
#line 314 "loop_inv.m"
    switch (MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_8)) {
#line 314 "loop_inv.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 314 "loop_inv.m"
      case (MR_Integer) 0:
#line 336 "loop_inv.m"
        {
#line 336 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__SubGoal_39 = (MR_Word) MR_body(((MR_Word) transform_hlds__loop_inv__GoalExpr_8), (MR_Integer) 0);

#line 337 "loop_inv.m"
          {
#line 337 "loop_inv.m"
            transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__SubGoal_39, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
#line 337 "loop_inv.m"
            return;
          }
#line 336 "loop_inv.m"
        }
#line 314 "loop_inv.m"
        break;
#line 314 "loop_inv.m"
      case (MR_Integer) 1:
#line 437 "loop_inv.m"
        {
#line 422 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__Detism_80;
#line 422 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__CodeModel_81;
#line 422 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__InstMapDelta_82;
#line 422 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__InstMapDeltaPairs_83;
#line 422 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__ModuleInfo_84;
#line 422 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_85_85;
#line 432 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_89_89;
#line 432 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_90_90;

#line 422 "loop_inv.m"
          {
#line 422 "loop_inv.m"
            transform_hlds__loop_inv__Detism_80 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__loop_inv___GoalInfo_9);
          }
#line 423 "loop_inv.m"
          {
#line 423 "loop_inv.m"
            hlds__code_model__determinism_to_code_model_2_p_0(transform_hlds__loop_inv__Detism_80, &transform_hlds__loop_inv__CodeModel_81);
          }
#line 425 "loop_inv.m"
#line 425 "loop_inv.m"
          switch (transform_hlds__loop_inv__CodeModel_81) {
#line 425 "loop_inv.m"
            default:
#line 425 "loop_inv.m"
              transform_hlds__loop_inv__succeeded = MR_FALSE;
#line 425 "loop_inv.m"
              break;
#line 425 "loop_inv.m"
            case (MR_Integer) 0:
#line 424 "loop_inv.m"
              transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 425 "loop_inv.m"
              break;
#line 425 "loop_inv.m"
            case (MR_Integer) 1:
#line 425 "loop_inv.m"
              transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 425 "loop_inv.m"
              break;
#line 425 "loop_inv.m"
          }
#line 422 "loop_inv.m"
          if (transform_hlds__loop_inv__succeeded)
#line 422 "loop_inv.m"
            {
#line 428 "loop_inv.m"
              {
#line 428 "loop_inv.m"
                transform_hlds__loop_inv__V_85_85 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__loop_inv___GoalInfo_9);
              }
#line 428 "loop_inv.m"
              transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_85_85 == (MR_Integer) 0);
#line 422 "loop_inv.m"
              if (transform_hlds__loop_inv__succeeded)
#line 422 "loop_inv.m"
                {
#line 430 "loop_inv.m"
                  {
#line 430 "loop_inv.m"
                    transform_hlds__loop_inv__InstMapDelta_82 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__loop_inv___GoalInfo_9);
                  }
#line 431 "loop_inv.m"
                  {
#line 431 "loop_inv.m"
                    hlds__instmap__instmap_delta_to_assoc_list_2_p_0(transform_hlds__loop_inv__InstMapDelta_82, &transform_hlds__loop_inv__InstMapDeltaPairs_83);
                  }
#line 432 "loop_inv.m"
                  transform_hlds__loop_inv__ModuleInfo_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 0)));
#line 432 "loop_inv.m"
                  transform_hlds__loop_inv__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 1)));
#line 432 "loop_inv.m"
                  transform_hlds__loop_inv__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 2)));
#line 433 "loop_inv.m"
                  {
#line 433 "loop_inv.m"
                    transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__all_instmap_deltas_are_ground_2_p_0(transform_hlds__loop_inv__ModuleInfo_84, transform_hlds__loop_inv__InstMapDeltaPairs_83);
                  }
#line 422 "loop_inv.m"
                }
#line 422 "loop_inv.m"
            }
#line 437 "loop_inv.m"
          if (transform_hlds__loop_inv__succeeded)
#line 435 "loop_inv.m"
            {
#line 435 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_87_87;
#line 435 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 1)));
#line 436 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 0)));
#line 436 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 2)));
#line 435 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_93_93;
#line 435 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_95_95;
#line 435 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_94_94;

#line 436 "loop_inv.m"
              {
#line 436 "loop_inv.m"
                transform_hlds__loop_inv__V_87_87 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__loop_inv__V_88_88, ((MR_Box) (transform_hlds__loop_inv__Goal_6)));
              }
#line 435 "loop_inv.m"
              transform_hlds__loop_inv__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 0)));
#line 435 "loop_inv.m"
              transform_hlds__loop_inv__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 1)));
#line 435 "loop_inv.m"
              transform_hlds__loop_inv__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 2)));
#line 435 "loop_inv.m"
              {
#line 435 "loop_inv.m"
                MR_Word base;
#line 435 "loop_inv.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 435 "loop_inv.m"
                *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48 = base;
#line 435 "loop_inv.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__V_93_93));
#line 435 "loop_inv.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__V_87_87));
#line 435 "loop_inv.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__loop_inv__V_95_95));
#line 435 "loop_inv.m"
              }
#line 435 "loop_inv.m"
            }
#line 437 "loop_inv.m"
          else
#line 437 "loop_inv.m"
            *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47;
#line 437 "loop_inv.m"
        }
#line 314 "loop_inv.m"
        break;
#line 314 "loop_inv.m"
      case (MR_Integer) 2:
#line 308 "loop_inv.m"
        {
#line 308 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 0)));
#line 308 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 1)));
#line 308 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 2)));
#line 308 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 3)));
#line 308 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 4)));
#line 308 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 5)));
#line 309 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PPId_5, (MR_Integer) 0)));
#line 309 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PPId_5, (MR_Integer) 1)));

#line 309 "loop_inv.m"
          {
#line 309 "loop_inv.m"
            transform_hlds__loop_inv__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__loop_inv__PredId_10, transform_hlds__loop_inv__V_71_71);
          }
#line 309 "loop_inv.m"
          if (transform_hlds__loop_inv__succeeded)
#line 309 "loop_inv.m"
            transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__ProcId_11 == transform_hlds__loop_inv__V_72_72);
#line 311 "loop_inv.m"
          if (transform_hlds__loop_inv__succeeded)
#line 310 "loop_inv.m"
            {
#line 310 "loop_inv.m"
              transform_hlds__loop_inv__add_recursive_call_3_p_0(transform_hlds__loop_inv__Goal_6, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
#line 310 "loop_inv.m"
              return;
            }
#line 311 "loop_inv.m"
          else
#line 312 "loop_inv.m"
            {
#line 312 "loop_inv.m"
              transform_hlds__loop_inv__invariant_goal_candidates_handle_primitive_goal_3_p_0(transform_hlds__loop_inv__Goal_6, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
#line 312 "loop_inv.m"
              return;
            }
#line 308 "loop_inv.m"
        }
#line 314 "loop_inv.m"
        break;
#line 314 "loop_inv.m"
      case (MR_Integer) 3:
#line 314 "loop_inv.m"
#line 314 "loop_inv.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 0)))) {
#line 314 "loop_inv.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 314 "loop_inv.m"
          case (MR_Integer) 0:
#line 314 "loop_inv.m"
          case (MR_Integer) 1:
#line 437 "loop_inv.m"
            {
#line 422 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Detism_80;
#line 422 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__CodeModel_81;
#line 422 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__InstMapDelta_82;
#line 422 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__InstMapDeltaPairs_83;
#line 422 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__ModuleInfo_84;
#line 422 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_85_85;
#line 432 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_89_89;
#line 432 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_90_90;

#line 422 "loop_inv.m"
              {
#line 422 "loop_inv.m"
                transform_hlds__loop_inv__Detism_80 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__loop_inv___GoalInfo_9);
              }
#line 423 "loop_inv.m"
              {
#line 423 "loop_inv.m"
                hlds__code_model__determinism_to_code_model_2_p_0(transform_hlds__loop_inv__Detism_80, &transform_hlds__loop_inv__CodeModel_81);
              }
#line 425 "loop_inv.m"
#line 425 "loop_inv.m"
              switch (transform_hlds__loop_inv__CodeModel_81) {
#line 425 "loop_inv.m"
                default:
#line 425 "loop_inv.m"
                  transform_hlds__loop_inv__succeeded = MR_FALSE;
#line 425 "loop_inv.m"
                  break;
#line 425 "loop_inv.m"
                case (MR_Integer) 0:
#line 424 "loop_inv.m"
                  transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 425 "loop_inv.m"
                  break;
#line 425 "loop_inv.m"
                case (MR_Integer) 1:
#line 425 "loop_inv.m"
                  transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 425 "loop_inv.m"
                  break;
#line 425 "loop_inv.m"
              }
#line 422 "loop_inv.m"
              if (transform_hlds__loop_inv__succeeded)
#line 422 "loop_inv.m"
                {
#line 428 "loop_inv.m"
                  {
#line 428 "loop_inv.m"
                    transform_hlds__loop_inv__V_85_85 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__loop_inv___GoalInfo_9);
                  }
#line 428 "loop_inv.m"
                  transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_85_85 == (MR_Integer) 0);
#line 422 "loop_inv.m"
                  if (transform_hlds__loop_inv__succeeded)
#line 422 "loop_inv.m"
                    {
#line 430 "loop_inv.m"
                      {
#line 430 "loop_inv.m"
                        transform_hlds__loop_inv__InstMapDelta_82 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__loop_inv___GoalInfo_9);
                      }
#line 431 "loop_inv.m"
                      {
#line 431 "loop_inv.m"
                        hlds__instmap__instmap_delta_to_assoc_list_2_p_0(transform_hlds__loop_inv__InstMapDelta_82, &transform_hlds__loop_inv__InstMapDeltaPairs_83);
                      }
#line 432 "loop_inv.m"
                      transform_hlds__loop_inv__ModuleInfo_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 0)));
#line 432 "loop_inv.m"
                      transform_hlds__loop_inv__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 1)));
#line 432 "loop_inv.m"
                      transform_hlds__loop_inv__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 2)));
#line 433 "loop_inv.m"
                      {
#line 433 "loop_inv.m"
                        transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__all_instmap_deltas_are_ground_2_p_0(transform_hlds__loop_inv__ModuleInfo_84, transform_hlds__loop_inv__InstMapDeltaPairs_83);
                      }
#line 422 "loop_inv.m"
                    }
#line 422 "loop_inv.m"
                }
#line 437 "loop_inv.m"
              if (transform_hlds__loop_inv__succeeded)
#line 435 "loop_inv.m"
                {
#line 435 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_87_87;
#line 435 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 1)));
#line 436 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 0)));
#line 436 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 2)));
#line 435 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_93_93;
#line 435 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_95_95;
#line 435 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_94_94;

#line 436 "loop_inv.m"
                  {
#line 436 "loop_inv.m"
                    transform_hlds__loop_inv__V_87_87 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__loop_inv__V_88_88, ((MR_Box) (transform_hlds__loop_inv__Goal_6)));
                  }
#line 435 "loop_inv.m"
                  transform_hlds__loop_inv__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 0)));
#line 435 "loop_inv.m"
                  transform_hlds__loop_inv__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 1)));
#line 435 "loop_inv.m"
                  transform_hlds__loop_inv__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 2)));
#line 435 "loop_inv.m"
                  {
#line 435 "loop_inv.m"
                    MR_Word base;
#line 435 "loop_inv.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 435 "loop_inv.m"
                    *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48 = base;
#line 435 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__V_93_93));
#line 435 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__V_87_87));
#line 435 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__loop_inv__V_95_95));
#line 435 "loop_inv.m"
                  }
#line 435 "loop_inv.m"
                }
#line 437 "loop_inv.m"
              else
#line 437 "loop_inv.m"
                *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47;
#line 437 "loop_inv.m"
            }
#line 314 "loop_inv.m"
            break;
#line 314 "loop_inv.m"
          case (MR_Integer) 2:
#line 321 "loop_inv.m"
            {
#line 321 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__ConjType_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 1)));
#line 321 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Conjuncts_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 2)));

#line 325 "loop_inv.m"
#line 325 "loop_inv.m"
              switch (transform_hlds__loop_inv__ConjType_33) {
#line 325 "loop_inv.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 325 "loop_inv.m"
                case (MR_Integer) 1:
#line 327 "loop_inv.m"
                  {
#line 327 "loop_inv.m"
                    transform_hlds__loop_inv__invariant_goal_candidates_in_parallel_conj_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Conjuncts_34, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
#line 327 "loop_inv.m"
                    return;
                  }
#line 325 "loop_inv.m"
                  break;
#line 325 "loop_inv.m"
                case (MR_Integer) 0:
#line 324 "loop_inv.m"
                  {
#line 324 "loop_inv.m"
                    transform_hlds__loop_inv__invariant_goal_candidates_in_plain_conj_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Conjuncts_34, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
#line 324 "loop_inv.m"
                    return;
                  }
#line 325 "loop_inv.m"
                  break;
#line 325 "loop_inv.m"
              }
#line 321 "loop_inv.m"
            }
#line 314 "loop_inv.m"
            break;
#line 314 "loop_inv.m"
          case (MR_Integer) 3:
#line 330 "loop_inv.m"
            {
#line 330 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Disjuncts_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 1)));

#line 331 "loop_inv.m"
              {
#line 331 "loop_inv.m"
                transform_hlds__loop_inv__invariant_goal_candidates_in_disj_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Disjuncts_35, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
#line 331 "loop_inv.m"
                return;
              }
#line 330 "loop_inv.m"
            }
#line 314 "loop_inv.m"
            break;
#line 314 "loop_inv.m"
          case (MR_Integer) 4:
#line 333 "loop_inv.m"
            {
#line 333 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Cases_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 3)));
#line 333 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 1)));
#line 333 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 2)));

#line 334 "loop_inv.m"
              {
#line 334 "loop_inv.m"
                transform_hlds__loop_inv__invariant_goal_candidates_in_switch_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Cases_38, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
#line 334 "loop_inv.m"
                return;
              }
#line 333 "loop_inv.m"
            }
#line 314 "loop_inv.m"
            break;
#line 314 "loop_inv.m"
          case (MR_Integer) 5:
#line 339 "loop_inv.m"
            {
#line 339 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__SubGoal_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 2)));
#line 339 "loop_inv.m"
              MR_Word transform_hlds__loop_inv___Reason_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 1)));

#line 342 "loop_inv.m"
              {
#line 342 "loop_inv.m"
                transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__SubGoal_65, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
#line 342 "loop_inv.m"
                return;
              }
#line 339 "loop_inv.m"
            }
#line 314 "loop_inv.m"
            break;
#line 314 "loop_inv.m"
          case (MR_Integer) 6:
#line 344 "loop_inv.m"
            {
#line 344 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Cond_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 2)));
#line 344 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Then_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 3)));
#line 344 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Else_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 4)));
#line 344 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__PathCandidates0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 1)));
#line 344 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_52_52;
#line 344 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_53_53;
#line 344 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_54_54;
#line 344 "loop_inv.m"
              MR_Word transform_hlds__loop_inv___XVs_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 1)));
#line 345 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 0)));
#line 345 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 2)));
#line 348 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_68_68;
#line 348 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_70_70;
#line 348 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_69_69;

#line 346 "loop_inv.m"
              {
#line 346 "loop_inv.m"
                transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Cond_42, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, &transform_hlds__loop_inv__STATE_VARIABLE_IGCs_52_52);
              }
#line 347 "loop_inv.m"
              {
#line 347 "loop_inv.m"
                transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Then_43, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_52_52, &transform_hlds__loop_inv__STATE_VARIABLE_IGCs_53_53);
              }
#line 348 "loop_inv.m"
              transform_hlds__loop_inv__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_53_53, (MR_Integer) 0)));
#line 348 "loop_inv.m"
              transform_hlds__loop_inv__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_53_53, (MR_Integer) 1)));
#line 348 "loop_inv.m"
              transform_hlds__loop_inv__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_53_53, (MR_Integer) 2)));
#line 348 "loop_inv.m"
              {
#line 348 "loop_inv.m"
                transform_hlds__loop_inv__STATE_VARIABLE_IGCs_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 348 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_54_54, 0) = ((MR_Box) (transform_hlds__loop_inv__V_68_68));
#line 348 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_54_54, 1) = ((MR_Box) (transform_hlds__loop_inv__PathCandidates0_45));
#line 348 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_54_54, 2) = ((MR_Box) (transform_hlds__loop_inv__V_70_70));
#line 348 "loop_inv.m"
              }
#line 349 "loop_inv.m"
              {
#line 349 "loop_inv.m"
                transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Else_44, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_54_54, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
#line 349 "loop_inv.m"
                return;
              }
#line 344 "loop_inv.m"
            }
#line 314 "loop_inv.m"
            break;
#line 314 "loop_inv.m"
          case (MR_Integer) 7:
#line 351 "loop_inv.m"
            {
#line 353 "loop_inv.m"
              {
#line 353 "loop_inv.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "predicate \140transform_hlds.loop_inv.invariant_goal_candidates_in_goal\'/4", (MR_String) "shorthand");
#line 353 "loop_inv.m"
                return;
              }
#line 351 "loop_inv.m"
            }
#line 314 "loop_inv.m"
            break;
#line 314 "loop_inv.m"
        }
#line 314 "loop_inv.m"
        break;
#line 314 "loop_inv.m"
    }
#line 305 "loop_inv.m"
  }
#line 302 "loop_inv.m"
}

#line 498 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_4(
#line 498 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 498 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 498 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2)
#line 498 "loop_inv.m"
{
#line 498 "loop_inv.m"
  {
#line 498 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 498 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 498 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv3_HeadVar__2_28;

#line 498 "loop_inv.m"
    {
#line 498 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__IntroducedFrom__pred__inv_args__498__1_2_p_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), &transform_hlds__loop_inv__conv3_HeadVar__2_28);
    }
#line 498 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 498 "loop_inv.m"
      {
#line 498 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv3_HeadVar__2_28));
#line 498 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 498 "loop_inv.m"
      }
#line 498 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 498 "loop_inv.m"
  }
#line 498 "loop_inv.m"
}

#line 497 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_3(
#line 497 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 497 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 497 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
#line 497 "loop_inv.m"
{
#line 497 "loop_inv.m"
  {
#line 497 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_3;
#line 497 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 497 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv1_HeadVar__3_3;

#line 497 "loop_inv.m"
    {
#line 497 "loop_inv.m"
      transform_hlds__loop_inv__conv1_HeadVar__3_3 = transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
#line 497 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv1_HeadVar__3_3));
#line 497 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_3;
#line 497 "loop_inv.m"
  }
#line 497 "loop_inv.m"
}

#line 494 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_2(
#line 494 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 494 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 494 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
#line 494 "loop_inv.m"
{
#line 494 "loop_inv.m"
  {
#line 494 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_3;
#line 494 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 494 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__4_4;

#line 494 "loop_inv.m"
    {
#line 494 "loop_inv.m"
      transform_hlds__loop_inv__conv0_HeadVar__4_4 = transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
#line 494 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__4_4));
#line 494 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_3;
#line 494 "loop_inv.m"
  }
#line 494 "loop_inv.m"
}

#line 457 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_1(
#line 457 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 457 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 457 "loop_inv.m"
{
#line 457 "loop_inv.m"
  {
#line 457 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 457 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;

#line 457 "loop_inv.m"
    {
#line 457 "loop_inv.m"
      return transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__common_goal_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 457 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 457 "loop_inv.m"
  }
#line 457 "loop_inv.m"
}

#line 114 "loop_inv.m"
void MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0(
#line 114 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredProcId_7,
#line 114 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredInfo_8,
#line 114 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_0_34,
#line 114 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_35,
#line 114 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36,
#line 114 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_37)
#line 114 "loop_inv.m"
{
#line 254 "loop_inv.m"
  {
#line 254 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 254 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Body_11;
#line 254 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVars_12;
#line 254 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InvArgs_18;
#line 254 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InvGoals_23;
#line 254 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InvVars_24;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeInfo_43_43;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeCtorInfo_44_44;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeInfo_7_50;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeCtorInfo_19_64;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeInfo_20_65;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeInfo_16_81;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeCtorInfo_17_82;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeInfo_18_83;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeCtorInfo_22_87;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeInfo_23_88;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVarModes_13;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__UniquelyUsedVars_14;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InvGoals0_15;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__RecCalls_16;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InvArgs0_17;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InvGoals1_19;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InvVars1_20;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__DontHoistGoals_21;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__DontHoistVars_22;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_46_46;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_49_49;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalCandidates0_56;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalCandidates_57;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__RecCalls_60;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__CandidateInvGoalsList_61;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_62_62;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_63_63;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__MaybeInvArgs0_76;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__MaybeInvArgs_77;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_78_78;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_79_79;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_80_80;
#line 296 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_58_58;
#line 296 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_59_59;
#line 497 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__conv2_MaybeInvArgs_77;
#line 211 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_25_25;
#line 211 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_26_26;

#line 153 "loop_inv.m"
    {
#line 153 "loop_inv.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(transform_hlds__loop_inv__PredInfo_8, &transform_hlds__loop_inv__V_46_46);
    }
#line 153 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = ((MR_Integer) 0 == transform_hlds__loop_inv__V_46_46);
#line 153 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 153 "loop_inv.m"
      {
#line 158 "loop_inv.m"
        {
#line 158 "loop_inv.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_0_34, &transform_hlds__loop_inv__Body_11);
        }
#line 159 "loop_inv.m"
        {
#line 159 "loop_inv.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_0_34, &transform_hlds__loop_inv__HeadVars_12);
        }
#line 160 "loop_inv.m"
        {
#line 160 "loop_inv.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_0_34, &transform_hlds__loop_inv__HeadVarModes_13);
        }
#line 11590 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeInfo_7_50 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1099 "loop_inv.m"
        {
#line 1099 "loop_inv.m"
          transform_hlds__loop_inv__V_49_49 = transform_hlds__loop_inv__used_vars_2_f_0(transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36, transform_hlds__loop_inv__Body_11);
        }
#line 1099 "loop_inv.m"
        {
#line 1099 "loop_inv.m"
          transform_hlds__loop_inv__UniquelyUsedVars_14 = mercury__list__sort_and_remove_dups_1_f_0(transform_hlds__loop_inv__TypeInfo_7_50, transform_hlds__loop_inv__V_49_49);
        }
#line 11602 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeCtorInfo_19_64 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 293 "loop_inv.m"
        {
#line 293 "loop_inv.m"
          transform_hlds__loop_inv__V_62_62 = mercury__cord__empty_0_f_0(transform_hlds__loop_inv__TypeCtorInfo_19_64);
        }
#line 293 "loop_inv.m"
        transform_hlds__loop_inv__V_63_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 293 "loop_inv.m"
        {
#line 293 "loop_inv.m"
          transform_hlds__loop_inv__GoalCandidates0_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 293 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GoalCandidates0_56, 0) = ((MR_Box) (transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36));
#line 293 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GoalCandidates0_56, 1) = ((MR_Box) (transform_hlds__loop_inv__V_62_62));
#line 293 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GoalCandidates0_56, 2) = ((MR_Box) (transform_hlds__loop_inv__V_63_63));
#line 293 "loop_inv.m"
        }
#line 294 "loop_inv.m"
        {
#line 294 "loop_inv.m"
          transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PredProcId_7, transform_hlds__loop_inv__Body_11, transform_hlds__loop_inv__GoalCandidates0_56, &transform_hlds__loop_inv__GoalCandidates_57);
        }
#line 296 "loop_inv.m"
        transform_hlds__loop_inv__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GoalCandidates_57, (MR_Integer) 0)));
#line 296 "loop_inv.m"
        transform_hlds__loop_inv__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GoalCandidates_57, (MR_Integer) 1)));
#line 296 "loop_inv.m"
        transform_hlds__loop_inv__RecCalls_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GoalCandidates_57, (MR_Integer) 2)));
#line 11634 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeInfo_20_65 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[1];
#line 297 "loop_inv.m"
        {
#line 297 "loop_inv.m"
          mercury__assoc_list__keys_and_values_3_p_0(transform_hlds__loop_inv__TypeCtorInfo_19_64, transform_hlds__loop_inv__TypeInfo_20_65, transform_hlds__loop_inv__RecCalls_60, &transform_hlds__loop_inv__RecCalls_16, &transform_hlds__loop_inv__CandidateInvGoalsList_61);
        }
#line 455 "loop_inv.m"
        if ((transform_hlds__loop_inv__CandidateInvGoalsList_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 455 "loop_inv.m"
          transform_hlds__loop_inv__InvGoals0_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 455 "loop_inv.m"
        else
#line 456 "loop_inv.m"
          {
#line 456 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Goals_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__CandidateInvGoalsList_61, (MR_Integer) 0)));
#line 456 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Goalss_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__CandidateInvGoalsList_61, (MR_Integer) 1)));
#line 456 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_68_68;

#line 457 "loop_inv.m"
            {
#line 457 "loop_inv.m"
              transform_hlds__loop_inv__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 457 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_68_68, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[0]));
#line 457 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_68_68, 1) = ((MR_Box) (transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_1));
#line 457 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 457 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_68_68, 3) = ((MR_Box) (transform_hlds__loop_inv__Goalss_67));
#line 457 "loop_inv.m"
            }
#line 457 "loop_inv.m"
            {
#line 457 "loop_inv.m"
              transform_hlds__loop_inv__InvGoals0_15 = mercury__list__filter_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__loop_inv__V_68_68, transform_hlds__loop_inv__Goals_66);
            }
#line 456 "loop_inv.m"
          }
#line 11677 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeInfo_16_81 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 11679 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeCtorInfo_17_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 11681 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeInfo_18_83 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[2];
#line 494 "loop_inv.m"
        {
#line 494 "loop_inv.m"
          transform_hlds__loop_inv__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 494 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_78_78, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[0]));
#line 494 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_78_78, 1) = ((MR_Box) (transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_2));
#line 494 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 494 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_78_78, 3) = ((MR_Box) (transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36));
#line 494 "loop_inv.m"
        }
#line 494 "loop_inv.m"
        {
#line 494 "loop_inv.m"
          transform_hlds__loop_inv__MaybeInvArgs0_76 = mercury__list__map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_16_81, transform_hlds__loop_inv__TypeCtorInfo_17_82, transform_hlds__loop_inv__TypeInfo_18_83, transform_hlds__loop_inv__V_78_78, transform_hlds__loop_inv__HeadVars_12, transform_hlds__loop_inv__HeadVarModes_13);
        }
#line 11702 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeCtorInfo_22_87 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 11704 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeInfo_23_88 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[3];
#line 497 "loop_inv.m"
        transform_hlds__loop_inv__V_79_79 = (MR_Word) &transform_hlds__loop_inv_scalar_common_2[1];
#line 497 "loop_inv.m"
        {
#line 497 "loop_inv.m"
          transform_hlds__loop_inv__conv2_MaybeInvArgs_77 = mercury__list__foldl_3_f_0(transform_hlds__loop_inv__TypeCtorInfo_22_87, transform_hlds__loop_inv__TypeInfo_23_88, transform_hlds__loop_inv__V_79_79, transform_hlds__loop_inv__RecCalls_16, ((MR_Box) (transform_hlds__loop_inv__MaybeInvArgs0_76)));
        }
#line 497 "loop_inv.m"
        transform_hlds__loop_inv__MaybeInvArgs_77 = ((MR_Word) transform_hlds__loop_inv__conv2_MaybeInvArgs_77);
#line 498 "loop_inv.m"
        transform_hlds__loop_inv__V_80_80 = (MR_Word) &transform_hlds__loop_inv_scalar_common_2[2];
#line 498 "loop_inv.m"
        {
#line 498 "loop_inv.m"
          mercury__list__filter_map_3_p_0(transform_hlds__loop_inv__TypeInfo_18_83, transform_hlds__loop_inv__TypeInfo_16_81, transform_hlds__loop_inv__V_80_80, transform_hlds__loop_inv__MaybeInvArgs_77, &transform_hlds__loop_inv__InvArgs0_17);
        }
#line 11722 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeInfo_43_43 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 181 "loop_inv.m"
        {
#line 181 "loop_inv.m"
          mercury__list__delete_elems_3_p_0(transform_hlds__loop_inv__TypeInfo_43_43, transform_hlds__loop_inv__InvArgs0_17, transform_hlds__loop_inv__UniquelyUsedVars_14, &transform_hlds__loop_inv__InvArgs_18);
        }
#line 185 "loop_inv.m"
        {
#line 185 "loop_inv.m"
          transform_hlds__loop_inv__inv_goals_vars_6_p_0(transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36, transform_hlds__loop_inv__UniquelyUsedVars_14, transform_hlds__loop_inv__InvGoals0_15, &transform_hlds__loop_inv__InvGoals1_19, transform_hlds__loop_inv__InvArgs_18, &transform_hlds__loop_inv__InvVars1_20);
        }
#line 204 "loop_inv.m"
        {
#line 204 "loop_inv.m"
          transform_hlds__loop_inv__do_not_hoist_4_p_0(transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36, transform_hlds__loop_inv__InvGoals1_19, &transform_hlds__loop_inv__DontHoistGoals_21, &transform_hlds__loop_inv__DontHoistVars_22);
        }
#line 11739 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeCtorInfo_44_44 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 206 "loop_inv.m"
        {
#line 206 "loop_inv.m"
          mercury__list__delete_elems_3_p_0(transform_hlds__loop_inv__TypeCtorInfo_44_44, transform_hlds__loop_inv__InvGoals1_19, transform_hlds__loop_inv__DontHoistGoals_21, &transform_hlds__loop_inv__InvGoals_23);
        }
#line 207 "loop_inv.m"
        {
#line 207 "loop_inv.m"
          mercury__list__delete_elems_3_p_0(transform_hlds__loop_inv__TypeInfo_43_43, transform_hlds__loop_inv__InvVars1_20, transform_hlds__loop_inv__DontHoistVars_22, &transform_hlds__loop_inv__InvVars_24);
        }
#line 211 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__InvGoals_23)) == (MR_mktag((MR_Integer) 1)));
#line 211 "loop_inv.m"
        if (transform_hlds__loop_inv__succeeded)
#line 211 "loop_inv.m"
          {
#line 211 "loop_inv.m"
            transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__InvGoals_23, (MR_Integer) 0)));
#line 211 "loop_inv.m"
            transform_hlds__loop_inv__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__InvGoals_23, (MR_Integer) 1)));
#line 211 "loop_inv.m"
          }
#line 153 "loop_inv.m"
      }
#line 254 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 227 "loop_inv.m"
      {
#line 227 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__ComputedInvVars_27;
#line 227 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__InitialInstMap_28;
#line 227 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__InitialAuxInstMap_29;
#line 227 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__AuxPredProcId_30;
#line 227 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__Replacement_31;
#line 227 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__AuxPredInfo_32;
#line 227 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__AuxProcInfo_33;
#line 227 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_39_39;
#line 227 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_40_40;

#line 227 "loop_inv.m"
        {
#line 227 "loop_inv.m"
          mercury__list__delete_elems_3_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__InvVars_24, transform_hlds__loop_inv__InvArgs_18, &transform_hlds__loop_inv__ComputedInvVars_27);
        }
#line 231 "loop_inv.m"
        {
#line 231 "loop_inv.m"
          hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_0_34, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36, &transform_hlds__loop_inv__InitialInstMap_28);
        }
#line 233 "loop_inv.m"
        {
#line 233 "loop_inv.m"
          transform_hlds__loop_inv__InitialAuxInstMap_29 = transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0(transform_hlds__loop_inv__InvGoals_23, transform_hlds__loop_inv__InitialInstMap_28);
        }
#line 239 "loop_inv.m"
        {
#line 239 "loop_inv.m"
          transform_hlds__loop_inv__create_aux_pred_10_p_0(transform_hlds__loop_inv__PredProcId_7, transform_hlds__loop_inv__HeadVars_12, transform_hlds__loop_inv__ComputedInvVars_27, transform_hlds__loop_inv__InitialAuxInstMap_29, &transform_hlds__loop_inv__AuxPredProcId_30, &transform_hlds__loop_inv__Replacement_31, &transform_hlds__loop_inv__AuxPredInfo_32, &transform_hlds__loop_inv__AuxProcInfo_33, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36, &transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_39_39);
        }
#line 247 "loop_inv.m"
        {
#line 247 "loop_inv.m"
          transform_hlds__loop_inv__gen_aux_proc_9_p_0(transform_hlds__loop_inv__InvGoals_23, transform_hlds__loop_inv__PredProcId_7, transform_hlds__loop_inv__AuxPredProcId_30, transform_hlds__loop_inv__Replacement_31, transform_hlds__loop_inv__Body_11, transform_hlds__loop_inv__AuxPredInfo_32, transform_hlds__loop_inv__AuxProcInfo_33, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_39_39, &transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_40_40);
        }
#line 252 "loop_inv.m"
        {
#line 252 "loop_inv.m"
          transform_hlds__loop_inv__gen_out_proc_8_p_0(transform_hlds__loop_inv__PredProcId_7, transform_hlds__loop_inv__PredInfo_8, transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_0_34, transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_35, transform_hlds__loop_inv__Replacement_31, transform_hlds__loop_inv__Body_11, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_40_40, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_37);
#line 252 "loop_inv.m"
          return;
        }
#line 227 "loop_inv.m"
      }
#line 254 "loop_inv.m"
    else
#line 255 "loop_inv.m"
      {
#line 255 "loop_inv.m"
        *transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_37 = transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36;
#line 255 "loop_inv.m"
        *transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_35 = transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_0_34;
#line 255 "loop_inv.m"
      }
#line 254 "loop_inv.m"
  }
#line 114 "loop_inv.m"
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
	MR_register_type_ctor_info(&transform_hlds__loop_inv__transform_hlds__loop_inv__type_ctor_info_inst_info_0);
	MR_register_type_ctor_info(&transform_hlds__loop_inv__transform_hlds__loop_inv__type_ctor_info_rec_call_0);
}

void mercury__transform_hlds__loop_inv__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.loop_inv. */
