/*
** Automatically generated from `loop_inv.m'
** by the Mercury compiler,
** version 14.01.2-beta-2015-02-18, configured for x86_64-apple-darwin13.4.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 930 "loop_inv.m"
struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0_s {
#line 930 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__Goal0_5;
#line 933 "loop_inv.m"
  MR_bool transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded;
#line 934 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__V_6_6;
#line 588 "loop_inv.m"
  jmp_buf transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__commit_0;
#line 588 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__InvariantGoal_12;
#line 588 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprX_14;
#line 588 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprY_16;
#line 589 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__conv0_InvariantGoal_12;
#line 930 "loop_inv.m"
};

#line 614 "loop_inv.m"
struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s {
#line 614 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7;
#line 628 "loop_inv.m"
  MR_bool transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded;
#line 676 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Modes_73;
#line 685 "loop_inv.m"
  jmp_buf transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__commit_0;
#line 685 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__InitialInst_83;
#line 685 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__FinalInst_84;
#line 685 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Mode_85;
#line 685 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__conv0_Mode_85;
#line 614 "loop_inv.m"
};

#line 559 "loop_inv.m"
struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s {
#line 559 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUVs_9;
#line 559 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10;
#line 559 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IGs0_11;
#line 559 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IVs0_13;
#line 570 "loop_inv.m"
  MR_bool transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded;
#line 564 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Inputs_49;
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
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeCtorInfo_9_45;
#line 579 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__NonLocals_42;
#line 579 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUV_43;
#line 581 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv1_UUV_43;
#line 599 "loop_inv.m"
  jmp_buf transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_2;
#line 599 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeInfo_9_51;
#line 599 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__V_50;
#line 600 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv2_V_50;
#line 559 "loop_inv.m"
};

#line 458 "loop_inv.m"
struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s {
#line 458 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goalss_3;
#line 458 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goal_4;
#line 461 "loop_inv.m"
  MR_bool transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded;
#line 461 "loop_inv.m"
  jmp_buf transform_hlds__loop_inv__common_goal_2_p_0_env_0__commit_0;
#line 461 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__common_goal_2_p_0_env_0__Gs_5;
#line 462 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__common_goal_2_p_0_env_0__conv0_Gs_5;
#line 465 "loop_inv.m"
  jmp_buf transform_hlds__loop_inv__common_goal_2_p_0_env_0__commit_1;
#line 465 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__common_goal_2_p_0_env_0__G_6;
#line 465 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9;
#line 465 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11;
#line 465 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__common_goal_2_p_0_env_0__conv1_G_6;
#line 458 "loop_inv.m"
};


#line 252 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 255 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 258 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 261 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 264 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 267 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 270 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 273 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 276 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 279 "transform_hlds.loop_inv.c"
static const MR_PseudoTypeInfo transform_hlds__loop_inv__transform_hlds__loop_inv__field_types_gen_aux_proc_info_0_0[4];

#line 282 "transform_hlds.loop_inv.c"
static const MR_ConstString transform_hlds__loop_inv__transform_hlds__loop_inv__field_names_gen_aux_proc_info_0_0[4];

#line 285 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDesc transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_gen_aux_proc_info_0_0;

#line 288 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_gen_aux_proc_info_0_0[1];

#line 291 "transform_hlds.loop_inv.c"
static const MR_DuPtagLayout transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_gen_aux_proc_info_0[1];

#line 294 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_name_ordered_gen_aux_proc_info_0[1];

#line 297 "transform_hlds.loop_inv.c"
static const MR_Integer transform_hlds__loop_inv__transform_hlds__loop_inv__functor_number_map_gen_aux_proc_info_0[1];

#line 300 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 303 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__loop_inv__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 306 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 309 "transform_hlds.loop_inv.c"
static const MR_PseudoTypeInfo transform_hlds__loop_inv__transform_hlds__loop_inv__field_types_igc_info_0_0[3];

#line 312 "transform_hlds.loop_inv.c"
static const MR_ConstString transform_hlds__loop_inv__transform_hlds__loop_inv__field_names_igc_info_0_0[3];

#line 315 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDesc transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_igc_info_0_0;

#line 318 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_igc_info_0_0[1];

#line 321 "transform_hlds.loop_inv.c"
static const MR_DuPtagLayout transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_igc_info_0[1];

#line 324 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_name_ordered_igc_info_0[1];

#line 327 "transform_hlds.loop_inv.c"
static const MR_Integer transform_hlds__loop_inv__transform_hlds__loop_inv__functor_number_map_igc_info_0[1];

#line 330 "transform_hlds.loop_inv.c"
static const MR_VA_TypeInfo_Struct2 transform_hlds__loop_inv____vti_tuple_2hlds__hlds_module__type_ctor_info_module_info_0hlds__instmap__type_ctor_info_instmap_0;

#line 333 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0_10001(
#line 336 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 338 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

#line 341 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0_10001(
#line 344 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 346 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 348 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3);

#line 351 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____igc_info_0_0_10001(
#line 354 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 356 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

#line 359 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____igc_info_0_0_10001(
#line 362 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 364 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 366 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3);

#line 369 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____inst_info_0_0_10001(
#line 372 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 374 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

#line 377 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____inst_info_0_0_10001(
#line 380 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 382 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 384 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3);

#line 387 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____rec_call_0_0_10001(
#line 390 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 392 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

#line 395 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____rec_call_0_0_10001(
#line 398 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 400 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 402 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3);

#line 1066 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_2_f_0(
#line 1066 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 1066 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2);

#line 1327 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__rhs_modes__1327__1_1_f_0(
#line 1327 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_9);

#line 1154 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__case_goals__1154__1_1_f_0(
#line 1154 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_8);

#line 742 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__compute_initial_aux_instmap__742__1_2_f_0(
#line 742 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_12,
#line 742 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_13);

#line 496 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__inv_args__496__1_1_f_0(
#line 496 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_17,
#line 496 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__2_18);

#line 257 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv____Compare____rec_call_0_0(
#line 257 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
#line 257 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 257 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__3_3);

#line 257 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____rec_call_0_0(
#line 257 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 257 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2);

#line 696 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv____Compare____inst_info_0_0(
#line 696 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
#line 696 "loop_inv.m"
  MR_Tuple transform_hlds__loop_inv__HeadVar__2_2,
#line 696 "loop_inv.m"
  MR_Tuple transform_hlds__loop_inv__HeadVar__3_3);

#line 696 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____inst_info_0_0(
#line 696 "loop_inv.m"
  MR_Tuple transform_hlds__loop_inv__HeadVar__1_1,
#line 696 "loop_inv.m"
  MR_Tuple transform_hlds__loop_inv__HeadVar__2_2);

#line 264 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv____Compare____igc_info_0_0(
#line 264 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
#line 264 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 264 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__3_3);

#line 264 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____igc_info_0_0(
#line 264 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 264 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2);

#line 831 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0(
#line 831 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
#line 831 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 831 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__3_3);

#line 831 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0(
#line 831 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 831 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2);

#line 1327 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__rhs_modes_1_f_0_1(
#line 1327 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1327 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1324 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__rhs_modes_1_f_0(
#line 1324 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UniModes_3);

#line 1317 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__output_arg_3_f_0(
#line 1317 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 1317 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__X_6,
#line 1317 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__M_7,
#line 1317 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__X_4);

#line 1270 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_5(
#line 1270 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1270 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1270 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1270 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1275 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_4(
#line 1275 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1275 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1274 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_3(
#line 1274 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1274 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1274 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1274 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1286 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_2(
#line 1286 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1286 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1286 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1286 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1266 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_1(
#line 1266 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1266 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1266 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1266 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1260 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0(
#line 1260 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
#line 1260 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5);

#line 1249 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__input_arg_3_f_0(
#line 1249 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 1249 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__X_6,
#line 1249 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__M_7,
#line 1249 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__X_4);

#line 1189 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_6(
#line 1189 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1189 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1189 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1189 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1195 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_5(
#line 1195 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1195 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

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

#line 1207 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_3(
#line 1207 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1207 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1207 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1207 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1202 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_2(
#line 1202 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1202 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1202 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1202 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1184 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_1(
#line 1184 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1184 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1184 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1184 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1178 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0(
#line 1178 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
#line 1178 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5);

#line 1167 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__argmodes_3_f_0(
#line 1167 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 1167 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredId_6,
#line 1167 "loop_inv.m"
  MR_Integer transform_hlds__loop_inv__ProcId_7);

#line 1158 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__uniquely_used_args_3_f_0(
#line 1158 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 1158 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__X_6,
#line 1158 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__M_7,
#line 1158 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__X_4);

#line 1154 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__case_goals_1_f_0_1(
#line 1154 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1154 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1151 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__case_goals_1_f_0(
#line 1151 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Cases_3);

#line 1132 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_8(
#line 1132 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1132 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1101 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_7(
#line 1101 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1101 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1101 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1101 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1129 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_6(
#line 1129 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1129 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1126 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_5(
#line 1126 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1126 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1118 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_4(
#line 1118 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1118 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1116 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_3(
#line 1116 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1116 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1114 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_2(
#line 1114 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1114 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1114 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1114 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1096 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_1(
#line 1096 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1096 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1096 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1096 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1090 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0(
#line 1090 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
#line 1090 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5);

#line 1044 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_aux_call_2_f_0(
#line 1044 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 1044 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2);

#line 1035 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_out_proc_case_3_f_0(
#line 1035 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_5,
#line 1035 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__CallAux_6,
#line 1035 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Case_7);

#line 1008 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_3_f_0_3(
#line 1008 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1008 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1003 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_3_f_0_2(
#line 1003 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1003 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 998 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_3_f_0_1(
#line 998 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 998 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 979 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_3_f_0(
#line 979 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_5,
#line 979 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__CallAux_6,
#line 979 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_7);

#line 945 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_8_p_0(
#line 945 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredProcId_9,
#line 945 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredInfo0_10,
#line 945 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ProcInfo0_11,
#line 945 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__ProcInfo_12,
#line 945 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__CallAux_13,
#line 945 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Body0_14,
#line 945 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo0_15,
#line 945 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__ModuleInfo_16);

#line 588 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_1(
#line 588 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 589 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_3(
#line 589 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 588 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_2(
#line 588 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 588 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_4(
#line 588 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 930 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0(
#line 930 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Info_4,
#line 930 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal0_5);

#line 921 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_case_2_f_0(
#line 921 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Info_4,
#line 921 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Case_5);

#line 894 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0_3(
#line 894 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 894 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 889 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0_2(
#line 889 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 889 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 884 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0_1(
#line 884 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 884 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 865 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0(
#line 865 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Info_4,
#line 865 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5);

#line 842 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_9_p_0(
#line 842 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InvGoals_10,
#line 842 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredProcId_11,
#line 842 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__AuxPredProcId_12,
#line 842 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__CallAux_13,
#line 842 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Body_14,
#line 842 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__AuxPredInfo_15,
#line 842 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_0_22,
#line 842 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_23,
#line 842 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_24);

#line 750 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__create_aux_pred_10_p_0(
#line 750 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredProcId_11,
#line 750 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVars_12,
#line 750 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ComputedInvArgs_13,
#line 750 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InitialAuxInstMap_14,
#line 750 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxPredProcId_15,
#line 750 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__CallAux_16,
#line 750 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxPredInfo_17,
#line 750 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxProcInfo_18,
#line 750 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo0_19,
#line 750 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__ModuleInfo_20);

#line 742 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0_1(
#line 742 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 742 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 742 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

#line 739 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0(
#line 739 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Gs_4,
#line 739 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__IM_5);

#line 724 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__add_output_4_p_0(
#line 724 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UniquelyUsedVars_5,
#line 724 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__X_6,
#line 724 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_8,
#line 724 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_InvVars_9);

#line 722 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__add_outputs_5_p_0_1(
#line 722 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 722 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 722 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 722 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 718 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__add_outputs_5_p_0(
#line 718 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_6,
#line 718 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UUVs_7,
#line 718 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_8,
#line 718 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_10,
#line 718 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_InvVars_11);

#line 685 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_1(
#line 685 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 685 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_3(
#line 685 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 685 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_2(
#line 685 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 685 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_4(
#line 685 "loop_inv.m"
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

#line 722 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_13(
#line 722 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 722 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 722 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 722 "loop_inv.m"
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

#line 559 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0(
#line 559 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_8,
#line 559 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UUVs_9,
#line 559 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_10,
#line 559 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__IGs0_11,
#line 559 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__IGs_12,
#line 559 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__IVs0_13,
#line 559 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__IVs_14);

#line 550 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_6_p_0_1(
#line 550 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 550 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 550 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 550 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3,
#line 550 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_4,
#line 550 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_5);

#line 545 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_6_p_0(
#line 545 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_7,
#line 545 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UniquelyUsedVars_8,
#line 545 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InvGoals0_9,
#line 545 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__InvGoals_10,
#line 545 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InvVars0_11,
#line 545 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__InvVars_12);

#line 522 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_2_f_0(
#line 522 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 522 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Y_2);

#line 516 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0_1(
#line 516 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 516 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 516 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

#line 511 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0(
#line 511 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 511 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__MaybeInvArgs_6);

#line 503 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_f_0(
#line 503 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 503 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Arg_6,
#line 503 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Mode_7);

#line 461 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_1(
#line 461 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 462 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_3(
#line 462 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 465 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_4(
#line 465 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 465 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_6(
#line 465 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 465 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_5(
#line 465 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 465 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_7(
#line 465 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 461 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_2(
#line 461 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 461 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_8(
#line 461 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 458 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0(
#line 458 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goalss_3,
#line 458 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_4);

#line 440 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__all_instmap_deltas_are_ground_2_p_0(
#line 440 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_1,
#line 440 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2);

#line 413 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_handle_primitive_goal_3_p_0(
#line 413 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_4,
#line 413 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13,
#line 413 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_14);

#line 400 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__add_recursive_call_3_p_0(
#line 400 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_4,
#line 400 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7,
#line 400 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_8);

#line 389 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_switch_4_p_0(
#line 389 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_1,
#line 389 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 389 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
#line 389 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4);

#line 381 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_disj_4_p_0(
#line 381 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_1,
#line 381 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 381 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
#line 381 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4);

#line 373 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_parallel_conj_4_p_0(
#line 373 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_1,
#line 373 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 373 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
#line 373 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4);

#line 365 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_plain_conj_4_p_0(
#line 365 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_1,
#line 365 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 365 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
#line 365 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4);

#line 355 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_4_p_0(
#line 355 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_5,
#line 355 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_6,
#line 355 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_9,
#line 355 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_10);

#line 299 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(
#line 299 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_5,
#line 299 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_6,
#line 299 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47,
#line 299 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);

#line 496 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_4(
#line 496 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 496 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 496 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2);

#line 494 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_3(
#line 494 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 494 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 494 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

#line 491 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_2(
#line 491 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 491 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 491 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

#line 454 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_1(
#line 454 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 454 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);


static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_2[11][3];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_3[1][4];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_4[5][5];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_5[5][7];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_6[6][6];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_7[1][10];

static /* final */ const MR_Box transform_hlds__loop_inv_scalar_common_8[1][9];




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
    ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_4)),
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
    ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_4)),
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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1827 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1835 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1843 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1851 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1859 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1867 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1875 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__loop_inv__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1883 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1891 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1899 "transform_hlds.loop_inv.c"
static const MR_PseudoTypeInfo transform_hlds__loop_inv__transform_hlds__loop_inv__field_types_gen_aux_proc_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1907 "transform_hlds.loop_inv.c"
static const MR_ConstString transform_hlds__loop_inv__transform_hlds__loop_inv__field_names_gen_aux_proc_info_0_0[4] = {
  (MR_String) "gapi_module_info",
  (MR_String) "gapi_inv_goals",
  (MR_String) "gapi_pred_proc_id",
  (MR_String) "gapi_call_aux_goal"
};

#line 1915 "transform_hlds.loop_inv.c"
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

#line 1930 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_gen_aux_proc_info_0_0[1] = {
  &transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_gen_aux_proc_info_0_0
};

#line 1935 "transform_hlds.loop_inv.c"
static const MR_DuPtagLayout transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_gen_aux_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_gen_aux_proc_info_0_0
  }
};

#line 1944 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_name_ordered_gen_aux_proc_info_0[1] = {
  &transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_gen_aux_proc_info_0_0
};

#line 1949 "transform_hlds.loop_inv.c"
static const MR_Integer transform_hlds__loop_inv__transform_hlds__loop_inv__functor_number_map_gen_aux_proc_info_0[1] = {
  (MR_Integer) 0
};

#line 1954 "transform_hlds.loop_inv.c"
const MR_TypeCtorInfo_Struct transform_hlds__loop_inv__transform_hlds__loop_inv__type_ctor_info_gen_aux_proc_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0_10001)),
  ((MR_Box) (transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0_10001)),
  (MR_String) "transform_hlds.loop_inv",
  (MR_String) "gen_aux_proc_info",
  {
    transform_hlds__loop_inv__transform_hlds__loop_inv__du_name_ordered_gen_aux_proc_info_0
  },
  {
    transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_gen_aux_proc_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__loop_inv__transform_hlds__loop_inv__functor_number_map_gen_aux_proc_info_0
};

#line 1975 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1983 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__loop_inv__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_TypeInfo) &transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1992 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__loop_inv__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 2000 "transform_hlds.loop_inv.c"
static const MR_PseudoTypeInfo transform_hlds__loop_inv__transform_hlds__loop_inv__field_types_igc_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__loop_inv__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__loop_inv__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 2007 "transform_hlds.loop_inv.c"
static const MR_ConstString transform_hlds__loop_inv__transform_hlds__loop_inv__field_names_igc_info_0_0[3] = {
  (MR_String) "igc_module_info",
  (MR_String) "igc_path_candidates",
  (MR_String) "igc_rec_calls"
};

#line 2014 "transform_hlds.loop_inv.c"
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

#line 2029 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_igc_info_0_0[1] = {
  &transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_igc_info_0_0
};

#line 2034 "transform_hlds.loop_inv.c"
static const MR_DuPtagLayout transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_igc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_igc_info_0_0
  }
};

#line 2043 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_name_ordered_igc_info_0[1] = {
  &transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_igc_info_0_0
};

#line 2048 "transform_hlds.loop_inv.c"
static const MR_Integer transform_hlds__loop_inv__transform_hlds__loop_inv__functor_number_map_igc_info_0[1] = {
  (MR_Integer) 0
};

#line 2053 "transform_hlds.loop_inv.c"
const MR_TypeCtorInfo_Struct transform_hlds__loop_inv__transform_hlds__loop_inv__type_ctor_info_igc_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__loop_inv____Unify____igc_info_0_0_10001)),
  ((MR_Box) (transform_hlds__loop_inv____Compare____igc_info_0_0_10001)),
  (MR_String) "transform_hlds.loop_inv",
  (MR_String) "igc_info",
  {
    transform_hlds__loop_inv__transform_hlds__loop_inv__du_name_ordered_igc_info_0
  },
  {
    transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_igc_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__loop_inv__transform_hlds__loop_inv__functor_number_map_igc_info_0
};

#line 2074 "transform_hlds.loop_inv.c"
static const MR_VA_TypeInfo_Struct2 transform_hlds__loop_inv____vti_tuple_2hlds__hlds_module__type_ctor_info_module_info_0hlds__instmap__type_ctor_info_instmap_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0
  }
};

#line 2084 "transform_hlds.loop_inv.c"
const MR_TypeCtorInfo_Struct transform_hlds__loop_inv__transform_hlds__loop_inv__type_ctor_info_inst_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__loop_inv____Unify____inst_info_0_0_10001)),
  ((MR_Box) (transform_hlds__loop_inv____Compare____inst_info_0_0_10001)),
  (MR_String) "transform_hlds.loop_inv",
  (MR_String) "inst_info",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__loop_inv____vti_tuple_2hlds__hlds_module__type_ctor_info_module_info_0hlds__instmap__type_ctor_info_instmap_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2105 "transform_hlds.loop_inv.c"
const MR_TypeCtorInfo_Struct transform_hlds__loop_inv__transform_hlds__loop_inv__type_ctor_info_rec_call_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__loop_inv____Unify____rec_call_0_0_10001)),
  ((MR_Box) (transform_hlds__loop_inv____Compare____rec_call_0_0_10001)),
  (MR_String) "transform_hlds.loop_inv",
  (MR_String) "rec_call",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__loop_inv__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2126 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0_10001(
#line 2129 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 2131 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
#line 2133 "transform_hlds.loop_inv.c"
{
#line 2135 "transform_hlds.loop_inv.c"
  {
#line 2137 "transform_hlds.loop_inv.c"
    MR_bool transform_hlds__loop_inv__succeeded;

#line 2140 "transform_hlds.loop_inv.c"
    {
#line 2142 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
#line 2145 "transform_hlds.loop_inv.c"
    return transform_hlds__loop_inv__succeeded;
#line 2147 "transform_hlds.loop_inv.c"
  }
#line 2149 "transform_hlds.loop_inv.c"
}

#line 2152 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0_10001(
#line 2155 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 2157 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 2159 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3)
#line 2161 "transform_hlds.loop_inv.c"
{
#line 2163 "transform_hlds.loop_inv.c"
  {
#line 2165 "transform_hlds.loop_inv.c"
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__1_1;

#line 2168 "transform_hlds.loop_inv.c"
    {
#line 2170 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0(&transform_hlds__loop_inv__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_3));
    }
#line 2173 "transform_hlds.loop_inv.c"
    *transform_hlds__loop_inv__wrapper_arg_1 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__1_1));
#line 2175 "transform_hlds.loop_inv.c"
  }
#line 2177 "transform_hlds.loop_inv.c"
}

#line 2180 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____igc_info_0_0_10001(
#line 2183 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 2185 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
#line 2187 "transform_hlds.loop_inv.c"
{
#line 2189 "transform_hlds.loop_inv.c"
  {
#line 2191 "transform_hlds.loop_inv.c"
    MR_bool transform_hlds__loop_inv__succeeded;

#line 2194 "transform_hlds.loop_inv.c"
    {
#line 2196 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv____Unify____igc_info_0_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
#line 2199 "transform_hlds.loop_inv.c"
    return transform_hlds__loop_inv__succeeded;
#line 2201 "transform_hlds.loop_inv.c"
  }
#line 2203 "transform_hlds.loop_inv.c"
}

#line 2206 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____igc_info_0_0_10001(
#line 2209 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 2211 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 2213 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3)
#line 2215 "transform_hlds.loop_inv.c"
{
#line 2217 "transform_hlds.loop_inv.c"
  {
#line 2219 "transform_hlds.loop_inv.c"
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__1_1;

#line 2222 "transform_hlds.loop_inv.c"
    {
#line 2224 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv____Compare____igc_info_0_0(&transform_hlds__loop_inv__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_3));
    }
#line 2227 "transform_hlds.loop_inv.c"
    *transform_hlds__loop_inv__wrapper_arg_1 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__1_1));
#line 2229 "transform_hlds.loop_inv.c"
  }
#line 2231 "transform_hlds.loop_inv.c"
}

#line 2234 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____inst_info_0_0_10001(
#line 2237 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 2239 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
#line 2241 "transform_hlds.loop_inv.c"
{
#line 2243 "transform_hlds.loop_inv.c"
  {
#line 2245 "transform_hlds.loop_inv.c"
    MR_bool transform_hlds__loop_inv__succeeded;

#line 2248 "transform_hlds.loop_inv.c"
    {
#line 2250 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv____Unify____inst_info_0_0(((MR_Tuple) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Tuple) transform_hlds__loop_inv__wrapper_arg_2));
    }
#line 2253 "transform_hlds.loop_inv.c"
    return transform_hlds__loop_inv__succeeded;
#line 2255 "transform_hlds.loop_inv.c"
  }
#line 2257 "transform_hlds.loop_inv.c"
}

#line 2260 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____inst_info_0_0_10001(
#line 2263 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 2265 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 2267 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3)
#line 2269 "transform_hlds.loop_inv.c"
{
#line 2271 "transform_hlds.loop_inv.c"
  {
#line 2273 "transform_hlds.loop_inv.c"
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__1_1;

#line 2276 "transform_hlds.loop_inv.c"
    {
#line 2278 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv____Compare____inst_info_0_0(&transform_hlds__loop_inv__conv0_HeadVar__1_1, ((MR_Tuple) transform_hlds__loop_inv__wrapper_arg_2), ((MR_Tuple) transform_hlds__loop_inv__wrapper_arg_3));
    }
#line 2281 "transform_hlds.loop_inv.c"
    *transform_hlds__loop_inv__wrapper_arg_1 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__1_1));
#line 2283 "transform_hlds.loop_inv.c"
  }
#line 2285 "transform_hlds.loop_inv.c"
}

#line 2288 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____rec_call_0_0_10001(
#line 2291 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 2293 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
#line 2295 "transform_hlds.loop_inv.c"
{
#line 2297 "transform_hlds.loop_inv.c"
  {
#line 2299 "transform_hlds.loop_inv.c"
    MR_bool transform_hlds__loop_inv__succeeded;

#line 2302 "transform_hlds.loop_inv.c"
    {
#line 2304 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv____Unify____rec_call_0_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
#line 2307 "transform_hlds.loop_inv.c"
    return transform_hlds__loop_inv__succeeded;
#line 2309 "transform_hlds.loop_inv.c"
  }
#line 2311 "transform_hlds.loop_inv.c"
}

#line 2314 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____rec_call_0_0_10001(
#line 2317 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 2319 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 2321 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3)
#line 2323 "transform_hlds.loop_inv.c"
{
#line 2325 "transform_hlds.loop_inv.c"
  {
#line 2327 "transform_hlds.loop_inv.c"
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__1_1;

#line 2330 "transform_hlds.loop_inv.c"
    {
#line 2332 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv____Compare____rec_call_0_0(&transform_hlds__loop_inv__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_3));
    }
#line 2335 "transform_hlds.loop_inv.c"
    *transform_hlds__loop_inv__wrapper_arg_1 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__1_1));
#line 2337 "transform_hlds.loop_inv.c"
  }
#line 2339 "transform_hlds.loop_inv.c"
}

#line 1066 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_2_f_0(
#line 1066 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 1066 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2)
#line 1066 "loop_inv.m"
{
#line 1068 "loop_inv.m"
  {
#line 1068 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1068 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__3_3;

#line 1068 "loop_inv.m"
    if ((transform_hlds__loop_inv__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1068 "loop_inv.m"
      transform_hlds__loop_inv__HeadVar__3_3 = transform_hlds__loop_inv__HeadVar__2_2;
#line 1068 "loop_inv.m"
    else
#line 1068 "loop_inv.m"
      {
#line 1068 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 1)));
#line 1068 "loop_inv.m"
        MR_Box transform_hlds__loop_inv__V_18_18 = (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 0));

#line 1068 "loop_inv.m"
        if ((transform_hlds__loop_inv__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1070 "loop_inv.m"
          {
#line 1071 "loop_inv.m"
            {
#line 1071 "loop_inv.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.replace_initial_args\'/2", (MR_String) "first arg longer than second");
            }
#line 1070 "loop_inv.m"
          }
#line 1068 "loop_inv.m"
        else
#line 1069 "loop_inv.m"
          {
#line 1069 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Ys_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 1069 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_9_9;
#line 1069 "loop_inv.m"
            MR_Box transform_hlds__loop_inv__V_7_7 = (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0));

#line 1069 "loop_inv.m"
            {
#line 1069 "loop_inv.m"
              transform_hlds__loop_inv__V_9_9 = transform_hlds__loop_inv__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_2_f_0(transform_hlds__loop_inv__V_17_17, transform_hlds__loop_inv__Ys_8);
            }
#line 1069 "loop_inv.m"
            {
#line 1069 "loop_inv.m"
              transform_hlds__loop_inv__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "loop_inv.m"
              MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__3_3, 0) = transform_hlds__loop_inv__V_18_18;
#line 1069 "loop_inv.m"
              MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__loop_inv__V_9_9));
#line 1069 "loop_inv.m"
            }
#line 1069 "loop_inv.m"
          }
#line 1068 "loop_inv.m"
      }
#line 1068 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__3_3;
#line 1068 "loop_inv.m"
  }
#line 1066 "loop_inv.m"
}

#line 1327 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__rhs_modes__1327__1_1_f_0(
#line 1327 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_9)
#line 1327 "loop_inv.m"
{
#line 1327 "loop_inv.m"
  {
#line 1327 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1327 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__2_10;
#line 1327 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_9, (MR_Integer) 0)));
#line 1327 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_9, (MR_Integer) 1)));
#line 1327 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Pre_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_11_11, (MR_Integer) 1)));
#line 1327 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Post_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_12_12, (MR_Integer) 1)));
#line 1327 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_11_11, (MR_Integer) 0)));
#line 1327 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_12_12, (MR_Integer) 0)));

#line 1327 "loop_inv.m"
    {
#line 1327 "loop_inv.m"
      transform_hlds__loop_inv__HeadVar__2_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1327 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_10, 0) = ((MR_Box) (transform_hlds__loop_inv__Pre_16));
#line 1327 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_10, 1) = ((MR_Box) (transform_hlds__loop_inv__Post_18));
#line 1327 "loop_inv.m"
    }
#line 1327 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__2_10;
#line 1327 "loop_inv.m"
  }
#line 1327 "loop_inv.m"
}

#line 1154 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__case_goals__1154__1_1_f_0(
#line 1154 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_8)
#line 1154 "loop_inv.m"
{
#line 1154 "loop_inv.m"
  {
#line 1154 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1154 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__2_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_8, (MR_Integer) 2)));
#line 1154 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___MainConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_8, (MR_Integer) 0)));
#line 1154 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___OtherConsIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_8, (MR_Integer) 1)));

#line 1154 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__2_9;
#line 1154 "loop_inv.m"
  }
#line 1154 "loop_inv.m"
}

#line 742 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__compute_initial_aux_instmap__742__1_2_f_0(
#line 742 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_12,
#line 742 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_13)
#line 742 "loop_inv.m"
{
#line 742 "loop_inv.m"
  {
#line 742 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 742 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__3_14;
#line 742 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__IMD_11;
#line 742 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_12, (MR_Integer) 1)));
#line 742 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___GoalExpr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_12, (MR_Integer) 0)));

#line 744 "loop_inv.m"
    {
#line 744 "loop_inv.m"
      transform_hlds__loop_inv__IMD_11 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__loop_inv__GoalInfo_17);
    }
#line 745 "loop_inv.m"
    {
#line 745 "loop_inv.m"
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__loop_inv__HeadVar__2_13, transform_hlds__loop_inv__IMD_11, &transform_hlds__loop_inv__HeadVar__3_14);
    }
#line 742 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__3_14;
#line 742 "loop_inv.m"
  }
#line 742 "loop_inv.m"
}

#line 496 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__inv_args__496__1_1_f_0(
#line 496 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_17,
#line 496 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__2_18)
#line 496 "loop_inv.m"
{
#line 496 "loop_inv.m"
  {
#line 496 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__HeadVar__1_17)) == (MR_mktag((MR_Integer) 1)));

#line 496 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 496 "loop_inv.m"
      *transform_hlds__loop_inv__HeadVar__2_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__1_17, (MR_Integer) 0)));
#line 496 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 496 "loop_inv.m"
  }
#line 496 "loop_inv.m"
}

