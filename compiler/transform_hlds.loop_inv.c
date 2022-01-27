/*
** Automatically generated from `loop_inv.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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



#line 935 "loop_inv.m"
struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0_s {
#line 935 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__Goal0_5;
#line 938 "loop_inv.m"
  MR_bool transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded;
#line 939 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__V_6_6;
#line 591 "loop_inv.m"
  jmp_buf transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__commit_0;
#line 591 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__InvariantGoal_12;
#line 591 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprX_14;
#line 591 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprY_16;
#line 592 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__conv0_InvariantGoal_12;
#line 935 "loop_inv.m"
};

#line 617 "loop_inv.m"
struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s {
#line 617 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7;
#line 631 "loop_inv.m"
  MR_bool transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded;
#line 679 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Modes_73;
#line 688 "loop_inv.m"
  jmp_buf transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__commit_0;
#line 688 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__InitialInst_83;
#line 688 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__FinalInst_84;
#line 688 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Mode_85;
#line 688 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__conv0_Mode_85;
#line 617 "loop_inv.m"
};

#line 562 "loop_inv.m"
struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s {
#line 562 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUVs_9;
#line 562 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10;
#line 562 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IGs0_11;
#line 562 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IVs0_13;
#line 573 "loop_inv.m"
  MR_bool transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded;
#line 567 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Inputs_48;
#line 591 "loop_inv.m"
  jmp_buf transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_0;
#line 591 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__InvariantGoal_17;
#line 591 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprX_19;
#line 591 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__GoalExprY_21;
#line 592 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv0_InvariantGoal_17;
#line 582 "loop_inv.m"
  jmp_buf transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_1;
#line 582 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeCtorInfo_9_44;
#line 582 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__NonLocals_41;
#line 582 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUV_42;
#line 584 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv1_UUV_42;
#line 602 "loop_inv.m"
  jmp_buf transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_2;
#line 602 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeInfo_9_50;
#line 602 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__V_49;
#line 603 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv2_V_49;
#line 562 "loop_inv.m"
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


#line 262 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 265 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 268 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 271 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 274 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 277 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 280 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 283 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 286 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 289 "transform_hlds.loop_inv.c"
static const MR_PseudoTypeInfo transform_hlds__loop_inv__transform_hlds__loop_inv__field_types_gen_aux_proc_info_0_0[4];

#line 292 "transform_hlds.loop_inv.c"
static const MR_ConstString transform_hlds__loop_inv__transform_hlds__loop_inv__field_names_gen_aux_proc_info_0_0[4];

#line 295 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDesc transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_gen_aux_proc_info_0_0;

#line 298 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_gen_aux_proc_info_0_0[1];

#line 301 "transform_hlds.loop_inv.c"
static const MR_DuPtagLayout transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_gen_aux_proc_info_0[1];

#line 304 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_name_ordered_gen_aux_proc_info_0[1];

#line 307 "transform_hlds.loop_inv.c"
static const MR_Integer transform_hlds__loop_inv__transform_hlds__loop_inv__functor_number_map_gen_aux_proc_info_0[1];

#line 310 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 313 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__loop_inv__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 316 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 319 "transform_hlds.loop_inv.c"
static const MR_PseudoTypeInfo transform_hlds__loop_inv__transform_hlds__loop_inv__field_types_igc_info_0_0[3];

#line 322 "transform_hlds.loop_inv.c"
static const MR_ConstString transform_hlds__loop_inv__transform_hlds__loop_inv__field_names_igc_info_0_0[3];

#line 325 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDesc transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_igc_info_0_0;

#line 328 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_igc_info_0_0[1];

#line 331 "transform_hlds.loop_inv.c"
static const MR_DuPtagLayout transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_igc_info_0[1];

#line 334 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_name_ordered_igc_info_0[1];

#line 337 "transform_hlds.loop_inv.c"
static const MR_Integer transform_hlds__loop_inv__transform_hlds__loop_inv__functor_number_map_igc_info_0[1];

#line 340 "transform_hlds.loop_inv.c"
static const MR_VA_TypeInfo_Struct2 transform_hlds__loop_inv____vti_tuple_2hlds__hlds_module__type_ctor_info_module_info_0hlds__instmap__type_ctor_info_instmap_0;

#line 343 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0_10001(
#line 346 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 348 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

#line 351 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0_10001(
#line 354 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 356 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 358 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3);

#line 361 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____igc_info_0_0_10001(
#line 364 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 366 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

#line 369 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____igc_info_0_0_10001(
#line 372 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 374 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 376 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3);

#line 379 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____inst_info_0_0_10001(
#line 382 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 384 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

#line 387 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____inst_info_0_0_10001(
#line 390 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 392 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 394 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3);

#line 397 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____rec_call_0_0_10001(
#line 400 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 402 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

#line 405 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____rec_call_0_0_10001(
#line 408 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 410 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 412 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3);

#line 1071 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_2_f_0(
#line 1071 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 1071 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2);

#line 1332 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__rhs_modes__1332__1_1_f_0(
#line 1332 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_9);

#line 1159 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__case_goals__1159__1_1_f_0(
#line 1159 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_8);

#line 745 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__compute_initial_aux_instmap__745__1_2_f_0(
#line 745 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_12,
#line 745 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_13);

#line 499 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__inv_args__499__1_1_f_0(
#line 499 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_17,
#line 499 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__2_18);

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

#line 699 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv____Compare____inst_info_0_0(
#line 699 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
#line 699 "loop_inv.m"
  MR_Tuple transform_hlds__loop_inv__HeadVar__2_2,
#line 699 "loop_inv.m"
  MR_Tuple transform_hlds__loop_inv__HeadVar__3_3);

#line 699 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____inst_info_0_0(
#line 699 "loop_inv.m"
  MR_Tuple transform_hlds__loop_inv__HeadVar__1_1,
#line 699 "loop_inv.m"
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

#line 836 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0(
#line 836 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
#line 836 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 836 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__3_3);

#line 836 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0(
#line 836 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 836 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2);

#line 1332 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__rhs_modes_1_f_0_1(
#line 1332 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1332 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1329 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__rhs_modes_1_f_0(
#line 1329 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UniModes_3);

#line 1322 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__output_arg_3_f_0(
#line 1322 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 1322 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__X_6,
#line 1322 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__M_7,
#line 1322 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__X_4);

#line 1291 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_5(
#line 1291 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1291 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1291 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1291 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1271 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_4(
#line 1271 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1271 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1271 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1271 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1275 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_3(
#line 1275 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1275 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1275 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1275 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1280 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_2(
#line 1280 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1280 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1279 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_1(
#line 1279 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1279 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1279 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1279 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1265 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0(
#line 1265 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
#line 1265 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5);

#line 1254 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__input_arg_3_f_0(
#line 1254 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 1254 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__X_6,
#line 1254 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__M_7,
#line 1254 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__X_4);

#line 1212 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_6(
#line 1212 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1212 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1212 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1212 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1207 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_5(
#line 1207 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1207 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1207 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1207 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1189 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_4(
#line 1189 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1189 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1189 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1189 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1194 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_3(
#line 1194 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1194 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1194 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1194 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1200 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_2(
#line 1200 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1200 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1199 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_1(
#line 1199 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1199 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1199 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1199 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1183 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0(
#line 1183 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
#line 1183 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5);

#line 1172 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__argmodes_3_f_0(
#line 1172 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 1172 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredId_6,
#line 1172 "loop_inv.m"
  MR_Integer transform_hlds__loop_inv__ProcId_7);

#line 1163 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__uniquely_used_args_3_f_0(
#line 1163 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 1163 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__X_6,
#line 1163 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__M_7,
#line 1163 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__X_4);

#line 1159 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__case_goals_1_f_0_1(
#line 1159 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1159 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1156 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__case_goals_1_f_0(
#line 1156 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Cases_3);

#line 1137 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_8(
#line 1137 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1137 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1102 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_7(
#line 1102 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1102 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1102 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1102 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1107 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_6(
#line 1107 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1107 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1107 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1107 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1134 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_5(
#line 1134 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1134 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1131 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_4(
#line 1131 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1131 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1123 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_3(
#line 1123 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1123 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1121 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_2(
#line 1121 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1121 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1120 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_1(
#line 1120 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1120 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1120 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1120 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 1095 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0(
#line 1095 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
#line 1095 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5);

#line 1049 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_aux_call_2_f_0(
#line 1049 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 1049 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2);

#line 1040 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_out_proc_case_3_f_0(
#line 1040 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_5,
#line 1040 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__CallAux_6,
#line 1040 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Case_7);

#line 1013 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_3_f_0_3(
#line 1013 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1013 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1008 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_3_f_0_2(
#line 1008 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1008 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 1003 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_3_f_0_1(
#line 1003 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1003 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 984 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_3_f_0(
#line 984 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_5,
#line 984 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__CallAux_6,
#line 984 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_7);

#line 950 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_8_p_0(
#line 950 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredProcId_9,
#line 950 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredInfo0_10,
#line 950 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ProcInfo0_11,
#line 950 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__ProcInfo_12,
#line 950 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__CallAux_13,
#line 950 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Body0_14,
#line 950 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo0_15,
#line 950 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__ModuleInfo_16);

#line 591 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_1(
#line 591 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 592 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_3(
#line 592 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 591 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_2(
#line 591 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 591 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_4(
#line 591 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 935 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0(
#line 935 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Info_4,
#line 935 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal0_5);

#line 926 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_case_2_f_0(
#line 926 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Info_4,
#line 926 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Case_5);

#line 899 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0_3(
#line 899 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 899 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 894 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0_2(
#line 894 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 894 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 889 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0_1(
#line 889 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 889 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1);

#line 870 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0(
#line 870 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Info_4,
#line 870 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5);

#line 847 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_9_p_0(
#line 847 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InvGoals_10,
#line 847 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredProcId_11,
#line 847 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__AuxPredProcId_12,
#line 847 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__CallAux_13,
#line 847 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Body_14,
#line 847 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__AuxPredInfo_15,
#line 847 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_0_22,
#line 847 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_23,
#line 847 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_24);

#line 753 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__create_aux_pred_10_p_0(
#line 753 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredProcId_11,
#line 753 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVars_12,
#line 753 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ComputedInvArgs_13,
#line 753 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InitialAuxInstMap_14,
#line 753 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxPredProcId_15,
#line 753 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__CallAux_16,
#line 753 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxPredInfo_17,
#line 753 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxProcInfo_18,
#line 753 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo0_19,
#line 753 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__ModuleInfo_20);

#line 745 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0_1(
#line 745 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 745 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 745 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

#line 742 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0(
#line 742 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Gs_4,
#line 742 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__IM_5);

#line 727 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__add_output_4_p_0(
#line 727 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UniquelyUsedVars_5,
#line 727 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__X_6,
#line 727 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_8,
#line 727 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_InvVars_9);

#line 725 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__add_outputs_5_p_0_1(
#line 725 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 725 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 725 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 725 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 721 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__add_outputs_5_p_0(
#line 721 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_6,
#line 721 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UUVs_7,
#line 721 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_8,
#line 721 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_10,
#line 721 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_InvVars_11);

#line 688 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_1(
#line 688 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 688 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_3(
#line 688 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 688 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_2(
#line 688 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 688 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_4(
#line 688 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 617 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0(
#line 617 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_7,
#line 617 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_8,
#line 617 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_DHGs_0_11,
#line 617 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_DHGs_12,
#line 617 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_DHVs_0_13,
#line 617 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_DHVs_14);

#line 614 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_4_p_0_1(
#line 614 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 614 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 614 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 614 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3,
#line 614 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_4,
#line 614 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_5);

#line 610 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_4_p_0(
#line 610 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 610 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InvGoals_6,
#line 610 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__DontHoistGoals_7,
#line 610 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__DontHoistVars_8);

#line 725 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_13(
#line 725 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 725 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 725 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 725 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3);

#line 591 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_1(
#line 591 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 592 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_3(
#line 592 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 591 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_2(
#line 591 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 591 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_4(
#line 591 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 582 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_5(
#line 582 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 584 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_7(
#line 584 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 582 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_6(
#line 582 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 582 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_8(
#line 582 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 602 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_9(
#line 602 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 603 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_11(
#line 603 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 602 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_10(
#line 602 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 602 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_12(
#line 602 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg);

#line 562 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0(
#line 562 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_8,
#line 562 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UUVs_9,
#line 562 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_10,
#line 562 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__IGs0_11,
#line 562 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__IGs_12,
#line 562 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__IVs0_13,
#line 562 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__IVs_14);

#line 554 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_6_p_0_1(
#line 554 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 554 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 554 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 554 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3,
#line 554 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_4,
#line 554 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_5);

#line 548 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_6_p_0(
#line 548 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_7,
#line 548 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UniquelyUsedVars_8,
#line 548 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InvGoals0_9,
#line 548 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__InvGoals_10,
#line 548 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InvVars0_11,
#line 548 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__InvVars_12);

#line 525 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_2_f_0(
#line 525 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 525 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Y_2);

#line 519 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0_1(
#line 519 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 519 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 519 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2);

#line 514 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0(
#line 514 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 514 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__MaybeInvArgs_6);

#line 506 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_f_0(
#line 506 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 506 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Arg_6,
#line 506 "loop_inv.m"
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

#line 499 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_4(
#line 499 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 499 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 499 "loop_inv.m"
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



#line 1838 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1846 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1854 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1862 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1870 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1878 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1886 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__loop_inv__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1894 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__loop_inv__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1902 "transform_hlds.loop_inv.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__loop_inv__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1910 "transform_hlds.loop_inv.c"
static const MR_PseudoTypeInfo transform_hlds__loop_inv__transform_hlds__loop_inv__field_types_gen_aux_proc_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1918 "transform_hlds.loop_inv.c"
static const MR_ConstString transform_hlds__loop_inv__transform_hlds__loop_inv__field_names_gen_aux_proc_info_0_0[4] = {
  (MR_String) "gapi_module_info",
  (MR_String) "gapi_inv_goals",
  (MR_String) "gapi_pred_proc_id",
  (MR_String) "gapi_call_aux_goal"
};

#line 1926 "transform_hlds.loop_inv.c"
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

#line 1941 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_gen_aux_proc_info_0_0[1] = {
  &transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_gen_aux_proc_info_0_0
};

#line 1946 "transform_hlds.loop_inv.c"
static const MR_DuPtagLayout transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_gen_aux_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_gen_aux_proc_info_0_0
  }
};

#line 1955 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_name_ordered_gen_aux_proc_info_0[1] = {
  &transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_gen_aux_proc_info_0_0
};

#line 1960 "transform_hlds.loop_inv.c"
static const MR_Integer transform_hlds__loop_inv__transform_hlds__loop_inv__functor_number_map_gen_aux_proc_info_0[1] = {
  (MR_Integer) 0
};

#line 1965 "transform_hlds.loop_inv.c"
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

#line 1982 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1990 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__loop_inv__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_TypeInfo) &transform_hlds__loop_inv__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1999 "transform_hlds.loop_inv.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__loop_inv__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__loop_inv__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 2007 "transform_hlds.loop_inv.c"
static const MR_PseudoTypeInfo transform_hlds__loop_inv__transform_hlds__loop_inv__field_types_igc_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__loop_inv__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__loop_inv__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 2014 "transform_hlds.loop_inv.c"
static const MR_ConstString transform_hlds__loop_inv__transform_hlds__loop_inv__field_names_igc_info_0_0[3] = {
  (MR_String) "igc_module_info",
  (MR_String) "igc_path_candidates",
  (MR_String) "igc_rec_calls"
};

#line 2021 "transform_hlds.loop_inv.c"
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

#line 2036 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_igc_info_0_0[1] = {
  &transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_igc_info_0_0
};

#line 2041 "transform_hlds.loop_inv.c"
static const MR_DuPtagLayout transform_hlds__loop_inv__transform_hlds__loop_inv__du_ptag_ordered_igc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__loop_inv__transform_hlds__loop_inv__du_stag_ordered_igc_info_0_0
  }
};

#line 2050 "transform_hlds.loop_inv.c"
static const MR_DuFunctorDescPtr transform_hlds__loop_inv__transform_hlds__loop_inv__du_name_ordered_igc_info_0[1] = {
  &transform_hlds__loop_inv__transform_hlds__loop_inv__du_functor_desc_igc_info_0_0
};

#line 2055 "transform_hlds.loop_inv.c"
static const MR_Integer transform_hlds__loop_inv__transform_hlds__loop_inv__functor_number_map_igc_info_0[1] = {
  (MR_Integer) 0
};

#line 2060 "transform_hlds.loop_inv.c"
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

#line 2077 "transform_hlds.loop_inv.c"
static const MR_VA_TypeInfo_Struct2 transform_hlds__loop_inv____vti_tuple_2hlds__hlds_module__type_ctor_info_module_info_0hlds__instmap__type_ctor_info_instmap_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0
  }
};

#line 2087 "transform_hlds.loop_inv.c"
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

#line 2104 "transform_hlds.loop_inv.c"
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

#line 2121 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0_10001(
#line 2124 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 2126 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
#line 2128 "transform_hlds.loop_inv.c"
{
#line 2130 "transform_hlds.loop_inv.c"
  {
#line 2132 "transform_hlds.loop_inv.c"
    MR_bool transform_hlds__loop_inv__succeeded;

#line 2135 "transform_hlds.loop_inv.c"
    {
#line 2137 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
#line 2140 "transform_hlds.loop_inv.c"
    return transform_hlds__loop_inv__succeeded;
#line 2142 "transform_hlds.loop_inv.c"
  }
#line 2144 "transform_hlds.loop_inv.c"
}

#line 2147 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0_10001(
#line 2150 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 2152 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 2154 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3)
#line 2156 "transform_hlds.loop_inv.c"
{
#line 2158 "transform_hlds.loop_inv.c"
  {
#line 2160 "transform_hlds.loop_inv.c"
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__1_1;

#line 2163 "transform_hlds.loop_inv.c"
    {
#line 2165 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0(&transform_hlds__loop_inv__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_3));
    }
#line 2168 "transform_hlds.loop_inv.c"
    *transform_hlds__loop_inv__wrapper_arg_1 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__1_1));
#line 2170 "transform_hlds.loop_inv.c"
  }
#line 2172 "transform_hlds.loop_inv.c"
}

#line 2175 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____igc_info_0_0_10001(
#line 2178 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 2180 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
#line 2182 "transform_hlds.loop_inv.c"
{
#line 2184 "transform_hlds.loop_inv.c"
  {
#line 2186 "transform_hlds.loop_inv.c"
    MR_bool transform_hlds__loop_inv__succeeded;

#line 2189 "transform_hlds.loop_inv.c"
    {
#line 2191 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv____Unify____igc_info_0_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
#line 2194 "transform_hlds.loop_inv.c"
    return transform_hlds__loop_inv__succeeded;
#line 2196 "transform_hlds.loop_inv.c"
  }
#line 2198 "transform_hlds.loop_inv.c"
}

#line 2201 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____igc_info_0_0_10001(
#line 2204 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 2206 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 2208 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3)
#line 2210 "transform_hlds.loop_inv.c"
{
#line 2212 "transform_hlds.loop_inv.c"
  {
#line 2214 "transform_hlds.loop_inv.c"
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__1_1;

#line 2217 "transform_hlds.loop_inv.c"
    {
#line 2219 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv____Compare____igc_info_0_0(&transform_hlds__loop_inv__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_3));
    }
#line 2222 "transform_hlds.loop_inv.c"
    *transform_hlds__loop_inv__wrapper_arg_1 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__1_1));
#line 2224 "transform_hlds.loop_inv.c"
  }
#line 2226 "transform_hlds.loop_inv.c"
}

#line 2229 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____inst_info_0_0_10001(
#line 2232 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 2234 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
#line 2236 "transform_hlds.loop_inv.c"
{
#line 2238 "transform_hlds.loop_inv.c"
  {
#line 2240 "transform_hlds.loop_inv.c"
    MR_bool transform_hlds__loop_inv__succeeded;

#line 2243 "transform_hlds.loop_inv.c"
    {
#line 2245 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv____Unify____inst_info_0_0(((MR_Tuple) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Tuple) transform_hlds__loop_inv__wrapper_arg_2));
    }
#line 2248 "transform_hlds.loop_inv.c"
    return transform_hlds__loop_inv__succeeded;
#line 2250 "transform_hlds.loop_inv.c"
  }
#line 2252 "transform_hlds.loop_inv.c"
}

#line 2255 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____inst_info_0_0_10001(
#line 2258 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 2260 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 2262 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3)
#line 2264 "transform_hlds.loop_inv.c"
{
#line 2266 "transform_hlds.loop_inv.c"
  {
#line 2268 "transform_hlds.loop_inv.c"
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__1_1;

#line 2271 "transform_hlds.loop_inv.c"
    {
#line 2273 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv____Compare____inst_info_0_0(&transform_hlds__loop_inv__conv0_HeadVar__1_1, ((MR_Tuple) transform_hlds__loop_inv__wrapper_arg_2), ((MR_Tuple) transform_hlds__loop_inv__wrapper_arg_3));
    }
#line 2276 "transform_hlds.loop_inv.c"
    *transform_hlds__loop_inv__wrapper_arg_1 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__1_1));
#line 2278 "transform_hlds.loop_inv.c"
  }
#line 2280 "transform_hlds.loop_inv.c"
}

#line 2283 "transform_hlds.loop_inv.c"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____rec_call_0_0_10001(
#line 2286 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 2288 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
#line 2290 "transform_hlds.loop_inv.c"
{
#line 2292 "transform_hlds.loop_inv.c"
  {
#line 2294 "transform_hlds.loop_inv.c"
    MR_bool transform_hlds__loop_inv__succeeded;

#line 2297 "transform_hlds.loop_inv.c"
    {
#line 2299 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv____Unify____rec_call_0_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
#line 2302 "transform_hlds.loop_inv.c"
    return transform_hlds__loop_inv__succeeded;
#line 2304 "transform_hlds.loop_inv.c"
  }
#line 2306 "transform_hlds.loop_inv.c"
}

#line 2309 "transform_hlds.loop_inv.c"
static void MR_CALL 
transform_hlds__loop_inv____Compare____rec_call_0_0_10001(
#line 2312 "transform_hlds.loop_inv.c"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_1,
#line 2314 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 2316 "transform_hlds.loop_inv.c"
  MR_Box transform_hlds__loop_inv__wrapper_arg_3)
#line 2318 "transform_hlds.loop_inv.c"
{
#line 2320 "transform_hlds.loop_inv.c"
  {
#line 2322 "transform_hlds.loop_inv.c"
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__1_1;

#line 2325 "transform_hlds.loop_inv.c"
    {
#line 2327 "transform_hlds.loop_inv.c"
      transform_hlds__loop_inv____Compare____rec_call_0_0(&transform_hlds__loop_inv__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_3));
    }
#line 2330 "transform_hlds.loop_inv.c"
    *transform_hlds__loop_inv__wrapper_arg_1 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__1_1));
#line 2332 "transform_hlds.loop_inv.c"
  }
#line 2334 "transform_hlds.loop_inv.c"
}

#line 1071 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_2_f_0(
#line 1071 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 1071 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2)
#line 1071 "loop_inv.m"
{
#line 1073 "loop_inv.m"
  {
#line 1073 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1073 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__3_3;

#line 1073 "loop_inv.m"
    if ((transform_hlds__loop_inv__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1073 "loop_inv.m"
      transform_hlds__loop_inv__HeadVar__3_3 = transform_hlds__loop_inv__HeadVar__2_2;
#line 1073 "loop_inv.m"
    else
#line 1073 "loop_inv.m"
      {
#line 1073 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 1)));
#line 1073 "loop_inv.m"
        MR_Box transform_hlds__loop_inv__V_18_18 = (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 0));

#line 1073 "loop_inv.m"
        if ((transform_hlds__loop_inv__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1075 "loop_inv.m"
          {
#line 1076 "loop_inv.m"
            {
#line 1076 "loop_inv.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.replace_initial_args\'/2", (MR_String) "first arg longer than second");
            }
#line 1075 "loop_inv.m"
          }
#line 1073 "loop_inv.m"
        else
#line 1074 "loop_inv.m"
          {
#line 1074 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__Ys_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 1074 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_9_9;
#line 1074 "loop_inv.m"
            MR_Box transform_hlds__loop_inv__V_7_7 = (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0));

#line 1074 "loop_inv.m"
            {
#line 1074 "loop_inv.m"
              transform_hlds__loop_inv__V_9_9 = transform_hlds__loop_inv__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_2_f_0(transform_hlds__loop_inv__V_17_17, transform_hlds__loop_inv__Ys_8);
            }
#line 1074 "loop_inv.m"
            {
#line 1074 "loop_inv.m"
              transform_hlds__loop_inv__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1074 "loop_inv.m"
              MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__3_3, 0) = transform_hlds__loop_inv__V_18_18;
#line 1074 "loop_inv.m"
              MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__loop_inv__V_9_9));
#line 1074 "loop_inv.m"
            }
#line 1074 "loop_inv.m"
          }
#line 1073 "loop_inv.m"
      }
#line 1073 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__3_3;
#line 1073 "loop_inv.m"
  }
#line 1071 "loop_inv.m"
}

#line 1332 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__rhs_modes__1332__1_1_f_0(
#line 1332 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_9)
#line 1332 "loop_inv.m"
{
#line 1332 "loop_inv.m"
  {
#line 1332 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1332 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__2_10;
#line 1332 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_9, (MR_Integer) 0)));
#line 1332 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_9, (MR_Integer) 1)));
#line 1332 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Pre_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_11_11, (MR_Integer) 1)));
#line 1332 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Post_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_12_12, (MR_Integer) 1)));
#line 1332 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_11_11, (MR_Integer) 0)));
#line 1332 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_12_12, (MR_Integer) 0)));

#line 1332 "loop_inv.m"
    {
#line 1332 "loop_inv.m"
      transform_hlds__loop_inv__HeadVar__2_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1332 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_10, 0) = ((MR_Box) (transform_hlds__loop_inv__Pre_16));
#line 1332 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_10, 1) = ((MR_Box) (transform_hlds__loop_inv__Post_18));
#line 1332 "loop_inv.m"
    }
#line 1332 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__2_10;
#line 1332 "loop_inv.m"
  }
#line 1332 "loop_inv.m"
}

#line 1159 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__case_goals__1159__1_1_f_0(
#line 1159 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_8)
#line 1159 "loop_inv.m"
{
#line 1159 "loop_inv.m"
  {
#line 1159 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1159 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__2_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_8, (MR_Integer) 2)));
#line 1159 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___MainConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_8, (MR_Integer) 0)));
#line 1159 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___OtherConsIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_8, (MR_Integer) 1)));

#line 1159 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__2_9;
#line 1159 "loop_inv.m"
  }
#line 1159 "loop_inv.m"
}

#line 745 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__compute_initial_aux_instmap__745__1_2_f_0(
#line 745 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_12,
#line 745 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_13)
#line 745 "loop_inv.m"
{
#line 745 "loop_inv.m"
  {
#line 745 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 745 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__3_14;
#line 745 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__IMD_11;
#line 745 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_12, (MR_Integer) 1)));
#line 746 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___GoalExpr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_12, (MR_Integer) 0)));

#line 747 "loop_inv.m"
    {
#line 747 "loop_inv.m"
      transform_hlds__loop_inv__IMD_11 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__loop_inv__GoalInfo_17);
    }
#line 748 "loop_inv.m"
    {
#line 748 "loop_inv.m"
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__loop_inv__HeadVar__2_13, transform_hlds__loop_inv__IMD_11, &transform_hlds__loop_inv__HeadVar__3_14);
    }
#line 745 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__3_14;
#line 745 "loop_inv.m"
  }
#line 745 "loop_inv.m"
}

#line 499 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__IntroducedFrom__func__inv_args__499__1_1_f_0(
#line 499 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_17,
#line 499 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__2_18)
#line 499 "loop_inv.m"
{
#line 499 "loop_inv.m"
  {
#line 499 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__HeadVar__1_17)) == (MR_mktag((MR_Integer) 1)));

#line 499 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 499 "loop_inv.m"
      *transform_hlds__loop_inv__HeadVar__2_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__1_17, (MR_Integer) 0)));
#line 499 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 499 "loop_inv.m"
  }
#line 499 "loop_inv.m"
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

#line 699 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv____Compare____inst_info_0_0(
#line 699 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
#line 699 "loop_inv.m"
  MR_Tuple transform_hlds__loop_inv__HeadVar__2_2,
#line 699 "loop_inv.m"
  MR_Tuple transform_hlds__loop_inv__HeadVar__3_3)
#line 699 "loop_inv.m"
{
#line 699 "loop_inv.m"
  {
#line 699 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 699 "loop_inv.m"
    MR_Tuple transform_hlds__loop_inv__Cast_HeadVar1_4 = transform_hlds__loop_inv__HeadVar__2_2;
#line 699 "loop_inv.m"
    MR_Tuple transform_hlds__loop_inv__Cast_HeadVar2_5 = transform_hlds__loop_inv__HeadVar__3_3;

#line 699 "loop_inv.m"
    {
#line 699 "loop_inv.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_3[0], transform_hlds__loop_inv__HeadVar__1_1, ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar2_5)));
#line 699 "loop_inv.m"
      return;
    }
#line 699 "loop_inv.m"
  }
#line 699 "loop_inv.m"
}

#line 699 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____inst_info_0_0(
#line 699 "loop_inv.m"
  MR_Tuple transform_hlds__loop_inv__HeadVar__1_1,
#line 699 "loop_inv.m"
  MR_Tuple transform_hlds__loop_inv__HeadVar__2_2)
#line 699 "loop_inv.m"
{
#line 699 "loop_inv.m"
  {
#line 699 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 699 "loop_inv.m"
    MR_Tuple transform_hlds__loop_inv__Cast_HeadVar1_3 = transform_hlds__loop_inv__HeadVar__1_1;
#line 699 "loop_inv.m"
    MR_Tuple transform_hlds__loop_inv__Cast_HeadVar2_4 = transform_hlds__loop_inv__HeadVar__2_2;

#line 699 "loop_inv.m"
    {
#line 699 "loop_inv.m"
      return transform_hlds__loop_inv__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_3[0], ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__loop_inv__Cast_HeadVar2_4)));
    }
#line 699 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 699 "loop_inv.m"
  }
#line 699 "loop_inv.m"
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
#line 2694 "transform_hlds.loop_inv.c"
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
#line 2720 "transform_hlds.loop_inv.c"
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
#line 2740 "transform_hlds.loop_inv.c"
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

#line 2815 "transform_hlds.loop_inv.c"
        {
#line 2817 "transform_hlds.loop_inv.c"
          transform_hlds__loop_inv__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__loop_inv__V_3_3, transform_hlds__loop_inv__V_6_6);
        }
#line 267 "loop_inv.m"
        if (transform_hlds__loop_inv__succeeded)
#line 267 "loop_inv.m"
          {
#line 2824 "transform_hlds.loop_inv.c"
            transform_hlds__loop_inv__TypeInfo_12_12 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[5];
#line 2826 "transform_hlds.loop_inv.c"
            {
#line 2828 "transform_hlds.loop_inv.c"
              transform_hlds__loop_inv__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__loop_inv__TypeInfo_12_12, ((MR_Box) (transform_hlds__loop_inv__V_4_4)), ((MR_Box) (transform_hlds__loop_inv__V_7_7)));
            }
#line 267 "loop_inv.m"
            if (transform_hlds__loop_inv__succeeded)
#line 267 "loop_inv.m"
              {
#line 2835 "transform_hlds.loop_inv.c"
                transform_hlds__loop_inv__TypeInfo_13_13 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[6];
#line 2837 "transform_hlds.loop_inv.c"
                {
#line 2839 "transform_hlds.loop_inv.c"
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

#line 836 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv____Compare____gen_aux_proc_info_0_0(
#line 836 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__HeadVar__1_1,
#line 836 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2,
#line 836 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__3_3)
#line 836 "loop_inv.m"
{
#line 836 "loop_inv.m"
  {
#line 836 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 836 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__CastX_15 = (MR_Integer) transform_hlds__loop_inv__HeadVar__2_2;
#line 836 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__CastY_16 = (MR_Integer) transform_hlds__loop_inv__HeadVar__3_3;

#line 836 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__CastX_15 == transform_hlds__loop_inv__CastY_16);
#line 836 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 2879 "transform_hlds.loop_inv.c"
      *transform_hlds__loop_inv__HeadVar__1_1 = (MR_Integer) 0;
#line 836 "loop_inv.m"
    else
#line 836 "loop_inv.m"
      {
#line 836 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
#line 836 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 836 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 2)));
#line 836 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 3)));
#line 836 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 0)));
#line 836 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 1)));
#line 836 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 2)));
#line 836 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, (MR_Integer) 3)));
#line 836 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_12_12;

#line 836 "loop_inv.m"
        {
#line 836 "loop_inv.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__loop_inv__V_12_12, transform_hlds__loop_inv__V_4_4, transform_hlds__loop_inv__V_8_8);
        }
#line 2909 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_12_12 == (MR_Integer) 0);
#line 836 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 836 "loop_inv.m"
        if (transform_hlds__loop_inv__succeeded)
#line 836 "loop_inv.m"
          *transform_hlds__loop_inv__HeadVar__1_1 = transform_hlds__loop_inv__V_12_12;
#line 836 "loop_inv.m"
        else
#line 836 "loop_inv.m"
          {
#line 836 "loop_inv.m"
            MR_Word transform_hlds__loop_inv__V_13_13;

#line 836 "loop_inv.m"
            {
#line 836 "loop_inv.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[1], &transform_hlds__loop_inv__V_13_13, ((MR_Box) (transform_hlds__loop_inv__V_5_5)), ((MR_Box) (transform_hlds__loop_inv__V_9_9)));
            }
#line 2929 "transform_hlds.loop_inv.c"
            transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_13_13 == (MR_Integer) 0);
#line 836 "loop_inv.m"
            transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 836 "loop_inv.m"
            if (transform_hlds__loop_inv__succeeded)
#line 836 "loop_inv.m"
              *transform_hlds__loop_inv__HeadVar__1_1 = transform_hlds__loop_inv__V_13_13;
#line 836 "loop_inv.m"
            else
#line 836 "loop_inv.m"
              {
#line 836 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_14_14;

#line 836 "loop_inv.m"
                {
#line 836 "loop_inv.m"
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__loop_inv__V_14_14, transform_hlds__loop_inv__V_6_6, transform_hlds__loop_inv__V_10_10);
                }
#line 2949 "transform_hlds.loop_inv.c"
                transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__V_14_14 == (MR_Integer) 0);
#line 836 "loop_inv.m"
                transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 836 "loop_inv.m"
                if (transform_hlds__loop_inv__succeeded)
#line 836 "loop_inv.m"
                  *transform_hlds__loop_inv__HeadVar__1_1 = transform_hlds__loop_inv__V_14_14;
#line 836 "loop_inv.m"
                else
#line 836 "loop_inv.m"
                  {
#line 836 "loop_inv.m"
                    hlds__hlds_goal____Compare____hlds_goal_0_0(transform_hlds__loop_inv__HeadVar__1_1, transform_hlds__loop_inv__V_7_7, transform_hlds__loop_inv__V_11_11);
#line 836 "loop_inv.m"
                    return;
                  }
#line 836 "loop_inv.m"
              }
#line 836 "loop_inv.m"
          }
#line 836 "loop_inv.m"
      }
#line 836 "loop_inv.m"
  }
#line 836 "loop_inv.m"
}

#line 836 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv____Unify____gen_aux_proc_info_0_0(
#line 836 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 836 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2)
#line 836 "loop_inv.m"
{
#line 836 "loop_inv.m"
  {
#line 836 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 836 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__CastX_11 = (MR_Integer) transform_hlds__loop_inv__HeadVar__1_1;
#line 836 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__CastY_12 = (MR_Integer) transform_hlds__loop_inv__HeadVar__2_2;

#line 836 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__CastX_11 == transform_hlds__loop_inv__CastY_12);
#line 836 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 836 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 836 "loop_inv.m"
    else
#line 836 "loop_inv.m"
      {
#line 836 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__TypeInfo_14_14;
#line 836 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 0)));
#line 836 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 1)));
#line 836 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 2)));
#line 836 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 3)));
#line 836 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
#line 836 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 836 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 2)));
#line 836 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 3)));

#line 3024 "transform_hlds.loop_inv.c"
        {
#line 3026 "transform_hlds.loop_inv.c"
          transform_hlds__loop_inv__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__loop_inv__V_3_3, transform_hlds__loop_inv__V_7_7);
        }
#line 836 "loop_inv.m"
        if (transform_hlds__loop_inv__succeeded)
#line 836 "loop_inv.m"
          {
#line 3033 "transform_hlds.loop_inv.c"
            transform_hlds__loop_inv__TypeInfo_14_14 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[1];
#line 3035 "transform_hlds.loop_inv.c"
            {
#line 3037 "transform_hlds.loop_inv.c"
              transform_hlds__loop_inv__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__loop_inv__TypeInfo_14_14, ((MR_Box) (transform_hlds__loop_inv__V_4_4)), ((MR_Box) (transform_hlds__loop_inv__V_8_8)));
            }
#line 836 "loop_inv.m"
            if (transform_hlds__loop_inv__succeeded)
#line 836 "loop_inv.m"
              {
#line 3044 "transform_hlds.loop_inv.c"
                {
#line 3046 "transform_hlds.loop_inv.c"
                  transform_hlds__loop_inv__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__loop_inv__V_5_5, transform_hlds__loop_inv__V_9_9);
                }
#line 836 "loop_inv.m"
                if (transform_hlds__loop_inv__succeeded)
#line 3051 "transform_hlds.loop_inv.c"
                  {
#line 3053 "transform_hlds.loop_inv.c"
                    return transform_hlds__loop_inv__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__loop_inv__V_6_6, transform_hlds__loop_inv__V_10_10);
                  }
#line 836 "loop_inv.m"
              }
#line 836 "loop_inv.m"
          }
#line 836 "loop_inv.m"
      }
#line 836 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 836 "loop_inv.m"
  }
#line 836 "loop_inv.m"
}

#line 1332 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__rhs_modes_1_f_0_1(
#line 1332 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1332 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1332 "loop_inv.m"
{
#line 1332 "loop_inv.m"
  {
#line 1332 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1332 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1332 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__2_10;

#line 1332 "loop_inv.m"
    {
#line 1332 "loop_inv.m"
      transform_hlds__loop_inv__conv0_HeadVar__2_10 = transform_hlds__loop_inv__IntroducedFrom__func__rhs_modes__1332__1_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1332 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__2_10));
#line 1332 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1332 "loop_inv.m"
  }
#line 1332 "loop_inv.m"
}

#line 1329 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__rhs_modes_1_f_0(
#line 1329 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UniModes_3)
#line 1329 "loop_inv.m"
{
#line 1331 "loop_inv.m"
  {
#line 1331 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1331 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__2_2;

#line 1332 "loop_inv.m"
    {
#line 1332 "loop_inv.m"
      transform_hlds__loop_inv__HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[10], transform_hlds__loop_inv__UniModes_3);
    }
#line 1331 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__2_2;
#line 1331 "loop_inv.m"
  }
#line 1329 "loop_inv.m"
}

#line 1322 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__output_arg_3_f_0(
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
#line 1324 "loop_inv.m"
  {
#line 1324 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;

#line 1324 "loop_inv.m"
    *transform_hlds__loop_inv__X_4 = transform_hlds__loop_inv__X_6;
#line 1325 "loop_inv.m"
    {
#line 1325 "loop_inv.m"
      return transform_hlds__loop_inv__succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__M_7);
    }
#line 1324 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1324 "loop_inv.m"
  }
#line 1322 "loop_inv.m"
}

#line 1291 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_5(
#line 1291 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1291 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1291 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1291 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1291 "loop_inv.m"
{
#line 1291 "loop_inv.m"
  {
#line 1291 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1291 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1291 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv4_X_4;

#line 1291 "loop_inv.m"
    {
#line 1291 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__output_arg_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv4_X_4);
    }
#line 1291 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1291 "loop_inv.m"
      {
#line 1291 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv4_X_4));
#line 1291 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1291 "loop_inv.m"
      }
#line 1291 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1291 "loop_inv.m"
  }
#line 1291 "loop_inv.m"
}

#line 1271 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_4(
#line 1271 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1271 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1271 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1271 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1271 "loop_inv.m"
{
#line 1271 "loop_inv.m"
  {
#line 1271 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1271 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1271 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv3_X_4;

#line 1271 "loop_inv.m"
    {
#line 1271 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__output_arg_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv3_X_4);
    }
#line 1271 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1271 "loop_inv.m"
      {
#line 1271 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv3_X_4));
#line 1271 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1271 "loop_inv.m"
      }
#line 1271 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1271 "loop_inv.m"
  }
#line 1271 "loop_inv.m"
}

#line 1275 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_3(
#line 1275 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1275 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1275 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1275 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1275 "loop_inv.m"
{
#line 1275 "loop_inv.m"
  {
#line 1275 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1275 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1275 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv2_X_4;

#line 1275 "loop_inv.m"
    {
#line 1275 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__output_arg_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv2_X_4);
    }
#line 1275 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1275 "loop_inv.m"
      {
#line 1275 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv2_X_4));
#line 1275 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1275 "loop_inv.m"
      }
#line 1275 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1275 "loop_inv.m"
  }
#line 1275 "loop_inv.m"
}

#line 1280 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_2(
#line 1280 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1280 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1280 "loop_inv.m"
{
#line 1280 "loop_inv.m"
  {
#line 1280 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1280 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1280 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv1_HeadVar__2_2;

#line 1280 "loop_inv.m"
    {
#line 1280 "loop_inv.m"
      transform_hlds__loop_inv__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1280 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv1_HeadVar__2_2));
#line 1280 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1280 "loop_inv.m"
  }
#line 1280 "loop_inv.m"
}

#line 1279 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0_1(
#line 1279 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1279 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1279 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1279 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1279 "loop_inv.m"
{
#line 1279 "loop_inv.m"
  {
#line 1279 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1279 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1279 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_X_4;

#line 1279 "loop_inv.m"
    {
#line 1279 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__output_arg_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv0_X_4);
    }
#line 1279 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1279 "loop_inv.m"
      {
#line 1279 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_X_4));
#line 1279 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1279 "loop_inv.m"
      }
#line 1279 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1279 "loop_inv.m"
  }
#line 1279 "loop_inv.m"
}

#line 1265 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__goal_outputs_2_f_0(
#line 1265 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
#line 1265 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5)
#line 1265 "loop_inv.m"
{
#line 1267 "loop_inv.m"
  {
#line 1267 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1267 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Outputs_6;
#line 1267 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 0)));
#line 1268 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 1)));

#line 1273 "loop_inv.m"
#line 1273 "loop_inv.m"
    switch (MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) {
#line 1273 "loop_inv.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1273 "loop_inv.m"
      case (MR_Integer) 0:
#line 1314 "loop_inv.m"
        {
#line 1315 "loop_inv.m"
          {
#line 1315 "loop_inv.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.goal_outputs\'/2", (MR_String) "compound goal");
          }
#line 1314 "loop_inv.m"
        }
#line 1273 "loop_inv.m"
        break;
#line 1273 "loop_inv.m"
      case (MR_Integer) 1:
#line 1283 "loop_inv.m"
        {
#line 1283 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__LHS_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
#line 1283 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__Kind_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1283 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___RHS_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1283 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1283 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));

#line 1288 "loop_inv.m"
#line 1288 "loop_inv.m"
          switch (MR_tag((MR_Word) transform_hlds__loop_inv__Kind_27)) {
#line 1288 "loop_inv.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1288 "loop_inv.m"
            case (MR_Integer) 0:
#line 1286 "loop_inv.m"
              {
#line 1287 "loop_inv.m"
                {
#line 1287 "loop_inv.m"
                  transform_hlds__loop_inv__Outputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1287 "loop_inv.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Outputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_24));
#line 1287 "loop_inv.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Outputs_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1287 "loop_inv.m"
                }
#line 1286 "loop_inv.m"
              }
#line 1288 "loop_inv.m"
              break;
#line 1288 "loop_inv.m"
            case (MR_Integer) 1:
#line 1290 "loop_inv.m"
              {
#line 1290 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__TypeInfo_98_98 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1290 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__RHSArgs_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 2)));
#line 1290 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__ArgUniModes_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 3)));
#line 1290 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_67_67;
#line 1290 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_68_68;
#line 1290 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 0)));
#line 1290 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 1)));
#line 1290 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 4)));
#line 1290 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_27, (MR_Integer) 5)));

#line 1291 "loop_inv.m"
                {
#line 1291 "loop_inv.m"
                  transform_hlds__loop_inv__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1291 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_67_67, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1291 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_67_67, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_5));
#line 1291 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1291 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_67_67, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1291 "loop_inv.m"
                }
#line 1292 "loop_inv.m"
                {
#line 1292 "loop_inv.m"
                  transform_hlds__loop_inv__V_68_68 = transform_hlds__loop_inv__rhs_modes_1_f_0(transform_hlds__loop_inv__ArgUniModes_39);
                }
#line 1291 "loop_inv.m"
                {
#line 1291 "loop_inv.m"
                  transform_hlds__loop_inv__Outputs_6 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_98_98, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_98_98, transform_hlds__loop_inv__V_67_67, transform_hlds__loop_inv__RHSArgs_38, transform_hlds__loop_inv__V_68_68);
                }
#line 1290 "loop_inv.m"
              }
#line 1288 "loop_inv.m"
              break;
#line 1288 "loop_inv.m"
            case (MR_Integer) 2:
#line 1295 "loop_inv.m"
              {
#line 1296 "loop_inv.m"
                {
#line 1296 "loop_inv.m"
                  transform_hlds__loop_inv__Outputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1296 "loop_inv.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Outputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_24));
#line 1296 "loop_inv.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Outputs_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1296 "loop_inv.m"
                }
#line 1295 "loop_inv.m"
              }
#line 1288 "loop_inv.m"
              break;
#line 1288 "loop_inv.m"
            case (MR_Integer) 3:
#line 1288 "loop_inv.m"
#line 1288 "loop_inv.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__Kind_27, (MR_Integer) 0)))) {
#line 1288 "loop_inv.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1288 "loop_inv.m"
                case (MR_Integer) 0:
#line 1300 "loop_inv.m"
                  transform_hlds__loop_inv__Outputs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1288 "loop_inv.m"
                  break;
#line 1288 "loop_inv.m"
                case (MR_Integer) 1:
#line 1304 "loop_inv.m"
                  transform_hlds__loop_inv__Outputs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1288 "loop_inv.m"
                  break;
#line 1288 "loop_inv.m"
              }
#line 1288 "loop_inv.m"
              break;
#line 1288 "loop_inv.m"
          }
#line 1283 "loop_inv.m"
        }
#line 1273 "loop_inv.m"
        break;
#line 1273 "loop_inv.m"
      case (MR_Integer) 2:
#line 1270 "loop_inv.m"
        {
#line 1270 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__TypeInfo_80_80 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1270 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
#line 1270 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1270 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1270 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_75_75;
#line 1270 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_76_76;
#line 1270 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1270 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1270 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

#line 1271 "loop_inv.m"
          {
#line 1271 "loop_inv.m"
            transform_hlds__loop_inv__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1271 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_75_75, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1271 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_75_75, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_4));
#line 1271 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1271 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_75_75, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1271 "loop_inv.m"
          }
#line 1272 "loop_inv.m"
          {
#line 1272 "loop_inv.m"
            transform_hlds__loop_inv__V_76_76 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_9, transform_hlds__loop_inv__ProcId_10);
          }
#line 1271 "loop_inv.m"
          {
#line 1271 "loop_inv.m"
            transform_hlds__loop_inv__Outputs_6 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_80_80, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_80_80, transform_hlds__loop_inv__V_75_75, transform_hlds__loop_inv__Args_11, transform_hlds__loop_inv__V_76_76);
          }
#line 1270 "loop_inv.m"
        }
#line 1273 "loop_inv.m"
        break;
#line 1273 "loop_inv.m"
      case (MR_Integer) 3:
#line 1273 "loop_inv.m"
#line 1273 "loop_inv.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) {
#line 1273 "loop_inv.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1273 "loop_inv.m"
          case (MR_Integer) 0:
#line 1274 "loop_inv.m"
            {
#line 1274 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeInfo_85_85 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1274 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__ArgModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1274 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_74_74;
#line 1274 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Args_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1274 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1274 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1274 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

#line 1275 "loop_inv.m"
              {
#line 1275 "loop_inv.m"
                transform_hlds__loop_inv__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1275 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_74_74, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1275 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_74_74, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_3));
#line 1275 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1275 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_74_74, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1275 "loop_inv.m"
              }
#line 1275 "loop_inv.m"
              {
#line 1275 "loop_inv.m"
                transform_hlds__loop_inv__Outputs_6 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_85_85, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_85_85, transform_hlds__loop_inv__V_74_74, transform_hlds__loop_inv__Args_77, transform_hlds__loop_inv__ArgModes_16);
              }
#line 1274 "loop_inv.m"
            }
#line 1273 "loop_inv.m"
            break;
#line 1273 "loop_inv.m"
          case (MR_Integer) 1:
#line 1278 "loop_inv.m"
            {
#line 1278 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeInfo_90_90 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1278 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__ForeignArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1278 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_70_70;
#line 1278 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_71_71;
#line 1278 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_73_73;
#line 1278 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__PredId_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1278 "loop_inv.m"
              MR_Integer transform_hlds__loop_inv__ProcId_79 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1278 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1278 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));
#line 1278 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 6)));
#line 1278 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 7)));

#line 1279 "loop_inv.m"
              {
#line 1279 "loop_inv.m"
                transform_hlds__loop_inv__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1279 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_70_70, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1279 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_70_70, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_outputs_2_f_0_1));
#line 1279 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1279 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_70_70, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1279 "loop_inv.m"
              }
#line 1280 "loop_inv.m"
              {
#line 1280 "loop_inv.m"
                transform_hlds__loop_inv__V_71_71 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, transform_hlds__loop_inv__TypeInfo_90_90, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[9], transform_hlds__loop_inv__ForeignArgs_20);
              }
#line 1281 "loop_inv.m"
              {
#line 1281 "loop_inv.m"
                transform_hlds__loop_inv__V_73_73 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_78, transform_hlds__loop_inv__ProcId_79);
              }
#line 1279 "loop_inv.m"
              {
#line 1279 "loop_inv.m"
                transform_hlds__loop_inv__Outputs_6 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_90_90, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_90_90, transform_hlds__loop_inv__V_70_70, transform_hlds__loop_inv__V_71_71, transform_hlds__loop_inv__V_73_73);
              }
#line 1278 "loop_inv.m"
            }
#line 1273 "loop_inv.m"
            break;
#line 1273 "loop_inv.m"
          case (MR_Integer) 2:
#line 1273 "loop_inv.m"
          case (MR_Integer) 3:
#line 1273 "loop_inv.m"
          case (MR_Integer) 4:
#line 1273 "loop_inv.m"
          case (MR_Integer) 5:
#line 1273 "loop_inv.m"
          case (MR_Integer) 6:
#line 1273 "loop_inv.m"
          case (MR_Integer) 7:
#line 1314 "loop_inv.m"
            {
#line 1315 "loop_inv.m"
              {
#line 1315 "loop_inv.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.goal_outputs\'/2", (MR_String) "compound goal");
              }
#line 1314 "loop_inv.m"
            }
#line 1273 "loop_inv.m"
            break;
#line 1273 "loop_inv.m"
        }
#line 1273 "loop_inv.m"
        break;
#line 1273 "loop_inv.m"
    }
#line 1267 "loop_inv.m"
    return transform_hlds__loop_inv__Outputs_6;
#line 1267 "loop_inv.m"
  }
#line 1265 "loop_inv.m"
}

#line 1254 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__input_arg_3_f_0(
#line 1254 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 1254 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__X_6,
#line 1254 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__M_7,
#line 1254 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__X_4)
#line 1254 "loop_inv.m"
{
#line 1256 "loop_inv.m"
  {
#line 1256 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1256 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InInst_8;
#line 1257 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___OutInst_9;

#line 1256 "loop_inv.m"
    *transform_hlds__loop_inv__X_4 = transform_hlds__loop_inv__X_6;
#line 1257 "loop_inv.m"
    {
#line 1257 "loop_inv.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__M_7, &transform_hlds__loop_inv__InInst_8, &transform_hlds__loop_inv___OutInst_9);
    }
#line 1258 "loop_inv.m"
    {
#line 1258 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__InInst_8);
    }
#line 1258 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 1256 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1256 "loop_inv.m"
  }
#line 1254 "loop_inv.m"
}

#line 1212 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_6(
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
    MR_Word transform_hlds__loop_inv__conv5_X_4;

#line 1212 "loop_inv.m"
    {
#line 1212 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__input_arg_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv5_X_4);
    }
#line 1212 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1212 "loop_inv.m"
      {
#line 1212 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv5_X_4));
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

#line 1207 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_5(
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
    MR_Word transform_hlds__loop_inv__conv4_X_4;

#line 1207 "loop_inv.m"
    {
#line 1207 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__input_arg_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv4_X_4);
    }
#line 1207 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1207 "loop_inv.m"
      {
#line 1207 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv4_X_4));
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

#line 1189 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_4(
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
    MR_Word transform_hlds__loop_inv__conv3_X_4;

#line 1189 "loop_inv.m"
    {
#line 1189 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__input_arg_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv3_X_4);
    }
#line 1189 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1189 "loop_inv.m"
      {
#line 1189 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv3_X_4));
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

#line 1194 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_3(
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
    MR_Word transform_hlds__loop_inv__conv2_X_4;

#line 1194 "loop_inv.m"
    {
#line 1194 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__input_arg_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv2_X_4);
    }
#line 1194 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1194 "loop_inv.m"
      {
#line 1194 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv2_X_4));
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

#line 1200 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_2(
#line 1200 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1200 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1200 "loop_inv.m"
{
#line 1200 "loop_inv.m"
  {
#line 1200 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1200 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1200 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv1_HeadVar__2_2;

#line 1200 "loop_inv.m"
    {
#line 1200 "loop_inv.m"
      transform_hlds__loop_inv__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1200 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv1_HeadVar__2_2));
#line 1200 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1200 "loop_inv.m"
  }
#line 1200 "loop_inv.m"
}

#line 1199 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0_1(
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
    MR_Word transform_hlds__loop_inv__conv0_X_4;

#line 1199 "loop_inv.m"
    {
#line 1199 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__input_arg_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv0_X_4);
    }
#line 1199 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1199 "loop_inv.m"
      {
#line 1199 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_X_4));
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

#line 1183 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__goal_inputs_2_f_0(
#line 1183 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
#line 1183 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5)
#line 1183 "loop_inv.m"
{
#line 1185 "loop_inv.m"
  {
#line 1185 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1185 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Inputs_6;
#line 1185 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 0)));
#line 1186 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 1)));

#line 1191 "loop_inv.m"
#line 1191 "loop_inv.m"
    switch (MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) {
#line 1191 "loop_inv.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1191 "loop_inv.m"
      case (MR_Integer) 0:
#line 1246 "loop_inv.m"
        {
#line 1247 "loop_inv.m"
          {
#line 1247 "loop_inv.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.goal_inputs\'/2", (MR_String) "compound goal");
          }
#line 1246 "loop_inv.m"
        }
#line 1191 "loop_inv.m"
        break;
#line 1191 "loop_inv.m"
      case (MR_Integer) 1:
#line 1203 "loop_inv.m"
        {
#line 1203 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__LHS_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
#line 1203 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__UnifyRHS_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1203 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__Kind_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1203 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1203 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));

#line 1209 "loop_inv.m"
#line 1209 "loop_inv.m"
          switch (MR_tag((MR_Word) transform_hlds__loop_inv__Kind_29)) {
#line 1209 "loop_inv.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1209 "loop_inv.m"
            case (MR_Integer) 0:
#line 1206 "loop_inv.m"
              {
#line 1206 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__TypeInfo_125_125 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1206 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__RHSArgs_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 2)));
#line 1206 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__ArgUniModes_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 3)));
#line 1206 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_89_89;
#line 1206 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_90_90;
#line 1206 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 0)));
#line 1206 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 1)));
#line 1206 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 4)));
#line 1206 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 5)));
#line 1206 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Kind_29, (MR_Integer) 6)));

#line 1207 "loop_inv.m"
                {
#line 1207 "loop_inv.m"
                  transform_hlds__loop_inv__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1207 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_89_89, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1207 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_89_89, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_5));
#line 1207 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1207 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_89_89, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1207 "loop_inv.m"
                }
#line 1208 "loop_inv.m"
                {
#line 1208 "loop_inv.m"
                  transform_hlds__loop_inv__V_90_90 = transform_hlds__loop_inv__rhs_modes_1_f_0(transform_hlds__loop_inv__ArgUniModes_34);
                }
#line 1207 "loop_inv.m"
                {
#line 1207 "loop_inv.m"
                  transform_hlds__loop_inv__Inputs_6 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_125_125, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_125_125, transform_hlds__loop_inv__V_89_89, transform_hlds__loop_inv__RHSArgs_33, transform_hlds__loop_inv__V_90_90);
                }
#line 1206 "loop_inv.m"
              }
#line 1209 "loop_inv.m"
              break;
#line 1209 "loop_inv.m"
            case (MR_Integer) 1:
#line 1211 "loop_inv.m"
              {
#line 1211 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__TypeInfo_130_130 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1211 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__RHSInputs_42;
#line 1211 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_87_87;
#line 1211 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_88_88;
#line 1211 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__RHSArgs_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 2)));
#line 1211 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__ArgUniModes_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 3)));
#line 1211 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 0)));
#line 1211 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 1)));
#line 1211 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 4)));
#line 1211 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Kind_29, (MR_Integer) 5)));

#line 1212 "loop_inv.m"
                {
#line 1212 "loop_inv.m"
                  transform_hlds__loop_inv__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1212 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_87_87, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1212 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_87_87, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_6));
#line 1212 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1212 "loop_inv.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_87_87, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1212 "loop_inv.m"
                }
#line 1213 "loop_inv.m"
                {
#line 1213 "loop_inv.m"
                  transform_hlds__loop_inv__V_88_88 = transform_hlds__loop_inv__rhs_modes_1_f_0(transform_hlds__loop_inv__ArgUniModes_102);
                }
#line 1212 "loop_inv.m"
                {
#line 1212 "loop_inv.m"
                  transform_hlds__loop_inv__RHSInputs_42 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_130_130, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_130_130, transform_hlds__loop_inv__V_87_87, transform_hlds__loop_inv__RHSArgs_101, transform_hlds__loop_inv__V_88_88);
                }
#line 1214 "loop_inv.m"
                {
#line 1214 "loop_inv.m"
                  transform_hlds__loop_inv__Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "loop_inv.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_26));
#line 1214 "loop_inv.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 1) = ((MR_Box) (transform_hlds__loop_inv__RHSInputs_42));
#line 1214 "loop_inv.m"
                }
#line 1211 "loop_inv.m"
              }
#line 1209 "loop_inv.m"
              break;
#line 1209 "loop_inv.m"
            case (MR_Integer) 2:
#line 1217 "loop_inv.m"
              {
#line 1217 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__RHS_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Kind_29, (MR_Integer) 1)));
#line 1217 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Kind_29, (MR_Integer) 0)));

#line 1218 "loop_inv.m"
                {
#line 1218 "loop_inv.m"
                  transform_hlds__loop_inv__Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "loop_inv.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__RHS_44));
#line 1218 "loop_inv.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1218 "loop_inv.m"
                }
#line 1217 "loop_inv.m"
              }
#line 1209 "loop_inv.m"
              break;
#line 1209 "loop_inv.m"
            case (MR_Integer) 3:
#line 1209 "loop_inv.m"
#line 1209 "loop_inv.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__Kind_29, (MR_Integer) 0)))) {
#line 1209 "loop_inv.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1209 "loop_inv.m"
                case (MR_Integer) 0:
#line 1221 "loop_inv.m"
                  {
#line 1221 "loop_inv.m"
                    MR_Word transform_hlds__loop_inv__V_84_84;
#line 1221 "loop_inv.m"
                    MR_Word transform_hlds__loop_inv__RHS_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__Kind_29, (MR_Integer) 2)));
#line 1221 "loop_inv.m"
                    MR_Word transform_hlds__loop_inv__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__Kind_29, (MR_Integer) 1)));

#line 1222 "loop_inv.m"
                    {
#line 1222 "loop_inv.m"
                      transform_hlds__loop_inv__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "loop_inv.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_84_84, 0) = ((MR_Box) (transform_hlds__loop_inv__RHS_103));
#line 1222 "loop_inv.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1222 "loop_inv.m"
                    }
#line 1222 "loop_inv.m"
                    {
#line 1222 "loop_inv.m"
                      transform_hlds__loop_inv__Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "loop_inv.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_26));
#line 1222 "loop_inv.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 1) = ((MR_Box) (transform_hlds__loop_inv__V_84_84));
#line 1222 "loop_inv.m"
                    }
#line 1221 "loop_inv.m"
                  }
#line 1209 "loop_inv.m"
                  break;
#line 1209 "loop_inv.m"
                case (MR_Integer) 1:
#line 1229 "loop_inv.m"
#line 1229 "loop_inv.m"
                  switch (MR_tag((MR_Word) transform_hlds__loop_inv__UnifyRHS_27)) {
#line 1229 "loop_inv.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1229 "loop_inv.m"
                    case (MR_Integer) 0:
#line 1227 "loop_inv.m"
                      {
#line 1227 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_82_82;
#line 1227 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__RHS_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__UnifyRHS_27, (MR_Integer) 0)));

#line 1228 "loop_inv.m"
                        {
#line 1228 "loop_inv.m"
                          transform_hlds__loop_inv__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1228 "loop_inv.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_82_82, 0) = ((MR_Box) (transform_hlds__loop_inv__RHS_104));
#line 1228 "loop_inv.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1228 "loop_inv.m"
                        }
#line 1228 "loop_inv.m"
                        {
#line 1228 "loop_inv.m"
                          transform_hlds__loop_inv__Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1228 "loop_inv.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_26));
#line 1228 "loop_inv.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 1) = ((MR_Box) (transform_hlds__loop_inv__V_82_82));
#line 1228 "loop_inv.m"
                        }
#line 1227 "loop_inv.m"
                      }
#line 1229 "loop_inv.m"
                      break;
#line 1229 "loop_inv.m"
                    case (MR_Integer) 1:
#line 1230 "loop_inv.m"
                      {
#line 1231 "loop_inv.m"
                        {
#line 1231 "loop_inv.m"
                          transform_hlds__loop_inv__Inputs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1231 "loop_inv.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 0) = ((MR_Box) (transform_hlds__loop_inv__LHS_26));
#line 1231 "loop_inv.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__Inputs_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1231 "loop_inv.m"
                        }
#line 1230 "loop_inv.m"
                      }
#line 1229 "loop_inv.m"
                      break;
#line 1229 "loop_inv.m"
                    case (MR_Integer) 2:
#line 1233 "loop_inv.m"
                      {
#line 1235 "loop_inv.m"
                        {
#line 1235 "loop_inv.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.goal_inputs\'/2", (MR_String) "lambda goal");
                        }
#line 1233 "loop_inv.m"
                      }
#line 1229 "loop_inv.m"
                      break;
#line 1229 "loop_inv.m"
                  }
#line 1209 "loop_inv.m"
                  break;
#line 1209 "loop_inv.m"
              }
#line 1209 "loop_inv.m"
              break;
#line 1209 "loop_inv.m"
          }
#line 1203 "loop_inv.m"
        }
#line 1191 "loop_inv.m"
        break;
#line 1191 "loop_inv.m"
      case (MR_Integer) 2:
#line 1188 "loop_inv.m"
        {
#line 1188 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__TypeInfo_107_107 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1188 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
#line 1188 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1188 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1188 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_96_96;
#line 1188 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_97_97;
#line 1188 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1188 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1188 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

#line 1189 "loop_inv.m"
          {
#line 1189 "loop_inv.m"
            transform_hlds__loop_inv__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1189 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_96_96, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1189 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_96_96, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_4));
#line 1189 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_96_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1189 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_96_96, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1189 "loop_inv.m"
          }
#line 1190 "loop_inv.m"
          {
#line 1190 "loop_inv.m"
            transform_hlds__loop_inv__V_97_97 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_9, transform_hlds__loop_inv__ProcId_10);
          }
#line 1189 "loop_inv.m"
          {
#line 1189 "loop_inv.m"
            transform_hlds__loop_inv__Inputs_6 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_107_107, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_107_107, transform_hlds__loop_inv__V_96_96, transform_hlds__loop_inv__Args_11, transform_hlds__loop_inv__V_97_97);
          }
#line 1188 "loop_inv.m"
        }
#line 1191 "loop_inv.m"
        break;
#line 1191 "loop_inv.m"
      case (MR_Integer) 3:
#line 1191 "loop_inv.m"
#line 1191 "loop_inv.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) {
#line 1191 "loop_inv.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1191 "loop_inv.m"
          case (MR_Integer) 0:
#line 1192 "loop_inv.m"
            {
#line 1192 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeInfo_112_112;
#line 1192 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__GenericCall_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1192 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__ArgModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1192 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__GenericCallVars_19;
#line 1192 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Inputs0_20;
#line 1192 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_95_95;
#line 1192 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Args_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1192 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1192 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

#line 1193 "loop_inv.m"
              {
#line 1193 "loop_inv.m"
                hlds__goal_util__generic_call_vars_2_p_0(transform_hlds__loop_inv__GenericCall_15, &transform_hlds__loop_inv__GenericCallVars_19);
              }
#line 4442 "transform_hlds.loop_inv.c"
              transform_hlds__loop_inv__TypeInfo_112_112 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1194 "loop_inv.m"
              {
#line 1194 "loop_inv.m"
                transform_hlds__loop_inv__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1194 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_95_95, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1194 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_95_95, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_3));
#line 1194 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_95_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1194 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_95_95, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1194 "loop_inv.m"
              }
#line 1194 "loop_inv.m"
              {
#line 1194 "loop_inv.m"
                transform_hlds__loop_inv__Inputs0_20 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_112_112, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_112_112, transform_hlds__loop_inv__V_95_95, transform_hlds__loop_inv__Args_98, transform_hlds__loop_inv__ArgModes_16);
              }
#line 1196 "loop_inv.m"
              {
#line 1196 "loop_inv.m"
                transform_hlds__loop_inv__Inputs_6 = mercury__list__f_43_43_2_f_0(transform_hlds__loop_inv__TypeInfo_112_112, transform_hlds__loop_inv__GenericCallVars_19, transform_hlds__loop_inv__Inputs0_20);
              }
#line 1192 "loop_inv.m"
            }
#line 1191 "loop_inv.m"
            break;
#line 1191 "loop_inv.m"
          case (MR_Integer) 1:
#line 1198 "loop_inv.m"
            {
#line 1198 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeInfo_117_117 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1198 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__ForeignArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1198 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_91_91;
#line 1198 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_92_92;
#line 1198 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_94_94;
#line 1198 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__PredId_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1198 "loop_inv.m"
              MR_Integer transform_hlds__loop_inv__ProcId_100 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1198 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1198 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));
#line 1198 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 6)));
#line 1198 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 7)));

#line 1199 "loop_inv.m"
              {
#line 1199 "loop_inv.m"
                transform_hlds__loop_inv__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1199 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_91_91, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1199 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_91_91, 1) = ((MR_Box) (transform_hlds__loop_inv__goal_inputs_2_f_0_1));
#line 1199 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1199 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_91_91, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1199 "loop_inv.m"
              }
#line 1200 "loop_inv.m"
              {
#line 1200 "loop_inv.m"
                transform_hlds__loop_inv__V_92_92 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, transform_hlds__loop_inv__TypeInfo_117_117, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[8], transform_hlds__loop_inv__ForeignArgs_22);
              }
#line 1201 "loop_inv.m"
              {
#line 1201 "loop_inv.m"
                transform_hlds__loop_inv__V_94_94 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_99, transform_hlds__loop_inv__ProcId_100);
              }
#line 1199 "loop_inv.m"
              {
#line 1199 "loop_inv.m"
                transform_hlds__loop_inv__Inputs_6 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_117_117, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_117_117, transform_hlds__loop_inv__V_91_91, transform_hlds__loop_inv__V_92_92, transform_hlds__loop_inv__V_94_94);
              }
#line 1198 "loop_inv.m"
            }
#line 1191 "loop_inv.m"
            break;
#line 1191 "loop_inv.m"
          case (MR_Integer) 2:
#line 1191 "loop_inv.m"
          case (MR_Integer) 3:
#line 1191 "loop_inv.m"
          case (MR_Integer) 4:
#line 1191 "loop_inv.m"
          case (MR_Integer) 5:
#line 1191 "loop_inv.m"
          case (MR_Integer) 6:
#line 1191 "loop_inv.m"
          case (MR_Integer) 7:
#line 1246 "loop_inv.m"
            {
#line 1247 "loop_inv.m"
              {
#line 1247 "loop_inv.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.goal_inputs\'/2", (MR_String) "compound goal");
              }
#line 1246 "loop_inv.m"
            }
#line 1191 "loop_inv.m"
            break;
#line 1191 "loop_inv.m"
        }
#line 1191 "loop_inv.m"
        break;
#line 1191 "loop_inv.m"
    }
#line 1185 "loop_inv.m"
    return transform_hlds__loop_inv__Inputs_6;
#line 1185 "loop_inv.m"
  }
#line 1183 "loop_inv.m"
}

#line 1172 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__argmodes_3_f_0(
#line 1172 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 1172 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredId_6,
#line 1172 "loop_inv.m"
  MR_Integer transform_hlds__loop_inv__ProcId_7)
#line 1172 "loop_inv.m"
{
#line 1174 "loop_inv.m"
  {
#line 1174 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1174 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ArgModes_8;
#line 1174 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ProcInfo_10;
#line 1175 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_9_9;

#line 1175 "loop_inv.m"
    {
#line 1175 "loop_inv.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__PredId_6, transform_hlds__loop_inv__ProcId_7, &transform_hlds__loop_inv__V_9_9, &transform_hlds__loop_inv__ProcInfo_10);
    }
#line 1176 "loop_inv.m"
    {
#line 1176 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__loop_inv__ProcInfo_10, &transform_hlds__loop_inv__ArgModes_8);
    }
#line 1174 "loop_inv.m"
    return transform_hlds__loop_inv__ArgModes_8;
#line 1174 "loop_inv.m"
  }
#line 1172 "loop_inv.m"
}

#line 1163 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__uniquely_used_args_3_f_0(
#line 1163 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 1163 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__X_6,
#line 1163 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__M_7,
#line 1163 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__X_4)
#line 1163 "loop_inv.m"
{
#line 1166 "loop_inv.m"
  {
#line 1166 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1166 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InInst_8;
#line 1167 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___OutInst_9;

#line 1166 "loop_inv.m"
    *transform_hlds__loop_inv__X_4 = transform_hlds__loop_inv__X_6;
#line 1167 "loop_inv.m"
    {
#line 1167 "loop_inv.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__M_7, &transform_hlds__loop_inv__InInst_8, &transform_hlds__loop_inv___OutInst_9);
    }
#line 1168 "loop_inv.m"
    {
#line 1168 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__InInst_8);
    }
#line 1168 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 1166 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1166 "loop_inv.m"
  }
#line 1163 "loop_inv.m"
}

#line 1159 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__case_goals_1_f_0_1(
#line 1159 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1159 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1159 "loop_inv.m"
{
#line 1159 "loop_inv.m"
  {
#line 1159 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1159 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1159 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__2_9;

#line 1159 "loop_inv.m"
    {
#line 1159 "loop_inv.m"
      transform_hlds__loop_inv__conv0_HeadVar__2_9 = transform_hlds__loop_inv__IntroducedFrom__func__case_goals__1159__1_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1159 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__2_9));
#line 1159 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1159 "loop_inv.m"
  }
#line 1159 "loop_inv.m"
}

#line 1156 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__case_goals_1_f_0(
#line 1156 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Cases_3)
#line 1156 "loop_inv.m"
{
#line 1158 "loop_inv.m"
  {
#line 1158 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1158 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__2_2;

#line 1159 "loop_inv.m"
    {
#line 1159 "loop_inv.m"
      transform_hlds__loop_inv__HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[7], transform_hlds__loop_inv__Cases_3);
    }
#line 1158 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__2_2;
#line 1158 "loop_inv.m"
  }
#line 1156 "loop_inv.m"
}

#line 1137 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_8(
#line 1137 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1137 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1137 "loop_inv.m"
{
#line 1137 "loop_inv.m"
  {
#line 1137 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1137 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1137 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv7_UsedVars_6;

#line 1137 "loop_inv.m"
    {
#line 1137 "loop_inv.m"
      transform_hlds__loop_inv__conv7_UsedVars_6 = transform_hlds__loop_inv__used_vars_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1137 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv7_UsedVars_6));
#line 1137 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1137 "loop_inv.m"
  }
#line 1137 "loop_inv.m"
}

#line 1102 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_7(
#line 1102 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1102 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1102 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1102 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1102 "loop_inv.m"
{
#line 1102 "loop_inv.m"
  {
#line 1102 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1102 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1102 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv6_X_4;

#line 1102 "loop_inv.m"
    {
#line 1102 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__uniquely_used_args_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv6_X_4);
    }
#line 1102 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1102 "loop_inv.m"
      {
#line 1102 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv6_X_4));
#line 1102 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1102 "loop_inv.m"
      }
#line 1102 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1102 "loop_inv.m"
  }
#line 1102 "loop_inv.m"
}

#line 1107 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_6(
#line 1107 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1107 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1107 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1107 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1107 "loop_inv.m"
{
#line 1107 "loop_inv.m"
  {
#line 1107 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1107 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1107 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv5_X_4;

#line 1107 "loop_inv.m"
    {
#line 1107 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__uniquely_used_args_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv5_X_4);
    }
#line 1107 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1107 "loop_inv.m"
      {
#line 1107 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv5_X_4));
#line 1107 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1107 "loop_inv.m"
      }
#line 1107 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1107 "loop_inv.m"
  }
#line 1107 "loop_inv.m"
}

#line 1134 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_5(
#line 1134 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1134 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1134 "loop_inv.m"
{
#line 1134 "loop_inv.m"
  {
#line 1134 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1134 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1134 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv4_UsedVars_6;

#line 1134 "loop_inv.m"
    {
#line 1134 "loop_inv.m"
      transform_hlds__loop_inv__conv4_UsedVars_6 = transform_hlds__loop_inv__used_vars_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1134 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv4_UsedVars_6));
#line 1134 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1134 "loop_inv.m"
  }
#line 1134 "loop_inv.m"
}

#line 1131 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_4(
#line 1131 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1131 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1131 "loop_inv.m"
{
#line 1131 "loop_inv.m"
  {
#line 1131 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1131 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1131 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv3_UsedVars_6;

#line 1131 "loop_inv.m"
    {
#line 1131 "loop_inv.m"
      transform_hlds__loop_inv__conv3_UsedVars_6 = transform_hlds__loop_inv__used_vars_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1131 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv3_UsedVars_6));
#line 1131 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1131 "loop_inv.m"
  }
#line 1131 "loop_inv.m"
}

#line 1123 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_3(
#line 1123 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1123 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1123 "loop_inv.m"
{
#line 1123 "loop_inv.m"
  {
#line 1123 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1123 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1123 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv2_HeadVar__2_2;

#line 1123 "loop_inv.m"
    {
#line 1123 "loop_inv.m"
      transform_hlds__loop_inv__conv2_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1123 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv2_HeadVar__2_2));
#line 1123 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1123 "loop_inv.m"
  }
#line 1123 "loop_inv.m"
}

#line 1121 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_2(
#line 1121 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1121 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1121 "loop_inv.m"
{
#line 1121 "loop_inv.m"
  {
#line 1121 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1121 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1121 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv1_HeadVar__2_2;

#line 1121 "loop_inv.m"
    {
#line 1121 "loop_inv.m"
      transform_hlds__loop_inv__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1121 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv1_HeadVar__2_2));
#line 1121 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1121 "loop_inv.m"
  }
#line 1121 "loop_inv.m"
}

#line 1120 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0_1(
#line 1120 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1120 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 1120 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 1120 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 1120 "loop_inv.m"
{
#line 1120 "loop_inv.m"
  {
#line 1120 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1120 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1120 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_X_4;

#line 1120 "loop_inv.m"
    {
#line 1120 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__uniquely_used_args_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv0_X_4);
    }
#line 1120 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1120 "loop_inv.m"
      {
#line 1120 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_X_4));
#line 1120 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1120 "loop_inv.m"
      }
#line 1120 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 1120 "loop_inv.m"
  }
#line 1120 "loop_inv.m"
}

#line 1095 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__used_vars_2_f_0(
#line 1095 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_4,
#line 1095 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5)
#line 1095 "loop_inv.m"
{
#line 1097 "loop_inv.m"
  while (MR_TRUE)
#line 1097 "loop_inv.m"
    {
#line 1097 "loop_inv.m"
      /* tailcall optimized into a loop */
#line 1097 "loop_inv.m"
      {
#line 1097 "loop_inv.m"
        MR_bool transform_hlds__loop_inv__succeeded;
#line 1097 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__UsedVars_6;
#line 1097 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 0)));
#line 1098 "loop_inv.m"
        MR_Word transform_hlds__loop_inv___GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 1)));

#line 1104 "loop_inv.m"
#line 1104 "loop_inv.m"
        switch (MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) {
#line 1104 "loop_inv.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1104 "loop_inv.m"
          case (MR_Integer) 0:
#line 1144 "loop_inv.m"
            {
#line 1144 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__SubGoal_41 = (MR_Word) MR_body(((MR_Word) transform_hlds__loop_inv__GoalExpr_7), (MR_Integer) 0);

#line 1145 "loop_inv.m"
              /* direct tailcall eliminated */
#line 1145 "loop_inv.m"
              {
#line 1145 "loop_inv.m"
                MR_Word transform_hlds__loop_inv__Goal__tmp_copy_5 = transform_hlds__loop_inv__SubGoal_41;

#line 1145 "loop_inv.m"
                transform_hlds__loop_inv__Goal_5 = transform_hlds__loop_inv__Goal__tmp_copy_5;
#line 1145 "loop_inv.m"
              }
#line 1145 "loop_inv.m"
              continue;
#line 1144 "loop_inv.m"
            }
#line 1104 "loop_inv.m"
            break;
#line 1104 "loop_inv.m"
          case (MR_Integer) 1:
#line 1128 "loop_inv.m"
            transform_hlds__loop_inv__UsedVars_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1104 "loop_inv.m"
            break;
#line 1104 "loop_inv.m"
          case (MR_Integer) 2:
#line 1100 "loop_inv.m"
            {
#line 1100 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeInfo_70_70 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1100 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
#line 1100 "loop_inv.m"
              MR_Integer transform_hlds__loop_inv__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1100 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1100 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_64_64;
#line 1100 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_65_65;
#line 1100 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1100 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1100 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

#line 1102 "loop_inv.m"
              {
#line 1102 "loop_inv.m"
                transform_hlds__loop_inv__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1102 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_64_64, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1102 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_64_64, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_7));
#line 1102 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1102 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_64_64, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1102 "loop_inv.m"
              }