#line 257 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv____Compare____rec_call_0_0(
#line 257 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
#line 257 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 257 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__3_3)
#line 257 "loop_inv.m"
{
#line 257 "loop_inv.m"
  {
#line 257 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 257 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Cast_HeadVar1_4 = transform_hlds__loop_inv__HeadVar__2_2;
#line 257 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Cast_HeadVar2_5 = transform_hlds__loop_inv__HeadVar__3_3;

#line 257 "loop_inv.m"
    {
#line 257 "loop_inv.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_2[0], transform_hlds__loop_inv__HeadVar__1_1, ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar2_5)));
#line 257 "loop_inv.m"
      return;
    }
#line 257 "loop_inv.m"
  }
#line 257 "loop_inv.m"
}

#line 257 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____rec_call_0_0(
#line 257 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 257 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2)
#line 257 "loop_inv.m"
{
#line 257 "loop_inv.m"
  {
#line 257 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 257 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Cast_HeadVar1_3 = transform_hlds__loop_inv__HeadVar__1_1;
#line 257 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Cast_HeadVar2_4 = transform_hlds__loop_inv__HeadVar__2_2;

#line 257 "loop_inv.m"
    {
#line 257 "loop_inv.m"
      return transform_hlds__loop_inv__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_2[0], ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar2_4)));
    }
#line 257 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 257 "loop_inv.m"
  }
#line 257 "loop_inv.m"
}

#line 696 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv____Compare____inst_info_0_0(
#line 696 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
#line 696 "loop_inv.m"
  MR_Tuple transform_hlds__loop_inv__HeadVar__2_2,
#line 696 "loop_inv.m"
  MR_Tuple transform_hlds__loop_inv__HeadVar__3_3)
#line 696 "loop_inv.m"
{
#line 696 "loop_inv.m"
  {
#line 696 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 696 "loop_inv.m"
    MR_Tuple transform_hlds__loop_inv__Cast_HeadVar1_4 = transform_hlds__loop_inv__HeadVar__2_2;
#line 696 "loop_inv.m"
    MR_Tuple transform_hlds__loop_inv__Cast_HeadVar2_5 = transform_hlds__loop_inv__HeadVar__3_3;

#line 696 "loop_inv.m"
    {
#line 696 "loop_inv.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_3[0], transform_hlds__loop_inv__HeadVar__1_1, ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar2_5)));
#line 696 "loop_inv.m"
      return;
    }
#line 696 "loop_inv.m"
  }
#line 696 "loop_inv.m"
}

#line 696 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____inst_info_0_0(
#line 696 "loop_inv.m"
  MR_Tuple transform_hlds__loop_inv__HeadVar__1_1,
#line 696 "loop_inv.m"
  MR_Tuple transform_hlds__loop_inv__HeadVar__2_2)
#line 696 "loop_inv.m"
{
#line 696 "loop_inv.m"
  {
#line 696 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 696 "loop_inv.m"
    MR_Tuple transform_hlds__loop_inv__Cast_HeadVar1_3 = transform_hlds__loop_inv__HeadVar__1_1;
#line 696 "loop_inv.m"
    MR_Tuple transform_hlds__loop_inv__Cast_HeadVar2_4 = transform_hlds__loop_inv__HeadVar__2_2;

#line 696 "loop_inv.m"
    {
#line 696 "loop_inv.m"
      return transform_hlds__loop_inv__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_3[0], ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar2_4)));
    }
#line 696 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 696 "loop_inv.m"
  }
#line 696 "loop_inv.m"
}

#line 264 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv____Compare____igc_info_0_0(
#line 264 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
#line 264 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 264 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__3_3)
#line 264 "loop_inv.m"
{
#line 264 "loop_inv.m"
  {
#line 264 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 264 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__CastX_12 = (MR_Integer) transform_hlds__loop_inv__HeadVar__2_2;
#line 264 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__CastY_13 = (MR_Integer) transform_hlds__loop_inv__HeadVar__3_3;

#line 264 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__CastX_12 == transform_hlds__loop_inv__CastY_13);
#line 264 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 2699 "transform_hlds.loop_inv.c"
      *transform_hlds__loop_inv__HeadVar__1_1 = (MR_Integer) 0;
#line 264 "loop_inv.m"
    else
#line 264 "loop_inv.m"
      {
#line 264 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
#line 264 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 264 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 2)));
#line 264 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 0)));
#line 264 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 1)));
#line 264 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 2)));
#line 264 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_10_10;

#line 264 "loop_inv.m"
        {
#line 264 "loop_inv.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__loop_inv__V_10_10, transform_hlds__loop_inv__V_4_4, transform_hlds__loop_inv__V_7_7);
        }
#line 2725 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_10_10 == (MR_Integer) 0);
#line 264 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 264 "loop_inv.m"
        if (transform_hlds__loop_inv__succeeded)
#line 264 "loop_inv.m"
          *transform_hlds__loop_inv__HeadVar__1_1 = transform_hlds__loop_inv__V_10_10;
#line 264 "loop_inv.m"
        else
#line 264 "loop_inv.m"
          {
#line 264 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_11_11;

#line 264 "loop_inv.m"
            {
#line 264 "loop_inv.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[5], &transform_hlds__loop_inv__V_11_11, ((MR_Box) (transform_hlds__loop_inv__V_5_5)), ((MR_Box) (transform_hlds__loop_inv__V_8_8)));
            }
#line 2745 "transform_hlds.loop_inv.c"
            transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_11_11 == (MR_Integer) 0);
#line 264 "loop_inv.m"
            transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 264 "loop_inv.m"
            if (transform_hlds__loop_inv__succeeded)
#line 264 "loop_inv.m"
              *transform_hlds__loop_inv__HeadVar__1_1 = transform_hlds__loop_inv__V_11_11;
#line 264 "loop_inv.m"
            else
#line 264 "loop_inv.m"
              {
#line 264 "loop_inv.m"
                {
#line 264 "loop_inv.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[6], transform_hlds__loop_inv__HeadVar__1_1, ((MR_Box) (transform_hlds__loop_inv__V_6_6)), ((MR_Box) (transform_hlds__loop_inv__V_9_9)));
#line 264 "loop_inv.m"
                  return;
                }
#line 264 "loop_inv.m"
              }
#line 264 "loop_inv.m"
          }
#line 264 "loop_inv.m"
      }
#line 264 "loop_inv.m"
  }
#line 264 "loop_inv.m"
}

#line 264 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____igc_info_0_0(
#line 264 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 264 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2)
#line 264 "loop_inv.m"
{
#line 264 "loop_inv.m"
  {
#line 264 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 264 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__CastX_9 = (MR_Integer) transform_hlds__loop_inv__HeadVar__1_1;
#line 264 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__CastY_10 = (MR_Integer) transform_hlds__loop_inv__HeadVar__2_2;

#line 264 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__CastX_9 == transform_hlds__loop_inv__CastY_10);
#line 264 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 264 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 264 "loop_inv.m"
    else
#line 264 "loop_inv.m"
      {
#line 264 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__TypeInfo_12_12;
#line 264 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__TypeInfo_13_13;
#line 264 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 0)));
#line 264 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 1)));
#line 264 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 2)));
#line 264 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
#line 264 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 264 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 2)));

#line 2820 "transform_hlds.loop_inv.c"
        {
#line 2822 "transform_hlds.loop_inv.c"
          transform_hlds__loop_inv__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__loop_inv__V_3_3, transform_hlds__loop_inv__V_6_6);
        }
#line 264 "loop_inv.m"
        if (transform_hlds__loop_inv__succeeded)
#line 264 "loop_inv.m"
          {
#line 2829 "transform_hlds.loop_inv.c"
            transform_hlds__loop_inv__TypeInfo_12_12 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[5];
#line 2831 "transform_hlds.loop_inv.c"
            {
#line 2833 "transform_hlds.loop_inv.c"
              transform_hlds__loop_inv__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__loop_inv__TypeInfo_12_12, ((MR_Box) (transform_hlds__loop_inv__V_4_4)), ((MR_Box) (transform_hlds__loop_inv__V_7_7)));
            }
#line 264 "loop_inv.m"
            if (transform_hlds__loop_inv__succeeded)
#line 264 "loop_inv.m"
              {
#line 2840 "transform_hlds.loop_inv.c"
                transform_hlds__loop_inv__TypeInfo_13_13 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[6];
#line 2842 "transform_hlds.loop_inv.c"
                {
#line 2844 "transform_hlds.loop_inv.c"
                  return transform_hlds__loop_inv__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__loop_inv__TypeInfo_13_13, ((MR_Box) (transform_hlds__loop_inv__V_5_5)), ((MR_Box) (transform_hlds__loop_inv__V_8_8)));
                }
#line 264 "loop_inv.m"
              }
#line 264 "loop_inv.m"
          }
#line 264 "loop_inv.m"
      }
#line 264 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 264 "loop_inv.m"
  }
#line 264 "loop_inv.m"
}

#line 831 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0(
#line 831 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
#line 831 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 831 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__3_3)
#line 831 "loop_inv.m"
{
#line 831 "loop_inv.m"
  {
#line 831 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 831 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__CastX_15 = (MR_Integer) transform_hlds__loop_inv__HeadVar__2_2;
#line 831 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__CastY_16 = (MR_Integer) transform_hlds__loop_inv__HeadVar__3_3;

#line 831 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__CastX_15 == transform_hlds__loop_inv__CastY_16);
#line 831 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 2884 "transform_hlds.loop_inv.c"
      *transform_hlds__loop_inv__HeadVar__1_1 = (MR_Integer) 0;
#line 831 "loop_inv.m"
    else
#line 831 "loop_inv.m"
      {
#line 831 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
#line 831 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 831 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 2)));
#line 831 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 3)));
#line 831 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 0)));
#line 831 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 1)));
#line 831 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 2)));
#line 831 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 3)));
#line 831 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_12_12;

#line 831 "loop_inv.m"
        {
#line 831 "loop_inv.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__loop_inv__V_12_12, transform_hlds__loop_inv__V_4_4, transform_hlds__loop_inv__V_8_8);
        }
#line 2914 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_12_12 == (MR_Integer) 0);
#line 831 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 831 "loop_inv.m"
        if (transform_hlds__loop_inv__succeeded)
#line 831 "loop_inv.m"
          *transform_hlds__loop_inv__HeadVar__1_1 = transform_hlds__loop_inv__V_12_12;
#line 831 "loop_inv.m"
        else
#line 831 "loop_inv.m"
          {
#line 831 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_13_13;

#line 831 "loop_inv.m"
            {
#line 831 "loop_inv.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[1], &transform_hlds__loop_inv__V_13_13, ((MR_Box) (transform_hlds__loop_inv__V_5_5)), ((MR_Box) (transform_hlds__loop_inv__V_9_9)));
            }
#line 2934 "transform_hlds.loop_inv.c"
            transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_13_13 == (MR_Integer) 0);
#line 831 "loop_inv.m"
            transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 831 "loop_inv.m"
            if (transform_hlds__loop_inv__succeeded)
#line 831 "loop_inv.m"
              *transform_hlds__loop_inv__HeadVar__1_1 = transform_hlds__loop_inv__V_13_13;
#line 831 "loop_inv.m"
            else
#line 831 "loop_inv.m"
              {
#line 831 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_14_14;

#line 831 "loop_inv.m"
                {
#line 831 "loop_inv.m"
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__loop_inv__V_14_14, transform_hlds__loop_inv__V_6_6, transform_hlds__loop_inv__V_10_10);
                }
#line 2954 "transform_hlds.loop_inv.c"
                transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_14_14 == (MR_Integer) 0);
#line 831 "loop_inv.m"
                transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 831 "loop_inv.m"
                if (transform_hlds__loop_inv__succeeded)
#line 831 "loop_inv.m"
                  *transform_hlds__loop_inv__HeadVar__1_1 = transform_hlds__loop_inv__V_14_14;
#line 831 "loop_inv.m"
                else
#line 831 "loop_inv.m"
                  {
#line 831 "loop_inv.m"
                    hlds__hlds_goal____Compare____hlds_goal_0_0(transform_hlds__loop_inv__HeadVar__1_1, transform_hlds__loop_inv__V_7_7, transform_hlds__loop_inv__V_11_11);
#line 831 "loop_inv.m"
                    return;
                  }
#line 831 "loop_inv.m"
              }
#line 831 "loop_inv.m"
          }
#line 831 "loop_inv.m"
      }
#line 831 "loop_inv.m"
  }
#line 831 "loop_inv.m"
}

#line 831 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0(
#line 831 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 831 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2)
#line 831 "loop_inv.m"
{
#line 831 "loop_inv.m"
  {
#line 831 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 831 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__CastX_11 = (MR_Integer) transform_hlds__loop_inv__HeadVar__1_1;
#line 831 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__CastY_12 = (MR_Integer) transform_hlds__loop_inv__HeadVar__2_2;

#line 831 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__CastX_11 == transform_hlds__loop_inv__CastY_12);
#line 831 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 831 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 831 "loop_inv.m"
    else
#line 831 "loop_inv.m"
      {
#line 831 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__TypeInfo_14_14;
#line 831 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 0)));
#line 831 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 1)));
#line 831 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 2)));
#line 831 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 3)));
#line 831 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
#line 831 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 831 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 2)));
#line 831 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 3)));

#line 3029 "transform_hlds.loop_inv.c"
        {
#line 3031 "transform_hlds.loop_inv.c"
          transform_hlds__loop_inv__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__loop_inv__V_3_3, transform_hlds__loop_inv__V_7_7);
        }
#line 831 "loop_inv.m"
        if (transform_hlds__loop_inv__succeeded)
#line 831 "loop_inv.m"
          {
#line 3038 "transform_hlds.loop_inv.c"
            transform_hlds__loop_inv__TypeInfo_14_14 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[1];
#line 3040 "transform_hlds.loop_inv.c"
            {
#line 3042 "transform_hlds.loop_inv.c"
              transform_hlds__loop_inv__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__loop_inv__TypeInfo_14_14, ((MR_Box) (transform_hlds__loop_inv__V_4_4)), ((MR_Box) (transform_hlds__loop_inv__V_8_8)));
            }
#line 831 "loop_inv.m"
            if (transform_hlds__loop_inv__succeeded)
#line 831 "loop_inv.m"
              {
#line 3049 "transform_hlds.loop_inv.c"
                {
#line 3051 "transform_hlds.loop_inv.c"
                  transform_hlds__loop_inv__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__loop_inv__V_5_5, transform_hlds__loop_inv__V_9_9);
                }
#line 831 "loop_inv.m"
                if (transform_hlds__loop_inv__succeeded)
#line 3056 "transform_hlds.loop_inv.c"
                  {
#line 3058 "transform_hlds.loop_inv.c"
                    return transform_hlds__loop_inv__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__loop_inv__V_6_6, transform_hlds__loop_inv__V_10_10);
                  }
#line 831 "loop_inv.m"
              }
#line 831 "loop_inv.m"
          }
#line 831 "loop_inv.m"
      }
#line 831 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 831 "loop_inv.m"
  }
#line 831 "loop_inv.m"
}

#line 1327 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__rhs_modes_1_f_0_1(
#line 1327 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1327 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1327 "loop_inv.m"
{
#line 1327 "loop_inv.m"
  {
#line 1327 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1327 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1327 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__2_10;

#line 1327 "loop_inv.m"
    {
#line 1327 "loop_inv.m"
      transform_hlds__loop_inv__conv0_HeadVar__2_10 = transform_hlds__loop_inv__IntroducedFrom__func__rhs_modes__1327__1_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1327 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__2_10));
#line 1327 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1327 "loop_inv.m"
  }
#line 1327 "loop_inv.m"
}

#line 1324 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__rhs_modes_1_f_0(
#line 1324 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UniModes_3)
#line 1324 "loop_inv.m"
{
#line 1326 "loop_inv.m"
  {
#line 1326 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1326 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__2_2;

#line 1326 "loop_inv.m"
    {
#line 1326 "loop_inv.m"
      transform_hlds__loop_inv__HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[10], transform_hlds__loop_inv__UniModes_3);
    }
#line 1326 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__2_2;
#line 1326 "loop_inv.m"
  }
#line 1324 "loop_inv.m"
}

#line 1317 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__output_arg_3_f_0(
#line 1317 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 1317 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__X_6,
#line 1317 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__M_7,
#line 1317 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__X_4)
#line 1317 "loop_inv.m"
{
#line 1319 "loop_inv.m"
  {
#line 1319 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;

#line 1319 "loop_inv.m"
    *transform_hlds__loop_inv__X_4 = transform_hlds__loop_inv__X_6;
#line 1320 "loop_inv.m"
    {
#line 1320 "loop_inv.m"
      return transform_hlds__loop_inv__succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__M_7);
    }
#line 1319 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1319 "loop_inv.m"
  }
#line 1317 "loop_inv.m"
}

#line 1270 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_5(
#line 1270 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1270 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1270 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1270 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1270 "loop_inv.m"
{
#line 1270 "loop_inv.m"
  {
#line 1270 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1270 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1270 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv4_X_4;

#line 1270 "loop_inv.m"
    {
#line 1270 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__output_arg_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv4_X_4);
    }
#line 1270 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1270 "loop_inv.m"
      {
#line 1270 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv4_X_4));
#line 1270 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1270 "loop_inv.m"
      }
#line 1270 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1270 "loop_inv.m"
  }
#line 1270 "loop_inv.m"
}

#line 1275 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_4(
#line 1275 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1275 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1275 "loop_inv.m"
{
#line 1275 "loop_inv.m"
  {
#line 1275 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1275 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1275 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv3_HeadVar__2_2;

#line 1275 "loop_inv.m"
    {
#line 1275 "loop_inv.m"
      transform_hlds__loop_inv__conv3_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1275 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv3_HeadVar__2_2));
#line 1275 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1275 "loop_inv.m"
  }
#line 1275 "loop_inv.m"
}

#line 1274 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_3(
#line 1274 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1274 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1274 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1274 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1274 "loop_inv.m"
{
#line 1274 "loop_inv.m"
  {
#line 1274 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1274 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1274 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv2_X_4;

#line 1274 "loop_inv.m"
    {
#line 1274 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__output_arg_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv2_X_4);
    }
#line 1274 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1274 "loop_inv.m"
      {
#line 1274 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv2_X_4));
#line 1274 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1274 "loop_inv.m"
      }
#line 1274 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1274 "loop_inv.m"
  }
#line 1274 "loop_inv.m"
}

#line 1286 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_2(
#line 1286 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1286 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1286 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1286 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1286 "loop_inv.m"
{
#line 1286 "loop_inv.m"
  {
#line 1286 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1286 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1286 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv1_X_4;

#line 1286 "loop_inv.m"
    {
#line 1286 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__output_arg_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv1_X_4);
    }
#line 1286 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1286 "loop_inv.m"
      {
#line 1286 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv1_X_4));
#line 1286 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1286 "loop_inv.m"
      }
#line 1286 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1286 "loop_inv.m"
  }
#line 1286 "loop_inv.m"
}

#line 1266 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_1(
#line 1266 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1266 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1266 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1266 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1266 "loop_inv.m"
{
#line 1266 "loop_inv.m"
  {
#line 1266 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1266 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1266 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_X_4;

#line 1266 "loop_inv.m"
    {
#line 1266 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__output_arg_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv0_X_4);
    }
#line 1266 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1266 "loop_inv.m"
      {
#line 1266 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_X_4));
#line 1266 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1266 "loop_inv.m"
      }
#line 1266 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1266 "loop_inv.m"
  }
#line 1266 "loop_inv.m"
}

#line 1260 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0(
#line 1260 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
#line 1260 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5)
#line 1260 "loop_inv.m"
{
#line 1262 "loop_inv.m"
  {
#line 1262 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1262 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Outputs_6;
#line 1262 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 0)));
#line 1263 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 1)));

#line 1268 "loop_inv.m"
    if (((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 2))))
#line 1265 "loop_inv.m"
      {
#line 1265 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__TypeInfo_80_80 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1265 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
#line 1265 "loop_inv.m"
        MR_Integer transform_hlds__loop_inv__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1265 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1265 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_75_75;
#line 1265 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_76_76;
#line 1265 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1265 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1265 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

#line 1266 "loop_inv.m"
        {
#line 1266 "loop_inv.m"
          transform_hlds__loop_inv__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1266 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_75_75, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1266 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_75_75, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_1));
#line 1266 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1266 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_75_75, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1266 "loop_inv.m"
        }
#line 1266 "loop_inv.m"
        {
#line 1266 "loop_inv.m"
          transform_hlds__loop_inv__V_76_76 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_9, transform_hlds__loop_inv__ProcId_10);
        }
#line 1266 "loop_inv.m"
        {
#line 1266 "loop_inv.m"
          transform_hlds__loop_inv__Outputs_6 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_80_80, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_80_80, transform_hlds__loop_inv__V_75_75, transform_hlds__loop_inv__Args_11, transform_hlds__loop_inv__V_76_76);
        }
#line 1265 "loop_inv.m"
      }
#line 1268 "loop_inv.m"
    else
#line 1268 "loop_inv.m"
      if (((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 1))))
#line 1278 "loop_inv.m"
        {
#line 1278 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__LHS_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
#line 1278 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__Kind_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1278 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___RHS_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1278 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1278 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));

#line 1283 "loop_inv.m"
          if (((MR_tag((MR_Word) transform_hlds__loop_inv__Kind_27)) == (MR_mktag((MR_Integer) 2))))
#line 1290 "loop_inv.m"
            {
#line 1291 "loop_inv.m"
              {
#line 1291 "loop_inv.m"
                transform_hlds__loop_inv__Outputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1291 "loop_inv.m"
                MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Outputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_24));
#line 1291 "loop_inv.m"
                MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Outputs_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1291 "loop_inv.m"
              }
#line 1290 "loop_inv.m"
            }
#line 1283 "loop_inv.m"
          else
#line 1283 "loop_inv.m"
            if (((MR_tag((MR_Word) transform_hlds__loop_inv__Kind_27)) == (MR_mktag((MR_Integer) 0))))
#line 1281 "loop_inv.m"
              {
#line 1282 "loop_inv.m"
                {
#line 1282 "loop_inv.m"
                  transform_hlds__loop_inv__Outputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1282 "loop_inv.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Outputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_24));
#line 1282 "loop_inv.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Outputs_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1282 "loop_inv.m"
                }
#line 1281 "loop_inv.m"
              }
#line 1283 "loop_inv.m"
            else
#line 1283 "loop_inv.m"
              if (((MR_tag((MR_Word) transform_hlds__loop_inv__Kind_27)) == (MR_mktag((MR_Integer) 1))))
#line 1285 "loop_inv.m"
                {
#line 1285 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__TypeInfo_98_98 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1285 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__RHSArgs_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 2)));
#line 1285 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__ArgUniModes_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 3)));
#line 1285 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_67_67;
#line 1285 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_68_68;
#line 1285 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 0)));
#line 1285 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 1)));
#line 1285 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 4)));
#line 1285 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 5)));

#line 1286 "loop_inv.m"
                  {
#line 1286 "loop_inv.m"
                    transform_hlds__loop_inv__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1286 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_67_67, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1286 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_67_67, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_2));
#line 1286 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1286 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_67_67, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1286 "loop_inv.m"
                  }
#line 1286 "loop_inv.m"
                  {
#line 1286 "loop_inv.m"
                    transform_hlds__loop_inv__V_68_68 = transform_hlds__loop_inv__rhs_modes_1_f_0(transform_hlds__loop_inv__ArgUniModes_39);
                  }
#line 1286 "loop_inv.m"
                  {
#line 1286 "loop_inv.m"
                    transform_hlds__loop_inv__Outputs_6 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_98_98, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_98_98, transform_hlds__loop_inv__V_67_67, transform_hlds__loop_inv__RHSArgs_38, transform_hlds__loop_inv__V_68_68);
                  }
#line 1285 "loop_inv.m"
                }
#line 1283 "loop_inv.m"
              else
#line 1283 "loop_inv.m"
                if (((((MR_tag((MR_Word) transform_hlds__loop_inv__Kind_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__Kind_27, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1299 "loop_inv.m"
                  transform_hlds__loop_inv__Outputs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1283 "loop_inv.m"
                else
#line 1295 "loop_inv.m"
                  transform_hlds__loop_inv__Outputs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1278 "loop_inv.m"
        }
#line 1268 "loop_inv.m"
      else
#line 1268 "loop_inv.m"
        if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1273 "loop_inv.m"
          {
#line 1273 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__TypeInfo_90_90 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1273 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__ForeignArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1273 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_70_70;
#line 1273 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_71_71;
#line 1273 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_73_73;
#line 1273 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__PredId_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1273 "loop_inv.m"
            MR_Integer transform_hlds__loop_inv__ProcId_79 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1273 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1273 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));
#line 1273 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 6)));
#line 1273 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 7)));

#line 1274 "loop_inv.m"
            {
#line 1274 "loop_inv.m"
              transform_hlds__loop_inv__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1274 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_70_70, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1274 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_70_70, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_3));
#line 1274 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1274 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_70_70, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1274 "loop_inv.m"
            }
#line 1274 "loop_inv.m"
            {
#line 1274 "loop_inv.m"
              transform_hlds__loop_inv__V_71_71 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, transform_hlds__loop_inv__TypeInfo_90_90, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[9], transform_hlds__loop_inv__ForeignArgs_20);
            }
#line 1274 "loop_inv.m"
            {
#line 1274 "loop_inv.m"
              transform_hlds__loop_inv__V_73_73 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_78, transform_hlds__loop_inv__ProcId_79);
            }
#line 1274 "loop_inv.m"
            {
#line 1274 "loop_inv.m"
              transform_hlds__loop_inv__Outputs_6 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_90_90, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_90_90, transform_hlds__loop_inv__V_70_70, transform_hlds__loop_inv__V_71_71, transform_hlds__loop_inv__V_73_73);
            }
#line 1273 "loop_inv.m"
          }
#line 1268 "loop_inv.m"
        else
#line 1268 "loop_inv.m"
          if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1269 "loop_inv.m"
            {
#line 1269 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeInfo_85_85 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1269 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__ArgModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1269 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_74_74;
#line 1269 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Args_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1269 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1269 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1269 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

#line 1270 "loop_inv.m"
              {
#line 1270 "loop_inv.m"
                transform_hlds__loop_inv__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1270 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_74_74, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1270 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_74_74, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_5));
#line 1270 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1270 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_74_74, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1270 "loop_inv.m"
              }
#line 1270 "loop_inv.m"
              {
#line 1270 "loop_inv.m"
                transform_hlds__loop_inv__Outputs_6 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_85_85, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_85_85, transform_hlds__loop_inv__V_74_74, transform_hlds__loop_inv__Args_77, transform_hlds__loop_inv__ArgModes_16);
              }
#line 1269 "loop_inv.m"
            }
#line 1268 "loop_inv.m"
          else
#line 1309 "loop_inv.m"
            {
#line 1310 "loop_inv.m"
              {
#line 1310 "loop_inv.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.goal_outputs\'/2", (MR_String) "compound goal");
              }
#line 1309 "loop_inv.m"
            }
#line 1262 "loop_inv.m"
    return transform_hlds__loop_inv__Outputs_6;
#line 1262 "loop_inv.m"
  }
#line 1260 "loop_inv.m"
}

#line 1249 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__input_arg_3_f_0(
#line 1249 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 1249 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__X_6,
#line 1249 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__M_7,
#line 1249 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__X_4)
#line 1249 "loop_inv.m"
{
#line 1251 "loop_inv.m"
  {
#line 1251 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1251 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InInst_8;
#line 1252 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___OutInst_9;

#line 1251 "loop_inv.m"
    *transform_hlds__loop_inv__X_4 = transform_hlds__loop_inv__X_6;
#line 1252 "loop_inv.m"
    {
#line 1252 "loop_inv.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__M_7, &transform_hlds__loop_inv__InInst_8, &transform_hlds__loop_inv___OutInst_9);
    }
#line 1253 "loop_inv.m"
    {
#line 1253 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__InInst_8);
    }
#line 1253 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 1251 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1251 "loop_inv.m"
  }
#line 1249 "loop_inv.m"
}

#line 1189 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_6(
#line 1189 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1189 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1189 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1189 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1189 "loop_inv.m"
{
#line 1189 "loop_inv.m"
  {
#line 1189 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1189 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1189 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv5_X_4;

#line 1189 "loop_inv.m"
    {
#line 1189 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__input_arg_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv5_X_4);
    }
#line 1189 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1189 "loop_inv.m"
      {
#line 1189 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv5_X_4));
#line 1189 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1189 "loop_inv.m"
      }
#line 1189 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1189 "loop_inv.m"
  }
#line 1189 "loop_inv.m"
}

#line 1195 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_5(
#line 1195 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1195 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1195 "loop_inv.m"
{
#line 1195 "loop_inv.m"
  {
#line 1195 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1195 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1195 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv4_HeadVar__2_2;

#line 1195 "loop_inv.m"
    {
#line 1195 "loop_inv.m"
      transform_hlds__loop_inv__conv4_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1195 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv4_HeadVar__2_2));
#line 1195 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1195 "loop_inv.m"
  }
#line 1195 "loop_inv.m"
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
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__input_arg_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv3_X_4);
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

#line 1207 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_3(
#line 1207 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1207 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1207 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1207 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1207 "loop_inv.m"
{
#line 1207 "loop_inv.m"
  {
#line 1207 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1207 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1207 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv2_X_4;

#line 1207 "loop_inv.m"
    {
#line 1207 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__input_arg_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv2_X_4);
    }
#line 1207 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1207 "loop_inv.m"
      {
#line 1207 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv2_X_4));
#line 1207 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1207 "loop_inv.m"
      }
#line 1207 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1207 "loop_inv.m"
  }
#line 1207 "loop_inv.m"
}

#line 1202 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_2(
#line 1202 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1202 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1202 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1202 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1202 "loop_inv.m"
{
#line 1202 "loop_inv.m"
  {
#line 1202 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1202 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1202 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv1_X_4;

#line 1202 "loop_inv.m"
    {
#line 1202 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__input_arg_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv1_X_4);
    }
#line 1202 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1202 "loop_inv.m"
      {
#line 1202 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv1_X_4));
#line 1202 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1202 "loop_inv.m"
      }
#line 1202 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1202 "loop_inv.m"
  }
#line 1202 "loop_inv.m"
}

#line 1184 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_1(
#line 1184 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1184 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1184 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1184 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1184 "loop_inv.m"
{
#line 1184 "loop_inv.m"
  {
#line 1184 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1184 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1184 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_X_4;

#line 1184 "loop_inv.m"
    {
#line 1184 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__input_arg_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv0_X_4);
    }
#line 1184 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1184 "loop_inv.m"
      {
#line 1184 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_X_4));
#line 1184 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1184 "loop_inv.m"
      }
#line 1184 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1184 "loop_inv.m"
  }
#line 1184 "loop_inv.m"
}

#line 1178 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0(
#line 1178 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
#line 1178 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5)
#line 1178 "loop_inv.m"
{
#line 1180 "loop_inv.m"
  {
#line 1180 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1180 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Inputs_6;
#line 1180 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 0)));
#line 1181 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 1)));

#line 1186 "loop_inv.m"
    if (((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 2))))
#line 1183 "loop_inv.m"
      {
#line 1183 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__TypeInfo_107_107 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1183 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
#line 1183 "loop_inv.m"
        MR_Integer transform_hlds__loop_inv__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1183 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1183 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_96_96;
#line 1183 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_97_97;
#line 1183 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1183 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1183 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

#line 1184 "loop_inv.m"
        {
#line 1184 "loop_inv.m"
          transform_hlds__loop_inv__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1184 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_96_96, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1184 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_96_96, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_1));
#line 1184 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_96_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1184 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_96_96, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1184 "loop_inv.m"
        }
#line 1184 "loop_inv.m"
        {
#line 1184 "loop_inv.m"
          transform_hlds__loop_inv__V_97_97 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_9, transform_hlds__loop_inv__ProcId_10);
        }
#line 1184 "loop_inv.m"
        {
#line 1184 "loop_inv.m"
          transform_hlds__loop_inv__Inputs_6 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_107_107, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_107_107, transform_hlds__loop_inv__V_96_96, transform_hlds__loop_inv__Args_11, transform_hlds__loop_inv__V_97_97);
        }
#line 1183 "loop_inv.m"
      }
#line 1186 "loop_inv.m"
    else
#line 1186 "loop_inv.m"
      if (((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 1))))
#line 1198 "loop_inv.m"
        {
#line 1198 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__LHS_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
#line 1198 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__UnifyRHS_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1198 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__Kind_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1198 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1198 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));

#line 1204 "loop_inv.m"
          if (((MR_tag((MR_Word) transform_hlds__loop_inv__Kind_29)) == (MR_mktag((MR_Integer) 2))))
#line 1212 "loop_inv.m"
            {
#line 1212 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__RHS_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Kind_29, (MR_Integer) 1)));
#line 1212 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Kind_29, (MR_Integer) 0)));

#line 1213 "loop_inv.m"
              {
#line 1213 "loop_inv.m"
                transform_hlds__loop_inv__Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "loop_inv.m"
                MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__RHS_44));
#line 1213 "loop_inv.m"
                MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1213 "loop_inv.m"
              }
#line 1212 "loop_inv.m"
            }
#line 1204 "loop_inv.m"
          else
#line 1204 "loop_inv.m"
            if (((MR_tag((MR_Word) transform_hlds__loop_inv__Kind_29)) == (MR_mktag((MR_Integer) 0))))
#line 1201 "loop_inv.m"
              {
#line 1201 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__TypeInfo_125_125 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1201 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__RHSArgs_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 2)));
#line 1201 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__ArgUniModes_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 3)));
#line 1201 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_89_89;
#line 1201 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_90_90;
#line 1201 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 0)));
#line 1201 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 1)));
#line 1201 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 4)));
#line 1201 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 5)));
#line 1201 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 6)));

#line 1202 "loop_inv.m"
                {
#line 1202 "loop_inv.m"
                  transform_hlds__loop_inv__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1202 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_89_89, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1202 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_89_89, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_2));
#line 1202 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1202 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_89_89, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1202 "loop_inv.m"
                }
#line 1202 "loop_inv.m"
                {
#line 1202 "loop_inv.m"
                  transform_hlds__loop_inv__V_90_90 = transform_hlds__loop_inv__rhs_modes_1_f_0(transform_hlds__loop_inv__ArgUniModes_34);
                }
#line 1202 "loop_inv.m"
                {
#line 1202 "loop_inv.m"
                  transform_hlds__loop_inv__Inputs_6 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_125_125, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_125_125, transform_hlds__loop_inv__V_89_89, transform_hlds__loop_inv__RHSArgs_33, transform_hlds__loop_inv__V_90_90);
                }
#line 1201 "loop_inv.m"
              }
#line 1204 "loop_inv.m"
            else
#line 1204 "loop_inv.m"
              if (((MR_tag((MR_Word) transform_hlds__loop_inv__Kind_29)) == (MR_mktag((MR_Integer) 1))))
#line 1206 "loop_inv.m"
                {
#line 1206 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__TypeInfo_130_130 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1206 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__RHSInputs_42;
#line 1206 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_87_87;
#line 1206 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_88_88;
#line 1206 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__RHSArgs_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 2)));
#line 1206 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__ArgUniModes_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 3)));
#line 1206 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 0)));
#line 1206 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 1)));
#line 1206 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 4)));
#line 1206 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 5)));

#line 1207 "loop_inv.m"
                  {
#line 1207 "loop_inv.m"
                    transform_hlds__loop_inv__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1207 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_87_87, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1207 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_87_87, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_3));
#line 1207 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1207 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_87_87, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1207 "loop_inv.m"
                  }
#line 1207 "loop_inv.m"
                  {
#line 1207 "loop_inv.m"
                    transform_hlds__loop_inv__V_88_88 = transform_hlds__loop_inv__rhs_modes_1_f_0(transform_hlds__loop_inv__ArgUniModes_102);
                  }
#line 1207 "loop_inv.m"
                  {
#line 1207 "loop_inv.m"
                    transform_hlds__loop_inv__RHSInputs_42 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_130_130, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_130_130, transform_hlds__loop_inv__V_87_87, transform_hlds__loop_inv__RHSArgs_101, transform_hlds__loop_inv__V_88_88);
                  }
#line 1209 "loop_inv.m"
                  {
#line 1209 "loop_inv.m"
                    transform_hlds__loop_inv__Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1209 "loop_inv.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_26));
#line 1209 "loop_inv.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 1) = ((MR_Box) (transform_hlds__loop_inv__RHSInputs_42));
#line 1209 "loop_inv.m"
                  }
#line 1206 "loop_inv.m"
                }
#line 1204 "loop_inv.m"
              else
#line 1204 "loop_inv.m"
                if (((((MR_tag((MR_Word) transform_hlds__loop_inv__Kind_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__Kind_29, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1224 "loop_inv.m"
                  if (((MR_tag((MR_Word) transform_hlds__loop_inv__UnifyRHS_27)) == (MR_mktag((MR_Integer) 1))))
#line 1225 "loop_inv.m"
                    {
#line 1226 "loop_inv.m"
                      {
#line 1226 "loop_inv.m"
                        transform_hlds__loop_inv__Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1226 "loop_inv.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_26));
#line 1226 "loop_inv.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1226 "loop_inv.m"
                      }
#line 1225 "loop_inv.m"
                    }
#line 1224 "loop_inv.m"
                  else
#line 1224 "loop_inv.m"
                    if (((MR_tag((MR_Word) transform_hlds__loop_inv__UnifyRHS_27)) == (MR_mktag((MR_Integer) 2))))
#line 1228 "loop_inv.m"
                      {
#line 1230 "loop_inv.m"
                        {
#line 1230 "loop_inv.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.goal_inputs\'/2", (MR_String) "lambda goal");
                        }
#line 1228 "loop_inv.m"
                      }
#line 1224 "loop_inv.m"
                    else
#line 1222 "loop_inv.m"
                      {
#line 1222 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_82_82;
#line 1222 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__RHS_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__UnifyRHS_27, (MR_Integer) 0)));

#line 1223 "loop_inv.m"
                        {
#line 1223 "loop_inv.m"
                          transform_hlds__loop_inv__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "loop_inv.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_82_82, 0) = ((MR_Box) (transform_hlds__loop_inv__RHS_104));
#line 1223 "loop_inv.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1223 "loop_inv.m"
                        }
#line 1223 "loop_inv.m"
                        {
#line 1223 "loop_inv.m"
                          transform_hlds__loop_inv__Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "loop_inv.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_26));
#line 1223 "loop_inv.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 1) = ((MR_Box) (transform_hlds__loop_inv__V_82_82));
#line 1223 "loop_inv.m"
                        }
#line 1222 "loop_inv.m"
                      }
#line 1204 "loop_inv.m"
                else
#line 1216 "loop_inv.m"
                  {
#line 1216 "loop_inv.m"
                    MR_Word transform_hlds__loop_inv__V_84_84;
#line 1216 "loop_inv.m"
                    MR_Word transform_hlds__loop_inv__RHS_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__Kind_29, (MR_Integer) 2)));
#line 1216 "loop_inv.m"
                    MR_Word transform_hlds__loop_inv__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__Kind_29, (MR_Integer) 1)));

#line 1217 "loop_inv.m"
                    {
#line 1217 "loop_inv.m"
                      transform_hlds__loop_inv__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1217 "loop_inv.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_84_84, 0) = ((MR_Box) (transform_hlds__loop_inv__RHS_103));
#line 1217 "loop_inv.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1217 "loop_inv.m"
                    }
#line 1217 "loop_inv.m"
                    {
#line 1217 "loop_inv.m"
                      transform_hlds__loop_inv__Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1217 "loop_inv.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_26));
#line 1217 "loop_inv.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 1) = ((MR_Box) (transform_hlds__loop_inv__V_84_84));
#line 1217 "loop_inv.m"
                    }
#line 1216 "loop_inv.m"
                  }
#line 1198 "loop_inv.m"
        }
#line 1186 "loop_inv.m"
      else
#line 1186 "loop_inv.m"
        if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1193 "loop_inv.m"
          {
#line 1193 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__TypeInfo_117_117 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1193 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__ForeignArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1193 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_91_91;
#line 1193 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_92_92;
#line 1193 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_94_94;
#line 1193 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__PredId_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1193 "loop_inv.m"
            MR_Integer transform_hlds__loop_inv__ProcId_100 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1193 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1193 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));
#line 1193 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 6)));
#line 1193 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 7)));

#line 1194 "loop_inv.m"
            {
#line 1194 "loop_inv.m"
              transform_hlds__loop_inv__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1194 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_91_91, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1194 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_91_91, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_4));
#line 1194 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1194 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_91_91, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1194 "loop_inv.m"
            }
#line 1194 "loop_inv.m"
            {
#line 1194 "loop_inv.m"
              transform_hlds__loop_inv__V_92_92 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, transform_hlds__loop_inv__TypeInfo_117_117, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[8], transform_hlds__loop_inv__ForeignArgs_22);
            }
#line 1194 "loop_inv.m"
            {
#line 1194 "loop_inv.m"
              transform_hlds__loop_inv__V_94_94 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_99, transform_hlds__loop_inv__ProcId_100);
            }
#line 1194 "loop_inv.m"
            {
#line 1194 "loop_inv.m"
              transform_hlds__loop_inv__Inputs_6 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_117_117, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_117_117, transform_hlds__loop_inv__V_91_91, transform_hlds__loop_inv__V_92_92, transform_hlds__loop_inv__V_94_94);
            }
#line 1193 "loop_inv.m"
          }
#line 1186 "loop_inv.m"
        else
#line 1186 "loop_inv.m"
          if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1187 "loop_inv.m"
            {
#line 1187 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeInfo_112_112;
#line 1187 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__GenericCall_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1187 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__ArgModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1187 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__GenericCallVars_19;
#line 1187 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Inputs0_20;
#line 1187 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_95_95;
#line 1187 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Args_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1187 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1187 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

#line 1188 "loop_inv.m"
              {
#line 1188 "loop_inv.m"
                hlds__goal_util__generic_call_vars_2_p_0(transform_hlds__loop_inv__GenericCall_15, &transform_hlds__loop_inv__GenericCallVars_19);
              }
#line 4382 "transform_hlds.loop_inv.c"
              transform_hlds__loop_inv__TypeInfo_112_112 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1189 "loop_inv.m"
              {
#line 1189 "loop_inv.m"
                transform_hlds__loop_inv__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1189 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_95_95, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1189 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_95_95, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_6));
#line 1189 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_95_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1189 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_95_95, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1189 "loop_inv.m"
              }
#line 1189 "loop_inv.m"
              {
#line 1189 "loop_inv.m"
                transform_hlds__loop_inv__Inputs0_20 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_112_112, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_112_112, transform_hlds__loop_inv__V_95_95, transform_hlds__loop_inv__Args_98, transform_hlds__loop_inv__ArgModes_16);
              }
#line 1191 "loop_inv.m"
              {
#line 1191 "loop_inv.m"
                transform_hlds__loop_inv__Inputs_6 = mercury__list__f_43_43_2_f_0(transform_hlds__loop_inv__TypeInfo_112_112, transform_hlds__loop_inv__GenericCallVars_19, transform_hlds__loop_inv__Inputs0_20);
              }
#line 1187 "loop_inv.m"
            }
#line 1186 "loop_inv.m"
          else
#line 1241 "loop_inv.m"
            {
#line 1242 "loop_inv.m"
              {
#line 1242 "loop_inv.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.goal_inputs\'/2", (MR_String) "compound goal");
              }
#line 1241 "loop_inv.m"
            }
#line 1180 "loop_inv.m"
    return transform_hlds__loop_inv__Inputs_6;
#line 1180 "loop_inv.m"
  }
#line 1178 "loop_inv.m"
}

#line 1167 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__argmodes_3_f_0(
#line 1167 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 1167 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredId_6,
#line 1167 "loop_inv.m"
  MR_Integer transform_hlds__loop_inv__ProcId_7)
#line 1167 "loop_inv.m"
{
#line 1169 "loop_inv.m"
  {
#line 1169 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1169 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ArgModes_8;
#line 1169 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ProcInfo_10;
#line 1170 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_9_9;

#line 1170 "loop_inv.m"
    {
#line 1170 "loop_inv.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__PredId_6, transform_hlds__loop_inv__ProcId_7, &transform_hlds__loop_inv__V_9_9, &transform_hlds__loop_inv__ProcInfo_10);
    }
#line 1171 "loop_inv.m"
    {
#line 1171 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__loop_inv__ProcInfo_10, &transform_hlds__loop_inv__ArgModes_8);
    }
#line 1169 "loop_inv.m"
    return transform_hlds__loop_inv__ArgModes_8;
#line 1169 "loop_inv.m"
  }
#line 1167 "loop_inv.m"
}

#line 1158 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__uniquely_used_args_3_f_0(
#line 1158 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 1158 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__X_6,
#line 1158 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__M_7,
#line 1158 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__X_4)
#line 1158 "loop_inv.m"
{
#line 1161 "loop_inv.m"
  {
#line 1161 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1161 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InInst_8;
#line 1162 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___OutInst_9;

#line 1161 "loop_inv.m"
    *transform_hlds__loop_inv__X_4 = transform_hlds__loop_inv__X_6;
#line 1162 "loop_inv.m"
    {
#line 1162 "loop_inv.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__M_7, &transform_hlds__loop_inv__InInst_8, &transform_hlds__loop_inv___OutInst_9);
    }
#line 1163 "loop_inv.m"
    {
#line 1163 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__InInst_8);
    }
#line 1163 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 1161 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1161 "loop_inv.m"
  }
#line 1158 "loop_inv.m"
}

#line 1154 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__case_goals_1_f_0_1(
#line 1154 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1154 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1154 "loop_inv.m"
{
#line 1154 "loop_inv.m"
  {
#line 1154 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1154 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1154 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__2_9;

#line 1154 "loop_inv.m"
    {
#line 1154 "loop_inv.m"
      transform_hlds__loop_inv__conv0_HeadVar__2_9 = transform_hlds__loop_inv__IntroducedFrom__func__case_goals__1154__1_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1154 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__2_9));
#line 1154 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1154 "loop_inv.m"
  }
#line 1154 "loop_inv.m"
}

#line 1151 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__case_goals_1_f_0(
#line 1151 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Cases_3)
#line 1151 "loop_inv.m"
{
#line 1153 "loop_inv.m"
  {
#line 1153 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__2_2;

#line 1153 "loop_inv.m"
    {
#line 1153 "loop_inv.m"
      transform_hlds__loop_inv__HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[7], transform_hlds__loop_inv__Cases_3);
    }
#line 1153 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__2_2;
#line 1153 "loop_inv.m"
  }
#line 1151 "loop_inv.m"
}

#line 1132 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_8(
#line 1132 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1132 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1132 "loop_inv.m"
{
#line 1132 "loop_inv.m"
  {
#line 1132 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1132 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1132 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv7_UsedVars_6;

#line 1132 "loop_inv.m"
    {
#line 1132 "loop_inv.m"
      transform_hlds__loop_inv__conv7_UsedVars_6 = transform_hlds__loop_inv__used_vars_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1132 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv7_UsedVars_6));
#line 1132 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1132 "loop_inv.m"
  }
#line 1132 "loop_inv.m"
}

#line 1101 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_7(
#line 1101 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1101 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1101 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1101 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1101 "loop_inv.m"
{
#line 1101 "loop_inv.m"
  {
#line 1101 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1101 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1101 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv6_X_4;

#line 1101 "loop_inv.m"
    {
#line 1101 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__uniquely_used_args_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv6_X_4);
    }
#line 1101 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1101 "loop_inv.m"
      {
#line 1101 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv6_X_4));
#line 1101 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1101 "loop_inv.m"
      }
#line 1101 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1101 "loop_inv.m"
  }
#line 1101 "loop_inv.m"
}

#line 1129 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_6(
#line 1129 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1129 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1129 "loop_inv.m"
{
#line 1129 "loop_inv.m"
  {
#line 1129 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1129 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1129 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv5_UsedVars_6;

#line 1129 "loop_inv.m"
    {
#line 1129 "loop_inv.m"
      transform_hlds__loop_inv__conv5_UsedVars_6 = transform_hlds__loop_inv__used_vars_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1129 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv5_UsedVars_6));
#line 1129 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1129 "loop_inv.m"
  }
#line 1129 "loop_inv.m"
}

#line 1126 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_5(
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
    MR_Word transform_hlds__loop_inv__conv4_UsedVars_6;

#line 1126 "loop_inv.m"
    {
#line 1126 "loop_inv.m"
      transform_hlds__loop_inv__conv4_UsedVars_6 = transform_hlds__loop_inv__used_vars_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1126 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv4_UsedVars_6));
#line 1126 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1126 "loop_inv.m"
  }
#line 1126 "loop_inv.m"
}

#line 1118 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_4(
#line 1118 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1118 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1118 "loop_inv.m"
{
#line 1118 "loop_inv.m"
  {
#line 1118 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1118 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1118 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv3_HeadVar__2_2;

#line 1118 "loop_inv.m"
    {
#line 1118 "loop_inv.m"
      transform_hlds__loop_inv__conv3_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1118 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv3_HeadVar__2_2));
#line 1118 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1118 "loop_inv.m"
  }
#line 1118 "loop_inv.m"
}

#line 1116 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_3(
#line 1116 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1116 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1116 "loop_inv.m"
{
#line 1116 "loop_inv.m"
  {
#line 1116 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1116 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1116 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv2_HeadVar__2_2;

#line 1116 "loop_inv.m"
    {
#line 1116 "loop_inv.m"
      transform_hlds__loop_inv__conv2_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1116 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv2_HeadVar__2_2));
#line 1116 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1116 "loop_inv.m"
  }
#line 1116 "loop_inv.m"
}

#line 1114 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_2(
#line 1114 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1114 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1114 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1114 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1114 "loop_inv.m"
{
#line 1114 "loop_inv.m"
  {
#line 1114 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1114 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1114 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv1_X_4;

#line 1114 "loop_inv.m"
    {
#line 1114 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__uniquely_used_args_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv1_X_4);
    }
#line 1114 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1114 "loop_inv.m"
      {
#line 1114 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv1_X_4));
#line 1114 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1114 "loop_inv.m"
      }
#line 1114 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1114 "loop_inv.m"
  }
#line 1114 "loop_inv.m"
}

#line 1096 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_1(
#line 1096 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1096 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1096 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1096 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1096 "loop_inv.m"
{
#line 1096 "loop_inv.m"
  {
#line 1096 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1096 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1096 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_X_4;

#line 1096 "loop_inv.m"
    {
#line 1096 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__uniquely_used_args_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv0_X_4);
    }
#line 1096 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1096 "loop_inv.m"
      {
#line 1096 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_X_4));
#line 1096 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1096 "loop_inv.m"
      }
#line 1096 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1096 "loop_inv.m"
  }
#line 1096 "loop_inv.m"
}

#line 1090 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0(
#line 1090 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
#line 1090 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5)
#line 1090 "loop_inv.m"
{
#line 1092 "loop_inv.m"
  while (MR_TRUE)
#line 1092 "loop_inv.m"
    {
#line 1092 "loop_inv.m"
      /* tailcall optimized into a loop */
#line 1092 "loop_inv.m"
      {
#line 1092 "loop_inv.m"
        MR_bool transform_hlds__loop_inv__succeeded;
#line 1092 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__UsedVars_6;
#line 1092 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 0)));
#line 1093 "loop_inv.m"
        MR_Word transform_hlds__loop_inv___GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 1)));

#line 1099 "loop_inv.m"
        if (((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 0))))
#line 1139 "loop_inv.m"
          {
#line 1139 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__SubGoal_41 = (MR_Word) MR_body(((MR_Word) transform_hlds__loop_inv__GoalExpr_7), (MR_Integer) 0);

#line 1140 "loop_inv.m"
            /* direct tailcall eliminated */
#line 1140 "loop_inv.m"
            {
#line 1140 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Goal__tmp_copy_5 = transform_hlds__loop_inv__SubGoal_41;

#line 1140 "loop_inv.m"
              transform_hlds__loop_inv__Goal_5 = transform_hlds__loop_inv__Goal__tmp_copy_5;
#line 1140 "loop_inv.m"
            }
#line 1140 "loop_inv.m"
            continue;
#line 1139 "loop_inv.m"
          }
#line 1099 "loop_inv.m"
        else
#line 1099 "loop_inv.m"
          if (((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 2))))
#line 1095 "loop_inv.m"
            {
#line 1095 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeInfo_70_70 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1095 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
#line 1095 "loop_inv.m"
              MR_Integer transform_hlds__loop_inv__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1095 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1095 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_64_64;
#line 1095 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_65_65;
#line 1095 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1095 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1095 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

#line 1096 "loop_inv.m"
              {
#line 1096 "loop_inv.m"
                transform_hlds__loop_inv__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1096 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_64_64, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1096 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_64_64, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_1));
#line 1096 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1096 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_64_64, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1096 "loop_inv.m"
              }
#line 1096 "loop_inv.m"
              {
#line 1096 "loop_inv.m"
                transform_hlds__loop_inv__V_65_65 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_9, transform_hlds__loop_inv__ProcId_10);
              }
#line 1096 "loop_inv.m"
              {
#line 1096 "loop_inv.m"
                transform_hlds__loop_inv__UsedVars_6 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_70_70, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_70_70, transform_hlds__loop_inv__V_64_64, transform_hlds__loop_inv__Args_11, transform_hlds__loop_inv__V_65_65);
              }
#line 1095 "loop_inv.m"
            }
#line 1099 "loop_inv.m"
          else
#line 1099 "loop_inv.m"
            if (((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 1))))
#line 1123 "loop_inv.m"
              transform_hlds__loop_inv__UsedVars_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1099 "loop_inv.m"
            else
#line 1099 "loop_inv.m"
              if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1106 "loop_inv.m"
                {
#line 1106 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__TypeInfo_80_80 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1106 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__TypeCtorInfo_85_85;
#line 1106 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__ForeignArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1106 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__ExtraForeignArgs_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));
#line 1106 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__UsedArgVars_24;
#line 1106 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__UsedExtraArgVars_25;
#line 1106 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_58_58;
#line 1106 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_59_59;
#line 1106 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_61_61;
#line 1106 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__PredId_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1106 "loop_inv.m"
                  MR_Integer transform_hlds__loop_inv__ProcId_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1105 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1105 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 6)));
#line 1105 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 7)));

#line 1114 "loop_inv.m"
                  {
#line 1114 "loop_inv.m"
                    transform_hlds__loop_inv__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1114 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1114 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_2));
#line 1114 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1114 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1114 "loop_inv.m"
                  }
#line 5014 "transform_hlds.loop_inv.c"
                  transform_hlds__loop_inv__TypeCtorInfo_85_85 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 1114 "loop_inv.m"
                  {
#line 1114 "loop_inv.m"
                    transform_hlds__loop_inv__V_59_59 = mercury__list__map_2_f_0(transform_hlds__loop_inv__TypeCtorInfo_85_85, transform_hlds__loop_inv__TypeInfo_80_80, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[5], transform_hlds__loop_inv__ForeignArgs_20);
                  }
#line 1114 "loop_inv.m"
                  {
#line 1114 "loop_inv.m"
                    transform_hlds__loop_inv__V_61_61 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_67, transform_hlds__loop_inv__ProcId_68);
                  }
#line 1114 "loop_inv.m"
                  {
#line 1114 "loop_inv.m"
                    transform_hlds__loop_inv__UsedArgVars_24 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_80_80, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_80_80, transform_hlds__loop_inv__V_58_58, transform_hlds__loop_inv__V_59_59, transform_hlds__loop_inv__V_61_61);
                  }
#line 1118 "loop_inv.m"
                  {
#line 1118 "loop_inv.m"
                    transform_hlds__loop_inv__UsedExtraArgVars_25 = mercury__list__map_2_f_0(transform_hlds__loop_inv__TypeCtorInfo_85_85, transform_hlds__loop_inv__TypeInfo_80_80, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[6], transform_hlds__loop_inv__ExtraForeignArgs_21);
                  }
#line 1119 "loop_inv.m"
                  {
#line 1119 "loop_inv.m"
                    transform_hlds__loop_inv__UsedVars_6 = mercury__list__f_43_43_2_f_0(transform_hlds__loop_inv__TypeInfo_80_80, transform_hlds__loop_inv__UsedArgVars_24, transform_hlds__loop_inv__UsedExtraArgVars_25);
                  }
#line 1106 "loop_inv.m"
                }
#line 1099 "loop_inv.m"
              else
#line 1099 "loop_inv.m"
                if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1125 "loop_inv.m"
                  {
#line 1125 "loop_inv.m"
                    MR_Word transform_hlds__loop_inv__Conjuncts_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1125 "loop_inv.m"
                    MR_Word transform_hlds__loop_inv__V_56_56;
#line 1125 "loop_inv.m"
                    MR_Word transform_hlds__loop_inv__V_57_57;
#line 1125 "loop_inv.m"
                    MR_Word transform_hlds__loop_inv__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));

#line 1126 "loop_inv.m"
                    {
#line 1126 "loop_inv.m"
                      transform_hlds__loop_inv__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1126 "loop_inv.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_6[5]));
#line 1126 "loop_inv.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_5));
#line 1126 "loop_inv.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1126 "loop_inv.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1126 "loop_inv.m"
                    }
#line 1126 "loop_inv.m"
                    {
#line 1126 "loop_inv.m"
                      transform_hlds__loop_inv__V_56_56 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_57_57, transform_hlds__loop_inv__Conjuncts_32);
                    }
#line 1126 "loop_inv.m"
                    {
#line 1126 "loop_inv.m"
                      transform_hlds__loop_inv__UsedVars_6 = mercury__list__condense_1_f_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__V_56_56);
                    }
#line 1125 "loop_inv.m"
                  }
#line 1099 "loop_inv.m"
                else
#line 1099 "loop_inv.m"
                  if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1128 "loop_inv.m"
                    {
#line 1128 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__Disjuncts_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1128 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__V_54_54;
#line 1128 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__V_55_55;

#line 1129 "loop_inv.m"
                      {
#line 1129 "loop_inv.m"
                        transform_hlds__loop_inv__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1129 "loop_inv.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_55_55, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_6[5]));
#line 1129 "loop_inv.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_55_55, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_6));
#line 1129 "loop_inv.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1129 "loop_inv.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_55_55, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1129 "loop_inv.m"
                      }
#line 1129 "loop_inv.m"
                      {
#line 1129 "loop_inv.m"
                        transform_hlds__loop_inv__V_54_54 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_55_55, transform_hlds__loop_inv__Disjuncts_33);
                      }
#line 1129 "loop_inv.m"
                      {
#line 1129 "loop_inv.m"
                        transform_hlds__loop_inv__UsedVars_6 = mercury__list__condense_1_f_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__V_54_54);
                      }
#line 1128 "loop_inv.m"
                    }
#line 1099 "loop_inv.m"
                  else
#line 1099 "loop_inv.m"
                    if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1100 "loop_inv.m"
                      {
#line 1100 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__TypeInfo_75_75 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1100 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__Modes_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1100 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_63_63;
#line 1100 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__Args_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1100 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1100 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1100 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

#line 1101 "loop_inv.m"
                        {
#line 1101 "loop_inv.m"
                          transform_hlds__loop_inv__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1101 "loop_inv.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_63_63, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1101 "loop_inv.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_63_63, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_7));
#line 1101 "loop_inv.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1101 "loop_inv.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_63_63, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1101 "loop_inv.m"
                        }
#line 1101 "loop_inv.m"
                        {
#line 1101 "loop_inv.m"
                          transform_hlds__loop_inv__UsedVars_6 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_75_75, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_75_75, transform_hlds__loop_inv__V_63_63, transform_hlds__loop_inv__Args_66, transform_hlds__loop_inv__Modes_16);
                        }
#line 1100 "loop_inv.m"
                      }
#line 1099 "loop_inv.m"
                    else
#line 1099 "loop_inv.m"
                      if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1135 "loop_inv.m"
                        {
#line 1135 "loop_inv.m"
                          MR_Word transform_hlds__loop_inv__TypeInfo_105_105 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1135 "loop_inv.m"
                          MR_Word transform_hlds__loop_inv__Cond_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1135 "loop_inv.m"
                          MR_Word transform_hlds__loop_inv__Then_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1135 "loop_inv.m"
                          MR_Word transform_hlds__loop_inv__Else_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1135 "loop_inv.m"
                          MR_Word transform_hlds__loop_inv__V_47_47;
#line 1135 "loop_inv.m"
                          MR_Word transform_hlds__loop_inv__V_48_48;
#line 1135 "loop_inv.m"
                          MR_Word transform_hlds__loop_inv__V_49_49;
#line 1135 "loop_inv.m"
                          MR_Word transform_hlds__loop_inv__V_50_50;
#line 1135 "loop_inv.m"
                          MR_Word transform_hlds__loop_inv__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));

#line 1136 "loop_inv.m"
                          {
#line 1136 "loop_inv.m"
                            transform_hlds__loop_inv__V_47_47 = transform_hlds__loop_inv__used_vars_2_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__Cond_38);
                          }
#line 1137 "loop_inv.m"
                          {
#line 1137 "loop_inv.m"
                            transform_hlds__loop_inv__V_49_49 = transform_hlds__loop_inv__used_vars_2_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__Then_39);
                          }
#line 1137 "loop_inv.m"
                          {
#line 1137 "loop_inv.m"
                            transform_hlds__loop_inv__V_50_50 = transform_hlds__loop_inv__used_vars_2_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__Else_40);
                          }
#line 1136 "loop_inv.m"
                          {
#line 1136 "loop_inv.m"
                            transform_hlds__loop_inv__V_48_48 = mercury__list__f_43_43_2_f_0(transform_hlds__loop_inv__TypeInfo_105_105, transform_hlds__loop_inv__V_49_49, transform_hlds__loop_inv__V_50_50);
                          }
#line 1136 "loop_inv.m"
                          {
#line 1136 "loop_inv.m"
                            transform_hlds__loop_inv__UsedVars_6 = mercury__list__f_43_43_2_f_0(transform_hlds__loop_inv__TypeInfo_105_105, transform_hlds__loop_inv__V_47_47, transform_hlds__loop_inv__V_48_48);
                          }
#line 1135 "loop_inv.m"
                        }
#line 1099 "loop_inv.m"
                      else
#line 1099 "loop_inv.m"
                        if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1142 "loop_inv.m"
                          {
#line 1142 "loop_inv.m"
                            MR_Word transform_hlds__loop_inv__SubGoal_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1142 "loop_inv.m"
                            MR_Word transform_hlds__loop_inv___Reason_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));

#line 1145 "loop_inv.m"
                            /* direct tailcall eliminated */
#line 1145 "loop_inv.m"
                            {
#line 1145 "loop_inv.m"
                              MR_Word transform_hlds__loop_inv__Goal__tmp_copy_5 = transform_hlds__loop_inv__SubGoal_69;

#line 1145 "loop_inv.m"
                              transform_hlds__loop_inv__Goal_5 = transform_hlds__loop_inv__Goal__tmp_copy_5;
#line 1145 "loop_inv.m"
                            }
#line 1145 "loop_inv.m"
                            continue;
#line 1142 "loop_inv.m"
                          }
#line 1099 "loop_inv.m"
                        else
#line 1099 "loop_inv.m"
                          if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1147 "loop_inv.m"
                            {
#line 1148 "loop_inv.m"
                              {
#line 1148 "loop_inv.m"
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.used_vars\'/2", (MR_String) "shorthand");
                              }
#line 1147 "loop_inv.m"
                            }