#line 1103 "loop_inv.m"
              {
#line 1103 "loop_inv.m"
                transform_hlds__loop_inv__V_65_65 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_9, transform_hlds__loop_inv__ProcId_10);
              }
#line 1101 "loop_inv.m"
              {
#line 1101 "loop_inv.m"
                transform_hlds__loop_inv__UsedVars_6 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_70_70, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_70_70, transform_hlds__loop_inv__V_64_64, transform_hlds__loop_inv__Args_11, transform_hlds__loop_inv__V_65_65);
              }
#line 1100 "loop_inv.m"
            }
#line 1104 "loop_inv.m"
            break;
#line 1104 "loop_inv.m"
          case (MR_Integer) 3:
#line 1104 "loop_inv.m"
#line 1104 "loop_inv.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) {
#line 1104 "loop_inv.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1104 "loop_inv.m"
              case (MR_Integer) 0:
#line 1105 "loop_inv.m"
                {
#line 1105 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__TypeInfo_75_75 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1105 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__Modes_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1105 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_63_63;
#line 1105 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__Args_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1105 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1105 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1105 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));

#line 1107 "loop_inv.m"
                  {
#line 1107 "loop_inv.m"
                    transform_hlds__loop_inv__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1107 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_63_63, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1107 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_63_63, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_6));