#line 1099 "loop_inv.m"
                          else
#line 1131 "loop_inv.m"
                            {
#line 1131 "loop_inv.m"
                              MR_Word transform_hlds__loop_inv__Cases_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1131 "loop_inv.m"
                              MR_Word transform_hlds__loop_inv__V_51_51;
#line 1131 "loop_inv.m"
                              MR_Word transform_hlds__loop_inv__V_52_52;
#line 1131 "loop_inv.m"
                              MR_Word transform_hlds__loop_inv__V_53_53;
#line 1131 "loop_inv.m"
                              MR_Word transform_hlds__loop_inv__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1131 "loop_inv.m"
                              MR_Word transform_hlds__loop_inv__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));

#line 1132 "loop_inv.m"
                              {
#line 1132 "loop_inv.m"
                                transform_hlds__loop_inv__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1132 "loop_inv.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_52_52, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_6[5]));
#line 1132 "loop_inv.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_52_52, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_8));
#line 1132 "loop_inv.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1132 "loop_inv.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_52_52, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1132 "loop_inv.m"
                              }
#line 1132 "loop_inv.m"
                              {
#line 1132 "loop_inv.m"
                                transform_hlds__loop_inv__V_53_53 = transform_hlds__loop_inv__case_goals_1_f_0(transform_hlds__loop_inv__Cases_36);
                              }
#line 1132 "loop_inv.m"
                              {
#line 1132 "loop_inv.m"
                                transform_hlds__loop_inv__V_51_51 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_52_52, transform_hlds__loop_inv__V_53_53);
                              }
#line 1132 "loop_inv.m"
                              {
#line 1132 "loop_inv.m"
                                transform_hlds__loop_inv__UsedVars_6 = mercury__list__condense_1_f_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__V_51_51);
                              }
#line 1131 "loop_inv.m"
                            }
#line 1092 "loop_inv.m"
        return transform_hlds__loop_inv__UsedVars_6;
#line 1092 "loop_inv.m"
      }
#line 1092 "loop_inv.m"
      break;
#line 1092 "loop_inv.m"
    }
#line 1090 "loop_inv.m"
}

#line 1044 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_aux_call_2_f_0(
#line 1044 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 1044 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2)
#line 1044 "loop_inv.m"
{
#line 1046 "loop_inv.m"
  {
#line 1046 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1046 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__3_3;
#line 1046 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__CallAux0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 0)));
#line 1046 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Call_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
#line 1046 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__CallInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 1046 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___CallAuxInfo0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 1)));
#line 1046 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__CallAux_11;
#line 1048 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxArgs0_8;
#line 1048 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Args0_9;
#line 1048 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Args_10;
#line 1048 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_15_15;
#line 1048 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__V_16_16;
#line 1048 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_17_17;
#line 1048 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_18_18;
#line 1048 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_19_19;
#line 1049 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_20_20;
#line 1049 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__V_21_21;
#line 1049 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_22_22;
#line 1049 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_23_23;
#line 1049 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_24_24;
#line 1051 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_25_25;
#line 1051 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__V_26_26;
#line 1051 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_28_28;
#line 1051 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_29_29;
#line 1051 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_30_30;
#line 1051 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_27_27;

#line 1048 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__CallAux0_4)) == (MR_mktag((MR_Integer) 2)));
#line 1048 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1048 "loop_inv.m"
      {
#line 1048 "loop_inv.m"
        transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 0)));
#line 1048 "loop_inv.m"
        transform_hlds__loop_inv__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 1)));
#line 1048 "loop_inv.m"
        transform_hlds__loop_inv__AuxArgs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 2)));
#line 1048 "loop_inv.m"
        transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 3)));
#line 1048 "loop_inv.m"
        transform_hlds__loop_inv__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 4)));
#line 1048 "loop_inv.m"
        transform_hlds__loop_inv__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 5)));
#line 1049 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__Call_6)) == (MR_mktag((MR_Integer) 2)));
#line 1049 "loop_inv.m"
        if (transform_hlds__loop_inv__succeeded)
#line 1049 "loop_inv.m"
          {
#line 1049 "loop_inv.m"
            transform_hlds__loop_inv__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Call_6, (MR_Integer) 0)));
#line 1049 "loop_inv.m"
            transform_hlds__loop_inv__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Call_6, (MR_Integer) 1)));
#line 1049 "loop_inv.m"
            transform_hlds__loop_inv__Args0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Call_6, (MR_Integer) 2)));
#line 1049 "loop_inv.m"
            transform_hlds__loop_inv__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Call_6, (MR_Integer) 3)));
#line 1049 "loop_inv.m"
            transform_hlds__loop_inv__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Call_6, (MR_Integer) 4)));
#line 1049 "loop_inv.m"
            transform_hlds__loop_inv__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Call_6, (MR_Integer) 5)));
#line 1050 "loop_inv.m"
            {
#line 1050 "loop_inv.m"
              transform_hlds__loop_inv__Args_10 = transform_hlds__loop_inv__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_2_f_0(transform_hlds__loop_inv__Args0_9, transform_hlds__loop_inv__AuxArgs0_8);
            }
#line 1051 "loop_inv.m"
            transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 0)));
#line 1051 "loop_inv.m"
            transform_hlds__loop_inv__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 1)));
#line 1051 "loop_inv.m"
            transform_hlds__loop_inv__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 2)));
#line 1051 "loop_inv.m"
            transform_hlds__loop_inv__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 3)));
#line 1051 "loop_inv.m"
            transform_hlds__loop_inv__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 4)));
#line 1051 "loop_inv.m"
            transform_hlds__loop_inv__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 5)));
#line 1051 "loop_inv.m"
            {
#line 1051 "loop_inv.m"
              transform_hlds__loop_inv__CallAux_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1051 "loop_inv.m"
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux_11, 0) = ((MR_Box) (transform_hlds__loop_inv__V_25_25));
#line 1051 "loop_inv.m"
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux_11, 1) = ((MR_Box) (transform_hlds__loop_inv__V_26_26));
#line 1051 "loop_inv.m"
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux_11, 2) = ((MR_Box) (transform_hlds__loop_inv__Args_10));
#line 1051 "loop_inv.m"
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux_11, 3) = ((MR_Box) (transform_hlds__loop_inv__V_28_28));
#line 1051 "loop_inv.m"
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux_11, 4) = ((MR_Box) (transform_hlds__loop_inv__V_29_29));
#line 1051 "loop_inv.m"
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux_11, 5) = ((MR_Box) (transform_hlds__loop_inv__V_30_30));
#line 1051 "loop_inv.m"
            }
#line 1051 "loop_inv.m"
            transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1049 "loop_inv.m"
          }
#line 1048 "loop_inv.m"
      }
#line 1046 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1046 "loop_inv.m"
      {
#line 1046 "loop_inv.m"
        transform_hlds__loop_inv__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1046 "loop_inv.m"
        MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__loop_inv__CallAux_11));
#line 1046 "loop_inv.m"
        MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__loop_inv__CallInfo_7));
#line 1046 "loop_inv.m"
      }
#line 1046 "loop_inv.m"
    else
#line 1061 "loop_inv.m"
      {
#line 1046 "loop_inv.m"
        MR_Box transform_hlds__loop_inv__conv0_HeadVar__3_3;

#line 1046 "loop_inv.m"
        {
#line 1046 "loop_inv.m"
          transform_hlds__loop_inv__conv0_HeadVar__3_3 = mercury__require__unexpected_3_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.gen_aux_call\'/2", (MR_String) "args not both ordinary calls");
        }
#line 1046 "loop_inv.m"
        transform_hlds__loop_inv__HeadVar__3_3 = ((MR_Word) transform_hlds__loop_inv__conv0_HeadVar__3_3);
#line 1061 "loop_inv.m"
      }
#line 1046 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__3_3;
#line 1046 "loop_inv.m"
  }
#line 1044 "loop_inv.m"
}

#line 1035 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_out_proc_case_3_f_0(
#line 1035 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_5,
#line 1035 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__CallAux_6,
#line 1035 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Case_7)
#line 1035 "loop_inv.m"
{
#line 1037 "loop_inv.m"
  {
#line 1037 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1037 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxCase_8;
#line 1037 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__MainConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_7, (MR_Integer) 0)));
#line 1037 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__OtherConsIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_7, (MR_Integer) 1)));
#line 1037 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_7, (MR_Integer) 2)));
#line 1037 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxGoal_12;

#line 1039 "loop_inv.m"
    {
#line 1039 "loop_inv.m"
      transform_hlds__loop_inv__AuxGoal_12 = transform_hlds__loop_inv__gen_out_proc_goal_3_f_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__CallAux_6, transform_hlds__loop_inv__Goal_11);
    }
#line 1040 "loop_inv.m"
    {
#line 1040 "loop_inv.m"
      transform_hlds__loop_inv__AuxCase_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1040 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxCase_8, 0) = ((MR_Box) (transform_hlds__loop_inv__MainConsId_9));
#line 1040 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxCase_8, 1) = ((MR_Box) (transform_hlds__loop_inv__OtherConsIds_10));
#line 1040 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxCase_8, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxGoal_12));
#line 1040 "loop_inv.m"
    }
#line 1037 "loop_inv.m"
    return transform_hlds__loop_inv__AuxCase_8;
#line 1037 "loop_inv.m"
  }
#line 1035 "loop_inv.m"
}

#line 1008 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_3_f_0_3(
#line 1008 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1008 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1008 "loop_inv.m"
{
#line 1008 "loop_inv.m"
  {
#line 1008 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1008 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1008 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv2_AuxCase_8;

#line 1008 "loop_inv.m"
    {
#line 1008 "loop_inv.m"
      transform_hlds__loop_inv__conv2_AuxCase_8 = transform_hlds__loop_inv__gen_out_proc_case_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1008 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv2_AuxCase_8));
#line 1008 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1008 "loop_inv.m"
  }
#line 1008 "loop_inv.m"
}

#line 1003 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_3_f_0_2(
#line 1003 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1003 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1003 "loop_inv.m"
{
#line 1003 "loop_inv.m"
  {
#line 1003 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1003 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1003 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv1_AuxGoal_8;

#line 1003 "loop_inv.m"
    {
#line 1003 "loop_inv.m"
      transform_hlds__loop_inv__conv1_AuxGoal_8 = transform_hlds__loop_inv__gen_out_proc_goal_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1003 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv1_AuxGoal_8));
#line 1003 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1003 "loop_inv.m"
  }
#line 1003 "loop_inv.m"
}

#line 998 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_3_f_0_1(
#line 998 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 998 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 998 "loop_inv.m"
{
#line 998 "loop_inv.m"
  {
#line 998 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 998 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 998 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_AuxGoal_8;

#line 998 "loop_inv.m"
    {
#line 998 "loop_inv.m"
      transform_hlds__loop_inv__conv0_AuxGoal_8 = transform_hlds__loop_inv__gen_out_proc_goal_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 998 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv0_AuxGoal_8));
#line 998 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 998 "loop_inv.m"
  }
#line 998 "loop_inv.m"
}

#line 979 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_3_f_0(
#line 979 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_5,
#line 979 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__CallAux_6,
#line 979 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_7)
#line 979 "loop_inv.m"
{
#line 981 "loop_inv.m"
  {
#line 981 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 981 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxGoal_8;
#line 981 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_7, (MR_Integer) 0)));
#line 981 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_7, (MR_Integer) 1)));

#line 990 "loop_inv.m"
    if (((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_9)) == (MR_mktag((MR_Integer) 0))))
#line 1012 "loop_inv.m"
      {
#line 1012 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__SubGoal_44 = (MR_Word) MR_body(((MR_Word) transform_hlds__loop_inv__GoalExpr_9), (MR_Integer) 0);
#line 1012 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__AuxSubGoal_45;
#line 1012 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__AuxGoalExpr_63;

#line 1013 "loop_inv.m"
        {
#line 1013 "loop_inv.m"
          transform_hlds__loop_inv__AuxSubGoal_45 = transform_hlds__loop_inv__gen_out_proc_goal_3_f_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__CallAux_6, transform_hlds__loop_inv__SubGoal_44);
        }
#line 1014 "loop_inv.m"
        transform_hlds__loop_inv__AuxGoalExpr_63 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__loop_inv__AuxSubGoal_45);
#line 1015 "loop_inv.m"
        {
#line 1015 "loop_inv.m"
          transform_hlds__loop_inv__AuxGoal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1015 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_63));
#line 1015 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
#line 1015 "loop_inv.m"
        }
#line 1012 "loop_inv.m"
      }
#line 990 "loop_inv.m"
    else
#line 990 "loop_inv.m"
      if (((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_9)) == (MR_mktag((MR_Integer) 2))))
#line 984 "loop_inv.m"
        {
#line 984 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 0)));
#line 984 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
#line 984 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 2)));
#line 984 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 3)));
#line 984 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 4)));
#line 984 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 5)));
#line 985 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PPId_5, (MR_Integer) 0)));
#line 985 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PPId_5, (MR_Integer) 1)));

#line 985 "loop_inv.m"
          {
#line 985 "loop_inv.m"
            transform_hlds__loop_inv__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__loop_inv__PredId_11, transform_hlds__loop_inv__V_77_77);
          }
#line 985 "loop_inv.m"
          if (transform_hlds__loop_inv__succeeded)
#line 985 "loop_inv.m"
            transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__ProcId_12 == transform_hlds__loop_inv__V_78_78);
#line 987 "loop_inv.m"
          if (transform_hlds__loop_inv__succeeded)
#line 986 "loop_inv.m"
            {
#line 986 "loop_inv.m"
              return transform_hlds__loop_inv__AuxGoal_8 = transform_hlds__loop_inv__gen_aux_call_2_f_0(transform_hlds__loop_inv__CallAux_6, transform_hlds__loop_inv__Goal_7);
            }
#line 987 "loop_inv.m"
          else
#line 988 "loop_inv.m"
            transform_hlds__loop_inv__AuxGoal_8 = transform_hlds__loop_inv__Goal_7;
#line 984 "loop_inv.m"
        }
#line 990 "loop_inv.m"
      else
#line 990 "loop_inv.m"
        if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 997 "loop_inv.m"
          {
#line 997 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__TypeCtorInfo_68_68 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 997 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__ConjType_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
#line 997 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Conjuncts_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 2)));
#line 997 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__AuxConjuncts_36;
#line 997 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__AuxGoalExpr_37;
#line 997 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_60_60;

#line 998 "loop_inv.m"
            {
#line 998 "loop_inv.m"
              transform_hlds__loop_inv__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 998 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_60_60, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[2]));
#line 998 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_60_60, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_out_proc_goal_3_f_0_1));
#line 998 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 998 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_60_60, 3) = ((MR_Box) (transform_hlds__loop_inv__PPId_5));
#line 998 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_60_60, 4) = ((MR_Box) (transform_hlds__loop_inv__CallAux_6));
#line 998 "loop_inv.m"
            }
#line 998 "loop_inv.m"
            {
#line 998 "loop_inv.m"
              transform_hlds__loop_inv__AuxConjuncts_36 = mercury__list__map_2_f_0(transform_hlds__loop_inv__TypeCtorInfo_68_68, transform_hlds__loop_inv__TypeCtorInfo_68_68, transform_hlds__loop_inv__V_60_60, transform_hlds__loop_inv__Conjuncts_35);
            }
#line 999 "loop_inv.m"
            {
#line 999 "loop_inv.m"
              transform_hlds__loop_inv__AuxGoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 999 "loop_inv.m"
              MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 999 "loop_inv.m"
              MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_37, 1) = ((MR_Box) (transform_hlds__loop_inv__ConjType_34));
#line 999 "loop_inv.m"
              MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_37, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxConjuncts_36));
#line 999 "loop_inv.m"
            }
#line 1000 "loop_inv.m"
            {
#line 1000 "loop_inv.m"
              transform_hlds__loop_inv__AuxGoal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1000 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_37));
#line 1000 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
#line 1000 "loop_inv.m"
            }
#line 997 "loop_inv.m"
          }
#line 990 "loop_inv.m"
        else
#line 990 "loop_inv.m"
          if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1002 "loop_inv.m"
            {
#line 1002 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeCtorInfo_71_71 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1002 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Disjuncts_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
#line 1002 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxDisjuncts_39;
#line 1002 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_59_59;
#line 1002 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_61;

#line 1003 "loop_inv.m"
              {
#line 1003 "loop_inv.m"
                transform_hlds__loop_inv__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1003 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[2]));
#line 1003 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_out_proc_goal_3_f_0_2));
#line 1003 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1003 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 3) = ((MR_Box) (transform_hlds__loop_inv__PPId_5));
#line 1003 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 4) = ((MR_Box) (transform_hlds__loop_inv__CallAux_6));
#line 1003 "loop_inv.m"
              }
#line 1003 "loop_inv.m"
              {
#line 1003 "loop_inv.m"
                transform_hlds__loop_inv__AuxDisjuncts_39 = mercury__list__map_2_f_0(transform_hlds__loop_inv__TypeCtorInfo_71_71, transform_hlds__loop_inv__TypeCtorInfo_71_71, transform_hlds__loop_inv__V_59_59, transform_hlds__loop_inv__Disjuncts_38);
              }
#line 1004 "loop_inv.m"
              {
#line 1004 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoalExpr_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1004 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1004 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_61, 1) = ((MR_Box) (transform_hlds__loop_inv__AuxDisjuncts_39));
#line 1004 "loop_inv.m"
              }
#line 1005 "loop_inv.m"
              {
#line 1005 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1005 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_61));
#line 1005 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
#line 1005 "loop_inv.m"
              }
#line 1002 "loop_inv.m"
            }
#line 990 "loop_inv.m"
          else
#line 990 "loop_inv.m"
            if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1024 "loop_inv.m"
              {
#line 1024 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__Vars_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
#line 1024 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__Cond_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 2)));
#line 1024 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__Then_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 3)));
#line 1024 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__Else_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 4)));
#line 1024 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__AuxCond_51;
#line 1024 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__AuxThen_52;
#line 1024 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__AuxElse_53;
#line 1024 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__AuxGoalExpr_67;

#line 1025 "loop_inv.m"
                {
#line 1025 "loop_inv.m"
                  transform_hlds__loop_inv__AuxCond_51 = transform_hlds__loop_inv__gen_out_proc_goal_3_f_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__CallAux_6, transform_hlds__loop_inv__Cond_48);
                }
#line 1026 "loop_inv.m"
                {
#line 1026 "loop_inv.m"
                  transform_hlds__loop_inv__AuxThen_52 = transform_hlds__loop_inv__gen_out_proc_goal_3_f_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__CallAux_6, transform_hlds__loop_inv__Then_49);
                }
#line 1027 "loop_inv.m"
                {
#line 1027 "loop_inv.m"
                  transform_hlds__loop_inv__AuxElse_53 = transform_hlds__loop_inv__gen_out_proc_goal_3_f_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__CallAux_6, transform_hlds__loop_inv__Else_50);
                }
#line 1028 "loop_inv.m"
                {
#line 1028 "loop_inv.m"
                  transform_hlds__loop_inv__AuxGoalExpr_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "loop_inv.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1028 "loop_inv.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 1) = ((MR_Box) (transform_hlds__loop_inv__Vars_47));
#line 1028 "loop_inv.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxCond_51));
#line 1028 "loop_inv.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 3) = ((MR_Box) (transform_hlds__loop_inv__AuxThen_52));
#line 1028 "loop_inv.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 4) = ((MR_Box) (transform_hlds__loop_inv__AuxElse_53));
#line 1028 "loop_inv.m"
                }
#line 1029 "loop_inv.m"
                {
#line 1029 "loop_inv.m"
                  transform_hlds__loop_inv__AuxGoal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1029 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_67));
#line 1029 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
#line 1029 "loop_inv.m"
                }
#line 1024 "loop_inv.m"
              }
#line 990 "loop_inv.m"
            else
#line 990 "loop_inv.m"
              if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1017 "loop_inv.m"
                {
#line 1017 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__Reason_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
#line 1017 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__AuxGoalExpr_64;
#line 1017 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__SubGoal_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 2)));
#line 1017 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__AuxSubGoal_66;

#line 1020 "loop_inv.m"
                  {
#line 1020 "loop_inv.m"
                    transform_hlds__loop_inv__AuxSubGoal_66 = transform_hlds__loop_inv__gen_out_proc_goal_3_f_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__CallAux_6, transform_hlds__loop_inv__SubGoal_65);
                  }
#line 1021 "loop_inv.m"
                  {
#line 1021 "loop_inv.m"
                    transform_hlds__loop_inv__AuxGoalExpr_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "loop_inv.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1021 "loop_inv.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 1) = ((MR_Box) (transform_hlds__loop_inv__Reason_46));
#line 1021 "loop_inv.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxSubGoal_66));
#line 1021 "loop_inv.m"
                  }
#line 1022 "loop_inv.m"
                  {
#line 1022 "loop_inv.m"
                    transform_hlds__loop_inv__AuxGoal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1022 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_64));
#line 1022 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
#line 1022 "loop_inv.m"
                  }
#line 1017 "loop_inv.m"
                }
#line 990 "loop_inv.m"
              else
#line 990 "loop_inv.m"
                if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1031 "loop_inv.m"
                  {
#line 1032 "loop_inv.m"
                    {
#line 1032 "loop_inv.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.gen_out_proc_goal\'/3", (MR_String) "shorthand");
                    }
#line 1031 "loop_inv.m"
                  }
#line 990 "loop_inv.m"
                else
#line 990 "loop_inv.m"
                  if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1007 "loop_inv.m"
                    {
#line 1007 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__TypeCtorInfo_74_74 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 1007 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
#line 1007 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__CanFail_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 2)));
#line 1007 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__Cases_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 3)));
#line 1007 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__AuxCases_43;
#line 1007 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__V_58_58;
#line 1007 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__AuxGoalExpr_62;

#line 1008 "loop_inv.m"
                      {
#line 1008 "loop_inv.m"
                        transform_hlds__loop_inv__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1008 "loop_inv.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[3]));
#line 1008 "loop_inv.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_out_proc_goal_3_f_0_3));
#line 1008 "loop_inv.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1008 "loop_inv.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 3) = ((MR_Box) (transform_hlds__loop_inv__PPId_5));
#line 1008 "loop_inv.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 4) = ((MR_Box) (transform_hlds__loop_inv__CallAux_6));
#line 1008 "loop_inv.m"
                      }
#line 1008 "loop_inv.m"
                      {
#line 1008 "loop_inv.m"
                        transform_hlds__loop_inv__AuxCases_43 = mercury__list__map_2_f_0(transform_hlds__loop_inv__TypeCtorInfo_74_74, transform_hlds__loop_inv__TypeCtorInfo_74_74, transform_hlds__loop_inv__V_58_58, transform_hlds__loop_inv__Cases_42);
                      }
#line 1009 "loop_inv.m"
                      {
#line 1009 "loop_inv.m"
                        transform_hlds__loop_inv__AuxGoalExpr_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "loop_inv.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1009 "loop_inv.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 1) = ((MR_Box) (transform_hlds__loop_inv__Var_40));
#line 1009 "loop_inv.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 2) = ((MR_Box) (transform_hlds__loop_inv__CanFail_41));
#line 1009 "loop_inv.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 3) = ((MR_Box) (transform_hlds__loop_inv__AuxCases_43));
#line 1009 "loop_inv.m"
                      }
#line 1010 "loop_inv.m"
                      {
#line 1010 "loop_inv.m"
                        transform_hlds__loop_inv__AuxGoal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1010 "loop_inv.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_62));
#line 1010 "loop_inv.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
#line 1010 "loop_inv.m"
                      }
#line 1007 "loop_inv.m"
                    }
#line 990 "loop_inv.m"
                  else
#line 995 "loop_inv.m"
                    transform_hlds__loop_inv__AuxGoal_8 = transform_hlds__loop_inv__Goal_7;
#line 981 "loop_inv.m"
    return transform_hlds__loop_inv__AuxGoal_8;
#line 981 "loop_inv.m"
  }
#line 979 "loop_inv.m"
}

#line 945 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_8_p_0(
#line 945 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredProcId_9,
#line 945 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredInfo0_10,
#line 945 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ProcInfo0_11,
#line 945 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__ProcInfo_12,
#line 945 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__CallAux_13,
#line 945 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Body0_14,
#line 945 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo0_15,
#line 945 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__ModuleInfo_16)
#line 945 "loop_inv.m"
{
#line 950 "loop_inv.m"
  {
#line 950 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 950 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Body_17;
#line 950 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__PredId_18;
#line 950 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__ProcId_19;
#line 950 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__VarSet_20;
#line 950 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__VarTypes_21;
#line 950 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVars_22;
#line 950 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__RttiVarMaps_23;
#line 950 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ProcInfo1_24;
#line 950 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ProcInfo2_25;
#line 950 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ModuleInfo1_26;

#line 952 "loop_inv.m"
    {
#line 952 "loop_inv.m"
      transform_hlds__loop_inv__Body_17 = transform_hlds__loop_inv__gen_out_proc_goal_3_f_0(transform_hlds__loop_inv__PredProcId_9, transform_hlds__loop_inv__CallAux_13, transform_hlds__loop_inv__Body0_14);
    }
#line 955 "loop_inv.m"
    transform_hlds__loop_inv__PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PredProcId_9, (MR_Integer) 0)));
#line 955 "loop_inv.m"
    transform_hlds__loop_inv__ProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PredProcId_9, (MR_Integer) 1)));
#line 957 "loop_inv.m"
    {
#line 957 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__loop_inv__ProcInfo0_11, &transform_hlds__loop_inv__VarSet_20);
    }
#line 958 "loop_inv.m"
    {
#line 958 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__loop_inv__ProcInfo0_11, &transform_hlds__loop_inv__VarTypes_21);
    }
#line 959 "loop_inv.m"
    {
#line 959 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__loop_inv__ProcInfo0_11, &transform_hlds__loop_inv__HeadVars_22);
    }
#line 960 "loop_inv.m"
    {
#line 960 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__loop_inv__ProcInfo0_11, &transform_hlds__loop_inv__RttiVarMaps_23);
    }
#line 962 "loop_inv.m"
    {
#line 962 "loop_inv.m"
      hlds__hlds_pred__proc_info_set_body_7_p_0(transform_hlds__loop_inv__VarSet_20, transform_hlds__loop_inv__VarTypes_21, transform_hlds__loop_inv__HeadVars_22, transform_hlds__loop_inv__Body_17, transform_hlds__loop_inv__RttiVarMaps_23, transform_hlds__loop_inv__ProcInfo0_11, &transform_hlds__loop_inv__ProcInfo1_24);
    }
#line 965 "loop_inv.m"
    {
#line 965 "loop_inv.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__loop_inv__ProcInfo1_24, &transform_hlds__loop_inv__ProcInfo2_25);
    }
#line 967 "loop_inv.m"
    {
#line 967 "loop_inv.m"
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__loop_inv__ProcInfo2_25, transform_hlds__loop_inv__ProcInfo_12, transform_hlds__loop_inv__ModuleInfo0_15, &transform_hlds__loop_inv__ModuleInfo1_26);
    }
#line 970 "loop_inv.m"
    {
#line 970 "loop_inv.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__loop_inv__PredId_18, transform_hlds__loop_inv__ProcId_19, transform_hlds__loop_inv__PredInfo0_10, *transform_hlds__loop_inv__ProcInfo_12, transform_hlds__loop_inv__ModuleInfo1_26, transform_hlds__loop_inv__ModuleInfo_16);
#line 970 "loop_inv.m"
      return;
    }
#line 950 "loop_inv.m"
  }
#line 945 "loop_inv.m"
}

#line 588 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_1(
#line 588 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 588 "loop_inv.m"
{
#line 588 "loop_inv.m"
  {
#line 588 "loop_inv.m"
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 588 "loop_inv.m"
    MR_builtin_longjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__commit_0, 1);
#line 588 "loop_inv.m"
  }
#line 588 "loop_inv.m"
}

#line 589 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_3(
#line 589 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 589 "loop_inv.m"
{
#line 589 "loop_inv.m"
  {
#line 589 "loop_inv.m"
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 589 "loop_inv.m"
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__InvariantGoal_12 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__conv0_InvariantGoal_12);
#line 589 "loop_inv.m"
    {
#line 589 "loop_inv.m"
      transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_2(transform_hlds__loop_inv__env_ptr);
#line 589 "loop_inv.m"
      return;
    }
#line 589 "loop_inv.m"
  }
#line 589 "loop_inv.m"
}

#line 588 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_2(
#line 588 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 588 "loop_inv.m"
{
#line 588 "loop_inv.m"
  {
#line 588 "loop_inv.m"
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 588 "loop_inv.m"
    {
#line 474 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_15_15;
#line 474 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_17_17;

#line 474 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprX_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__InvariantGoal_12, (MR_Integer) 0)));
#line 474 "loop_inv.m"
      transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__InvariantGoal_12, (MR_Integer) 1)));
#line 474 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprY_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__Goal0_5, (MR_Integer) 0)));
#line 474 "loop_inv.m"
      transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__Goal0_5, (MR_Integer) 1)));
#line 476 "loop_inv.m"
      {
#line 476 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprX_14, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprY_16);
      }
#line 477 "loop_inv.m"
      if (!((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded))
#line 479 "loop_inv.m"
        {
#line 479 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__TypeInfo_22_33;
#line 479 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__PredId_18;
#line 479 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__ProcId_19;
#line 479 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__Args_20;
#line 479 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_27_27;
#line 479 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__V_28_28;
#line 479 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_29_29;
#line 478 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___BuiltinX_21;
#line 478 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___ContextX_22;
#line 478 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___SymNameX_23;
#line 480 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___BuiltinY_24;
#line 480 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___ContextY_25;
#line 480 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___SymNameY_26;

#line 478 "loop_inv.m"
          (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprX_14)) == (MR_mktag((MR_Integer) 2)));
#line 478 "loop_inv.m"
          if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded)
#line 478 "loop_inv.m"
            {
#line 478 "loop_inv.m"
              {
#line 478 "loop_inv.m"
                transform_hlds__loop_inv__PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprX_14, (MR_Integer) 0)));
#line 478 "loop_inv.m"
                transform_hlds__loop_inv__ProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprX_14, (MR_Integer) 1)));
#line 478 "loop_inv.m"
                transform_hlds__loop_inv__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprX_14, (MR_Integer) 2)));
#line 478 "loop_inv.m"
                transform_hlds__loop_inv___BuiltinX_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprX_14, (MR_Integer) 3)));
#line 478 "loop_inv.m"
                transform_hlds__loop_inv___ContextX_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprX_14, (MR_Integer) 4)));
#line 478 "loop_inv.m"
                transform_hlds__loop_inv___SymNameX_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprX_14, (MR_Integer) 5)));
#line 478 "loop_inv.m"
              }
#line 479 "loop_inv.m"
              {
#line 480 "loop_inv.m"
                (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprY_16)) == (MR_mktag((MR_Integer) 2)));
#line 480 "loop_inv.m"
                if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded)
#line 480 "loop_inv.m"
                  {
#line 480 "loop_inv.m"
                    {
#line 480 "loop_inv.m"
                      transform_hlds__loop_inv__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprY_16, (MR_Integer) 0)));
#line 480 "loop_inv.m"
                      transform_hlds__loop_inv__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprY_16, (MR_Integer) 1)));
#line 480 "loop_inv.m"
                      transform_hlds__loop_inv__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprY_16, (MR_Integer) 2)));
#line 480 "loop_inv.m"
                      transform_hlds__loop_inv___BuiltinY_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprY_16, (MR_Integer) 3)));
#line 480 "loop_inv.m"
                      transform_hlds__loop_inv___ContextY_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprY_16, (MR_Integer) 4)));
#line 480 "loop_inv.m"
                      transform_hlds__loop_inv___SymNameY_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprY_16, (MR_Integer) 5)));
#line 480 "loop_inv.m"
                    }
#line 479 "loop_inv.m"
                    {
#line 480 "loop_inv.m"
                      {
#line 480 "loop_inv.m"
                        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__loop_inv__PredId_18, transform_hlds__loop_inv__V_27_27);
                      }
#line 479 "loop_inv.m"
                      if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded)
#line 479 "loop_inv.m"
                        {
#line 480 "loop_inv.m"
                          (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded = (transform_hlds__loop_inv__ProcId_19 == transform_hlds__loop_inv__V_28_28);
#line 479 "loop_inv.m"
                          if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded)
#line 479 "loop_inv.m"
                            {
#line 6333 "transform_hlds.loop_inv.c"
                              transform_hlds__loop_inv__TypeInfo_22_33 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4];
#line 480 "loop_inv.m"
                              {
#line 480 "loop_inv.m"
                                (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__loop_inv__TypeInfo_22_33, ((MR_Box) (transform_hlds__loop_inv__Args_20)), ((MR_Box) (transform_hlds__loop_inv__V_29_29)));
                              }
#line 479 "loop_inv.m"
                            }
#line 479 "loop_inv.m"
                        }
#line 479 "loop_inv.m"
                    }
#line 480 "loop_inv.m"
                  }
#line 479 "loop_inv.m"
              }
#line 478 "loop_inv.m"
            }
#line 479 "loop_inv.m"
        }
#line 477 "loop_inv.m"
      if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded)
#line 477 "loop_inv.m"
        {
#line 477 "loop_inv.m"
          transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_1(transform_hlds__loop_inv__env_ptr);
#line 477 "loop_inv.m"
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
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_4(
#line 588 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 588 "loop_inv.m"
{
#line 588 "loop_inv.m"
  {
#line 588 "loop_inv.m"
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 588 "loop_inv.m"
    if (MR_builtin_setjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__commit_0) == 0)
#line 588 "loop_inv.m"
      {
#line 588 "loop_inv.m"
        {
#line 589 "loop_inv.m"
          {
#line 589 "loop_inv.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__conv0_InvariantGoal_12, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__V_6_6, transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_3, transform_hlds__loop_inv__env_ptr);
          }
#line 588 "loop_inv.m"
        }
#line 588 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded = MR_FALSE;
#line 588 "loop_inv.m"
      }
#line 588 "loop_inv.m"
    else
#line 588 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded = MR_TRUE;
#line 588 "loop_inv.m"
  }
#line 588 "loop_inv.m"
}

#line 930 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0(
#line 930 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Info_4,
#line 930 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal0_5)
#line 930 "loop_inv.m"
{
#line 930 "loop_inv.m"
  {
#line 930 "loop_inv.m"
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0_s transform_hlds__loop_inv__env;

#line 930 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__Goal0_5 = transform_hlds__loop_inv__Goal0_5;
#line 933 "loop_inv.m"
    {
#line 933 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__HeadVar__3_3;
#line 934 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 0)));
#line 934 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_8_8;
#line 934 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_9_9;

#line 934 "loop_inv.m"
      (transform_hlds__loop_inv__env).transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 1)));
#line 934 "loop_inv.m"
      transform_hlds__loop_inv__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 2)));
#line 934 "loop_inv.m"
      transform_hlds__loop_inv__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 3)));
#line 588 "loop_inv.m"
      {
#line 588 "loop_inv.m"
        transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_4(&transform_hlds__loop_inv__env);
      }
#line 933 "loop_inv.m"
      if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded)
#line 933 "loop_inv.m"
        {
#line 933 "loop_inv.m"
          return transform_hlds__loop_inv__HeadVar__3_3 = hlds__hlds_goal__true_goal_0_f_0();
        }
#line 933 "loop_inv.m"
      else
#line 933 "loop_inv.m"
        transform_hlds__loop_inv__HeadVar__3_3 = (transform_hlds__loop_inv__env).transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__Goal0_5;
#line 933 "loop_inv.m"
      return transform_hlds__loop_inv__HeadVar__3_3;
#line 933 "loop_inv.m"
    }
#line 930 "loop_inv.m"
  }
#line 930 "loop_inv.m"
}

#line 921 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_case_2_f_0(
#line 921 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Info_4,
#line 921 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Case_5)
#line 921 "loop_inv.m"
{
#line 923 "loop_inv.m"
  {
#line 923 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 923 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxCase_6;
#line 923 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__MainConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_5, (MR_Integer) 0)));
#line 923 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__OtherConsIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_5, (MR_Integer) 1)));
#line 923 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_5, (MR_Integer) 2)));
#line 923 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxGoal_10;

#line 925 "loop_inv.m"
    {
#line 925 "loop_inv.m"
      transform_hlds__loop_inv__AuxGoal_10 = transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Goal_9);
    }
#line 926 "loop_inv.m"
    {
#line 926 "loop_inv.m"
      transform_hlds__loop_inv__AuxCase_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 926 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxCase_6, 0) = ((MR_Box) (transform_hlds__loop_inv__MainConsId_7));
#line 926 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxCase_6, 1) = ((MR_Box) (transform_hlds__loop_inv__OtherConsIds_8));
#line 926 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxCase_6, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxGoal_10));
#line 926 "loop_inv.m"
    }
#line 923 "loop_inv.m"
    return transform_hlds__loop_inv__AuxCase_6;
#line 923 "loop_inv.m"
  }
#line 921 "loop_inv.m"
}

#line 894 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0_3(
#line 894 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 894 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 894 "loop_inv.m"
{
#line 894 "loop_inv.m"
  {
#line 894 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 894 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 894 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv2_AuxCase_6;

#line 894 "loop_inv.m"
    {
#line 894 "loop_inv.m"
      transform_hlds__loop_inv__conv2_AuxCase_6 = transform_hlds__loop_inv__gen_aux_proc_case_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 894 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv2_AuxCase_6));
#line 894 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 894 "loop_inv.m"
  }
#line 894 "loop_inv.m"
}

#line 889 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0_2(
#line 889 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 889 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 889 "loop_inv.m"
{
#line 889 "loop_inv.m"
  {
#line 889 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 889 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 889 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv1_AuxGoal_6;

#line 889 "loop_inv.m"
    {
#line 889 "loop_inv.m"
      transform_hlds__loop_inv__conv1_AuxGoal_6 = transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 889 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv1_AuxGoal_6));
#line 889 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 889 "loop_inv.m"
  }
#line 889 "loop_inv.m"
}

#line 884 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0_1(
#line 884 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 884 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 884 "loop_inv.m"
{
#line 884 "loop_inv.m"
  {
#line 884 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 884 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 884 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_AuxGoal_6;

#line 884 "loop_inv.m"
    {
#line 884 "loop_inv.m"
      transform_hlds__loop_inv__conv0_AuxGoal_6 = transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 884 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv0_AuxGoal_6));
#line 884 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 884 "loop_inv.m"
  }
#line 884 "loop_inv.m"
}

#line 865 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0(
#line 865 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Info_4,
#line 865 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5)
#line 865 "loop_inv.m"
{
#line 867 "loop_inv.m"
  {
#line 867 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 867 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxGoal_6;
#line 867 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 0)));
#line 867 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 1)));

#line 876 "loop_inv.m"
    if (((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 0))))
#line 898 "loop_inv.m"
      {
#line 898 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__SubGoal_42 = (MR_Word) MR_body(((MR_Word) transform_hlds__loop_inv__GoalExpr_7), (MR_Integer) 0);
#line 898 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__AuxSubGoal_43;
#line 898 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__AuxGoalExpr_63;

#line 899 "loop_inv.m"
        {
#line 899 "loop_inv.m"
          transform_hlds__loop_inv__AuxSubGoal_43 = transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__SubGoal_42);
        }
#line 900 "loop_inv.m"
        transform_hlds__loop_inv__AuxGoalExpr_63 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__loop_inv__AuxSubGoal_43);
#line 901 "loop_inv.m"
        {
#line 901 "loop_inv.m"
          transform_hlds__loop_inv__AuxGoal_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 901 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_63));
#line 901 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
#line 901 "loop_inv.m"
        }
#line 898 "loop_inv.m"
      }
#line 876 "loop_inv.m"
    else
#line 876 "loop_inv.m"
      if (((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 2))))
#line 870 "loop_inv.m"
        {
#line 870 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
#line 870 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 870 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 870 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 870 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 870 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));
#line 871 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_59_59;
#line 871 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 2)));
#line 871 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 0)));
#line 871 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 1)));
#line 871 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 3)));

#line 871 "loop_inv.m"
          {
#line 871 "loop_inv.m"
            transform_hlds__loop_inv__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 871 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 0) = ((MR_Box) (transform_hlds__loop_inv__PredId_9));
#line 871 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 1) = ((MR_Box) (transform_hlds__loop_inv__ProcId_10));
#line 871 "loop_inv.m"
          }
#line 871 "loop_inv.m"
          {
#line 871 "loop_inv.m"
            transform_hlds__loop_inv__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__loop_inv__V_59_59, transform_hlds__loop_inv__V_83_83);
          }
#line 873 "loop_inv.m"
          if (transform_hlds__loop_inv__succeeded)
#line 872 "loop_inv.m"
            {
#line 872 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 3)));
#line 872 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 0)));
#line 872 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 1)));
#line 872 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 2)));

#line 872 "loop_inv.m"
              {
#line 872 "loop_inv.m"
                return transform_hlds__loop_inv__AuxGoal_6 = transform_hlds__loop_inv__gen_aux_call_2_f_0(transform_hlds__loop_inv__V_60_60, transform_hlds__loop_inv__Goal_5);
              }
#line 872 "loop_inv.m"
            }
#line 873 "loop_inv.m"
          else
#line 874 "loop_inv.m"
            {
#line 874 "loop_inv.m"
              return transform_hlds__loop_inv__AuxGoal_6 = transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Goal_5);
            }
#line 870 "loop_inv.m"
        }
#line 876 "loop_inv.m"
      else
#line 876 "loop_inv.m"
        if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 883 "loop_inv.m"
          {
#line 883 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__TypeCtorInfo_74_74 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 883 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__ConjType_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 883 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Conjuncts_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 883 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__AuxConjuncts_34;
#line 883 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__AuxGoalExpr_35;
#line 883 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_58_58;

#line 884 "loop_inv.m"
            {
#line 884 "loop_inv.m"
              transform_hlds__loop_inv__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 884 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_6[3]));
#line 884 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0_1));
#line 884 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 884 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 3) = ((MR_Box) (transform_hlds__loop_inv__Info_4));
#line 884 "loop_inv.m"
            }
#line 884 "loop_inv.m"
            {
#line 884 "loop_inv.m"
              transform_hlds__loop_inv__AuxConjuncts_34 = mercury__list__map_2_f_0(transform_hlds__loop_inv__TypeCtorInfo_74_74, transform_hlds__loop_inv__TypeCtorInfo_74_74, transform_hlds__loop_inv__V_58_58, transform_hlds__loop_inv__Conjuncts_33);
            }
#line 885 "loop_inv.m"
            {
#line 885 "loop_inv.m"
              transform_hlds__loop_inv__AuxGoalExpr_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 885 "loop_inv.m"
              MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 885 "loop_inv.m"
              MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_35, 1) = ((MR_Box) (transform_hlds__loop_inv__ConjType_32));
#line 885 "loop_inv.m"
              MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_35, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxConjuncts_34));
#line 885 "loop_inv.m"
            }
#line 886 "loop_inv.m"
            {
#line 886 "loop_inv.m"
              transform_hlds__loop_inv__AuxGoal_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 886 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_35));
#line 886 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
#line 886 "loop_inv.m"
            }
#line 883 "loop_inv.m"
          }
#line 876 "loop_inv.m"
        else
#line 876 "loop_inv.m"
          if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 888 "loop_inv.m"
            {
#line 888 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeCtorInfo_77_77 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 888 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Disjuncts_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 888 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxDisjuncts_37;
#line 888 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_57_57;
#line 888 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_61;

#line 889 "loop_inv.m"
              {
#line 889 "loop_inv.m"
                transform_hlds__loop_inv__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 889 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_6[3]));
#line 889 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0_2));
#line 889 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 889 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 3) = ((MR_Box) (transform_hlds__loop_inv__Info_4));
#line 889 "loop_inv.m"
              }
#line 889 "loop_inv.m"
              {
#line 889 "loop_inv.m"
                transform_hlds__loop_inv__AuxDisjuncts_37 = mercury__list__map_2_f_0(transform_hlds__loop_inv__TypeCtorInfo_77_77, transform_hlds__loop_inv__TypeCtorInfo_77_77, transform_hlds__loop_inv__V_57_57, transform_hlds__loop_inv__Disjuncts_36);
              }
#line 890 "loop_inv.m"
              {
#line 890 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoalExpr_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 890 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 890 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_61, 1) = ((MR_Box) (transform_hlds__loop_inv__AuxDisjuncts_37));
#line 890 "loop_inv.m"
              }
#line 891 "loop_inv.m"
              {
#line 891 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoal_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 891 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_61));
#line 891 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
#line 891 "loop_inv.m"
              }
#line 888 "loop_inv.m"
            }
#line 876 "loop_inv.m"
          else
#line 876 "loop_inv.m"
            if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 910 "loop_inv.m"
              {
#line 910 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__Vars_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 910 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__Cond_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 910 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__Then_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 910 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__Else_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 910 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__AuxCond_49;
#line 910 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__AuxThen_50;
#line 910 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__AuxElse_51;
#line 910 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__AuxGoalExpr_67;

#line 911 "loop_inv.m"
                {
#line 911 "loop_inv.m"
                  transform_hlds__loop_inv__AuxCond_49 = transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Cond_46);
                }
#line 912 "loop_inv.m"
                {
#line 912 "loop_inv.m"
                  transform_hlds__loop_inv__AuxThen_50 = transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Then_47);
                }
#line 913 "loop_inv.m"
                {
#line 913 "loop_inv.m"
                  transform_hlds__loop_inv__AuxElse_51 = transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Else_48);
                }
#line 914 "loop_inv.m"
                {
#line 914 "loop_inv.m"
                  transform_hlds__loop_inv__AuxGoalExpr_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 914 "loop_inv.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 914 "loop_inv.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 1) = ((MR_Box) (transform_hlds__loop_inv__Vars_45));
#line 914 "loop_inv.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxCond_49));
#line 914 "loop_inv.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 3) = ((MR_Box) (transform_hlds__loop_inv__AuxThen_50));
#line 914 "loop_inv.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 4) = ((MR_Box) (transform_hlds__loop_inv__AuxElse_51));
#line 914 "loop_inv.m"
                }
#line 915 "loop_inv.m"
                {
#line 915 "loop_inv.m"
                  transform_hlds__loop_inv__AuxGoal_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 915 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_67));
#line 915 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
#line 915 "loop_inv.m"
                }
#line 910 "loop_inv.m"
              }
#line 876 "loop_inv.m"
            else
#line 876 "loop_inv.m"
              if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 903 "loop_inv.m"
                {
#line 903 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__Reason_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 903 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__AuxGoalExpr_64;
#line 903 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__SubGoal_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 903 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__AuxSubGoal_66;

#line 906 "loop_inv.m"
                  {
#line 906 "loop_inv.m"
                    transform_hlds__loop_inv__AuxSubGoal_66 = transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__SubGoal_65);
                  }
#line 907 "loop_inv.m"
                  {
#line 907 "loop_inv.m"
                    transform_hlds__loop_inv__AuxGoalExpr_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 907 "loop_inv.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 907 "loop_inv.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 1) = ((MR_Box) (transform_hlds__loop_inv__Reason_44));
#line 907 "loop_inv.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxSubGoal_66));
#line 907 "loop_inv.m"
                  }
#line 908 "loop_inv.m"
                  {
#line 908 "loop_inv.m"
                    transform_hlds__loop_inv__AuxGoal_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 908 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_64));
#line 908 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
#line 908 "loop_inv.m"
                  }
#line 903 "loop_inv.m"
                }
#line 876 "loop_inv.m"
              else
#line 876 "loop_inv.m"
                if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 917 "loop_inv.m"
                  {
#line 918 "loop_inv.m"
                    {
#line 918 "loop_inv.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.gen_aux_proc_goal\'/2", (MR_String) "shorthand");
                    }
#line 917 "loop_inv.m"
                  }
#line 876 "loop_inv.m"
                else
#line 876 "loop_inv.m"
                  if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 893 "loop_inv.m"
                    {
#line 893 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__TypeCtorInfo_80_80 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 893 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 893 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__CanFail_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 893 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__Cases_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 893 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__AuxCases_41;
#line 893 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__V_56_56;
#line 893 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__AuxGoalExpr_62;

#line 894 "loop_inv.m"
                      {
#line 894 "loop_inv.m"
                        transform_hlds__loop_inv__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 894 "loop_inv.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_56_56, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_6[4]));
#line 894 "loop_inv.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_56_56, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0_3));
#line 894 "loop_inv.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 894 "loop_inv.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_56_56, 3) = ((MR_Box) (transform_hlds__loop_inv__Info_4));
#line 894 "loop_inv.m"
                      }
#line 894 "loop_inv.m"
                      {
#line 894 "loop_inv.m"
                        transform_hlds__loop_inv__AuxCases_41 = mercury__list__map_2_f_0(transform_hlds__loop_inv__TypeCtorInfo_80_80, transform_hlds__loop_inv__TypeCtorInfo_80_80, transform_hlds__loop_inv__V_56_56, transform_hlds__loop_inv__Cases_40);
                      }
#line 895 "loop_inv.m"
                      {
#line 895 "loop_inv.m"
                        transform_hlds__loop_inv__AuxGoalExpr_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 895 "loop_inv.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 895 "loop_inv.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 1) = ((MR_Box) (transform_hlds__loop_inv__Var_38));
#line 895 "loop_inv.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 2) = ((MR_Box) (transform_hlds__loop_inv__CanFail_39));
#line 895 "loop_inv.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 3) = ((MR_Box) (transform_hlds__loop_inv__AuxCases_41));
#line 895 "loop_inv.m"
                      }
#line 896 "loop_inv.m"
                      {
#line 896 "loop_inv.m"
                        transform_hlds__loop_inv__AuxGoal_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 896 "loop_inv.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_62));
#line 896 "loop_inv.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
#line 896 "loop_inv.m"
                      }
#line 893 "loop_inv.m"
                    }
#line 876 "loop_inv.m"
                  else
#line 881 "loop_inv.m"
                    {
#line 881 "loop_inv.m"
                      return transform_hlds__loop_inv__AuxGoal_6 = transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Goal_5);
                    }
#line 867 "loop_inv.m"
    return transform_hlds__loop_inv__AuxGoal_6;
#line 867 "loop_inv.m"
  }
#line 865 "loop_inv.m"
}

#line 842 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_9_p_0(
#line 842 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InvGoals_10,
#line 842 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredProcId_11,
#line 842 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__AuxPredProcId_12,
#line 842 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__CallAux_13,
#line 842 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Body_14,
#line 842 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__AuxPredInfo_15,
#line 842 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_0_22,
#line 842 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_23,
#line 842 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_24)
#line 842 "loop_inv.m"
{
#line 847 "loop_inv.m"
  {
#line 847 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 847 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GapInfo_18;
#line 847 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxBody_19;
#line 847 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxPredId_20;
#line 847 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__AuxProcId_21;
#line 847 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_25_25;
#line 847 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_27_27;
#line 847 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_29_29;
#line 847 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_30_30;

#line 849 "loop_inv.m"
    {
#line 849 "loop_inv.m"
      transform_hlds__loop_inv__GapInfo_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 849 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GapInfo_18, 0) = ((MR_Box) (transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_23));
#line 849 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GapInfo_18, 1) = ((MR_Box) (transform_hlds__loop_inv__InvGoals_10));
#line 849 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GapInfo_18, 2) = ((MR_Box) (transform_hlds__loop_inv__PredProcId_11));
#line 849 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GapInfo_18, 3) = ((MR_Box) (transform_hlds__loop_inv__CallAux_13));
#line 849 "loop_inv.m"
    }
#line 850 "loop_inv.m"
    {
#line 850 "loop_inv.m"
      transform_hlds__loop_inv__AuxBody_19 = transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0(transform_hlds__loop_inv__GapInfo_18, transform_hlds__loop_inv__Body_14);
    }
#line 853 "loop_inv.m"
    transform_hlds__loop_inv__AuxPredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxPredProcId_12, (MR_Integer) 0)));
#line 853 "loop_inv.m"
    transform_hlds__loop_inv__AuxProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxPredProcId_12, (MR_Integer) 1)));
#line 854 "loop_inv.m"
    {
#line 854 "loop_inv.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__loop_inv__AuxBody_19, transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_0_22, &transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_25_25);
    }
#line 856 "loop_inv.m"
    {
#line 856 "loop_inv.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_25_25, &transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_27_27);
    }
#line 857 "loop_inv.m"
    {
#line 857 "loop_inv.m"
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_27_27, &transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_29_29, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_23, &transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_30_30);
    }
#line 860 "loop_inv.m"
    {
#line 860 "loop_inv.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__loop_inv__AuxPredId_20, transform_hlds__loop_inv__AuxProcId_21, transform_hlds__loop_inv__AuxPredInfo_15, transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_29_29, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_30_30, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_24);
#line 860 "loop_inv.m"
      return;
    }
#line 847 "loop_inv.m"
  }
#line 842 "loop_inv.m"
}

#line 750 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__create_aux_pred_10_p_0(
#line 750 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredProcId_11,
#line 750 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVars_12,
#line 750 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ComputedInvArgs_13,
#line 750 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InitialAuxInstMap_14,
#line 750 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxPredProcId_15,
#line 750 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__CallAux_16,
#line 750 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxPredInfo_17,
#line 750 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxProcInfo_18,
#line 750 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo0_19,
#line 750 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__ModuleInfo_20)
#line 750 "loop_inv.m"
{
#line 756 "loop_inv.m"
  {
#line 756 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 756 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PredProcId_11, (MR_Integer) 0)));
#line 756 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PredProcId_11, (MR_Integer) 1)));
#line 756 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxHeadVars_23;
#line 756 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__PredInfo_24;
#line 756 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ProcInfo_25;
#line 756 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Goal_26;
#line 756 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalInfo_28;
#line 756 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TVarSet_29;
#line 756 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__VarTypes_30;
#line 756 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ClassContext_31;
#line 756 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__RttiVarMaps_32;
#line 756 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__VarSet_33;
#line 756 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InstVarSet_34;
#line 756 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Markers_35;
#line 756 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__OrigOrigin_36;
#line 756 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__VarNameRemap_37;
#line 756 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__PredModule_38;
#line 756 "loop_inv.m"
    MR_String transform_hlds__loop_inv__PredName_39;
#line 756 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__PredOrFunc_40;
#line 756 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Context_41;
#line 756 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__Line_42;
#line 756 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__Counter_43;
#line 756 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxPredSymName0_44;
#line 756 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__ProcNo_45;
#line 756 "loop_inv.m"
    MR_String transform_hlds__loop_inv__Suffix_46;
#line 756 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxPredSymName_47;
#line 756 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Origin_48;
#line 756 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxPredId_50;
#line 756 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__AuxProcId_51;
#line 756 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_58_58;
#line 756 "loop_inv.m"
    MR_String transform_hlds__loop_inv__V_61_61;
#line 764 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___GoalExpr_27;
#line 795 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___ExtraArgs_49;

#line 759 "loop_inv.m"
    {
#line 759 "loop_inv.m"
      transform_hlds__loop_inv__AuxHeadVars_23 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__HeadVars_12, transform_hlds__loop_inv__ComputedInvArgs_13);
    }
#line 761 "loop_inv.m"
    {
#line 761 "loop_inv.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__loop_inv__ModuleInfo0_19, transform_hlds__loop_inv__PredId_21, transform_hlds__loop_inv__ProcId_22, &transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__ProcInfo_25);
    }
#line 764 "loop_inv.m"
    {
#line 764 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__loop_inv__ProcInfo_25, &transform_hlds__loop_inv__Goal_26);
    }
#line 764 "loop_inv.m"
    transform_hlds__loop_inv___GoalExpr_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_26, (MR_Integer) 0)));
#line 764 "loop_inv.m"
    transform_hlds__loop_inv__GoalInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_26, (MR_Integer) 1)));
#line 765 "loop_inv.m"
    {
#line 765 "loop_inv.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__TVarSet_29);
    }
#line 766 "loop_inv.m"
    {
#line 766 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__loop_inv__ProcInfo_25, &transform_hlds__loop_inv__VarTypes_30);
    }
#line 767 "loop_inv.m"
    {
#line 767 "loop_inv.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__ClassContext_31);
    }
#line 768 "loop_inv.m"
    {
#line 768 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__loop_inv__ProcInfo_25, &transform_hlds__loop_inv__RttiVarMaps_32);
    }
#line 769 "loop_inv.m"
    {
#line 769 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__loop_inv__ProcInfo_25, &transform_hlds__loop_inv__VarSet_33);
    }
#line 770 "loop_inv.m"
    {
#line 770 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__loop_inv__ProcInfo_25, &transform_hlds__loop_inv__InstVarSet_34);
    }
#line 771 "loop_inv.m"
    {
#line 771 "loop_inv.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__Markers_35);
    }
#line 772 "loop_inv.m"
    {
#line 772 "loop_inv.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__OrigOrigin_36);
    }
#line 773 "loop_inv.m"
    {
#line 773 "loop_inv.m"
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__VarNameRemap_37);
    }
#line 775 "loop_inv.m"
    {
#line 775 "loop_inv.m"
      transform_hlds__loop_inv__PredModule_38 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__loop_inv__PredInfo_24);
    }
#line 776 "loop_inv.m"
    {
#line 776 "loop_inv.m"
      transform_hlds__loop_inv__PredName_39 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__loop_inv__PredInfo_24);
    }
#line 777 "loop_inv.m"
    {
#line 777 "loop_inv.m"
      transform_hlds__loop_inv__PredOrFunc_40 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__loop_inv__PredInfo_24);
    }
#line 778 "loop_inv.m"
    {
#line 778 "loop_inv.m"
      transform_hlds__loop_inv__Context_41 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__loop_inv__GoalInfo_28);
    }
#line 779 "loop_inv.m"
    {
#line 779 "loop_inv.m"
      mercury__term__context_line_2_p_0(transform_hlds__loop_inv__Context_41, &transform_hlds__loop_inv__Line_42);
    }
#line 780 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__Line_42 == (MR_Integer) 0);
#line 784 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 783 "loop_inv.m"
      {
#line 783 "loop_inv.m"
        transform_hlds__loop_inv__Counter_43 = hlds__hlds_pred__pred_id_to_int_1_f_0(transform_hlds__loop_inv__PredId_21);
      }
#line 784 "loop_inv.m"
    else
#line 785 "loop_inv.m"
      transform_hlds__loop_inv__Counter_43 = (MR_Integer) 1;
#line 787 "loop_inv.m"
    {
#line 787 "loop_inv.m"
      parse_tree__prog_util__make_pred_name_with_context_7_p_0(transform_hlds__loop_inv__PredModule_38, (MR_String) "loop_inv", transform_hlds__loop_inv__PredOrFunc_40, transform_hlds__loop_inv__PredName_39, transform_hlds__loop_inv__Line_42, transform_hlds__loop_inv__Counter_43, &transform_hlds__loop_inv__AuxPredSymName0_44);
    }
#line 789 "loop_inv.m"
    {
#line 789 "loop_inv.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__loop_inv__ProcId_22, &transform_hlds__loop_inv__ProcNo_45);
    }
#line 7358 "transform_hlds.loop_inv.c"
    {
#line 7360 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv__V_61_61 = mercury__string__int_to_string_1_f_0(transform_hlds__loop_inv__ProcNo_45);
    }
#line 7363 "transform_hlds.loop_inv.c"
    {
#line 7365 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv__Suffix_46 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__loop_inv__V_61_61);
    }
#line 791 "loop_inv.m"
    {
#line 791 "loop_inv.m"
      mdbcomp__prim_data__add_sym_name_suffix_3_p_0(transform_hlds__loop_inv__AuxPredSymName0_44, transform_hlds__loop_inv__Suffix_46, &transform_hlds__loop_inv__AuxPredSymName_47);
    }
#line 793 "loop_inv.m"
    {
#line 793 "loop_inv.m"
      transform_hlds__loop_inv__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "loop_inv.m"
      MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 793 "loop_inv.m"
      MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__V_58_58, 1) = ((MR_Box) (transform_hlds__loop_inv__ProcNo_45));
#line 793 "loop_inv.m"
    }
#line 793 "loop_inv.m"
    {
#line 793 "loop_inv.m"
      transform_hlds__loop_inv__Origin_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 793 "loop_inv.m"
      MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Origin_48, 0) = ((MR_Box) (transform_hlds__loop_inv__V_58_58));
#line 793 "loop_inv.m"
      MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Origin_48, 1) = ((MR_Box) (transform_hlds__loop_inv__OrigOrigin_36));
#line 793 "loop_inv.m"
      MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Origin_48, 2) = ((MR_Box) (transform_hlds__loop_inv__PredId_21));
#line 793 "loop_inv.m"
    }
#line 795 "loop_inv.m"
    {
#line 795 "loop_inv.m"
      hlds__hlds_pred__define_new_pred_19_p_0(transform_hlds__loop_inv__Origin_48, transform_hlds__loop_inv__Goal_26, transform_hlds__loop_inv__CallAux_16, transform_hlds__loop_inv__AuxHeadVars_23, &transform_hlds__loop_inv___ExtraArgs_49, transform_hlds__loop_inv__InitialAuxInstMap_14, transform_hlds__loop_inv__AuxPredSymName_47, transform_hlds__loop_inv__TVarSet_29, transform_hlds__loop_inv__VarTypes_30, transform_hlds__loop_inv__ClassContext_31, transform_hlds__loop_inv__RttiVarMaps_32, transform_hlds__loop_inv__VarSet_33, transform_hlds__loop_inv__InstVarSet_34, transform_hlds__loop_inv__Markers_35, (MR_Integer) 1, transform_hlds__loop_inv__VarNameRemap_37, transform_hlds__loop_inv__ModuleInfo0_19, transform_hlds__loop_inv__ModuleInfo_20, transform_hlds__loop_inv__AuxPredProcId_15);
    }
#line 825 "loop_inv.m"
    transform_hlds__loop_inv__AuxPredId_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__loop_inv__AuxPredProcId_15, (MR_Integer) 0)));
#line 825 "loop_inv.m"
    transform_hlds__loop_inv__AuxProcId_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *transform_hlds__loop_inv__AuxPredProcId_15, (MR_Integer) 1)));
#line 826 "loop_inv.m"
    {
#line 826 "loop_inv.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(*transform_hlds__loop_inv__ModuleInfo_20, transform_hlds__loop_inv__AuxPredId_50, transform_hlds__loop_inv__AuxProcId_51, transform_hlds__loop_inv__AuxPredInfo_17, transform_hlds__loop_inv__AuxProcInfo_18);
#line 826 "loop_inv.m"
      return;
    }
#line 756 "loop_inv.m"
  }
#line 750 "loop_inv.m"
}