#line 1107 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1107 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_63_63, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1107 "loop_inv.m"
                  }
#line 1106 "loop_inv.m"
                  {
#line 1106 "loop_inv.m"
                    transform_hlds__loop_inv__UsedVars_6 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_75_75, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_75_75, transform_hlds__loop_inv__V_63_63, transform_hlds__loop_inv__Args_66, transform_hlds__loop_inv__Modes_16);
                  }
#line 1105 "loop_inv.m"
                }
#line 1104 "loop_inv.m"
                break;
#line 1104 "loop_inv.m"
              case (MR_Integer) 1:
#line 1111 "loop_inv.m"
                {
#line 1111 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__TypeInfo_80_80 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1111 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__TypeCtorInfo_85_85;
#line 1111 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__ForeignArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1111 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__ExtraForeignArgs_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));
#line 1111 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__UsedArgVars_24;
#line 1111 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__UsedExtraArgVars_25;
#line 1111 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_58_58;
#line 1111 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_59_59;
#line 1111 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_61_61;
#line 1111 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__PredId_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1111 "loop_inv.m"
                  MR_Integer transform_hlds__loop_inv__ProcId_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1110 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1110 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 6)));
#line 1110 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 7)));

#line 1120 "loop_inv.m"
                  {
#line 1120 "loop_inv.m"
                    transform_hlds__loop_inv__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1120 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[4]));
#line 1120 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_1));
#line 1120 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1120 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1120 "loop_inv.m"
                  }
#line 5208 "transform_hlds.loop_inv.c"
                  transform_hlds__loop_inv__TypeCtorInfo_85_85 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 1121 "loop_inv.m"
                  {
#line 1121 "loop_inv.m"
                    transform_hlds__loop_inv__V_59_59 = mercury__list__map_2_f_0(transform_hlds__loop_inv__TypeCtorInfo_85_85, transform_hlds__loop_inv__TypeInfo_80_80, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[5], transform_hlds__loop_inv__ForeignArgs_20);
                  }
#line 1122 "loop_inv.m"
                  {
#line 1122 "loop_inv.m"
                    transform_hlds__loop_inv__V_61_61 = transform_hlds__loop_inv__argmodes_3_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__PredId_67, transform_hlds__loop_inv__ProcId_68);
                  }
#line 1119 "loop_inv.m"
                  {
#line 1119 "loop_inv.m"
                    transform_hlds__loop_inv__UsedArgVars_24 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_80_80, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__loop_inv__TypeInfo_80_80, transform_hlds__loop_inv__V_58_58, transform_hlds__loop_inv__V_59_59, transform_hlds__loop_inv__V_61_61);
                  }
#line 1123 "loop_inv.m"
                  {
#line 1123 "loop_inv.m"
                    transform_hlds__loop_inv__UsedExtraArgVars_25 = mercury__list__map_2_f_0(transform_hlds__loop_inv__TypeCtorInfo_85_85, transform_hlds__loop_inv__TypeInfo_80_80, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[6], transform_hlds__loop_inv__ExtraForeignArgs_21);
                  }
#line 1124 "loop_inv.m"
                  {
#line 1124 "loop_inv.m"
                    transform_hlds__loop_inv__UsedVars_6 = mercury__list__f_43_43_2_f_0(transform_hlds__loop_inv__TypeInfo_80_80, transform_hlds__loop_inv__UsedArgVars_24, transform_hlds__loop_inv__UsedExtraArgVars_25);
                  }
#line 1111 "loop_inv.m"
                }
#line 1104 "loop_inv.m"
                break;
#line 1104 "loop_inv.m"
              case (MR_Integer) 2:
#line 1130 "loop_inv.m"
                {
#line 1130 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__Conjuncts_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1130 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_56_56;
#line 1130 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_57_57;
#line 1130 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));

#line 1131 "loop_inv.m"
                  {
#line 1131 "loop_inv.m"
                    transform_hlds__loop_inv__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1131 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_6[5]));
#line 1131 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_4));
#line 1131 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1131 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1131 "loop_inv.m"
                  }
#line 1131 "loop_inv.m"
                  {
#line 1131 "loop_inv.m"
                    transform_hlds__loop_inv__V_56_56 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_57_57, transform_hlds__loop_inv__Conjuncts_32);
                  }
#line 1131 "loop_inv.m"
                  {
#line 1131 "loop_inv.m"
                    transform_hlds__loop_inv__UsedVars_6 = mercury__list__condense_1_f_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__V_56_56);
                  }
#line 1130 "loop_inv.m"
                }
#line 1104 "loop_inv.m"
                break;
#line 1104 "loop_inv.m"
              case (MR_Integer) 3:
#line 1133 "loop_inv.m"
                {
#line 1133 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__Disjuncts_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1133 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_54_54;
#line 1133 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_55_55;

#line 1134 "loop_inv.m"
                  {
#line 1134 "loop_inv.m"
                    transform_hlds__loop_inv__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1134 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_55_55, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_6[5]));
#line 1134 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_55_55, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_5));
#line 1134 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1134 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_55_55, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1134 "loop_inv.m"
                  }
#line 1134 "loop_inv.m"
                  {
#line 1134 "loop_inv.m"
                    transform_hlds__loop_inv__V_54_54 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_55_55, transform_hlds__loop_inv__Disjuncts_33);
                  }
#line 1134 "loop_inv.m"
                  {
#line 1134 "loop_inv.m"
                    transform_hlds__loop_inv__UsedVars_6 = mercury__list__condense_1_f_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__V_54_54);
                  }
#line 1133 "loop_inv.m"
                }
#line 1104 "loop_inv.m"
                break;
#line 1104 "loop_inv.m"
              case (MR_Integer) 4:
#line 1136 "loop_inv.m"
                {
#line 1136 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__Cases_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1136 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_51_51;
#line 1136 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_52_52;
#line 1136 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_53_53;
#line 1136 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 1136 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));

#line 1137 "loop_inv.m"
                  {
#line 1137 "loop_inv.m"
                    transform_hlds__loop_inv__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1137 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_52_52, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_6[5]));
#line 1137 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_52_52, 1) = ((MR_Box) (transform_hlds__loop_inv__used_vars_2_f_0_8));
#line 1137 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1137 "loop_inv.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_52_52, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_4));
#line 1137 "loop_inv.m"
                  }
#line 1138 "loop_inv.m"
                  {
#line 1138 "loop_inv.m"
                    transform_hlds__loop_inv__V_53_53 = transform_hlds__loop_inv__case_goals_1_f_0(transform_hlds__loop_inv__Cases_36);
                  }
#line 1137 "loop_inv.m"
                  {
#line 1137 "loop_inv.m"
                    transform_hlds__loop_inv__V_51_51 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_52_52, transform_hlds__loop_inv__V_53_53);
                  }
#line 1137 "loop_inv.m"
                  {
#line 1137 "loop_inv.m"
                    transform_hlds__loop_inv__UsedVars_6 = mercury__list__condense_1_f_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__V_51_51);
                  }
#line 1136 "loop_inv.m"
                }
#line 1104 "loop_inv.m"
                break;
#line 1104 "loop_inv.m"
              case (MR_Integer) 5:
#line 1147 "loop_inv.m"
                {
#line 1147 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__SubGoal_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1147 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv___Reason_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));

#line 1150 "loop_inv.m"
                  /* direct tailcall eliminated */
#line 1150 "loop_inv.m"
                  {
#line 1150 "loop_inv.m"
                    MR_Word transform_hlds__loop_inv__Goal__tmp_copy_5 = transform_hlds__loop_inv__SubGoal_69;

#line 1150 "loop_inv.m"
                    transform_hlds__loop_inv__Goal_5 = transform_hlds__loop_inv__Goal__tmp_copy_5;
#line 1150 "loop_inv.m"
                  }
#line 1150 "loop_inv.m"
                  continue;
#line 1147 "loop_inv.m"
                }
#line 1104 "loop_inv.m"
                break;
#line 1104 "loop_inv.m"
              case (MR_Integer) 6:
#line 1140 "loop_inv.m"
                {
#line 1140 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__TypeInfo_105_105 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1140 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__Cond_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 1140 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__Then_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 1140 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__Else_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 1140 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_47_47;
#line 1140 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_48_48;
#line 1140 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_49_49;
#line 1140 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_50_50;
#line 1140 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));

#line 1141 "loop_inv.m"
                  {
#line 1141 "loop_inv.m"
                    transform_hlds__loop_inv__V_47_47 = transform_hlds__loop_inv__used_vars_2_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__Cond_38);
                  }
#line 1142 "loop_inv.m"
                  {
#line 1142 "loop_inv.m"
                    transform_hlds__loop_inv__V_49_49 = transform_hlds__loop_inv__used_vars_2_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__Then_39);
                  }
#line 1142 "loop_inv.m"
                  {
#line 1142 "loop_inv.m"
                    transform_hlds__loop_inv__V_50_50 = transform_hlds__loop_inv__used_vars_2_f_0(transform_hlds__loop_inv__ModuleInfo_4, transform_hlds__loop_inv__Else_40);
                  }
#line 1142 "loop_inv.m"
                  {
#line 1142 "loop_inv.m"
                    transform_hlds__loop_inv__V_48_48 = mercury__list__f_43_43_2_f_0(transform_hlds__loop_inv__TypeInfo_105_105, transform_hlds__loop_inv__V_49_49, transform_hlds__loop_inv__V_50_50);
                  }
#line 1141 "loop_inv.m"
                  {
#line 1141 "loop_inv.m"
                    transform_hlds__loop_inv__UsedVars_6 = mercury__list__f_43_43_2_f_0(transform_hlds__loop_inv__TypeInfo_105_105, transform_hlds__loop_inv__V_47_47, transform_hlds__loop_inv__V_48_48);
                  }
#line 1140 "loop_inv.m"
                }
#line 1104 "loop_inv.m"
                break;
#line 1104 "loop_inv.m"
              case (MR_Integer) 7:
#line 1152 "loop_inv.m"
                {
#line 1153 "loop_inv.m"
                  {
#line 1153 "loop_inv.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.used_vars\'/2", (MR_String) "shorthand");
                  }
#line 1152 "loop_inv.m"
                }
#line 1104 "loop_inv.m"
                break;
#line 1104 "loop_inv.m"
            }
#line 1104 "loop_inv.m"
            break;
#line 1104 "loop_inv.m"
        }
#line 1097 "loop_inv.m"
        return transform_hlds__loop_inv__UsedVars_6;
#line 1097 "loop_inv.m"
      }
#line 1097 "loop_inv.m"
      break;
#line 1097 "loop_inv.m"
    }
#line 1095 "loop_inv.m"
}

#line 1049 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_aux_call_2_f_0(
#line 1049 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 1049 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__2_2)
#line 1049 "loop_inv.m"
{
#line 1051 "loop_inv.m"
  {
#line 1051 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1051 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__3_3;
#line 1051 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__CallAux0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 0)));
#line 1051 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Call_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 0)));
#line 1051 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__CallInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__2_2, (MR_Integer) 1)));
#line 1051 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___CallAuxInfo0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 1)));
#line 1051 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__CallAux_11;
#line 1053 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxArgs0_8;
#line 1053 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Args0_9;
#line 1053 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Args_10;
#line 1053 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_15_15;
#line 1053 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__V_16_16;
#line 1053 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_17_17;
#line 1053 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_18_18;
#line 1053 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_19_19;
#line 1054 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_20_20;
#line 1054 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__V_21_21;
#line 1054 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_22_22;
#line 1054 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_23_23;
#line 1054 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_24_24;
#line 1056 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_25_25;
#line 1056 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__V_26_26;
#line 1056 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_28_28;
#line 1056 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_29_29;
#line 1056 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_30_30;
#line 1056 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_27_27;

#line 1053 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__CallAux0_4)) == (MR_mktag((MR_Integer) 2)));
#line 1053 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1053 "loop_inv.m"
      {
#line 1053 "loop_inv.m"
        transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 0)));
#line 1053 "loop_inv.m"
        transform_hlds__loop_inv__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 1)));
#line 1053 "loop_inv.m"
        transform_hlds__loop_inv__AuxArgs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 2)));
#line 1053 "loop_inv.m"
        transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 3)));
#line 1053 "loop_inv.m"
        transform_hlds__loop_inv__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 4)));
#line 1053 "loop_inv.m"
        transform_hlds__loop_inv__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 5)));
#line 1054 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__Call_6)) == (MR_mktag((MR_Integer) 2)));
#line 1054 "loop_inv.m"
        if (transform_hlds__loop_inv__succeeded)
#line 1054 "loop_inv.m"
          {
#line 1054 "loop_inv.m"
            transform_hlds__loop_inv__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Call_6, (MR_Integer) 0)));
#line 1054 "loop_inv.m"
            transform_hlds__loop_inv__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Call_6, (MR_Integer) 1)));
#line 1054 "loop_inv.m"
            transform_hlds__loop_inv__Args0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Call_6, (MR_Integer) 2)));
#line 1054 "loop_inv.m"
            transform_hlds__loop_inv__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Call_6, (MR_Integer) 3)));
#line 1054 "loop_inv.m"
            transform_hlds__loop_inv__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Call_6, (MR_Integer) 4)));
#line 1054 "loop_inv.m"
            transform_hlds__loop_inv__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Call_6, (MR_Integer) 5)));
#line 1055 "loop_inv.m"
            {
#line 1055 "loop_inv.m"
              transform_hlds__loop_inv__Args_10 = transform_hlds__loop_inv__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_2_f_0(transform_hlds__loop_inv__Args0_9, transform_hlds__loop_inv__AuxArgs0_8);
            }
#line 1056 "loop_inv.m"
            transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 0)));
#line 1056 "loop_inv.m"
            transform_hlds__loop_inv__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 1)));
#line 1056 "loop_inv.m"
            transform_hlds__loop_inv__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 2)));
#line 1056 "loop_inv.m"
            transform_hlds__loop_inv__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 3)));
#line 1056 "loop_inv.m"
            transform_hlds__loop_inv__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 4)));
#line 1056 "loop_inv.m"
            transform_hlds__loop_inv__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux0_4, (MR_Integer) 5)));
#line 1056 "loop_inv.m"
            {
#line 1056 "loop_inv.m"
              transform_hlds__loop_inv__CallAux_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1056 "loop_inv.m"
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux_11, 0) = ((MR_Box) (transform_hlds__loop_inv__V_25_25));
#line 1056 "loop_inv.m"
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux_11, 1) = ((MR_Box) (transform_hlds__loop_inv__V_26_26));
#line 1056 "loop_inv.m"
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux_11, 2) = ((MR_Box) (transform_hlds__loop_inv__Args_10));
#line 1056 "loop_inv.m"
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux_11, 3) = ((MR_Box) (transform_hlds__loop_inv__V_28_28));
#line 1056 "loop_inv.m"
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux_11, 4) = ((MR_Box) (transform_hlds__loop_inv__V_29_29));
#line 1056 "loop_inv.m"
              MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__CallAux_11, 5) = ((MR_Box) (transform_hlds__loop_inv__V_30_30));
#line 1056 "loop_inv.m"
            }
#line 1056 "loop_inv.m"
            transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 1054 "loop_inv.m"
          }
#line 1053 "loop_inv.m"
      }
#line 1051 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 1064 "loop_inv.m"
      {
#line 1064 "loop_inv.m"
        transform_hlds__loop_inv__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1064 "loop_inv.m"
        MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__loop_inv__CallAux_11));
#line 1064 "loop_inv.m"
        MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__loop_inv__CallInfo_7));
#line 1064 "loop_inv.m"
      }
#line 1051 "loop_inv.m"
    else
#line 1066 "loop_inv.m"
      {
#line 1066 "loop_inv.m"
        MR_Box transform_hlds__loop_inv__conv0_HeadVar__3_3;

#line 1066 "loop_inv.m"
        {
#line 1066 "loop_inv.m"
          transform_hlds__loop_inv__conv0_HeadVar__3_3 = mercury__require__unexpected_3_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.gen_aux_call\'/2", (MR_String) "args not both ordinary calls");
        }
#line 1066 "loop_inv.m"
        transform_hlds__loop_inv__HeadVar__3_3 = ((MR_Word) transform_hlds__loop_inv__conv0_HeadVar__3_3);
#line 1066 "loop_inv.m"
      }
#line 1051 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__3_3;
#line 1051 "loop_inv.m"
  }
#line 1049 "loop_inv.m"
}

#line 1040 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_out_proc_case_3_f_0(
#line 1040 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_5,
#line 1040 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__CallAux_6,
#line 1040 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Case_7)
#line 1040 "loop_inv.m"
{
#line 1042 "loop_inv.m"
  {
#line 1042 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 1042 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxCase_8;
#line 1042 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__MainConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_7, (MR_Integer) 0)));
#line 1042 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__OtherConsIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_7, (MR_Integer) 1)));
#line 1042 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_7, (MR_Integer) 2)));
#line 1042 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxGoal_12;

#line 1044 "loop_inv.m"
    {
#line 1044 "loop_inv.m"
      transform_hlds__loop_inv__AuxGoal_12 = transform_hlds__loop_inv__gen_out_proc_goal_3_f_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__CallAux_6, transform_hlds__loop_inv__Goal_11);
    }
#line 1045 "loop_inv.m"
    {
#line 1045 "loop_inv.m"
      transform_hlds__loop_inv__AuxCase_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1045 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxCase_8, 0) = ((MR_Box) (transform_hlds__loop_inv__MainConsId_9));
#line 1045 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxCase_8, 1) = ((MR_Box) (transform_hlds__loop_inv__OtherConsIds_10));
#line 1045 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxCase_8, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxGoal_12));
#line 1045 "loop_inv.m"
    }
#line 1042 "loop_inv.m"
    return transform_hlds__loop_inv__AuxCase_8;
#line 1042 "loop_inv.m"
  }
#line 1040 "loop_inv.m"
}

#line 1013 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_3_f_0_3(
#line 1013 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 1013 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 1013 "loop_inv.m"
{
#line 1013 "loop_inv.m"
  {
#line 1013 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 1013 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 1013 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv2_AuxCase_8;

#line 1013 "loop_inv.m"
    {
#line 1013 "loop_inv.m"
      transform_hlds__loop_inv__conv2_AuxCase_8 = transform_hlds__loop_inv__gen_out_proc_case_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1013 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv2_AuxCase_8));
#line 1013 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1013 "loop_inv.m"
  }
#line 1013 "loop_inv.m"
}

#line 1008 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_3_f_0_2(
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
    MR_Word transform_hlds__loop_inv__conv1_AuxGoal_8;

#line 1008 "loop_inv.m"
    {
#line 1008 "loop_inv.m"
      transform_hlds__loop_inv__conv1_AuxGoal_8 = transform_hlds__loop_inv__gen_out_proc_goal_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1008 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv1_AuxGoal_8));
#line 1008 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1008 "loop_inv.m"
  }
#line 1008 "loop_inv.m"
}

#line 1003 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_3_f_0_1(
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
    MR_Word transform_hlds__loop_inv__conv0_AuxGoal_8;

#line 1003 "loop_inv.m"
    {
#line 1003 "loop_inv.m"
      transform_hlds__loop_inv__conv0_AuxGoal_8 = transform_hlds__loop_inv__gen_out_proc_goal_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 1003 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv0_AuxGoal_8));
#line 1003 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 1003 "loop_inv.m"
  }
#line 1003 "loop_inv.m"
}

#line 984 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_out_proc_goal_3_f_0(
#line 984 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PPId_5,
#line 984 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__CallAux_6,
#line 984 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_7)
#line 984 "loop_inv.m"
{
#line 986 "loop_inv.m"
  {
#line 986 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 986 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxGoal_8;
#line 986 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_7, (MR_Integer) 0)));
#line 986 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_7, (MR_Integer) 1)));

#line 995 "loop_inv.m"
#line 995 "loop_inv.m"
    switch (MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_9)) {
#line 995 "loop_inv.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 995 "loop_inv.m"
      case (MR_Integer) 0:
#line 1017 "loop_inv.m"
        {
#line 1017 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__SubGoal_44 = (MR_Word) MR_body(((MR_Word) transform_hlds__loop_inv__GoalExpr_9), (MR_Integer) 0);
#line 1017 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__AuxSubGoal_45;
#line 1017 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__AuxGoalExpr_63;

#line 1018 "loop_inv.m"
          {
#line 1018 "loop_inv.m"
            transform_hlds__loop_inv__AuxSubGoal_45 = transform_hlds__loop_inv__gen_out_proc_goal_3_f_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__CallAux_6, transform_hlds__loop_inv__SubGoal_44);
          }
#line 1019 "loop_inv.m"
          transform_hlds__loop_inv__AuxGoalExpr_63 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__loop_inv__AuxSubGoal_45);
#line 1020 "loop_inv.m"
          {
#line 1020 "loop_inv.m"
            transform_hlds__loop_inv__AuxGoal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1020 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_63));
#line 1020 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
#line 1020 "loop_inv.m"
          }
#line 1017 "loop_inv.m"
        }
#line 995 "loop_inv.m"
        break;
#line 995 "loop_inv.m"
      case (MR_Integer) 1:
#line 1000 "loop_inv.m"
        transform_hlds__loop_inv__AuxGoal_8 = transform_hlds__loop_inv__Goal_7;
#line 995 "loop_inv.m"
        break;