#line 742 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0_1(
#line 742 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 742 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 742 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
#line 742 "loop_inv.m"
{
#line 742 "loop_inv.m"
  {
#line 742 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_3;
#line 742 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 742 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__3_14;

#line 742 "loop_inv.m"
    {
#line 742 "loop_inv.m"
      transform_hlds__loop_inv__conv0_HeadVar__3_14 = transform_hlds__loop_inv__IntroducedFrom__func__compute_initial_aux_instmap__742__1_2_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
#line 742 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__3_14));
#line 742 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_3;
#line 742 "loop_inv.m"
  }
#line 742 "loop_inv.m"
}

#line 739 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0(
#line 739 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Gs_4,
#line 739 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__IM_5)
#line 739 "loop_inv.m"
{
#line 741 "loop_inv.m"
  {
#line 741 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 741 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__3_3;
#line 741 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__conv1_HeadVar__3_3;

#line 741 "loop_inv.m"
    {
#line 741 "loop_inv.m"
      transform_hlds__loop_inv__conv1_HeadVar__3_3 = mercury__list__foldl_3_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[4], transform_hlds__loop_inv__Gs_4, ((MR_Box) (transform_hlds__loop_inv__IM_5)));
    }
#line 741 "loop_inv.m"
    transform_hlds__loop_inv__HeadVar__3_3 = ((MR_Word) transform_hlds__loop_inv__conv1_HeadVar__3_3);
#line 741 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__3_3;
#line 741 "loop_inv.m"
  }
#line 739 "loop_inv.m"
}

#line 724 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__add_output_4_p_0(
#line 724 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UniquelyUsedVars_5,
#line 724 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__X_6,
#line 724 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_8,
#line 724 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_InvVars_9)
#line 724 "loop_inv.m"
{
#line 733 "loop_inv.m"
  {
#line 733 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 730 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeInfo_12_12;

#line 729 "loop_inv.m"
    {
#line 729 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], ((MR_Box) (transform_hlds__loop_inv__X_6)), transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_8);
    }
#line 729 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 729 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 729 "loop_inv.m"
      {
#line 7513 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeInfo_12_12 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 730 "loop_inv.m"
        {
#line 730 "loop_inv.m"
          transform_hlds__loop_inv__succeeded = mercury__list__member_2_p_0(transform_hlds__loop_inv__TypeInfo_12_12, ((MR_Box) (transform_hlds__loop_inv__X_6)), transform_hlds__loop_inv__UniquelyUsedVars_5);
        }
#line 730 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 729 "loop_inv.m"
      }
#line 733 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 732 "loop_inv.m"
      {
#line 732 "loop_inv.m"
        MR_Word base;
#line 732 "loop_inv.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "loop_inv.m"
        *transform_hlds__loop_inv__STATE_VARIABLE_InvVars_9 = base;
#line 732 "loop_inv.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__loop_inv__X_6));
#line 732 "loop_inv.m"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_8));
#line 732 "loop_inv.m"
      }
#line 733 "loop_inv.m"
    else
#line 732 "loop_inv.m"
      *transform_hlds__loop_inv__STATE_VARIABLE_InvVars_9 = transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_8;
#line 733 "loop_inv.m"
  }
#line 724 "loop_inv.m"
}

#line 722 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__add_outputs_5_p_0_1(
#line 722 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 722 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 722 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 722 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 722 "loop_inv.m"
{
#line 722 "loop_inv.m"
  {
#line 722 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 722 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_STATE_VARIABLE_InvVars_9;

#line 722 "loop_inv.m"
    {
#line 722 "loop_inv.m"
      transform_hlds__loop_inv__add_output_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv0_STATE_VARIABLE_InvVars_9);
    }
#line 722 "loop_inv.m"
    *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_STATE_VARIABLE_InvVars_9));
#line 722 "loop_inv.m"
  }
#line 722 "loop_inv.m"
}

#line 718 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__add_outputs_5_p_0(
#line 718 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_6,
#line 718 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UUVs_7,
#line 718 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_8,
#line 718 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_10,
#line 718 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_InvVars_11)
#line 718 "loop_inv.m"
{
#line 721 "loop_inv.m"
  {
#line 721 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 721 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_12_12;
#line 721 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_13_13;
#line 722 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__conv1_STATE_VARIABLE_InvVars_11;

#line 722 "loop_inv.m"
    {
#line 722 "loop_inv.m"
      transform_hlds__loop_inv__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 722 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_12_12, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[1]));
#line 722 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_12_12, 1) = ((MR_Box) (transform_hlds__loop_inv__add_outputs_5_p_0_1));
#line 722 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 722 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_12_12, 3) = ((MR_Box) (transform_hlds__loop_inv__UUVs_7));
#line 722 "loop_inv.m"
    }
#line 722 "loop_inv.m"
    {
#line 722 "loop_inv.m"
      transform_hlds__loop_inv__V_13_13 = transform_hlds__loop_inv__goal_outputs_2_f_0(transform_hlds__loop_inv__ModuleInfo_6, transform_hlds__loop_inv__Goal_8);
    }
#line 722 "loop_inv.m"
    {
#line 722 "loop_inv.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_12_12, transform_hlds__loop_inv__V_13_13, ((MR_Box) (transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_10)), &transform_hlds__loop_inv__conv1_STATE_VARIABLE_InvVars_11);
    }
#line 722 "loop_inv.m"
    *transform_hlds__loop_inv__STATE_VARIABLE_InvVars_11 = ((MR_Word) transform_hlds__loop_inv__conv1_STATE_VARIABLE_InvVars_11);
#line 721 "loop_inv.m"
  }
#line 718 "loop_inv.m"
}

#line 685 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_1(
#line 685 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 685 "loop_inv.m"
{
#line 685 "loop_inv.m"
  {
#line 685 "loop_inv.m"
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 685 "loop_inv.m"
    MR_builtin_longjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__commit_0, 1);
#line 685 "loop_inv.m"
  }
#line 685 "loop_inv.m"
}

#line 685 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_3(
#line 685 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 685 "loop_inv.m"
{
#line 685 "loop_inv.m"
  {
#line 685 "loop_inv.m"
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 685 "loop_inv.m"
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Mode_85 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__conv0_Mode_85);
#line 685 "loop_inv.m"
    {
#line 685 "loop_inv.m"
      transform_hlds__loop_inv__do_not_hoist_2_6_p_0_2(transform_hlds__loop_inv__env_ptr);
#line 685 "loop_inv.m"
      return;
    }
#line 685 "loop_inv.m"
  }
#line 685 "loop_inv.m"
}

#line 685 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_2(
#line 685 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 685 "loop_inv.m"
{
#line 685 "loop_inv.m"
  {
#line 685 "loop_inv.m"
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 686 "loop_inv.m"
    {
#line 686 "loop_inv.m"
      check_hlds__mode_util__mode_get_insts_4_p_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Mode_85, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__InitialInst_83, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__FinalInst_84);
    }
#line 688 "loop_inv.m"
    {
#line 688 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = check_hlds__inst_util__inst_contains_any_2_p_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__InitialInst_83);
    }
#line 689 "loop_inv.m"
    if (!((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
#line 690 "loop_inv.m"
      {
#line 690 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = check_hlds__inst_util__inst_contains_any_2_p_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__FinalInst_84);
      }
#line 689 "loop_inv.m"
    if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
#line 689 "loop_inv.m"
      {
#line 689 "loop_inv.m"
        transform_hlds__loop_inv__do_not_hoist_2_6_p_0_1(transform_hlds__loop_inv__env_ptr);
#line 689 "loop_inv.m"
        return;
      }
#line 685 "loop_inv.m"
  }
#line 685 "loop_inv.m"
}

#line 685 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_4(
#line 685 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 685 "loop_inv.m"
{
#line 685 "loop_inv.m"
  {
#line 685 "loop_inv.m"
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 685 "loop_inv.m"
    if (MR_builtin_setjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__commit_0) == 0)
#line 685 "loop_inv.m"
      {
#line 685 "loop_inv.m"
        {
#line 685 "loop_inv.m"
          {
#line 685 "loop_inv.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__conv0_Mode_85, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Modes_73, transform_hlds__loop_inv__do_not_hoist_2_6_p_0_3, transform_hlds__loop_inv__env_ptr);
          }
#line 685 "loop_inv.m"
        }
#line 685 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_FALSE;
#line 685 "loop_inv.m"
      }
#line 685 "loop_inv.m"
    else
#line 685 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_TRUE;
#line 685 "loop_inv.m"
  }
#line 685 "loop_inv.m"
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
#line 640 "loop_inv.m"
    {
#line 640 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__GoalExpr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 0)));
#line 640 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__Construction_21;
#line 640 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_42_42;
#line 640 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_44_44;
#line 640 "loop_inv.m"
      MR_Word transform_hlds__loop_inv___GoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 1)));
#line 641 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_24_24;
#line 641 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_25_25;
#line 641 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_26_26;
#line 641 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_27_27;
#line 642 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_40_40;
#line 642 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_41_41;
#line 642 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_43_43;
#line 642 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_45_45;
#line 642 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_46_46;

#line 641 "loop_inv.m"
      (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_19)) == (MR_mktag((MR_Integer) 1)));
#line 641 "loop_inv.m"
      if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
#line 641 "loop_inv.m"
        {
#line 641 "loop_inv.m"
          transform_hlds__loop_inv__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_19, (MR_Integer) 0)));
#line 641 "loop_inv.m"
          transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_19, (MR_Integer) 1)));
#line 641 "loop_inv.m"
          transform_hlds__loop_inv__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_19, (MR_Integer) 2)));
#line 641 "loop_inv.m"
          transform_hlds__loop_inv__Construction_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_19, (MR_Integer) 3)));
#line 641 "loop_inv.m"
          transform_hlds__loop_inv__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_19, (MR_Integer) 4)));
#line 642 "loop_inv.m"
          (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__Construction_21)) == (MR_mktag((MR_Integer) 0)));
#line 642 "loop_inv.m"
          if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
#line 642 "loop_inv.m"
            {
#line 642 "loop_inv.m"
              transform_hlds__loop_inv__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 0)));
#line 642 "loop_inv.m"
              transform_hlds__loop_inv__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 1)));
#line 642 "loop_inv.m"
              transform_hlds__loop_inv__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 2)));
#line 642 "loop_inv.m"
              transform_hlds__loop_inv__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 3)));
#line 642 "loop_inv.m"
              transform_hlds__loop_inv__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 4)));
#line 642 "loop_inv.m"
              transform_hlds__loop_inv__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 5)));
#line 642 "loop_inv.m"
              transform_hlds__loop_inv__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 6)));
#line 642 "loop_inv.m"
              (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = (transform_hlds__loop_inv__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 643 "loop_inv.m"
              if (!((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
#line 643 "loop_inv.m"
                (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = (transform_hlds__loop_inv__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 642 "loop_inv.m"
            }
#line 641 "loop_inv.m"
        }
#line 640 "loop_inv.m"
    }
#line 620 "loop_inv.m"
    if (!((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
#line 620 "loop_inv.m"
      {
#line 650 "loop_inv.m"
        {
#line 650 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__GoalExpr_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 0)));
#line 650 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_55_55;
#line 650 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___GoalInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 1)));
#line 651 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_56_56;
#line 651 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_57_57;
#line 651 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_58_58;
#line 651 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_59_59;
#line 651 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_49_49;
#line 651 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_50_50;
#line 651 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_51_51;
#line 651 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_52_52;
#line 651 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_53_53;
#line 651 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_54_54;

#line 651 "loop_inv.m"
          (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_47)) == (MR_mktag((MR_Integer) 1)));
#line 651 "loop_inv.m"
          if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
#line 651 "loop_inv.m"
            {
#line 651 "loop_inv.m"
              transform_hlds__loop_inv__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_47, (MR_Integer) 0)));
#line 651 "loop_inv.m"
              transform_hlds__loop_inv__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_47, (MR_Integer) 1)));
#line 651 "loop_inv.m"
              transform_hlds__loop_inv__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_47, (MR_Integer) 2)));
#line 651 "loop_inv.m"
              transform_hlds__loop_inv__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_47, (MR_Integer) 3)));
#line 651 "loop_inv.m"
              transform_hlds__loop_inv__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_47, (MR_Integer) 4)));
#line 651 "loop_inv.m"
              (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__V_55_55)) == (MR_mktag((MR_Integer) 1)));
#line 651 "loop_inv.m"
              if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
#line 651 "loop_inv.m"
                {
#line 651 "loop_inv.m"
                  transform_hlds__loop_inv__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 0)));
#line 651 "loop_inv.m"
                  transform_hlds__loop_inv__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 1)));
#line 651 "loop_inv.m"
                  transform_hlds__loop_inv__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 2)));
#line 651 "loop_inv.m"
                  transform_hlds__loop_inv__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 3)));
#line 651 "loop_inv.m"
                  transform_hlds__loop_inv__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 4)));
#line 651 "loop_inv.m"
                  transform_hlds__loop_inv__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 5)));
#line 651 "loop_inv.m"
                }
#line 651 "loop_inv.m"
            }
#line 650 "loop_inv.m"
        }
#line 620 "loop_inv.m"
        if (!((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
#line 620 "loop_inv.m"
          {
#line 657 "loop_inv.m"
            {
#line 657 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_61_61;

#line 658 "loop_inv.m"
              {
#line 658 "loop_inv.m"
                transform_hlds__loop_inv__V_61_61 = hlds__hlds_goal__goal_get_purity_1_f_0(transform_hlds__loop_inv__Goal_8);
              }
#line 658 "loop_inv.m"
              (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = (transform_hlds__loop_inv__V_61_61 == (MR_Integer) 2);
#line 657 "loop_inv.m"
            }
#line 620 "loop_inv.m"
            if (!((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
#line 620 "loop_inv.m"
              {
#line 664 "loop_inv.m"
                {
#line 664 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__GoalInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 1)));
#line 664 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__Detism_64;
#line 664 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__MaxSolns_66;
#line 664 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv___GoalExpr_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 0)));
#line 666 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv___CanFail_65;

#line 665 "loop_inv.m"
                  {
#line 665 "loop_inv.m"
                    transform_hlds__loop_inv__Detism_64 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__loop_inv__GoalInfo_63);
                  }
#line 666 "loop_inv.m"
                  {
#line 666 "loop_inv.m"
                    parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__loop_inv__Detism_64, &transform_hlds__loop_inv___CanFail_65, &transform_hlds__loop_inv__MaxSolns_66);
                  }
#line 667 "loop_inv.m"
                  (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = (transform_hlds__loop_inv__MaxSolns_66 == (MR_Integer) 0);
#line 664 "loop_inv.m"
                }
#line 620 "loop_inv.m"
                if (!((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
#line 676 "loop_inv.m"
                  {
#line 676 "loop_inv.m"
                    MR_Word transform_hlds__loop_inv__GoalExpr_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 0)));
#line 677 "loop_inv.m"
                    MR_Word transform_hlds__loop_inv___GoalInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 1)));

#line 680 "loop_inv.m"
                    if (((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_69)) == (MR_mktag((MR_Integer) 2))))
#line 681 "loop_inv.m"
                      {
#line 681 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__PredId_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 0)));
#line 681 "loop_inv.m"
                        MR_Integer transform_hlds__loop_inv__ProcId_77 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 1)));
#line 681 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__ProcInfo_92;
#line 681 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 2)));
#line 681 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 3)));
#line 681 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 4)));
#line 681 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 5)));
#line 1170 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_91_91;

#line 1170 "loop_inv.m"
                        {
#line 1170 "loop_inv.m"
                          hlds__hlds_module__module_info_pred_proc_info_5_p_0((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, transform_hlds__loop_inv__PredId_76, transform_hlds__loop_inv__ProcId_77, &transform_hlds__loop_inv__V_91_91, &transform_hlds__loop_inv__ProcInfo_92);
                        }
#line 1171 "loop_inv.m"
                        {
#line 1171 "loop_inv.m"
                          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__loop_inv__ProcInfo_92, &(transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Modes_73);
                        }
#line 681 "loop_inv.m"
                        (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_TRUE;
#line 681 "loop_inv.m"
                      }
#line 680 "loop_inv.m"
                    else
#line 680 "loop_inv.m"
                      if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_69)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 679 "loop_inv.m"
                        {
#line 679 "loop_inv.m"
                          MR_Word transform_hlds__loop_inv__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 1)));
#line 679 "loop_inv.m"
                          MR_Word transform_hlds__loop_inv__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 2)));
#line 679 "loop_inv.m"
                          MR_Word transform_hlds__loop_inv__V_74_74;
#line 679 "loop_inv.m"
                          MR_Word transform_hlds__loop_inv__V_75_75;

#line 679 "loop_inv.m"
                          (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Modes_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 3)));
#line 679 "loop_inv.m"
                          transform_hlds__loop_inv__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 4)));
#line 679 "loop_inv.m"
                          transform_hlds__loop_inv__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 5)));
#line 679 "loop_inv.m"
                          (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_TRUE;
#line 679 "loop_inv.m"
                        }
#line 680 "loop_inv.m"
                      else
#line 680 "loop_inv.m"
                        (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_FALSE;
#line 676 "loop_inv.m"
                    if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
#line 685 "loop_inv.m"
                      {
#line 685 "loop_inv.m"
                        transform_hlds__loop_inv__do_not_hoist_2_6_p_0_4(&transform_hlds__loop_inv__env);
                      }
#line 676 "loop_inv.m"
                  }
#line 620 "loop_inv.m"
              }
#line 620 "loop_inv.m"
          }
#line 620 "loop_inv.m"
      }
#line 628 "loop_inv.m"
    if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
#line 626 "loop_inv.m"
      {
#line 626 "loop_inv.m"
        {
#line 626 "loop_inv.m"
          mercury__list__cons_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__loop_inv__Goal_8)), transform_hlds__loop_inv__STATE_VARIABLE_DHGs_0_11, transform_hlds__loop_inv__STATE_VARIABLE_DHGs_12);
        }
#line 627 "loop_inv.m"
        {
#line 627 "loop_inv.m"
          transform_hlds__loop_inv__add_outputs_5_p_0((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__loop_inv__Goal_8, transform_hlds__loop_inv__STATE_VARIABLE_DHVs_0_13, transform_hlds__loop_inv__STATE_VARIABLE_DHVs_14);
#line 627 "loop_inv.m"
          return;
        }
#line 626 "loop_inv.m"
      }
#line 628 "loop_inv.m"
    else
#line 629 "loop_inv.m"
      {
#line 629 "loop_inv.m"
        *transform_hlds__loop_inv__STATE_VARIABLE_DHVs_14 = transform_hlds__loop_inv__STATE_VARIABLE_DHVs_0_13;
#line 629 "loop_inv.m"
        *transform_hlds__loop_inv__STATE_VARIABLE_DHGs_12 = transform_hlds__loop_inv__STATE_VARIABLE_DHGs_0_11;
#line 629 "loop_inv.m"
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

#line 722 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_13(
#line 722 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 722 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 722 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 722 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 722 "loop_inv.m"
{
#line 722 "loop_inv.m"
  {
#line 722 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 722 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv3_STATE_VARIABLE_InvVars_9;

#line 722 "loop_inv.m"
    {
#line 722 "loop_inv.m"
      transform_hlds__loop_inv__add_output_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv3_STATE_VARIABLE_InvVars_9);
    }
#line 722 "loop_inv.m"
    *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv3_STATE_VARIABLE_InvVars_9));
#line 722 "loop_inv.m"
  }
#line 722 "loop_inv.m"
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
#line 474 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_20_20;
#line 474 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_22_22;

#line 474 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__InvariantGoal_17, (MR_Integer) 0)));
#line 474 "loop_inv.m"
      transform_hlds__loop_inv__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__InvariantGoal_17, (MR_Integer) 1)));
#line 474 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10, (MR_Integer) 0)));
#line 474 "loop_inv.m"
      transform_hlds__loop_inv__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10, (MR_Integer) 1)));
#line 476 "loop_inv.m"
      {
#line 476 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21);
      }
#line 477 "loop_inv.m"
      if (!((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded))
#line 479 "loop_inv.m"
        {
#line 479 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__TypeInfo_22_38;
#line 479 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__PredId_23;
#line 479 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__ProcId_24;
#line 479 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__Args_25;
#line 479 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_32_32;
#line 479 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__V_33_33;
#line 479 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_34_34;
#line 478 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___BuiltinX_26;
#line 478 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___ContextX_27;
#line 478 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___SymNameX_28;
#line 480 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___BuiltinY_29;
#line 480 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___ContextY_30;
#line 480 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___SymNameY_31;

#line 478 "loop_inv.m"
          (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19)) == (MR_mktag((MR_Integer) 2)));
#line 478 "loop_inv.m"
          if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
#line 478 "loop_inv.m"
            {
#line 478 "loop_inv.m"
              {
#line 478 "loop_inv.m"
                transform_hlds__loop_inv__PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 0)));
#line 478 "loop_inv.m"
                transform_hlds__loop_inv__ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 1)));
#line 478 "loop_inv.m"
                transform_hlds__loop_inv__Args_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 2)));
#line 478 "loop_inv.m"
                transform_hlds__loop_inv___BuiltinX_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 3)));
#line 478 "loop_inv.m"
                transform_hlds__loop_inv___ContextX_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 4)));
#line 478 "loop_inv.m"
                transform_hlds__loop_inv___SymNameX_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19, (MR_Integer) 5)));
#line 478 "loop_inv.m"
              }
#line 479 "loop_inv.m"
              {
#line 480 "loop_inv.m"
                (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21)) == (MR_mktag((MR_Integer) 2)));
#line 480 "loop_inv.m"
                if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
#line 480 "loop_inv.m"
                  {
#line 480 "loop_inv.m"
                    {
#line 480 "loop_inv.m"
                      transform_hlds__loop_inv__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 0)));
#line 480 "loop_inv.m"
                      transform_hlds__loop_inv__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 1)));
#line 480 "loop_inv.m"
                      transform_hlds__loop_inv__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 2)));
#line 480 "loop_inv.m"
                      transform_hlds__loop_inv___BuiltinY_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 3)));
#line 480 "loop_inv.m"
                      transform_hlds__loop_inv___ContextY_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 4)));
#line 480 "loop_inv.m"
                      transform_hlds__loop_inv___SymNameY_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21, (MR_Integer) 5)));
#line 480 "loop_inv.m"
                    }
#line 479 "loop_inv.m"
                    {
#line 480 "loop_inv.m"
                      {
#line 480 "loop_inv.m"
                        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__loop_inv__PredId_23, transform_hlds__loop_inv__V_32_32);
                      }
#line 479 "loop_inv.m"
                      if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
#line 479 "loop_inv.m"
                        {
#line 480 "loop_inv.m"
                          (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = (transform_hlds__loop_inv__ProcId_24 == transform_hlds__loop_inv__V_33_33);
#line 479 "loop_inv.m"
                          if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
#line 479 "loop_inv.m"
                            {
#line 8405 "transform_hlds.loop_inv.c"
                              transform_hlds__loop_inv__TypeInfo_22_38 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4];
#line 480 "loop_inv.m"
                              {
#line 480 "loop_inv.m"
                                (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__loop_inv__TypeInfo_22_38, ((MR_Box) (transform_hlds__loop_inv__Args_25)), ((MR_Box) (transform_hlds__loop_inv__V_34_34)));
                              }
#line 479 "loop_inv.m"
                            }
#line 479 "loop_inv.m"
                        }
#line 479 "loop_inv.m"
                    }
#line 480 "loop_inv.m"
                  }
#line 479 "loop_inv.m"
              }
#line 478 "loop_inv.m"
            }
#line 479 "loop_inv.m"
        }
#line 477 "loop_inv.m"
      if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
#line 477 "loop_inv.m"
        {
#line 477 "loop_inv.m"
          transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_1(transform_hlds__loop_inv__env_ptr);
#line 477 "loop_inv.m"
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
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUV_43 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv1_UUV_43);
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

#line 8537 "transform_hlds.loop_inv.c"
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeCtorInfo_9_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 582 "loop_inv.m"
    {
#line 582 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeCtorInfo_9_45, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__NonLocals_42, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUV_43);
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
          MR_Word transform_hlds__loop_inv__GoalInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10, (MR_Integer) 1)));
#line 579 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___GoalExpr_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10, (MR_Integer) 0)));

#line 580 "loop_inv.m"
          {
#line 580 "loop_inv.m"
            (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__NonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__loop_inv__GoalInfo_41);
          }
#line 581 "loop_inv.m"
          {
#line 581 "loop_inv.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv1_UUV_43, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUVs_9, transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_7, transform_hlds__loop_inv__env_ptr);
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
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__V_50 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv2_V_50);
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
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = mercury__list__member_2_p_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeInfo_9_51, ((MR_Box) ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__V_50)), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IVs0_13);
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
#line 8700 "transform_hlds.loop_inv.c"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeInfo_9_51 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 600 "loop_inv.m"
        {
#line 600 "loop_inv.m"
          mercury__list__member_2_p_1((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeInfo_9_51, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv2_V_50, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Inputs_49, transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_11, transform_hlds__loop_inv__env_ptr);
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

#line 559 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0(
#line 559 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_8,
#line 559 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UUVs_9,
#line 559 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_10,
#line 559 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__IGs0_11,
#line 559 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__IGs_12,
#line 559 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__IVs0_13,
#line 559 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__IVs_14)
#line 559 "loop_inv.m"
{
#line 559 "loop_inv.m"
  {
#line 559 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s transform_hlds__loop_inv__env;

#line 559 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUVs_9 = transform_hlds__loop_inv__UUVs_9;
#line 559 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10 = transform_hlds__loop_inv__Goal_10;
#line 559 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IGs0_11 = transform_hlds__loop_inv__IGs0_11;
#line 559 "loop_inv.m"
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
              (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Inputs_49 = transform_hlds__loop_inv__goal_inputs_2_f_0(transform_hlds__loop_inv__ModuleInfo_8, (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10);
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
        MR_Word transform_hlds__loop_inv__V_58_58;
#line 568 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_59_59;
#line 722 "loop_inv.m"
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
#line 722 "loop_inv.m"
        {
#line 722 "loop_inv.m"
          transform_hlds__loop_inv__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 722 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[1]));
#line 722 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 1) = ((MR_Box) (transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_13));
#line 722 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 722 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 3) = ((MR_Box) ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUVs_9));
#line 722 "loop_inv.m"
        }
#line 722 "loop_inv.m"
        {
#line 722 "loop_inv.m"
          transform_hlds__loop_inv__V_59_59 = transform_hlds__loop_inv__goal_outputs_2_f_0(transform_hlds__loop_inv__ModuleInfo_8, (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10);
        }
#line 722 "loop_inv.m"
        {
#line 722 "loop_inv.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_58_58, transform_hlds__loop_inv__V_59_59, ((MR_Box) ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IVs0_13)), &transform_hlds__loop_inv__conv4_IVs_14);
        }
#line 722 "loop_inv.m"
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
#line 559 "loop_inv.m"
  }
#line 559 "loop_inv.m"
}

#line 550 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_6_p_0_1(
#line 550 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 550 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 550 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 550 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3,
#line 550 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_4,
#line 550 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_5)
#line 550 "loop_inv.m"
{
#line 550 "loop_inv.m"
  {
#line 550 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 550 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv1_IGs_12;
#line 550 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_IVs_14;

#line 550 "loop_inv.m"
    {
#line 550 "loop_inv.m"
      transform_hlds__loop_inv__inv_goals_vars_2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv1_IGs_12, ((MR_Word) transform_hlds__loop_inv__wrapper_arg_4), &transform_hlds__loop_inv__conv0_IVs_14);
    }
#line 550 "loop_inv.m"
    *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv1_IGs_12));
#line 550 "loop_inv.m"
    *transform_hlds__loop_inv__wrapper_arg_5 = ((MR_Box) (transform_hlds__loop_inv__conv0_IVs_14));
#line 550 "loop_inv.m"
  }
#line 550 "loop_inv.m"
}

#line 545 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_6_p_0(
#line 545 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_7,
#line 545 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UniquelyUsedVars_8,
#line 545 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InvGoals0_9,
#line 545 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__InvGoals_10,
#line 545 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InvVars0_11,
#line 545 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__InvVars_12)
#line 545 "loop_inv.m"
{
#line 549 "loop_inv.m"
  {
#line 549 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 549 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_13_13;
#line 550 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__conv3_InvGoals_10;
#line 550 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__conv2_InvVars_12;

#line 550 "loop_inv.m"
    {
#line 550 "loop_inv.m"
      transform_hlds__loop_inv__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 550 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_13_13, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_7[0]));
#line 550 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_13_13, 1) = ((MR_Box) (transform_hlds__loop_inv__inv_goals_vars_6_p_0_1));
#line 550 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 550 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_13_13, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_7));
#line 550 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_13_13, 4) = ((MR_Box) (transform_hlds__loop_inv__UniquelyUsedVars_8));
#line 550 "loop_inv.m"
    }
#line 550 "loop_inv.m"
    {
#line 550 "loop_inv.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_1[1], (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_13_13, transform_hlds__loop_inv__InvGoals0_9, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__loop_inv__conv3_InvGoals_10, ((MR_Box) (transform_hlds__loop_inv__InvVars0_11)), &transform_hlds__loop_inv__conv2_InvVars_12);
    }
#line 550 "loop_inv.m"
    *transform_hlds__loop_inv__InvGoals_10 = ((MR_Word) transform_hlds__loop_inv__conv3_InvGoals_10);
#line 550 "loop_inv.m"
    *transform_hlds__loop_inv__InvVars_12 = ((MR_Word) transform_hlds__loop_inv__conv2_InvVars_12);
#line 549 "loop_inv.m"
  }
#line 545 "loop_inv.m"
}

#line 522 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_2_f_0(
#line 522 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 522 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Y_2)
#line 522 "loop_inv.m"
{
#line 525 "loop_inv.m"
  {
#line 525 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 525 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__3_3;

#line 525 "loop_inv.m"
    if ((transform_hlds__loop_inv__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 525 "loop_inv.m"
      transform_hlds__loop_inv__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 525 "loop_inv.m"
    else
#line 526 "loop_inv.m"
      {
#line 526 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 0)));

#line 526 "loop_inv.m"
        {
#line 526 "loop_inv.m"
          transform_hlds__loop_inv__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], ((MR_Box) (transform_hlds__loop_inv__X_5)), ((MR_Box) (transform_hlds__loop_inv__Y_2)));
        }
#line 526 "loop_inv.m"
        if (transform_hlds__loop_inv__succeeded)
#line 526 "loop_inv.m"
          transform_hlds__loop_inv__HeadVar__3_3 = transform_hlds__loop_inv__HeadVar__1_1;
#line 526 "loop_inv.m"
        else
#line 526 "loop_inv.m"
          transform_hlds__loop_inv__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 526 "loop_inv.m"
      }
#line 525 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__3_3;
#line 525 "loop_inv.m"
  }
#line 522 "loop_inv.m"
}

#line 516 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0_1(
#line 516 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 516 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 516 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
#line 516 "loop_inv.m"
{
#line 516 "loop_inv.m"
  {
#line 516 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_3;
#line 516 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 516 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__3_3;

#line 516 "loop_inv.m"
    {
#line 516 "loop_inv.m"
      transform_hlds__loop_inv__conv0_HeadVar__3_3 = transform_hlds__loop_inv__refine_candidate_inv_args_2_2_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
#line 516 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__3_3));
#line 516 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_3;
#line 516 "loop_inv.m"
  }
#line 516 "loop_inv.m"
}

#line 511 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0(
#line 511 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 511 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__MaybeInvArgs_6)
#line 511 "loop_inv.m"
{
#line 514 "loop_inv.m"
  {
#line 514 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 514 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__3_3;
#line 514 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__RecCall_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 0)));
#line 514 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___RecCallInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 1)));
#line 514 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__CallArgs_9;
#line 515 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_7_7;
#line 515 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__V_8_8;
#line 515 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_10_10;
#line 515 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_11_11;
#line 515 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_12_12;

#line 515 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__RecCall_4)) == (MR_mktag((MR_Integer) 2)));
#line 515 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 515 "loop_inv.m"
      {
#line 515 "loop_inv.m"
        transform_hlds__loop_inv__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 0)));
#line 515 "loop_inv.m"
        transform_hlds__loop_inv__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 1)));
#line 515 "loop_inv.m"
        transform_hlds__loop_inv__CallArgs_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 2)));
#line 515 "loop_inv.m"
        transform_hlds__loop_inv__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 3)));
#line 515 "loop_inv.m"
        transform_hlds__loop_inv__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 4)));
#line 515 "loop_inv.m"
        transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 5)));
#line 516 "loop_inv.m"
        {
#line 516 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__TypeInfo_17_17 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[2];

#line 514 "loop_inv.m"
          {
#line 514 "loop_inv.m"
            transform_hlds__loop_inv__HeadVar__3_3 = mercury__list__map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_17_17, (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__TypeInfo_17_17, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[3], transform_hlds__loop_inv__MaybeInvArgs_6, transform_hlds__loop_inv__CallArgs_9);
          }
#line 516 "loop_inv.m"
        }
#line 515 "loop_inv.m"
      }
#line 515 "loop_inv.m"
    else
#line 519 "loop_inv.m"
      {
#line 514 "loop_inv.m"
        MR_Box transform_hlds__loop_inv__conv1_HeadVar__3_3;

#line 514 "loop_inv.m"
        {
#line 514 "loop_inv.m"
          transform_hlds__loop_inv__conv1_HeadVar__3_3 = mercury__require__unexpected_3_f_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[3], (MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.refine_candidate_inv_args\'/2", (MR_String) "non call/6 found in argument 1");
        }
#line 514 "loop_inv.m"
        transform_hlds__loop_inv__HeadVar__3_3 = ((MR_Word) transform_hlds__loop_inv__conv1_HeadVar__3_3);
#line 519 "loop_inv.m"
      }
#line 514 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__3_3;
#line 514 "loop_inv.m"
  }
#line 511 "loop_inv.m"
}

#line 503 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_f_0(
#line 503 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 503 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Arg_6,
#line 503 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Mode_7)
#line 503 "loop_inv.m"
{
#line 506 "loop_inv.m"
  {
#line 506 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 506 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__4_4;
#line 506 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InvArg_8 = transform_hlds__loop_inv__Arg_6;
#line 1251 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InInst_12;
#line 1252 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___OutInst_13;

#line 1252 "loop_inv.m"
    {
#line 1252 "loop_inv.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__Mode_7, &transform_hlds__loop_inv__InInst_12, &transform_hlds__loop_inv___OutInst_13);
    }
#line 1253 "loop_inv.m"
    {
#line 1253 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__InInst_12);
    }
#line 1253 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 506 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 506 "loop_inv.m"
      {
#line 506 "loop_inv.m"
        transform_hlds__loop_inv__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 506 "loop_inv.m"
        MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__4_4, 0) = ((MR_Box) (transform_hlds__loop_inv__InvArg_8));
#line 506 "loop_inv.m"
      }
#line 506 "loop_inv.m"
    else
#line 506 "loop_inv.m"
      transform_hlds__loop_inv__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 506 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__4_4;
#line 506 "loop_inv.m"
  }
#line 503 "loop_inv.m"
}

#line 461 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_1(
#line 461 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 461 "loop_inv.m"
{
#line 461 "loop_inv.m"
  {
#line 461 "loop_inv.m"
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 461 "loop_inv.m"
    MR_builtin_longjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__commit_0, 1);
#line 461 "loop_inv.m"
  }
#line 461 "loop_inv.m"
}

#line 462 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_3(
#line 462 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 462 "loop_inv.m"
{
#line 462 "loop_inv.m"
  {
#line 462 "loop_inv.m"
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 462 "loop_inv.m"
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__Gs_5 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__conv0_Gs_5);
#line 462 "loop_inv.m"
    {
#line 462 "loop_inv.m"
      transform_hlds__loop_inv__common_goal_2_p_0_2(transform_hlds__loop_inv__env_ptr);
#line 462 "loop_inv.m"
      return;
    }
#line 462 "loop_inv.m"
  }
#line 462 "loop_inv.m"
}

#line 465 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_4(
#line 465 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 465 "loop_inv.m"
{
#line 465 "loop_inv.m"
  {
#line 465 "loop_inv.m"
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 465 "loop_inv.m"
    MR_builtin_longjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__commit_1, 1);
#line 465 "loop_inv.m"
  }
#line 465 "loop_inv.m"
}

#line 465 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_6(
#line 465 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 465 "loop_inv.m"
{
#line 465 "loop_inv.m"
  {
#line 465 "loop_inv.m"
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 465 "loop_inv.m"
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__G_6 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__conv1_G_6);
#line 465 "loop_inv.m"
    {
#line 465 "loop_inv.m"
      transform_hlds__loop_inv__common_goal_2_p_0_5(transform_hlds__loop_inv__env_ptr);
#line 465 "loop_inv.m"
      return;
    }
#line 465 "loop_inv.m"
  }
#line 465 "loop_inv.m"
}

#line 465 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_5(
#line 465 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 465 "loop_inv.m"
{
#line 465 "loop_inv.m"
  {
#line 465 "loop_inv.m"
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 465 "loop_inv.m"
    {
#line 474 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_10_10;
#line 474 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_12_12;

#line 474 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__G_6, (MR_Integer) 0)));
#line 474 "loop_inv.m"
      transform_hlds__loop_inv__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__G_6, (MR_Integer) 1)));
#line 474 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goal_4, (MR_Integer) 0)));
#line 474 "loop_inv.m"
      transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goal_4, (MR_Integer) 1)));
#line 476 "loop_inv.m"
      {
#line 476 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11);
      }
#line 477 "loop_inv.m"
      if (!((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded))
#line 479 "loop_inv.m"
        {
#line 479 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__TypeInfo_22_28;
#line 479 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__PredId_13;
#line 479 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__ProcId_14;
#line 479 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__Args_15;
#line 479 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_22_22;
#line 479 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__V_23_23;
#line 479 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_24_24;
#line 478 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___BuiltinX_16;
#line 478 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___ContextX_17;
#line 478 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___SymNameX_18;
#line 480 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___BuiltinY_19;
#line 480 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___ContextY_20;
#line 480 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___SymNameY_21;

#line 478 "loop_inv.m"
          (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9)) == (MR_mktag((MR_Integer) 2)));
#line 478 "loop_inv.m"
          if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
#line 478 "loop_inv.m"
            {
#line 478 "loop_inv.m"
              {
#line 478 "loop_inv.m"
                transform_hlds__loop_inv__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 0)));
#line 478 "loop_inv.m"
                transform_hlds__loop_inv__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 1)));
#line 478 "loop_inv.m"
                transform_hlds__loop_inv__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 2)));
#line 478 "loop_inv.m"
                transform_hlds__loop_inv___BuiltinX_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 3)));
#line 478 "loop_inv.m"
                transform_hlds__loop_inv___ContextX_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 4)));
#line 478 "loop_inv.m"
                transform_hlds__loop_inv___SymNameX_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprX_9, (MR_Integer) 5)));
#line 478 "loop_inv.m"
              }
#line 479 "loop_inv.m"
              {
#line 480 "loop_inv.m"
                (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11)) == (MR_mktag((MR_Integer) 2)));
#line 480 "loop_inv.m"
                if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
#line 480 "loop_inv.m"
                  {
#line 480 "loop_inv.m"
                    {
#line 480 "loop_inv.m"
                      transform_hlds__loop_inv__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 0)));
#line 480 "loop_inv.m"
                      transform_hlds__loop_inv__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 1)));
#line 480 "loop_inv.m"
                      transform_hlds__loop_inv__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 2)));
#line 480 "loop_inv.m"
                      transform_hlds__loop_inv___BuiltinY_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 3)));
#line 480 "loop_inv.m"
                      transform_hlds__loop_inv___ContextY_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 4)));
#line 480 "loop_inv.m"
                      transform_hlds__loop_inv___SymNameY_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__GoalExprY_11, (MR_Integer) 5)));
#line 480 "loop_inv.m"
                    }
#line 479 "loop_inv.m"
                    {
#line 480 "loop_inv.m"
                      {
#line 480 "loop_inv.m"
                        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__loop_inv__PredId_13, transform_hlds__loop_inv__V_22_22);
                      }
#line 479 "loop_inv.m"
                      if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
#line 479 "loop_inv.m"
                        {
#line 480 "loop_inv.m"
                          (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = (transform_hlds__loop_inv__ProcId_14 == transform_hlds__loop_inv__V_23_23);
#line 479 "loop_inv.m"
                          if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
#line 479 "loop_inv.m"
                            {
#line 9399 "transform_hlds.loop_inv.c"
                              transform_hlds__loop_inv__TypeInfo_22_28 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4];
#line 480 "loop_inv.m"
                              {
#line 480 "loop_inv.m"
                                (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__loop_inv__TypeInfo_22_28, ((MR_Box) (transform_hlds__loop_inv__Args_15)), ((MR_Box) (transform_hlds__loop_inv__V_24_24)));
                              }
#line 479 "loop_inv.m"
                            }
#line 479 "loop_inv.m"
                        }
#line 479 "loop_inv.m"
                    }
#line 480 "loop_inv.m"
                  }
#line 479 "loop_inv.m"
              }
#line 478 "loop_inv.m"
            }
#line 479 "loop_inv.m"
        }
#line 477 "loop_inv.m"
      if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
#line 477 "loop_inv.m"
        {
#line 477 "loop_inv.m"
          transform_hlds__loop_inv__common_goal_2_p_0_4(transform_hlds__loop_inv__env_ptr);
#line 477 "loop_inv.m"
          return;
        }
#line 465 "loop_inv.m"
    }
#line 465 "loop_inv.m"
  }
#line 465 "loop_inv.m"
}

#line 465 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_7(
#line 465 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 465 "loop_inv.m"
{
#line 465 "loop_inv.m"
  {
#line 465 "loop_inv.m"
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 465 "loop_inv.m"
    if (MR_builtin_setjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__commit_1) == 0)
#line 465 "loop_inv.m"
      {
#line 465 "loop_inv.m"
        {
#line 465 "loop_inv.m"
          {
#line 465 "loop_inv.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__conv1_G_6, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__Gs_5, transform_hlds__loop_inv__common_goal_2_p_0_6, transform_hlds__loop_inv__env_ptr);
          }
#line 465 "loop_inv.m"
        }
#line 465 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = MR_FALSE;
#line 465 "loop_inv.m"
      }
#line 465 "loop_inv.m"
    else
#line 465 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = MR_TRUE;
#line 465 "loop_inv.m"
  }
#line 465 "loop_inv.m"
}

#line 461 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_2(
#line 461 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 461 "loop_inv.m"
{
#line 461 "loop_inv.m"
  {
#line 461 "loop_inv.m"
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 465 "loop_inv.m"
    {
#line 465 "loop_inv.m"
      transform_hlds__loop_inv__common_goal_2_p_0_7(transform_hlds__loop_inv__env_ptr);
    }
#line 463 "loop_inv.m"
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = !((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded);
#line 463 "loop_inv.m"
    if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded)
#line 463 "loop_inv.m"
      {
#line 463 "loop_inv.m"
        transform_hlds__loop_inv__common_goal_2_p_0_1(transform_hlds__loop_inv__env_ptr);
#line 463 "loop_inv.m"
        return;
      }
#line 461 "loop_inv.m"
  }
#line 461 "loop_inv.m"
}

#line 461 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0_8(
#line 461 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 461 "loop_inv.m"
{
#line 461 "loop_inv.m"
  {
#line 461 "loop_inv.m"
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 461 "loop_inv.m"
    if (MR_builtin_setjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__commit_0) == 0)
#line 461 "loop_inv.m"
      {
#line 461 "loop_inv.m"
        {
#line 462 "loop_inv.m"
          {
#line 462 "loop_inv.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__loop_inv_scalar_common_1[1], &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__conv0_Gs_5, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goalss_3, transform_hlds__loop_inv__common_goal_2_p_0_3, transform_hlds__loop_inv__env_ptr);
          }
#line 461 "loop_inv.m"
        }
#line 461 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = MR_FALSE;
#line 461 "loop_inv.m"
      }
#line 461 "loop_inv.m"
    else
#line 461 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = MR_TRUE;
#line 461 "loop_inv.m"
  }
#line 461 "loop_inv.m"
}

#line 458 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__common_goal_2_p_0(
#line 458 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goalss_3,
#line 458 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_4)
#line 458 "loop_inv.m"
{
#line 458 "loop_inv.m"
  {
#line 458 "loop_inv.m"
    struct transform_hlds__loop_inv__common_goal_2_p_0_env_0_s transform_hlds__loop_inv__env;

#line 458 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goalss_3 = transform_hlds__loop_inv__Goalss_3;
#line 458 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__common_goal_2_p_0_env_0__Goal_4 = transform_hlds__loop_inv__Goal_4;
#line 461 "loop_inv.m"
    {
#line 461 "loop_inv.m"
      transform_hlds__loop_inv__common_goal_2_p_0_8(&transform_hlds__loop_inv__env);
    }
#line 461 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded = !((transform_hlds__loop_inv__env).transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded);
#line 461 "loop_inv.m"
    return (transform_hlds__loop_inv__env).transform_hlds__loop_inv__common_goal_2_p_0_env_0__succeeded;
#line 458 "loop_inv.m"
  }
#line 458 "loop_inv.m"
}

#line 440 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__all_instmap_deltas_are_ground_2_p_0(
#line 440 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_1,
#line 440 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2)
#line 440 "loop_inv.m"
{
#line 443 "loop_inv.m"
  while (MR_TRUE)
#line 443 "loop_inv.m"
    {
#line 443 "loop_inv.m"
      /* tailcall optimized into a loop */
#line 443 "loop_inv.m"
      {
#line 443 "loop_inv.m"
        MR_bool transform_hlds__loop_inv__succeeded;

#line 443 "loop_inv.m"
        if ((transform_hlds__loop_inv__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 443 "loop_inv.m"
          transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 443 "loop_inv.m"
        else
#line 444 "loop_inv.m"
          {
#line 444 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Inst_6;
#line 444 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__VarInsts_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 444 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
#line 444 "loop_inv.m"
            MR_Word transform_hlds__loop_inv___Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_8_8, (MR_Integer) 0)));

#line 444 "loop_inv.m"
            transform_hlds__loop_inv__Inst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_8_8, (MR_Integer) 1)));
#line 445 "loop_inv.m"
            {
#line 445 "loop_inv.m"
              transform_hlds__loop_inv__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__loop_inv__ModuleInfo_1, transform_hlds__loop_inv__Inst_6);
            }
#line 444 "loop_inv.m"
            if (transform_hlds__loop_inv__succeeded)
#line 446 "loop_inv.m"
              {
#line 446 "loop_inv.m"
                /* direct tailcall eliminated */
#line 446 "loop_inv.m"
                {
#line 446 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__HeadVar__2__tmp_copy_2 = transform_hlds__loop_inv__VarInsts_7;

#line 446 "loop_inv.m"
                  transform_hlds__loop_inv__HeadVar__2_2 = transform_hlds__loop_inv__HeadVar__2__tmp_copy_2;
#line 446 "loop_inv.m"
                }
#line 446 "loop_inv.m"
                continue;
#line 446 "loop_inv.m"
              }
#line 444 "loop_inv.m"
          }
#line 443 "loop_inv.m"
        return transform_hlds__loop_inv__succeeded;
#line 443 "loop_inv.m"
      }
#line 443 "loop_inv.m"
      break;
#line 443 "loop_inv.m"
    }
#line 440 "loop_inv.m"
}

#line 413 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_handle_primitive_goal_3_p_0(
#line 413 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_4,
#line 413 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13,
#line 413 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_14)
#line 413 "loop_inv.m"
{
#line 416 "loop_inv.m"
  {
#line 416 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 416 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_4, (MR_Integer) 1)));
#line 417 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_4, (MR_Integer) 0)));
#line 419 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Detism_8;
#line 419 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__CodeModel_9;
#line 419 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InstMapDelta_10;
#line 419 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InstMapDeltaPairs_11;
#line 419 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ModuleInfo_12;
#line 419 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_15_15;
#line 429 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_19_19;
#line 429 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_20_20;

#line 419 "loop_inv.m"
    {
#line 419 "loop_inv.m"
      transform_hlds__loop_inv__Detism_8 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__loop_inv__GoalInfo_7);
    }
#line 420 "loop_inv.m"
    {
#line 420 "loop_inv.m"
      hlds__code_model__determinism_to_code_model_2_p_0(transform_hlds__loop_inv__Detism_8, &transform_hlds__loop_inv__CodeModel_9);
    }
#line 422 "loop_inv.m"
    if ((transform_hlds__loop_inv__CodeModel_9 == (MR_Integer) 0))
#line 421 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 422 "loop_inv.m"
    else
#line 422 "loop_inv.m"
      if ((transform_hlds__loop_inv__CodeModel_9 == (MR_Integer) 1))
#line 422 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 422 "loop_inv.m"
      else
#line 422 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_FALSE;
#line 419 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 419 "loop_inv.m"
      {
#line 425 "loop_inv.m"
        {
#line 425 "loop_inv.m"
          transform_hlds__loop_inv__V_15_15 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__loop_inv__GoalInfo_7);
        }
#line 425 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_15_15 == (MR_Integer) 0);
#line 419 "loop_inv.m"
        if (transform_hlds__loop_inv__succeeded)
#line 419 "loop_inv.m"
          {
#line 427 "loop_inv.m"
            {
#line 427 "loop_inv.m"
              transform_hlds__loop_inv__InstMapDelta_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__loop_inv__GoalInfo_7);
            }
#line 428 "loop_inv.m"
            {
#line 428 "loop_inv.m"
              hlds__instmap__instmap_delta_to_assoc_list_2_p_0(transform_hlds__loop_inv__InstMapDelta_10, &transform_hlds__loop_inv__InstMapDeltaPairs_11);
            }
#line 429 "loop_inv.m"
            transform_hlds__loop_inv__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 0)));
#line 429 "loop_inv.m"
            transform_hlds__loop_inv__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 1)));
#line 429 "loop_inv.m"
            transform_hlds__loop_inv__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 2)));
#line 430 "loop_inv.m"
            {
#line 430 "loop_inv.m"
              transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__all_instmap_deltas_are_ground_2_p_0(transform_hlds__loop_inv__ModuleInfo_12, transform_hlds__loop_inv__InstMapDeltaPairs_11);
            }
#line 419 "loop_inv.m"
          }
#line 419 "loop_inv.m"
      }
#line 434 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 432 "loop_inv.m"
      {
#line 432 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_17_17;
#line 432 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 1)));
#line 433 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 0)));
#line 433 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 2)));
#line 432 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_23_23;
#line 432 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_25_25;
#line 432 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_24_24;

#line 432 "loop_inv.m"
        {
#line 432 "loop_inv.m"
          transform_hlds__loop_inv__V_17_17 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__loop_inv__V_18_18, ((MR_Box) (transform_hlds__loop_inv__Goal_4)));
        }
#line 432 "loop_inv.m"
        transform_hlds__loop_inv__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 0)));
#line 432 "loop_inv.m"
        transform_hlds__loop_inv__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 1)));
#line 432 "loop_inv.m"
        transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13, (MR_Integer) 2)));
#line 432 "loop_inv.m"
        {
#line 432 "loop_inv.m"
          MR_Word base;
#line 432 "loop_inv.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 432 "loop_inv.m"
          *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_14 = base;
#line 432 "loop_inv.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__V_23_23));
#line 432 "loop_inv.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__V_17_17));
#line 432 "loop_inv.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__loop_inv__V_25_25));
#line 432 "loop_inv.m"
        }
#line 432 "loop_inv.m"
      }
#line 434 "loop_inv.m"
    else
#line 432 "loop_inv.m"
      *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_14 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_13;
#line 416 "loop_inv.m"
  }
#line 413 "loop_inv.m"
}

#line 400 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__add_recursive_call_3_p_0(
#line 400 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_4,
#line 400 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7,
#line 400 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_8)
#line 400 "loop_inv.m"
{
#line 403 "loop_inv.m"
  {
#line 403 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 403 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__RecCall_6;
#line 403 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_9_9;
#line 403 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7, (MR_Integer) 1)));
#line 403 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_12_12;
#line 403 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_13_13;
#line 403 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_16_16;
#line 403 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_17_17;
#line 404 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7, (MR_Integer) 0)));
#line 404 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7, (MR_Integer) 2)));

#line 404 "loop_inv.m"
    {
#line 404 "loop_inv.m"
      transform_hlds__loop_inv__V_9_9 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__loop_inv__V_10_10);
    }
#line 404 "loop_inv.m"
    {
#line 404 "loop_inv.m"
      transform_hlds__loop_inv__RecCall_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 404 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__RecCall_6, 0) = ((MR_Box) (transform_hlds__loop_inv__Goal_4));
#line 404 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__RecCall_6, 1) = ((MR_Box) (transform_hlds__loop_inv__V_9_9));
#line 404 "loop_inv.m"
    }
#line 405 "loop_inv.m"
    transform_hlds__loop_inv__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7, (MR_Integer) 0)));
#line 405 "loop_inv.m"
    transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7, (MR_Integer) 1)));
#line 405 "loop_inv.m"
    transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_7, (MR_Integer) 2)));
#line 405 "loop_inv.m"
    {
#line 405 "loop_inv.m"
      transform_hlds__loop_inv__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "loop_inv.m"
      MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_12_12, 0) = ((MR_Box) (transform_hlds__loop_inv__RecCall_6));
#line 405 "loop_inv.m"
      MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_12_12, 1) = ((MR_Box) (transform_hlds__loop_inv__V_13_13));
#line 405 "loop_inv.m"
    }
#line 405 "loop_inv.m"
    {
#line 405 "loop_inv.m"
      MR_Word base;
#line 405 "loop_inv.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 405 "loop_inv.m"
      *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_8 = base;
#line 405 "loop_inv.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__V_16_16));
#line 405 "loop_inv.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__V_17_17));
#line 405 "loop_inv.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__loop_inv__V_12_12));
#line 405 "loop_inv.m"
    }
#line 403 "loop_inv.m"
  }
#line 400 "loop_inv.m"
}

#line 389 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_switch_4_p_0(
#line 389 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_1,
#line 389 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 389 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
#line 389 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4)
#line 389 "loop_inv.m"
{
#line 392 "loop_inv.m"
  while (MR_TRUE)
#line 392 "loop_inv.m"
    {
#line 392 "loop_inv.m"
      /* tailcall optimized into a loop */
#line 392 "loop_inv.m"
      {
#line 392 "loop_inv.m"
        MR_bool transform_hlds__loop_inv__succeeded;

#line 392 "loop_inv.m"
        if ((transform_hlds__loop_inv__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 392 "loop_inv.m"
          *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3;
#line 392 "loop_inv.m"
        else
#line 393 "loop_inv.m"
          {
#line 393 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Case_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
#line 393 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Cases_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 393 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_10, (MR_Integer) 2)));
#line 393 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_18_18;
#line 393 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__PathCandidates0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 1)));
#line 393 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_26;
#line 394 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_10, (MR_Integer) 0)));
#line 394 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_10, (MR_Integer) 1)));
#line 359 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 0)));
#line 359 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 2)));
#line 361 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_30_30;
#line 361 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_32_32;
#line 361 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_31_31;

#line 360 "loop_inv.m"
            {
#line 360 "loop_inv.m"
              transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PPId_1, transform_hlds__loop_inv__Goal_15, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, &transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_26);
            }
#line 361 "loop_inv.m"
            transform_hlds__loop_inv__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_26, (MR_Integer) 0)));
#line 361 "loop_inv.m"
            transform_hlds__loop_inv__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_26, (MR_Integer) 1)));
#line 361 "loop_inv.m"
            transform_hlds__loop_inv__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_26, (MR_Integer) 2)));
#line 361 "loop_inv.m"
            {
#line 361 "loop_inv.m"
              transform_hlds__loop_inv__STATE_VARIABLE_IGCs_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 361 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_18_18, 0) = ((MR_Box) (transform_hlds__loop_inv__V_30_30));
#line 361 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_18_18, 1) = ((MR_Box) (transform_hlds__loop_inv__PathCandidates0_25));
#line 361 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_18_18, 2) = ((MR_Box) (transform_hlds__loop_inv__V_32_32));
#line 361 "loop_inv.m"
            }
#line 396 "loop_inv.m"
            /* direct tailcall eliminated */
#line 396 "loop_inv.m"
            {
#line 396 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__HeadVar__2__tmp_copy_2 = transform_hlds__loop_inv__Cases_11;
#line 396 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_18_18;

#line 396 "loop_inv.m"
              transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3;
#line 396 "loop_inv.m"
              transform_hlds__loop_inv__HeadVar__2_2 = transform_hlds__loop_inv__HeadVar__2__tmp_copy_2;
#line 396 "loop_inv.m"
            }
#line 396 "loop_inv.m"
            continue;
#line 393 "loop_inv.m"
          }
#line 392 "loop_inv.m"
      }
#line 392 "loop_inv.m"
      break;
#line 392 "loop_inv.m"
    }
#line 389 "loop_inv.m"
}

#line 381 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_disj_4_p_0(
#line 381 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_1,
#line 381 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 381 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
#line 381 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4)
#line 381 "loop_inv.m"
{
#line 384 "loop_inv.m"
  while (MR_TRUE)
#line 384 "loop_inv.m"
    {
#line 384 "loop_inv.m"
      /* tailcall optimized into a loop */
#line 384 "loop_inv.m"
      {
#line 384 "loop_inv.m"
        MR_bool transform_hlds__loop_inv__succeeded;

#line 384 "loop_inv.m"
        if ((transform_hlds__loop_inv__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 384 "loop_inv.m"
          *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3;
#line 384 "loop_inv.m"
        else
#line 385 "loop_inv.m"
          {
#line 385 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
#line 385 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 385 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15;
#line 385 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__PathCandidates0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 1)));
#line 385 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23;
#line 359 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 0)));
#line 359 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 2)));
#line 361 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_27_27;
#line 361 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_29_29;
#line 361 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_28_28;

#line 360 "loop_inv.m"
            {
#line 360 "loop_inv.m"
              transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PPId_1, transform_hlds__loop_inv__Goal_10, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, &transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23);
            }
#line 361 "loop_inv.m"
            transform_hlds__loop_inv__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23, (MR_Integer) 0)));
#line 361 "loop_inv.m"
            transform_hlds__loop_inv__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23, (MR_Integer) 1)));
#line 361 "loop_inv.m"
            transform_hlds__loop_inv__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23, (MR_Integer) 2)));
#line 361 "loop_inv.m"
            {
#line 361 "loop_inv.m"
              transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 361 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15, 0) = ((MR_Box) (transform_hlds__loop_inv__V_27_27));
#line 361 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15, 1) = ((MR_Box) (transform_hlds__loop_inv__PathCandidates0_22));
#line 361 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15, 2) = ((MR_Box) (transform_hlds__loop_inv__V_29_29));
#line 361 "loop_inv.m"
            }
#line 387 "loop_inv.m"
            /* direct tailcall eliminated */
#line 387 "loop_inv.m"
            {
#line 387 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__HeadVar__2__tmp_copy_2 = transform_hlds__loop_inv__Goals_11;
#line 387 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15;

#line 387 "loop_inv.m"
              transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3;
#line 387 "loop_inv.m"
              transform_hlds__loop_inv__HeadVar__2_2 = transform_hlds__loop_inv__HeadVar__2__tmp_copy_2;
#line 387 "loop_inv.m"
            }
#line 387 "loop_inv.m"
            continue;
#line 385 "loop_inv.m"
          }
#line 384 "loop_inv.m"
      }
#line 384 "loop_inv.m"
      break;
#line 384 "loop_inv.m"
    }
#line 381 "loop_inv.m"
}

#line 373 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_parallel_conj_4_p_0(
#line 373 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_1,
#line 373 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 373 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
#line 373 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4)
#line 373 "loop_inv.m"
{
#line 376 "loop_inv.m"
  while (MR_TRUE)
#line 376 "loop_inv.m"
    {
#line 376 "loop_inv.m"
      /* tailcall optimized into a loop */
#line 376 "loop_inv.m"
      {
#line 376 "loop_inv.m"
        MR_bool transform_hlds__loop_inv__succeeded;

#line 376 "loop_inv.m"
        if ((transform_hlds__loop_inv__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 376 "loop_inv.m"
          *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3;
#line 376 "loop_inv.m"
        else
#line 377 "loop_inv.m"
          {
#line 377 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
#line 377 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 377 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15;
#line 377 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__PathCandidates0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 1)));
#line 377 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23;
#line 359 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 0)));
#line 359 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, (MR_Integer) 2)));
#line 361 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_27_27;
#line 361 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_29_29;
#line 361 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_28_28;

#line 360 "loop_inv.m"
            {
#line 360 "loop_inv.m"
              transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PPId_1, transform_hlds__loop_inv__Goal_10, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, &transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23);
            }
#line 361 "loop_inv.m"
            transform_hlds__loop_inv__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23, (MR_Integer) 0)));
#line 361 "loop_inv.m"
            transform_hlds__loop_inv__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23, (MR_Integer) 1)));
#line 361 "loop_inv.m"
            transform_hlds__loop_inv__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_23, (MR_Integer) 2)));
#line 361 "loop_inv.m"
            {
#line 361 "loop_inv.m"
              transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 361 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15, 0) = ((MR_Box) (transform_hlds__loop_inv__V_27_27));
#line 361 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15, 1) = ((MR_Box) (transform_hlds__loop_inv__PathCandidates0_22));
#line 361 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15, 2) = ((MR_Box) (transform_hlds__loop_inv__V_29_29));
#line 361 "loop_inv.m"
            }
#line 379 "loop_inv.m"
            /* direct tailcall eliminated */
#line 379 "loop_inv.m"
            {
#line 379 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__HeadVar__2__tmp_copy_2 = transform_hlds__loop_inv__Goals_11;
#line 379 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15;

#line 379 "loop_inv.m"
              transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3;
#line 379 "loop_inv.m"
              transform_hlds__loop_inv__HeadVar__2_2 = transform_hlds__loop_inv__HeadVar__2__tmp_copy_2;
#line 379 "loop_inv.m"
            }
#line 379 "loop_inv.m"
            continue;
#line 377 "loop_inv.m"
          }
#line 376 "loop_inv.m"
      }
#line 376 "loop_inv.m"
      break;
#line 376 "loop_inv.m"
    }
#line 373 "loop_inv.m"
}