#line 995 "loop_inv.m"
      case (MR_Integer) 2:
#line 989 "loop_inv.m"
        {
#line 989 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 0)));
#line 989 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
#line 989 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 2)));
#line 989 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 3)));
#line 989 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 4)));
#line 989 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 5)));
#line 990 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PPId_5, (MR_Integer) 0)));
#line 990 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PPId_5, (MR_Integer) 1)));

#line 990 "loop_inv.m"
          {
#line 990 "loop_inv.m"
            transform_hlds__loop_inv__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__loop_inv__PredId_11, transform_hlds__loop_inv__V_77_77);
          }
#line 990 "loop_inv.m"
          if (transform_hlds__loop_inv__succeeded)
#line 990 "loop_inv.m"
            transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__ProcId_12 == transform_hlds__loop_inv__V_78_78);
#line 992 "loop_inv.m"
          if (transform_hlds__loop_inv__succeeded)
#line 991 "loop_inv.m"
            {
#line 991 "loop_inv.m"
              return transform_hlds__loop_inv__AuxGoal_8 = transform_hlds__loop_inv__gen_aux_call_2_f_0(transform_hlds__loop_inv__CallAux_6, transform_hlds__loop_inv__Goal_7);
            }
#line 992 "loop_inv.m"
          else
#line 993 "loop_inv.m"
            transform_hlds__loop_inv__AuxGoal_8 = transform_hlds__loop_inv__Goal_7;
#line 989 "loop_inv.m"
        }
#line 995 "loop_inv.m"
        break;
#line 995 "loop_inv.m"
      case (MR_Integer) 3:
#line 995 "loop_inv.m"
#line 995 "loop_inv.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 0)))) {
#line 995 "loop_inv.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 995 "loop_inv.m"
          case (MR_Integer) 0:
#line 995 "loop_inv.m"
          case (MR_Integer) 1:
#line 1000 "loop_inv.m"
            transform_hlds__loop_inv__AuxGoal_8 = transform_hlds__loop_inv__Goal_7;
#line 995 "loop_inv.m"
            break;
#line 995 "loop_inv.m"
          case (MR_Integer) 2:
#line 1002 "loop_inv.m"
            {
#line 1002 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeCtorInfo_68_68 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1002 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__ConjType_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
#line 1002 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Conjuncts_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 2)));
#line 1002 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxConjuncts_36;
#line 1002 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_37;
#line 1002 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_60_60;

#line 1003 "loop_inv.m"
              {
#line 1003 "loop_inv.m"
                transform_hlds__loop_inv__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1003 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_60_60, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[2]));
#line 1003 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_60_60, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_out_proc_goal_3_f_0_1));
#line 1003 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1003 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_60_60, 3) = ((MR_Box) (transform_hlds__loop_inv__PPId_5));
#line 1003 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_60_60, 4) = ((MR_Box) (transform_hlds__loop_inv__CallAux_6));
#line 1003 "loop_inv.m"
              }
#line 1003 "loop_inv.m"
              {
#line 1003 "loop_inv.m"
                transform_hlds__loop_inv__AuxConjuncts_36 = mercury__list__map_2_f_0(transform_hlds__loop_inv__TypeCtorInfo_68_68, transform_hlds__loop_inv__TypeCtorInfo_68_68, transform_hlds__loop_inv__V_60_60, transform_hlds__loop_inv__Conjuncts_35);
              }
#line 1004 "loop_inv.m"
              {
#line 1004 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1004 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1004 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_37, 1) = ((MR_Box) (transform_hlds__loop_inv__ConjType_34));
#line 1004 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_37, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxConjuncts_36));
#line 1004 "loop_inv.m"
              }
#line 1005 "loop_inv.m"
              {
#line 1005 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1005 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_37));
#line 1005 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
#line 1005 "loop_inv.m"
              }
#line 1002 "loop_inv.m"
            }
#line 995 "loop_inv.m"
            break;
#line 995 "loop_inv.m"
          case (MR_Integer) 3:
#line 1007 "loop_inv.m"
            {
#line 1007 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeCtorInfo_71_71 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1007 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Disjuncts_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
#line 1007 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxDisjuncts_39;
#line 1007 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_59_59;
#line 1007 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_61;

#line 1008 "loop_inv.m"
              {
#line 1008 "loop_inv.m"
                transform_hlds__loop_inv__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1008 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[2]));
#line 1008 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_out_proc_goal_3_f_0_2));
#line 1008 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1008 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 3) = ((MR_Box) (transform_hlds__loop_inv__PPId_5));
#line 1008 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 4) = ((MR_Box) (transform_hlds__loop_inv__CallAux_6));
#line 1008 "loop_inv.m"
              }
#line 1008 "loop_inv.m"
              {
#line 1008 "loop_inv.m"
                transform_hlds__loop_inv__AuxDisjuncts_39 = mercury__list__map_2_f_0(transform_hlds__loop_inv__TypeCtorInfo_71_71, transform_hlds__loop_inv__TypeCtorInfo_71_71, transform_hlds__loop_inv__V_59_59, transform_hlds__loop_inv__Disjuncts_38);
              }
#line 1009 "loop_inv.m"
              {
#line 1009 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoalExpr_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1009 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_61, 1) = ((MR_Box) (transform_hlds__loop_inv__AuxDisjuncts_39));
#line 1009 "loop_inv.m"
              }
#line 1010 "loop_inv.m"
              {
#line 1010 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1010 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_61));
#line 1010 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
#line 1010 "loop_inv.m"
              }
#line 1007 "loop_inv.m"
            }
#line 995 "loop_inv.m"
            break;
#line 995 "loop_inv.m"
          case (MR_Integer) 4:
#line 1012 "loop_inv.m"
            {
#line 1012 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeCtorInfo_74_74 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 1012 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
#line 1012 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__CanFail_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 2)));
#line 1012 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Cases_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 3)));
#line 1012 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxCases_43;
#line 1012 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_58_58;
#line 1012 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_62;

#line 1013 "loop_inv.m"
              {
#line 1013 "loop_inv.m"
                transform_hlds__loop_inv__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1013 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[3]));
#line 1013 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_out_proc_goal_3_f_0_3));
#line 1013 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1013 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 3) = ((MR_Box) (transform_hlds__loop_inv__PPId_5));
#line 1013 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 4) = ((MR_Box) (transform_hlds__loop_inv__CallAux_6));
#line 1013 "loop_inv.m"
              }
#line 1013 "loop_inv.m"
              {
#line 1013 "loop_inv.m"
                transform_hlds__loop_inv__AuxCases_43 = mercury__list__map_2_f_0(transform_hlds__loop_inv__TypeCtorInfo_74_74, transform_hlds__loop_inv__TypeCtorInfo_74_74, transform_hlds__loop_inv__V_58_58, transform_hlds__loop_inv__Cases_42);
              }
#line 1014 "loop_inv.m"
              {
#line 1014 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoalExpr_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1014 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 1) = ((MR_Box) (transform_hlds__loop_inv__Var_40));
#line 1014 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 2) = ((MR_Box) (transform_hlds__loop_inv__CanFail_41));
#line 1014 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 3) = ((MR_Box) (transform_hlds__loop_inv__AuxCases_43));
#line 1014 "loop_inv.m"
              }
#line 1015 "loop_inv.m"
              {
#line 1015 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1015 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_62));
#line 1015 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
#line 1015 "loop_inv.m"
              }
#line 1012 "loop_inv.m"
            }
#line 995 "loop_inv.m"
            break;
#line 995 "loop_inv.m"
          case (MR_Integer) 5:
#line 1022 "loop_inv.m"
            {
#line 1022 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Reason_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
#line 1022 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_64;
#line 1022 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__SubGoal_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 2)));
#line 1022 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxSubGoal_66;

#line 1025 "loop_inv.m"
              {
#line 1025 "loop_inv.m"
                transform_hlds__loop_inv__AuxSubGoal_66 = transform_hlds__loop_inv__gen_out_proc_goal_3_f_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__CallAux_6, transform_hlds__loop_inv__SubGoal_65);
              }
#line 1026 "loop_inv.m"
              {
#line 1026 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoalExpr_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1026 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 1) = ((MR_Box) (transform_hlds__loop_inv__Reason_46));
#line 1026 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxSubGoal_66));
#line 1026 "loop_inv.m"
              }
#line 1027 "loop_inv.m"
              {
#line 1027 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1027 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_64));
#line 1027 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
#line 1027 "loop_inv.m"
              }
#line 1022 "loop_inv.m"
            }
#line 995 "loop_inv.m"
            break;
#line 995 "loop_inv.m"
          case (MR_Integer) 6:
#line 1029 "loop_inv.m"
            {
#line 1029 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Vars_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 1)));
#line 1029 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Cond_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 2)));
#line 1029 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Then_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 3)));
#line 1029 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Else_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_9, (MR_Integer) 4)));
#line 1029 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxCond_51;
#line 1029 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxThen_52;
#line 1029 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxElse_53;
#line 1029 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_67;

#line 1030 "loop_inv.m"
              {
#line 1030 "loop_inv.m"
                transform_hlds__loop_inv__AuxCond_51 = transform_hlds__loop_inv__gen_out_proc_goal_3_f_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__CallAux_6, transform_hlds__loop_inv__Cond_48);
              }
#line 1031 "loop_inv.m"
              {
#line 1031 "loop_inv.m"
                transform_hlds__loop_inv__AuxThen_52 = transform_hlds__loop_inv__gen_out_proc_goal_3_f_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__CallAux_6, transform_hlds__loop_inv__Then_49);
              }
#line 1032 "loop_inv.m"
              {
#line 1032 "loop_inv.m"
                transform_hlds__loop_inv__AuxElse_53 = transform_hlds__loop_inv__gen_out_proc_goal_3_f_0(transform_hlds__loop_inv__PPId_5, transform_hlds__loop_inv__CallAux_6, transform_hlds__loop_inv__Else_50);
              }
#line 1033 "loop_inv.m"
              {
#line 1033 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoalExpr_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1033 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1033 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 1) = ((MR_Box) (transform_hlds__loop_inv__Vars_47));
#line 1033 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxCond_51));
#line 1033 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 3) = ((MR_Box) (transform_hlds__loop_inv__AuxThen_52));
#line 1033 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 4) = ((MR_Box) (transform_hlds__loop_inv__AuxElse_53));
#line 1033 "loop_inv.m"
              }
#line 1034 "loop_inv.m"
              {
#line 1034 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1034 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_67));
#line 1034 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_8, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_10));
#line 1034 "loop_inv.m"
              }
#line 1029 "loop_inv.m"
            }
#line 995 "loop_inv.m"
            break;
#line 995 "loop_inv.m"
          case (MR_Integer) 7:
#line 1036 "loop_inv.m"
            {
#line 1037 "loop_inv.m"
              {
#line 1037 "loop_inv.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.gen_out_proc_goal\'/3", (MR_String) "shorthand");
              }
#line 1036 "loop_inv.m"
            }
#line 995 "loop_inv.m"
            break;
#line 995 "loop_inv.m"
        }
#line 995 "loop_inv.m"
        break;
#line 995 "loop_inv.m"
    }
#line 986 "loop_inv.m"
    return transform_hlds__loop_inv__AuxGoal_8;
#line 986 "loop_inv.m"
  }
#line 984 "loop_inv.m"
}

#line 950 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_out_proc_8_p_0(
#line 950 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredProcId_9,
#line 950 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredInfo0_10,
#line 950 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ProcInfo0_11,
#line 950 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__ProcInfo_12,
#line 950 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__CallAux_13,
#line 950 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Body0_14,
#line 950 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo0_15,
#line 950 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__ModuleInfo_16)
#line 950 "loop_inv.m"
{
#line 955 "loop_inv.m"
  {
#line 955 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 955 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Body_17;
#line 955 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__PredId_18;
#line 955 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__ProcId_19;
#line 955 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__VarSet_20;
#line 955 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__VarTypes_21;
#line 955 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVars_22;
#line 955 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__RttiVarMaps_23;
#line 955 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ProcInfo1_24;
#line 955 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ProcInfo2_25;
#line 955 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ModuleInfo1_26;

#line 957 "loop_inv.m"
    {
#line 957 "loop_inv.m"
      transform_hlds__loop_inv__Body_17 = transform_hlds__loop_inv__gen_out_proc_goal_3_f_0(transform_hlds__loop_inv__PredProcId_9, transform_hlds__loop_inv__CallAux_13, transform_hlds__loop_inv__Body0_14);
    }
#line 960 "loop_inv.m"
    transform_hlds__loop_inv__PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PredProcId_9, (MR_Integer) 0)));
#line 960 "loop_inv.m"
    transform_hlds__loop_inv__ProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PredProcId_9, (MR_Integer) 1)));
#line 962 "loop_inv.m"
    {
#line 962 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__loop_inv__ProcInfo0_11, &transform_hlds__loop_inv__VarSet_20);
    }
#line 963 "loop_inv.m"
    {
#line 963 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__loop_inv__ProcInfo0_11, &transform_hlds__loop_inv__VarTypes_21);
    }
#line 964 "loop_inv.m"
    {
#line 964 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__loop_inv__ProcInfo0_11, &transform_hlds__loop_inv__HeadVars_22);
    }
#line 965 "loop_inv.m"
    {
#line 965 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__loop_inv__ProcInfo0_11, &transform_hlds__loop_inv__RttiVarMaps_23);
    }
#line 967 "loop_inv.m"
    {
#line 967 "loop_inv.m"
      hlds__hlds_pred__proc_info_set_body_7_p_0(transform_hlds__loop_inv__VarSet_20, transform_hlds__loop_inv__VarTypes_21, transform_hlds__loop_inv__HeadVars_22, transform_hlds__loop_inv__Body_17, transform_hlds__loop_inv__RttiVarMaps_23, transform_hlds__loop_inv__ProcInfo0_11, &transform_hlds__loop_inv__ProcInfo1_24);
    }
#line 970 "loop_inv.m"
    {
#line 970 "loop_inv.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__loop_inv__ProcInfo1_24, &transform_hlds__loop_inv__ProcInfo2_25);
    }
#line 972 "loop_inv.m"
    {
#line 972 "loop_inv.m"
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__loop_inv__ProcInfo2_25, transform_hlds__loop_inv__ProcInfo_12, transform_hlds__loop_inv__ModuleInfo0_15, &transform_hlds__loop_inv__ModuleInfo1_26);
    }
#line 975 "loop_inv.m"
    {
#line 975 "loop_inv.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__loop_inv__PredId_18, transform_hlds__loop_inv__ProcId_19, transform_hlds__loop_inv__PredInfo0_10, *transform_hlds__loop_inv__ProcInfo_12, transform_hlds__loop_inv__ModuleInfo1_26, transform_hlds__loop_inv__ModuleInfo_16);
#line 975 "loop_inv.m"
      return;
    }
#line 955 "loop_inv.m"
  }
#line 950 "loop_inv.m"
}

#line 591 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_1(
#line 591 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 591 "loop_inv.m"
{
#line 591 "loop_inv.m"
  {
#line 591 "loop_inv.m"
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 591 "loop_inv.m"
    MR_builtin_longjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__commit_0, 1);
#line 591 "loop_inv.m"
  }
#line 591 "loop_inv.m"
}

#line 592 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_3(
#line 592 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 592 "loop_inv.m"
{
#line 592 "loop_inv.m"
  {
#line 592 "loop_inv.m"
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 592 "loop_inv.m"
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__InvariantGoal_12 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__conv0_InvariantGoal_12);
#line 592 "loop_inv.m"
    {
#line 592 "loop_inv.m"
      transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_2(transform_hlds__loop_inv__env_ptr);
#line 592 "loop_inv.m"
      return;
    }
#line 592 "loop_inv.m"
  }
#line 592 "loop_inv.m"
}

#line 591 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_2(
#line 591 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 591 "loop_inv.m"
{
#line 591 "loop_inv.m"
  {
#line 591 "loop_inv.m"
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 591 "loop_inv.m"
    {
#line 477 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_15_15;
#line 477 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_17_17;

#line 477 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprX_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__InvariantGoal_12, (MR_Integer) 0)));
#line 477 "loop_inv.m"
      transform_hlds__loop_inv__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__InvariantGoal_12, (MR_Integer) 1)));
#line 477 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprY_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__Goal0_5, (MR_Integer) 0)));
#line 477 "loop_inv.m"
      transform_hlds__loop_inv__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__Goal0_5, (MR_Integer) 1)));
#line 479 "loop_inv.m"
      {
#line 479 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprX_14, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprY_16);
      }
#line 480 "loop_inv.m"
      if (!((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded))
#line 482 "loop_inv.m"
        {
#line 482 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__TypeInfo_21_32;
#line 482 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__PredId_18;
#line 482 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__ProcId_19;
#line 482 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__Args_20;
#line 482 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_27_27;
#line 482 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__V_28_28;
#line 482 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_29_29;
#line 481 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___BuiltinX_21;
#line 481 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___ContextX_22;
#line 481 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___SymNameX_23;
#line 483 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___BuiltinY_24;
#line 483 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___ContextY_25;
#line 483 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___SymNameY_26;

#line 481 "loop_inv.m"
          (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprX_14)) == (MR_mktag((MR_Integer) 2)));
#line 481 "loop_inv.m"
          if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded)
#line 481 "loop_inv.m"
            {
#line 481 "loop_inv.m"
              {
#line 481 "loop_inv.m"
                transform_hlds__loop_inv__PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprX_14, (MR_Integer) 0)));
#line 481 "loop_inv.m"
                transform_hlds__loop_inv__ProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprX_14, (MR_Integer) 1)));
#line 481 "loop_inv.m"
                transform_hlds__loop_inv__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprX_14, (MR_Integer) 2)));
#line 481 "loop_inv.m"
                transform_hlds__loop_inv___BuiltinX_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprX_14, (MR_Integer) 3)));
#line 481 "loop_inv.m"
                transform_hlds__loop_inv___ContextX_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprX_14, (MR_Integer) 4)));
#line 481 "loop_inv.m"
                transform_hlds__loop_inv___SymNameX_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprX_14, (MR_Integer) 5)));
#line 481 "loop_inv.m"
              }
#line 482 "loop_inv.m"
              {
#line 483 "loop_inv.m"
                (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprY_16)) == (MR_mktag((MR_Integer) 2)));
#line 483 "loop_inv.m"
                if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded)
#line 483 "loop_inv.m"
                  {
#line 483 "loop_inv.m"
                    {
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprY_16, (MR_Integer) 0)));
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprY_16, (MR_Integer) 1)));
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprY_16, (MR_Integer) 2)));
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv___BuiltinY_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprY_16, (MR_Integer) 3)));
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv___ContextY_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprY_16, (MR_Integer) 4)));
#line 483 "loop_inv.m"
                      transform_hlds__loop_inv___SymNameY_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__GoalExprY_16, (MR_Integer) 5)));
#line 483 "loop_inv.m"
                    }
#line 482 "loop_inv.m"
                    {
#line 483 "loop_inv.m"
                      {
#line 483 "loop_inv.m"
                        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__loop_inv__PredId_18, transform_hlds__loop_inv__V_27_27);
                      }
#line 482 "loop_inv.m"
                      if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded)
#line 482 "loop_inv.m"
                        {
#line 483 "loop_inv.m"
                          (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded = (transform_hlds__loop_inv__ProcId_19 == transform_hlds__loop_inv__V_28_28);
#line 482 "loop_inv.m"
                          if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded)
#line 482 "loop_inv.m"
                            {
#line 6525 "transform_hlds.loop_inv.c"
                              transform_hlds__loop_inv__TypeInfo_21_32 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4];
#line 483 "loop_inv.m"
                              {
#line 483 "loop_inv.m"
                                (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__loop_inv__TypeInfo_21_32, ((MR_Box) (transform_hlds__loop_inv__Args_20)), ((MR_Box) (transform_hlds__loop_inv__V_29_29)));
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
      if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded)
#line 480 "loop_inv.m"
        {
#line 480 "loop_inv.m"
          transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_1(transform_hlds__loop_inv__env_ptr);
#line 480 "loop_inv.m"
          return;
        }
#line 591 "loop_inv.m"
    }
#line 591 "loop_inv.m"
  }
#line 591 "loop_inv.m"
}

#line 591 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_4(
#line 591 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 591 "loop_inv.m"
{
#line 591 "loop_inv.m"
  {
#line 591 "loop_inv.m"
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 591 "loop_inv.m"
    if (MR_builtin_setjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__commit_0) == 0)
#line 591 "loop_inv.m"
      {
#line 591 "loop_inv.m"
        {
#line 592 "loop_inv.m"
          {
#line 592 "loop_inv.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__conv0_InvariantGoal_12, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__V_6_6, transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_3, transform_hlds__loop_inv__env_ptr);
          }
#line 591 "loop_inv.m"
        }
#line 591 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded = MR_FALSE;
#line 591 "loop_inv.m"
      }
#line 591 "loop_inv.m"
    else
#line 591 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded = MR_TRUE;
#line 591 "loop_inv.m"
  }
#line 591 "loop_inv.m"
}

#line 935 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0(
#line 935 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Info_4,
#line 935 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal0_5)
#line 935 "loop_inv.m"
{
#line 935 "loop_inv.m"
  {
#line 935 "loop_inv.m"
    struct transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0_s transform_hlds__loop_inv__env;

#line 935 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__Goal0_5 = transform_hlds__loop_inv__Goal0_5;
#line 938 "loop_inv.m"
    {
#line 938 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__HeadVar__3_3;
#line 939 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 0)));
#line 939 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_8_8;
#line 939 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_9_9;

#line 939 "loop_inv.m"
      (transform_hlds__loop_inv__env).transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 1)));
#line 939 "loop_inv.m"
      transform_hlds__loop_inv__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 2)));
#line 939 "loop_inv.m"
      transform_hlds__loop_inv__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 3)));
#line 591 "loop_inv.m"
      {
#line 591 "loop_inv.m"
        transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0_4(&transform_hlds__loop_inv__env);
      }
#line 938 "loop_inv.m"
      if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__succeeded)
#line 940 "loop_inv.m"
        {
#line 940 "loop_inv.m"
          return transform_hlds__loop_inv__HeadVar__3_3 = hlds__make_goal__true_goal_0_f_0();
        }
#line 938 "loop_inv.m"
      else
#line 942 "loop_inv.m"
        transform_hlds__loop_inv__HeadVar__3_3 = (transform_hlds__loop_inv__env).transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_3_f_0_env_0__Goal0_5;
#line 938 "loop_inv.m"
      return transform_hlds__loop_inv__HeadVar__3_3;
#line 938 "loop_inv.m"
    }
#line 935 "loop_inv.m"
  }
#line 935 "loop_inv.m"
}

#line 926 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_case_2_f_0(
#line 926 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Info_4,
#line 926 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Case_5)
#line 926 "loop_inv.m"
{
#line 928 "loop_inv.m"
  {
#line 928 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 928 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxCase_6;
#line 928 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__MainConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_5, (MR_Integer) 0)));
#line 928 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__OtherConsIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_5, (MR_Integer) 1)));
#line 928 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Case_5, (MR_Integer) 2)));
#line 928 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxGoal_10;

#line 930 "loop_inv.m"
    {
#line 930 "loop_inv.m"
      transform_hlds__loop_inv__AuxGoal_10 = transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Goal_9);
    }
#line 931 "loop_inv.m"
    {
#line 931 "loop_inv.m"
      transform_hlds__loop_inv__AuxCase_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 931 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxCase_6, 0) = ((MR_Box) (transform_hlds__loop_inv__MainConsId_7));
#line 931 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxCase_6, 1) = ((MR_Box) (transform_hlds__loop_inv__OtherConsIds_8));
#line 931 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxCase_6, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxGoal_10));
#line 931 "loop_inv.m"
    }
#line 928 "loop_inv.m"
    return transform_hlds__loop_inv__AuxCase_6;
#line 928 "loop_inv.m"
  }
#line 926 "loop_inv.m"
}

#line 899 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0_3(
#line 899 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 899 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1)
#line 899 "loop_inv.m"
{
#line 899 "loop_inv.m"
  {
#line 899 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_2;
#line 899 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 899 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv2_AuxCase_6;

#line 899 "loop_inv.m"
    {
#line 899 "loop_inv.m"
      transform_hlds__loop_inv__conv2_AuxCase_6 = transform_hlds__loop_inv__gen_aux_proc_case_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 899 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv2_AuxCase_6));
#line 899 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 899 "loop_inv.m"
  }
#line 899 "loop_inv.m"
}

#line 894 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0_2(
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
    MR_Word transform_hlds__loop_inv__conv1_AuxGoal_6;

#line 894 "loop_inv.m"
    {
#line 894 "loop_inv.m"
      transform_hlds__loop_inv__conv1_AuxGoal_6 = transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 894 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv1_AuxGoal_6));
#line 894 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 894 "loop_inv.m"
  }
#line 894 "loop_inv.m"
}

#line 889 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0_1(
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
    MR_Word transform_hlds__loop_inv__conv0_AuxGoal_6;

#line 889 "loop_inv.m"
    {
#line 889 "loop_inv.m"
      transform_hlds__loop_inv__conv0_AuxGoal_6 = transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1));
    }
#line 889 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv0_AuxGoal_6));
#line 889 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_2;
#line 889 "loop_inv.m"
  }
#line 889 "loop_inv.m"
}