#line 365 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_plain_conj_4_p_0(
#line 365 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_1,
#line 365 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 365 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3,
#line 365 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4)
#line 365 "loop_inv.m"
{
#line 368 "loop_inv.m"
  while (MR_TRUE)
#line 368 "loop_inv.m"
    {
#line 368 "loop_inv.m"
      /* tailcall optimized into a loop */
#line 368 "loop_inv.m"
      {
#line 368 "loop_inv.m"
        MR_bool transform_hlds__loop_inv__succeeded;

#line 368 "loop_inv.m"
        if ((transform_hlds__loop_inv__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 368 "loop_inv.m"
          *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_4 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3;
#line 368 "loop_inv.m"
        else
#line 369 "loop_inv.m"
          {
#line 369 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
#line 369 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 369 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15;

#line 370 "loop_inv.m"
            {
#line 370 "loop_inv.m"
              transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PPId_1, transform_hlds__loop_inv__Goal_10, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3, &transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15);
            }
#line 371 "loop_inv.m"
            /* direct tailcall eliminated */
#line 371 "loop_inv.m"
            {
#line 371 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__HeadVar__2__tmp_copy_2 = transform_hlds__loop_inv__Goals_11;
#line 371 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_15_15;

#line 371 "loop_inv.m"
              transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_3 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0__tmp_copy_3;
#line 371 "loop_inv.m"
              transform_hlds__loop_inv__HeadVar__2_2 = transform_hlds__loop_inv__HeadVar__2__tmp_copy_2;
#line 371 "loop_inv.m"
            }
#line 371 "loop_inv.m"
            continue;
#line 369 "loop_inv.m"
          }
#line 368 "loop_inv.m"
      }
#line 368 "loop_inv.m"
      break;
#line 368 "loop_inv.m"
    }
#line 365 "loop_inv.m"
}

#line 355 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_4_p_0(
#line 355 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_5,
#line 355 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_6,
#line 355 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_9,
#line 355 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_10)
#line 355 "loop_inv.m"
{
#line 358 "loop_inv.m"
  {
#line 358 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 358 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__PathCandidates0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_9, (MR_Integer) 1)));
#line 358 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_11;
#line 359 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_9, (MR_Integer) 0)));
#line 359 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_9, (MR_Integer) 2)));
#line 361 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_15_15;
#line 361 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_17_17;
#line 361 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_16_16;

#line 360 "loop_inv.m"
    {
#line 360 "loop_inv.m"
      transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Goal_6, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_9, &transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_11);
    }
#line 361 "loop_inv.m"
    transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_11, (MR_Integer) 0)));
#line 361 "loop_inv.m"
    transform_hlds__loop_inv__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_11, (MR_Integer) 1)));
#line 361 "loop_inv.m"
    transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_11_11, (MR_Integer) 2)));
#line 361 "loop_inv.m"
    {
#line 361 "loop_inv.m"
      MR_Word base;
#line 361 "loop_inv.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 361 "loop_inv.m"
      *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_10 = base;
#line 361 "loop_inv.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__V_15_15));
#line 361 "loop_inv.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__PathCandidates0_8));
#line 361 "loop_inv.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__loop_inv__V_17_17));
#line 361 "loop_inv.m"
    }
#line 358 "loop_inv.m"
  }
#line 355 "loop_inv.m"
}

#line 299 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(
#line 299 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_5,
#line 299 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_6,
#line 299 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47,
#line 299 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48)
#line 299 "loop_inv.m"
{
#line 302 "loop_inv.m"
  {
#line 302 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 302 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_6, (MR_Integer) 0)));
#line 302 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_6, (MR_Integer) 1)));

#line 311 "loop_inv.m"
    if (((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_8)) == (MR_mktag((MR_Integer) 0))))
#line 333 "loop_inv.m"
      {
#line 333 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__SubGoal_39 = (MR_Word) MR_body(((MR_Word) transform_hlds__loop_inv__GoalExpr_8), (MR_Integer) 0);

#line 334 "loop_inv.m"
        {
#line 334 "loop_inv.m"
          transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__SubGoal_39, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
#line 334 "loop_inv.m"
          return;
        }
#line 333 "loop_inv.m"
      }
#line 311 "loop_inv.m"
    else
#line 311 "loop_inv.m"
      if (((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_8)) == (MR_mktag((MR_Integer) 2))))
#line 305 "loop_inv.m"
        {
#line 305 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 0)));
#line 305 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 1)));
#line 305 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 2)));
#line 305 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 3)));
#line 305 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 4)));
#line 305 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 5)));
#line 306 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PPId_5, (MR_Integer) 0)));
#line 306 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PPId_5, (MR_Integer) 1)));

#line 306 "loop_inv.m"
          {
#line 306 "loop_inv.m"
            transform_hlds__loop_inv__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__loop_inv__PredId_10, transform_hlds__loop_inv__V_71_71);
          }
#line 306 "loop_inv.m"
          if (transform_hlds__loop_inv__succeeded)
#line 306 "loop_inv.m"
            transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__ProcId_11 == transform_hlds__loop_inv__V_72_72);
#line 308 "loop_inv.m"
          if (transform_hlds__loop_inv__succeeded)
#line 307 "loop_inv.m"
            {
#line 307 "loop_inv.m"
              transform_hlds__loop_inv__add_recursive_call_3_p_0(transform_hlds__loop_inv__Goal_6, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
#line 307 "loop_inv.m"
              return;
            }
#line 308 "loop_inv.m"
          else
#line 309 "loop_inv.m"
            {
#line 309 "loop_inv.m"
              transform_hlds__loop_inv__invariant_goal_candidates_handle_primitive_goal_3_p_0(transform_hlds__loop_inv__Goal_6, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
#line 309 "loop_inv.m"
              return;
            }
#line 305 "loop_inv.m"
        }
#line 311 "loop_inv.m"
      else
#line 311 "loop_inv.m"
        if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 318 "loop_inv.m"
          {
#line 318 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__ConjType_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 1)));
#line 318 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Conjuncts_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 2)));

#line 322 "loop_inv.m"
            if ((transform_hlds__loop_inv__ConjType_33 == (MR_Integer) 1))
#line 324 "loop_inv.m"
              {
#line 324 "loop_inv.m"
                transform_hlds__loop_inv__invariant_goal_candidates_in_parallel_conj_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Conjuncts_34, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
#line 324 "loop_inv.m"
                return;
              }
#line 322 "loop_inv.m"
            else
#line 321 "loop_inv.m"
              {
#line 321 "loop_inv.m"
                transform_hlds__loop_inv__invariant_goal_candidates_in_plain_conj_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Conjuncts_34, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
#line 321 "loop_inv.m"
                return;
              }
#line 318 "loop_inv.m"
          }
#line 311 "loop_inv.m"
        else
#line 311 "loop_inv.m"
          if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 327 "loop_inv.m"
            {
#line 327 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Disjuncts_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 1)));

#line 328 "loop_inv.m"
              {
#line 328 "loop_inv.m"
                transform_hlds__loop_inv__invariant_goal_candidates_in_disj_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Disjuncts_35, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
#line 328 "loop_inv.m"
                return;
              }
#line 327 "loop_inv.m"
            }
#line 311 "loop_inv.m"
          else
#line 311 "loop_inv.m"
            if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 341 "loop_inv.m"
              {
#line 341 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__Cond_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 2)));
#line 341 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__Then_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 3)));
#line 341 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__Else_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 4)));
#line 341 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__PathCandidates0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 1)));
#line 341 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_52_52;
#line 341 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_53_53;
#line 341 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__STATE_VARIABLE_IGCs_54_54;
#line 341 "loop_inv.m"
                MR_Word transform_hlds__loop_inv___XVs_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 1)));
#line 342 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 0)));
#line 342 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 2)));
#line 345 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_68_68;
#line 345 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_70_70;
#line 345 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_69_69;

#line 343 "loop_inv.m"
                {
#line 343 "loop_inv.m"
                  transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Cond_42, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, &transform_hlds__loop_inv__STATE_VARIABLE_IGCs_52_52);
                }
#line 344 "loop_inv.m"
                {
#line 344 "loop_inv.m"
                  transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Then_43, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_52_52, &transform_hlds__loop_inv__STATE_VARIABLE_IGCs_53_53);
                }
#line 345 "loop_inv.m"
                transform_hlds__loop_inv__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_53_53, (MR_Integer) 0)));
#line 345 "loop_inv.m"
                transform_hlds__loop_inv__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_53_53, (MR_Integer) 1)));
#line 345 "loop_inv.m"
                transform_hlds__loop_inv__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_53_53, (MR_Integer) 2)));
#line 345 "loop_inv.m"
                {
#line 345 "loop_inv.m"
                  transform_hlds__loop_inv__STATE_VARIABLE_IGCs_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 345 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_54_54, 0) = ((MR_Box) (transform_hlds__loop_inv__V_68_68));
#line 345 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_54_54, 1) = ((MR_Box) (transform_hlds__loop_inv__PathCandidates0_45));
#line 345 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_54_54, 2) = ((MR_Box) (transform_hlds__loop_inv__V_70_70));
#line 345 "loop_inv.m"
                }
#line 346 "loop_inv.m"
                {
#line 346 "loop_inv.m"
                  transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Else_44, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_54_54, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
#line 346 "loop_inv.m"
                  return;
                }
#line 341 "loop_inv.m"
              }
#line 311 "loop_inv.m"
            else
#line 311 "loop_inv.m"
              if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 336 "loop_inv.m"
                {
#line 336 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__SubGoal_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 2)));
#line 336 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv___Reason_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 1)));

#line 339 "loop_inv.m"
                  {
#line 339 "loop_inv.m"
                    transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__SubGoal_65, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
#line 339 "loop_inv.m"
                    return;
                  }
#line 336 "loop_inv.m"
                }
#line 311 "loop_inv.m"
              else
#line 311 "loop_inv.m"
                if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 348 "loop_inv.m"
                  {
#line 350 "loop_inv.m"
                    {
#line 350 "loop_inv.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "predicate \140transform_hlds.loop_inv.invariant_goal_candidates_in_goal\'/4", (MR_String) "shorthand");
#line 350 "loop_inv.m"
                      return;
                    }
#line 348 "loop_inv.m"
                  }
#line 311 "loop_inv.m"
                else
#line 311 "loop_inv.m"
                  if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 330 "loop_inv.m"
                    {
#line 330 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__Cases_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 3)));
#line 330 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 1)));
#line 330 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_8, (MR_Integer) 2)));

#line 331 "loop_inv.m"
                      {
#line 331 "loop_inv.m"
                        transform_hlds__loop_inv__invariant_goal_candidates_in_switch_4_p_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__Cases_38, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48);
#line 331 "loop_inv.m"
                        return;
                      }
#line 330 "loop_inv.m"
                    }
#line 311 "loop_inv.m"
                  else
#line 434 "loop_inv.m"
                    {
#line 419 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__Detism_81;
#line 419 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__CodeModel_82;
#line 419 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__InstMapDelta_83;
#line 419 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__InstMapDeltaPairs_84;
#line 419 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__ModuleInfo_85;
#line 419 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__V_86_86;
#line 429 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__V_90_90;
#line 429 "loop_inv.m"
                      MR_Word transform_hlds__loop_inv__V_91_91;

#line 419 "loop_inv.m"
                      {
#line 419 "loop_inv.m"
                        transform_hlds__loop_inv__Detism_81 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__loop_inv___GoalInfo_9);
                      }
#line 420 "loop_inv.m"
                      {
#line 420 "loop_inv.m"
                        hlds__code_model__determinism_to_code_model_2_p_0(transform_hlds__loop_inv__Detism_81, &transform_hlds__loop_inv__CodeModel_82);
                      }
#line 422 "loop_inv.m"
                      if ((transform_hlds__loop_inv__CodeModel_82 == (MR_Integer) 0))
#line 421 "loop_inv.m"
                        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 422 "loop_inv.m"
                      else
#line 422 "loop_inv.m"
                        if ((transform_hlds__loop_inv__CodeModel_82 == (MR_Integer) 1))
#line 422 "loop_inv.m"
                          transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 422 "loop_inv.m"
                        else
#line 422 "loop_inv.m"
                          transform_hlds__loop_inv__succeeded = MR_FALSE;
#line 419 "loop_inv.m"
                      if (transform_hlds__loop_inv__succeeded)
#line 419 "loop_inv.m"
                        {
#line 425 "loop_inv.m"
                          {
#line 425 "loop_inv.m"
                            transform_hlds__loop_inv__V_86_86 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__loop_inv___GoalInfo_9);
                          }
#line 425 "loop_inv.m"
                          transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_86_86 == (MR_Integer) 0);
#line 419 "loop_inv.m"
                          if (transform_hlds__loop_inv__succeeded)
#line 419 "loop_inv.m"
                            {
#line 427 "loop_inv.m"
                              {
#line 427 "loop_inv.m"
                                transform_hlds__loop_inv__InstMapDelta_83 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__loop_inv___GoalInfo_9);
                              }
#line 428 "loop_inv.m"
                              {
#line 428 "loop_inv.m"
                                hlds__instmap__instmap_delta_to_assoc_list_2_p_0(transform_hlds__loop_inv__InstMapDelta_83, &transform_hlds__loop_inv__InstMapDeltaPairs_84);
                              }
#line 429 "loop_inv.m"
                              transform_hlds__loop_inv__ModuleInfo_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 0)));
#line 429 "loop_inv.m"
                              transform_hlds__loop_inv__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 1)));
#line 429 "loop_inv.m"
                              transform_hlds__loop_inv__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 2)));
#line 430 "loop_inv.m"
                              {
#line 430 "loop_inv.m"
                                transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__all_instmap_deltas_are_ground_2_p_0(transform_hlds__loop_inv__ModuleInfo_85, transform_hlds__loop_inv__InstMapDeltaPairs_84);
                              }
#line 419 "loop_inv.m"
                            }
#line 419 "loop_inv.m"
                        }
#line 434 "loop_inv.m"
                      if (transform_hlds__loop_inv__succeeded)
#line 432 "loop_inv.m"
                        {
#line 432 "loop_inv.m"
                          MR_Word transform_hlds__loop_inv__V_88_88;
#line 432 "loop_inv.m"
                          MR_Word transform_hlds__loop_inv__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 1)));
#line 433 "loop_inv.m"
                          MR_Word transform_hlds__loop_inv__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 0)));
#line 433 "loop_inv.m"
                          MR_Word transform_hlds__loop_inv__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 2)));
#line 432 "loop_inv.m"
                          MR_Word transform_hlds__loop_inv__V_94_94;
#line 432 "loop_inv.m"
                          MR_Word transform_hlds__loop_inv__V_96_96;
#line 432 "loop_inv.m"
                          MR_Word transform_hlds__loop_inv__V_95_95;

#line 432 "loop_inv.m"
                          {
#line 432 "loop_inv.m"
                            transform_hlds__loop_inv__V_88_88 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__loop_inv__V_89_89, ((MR_Box) (transform_hlds__loop_inv__Goal_6)));
                          }
#line 432 "loop_inv.m"
                          transform_hlds__loop_inv__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 0)));
#line 432 "loop_inv.m"
                          transform_hlds__loop_inv__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 1)));
#line 432 "loop_inv.m"
                          transform_hlds__loop_inv__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47, (MR_Integer) 2)));
#line 432 "loop_inv.m"
                          {
#line 432 "loop_inv.m"
                            MR_Word base;
#line 432 "loop_inv.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 432 "loop_inv.m"
                            *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48 = base;
#line 432 "loop_inv.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__loop_inv__V_94_94));
#line 432 "loop_inv.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__loop_inv__V_88_88));
#line 432 "loop_inv.m"
                            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__loop_inv__V_96_96));
#line 432 "loop_inv.m"
                          }
#line 432 "loop_inv.m"
                        }
#line 434 "loop_inv.m"
                      else
#line 432 "loop_inv.m"
                        *transform_hlds__loop_inv__STATE_VARIABLE_IGCs_48 = transform_hlds__loop_inv__STATE_VARIABLE_IGCs_0_47;
#line 434 "loop_inv.m"
                    }
#line 302 "loop_inv.m"
  }
#line 299 "loop_inv.m"
}

#line 496 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_4(
#line 496 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 496 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 496 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2)
#line 496 "loop_inv.m"
{
#line 496 "loop_inv.m"
  {
#line 496 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 496 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 496 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv3_HeadVar__2_18;

#line 496 "loop_inv.m"
    {
#line 496 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__IntroducedFrom__func__inv_args__496__1_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), &transform_hlds__loop_inv__conv3_HeadVar__2_18);
    }
#line 496 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 496 "loop_inv.m"
      {
#line 496 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv3_HeadVar__2_18));
#line 496 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 496 "loop_inv.m"
      }
#line 496 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 496 "loop_inv.m"
  }
#line 496 "loop_inv.m"
}

#line 494 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_3(
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
    MR_Word transform_hlds__loop_inv__conv1_HeadVar__3_3;

#line 494 "loop_inv.m"
    {
#line 494 "loop_inv.m"
      transform_hlds__loop_inv__conv1_HeadVar__3_3 = transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
#line 494 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv1_HeadVar__3_3));
#line 494 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_3;
#line 494 "loop_inv.m"
  }
#line 494 "loop_inv.m"
}

#line 491 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_2(
#line 491 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 491 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 491 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
#line 491 "loop_inv.m"
{
#line 491 "loop_inv.m"
  {
#line 491 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_3;
#line 491 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 491 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__4_4;

#line 491 "loop_inv.m"
    {
#line 491 "loop_inv.m"
      transform_hlds__loop_inv__conv0_HeadVar__4_4 = transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
#line 491 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__4_4));
#line 491 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_3;
#line 491 "loop_inv.m"
  }
#line 491 "loop_inv.m"
}

#line 454 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_1(
#line 454 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 454 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 454 "loop_inv.m"
{
#line 454 "loop_inv.m"
  {
#line 454 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 454 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;

#line 454 "loop_inv.m"
    {
#line 454 "loop_inv.m"
      return transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__common_goal_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 454 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 454 "loop_inv.m"
  }
#line 454 "loop_inv.m"
}

#line 111 "loop_inv.m"
void MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0(
#line 111 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredProcId_7,
#line 111 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredInfo_8,
#line 111 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_0_34,
#line 111 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_35,
#line 111 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36,
#line 111 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_37)
#line 111 "loop_inv.m"
{
#line 251 "loop_inv.m"
  {
#line 251 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 251 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Body_11;
#line 251 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVars_12;
#line 251 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InvArgs_18;
#line 251 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InvGoals_23;
#line 251 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InvVars_24;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeInfo_43_43;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeCtorInfo_44_44;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeInfo_7_50;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeCtorInfo_19_64;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeInfo_20_65;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeInfo_20_85;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeCtorInfo_21_86;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeInfo_22_87;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeCtorInfo_26_91;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeInfo_27_92;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVarModes_13;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__UniquelyUsedVars_14;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InvGoals0_15;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__RecCalls_16;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InvArgs0_17;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InvGoals1_19;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InvVars1_20;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__DontHoistGoals_21;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__DontHoistVars_22;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_46_46;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_49_49;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalCandidates0_56;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalCandidates_57;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__RecCalls_60;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__CandidateInvGoalsList_61;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_62_62;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_63_63;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__MaybeInvArgs0_76;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__MaybeInvArgs_77;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_79_79;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_80_80;
#line 150 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_81_81;
#line 293 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_58_58;
#line 293 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_59_59;
#line 493 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__conv2_MaybeInvArgs_77;
#line 208 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_25_25;
#line 208 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_26_26;

#line 150 "loop_inv.m"
    {
#line 150 "loop_inv.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(transform_hlds__loop_inv__PredInfo_8, &transform_hlds__loop_inv__V_46_46);
    }
#line 150 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = ((MR_Integer) 0 == transform_hlds__loop_inv__V_46_46);
#line 150 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 150 "loop_inv.m"
      {
#line 155 "loop_inv.m"
        {
#line 155 "loop_inv.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_0_34, &transform_hlds__loop_inv__Body_11);
        }
#line 156 "loop_inv.m"
        {
#line 156 "loop_inv.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_0_34, &transform_hlds__loop_inv__HeadVars_12);
        }
#line 157 "loop_inv.m"
        {
#line 157 "loop_inv.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_0_34, &transform_hlds__loop_inv__HeadVarModes_13);
        }
#line 11030 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeInfo_7_50 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1086 "loop_inv.m"
        {
#line 1086 "loop_inv.m"
          transform_hlds__loop_inv__V_49_49 = transform_hlds__loop_inv__used_vars_2_f_0(transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36, transform_hlds__loop_inv__Body_11);
        }
#line 1085 "loop_inv.m"
        {
#line 1085 "loop_inv.m"
          transform_hlds__loop_inv__UniquelyUsedVars_14 = mercury__list__sort_and_remove_dups_1_f_0(transform_hlds__loop_inv__TypeInfo_7_50, transform_hlds__loop_inv__V_49_49);
        }
#line 11042 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeCtorInfo_19_64 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 290 "loop_inv.m"
        {
#line 290 "loop_inv.m"
          transform_hlds__loop_inv__V_62_62 = mercury__cord__empty_0_f_0(transform_hlds__loop_inv__TypeCtorInfo_19_64);
        }
#line 290 "loop_inv.m"
        transform_hlds__loop_inv__V_63_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 290 "loop_inv.m"
        {
#line 290 "loop_inv.m"
          transform_hlds__loop_inv__GoalCandidates0_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 290 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GoalCandidates0_56, 0) = ((MR_Box) (transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36));
#line 290 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GoalCandidates0_56, 1) = ((MR_Box) (transform_hlds__loop_inv__V_62_62));
#line 290 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GoalCandidates0_56, 2) = ((MR_Box) (transform_hlds__loop_inv__V_63_63));
#line 290 "loop_inv.m"
        }
#line 291 "loop_inv.m"
        {
#line 291 "loop_inv.m"
          transform_hlds__loop_inv__invariant_goal_candidates_in_goal_4_p_0(transform_hlds__loop_inv__PredProcId_7, transform_hlds__loop_inv__Body_11, transform_hlds__loop_inv__GoalCandidates0_56, &transform_hlds__loop_inv__GoalCandidates_57);
        }
#line 293 "loop_inv.m"
        transform_hlds__loop_inv__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GoalCandidates_57, (MR_Integer) 0)));
#line 293 "loop_inv.m"
        transform_hlds__loop_inv__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GoalCandidates_57, (MR_Integer) 1)));
#line 293 "loop_inv.m"
        transform_hlds__loop_inv__RecCalls_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GoalCandidates_57, (MR_Integer) 2)));
#line 11074 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeInfo_20_65 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[1];
#line 294 "loop_inv.m"
        {
#line 294 "loop_inv.m"
          mercury__assoc_list__keys_and_values_3_p_0(transform_hlds__loop_inv__TypeCtorInfo_19_64, transform_hlds__loop_inv__TypeInfo_20_65, transform_hlds__loop_inv__RecCalls_60, &transform_hlds__loop_inv__RecCalls_16, &transform_hlds__loop_inv__CandidateInvGoalsList_61);
        }
#line 452 "loop_inv.m"
        if ((transform_hlds__loop_inv__CandidateInvGoalsList_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 452 "loop_inv.m"
          transform_hlds__loop_inv__InvGoals0_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 452 "loop_inv.m"
        else
#line 453 "loop_inv.m"
          {
#line 453 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Goals_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__CandidateInvGoalsList_61, (MR_Integer) 0)));
#line 453 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Goalss_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__CandidateInvGoalsList_61, (MR_Integer) 1)));
#line 453 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_68_68;

#line 454 "loop_inv.m"
            {
#line 454 "loop_inv.m"
              transform_hlds__loop_inv__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 454 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_68_68, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_4[0]));
#line 454 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_68_68, 1) = ((MR_Box) (transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_1));
#line 454 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 454 "loop_inv.m"
              MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_68_68, 3) = ((MR_Box) (transform_hlds__loop_inv__Goalss_67));
#line 454 "loop_inv.m"
            }
#line 453 "loop_inv.m"
            {
#line 453 "loop_inv.m"
              transform_hlds__loop_inv__InvGoals0_15 = mercury__list__filter_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__loop_inv__V_68_68, transform_hlds__loop_inv__Goals_66);
            }
#line 453 "loop_inv.m"
          }
#line 11117 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeInfo_20_85 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 11119 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeCtorInfo_21_86 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 11121 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeInfo_22_87 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[2];
#line 491 "loop_inv.m"
        {
#line 491 "loop_inv.m"
          transform_hlds__loop_inv__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 491 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_79_79, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[0]));
#line 491 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_79_79, 1) = ((MR_Box) (transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_2));
#line 491 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 491 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_79_79, 3) = ((MR_Box) (transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36));
#line 491 "loop_inv.m"
        }
#line 490 "loop_inv.m"
        {
#line 490 "loop_inv.m"
          transform_hlds__loop_inv__MaybeInvArgs0_76 = mercury__list__map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_20_85, transform_hlds__loop_inv__TypeCtorInfo_21_86, transform_hlds__loop_inv__TypeInfo_22_87, transform_hlds__loop_inv__V_79_79, transform_hlds__loop_inv__HeadVars_12, transform_hlds__loop_inv__HeadVarModes_13);
        }
#line 11142 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeCtorInfo_26_91 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 11144 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeInfo_27_92 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[3];
#line 494 "loop_inv.m"
        transform_hlds__loop_inv__V_80_80 = (MR_Word) &transform_hlds__loop_inv_scalar_common_2[1];
#line 493 "loop_inv.m"
        {
#line 493 "loop_inv.m"
          transform_hlds__loop_inv__conv2_MaybeInvArgs_77 = mercury__list__foldl_3_f_0(transform_hlds__loop_inv__TypeCtorInfo_26_91, transform_hlds__loop_inv__TypeInfo_27_92, transform_hlds__loop_inv__V_80_80, transform_hlds__loop_inv__RecCalls_16, ((MR_Box) (transform_hlds__loop_inv__MaybeInvArgs0_76)));
        }
#line 493 "loop_inv.m"
        transform_hlds__loop_inv__MaybeInvArgs_77 = ((MR_Word) transform_hlds__loop_inv__conv2_MaybeInvArgs_77);
#line 496 "loop_inv.m"
        transform_hlds__loop_inv__V_81_81 = (MR_Word) &transform_hlds__loop_inv_scalar_common_2[2];
#line 495 "loop_inv.m"
        {
#line 495 "loop_inv.m"
          transform_hlds__loop_inv__InvArgs0_17 = mercury__list__filter_map_2_f_0(transform_hlds__loop_inv__TypeInfo_22_87, transform_hlds__loop_inv__TypeInfo_20_85, transform_hlds__loop_inv__V_81_81, transform_hlds__loop_inv__MaybeInvArgs_77);
        }
#line 11162 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeInfo_43_43 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 178 "loop_inv.m"
        {
#line 178 "loop_inv.m"
          transform_hlds__loop_inv__InvArgs_18 = mercury__list__delete_elems_2_f_0(transform_hlds__loop_inv__TypeInfo_43_43, transform_hlds__loop_inv__InvArgs0_17, transform_hlds__loop_inv__UniquelyUsedVars_14);
        }
#line 182 "loop_inv.m"
        {
#line 182 "loop_inv.m"
          transform_hlds__loop_inv__inv_goals_vars_6_p_0(transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36, transform_hlds__loop_inv__UniquelyUsedVars_14, transform_hlds__loop_inv__InvGoals0_15, &transform_hlds__loop_inv__InvGoals1_19, transform_hlds__loop_inv__InvArgs_18, &transform_hlds__loop_inv__InvVars1_20);
        }
#line 201 "loop_inv.m"
        {
#line 201 "loop_inv.m"
          transform_hlds__loop_inv__do_not_hoist_4_p_0(transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36, transform_hlds__loop_inv__InvGoals1_19, &transform_hlds__loop_inv__DontHoistGoals_21, &transform_hlds__loop_inv__DontHoistVars_22);
        }
#line 11179 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeCtorInfo_44_44 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 203 "loop_inv.m"
        {
#line 203 "loop_inv.m"
          transform_hlds__loop_inv__InvGoals_23 = mercury__list__delete_elems_2_f_0(transform_hlds__loop_inv__TypeCtorInfo_44_44, transform_hlds__loop_inv__InvGoals1_19, transform_hlds__loop_inv__DontHoistGoals_21);
        }
#line 204 "loop_inv.m"
        {
#line 204 "loop_inv.m"
          transform_hlds__loop_inv__InvVars_24 = mercury__list__delete_elems_2_f_0(transform_hlds__loop_inv__TypeInfo_43_43, transform_hlds__loop_inv__InvVars1_20, transform_hlds__loop_inv__DontHoistVars_22);
        }
#line 208 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__InvGoals_23)) == (MR_mktag((MR_Integer) 1)));
#line 208 "loop_inv.m"
        if (transform_hlds__loop_inv__succeeded)
#line 208 "loop_inv.m"
          {
#line 208 "loop_inv.m"
            transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__InvGoals_23, (MR_Integer) 0)));
#line 208 "loop_inv.m"
            transform_hlds__loop_inv__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__InvGoals_23, (MR_Integer) 1)));
#line 208 "loop_inv.m"
          }
#line 150 "loop_inv.m"
      }
#line 251 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 224 "loop_inv.m"
      {
#line 224 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__ComputedInvVars_27;
#line 224 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__InitialInstMap_28;
#line 224 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__InitialAuxInstMap_29;
#line 224 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__AuxPredProcId_30;
#line 224 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__CallAux_31;
#line 224 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__AuxPredInfo_32;
#line 224 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__AuxProcInfo_33;
#line 224 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_39_39;
#line 224 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_40_40;

#line 224 "loop_inv.m"
        {
#line 224 "loop_inv.m"
          transform_hlds__loop_inv__ComputedInvVars_27 = mercury__list__delete_elems_2_f_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__InvVars_24, transform_hlds__loop_inv__InvArgs_18);
        }
#line 228 "loop_inv.m"
        {
#line 228 "loop_inv.m"
          hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_0_34, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36, &transform_hlds__loop_inv__InitialInstMap_28);
        }
#line 230 "loop_inv.m"
        {
#line 230 "loop_inv.m"
          transform_hlds__loop_inv__InitialAuxInstMap_29 = transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0(transform_hlds__loop_inv__InvGoals_23, transform_hlds__loop_inv__InitialInstMap_28);
        }
#line 236 "loop_inv.m"
        {
#line 236 "loop_inv.m"
          transform_hlds__loop_inv__create_aux_pred_10_p_0(transform_hlds__loop_inv__PredProcId_7, transform_hlds__loop_inv__HeadVars_12, transform_hlds__loop_inv__ComputedInvVars_27, transform_hlds__loop_inv__InitialAuxInstMap_29, &transform_hlds__loop_inv__AuxPredProcId_30, &transform_hlds__loop_inv__CallAux_31, &transform_hlds__loop_inv__AuxPredInfo_32, &transform_hlds__loop_inv__AuxProcInfo_33, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36, &transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_39_39);
        }
#line 244 "loop_inv.m"
        {
#line 244 "loop_inv.m"
          transform_hlds__loop_inv__gen_aux_proc_9_p_0(transform_hlds__loop_inv__InvGoals_23, transform_hlds__loop_inv__PredProcId_7, transform_hlds__loop_inv__AuxPredProcId_30, transform_hlds__loop_inv__CallAux_31, transform_hlds__loop_inv__Body_11, transform_hlds__loop_inv__AuxPredInfo_32, transform_hlds__loop_inv__AuxProcInfo_33, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_39_39, &transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_40_40);
        }
#line 249 "loop_inv.m"
        {
#line 249 "loop_inv.m"
          transform_hlds__loop_inv__gen_out_proc_8_p_0(transform_hlds__loop_inv__PredProcId_7, transform_hlds__loop_inv__PredInfo_8, transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_0_34, transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_35, transform_hlds__loop_inv__CallAux_31, transform_hlds__loop_inv__Body_11, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_40_40, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_37);
#line 249 "loop_inv.m"
          return;
        }
#line 224 "loop_inv.m"
      }
#line 251 "loop_inv.m"
    else
#line 252 "loop_inv.m"
      {
#line 252 "loop_inv.m"
        *transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_37 = transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36;
#line 252 "loop_inv.m"
        *transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_35 = transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_0_34;
#line 252 "loop_inv.m"
      }
#line 251 "loop_inv.m"
  }
#line 111 "loop_inv.m"
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