#line 870 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0(
#line 870 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Info_4,
#line 870 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_5)
#line 870 "loop_inv.m"
{
#line 872 "loop_inv.m"
  {
#line 872 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 872 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxGoal_6;
#line 872 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 0)));
#line 872 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_5, (MR_Integer) 1)));

#line 881 "loop_inv.m"
#line 881 "loop_inv.m"
    switch (MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_7)) {
#line 881 "loop_inv.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 881 "loop_inv.m"
      case (MR_Integer) 0:
#line 903 "loop_inv.m"
        {
#line 903 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__SubGoal_42 = (MR_Word) MR_body(((MR_Word) transform_hlds__loop_inv__GoalExpr_7), (MR_Integer) 0);
#line 903 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__AuxSubGoal_43;
#line 903 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__AuxGoalExpr_63;

#line 904 "loop_inv.m"
          {
#line 904 "loop_inv.m"
            transform_hlds__loop_inv__AuxSubGoal_43 = transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__SubGoal_42);
          }
#line 905 "loop_inv.m"
          transform_hlds__loop_inv__AuxGoalExpr_63 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__loop_inv__AuxSubGoal_43);
#line 906 "loop_inv.m"
          {
#line 906 "loop_inv.m"
            transform_hlds__loop_inv__AuxGoal_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 906 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_63));
#line 906 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
#line 906 "loop_inv.m"
          }
#line 903 "loop_inv.m"
        }
#line 881 "loop_inv.m"
        break;
#line 881 "loop_inv.m"
      case (MR_Integer) 1:
#line 886 "loop_inv.m"
        {
#line 886 "loop_inv.m"
          return transform_hlds__loop_inv__AuxGoal_6 = transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Goal_5);
        }
#line 881 "loop_inv.m"
        break;
#line 881 "loop_inv.m"
      case (MR_Integer) 2:
#line 875 "loop_inv.m"
        {
#line 875 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)));
#line 875 "loop_inv.m"
          MR_Integer transform_hlds__loop_inv__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 875 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 875 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 875 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 875 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 5)));
#line 876 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_59_59;
#line 876 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 2)));
#line 876 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 0)));
#line 876 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 1)));
#line 876 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 3)));

#line 876 "loop_inv.m"
          {
#line 876 "loop_inv.m"
            transform_hlds__loop_inv__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 876 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 0) = ((MR_Box) (transform_hlds__loop_inv__PredId_9));
#line 876 "loop_inv.m"
            MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_59_59, 1) = ((MR_Box) (transform_hlds__loop_inv__ProcId_10));
#line 876 "loop_inv.m"
          }
#line 876 "loop_inv.m"
          {
#line 876 "loop_inv.m"
            transform_hlds__loop_inv__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__loop_inv__V_59_59, transform_hlds__loop_inv__V_83_83);
          }
#line 878 "loop_inv.m"
          if (transform_hlds__loop_inv__succeeded)
#line 877 "loop_inv.m"
            {
#line 877 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 3)));
#line 877 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 0)));
#line 877 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 1)));
#line 877 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Info_4, (MR_Integer) 2)));

#line 877 "loop_inv.m"
              {
#line 877 "loop_inv.m"
                return transform_hlds__loop_inv__AuxGoal_6 = transform_hlds__loop_inv__gen_aux_call_2_f_0(transform_hlds__loop_inv__V_60_60, transform_hlds__loop_inv__Goal_5);
              }
#line 877 "loop_inv.m"
            }
#line 878 "loop_inv.m"
          else
#line 879 "loop_inv.m"
            {
#line 879 "loop_inv.m"
              return transform_hlds__loop_inv__AuxGoal_6 = transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Goal_5);
            }
#line 875 "loop_inv.m"
        }
#line 881 "loop_inv.m"
        break;
#line 881 "loop_inv.m"
      case (MR_Integer) 3:
#line 881 "loop_inv.m"
#line 881 "loop_inv.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 0)))) {
#line 881 "loop_inv.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 881 "loop_inv.m"
          case (MR_Integer) 0:
#line 881 "loop_inv.m"
          case (MR_Integer) 1:
#line 886 "loop_inv.m"
            {
#line 886 "loop_inv.m"
              return transform_hlds__loop_inv__AuxGoal_6 = transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_f_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Goal_5);
            }
#line 881 "loop_inv.m"
            break;
#line 881 "loop_inv.m"
          case (MR_Integer) 2:
#line 888 "loop_inv.m"
            {
#line 888 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeCtorInfo_74_74 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 888 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__ConjType_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 888 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Conjuncts_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 888 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxConjuncts_34;
#line 888 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_35;
#line 888 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_58_58;

#line 889 "loop_inv.m"
              {
#line 889 "loop_inv.m"
                transform_hlds__loop_inv__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 889 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_6[3]));
#line 889 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0_1));
#line 889 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 889 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_58_58, 3) = ((MR_Box) (transform_hlds__loop_inv__Info_4));
#line 889 "loop_inv.m"
              }
#line 889 "loop_inv.m"
              {
#line 889 "loop_inv.m"
                transform_hlds__loop_inv__AuxConjuncts_34 = mercury__list__map_2_f_0(transform_hlds__loop_inv__TypeCtorInfo_74_74, transform_hlds__loop_inv__TypeCtorInfo_74_74, transform_hlds__loop_inv__V_58_58, transform_hlds__loop_inv__Conjuncts_33);
              }
#line 890 "loop_inv.m"
              {
#line 890 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoalExpr_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 890 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 890 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_35, 1) = ((MR_Box) (transform_hlds__loop_inv__ConjType_32));
#line 890 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_35, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxConjuncts_34));
#line 890 "loop_inv.m"
              }
#line 891 "loop_inv.m"
              {
#line 891 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoal_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 891 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_35));
#line 891 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
#line 891 "loop_inv.m"
              }
#line 888 "loop_inv.m"
            }
#line 881 "loop_inv.m"
            break;
#line 881 "loop_inv.m"
          case (MR_Integer) 3:
#line 893 "loop_inv.m"
            {
#line 893 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeCtorInfo_77_77 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 893 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Disjuncts_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 893 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxDisjuncts_37;
#line 893 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_57_57;
#line 893 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_61;

#line 894 "loop_inv.m"
              {
#line 894 "loop_inv.m"
                transform_hlds__loop_inv__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 894 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_6[3]));
#line 894 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0_2));
#line 894 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 894 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 3) = ((MR_Box) (transform_hlds__loop_inv__Info_4));
#line 894 "loop_inv.m"
              }
#line 894 "loop_inv.m"
              {
#line 894 "loop_inv.m"
                transform_hlds__loop_inv__AuxDisjuncts_37 = mercury__list__map_2_f_0(transform_hlds__loop_inv__TypeCtorInfo_77_77, transform_hlds__loop_inv__TypeCtorInfo_77_77, transform_hlds__loop_inv__V_57_57, transform_hlds__loop_inv__Disjuncts_36);
              }
#line 895 "loop_inv.m"
              {
#line 895 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoalExpr_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 895 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 895 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_61, 1) = ((MR_Box) (transform_hlds__loop_inv__AuxDisjuncts_37));
#line 895 "loop_inv.m"
              }
#line 896 "loop_inv.m"
              {
#line 896 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoal_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 896 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_61));
#line 896 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
#line 896 "loop_inv.m"
              }
#line 893 "loop_inv.m"
            }
#line 881 "loop_inv.m"
            break;
#line 881 "loop_inv.m"
          case (MR_Integer) 4:
#line 898 "loop_inv.m"
            {
#line 898 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__TypeCtorInfo_80_80 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 898 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 898 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__CanFail_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 898 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Cases_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 898 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxCases_41;
#line 898 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_56_56;
#line 898 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_62;

#line 899 "loop_inv.m"
              {
#line 899 "loop_inv.m"
                transform_hlds__loop_inv__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 899 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_56_56, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_6[4]));
#line 899 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_56_56, 1) = ((MR_Box) (transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0_3));
#line 899 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 899 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_56_56, 3) = ((MR_Box) (transform_hlds__loop_inv__Info_4));
#line 899 "loop_inv.m"
              }
#line 899 "loop_inv.m"
              {
#line 899 "loop_inv.m"
                transform_hlds__loop_inv__AuxCases_41 = mercury__list__map_2_f_0(transform_hlds__loop_inv__TypeCtorInfo_80_80, transform_hlds__loop_inv__TypeCtorInfo_80_80, transform_hlds__loop_inv__V_56_56, transform_hlds__loop_inv__Cases_40);
              }
#line 900 "loop_inv.m"
              {
#line 900 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoalExpr_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 900 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 900 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 1) = ((MR_Box) (transform_hlds__loop_inv__Var_38));
#line 900 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 2) = ((MR_Box) (transform_hlds__loop_inv__CanFail_39));
#line 900 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_62, 3) = ((MR_Box) (transform_hlds__loop_inv__AuxCases_41));
#line 900 "loop_inv.m"
              }
#line 901 "loop_inv.m"
              {
#line 901 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoal_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 901 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_62));
#line 901 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
#line 901 "loop_inv.m"
              }
#line 898 "loop_inv.m"
            }
#line 881 "loop_inv.m"
            break;
#line 881 "loop_inv.m"
          case (MR_Integer) 5:
#line 908 "loop_inv.m"
            {
#line 908 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Reason_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 908 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_64;
#line 908 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__SubGoal_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 908 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxSubGoal_66;

#line 911 "loop_inv.m"
              {
#line 911 "loop_inv.m"
                transform_hlds__loop_inv__AuxSubGoal_66 = transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__SubGoal_65);
              }
#line 912 "loop_inv.m"
              {
#line 912 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoalExpr_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 912 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 912 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 1) = ((MR_Box) (transform_hlds__loop_inv__Reason_44));
#line 912 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_64, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxSubGoal_66));
#line 912 "loop_inv.m"
              }
#line 913 "loop_inv.m"
              {
#line 913 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoal_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 913 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_64));
#line 913 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
#line 913 "loop_inv.m"
              }
#line 908 "loop_inv.m"
            }
#line 881 "loop_inv.m"
            break;
#line 881 "loop_inv.m"
          case (MR_Integer) 6:
#line 915 "loop_inv.m"
            {
#line 915 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Vars_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 1)));
#line 915 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Cond_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 2)));
#line 915 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Then_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 3)));
#line 915 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__Else_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_7, (MR_Integer) 4)));
#line 915 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxCond_49;
#line 915 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxThen_50;
#line 915 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxElse_51;
#line 915 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__AuxGoalExpr_67;

#line 916 "loop_inv.m"
              {
#line 916 "loop_inv.m"
                transform_hlds__loop_inv__AuxCond_49 = transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Cond_46);
              }
#line 917 "loop_inv.m"
              {
#line 917 "loop_inv.m"
                transform_hlds__loop_inv__AuxThen_50 = transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Then_47);
              }
#line 918 "loop_inv.m"
              {
#line 918 "loop_inv.m"
                transform_hlds__loop_inv__AuxElse_51 = transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0(transform_hlds__loop_inv__Info_4, transform_hlds__loop_inv__Else_48);
              }
#line 919 "loop_inv.m"
              {
#line 919 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoalExpr_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 919 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 919 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 1) = ((MR_Box) (transform_hlds__loop_inv__Vars_45));
#line 919 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 2) = ((MR_Box) (transform_hlds__loop_inv__AuxCond_49));
#line 919 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 3) = ((MR_Box) (transform_hlds__loop_inv__AuxThen_50));
#line 919 "loop_inv.m"
                MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__AuxGoalExpr_67, 4) = ((MR_Box) (transform_hlds__loop_inv__AuxElse_51));
#line 919 "loop_inv.m"
              }
#line 920 "loop_inv.m"
              {
#line 920 "loop_inv.m"
                transform_hlds__loop_inv__AuxGoal_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 920 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 0) = ((MR_Box) (transform_hlds__loop_inv__AuxGoalExpr_67));
#line 920 "loop_inv.m"
                MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__AuxGoal_6, 1) = ((MR_Box) (transform_hlds__loop_inv__GoalInfo_8));
#line 920 "loop_inv.m"
              }
#line 915 "loop_inv.m"
            }
#line 881 "loop_inv.m"
            break;
#line 881 "loop_inv.m"
          case (MR_Integer) 7:
#line 922 "loop_inv.m"
            {
#line 923 "loop_inv.m"
              {
#line 923 "loop_inv.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.gen_aux_proc_goal\'/2", (MR_String) "shorthand");
              }
#line 922 "loop_inv.m"
            }
#line 881 "loop_inv.m"
            break;
#line 881 "loop_inv.m"
        }
#line 881 "loop_inv.m"
        break;
#line 881 "loop_inv.m"
    }
#line 872 "loop_inv.m"
    return transform_hlds__loop_inv__AuxGoal_6;
#line 872 "loop_inv.m"
  }
#line 870 "loop_inv.m"
}

#line 847 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__gen_aux_proc_9_p_0(
#line 847 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InvGoals_10,
#line 847 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredProcId_11,
#line 847 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__AuxPredProcId_12,
#line 847 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__CallAux_13,
#line 847 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Body_14,
#line 847 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__AuxPredInfo_15,
#line 847 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_0_22,
#line 847 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_23,
#line 847 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_24)
#line 847 "loop_inv.m"
{
#line 852 "loop_inv.m"
  {
#line 852 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 852 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GapInfo_18;
#line 852 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxBody_19;
#line 852 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxPredId_20;
#line 852 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__AuxProcId_21;
#line 852 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_25_25;
#line 852 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_27_27;
#line 852 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__STATE_VARIABLE_AuxProcInfo_29_29;
#line 852 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_30_30;

#line 854 "loop_inv.m"
    {
#line 854 "loop_inv.m"
      transform_hlds__loop_inv__GapInfo_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 854 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GapInfo_18, 0) = ((MR_Box) (transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_23));
#line 854 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GapInfo_18, 1) = ((MR_Box) (transform_hlds__loop_inv__InvGoals_10));
#line 854 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GapInfo_18, 2) = ((MR_Box) (transform_hlds__loop_inv__PredProcId_11));
#line 854 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__GapInfo_18, 3) = ((MR_Box) (transform_hlds__loop_inv__CallAux_13));
#line 854 "loop_inv.m"
    }
#line 855 "loop_inv.m"
    {
#line 855 "loop_inv.m"
      transform_hlds__loop_inv__AuxBody_19 = transform_hlds__loop_inv__gen_aux_proc_goal_2_f_0(transform_hlds__loop_inv__GapInfo_18, transform_hlds__loop_inv__Body_14);
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
#line 852 "loop_inv.m"
  }
#line 847 "loop_inv.m"
}

#line 753 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__create_aux_pred_10_p_0(
#line 753 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__PredProcId_11,
#line 753 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVars_12,
#line 753 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ComputedInvArgs_13,
#line 753 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InitialAuxInstMap_14,
#line 753 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxPredProcId_15,
#line 753 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__CallAux_16,
#line 753 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxPredInfo_17,
#line 753 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__AuxProcInfo_18,
#line 753 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo0_19,
#line 753 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__ModuleInfo_20)
#line 753 "loop_inv.m"
{
#line 759 "loop_inv.m"
  {
#line 759 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PredProcId_11, (MR_Integer) 0)));
#line 759 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__PredProcId_11, (MR_Integer) 1)));
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxHeadVars_23;
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__PredInfo_24;
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ProcInfo_25;
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Goal_26;
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__GoalInfo_28;
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TVarSet_29;
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__VarTypes_30;
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__ClassContext_31;
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__RttiVarMaps_32;
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__VarSet_33;
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InstVarSet_34;
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Markers_35;
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__OrigOrigin_36;
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HasParallelConj_37;
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__VarNameRemap_38;
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__PredModule_39;
#line 759 "loop_inv.m"
    MR_String transform_hlds__loop_inv__PredName_40;
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__PredOrFunc_41;
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Context_42;
#line 759 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__Line_43;
#line 759 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__Counter_44;
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxPredSymName0_45;
#line 759 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__ProcNo_46;
#line 759 "loop_inv.m"
    MR_String transform_hlds__loop_inv__Suffix_47;
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxPredSymName_48;
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__Origin_49;
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__AuxPredId_51;
#line 759 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__AuxProcId_52;
#line 759 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_59_59;
#line 759 "loop_inv.m"
    MR_String transform_hlds__loop_inv__V_62_62;
#line 767 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___GoalExpr_27;
#line 799 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___ExtraArgs_50;

#line 762 "loop_inv.m"
    {
#line 762 "loop_inv.m"
      transform_hlds__loop_inv__AuxHeadVars_23 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__HeadVars_12, transform_hlds__loop_inv__ComputedInvArgs_13);
    }
#line 764 "loop_inv.m"
    {
#line 764 "loop_inv.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__loop_inv__ModuleInfo0_19, transform_hlds__loop_inv__PredId_21, transform_hlds__loop_inv__ProcId_22, &transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__ProcInfo_25);
    }
#line 767 "loop_inv.m"
    {
#line 767 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__loop_inv__ProcInfo_25, &transform_hlds__loop_inv__Goal_26);
    }
#line 767 "loop_inv.m"
    transform_hlds__loop_inv___GoalExpr_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_26, (MR_Integer) 0)));
#line 767 "loop_inv.m"
    transform_hlds__loop_inv__GoalInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_26, (MR_Integer) 1)));
#line 768 "loop_inv.m"
    {
#line 768 "loop_inv.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__TVarSet_29);
    }
#line 769 "loop_inv.m"
    {
#line 769 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__loop_inv__ProcInfo_25, &transform_hlds__loop_inv__VarTypes_30);
    }
#line 770 "loop_inv.m"
    {
#line 770 "loop_inv.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__ClassContext_31);
    }
#line 771 "loop_inv.m"
    {
#line 771 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__loop_inv__ProcInfo_25, &transform_hlds__loop_inv__RttiVarMaps_32);
    }
#line 772 "loop_inv.m"
    {
#line 772 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__loop_inv__ProcInfo_25, &transform_hlds__loop_inv__VarSet_33);
    }
#line 773 "loop_inv.m"
    {
#line 773 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__loop_inv__ProcInfo_25, &transform_hlds__loop_inv__InstVarSet_34);
    }
#line 774 "loop_inv.m"
    {
#line 774 "loop_inv.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__Markers_35);
    }
#line 775 "loop_inv.m"
    {
#line 775 "loop_inv.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__OrigOrigin_36);
    }
#line 776 "loop_inv.m"
    {
#line 776 "loop_inv.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__loop_inv__ProcInfo_25, &transform_hlds__loop_inv__HasParallelConj_37);
    }
#line 777 "loop_inv.m"
    {
#line 777 "loop_inv.m"
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(transform_hlds__loop_inv__PredInfo_24, &transform_hlds__loop_inv__VarNameRemap_38);
    }
#line 779 "loop_inv.m"
    {
#line 779 "loop_inv.m"
      transform_hlds__loop_inv__PredModule_39 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__loop_inv__PredInfo_24);
    }
#line 780 "loop_inv.m"
    {
#line 780 "loop_inv.m"
      transform_hlds__loop_inv__PredName_40 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__loop_inv__PredInfo_24);
    }
#line 781 "loop_inv.m"
    {
#line 781 "loop_inv.m"
      transform_hlds__loop_inv__PredOrFunc_41 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__loop_inv__PredInfo_24);
    }
#line 782 "loop_inv.m"
    {
#line 782 "loop_inv.m"
      transform_hlds__loop_inv__Context_42 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__loop_inv__GoalInfo_28);
    }
#line 783 "loop_inv.m"
    {
#line 783 "loop_inv.m"
      mercury__term__context_line_2_p_0(transform_hlds__loop_inv__Context_42, &transform_hlds__loop_inv__Line_43);
    }
#line 784 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = (transform_hlds__loop_inv__Line_43 == (MR_Integer) 0);
#line 788 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 787 "loop_inv.m"
      {
#line 787 "loop_inv.m"
        transform_hlds__loop_inv__Counter_44 = hlds__hlds_pred__pred_id_to_int_1_f_0(transform_hlds__loop_inv__PredId_21);
      }
#line 788 "loop_inv.m"
    else
#line 789 "loop_inv.m"
      transform_hlds__loop_inv__Counter_44 = (MR_Integer) 1;
#line 791 "loop_inv.m"
    {
#line 791 "loop_inv.m"
      parse_tree__prog_util__make_pred_name_with_context_7_p_0(transform_hlds__loop_inv__PredModule_39, (MR_String) "loop_inv", transform_hlds__loop_inv__PredOrFunc_41, transform_hlds__loop_inv__PredName_40, transform_hlds__loop_inv__Line_43, transform_hlds__loop_inv__Counter_44, &transform_hlds__loop_inv__AuxPredSymName0_45);
    }
#line 793 "loop_inv.m"
    {
#line 793 "loop_inv.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__loop_inv__ProcId_22, &transform_hlds__loop_inv__ProcNo_46);
    }
#line 794 "loop_inv.m"
    {
#line 794 "loop_inv.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_9[0], transform_hlds__loop_inv__ProcNo_46, &transform_hlds__loop_inv__V_62_62);
    }
#line 794 "loop_inv.m"
    {
#line 794 "loop_inv.m"
      transform_hlds__loop_inv__Suffix_47 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__loop_inv__V_62_62);
    }
#line 795 "loop_inv.m"
    {
#line 795 "loop_inv.m"
      mdbcomp__sym_name__add_sym_name_suffix_3_p_0(transform_hlds__loop_inv__AuxPredSymName0_45, transform_hlds__loop_inv__Suffix_47, &transform_hlds__loop_inv__AuxPredSymName_48);
    }
#line 797 "loop_inv.m"
    {
#line 797 "loop_inv.m"
      transform_hlds__loop_inv__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "loop_inv.m"
      MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 797 "loop_inv.m"
      MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__V_59_59, 1) = ((MR_Box) (transform_hlds__loop_inv__ProcNo_46));
#line 797 "loop_inv.m"
    }
#line 797 "loop_inv.m"
    {
#line 797 "loop_inv.m"
      transform_hlds__loop_inv__Origin_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 797 "loop_inv.m"
      MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Origin_49, 0) = ((MR_Box) (transform_hlds__loop_inv__V_59_59));
#line 797 "loop_inv.m"
      MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Origin_49, 1) = ((MR_Box) (transform_hlds__loop_inv__OrigOrigin_36));
#line 797 "loop_inv.m"
      MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__Origin_49, 2) = ((MR_Box) (transform_hlds__loop_inv__PredId_21));
#line 797 "loop_inv.m"
    }
#line 799 "loop_inv.m"
    {
#line 799 "loop_inv.m"
      hlds__hlds_pred__define_new_pred_20_p_0(transform_hlds__loop_inv__Origin_49, transform_hlds__loop_inv__Goal_26, transform_hlds__loop_inv__CallAux_16, transform_hlds__loop_inv__AuxHeadVars_23, &transform_hlds__loop_inv___ExtraArgs_50, transform_hlds__loop_inv__InitialAuxInstMap_14, transform_hlds__loop_inv__AuxPredSymName_48, transform_hlds__loop_inv__TVarSet_29, transform_hlds__loop_inv__VarTypes_30, transform_hlds__loop_inv__ClassContext_31, transform_hlds__loop_inv__RttiVarMaps_32, transform_hlds__loop_inv__VarSet_33, transform_hlds__loop_inv__InstVarSet_34, transform_hlds__loop_inv__Markers_35, (MR_Integer) 1, transform_hlds__loop_inv__HasParallelConj_37, transform_hlds__loop_inv__VarNameRemap_38, transform_hlds__loop_inv__ModuleInfo0_19, transform_hlds__loop_inv__ModuleInfo_20, transform_hlds__loop_inv__AuxPredProcId_15);
    }
#line 830 "loop_inv.m"
    transform_hlds__loop_inv__AuxPredId_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__loop_inv__AuxPredProcId_15, (MR_Integer) 0)));
#line 830 "loop_inv.m"
    transform_hlds__loop_inv__AuxProcId_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *transform_hlds__loop_inv__AuxPredProcId_15, (MR_Integer) 1)));
#line 831 "loop_inv.m"
    {
#line 831 "loop_inv.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(*transform_hlds__loop_inv__ModuleInfo_20, transform_hlds__loop_inv__AuxPredId_51, transform_hlds__loop_inv__AuxProcId_52, transform_hlds__loop_inv__AuxPredInfo_17, transform_hlds__loop_inv__AuxProcInfo_18);
#line 831 "loop_inv.m"
      return;
    }
#line 759 "loop_inv.m"
  }
#line 753 "loop_inv.m"
}

#line 745 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0_1(
#line 745 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 745 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 745 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
#line 745 "loop_inv.m"
{
#line 745 "loop_inv.m"
  {
#line 745 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_3;
#line 745 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 745 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__3_14;

#line 745 "loop_inv.m"
    {
#line 745 "loop_inv.m"
      transform_hlds__loop_inv__conv0_HeadVar__3_14 = transform_hlds__loop_inv__IntroducedFrom__func__compute_initial_aux_instmap__745__1_2_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
#line 745 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__3_14));
#line 745 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_3;
#line 745 "loop_inv.m"
  }
#line 745 "loop_inv.m"
}

#line 742 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__compute_initial_aux_instmap_2_f_0(
#line 742 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Gs_4,
#line 742 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__IM_5)
#line 742 "loop_inv.m"
{
#line 744 "loop_inv.m"
  {
#line 744 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 744 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__3_3;
#line 744 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__conv1_HeadVar__3_3;

#line 744 "loop_inv.m"
    {
#line 744 "loop_inv.m"
      transform_hlds__loop_inv__conv1_HeadVar__3_3 = mercury__list__foldl_3_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[4], transform_hlds__loop_inv__Gs_4, ((MR_Box) (transform_hlds__loop_inv__IM_5)));
    }
#line 744 "loop_inv.m"
    transform_hlds__loop_inv__HeadVar__3_3 = ((MR_Word) transform_hlds__loop_inv__conv1_HeadVar__3_3);
#line 744 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__3_3;
#line 744 "loop_inv.m"
  }
#line 742 "loop_inv.m"
}

#line 727 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__add_output_4_p_0(
#line 727 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UniquelyUsedVars_5,
#line 727 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__X_6,
#line 727 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_8,
#line 727 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_InvVars_9)
#line 727 "loop_inv.m"
{
#line 736 "loop_inv.m"
  {
#line 736 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 733 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeInfo_12_12;

#line 732 "loop_inv.m"
    {
#line 732 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], ((MR_Box) (transform_hlds__loop_inv__X_6)), transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_8);
    }
#line 732 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 732 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 732 "loop_inv.m"
      {
#line 7745 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeInfo_12_12 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 733 "loop_inv.m"
        {
#line 733 "loop_inv.m"
          transform_hlds__loop_inv__succeeded = mercury__list__member_2_p_0(transform_hlds__loop_inv__TypeInfo_12_12, ((MR_Box) (transform_hlds__loop_inv__X_6)), transform_hlds__loop_inv__UniquelyUsedVars_5);
        }
#line 733 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 732 "loop_inv.m"
      }
#line 736 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 735 "loop_inv.m"
      {
#line 735 "loop_inv.m"
        MR_Word base;
#line 735 "loop_inv.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 735 "loop_inv.m"
        *transform_hlds__loop_inv__STATE_VARIABLE_InvVars_9 = base;
#line 735 "loop_inv.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__loop_inv__X_6));
#line 735 "loop_inv.m"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_8));
#line 735 "loop_inv.m"
      }
#line 736 "loop_inv.m"
    else
#line 736 "loop_inv.m"
      *transform_hlds__loop_inv__STATE_VARIABLE_InvVars_9 = transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_8;
#line 736 "loop_inv.m"
  }
#line 727 "loop_inv.m"
}

#line 725 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__add_outputs_5_p_0_1(
#line 725 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 725 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 725 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 725 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 725 "loop_inv.m"
{
#line 725 "loop_inv.m"
  {
#line 725 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 725 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_STATE_VARIABLE_InvVars_9;

#line 725 "loop_inv.m"
    {
#line 725 "loop_inv.m"
      transform_hlds__loop_inv__add_output_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv0_STATE_VARIABLE_InvVars_9);
    }
#line 725 "loop_inv.m"
    *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_STATE_VARIABLE_InvVars_9));
#line 725 "loop_inv.m"
  }
#line 725 "loop_inv.m"
}

#line 721 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__add_outputs_5_p_0(
#line 721 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_6,
#line 721 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UUVs_7,
#line 721 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_8,
#line 721 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_10,
#line 721 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_InvVars_11)
#line 721 "loop_inv.m"
{
#line 724 "loop_inv.m"
  {
#line 724 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 724 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_12_12;
#line 724 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_13_13;
#line 725 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__conv1_STATE_VARIABLE_InvVars_11;

#line 725 "loop_inv.m"
    {
#line 725 "loop_inv.m"
      transform_hlds__loop_inv__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 725 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_12_12, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[1]));
#line 725 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_12_12, 1) = ((MR_Box) (transform_hlds__loop_inv__add_outputs_5_p_0_1));
#line 725 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 725 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_12_12, 3) = ((MR_Box) (transform_hlds__loop_inv__UUVs_7));
#line 725 "loop_inv.m"
    }
#line 725 "loop_inv.m"
    {
#line 725 "loop_inv.m"
      transform_hlds__loop_inv__V_13_13 = transform_hlds__loop_inv__goal_outputs_2_f_0(transform_hlds__loop_inv__ModuleInfo_6, transform_hlds__loop_inv__Goal_8);
    }
#line 725 "loop_inv.m"
    {
#line 725 "loop_inv.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_12_12, transform_hlds__loop_inv__V_13_13, ((MR_Box) (transform_hlds__loop_inv__STATE_VARIABLE_InvVars_0_10)), &transform_hlds__loop_inv__conv1_STATE_VARIABLE_InvVars_11);
    }
#line 725 "loop_inv.m"
    *transform_hlds__loop_inv__STATE_VARIABLE_InvVars_11 = ((MR_Word) transform_hlds__loop_inv__conv1_STATE_VARIABLE_InvVars_11);
#line 724 "loop_inv.m"
  }
#line 721 "loop_inv.m"
}

#line 688 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_1(
#line 688 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 688 "loop_inv.m"
{
#line 688 "loop_inv.m"
  {
#line 688 "loop_inv.m"
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 688 "loop_inv.m"
    MR_builtin_longjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__commit_0, 1);
#line 688 "loop_inv.m"
  }
#line 688 "loop_inv.m"
}

#line 688 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_3(
#line 688 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 688 "loop_inv.m"
{
#line 688 "loop_inv.m"
  {
#line 688 "loop_inv.m"
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 688 "loop_inv.m"
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Mode_85 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__conv0_Mode_85);
#line 688 "loop_inv.m"
    {
#line 688 "loop_inv.m"
      transform_hlds__loop_inv__do_not_hoist_2_6_p_0_2(transform_hlds__loop_inv__env_ptr);
#line 688 "loop_inv.m"
      return;
    }
#line 688 "loop_inv.m"
  }
#line 688 "loop_inv.m"
}

#line 688 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_2(
#line 688 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 688 "loop_inv.m"
{
#line 688 "loop_inv.m"
  {
#line 688 "loop_inv.m"
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 689 "loop_inv.m"
    {
#line 689 "loop_inv.m"
      check_hlds__mode_util__mode_get_insts_4_p_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Mode_85, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__InitialInst_83, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__FinalInst_84);
    }
#line 691 "loop_inv.m"
    {
#line 691 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = check_hlds__inst_util__inst_contains_any_2_p_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__InitialInst_83);
    }
#line 692 "loop_inv.m"
    if (!((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
#line 693 "loop_inv.m"
      {
#line 693 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = check_hlds__inst_util__inst_contains_any_2_p_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__FinalInst_84);
      }
#line 692 "loop_inv.m"
    if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
#line 692 "loop_inv.m"
      {
#line 692 "loop_inv.m"
        transform_hlds__loop_inv__do_not_hoist_2_6_p_0_1(transform_hlds__loop_inv__env_ptr);
#line 692 "loop_inv.m"
        return;
      }
#line 688 "loop_inv.m"
  }
#line 688 "loop_inv.m"
}

#line 688 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0_4(
#line 688 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 688 "loop_inv.m"
{
#line 688 "loop_inv.m"
  {
#line 688 "loop_inv.m"
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 688 "loop_inv.m"
    if (MR_builtin_setjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__commit_0) == 0)
#line 688 "loop_inv.m"
      {
#line 688 "loop_inv.m"
        {
#line 688 "loop_inv.m"
          {
#line 688 "loop_inv.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__conv0_Mode_85, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Modes_73, transform_hlds__loop_inv__do_not_hoist_2_6_p_0_3, transform_hlds__loop_inv__env_ptr);
          }
#line 688 "loop_inv.m"
        }
#line 688 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_FALSE;
#line 688 "loop_inv.m"
      }
#line 688 "loop_inv.m"
    else
#line 688 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_TRUE;
#line 688 "loop_inv.m"
  }
#line 688 "loop_inv.m"
}

#line 617 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_2_6_p_0(
#line 617 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_7,
#line 617 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_8,
#line 617 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_DHGs_0_11,
#line 617 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_DHGs_12,
#line 617 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__STATE_VARIABLE_DHVs_0_13,
#line 617 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__STATE_VARIABLE_DHVs_14)
#line 617 "loop_inv.m"
{
#line 617 "loop_inv.m"
  {
#line 617 "loop_inv.m"
    struct transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0_s transform_hlds__loop_inv__env;

#line 617 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7 = transform_hlds__loop_inv__ModuleInfo_7;
#line 643 "loop_inv.m"
    {
#line 643 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__GoalExpr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 0)));
#line 643 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__Construction_21;
#line 643 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_42_42;
#line 643 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_44_44;
#line 643 "loop_inv.m"
      MR_Word transform_hlds__loop_inv___GoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 1)));
#line 644 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_24_24;
#line 644 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_25_25;
#line 644 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_26_26;
#line 644 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_27_27;
#line 645 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_40_40;
#line 645 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_41_41;
#line 645 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_43_43;
#line 645 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_45_45;
#line 645 "loop_inv.m"
      MR_Word transform_hlds__loop_inv__V_46_46;

#line 644 "loop_inv.m"
      (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_19)) == (MR_mktag((MR_Integer) 1)));
#line 644 "loop_inv.m"
      if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
#line 644 "loop_inv.m"
        {
#line 644 "loop_inv.m"
          transform_hlds__loop_inv__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_19, (MR_Integer) 0)));
#line 644 "loop_inv.m"
          transform_hlds__loop_inv__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_19, (MR_Integer) 1)));
#line 644 "loop_inv.m"
          transform_hlds__loop_inv__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_19, (MR_Integer) 2)));
#line 644 "loop_inv.m"
          transform_hlds__loop_inv__Construction_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_19, (MR_Integer) 3)));
#line 644 "loop_inv.m"
          transform_hlds__loop_inv__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_19, (MR_Integer) 4)));
#line 645 "loop_inv.m"
          (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__Construction_21)) == (MR_mktag((MR_Integer) 0)));
#line 645 "loop_inv.m"
          if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
#line 645 "loop_inv.m"
            {
#line 645 "loop_inv.m"
              transform_hlds__loop_inv__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 0)));
#line 645 "loop_inv.m"
              transform_hlds__loop_inv__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 1)));
#line 645 "loop_inv.m"
              transform_hlds__loop_inv__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 2)));
#line 645 "loop_inv.m"
              transform_hlds__loop_inv__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 3)));
#line 645 "loop_inv.m"
              transform_hlds__loop_inv__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 4)));
#line 645 "loop_inv.m"
              transform_hlds__loop_inv__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 5)));
#line 645 "loop_inv.m"
              transform_hlds__loop_inv__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Construction_21, (MR_Integer) 6)));
#line 645 "loop_inv.m"
              (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = (transform_hlds__loop_inv__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 646 "loop_inv.m"
              if (!((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
#line 646 "loop_inv.m"
                (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = (transform_hlds__loop_inv__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "loop_inv.m"
            }
#line 644 "loop_inv.m"
        }
#line 643 "loop_inv.m"
    }
#line 623 "loop_inv.m"
    if (!((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
#line 623 "loop_inv.m"
      {
#line 653 "loop_inv.m"
        {
#line 653 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__GoalExpr_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 0)));
#line 653 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_55_55;
#line 653 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___GoalInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 1)));
#line 654 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_56_56;
#line 654 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_57_57;
#line 654 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_58_58;
#line 654 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_59_59;
#line 654 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_49_49;
#line 654 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_50_50;
#line 654 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_51_51;
#line 654 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_52_52;
#line 654 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_53_53;
#line 654 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__V_54_54;

#line 654 "loop_inv.m"
          (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_47)) == (MR_mktag((MR_Integer) 1)));
#line 654 "loop_inv.m"
          if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
#line 654 "loop_inv.m"
            {
#line 654 "loop_inv.m"
              transform_hlds__loop_inv__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_47, (MR_Integer) 0)));
#line 654 "loop_inv.m"
              transform_hlds__loop_inv__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_47, (MR_Integer) 1)));
#line 654 "loop_inv.m"
              transform_hlds__loop_inv__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_47, (MR_Integer) 2)));
#line 654 "loop_inv.m"
              transform_hlds__loop_inv__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_47, (MR_Integer) 3)));
#line 654 "loop_inv.m"
              transform_hlds__loop_inv__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__GoalExpr_47, (MR_Integer) 4)));
#line 654 "loop_inv.m"
              (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__V_55_55)) == (MR_mktag((MR_Integer) 1)));
#line 654 "loop_inv.m"
              if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
#line 654 "loop_inv.m"
                {
#line 654 "loop_inv.m"
                  transform_hlds__loop_inv__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 0)));
#line 654 "loop_inv.m"
                  transform_hlds__loop_inv__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 1)));
#line 654 "loop_inv.m"
                  transform_hlds__loop_inv__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 2)));
#line 654 "loop_inv.m"
                  transform_hlds__loop_inv__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 3)));
#line 654 "loop_inv.m"
                  transform_hlds__loop_inv__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 4)));
#line 654 "loop_inv.m"
                  transform_hlds__loop_inv__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__V_55_55, (MR_Integer) 5)));
#line 654 "loop_inv.m"
                }
#line 654 "loop_inv.m"
            }
#line 653 "loop_inv.m"
        }
#line 623 "loop_inv.m"
        if (!((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
#line 623 "loop_inv.m"
          {
#line 660 "loop_inv.m"
            {
#line 660 "loop_inv.m"
              MR_Word transform_hlds__loop_inv__V_61_61;

#line 661 "loop_inv.m"
              {
#line 661 "loop_inv.m"
                transform_hlds__loop_inv__V_61_61 = hlds__hlds_goal__goal_get_purity_1_f_0(transform_hlds__loop_inv__Goal_8);
              }
#line 661 "loop_inv.m"
              (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = (transform_hlds__loop_inv__V_61_61 == (MR_Integer) 2);
#line 660 "loop_inv.m"
            }
#line 623 "loop_inv.m"
            if (!((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
#line 623 "loop_inv.m"
              {
#line 667 "loop_inv.m"
                {
#line 667 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__GoalInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 1)));
#line 667 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__Detism_64;
#line 667 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv__MaxSolns_66;
#line 667 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv___GoalExpr_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 0)));
#line 669 "loop_inv.m"
                  MR_Word transform_hlds__loop_inv___CanFail_65;

#line 668 "loop_inv.m"
                  {
#line 668 "loop_inv.m"
                    transform_hlds__loop_inv__Detism_64 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__loop_inv__GoalInfo_63);
                  }
#line 669 "loop_inv.m"
                  {
#line 669 "loop_inv.m"
                    parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__loop_inv__Detism_64, &transform_hlds__loop_inv___CanFail_65, &transform_hlds__loop_inv__MaxSolns_66);
                  }
#line 670 "loop_inv.m"
                  (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = (transform_hlds__loop_inv__MaxSolns_66 == (MR_Integer) 0);
#line 667 "loop_inv.m"
                }
#line 623 "loop_inv.m"
                if (!((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded))
#line 679 "loop_inv.m"
                  {
#line 679 "loop_inv.m"
                    MR_Word transform_hlds__loop_inv__GoalExpr_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 0)));
#line 680 "loop_inv.m"
                    MR_Word transform_hlds__loop_inv___GoalInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__Goal_8, (MR_Integer) 1)));

#line 683 "loop_inv.m"
                    if (((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_69)) == (MR_mktag((MR_Integer) 2))))
#line 684 "loop_inv.m"
                      {
#line 684 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__PredId_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 0)));
#line 684 "loop_inv.m"
                        MR_Integer transform_hlds__loop_inv__ProcId_77 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 1)));
#line 684 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__ProcInfo_92;
#line 684 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 2)));
#line 684 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 3)));
#line 684 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 4)));
#line 684 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 5)));
#line 1175 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_91_91;

#line 1175 "loop_inv.m"
                        {
#line 1175 "loop_inv.m"
                          hlds__hlds_module__module_info_pred_proc_info_5_p_0((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, transform_hlds__loop_inv__PredId_76, transform_hlds__loop_inv__ProcId_77, &transform_hlds__loop_inv__V_91_91, &transform_hlds__loop_inv__ProcInfo_92);
                        }
#line 1176 "loop_inv.m"
                        {
#line 1176 "loop_inv.m"
                          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__loop_inv__ProcInfo_92, &(transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Modes_73);
                        }
#line 684 "loop_inv.m"
                        (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_TRUE;
#line 684 "loop_inv.m"
                      }
#line 683 "loop_inv.m"
                    else
#line 683 "loop_inv.m"
                    if (((((MR_tag((MR_Word) transform_hlds__loop_inv__GoalExpr_69)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 682 "loop_inv.m"
                      {
#line 682 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 1)));
#line 682 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 2)));
#line 682 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_74_74;
#line 682 "loop_inv.m"
                        MR_Word transform_hlds__loop_inv__V_75_75;

#line 682 "loop_inv.m"
                        (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__Modes_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 3)));
#line 682 "loop_inv.m"
                        transform_hlds__loop_inv__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 4)));
#line 682 "loop_inv.m"
                        transform_hlds__loop_inv__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__loop_inv__GoalExpr_69, (MR_Integer) 5)));
#line 682 "loop_inv.m"
                        (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_TRUE;
#line 682 "loop_inv.m"
                      }
#line 683 "loop_inv.m"
                    else
#line 683 "loop_inv.m"
                      (transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded = MR_FALSE;
#line 679 "loop_inv.m"
                    if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
#line 688 "loop_inv.m"
                      {
#line 688 "loop_inv.m"
                        transform_hlds__loop_inv__do_not_hoist_2_6_p_0_4(&transform_hlds__loop_inv__env);
                      }
#line 679 "loop_inv.m"
                  }
#line 623 "loop_inv.m"
              }
#line 623 "loop_inv.m"
          }
#line 623 "loop_inv.m"
      }
#line 631 "loop_inv.m"
    if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__succeeded)
#line 629 "loop_inv.m"
      {
#line 629 "loop_inv.m"
        {
#line 629 "loop_inv.m"
          mercury__list__cons_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__loop_inv__Goal_8)), transform_hlds__loop_inv__STATE_VARIABLE_DHGs_0_11, transform_hlds__loop_inv__STATE_VARIABLE_DHGs_12);
        }
#line 630 "loop_inv.m"
        {
#line 630 "loop_inv.m"
          transform_hlds__loop_inv__add_outputs_5_p_0((transform_hlds__loop_inv__env).transform_hlds__loop_inv__do_not_hoist_2_6_p_0_env_0__ModuleInfo_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__loop_inv__Goal_8, transform_hlds__loop_inv__STATE_VARIABLE_DHVs_0_13, transform_hlds__loop_inv__STATE_VARIABLE_DHVs_14);
#line 630 "loop_inv.m"
          return;
        }
#line 629 "loop_inv.m"
      }
#line 631 "loop_inv.m"
    else
#line 632 "loop_inv.m"
      {
#line 632 "loop_inv.m"
        *transform_hlds__loop_inv__STATE_VARIABLE_DHVs_14 = transform_hlds__loop_inv__STATE_VARIABLE_DHVs_0_13;
#line 632 "loop_inv.m"
        *transform_hlds__loop_inv__STATE_VARIABLE_DHGs_12 = transform_hlds__loop_inv__STATE_VARIABLE_DHGs_0_11;
#line 632 "loop_inv.m"
      }
#line 617 "loop_inv.m"
  }
#line 617 "loop_inv.m"
}

#line 614 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_4_p_0_1(
#line 614 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 614 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 614 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 614 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3,
#line 614 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_4,
#line 614 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_5)
#line 614 "loop_inv.m"
{
#line 614 "loop_inv.m"
  {
#line 614 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 614 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv1_STATE_VARIABLE_DHGs_12;
#line 614 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_STATE_VARIABLE_DHVs_14;

#line 614 "loop_inv.m"
    {
#line 614 "loop_inv.m"
      transform_hlds__loop_inv__do_not_hoist_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv1_STATE_VARIABLE_DHGs_12, ((MR_Word) transform_hlds__loop_inv__wrapper_arg_4), &transform_hlds__loop_inv__conv0_STATE_VARIABLE_DHVs_14);
    }
#line 614 "loop_inv.m"
    *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv1_STATE_VARIABLE_DHGs_12));
#line 614 "loop_inv.m"
    *transform_hlds__loop_inv__wrapper_arg_5 = ((MR_Box) (transform_hlds__loop_inv__conv0_STATE_VARIABLE_DHVs_14));
#line 614 "loop_inv.m"
  }
#line 614 "loop_inv.m"
}

#line 610 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__do_not_hoist_4_p_0(
#line 610 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 610 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InvGoals_6,
#line 610 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__DontHoistGoals_7,
#line 610 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__DontHoistVars_8)
#line 610 "loop_inv.m"
{
#line 613 "loop_inv.m"
  {
#line 613 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 613 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_9_9;
#line 614 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__conv3_DontHoistGoals_7;
#line 614 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__conv2_DontHoistVars_8;

#line 614 "loop_inv.m"
    {
#line 614 "loop_inv.m"
      transform_hlds__loop_inv__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 614 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_9_9, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_8[0]));
#line 614 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_9_9, 1) = ((MR_Box) (transform_hlds__loop_inv__do_not_hoist_4_p_0_1));
#line 614 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 614 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_9_9, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_5));
#line 614 "loop_inv.m"
    }
#line 614 "loop_inv.m"
    {
#line 614 "loop_inv.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__loop_inv_scalar_common_1[1], (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_9_9, transform_hlds__loop_inv__InvGoals_6, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__loop_inv__conv3_DontHoistGoals_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__loop_inv__conv2_DontHoistVars_8);
    }
#line 614 "loop_inv.m"
    *transform_hlds__loop_inv__DontHoistGoals_7 = ((MR_Word) transform_hlds__loop_inv__conv3_DontHoistGoals_7);
#line 614 "loop_inv.m"
    *transform_hlds__loop_inv__DontHoistVars_8 = ((MR_Word) transform_hlds__loop_inv__conv2_DontHoistVars_8);
#line 613 "loop_inv.m"
  }
#line 610 "loop_inv.m"
}

#line 725 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_13(
#line 725 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 725 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 725 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 725 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3)
#line 725 "loop_inv.m"
{
#line 725 "loop_inv.m"
  {
#line 725 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 725 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv3_STATE_VARIABLE_InvVars_9;

#line 725 "loop_inv.m"
    {
#line 725 "loop_inv.m"
      transform_hlds__loop_inv__add_output_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv3_STATE_VARIABLE_InvVars_9);
    }
#line 725 "loop_inv.m"
    *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv3_STATE_VARIABLE_InvVars_9));
#line 725 "loop_inv.m"
  }
#line 725 "loop_inv.m"
}

#line 591 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_1(
#line 591 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 591 "loop_inv.m"
{
#line 591 "loop_inv.m"
  {
#line 591 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 591 "loop_inv.m"
    MR_builtin_longjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_0, 1);
#line 591 "loop_inv.m"
  }
#line 591 "loop_inv.m"
}

#line 592 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_3(
#line 592 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 592 "loop_inv.m"
{
#line 592 "loop_inv.m"
  {
#line 592 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 592 "loop_inv.m"
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__InvariantGoal_17 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv0_InvariantGoal_17);
#line 592 "loop_inv.m"
    {
#line 592 "loop_inv.m"
      transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_2(transform_hlds__loop_inv__env_ptr);
#line 592 "loop_inv.m"
      return;
    }
#line 592 "loop_inv.m"
  }
#line 592 "loop_inv.m"
}

#line 591 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_2(
#line 591 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 591 "loop_inv.m"
{
#line 591 "loop_inv.m"
  {
#line 591 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 591 "loop_inv.m"
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
#line 8637 "transform_hlds.loop_inv.c"
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
#line 591 "loop_inv.m"
    }
#line 591 "loop_inv.m"
  }
#line 591 "loop_inv.m"
}

#line 591 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_4(
#line 591 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 591 "loop_inv.m"
{
#line 591 "loop_inv.m"
  {
#line 591 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 591 "loop_inv.m"
    if (MR_builtin_setjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_0) == 0)
#line 591 "loop_inv.m"
      {
#line 591 "loop_inv.m"
        {
#line 592 "loop_inv.m"
          {
#line 592 "loop_inv.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv0_InvariantGoal_17, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IGs0_11, transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_3, transform_hlds__loop_inv__env_ptr);
          }
#line 591 "loop_inv.m"
        }
#line 591 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_FALSE;
#line 591 "loop_inv.m"
      }
#line 591 "loop_inv.m"
    else
#line 591 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_TRUE;
#line 591 "loop_inv.m"
  }
#line 591 "loop_inv.m"
}

#line 582 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_5(
#line 582 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 582 "loop_inv.m"
{
#line 582 "loop_inv.m"
  {
#line 582 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 582 "loop_inv.m"
    MR_builtin_longjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_1, 1);
#line 582 "loop_inv.m"
  }
#line 582 "loop_inv.m"
}

#line 584 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_7(
#line 584 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 584 "loop_inv.m"
{
#line 584 "loop_inv.m"
  {
#line 584 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 584 "loop_inv.m"
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUV_42 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv1_UUV_42);
#line 584 "loop_inv.m"
    {
#line 584 "loop_inv.m"
      transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_6(transform_hlds__loop_inv__env_ptr);
#line 584 "loop_inv.m"
      return;
    }
#line 584 "loop_inv.m"
  }
#line 584 "loop_inv.m"
}

#line 582 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_6(
#line 582 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 582 "loop_inv.m"
{
#line 582 "loop_inv.m"
  {
#line 582 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 8769 "transform_hlds.loop_inv.c"
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeCtorInfo_9_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 585 "loop_inv.m"
    {
#line 585 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeCtorInfo_9_44, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__NonLocals_41, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUV_42);
    }
#line 585 "loop_inv.m"
    if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
#line 585 "loop_inv.m"
      {
#line 585 "loop_inv.m"
        transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_5(transform_hlds__loop_inv__env_ptr);
#line 585 "loop_inv.m"
        return;
      }
#line 582 "loop_inv.m"
  }
#line 582 "loop_inv.m"
}

#line 582 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_8(
#line 582 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 582 "loop_inv.m"
{
#line 582 "loop_inv.m"
  {
#line 582 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 582 "loop_inv.m"
    if (MR_builtin_setjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_1) == 0)
#line 582 "loop_inv.m"
      {
#line 582 "loop_inv.m"
        {
#line 582 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__GoalInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10, (MR_Integer) 1)));
#line 582 "loop_inv.m"
          MR_Word transform_hlds__loop_inv___GoalExpr_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10, (MR_Integer) 0)));

#line 583 "loop_inv.m"
          {
#line 583 "loop_inv.m"
            (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__NonLocals_41 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__loop_inv__GoalInfo_40);
          }
#line 584 "loop_inv.m"
          {
#line 584 "loop_inv.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv1_UUV_42, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUVs_9, transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_7, transform_hlds__loop_inv__env_ptr);
          }
#line 582 "loop_inv.m"
        }
#line 582 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_FALSE;
#line 582 "loop_inv.m"
      }
#line 582 "loop_inv.m"
    else
#line 582 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_TRUE;
#line 582 "loop_inv.m"
  }
#line 582 "loop_inv.m"
}

#line 602 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_9(
#line 602 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 602 "loop_inv.m"
{
#line 602 "loop_inv.m"
  {
#line 602 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 602 "loop_inv.m"
    MR_builtin_longjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_2, 1);
#line 602 "loop_inv.m"
  }
#line 602 "loop_inv.m"
}

#line 603 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_11(
#line 603 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 603 "loop_inv.m"
{
#line 603 "loop_inv.m"
  {
#line 603 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 603 "loop_inv.m"
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__V_49 = ((MR_Word) (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv2_V_49);
#line 603 "loop_inv.m"
    {
#line 603 "loop_inv.m"
      transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_10(transform_hlds__loop_inv__env_ptr);
#line 603 "loop_inv.m"
      return;
    }
#line 603 "loop_inv.m"
  }
#line 603 "loop_inv.m"
}

#line 602 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_10(
#line 602 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 602 "loop_inv.m"
{
#line 602 "loop_inv.m"
  {
#line 602 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 605 "loop_inv.m"
    {
#line 605 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = mercury__list__member_2_p_0((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeInfo_9_50, ((MR_Box) ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__V_49)), (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IVs0_13);
    }
#line 604 "loop_inv.m"
    (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = !((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded);
#line 604 "loop_inv.m"
    if ((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
#line 604 "loop_inv.m"
      {
#line 604 "loop_inv.m"
        transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_9(transform_hlds__loop_inv__env_ptr);
#line 604 "loop_inv.m"
        return;
      }
#line 602 "loop_inv.m"
  }
#line 602 "loop_inv.m"
}

#line 602 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_12(
#line 602 "loop_inv.m"
  void * transform_hlds__loop_inv__env_ptr_arg)
#line 602 "loop_inv.m"
{
#line 602 "loop_inv.m"
  {
#line 602 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s * transform_hlds__loop_inv__env_ptr = (struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s *) transform_hlds__loop_inv__env_ptr_arg;

#line 602 "loop_inv.m"
    if (MR_builtin_setjmp((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__commit_2) == 0)
#line 602 "loop_inv.m"
      {
#line 8932 "transform_hlds.loop_inv.c"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeInfo_9_50 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 603 "loop_inv.m"
        {
#line 603 "loop_inv.m"
          mercury__list__member_2_p_1((transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__TypeInfo_9_50, &(transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__conv2_V_49, (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Inputs_48, transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_11, transform_hlds__loop_inv__env_ptr);
        }
#line 602 "loop_inv.m"
        (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_FALSE;
#line 602 "loop_inv.m"
      }
#line 602 "loop_inv.m"
    else
#line 602 "loop_inv.m"
      (transform_hlds__loop_inv__env_ptr)->transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = MR_TRUE;
#line 602 "loop_inv.m"
  }
#line 602 "loop_inv.m"
}

#line 562 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_2_7_p_0(
#line 562 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_8,
#line 562 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UUVs_9,
#line 562 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Goal_10,
#line 562 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__IGs0_11,
#line 562 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__IGs_12,
#line 562 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__IVs0_13,
#line 562 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__IVs_14)
#line 562 "loop_inv.m"
{
#line 562 "loop_inv.m"
  {
#line 562 "loop_inv.m"
    struct transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0_s transform_hlds__loop_inv__env;

#line 562 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUVs_9 = transform_hlds__loop_inv__UUVs_9;
#line 562 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10 = transform_hlds__loop_inv__Goal_10;
#line 562 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IGs0_11 = transform_hlds__loop_inv__IGs0_11;
#line 562 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IVs0_13 = transform_hlds__loop_inv__IVs0_13;
#line 591 "loop_inv.m"
    {
#line 591 "loop_inv.m"
      transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_4(&transform_hlds__loop_inv__env);
    }
#line 567 "loop_inv.m"
    (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = !((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded);
#line 567 "loop_inv.m"
    if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
#line 567 "loop_inv.m"
      {
#line 582 "loop_inv.m"
        {
#line 582 "loop_inv.m"
          transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_8(&transform_hlds__loop_inv__env);
        }
#line 568 "loop_inv.m"
        (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = !((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded);
#line 567 "loop_inv.m"
        if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
#line 567 "loop_inv.m"
          {
#line 601 "loop_inv.m"
            {
#line 601 "loop_inv.m"
              (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Inputs_48 = transform_hlds__loop_inv__goal_inputs_2_f_0(transform_hlds__loop_inv__ModuleInfo_8, (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10);
            }
#line 602 "loop_inv.m"
            {
#line 602 "loop_inv.m"
              transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_12(&transform_hlds__loop_inv__env);
            }
#line 602 "loop_inv.m"
            (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded = !((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded);
#line 567 "loop_inv.m"
          }
#line 567 "loop_inv.m"
      }
#line 573 "loop_inv.m"
    if ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__succeeded)
#line 571 "loop_inv.m"
      {
#line 571 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_57_57;
#line 571 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__V_58_58;
#line 725 "loop_inv.m"
        MR_Box transform_hlds__loop_inv__conv4_IVs_14;

#line 571 "loop_inv.m"
        {
#line 571 "loop_inv.m"
          MR_Word base;
#line 571 "loop_inv.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "loop_inv.m"
          *transform_hlds__loop_inv__IGs_12 = base;
#line 571 "loop_inv.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10));
#line 571 "loop_inv.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IGs0_11));
#line 571 "loop_inv.m"
        }
#line 725 "loop_inv.m"
        {
#line 725 "loop_inv.m"
          transform_hlds__loop_inv__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 725 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[1]));
#line 725 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 1) = ((MR_Box) (transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_13));
#line 725 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 725 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_57_57, 3) = ((MR_Box) ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__UUVs_9));
#line 725 "loop_inv.m"
        }
#line 725 "loop_inv.m"
        {
#line 725 "loop_inv.m"
          transform_hlds__loop_inv__V_58_58 = transform_hlds__loop_inv__goal_outputs_2_f_0(transform_hlds__loop_inv__ModuleInfo_8, (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__Goal_10);
        }
#line 725 "loop_inv.m"
        {
#line 725 "loop_inv.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], (MR_Word) &transform_hlds__loop_inv_scalar_common_1[4], transform_hlds__loop_inv__V_57_57, transform_hlds__loop_inv__V_58_58, ((MR_Box) ((transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IVs0_13)), &transform_hlds__loop_inv__conv4_IVs_14);
        }
#line 725 "loop_inv.m"
        *transform_hlds__loop_inv__IVs_14 = ((MR_Word) transform_hlds__loop_inv__conv4_IVs_14);
#line 571 "loop_inv.m"
      }
#line 573 "loop_inv.m"
    else
#line 574 "loop_inv.m"
      {
#line 574 "loop_inv.m"
        *transform_hlds__loop_inv__IGs_12 = (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IGs0_11;
#line 575 "loop_inv.m"
        *transform_hlds__loop_inv__IVs_14 = (transform_hlds__loop_inv__env).transform_hlds__loop_inv__inv_goals_vars_2_7_p_0_env_0__IVs0_13;
#line 574 "loop_inv.m"
      }
#line 562 "loop_inv.m"
  }
#line 562 "loop_inv.m"
}

#line 554 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_6_p_0_1(
#line 554 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 554 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 554 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2,
#line 554 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_3,
#line 554 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_4,
#line 554 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_5)
#line 554 "loop_inv.m"
{
#line 554 "loop_inv.m"
  {
#line 554 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 554 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv1_IGs_12;
#line 554 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_IVs_14;

#line 554 "loop_inv.m"
    {
#line 554 "loop_inv.m"
      transform_hlds__loop_inv__inv_goals_vars_2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2), &transform_hlds__loop_inv__conv1_IGs_12, ((MR_Word) transform_hlds__loop_inv__wrapper_arg_4), &transform_hlds__loop_inv__conv0_IVs_14);
    }
#line 554 "loop_inv.m"
    *transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv1_IGs_12));
#line 554 "loop_inv.m"
    *transform_hlds__loop_inv__wrapper_arg_5 = ((MR_Box) (transform_hlds__loop_inv__conv0_IVs_14));
#line 554 "loop_inv.m"
  }
#line 554 "loop_inv.m"
}

#line 548 "loop_inv.m"
static void MR_CALL 
transform_hlds__loop_inv__inv_goals_vars_6_p_0(
#line 548 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_7,
#line 548 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__UniquelyUsedVars_8,
#line 548 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InvGoals0_9,
#line 548 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__InvGoals_10,
#line 548 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__InvVars0_11,
#line 548 "loop_inv.m"
  MR_Word * transform_hlds__loop_inv__InvVars_12)
#line 548 "loop_inv.m"
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

#line 554 "loop_inv.m"
    {
#line 554 "loop_inv.m"
      transform_hlds__loop_inv__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 554 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_13_13, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_7[0]));
#line 554 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_13_13, 1) = ((MR_Box) (transform_hlds__loop_inv__inv_goals_vars_6_p_0_1));
#line 554 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 554 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_13_13, 3) = ((MR_Box) (transform_hlds__loop_inv__ModuleInfo_7));
#line 554 "loop_inv.m"
      MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_13_13, 4) = ((MR_Box) (transform_hlds__loop_inv__UniquelyUsedVars_8));
#line 554 "loop_inv.m"
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
#line 548 "loop_inv.m"
}

#line 525 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_2_f_0(
#line 525 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 525 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Y_2)
#line 525 "loop_inv.m"
{
#line 528 "loop_inv.m"
  {
#line 528 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 528 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__3_3;

#line 528 "loop_inv.m"
    if ((transform_hlds__loop_inv__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "loop_inv.m"
      transform_hlds__loop_inv__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "loop_inv.m"
    else
#line 529 "loop_inv.m"
      {
#line 529 "loop_inv.m"
        MR_Word transform_hlds__loop_inv__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 0)));

#line 529 "loop_inv.m"
        {
#line 529 "loop_inv.m"
          transform_hlds__loop_inv__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], ((MR_Box) (transform_hlds__loop_inv__X_5)), ((MR_Box) (transform_hlds__loop_inv__Y_2)));
        }
#line 529 "loop_inv.m"
        if (transform_hlds__loop_inv__succeeded)
#line 529 "loop_inv.m"
          transform_hlds__loop_inv__HeadVar__3_3 = transform_hlds__loop_inv__HeadVar__1_1;
#line 529 "loop_inv.m"
        else
#line 529 "loop_inv.m"
          transform_hlds__loop_inv__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 529 "loop_inv.m"
      }
#line 528 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__3_3;
#line 528 "loop_inv.m"
  }
#line 525 "loop_inv.m"
}

#line 519 "loop_inv.m"
static MR_Box MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0_1(
#line 519 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 519 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 519 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_2)
#line 519 "loop_inv.m"
{
#line 519 "loop_inv.m"
  {
#line 519 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__wrapper_arg_3;
#line 519 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 519 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv0_HeadVar__3_3;

#line 519 "loop_inv.m"
    {
#line 519 "loop_inv.m"
      transform_hlds__loop_inv__conv0_HeadVar__3_3 = transform_hlds__loop_inv__refine_candidate_inv_args_2_2_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), ((MR_Word) transform_hlds__loop_inv__wrapper_arg_2));
    }
#line 519 "loop_inv.m"
    transform_hlds__loop_inv__wrapper_arg_3 = ((MR_Box) (transform_hlds__loop_inv__conv0_HeadVar__3_3));
#line 519 "loop_inv.m"
    return transform_hlds__loop_inv__wrapper_arg_3;
#line 519 "loop_inv.m"
  }
#line 519 "loop_inv.m"
}

#line 514 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__refine_candidate_inv_args_2_f_0(
#line 514 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__HeadVar__1_1,
#line 514 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__MaybeInvArgs_6)
#line 514 "loop_inv.m"
{
#line 517 "loop_inv.m"
  {
#line 517 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 517 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__3_3;
#line 517 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__RecCall_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 0)));
#line 517 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___RecCallInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__HeadVar__1_1, (MR_Integer) 1)));
#line 517 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__CallArgs_9;
#line 518 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_7_7;
#line 518 "loop_inv.m"
    MR_Integer transform_hlds__loop_inv__V_8_8;
#line 518 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_10_10;
#line 518 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_11_11;
#line 518 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_12_12;

#line 518 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = ((MR_tag((MR_Word) transform_hlds__loop_inv__RecCall_4)) == (MR_mktag((MR_Integer) 2)));
#line 518 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 518 "loop_inv.m"
      {
#line 518 "loop_inv.m"
        transform_hlds__loop_inv__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 0)));
#line 518 "loop_inv.m"
        transform_hlds__loop_inv__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 1)));
#line 518 "loop_inv.m"
        transform_hlds__loop_inv__CallArgs_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 2)));
#line 518 "loop_inv.m"
        transform_hlds__loop_inv__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 3)));
#line 518 "loop_inv.m"
        transform_hlds__loop_inv__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 4)));
#line 518 "loop_inv.m"
        transform_hlds__loop_inv__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__loop_inv__RecCall_4, (MR_Integer) 5)));
#line 519 "loop_inv.m"
        {
#line 519 "loop_inv.m"
          MR_Word transform_hlds__loop_inv__TypeInfo_17_17 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[2];

#line 519 "loop_inv.m"
          {
#line 519 "loop_inv.m"
            transform_hlds__loop_inv__HeadVar__3_3 = mercury__list__map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_17_17, (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0], transform_hlds__loop_inv__TypeInfo_17_17, (MR_Word) &transform_hlds__loop_inv_scalar_common_2[3], transform_hlds__loop_inv__MaybeInvArgs_6, transform_hlds__loop_inv__CallArgs_9);
          }
#line 519 "loop_inv.m"
        }
#line 518 "loop_inv.m"
      }
#line 518 "loop_inv.m"
    else
#line 522 "loop_inv.m"
      {
#line 522 "loop_inv.m"
        MR_Box transform_hlds__loop_inv__conv1_HeadVar__3_3;

#line 522 "loop_inv.m"
        {
#line 522 "loop_inv.m"
          transform_hlds__loop_inv__conv1_HeadVar__3_3 = mercury__require__unexpected_3_f_0((MR_Word) &transform_hlds__loop_inv_scalar_common_1[3], (MR_String) "transform_hlds.loop_inv", (MR_String) "function \140transform_hlds.loop_inv.refine_candidate_inv_args\'/2", (MR_String) "non call/6 found in argument 1");
        }
#line 522 "loop_inv.m"
        transform_hlds__loop_inv__HeadVar__3_3 = ((MR_Word) transform_hlds__loop_inv__conv1_HeadVar__3_3);
#line 522 "loop_inv.m"
      }
#line 517 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__3_3;
#line 517 "loop_inv.m"
  }
#line 514 "loop_inv.m"
}

#line 506 "loop_inv.m"
static MR_Word MR_CALL 
transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_f_0(
#line 506 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__ModuleInfo_5,
#line 506 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Arg_6,
#line 506 "loop_inv.m"
  MR_Word transform_hlds__loop_inv__Mode_7)
#line 506 "loop_inv.m"
{
#line 509 "loop_inv.m"
  {
#line 509 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 509 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__HeadVar__4_4;
#line 509 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InvArg_8 = transform_hlds__loop_inv__Arg_6;
#line 1256 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__InInst_12;
#line 1257 "loop_inv.m"
    MR_Word transform_hlds__loop_inv___OutInst_13;

#line 1257 "loop_inv.m"
    {
#line 1257 "loop_inv.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__Mode_7, &transform_hlds__loop_inv__InInst_12, &transform_hlds__loop_inv___OutInst_13);
    }
#line 1258 "loop_inv.m"
    {
#line 1258 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__loop_inv__ModuleInfo_5, transform_hlds__loop_inv__InInst_12);
    }
#line 1258 "loop_inv.m"
    transform_hlds__loop_inv__succeeded = !(transform_hlds__loop_inv__succeeded);
#line 509 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 510 "loop_inv.m"
      {
#line 510 "loop_inv.m"
        transform_hlds__loop_inv__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 510 "loop_inv.m"
        MR_hl_field(MR_mktag(1), transform_hlds__loop_inv__HeadVar__4_4, 0) = ((MR_Box) (transform_hlds__loop_inv__InvArg_8));
#line 510 "loop_inv.m"
      }
#line 509 "loop_inv.m"
    else
#line 510 "loop_inv.m"
      transform_hlds__loop_inv__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 509 "loop_inv.m"
    return transform_hlds__loop_inv__HeadVar__4_4;
#line 509 "loop_inv.m"
  }
#line 506 "loop_inv.m"
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
#line 9631 "transform_hlds.loop_inv.c"
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

#line 499 "loop_inv.m"
static MR_bool MR_CALL 
transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_4(
#line 499 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__closure_arg,
#line 499 "loop_inv.m"
  MR_Box transform_hlds__loop_inv__wrapper_arg_1,
#line 499 "loop_inv.m"
  MR_Box * transform_hlds__loop_inv__wrapper_arg_2)
#line 499 "loop_inv.m"
{
#line 499 "loop_inv.m"
  {
#line 499 "loop_inv.m"
    MR_bool transform_hlds__loop_inv__succeeded;
#line 499 "loop_inv.m"
    MR_Box transform_hlds__loop_inv__closure = transform_hlds__loop_inv__closure_arg;
#line 499 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__conv3_HeadVar__2_18;

#line 499 "loop_inv.m"
    {
#line 499 "loop_inv.m"
      transform_hlds__loop_inv__succeeded = transform_hlds__loop_inv__IntroducedFrom__func__inv_args__499__1_1_f_0(((MR_Word) transform_hlds__loop_inv__wrapper_arg_1), &transform_hlds__loop_inv__conv3_HeadVar__2_18);
    }
#line 499 "loop_inv.m"
    if (transform_hlds__loop_inv__succeeded)
#line 499 "loop_inv.m"
      {
#line 499 "loop_inv.m"
        *transform_hlds__loop_inv__wrapper_arg_2 = ((MR_Box) (transform_hlds__loop_inv__conv3_HeadVar__2_18));
#line 499 "loop_inv.m"
        transform_hlds__loop_inv__succeeded = MR_TRUE;
#line 499 "loop_inv.m"
      }
#line 499 "loop_inv.m"
    return transform_hlds__loop_inv__succeeded;
#line 499 "loop_inv.m"
  }
#line 499 "loop_inv.m"
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
    MR_Word transform_hlds__loop_inv__TypeInfo_20_85;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeCtorInfo_21_86;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeInfo_22_87;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeCtorInfo_26_91;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__TypeInfo_27_92;
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
    MR_Word transform_hlds__loop_inv__V_79_79;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_80_80;
#line 153 "loop_inv.m"
    MR_Word transform_hlds__loop_inv__V_81_81;
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
#line 11465 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeInfo_7_50 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 1091 "loop_inv.m"
        {
#line 1091 "loop_inv.m"
          transform_hlds__loop_inv__V_49_49 = transform_hlds__loop_inv__used_vars_2_f_0(transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36, transform_hlds__loop_inv__Body_11);
        }
#line 1091 "loop_inv.m"
        {
#line 1091 "loop_inv.m"
          transform_hlds__loop_inv__UniquelyUsedVars_14 = mercury__list__sort_and_remove_dups_1_f_0(transform_hlds__loop_inv__TypeInfo_7_50, transform_hlds__loop_inv__V_49_49);
        }
#line 11477 "transform_hlds.loop_inv.c"
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
#line 11509 "transform_hlds.loop_inv.c"
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
#line 11552 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeInfo_20_85 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 11554 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeCtorInfo_21_86 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 11556 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeInfo_22_87 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[2];
#line 494 "loop_inv.m"
        {
#line 494 "loop_inv.m"
          transform_hlds__loop_inv__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 494 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_79_79, 0) = ((MR_Box) (&transform_hlds__loop_inv_scalar_common_5[0]));
#line 494 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_79_79, 1) = ((MR_Box) (transform_hlds__loop_inv__hoist_loop_invariants_6_p_0_2));
#line 494 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 494 "loop_inv.m"
          MR_hl_field(MR_mktag(0), transform_hlds__loop_inv__V_79_79, 3) = ((MR_Box) (transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36));
#line 494 "loop_inv.m"
        }
#line 494 "loop_inv.m"
        {
#line 494 "loop_inv.m"
          transform_hlds__loop_inv__MaybeInvArgs0_76 = mercury__list__map_corresponding_3_f_0(transform_hlds__loop_inv__TypeInfo_20_85, transform_hlds__loop_inv__TypeCtorInfo_21_86, transform_hlds__loop_inv__TypeInfo_22_87, transform_hlds__loop_inv__V_79_79, transform_hlds__loop_inv__HeadVars_12, transform_hlds__loop_inv__HeadVarModes_13);
        }
#line 11577 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeCtorInfo_26_91 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 11579 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeInfo_27_92 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[3];
#line 497 "loop_inv.m"
        transform_hlds__loop_inv__V_80_80 = (MR_Word) &transform_hlds__loop_inv_scalar_common_2[1];
#line 497 "loop_inv.m"
        {
#line 497 "loop_inv.m"
          transform_hlds__loop_inv__conv2_MaybeInvArgs_77 = mercury__list__foldl_3_f_0(transform_hlds__loop_inv__TypeCtorInfo_26_91, transform_hlds__loop_inv__TypeInfo_27_92, transform_hlds__loop_inv__V_80_80, transform_hlds__loop_inv__RecCalls_16, ((MR_Box) (transform_hlds__loop_inv__MaybeInvArgs0_76)));
        }
#line 497 "loop_inv.m"
        transform_hlds__loop_inv__MaybeInvArgs_77 = ((MR_Word) transform_hlds__loop_inv__conv2_MaybeInvArgs_77);
#line 499 "loop_inv.m"
        transform_hlds__loop_inv__V_81_81 = (MR_Word) &transform_hlds__loop_inv_scalar_common_2[2];
#line 499 "loop_inv.m"
        {
#line 499 "loop_inv.m"
          transform_hlds__loop_inv__InvArgs0_17 = mercury__list__filter_map_2_f_0(transform_hlds__loop_inv__TypeInfo_22_87, transform_hlds__loop_inv__TypeInfo_20_85, transform_hlds__loop_inv__V_81_81, transform_hlds__loop_inv__MaybeInvArgs_77);
        }
#line 11597 "transform_hlds.loop_inv.c"
        transform_hlds__loop_inv__TypeInfo_43_43 = (MR_Word) &transform_hlds__loop_inv_scalar_common_1[0];
#line 181 "loop_inv.m"
        {
#line 181 "loop_inv.m"
          transform_hlds__loop_inv__InvArgs_18 = mercury__list__delete_elems_2_f_0(transform_hlds__loop_inv__TypeInfo_43_43, transform_hlds__loop_inv__InvArgs0_17, transform_hlds__loop_inv__UniquelyUsedVars_14);
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
#line 11614 "transform_hlds.loop_inv.c"
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
        MR_Word transform_hlds__loop_inv__CallAux_31;
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
          transform_hlds__loop_inv__create_aux_pred_10_p_0(transform_hlds__loop_inv__PredProcId_7, transform_hlds__loop_inv__HeadVars_12, transform_hlds__loop_inv__ComputedInvVars_27, transform_hlds__loop_inv__InitialAuxInstMap_29, &transform_hlds__loop_inv__AuxPredProcId_30, &transform_hlds__loop_inv__CallAux_31, &transform_hlds__loop_inv__AuxPredInfo_32, &transform_hlds__loop_inv__AuxProcInfo_33, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_0_36, &transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_39_39);
        }
#line 247 "loop_inv.m"
        {
#line 247 "loop_inv.m"
          transform_hlds__loop_inv__gen_aux_proc_9_p_0(transform_hlds__loop_inv__InvGoals_23, transform_hlds__loop_inv__PredProcId_7, transform_hlds__loop_inv__AuxPredProcId_30, transform_hlds__loop_inv__CallAux_31, transform_hlds__loop_inv__Body_11, transform_hlds__loop_inv__AuxPredInfo_32, transform_hlds__loop_inv__AuxProcInfo_33, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_39_39, &transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_40_40);
        }
#line 252 "loop_inv.m"
        {
#line 252 "loop_inv.m"
          transform_hlds__loop_inv__gen_out_proc_8_p_0(transform_hlds__loop_inv__PredProcId_7, transform_hlds__loop_inv__PredInfo_8, transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_0_34, transform_hlds__loop_inv__STATE_VARIABLE_ProcInfo_35, transform_hlds__loop_inv__CallAux_31, transform_hlds__loop_inv__Body_11, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_40_40, transform_hlds__loop_inv__STATE_VARIABLE_ModuleInfo_37);
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
