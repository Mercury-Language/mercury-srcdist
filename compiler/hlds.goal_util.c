/*
** Automatically generated from `goal_util.m'
** by the Mercury compiler,
** version 14.01.1, configured for x86_64-apple-darwin13.3.0.
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


/* :- module hlds.goal_util. */
/* :- implementation. */

/*
INIT mercury__hlds__goal_util__init
ENDINIT
*/

#include "hlds.goal_util.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "solutions.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1761 "goal_util.m"
struct hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0_s {
#line 1761 "goal_util.m"
  MR_Tuple * hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__HeadVar__2_14;
#line 1761 "goal_util.m"
  MR_Cont hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__cont;
#line 1761 "goal_util.m"
  void * hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__cont_env_ptr;
#line 1761 "goal_util.m"
  MR_bool hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__succeeded;
#line 1761 "goal_util.m"
  MR_Word hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__SubGoal_7;
#line 1761 "goal_util.m"
  MR_Word hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__V_15_15;
#line 1761 "goal_util.m"
  MR_Word hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__PredId_16;
#line 1761 "goal_util.m"
  MR_Word hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__Args_17;
#line 1761 "goal_util.m"
};

#line 837 "goal_util.m"
struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0_s {
#line 837 "goal_util.m"
  MR_Word hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__RttiVarMaps_6;
#line 837 "goal_util.m"
  MR_Word hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__NonLocalTypeVars_15;
#line 837 "goal_util.m"
  MR_Word * hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__HeadVar__3_32;
#line 837 "goal_util.m"
  MR_Cont hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__cont;
#line 837 "goal_util.m"
  void * hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__cont_env_ptr;
#line 837 "goal_util.m"
  MR_bool hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__succeeded;
#line 837 "goal_util.m"
  MR_Word hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__TypeCtorInfo_43_43;
#line 837 "goal_util.m"
  MR_Word hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__Constraint_23;
#line 837 "goal_util.m"
  MR_Word hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__ArgTypes_25;
#line 837 "goal_util.m"
  MR_Word hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__TypeVar_34;
#line 842 "goal_util.m"
  MR_Box hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__conv0_Constraint_23;
#line 837 "goal_util.m"
};

#line 1336 "goal_util.m"
struct hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0_s {
#line 1336 "goal_util.m"
  MR_Word hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0__Goals_2;
#line 1338 "goal_util.m"
  MR_bool hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0__succeeded;
#line 1338 "goal_util.m"
  jmp_buf hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0__commit_0;
#line 1338 "goal_util.m"
  MR_Word hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0__Goal_3;
#line 1338 "goal_util.m"
  MR_Word hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0__GoalExpr_5;
#line 1339 "goal_util.m"
  MR_Box hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0__conv0_Goal_3;
#line 1336 "goal_util.m"
};

#line 1304 "goal_util.m"
struct hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0_s {
#line 1304 "goal_util.m"
  MR_Word hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1;
#line 1306 "goal_util.m"
  MR_bool hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__succeeded;
#line 1310 "goal_util.m"
  jmp_buf hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__commit_0;
#line 1310 "goal_util.m"
  MR_Word hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__Case_8;
#line 1310 "goal_util.m"
  MR_Word hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__Goal_11;
#line 1310 "goal_util.m"
  MR_Word hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__GoalExpr_43;
#line 1311 "goal_util.m"
  MR_Box hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__conv0_Case_8;
#line 1304 "goal_util.m"
};

#line 1768 "goal_util.m"
struct hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0_s {
#line 1768 "goal_util.m"
  MR_Box * hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__wrapper_arg_1;
#line 1768 "goal_util.m"
  MR_Cont hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__cont;
#line 1768 "goal_util.m"
  void * hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__cont_env_ptr;
#line 1768 "goal_util.m"
  MR_Word hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__conv0_PredProcId_5;
#line 1768 "goal_util.m"
};

#line 1757 "goal_util.m"
struct hlds__goal_util__predids_from_goals_2_p_0_2_env_0_s {
#line 1757 "goal_util.m"
  MR_Box * hlds__goal_util__predids_from_goals_2_p_0_2_env_0__wrapper_arg_1;
#line 1757 "goal_util.m"
  MR_Cont hlds__goal_util__predids_from_goals_2_p_0_2_env_0__cont;
#line 1757 "goal_util.m"
  void * hlds__goal_util__predids_from_goals_2_p_0_2_env_0__cont_env_ptr;
#line 1757 "goal_util.m"
  MR_Word hlds__goal_util__predids_from_goals_2_p_0_2_env_0__conv0_PredId_5;
#line 1757 "goal_util.m"
};

#line 1761 "goal_util.m"
struct hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0_s {
#line 1761 "goal_util.m"
  MR_Box * hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__wrapper_arg_1;
#line 1761 "goal_util.m"
  MR_Cont hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__cont;
#line 1761 "goal_util.m"
  void * hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__cont_env_ptr;
#line 1761 "goal_util.m"
  MR_Tuple hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__conv0_HeadVar__2_14;
#line 1761 "goal_util.m"
};

#line 1757 "goal_util.m"
struct hlds__goal_util__predids_from_goal_2_p_0_2_env_0_s {
#line 1757 "goal_util.m"
  MR_Box * hlds__goal_util__predids_from_goal_2_p_0_2_env_0__wrapper_arg_1;
#line 1757 "goal_util.m"
  MR_Cont hlds__goal_util__predids_from_goal_2_p_0_2_env_0__cont;
#line 1757 "goal_util.m"
  void * hlds__goal_util__predids_from_goal_2_p_0_2_env_0__cont_env_ptr;
#line 1757 "goal_util.m"
  MR_Word hlds__goal_util__predids_from_goal_2_p_0_2_env_0__conv0_PredId_5;
#line 1757 "goal_util.m"
};

#line 216 "goal_util.m"
struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s {
#line 216 "goal_util.m"
  MR_Word * hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2;
#line 216 "goal_util.m"
  MR_Cont hlds__goal_util__direct_subgoal_2_p_0_env_0__cont;
#line 216 "goal_util.m"
  void * hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr;
#line 1357 "goal_util.m"
  MR_Box hlds__goal_util__direct_subgoal_2_p_0_env_0__conv0_Goal_2;
#line 1359 "goal_util.m"
  MR_Box hlds__goal_util__direct_subgoal_2_p_0_env_0__conv1_Goal_2;
#line 1360 "goal_util.m"
  MR_Word hlds__goal_util__direct_subgoal_2_p_0_env_0__Case_20;
#line 1361 "goal_util.m"
  MR_Box hlds__goal_util__direct_subgoal_2_p_0_env_0__conv2_Case_20;
#line 216 "goal_util.m"
};

#line 211 "goal_util.m"
struct hlds__goal_util__goal_contains_goal_2_p_0_env_0_s {
#line 211 "goal_util.m"
  MR_Word * hlds__goal_util__goal_contains_goal_2_p_0_env_0__HeadVar__2_2;
#line 211 "goal_util.m"
  MR_Cont hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont;
#line 211 "goal_util.m"
  void * hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont_env_ptr;
#line 1345 "goal_util.m"
  MR_Word hlds__goal_util__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7;
#line 211 "goal_util.m"
};

#line 837 "goal_util.m"
struct hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0_s {
#line 837 "goal_util.m"
  MR_Box * hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__wrapper_arg_1;
#line 837 "goal_util.m"
  MR_Cont hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__cont;
#line 837 "goal_util.m"
  void * hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__cont_env_ptr;
#line 837 "goal_util.m"
  MR_Word hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__conv1_HeadVar__3_32;
#line 837 "goal_util.m"
};


#line 319 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 322 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 325 "hlds.goal_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 328 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 331 "hlds.goal_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 334 "hlds.goal_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__goal_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 337 "hlds.goal_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 hlds__goal_util____vpti_tuple_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 340 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 343 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__goal_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 346 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 349 "hlds.goal_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 hlds__goal_util____vpti_pred_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 352 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_0;

#line 355 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_1;

#line 358 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_value_ordered_attach_in_from_ground_term_0[2];

#line 361 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_attach_in_from_ground_term_0[2];

#line 364 "hlds.goal_util.c"
static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_attach_in_from_ground_term_0[2];

#line 367 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_0;

#line 370 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_1;

#line 373 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_value_ordered_goal_is_atomic_0[2];

#line 376 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_goal_is_atomic_0[2];

#line 379 "hlds.goal_util.c"
static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_goal_is_atomic_0[2];

#line 382 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_0;

#line 385 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_1;

#line 388 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_value_ordered_is_leaf_0[2];

#line 391 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_is_leaf_0[2];

#line 394 "hlds.goal_util.c"
static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_is_leaf_0[2];

#line 397 "hlds.goal_util.c"
static const MR_PseudoTypeInfo hlds__goal_util__hlds__goal_util__field_types_maybe_transformed_goal_0_0[1];

#line 400 "hlds.goal_util.c"
static const MR_DuFunctorDesc hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_0;

#line 403 "hlds.goal_util.c"
static const MR_PseudoTypeInfo hlds__goal_util__hlds__goal_util__field_types_maybe_transformed_goal_0_1[1];

#line 406 "hlds.goal_util.c"
static const MR_DuFunctorDesc hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_1;

#line 409 "hlds.goal_util.c"
static const MR_DuFunctorDesc hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_2;

#line 412 "hlds.goal_util.c"
static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_0[1];

#line 415 "hlds.goal_util.c"
static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_1[1];

#line 418 "hlds.goal_util.c"
static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_2[1];

#line 421 "hlds.goal_util.c"
static const MR_DuPtagLayout hlds__goal_util__hlds__goal_util__du_ptag_ordered_maybe_transformed_goal_0[3];

#line 424 "hlds.goal_util.c"
static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_name_ordered_maybe_transformed_goal_0[3];

#line 427 "hlds.goal_util.c"
static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_maybe_transformed_goal_0[3];

#line 430 "hlds.goal_util.c"
static MR_bool MR_CALL 
hlds__goal_util____Unify____attach_in_from_ground_term_0_0_10001(
#line 433 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 435 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2);

#line 438 "hlds.goal_util.c"
static void MR_CALL 
hlds__goal_util____Compare____attach_in_from_ground_term_0_0_10001(
#line 441 "hlds.goal_util.c"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 443 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 445 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_3);

#line 448 "hlds.goal_util.c"
static MR_bool MR_CALL 
hlds__goal_util____Unify____goal_is_atomic_0_0_10001(
#line 451 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 453 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2);

#line 456 "hlds.goal_util.c"
static void MR_CALL 
hlds__goal_util____Compare____goal_is_atomic_0_0_10001(
#line 459 "hlds.goal_util.c"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 461 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 463 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_3);

#line 466 "hlds.goal_util.c"
static MR_bool MR_CALL 
hlds__goal_util____Unify____is_leaf_0_0_10001(
#line 469 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 471 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2);

#line 474 "hlds.goal_util.c"
static void MR_CALL 
hlds__goal_util____Compare____is_leaf_0_0_10001(
#line 477 "hlds.goal_util.c"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 479 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 481 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_3);

#line 484 "hlds.goal_util.c"
static MR_bool MR_CALL 
hlds__goal_util____Unify____maybe_transformed_goal_0_0_10001(
#line 487 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 489 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2);

#line 492 "hlds.goal_util.c"
static void MR_CALL 
hlds__goal_util____Compare____maybe_transformed_goal_0_0_10001(
#line 495 "hlds.goal_util.c"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 497 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 499 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_3);

#line 697 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_p_1_1(
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 697 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 732 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_p_1(
#line 732 "goal_util.m"
  MR_Word hlds__goal_util__Features_5,
#line 732 "goal_util.m"
  MR_Word hlds__goal_util__GoalExpr0_7,
#line 732 "goal_util.m"
  MR_Word * hlds__goal_util__GoalExpr_8);

#line 697 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_p_0_1(
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 697 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 730 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_p_0(
#line 730 "goal_util.m"
  MR_Word hlds__goal_util__Features_5,
#line 730 "goal_util.m"
  MR_Word hlds__goal_util__GoalExpr0_7,
#line 730 "goal_util.m"
  MR_Word * hlds__goal_util__GoalExpr_8);

#line 697 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1_1(
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 697 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 717 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(
#line 717 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 717 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3,
#line 717 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__4_4);

#line 697 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0_1(
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 697 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 715 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(
#line 715 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 715 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3,
#line 715 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__4_4);

#line 697 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1(
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 697 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 704 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(
#line 704 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 704 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3,
#line 704 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__4_4);

#line 697 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1(
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 697 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 702 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(
#line 702 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 702 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3,
#line 702 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__4_4);

#line 697 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1(
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 697 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 697 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1(
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 697 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 2265 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2265__1_3_p_0(
#line 2265 "goal_util.m"
  MR_Word hlds__goal_util__TransformP_4,
#line 2265 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_61,
#line 2265 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__3_62);

#line 2084 "goal_util.m"
static MR_Word MR_CALL 
hlds__goal_util__IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap__2084__1_1_f_0(
#line 2084 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_107);

#line 1719 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_foreign_proc__1719__1_2_p_0(
#line 1719 "goal_util.m"
  MR_Word hlds__goal_util__Purity_22,
#line 1719 "goal_util.m"
  MR_Word hlds__goal_util__PredPurity_45);

#line 1686 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_simple_call__1686__1_2_p_0(
#line 1686 "goal_util.m"
  MR_Word hlds__goal_util__Purity_18,
#line 1686 "goal_util.m"
  MR_Word hlds__goal_util__PredPurity_36);

#line 1394 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1394__1_2_p_0(
#line 1394 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_63,
#line 1394 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__2_64);

#line 1761 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_1(
#line 1761 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1761 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0(
#line 1761 "goal_util.m"
  MR_Word hlds__goal_util__Goal_3,
#line 1761 "goal_util.m"
  MR_Tuple * hlds__goal_util__HeadVar__2_14,
#line 1761 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1761 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 842 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_2(
#line 842 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 837 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_3(
#line 837 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 837 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_1(
#line 837 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 837 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0(
#line 837 "goal_util.m"
  MR_Word hlds__goal_util__RttiVarMaps_6,
#line 837 "goal_util.m"
  MR_Word hlds__goal_util__NonLocalTypeVars_15,
#line 837 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__3_32,
#line 837 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 837 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 826 "goal_util.m"
static MR_Word MR_CALL 
hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__826__1_2_f_0(
#line 826 "goal_util.m"
  MR_Word hlds__goal_util__RttiVarMaps_6,
#line 826 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_28);

#line 2240 "goal_util.m"
static void MR_CALL 
hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_p_0(
#line 2240 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 2240 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__2_2);

#line 1881 "goal_util.m"
static MR_Word MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_case_1_f_0(
#line 1881 "goal_util.m"
  MR_Word hlds__goal_util__Case0_3);

#line 1447 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__flatten_disj_2_f_0_1(
#line 1447 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1447 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1447 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2);

#line 1443 "goal_util.m"
static MR_Word MR_CALL 
hlds__goal_util__flatten_disj_2_f_0(
#line 1443 "goal_util.m"
  MR_Word hlds__goal_util__Disj_4,
#line 1443 "goal_util.m"
  MR_Word hlds__goal_util__Disjs0_5);

#line 1338 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goals_contain_reconstruction_1_p_0_1(
#line 1338 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1339 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goals_contain_reconstruction_1_p_0_3(
#line 1339 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1338 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goals_contain_reconstruction_1_p_0_2(
#line 1338 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1338 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goals_contain_reconstruction_1_p_0_4(
#line 1338 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1336 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__goals_contain_reconstruction_1_p_0(
#line 1336 "goal_util.m"
  MR_Word hlds__goal_util__Goals_2);

#line 1310 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_1(
#line 1310 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1311 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_3(
#line 1311 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1310 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_2(
#line 1310 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1310 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_4(
#line 1310 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1304 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__goal_expr_contains_reconstruction_1_p_0(
#line 1304 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1);

#line 1290 "goal_util.m"
static void MR_CALL 
hlds__goal_util__case_list_calls_proc_in_list_4_p_0(
#line 1290 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1290 "goal_util.m"
  MR_Word hlds__goal_util__PredProcIds_2,
#line 1290 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0_3,
#line 1290 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_CalledSet_4);

#line 1281 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_list_calls_proc_in_list_2_4_p_0(
#line 1281 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1281 "goal_util.m"
  MR_Word hlds__goal_util__PredProcIds_2,
#line 1281 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0_3,
#line 1281 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_CalledSet_4);

#line 1217 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_calls_proc_in_list_2_4_p_0(
#line 1217 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1217 "goal_util.m"
  MR_Word hlds__goal_util__PredProcIds_7,
#line 1217 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0_58,
#line 1217 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_CalledSet_59);

#line 1175 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_expr_calls_pred_id_2_p_1(
#line 1175 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1175 "goal_util.m"
  MR_Word * hlds__goal_util__PredId_2,
#line 1175 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1175 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 1174 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__goal_expr_calls_pred_id_2_p_0(
#line 1174 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1174 "goal_util.m"
  MR_Word hlds__goal_util__PredId_2);

#line 1164 "goal_util.m"
static void MR_CALL 
hlds__goal_util__cases_calls_pred_id_2_p_1(
#line 1164 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1164 "goal_util.m"
  MR_Word * hlds__goal_util__PredId_7,
#line 1164 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1164 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 1163 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__cases_calls_pred_id_2_p_0(
#line 1163 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1163 "goal_util.m"
  MR_Word hlds__goal_util__PredId_7);

#line 1153 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goals_calls_pred_id_2_p_1(
#line 1153 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1153 "goal_util.m"
  MR_Word * hlds__goal_util__PredId_5,
#line 1153 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1153 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 1152 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__goals_calls_pred_id_2_p_0(
#line 1152 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1152 "goal_util.m"
  MR_Word hlds__goal_util__PredId_5);

#line 1107 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_expr_calls_2_p_1(
#line 1107 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1107 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__2_2,
#line 1107 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1107 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 1106 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__goal_expr_calls_2_p_0(
#line 1106 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1106 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_2);

#line 1096 "goal_util.m"
static void MR_CALL 
hlds__goal_util__cases_calls_2_p_1(
#line 1096 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1096 "goal_util.m"
  MR_Word * hlds__goal_util__PredProcId_7,
#line 1096 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1096 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 1095 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__cases_calls_2_p_0(
#line 1095 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1095 "goal_util.m"
  MR_Word hlds__goal_util__PredProcId_7);

#line 1085 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goals_calls_2_p_1(
#line 1085 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1085 "goal_util.m"
  MR_Word * hlds__goal_util__PredProcId_5,
#line 1085 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1085 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 1084 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__goals_calls_2_p_0(
#line 1084 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1084 "goal_util.m"
  MR_Word hlds__goal_util__PredProcId_5);

#line 999 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_expr_size_2_p_0(
#line 999 "goal_util.m"
  MR_Word hlds__goal_util__GoalExpr_3,
#line 999 "goal_util.m"
  MR_Integer * hlds__goal_util__Size_4);

#line 991 "goal_util.m"
static void MR_CALL 
hlds__goal_util__cases_size_2_p_0(
#line 991 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 991 "goal_util.m"
  MR_Integer * hlds__goal_util__HeadVar__2_2);

#line 985 "goal_util.m"
static void MR_CALL 
hlds__goal_util__clause_size_increment_3_p_0(
#line 985 "goal_util.m"
  MR_Word hlds__goal_util__Clause_4,
#line 985 "goal_util.m"
  MR_Integer hlds__goal_util__Size0_5,
#line 985 "goal_util.m"
  MR_Integer * hlds__goal_util__Size_6);

#line 945 "goal_util.m"
static MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_cases_1_f_0(
#line 945 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1);

#line 932 "goal_util.m"
static MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_goals_1_f_0(
#line 932 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1);

#line 671 "goal_util.m"
static void MR_CALL 
hlds__goal_util__rhs_goal_vars_3_p_0(
#line 671 "goal_util.m"
  MR_Word hlds__goal_util__RHS_1,
#line 671 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_Set_0_2,
#line 671 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_3);

#line 663 "goal_util.m"
static void MR_CALL 
hlds__goal_util__cases_goal_vars_3_p_0(
#line 663 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 663 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_Set_0_2,
#line 663 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_3);

#line 625 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__goal_vars_2_3_p_0_2(
#line 625 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 625 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1);

#line 624 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__goal_vars_2_3_p_0_1(
#line 624 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 624 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1);

#line 544 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_vars_2_3_p_0(
#line 544 "goal_util.m"
  MR_Word hlds__goal_util__Goal_4,
#line 544 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_Set_0_95,
#line 544 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_96);

#line 474 "goal_util.m"
static void MR_CALL 
hlds__goal_util__create_renaming_2_12_p_0(
#line 474 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 474 "goal_util.m"
  MR_Word hlds__goal_util__InstMapDelta_2,
#line 474 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0_3,
#line 474 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarSet_4,
#line 474 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0_5,
#line 474 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarTypes_6,
#line 474 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_RevUnifies_0_7,
#line 474 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_RevUnifies_8,
#line 474 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_RevNewVars_0_9,
#line 474 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_RevNewVars_10,
#line 474 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_Renaming_0_11,
#line 474 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Renaming_12);

#line 2265 "goal_util.m"
static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_3(
#line 2265 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 2265 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2265 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_2);

#line 2261 "goal_util.m"
static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_2(
#line 2261 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 2261 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2261 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_2);

#line 2257 "goal_util.m"
static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_1(
#line 2257 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 2257 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2257 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_2);

#line 2088 "goal_util.m"
static void MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_2(
#line 2088 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 2088 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2088 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 2088 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 2084 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_1(
#line 2084 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 2084 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1);

#line 1825 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_4(
#line 1825 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1825 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1);

#line 1864 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_3(
#line 1864 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1864 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1);

#line 1820 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_2(
#line 1820 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1820 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1);

#line 1815 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_1(
#line 1815 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1815 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1);

#line 1723 "goal_util.m"
static void MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_4(
#line 1723 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1723 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1723 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 1723 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 1719 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_3(
#line 1719 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg);

#line 1703 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_2(
#line 1703 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1703 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1);

#line 1702 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_1(
#line 1702 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1702 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1);

#line 1690 "goal_util.m"
static void MR_CALL 
hlds__goal_util__generate_simple_call_12_p_0_2(
#line 1690 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1690 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1690 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 1690 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 1686 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__generate_simple_call_12_p_0_1(
#line 1686 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg);

#line 1441 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__flatten_disjs_1_f_0_1(
#line 1441 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1441 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1441 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2);

#line 1394 "goal_util.m"
static void MR_CALL 
hlds__goal_util__case_to_disjunct_11_p_0_1(
#line 1394 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1394 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1394 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_2);

#line 1372 "goal_util.m"
static void MR_CALL 
hlds__goal_util__switch_to_disjunction_10_p_0_1(
#line 1372 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1372 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1372 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_2,
#line 1372 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_3,
#line 1372 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_4,
#line 1372 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_5,
#line 1372 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_6,
#line 1372 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_7,
#line 1372 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_8);

#line 1768 "goal_util.m"
static void MR_CALL 
hlds__goal_util__pred_proc_ids_from_goal_2_p_0_1(
#line 1768 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1768 "goal_util.m"
static void MR_CALL 
hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2(
#line 1768 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1768 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 1768 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1768 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 1757 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_from_goals_2_p_0_1(
#line 1757 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1757 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_from_goals_2_p_0_2(
#line 1757 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1757 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 1757 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1757 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 1761 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_with_args_from_goal_2_p_0_1(
#line 1761 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1761 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_with_args_from_goal_2_p_0_2(
#line 1761 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1761 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 1761 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1761 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 1757 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_from_goal_2_p_0_1(
#line 1757 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1757 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_from_goal_2_p_0_2(
#line 1757 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1757 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 1757 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1757 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 1357 "goal_util.m"
static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_1(
#line 1357 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1359 "goal_util.m"
static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_2(
#line 1359 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1361 "goal_util.m"
static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_4(
#line 1361 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1360 "goal_util.m"
static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_3(
#line 1360 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1345 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_contains_goal_2_p_0_1(
#line 1345 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 977 "goal_util.m"
static void MR_CALL 
hlds__goal_util__clause_list_size_2_p_0_1(
#line 977 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 977 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 977 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 977 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 837 "goal_util.m"
static void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_2(
#line 837 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 837 "goal_util.m"
static void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3(
#line 837 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 837 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 837 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 837 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 826 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_1(
#line 826 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 826 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1);


static /* final */ const MR_Box hlds__goal_util_scalar_common_1[6][2];

static /* final */ const MR_Box hlds__goal_util_scalar_common_2[1][4];

static /* final */ const MR_Box hlds__goal_util_scalar_common_3[8][6];

static /* final */ const MR_Box hlds__goal_util_scalar_common_4[24][3];

static /* final */ const MR_Box hlds__goal_util_scalar_common_5[9][5];

static /* final */ const MR_Box hlds__goal_util_scalar_common_6[1][14];




static /* final */ const MR_Box hlds__goal_util_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__goal_util_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__goal_util_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__goal_util_scalar_common_1[2]))
  },
};

static /* final */ const MR_Box hlds__goal_util_scalar_common_3[8][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__goal_util__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__goal_util__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__goal_util__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__goal_util____vpti_pred_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__goal_util____vpti_pred_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
};

static /* final */ const MR_Box hlds__goal_util_scalar_common_4[24][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[2])),
    ((MR_Box) (hlds__goal_util__clause_list_size_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[3])),
    ((MR_Box) (hlds__goal_util__case_to_disjunct_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[3])),
    ((MR_Box) (hlds__goal_util__flatten_disjs_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[4])),
    ((MR_Box) (hlds__goal_util__generate_simple_call_12_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[5])),
    ((MR_Box) (hlds__goal_util__generate_foreign_proc_16_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[5])),
    ((MR_Box) (hlds__goal_util__generate_foreign_proc_16_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[4])),
    ((MR_Box) (hlds__goal_util__generate_foreign_proc_16_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[6])),
    ((MR_Box) (hlds__goal_util__maybe_strip_equality_pretest_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[6])),
    ((MR_Box) (hlds__goal_util__maybe_strip_equality_pretest_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[6])),
    ((MR_Box) (hlds__goal_util__maybe_strip_equality_pretest_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[7])),
    ((MR_Box) (hlds__goal_util__maybe_strip_equality_pretest_1_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[8])),
    ((MR_Box) (hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[5])),
    ((MR_Box) (hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[5])),
    ((MR_Box) (hlds__goal_util__goal_vars_2_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[5])),
    ((MR_Box) (hlds__goal_util__goal_vars_2_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[3])),
    ((MR_Box) (hlds__goal_util__flatten_disj_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[4])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[4])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[4])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[4])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[4])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[4])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[4])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[4])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_p_1_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__goal_util_scalar_common_5[9][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__goal_util____vpti_tuple_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
};

static /* final */ const MR_Box hlds__goal_util_scalar_common_6[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__goal_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__goal_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__goal_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__goal_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};



#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1825 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1833 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1841 "hlds.goal_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1849 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1857 "hlds.goal_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1865 "hlds.goal_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__goal_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1873 "hlds.goal_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 hlds__goal_util____vpti_tuple_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__goal_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1883 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1891 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__goal_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1900 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1908 "hlds.goal_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 hlds__goal_util____vpti_pred_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1918 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_0 = {
  (MR_String) "attach_in_from_ground_term",
  (MR_Integer) 0
};

#line 1924 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_1 = {
  (MR_String) "do_not_attach_in_from_ground_term",
  (MR_Integer) 1
};

#line 1930 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_value_ordered_attach_in_from_ground_term_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_1
};

#line 1936 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_attach_in_from_ground_term_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_1
};

#line 1942 "hlds.goal_util.c"
static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_attach_in_from_ground_term_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1948 "hlds.goal_util.c"
const MR_TypeCtorInfo_Struct hlds__goal_util__hlds__goal_util__type_ctor_info_attach_in_from_ground_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_util____Unify____attach_in_from_ground_term_0_0_10001)),
  ((MR_Box) (hlds__goal_util____Compare____attach_in_from_ground_term_0_0_10001)),
  (MR_String) "hlds.goal_util",
  (MR_String) "attach_in_from_ground_term",
  {
    hlds__goal_util__hlds__goal_util__enum_name_ordered_attach_in_from_ground_term_0
  },
  {
    hlds__goal_util__hlds__goal_util__enum_value_ordered_attach_in_from_ground_term_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__goal_util__hlds__goal_util__functor_number_map_attach_in_from_ground_term_0
};

#line 1969 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_0 = {
  (MR_String) "goal_is_atomic",
  (MR_Integer) 0
};

#line 1975 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_1 = {
  (MR_String) "goal_is_nonatomic",
  (MR_Integer) 1
};

#line 1981 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_value_ordered_goal_is_atomic_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_1
};

#line 1987 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_goal_is_atomic_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_1
};

#line 1993 "hlds.goal_util.c"
static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_goal_is_atomic_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1999 "hlds.goal_util.c"
const MR_TypeCtorInfo_Struct hlds__goal_util__hlds__goal_util__type_ctor_info_goal_is_atomic_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_util____Unify____goal_is_atomic_0_0_10001)),
  ((MR_Box) (hlds__goal_util____Compare____goal_is_atomic_0_0_10001)),
  (MR_String) "hlds.goal_util",
  (MR_String) "goal_is_atomic",
  {
    hlds__goal_util__hlds__goal_util__enum_name_ordered_goal_is_atomic_0
  },
  {
    hlds__goal_util__hlds__goal_util__enum_value_ordered_goal_is_atomic_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__goal_util__hlds__goal_util__functor_number_map_goal_is_atomic_0
};

#line 2020 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_0 = {
  (MR_String) "is_leaf",
  (MR_Integer) 0
};

#line 2026 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_1 = {
  (MR_String) "is_not_leaf",
  (MR_Integer) 1
};

#line 2032 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_value_ordered_is_leaf_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_1
};

#line 2038 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_is_leaf_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_1
};

#line 2044 "hlds.goal_util.c"
static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_is_leaf_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2050 "hlds.goal_util.c"
const MR_TypeCtorInfo_Struct hlds__goal_util__hlds__goal_util__type_ctor_info_is_leaf_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_util____Unify____is_leaf_0_0_10001)),
  ((MR_Box) (hlds__goal_util____Compare____is_leaf_0_0_10001)),
  (MR_String) "hlds.goal_util",
  (MR_String) "is_leaf",
  {
    hlds__goal_util__hlds__goal_util__enum_name_ordered_is_leaf_0
  },
  {
    hlds__goal_util__hlds__goal_util__enum_value_ordered_is_leaf_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__goal_util__hlds__goal_util__functor_number_map_is_leaf_0
};

#line 2071 "hlds.goal_util.c"
static const MR_PseudoTypeInfo hlds__goal_util__hlds__goal_util__field_types_maybe_transformed_goal_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 2076 "hlds.goal_util.c"
static const MR_DuFunctorDesc hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__goal_util__hlds__goal_util__field_types_maybe_transformed_goal_0_0,
  NULL,
  NULL,
  NULL
};

#line 2091 "hlds.goal_util.c"
static const MR_PseudoTypeInfo hlds__goal_util__hlds__goal_util__field_types_maybe_transformed_goal_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2096 "hlds.goal_util.c"
static const MR_DuFunctorDesc hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__goal_util__hlds__goal_util__field_types_maybe_transformed_goal_0_1,
  NULL,
  NULL,
  NULL
};

#line 2111 "hlds.goal_util.c"
static const MR_DuFunctorDesc hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_2 = {
  (MR_String) "goal_not_found",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2126 "hlds.goal_util.c"
static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_0[1] = {
  &hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_2
};

#line 2131 "hlds.goal_util.c"
static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_1[1] = {
  &hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_0
};

#line 2136 "hlds.goal_util.c"
static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_2[1] = {
  &hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_1
};

#line 2141 "hlds.goal_util.c"
static const MR_DuPtagLayout hlds__goal_util__hlds__goal_util__du_ptag_ordered_maybe_transformed_goal_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_2
  }
};

#line 2160 "hlds.goal_util.c"
static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_name_ordered_maybe_transformed_goal_0[3] = {
  &hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_1,
  &hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_2,
  &hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_0
};

#line 2167 "hlds.goal_util.c"
static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_maybe_transformed_goal_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2174 "hlds.goal_util.c"
const MR_TypeCtorInfo_Struct hlds__goal_util__hlds__goal_util__type_ctor_info_maybe_transformed_goal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__goal_util____Unify____maybe_transformed_goal_0_0_10001)),
  ((MR_Box) (hlds__goal_util____Compare____maybe_transformed_goal_0_0_10001)),
  (MR_String) "hlds.goal_util",
  (MR_String) "maybe_transformed_goal",
  {
    hlds__goal_util__hlds__goal_util__du_name_ordered_maybe_transformed_goal_0
  },
  {
    hlds__goal_util__hlds__goal_util__du_ptag_ordered_maybe_transformed_goal_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__goal_util__hlds__goal_util__functor_number_map_maybe_transformed_goal_0
};

#line 2195 "hlds.goal_util.c"
static MR_bool MR_CALL 
hlds__goal_util____Unify____attach_in_from_ground_term_0_0_10001(
#line 2198 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2200 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2)
#line 2202 "hlds.goal_util.c"
{
#line 2204 "hlds.goal_util.c"
  {
#line 2206 "hlds.goal_util.c"
    MR_bool hlds__goal_util__succeeded;

#line 2209 "hlds.goal_util.c"
    {
#line 2211 "hlds.goal_util.c"
      hlds__goal_util__succeeded = hlds__goal_util____Unify____attach_in_from_ground_term_0_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2));
    }
#line 2214 "hlds.goal_util.c"
    return hlds__goal_util__succeeded;
#line 2216 "hlds.goal_util.c"
  }
#line 2218 "hlds.goal_util.c"
}

#line 2221 "hlds.goal_util.c"
static void MR_CALL 
hlds__goal_util____Compare____attach_in_from_ground_term_0_0_10001(
#line 2224 "hlds.goal_util.c"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 2226 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 2228 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_3)
#line 2230 "hlds.goal_util.c"
{
#line 2232 "hlds.goal_util.c"
  {
#line 2234 "hlds.goal_util.c"
    MR_Word hlds__goal_util__conv0_HeadVar__1_1;

#line 2237 "hlds.goal_util.c"
    {
#line 2239 "hlds.goal_util.c"
      hlds__goal_util____Compare____attach_in_from_ground_term_0_0(&hlds__goal_util__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_util__wrapper_arg_2), ((MR_Word) hlds__goal_util__wrapper_arg_3));
    }
#line 2242 "hlds.goal_util.c"
    *hlds__goal_util__wrapper_arg_1 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__1_1));
#line 2244 "hlds.goal_util.c"
  }
#line 2246 "hlds.goal_util.c"
}

#line 2249 "hlds.goal_util.c"
static MR_bool MR_CALL 
hlds__goal_util____Unify____goal_is_atomic_0_0_10001(
#line 2252 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2254 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2)
#line 2256 "hlds.goal_util.c"
{
#line 2258 "hlds.goal_util.c"
  {
#line 2260 "hlds.goal_util.c"
    MR_bool hlds__goal_util__succeeded;

#line 2263 "hlds.goal_util.c"
    {
#line 2265 "hlds.goal_util.c"
      hlds__goal_util__succeeded = hlds__goal_util____Unify____goal_is_atomic_0_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2));
    }
#line 2268 "hlds.goal_util.c"
    return hlds__goal_util__succeeded;
#line 2270 "hlds.goal_util.c"
  }
#line 2272 "hlds.goal_util.c"
}

#line 2275 "hlds.goal_util.c"
static void MR_CALL 
hlds__goal_util____Compare____goal_is_atomic_0_0_10001(
#line 2278 "hlds.goal_util.c"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 2280 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 2282 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_3)
#line 2284 "hlds.goal_util.c"
{
#line 2286 "hlds.goal_util.c"
  {
#line 2288 "hlds.goal_util.c"
    MR_Word hlds__goal_util__conv0_HeadVar__1_1;

#line 2291 "hlds.goal_util.c"
    {
#line 2293 "hlds.goal_util.c"
      hlds__goal_util____Compare____goal_is_atomic_0_0(&hlds__goal_util__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_util__wrapper_arg_2), ((MR_Word) hlds__goal_util__wrapper_arg_3));
    }
#line 2296 "hlds.goal_util.c"
    *hlds__goal_util__wrapper_arg_1 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__1_1));
#line 2298 "hlds.goal_util.c"
  }
#line 2300 "hlds.goal_util.c"
}

#line 2303 "hlds.goal_util.c"
static MR_bool MR_CALL 
hlds__goal_util____Unify____is_leaf_0_0_10001(
#line 2306 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2308 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2)
#line 2310 "hlds.goal_util.c"
{
#line 2312 "hlds.goal_util.c"
  {
#line 2314 "hlds.goal_util.c"
    MR_bool hlds__goal_util__succeeded;

#line 2317 "hlds.goal_util.c"
    {
#line 2319 "hlds.goal_util.c"
      hlds__goal_util__succeeded = hlds__goal_util____Unify____is_leaf_0_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2));
    }
#line 2322 "hlds.goal_util.c"
    return hlds__goal_util__succeeded;
#line 2324 "hlds.goal_util.c"
  }
#line 2326 "hlds.goal_util.c"
}

#line 2329 "hlds.goal_util.c"
static void MR_CALL 
hlds__goal_util____Compare____is_leaf_0_0_10001(
#line 2332 "hlds.goal_util.c"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 2334 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 2336 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_3)
#line 2338 "hlds.goal_util.c"
{
#line 2340 "hlds.goal_util.c"
  {
#line 2342 "hlds.goal_util.c"
    MR_Word hlds__goal_util__conv0_HeadVar__1_1;

#line 2345 "hlds.goal_util.c"
    {
#line 2347 "hlds.goal_util.c"
      hlds__goal_util____Compare____is_leaf_0_0(&hlds__goal_util__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_util__wrapper_arg_2), ((MR_Word) hlds__goal_util__wrapper_arg_3));
    }
#line 2350 "hlds.goal_util.c"
    *hlds__goal_util__wrapper_arg_1 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__1_1));
#line 2352 "hlds.goal_util.c"
  }
#line 2354 "hlds.goal_util.c"
}

#line 2357 "hlds.goal_util.c"
static MR_bool MR_CALL 
hlds__goal_util____Unify____maybe_transformed_goal_0_0_10001(
#line 2360 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2362 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2)
#line 2364 "hlds.goal_util.c"
{
#line 2366 "hlds.goal_util.c"
  {
#line 2368 "hlds.goal_util.c"
    MR_bool hlds__goal_util__succeeded;

#line 2371 "hlds.goal_util.c"
    {
#line 2373 "hlds.goal_util.c"
      hlds__goal_util__succeeded = hlds__goal_util____Unify____maybe_transformed_goal_0_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2));
    }
#line 2376 "hlds.goal_util.c"
    return hlds__goal_util__succeeded;
#line 2378 "hlds.goal_util.c"
  }
#line 2380 "hlds.goal_util.c"
}

#line 2383 "hlds.goal_util.c"
static void MR_CALL 
hlds__goal_util____Compare____maybe_transformed_goal_0_0_10001(
#line 2386 "hlds.goal_util.c"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 2388 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 2390 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_3)
#line 2392 "hlds.goal_util.c"
{
#line 2394 "hlds.goal_util.c"
  {
#line 2396 "hlds.goal_util.c"
    MR_Word hlds__goal_util__conv0_HeadVar__1_1;

#line 2399 "hlds.goal_util.c"
    {
#line 2401 "hlds.goal_util.c"
      hlds__goal_util____Compare____maybe_transformed_goal_0_0(&hlds__goal_util__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_util__wrapper_arg_2), ((MR_Word) hlds__goal_util__wrapper_arg_3));
    }
#line 2404 "hlds.goal_util.c"
    *hlds__goal_util__wrapper_arg_1 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__1_1));
#line 2406 "hlds.goal_util.c"
  }
#line 2408 "hlds.goal_util.c"
}

#line 697 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_p_1_1(
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 697 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 697 "goal_util.m"
{
#line 697 "goal_util.m"
  {
#line 697 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 697 "goal_util.m"
    MR_Word hlds__goal_util__conv0_HeadVar__3_3;

#line 697 "goal_util.m"
    {
#line 697 "goal_util.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_HeadVar__3_3);
    }
#line 697 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__3_3));
#line 697 "goal_util.m"
  }
#line 697 "goal_util.m"
}

#line 732 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_p_1(
#line 732 "goal_util.m"
  MR_Word hlds__goal_util__Features_5,
#line 732 "goal_util.m"
  MR_Word hlds__goal_util__GoalExpr0_7,
#line 732 "goal_util.m"
  MR_Word * hlds__goal_util__GoalExpr_8)
#line 732 "goal_util.m"
{
#line 742 "goal_util.m"
  {
#line 742 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 742 "goal_util.m"
    if (((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) == (MR_mktag((MR_Integer) 0))))
#line 763 "goal_util.m"
      {
#line 763 "goal_util.m"
        MR_Word hlds__goal_util__SubGoal0_46 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr0_7), (MR_Integer) 0);
#line 763 "goal_util.m"
        MR_Word hlds__goal_util__SubGoal_47;

#line 764 "goal_util.m"
        {
#line 764 "goal_util.m"
          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__SubGoal0_46, &hlds__goal_util__SubGoal_47);
        }
#line 766 "goal_util.m"
        *hlds__goal_util__GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_util__SubGoal_47);
#line 763 "goal_util.m"
      }
#line 742 "goal_util.m"
    else
#line 742 "goal_util.m"
      if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 745 "goal_util.m"
        {
#line 745 "goal_util.m"
          MR_Word hlds__goal_util__ConjType_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 745 "goal_util.m"
          MR_Word hlds__goal_util__Goals0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 745 "goal_util.m"
          MR_Word hlds__goal_util__Goals_34;

#line 746 "goal_util.m"
          {
#line 746 "goal_util.m"
            hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__Goals0_33, &hlds__goal_util__Goals_34);
          }
#line 747 "goal_util.m"
          {
#line 747 "goal_util.m"
            MR_Word base;
#line 747 "goal_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 747 "goal_util.m"
            *hlds__goal_util__GoalExpr_8 = base;
#line 747 "goal_util.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 747 "goal_util.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__ConjType_32));
#line 747 "goal_util.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__goal_util__Goals_34));
#line 747 "goal_util.m"
          }
#line 745 "goal_util.m"
        }
#line 742 "goal_util.m"
      else
#line 742 "goal_util.m"
        if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 749 "goal_util.m"
          {
#line 749 "goal_util.m"
            MR_Word hlds__goal_util__Goals0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 749 "goal_util.m"
            MR_Word hlds__goal_util__Goals_69;

#line 750 "goal_util.m"
            {
#line 750 "goal_util.m"
              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__Goals0_68, &hlds__goal_util__Goals_69);
            }
#line 751 "goal_util.m"
            {
#line 751 "goal_util.m"
              MR_Word base;
#line 751 "goal_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "goal_util.m"
              *hlds__goal_util__GoalExpr_8 = base;
#line 751 "goal_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 751 "goal_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__Goals_69));
#line 751 "goal_util.m"
            }
#line 749 "goal_util.m"
          }
#line 742 "goal_util.m"
        else
#line 742 "goal_util.m"
          if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 757 "goal_util.m"
            {
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__Vars_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__Cond0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__Then0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 3)));
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__Else0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 4)));
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__Cond_43;
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__Then_44;
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__Else_45;
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr0_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond0_40, (MR_Integer) 0)));
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__GoalInfo0_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond0_40, (MR_Integer) 1)));
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_84;
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__GoalInfo_85;
#line 697 "goal_util.m"
              MR_Box hlds__goal_util__conv1_GoalInfo_85;

#line 695 "goal_util.m"
              {
#line 695 "goal_util.m"
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__GoalExpr0_82, &hlds__goal_util__GoalExpr_84);
              }
#line 697 "goal_util.m"
              {
#line 697 "goal_util.m"
                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_4[23], hlds__goal_util__Features_5, ((MR_Box) (hlds__goal_util__GoalInfo0_83)), &hlds__goal_util__conv1_GoalInfo_85);
              }
#line 697 "goal_util.m"
              hlds__goal_util__GoalInfo_85 = ((MR_Word) hlds__goal_util__conv1_GoalInfo_85);
#line 698 "goal_util.m"
              {
#line 698 "goal_util.m"
                hlds__goal_util__Cond_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 698 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_43, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_84));
#line 698 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_43, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_85));
#line 698 "goal_util.m"
              }
#line 759 "goal_util.m"
              {
#line 759 "goal_util.m"
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__Then0_41, &hlds__goal_util__Then_44);
              }
#line 760 "goal_util.m"
              {
#line 760 "goal_util.m"
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__Else0_42, &hlds__goal_util__Else_45);
              }
#line 761 "goal_util.m"
              {
#line 761 "goal_util.m"
                MR_Word base;
#line 761 "goal_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 761 "goal_util.m"
                *hlds__goal_util__GoalExpr_8 = base;
#line 761 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 761 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__Vars_39));
#line 761 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__goal_util__Cond_43));
#line 761 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__goal_util__Then_44));
#line 761 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (hlds__goal_util__Else_45));
#line 761 "goal_util.m"
              }
#line 757 "goal_util.m"
            }
#line 742 "goal_util.m"
          else
#line 742 "goal_util.m"
            if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 768 "goal_util.m"
              {
#line 768 "goal_util.m"
                MR_Word hlds__goal_util__Reason_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 768 "goal_util.m"
                MR_Word hlds__goal_util__SubGoal0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 768 "goal_util.m"
                MR_Word hlds__goal_util__SubGoal_71;
#line 769 "goal_util.m"
                MR_Word hlds__goal_util__V_49_49;
#line 769 "goal_util.m"
                MR_Word hlds__goal_util__V_50_50;

#line 769 "goal_util.m"
                hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_48, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 769 "goal_util.m"
                if (hlds__goal_util__succeeded)
#line 769 "goal_util.m"
                  {
#line 769 "goal_util.m"
                    hlds__goal_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_48, (MR_Integer) 1)));
#line 769 "goal_util.m"
                    hlds__goal_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_48, (MR_Integer) 2)));
#line 772 "goal_util.m"
                    hlds__goal_util__SubGoal_71 = hlds__goal_util__SubGoal0_70;
#line 769 "goal_util.m"
                  }
#line 769 "goal_util.m"
                else
#line 779 "goal_util.m"
                  {
#line 779 "goal_util.m"
                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__SubGoal0_70, &hlds__goal_util__SubGoal_71);
                  }
#line 782 "goal_util.m"
                {
#line 782 "goal_util.m"
                  MR_Word base;
#line 782 "goal_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 782 "goal_util.m"
                  *hlds__goal_util__GoalExpr_8 = base;
#line 782 "goal_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 782 "goal_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__Reason_48));
#line 782 "goal_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__goal_util__SubGoal_71));
#line 782 "goal_util.m"
                }
#line 768 "goal_util.m"
              }
#line 742 "goal_util.m"
            else
#line 742 "goal_util.m"
              if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 784 "goal_util.m"
                {
#line 784 "goal_util.m"
                  MR_Word hlds__goal_util__ShortHand0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 784 "goal_util.m"
                  MR_Word hlds__goal_util__ShortHand_61;

#line 794 "goal_util.m"
                  if (((MR_tag((MR_Word) hlds__goal_util__ShortHand0_51)) == (MR_mktag((MR_Integer) 1))))
#line 787 "goal_util.m"
                    {
#line 787 "goal_util.m"
                      MR_Word hlds__goal_util__GoalType_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 0)));
#line 787 "goal_util.m"
                      MR_Word hlds__goal_util__Outer_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 1)));
#line 787 "goal_util.m"
                      MR_Word hlds__goal_util__Inner_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 2)));
#line 787 "goal_util.m"
                      MR_Word hlds__goal_util__MaybeOutputVars_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 3)));
#line 787 "goal_util.m"
                      MR_Word hlds__goal_util__MainGoal0_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 4)));
#line 787 "goal_util.m"
                      MR_Word hlds__goal_util__OrElseGoals0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 5)));
#line 787 "goal_util.m"
                      MR_Word hlds__goal_util__OrElseInners_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 6)));
#line 787 "goal_util.m"
                      MR_Word hlds__goal_util__MainGoal_59;
#line 787 "goal_util.m"
                      MR_Word hlds__goal_util__OrElseGoals_60;

#line 788 "goal_util.m"
                      {
#line 788 "goal_util.m"
                        hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__MainGoal0_56, &hlds__goal_util__MainGoal_59);
                      }
#line 790 "goal_util.m"
                      {
#line 790 "goal_util.m"
                        hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__OrElseGoals0_57, &hlds__goal_util__OrElseGoals_60);
                      }
#line 792 "goal_util.m"
                      {
#line 792 "goal_util.m"
                        hlds__goal_util__ShortHand_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 792 "goal_util.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 0) = ((MR_Box) (hlds__goal_util__GoalType_52));
#line 792 "goal_util.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 1) = ((MR_Box) (hlds__goal_util__Outer_53));
#line 792 "goal_util.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 2) = ((MR_Box) (hlds__goal_util__Inner_54));
#line 792 "goal_util.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 3) = ((MR_Box) (hlds__goal_util__MaybeOutputVars_55));
#line 792 "goal_util.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 4) = ((MR_Box) (hlds__goal_util__MainGoal_59));
#line 792 "goal_util.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 5) = ((MR_Box) (hlds__goal_util__OrElseGoals_60));
#line 792 "goal_util.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 6) = ((MR_Box) (hlds__goal_util__OrElseInners_58));
#line 792 "goal_util.m"
                      }
#line 787 "goal_util.m"
                    }
#line 794 "goal_util.m"
                  else
#line 794 "goal_util.m"
                    if (((MR_tag((MR_Word) hlds__goal_util__ShortHand0_51)) == (MR_mktag((MR_Integer) 0))))
#line 800 "goal_util.m"
                      {
#line 800 "goal_util.m"
                        MR_Word hlds__goal_util__GoalA0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand0_51, (MR_Integer) 0)));
#line 800 "goal_util.m"
                        MR_Word hlds__goal_util__GoalB0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand0_51, (MR_Integer) 1)));
#line 800 "goal_util.m"
                        MR_Word hlds__goal_util__GoalA_66;
#line 800 "goal_util.m"
                        MR_Word hlds__goal_util__GoalB_67;

#line 801 "goal_util.m"
                        {
#line 801 "goal_util.m"
                          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__GoalA0_64, &hlds__goal_util__GoalA_66);
                        }
#line 803 "goal_util.m"
                        {
#line 803 "goal_util.m"
                          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__GoalB0_65, &hlds__goal_util__GoalB_67);
                        }
#line 805 "goal_util.m"
                        {
#line 805 "goal_util.m"
                          hlds__goal_util__ShortHand_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 805 "goal_util.m"
                          MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_61, 0) = ((MR_Box) (hlds__goal_util__GoalA_66));
#line 805 "goal_util.m"
                          MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_61, 1) = ((MR_Box) (hlds__goal_util__GoalB_67));
#line 805 "goal_util.m"
                        }
#line 800 "goal_util.m"
                      }
#line 794 "goal_util.m"
                    else
#line 795 "goal_util.m"
                      {
#line 795 "goal_util.m"
                        MR_Word hlds__goal_util__MaybeIO_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_51, (MR_Integer) 0)));
#line 795 "goal_util.m"
                        MR_Word hlds__goal_util__ResultVar_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_51, (MR_Integer) 1)));
#line 795 "goal_util.m"
                        MR_Word hlds__goal_util__SubGoal0_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_51, (MR_Integer) 2)));
#line 795 "goal_util.m"
                        MR_Word hlds__goal_util__SubGoal_73;

#line 796 "goal_util.m"
                        {
#line 796 "goal_util.m"
                          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__SubGoal0_72, &hlds__goal_util__SubGoal_73);
                        }
#line 798 "goal_util.m"
                        {
#line 798 "goal_util.m"
                          hlds__goal_util__ShortHand_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 798 "goal_util.m"
                          MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_61, 0) = ((MR_Box) (hlds__goal_util__MaybeIO_62));
#line 798 "goal_util.m"
                          MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_61, 1) = ((MR_Box) (hlds__goal_util__ResultVar_63));
#line 798 "goal_util.m"
                          MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_61, 2) = ((MR_Box) (hlds__goal_util__SubGoal_73));
#line 798 "goal_util.m"
                        }
#line 795 "goal_util.m"
                      }
#line 807 "goal_util.m"
                  {
#line 807 "goal_util.m"
                    MR_Word base;
#line 807 "goal_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 807 "goal_util.m"
                    *hlds__goal_util__GoalExpr_8 = base;
#line 807 "goal_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 807 "goal_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__ShortHand_61));
#line 807 "goal_util.m"
                  }
#line 784 "goal_util.m"
                }
#line 742 "goal_util.m"
              else
#line 742 "goal_util.m"
                if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 753 "goal_util.m"
                  {
#line 753 "goal_util.m"
                    MR_Word hlds__goal_util__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 753 "goal_util.m"
                    MR_Word hlds__goal_util__CanFail_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 753 "goal_util.m"
                    MR_Word hlds__goal_util__Cases0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 3)));
#line 753 "goal_util.m"
                    MR_Word hlds__goal_util__Cases_38;

#line 754 "goal_util.m"
                    {
#line 754 "goal_util.m"
                      hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__Cases0_37, &hlds__goal_util__Cases_38);
                    }
#line 755 "goal_util.m"
                    {
#line 755 "goal_util.m"
                      MR_Word base;
#line 755 "goal_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 755 "goal_util.m"
                      *hlds__goal_util__GoalExpr_8 = base;
#line 755 "goal_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 755 "goal_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__Var_35));
#line 755 "goal_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__goal_util__CanFail_36));
#line 755 "goal_util.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__goal_util__Cases_38));
#line 755 "goal_util.m"
                    }
#line 753 "goal_util.m"
                  }
#line 742 "goal_util.m"
                else
#line 743 "goal_util.m"
                  *hlds__goal_util__GoalExpr_8 = hlds__goal_util__GoalExpr0_7;
#line 742 "goal_util.m"
  }
#line 732 "goal_util.m"
}

#line 697 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_p_0_1(
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 697 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 697 "goal_util.m"
{
#line 697 "goal_util.m"
  {
#line 697 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 697 "goal_util.m"
    MR_Word hlds__goal_util__conv0_HeadVar__3_3;

#line 697 "goal_util.m"
    {
#line 697 "goal_util.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_HeadVar__3_3);
    }
#line 697 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__3_3));
#line 697 "goal_util.m"
  }
#line 697 "goal_util.m"
}

#line 730 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_p_0(
#line 730 "goal_util.m"
  MR_Word hlds__goal_util__Features_5,
#line 730 "goal_util.m"
  MR_Word hlds__goal_util__GoalExpr0_7,
#line 730 "goal_util.m"
  MR_Word * hlds__goal_util__GoalExpr_8)
#line 730 "goal_util.m"
{
#line 742 "goal_util.m"
  {
#line 742 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 742 "goal_util.m"
    if (((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) == (MR_mktag((MR_Integer) 0))))
#line 763 "goal_util.m"
      {
#line 763 "goal_util.m"
        MR_Word hlds__goal_util__SubGoal0_46 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr0_7), (MR_Integer) 0);
#line 763 "goal_util.m"
        MR_Word hlds__goal_util__SubGoal_47;

#line 764 "goal_util.m"
        {
#line 764 "goal_util.m"
          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__SubGoal0_46, &hlds__goal_util__SubGoal_47);
        }
#line 766 "goal_util.m"
        *hlds__goal_util__GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_util__SubGoal_47);
#line 763 "goal_util.m"
      }
#line 742 "goal_util.m"
    else
#line 742 "goal_util.m"
      if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 745 "goal_util.m"
        {
#line 745 "goal_util.m"
          MR_Word hlds__goal_util__ConjType_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 745 "goal_util.m"
          MR_Word hlds__goal_util__Goals0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 745 "goal_util.m"
          MR_Word hlds__goal_util__Goals_34;

#line 746 "goal_util.m"
          {
#line 746 "goal_util.m"
            hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__Goals0_33, &hlds__goal_util__Goals_34);
          }
#line 747 "goal_util.m"
          {
#line 747 "goal_util.m"
            MR_Word base;
#line 747 "goal_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 747 "goal_util.m"
            *hlds__goal_util__GoalExpr_8 = base;
#line 747 "goal_util.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 747 "goal_util.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__ConjType_32));
#line 747 "goal_util.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__goal_util__Goals_34));
#line 747 "goal_util.m"
          }
#line 745 "goal_util.m"
        }
#line 742 "goal_util.m"
      else
#line 742 "goal_util.m"
        if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 749 "goal_util.m"
          {
#line 749 "goal_util.m"
            MR_Word hlds__goal_util__Goals0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 749 "goal_util.m"
            MR_Word hlds__goal_util__Goals_69;

#line 750 "goal_util.m"
            {
#line 750 "goal_util.m"
              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__Goals0_68, &hlds__goal_util__Goals_69);
            }
#line 751 "goal_util.m"
            {
#line 751 "goal_util.m"
              MR_Word base;
#line 751 "goal_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "goal_util.m"
              *hlds__goal_util__GoalExpr_8 = base;
#line 751 "goal_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 751 "goal_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__Goals_69));
#line 751 "goal_util.m"
            }
#line 749 "goal_util.m"
          }
#line 742 "goal_util.m"
        else
#line 742 "goal_util.m"
          if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 757 "goal_util.m"
            {
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__Vars_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__Cond0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__Then0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 3)));
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__Else0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 4)));
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__Cond_43;
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__Then_44;
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__Else_45;
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr0_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond0_40, (MR_Integer) 0)));
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__GoalInfo0_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond0_40, (MR_Integer) 1)));
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_84;
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__GoalInfo_85;
#line 697 "goal_util.m"
              MR_Box hlds__goal_util__conv1_GoalInfo_85;

#line 695 "goal_util.m"
              {
#line 695 "goal_util.m"
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__GoalExpr0_82, &hlds__goal_util__GoalExpr_84);
              }
#line 697 "goal_util.m"
              {
#line 697 "goal_util.m"
                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_4[22], hlds__goal_util__Features_5, ((MR_Box) (hlds__goal_util__GoalInfo0_83)), &hlds__goal_util__conv1_GoalInfo_85);
              }
#line 697 "goal_util.m"
              hlds__goal_util__GoalInfo_85 = ((MR_Word) hlds__goal_util__conv1_GoalInfo_85);
#line 698 "goal_util.m"
              {
#line 698 "goal_util.m"
                hlds__goal_util__Cond_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 698 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_43, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_84));
#line 698 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_43, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_85));
#line 698 "goal_util.m"
              }
#line 759 "goal_util.m"
              {
#line 759 "goal_util.m"
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__Then0_41, &hlds__goal_util__Then_44);
              }
#line 760 "goal_util.m"
              {
#line 760 "goal_util.m"
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__Else0_42, &hlds__goal_util__Else_45);
              }
#line 761 "goal_util.m"
              {
#line 761 "goal_util.m"
                MR_Word base;
#line 761 "goal_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 761 "goal_util.m"
                *hlds__goal_util__GoalExpr_8 = base;
#line 761 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 761 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__Vars_39));
#line 761 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__goal_util__Cond_43));
#line 761 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__goal_util__Then_44));
#line 761 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (hlds__goal_util__Else_45));
#line 761 "goal_util.m"
              }
#line 757 "goal_util.m"
            }
#line 742 "goal_util.m"
          else
#line 742 "goal_util.m"
            if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 768 "goal_util.m"
              {
#line 768 "goal_util.m"
                MR_Word hlds__goal_util__Reason_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 768 "goal_util.m"
                MR_Word hlds__goal_util__SubGoal0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 768 "goal_util.m"
                MR_Word hlds__goal_util__SubGoal_71;
#line 769 "goal_util.m"
                MR_Word hlds__goal_util__V_49_49;
#line 769 "goal_util.m"
                MR_Word hlds__goal_util__V_50_50;

#line 769 "goal_util.m"
                hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_48, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 769 "goal_util.m"
                if (hlds__goal_util__succeeded)
#line 769 "goal_util.m"
                  {
#line 769 "goal_util.m"
                    hlds__goal_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_48, (MR_Integer) 1)));
#line 769 "goal_util.m"
                    hlds__goal_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_48, (MR_Integer) 2)));
#line 775 "goal_util.m"
                    {
#line 775 "goal_util.m"
                      hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__SubGoal0_70, &hlds__goal_util__SubGoal_71);
                    }
#line 769 "goal_util.m"
                  }
#line 769 "goal_util.m"
                else
#line 779 "goal_util.m"
                  {
#line 779 "goal_util.m"
                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__SubGoal0_70, &hlds__goal_util__SubGoal_71);
                  }
#line 782 "goal_util.m"
                {
#line 782 "goal_util.m"
                  MR_Word base;
#line 782 "goal_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 782 "goal_util.m"
                  *hlds__goal_util__GoalExpr_8 = base;
#line 782 "goal_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 782 "goal_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__Reason_48));
#line 782 "goal_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__goal_util__SubGoal_71));
#line 782 "goal_util.m"
                }
#line 768 "goal_util.m"
              }
#line 742 "goal_util.m"
            else
#line 742 "goal_util.m"
              if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 784 "goal_util.m"
                {
#line 784 "goal_util.m"
                  MR_Word hlds__goal_util__ShortHand0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 784 "goal_util.m"
                  MR_Word hlds__goal_util__ShortHand_61;

#line 794 "goal_util.m"
                  if (((MR_tag((MR_Word) hlds__goal_util__ShortHand0_51)) == (MR_mktag((MR_Integer) 1))))
#line 787 "goal_util.m"
                    {
#line 787 "goal_util.m"
                      MR_Word hlds__goal_util__GoalType_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 0)));
#line 787 "goal_util.m"
                      MR_Word hlds__goal_util__Outer_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 1)));
#line 787 "goal_util.m"
                      MR_Word hlds__goal_util__Inner_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 2)));
#line 787 "goal_util.m"
                      MR_Word hlds__goal_util__MaybeOutputVars_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 3)));
#line 787 "goal_util.m"
                      MR_Word hlds__goal_util__MainGoal0_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 4)));
#line 787 "goal_util.m"
                      MR_Word hlds__goal_util__OrElseGoals0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 5)));
#line 787 "goal_util.m"
                      MR_Word hlds__goal_util__OrElseInners_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 6)));
#line 787 "goal_util.m"
                      MR_Word hlds__goal_util__MainGoal_59;
#line 787 "goal_util.m"
                      MR_Word hlds__goal_util__OrElseGoals_60;

#line 788 "goal_util.m"
                      {
#line 788 "goal_util.m"
                        hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__MainGoal0_56, &hlds__goal_util__MainGoal_59);
                      }
#line 790 "goal_util.m"
                      {
#line 790 "goal_util.m"
                        hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__OrElseGoals0_57, &hlds__goal_util__OrElseGoals_60);
                      }
#line 792 "goal_util.m"
                      {
#line 792 "goal_util.m"
                        hlds__goal_util__ShortHand_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 792 "goal_util.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 0) = ((MR_Box) (hlds__goal_util__GoalType_52));
#line 792 "goal_util.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 1) = ((MR_Box) (hlds__goal_util__Outer_53));
#line 792 "goal_util.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 2) = ((MR_Box) (hlds__goal_util__Inner_54));
#line 792 "goal_util.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 3) = ((MR_Box) (hlds__goal_util__MaybeOutputVars_55));
#line 792 "goal_util.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 4) = ((MR_Box) (hlds__goal_util__MainGoal_59));
#line 792 "goal_util.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 5) = ((MR_Box) (hlds__goal_util__OrElseGoals_60));
#line 792 "goal_util.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 6) = ((MR_Box) (hlds__goal_util__OrElseInners_58));
#line 792 "goal_util.m"
                      }
#line 787 "goal_util.m"
                    }
#line 794 "goal_util.m"
                  else
#line 794 "goal_util.m"
                    if (((MR_tag((MR_Word) hlds__goal_util__ShortHand0_51)) == (MR_mktag((MR_Integer) 0))))
#line 800 "goal_util.m"
                      {
#line 800 "goal_util.m"
                        MR_Word hlds__goal_util__GoalA0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand0_51, (MR_Integer) 0)));
#line 800 "goal_util.m"
                        MR_Word hlds__goal_util__GoalB0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand0_51, (MR_Integer) 1)));
#line 800 "goal_util.m"
                        MR_Word hlds__goal_util__GoalA_66;
#line 800 "goal_util.m"
                        MR_Word hlds__goal_util__GoalB_67;

#line 801 "goal_util.m"
                        {
#line 801 "goal_util.m"
                          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__GoalA0_64, &hlds__goal_util__GoalA_66);
                        }
#line 803 "goal_util.m"
                        {
#line 803 "goal_util.m"
                          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__GoalB0_65, &hlds__goal_util__GoalB_67);
                        }
#line 805 "goal_util.m"
                        {
#line 805 "goal_util.m"
                          hlds__goal_util__ShortHand_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 805 "goal_util.m"
                          MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_61, 0) = ((MR_Box) (hlds__goal_util__GoalA_66));
#line 805 "goal_util.m"
                          MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_61, 1) = ((MR_Box) (hlds__goal_util__GoalB_67));
#line 805 "goal_util.m"
                        }
#line 800 "goal_util.m"
                      }
#line 794 "goal_util.m"
                    else
#line 795 "goal_util.m"
                      {
#line 795 "goal_util.m"
                        MR_Word hlds__goal_util__MaybeIO_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_51, (MR_Integer) 0)));
#line 795 "goal_util.m"
                        MR_Word hlds__goal_util__ResultVar_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_51, (MR_Integer) 1)));
#line 795 "goal_util.m"
                        MR_Word hlds__goal_util__SubGoal0_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_51, (MR_Integer) 2)));
#line 795 "goal_util.m"
                        MR_Word hlds__goal_util__SubGoal_73;

#line 796 "goal_util.m"
                        {
#line 796 "goal_util.m"
                          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__SubGoal0_72, &hlds__goal_util__SubGoal_73);
                        }
#line 798 "goal_util.m"
                        {
#line 798 "goal_util.m"
                          hlds__goal_util__ShortHand_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 798 "goal_util.m"
                          MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_61, 0) = ((MR_Box) (hlds__goal_util__MaybeIO_62));
#line 798 "goal_util.m"
                          MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_61, 1) = ((MR_Box) (hlds__goal_util__ResultVar_63));
#line 798 "goal_util.m"
                          MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_61, 2) = ((MR_Box) (hlds__goal_util__SubGoal_73));
#line 798 "goal_util.m"
                        }
#line 795 "goal_util.m"
                      }
#line 807 "goal_util.m"
                  {
#line 807 "goal_util.m"
                    MR_Word base;
#line 807 "goal_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 807 "goal_util.m"
                    *hlds__goal_util__GoalExpr_8 = base;
#line 807 "goal_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 807 "goal_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__ShortHand_61));
#line 807 "goal_util.m"
                  }
#line 784 "goal_util.m"
                }
#line 742 "goal_util.m"
              else
#line 742 "goal_util.m"
                if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 753 "goal_util.m"
                  {
#line 753 "goal_util.m"
                    MR_Word hlds__goal_util__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 753 "goal_util.m"
                    MR_Word hlds__goal_util__CanFail_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 753 "goal_util.m"
                    MR_Word hlds__goal_util__Cases0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 3)));
#line 753 "goal_util.m"
                    MR_Word hlds__goal_util__Cases_38;

#line 754 "goal_util.m"
                    {
#line 754 "goal_util.m"
                      hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__Cases0_37, &hlds__goal_util__Cases_38);
                    }
#line 755 "goal_util.m"
                    {
#line 755 "goal_util.m"
                      MR_Word base;
#line 755 "goal_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 755 "goal_util.m"
                      *hlds__goal_util__GoalExpr_8 = base;
#line 755 "goal_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 755 "goal_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__Var_35));
#line 755 "goal_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__goal_util__CanFail_36));
#line 755 "goal_util.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__goal_util__Cases_38));
#line 755 "goal_util.m"
                    }
#line 753 "goal_util.m"
                  }
#line 742 "goal_util.m"
                else
#line 743 "goal_util.m"
                  *hlds__goal_util__GoalExpr_8 = hlds__goal_util__GoalExpr0_7;
#line 742 "goal_util.m"
  }
#line 730 "goal_util.m"
}

#line 697 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1_1(
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 697 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 697 "goal_util.m"
{
#line 697 "goal_util.m"
  {
#line 697 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 697 "goal_util.m"
    MR_Word hlds__goal_util__conv0_HeadVar__3_3;

#line 697 "goal_util.m"
    {
#line 697 "goal_util.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_HeadVar__3_3);
    }
#line 697 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__3_3));
#line 697 "goal_util.m"
  }
#line 697 "goal_util.m"
}

#line 717 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(
#line 717 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 717 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3,
#line 717 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__4_4)
#line 717 "goal_util.m"
{
#line 720 "goal_util.m"
  {
#line 720 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 720 "goal_util.m"
    if ((hlds__goal_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 720 "goal_util.m"
      *hlds__goal_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 720 "goal_util.m"
    else
#line 722 "goal_util.m"
      {
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__Case0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 0)));
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__Cases0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 1)));
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__Case_11;
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__Cases_12;
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_9, (MR_Integer) 0)));
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_9, (MR_Integer) 1)));
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_9, (MR_Integer) 2)));
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__Goal_16;
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_15, (MR_Integer) 0)));
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__GoalInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_15, (MR_Integer) 1)));
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr_23;
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__GoalInfo_24;
#line 697 "goal_util.m"
        MR_Box hlds__goal_util__conv1_GoalInfo_24;

#line 695 "goal_util.m"
        {
#line 695 "goal_util.m"
          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__HeadVar__1_1, hlds__goal_util__GoalExpr0_21, &hlds__goal_util__GoalExpr_23);
        }
#line 697 "goal_util.m"
        {
#line 697 "goal_util.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_4[21], hlds__goal_util__HeadVar__1_1, ((MR_Box) (hlds__goal_util__GoalInfo0_22)), &hlds__goal_util__conv1_GoalInfo_24);
        }
#line 697 "goal_util.m"
        hlds__goal_util__GoalInfo_24 = ((MR_Word) hlds__goal_util__conv1_GoalInfo_24);
#line 698 "goal_util.m"
        {
#line 698 "goal_util.m"
          hlds__goal_util__Goal_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 698 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_16, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_23));
#line 698 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_16, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_24));
#line 698 "goal_util.m"
        }
#line 725 "goal_util.m"
        {
#line 725 "goal_util.m"
          hlds__goal_util__Case_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 725 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Case_11, 0) = ((MR_Box) (hlds__goal_util__MainConsId_13));
#line 725 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Case_11, 1) = ((MR_Box) (hlds__goal_util__OtherConsIds_14));
#line 725 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Case_11, 2) = ((MR_Box) (hlds__goal_util__Goal_16));
#line 725 "goal_util.m"
        }
#line 726 "goal_util.m"
        {
#line 726 "goal_util.m"
          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Cases0_10, &hlds__goal_util__Cases_12);
        }
#line 722 "goal_util.m"
        {
#line 722 "goal_util.m"
          MR_Word base;
#line 722 "goal_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "goal_util.m"
          *hlds__goal_util__HeadVar__4_4 = base;
#line 722 "goal_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Case_11));
#line 722 "goal_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_util__Cases_12));
#line 722 "goal_util.m"
        }
#line 722 "goal_util.m"
      }
#line 720 "goal_util.m"
  }
#line 717 "goal_util.m"
}

#line 697 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0_1(
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 697 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 697 "goal_util.m"
{
#line 697 "goal_util.m"
  {
#line 697 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 697 "goal_util.m"
    MR_Word hlds__goal_util__conv0_HeadVar__3_3;

#line 697 "goal_util.m"
    {
#line 697 "goal_util.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_HeadVar__3_3);
    }
#line 697 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__3_3));
#line 697 "goal_util.m"
  }
#line 697 "goal_util.m"
}

#line 715 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(
#line 715 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 715 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3,
#line 715 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__4_4)
#line 715 "goal_util.m"
{
#line 720 "goal_util.m"
  {
#line 720 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 720 "goal_util.m"
    if ((hlds__goal_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 720 "goal_util.m"
      *hlds__goal_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 720 "goal_util.m"
    else
#line 722 "goal_util.m"
      {
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__Case0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 0)));
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__Cases0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 1)));
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__Case_11;
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__Cases_12;
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_9, (MR_Integer) 0)));
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_9, (MR_Integer) 1)));
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_9, (MR_Integer) 2)));
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__Goal_16;
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_15, (MR_Integer) 0)));
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__GoalInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_15, (MR_Integer) 1)));
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr_23;
#line 722 "goal_util.m"
        MR_Word hlds__goal_util__GoalInfo_24;
#line 697 "goal_util.m"
        MR_Box hlds__goal_util__conv1_GoalInfo_24;

#line 695 "goal_util.m"
        {
#line 695 "goal_util.m"
          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__GoalExpr0_21, &hlds__goal_util__GoalExpr_23);
        }
#line 697 "goal_util.m"
        {
#line 697 "goal_util.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_4[20], hlds__goal_util__HeadVar__1_1, ((MR_Box) (hlds__goal_util__GoalInfo0_22)), &hlds__goal_util__conv1_GoalInfo_24);
        }
#line 697 "goal_util.m"
        hlds__goal_util__GoalInfo_24 = ((MR_Word) hlds__goal_util__conv1_GoalInfo_24);
#line 698 "goal_util.m"
        {
#line 698 "goal_util.m"
          hlds__goal_util__Goal_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 698 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_16, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_23));
#line 698 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_16, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_24));
#line 698 "goal_util.m"
        }
#line 725 "goal_util.m"
        {
#line 725 "goal_util.m"
          hlds__goal_util__Case_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 725 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Case_11, 0) = ((MR_Box) (hlds__goal_util__MainConsId_13));
#line 725 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Case_11, 1) = ((MR_Box) (hlds__goal_util__OtherConsIds_14));
#line 725 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Case_11, 2) = ((MR_Box) (hlds__goal_util__Goal_16));
#line 725 "goal_util.m"
        }
#line 726 "goal_util.m"
        {
#line 726 "goal_util.m"
          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Cases0_10, &hlds__goal_util__Cases_12);
        }
#line 722 "goal_util.m"
        {
#line 722 "goal_util.m"
          MR_Word base;
#line 722 "goal_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "goal_util.m"
          *hlds__goal_util__HeadVar__4_4 = base;
#line 722 "goal_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Case_11));
#line 722 "goal_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_util__Cases_12));
#line 722 "goal_util.m"
        }
#line 722 "goal_util.m"
      }
#line 720 "goal_util.m"
  }
#line 715 "goal_util.m"
}

#line 697 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1(
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 697 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 697 "goal_util.m"
{
#line 697 "goal_util.m"
  {
#line 697 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 697 "goal_util.m"
    MR_Word hlds__goal_util__conv0_HeadVar__3_3;

#line 697 "goal_util.m"
    {
#line 697 "goal_util.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_HeadVar__3_3);
    }
#line 697 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__3_3));
#line 697 "goal_util.m"
  }
#line 697 "goal_util.m"
}

#line 704 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(
#line 704 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 704 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3,
#line 704 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__4_4)
#line 704 "goal_util.m"
{
#line 707 "goal_util.m"
  {
#line 707 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 707 "goal_util.m"
    if ((hlds__goal_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 707 "goal_util.m"
      *hlds__goal_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "goal_util.m"
    else
#line 709 "goal_util.m"
      {
#line 709 "goal_util.m"
        MR_Word hlds__goal_util__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 0)));
#line 709 "goal_util.m"
        MR_Word hlds__goal_util__Goals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 1)));
#line 709 "goal_util.m"
        MR_Word hlds__goal_util__Goal_11;
#line 709 "goal_util.m"
        MR_Word hlds__goal_util__Goals_12;
#line 709 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
#line 709 "goal_util.m"
        MR_Word hlds__goal_util__GoalInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
#line 709 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr_19;
#line 709 "goal_util.m"
        MR_Word hlds__goal_util__GoalInfo_20;
#line 697 "goal_util.m"
        MR_Box hlds__goal_util__conv1_GoalInfo_20;

#line 695 "goal_util.m"
        {
#line 695 "goal_util.m"
          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__HeadVar__1_1, hlds__goal_util__GoalExpr0_17, &hlds__goal_util__GoalExpr_19);
        }
#line 697 "goal_util.m"
        {
#line 697 "goal_util.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_4[19], hlds__goal_util__HeadVar__1_1, ((MR_Box) (hlds__goal_util__GoalInfo0_18)), &hlds__goal_util__conv1_GoalInfo_20);
        }
#line 697 "goal_util.m"
        hlds__goal_util__GoalInfo_20 = ((MR_Word) hlds__goal_util__conv1_GoalInfo_20);
#line 698 "goal_util.m"
        {
#line 698 "goal_util.m"
          hlds__goal_util__Goal_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 698 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_11, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_19));
#line 698 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_11, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_20));
#line 698 "goal_util.m"
        }
#line 711 "goal_util.m"
        {
#line 711 "goal_util.m"
          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Goals0_10, &hlds__goal_util__Goals_12);
        }
#line 709 "goal_util.m"
        {
#line 709 "goal_util.m"
          MR_Word base;
#line 709 "goal_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "goal_util.m"
          *hlds__goal_util__HeadVar__4_4 = base;
#line 709 "goal_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Goal_11));
#line 709 "goal_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_util__Goals_12));
#line 709 "goal_util.m"
        }
#line 709 "goal_util.m"
      }
#line 707 "goal_util.m"
  }
#line 704 "goal_util.m"
}

#line 697 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1(
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 697 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 697 "goal_util.m"
{
#line 697 "goal_util.m"
  {
#line 697 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 697 "goal_util.m"
    MR_Word hlds__goal_util__conv0_HeadVar__3_3;

#line 697 "goal_util.m"
    {
#line 697 "goal_util.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_HeadVar__3_3);
    }
#line 697 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__3_3));
#line 697 "goal_util.m"
  }
#line 697 "goal_util.m"
}

#line 702 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(
#line 702 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 702 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3,
#line 702 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__4_4)
#line 702 "goal_util.m"
{
#line 707 "goal_util.m"
  {
#line 707 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 707 "goal_util.m"
    if ((hlds__goal_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 707 "goal_util.m"
      *hlds__goal_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "goal_util.m"
    else
#line 709 "goal_util.m"
      {
#line 709 "goal_util.m"
        MR_Word hlds__goal_util__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 0)));
#line 709 "goal_util.m"
        MR_Word hlds__goal_util__Goals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 1)));
#line 709 "goal_util.m"
        MR_Word hlds__goal_util__Goal_11;
#line 709 "goal_util.m"
        MR_Word hlds__goal_util__Goals_12;
#line 709 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
#line 709 "goal_util.m"
        MR_Word hlds__goal_util__GoalInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
#line 709 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr_19;
#line 709 "goal_util.m"
        MR_Word hlds__goal_util__GoalInfo_20;
#line 697 "goal_util.m"
        MR_Box hlds__goal_util__conv1_GoalInfo_20;

#line 695 "goal_util.m"
        {
#line 695 "goal_util.m"
          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__GoalExpr0_17, &hlds__goal_util__GoalExpr_19);
        }
#line 697 "goal_util.m"
        {
#line 697 "goal_util.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_4[18], hlds__goal_util__HeadVar__1_1, ((MR_Box) (hlds__goal_util__GoalInfo0_18)), &hlds__goal_util__conv1_GoalInfo_20);
        }
#line 697 "goal_util.m"
        hlds__goal_util__GoalInfo_20 = ((MR_Word) hlds__goal_util__conv1_GoalInfo_20);
#line 698 "goal_util.m"
        {
#line 698 "goal_util.m"
          hlds__goal_util__Goal_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 698 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_11, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_19));
#line 698 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_11, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_20));
#line 698 "goal_util.m"
        }
#line 711 "goal_util.m"
        {
#line 711 "goal_util.m"
          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Goals0_10, &hlds__goal_util__Goals_12);
        }
#line 709 "goal_util.m"
        {
#line 709 "goal_util.m"
          MR_Word base;
#line 709 "goal_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "goal_util.m"
          *hlds__goal_util__HeadVar__4_4 = base;
#line 709 "goal_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Goal_11));
#line 709 "goal_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_util__Goals_12));
#line 709 "goal_util.m"
        }
#line 709 "goal_util.m"
      }
#line 707 "goal_util.m"
  }
#line 702 "goal_util.m"
}

#line 697 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1(
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 697 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 697 "goal_util.m"
{
#line 697 "goal_util.m"
  {
#line 697 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 697 "goal_util.m"
    MR_Word hlds__goal_util__conv0_HeadVar__3_3;

#line 697 "goal_util.m"
    {
#line 697 "goal_util.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_HeadVar__3_3);
    }
#line 697 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__3_3));
#line 697 "goal_util.m"
  }
#line 697 "goal_util.m"
}

#line 124 "goal_util.m"
void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(
#line 124 "goal_util.m"
  MR_Word hlds__goal_util__Features_5,
#line 124 "goal_util.m"
  MR_Word hlds__goal_util__Goal0_7,
#line 124 "goal_util.m"
  MR_Word * hlds__goal_util__Goal_8)
#line 124 "goal_util.m"
{
#line 693 "goal_util.m"
  {
#line 693 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 693 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
#line 693 "goal_util.m"
    MR_Word hlds__goal_util__GoalInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
#line 693 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_11;
#line 693 "goal_util.m"
    MR_Word hlds__goal_util__GoalInfo_12;
#line 697 "goal_util.m"
    MR_Box hlds__goal_util__conv1_GoalInfo_12;

#line 695 "goal_util.m"
    {
#line 695 "goal_util.m"
      hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__GoalExpr0_9, &hlds__goal_util__GoalExpr_11);
    }
#line 697 "goal_util.m"
    {
#line 697 "goal_util.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_4[17], hlds__goal_util__Features_5, ((MR_Box) (hlds__goal_util__GoalInfo0_10)), &hlds__goal_util__conv1_GoalInfo_12);
    }
#line 697 "goal_util.m"
    hlds__goal_util__GoalInfo_12 = ((MR_Word) hlds__goal_util__conv1_GoalInfo_12);
#line 698 "goal_util.m"
    {
#line 698 "goal_util.m"
      MR_Word base;
#line 698 "goal_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 698 "goal_util.m"
      *hlds__goal_util__Goal_8 = base;
#line 698 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_11));
#line 698 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_12));
#line 698 "goal_util.m"
    }
#line 693 "goal_util.m"
  }
#line 124 "goal_util.m"
}

#line 697 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1(
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 697 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 697 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 697 "goal_util.m"
{
#line 697 "goal_util.m"
  {
#line 697 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 697 "goal_util.m"
    MR_Word hlds__goal_util__conv0_HeadVar__3_3;

#line 697 "goal_util.m"
    {
#line 697 "goal_util.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_HeadVar__3_3);
    }
#line 697 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__3_3));
#line 697 "goal_util.m"
  }
#line 697 "goal_util.m"
}

#line 121 "goal_util.m"
void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(
#line 121 "goal_util.m"
  MR_Word hlds__goal_util__Features_5,
#line 121 "goal_util.m"
  MR_Word hlds__goal_util__Goal0_7,
#line 121 "goal_util.m"
  MR_Word * hlds__goal_util__Goal_8)
#line 121 "goal_util.m"
{
#line 693 "goal_util.m"
  {
#line 693 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 693 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
#line 693 "goal_util.m"
    MR_Word hlds__goal_util__GoalInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
#line 693 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_11;
#line 693 "goal_util.m"
    MR_Word hlds__goal_util__GoalInfo_12;
#line 697 "goal_util.m"
    MR_Box hlds__goal_util__conv1_GoalInfo_12;

#line 695 "goal_util.m"
    {
#line 695 "goal_util.m"
      hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__GoalExpr0_9, &hlds__goal_util__GoalExpr_11);
    }
#line 697 "goal_util.m"
    {
#line 697 "goal_util.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_4[16], hlds__goal_util__Features_5, ((MR_Box) (hlds__goal_util__GoalInfo0_10)), &hlds__goal_util__conv1_GoalInfo_12);
    }
#line 697 "goal_util.m"
    hlds__goal_util__GoalInfo_12 = ((MR_Word) hlds__goal_util__conv1_GoalInfo_12);
#line 698 "goal_util.m"
    {
#line 698 "goal_util.m"
      MR_Word base;
#line 698 "goal_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 698 "goal_util.m"
      *hlds__goal_util__Goal_8 = base;
#line 698 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_11));
#line 698 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_12));
#line 698 "goal_util.m"
    }
#line 693 "goal_util.m"
  }
#line 121 "goal_util.m"
}

#line 2265 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2265__1_3_p_0(
#line 2265 "goal_util.m"
  MR_Word hlds__goal_util__TransformP_4,
#line 2265 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_61,
#line 2265 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__3_62)
#line 2265 "goal_util.m"
{
#line 2265 "goal_util.m"
  {
#line 2265 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 2265 "goal_util.m"
    MR_Word hlds__goal_util__GoalI0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__2_61, (MR_Integer) 2)));
#line 2265 "goal_util.m"
    MR_Word hlds__goal_util__GoalI_43;
#line 2266 "goal_util.m"
    MR_Word hlds__goal_util__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__2_61, (MR_Integer) 0)));
#line 2266 "goal_util.m"
    MR_Word hlds__goal_util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__2_61, (MR_Integer) 1)));
#line 2268 "goal_util.m"
    MR_Word hlds__goal_util__V_72_72;
#line 2268 "goal_util.m"
    MR_Word hlds__goal_util__V_73_73;
#line 2268 "goal_util.m"
    MR_Word hlds__goal_util__V_74_74;

#line 2267 "goal_util.m"
    {
#line 2267 "goal_util.m"
      hlds__goal_util__transform_all_goals_3_p_0(hlds__goal_util__TransformP_4, hlds__goal_util__GoalI0_42, &hlds__goal_util__GoalI_43);
    }
#line 2268 "goal_util.m"
    hlds__goal_util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__2_61, (MR_Integer) 0)));
#line 2268 "goal_util.m"
    hlds__goal_util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__2_61, (MR_Integer) 1)));
#line 2268 "goal_util.m"
    hlds__goal_util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__2_61, (MR_Integer) 2)));
#line 2268 "goal_util.m"
    {
#line 2268 "goal_util.m"
      MR_Word base;
#line 2268 "goal_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2268 "goal_util.m"
      *hlds__goal_util__HeadVar__3_62 = base;
#line 2268 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__V_72_72));
#line 2268 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__V_73_73));
#line 2268 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__goal_util__GoalI_43));
#line 2268 "goal_util.m"
    }
#line 2265 "goal_util.m"
  }
#line 2265 "goal_util.m"
}

#line 2084 "goal_util.m"
static MR_Word MR_CALL 
hlds__goal_util__IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap__2084__1_1_f_0(
#line 2084 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_107)
#line 2084 "goal_util.m"
{
#line 2084 "goal_util.m"
  {
#line 2084 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 2084 "goal_util.m"
    MR_Word hlds__goal_util__HeadVar__2_108;
#line 2084 "goal_util.m"
    MR_Word hlds__goal_util__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_107, (MR_Integer) 1)));
#line 2086 "goal_util.m"
    MR_Word hlds__goal_util__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_107, (MR_Integer) 0)));

#line 2084 "goal_util.m"
    {
#line 2084 "goal_util.m"
      return hlds__goal_util__HeadVar__2_108 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__V_109_109);
    }
#line 2084 "goal_util.m"
    return hlds__goal_util__HeadVar__2_108;
#line 2084 "goal_util.m"
  }
#line 2084 "goal_util.m"
}

#line 1719 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_foreign_proc__1719__1_2_p_0(
#line 1719 "goal_util.m"
  MR_Word hlds__goal_util__Purity_22,
#line 1719 "goal_util.m"
  MR_Word hlds__goal_util__PredPurity_45)
#line 1719 "goal_util.m"
{
#line 1719 "goal_util.m"
  {
#line 1719 "goal_util.m"
    MR_bool hlds__goal_util__succeeded = (hlds__goal_util__Purity_22 == hlds__goal_util__PredPurity_45);

#line 1719 "goal_util.m"
    return hlds__goal_util__succeeded;
#line 1719 "goal_util.m"
  }
#line 1719 "goal_util.m"
}

#line 1686 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_simple_call__1686__1_2_p_0(
#line 1686 "goal_util.m"
  MR_Word hlds__goal_util__Purity_18,
#line 1686 "goal_util.m"
  MR_Word hlds__goal_util__PredPurity_36)
#line 1686 "goal_util.m"
{
#line 1686 "goal_util.m"
  {
#line 1686 "goal_util.m"
    MR_bool hlds__goal_util__succeeded = (hlds__goal_util__Purity_18 == hlds__goal_util__PredPurity_36);

#line 1686 "goal_util.m"
    return hlds__goal_util__succeeded;
#line 1686 "goal_util.m"
  }
#line 1686 "goal_util.m"
}

#line 1394 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1394__1_2_p_0(
#line 1394 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_63,
#line 1394 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__2_64)
#line 1394 "goal_util.m"
{
#line 1394 "goal_util.m"
  {
#line 1394 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1394 "goal_util.m"
    MR_Word hlds__goal_util__V_65_65;
#line 1394 "goal_util.m"
    MR_Word hlds__goal_util__V_67_67;

#line 1395 "goal_util.m"
    {
#line 1395 "goal_util.m"
      hlds__goal_util__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1395 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_65_65, 0) = ((MR_Box) (hlds__goal_util__HeadVar__1_63));
#line 1395 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1395 "goal_util.m"
    }
#line 1395 "goal_util.m"
    {
#line 1395 "goal_util.m"
      hlds__goal_util__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1395 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_67_67, 0) = ((MR_Box) (hlds__goal_util__HeadVar__1_63));
#line 1395 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_67_67, 1) = ((MR_Box) (hlds__goal_util__HeadVar__1_63));
#line 1395 "goal_util.m"
    }
#line 1395 "goal_util.m"
    {
#line 1395 "goal_util.m"
      MR_Word base;
#line 1395 "goal_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1395 "goal_util.m"
      *hlds__goal_util__HeadVar__2_64 = base;
#line 1395 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__V_65_65));
#line 1395 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__V_67_67));
#line 1395 "goal_util.m"
    }
#line 1394 "goal_util.m"
  }
#line 1394 "goal_util.m"
}

#line 1761 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_1(
#line 1761 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1761 "goal_util.m"
{
#line 1761 "goal_util.m"
  {
#line 1761 "goal_util.m"
    struct hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1761 "goal_util.m"
    {
#line 1763 "goal_util.m"
      MR_Word hlds__goal_util__V_8_8;
#line 1764 "goal_util.m"
      MR_Integer hlds__goal_util__V_9_9;
#line 1764 "goal_util.m"
      MR_Word hlds__goal_util__V_10_10;
#line 1764 "goal_util.m"
      MR_Word hlds__goal_util__V_11_11;
#line 1764 "goal_util.m"
      MR_Word hlds__goal_util__V_12_12;

#line 1763 "goal_util.m"
      (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__SubGoal_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__V_15_15, (MR_Integer) 0)));
#line 1763 "goal_util.m"
      hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__V_15_15, (MR_Integer) 1)));
#line 1764 "goal_util.m"
      (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__SubGoal_7)) == (MR_mktag((MR_Integer) 2)));
#line 1764 "goal_util.m"
      if ((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__succeeded)
#line 1764 "goal_util.m"
        {
#line 1764 "goal_util.m"
          {
#line 1764 "goal_util.m"
            (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 0)));
#line 1764 "goal_util.m"
            hlds__goal_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 1)));
#line 1764 "goal_util.m"
            (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 2)));
#line 1764 "goal_util.m"
            hlds__goal_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 3)));
#line 1764 "goal_util.m"
            hlds__goal_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 4)));
#line 1764 "goal_util.m"
            hlds__goal_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 5)));
#line 1764 "goal_util.m"
          }
#line 1761 "goal_util.m"
          {
#line 1761 "goal_util.m"
            {
#line 1761 "goal_util.m"
              MR_Tuple base;
#line 1761 "goal_util.m"
              base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1761 "goal_util.m"
              *((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__HeadVar__2_14) = base;
#line 1761 "goal_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__PredId_16));
#line 1761 "goal_util.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__Args_17));
#line 1761 "goal_util.m"
            }
#line 1761 "goal_util.m"
            {
#line 1761 "goal_util.m"
              ((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__cont_env_ptr);
#line 1761 "goal_util.m"
              return;
            }
#line 1761 "goal_util.m"
          }
#line 1764 "goal_util.m"
        }
#line 1761 "goal_util.m"
    }
#line 1761 "goal_util.m"
  }
#line 1761 "goal_util.m"
}

#line 1761 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0(
#line 1761 "goal_util.m"
  MR_Word hlds__goal_util__Goal_3,
#line 1761 "goal_util.m"
  MR_Tuple * hlds__goal_util__HeadVar__2_14,
#line 1761 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1761 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 1761 "goal_util.m"
{
#line 1761 "goal_util.m"
  {
#line 1761 "goal_util.m"
    struct hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0_s hlds__goal_util__env;

#line 1761 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__HeadVar__2_14 = hlds__goal_util__HeadVar__2_14;
#line 1761 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__cont = hlds__goal_util__cont;
#line 1761 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
#line 1763 "goal_util.m"
    {
#line 1763 "goal_util.m"
      hlds__goal_util__goal_contains_goal_2_p_0(hlds__goal_util__Goal_3, &(hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_env_0__V_15_15, hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0_1, &hlds__goal_util__env);
    }
#line 1761 "goal_util.m"
  }
#line 1761 "goal_util.m"
}

#line 842 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_2(
#line 842 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 842 "goal_util.m"
{
#line 842 "goal_util.m"
  {
#line 842 "goal_util.m"
    struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 842 "goal_util.m"
    (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__Constraint_23 = ((MR_Word) (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__conv0_Constraint_23);
#line 842 "goal_util.m"
    {
#line 842 "goal_util.m"
      hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_1(hlds__goal_util__env_ptr);
#line 842 "goal_util.m"
      return;
    }
#line 842 "goal_util.m"
  }
#line 842 "goal_util.m"
}

#line 837 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_3(
#line 837 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 837 "goal_util.m"
{
#line 837 "goal_util.m"
  {
#line 837 "goal_util.m"
    struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 4422 "hlds.goal_util.c"
    (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 845 "goal_util.m"
    {
#line 845 "goal_util.m"
      (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__TypeCtorInfo_43_43, (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__NonLocalTypeVars_15, (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__TypeVar_34);
    }
#line 837 "goal_util.m"
    if ((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__succeeded)
#line 837 "goal_util.m"
      {
#line 849 "goal_util.m"
        {
#line 849 "goal_util.m"
          hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_p_0((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__RttiVarMaps_6, (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__Constraint_23, (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__HeadVar__3_32);
        }
#line 849 "goal_util.m"
        {
#line 849 "goal_util.m"
          ((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__cont_env_ptr);
#line 849 "goal_util.m"
          return;
        }
#line 837 "goal_util.m"
      }
#line 837 "goal_util.m"
  }
#line 837 "goal_util.m"
}

#line 837 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_1(
#line 837 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 837 "goal_util.m"
{
#line 837 "goal_util.m"
  {
#line 837 "goal_util.m"
    struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 837 "goal_util.m"
    {
#line 843 "goal_util.m"
      MR_Word hlds__goal_util___Name_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__Constraint_23, (MR_Integer) 0)));

#line 843 "goal_util.m"
      (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__ArgTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__Constraint_23, (MR_Integer) 1)));
#line 844 "goal_util.m"
      {
#line 844 "goal_util.m"
        parse_tree__prog_type__type_list_contains_var_2_p_0((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__ArgTypes_25, &(hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__TypeVar_34, hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_3, hlds__goal_util__env_ptr);
      }
#line 837 "goal_util.m"
    }
#line 837 "goal_util.m"
  }
#line 837 "goal_util.m"
}

#line 837 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0(
#line 837 "goal_util.m"
  MR_Word hlds__goal_util__RttiVarMaps_6,
#line 837 "goal_util.m"
  MR_Word hlds__goal_util__NonLocalTypeVars_15,
#line 837 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__3_32,
#line 837 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 837 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 837 "goal_util.m"
{
#line 837 "goal_util.m"
  {
#line 837 "goal_util.m"
    struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0_s hlds__goal_util__env;

#line 837 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__RttiVarMaps_6 = hlds__goal_util__RttiVarMaps_6;
#line 837 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__NonLocalTypeVars_15 = hlds__goal_util__NonLocalTypeVars_15;
#line 837 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__HeadVar__3_32 = hlds__goal_util__HeadVar__3_32;
#line 837 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__cont = hlds__goal_util__cont;
#line 837 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
#line 837 "goal_util.m"
    {
#line 837 "goal_util.m"
      MR_Word hlds__goal_util__Constraints_22;

#line 841 "goal_util.m"
      {
#line 841 "goal_util.m"
        hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0((hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__RttiVarMaps_6, &hlds__goal_util__Constraints_22);
      }
#line 842 "goal_util.m"
      {
#line 842 "goal_util.m"
        mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, &(hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_env_0__conv0_Constraint_23, hlds__goal_util__Constraints_22, hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0_2, &hlds__goal_util__env);
      }
#line 837 "goal_util.m"
    }
#line 837 "goal_util.m"
  }
#line 837 "goal_util.m"
}

#line 826 "goal_util.m"
static MR_Word MR_CALL 
hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__826__1_2_f_0(
#line 826 "goal_util.m"
  MR_Word hlds__goal_util__RttiVarMaps_6,
#line 826 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_28)
#line 826 "goal_util.m"
{
#line 826 "goal_util.m"
  {
#line 826 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 826 "goal_util.m"
    MR_Word hlds__goal_util__HeadVar__3_29;
#line 826 "goal_util.m"
    MR_Word hlds__goal_util__Locn_19;

#line 827 "goal_util.m"
    {
#line 827 "goal_util.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(hlds__goal_util__RttiVarMaps_6, hlds__goal_util__HeadVar__2_28, &hlds__goal_util__Locn_19);
    }
#line 828 "goal_util.m"
    {
#line 828 "goal_util.m"
      hlds__hlds_rtti__type_info_locn_var_2_p_0(hlds__goal_util__Locn_19, &hlds__goal_util__HeadVar__3_29);
    }
#line 826 "goal_util.m"
    return hlds__goal_util__HeadVar__3_29;
#line 826 "goal_util.m"
  }
#line 826 "goal_util.m"
}

#line 404 "goal_util.m"
void MR_CALL 
hlds__goal_util____Compare____maybe_transformed_goal_0_0(
#line 404 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__1_1,
#line 404 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_2,
#line 404 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3)
#line 404 "goal_util.m"
{
#line 404 "goal_util.m"
  {
#line 404 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 404 "goal_util.m"
    MR_Integer hlds__goal_util__CastX_16 = (MR_Integer) hlds__goal_util__HeadVar__2_2;
#line 404 "goal_util.m"
    MR_Integer hlds__goal_util__CastY_17 = (MR_Integer) hlds__goal_util__HeadVar__3_3;

#line 404 "goal_util.m"
    hlds__goal_util__succeeded = (hlds__goal_util__CastX_16 == hlds__goal_util__CastY_17);
#line 404 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 4594 "hlds.goal_util.c"
      *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 0;
#line 404 "goal_util.m"
    else
#line 404 "goal_util.m"
      if ((hlds__goal_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 404 "goal_util.m"
        if ((hlds__goal_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 404 "goal_util.m"
          *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 0;
#line 404 "goal_util.m"
        else
#line 404 "goal_util.m"
          if (((MR_tag((MR_Word) hlds__goal_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4608 "hlds.goal_util.c"
            *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 2;
#line 404 "goal_util.m"
          else
#line 4612 "hlds.goal_util.c"
            *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 2;
#line 404 "goal_util.m"
      else
#line 404 "goal_util.m"
        if (((MR_tag((MR_Word) hlds__goal_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 404 "goal_util.m"
          {
#line 404 "goal_util.m"
            MR_String hlds__goal_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__2_2, (MR_Integer) 0)));

#line 404 "goal_util.m"
            if ((hlds__goal_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4625 "hlds.goal_util.c"
              *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 1;
#line 404 "goal_util.m"
            else
#line 404 "goal_util.m"
              if (((MR_tag((MR_Word) hlds__goal_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 404 "goal_util.m"
                {
#line 404 "goal_util.m"
                  MR_String hlds__goal_util__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__3_3, (MR_Integer) 0)));

#line 404 "goal_util.m"
                  {
#line 404 "goal_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__V_20_20, hlds__goal_util__V_12_12);
#line 404 "goal_util.m"
                    return;
                  }
#line 404 "goal_util.m"
                }
#line 404 "goal_util.m"
              else
#line 4647 "hlds.goal_util.c"
                *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 2;
#line 404 "goal_util.m"
          }
#line 404 "goal_util.m"
        else
#line 404 "goal_util.m"
          {
#line 404 "goal_util.m"
            MR_Word hlds__goal_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__2_2, (MR_Integer) 0)));

#line 404 "goal_util.m"
            if ((hlds__goal_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4660 "hlds.goal_util.c"
              *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 1;
#line 404 "goal_util.m"
            else
#line 404 "goal_util.m"
              if (((MR_tag((MR_Word) hlds__goal_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4666 "hlds.goal_util.c"
                *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 1;
#line 404 "goal_util.m"
              else
#line 404 "goal_util.m"
                {
#line 404 "goal_util.m"
                  MR_Word hlds__goal_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 0)));

#line 404 "goal_util.m"
                  {
#line 404 "goal_util.m"
                    hlds__hlds_goal____Compare____hlds_goal_0_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__V_21_21, hlds__goal_util__V_5_5);
#line 404 "goal_util.m"
                    return;
                  }
#line 404 "goal_util.m"
                }
#line 404 "goal_util.m"
          }
#line 404 "goal_util.m"
  }
#line 404 "goal_util.m"
}

#line 404 "goal_util.m"
MR_bool MR_CALL 
hlds__goal_util____Unify____maybe_transformed_goal_0_0(
#line 404 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 404 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_2)
#line 404 "goal_util.m"
{
#line 404 "goal_util.m"
  {
#line 404 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 404 "goal_util.m"
    MR_Integer hlds__goal_util__CastX_9 = (MR_Integer) hlds__goal_util__HeadVar__1_1;
#line 404 "goal_util.m"
    MR_Integer hlds__goal_util__CastY_10 = (MR_Integer) hlds__goal_util__HeadVar__2_2;

#line 404 "goal_util.m"
    hlds__goal_util__succeeded = (hlds__goal_util__CastX_9 == hlds__goal_util__CastY_10);
#line 404 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 404 "goal_util.m"
      hlds__goal_util__succeeded = MR_TRUE;
#line 404 "goal_util.m"
    else
#line 404 "goal_util.m"
      if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 404 "goal_util.m"
        {
#line 404 "goal_util.m"
          MR_Integer hlds__goal_util__CastX_7 = (MR_Integer) hlds__goal_util__HeadVar__1_1;
#line 404 "goal_util.m"
          MR_Integer hlds__goal_util__CastY_8 = (MR_Integer) hlds__goal_util__HeadVar__2_2;

#line 404 "goal_util.m"
          hlds__goal_util__succeeded = (hlds__goal_util__CastY_8 == hlds__goal_util__CastX_7);
#line 404 "goal_util.m"
        }
#line 404 "goal_util.m"
      else
#line 404 "goal_util.m"
        if (((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 404 "goal_util.m"
          {
#line 404 "goal_util.m"
            MR_String hlds__goal_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 404 "goal_util.m"
            MR_String hlds__goal_util__V_6_6;

#line 404 "goal_util.m"
            hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 404 "goal_util.m"
            if (hlds__goal_util__succeeded)
#line 404 "goal_util.m"
              {
#line 404 "goal_util.m"
                hlds__goal_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__2_2, (MR_Integer) 0)));
#line 4749 "hlds.goal_util.c"
                hlds__goal_util__succeeded = (strcmp(hlds__goal_util__V_5_5, hlds__goal_util__V_6_6) == 0);
#line 404 "goal_util.m"
              }
#line 404 "goal_util.m"
          }
#line 404 "goal_util.m"
        else
#line 404 "goal_util.m"
          {
#line 404 "goal_util.m"
            MR_Word hlds__goal_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 404 "goal_util.m"
            MR_Word hlds__goal_util__V_4_4;

#line 404 "goal_util.m"
            hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 404 "goal_util.m"
            if (hlds__goal_util__succeeded)
#line 404 "goal_util.m"
              {
#line 404 "goal_util.m"
                hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__2_2, (MR_Integer) 0)));
#line 4772 "hlds.goal_util.c"
                {
#line 4774 "hlds.goal_util.c"
                  return hlds__goal_util__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(hlds__goal_util__V_3_3, hlds__goal_util__V_4_4);
                }
#line 404 "goal_util.m"
              }
#line 404 "goal_util.m"
          }
#line 404 "goal_util.m"
    return hlds__goal_util__succeeded;
#line 404 "goal_util.m"
  }
#line 404 "goal_util.m"
}

#line 148 "goal_util.m"
void MR_CALL 
hlds__goal_util____Compare____is_leaf_0_0(
#line 148 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__1_1,
#line 148 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_2,
#line 148 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3)
#line 148 "goal_util.m"
{
#line 148 "goal_util.m"
  {
#line 148 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 148 "goal_util.m"
    MR_Integer hlds__goal_util__Cast_HeadVar1_4 = (MR_Integer) hlds__goal_util__HeadVar__2_2;
#line 148 "goal_util.m"
    MR_Integer hlds__goal_util__Cast_HeadVar2_5 = (MR_Integer) hlds__goal_util__HeadVar__3_3;

#line 148 "goal_util.m"
    {
#line 148 "goal_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Cast_HeadVar1_4, hlds__goal_util__Cast_HeadVar2_5);
#line 148 "goal_util.m"
      return;
    }
#line 148 "goal_util.m"
  }
#line 148 "goal_util.m"
}

#line 148 "goal_util.m"
MR_bool MR_CALL 
hlds__goal_util____Unify____is_leaf_0_0(
#line 148 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_1,
#line 148 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_2)
#line 148 "goal_util.m"
{
#line 4829 "hlds.goal_util.c"
  {
#line 4831 "hlds.goal_util.c"
    MR_bool hlds__goal_util__succeeded = (hlds__goal_util__HeadVar__2_1 == hlds__goal_util__HeadVar__2_2);

#line 4834 "hlds.goal_util.c"
    return hlds__goal_util__succeeded;
#line 4836 "hlds.goal_util.c"
  }
#line 148 "goal_util.m"
}

#line 235 "goal_util.m"
void MR_CALL 
hlds__goal_util____Compare____goal_is_atomic_0_0(
#line 235 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__1_1,
#line 235 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_2,
#line 235 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3)
#line 235 "goal_util.m"
{
#line 235 "goal_util.m"
  {
#line 235 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 235 "goal_util.m"
    MR_Integer hlds__goal_util__Cast_HeadVar1_4 = (MR_Integer) hlds__goal_util__HeadVar__2_2;
#line 235 "goal_util.m"
    MR_Integer hlds__goal_util__Cast_HeadVar2_5 = (MR_Integer) hlds__goal_util__HeadVar__3_3;

#line 235 "goal_util.m"
    {
#line 235 "goal_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Cast_HeadVar1_4, hlds__goal_util__Cast_HeadVar2_5);
#line 235 "goal_util.m"
      return;
    }
#line 235 "goal_util.m"
  }
#line 235 "goal_util.m"
}

#line 235 "goal_util.m"
MR_bool MR_CALL 
hlds__goal_util____Unify____goal_is_atomic_0_0(
#line 235 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_1,
#line 235 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_2)
#line 235 "goal_util.m"
{
#line 4882 "hlds.goal_util.c"
  {
#line 4884 "hlds.goal_util.c"
    MR_bool hlds__goal_util__succeeded = (hlds__goal_util__HeadVar__2_1 == hlds__goal_util__HeadVar__2_2);

#line 4887 "hlds.goal_util.c"
    return hlds__goal_util__succeeded;
#line 4889 "hlds.goal_util.c"
  }
#line 235 "goal_util.m"
}

#line 112 "goal_util.m"
void MR_CALL 
hlds__goal_util____Compare____attach_in_from_ground_term_0_0(
#line 112 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__1_1,
#line 112 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_2,
#line 112 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3)
#line 112 "goal_util.m"
{
#line 112 "goal_util.m"
  {
#line 112 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 112 "goal_util.m"
    MR_Integer hlds__goal_util__Cast_HeadVar1_4 = (MR_Integer) hlds__goal_util__HeadVar__2_2;
#line 112 "goal_util.m"
    MR_Integer hlds__goal_util__Cast_HeadVar2_5 = (MR_Integer) hlds__goal_util__HeadVar__3_3;

#line 112 "goal_util.m"
    {
#line 112 "goal_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Cast_HeadVar1_4, hlds__goal_util__Cast_HeadVar2_5);
#line 112 "goal_util.m"
      return;
    }
#line 112 "goal_util.m"
  }
#line 112 "goal_util.m"
}

#line 112 "goal_util.m"
MR_bool MR_CALL 
hlds__goal_util____Unify____attach_in_from_ground_term_0_0(
#line 112 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_1,
#line 112 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_2)
#line 112 "goal_util.m"
{
#line 4935 "hlds.goal_util.c"
  {
#line 4937 "hlds.goal_util.c"
    MR_bool hlds__goal_util__succeeded = (hlds__goal_util__HeadVar__2_1 == hlds__goal_util__HeadVar__2_2);

#line 4940 "hlds.goal_util.c"
    return hlds__goal_util__succeeded;
#line 4942 "hlds.goal_util.c"
  }
#line 112 "goal_util.m"
}

#line 2240 "goal_util.m"
static void MR_CALL 
hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_p_0(
#line 2240 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 2240 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__2_2)
#line 2240 "goal_util.m"
{
#line 2243 "goal_util.m"
  {
#line 2243 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 2243 "goal_util.m"
    if (((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 2244 "goal_util.m"
      {
#line 2244 "goal_util.m"
        MR_String hlds__goal_util__Error_4 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));

#line 2244 "goal_util.m"
        {
#line 2244 "goal_util.m"
          MR_Word base;
#line 2244 "goal_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2244 "goal_util.m"
          *hlds__goal_util__HeadVar__2_2 = base;
#line 2244 "goal_util.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__goal_util__Error_4));
#line 2244 "goal_util.m"
        }
#line 2244 "goal_util.m"
      }
#line 2243 "goal_util.m"
    else
#line 2243 "goal_util.m"
      {
#line 2243 "goal_util.m"
        MR_Word hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));

#line 2243 "goal_util.m"
        {
#line 2243 "goal_util.m"
          MR_Word base;
#line 2243 "goal_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2243 "goal_util.m"
          *hlds__goal_util__HeadVar__2_2 = base;
#line 2243 "goal_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Goal_3));
#line 2243 "goal_util.m"
        }
#line 2243 "goal_util.m"
      }
#line 2243 "goal_util.m"
  }
#line 2240 "goal_util.m"
}

#line 1881 "goal_util.m"
static MR_Word MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_case_1_f_0(
#line 1881 "goal_util.m"
  MR_Word hlds__goal_util__Case0_3)
#line 1881 "goal_util.m"
{
#line 1883 "goal_util.m"
  {
#line 1883 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1883 "goal_util.m"
    MR_Word hlds__goal_util__Case_4;
#line 1883 "goal_util.m"
    MR_Word hlds__goal_util__MainConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_3, (MR_Integer) 0)));
#line 1883 "goal_util.m"
    MR_Word hlds__goal_util__OtherConsIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_3, (MR_Integer) 1)));
#line 1883 "goal_util.m"
    MR_Word hlds__goal_util__Goal0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_3, (MR_Integer) 2)));
#line 1883 "goal_util.m"
    MR_Word hlds__goal_util__Goal_8;

#line 1885 "goal_util.m"
    {
#line 1885 "goal_util.m"
      hlds__goal_util__Goal_8 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__Goal0_7);
    }
#line 1886 "goal_util.m"
    {
#line 1886 "goal_util.m"
      hlds__goal_util__Case_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1886 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__Case_4, 0) = ((MR_Box) (hlds__goal_util__MainConsId_5));
#line 1886 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__Case_4, 1) = ((MR_Box) (hlds__goal_util__OtherConsIds_6));
#line 1886 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__Case_4, 2) = ((MR_Box) (hlds__goal_util__Goal_8));
#line 1886 "goal_util.m"
    }
#line 1883 "goal_util.m"
    return hlds__goal_util__Case_4;
#line 1883 "goal_util.m"
  }
#line 1881 "goal_util.m"
}

#line 1447 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__flatten_disj_2_f_0_1(
#line 1447 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1447 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1447 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2)
#line 1447 "goal_util.m"
{
#line 1447 "goal_util.m"
  {
#line 1447 "goal_util.m"
    MR_Box hlds__goal_util__wrapper_arg_3;
#line 1447 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 1447 "goal_util.m"
    MR_Word hlds__goal_util__conv0_Disjs_6;

#line 1447 "goal_util.m"
    {
#line 1447 "goal_util.m"
      hlds__goal_util__conv0_Disjs_6 = hlds__goal_util__flatten_disj_2_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2));
    }
#line 1447 "goal_util.m"
    hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_Disjs_6));
#line 1447 "goal_util.m"
    return hlds__goal_util__wrapper_arg_3;
#line 1447 "goal_util.m"
  }
#line 1447 "goal_util.m"
}

#line 1443 "goal_util.m"
static MR_Word MR_CALL 
hlds__goal_util__flatten_disj_2_f_0(
#line 1443 "goal_util.m"
  MR_Word hlds__goal_util__Disj_4,
#line 1443 "goal_util.m"
  MR_Word hlds__goal_util__Disjs0_5)
#line 1443 "goal_util.m"
{
#line 1448 "goal_util.m"
  {
#line 1448 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1448 "goal_util.m"
    MR_Word hlds__goal_util__Disjs_6;
#line 1448 "goal_util.m"
    MR_Word hlds__goal_util__Disjs1_7;
#line 1446 "goal_util.m"
    MR_Word hlds__goal_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Disj_4, (MR_Integer) 0)));
#line 1446 "goal_util.m"
    MR_Word hlds__goal_util___GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Disj_4, (MR_Integer) 1)));

#line 1446 "goal_util.m"
    hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__V_9_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__V_9_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1446 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 1446 "goal_util.m"
      {
#line 1446 "goal_util.m"
        hlds__goal_util__Disjs1_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__V_9_9, (MR_Integer) 1)));
#line 1447 "goal_util.m"
        {
#line 1447 "goal_util.m"
          MR_Box hlds__goal_util__conv1_Disjs_6;

#line 1447 "goal_util.m"
          {
#line 1447 "goal_util.m"
            hlds__goal_util__conv1_Disjs_6 = mercury__list__foldr_3_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__goal_util_scalar_common_1[4], (MR_Word) &hlds__goal_util_scalar_common_4[15], hlds__goal_util__Disjs1_7, ((MR_Box) (hlds__goal_util__Disjs0_5)));
          }
#line 1447 "goal_util.m"
          hlds__goal_util__Disjs_6 = ((MR_Word) hlds__goal_util__conv1_Disjs_6);
#line 1447 "goal_util.m"
        }
#line 1446 "goal_util.m"
      }
#line 1446 "goal_util.m"
    else
#line 1449 "goal_util.m"
      {
#line 1449 "goal_util.m"
        hlds__goal_util__Disjs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1449 "goal_util.m"
        MR_hl_field(MR_mktag(1), hlds__goal_util__Disjs_6, 0) = ((MR_Box) (hlds__goal_util__Disj_4));
#line 1449 "goal_util.m"
        MR_hl_field(MR_mktag(1), hlds__goal_util__Disjs_6, 1) = ((MR_Box) (hlds__goal_util__Disjs0_5));
#line 1449 "goal_util.m"
      }
#line 1448 "goal_util.m"
    return hlds__goal_util__Disjs_6;
#line 1448 "goal_util.m"
  }
#line 1443 "goal_util.m"
}

#line 1338 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goals_contain_reconstruction_1_p_0_1(
#line 1338 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1338 "goal_util.m"
{
#line 1338 "goal_util.m"
  {
#line 1338 "goal_util.m"
    struct hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1338 "goal_util.m"
    MR_builtin_longjmp((hlds__goal_util__env_ptr)->hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0__commit_0, 1);
#line 1338 "goal_util.m"
  }
#line 1338 "goal_util.m"
}

#line 1339 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goals_contain_reconstruction_1_p_0_3(
#line 1339 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1339 "goal_util.m"
{
#line 1339 "goal_util.m"
  {
#line 1339 "goal_util.m"
    struct hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1339 "goal_util.m"
    (hlds__goal_util__env_ptr)->hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0__Goal_3 = ((MR_Word) (hlds__goal_util__env_ptr)->hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0__conv0_Goal_3);
#line 1339 "goal_util.m"
    {
#line 1339 "goal_util.m"
      hlds__goal_util__goals_contain_reconstruction_1_p_0_2(hlds__goal_util__env_ptr);
#line 1339 "goal_util.m"
      return;
    }
#line 1339 "goal_util.m"
  }
#line 1339 "goal_util.m"
}

#line 1338 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goals_contain_reconstruction_1_p_0_2(
#line 1338 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1338 "goal_util.m"
{
#line 1338 "goal_util.m"
  {
#line 1338 "goal_util.m"
    struct hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1338 "goal_util.m"
    {
#line 1301 "goal_util.m"
      MR_Word hlds__goal_util__V_6_6;

#line 1301 "goal_util.m"
      (hlds__goal_util__env_ptr)->hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0__Goal_3, (MR_Integer) 0)));
#line 1301 "goal_util.m"
      hlds__goal_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0__Goal_3, (MR_Integer) 1)));
#line 1302 "goal_util.m"
      {
#line 1302 "goal_util.m"
        (hlds__goal_util__env_ptr)->hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0__succeeded = hlds__goal_util__goal_expr_contains_reconstruction_1_p_0((hlds__goal_util__env_ptr)->hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0__GoalExpr_5);
      }
#line 1302 "goal_util.m"
      if ((hlds__goal_util__env_ptr)->hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0__succeeded)
#line 1302 "goal_util.m"
        {
#line 1302 "goal_util.m"
          hlds__goal_util__goals_contain_reconstruction_1_p_0_1(hlds__goal_util__env_ptr);
#line 1302 "goal_util.m"
          return;
        }
#line 1338 "goal_util.m"
    }
#line 1338 "goal_util.m"
  }
#line 1338 "goal_util.m"
}

#line 1338 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goals_contain_reconstruction_1_p_0_4(
#line 1338 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1338 "goal_util.m"
{
#line 1338 "goal_util.m"
  {
#line 1338 "goal_util.m"
    struct hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1338 "goal_util.m"
    if (MR_builtin_setjmp((hlds__goal_util__env_ptr)->hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0__commit_0) == 0)
#line 1338 "goal_util.m"
      {
#line 1338 "goal_util.m"
        {
#line 1339 "goal_util.m"
          {
#line 1339 "goal_util.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(hlds__goal_util__env_ptr)->hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0__conv0_Goal_3, (hlds__goal_util__env_ptr)->hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0__Goals_2, hlds__goal_util__goals_contain_reconstruction_1_p_0_3, hlds__goal_util__env_ptr);
          }
#line 1338 "goal_util.m"
        }
#line 1338 "goal_util.m"
        (hlds__goal_util__env_ptr)->hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0__succeeded = MR_FALSE;
#line 1338 "goal_util.m"
      }
#line 1338 "goal_util.m"
    else
#line 1338 "goal_util.m"
      (hlds__goal_util__env_ptr)->hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0__succeeded = MR_TRUE;
#line 1338 "goal_util.m"
  }
#line 1338 "goal_util.m"
}

#line 1336 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__goals_contain_reconstruction_1_p_0(
#line 1336 "goal_util.m"
  MR_Word hlds__goal_util__Goals_2)
#line 1336 "goal_util.m"
{
#line 1336 "goal_util.m"
  {
#line 1336 "goal_util.m"
    struct hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0_s hlds__goal_util__env;

#line 1336 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0__Goals_2 = hlds__goal_util__Goals_2;
#line 1338 "goal_util.m"
    {
#line 1338 "goal_util.m"
      hlds__goal_util__goals_contain_reconstruction_1_p_0_4(&hlds__goal_util__env);
    }
#line 1338 "goal_util.m"
    return (hlds__goal_util__env).hlds__goal_util__goals_contain_reconstruction_1_p_0_env_0__succeeded;
#line 1336 "goal_util.m"
  }
#line 1336 "goal_util.m"
}

#line 1310 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_1(
#line 1310 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1310 "goal_util.m"
{
#line 1310 "goal_util.m"
  {
#line 1310 "goal_util.m"
    struct hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1310 "goal_util.m"
    MR_builtin_longjmp((hlds__goal_util__env_ptr)->hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__commit_0, 1);
#line 1310 "goal_util.m"
  }
#line 1310 "goal_util.m"
}

#line 1311 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_3(
#line 1311 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1311 "goal_util.m"
{
#line 1311 "goal_util.m"
  {
#line 1311 "goal_util.m"
    struct hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1311 "goal_util.m"
    (hlds__goal_util__env_ptr)->hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__Case_8 = ((MR_Word) (hlds__goal_util__env_ptr)->hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__conv0_Case_8);
#line 1311 "goal_util.m"
    {
#line 1311 "goal_util.m"
      hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_2(hlds__goal_util__env_ptr);
#line 1311 "goal_util.m"
      return;
    }
#line 1311 "goal_util.m"
  }
#line 1311 "goal_util.m"
}

#line 1310 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_2(
#line 1310 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1310 "goal_util.m"
{
#line 1310 "goal_util.m"
  {
#line 1310 "goal_util.m"
    struct hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1310 "goal_util.m"
    {
#line 1312 "goal_util.m"
      MR_Word hlds__goal_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__Case_8, (MR_Integer) 0)));
#line 1312 "goal_util.m"
      MR_Word hlds__goal_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__Case_8, (MR_Integer) 1)));
#line 1301 "goal_util.m"
      MR_Word hlds__goal_util__V_44_44;

#line 1312 "goal_util.m"
      (hlds__goal_util__env_ptr)->hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__Case_8, (MR_Integer) 2)));
#line 1301 "goal_util.m"
      (hlds__goal_util__env_ptr)->hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__GoalExpr_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__Goal_11, (MR_Integer) 0)));
#line 1301 "goal_util.m"
      hlds__goal_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__Goal_11, (MR_Integer) 1)));
#line 1302 "goal_util.m"
      {
#line 1302 "goal_util.m"
        (hlds__goal_util__env_ptr)->hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__succeeded = hlds__goal_util__goal_expr_contains_reconstruction_1_p_0((hlds__goal_util__env_ptr)->hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__GoalExpr_43);
      }
#line 1302 "goal_util.m"
      if ((hlds__goal_util__env_ptr)->hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__succeeded)
#line 1302 "goal_util.m"
        {
#line 1302 "goal_util.m"
          hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_1(hlds__goal_util__env_ptr);
#line 1302 "goal_util.m"
          return;
        }
#line 1310 "goal_util.m"
    }
#line 1310 "goal_util.m"
  }
#line 1310 "goal_util.m"
}

#line 1310 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_4(
#line 1310 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1310 "goal_util.m"
{
#line 1310 "goal_util.m"
  {
#line 1310 "goal_util.m"
    struct hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1310 "goal_util.m"
    if (MR_builtin_setjmp((hlds__goal_util__env_ptr)->hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__commit_0) == 0)
#line 1310 "goal_util.m"
      {
#line 1310 "goal_util.m"
        {
#line 1310 "goal_util.m"
          MR_Word hlds__goal_util__Cases_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), (hlds__goal_util__env_ptr)->hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1, (MR_Integer) 3)));
#line 1310 "goal_util.m"
          MR_Word hlds__goal_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), (hlds__goal_util__env_ptr)->hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1, (MR_Integer) 1)));
#line 1310 "goal_util.m"
          MR_Word hlds__goal_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), (hlds__goal_util__env_ptr)->hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1, (MR_Integer) 2)));

#line 1311 "goal_util.m"
          {
#line 1311 "goal_util.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, &(hlds__goal_util__env_ptr)->hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__conv0_Case_8, hlds__goal_util__Cases_7, hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_3, hlds__goal_util__env_ptr);
          }
#line 1310 "goal_util.m"
        }
#line 1310 "goal_util.m"
        (hlds__goal_util__env_ptr)->hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__succeeded = MR_FALSE;
#line 1310 "goal_util.m"
      }
#line 1310 "goal_util.m"
    else
#line 1310 "goal_util.m"
      (hlds__goal_util__env_ptr)->hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__succeeded = MR_TRUE;
#line 1310 "goal_util.m"
  }
#line 1310 "goal_util.m"
}

#line 1304 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__goal_expr_contains_reconstruction_1_p_0(
#line 1304 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1)
#line 1304 "goal_util.m"
{
#line 1304 "goal_util.m"
  {
#line 1304 "goal_util.m"
    struct hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0_s hlds__goal_util__env;

#line 1304 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1 = hlds__goal_util__HeadVar__1_1;
#line 1306 "goal_util.m"
    while (MR_TRUE)
#line 1306 "goal_util.m"
      {
#line 1306 "goal_util.m"
        /* tailcall optimized into a loop */
#line 1306 "goal_util.m"
        if (((MR_tag((MR_Word) (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1316 "goal_util.m"
          {
#line 1316 "goal_util.m"
            MR_Word hlds__goal_util__Goal_20 = (MR_Word) MR_body(((MR_Word) (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1), (MR_Integer) 0);
#line 1316 "goal_util.m"
            MR_Word hlds__goal_util__GoalExpr_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_20, (MR_Integer) 0)));
#line 1301 "goal_util.m"
            MR_Word hlds__goal_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_20, (MR_Integer) 1)));

#line 1302 "goal_util.m"
            /* direct tailcall eliminated */
#line 1302 "goal_util.m"
            {
#line 1302 "goal_util.m"
              MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__GoalExpr_39;

#line 1302 "goal_util.m"
              (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1302 "goal_util.m"
            }
#line 1302 "goal_util.m"
            continue;
#line 1316 "goal_util.m"
          }
#line 1306 "goal_util.m"
        else
#line 1306 "goal_util.m"
          if (((MR_tag((MR_Word) (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1332 "goal_util.m"
            {
#line 1332 "goal_util.m"
              MR_Word hlds__goal_util__Unify_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1, (MR_Integer) 3)));
#line 1332 "goal_util.m"
              MR_Word hlds__goal_util__HowToConstruct_34;
#line 1332 "goal_util.m"
              MR_Word hlds__goal_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1, (MR_Integer) 0)));
#line 1332 "goal_util.m"
              MR_Word hlds__goal_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1, (MR_Integer) 1)));
#line 1332 "goal_util.m"
              MR_Word hlds__goal_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1, (MR_Integer) 2)));
#line 1332 "goal_util.m"
              MR_Word hlds__goal_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1, (MR_Integer) 4)));
#line 1333 "goal_util.m"
              MR_Word hlds__goal_util__V_30_30;
#line 1333 "goal_util.m"
              MR_Word hlds__goal_util__V_31_31;
#line 1333 "goal_util.m"
              MR_Word hlds__goal_util__V_32_32;
#line 1333 "goal_util.m"
              MR_Word hlds__goal_util__V_33_33;
#line 1333 "goal_util.m"
              MR_Word hlds__goal_util__V_35_35;
#line 1333 "goal_util.m"
              MR_Word hlds__goal_util__V_36_36;
#line 1334 "goal_util.m"
              MR_Word hlds__goal_util__V_37_37;

#line 1333 "goal_util.m"
              (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__goal_util__Unify_28)) == (MR_mktag((MR_Integer) 0)));
#line 1333 "goal_util.m"
              if ((hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__succeeded)
#line 1333 "goal_util.m"
                {
#line 1333 "goal_util.m"
                  hlds__goal_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unify_28, (MR_Integer) 0)));
#line 1333 "goal_util.m"
                  hlds__goal_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unify_28, (MR_Integer) 1)));
#line 1333 "goal_util.m"
                  hlds__goal_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unify_28, (MR_Integer) 2)));
#line 1333 "goal_util.m"
                  hlds__goal_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unify_28, (MR_Integer) 3)));
#line 1333 "goal_util.m"
                  hlds__goal_util__HowToConstruct_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unify_28, (MR_Integer) 4)));
#line 1333 "goal_util.m"
                  hlds__goal_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unify_28, (MR_Integer) 5)));
#line 1333 "goal_util.m"
                  hlds__goal_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unify_28, (MR_Integer) 6)));
#line 1334 "goal_util.m"
                  (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HowToConstruct_34)) == (MR_mktag((MR_Integer) 1)));
#line 1334 "goal_util.m"
                  if ((hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__succeeded)
#line 1334 "goal_util.m"
                    hlds__goal_util__V_37_37 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__HowToConstruct_34), (MR_Integer) 1);
#line 1333 "goal_util.m"
                }
#line 1332 "goal_util.m"
            }
#line 1306 "goal_util.m"
          else
#line 1306 "goal_util.m"
            if (((((MR_tag((MR_Word) (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1306 "goal_util.m"
              {
#line 1306 "goal_util.m"
                MR_Word hlds__goal_util__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1, (MR_Integer) 2)));
#line 1306 "goal_util.m"
                MR_Word hlds__goal_util___ConjType_2 = ((MR_Word) (MR_hl_field(MR_mktag(3), (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1, (MR_Integer) 1)));

#line 1307 "goal_util.m"
                {
#line 1307 "goal_util.m"
                  return (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__succeeded = hlds__goal_util__goals_contain_reconstruction_1_p_0(hlds__goal_util__Goals_3);
                }
#line 1306 "goal_util.m"
              }
#line 1306 "goal_util.m"
            else
#line 1306 "goal_util.m"
              if (((((MR_tag((MR_Word) (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1308 "goal_util.m"
                {
#line 1308 "goal_util.m"
                  MR_Word hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1, (MR_Integer) 1)));

#line 1309 "goal_util.m"
                  {
#line 1309 "goal_util.m"
                    return (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__succeeded = hlds__goal_util__goals_contain_reconstruction_1_p_0(hlds__goal_util__Goals_4);
                  }
#line 1308 "goal_util.m"
                }
#line 1306 "goal_util.m"
              else
#line 1306 "goal_util.m"
                if (((((MR_tag((MR_Word) (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1314 "goal_util.m"
                  {
#line 1314 "goal_util.m"
                    MR_Word hlds__goal_util__Cond_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1, (MR_Integer) 2)));
#line 1314 "goal_util.m"
                    MR_Word hlds__goal_util__Then_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1, (MR_Integer) 3)));
#line 1314 "goal_util.m"
                    MR_Word hlds__goal_util__Else_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1, (MR_Integer) 4)));
#line 1314 "goal_util.m"
                    MR_Word hlds__goal_util__V_16_16;
#line 1314 "goal_util.m"
                    MR_Word hlds__goal_util__V_17_17;
#line 1314 "goal_util.m"
                    MR_Word hlds__goal_util__V_18_18;
#line 1314 "goal_util.m"
                    MR_Word hlds__goal_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1, (MR_Integer) 1)));

#line 1315 "goal_util.m"
                    {
#line 1315 "goal_util.m"
                      hlds__goal_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1315 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__V_18_18, 0) = ((MR_Box) (hlds__goal_util__Else_15));
#line 1315 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1315 "goal_util.m"
                    }
#line 1315 "goal_util.m"
                    {
#line 1315 "goal_util.m"
                      hlds__goal_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1315 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__V_17_17, 0) = ((MR_Box) (hlds__goal_util__Then_14));
#line 1315 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__V_17_17, 1) = ((MR_Box) (hlds__goal_util__V_18_18));
#line 1315 "goal_util.m"
                    }
#line 1315 "goal_util.m"
                    {
#line 1315 "goal_util.m"
                      hlds__goal_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1315 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__V_16_16, 0) = ((MR_Box) (hlds__goal_util__Cond_13));
#line 1315 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__V_16_16, 1) = ((MR_Box) (hlds__goal_util__V_17_17));
#line 1315 "goal_util.m"
                    }
#line 1315 "goal_util.m"
                    {
#line 1315 "goal_util.m"
                      return (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__succeeded = hlds__goal_util__goals_contain_reconstruction_1_p_0(hlds__goal_util__V_16_16);
                    }
#line 1314 "goal_util.m"
                  }
#line 1306 "goal_util.m"
                else
#line 1306 "goal_util.m"
                  if (((((MR_tag((MR_Word) (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1318 "goal_util.m"
                    {
#line 1318 "goal_util.m"
                      MR_Word hlds__goal_util__Reason_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1, (MR_Integer) 1)));
#line 1318 "goal_util.m"
                      MR_Word hlds__goal_util__Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1, (MR_Integer) 2)));
#line 1320 "goal_util.m"
                      MR_Word hlds__goal_util__FGT_24;
#line 1320 "goal_util.m"
                      MR_Word hlds__goal_util__V_23_23;

#line 1320 "goal_util.m"
                      (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_21, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1320 "goal_util.m"
                      if ((hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__succeeded)
#line 1320 "goal_util.m"
                        {
#line 1320 "goal_util.m"
                          hlds__goal_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_21, (MR_Integer) 1)));
#line 1320 "goal_util.m"
                          hlds__goal_util__FGT_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_21, (MR_Integer) 2)));
#line 1322 "goal_util.m"
                          if ((hlds__goal_util__FGT_24 == (MR_Integer) 1))
#line 1321 "goal_util.m"
                            (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__succeeded = MR_TRUE;
#line 1322 "goal_util.m"
                          else
#line 1322 "goal_util.m"
                            if ((hlds__goal_util__FGT_24 == (MR_Integer) 2))
#line 1322 "goal_util.m"
                              (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__succeeded = MR_TRUE;
#line 1322 "goal_util.m"
                            else
#line 1322 "goal_util.m"
                              (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__succeeded = MR_FALSE;
#line 1320 "goal_util.m"
                        }
#line 1329 "goal_util.m"
                      if ((hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__succeeded)
#line 1328 "goal_util.m"
                        (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__succeeded = MR_FALSE;
#line 1329 "goal_util.m"
                      else
#line 1301 "goal_util.m"
                        {
#line 1301 "goal_util.m"
                          MR_Word hlds__goal_util__GoalExpr_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_22, (MR_Integer) 0)));
#line 1301 "goal_util.m"
                          MR_Word hlds__goal_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_22, (MR_Integer) 1)));

#line 1302 "goal_util.m"
                          /* direct tailcall eliminated */
#line 1302 "goal_util.m"
                          {
#line 1302 "goal_util.m"
                            MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__GoalExpr_41;

#line 1302 "goal_util.m"
                            (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1302 "goal_util.m"
                          }
#line 1302 "goal_util.m"
                          continue;
#line 1301 "goal_util.m"
                        }
#line 1318 "goal_util.m"
                    }
#line 1306 "goal_util.m"
                  else
#line 1306 "goal_util.m"
                    if (((((MR_tag((MR_Word) (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1310 "goal_util.m"
                      {
#line 1310 "goal_util.m"
                        {
#line 1310 "goal_util.m"
                          hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_4(&hlds__goal_util__env);
                        }
#line 1310 "goal_util.m"
                      }
#line 1306 "goal_util.m"
                    else
#line 1306 "goal_util.m"
                      (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__succeeded = MR_FALSE;
#line 1306 "goal_util.m"
        return (hlds__goal_util__env).hlds__goal_util__goal_expr_contains_reconstruction_1_p_0_env_0__succeeded;
#line 1306 "goal_util.m"
        break;
#line 1306 "goal_util.m"
      }
#line 1304 "goal_util.m"
  }
#line 1304 "goal_util.m"
}

#line 1290 "goal_util.m"
static void MR_CALL 
hlds__goal_util__case_list_calls_proc_in_list_4_p_0(
#line 1290 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1290 "goal_util.m"
  MR_Word hlds__goal_util__PredProcIds_2,
#line 1290 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0_3,
#line 1290 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_CalledSet_4)
#line 1290 "goal_util.m"
{
#line 1293 "goal_util.m"
  while (MR_TRUE)
#line 1293 "goal_util.m"
    {
#line 1293 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1293 "goal_util.m"
      {
#line 1293 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;

#line 1293 "goal_util.m"
        if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1293 "goal_util.m"
          *hlds__goal_util__STATE_VARIABLE_CalledSet_4 = hlds__goal_util__STATE_VARIABLE_CalledSet_0_3;
#line 1293 "goal_util.m"
        else
#line 1294 "goal_util.m"
          {
#line 1294 "goal_util.m"
            MR_Word hlds__goal_util__Case_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1294 "goal_util.m"
            MR_Word hlds__goal_util__Cases_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1294 "goal_util.m"
            MR_Word hlds__goal_util__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_9, (MR_Integer) 2)));
#line 1294 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_18_18;
#line 1295 "goal_util.m"
            MR_Word hlds__goal_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_9, (MR_Integer) 0)));
#line 1295 "goal_util.m"
            MR_Word hlds__goal_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_9, (MR_Integer) 1)));

#line 1296 "goal_util.m"
            {
#line 1296 "goal_util.m"
              hlds__goal_util__goal_calls_proc_in_list_2_4_p_0(hlds__goal_util__Goal_15, hlds__goal_util__PredProcIds_2, hlds__goal_util__STATE_VARIABLE_CalledSet_0_3, &hlds__goal_util__STATE_VARIABLE_CalledSet_18_18);
            }
#line 1297 "goal_util.m"
            /* direct tailcall eliminated */
#line 1297 "goal_util.m"
            {
#line 1297 "goal_util.m"
              MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Cases_10;
#line 1297 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0__tmp_copy_3 = hlds__goal_util__STATE_VARIABLE_CalledSet_18_18;

#line 1297 "goal_util.m"
              hlds__goal_util__STATE_VARIABLE_CalledSet_0_3 = hlds__goal_util__STATE_VARIABLE_CalledSet_0__tmp_copy_3;
#line 1297 "goal_util.m"
              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1297 "goal_util.m"
            }
#line 1297 "goal_util.m"
            continue;
#line 1294 "goal_util.m"
          }
#line 1293 "goal_util.m"
      }
#line 1293 "goal_util.m"
      break;
#line 1293 "goal_util.m"
    }
#line 1290 "goal_util.m"
}

#line 1281 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_list_calls_proc_in_list_2_4_p_0(
#line 1281 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1281 "goal_util.m"
  MR_Word hlds__goal_util__PredProcIds_2,
#line 1281 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0_3,
#line 1281 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_CalledSet_4)
#line 1281 "goal_util.m"
{
#line 1285 "goal_util.m"
  while (MR_TRUE)
#line 1285 "goal_util.m"
    {
#line 1285 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1285 "goal_util.m"
      {
#line 1285 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;

#line 1285 "goal_util.m"
        if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1285 "goal_util.m"
          *hlds__goal_util__STATE_VARIABLE_CalledSet_4 = hlds__goal_util__STATE_VARIABLE_CalledSet_0_3;
#line 1285 "goal_util.m"
        else
#line 1286 "goal_util.m"
          {
#line 1286 "goal_util.m"
            MR_Word hlds__goal_util__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1286 "goal_util.m"
            MR_Word hlds__goal_util__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1286 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_15_15;

#line 1287 "goal_util.m"
            {
#line 1287 "goal_util.m"
              hlds__goal_util__goal_calls_proc_in_list_2_4_p_0(hlds__goal_util__Goal_9, hlds__goal_util__PredProcIds_2, hlds__goal_util__STATE_VARIABLE_CalledSet_0_3, &hlds__goal_util__STATE_VARIABLE_CalledSet_15_15);
            }
#line 1288 "goal_util.m"
            /* direct tailcall eliminated */
#line 1288 "goal_util.m"
            {
#line 1288 "goal_util.m"
              MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Goals_10;
#line 1288 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0__tmp_copy_3 = hlds__goal_util__STATE_VARIABLE_CalledSet_15_15;

#line 1288 "goal_util.m"
              hlds__goal_util__STATE_VARIABLE_CalledSet_0_3 = hlds__goal_util__STATE_VARIABLE_CalledSet_0__tmp_copy_3;
#line 1288 "goal_util.m"
              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1288 "goal_util.m"
            }
#line 1288 "goal_util.m"
            continue;
#line 1286 "goal_util.m"
          }
#line 1285 "goal_util.m"
      }
#line 1285 "goal_util.m"
      break;
#line 1285 "goal_util.m"
    }
#line 1281 "goal_util.m"
}

#line 1217 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_calls_proc_in_list_2_4_p_0(
#line 1217 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1217 "goal_util.m"
  MR_Word hlds__goal_util__PredProcIds_7,
#line 1217 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0_58,
#line 1217 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_CalledSet_59)
#line 1217 "goal_util.m"
{
#line 1221 "goal_util.m"
  while (MR_TRUE)
#line 1221 "goal_util.m"
    {
#line 1221 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1221 "goal_util.m"
      {
#line 1221 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;
#line 1221 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1221 "goal_util.m"
        MR_Word hlds__goal_util___GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1224 "goal_util.m"
        if (((MR_tag((MR_Word) hlds__goal_util__GoalExpr_5)) == (MR_mktag((MR_Integer) 0))))
#line 1250 "goal_util.m"
          {
#line 1250 "goal_util.m"
            MR_Word hlds__goal_util__Goal_41 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_5), (MR_Integer) 0);

#line 1251 "goal_util.m"
            /* direct tailcall eliminated */
#line 1251 "goal_util.m"
            {
#line 1251 "goal_util.m"
              MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Goal_41;

#line 1251 "goal_util.m"
              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1251 "goal_util.m"
            }
#line 1251 "goal_util.m"
            continue;
#line 1250 "goal_util.m"
          }
#line 1224 "goal_util.m"
        else
#line 1224 "goal_util.m"
          if (((MR_tag((MR_Word) hlds__goal_util__GoalExpr_5)) == (MR_mktag((MR_Integer) 2))))
#line 1225 "goal_util.m"
            {
#line 1225 "goal_util.m"
              MR_Word hlds__goal_util__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_5, (MR_Integer) 0)));
#line 1225 "goal_util.m"
              MR_Integer hlds__goal_util__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));
#line 1225 "goal_util.m"
              MR_Word hlds__goal_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));
#line 1225 "goal_util.m"
              MR_Word hlds__goal_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_5, (MR_Integer) 3)));
#line 1225 "goal_util.m"
              MR_Word hlds__goal_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_5, (MR_Integer) 4)));
#line 1225 "goal_util.m"
              MR_Word hlds__goal_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_5, (MR_Integer) 5)));
#line 1228 "goal_util.m"
              MR_Word hlds__goal_util__V_74_74;

#line 1226 "goal_util.m"
              {
#line 1226 "goal_util.m"
                hlds__goal_util__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1226 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__V_74_74, 0) = ((MR_Box) (hlds__goal_util__PredId_14));
#line 1226 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__V_74_74, 1) = ((MR_Box) (hlds__goal_util__ProcId_15));
#line 1226 "goal_util.m"
              }
#line 1226 "goal_util.m"
              {
#line 1226 "goal_util.m"
                hlds__goal_util__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (hlds__goal_util__V_74_74)), hlds__goal_util__PredProcIds_7);
              }
#line 1228 "goal_util.m"
              if (hlds__goal_util__succeeded)
#line 1227 "goal_util.m"
                {
#line 1227 "goal_util.m"
                  {
#line 1227 "goal_util.m"
                    mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (hlds__goal_util__V_74_74)), hlds__goal_util__STATE_VARIABLE_CalledSet_0_58, hlds__goal_util__STATE_VARIABLE_CalledSet_59);
#line 1227 "goal_util.m"
                    return;
                  }
#line 1227 "goal_util.m"
                }
#line 1228 "goal_util.m"
              else
#line 1227 "goal_util.m"
                *hlds__goal_util__STATE_VARIABLE_CalledSet_59 = hlds__goal_util__STATE_VARIABLE_CalledSet_0_58;
#line 1225 "goal_util.m"
            }
#line 1224 "goal_util.m"
          else
#line 1224 "goal_util.m"
            if (((MR_tag((MR_Word) hlds__goal_util__GoalExpr_5)) == (MR_mktag((MR_Integer) 1))))
#line 1223 "goal_util.m"
              *hlds__goal_util__STATE_VARIABLE_CalledSet_59 = hlds__goal_util__STATE_VARIABLE_CalledSet_0_58;
#line 1224 "goal_util.m"
            else
#line 1224 "goal_util.m"
              if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1234 "goal_util.m"
                *hlds__goal_util__STATE_VARIABLE_CalledSet_59 = hlds__goal_util__STATE_VARIABLE_CalledSet_0_58;
#line 1224 "goal_util.m"
              else
#line 1224 "goal_util.m"
                if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1236 "goal_util.m"
                  {
#line 1236 "goal_util.m"
                    MR_Word hlds__goal_util__Goals_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));
#line 1236 "goal_util.m"
                    MR_Word hlds__goal_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));

#line 1237 "goal_util.m"
                    {
#line 1237 "goal_util.m"
                      hlds__goal_util__goal_list_calls_proc_in_list_2_4_p_0(hlds__goal_util__Goals_33, hlds__goal_util__PredProcIds_7, hlds__goal_util__STATE_VARIABLE_CalledSet_0_58, hlds__goal_util__STATE_VARIABLE_CalledSet_59);
#line 1237 "goal_util.m"
                      return;
                    }
#line 1236 "goal_util.m"
                  }
#line 1224 "goal_util.m"
                else
#line 1224 "goal_util.m"
                  if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1239 "goal_util.m"
                    {
#line 1239 "goal_util.m"
                      MR_Word hlds__goal_util__Goals_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));

#line 1240 "goal_util.m"
                      {
#line 1240 "goal_util.m"
                        hlds__goal_util__goal_list_calls_proc_in_list_2_4_p_0(hlds__goal_util__Goals_77, hlds__goal_util__PredProcIds_7, hlds__goal_util__STATE_VARIABLE_CalledSet_0_58, hlds__goal_util__STATE_VARIABLE_CalledSet_59);
#line 1240 "goal_util.m"
                        return;
                      }
#line 1239 "goal_util.m"
                    }
#line 1224 "goal_util.m"
                  else
#line 1224 "goal_util.m"
                    if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1232 "goal_util.m"
                      *hlds__goal_util__STATE_VARIABLE_CalledSet_59 = hlds__goal_util__STATE_VARIABLE_CalledSet_0_58;
#line 1224 "goal_util.m"
                    else
#line 1224 "goal_util.m"
                      if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1245 "goal_util.m"
                        {
#line 1245 "goal_util.m"
                          MR_Word hlds__goal_util__Cond_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));
#line 1245 "goal_util.m"
                          MR_Word hlds__goal_util__Then_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 3)));
#line 1245 "goal_util.m"
                          MR_Word hlds__goal_util__Else_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 4)));
#line 1245 "goal_util.m"
                          MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_68_68;
#line 1245 "goal_util.m"
                          MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_69_69;
#line 1245 "goal_util.m"
                          MR_Word hlds__goal_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));

#line 1246 "goal_util.m"
                          {
#line 1246 "goal_util.m"
                            hlds__goal_util__goal_calls_proc_in_list_2_4_p_0(hlds__goal_util__Cond_38, hlds__goal_util__PredProcIds_7, hlds__goal_util__STATE_VARIABLE_CalledSet_0_58, &hlds__goal_util__STATE_VARIABLE_CalledSet_68_68);
                          }
#line 1247 "goal_util.m"
                          {
#line 1247 "goal_util.m"
                            hlds__goal_util__goal_calls_proc_in_list_2_4_p_0(hlds__goal_util__Then_39, hlds__goal_util__PredProcIds_7, hlds__goal_util__STATE_VARIABLE_CalledSet_68_68, &hlds__goal_util__STATE_VARIABLE_CalledSet_69_69);
                          }
#line 1248 "goal_util.m"
                          /* direct tailcall eliminated */
#line 1248 "goal_util.m"
                          {
#line 1248 "goal_util.m"
                            MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Else_40;
#line 1248 "goal_util.m"
                            MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0__tmp_copy_58 = hlds__goal_util__STATE_VARIABLE_CalledSet_69_69;

#line 1248 "goal_util.m"
                            hlds__goal_util__STATE_VARIABLE_CalledSet_0_58 = hlds__goal_util__STATE_VARIABLE_CalledSet_0__tmp_copy_58;
#line 1248 "goal_util.m"
                            hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1248 "goal_util.m"
                          }
#line 1248 "goal_util.m"
                          continue;
#line 1245 "goal_util.m"
                        }
#line 1224 "goal_util.m"
                      else
#line 1224 "goal_util.m"
                        if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1253 "goal_util.m"
                          {
#line 1253 "goal_util.m"
                            MR_Word hlds__goal_util__Reason_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));
#line 1253 "goal_util.m"
                            MR_Word hlds__goal_util__Goal_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));
#line 1255 "goal_util.m"
                            MR_Word hlds__goal_util__FGT_44;
#line 1255 "goal_util.m"
                            MR_Word hlds__goal_util__V_43_43;

#line 1255 "goal_util.m"
                            hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_42, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1255 "goal_util.m"
                            if (hlds__goal_util__succeeded)
#line 1255 "goal_util.m"
                              {
#line 1255 "goal_util.m"
                                hlds__goal_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_42, (MR_Integer) 1)));
#line 1255 "goal_util.m"
                                hlds__goal_util__FGT_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_42, (MR_Integer) 2)));
#line 1257 "goal_util.m"
                                if ((hlds__goal_util__FGT_44 == (MR_Integer) 1))
#line 1256 "goal_util.m"
                                  hlds__goal_util__succeeded = MR_TRUE;
#line 1257 "goal_util.m"
                                else
#line 1257 "goal_util.m"
                                  if ((hlds__goal_util__FGT_44 == (MR_Integer) 2))
#line 1257 "goal_util.m"
                                    hlds__goal_util__succeeded = MR_TRUE;
#line 1257 "goal_util.m"
                                  else
#line 1257 "goal_util.m"
                                    hlds__goal_util__succeeded = MR_FALSE;
#line 1255 "goal_util.m"
                              }
#line 1262 "goal_util.m"
                            if (hlds__goal_util__succeeded)
#line 1257 "goal_util.m"
                              *hlds__goal_util__STATE_VARIABLE_CalledSet_59 = hlds__goal_util__STATE_VARIABLE_CalledSet_0_58;
#line 1262 "goal_util.m"
                            else
#line 1263 "goal_util.m"
                              {
#line 1263 "goal_util.m"
                                /* direct tailcall eliminated */
#line 1263 "goal_util.m"
                                {
#line 1263 "goal_util.m"
                                  MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Goal_78;

#line 1263 "goal_util.m"
                                  hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1263 "goal_util.m"
                                }
#line 1263 "goal_util.m"
                                continue;
#line 1263 "goal_util.m"
                              }
#line 1253 "goal_util.m"
                          }
#line 1224 "goal_util.m"
                        else
#line 1224 "goal_util.m"
                          if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1266 "goal_util.m"
                            {
#line 1266 "goal_util.m"
                              MR_Word hlds__goal_util__ShortHand_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));

#line 1272 "goal_util.m"
                              if (((MR_tag((MR_Word) hlds__goal_util__ShortHand_45)) == (MR_mktag((MR_Integer) 1))))
#line 1268 "goal_util.m"
                                {
#line 1268 "goal_util.m"
                                  MR_Word hlds__goal_util__MainGoal_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_45, (MR_Integer) 4)));
#line 1268 "goal_util.m"
                                  MR_Word hlds__goal_util__OrElseGoals_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_45, (MR_Integer) 5)));
#line 1268 "goal_util.m"
                                  MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_64_64;
#line 1268 "goal_util.m"
                                  MR_Word hlds__goal_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_45, (MR_Integer) 0)));
#line 1268 "goal_util.m"
                                  MR_Word hlds__goal_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_45, (MR_Integer) 1)));
#line 1268 "goal_util.m"
                                  MR_Word hlds__goal_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_45, (MR_Integer) 2)));
#line 1268 "goal_util.m"
                                  MR_Word hlds__goal_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_45, (MR_Integer) 3)));
#line 1268 "goal_util.m"
                                  MR_Word hlds__goal_util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_45, (MR_Integer) 6)));

#line 1269 "goal_util.m"
                                  {
#line 1269 "goal_util.m"
                                    hlds__goal_util__goal_calls_proc_in_list_2_4_p_0(hlds__goal_util__MainGoal_50, hlds__goal_util__PredProcIds_7, hlds__goal_util__STATE_VARIABLE_CalledSet_0_58, &hlds__goal_util__STATE_VARIABLE_CalledSet_64_64);
                                  }
#line 1270 "goal_util.m"
                                  {
#line 1270 "goal_util.m"
                                    hlds__goal_util__goal_list_calls_proc_in_list_2_4_p_0(hlds__goal_util__OrElseGoals_51, hlds__goal_util__PredProcIds_7, hlds__goal_util__STATE_VARIABLE_CalledSet_64_64, hlds__goal_util__STATE_VARIABLE_CalledSet_59);
#line 1270 "goal_util.m"
                                    return;
                                  }
#line 1268 "goal_util.m"
                                }
#line 1272 "goal_util.m"
                              else
#line 1272 "goal_util.m"
                                if (((MR_tag((MR_Word) hlds__goal_util__ShortHand_45)) == (MR_mktag((MR_Integer) 0))))
#line 1276 "goal_util.m"
                                  {
#line 1277 "goal_util.m"
                                    {
#line 1277 "goal_util.m"
                                      mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "predicate \140hlds.goal_util.goal_calls_proc_in_list_2\'/4", (MR_String) "bi_implication");
#line 1277 "goal_util.m"
                                      return;
                                    }
#line 1276 "goal_util.m"
                                  }
#line 1272 "goal_util.m"
                                else
#line 1273 "goal_util.m"
                                  {
#line 1273 "goal_util.m"
                                    MR_Word hlds__goal_util__SubGoal_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_45, (MR_Integer) 2)));
#line 1273 "goal_util.m"
                                    MR_Word hlds__goal_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_45, (MR_Integer) 0)));
#line 1273 "goal_util.m"
                                    MR_Word hlds__goal_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_45, (MR_Integer) 1)));

#line 1274 "goal_util.m"
                                    /* direct tailcall eliminated */
#line 1274 "goal_util.m"
                                    {
#line 1274 "goal_util.m"
                                      MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__SubGoal_55;

#line 1274 "goal_util.m"
                                      hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1274 "goal_util.m"
                                    }
#line 1274 "goal_util.m"
                                    continue;
#line 1273 "goal_util.m"
                                  }
#line 1266 "goal_util.m"
                            }
#line 1224 "goal_util.m"
                          else
#line 1242 "goal_util.m"
                            {
#line 1242 "goal_util.m"
                              MR_Word hlds__goal_util__Cases_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 3)));
#line 1242 "goal_util.m"
                              MR_Word hlds__goal_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));
#line 1242 "goal_util.m"
                              MR_Word hlds__goal_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));

#line 1243 "goal_util.m"
                              {
#line 1243 "goal_util.m"
                                hlds__goal_util__case_list_calls_proc_in_list_4_p_0(hlds__goal_util__Cases_36, hlds__goal_util__PredProcIds_7, hlds__goal_util__STATE_VARIABLE_CalledSet_0_58, hlds__goal_util__STATE_VARIABLE_CalledSet_59);
#line 1243 "goal_util.m"
                                return;
                              }
#line 1242 "goal_util.m"
                            }
#line 1221 "goal_util.m"
      }
#line 1221 "goal_util.m"
      break;
#line 1221 "goal_util.m"
    }
#line 1217 "goal_util.m"
}

#line 1175 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_expr_calls_pred_id_2_p_1(
#line 1175 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1175 "goal_util.m"
  MR_Word * hlds__goal_util__PredId_2,
#line 1175 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1175 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 1175 "goal_util.m"
{
#line 1177 "goal_util.m"
  while (MR_TRUE)
#line 1177 "goal_util.m"
    {
#line 1177 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1177 "goal_util.m"
      {
#line 1177 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;

#line 1177 "goal_util.m"
        if (((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1191 "goal_util.m"
          {
#line 1191 "goal_util.m"
            MR_Word hlds__goal_util__Goal_17 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__HeadVar__1_1), (MR_Integer) 0);
#line 1191 "goal_util.m"
            MR_Word hlds__goal_util__GoalExpr_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_17, (MR_Integer) 0)));
#line 1148 "goal_util.m"
            MR_Word hlds__goal_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_17, (MR_Integer) 1)));

#line 1149 "goal_util.m"
            /* direct tailcall eliminated */
#line 1149 "goal_util.m"
            {
#line 1149 "goal_util.m"
              MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__GoalExpr_40;

#line 1149 "goal_util.m"
              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1149 "goal_util.m"
            }
#line 1149 "goal_util.m"
            continue;
#line 1191 "goal_util.m"
          }
#line 1177 "goal_util.m"
        else
#line 1177 "goal_util.m"
          if (((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1205 "goal_util.m"
            {
#line 1205 "goal_util.m"
              MR_Integer hlds__goal_util__V_25_25;
#line 1205 "goal_util.m"
              MR_Word hlds__goal_util__V_26_26;
#line 1205 "goal_util.m"
              MR_Word hlds__goal_util__V_27_27;
#line 1205 "goal_util.m"
              MR_Word hlds__goal_util__V_28_28;
#line 1205 "goal_util.m"
              MR_Word hlds__goal_util__V_29_29;

#line 1205 "goal_util.m"
              *hlds__goal_util__PredId_2 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1205 "goal_util.m"
              hlds__goal_util__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1205 "goal_util.m"
              hlds__goal_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1205 "goal_util.m"
              hlds__goal_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1205 "goal_util.m"
              hlds__goal_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 4)));
#line 1205 "goal_util.m"
              hlds__goal_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 5)));
#line 1205 "goal_util.m"
              {
#line 1205 "goal_util.m"
                hlds__goal_util__cont(hlds__goal_util__cont_env_ptr);
#line 1205 "goal_util.m"
                return;
              }
#line 1205 "goal_util.m"
            }
#line 1177 "goal_util.m"
          else
#line 1177 "goal_util.m"
            if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1177 "goal_util.m"
              {
#line 1177 "goal_util.m"
                MR_Word hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1177 "goal_util.m"
                MR_Word hlds__goal_util___ConjType_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1178 "goal_util.m"
                {
#line 1178 "goal_util.m"
                  hlds__goal_util__goals_calls_pred_id_2_p_1(hlds__goal_util__Goals_4, hlds__goal_util__PredId_2, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
#line 1178 "goal_util.m"
                  return;
                }
#line 1177 "goal_util.m"
              }
#line 1177 "goal_util.m"
            else
#line 1177 "goal_util.m"
              if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1179 "goal_util.m"
                {
#line 1179 "goal_util.m"
                  MR_Word hlds__goal_util__Goals_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1180 "goal_util.m"
                  {
#line 1180 "goal_util.m"
                    hlds__goal_util__goals_calls_pred_id_2_p_1(hlds__goal_util__Goals_6, hlds__goal_util__PredId_2, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
#line 1180 "goal_util.m"
                    return;
                  }
#line 1179 "goal_util.m"
                }
#line 1177 "goal_util.m"
              else
#line 1177 "goal_util.m"
                if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1183 "goal_util.m"
                  {
#line 1183 "goal_util.m"
                    MR_Word hlds__goal_util__Cond_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1183 "goal_util.m"
                    MR_Word hlds__goal_util__Then_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1183 "goal_util.m"
                    MR_Word hlds__goal_util__Else_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 4)));
#line 1183 "goal_util.m"
                    MR_Word hlds__goal_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1148 "goal_util.m"
                    {
#line 1148 "goal_util.m"
                      MR_Word hlds__goal_util__GoalExpr_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_13, (MR_Integer) 0)));
#line 1148 "goal_util.m"
                      MR_Word hlds__goal_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_13, (MR_Integer) 1)));

#line 1149 "goal_util.m"
                      {
#line 1149 "goal_util.m"
                        hlds__goal_util__goal_expr_calls_pred_id_2_p_1(hlds__goal_util__GoalExpr_31, hlds__goal_util__PredId_2, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                      }
#line 1148 "goal_util.m"
                    }
#line 1148 "goal_util.m"
                    {
#line 1148 "goal_util.m"
                      MR_Word hlds__goal_util__GoalExpr_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Then_14, (MR_Integer) 0)));
#line 1148 "goal_util.m"
                      MR_Word hlds__goal_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Then_14, (MR_Integer) 1)));

#line 1149 "goal_util.m"
                      {
#line 1149 "goal_util.m"
                        hlds__goal_util__goal_expr_calls_pred_id_2_p_1(hlds__goal_util__GoalExpr_34, hlds__goal_util__PredId_2, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                      }
#line 1148 "goal_util.m"
                    }
#line 1148 "goal_util.m"
                    {
#line 1148 "goal_util.m"
                      MR_Word hlds__goal_util__GoalExpr_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Else_15, (MR_Integer) 0)));
#line 1148 "goal_util.m"
                      MR_Word hlds__goal_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Else_15, (MR_Integer) 1)));

#line 1149 "goal_util.m"
                      /* direct tailcall eliminated */
#line 1149 "goal_util.m"
                      {
#line 1149 "goal_util.m"
                        MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__GoalExpr_37;

#line 1149 "goal_util.m"
                        hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1149 "goal_util.m"
                      }
#line 1149 "goal_util.m"
                      continue;
#line 1148 "goal_util.m"
                    }
#line 1183 "goal_util.m"
                  }
#line 1177 "goal_util.m"
                else
#line 1177 "goal_util.m"
                  if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1193 "goal_util.m"
                    {
#line 1193 "goal_util.m"
                      MR_Word hlds__goal_util__Reason_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1193 "goal_util.m"
                      MR_Word hlds__goal_util__Goal_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1195 "goal_util.m"
                      MR_Word hlds__goal_util__FGT_23;
#line 1195 "goal_util.m"
                      MR_Word hlds__goal_util__V_22_22;

#line 1195 "goal_util.m"
                      hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1195 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 1195 "goal_util.m"
                        {
#line 1195 "goal_util.m"
                          hlds__goal_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 1)));
#line 1195 "goal_util.m"
                          hlds__goal_util__FGT_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 2)));
#line 1197 "goal_util.m"
                          if ((hlds__goal_util__FGT_23 == (MR_Integer) 1))
#line 1196 "goal_util.m"
                            hlds__goal_util__succeeded = MR_TRUE;
#line 1197 "goal_util.m"
                          else
#line 1197 "goal_util.m"
                            if ((hlds__goal_util__FGT_23 == (MR_Integer) 2))
#line 1197 "goal_util.m"
                              hlds__goal_util__succeeded = MR_TRUE;
#line 1197 "goal_util.m"
                            else
#line 1197 "goal_util.m"
                              hlds__goal_util__succeeded = MR_FALSE;
#line 1195 "goal_util.m"
                        }
#line 1202 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 1201 "goal_util.m"
                        {
#line 1201 "goal_util.m"
                          hlds__goal_util__succeeded = MR_FALSE;
#line 1201 "goal_util.m"
                          if (hlds__goal_util__succeeded)
#line 1201 "goal_util.m"
                            {
#line 1201 "goal_util.m"
                              hlds__goal_util__cont(hlds__goal_util__cont_env_ptr);
#line 1201 "goal_util.m"
                              return;
                            }
#line 1201 "goal_util.m"
                        }
#line 1202 "goal_util.m"
                      else
#line 1148 "goal_util.m"
                        {
#line 1148 "goal_util.m"
                          MR_Word hlds__goal_util__GoalExpr_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_20, (MR_Integer) 0)));
#line 1148 "goal_util.m"
                          MR_Word hlds__goal_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_20, (MR_Integer) 1)));

#line 1149 "goal_util.m"
                          /* direct tailcall eliminated */
#line 1149 "goal_util.m"
                          {
#line 1149 "goal_util.m"
                            MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__GoalExpr_43;

#line 1149 "goal_util.m"
                            hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1149 "goal_util.m"
                          }
#line 1149 "goal_util.m"
                          continue;
#line 1148 "goal_util.m"
                        }
#line 1193 "goal_util.m"
                    }
#line 1177 "goal_util.m"
                  else
#line 1177 "goal_util.m"
                    if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1181 "goal_util.m"
                      {
#line 1181 "goal_util.m"
                        MR_Word hlds__goal_util__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1181 "goal_util.m"
                        MR_Word hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1181 "goal_util.m"
                        MR_Word hlds__goal_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));

#line 1182 "goal_util.m"
                        {
#line 1182 "goal_util.m"
                          hlds__goal_util__cases_calls_pred_id_2_p_1(hlds__goal_util__Goals_10, hlds__goal_util__PredId_2, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
#line 1182 "goal_util.m"
                          return;
                        }
#line 1181 "goal_util.m"
                      }
#line 1177 "goal_util.m"
                    else
#line 1177 "goal_util.m"
                      {
#line 1177 "goal_util.m"
                      }
#line 1177 "goal_util.m"
      }
#line 1177 "goal_util.m"
      break;
#line 1177 "goal_util.m"
    }
#line 1175 "goal_util.m"
}

#line 1174 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__goal_expr_calls_pred_id_2_p_0(
#line 1174 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1174 "goal_util.m"
  MR_Word hlds__goal_util__PredId_2)
#line 1174 "goal_util.m"
{
#line 1177 "goal_util.m"
  while (MR_TRUE)
#line 1177 "goal_util.m"
    {
#line 1177 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1177 "goal_util.m"
      {
#line 1177 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;

#line 1177 "goal_util.m"
        if (((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1191 "goal_util.m"
          {
#line 1191 "goal_util.m"
            MR_Word hlds__goal_util__Goal_17 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__HeadVar__1_1), (MR_Integer) 0);
#line 1191 "goal_util.m"
            MR_Word hlds__goal_util__GoalExpr_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_17, (MR_Integer) 0)));
#line 1148 "goal_util.m"
            MR_Word hlds__goal_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_17, (MR_Integer) 1)));

#line 1149 "goal_util.m"
            /* direct tailcall eliminated */
#line 1149 "goal_util.m"
            {
#line 1149 "goal_util.m"
              MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__GoalExpr_41;

#line 1149 "goal_util.m"
              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1149 "goal_util.m"
            }
#line 1149 "goal_util.m"
            continue;
#line 1191 "goal_util.m"
          }
#line 1177 "goal_util.m"
        else
#line 1177 "goal_util.m"
          if (((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1205 "goal_util.m"
            {
#line 1205 "goal_util.m"
              MR_Word hlds__goal_util__PredId_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1205 "goal_util.m"
              MR_Integer hlds__goal_util__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1205 "goal_util.m"
              MR_Word hlds__goal_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1205 "goal_util.m"
              MR_Word hlds__goal_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1205 "goal_util.m"
              MR_Word hlds__goal_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 4)));
#line 1205 "goal_util.m"
              MR_Word hlds__goal_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 5)));

#line 1205 "goal_util.m"
              {
#line 1205 "goal_util.m"
                return hlds__goal_util__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__goal_util__PredId_2, hlds__goal_util__PredId_24);
              }
#line 1205 "goal_util.m"
            }
#line 1177 "goal_util.m"
          else
#line 1177 "goal_util.m"
            if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1177 "goal_util.m"
              {
#line 1177 "goal_util.m"
                MR_Word hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1177 "goal_util.m"
                MR_Word hlds__goal_util___ConjType_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1178 "goal_util.m"
                {
#line 1178 "goal_util.m"
                  return hlds__goal_util__succeeded = hlds__goal_util__goals_calls_pred_id_2_p_0(hlds__goal_util__Goals_4, hlds__goal_util__PredId_2);
                }
#line 1177 "goal_util.m"
              }
#line 1177 "goal_util.m"
            else
#line 1177 "goal_util.m"
              if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1179 "goal_util.m"
                {
#line 1179 "goal_util.m"
                  MR_Word hlds__goal_util__Goals_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1180 "goal_util.m"
                  {
#line 1180 "goal_util.m"
                    return hlds__goal_util__succeeded = hlds__goal_util__goals_calls_pred_id_2_p_0(hlds__goal_util__Goals_6, hlds__goal_util__PredId_2);
                  }
#line 1179 "goal_util.m"
                }
#line 1177 "goal_util.m"
              else
#line 1177 "goal_util.m"
                if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1183 "goal_util.m"
                  {
#line 1183 "goal_util.m"
                    MR_Word hlds__goal_util__Cond_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1183 "goal_util.m"
                    MR_Word hlds__goal_util__Then_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1183 "goal_util.m"
                    MR_Word hlds__goal_util__Else_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 4)));
#line 1183 "goal_util.m"
                    MR_Word hlds__goal_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1148 "goal_util.m"
                    {
#line 1148 "goal_util.m"
                      MR_Word hlds__goal_util__GoalExpr_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_13, (MR_Integer) 0)));
#line 1148 "goal_util.m"
                      MR_Word hlds__goal_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_13, (MR_Integer) 1)));

#line 1149 "goal_util.m"
                      {
#line 1149 "goal_util.m"
                        hlds__goal_util__succeeded = hlds__goal_util__goal_expr_calls_pred_id_2_p_0(hlds__goal_util__GoalExpr_32, hlds__goal_util__PredId_2);
                      }
#line 1148 "goal_util.m"
                    }
#line 1186 "goal_util.m"
                    if (!(hlds__goal_util__succeeded))
#line 1186 "goal_util.m"
                      {
#line 1148 "goal_util.m"
                        {
#line 1148 "goal_util.m"
                          MR_Word hlds__goal_util__GoalExpr_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Then_14, (MR_Integer) 0)));
#line 1148 "goal_util.m"
                          MR_Word hlds__goal_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Then_14, (MR_Integer) 1)));

#line 1149 "goal_util.m"
                          {
#line 1149 "goal_util.m"
                            hlds__goal_util__succeeded = hlds__goal_util__goal_expr_calls_pred_id_2_p_0(hlds__goal_util__GoalExpr_35, hlds__goal_util__PredId_2);
                          }
#line 1148 "goal_util.m"
                        }
#line 1186 "goal_util.m"
                        if (!(hlds__goal_util__succeeded))
#line 1148 "goal_util.m"
                          {
#line 1148 "goal_util.m"
                            MR_Word hlds__goal_util__GoalExpr_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Else_15, (MR_Integer) 0)));
#line 1148 "goal_util.m"
                            MR_Word hlds__goal_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Else_15, (MR_Integer) 1)));

#line 1149 "goal_util.m"
                            /* direct tailcall eliminated */
#line 1149 "goal_util.m"
                            {
#line 1149 "goal_util.m"
                              MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__GoalExpr_38;

#line 1149 "goal_util.m"
                              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1149 "goal_util.m"
                            }
#line 1149 "goal_util.m"
                            continue;
#line 1148 "goal_util.m"
                          }
#line 1186 "goal_util.m"
                      }
#line 1183 "goal_util.m"
                  }
#line 1177 "goal_util.m"
                else
#line 1177 "goal_util.m"
                  if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1193 "goal_util.m"
                    {
#line 1193 "goal_util.m"
                      MR_Word hlds__goal_util__Reason_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1193 "goal_util.m"
                      MR_Word hlds__goal_util__Goal_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1195 "goal_util.m"
                      MR_Word hlds__goal_util__FGT_23;
#line 1195 "goal_util.m"
                      MR_Word hlds__goal_util__V_22_22;

#line 1195 "goal_util.m"
                      hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1195 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 1195 "goal_util.m"
                        {
#line 1195 "goal_util.m"
                          hlds__goal_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 1)));
#line 1195 "goal_util.m"
                          hlds__goal_util__FGT_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 2)));
#line 1197 "goal_util.m"
                          if ((hlds__goal_util__FGT_23 == (MR_Integer) 1))
#line 1196 "goal_util.m"
                            hlds__goal_util__succeeded = MR_TRUE;
#line 1197 "goal_util.m"
                          else
#line 1197 "goal_util.m"
                            if ((hlds__goal_util__FGT_23 == (MR_Integer) 2))
#line 1197 "goal_util.m"
                              hlds__goal_util__succeeded = MR_TRUE;
#line 1197 "goal_util.m"
                            else
#line 1197 "goal_util.m"
                              hlds__goal_util__succeeded = MR_FALSE;
#line 1195 "goal_util.m"
                        }
#line 1202 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 1201 "goal_util.m"
                        hlds__goal_util__succeeded = MR_FALSE;
#line 1202 "goal_util.m"
                      else
#line 1148 "goal_util.m"
                        {
#line 1148 "goal_util.m"
                          MR_Word hlds__goal_util__GoalExpr_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_20, (MR_Integer) 0)));
#line 1148 "goal_util.m"
                          MR_Word hlds__goal_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_20, (MR_Integer) 1)));

#line 1149 "goal_util.m"
                          /* direct tailcall eliminated */
#line 1149 "goal_util.m"
                          {
#line 1149 "goal_util.m"
                            MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__GoalExpr_44;

#line 1149 "goal_util.m"
                            hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1149 "goal_util.m"
                          }
#line 1149 "goal_util.m"
                          continue;
#line 1148 "goal_util.m"
                        }
#line 1193 "goal_util.m"
                    }
#line 1177 "goal_util.m"
                  else
#line 1177 "goal_util.m"
                    if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1181 "goal_util.m"
                      {
#line 1181 "goal_util.m"
                        MR_Word hlds__goal_util__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1181 "goal_util.m"
                        MR_Word hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1181 "goal_util.m"
                        MR_Word hlds__goal_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));

#line 1182 "goal_util.m"
                        {
#line 1182 "goal_util.m"
                          return hlds__goal_util__succeeded = hlds__goal_util__cases_calls_pred_id_2_p_0(hlds__goal_util__Goals_10, hlds__goal_util__PredId_2);
                        }
#line 1181 "goal_util.m"
                      }
#line 1177 "goal_util.m"
                    else
#line 1177 "goal_util.m"
                      hlds__goal_util__succeeded = MR_FALSE;
#line 1177 "goal_util.m"
        return hlds__goal_util__succeeded;
#line 1177 "goal_util.m"
      }
#line 1177 "goal_util.m"
      break;
#line 1177 "goal_util.m"
    }
#line 1174 "goal_util.m"
}

#line 1164 "goal_util.m"
static void MR_CALL 
hlds__goal_util__cases_calls_pred_id_2_p_1(
#line 1164 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1164 "goal_util.m"
  MR_Word * hlds__goal_util__PredId_7,
#line 1164 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1164 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 1164 "goal_util.m"
{
#line 1166 "goal_util.m"
  while (MR_TRUE)
#line 1166 "goal_util.m"
    {
#line 1166 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1166 "goal_util.m"
      {
#line 1166 "goal_util.m"
        MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1166 "goal_util.m"
        MR_Word hlds__goal_util__Goal_5;
#line 1166 "goal_util.m"
        MR_Word hlds__goal_util__Cases_6;
#line 1166 "goal_util.m"
        MR_Word hlds__goal_util__V_8_8;
#line 1166 "goal_util.m"
        MR_Word hlds__goal_util__V_3_3;
#line 1166 "goal_util.m"
        MR_Word hlds__goal_util__V_4_4;

#line 1166 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1166 "goal_util.m"
          {
#line 1166 "goal_util.m"
            hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1166 "goal_util.m"
            hlds__goal_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1166 "goal_util.m"
            hlds__goal_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 0)));
#line 1166 "goal_util.m"
            hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 1)));
#line 1166 "goal_util.m"
            hlds__goal_util__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 2)));
#line 1148 "goal_util.m"
            {
#line 1148 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 0)));
#line 1148 "goal_util.m"
              MR_Word hlds__goal_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 1)));

#line 1149 "goal_util.m"
              {
#line 1149 "goal_util.m"
                hlds__goal_util__goal_expr_calls_pred_id_2_p_1(hlds__goal_util__GoalExpr_10, hlds__goal_util__PredId_7, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
              }
#line 1148 "goal_util.m"
            }
#line 1170 "goal_util.m"
            {
#line 1170 "goal_util.m"
              /* direct tailcall eliminated */
#line 1170 "goal_util.m"
              {
#line 1170 "goal_util.m"
                MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Cases_6;

#line 1170 "goal_util.m"
                hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1170 "goal_util.m"
              }
#line 1170 "goal_util.m"
              continue;
#line 1170 "goal_util.m"
            }
#line 1166 "goal_util.m"
          }
#line 1166 "goal_util.m"
      }
#line 1166 "goal_util.m"
      break;
#line 1166 "goal_util.m"
    }
#line 1164 "goal_util.m"
}

#line 1163 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__cases_calls_pred_id_2_p_0(
#line 1163 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1163 "goal_util.m"
  MR_Word hlds__goal_util__PredId_7)
#line 1163 "goal_util.m"
{
#line 1166 "goal_util.m"
  while (MR_TRUE)
#line 1166 "goal_util.m"
    {
#line 1166 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1166 "goal_util.m"
      {
#line 1166 "goal_util.m"
        MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1166 "goal_util.m"
        MR_Word hlds__goal_util__Goal_5;
#line 1166 "goal_util.m"
        MR_Word hlds__goal_util__Cases_6;
#line 1166 "goal_util.m"
        MR_Word hlds__goal_util__V_8_8;
#line 1166 "goal_util.m"
        MR_Word hlds__goal_util__V_3_3;
#line 1166 "goal_util.m"
        MR_Word hlds__goal_util__V_4_4;

#line 1166 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1166 "goal_util.m"
          {
#line 1166 "goal_util.m"
            hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1166 "goal_util.m"
            hlds__goal_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1166 "goal_util.m"
            hlds__goal_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 0)));
#line 1166 "goal_util.m"
            hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 1)));
#line 1166 "goal_util.m"
            hlds__goal_util__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 2)));
#line 1148 "goal_util.m"
            {
#line 1148 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 0)));
#line 1148 "goal_util.m"
              MR_Word hlds__goal_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 1)));

#line 1149 "goal_util.m"
              {
#line 1149 "goal_util.m"
                hlds__goal_util__succeeded = hlds__goal_util__goal_expr_calls_pred_id_2_p_0(hlds__goal_util__GoalExpr_10, hlds__goal_util__PredId_7);
              }
#line 1148 "goal_util.m"
            }
#line 1169 "goal_util.m"
            if (!(hlds__goal_util__succeeded))
#line 1170 "goal_util.m"
              {
#line 1170 "goal_util.m"
                /* direct tailcall eliminated */
#line 1170 "goal_util.m"
                {
#line 1170 "goal_util.m"
                  MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Cases_6;

#line 1170 "goal_util.m"
                  hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1170 "goal_util.m"
                }
#line 1170 "goal_util.m"
                continue;
#line 1170 "goal_util.m"
              }
#line 1166 "goal_util.m"
          }
#line 1166 "goal_util.m"
        return hlds__goal_util__succeeded;
#line 1166 "goal_util.m"
      }
#line 1166 "goal_util.m"
      break;
#line 1166 "goal_util.m"
    }
#line 1163 "goal_util.m"
}

#line 1153 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goals_calls_pred_id_2_p_1(
#line 1153 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1153 "goal_util.m"
  MR_Word * hlds__goal_util__PredId_5,
#line 1153 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1153 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 1153 "goal_util.m"
{
#line 1155 "goal_util.m"
  while (MR_TRUE)
#line 1155 "goal_util.m"
    {
#line 1155 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1155 "goal_util.m"
      {
#line 1155 "goal_util.m"
        MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1155 "goal_util.m"
        MR_Word hlds__goal_util__Goal_3;
#line 1155 "goal_util.m"
        MR_Word hlds__goal_util__Goals_4;

#line 1155 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1155 "goal_util.m"
          {
#line 1155 "goal_util.m"
            hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1155 "goal_util.m"
            hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1148 "goal_util.m"
            {
#line 1148 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 0)));
#line 1148 "goal_util.m"
              MR_Word hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 1)));

#line 1149 "goal_util.m"
              {
#line 1149 "goal_util.m"
                hlds__goal_util__goal_expr_calls_pred_id_2_p_1(hlds__goal_util__GoalExpr_7, hlds__goal_util__PredId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
              }
#line 1148 "goal_util.m"
            }
#line 1159 "goal_util.m"
            {
#line 1159 "goal_util.m"
              /* direct tailcall eliminated */
#line 1159 "goal_util.m"
              {
#line 1159 "goal_util.m"
                MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Goals_4;

#line 1159 "goal_util.m"
                hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1159 "goal_util.m"
              }
#line 1159 "goal_util.m"
              continue;
#line 1159 "goal_util.m"
            }
#line 1155 "goal_util.m"
          }
#line 1155 "goal_util.m"
      }
#line 1155 "goal_util.m"
      break;
#line 1155 "goal_util.m"
    }
#line 1153 "goal_util.m"
}

#line 1152 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__goals_calls_pred_id_2_p_0(
#line 1152 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1152 "goal_util.m"
  MR_Word hlds__goal_util__PredId_5)
#line 1152 "goal_util.m"
{
#line 1155 "goal_util.m"
  while (MR_TRUE)
#line 1155 "goal_util.m"
    {
#line 1155 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1155 "goal_util.m"
      {
#line 1155 "goal_util.m"
        MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1155 "goal_util.m"
        MR_Word hlds__goal_util__Goal_3;
#line 1155 "goal_util.m"
        MR_Word hlds__goal_util__Goals_4;

#line 1155 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1155 "goal_util.m"
          {
#line 1155 "goal_util.m"
            hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1155 "goal_util.m"
            hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1148 "goal_util.m"
            {
#line 1148 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 0)));
#line 1148 "goal_util.m"
              MR_Word hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 1)));

#line 1149 "goal_util.m"
              {
#line 1149 "goal_util.m"
                hlds__goal_util__succeeded = hlds__goal_util__goal_expr_calls_pred_id_2_p_0(hlds__goal_util__GoalExpr_7, hlds__goal_util__PredId_5);
              }
#line 1148 "goal_util.m"
            }
#line 1158 "goal_util.m"
            if (!(hlds__goal_util__succeeded))
#line 1159 "goal_util.m"
              {
#line 1159 "goal_util.m"
                /* direct tailcall eliminated */
#line 1159 "goal_util.m"
                {
#line 1159 "goal_util.m"
                  MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Goals_4;

#line 1159 "goal_util.m"
                  hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1159 "goal_util.m"
                }
#line 1159 "goal_util.m"
                continue;
#line 1159 "goal_util.m"
              }
#line 1155 "goal_util.m"
          }
#line 1155 "goal_util.m"
        return hlds__goal_util__succeeded;
#line 1155 "goal_util.m"
      }
#line 1155 "goal_util.m"
      break;
#line 1155 "goal_util.m"
    }
#line 1152 "goal_util.m"
}

#line 1107 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_expr_calls_2_p_1(
#line 1107 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1107 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__2_2,
#line 1107 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1107 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 1107 "goal_util.m"
{
#line 1109 "goal_util.m"
  while (MR_TRUE)
#line 1109 "goal_util.m"
    {
#line 1109 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1109 "goal_util.m"
      {
#line 1109 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;

#line 1109 "goal_util.m"
        if (((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1123 "goal_util.m"
          {
#line 1123 "goal_util.m"
            MR_Word hlds__goal_util__Goal_17 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__HeadVar__1_1), (MR_Integer) 0);
#line 1123 "goal_util.m"
            MR_Word hlds__goal_util__GoalExpr_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_17, (MR_Integer) 0)));
#line 1080 "goal_util.m"
            MR_Word hlds__goal_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_17, (MR_Integer) 1)));

#line 1081 "goal_util.m"
            /* direct tailcall eliminated */
#line 1081 "goal_util.m"
            {
#line 1081 "goal_util.m"
              MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__GoalExpr_40;

#line 1081 "goal_util.m"
              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1081 "goal_util.m"
            }
#line 1081 "goal_util.m"
            continue;
#line 1123 "goal_util.m"
          }
#line 1109 "goal_util.m"
        else
#line 1109 "goal_util.m"
          if (((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1137 "goal_util.m"
            {
#line 1137 "goal_util.m"
              MR_Word hlds__goal_util__PredId_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1137 "goal_util.m"
              MR_Integer hlds__goal_util__ProcId_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1137 "goal_util.m"
              MR_Word hlds__goal_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1137 "goal_util.m"
              MR_Word hlds__goal_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1137 "goal_util.m"
              MR_Word hlds__goal_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 4)));
#line 1137 "goal_util.m"
              MR_Word hlds__goal_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 5)));

#line 1137 "goal_util.m"
              {
#line 1137 "goal_util.m"
                MR_Word base;
#line 1137 "goal_util.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1137 "goal_util.m"
                *hlds__goal_util__HeadVar__2_2 = base;
#line 1137 "goal_util.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__PredId_24));
#line 1137 "goal_util.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__ProcId_25));
#line 1137 "goal_util.m"
              }
#line 1137 "goal_util.m"
              {
#line 1137 "goal_util.m"
                hlds__goal_util__cont(hlds__goal_util__cont_env_ptr);
#line 1137 "goal_util.m"
                return;
              }
#line 1137 "goal_util.m"
            }
#line 1109 "goal_util.m"
          else
#line 1109 "goal_util.m"
            if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1109 "goal_util.m"
              {
#line 1109 "goal_util.m"
                MR_Word hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1109 "goal_util.m"
                MR_Word hlds__goal_util___ConjType_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1110 "goal_util.m"
                {
#line 1110 "goal_util.m"
                  hlds__goal_util__goals_calls_2_p_1(hlds__goal_util__Goals_4, hlds__goal_util__HeadVar__2_2, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
#line 1110 "goal_util.m"
                  return;
                }
#line 1109 "goal_util.m"
              }
#line 1109 "goal_util.m"
            else
#line 1109 "goal_util.m"
              if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1111 "goal_util.m"
                {
#line 1111 "goal_util.m"
                  MR_Word hlds__goal_util__Goals_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1112 "goal_util.m"
                  {
#line 1112 "goal_util.m"
                    hlds__goal_util__goals_calls_2_p_1(hlds__goal_util__Goals_6, hlds__goal_util__HeadVar__2_2, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
#line 1112 "goal_util.m"
                    return;
                  }
#line 1111 "goal_util.m"
                }
#line 1109 "goal_util.m"
              else
#line 1109 "goal_util.m"
                if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1115 "goal_util.m"
                  {
#line 1115 "goal_util.m"
                    MR_Word hlds__goal_util__Cond_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1115 "goal_util.m"
                    MR_Word hlds__goal_util__Then_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1115 "goal_util.m"
                    MR_Word hlds__goal_util__Else_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 4)));
#line 1115 "goal_util.m"
                    MR_Word hlds__goal_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1080 "goal_util.m"
                    {
#line 1080 "goal_util.m"
                      MR_Word hlds__goal_util__GoalExpr_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_13, (MR_Integer) 0)));
#line 1080 "goal_util.m"
                      MR_Word hlds__goal_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_13, (MR_Integer) 1)));

#line 1081 "goal_util.m"
                      {
#line 1081 "goal_util.m"
                        hlds__goal_util__goal_expr_calls_2_p_1(hlds__goal_util__GoalExpr_31, hlds__goal_util__HeadVar__2_2, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                      }
#line 1080 "goal_util.m"
                    }
#line 1080 "goal_util.m"
                    {
#line 1080 "goal_util.m"
                      MR_Word hlds__goal_util__GoalExpr_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Then_14, (MR_Integer) 0)));
#line 1080 "goal_util.m"
                      MR_Word hlds__goal_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Then_14, (MR_Integer) 1)));

#line 1081 "goal_util.m"
                      {
#line 1081 "goal_util.m"
                        hlds__goal_util__goal_expr_calls_2_p_1(hlds__goal_util__GoalExpr_34, hlds__goal_util__HeadVar__2_2, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                      }
#line 1080 "goal_util.m"
                    }
#line 1080 "goal_util.m"
                    {
#line 1080 "goal_util.m"
                      MR_Word hlds__goal_util__GoalExpr_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Else_15, (MR_Integer) 0)));
#line 1080 "goal_util.m"
                      MR_Word hlds__goal_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Else_15, (MR_Integer) 1)));

#line 1081 "goal_util.m"
                      /* direct tailcall eliminated */
#line 1081 "goal_util.m"
                      {
#line 1081 "goal_util.m"
                        MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__GoalExpr_37;

#line 1081 "goal_util.m"
                        hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1081 "goal_util.m"
                      }
#line 1081 "goal_util.m"
                      continue;
#line 1080 "goal_util.m"
                    }
#line 1115 "goal_util.m"
                  }
#line 1109 "goal_util.m"
                else
#line 1109 "goal_util.m"
                  if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1125 "goal_util.m"
                    {
#line 1125 "goal_util.m"
                      MR_Word hlds__goal_util__Reason_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1125 "goal_util.m"
                      MR_Word hlds__goal_util__Goal_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1127 "goal_util.m"
                      MR_Word hlds__goal_util__FGT_23;
#line 1127 "goal_util.m"
                      MR_Word hlds__goal_util__V_22_22;

#line 1127 "goal_util.m"
                      hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1127 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 1127 "goal_util.m"
                        {
#line 1127 "goal_util.m"
                          hlds__goal_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 1)));
#line 1127 "goal_util.m"
                          hlds__goal_util__FGT_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 2)));
#line 1129 "goal_util.m"
                          if ((hlds__goal_util__FGT_23 == (MR_Integer) 1))
#line 1128 "goal_util.m"
                            hlds__goal_util__succeeded = MR_TRUE;
#line 1129 "goal_util.m"
                          else
#line 1129 "goal_util.m"
                            if ((hlds__goal_util__FGT_23 == (MR_Integer) 2))
#line 1129 "goal_util.m"
                              hlds__goal_util__succeeded = MR_TRUE;
#line 1129 "goal_util.m"
                            else
#line 1129 "goal_util.m"
                              hlds__goal_util__succeeded = MR_FALSE;
#line 1127 "goal_util.m"
                        }
#line 1134 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 1133 "goal_util.m"
                        {
#line 1133 "goal_util.m"
                          hlds__goal_util__succeeded = MR_FALSE;
#line 1133 "goal_util.m"
                          if (hlds__goal_util__succeeded)
#line 1133 "goal_util.m"
                            {
#line 1133 "goal_util.m"
                              hlds__goal_util__cont(hlds__goal_util__cont_env_ptr);
#line 1133 "goal_util.m"
                              return;
                            }
#line 1133 "goal_util.m"
                        }
#line 1134 "goal_util.m"
                      else
#line 1080 "goal_util.m"
                        {
#line 1080 "goal_util.m"
                          MR_Word hlds__goal_util__GoalExpr_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_20, (MR_Integer) 0)));
#line 1080 "goal_util.m"
                          MR_Word hlds__goal_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_20, (MR_Integer) 1)));

#line 1081 "goal_util.m"
                          /* direct tailcall eliminated */
#line 1081 "goal_util.m"
                          {
#line 1081 "goal_util.m"
                            MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__GoalExpr_43;

#line 1081 "goal_util.m"
                            hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1081 "goal_util.m"
                          }
#line 1081 "goal_util.m"
                          continue;
#line 1080 "goal_util.m"
                        }
#line 1125 "goal_util.m"
                    }
#line 1109 "goal_util.m"
                  else
#line 1109 "goal_util.m"
                    if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1113 "goal_util.m"
                      {
#line 1113 "goal_util.m"
                        MR_Word hlds__goal_util__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1113 "goal_util.m"
                        MR_Word hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1113 "goal_util.m"
                        MR_Word hlds__goal_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));

#line 1114 "goal_util.m"
                        {
#line 1114 "goal_util.m"
                          hlds__goal_util__cases_calls_2_p_1(hlds__goal_util__Goals_10, hlds__goal_util__HeadVar__2_2, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
#line 1114 "goal_util.m"
                          return;
                        }
#line 1113 "goal_util.m"
                      }
#line 1109 "goal_util.m"
                    else
#line 1109 "goal_util.m"
                      {
#line 1109 "goal_util.m"
                      }
#line 1109 "goal_util.m"
      }
#line 1109 "goal_util.m"
      break;
#line 1109 "goal_util.m"
    }
#line 1107 "goal_util.m"
}

#line 1106 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__goal_expr_calls_2_p_0(
#line 1106 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1106 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_2)
#line 1106 "goal_util.m"
{
#line 1109 "goal_util.m"
  while (MR_TRUE)
#line 1109 "goal_util.m"
    {
#line 1109 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1109 "goal_util.m"
      {
#line 1109 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;

#line 1109 "goal_util.m"
        if (((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1123 "goal_util.m"
          {
#line 1123 "goal_util.m"
            MR_Word hlds__goal_util__Goal_17 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__HeadVar__1_1), (MR_Integer) 0);
#line 1123 "goal_util.m"
            MR_Word hlds__goal_util__GoalExpr_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_17, (MR_Integer) 0)));
#line 1080 "goal_util.m"
            MR_Word hlds__goal_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_17, (MR_Integer) 1)));

#line 1081 "goal_util.m"
            /* direct tailcall eliminated */
#line 1081 "goal_util.m"
            {
#line 1081 "goal_util.m"
              MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__GoalExpr_44;

#line 1081 "goal_util.m"
              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1081 "goal_util.m"
            }
#line 1081 "goal_util.m"
            continue;
#line 1123 "goal_util.m"
          }
#line 1109 "goal_util.m"
        else
#line 1109 "goal_util.m"
          if (((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1137 "goal_util.m"
            {
#line 1137 "goal_util.m"
              MR_Word hlds__goal_util__PredId_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1137 "goal_util.m"
              MR_Integer hlds__goal_util__ProcId_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1137 "goal_util.m"
              MR_Word hlds__goal_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1137 "goal_util.m"
              MR_Integer hlds__goal_util__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1137 "goal_util.m"
              MR_Word hlds__goal_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1137 "goal_util.m"
              MR_Word hlds__goal_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1137 "goal_util.m"
              MR_Word hlds__goal_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 4)));
#line 1137 "goal_util.m"
              MR_Word hlds__goal_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 5)));

#line 1137 "goal_util.m"
              {
#line 1137 "goal_util.m"
                hlds__goal_util__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__goal_util__PredId_24, hlds__goal_util__V_30_30);
              }
#line 1137 "goal_util.m"
              if (hlds__goal_util__succeeded)
#line 1137 "goal_util.m"
                hlds__goal_util__succeeded = (hlds__goal_util__ProcId_25 == hlds__goal_util__V_31_31);
#line 1137 "goal_util.m"
            }
#line 1109 "goal_util.m"
          else
#line 1109 "goal_util.m"
            if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1109 "goal_util.m"
              {
#line 1109 "goal_util.m"
                MR_Word hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1109 "goal_util.m"
                MR_Word hlds__goal_util___ConjType_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1110 "goal_util.m"
                {
#line 1110 "goal_util.m"
                  return hlds__goal_util__succeeded = hlds__goal_util__goals_calls_2_p_0(hlds__goal_util__Goals_4, hlds__goal_util__HeadVar__2_2);
                }
#line 1109 "goal_util.m"
              }
#line 1109 "goal_util.m"
            else
#line 1109 "goal_util.m"
              if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1111 "goal_util.m"
                {
#line 1111 "goal_util.m"
                  MR_Word hlds__goal_util__Goals_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1112 "goal_util.m"
                  {
#line 1112 "goal_util.m"
                    return hlds__goal_util__succeeded = hlds__goal_util__goals_calls_2_p_0(hlds__goal_util__Goals_6, hlds__goal_util__HeadVar__2_2);
                  }
#line 1111 "goal_util.m"
                }
#line 1109 "goal_util.m"
              else
#line 1109 "goal_util.m"
                if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1115 "goal_util.m"
                  {
#line 1115 "goal_util.m"
                    MR_Word hlds__goal_util__Cond_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1115 "goal_util.m"
                    MR_Word hlds__goal_util__Then_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1115 "goal_util.m"
                    MR_Word hlds__goal_util__Else_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 4)));
#line 1115 "goal_util.m"
                    MR_Word hlds__goal_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1080 "goal_util.m"
                    {
#line 1080 "goal_util.m"
                      MR_Word hlds__goal_util__GoalExpr_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_13, (MR_Integer) 0)));
#line 1080 "goal_util.m"
                      MR_Word hlds__goal_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_13, (MR_Integer) 1)));

#line 1081 "goal_util.m"
                      {
#line 1081 "goal_util.m"
                        hlds__goal_util__succeeded = hlds__goal_util__goal_expr_calls_2_p_0(hlds__goal_util__GoalExpr_35, hlds__goal_util__HeadVar__2_2);
                      }
#line 1080 "goal_util.m"
                    }
#line 1118 "goal_util.m"
                    if (!(hlds__goal_util__succeeded))
#line 1118 "goal_util.m"
                      {
#line 1080 "goal_util.m"
                        {
#line 1080 "goal_util.m"
                          MR_Word hlds__goal_util__GoalExpr_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Then_14, (MR_Integer) 0)));
#line 1080 "goal_util.m"
                          MR_Word hlds__goal_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Then_14, (MR_Integer) 1)));

#line 1081 "goal_util.m"
                          {
#line 1081 "goal_util.m"
                            hlds__goal_util__succeeded = hlds__goal_util__goal_expr_calls_2_p_0(hlds__goal_util__GoalExpr_38, hlds__goal_util__HeadVar__2_2);
                          }
#line 1080 "goal_util.m"
                        }
#line 1118 "goal_util.m"
                        if (!(hlds__goal_util__succeeded))
#line 1080 "goal_util.m"
                          {
#line 1080 "goal_util.m"
                            MR_Word hlds__goal_util__GoalExpr_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Else_15, (MR_Integer) 0)));
#line 1080 "goal_util.m"
                            MR_Word hlds__goal_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Else_15, (MR_Integer) 1)));

#line 1081 "goal_util.m"
                            /* direct tailcall eliminated */
#line 1081 "goal_util.m"
                            {
#line 1081 "goal_util.m"
                              MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__GoalExpr_41;

#line 1081 "goal_util.m"
                              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1081 "goal_util.m"
                            }
#line 1081 "goal_util.m"
                            continue;
#line 1080 "goal_util.m"
                          }
#line 1118 "goal_util.m"
                      }
#line 1115 "goal_util.m"
                  }
#line 1109 "goal_util.m"
                else
#line 1109 "goal_util.m"
                  if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1125 "goal_util.m"
                    {
#line 1125 "goal_util.m"
                      MR_Word hlds__goal_util__Reason_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1125 "goal_util.m"
                      MR_Word hlds__goal_util__Goal_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1127 "goal_util.m"
                      MR_Word hlds__goal_util__FGT_23;
#line 1127 "goal_util.m"
                      MR_Word hlds__goal_util__V_22_22;

#line 1127 "goal_util.m"
                      hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1127 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 1127 "goal_util.m"
                        {
#line 1127 "goal_util.m"
                          hlds__goal_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 1)));
#line 1127 "goal_util.m"
                          hlds__goal_util__FGT_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 2)));
#line 1129 "goal_util.m"
                          if ((hlds__goal_util__FGT_23 == (MR_Integer) 1))
#line 1128 "goal_util.m"
                            hlds__goal_util__succeeded = MR_TRUE;
#line 1129 "goal_util.m"
                          else
#line 1129 "goal_util.m"
                            if ((hlds__goal_util__FGT_23 == (MR_Integer) 2))
#line 1129 "goal_util.m"
                              hlds__goal_util__succeeded = MR_TRUE;
#line 1129 "goal_util.m"
                            else
#line 1129 "goal_util.m"
                              hlds__goal_util__succeeded = MR_FALSE;
#line 1127 "goal_util.m"
                        }
#line 1134 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 1133 "goal_util.m"
                        hlds__goal_util__succeeded = MR_FALSE;
#line 1134 "goal_util.m"
                      else
#line 1080 "goal_util.m"
                        {
#line 1080 "goal_util.m"
                          MR_Word hlds__goal_util__GoalExpr_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_20, (MR_Integer) 0)));
#line 1080 "goal_util.m"
                          MR_Word hlds__goal_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_20, (MR_Integer) 1)));

#line 1081 "goal_util.m"
                          /* direct tailcall eliminated */
#line 1081 "goal_util.m"
                          {
#line 1081 "goal_util.m"
                            MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__GoalExpr_47;

#line 1081 "goal_util.m"
                            hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1081 "goal_util.m"
                          }
#line 1081 "goal_util.m"
                          continue;
#line 1080 "goal_util.m"
                        }
#line 1125 "goal_util.m"
                    }
#line 1109 "goal_util.m"
                  else
#line 1109 "goal_util.m"
                    if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1113 "goal_util.m"
                      {
#line 1113 "goal_util.m"
                        MR_Word hlds__goal_util__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1113 "goal_util.m"
                        MR_Word hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1113 "goal_util.m"
                        MR_Word hlds__goal_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));

#line 1114 "goal_util.m"
                        {
#line 1114 "goal_util.m"
                          return hlds__goal_util__succeeded = hlds__goal_util__cases_calls_2_p_0(hlds__goal_util__Goals_10, hlds__goal_util__HeadVar__2_2);
                        }
#line 1113 "goal_util.m"
                      }
#line 1109 "goal_util.m"
                    else
#line 1109 "goal_util.m"
                      hlds__goal_util__succeeded = MR_FALSE;
#line 1109 "goal_util.m"
        return hlds__goal_util__succeeded;
#line 1109 "goal_util.m"
      }
#line 1109 "goal_util.m"
      break;
#line 1109 "goal_util.m"
    }
#line 1106 "goal_util.m"
}

#line 1096 "goal_util.m"
static void MR_CALL 
hlds__goal_util__cases_calls_2_p_1(
#line 1096 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1096 "goal_util.m"
  MR_Word * hlds__goal_util__PredProcId_7,
#line 1096 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1096 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 1096 "goal_util.m"
{
#line 1098 "goal_util.m"
  while (MR_TRUE)
#line 1098 "goal_util.m"
    {
#line 1098 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1098 "goal_util.m"
      {
#line 1098 "goal_util.m"
        MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1098 "goal_util.m"
        MR_Word hlds__goal_util__Goal_5;
#line 1098 "goal_util.m"
        MR_Word hlds__goal_util__Cases_6;
#line 1098 "goal_util.m"
        MR_Word hlds__goal_util__V_8_8;
#line 1098 "goal_util.m"
        MR_Word hlds__goal_util__V_3_3;
#line 1098 "goal_util.m"
        MR_Word hlds__goal_util__V_4_4;

#line 1098 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1098 "goal_util.m"
          {
#line 1098 "goal_util.m"
            hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1098 "goal_util.m"
            hlds__goal_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1098 "goal_util.m"
            hlds__goal_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 0)));
#line 1098 "goal_util.m"
            hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 1)));
#line 1098 "goal_util.m"
            hlds__goal_util__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 2)));
#line 1080 "goal_util.m"
            {
#line 1080 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 0)));
#line 1080 "goal_util.m"
              MR_Word hlds__goal_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 1)));

#line 1081 "goal_util.m"
              {
#line 1081 "goal_util.m"
                hlds__goal_util__goal_expr_calls_2_p_1(hlds__goal_util__GoalExpr_10, hlds__goal_util__PredProcId_7, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
              }
#line 1080 "goal_util.m"
            }
#line 1102 "goal_util.m"
            {
#line 1102 "goal_util.m"
              /* direct tailcall eliminated */
#line 1102 "goal_util.m"
              {
#line 1102 "goal_util.m"
                MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Cases_6;

#line 1102 "goal_util.m"
                hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1102 "goal_util.m"
              }
#line 1102 "goal_util.m"
              continue;
#line 1102 "goal_util.m"
            }
#line 1098 "goal_util.m"
          }
#line 1098 "goal_util.m"
      }
#line 1098 "goal_util.m"
      break;
#line 1098 "goal_util.m"
    }
#line 1096 "goal_util.m"
}

#line 1095 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__cases_calls_2_p_0(
#line 1095 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1095 "goal_util.m"
  MR_Word hlds__goal_util__PredProcId_7)
#line 1095 "goal_util.m"
{
#line 1098 "goal_util.m"
  while (MR_TRUE)
#line 1098 "goal_util.m"
    {
#line 1098 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1098 "goal_util.m"
      {
#line 1098 "goal_util.m"
        MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1098 "goal_util.m"
        MR_Word hlds__goal_util__Goal_5;
#line 1098 "goal_util.m"
        MR_Word hlds__goal_util__Cases_6;
#line 1098 "goal_util.m"
        MR_Word hlds__goal_util__V_8_8;
#line 1098 "goal_util.m"
        MR_Word hlds__goal_util__V_3_3;
#line 1098 "goal_util.m"
        MR_Word hlds__goal_util__V_4_4;

#line 1098 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1098 "goal_util.m"
          {
#line 1098 "goal_util.m"
            hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1098 "goal_util.m"
            hlds__goal_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1098 "goal_util.m"
            hlds__goal_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 0)));
#line 1098 "goal_util.m"
            hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 1)));
#line 1098 "goal_util.m"
            hlds__goal_util__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 2)));
#line 1080 "goal_util.m"
            {
#line 1080 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 0)));
#line 1080 "goal_util.m"
              MR_Word hlds__goal_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 1)));

#line 1081 "goal_util.m"
              {
#line 1081 "goal_util.m"
                hlds__goal_util__succeeded = hlds__goal_util__goal_expr_calls_2_p_0(hlds__goal_util__GoalExpr_10, hlds__goal_util__PredProcId_7);
              }
#line 1080 "goal_util.m"
            }
#line 1101 "goal_util.m"
            if (!(hlds__goal_util__succeeded))
#line 1102 "goal_util.m"
              {
#line 1102 "goal_util.m"
                /* direct tailcall eliminated */
#line 1102 "goal_util.m"
                {
#line 1102 "goal_util.m"
                  MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Cases_6;

#line 1102 "goal_util.m"
                  hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1102 "goal_util.m"
                }
#line 1102 "goal_util.m"
                continue;
#line 1102 "goal_util.m"
              }
#line 1098 "goal_util.m"
          }
#line 1098 "goal_util.m"
        return hlds__goal_util__succeeded;
#line 1098 "goal_util.m"
      }
#line 1098 "goal_util.m"
      break;
#line 1098 "goal_util.m"
    }
#line 1095 "goal_util.m"
}

#line 1085 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goals_calls_2_p_1(
#line 1085 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1085 "goal_util.m"
  MR_Word * hlds__goal_util__PredProcId_5,
#line 1085 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1085 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 1085 "goal_util.m"
{
#line 1087 "goal_util.m"
  while (MR_TRUE)
#line 1087 "goal_util.m"
    {
#line 1087 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1087 "goal_util.m"
      {
#line 1087 "goal_util.m"
        MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1087 "goal_util.m"
        MR_Word hlds__goal_util__Goal_3;
#line 1087 "goal_util.m"
        MR_Word hlds__goal_util__Goals_4;

#line 1087 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1087 "goal_util.m"
          {
#line 1087 "goal_util.m"
            hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1087 "goal_util.m"
            hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1080 "goal_util.m"
            {
#line 1080 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 0)));
#line 1080 "goal_util.m"
              MR_Word hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 1)));

#line 1081 "goal_util.m"
              {
#line 1081 "goal_util.m"
                hlds__goal_util__goal_expr_calls_2_p_1(hlds__goal_util__GoalExpr_7, hlds__goal_util__PredProcId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
              }
#line 1080 "goal_util.m"
            }
#line 1091 "goal_util.m"
            {
#line 1091 "goal_util.m"
              /* direct tailcall eliminated */
#line 1091 "goal_util.m"
              {
#line 1091 "goal_util.m"
                MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Goals_4;

#line 1091 "goal_util.m"
                hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1091 "goal_util.m"
              }
#line 1091 "goal_util.m"
              continue;
#line 1091 "goal_util.m"
            }
#line 1087 "goal_util.m"
          }
#line 1087 "goal_util.m"
      }
#line 1087 "goal_util.m"
      break;
#line 1087 "goal_util.m"
    }
#line 1085 "goal_util.m"
}

#line 1084 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__goals_calls_2_p_0(
#line 1084 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1084 "goal_util.m"
  MR_Word hlds__goal_util__PredProcId_5)
#line 1084 "goal_util.m"
{
#line 1087 "goal_util.m"
  while (MR_TRUE)
#line 1087 "goal_util.m"
    {
#line 1087 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1087 "goal_util.m"
      {
#line 1087 "goal_util.m"
        MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1087 "goal_util.m"
        MR_Word hlds__goal_util__Goal_3;
#line 1087 "goal_util.m"
        MR_Word hlds__goal_util__Goals_4;

#line 1087 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1087 "goal_util.m"
          {
#line 1087 "goal_util.m"
            hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1087 "goal_util.m"
            hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1080 "goal_util.m"
            {
#line 1080 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 0)));
#line 1080 "goal_util.m"
              MR_Word hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 1)));

#line 1081 "goal_util.m"
              {
#line 1081 "goal_util.m"
                hlds__goal_util__succeeded = hlds__goal_util__goal_expr_calls_2_p_0(hlds__goal_util__GoalExpr_7, hlds__goal_util__PredProcId_5);
              }
#line 1080 "goal_util.m"
            }
#line 1090 "goal_util.m"
            if (!(hlds__goal_util__succeeded))
#line 1091 "goal_util.m"
              {
#line 1091 "goal_util.m"
                /* direct tailcall eliminated */
#line 1091 "goal_util.m"
                {
#line 1091 "goal_util.m"
                  MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Goals_4;

#line 1091 "goal_util.m"
                  hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1091 "goal_util.m"
                }
#line 1091 "goal_util.m"
                continue;
#line 1091 "goal_util.m"
              }
#line 1087 "goal_util.m"
          }
#line 1087 "goal_util.m"
        return hlds__goal_util__succeeded;
#line 1087 "goal_util.m"
      }
#line 1087 "goal_util.m"
      break;
#line 1087 "goal_util.m"
    }
#line 1084 "goal_util.m"
}

#line 999 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_expr_size_2_p_0(
#line 999 "goal_util.m"
  MR_Word hlds__goal_util__GoalExpr_3,
#line 999 "goal_util.m"
  MR_Integer * hlds__goal_util__Size_4)
#line 999 "goal_util.m"
{
#line 1007 "goal_util.m"
  {
#line 1007 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 1007 "goal_util.m"
    if (((MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) == (MR_mktag((MR_Integer) 0))))
#line 1034 "goal_util.m"
      {
#line 1034 "goal_util.m"
        MR_Word hlds__goal_util__SubGoal_41 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_3), (MR_Integer) 0);
#line 1034 "goal_util.m"
        MR_Integer hlds__goal_util__Size1_72;

#line 1035 "goal_util.m"
        {
#line 1035 "goal_util.m"
          hlds__goal_util__goal_size_2_p_0(hlds__goal_util__SubGoal_41, &hlds__goal_util__Size1_72);
        }
#line 1036 "goal_util.m"
        *hlds__goal_util__Size_4 = (hlds__goal_util__Size1_72 + (MR_Integer) 1);
#line 1034 "goal_util.m"
      }
#line 1007 "goal_util.m"
    else
#line 1007 "goal_util.m"
      if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1010 "goal_util.m"
        {
#line 1010 "goal_util.m"
          MR_Word hlds__goal_util__ConjType_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 1010 "goal_util.m"
          MR_Word hlds__goal_util__Goals_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 1010 "goal_util.m"
          MR_Integer hlds__goal_util__InnerSize_30;

#line 1011 "goal_util.m"
          {
#line 1011 "goal_util.m"
            hlds__goal_util__goals_size_2_p_0(hlds__goal_util__Goals_29, &hlds__goal_util__InnerSize_30);
          }
#line 1015 "goal_util.m"
          if ((hlds__goal_util__ConjType_28 == (MR_Integer) 1))
#line 1016 "goal_util.m"
            {
#line 1017 "goal_util.m"
              *hlds__goal_util__Size_4 = (hlds__goal_util__InnerSize_30 + (MR_Integer) 1);
#line 1016 "goal_util.m"
            }
#line 1015 "goal_util.m"
          else
#line 1014 "goal_util.m"
            *hlds__goal_util__Size_4 = hlds__goal_util__InnerSize_30;
#line 1010 "goal_util.m"
        }
#line 1007 "goal_util.m"
      else
#line 1007 "goal_util.m"
        if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1020 "goal_util.m"
          {
#line 1020 "goal_util.m"
            MR_Integer hlds__goal_util__Size1_31;
#line 1020 "goal_util.m"
            MR_Word hlds__goal_util__Goals_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

#line 1021 "goal_util.m"
            {
#line 1021 "goal_util.m"
              hlds__goal_util__goals_size_2_p_0(hlds__goal_util__Goals_69, &hlds__goal_util__Size1_31);
            }
#line 1022 "goal_util.m"
            *hlds__goal_util__Size_4 = (hlds__goal_util__Size1_31 + (MR_Integer) 1);
#line 1020 "goal_util.m"
          }
#line 1007 "goal_util.m"
        else
#line 1007 "goal_util.m"
          if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1028 "goal_util.m"
            {
#line 1028 "goal_util.m"
              MR_Word hlds__goal_util__Cond_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 1028 "goal_util.m"
              MR_Word hlds__goal_util__Then_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
#line 1028 "goal_util.m"
              MR_Word hlds__goal_util__Else_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));
#line 1028 "goal_util.m"
              MR_Integer hlds__goal_util__Size2_39;
#line 1028 "goal_util.m"
              MR_Integer hlds__goal_util__Size3_40;
#line 1028 "goal_util.m"
              MR_Integer hlds__goal_util__V_63_63;
#line 1028 "goal_util.m"
              MR_Integer hlds__goal_util__V_64_64;
#line 1028 "goal_util.m"
              MR_Integer hlds__goal_util__Size1_71;
#line 1028 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_36, (MR_Integer) 0)));
#line 1028 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_92;
#line 1028 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_95;
#line 1028 "goal_util.m"
              MR_Word hlds__goal_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 967 "goal_util.m"
              MR_Word hlds__goal_util__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_36, (MR_Integer) 1)));
#line 967 "goal_util.m"
              MR_Word hlds__goal_util__V_93_93;
#line 967 "goal_util.m"
              MR_Word hlds__goal_util__V_96_96;

#line 968 "goal_util.m"
              {
#line 968 "goal_util.m"
                hlds__goal_util__goal_expr_size_2_p_0(hlds__goal_util__GoalExpr_89, &hlds__goal_util__Size1_71);
              }
#line 967 "goal_util.m"
              hlds__goal_util__GoalExpr_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Then_37, (MR_Integer) 0)));
#line 967 "goal_util.m"
              hlds__goal_util__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Then_37, (MR_Integer) 1)));
#line 968 "goal_util.m"
              {
#line 968 "goal_util.m"
                hlds__goal_util__goal_expr_size_2_p_0(hlds__goal_util__GoalExpr_92, &hlds__goal_util__Size2_39);
              }
#line 967 "goal_util.m"
              hlds__goal_util__GoalExpr_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Else_38, (MR_Integer) 0)));
#line 967 "goal_util.m"
              hlds__goal_util__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Else_38, (MR_Integer) 1)));
#line 968 "goal_util.m"
              {
#line 968 "goal_util.m"
                hlds__goal_util__goal_expr_size_2_p_0(hlds__goal_util__GoalExpr_95, &hlds__goal_util__Size3_40);
              }
#line 1032 "goal_util.m"
              hlds__goal_util__V_64_64 = (hlds__goal_util__Size1_71 + hlds__goal_util__Size2_39);
#line 1032 "goal_util.m"
              hlds__goal_util__V_63_63 = (hlds__goal_util__V_64_64 + hlds__goal_util__Size3_40);
#line 1032 "goal_util.m"
              *hlds__goal_util__Size_4 = (hlds__goal_util__V_63_63 + (MR_Integer) 1);
#line 1028 "goal_util.m"
            }
#line 1007 "goal_util.m"
          else
#line 1007 "goal_util.m"
            if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1038 "goal_util.m"
              {
#line 1038 "goal_util.m"
                MR_Word hlds__goal_util__Reason_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 1038 "goal_util.m"
                MR_Word hlds__goal_util__SubGoal_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 1039 "goal_util.m"
                MR_Word hlds__goal_util__V_60_60;
#line 1039 "goal_util.m"
                MR_Word hlds__goal_util__V_43_43;

#line 1039 "goal_util.m"
                hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_42, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1039 "goal_util.m"
                if (hlds__goal_util__succeeded)
#line 1039 "goal_util.m"
                  {
#line 1039 "goal_util.m"
                    hlds__goal_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_42, (MR_Integer) 1)));
#line 1039 "goal_util.m"
                    hlds__goal_util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_42, (MR_Integer) 2)));
#line 1039 "goal_util.m"
                    hlds__goal_util__succeeded = (hlds__goal_util__V_60_60 == (MR_Integer) 1);
#line 1039 "goal_util.m"
                  }
#line 1042 "goal_util.m"
                if (hlds__goal_util__succeeded)
#line 1041 "goal_util.m"
                  *hlds__goal_util__Size_4 = (MR_Integer) 1;
#line 1042 "goal_util.m"
                else
#line 1043 "goal_util.m"
                  {
#line 1043 "goal_util.m"
                    MR_Integer hlds__goal_util__Size1_73;

#line 1043 "goal_util.m"
                    {
#line 1043 "goal_util.m"
                      hlds__goal_util__goal_size_2_p_0(hlds__goal_util__SubGoal_76, &hlds__goal_util__Size1_73);
                    }
#line 1044 "goal_util.m"
                    *hlds__goal_util__Size_4 = (hlds__goal_util__Size1_73 + (MR_Integer) 1);
#line 1043 "goal_util.m"
                  }
#line 1038 "goal_util.m"
              }
#line 1007 "goal_util.m"
            else
#line 1007 "goal_util.m"
              if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1047 "goal_util.m"
                {
#line 1047 "goal_util.m"
                  MR_Word hlds__goal_util__ShortHand_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

#line 1053 "goal_util.m"
                  if (((MR_tag((MR_Word) hlds__goal_util__ShortHand_44)) == (MR_mktag((MR_Integer) 1))))
#line 1049 "goal_util.m"
                    {
#line 1049 "goal_util.m"
                      MR_Word hlds__goal_util__MainGoal_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_44, (MR_Integer) 4)));
#line 1049 "goal_util.m"
                      MR_Word hlds__goal_util__OrElseGoals_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_44, (MR_Integer) 5)));
#line 1049 "goal_util.m"
                      MR_Integer hlds__goal_util__V_58_58;
#line 1049 "goal_util.m"
                      MR_Integer hlds__goal_util__Size1_77;
#line 1049 "goal_util.m"
                      MR_Integer hlds__goal_util__Size2_78;
#line 1049 "goal_util.m"
                      MR_Word hlds__goal_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_44, (MR_Integer) 0)));
#line 1049 "goal_util.m"
                      MR_Word hlds__goal_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_44, (MR_Integer) 1)));
#line 1049 "goal_util.m"
                      MR_Word hlds__goal_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_44, (MR_Integer) 2)));
#line 1049 "goal_util.m"
                      MR_Word hlds__goal_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_44, (MR_Integer) 3)));
#line 1049 "goal_util.m"
                      MR_Word hlds__goal_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_44, (MR_Integer) 6)));

#line 1050 "goal_util.m"
                      {
#line 1050 "goal_util.m"
                        hlds__goal_util__goal_size_2_p_0(hlds__goal_util__MainGoal_49, &hlds__goal_util__Size1_77);
                      }
#line 1051 "goal_util.m"
                      {
#line 1051 "goal_util.m"
                        hlds__goal_util__goals_size_2_p_0(hlds__goal_util__OrElseGoals_50, &hlds__goal_util__Size2_78);
                      }
#line 1052 "goal_util.m"
                      hlds__goal_util__V_58_58 = (hlds__goal_util__Size1_77 + hlds__goal_util__Size2_78);
#line 1052 "goal_util.m"
                      *hlds__goal_util__Size_4 = (hlds__goal_util__V_58_58 + (MR_Integer) 1);
#line 1049 "goal_util.m"
                    }
#line 1053 "goal_util.m"
                  else
#line 1053 "goal_util.m"
                    if (((MR_tag((MR_Word) hlds__goal_util__ShortHand_44)) == (MR_mktag((MR_Integer) 0))))
#line 1059 "goal_util.m"
                      {
#line 1059 "goal_util.m"
                        MR_Word hlds__goal_util__GoalA_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_44, (MR_Integer) 0)));
#line 1059 "goal_util.m"
                        MR_Word hlds__goal_util__GoalB_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_44, (MR_Integer) 1)));
#line 1059 "goal_util.m"
                        MR_Integer hlds__goal_util__V_56_56;
#line 1059 "goal_util.m"
                        MR_Integer hlds__goal_util__Size1_80;
#line 1059 "goal_util.m"
                        MR_Integer hlds__goal_util__Size2_81;

#line 1060 "goal_util.m"
                        {
#line 1060 "goal_util.m"
                          hlds__goal_util__goal_size_2_p_0(hlds__goal_util__GoalA_54, &hlds__goal_util__Size1_80);
                        }
#line 1061 "goal_util.m"
                        {
#line 1061 "goal_util.m"
                          hlds__goal_util__goal_size_2_p_0(hlds__goal_util__GoalB_55, &hlds__goal_util__Size2_81);
                        }
#line 1062 "goal_util.m"
                        hlds__goal_util__V_56_56 = (hlds__goal_util__Size1_80 + hlds__goal_util__Size2_81);
#line 1062 "goal_util.m"
                        *hlds__goal_util__Size_4 = (hlds__goal_util__V_56_56 + (MR_Integer) 1);
#line 1059 "goal_util.m"
                      }
#line 1053 "goal_util.m"
                    else
#line 1054 "goal_util.m"
                      {
#line 1054 "goal_util.m"
                        MR_Word hlds__goal_util__SubGoal_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_44, (MR_Integer) 2)));
#line 1054 "goal_util.m"
                        MR_Word hlds__goal_util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_44, (MR_Integer) 0)));
#line 1054 "goal_util.m"
                        MR_Word hlds__goal_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_44, (MR_Integer) 1)));

#line 1057 "goal_util.m"
                        {
#line 1057 "goal_util.m"
                          hlds__goal_util__goal_size_2_p_0(hlds__goal_util__SubGoal_79, hlds__goal_util__Size_4);
#line 1057 "goal_util.m"
                          return;
                        }
#line 1054 "goal_util.m"
                      }
#line 1047 "goal_util.m"
                }
#line 1007 "goal_util.m"
              else
#line 1007 "goal_util.m"
                if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1024 "goal_util.m"
                  {
#line 1024 "goal_util.m"
                    MR_Word hlds__goal_util__Cases_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
#line 1024 "goal_util.m"
                    MR_Integer hlds__goal_util__Size1_70;
#line 1024 "goal_util.m"
                    MR_Word hlds__goal_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 1024 "goal_util.m"
                    MR_Word hlds__goal_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));

#line 1025 "goal_util.m"
                    {
#line 1025 "goal_util.m"
                      hlds__goal_util__cases_size_2_p_0(hlds__goal_util__Cases_34, &hlds__goal_util__Size1_70);
                    }
#line 1026 "goal_util.m"
                    *hlds__goal_util__Size_4 = (hlds__goal_util__Size1_70 + (MR_Integer) 1);
#line 1024 "goal_util.m"
                  }
#line 1007 "goal_util.m"
                else
#line 1008 "goal_util.m"
                  *hlds__goal_util__Size_4 = (MR_Integer) 1;
#line 1007 "goal_util.m"
  }
#line 999 "goal_util.m"
}

#line 991 "goal_util.m"
static void MR_CALL 
hlds__goal_util__cases_size_2_p_0(
#line 991 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 991 "goal_util.m"
  MR_Integer * hlds__goal_util__HeadVar__2_2)
#line 991 "goal_util.m"
{
#line 993 "goal_util.m"
  {
#line 993 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 993 "goal_util.m"
    if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 993 "goal_util.m"
      *hlds__goal_util__HeadVar__2_2 = (MR_Integer) 0;
#line 993 "goal_util.m"
    else
#line 994 "goal_util.m"
      {
#line 994 "goal_util.m"
        MR_Word hlds__goal_util__Goal_5;
#line 994 "goal_util.m"
        MR_Word hlds__goal_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 994 "goal_util.m"
        MR_Integer hlds__goal_util__Size1_8;
#line 994 "goal_util.m"
        MR_Integer hlds__goal_util__Size2_9;
#line 994 "goal_util.m"
        MR_Word hlds__goal_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 994 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr_12;
#line 994 "goal_util.m"
        MR_Word hlds__goal_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_10_10, (MR_Integer) 0)));
#line 994 "goal_util.m"
        MR_Word hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_10_10, (MR_Integer) 1)));
#line 967 "goal_util.m"
        MR_Word hlds__goal_util__V_13_13;

#line 994 "goal_util.m"
        hlds__goal_util__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_10_10, (MR_Integer) 2)));
#line 967 "goal_util.m"
        hlds__goal_util__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 0)));
#line 967 "goal_util.m"
        hlds__goal_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 1)));
#line 968 "goal_util.m"
        {
#line 968 "goal_util.m"
          hlds__goal_util__goal_expr_size_2_p_0(hlds__goal_util__GoalExpr_12, &hlds__goal_util__Size1_8);
        }
#line 996 "goal_util.m"
        {
#line 996 "goal_util.m"
          hlds__goal_util__cases_size_2_p_0(hlds__goal_util__Cases_6, &hlds__goal_util__Size2_9);
        }
#line 997 "goal_util.m"
        *hlds__goal_util__HeadVar__2_2 = (hlds__goal_util__Size1_8 + hlds__goal_util__Size2_9);
#line 994 "goal_util.m"
      }
#line 993 "goal_util.m"
  }
#line 991 "goal_util.m"
}

#line 985 "goal_util.m"
static void MR_CALL 
hlds__goal_util__clause_size_increment_3_p_0(
#line 985 "goal_util.m"
  MR_Word hlds__goal_util__Clause_4,
#line 985 "goal_util.m"
  MR_Integer hlds__goal_util__Size0_5,
#line 985 "goal_util.m"
  MR_Integer * hlds__goal_util__Size_6)
#line 985 "goal_util.m"
{
#line 987 "goal_util.m"
  {
#line 987 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 987 "goal_util.m"
    MR_Integer hlds__goal_util__ClauseSize_7;
#line 987 "goal_util.m"
    MR_Word hlds__goal_util__V_8_8;
#line 987 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_10;
#line 967 "goal_util.m"
    MR_Word hlds__goal_util__V_11_11;

#line 988 "goal_util.m"
    {
#line 988 "goal_util.m"
      hlds__goal_util__V_8_8 = hlds__hlds_clauses__clause_body_1_f_0(hlds__goal_util__Clause_4);
    }
#line 967 "goal_util.m"
    hlds__goal_util__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 0)));
#line 967 "goal_util.m"
    hlds__goal_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 1)));
#line 968 "goal_util.m"
    {
#line 968 "goal_util.m"
      hlds__goal_util__goal_expr_size_2_p_0(hlds__goal_util__GoalExpr_10, &hlds__goal_util__ClauseSize_7);
    }
#line 989 "goal_util.m"
    *hlds__goal_util__Size_6 = (hlds__goal_util__Size0_5 + hlds__goal_util__ClauseSize_7);
#line 987 "goal_util.m"
  }
#line 985 "goal_util.m"
}

#line 945 "goal_util.m"
static MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_cases_1_f_0(
#line 945 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1)
#line 945 "goal_util.m"
{
#line 947 "goal_util.m"
  {
#line 947 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 947 "goal_util.m"
    MR_Word hlds__goal_util__HeadVar__2_2;

#line 947 "goal_util.m"
    if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 947 "goal_util.m"
      hlds__goal_util__HeadVar__2_2 = (MR_Integer) 0;
#line 947 "goal_util.m"
    else
#line 948 "goal_util.m"
      {
#line 948 "goal_util.m"
        MR_Word hlds__goal_util__Case_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 948 "goal_util.m"
        MR_Word hlds__goal_util__Cases_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 948 "goal_util.m"
        MR_Word hlds__goal_util__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_3, (MR_Integer) 2)));
#line 949 "goal_util.m"
        MR_Word hlds__goal_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_3, (MR_Integer) 0)));
#line 949 "goal_util.m"
        MR_Word hlds__goal_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_3, (MR_Integer) 1)));
#line 951 "goal_util.m"
        MR_Word hlds__goal_util__V_9_9;
#line 951 "goal_util.m"
        MR_Word hlds__goal_util__V_10_10;

#line 951 "goal_util.m"
        {
#line 951 "goal_util.m"
          hlds__goal_util__V_9_9 = hlds__goal_util__proc_body_is_leaf_1_f_0(hlds__goal_util__Goal_8);
        }
#line 951 "goal_util.m"
        hlds__goal_util__succeeded = (hlds__goal_util__V_9_9 == (MR_Integer) 0);
#line 951 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 951 "goal_util.m"
          {
#line 952 "goal_util.m"
            {
#line 952 "goal_util.m"
              hlds__goal_util__V_10_10 = hlds__goal_util__proc_body_is_leaf_cases_1_f_0(hlds__goal_util__Cases_4);
            }
#line 952 "goal_util.m"
            hlds__goal_util__succeeded = (hlds__goal_util__V_10_10 == (MR_Integer) 0);
#line 951 "goal_util.m"
          }
#line 955 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 954 "goal_util.m"
          hlds__goal_util__HeadVar__2_2 = (MR_Integer) 0;
#line 955 "goal_util.m"
        else
#line 956 "goal_util.m"
          hlds__goal_util__HeadVar__2_2 = (MR_Integer) 1;
#line 948 "goal_util.m"
      }
#line 947 "goal_util.m"
    return hlds__goal_util__HeadVar__2_2;
#line 947 "goal_util.m"
  }
#line 945 "goal_util.m"
}

#line 932 "goal_util.m"
static MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_goals_1_f_0(
#line 932 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1)
#line 932 "goal_util.m"
{
#line 934 "goal_util.m"
  {
#line 934 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 934 "goal_util.m"
    MR_Word hlds__goal_util__HeadVar__2_2;

#line 934 "goal_util.m"
    if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 934 "goal_util.m"
      hlds__goal_util__HeadVar__2_2 = (MR_Integer) 0;
#line 934 "goal_util.m"
    else
#line 935 "goal_util.m"
      {
#line 935 "goal_util.m"
        MR_Word hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 935 "goal_util.m"
        MR_Word hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 937 "goal_util.m"
        MR_Word hlds__goal_util__V_6_6;
#line 937 "goal_util.m"
        MR_Word hlds__goal_util__V_7_7;

#line 937 "goal_util.m"
        {
#line 937 "goal_util.m"
          hlds__goal_util__V_6_6 = hlds__goal_util__proc_body_is_leaf_1_f_0(hlds__goal_util__Goal_3);
        }
#line 937 "goal_util.m"
        hlds__goal_util__succeeded = (hlds__goal_util__V_6_6 == (MR_Integer) 0);
#line 937 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 937 "goal_util.m"
          {
#line 938 "goal_util.m"
            {
#line 938 "goal_util.m"
              hlds__goal_util__V_7_7 = hlds__goal_util__proc_body_is_leaf_goals_1_f_0(hlds__goal_util__Goals_4);
            }
#line 938 "goal_util.m"
            hlds__goal_util__succeeded = (hlds__goal_util__V_7_7 == (MR_Integer) 0);
#line 937 "goal_util.m"
          }
#line 941 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 940 "goal_util.m"
          hlds__goal_util__HeadVar__2_2 = (MR_Integer) 0;
#line 941 "goal_util.m"
        else
#line 942 "goal_util.m"
          hlds__goal_util__HeadVar__2_2 = (MR_Integer) 1;
#line 935 "goal_util.m"
      }
#line 934 "goal_util.m"
    return hlds__goal_util__HeadVar__2_2;
#line 934 "goal_util.m"
  }
#line 932 "goal_util.m"
}

#line 671 "goal_util.m"
static void MR_CALL 
hlds__goal_util__rhs_goal_vars_3_p_0(
#line 671 "goal_util.m"
  MR_Word hlds__goal_util__RHS_1,
#line 671 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_Set_0_2,
#line 671 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_3)
#line 671 "goal_util.m"
{
#line 674 "goal_util.m"
  {
#line 674 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 674 "goal_util.m"
    if (((MR_tag((MR_Word) hlds__goal_util__RHS_1)) == (MR_mktag((MR_Integer) 1))))
#line 677 "goal_util.m"
      {
#line 677 "goal_util.m"
        MR_Word hlds__goal_util__ArgVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__RHS_1, (MR_Integer) 2)));
#line 678 "goal_util.m"
        MR_Word hlds__goal_util___Functor_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__RHS_1, (MR_Integer) 0)));
#line 678 "goal_util.m"
        MR_Word hlds__goal_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__RHS_1, (MR_Integer) 1)));

#line 679 "goal_util.m"
        {
#line 679 "goal_util.m"
          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__ArgVars_14, hlds__goal_util__STATE_VARIABLE_Set_0_2, hlds__goal_util__STATE_VARIABLE_Set_3);
#line 679 "goal_util.m"
          return;
        }
#line 677 "goal_util.m"
      }
#line 674 "goal_util.m"
    else
#line 674 "goal_util.m"
      if (((MR_tag((MR_Word) hlds__goal_util__RHS_1)) == (MR_mktag((MR_Integer) 2))))
#line 680 "goal_util.m"
        {
#line 680 "goal_util.m"
          MR_Word hlds__goal_util__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 680 "goal_util.m"
          MR_Word hlds__goal_util__NonLocals_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_1, (MR_Integer) 2)));
#line 680 "goal_util.m"
          MR_Word hlds__goal_util__LambdaVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_1, (MR_Integer) 3)));
#line 680 "goal_util.m"
          MR_Word hlds__goal_util__Goal_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_1, (MR_Integer) 6)));
#line 680 "goal_util.m"
          MR_Word hlds__goal_util__STATE_VARIABLE_Set_31_31;
#line 680 "goal_util.m"
          MR_Word hlds__goal_util__STATE_VARIABLE_Set_32_32;
#line 681 "goal_util.m"
          MR_Word hlds__goal_util__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_1, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 681 "goal_util.m"
          MR_Word hlds__goal_util__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 681 "goal_util.m"
          MR_Word hlds__goal_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 681 "goal_util.m"
          MR_Word hlds__goal_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_1, (MR_Integer) 4)));
#line 681 "goal_util.m"
          MR_Word hlds__goal_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_1, (MR_Integer) 5)));

#line 682 "goal_util.m"
          {
#line 682 "goal_util.m"
            parse_tree__set_of_var__insert_list_3_p_0(hlds__goal_util__TypeCtorInfo_36_36, hlds__goal_util__NonLocals_24, hlds__goal_util__STATE_VARIABLE_Set_0_2, &hlds__goal_util__STATE_VARIABLE_Set_31_31);
          }
#line 683 "goal_util.m"
          {
#line 683 "goal_util.m"
            parse_tree__set_of_var__insert_list_3_p_0(hlds__goal_util__TypeCtorInfo_36_36, hlds__goal_util__LambdaVars_25, hlds__goal_util__STATE_VARIABLE_Set_31_31, &hlds__goal_util__STATE_VARIABLE_Set_32_32);
          }
#line 684 "goal_util.m"
          {
#line 684 "goal_util.m"
            hlds__goal_util__goal_vars_2_3_p_0(hlds__goal_util__Goal_28, hlds__goal_util__STATE_VARIABLE_Set_32_32, hlds__goal_util__STATE_VARIABLE_Set_3);
#line 684 "goal_util.m"
            return;
          }
#line 680 "goal_util.m"
        }
#line 674 "goal_util.m"
      else
#line 674 "goal_util.m"
        {
#line 674 "goal_util.m"
          MR_Word hlds__goal_util__X_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__RHS_1, (MR_Integer) 0)));

#line 676 "goal_util.m"
          {
#line 676 "goal_util.m"
            parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__X_6, hlds__goal_util__STATE_VARIABLE_Set_0_2, hlds__goal_util__STATE_VARIABLE_Set_3);
#line 676 "goal_util.m"
            return;
          }
#line 674 "goal_util.m"
        }
#line 674 "goal_util.m"
  }
#line 671 "goal_util.m"
}

#line 663 "goal_util.m"
static void MR_CALL 
hlds__goal_util__cases_goal_vars_3_p_0(
#line 663 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 663 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_Set_0_2,
#line 663 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_3)
#line 663 "goal_util.m"
{
#line 666 "goal_util.m"
  while (MR_TRUE)
#line 666 "goal_util.m"
    {
#line 666 "goal_util.m"
      /* tailcall optimized into a loop */
#line 666 "goal_util.m"
      {
#line 666 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;

#line 666 "goal_util.m"
        if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 666 "goal_util.m"
          *hlds__goal_util__STATE_VARIABLE_Set_3 = hlds__goal_util__STATE_VARIABLE_Set_0_2;
#line 666 "goal_util.m"
        else
#line 667 "goal_util.m"
          {
#line 667 "goal_util.m"
            MR_Word hlds__goal_util__Goal_9;
#line 667 "goal_util.m"
            MR_Word hlds__goal_util__Cases_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 667 "goal_util.m"
            MR_Word hlds__goal_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 667 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_Set_15_15;
#line 667 "goal_util.m"
            MR_Word hlds__goal_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_14_14, (MR_Integer) 0)));
#line 667 "goal_util.m"
            MR_Word hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_14_14, (MR_Integer) 1)));

#line 667 "goal_util.m"
            hlds__goal_util__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_14_14, (MR_Integer) 2)));
#line 668 "goal_util.m"
            {
#line 668 "goal_util.m"
              hlds__goal_util__goal_vars_2_3_p_0(hlds__goal_util__Goal_9, hlds__goal_util__STATE_VARIABLE_Set_0_2, &hlds__goal_util__STATE_VARIABLE_Set_15_15);
            }
#line 669 "goal_util.m"
            /* direct tailcall eliminated */
#line 669 "goal_util.m"
            {
#line 669 "goal_util.m"
              MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Cases_10;
#line 669 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_Set_0__tmp_copy_2 = hlds__goal_util__STATE_VARIABLE_Set_15_15;

#line 669 "goal_util.m"
              hlds__goal_util__STATE_VARIABLE_Set_0_2 = hlds__goal_util__STATE_VARIABLE_Set_0__tmp_copy_2;
#line 669 "goal_util.m"
              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 669 "goal_util.m"
            }
#line 669 "goal_util.m"
            continue;
#line 667 "goal_util.m"
          }
#line 666 "goal_util.m"
      }
#line 666 "goal_util.m"
      break;
#line 666 "goal_util.m"
    }
#line 663 "goal_util.m"
}

#line 625 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__goal_vars_2_3_p_0_2(
#line 625 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 625 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1)
#line 625 "goal_util.m"
{
#line 625 "goal_util.m"
  {
#line 625 "goal_util.m"
    MR_Box hlds__goal_util__wrapper_arg_2;
#line 625 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 625 "goal_util.m"
    MR_Word hlds__goal_util__conv1_HeadVar__2_2;

#line 625 "goal_util.m"
    {
#line 625 "goal_util.m"
      hlds__goal_util__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    }
#line 625 "goal_util.m"
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv1_HeadVar__2_2));
#line 625 "goal_util.m"
    return hlds__goal_util__wrapper_arg_2;
#line 625 "goal_util.m"
  }
#line 625 "goal_util.m"
}

#line 624 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__goal_vars_2_3_p_0_1(
#line 624 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 624 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1)
#line 624 "goal_util.m"
{
#line 624 "goal_util.m"
  {
#line 624 "goal_util.m"
    MR_Box hlds__goal_util__wrapper_arg_2;
#line 624 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 624 "goal_util.m"
    MR_Word hlds__goal_util__conv0_HeadVar__2_2;

#line 624 "goal_util.m"
    {
#line 624 "goal_util.m"
      hlds__goal_util__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    }
#line 624 "goal_util.m"
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__2_2));
#line 624 "goal_util.m"
    return hlds__goal_util__wrapper_arg_2;
#line 624 "goal_util.m"
  }
#line 624 "goal_util.m"
}

#line 544 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_vars_2_3_p_0(
#line 544 "goal_util.m"
  MR_Word hlds__goal_util__Goal_4,
#line 544 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_Set_0_95,
#line 544 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_96)
#line 544 "goal_util.m"
{
#line 547 "goal_util.m"
  while (MR_TRUE)
#line 547 "goal_util.m"
    {
#line 547 "goal_util.m"
      /* tailcall optimized into a loop */
#line 547 "goal_util.m"
      {
#line 547 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;
#line 547 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, (MR_Integer) 0)));
#line 548 "goal_util.m"
        MR_Word hlds__goal_util___GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, (MR_Integer) 1)));

#line 569 "goal_util.m"
        if (((MR_tag((MR_Word) hlds__goal_util__GoalExpr_6)) == (MR_mktag((MR_Integer) 0))))
#line 614 "goal_util.m"
          {
#line 614 "goal_util.m"
            MR_Word hlds__goal_util__SubGoal_140 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_6), (MR_Integer) 0);

#line 615 "goal_util.m"
            /* direct tailcall eliminated */
#line 615 "goal_util.m"
            {
#line 615 "goal_util.m"
              MR_Word hlds__goal_util__Goal__tmp_copy_4 = hlds__goal_util__SubGoal_140;

#line 615 "goal_util.m"
              hlds__goal_util__Goal_4 = hlds__goal_util__Goal__tmp_copy_4;
#line 615 "goal_util.m"
            }
#line 615 "goal_util.m"
            continue;
#line 614 "goal_util.m"
          }
#line 569 "goal_util.m"
        else
#line 569 "goal_util.m"
          if (((MR_tag((MR_Word) hlds__goal_util__GoalExpr_6)) == (MR_mktag((MR_Integer) 2))))
#line 575 "goal_util.m"
            {
#line 575 "goal_util.m"
              MR_Word hlds__goal_util__ArgVars_133 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
#line 575 "goal_util.m"
              MR_Word hlds__goal_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 0)));
#line 575 "goal_util.m"
              MR_Integer hlds__goal_util__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
#line 575 "goal_util.m"
              MR_Word hlds__goal_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 3)));
#line 575 "goal_util.m"
              MR_Word hlds__goal_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 4)));
#line 575 "goal_util.m"
              MR_Word hlds__goal_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 5)));

#line 576 "goal_util.m"
              {
#line 576 "goal_util.m"
                parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__ArgVars_133, hlds__goal_util__STATE_VARIABLE_Set_0_95, hlds__goal_util__STATE_VARIABLE_Set_96);
#line 576 "goal_util.m"
                return;
              }
#line 575 "goal_util.m"
            }
#line 569 "goal_util.m"
          else
#line 569 "goal_util.m"
            if (((MR_tag((MR_Word) hlds__goal_util__GoalExpr_6)) == (MR_mktag((MR_Integer) 1))))
#line 550 "goal_util.m"
              {
#line 550 "goal_util.m"
                MR_Word hlds__goal_util__TypeCtorInfo_146_146 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 550 "goal_util.m"
                MR_Word hlds__goal_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_6, (MR_Integer) 0)));
#line 550 "goal_util.m"
                MR_Word hlds__goal_util__RHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
#line 550 "goal_util.m"
                MR_Word hlds__goal_util__Unif_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_6, (MR_Integer) 3)));
#line 550 "goal_util.m"
                MR_Word hlds__goal_util__STATE_VARIABLE_Set_129_129;
#line 550 "goal_util.m"
                MR_Word hlds__goal_util__STATE_VARIABLE_Set_131_131;
#line 550 "goal_util.m"
                MR_Word hlds__goal_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
#line 550 "goal_util.m"
                MR_Word hlds__goal_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_6, (MR_Integer) 4)));

#line 551 "goal_util.m"
                {
#line 551 "goal_util.m"
                  parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_146_146, hlds__goal_util__Var_8, hlds__goal_util__STATE_VARIABLE_Set_0_95, &hlds__goal_util__STATE_VARIABLE_Set_129_129);
                }
#line 559 "goal_util.m"
                if (((MR_tag((MR_Word) hlds__goal_util__Unif_11)) == (MR_mktag((MR_Integer) 2))))
#line 562 "goal_util.m"
                  hlds__goal_util__STATE_VARIABLE_Set_131_131 = hlds__goal_util__STATE_VARIABLE_Set_129_129;
#line 559 "goal_util.m"
                else
#line 559 "goal_util.m"
                  if (((MR_tag((MR_Word) hlds__goal_util__Unif_11)) == (MR_mktag((MR_Integer) 0))))
#line 553 "goal_util.m"
                    {
#line 553 "goal_util.m"
                      MR_Word hlds__goal_util__CellToReuse_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unif_11, (MR_Integer) 4)));
#line 553 "goal_util.m"
                      MR_Word hlds__goal_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unif_11, (MR_Integer) 0)));
#line 553 "goal_util.m"
                      MR_Word hlds__goal_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unif_11, (MR_Integer) 1)));
#line 553 "goal_util.m"
                      MR_Word hlds__goal_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unif_11, (MR_Integer) 2)));
#line 553 "goal_util.m"
                      MR_Word hlds__goal_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unif_11, (MR_Integer) 3)));
#line 553 "goal_util.m"
                      MR_Word hlds__goal_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unif_11, (MR_Integer) 5)));
#line 553 "goal_util.m"
                      MR_Word hlds__goal_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unif_11, (MR_Integer) 6)));
#line 554 "goal_util.m"
                      MR_Word hlds__goal_util__TypeInfo_166_166;
#line 554 "goal_util.m"
                      MR_Word hlds__goal_util__V_130_130;
#line 554 "goal_util.m"
                      MR_Word hlds__goal_util__V_164_164;
#line 554 "goal_util.m"
                      MR_Word hlds__goal_util__V_20_20;
#line 554 "goal_util.m"
                      MR_Word hlds__goal_util__V_21_21;

#line 554 "goal_util.m"
                      hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__CellToReuse_17)) == (MR_mktag((MR_Integer) 1)));
#line 554 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 554 "goal_util.m"
                        {
#line 554 "goal_util.m"
                          hlds__goal_util__V_130_130 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__CellToReuse_17), (MR_Integer) 1);
#line 554 "goal_util.m"
                          hlds__goal_util__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_130_130, (MR_Integer) 0)));
#line 554 "goal_util.m"
                          hlds__goal_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_130_130, (MR_Integer) 1)));
#line 554 "goal_util.m"
                          hlds__goal_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_130_130, (MR_Integer) 2)));
#line 9163 "hlds.goal_util.c"
                          hlds__goal_util__TypeInfo_166_166 = (MR_Word) &hlds__goal_util_scalar_common_1[0];
#line 554 "goal_util.m"
                          {
#line 554 "goal_util.m"
                            hlds__goal_util__succeeded = mercury__builtin__unify_2_p_0(hlds__goal_util__TypeInfo_166_166, ((MR_Box) (hlds__goal_util__Var_8)), ((MR_Box) (hlds__goal_util__V_164_164)));
                          }
#line 554 "goal_util.m"
                        }
#line 556 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 555 "goal_util.m"
                        {
#line 555 "goal_util.m"
                          parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_146_146, hlds__goal_util__Var_8, hlds__goal_util__STATE_VARIABLE_Set_129_129, &hlds__goal_util__STATE_VARIABLE_Set_131_131);
                        }
#line 556 "goal_util.m"
                      else
#line 555 "goal_util.m"
                        hlds__goal_util__STATE_VARIABLE_Set_131_131 = hlds__goal_util__STATE_VARIABLE_Set_129_129;
#line 553 "goal_util.m"
                    }
#line 559 "goal_util.m"
                  else
#line 559 "goal_util.m"
                    if (((MR_tag((MR_Word) hlds__goal_util__Unif_11)) == (MR_mktag((MR_Integer) 1))))
#line 560 "goal_util.m"
                      hlds__goal_util__STATE_VARIABLE_Set_131_131 = hlds__goal_util__STATE_VARIABLE_Set_129_129;
#line 559 "goal_util.m"
                    else
#line 559 "goal_util.m"
                      if (((((MR_tag((MR_Word) hlds__goal_util__Unif_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Unif_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 566 "goal_util.m"
                        hlds__goal_util__STATE_VARIABLE_Set_131_131 = hlds__goal_util__STATE_VARIABLE_Set_129_129;
#line 559 "goal_util.m"
                      else
#line 564 "goal_util.m"
                        hlds__goal_util__STATE_VARIABLE_Set_131_131 = hlds__goal_util__STATE_VARIABLE_Set_129_129;
#line 568 "goal_util.m"
                {
#line 568 "goal_util.m"
                  hlds__goal_util__rhs_goal_vars_3_p_0(hlds__goal_util__RHS_9, hlds__goal_util__STATE_VARIABLE_Set_131_131, hlds__goal_util__STATE_VARIABLE_Set_96);
#line 568 "goal_util.m"
                  return;
                }
#line 550 "goal_util.m"
              }
#line 569 "goal_util.m"
            else
#line 569 "goal_util.m"
              if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 623 "goal_util.m"
                {
#line 623 "goal_util.m"
                  MR_Word hlds__goal_util__TypeCtorInfo_156_156 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 623 "goal_util.m"
                  MR_Word hlds__goal_util__TypeInfo_157_157 = (MR_Word) &hlds__goal_util_scalar_common_1[0];
#line 623 "goal_util.m"
                  MR_Word hlds__goal_util__TypeCtorInfo_162_162;
#line 623 "goal_util.m"
                  MR_Word hlds__goal_util__Args_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 4)));
#line 623 "goal_util.m"
                  MR_Word hlds__goal_util__ExtraArgs_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 5)));
#line 623 "goal_util.m"
                  MR_Word hlds__goal_util__ExtraVars_77;
#line 623 "goal_util.m"
                  MR_Word hlds__goal_util__STATE_VARIABLE_Set_109_109;
#line 623 "goal_util.m"
                  MR_Word hlds__goal_util__ArgVars_142;
#line 623 "goal_util.m"
                  MR_Word hlds__goal_util__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
#line 623 "goal_util.m"
                  MR_Word hlds__goal_util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
#line 623 "goal_util.m"
                  MR_Integer hlds__goal_util__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 3)));
#line 623 "goal_util.m"
                  MR_Word hlds__goal_util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 6)));
#line 623 "goal_util.m"
                  MR_Word hlds__goal_util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 7)));

#line 624 "goal_util.m"
                  {
#line 624 "goal_util.m"
                    hlds__goal_util__ArgVars_142 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_156_156, hlds__goal_util__TypeInfo_157_157, (MR_Word) &hlds__goal_util_scalar_common_4[13], hlds__goal_util__Args_73);
                  }
#line 625 "goal_util.m"
                  {
#line 625 "goal_util.m"
                    hlds__goal_util__ExtraVars_77 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_156_156, hlds__goal_util__TypeInfo_157_157, (MR_Word) &hlds__goal_util_scalar_common_4[14], hlds__goal_util__ExtraArgs_74);
                  }
#line 9253 "hlds.goal_util.c"
                  hlds__goal_util__TypeCtorInfo_162_162 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 626 "goal_util.m"
                  {
#line 626 "goal_util.m"
                    parse_tree__set_of_var__insert_list_3_p_0(hlds__goal_util__TypeCtorInfo_162_162, hlds__goal_util__ArgVars_142, hlds__goal_util__STATE_VARIABLE_Set_0_95, &hlds__goal_util__STATE_VARIABLE_Set_109_109);
                  }
#line 627 "goal_util.m"
                  {
#line 627 "goal_util.m"
                    parse_tree__set_of_var__insert_list_3_p_0(hlds__goal_util__TypeCtorInfo_162_162, hlds__goal_util__ExtraVars_77, hlds__goal_util__STATE_VARIABLE_Set_109_109, hlds__goal_util__STATE_VARIABLE_Set_96);
#line 627 "goal_util.m"
                    return;
                  }
#line 623 "goal_util.m"
                }
#line 569 "goal_util.m"
              else
#line 569 "goal_util.m"
                if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 580 "goal_util.m"
                  {
#line 580 "goal_util.m"
                    MR_Word hlds__goal_util__Goals_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
#line 578 "goal_util.m"
                    MR_Word hlds__goal_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));

#line 581 "goal_util.m"
                    {
#line 581 "goal_util.m"
                      hlds__goal_util__goals_goal_vars_3_p_0(hlds__goal_util__Goals_47, hlds__goal_util__STATE_VARIABLE_Set_0_95, hlds__goal_util__STATE_VARIABLE_Set_96);
#line 581 "goal_util.m"
                      return;
                    }
#line 580 "goal_util.m"
                  }
#line 569 "goal_util.m"
                else
#line 569 "goal_util.m"
                  if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 580 "goal_util.m"
                    {
#line 580 "goal_util.m"
                      MR_Word hlds__goal_util__Goals_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));

#line 581 "goal_util.m"
                      {
#line 581 "goal_util.m"
                        hlds__goal_util__goals_goal_vars_3_p_0(hlds__goal_util__Goals_165, hlds__goal_util__STATE_VARIABLE_Set_0_95, hlds__goal_util__STATE_VARIABLE_Set_96);
#line 581 "goal_util.m"
                        return;
                      }
#line 580 "goal_util.m"
                    }
#line 569 "goal_util.m"
                  else
#line 569 "goal_util.m"
                    if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 570 "goal_util.m"
                      {
#line 570 "goal_util.m"
                        MR_Word hlds__goal_util__TypeCtorInfo_147_147;
#line 570 "goal_util.m"
                        MR_Word hlds__goal_util__GenericCall_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
#line 570 "goal_util.m"
                        MR_Word hlds__goal_util__ArgVars_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
#line 570 "goal_util.m"
                        MR_Word hlds__goal_util__GenericCallVars_40;
#line 570 "goal_util.m"
                        MR_Word hlds__goal_util__STATE_VARIABLE_Set_127_127;
#line 570 "goal_util.m"
                        MR_Word hlds__goal_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 3)));
#line 570 "goal_util.m"
                        MR_Word hlds__goal_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 4)));
#line 570 "goal_util.m"
                        MR_Word hlds__goal_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 5)));

#line 571 "goal_util.m"
                        {
#line 571 "goal_util.m"
                          hlds__goal_util__generic_call_vars_2_p_0(hlds__goal_util__GenericCall_35, &hlds__goal_util__GenericCallVars_40);
                        }
#line 9335 "hlds.goal_util.c"
                        hlds__goal_util__TypeCtorInfo_147_147 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 572 "goal_util.m"
                        {
#line 572 "goal_util.m"
                          parse_tree__set_of_var__insert_list_3_p_0(hlds__goal_util__TypeCtorInfo_147_147, hlds__goal_util__GenericCallVars_40, hlds__goal_util__STATE_VARIABLE_Set_0_95, &hlds__goal_util__STATE_VARIABLE_Set_127_127);
                        }
#line 573 "goal_util.m"
                        {
#line 573 "goal_util.m"
                          parse_tree__set_of_var__insert_list_3_p_0(hlds__goal_util__TypeCtorInfo_147_147, hlds__goal_util__ArgVars_36, hlds__goal_util__STATE_VARIABLE_Set_127_127, hlds__goal_util__STATE_VARIABLE_Set_96);
#line 573 "goal_util.m"
                          return;
                        }
#line 570 "goal_util.m"
                      }
#line 569 "goal_util.m"
                    else
#line 569 "goal_util.m"
                      if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 617 "goal_util.m"
                        {
#line 617 "goal_util.m"
                          MR_Word hlds__goal_util__Cond_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
#line 617 "goal_util.m"
                          MR_Word hlds__goal_util__Then_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 3)));
#line 617 "goal_util.m"
                          MR_Word hlds__goal_util__Else_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 4)));
#line 617 "goal_util.m"
                          MR_Word hlds__goal_util__STATE_VARIABLE_Set_111_111;
#line 617 "goal_util.m"
                          MR_Word hlds__goal_util__STATE_VARIABLE_Set_112_112;
#line 617 "goal_util.m"
                          MR_Word hlds__goal_util__STATE_VARIABLE_Set_113_113;
#line 617 "goal_util.m"
                          MR_Word hlds__goal_util__Vars_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));

#line 618 "goal_util.m"
                          {
#line 618 "goal_util.m"
                            parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Vars_141, hlds__goal_util__STATE_VARIABLE_Set_0_95, &hlds__goal_util__STATE_VARIABLE_Set_111_111);
                          }
#line 619 "goal_util.m"
                          {
#line 619 "goal_util.m"
                            hlds__goal_util__goal_vars_2_3_p_0(hlds__goal_util__Cond_67, hlds__goal_util__STATE_VARIABLE_Set_111_111, &hlds__goal_util__STATE_VARIABLE_Set_112_112);
                          }
#line 620 "goal_util.m"
                          {
#line 620 "goal_util.m"
                            hlds__goal_util__goal_vars_2_3_p_0(hlds__goal_util__Then_68, hlds__goal_util__STATE_VARIABLE_Set_112_112, &hlds__goal_util__STATE_VARIABLE_Set_113_113);
                          }
#line 621 "goal_util.m"
                          /* direct tailcall eliminated */
#line 621 "goal_util.m"
                          {
#line 621 "goal_util.m"
                            MR_Word hlds__goal_util__Goal__tmp_copy_4 = hlds__goal_util__Else_69;
#line 621 "goal_util.m"
                            MR_Word hlds__goal_util__STATE_VARIABLE_Set_0__tmp_copy_95 = hlds__goal_util__STATE_VARIABLE_Set_113_113;

#line 621 "goal_util.m"
                            hlds__goal_util__STATE_VARIABLE_Set_0_95 = hlds__goal_util__STATE_VARIABLE_Set_0__tmp_copy_95;
#line 621 "goal_util.m"
                            hlds__goal_util__Goal_4 = hlds__goal_util__Goal__tmp_copy_4;
#line 621 "goal_util.m"
                          }
#line 621 "goal_util.m"
                          continue;
#line 617 "goal_util.m"
                        }
#line 569 "goal_util.m"
                      else
#line 569 "goal_util.m"
                        if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 587 "goal_util.m"
                          {
#line 587 "goal_util.m"
                            MR_Word hlds__goal_util__Reason_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
#line 587 "goal_util.m"
                            MR_Word hlds__goal_util__SubGoal_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
#line 587 "goal_util.m"
                            MR_Word hlds__goal_util__STATE_VARIABLE_Set_121_121;

#line 591 "goal_util.m"
                            if (((MR_tag((MR_Word) hlds__goal_util__Reason_50)) == (MR_mktag((MR_Integer) 0))))
#line 589 "goal_util.m"
                              {
#line 589 "goal_util.m"
                                MR_Word hlds__goal_util__Vars_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Reason_50, (MR_Integer) 0)));

#line 590 "goal_util.m"
                                {
#line 590 "goal_util.m"
                                  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Vars_52, hlds__goal_util__STATE_VARIABLE_Set_0_95, &hlds__goal_util__STATE_VARIABLE_Set_121_121);
                                }
#line 589 "goal_util.m"
                              }
#line 591 "goal_util.m"
                            else
#line 591 "goal_util.m"
                              if (((MR_tag((MR_Word) hlds__goal_util__Reason_50)) == (MR_mktag((MR_Integer) 2))))
#line 605 "goal_util.m"
                                hlds__goal_util__STATE_VARIABLE_Set_121_121 = hlds__goal_util__STATE_VARIABLE_Set_0_95;
#line 591 "goal_util.m"
                              else
#line 591 "goal_util.m"
                                if (((MR_tag((MR_Word) hlds__goal_util__Reason_50)) == (MR_mktag((MR_Integer) 1))))
#line 592 "goal_util.m"
                                  {
#line 592 "goal_util.m"
                                    MR_Word hlds__goal_util__Vars_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Reason_50, (MR_Integer) 0)));
#line 592 "goal_util.m"
                                    MR_Word hlds__goal_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Reason_50, (MR_Integer) 1)));

#line 593 "goal_util.m"
                                    {
#line 593 "goal_util.m"
                                      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Vars_135, hlds__goal_util__STATE_VARIABLE_Set_0_95, &hlds__goal_util__STATE_VARIABLE_Set_121_121);
                                    }
#line 592 "goal_util.m"
                                  }
#line 591 "goal_util.m"
                                else
#line 591 "goal_util.m"
                                  if (((((MR_tag((MR_Word) hlds__goal_util__Reason_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 608 "goal_util.m"
                                    hlds__goal_util__STATE_VARIABLE_Set_121_121 = hlds__goal_util__STATE_VARIABLE_Set_0_95;
#line 591 "goal_util.m"
                                  else
#line 591 "goal_util.m"
                                    if (((((MR_tag((MR_Word) hlds__goal_util__Reason_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 607 "goal_util.m"
                                      hlds__goal_util__STATE_VARIABLE_Set_121_121 = hlds__goal_util__STATE_VARIABLE_Set_0_95;
#line 591 "goal_util.m"
                                    else
#line 591 "goal_util.m"
                                      if (((((MR_tag((MR_Word) hlds__goal_util__Reason_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 595 "goal_util.m"
                                        {
#line 595 "goal_util.m"
                                          MR_Word hlds__goal_util__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 1)));
#line 595 "goal_util.m"
                                          MR_Word hlds__goal_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 2)));

#line 596 "goal_util.m"
                                          {
#line 596 "goal_util.m"
                                            parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Var_136, hlds__goal_util__STATE_VARIABLE_Set_0_95, &hlds__goal_util__STATE_VARIABLE_Set_121_121);
                                          }
#line 595 "goal_util.m"
                                        }
#line 591 "goal_util.m"
                                      else
#line 591 "goal_util.m"
                                        if (((((MR_tag((MR_Word) hlds__goal_util__Reason_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 601 "goal_util.m"
                                          {
#line 601 "goal_util.m"
                                            MR_Word hlds__goal_util__TypeCtorInfo_154_154 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 601 "goal_util.m"
                                            MR_Word hlds__goal_util__LCVar_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 1)));
#line 601 "goal_util.m"
                                            MR_Word hlds__goal_util__LCSVar_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 2)));
#line 601 "goal_util.m"
                                            MR_Word hlds__goal_util__STATE_VARIABLE_Set_116_116;
#line 601 "goal_util.m"
                                            MR_Word hlds__goal_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 3)));

#line 602 "goal_util.m"
                                            {
#line 602 "goal_util.m"
                                              parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_154_154, hlds__goal_util__LCVar_55, hlds__goal_util__STATE_VARIABLE_Set_0_95, &hlds__goal_util__STATE_VARIABLE_Set_116_116);
                                            }
#line 603 "goal_util.m"
                                            {
#line 603 "goal_util.m"
                                              parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_154_154, hlds__goal_util__LCSVar_56, hlds__goal_util__STATE_VARIABLE_Set_116_116, &hlds__goal_util__STATE_VARIABLE_Set_121_121);
                                            }
#line 601 "goal_util.m"
                                          }
#line 591 "goal_util.m"
                                        else
#line 591 "goal_util.m"
                                          if (((((MR_tag((MR_Word) hlds__goal_util__Reason_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 598 "goal_util.m"
                                            {
#line 598 "goal_util.m"
                                              MR_Word hlds__goal_util__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 1)));

#line 599 "goal_util.m"
                                              {
#line 599 "goal_util.m"
                                                parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Var_137, hlds__goal_util__STATE_VARIABLE_Set_0_95, &hlds__goal_util__STATE_VARIABLE_Set_121_121);
                                              }
#line 598 "goal_util.m"
                                            }
#line 591 "goal_util.m"
                                          else
#line 591 "goal_util.m"
                                            if (((((MR_tag((MR_Word) hlds__goal_util__Reason_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 606 "goal_util.m"
                                              hlds__goal_util__STATE_VARIABLE_Set_121_121 = hlds__goal_util__STATE_VARIABLE_Set_0_95;
#line 591 "goal_util.m"
                                            else
#line 609 "goal_util.m"
                                              hlds__goal_util__STATE_VARIABLE_Set_121_121 = hlds__goal_util__STATE_VARIABLE_Set_0_95;
#line 612 "goal_util.m"
                            /* direct tailcall eliminated */
#line 612 "goal_util.m"
                            {
#line 612 "goal_util.m"
                              MR_Word hlds__goal_util__Goal__tmp_copy_4 = hlds__goal_util__SubGoal_51;
#line 612 "goal_util.m"
                              MR_Word hlds__goal_util__STATE_VARIABLE_Set_0__tmp_copy_95 = hlds__goal_util__STATE_VARIABLE_Set_121_121;

#line 612 "goal_util.m"
                              hlds__goal_util__STATE_VARIABLE_Set_0_95 = hlds__goal_util__STATE_VARIABLE_Set_0__tmp_copy_95;
#line 612 "goal_util.m"
                              hlds__goal_util__Goal_4 = hlds__goal_util__Goal__tmp_copy_4;
#line 612 "goal_util.m"
                            }
#line 612 "goal_util.m"
                            continue;
#line 587 "goal_util.m"
                          }
#line 569 "goal_util.m"
                        else
#line 569 "goal_util.m"
                          if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 629 "goal_util.m"
                            {
#line 629 "goal_util.m"
                              MR_Word hlds__goal_util__Shorthand_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));

#line 647 "goal_util.m"
                              if (((MR_tag((MR_Word) hlds__goal_util__Shorthand_78)) == (MR_mktag((MR_Integer) 1))))
#line 632 "goal_util.m"
                                {
#line 632 "goal_util.m"
                                  MR_Word hlds__goal_util__TypeCtorInfo_163_163 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 632 "goal_util.m"
                                  MR_Word hlds__goal_util__Outer_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_78, (MR_Integer) 1)));
#line 632 "goal_util.m"
                                  MR_Word hlds__goal_util__Inner_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_78, (MR_Integer) 2)));
#line 632 "goal_util.m"
                                  MR_Word hlds__goal_util__MaybeOutputVars_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_78, (MR_Integer) 3)));
#line 632 "goal_util.m"
                                  MR_Word hlds__goal_util__MainGoal_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_78, (MR_Integer) 4)));
#line 632 "goal_util.m"
                                  MR_Word hlds__goal_util__OrElseGoals_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_78, (MR_Integer) 5)));
#line 632 "goal_util.m"
                                  MR_Word hlds__goal_util__OuterDI_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Outer_80, (MR_Integer) 0)));
#line 632 "goal_util.m"
                                  MR_Word hlds__goal_util__OuterUO_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Outer_80, (MR_Integer) 1)));
#line 632 "goal_util.m"
                                  MR_Word hlds__goal_util__InnerDI_88;
#line 632 "goal_util.m"
                                  MR_Word hlds__goal_util__InnerUO_89;
#line 632 "goal_util.m"
                                  MR_Word hlds__goal_util__STATE_VARIABLE_Set_100_100;
#line 632 "goal_util.m"
                                  MR_Word hlds__goal_util__STATE_VARIABLE_Set_101_101;
#line 632 "goal_util.m"
                                  MR_Word hlds__goal_util__STATE_VARIABLE_Set_102_102;
#line 632 "goal_util.m"
                                  MR_Word hlds__goal_util__STATE_VARIABLE_Set_103_103;
#line 632 "goal_util.m"
                                  MR_Word hlds__goal_util__STATE_VARIABLE_Set_104_104;
#line 632 "goal_util.m"
                                  MR_Word hlds__goal_util__STATE_VARIABLE_Set_105_105;
#line 631 "goal_util.m"
                                  MR_Word hlds__goal_util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_78, (MR_Integer) 0)));
#line 631 "goal_util.m"
                                  MR_Word hlds__goal_util__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_78, (MR_Integer) 6)));

#line 634 "goal_util.m"
                                  {
#line 634 "goal_util.m"
                                    parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_163_163, hlds__goal_util__OuterDI_86, hlds__goal_util__STATE_VARIABLE_Set_0_95, &hlds__goal_util__STATE_VARIABLE_Set_100_100);
                                  }
#line 635 "goal_util.m"
                                  {
#line 635 "goal_util.m"
                                    parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_163_163, hlds__goal_util__OuterUO_87, hlds__goal_util__STATE_VARIABLE_Set_100_100, &hlds__goal_util__STATE_VARIABLE_Set_101_101);
                                  }
#line 636 "goal_util.m"
                                  hlds__goal_util__InnerDI_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Inner_81, (MR_Integer) 0)));
#line 636 "goal_util.m"
                                  hlds__goal_util__InnerUO_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Inner_81, (MR_Integer) 1)));
#line 637 "goal_util.m"
                                  {
#line 637 "goal_util.m"
                                    parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_163_163, hlds__goal_util__InnerDI_88, hlds__goal_util__STATE_VARIABLE_Set_101_101, &hlds__goal_util__STATE_VARIABLE_Set_102_102);
                                  }
#line 638 "goal_util.m"
                                  {
#line 638 "goal_util.m"
                                    parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_163_163, hlds__goal_util__InnerUO_89, hlds__goal_util__STATE_VARIABLE_Set_102_102, &hlds__goal_util__STATE_VARIABLE_Set_103_103);
                                  }
#line 641 "goal_util.m"
                                  if ((hlds__goal_util__MaybeOutputVars_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 640 "goal_util.m"
                                    hlds__goal_util__STATE_VARIABLE_Set_104_104 = hlds__goal_util__STATE_VARIABLE_Set_103_103;
#line 641 "goal_util.m"
                                  else
#line 642 "goal_util.m"
                                    {
#line 642 "goal_util.m"
                                      MR_Word hlds__goal_util__OutputVars_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeOutputVars_82, (MR_Integer) 0)));

#line 643 "goal_util.m"
                                      {
#line 643 "goal_util.m"
                                        parse_tree__set_of_var__insert_list_3_p_0(hlds__goal_util__TypeCtorInfo_163_163, hlds__goal_util__OutputVars_90, hlds__goal_util__STATE_VARIABLE_Set_103_103, &hlds__goal_util__STATE_VARIABLE_Set_104_104);
                                      }
#line 642 "goal_util.m"
                                    }
#line 645 "goal_util.m"
                                  {
#line 645 "goal_util.m"
                                    hlds__goal_util__goal_vars_2_3_p_0(hlds__goal_util__MainGoal_83, hlds__goal_util__STATE_VARIABLE_Set_104_104, &hlds__goal_util__STATE_VARIABLE_Set_105_105);
                                  }
#line 646 "goal_util.m"
                                  {
#line 646 "goal_util.m"
                                    hlds__goal_util__goals_goal_vars_3_p_0(hlds__goal_util__OrElseGoals_84, hlds__goal_util__STATE_VARIABLE_Set_105_105, hlds__goal_util__STATE_VARIABLE_Set_96);
#line 646 "goal_util.m"
                                    return;
                                  }
#line 632 "goal_util.m"
                                }
#line 647 "goal_util.m"
                              else
#line 647 "goal_util.m"
                                if (((MR_tag((MR_Word) hlds__goal_util__Shorthand_78)) == (MR_mktag((MR_Integer) 0))))
#line 652 "goal_util.m"
                                  {
#line 652 "goal_util.m"
                                    MR_Word hlds__goal_util__LeftGoal_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Shorthand_78, (MR_Integer) 0)));
#line 652 "goal_util.m"
                                    MR_Word hlds__goal_util__RightGoal_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Shorthand_78, (MR_Integer) 1)));
#line 652 "goal_util.m"
                                    MR_Word hlds__goal_util__STATE_VARIABLE_Set_97_97;

#line 653 "goal_util.m"
                                    {
#line 653 "goal_util.m"
                                      hlds__goal_util__goal_vars_2_3_p_0(hlds__goal_util__LeftGoal_93, hlds__goal_util__STATE_VARIABLE_Set_0_95, &hlds__goal_util__STATE_VARIABLE_Set_97_97);
                                    }
#line 654 "goal_util.m"
                                    /* direct tailcall eliminated */
#line 654 "goal_util.m"
                                    {
#line 654 "goal_util.m"
                                      MR_Word hlds__goal_util__Goal__tmp_copy_4 = hlds__goal_util__RightGoal_94;
#line 654 "goal_util.m"
                                      MR_Word hlds__goal_util__STATE_VARIABLE_Set_0__tmp_copy_95 = hlds__goal_util__STATE_VARIABLE_Set_97_97;

#line 654 "goal_util.m"
                                      hlds__goal_util__STATE_VARIABLE_Set_0_95 = hlds__goal_util__STATE_VARIABLE_Set_0__tmp_copy_95;
#line 654 "goal_util.m"
                                      hlds__goal_util__Goal_4 = hlds__goal_util__Goal__tmp_copy_4;
#line 654 "goal_util.m"
                                    }
#line 654 "goal_util.m"
                                    continue;
#line 652 "goal_util.m"
                                  }
#line 647 "goal_util.m"
                                else
#line 648 "goal_util.m"
                                  {
#line 648 "goal_util.m"
                                    MR_Word hlds__goal_util__SubGoal_143 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__Shorthand_78, (MR_Integer) 2)));
#line 648 "goal_util.m"
                                    MR_Word hlds__goal_util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__Shorthand_78, (MR_Integer) 0)));
#line 648 "goal_util.m"
                                    MR_Word hlds__goal_util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__Shorthand_78, (MR_Integer) 1)));

#line 650 "goal_util.m"
                                    /* direct tailcall eliminated */
#line 650 "goal_util.m"
                                    {
#line 650 "goal_util.m"
                                      MR_Word hlds__goal_util__Goal__tmp_copy_4 = hlds__goal_util__SubGoal_143;

#line 650 "goal_util.m"
                                      hlds__goal_util__Goal_4 = hlds__goal_util__Goal__tmp_copy_4;
#line 650 "goal_util.m"
                                    }
#line 650 "goal_util.m"
                                    continue;
#line 648 "goal_util.m"
                                  }
#line 629 "goal_util.m"
                            }
#line 569 "goal_util.m"
                          else
#line 583 "goal_util.m"
                            {
#line 583 "goal_util.m"
                              MR_Word hlds__goal_util__Cases_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 3)));
#line 583 "goal_util.m"
                              MR_Word hlds__goal_util__STATE_VARIABLE_Set_123_123;
#line 583 "goal_util.m"
                              MR_Word hlds__goal_util__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
#line 583 "goal_util.m"
                              MR_Word hlds__goal_util___Det_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));

#line 584 "goal_util.m"
                              {
#line 584 "goal_util.m"
                                parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Var_134, hlds__goal_util__STATE_VARIABLE_Set_0_95, &hlds__goal_util__STATE_VARIABLE_Set_123_123);
                              }
#line 585 "goal_util.m"
                              {
#line 585 "goal_util.m"
                                hlds__goal_util__cases_goal_vars_3_p_0(hlds__goal_util__Cases_49, hlds__goal_util__STATE_VARIABLE_Set_123_123, hlds__goal_util__STATE_VARIABLE_Set_96);
#line 585 "goal_util.m"
                                return;
                              }
#line 583 "goal_util.m"
                            }
#line 547 "goal_util.m"
      }
#line 547 "goal_util.m"
      break;
#line 547 "goal_util.m"
    }
#line 544 "goal_util.m"
}

#line 474 "goal_util.m"
static void MR_CALL 
hlds__goal_util__create_renaming_2_12_p_0(
#line 474 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 474 "goal_util.m"
  MR_Word hlds__goal_util__InstMapDelta_2,
#line 474 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0_3,
#line 474 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarSet_4,
#line 474 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0_5,
#line 474 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarTypes_6,
#line 474 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_RevUnifies_0_7,
#line 474 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_RevUnifies_8,
#line 474 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_RevNewVars_0_9,
#line 474 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_RevNewVars_10,
#line 474 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_Renaming_0_11,
#line 474 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Renaming_12)
#line 474 "goal_util.m"
{
#line 480 "goal_util.m"
  while (MR_TRUE)
#line 480 "goal_util.m"
    {
#line 480 "goal_util.m"
      /* tailcall optimized into a loop */
#line 480 "goal_util.m"
      {
#line 480 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;

#line 480 "goal_util.m"
        if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 480 "goal_util.m"
          {
#line 480 "goal_util.m"
            *hlds__goal_util__STATE_VARIABLE_Renaming_12 = hlds__goal_util__STATE_VARIABLE_Renaming_0_11;
#line 480 "goal_util.m"
            *hlds__goal_util__STATE_VARIABLE_RevNewVars_10 = hlds__goal_util__STATE_VARIABLE_RevNewVars_0_9;
#line 480 "goal_util.m"
            *hlds__goal_util__STATE_VARIABLE_RevUnifies_8 = hlds__goal_util__STATE_VARIABLE_RevUnifies_0_7;
#line 480 "goal_util.m"
            *hlds__goal_util__STATE_VARIABLE_VarTypes_6 = hlds__goal_util__STATE_VARIABLE_VarTypes_0_5;
#line 480 "goal_util.m"
            *hlds__goal_util__STATE_VARIABLE_VarSet_4 = hlds__goal_util__STATE_VARIABLE_VarSet_0_3;
#line 480 "goal_util.m"
          }
#line 480 "goal_util.m"
        else
#line 483 "goal_util.m"
          {
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__TypeCtorInfo_88_88 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__TypeInfo_89_89;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__OrigVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__OrigVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__NewVar_37;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__Type_38;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__NewInst_40;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__Mode_41;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__UnifyInfo_42;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__GoalExpr_44;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__NonLocals_45;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__UnifyInstMapDelta_46;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__GoalInfo_47;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__Goal_48;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_59_59;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_60_60;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__V_64_64;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__V_66_66;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__V_70_70;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__V_71_71;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__V_72_72;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__V_74_74;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__V_75_75;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__V_79_79;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_RevUnifies_80_80;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_Renaming_81_81;
#line 483 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_RevNewVars_82_82;
#line 489 "goal_util.m"
            MR_Word hlds__goal_util__DeltaInst_39;

#line 484 "goal_util.m"
            {
#line 484 "goal_util.m"
              mercury__varset__new_var_3_p_0(hlds__goal_util__TypeCtorInfo_88_88, &hlds__goal_util__NewVar_37, hlds__goal_util__STATE_VARIABLE_VarSet_0_3, &hlds__goal_util__STATE_VARIABLE_VarSet_59_59);
            }
#line 485 "goal_util.m"
            {
#line 485 "goal_util.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(hlds__goal_util__STATE_VARIABLE_VarTypes_0_5, hlds__goal_util__OrigVar_29, &hlds__goal_util__Type_38);
            }
#line 486 "goal_util.m"
            {
#line 486 "goal_util.m"
              parse_tree__prog_data__add_var_type_4_p_0(hlds__goal_util__NewVar_37, hlds__goal_util__Type_38, hlds__goal_util__STATE_VARIABLE_VarTypes_0_5, &hlds__goal_util__STATE_VARIABLE_VarTypes_60_60);
            }
#line 487 "goal_util.m"
            {
#line 487 "goal_util.m"
              hlds__goal_util__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(hlds__goal_util__InstMapDelta_2, hlds__goal_util__OrigVar_29, &hlds__goal_util__DeltaInst_39);
            }
#line 489 "goal_util.m"
            if (hlds__goal_util__succeeded)
#line 488 "goal_util.m"
              hlds__goal_util__NewInst_40 = hlds__goal_util__DeltaInst_39;
#line 489 "goal_util.m"
            else
#line 490 "goal_util.m"
              {
#line 490 "goal_util.m"
                {
#line 490 "goal_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "predicate \140hlds.goal_util.create_renaming_2\'/12", (MR_String) "cannot get new inst");
#line 490 "goal_util.m"
                  return;
                }
#line 490 "goal_util.m"
              }
#line 492 "goal_util.m"
            {
#line 492 "goal_util.m"
              hlds__goal_util__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 492 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__V_64_64, 0) = ((MR_Box) (hlds__goal_util__NewInst_40));
#line 492 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__V_64_64, 1) = ((MR_Box) (hlds__goal_util__NewInst_40));
#line 492 "goal_util.m"
            }
#line 492 "goal_util.m"
            {
#line 492 "goal_util.m"
              hlds__goal_util__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 492 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__V_66_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 492 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__V_66_66, 1) = ((MR_Box) (hlds__goal_util__NewInst_40));
#line 492 "goal_util.m"
            }
#line 492 "goal_util.m"
            {
#line 492 "goal_util.m"
              hlds__goal_util__Mode_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 492 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__Mode_41, 0) = ((MR_Box) (hlds__goal_util__V_64_64));
#line 492 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__Mode_41, 1) = ((MR_Box) (hlds__goal_util__V_66_66));
#line 492 "goal_util.m"
            }
#line 493 "goal_util.m"
            {
#line 493 "goal_util.m"
              hlds__goal_util__UnifyInfo_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "goal_util.m"
              MR_hl_field(MR_mktag(2), hlds__goal_util__UnifyInfo_42, 0) = ((MR_Box) (hlds__goal_util__OrigVar_29));
#line 493 "goal_util.m"
              MR_hl_field(MR_mktag(2), hlds__goal_util__UnifyInfo_42, 1) = ((MR_Box) (hlds__goal_util__NewVar_37));
#line 493 "goal_util.m"
            }
#line 495 "goal_util.m"
            {
#line 495 "goal_util.m"
              hlds__goal_util__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 495 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__V_70_70, 0) = ((MR_Box) (hlds__goal_util__NewVar_37));
#line 495 "goal_util.m"
            }
#line 495 "goal_util.m"
            {
#line 495 "goal_util.m"
              hlds__goal_util__GoalExpr_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 495 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_44, 0) = ((MR_Box) (hlds__goal_util__OrigVar_29));
#line 495 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_44, 1) = ((MR_Box) (hlds__goal_util__V_70_70));
#line 495 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_44, 2) = ((MR_Box) (hlds__goal_util__Mode_41));
#line 495 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_44, 3) = ((MR_Box) (hlds__goal_util__UnifyInfo_42));
#line 495 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_44, 4) = ((MR_Box) (&hlds__goal_util_scalar_common_1[5]));
#line 495 "goal_util.m"
            }
#line 496 "goal_util.m"
            {
#line 496 "goal_util.m"
              hlds__goal_util__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__V_72_72, 0) = ((MR_Box) (hlds__goal_util__NewVar_37));
#line 496 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 496 "goal_util.m"
            }
#line 496 "goal_util.m"
            {
#line 496 "goal_util.m"
              hlds__goal_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__V_71_71, 0) = ((MR_Box) (hlds__goal_util__OrigVar_29));
#line 496 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__V_71_71, 1) = ((MR_Box) (hlds__goal_util__V_72_72));
#line 496 "goal_util.m"
            }
#line 496 "goal_util.m"
            {
#line 496 "goal_util.m"
              parse_tree__set_of_var__list_to_set_2_p_0(hlds__goal_util__TypeCtorInfo_88_88, hlds__goal_util__V_71_71, &hlds__goal_util__NonLocals_45);
            }
#line 497 "goal_util.m"
            {
#line 497 "goal_util.m"
              hlds__goal_util__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 497 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__V_75_75, 0) = ((MR_Box) (hlds__goal_util__OrigVar_29));
#line 497 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__V_75_75, 1) = ((MR_Box) (hlds__goal_util__NewInst_40));
#line 497 "goal_util.m"
            }
#line 497 "goal_util.m"
            {
#line 497 "goal_util.m"
              hlds__goal_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 497 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__V_74_74, 0) = ((MR_Box) (hlds__goal_util__V_75_75));
#line 497 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 497 "goal_util.m"
            }
#line 497 "goal_util.m"
            {
#line 497 "goal_util.m"
              hlds__goal_util__UnifyInstMapDelta_46 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(hlds__goal_util__V_74_74);
            }
#line 498 "goal_util.m"
            {
#line 498 "goal_util.m"
              hlds__goal_util__V_79_79 = mercury__term__context_init_0_f_0();
            }
#line 498 "goal_util.m"
            {
#line 498 "goal_util.m"
              hlds__hlds_goal__goal_info_init_6_p_0(hlds__goal_util__NonLocals_45, hlds__goal_util__UnifyInstMapDelta_46, (MR_Integer) 0, (MR_Integer) 0, hlds__goal_util__V_79_79, &hlds__goal_util__GoalInfo_47);
            }
#line 500 "goal_util.m"
            {
#line 500 "goal_util.m"
              hlds__goal_util__Goal_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 500 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_48, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_44));
#line 500 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_48, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_47));
#line 500 "goal_util.m"
            }
#line 501 "goal_util.m"
            {
#line 501 "goal_util.m"
              hlds__goal_util__STATE_VARIABLE_RevUnifies_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__STATE_VARIABLE_RevUnifies_80_80, 0) = ((MR_Box) (hlds__goal_util__Goal_48));
#line 501 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__STATE_VARIABLE_RevUnifies_80_80, 1) = ((MR_Box) (hlds__goal_util__STATE_VARIABLE_RevUnifies_0_7));
#line 501 "goal_util.m"
            }
#line 10066 "hlds.goal_util.c"
            hlds__goal_util__TypeInfo_89_89 = (MR_Word) &hlds__goal_util_scalar_common_1[0];
#line 502 "goal_util.m"
            {
#line 502 "goal_util.m"
              mercury__map__det_insert_4_p_0(hlds__goal_util__TypeInfo_89_89, hlds__goal_util__TypeInfo_89_89, ((MR_Box) (hlds__goal_util__OrigVar_29)), ((MR_Box) (hlds__goal_util__NewVar_37)), hlds__goal_util__STATE_VARIABLE_Renaming_0_11, &hlds__goal_util__STATE_VARIABLE_Renaming_81_81);
            }
#line 503 "goal_util.m"
            {
#line 503 "goal_util.m"
              hlds__goal_util__STATE_VARIABLE_RevNewVars_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__STATE_VARIABLE_RevNewVars_82_82, 0) = ((MR_Box) (hlds__goal_util__NewVar_37));
#line 503 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__STATE_VARIABLE_RevNewVars_82_82, 1) = ((MR_Box) (hlds__goal_util__STATE_VARIABLE_RevNewVars_0_9));
#line 503 "goal_util.m"
            }
#line 504 "goal_util.m"
            /* direct tailcall eliminated */
#line 504 "goal_util.m"
            {
#line 504 "goal_util.m"
              MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__OrigVars_30;
#line 504 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0__tmp_copy_3 = hlds__goal_util__STATE_VARIABLE_VarSet_59_59;
#line 504 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0__tmp_copy_5 = hlds__goal_util__STATE_VARIABLE_VarTypes_60_60;
#line 504 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_RevUnifies_0__tmp_copy_7 = hlds__goal_util__STATE_VARIABLE_RevUnifies_80_80;
#line 504 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_RevNewVars_0__tmp_copy_9 = hlds__goal_util__STATE_VARIABLE_RevNewVars_82_82;
#line 504 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_Renaming_0__tmp_copy_11 = hlds__goal_util__STATE_VARIABLE_Renaming_81_81;

#line 504 "goal_util.m"
              hlds__goal_util__STATE_VARIABLE_Renaming_0_11 = hlds__goal_util__STATE_VARIABLE_Renaming_0__tmp_copy_11;
#line 504 "goal_util.m"
              hlds__goal_util__STATE_VARIABLE_RevNewVars_0_9 = hlds__goal_util__STATE_VARIABLE_RevNewVars_0__tmp_copy_9;
#line 504 "goal_util.m"
              hlds__goal_util__STATE_VARIABLE_RevUnifies_0_7 = hlds__goal_util__STATE_VARIABLE_RevUnifies_0__tmp_copy_7;
#line 504 "goal_util.m"
              hlds__goal_util__STATE_VARIABLE_VarTypes_0_5 = hlds__goal_util__STATE_VARIABLE_VarTypes_0__tmp_copy_5;
#line 504 "goal_util.m"
              hlds__goal_util__STATE_VARIABLE_VarSet_0_3 = hlds__goal_util__STATE_VARIABLE_VarSet_0__tmp_copy_3;
#line 504 "goal_util.m"
              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 504 "goal_util.m"
            }
#line 504 "goal_util.m"
            continue;
#line 483 "goal_util.m"
          }
#line 480 "goal_util.m"
      }
#line 480 "goal_util.m"
      break;
#line 480 "goal_util.m"
    }
#line 474 "goal_util.m"
}

#line 2265 "goal_util.m"
static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_3(
#line 2265 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 2265 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2265 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_2)
#line 2265 "goal_util.m"
{
#line 2265 "goal_util.m"
  {
#line 2265 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 2265 "goal_util.m"
    MR_Word hlds__goal_util__conv2_HeadVar__3_62;

#line 2265 "goal_util.m"
    {
#line 2265 "goal_util.m"
      hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2265__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) hlds__goal_util__wrapper_arg_1), &hlds__goal_util__conv2_HeadVar__3_62);
    }
#line 2265 "goal_util.m"
    *hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv2_HeadVar__3_62));
#line 2265 "goal_util.m"
  }
#line 2265 "goal_util.m"
}

#line 2261 "goal_util.m"
static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_2(
#line 2261 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 2261 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2261 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_2)
#line 2261 "goal_util.m"
{
#line 2261 "goal_util.m"
  {
#line 2261 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 2261 "goal_util.m"
    MR_Word hlds__goal_util__conv1_Goal_6;

#line 2261 "goal_util.m"
    {
#line 2261 "goal_util.m"
      hlds__goal_util__transform_all_goals_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) hlds__goal_util__wrapper_arg_1), &hlds__goal_util__conv1_Goal_6);
    }
#line 2261 "goal_util.m"
    *hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv1_Goal_6));
#line 2261 "goal_util.m"
  }
#line 2261 "goal_util.m"
}

#line 2257 "goal_util.m"
static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_1(
#line 2257 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 2257 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2257 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_2)
#line 2257 "goal_util.m"
{
#line 2257 "goal_util.m"
  {
#line 2257 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 2257 "goal_util.m"
    MR_Word hlds__goal_util__conv0_Goal_6;

#line 2257 "goal_util.m"
    {
#line 2257 "goal_util.m"
      hlds__goal_util__transform_all_goals_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) hlds__goal_util__wrapper_arg_1), &hlds__goal_util__conv0_Goal_6);
    }
#line 2257 "goal_util.m"
    *hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv0_Goal_6));
#line 2257 "goal_util.m"
  }
#line 2257 "goal_util.m"
}

#line 433 "goal_util.m"
void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0(
#line 433 "goal_util.m"
  MR_Word hlds__goal_util__TransformP_4,
#line 433 "goal_util.m"
  MR_Word hlds__goal_util__Goal0_5,
#line 433 "goal_util.m"
  MR_Word * hlds__goal_util__Goal_6)
#line 433 "goal_util.m"
{
#line 2246 "goal_util.m"
  {
#line 2246 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 2246 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_5, (MR_Integer) 0)));
#line 2246 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_31;
#line 2246 "goal_util.m"
    MR_Word hlds__goal_util__Goal1_56;
#line 2246 "goal_util.m"
    MR_Word hlds__goal_util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_5, (MR_Integer) 1)));
#line 2290 "goal_util.m"
    void MR_CALL (* hlds__goal_util__func_3)(MR_Box, MR_Box, MR_Box *);
#line 2290 "goal_util.m"
    MR_Box hlds__goal_util__conv4_Goal_6;

#line 2255 "goal_util.m"
    if (((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) == (MR_mktag((MR_Integer) 0))))
#line 2272 "goal_util.m"
      {
#line 2272 "goal_util.m"
        MR_Word hlds__goal_util__SubGoal0_45 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr0_7), (MR_Integer) 0);
#line 2272 "goal_util.m"
        MR_Word hlds__goal_util__SubGoal_46;

#line 2273 "goal_util.m"
        {
#line 2273 "goal_util.m"
          hlds__goal_util__transform_all_goals_3_p_0(hlds__goal_util__TransformP_4, hlds__goal_util__SubGoal0_45, &hlds__goal_util__SubGoal_46);
        }
#line 2274 "goal_util.m"
        hlds__goal_util__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_util__SubGoal_46);
#line 2272 "goal_util.m"
      }
#line 2255 "goal_util.m"
    else
#line 2255 "goal_util.m"
      if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2256 "goal_util.m"
        {
#line 2256 "goal_util.m"
          MR_Word hlds__goal_util__TypeCtorInfo_79_79;
#line 2256 "goal_util.m"
          MR_Word hlds__goal_util__ConjType_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 2256 "goal_util.m"
          MR_Word hlds__goal_util__Conjs0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 2256 "goal_util.m"
          MR_Word hlds__goal_util__Conjs_34;
#line 2256 "goal_util.m"
          MR_Word hlds__goal_util__V_64_64;

#line 2257 "goal_util.m"
          {
#line 2257 "goal_util.m"
            hlds__goal_util__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2257 "goal_util.m"
            MR_hl_field(MR_mktag(0), hlds__goal_util__V_64_64, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_3[6]));
#line 2257 "goal_util.m"
            MR_hl_field(MR_mktag(0), hlds__goal_util__V_64_64, 1) = ((MR_Box) (hlds__goal_util__transform_all_goals_3_p_0_1));
#line 2257 "goal_util.m"
            MR_hl_field(MR_mktag(0), hlds__goal_util__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2257 "goal_util.m"
            MR_hl_field(MR_mktag(0), hlds__goal_util__V_64_64, 3) = ((MR_Box) (hlds__goal_util__TransformP_4));
#line 2257 "goal_util.m"
          }
#line 10294 "hlds.goal_util.c"
          hlds__goal_util__TypeCtorInfo_79_79 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 2257 "goal_util.m"
          {
#line 2257 "goal_util.m"
            mercury__list__map_3_p_0(hlds__goal_util__TypeCtorInfo_79_79, hlds__goal_util__TypeCtorInfo_79_79, hlds__goal_util__V_64_64, hlds__goal_util__Conjs0_33, &hlds__goal_util__Conjs_34);
          }
#line 2258 "goal_util.m"
          {
#line 2258 "goal_util.m"
            hlds__goal_util__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2258 "goal_util.m"
            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2258 "goal_util.m"
            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 1) = ((MR_Box) (hlds__goal_util__ConjType_32));
#line 2258 "goal_util.m"
            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 2) = ((MR_Box) (hlds__goal_util__Conjs_34));
#line 2258 "goal_util.m"
          }
#line 2256 "goal_util.m"
        }
#line 2255 "goal_util.m"
      else
#line 2255 "goal_util.m"
        if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2260 "goal_util.m"
          {
#line 2260 "goal_util.m"
            MR_Word hlds__goal_util__TypeCtorInfo_82_82;
#line 2260 "goal_util.m"
            MR_Word hlds__goal_util__Disjs0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 2260 "goal_util.m"
            MR_Word hlds__goal_util__Disjs_36;
#line 2260 "goal_util.m"
            MR_Word hlds__goal_util__V_63_63;

#line 2261 "goal_util.m"
            {
#line 2261 "goal_util.m"
              hlds__goal_util__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2261 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__V_63_63, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_3[6]));
#line 2261 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__V_63_63, 1) = ((MR_Box) (hlds__goal_util__transform_all_goals_3_p_0_2));
#line 2261 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2261 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__V_63_63, 3) = ((MR_Box) (hlds__goal_util__TransformP_4));
#line 2261 "goal_util.m"
            }
#line 10344 "hlds.goal_util.c"
            hlds__goal_util__TypeCtorInfo_82_82 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 2261 "goal_util.m"
            {
#line 2261 "goal_util.m"
              mercury__list__map_3_p_0(hlds__goal_util__TypeCtorInfo_82_82, hlds__goal_util__TypeCtorInfo_82_82, hlds__goal_util__V_63_63, hlds__goal_util__Disjs0_35, &hlds__goal_util__Disjs_36);
            }
#line 2262 "goal_util.m"
            {
#line 2262 "goal_util.m"
              hlds__goal_util__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2262 "goal_util.m"
              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2262 "goal_util.m"
              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 1) = ((MR_Box) (hlds__goal_util__Disjs_36));
#line 2262 "goal_util.m"
            }
#line 2260 "goal_util.m"
          }
#line 2255 "goal_util.m"
        else
#line 2255 "goal_util.m"
          if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 2280 "goal_util.m"
            {
#line 2280 "goal_util.m"
              MR_Word hlds__goal_util__ExistVars_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 2280 "goal_util.m"
              MR_Word hlds__goal_util__Cond0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 2280 "goal_util.m"
              MR_Word hlds__goal_util__Then0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 3)));
#line 2280 "goal_util.m"
              MR_Word hlds__goal_util__Else0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 4)));
#line 2280 "goal_util.m"
              MR_Word hlds__goal_util__Cond_52;
#line 2280 "goal_util.m"
              MR_Word hlds__goal_util__Then_53;
#line 2280 "goal_util.m"
              MR_Word hlds__goal_util__Else_54;

#line 2281 "goal_util.m"
              {
#line 2281 "goal_util.m"
                hlds__goal_util__transform_all_goals_3_p_0(hlds__goal_util__TransformP_4, hlds__goal_util__Cond0_49, &hlds__goal_util__Cond_52);
              }
#line 2282 "goal_util.m"
              {
#line 2282 "goal_util.m"
                hlds__goal_util__transform_all_goals_3_p_0(hlds__goal_util__TransformP_4, hlds__goal_util__Then0_50, &hlds__goal_util__Then_53);
              }
#line 2283 "goal_util.m"
              {
#line 2283 "goal_util.m"
                hlds__goal_util__transform_all_goals_3_p_0(hlds__goal_util__TransformP_4, hlds__goal_util__Else0_51, &hlds__goal_util__Else_54);
              }
#line 2284 "goal_util.m"
              {
#line 2284 "goal_util.m"
                hlds__goal_util__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 2284 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2284 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 1) = ((MR_Box) (hlds__goal_util__ExistVars_48));
#line 2284 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 2) = ((MR_Box) (hlds__goal_util__Cond_52));
#line 2284 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 3) = ((MR_Box) (hlds__goal_util__Then_53));
#line 2284 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 4) = ((MR_Box) (hlds__goal_util__Else_54));
#line 2284 "goal_util.m"
              }
#line 2280 "goal_util.m"
            }
#line 2255 "goal_util.m"
          else
#line 2255 "goal_util.m"
            if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2276 "goal_util.m"
              {
#line 2276 "goal_util.m"
                MR_Word hlds__goal_util__Reason_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 2276 "goal_util.m"
                MR_Word hlds__goal_util__SubGoal0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 2276 "goal_util.m"
                MR_Word hlds__goal_util__SubGoal_68;

#line 2277 "goal_util.m"
                {
#line 2277 "goal_util.m"
                  hlds__goal_util__transform_all_goals_3_p_0(hlds__goal_util__TransformP_4, hlds__goal_util__SubGoal0_67, &hlds__goal_util__SubGoal_68);
                }
#line 2278 "goal_util.m"
                {
#line 2278 "goal_util.m"
                  hlds__goal_util__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2278 "goal_util.m"
                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 2278 "goal_util.m"
                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 1) = ((MR_Box) (hlds__goal_util__Reason_47));
#line 2278 "goal_util.m"
                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 2) = ((MR_Box) (hlds__goal_util__SubGoal_68));
#line 2278 "goal_util.m"
                }
#line 2276 "goal_util.m"
              }
#line 2255 "goal_util.m"
            else
#line 2255 "goal_util.m"
              if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 2286 "goal_util.m"
                {
#line 2287 "goal_util.m"
                  {
#line 2287 "goal_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "predicate \140hlds.goal_util.transform_all_goals\'/3", (MR_String) "shorthand");
#line 2287 "goal_util.m"
                    return;
                  }
#line 2286 "goal_util.m"
                }
#line 2255 "goal_util.m"
              else
#line 2255 "goal_util.m"
                if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2264 "goal_util.m"
                  {
#line 2264 "goal_util.m"
                    MR_Word hlds__goal_util__TypeCtorInfo_83_83;
#line 2264 "goal_util.m"
                    MR_Word hlds__goal_util__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 2264 "goal_util.m"
                    MR_Word hlds__goal_util__CanFail_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 2264 "goal_util.m"
                    MR_Word hlds__goal_util__Cases0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 3)));
#line 2264 "goal_util.m"
                    MR_Word hlds__goal_util__Cases_44;
#line 2264 "goal_util.m"
                    MR_Word hlds__goal_util__V_60_60;

#line 2265 "goal_util.m"
                    {
#line 2265 "goal_util.m"
                      hlds__goal_util__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2265 "goal_util.m"
                      MR_hl_field(MR_mktag(0), hlds__goal_util__V_60_60, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_3[7]));
#line 2265 "goal_util.m"
                      MR_hl_field(MR_mktag(0), hlds__goal_util__V_60_60, 1) = ((MR_Box) (hlds__goal_util__transform_all_goals_3_p_0_3));
#line 2265 "goal_util.m"
                      MR_hl_field(MR_mktag(0), hlds__goal_util__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2265 "goal_util.m"
                      MR_hl_field(MR_mktag(0), hlds__goal_util__V_60_60, 3) = ((MR_Box) (hlds__goal_util__TransformP_4));
#line 2265 "goal_util.m"
                    }
#line 10497 "hlds.goal_util.c"
                    hlds__goal_util__TypeCtorInfo_83_83 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 2265 "goal_util.m"
                    {
#line 2265 "goal_util.m"
                      mercury__list__map_3_p_0(hlds__goal_util__TypeCtorInfo_83_83, hlds__goal_util__TypeCtorInfo_83_83, hlds__goal_util__V_60_60, hlds__goal_util__Cases0_39, &hlds__goal_util__Cases_44);
                    }
#line 2270 "goal_util.m"
                    {
#line 2270 "goal_util.m"
                      hlds__goal_util__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2270 "goal_util.m"
                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2270 "goal_util.m"
                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 1) = ((MR_Box) (hlds__goal_util__Var_37));
#line 2270 "goal_util.m"
                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 2) = ((MR_Box) (hlds__goal_util__CanFail_38));
#line 2270 "goal_util.m"
                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 3) = ((MR_Box) (hlds__goal_util__Cases_44));
#line 2270 "goal_util.m"
                    }
#line 2264 "goal_util.m"
                  }
#line 2255 "goal_util.m"
                else
#line 2254 "goal_util.m"
                  hlds__goal_util__GoalExpr_31 = hlds__goal_util__GoalExpr0_7;
#line 2289 "goal_util.m"
    {
#line 2289 "goal_util.m"
      hlds__goal_util__Goal1_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2289 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__Goal1_56, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_31));
#line 2289 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__Goal1_56, 1) = ((MR_Box) (hlds__goal_util__V_69_69));
#line 2289 "goal_util.m"
    }
#line 2290 "goal_util.m"
    hlds__goal_util__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__goal_util__TransformP_4, (MR_Integer) 1)));
#line 2290 "goal_util.m"
    {
#line 2290 "goal_util.m"
      hlds__goal_util__func_3(((MR_Box) hlds__goal_util__TransformP_4), ((MR_Box) (hlds__goal_util__Goal1_56)), &hlds__goal_util__conv4_Goal_6);
    }
#line 2290 "goal_util.m"
    *hlds__goal_util__Goal_6 = ((MR_Word) hlds__goal_util__conv4_Goal_6);
#line 2246 "goal_util.m"
  }
#line 433 "goal_util.m"
}

#line 2088 "goal_util.m"
static void MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_2(
#line 2088 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 2088 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2088 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 2088 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 2088 "goal_util.m"
{
#line 2088 "goal_util.m"
  {
#line 2088 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 2088 "goal_util.m"
    MR_Word hlds__goal_util__conv4_HeadVar__3_3;

#line 2088 "goal_util.m"
    {
#line 2088 "goal_util.m"
      hlds__instmap__apply_instmap_delta_sv_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv4_HeadVar__3_3);
    }
#line 2088 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv4_HeadVar__3_3));
#line 2088 "goal_util.m"
  }
#line 2088 "goal_util.m"
}

#line 2084 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_1(
#line 2084 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 2084 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1)
#line 2084 "goal_util.m"
{
#line 2084 "goal_util.m"
  {
#line 2084 "goal_util.m"
    MR_Box hlds__goal_util__wrapper_arg_2;
#line 2084 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 2084 "goal_util.m"
    MR_Word hlds__goal_util__conv3_HeadVar__2_108;

#line 2084 "goal_util.m"
    {
#line 2084 "goal_util.m"
      hlds__goal_util__conv3_HeadVar__2_108 = hlds__goal_util__IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap__2084__1_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    }
#line 2084 "goal_util.m"
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv3_HeadVar__2_108));
#line 2084 "goal_util.m"
    return hlds__goal_util__wrapper_arg_2;
#line 2084 "goal_util.m"
  }
#line 2084 "goal_util.m"
}

#line 422 "goal_util.m"
void MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(
#line 422 "goal_util.m"
  MR_Word hlds__goal_util__TransformP_6,
#line 422 "goal_util.m"
  MR_Word hlds__goal_util__TargetGoalPath_7,
#line 422 "goal_util.m"
  MR_Word hlds__goal_util__Instmap0_8,
#line 422 "goal_util.m"
  MR_Word hlds__goal_util__Goal0_9,
#line 422 "goal_util.m"
  MR_Word * hlds__goal_util__MaybeGoal_10)
#line 422 "goal_util.m"
{
#line 2063 "goal_util.m"
  {
#line 2063 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 2063 "goal_util.m"
    if ((hlds__goal_util__TargetGoalPath_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2063 "goal_util.m"
      {
#line 2063 "goal_util.m"
        MR_Word hlds__goal_util__MaybeGoal0_11;
#line 2064 "goal_util.m"
        void MR_CALL (* hlds__goal_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__goal_util__TransformP_6, (MR_Integer) 1)));
#line 2064 "goal_util.m"
        MR_Box hlds__goal_util__conv1_MaybeGoal0_11;

#line 2064 "goal_util.m"
        {
#line 2064 "goal_util.m"
          hlds__goal_util__func_0(((MR_Box) hlds__goal_util__TransformP_6), ((MR_Box) (hlds__goal_util__Instmap0_8)), ((MR_Box) (hlds__goal_util__Goal0_9)), &hlds__goal_util__conv1_MaybeGoal0_11);
        }
#line 2064 "goal_util.m"
        hlds__goal_util__MaybeGoal0_11 = ((MR_Word) hlds__goal_util__conv1_MaybeGoal0_11);
#line 2065 "goal_util.m"
        {
#line 2065 "goal_util.m"
          hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_p_0(hlds__goal_util__MaybeGoal0_11, hlds__goal_util__MaybeGoal_10);
#line 2065 "goal_util.m"
          return;
        }
#line 2063 "goal_util.m"
      }
#line 2063 "goal_util.m"
    else
#line 2067 "goal_util.m"
      {
#line 2067 "goal_util.m"
        MR_Word hlds__goal_util__FirstStep_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__TargetGoalPath_7, (MR_Integer) 0)));
#line 2067 "goal_util.m"
        MR_Word hlds__goal_util__LaterPath_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__TargetGoalPath_7, (MR_Integer) 1)));
#line 2067 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
#line 2068 "goal_util.m"
        MR_Word hlds__goal_util__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));

#line 2077 "goal_util.m"
        if (((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_14)) == (MR_mktag((MR_Integer) 0))))
#line 2152 "goal_util.m"
          {
#line 2152 "goal_util.m"
            MR_Word hlds__goal_util__SubGoal0_70 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr0_14), (MR_Integer) 0);

#line 2153 "goal_util.m"
            hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 2166 "goal_util.m"
            if (hlds__goal_util__succeeded)
#line 2155 "goal_util.m"
              {
#line 2155 "goal_util.m"
                MR_Word hlds__goal_util__MaybeSubGoal_71;

#line 2154 "goal_util.m"
                {
#line 2154 "goal_util.m"
                  hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap0_8, hlds__goal_util__SubGoal0_70, &hlds__goal_util__MaybeSubGoal_71);
                }
#line 2160 "goal_util.m"
                if (((MR_tag((MR_Word) hlds__goal_util__MaybeSubGoal_71)) == (MR_mktag((MR_Integer) 1))))
#line 2157 "goal_util.m"
                  {
#line 2157 "goal_util.m"
                    MR_Word hlds__goal_util__SubGoal_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeSubGoal_71, (MR_Integer) 0)));
#line 2157 "goal_util.m"
                    MR_Word hlds__goal_util__V_100_100;
#line 2157 "goal_util.m"
                    MR_Word hlds__goal_util__GoalExpr_118 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_util__SubGoal_72);
#line 2159 "goal_util.m"
                    MR_Word hlds__goal_util__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
#line 2159 "goal_util.m"
                    MR_Word hlds__goal_util__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));

#line 2159 "goal_util.m"
                    {
#line 2159 "goal_util.m"
                      hlds__goal_util__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2159 "goal_util.m"
                      MR_hl_field(MR_mktag(0), hlds__goal_util__V_100_100, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_118));
#line 2159 "goal_util.m"
                      MR_hl_field(MR_mktag(0), hlds__goal_util__V_100_100, 1) = ((MR_Box) (hlds__goal_util__V_168_168));
#line 2159 "goal_util.m"
                    }
#line 2159 "goal_util.m"
                    {
#line 2159 "goal_util.m"
                      MR_Word base;
#line 2159 "goal_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2159 "goal_util.m"
                      *hlds__goal_util__MaybeGoal_10 = base;
#line 2159 "goal_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_100_100));
#line 2159 "goal_util.m"
                    }
#line 2157 "goal_util.m"
                  }
#line 2160 "goal_util.m"
                else
#line 2164 "goal_util.m"
                  *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeSubGoal_71;
#line 2155 "goal_util.m"
              }
#line 2166 "goal_util.m"
            else
#line 2167 "goal_util.m"
              *hlds__goal_util__MaybeGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2152 "goal_util.m"
          }
#line 2077 "goal_util.m"
        else
#line 2077 "goal_util.m"
          if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2078 "goal_util.m"
            {
#line 2078 "goal_util.m"
              MR_Word hlds__goal_util__ConjType_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 1)));
#line 2078 "goal_util.m"
              MR_Word hlds__goal_util__Conjs0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 2)));
#line 2103 "goal_util.m"
              MR_Integer hlds__goal_util__ConjNum_40;
#line 2103 "goal_util.m"
              MR_Word hlds__goal_util__Conj0_41;
#line 2080 "goal_util.m"
              MR_Word hlds__goal_util__TypeCtorInfo_178_178;
#line 2081 "goal_util.m"
              MR_Box hlds__goal_util__conv2_Conj0_41;

#line 2080 "goal_util.m"
              hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__FirstStep_12)) == (MR_mktag((MR_Integer) 1)));
#line 2080 "goal_util.m"
              if (hlds__goal_util__succeeded)
#line 2080 "goal_util.m"
                {
#line 2080 "goal_util.m"
                  hlds__goal_util__ConjNum_40 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__goal_util__FirstStep_12, (MR_Integer) 0)));
#line 10771 "hlds.goal_util.c"
                  hlds__goal_util__TypeCtorInfo_178_178 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 2081 "goal_util.m"
                  {
#line 2081 "goal_util.m"
                    hlds__goal_util__succeeded = mercury__list__index1_3_p_0(hlds__goal_util__TypeCtorInfo_178_178, hlds__goal_util__Conjs0_39, hlds__goal_util__ConjNum_40, &hlds__goal_util__conv2_Conj0_41);
                  }
#line 2081 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 2081 "goal_util.m"
                    {
#line 2081 "goal_util.m"
                      hlds__goal_util__Conj0_41 = ((MR_Word) hlds__goal_util__conv2_Conj0_41);
#line 2081 "goal_util.m"
                      hlds__goal_util__succeeded = MR_TRUE;
#line 2081 "goal_util.m"
                    }
#line 2080 "goal_util.m"
                }
#line 2103 "goal_util.m"
              if (hlds__goal_util__succeeded)
#line 2083 "goal_util.m"
                {
#line 2083 "goal_util.m"
                  MR_Word hlds__goal_util__TypeCtorInfo_179_179 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 2083 "goal_util.m"
                  MR_Word hlds__goal_util__TypeCtorInfo_180_180;
#line 2083 "goal_util.m"
                  MR_Word hlds__goal_util__HeadConjs_42;
#line 2083 "goal_util.m"
                  MR_Word hlds__goal_util__HeadInstdeltas_43;
#line 2083 "goal_util.m"
                  MR_Word hlds__goal_util__Instmap_45;
#line 2083 "goal_util.m"
                  MR_Word hlds__goal_util__MaybeConj_46;
#line 2083 "goal_util.m"
                  MR_Integer hlds__goal_util__V_104_104 = (hlds__goal_util__ConjNum_40 - (MR_Integer) 1);
#line 2088 "goal_util.m"
                  MR_Box hlds__goal_util__conv5_Instmap_45;

#line 2083 "goal_util.m"
                  {
#line 2083 "goal_util.m"
                    mercury__list__take_upto_3_p_0(hlds__goal_util__TypeCtorInfo_179_179, hlds__goal_util__V_104_104, hlds__goal_util__Conjs0_39, &hlds__goal_util__HeadConjs_42);
                  }
#line 10816 "hlds.goal_util.c"
                  hlds__goal_util__TypeCtorInfo_180_180 = (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0;
#line 2084 "goal_util.m"
                  {
#line 2084 "goal_util.m"
                    hlds__goal_util__HeadInstdeltas_43 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_179_179, hlds__goal_util__TypeCtorInfo_180_180, (MR_Word) &hlds__goal_util_scalar_common_4[11], hlds__goal_util__HeadConjs_42);
                  }
#line 2088 "goal_util.m"
                  {
#line 2088 "goal_util.m"
                    mercury__list__foldl_4_p_0(hlds__goal_util__TypeCtorInfo_180_180, (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0, (MR_Word) &hlds__goal_util_scalar_common_4[12], hlds__goal_util__HeadInstdeltas_43, ((MR_Box) (hlds__goal_util__Instmap0_8)), &hlds__goal_util__conv5_Instmap_45);
                  }
#line 2088 "goal_util.m"
                  hlds__goal_util__Instmap_45 = ((MR_Word) hlds__goal_util__conv5_Instmap_45);
#line 2090 "goal_util.m"
                  {
#line 2090 "goal_util.m"
                    hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap_45, hlds__goal_util__Conj0_41, &hlds__goal_util__MaybeConj_46);
                  }
#line 2097 "goal_util.m"
                  if (((MR_tag((MR_Word) hlds__goal_util__MaybeConj_46)) == (MR_mktag((MR_Integer) 1))))
#line 2093 "goal_util.m"
                    {
#line 2093 "goal_util.m"
                      MR_Word hlds__goal_util__Conj_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeConj_46, (MR_Integer) 0)));
#line 2093 "goal_util.m"
                      MR_Word hlds__goal_util__Conjs_48;
#line 2093 "goal_util.m"
                      MR_Word hlds__goal_util__GoalExpr_49;
#line 2093 "goal_util.m"
                      MR_Word hlds__goal_util__V_111_111;
#line 2096 "goal_util.m"
                      MR_Word hlds__goal_util__V_157_157;
#line 2096 "goal_util.m"
                      MR_Word hlds__goal_util__V_156_156;

#line 2094 "goal_util.m"
                      {
#line 2094 "goal_util.m"
                        mercury__list__det_replace_nth_4_p_0(hlds__goal_util__TypeCtorInfo_179_179, hlds__goal_util__Conjs0_39, hlds__goal_util__ConjNum_40, ((MR_Box) (hlds__goal_util__Conj_47)), &hlds__goal_util__Conjs_48);
                      }
#line 2095 "goal_util.m"
                      {
#line 2095 "goal_util.m"
                        hlds__goal_util__GoalExpr_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2095 "goal_util.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2095 "goal_util.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_49, 1) = ((MR_Box) (hlds__goal_util__ConjType_38));
#line 2095 "goal_util.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_49, 2) = ((MR_Box) (hlds__goal_util__Conjs_48));
#line 2095 "goal_util.m"
                      }
#line 2096 "goal_util.m"
                      hlds__goal_util__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
#line 2096 "goal_util.m"
                      hlds__goal_util__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
#line 2096 "goal_util.m"
                      {
#line 2096 "goal_util.m"
                        hlds__goal_util__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2096 "goal_util.m"
                        MR_hl_field(MR_mktag(0), hlds__goal_util__V_111_111, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_49));
#line 2096 "goal_util.m"
                        MR_hl_field(MR_mktag(0), hlds__goal_util__V_111_111, 1) = ((MR_Box) (hlds__goal_util__V_157_157));
#line 2096 "goal_util.m"
                      }
#line 2096 "goal_util.m"
                      {
#line 2096 "goal_util.m"
                        MR_Word base;
#line 2096 "goal_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2096 "goal_util.m"
                        *hlds__goal_util__MaybeGoal_10 = base;
#line 2096 "goal_util.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_111_111));
#line 2096 "goal_util.m"
                      }
#line 2093 "goal_util.m"
                    }
#line 2097 "goal_util.m"
                  else
#line 2101 "goal_util.m"
                    *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeConj_46;
#line 2083 "goal_util.m"
                }
#line 2103 "goal_util.m"
              else
#line 2104 "goal_util.m"
                *hlds__goal_util__MaybeGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2078 "goal_util.m"
            }
#line 2077 "goal_util.m"
          else
#line 2077 "goal_util.m"
            if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2107 "goal_util.m"
              {
#line 2107 "goal_util.m"
                MR_Word hlds__goal_util__Disjs0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 1)));
#line 2124 "goal_util.m"
                MR_Integer hlds__goal_util__DisjNum_52;
#line 2124 "goal_util.m"
                MR_Word hlds__goal_util__Disj0_53;
#line 2109 "goal_util.m"
                MR_Word hlds__goal_util__TypeCtorInfo_185_185;
#line 2110 "goal_util.m"
                MR_Box hlds__goal_util__conv6_Disj0_53;

#line 2109 "goal_util.m"
                hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__FirstStep_12)) == (MR_mktag((MR_Integer) 2)));
#line 2109 "goal_util.m"
                if (hlds__goal_util__succeeded)
#line 2109 "goal_util.m"
                  {
#line 2109 "goal_util.m"
                    hlds__goal_util__DisjNum_52 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__FirstStep_12, (MR_Integer) 0)));
#line 10934 "hlds.goal_util.c"
                    hlds__goal_util__TypeCtorInfo_185_185 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 2110 "goal_util.m"
                    {
#line 2110 "goal_util.m"
                      hlds__goal_util__succeeded = mercury__list__index1_3_p_0(hlds__goal_util__TypeCtorInfo_185_185, hlds__goal_util__Disjs0_51, hlds__goal_util__DisjNum_52, &hlds__goal_util__conv6_Disj0_53);
                    }
#line 2110 "goal_util.m"
                    if (hlds__goal_util__succeeded)
#line 2110 "goal_util.m"
                      {
#line 2110 "goal_util.m"
                        hlds__goal_util__Disj0_53 = ((MR_Word) hlds__goal_util__conv6_Disj0_53);
#line 2110 "goal_util.m"
                        hlds__goal_util__succeeded = MR_TRUE;
#line 2110 "goal_util.m"
                      }
#line 2109 "goal_util.m"
                  }
#line 2124 "goal_util.m"
                if (hlds__goal_util__succeeded)
#line 2113 "goal_util.m"
                  {
#line 2113 "goal_util.m"
                    MR_Word hlds__goal_util__MaybeDisj_54;

#line 2112 "goal_util.m"
                    {
#line 2112 "goal_util.m"
                      hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap0_8, hlds__goal_util__Disj0_53, &hlds__goal_util__MaybeDisj_54);
                    }
#line 2118 "goal_util.m"
                    if (((MR_tag((MR_Word) hlds__goal_util__MaybeDisj_54)) == (MR_mktag((MR_Integer) 1))))
#line 2115 "goal_util.m"
                      {
#line 2115 "goal_util.m"
                        MR_Word hlds__goal_util__Disj_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeDisj_54, (MR_Integer) 0)));
#line 2115 "goal_util.m"
                        MR_Word hlds__goal_util__Disjs_56;
#line 2115 "goal_util.m"
                        MR_Word hlds__goal_util__V_102_102;
#line 2115 "goal_util.m"
                        MR_Word hlds__goal_util__V_103_103;
#line 2117 "goal_util.m"
                        MR_Word hlds__goal_util__V_159_159;
#line 2117 "goal_util.m"
                        MR_Word hlds__goal_util__V_158_158;

#line 2116 "goal_util.m"
                        {
#line 2116 "goal_util.m"
                          mercury__list__det_replace_nth_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__goal_util__Disjs0_51, hlds__goal_util__DisjNum_52, ((MR_Box) (hlds__goal_util__Disj_55)), &hlds__goal_util__Disjs_56);
                        }
#line 2117 "goal_util.m"
                        {
#line 2117 "goal_util.m"
                          hlds__goal_util__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2117 "goal_util.m"
                          MR_hl_field(MR_mktag(3), hlds__goal_util__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2117 "goal_util.m"
                          MR_hl_field(MR_mktag(3), hlds__goal_util__V_103_103, 1) = ((MR_Box) (hlds__goal_util__Disjs_56));
#line 2117 "goal_util.m"
                        }
#line 2117 "goal_util.m"
                        hlds__goal_util__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
#line 2117 "goal_util.m"
                        hlds__goal_util__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
#line 2117 "goal_util.m"
                        {
#line 2117 "goal_util.m"
                          hlds__goal_util__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2117 "goal_util.m"
                          MR_hl_field(MR_mktag(0), hlds__goal_util__V_102_102, 0) = ((MR_Box) (hlds__goal_util__V_103_103));
#line 2117 "goal_util.m"
                          MR_hl_field(MR_mktag(0), hlds__goal_util__V_102_102, 1) = ((MR_Box) (hlds__goal_util__V_159_159));
#line 2117 "goal_util.m"
                        }
#line 2117 "goal_util.m"
                        {
#line 2117 "goal_util.m"
                          MR_Word base;
#line 2117 "goal_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2117 "goal_util.m"
                          *hlds__goal_util__MaybeGoal_10 = base;
#line 2117 "goal_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_102_102));
#line 2117 "goal_util.m"
                        }
#line 2115 "goal_util.m"
                      }
#line 2118 "goal_util.m"
                    else
#line 2122 "goal_util.m"
                      *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeDisj_54;
#line 2113 "goal_util.m"
                  }
#line 2124 "goal_util.m"
                else
#line 2125 "goal_util.m"
                  *hlds__goal_util__MaybeGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2107 "goal_util.m"
              }
#line 2077 "goal_util.m"
            else
#line 2077 "goal_util.m"
              if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 2188 "goal_util.m"
                {
#line 2188 "goal_util.m"
                  MR_Word hlds__goal_util__ExistVars_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 1)));
#line 2188 "goal_util.m"
                  MR_Word hlds__goal_util__Cond0_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 2)));
#line 2188 "goal_util.m"
                  MR_Word hlds__goal_util__Then0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 3)));
#line 2188 "goal_util.m"
                  MR_Word hlds__goal_util__Else0_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 4)));

#line 2189 "goal_util.m"
                  hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2202 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 2191 "goal_util.m"
                    {
#line 2191 "goal_util.m"
                      MR_Word hlds__goal_util__MaybeCond_81;

#line 2190 "goal_util.m"
                      {
#line 2190 "goal_util.m"
                        hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap0_8, hlds__goal_util__Cond0_78, &hlds__goal_util__MaybeCond_81);
                      }
#line 2196 "goal_util.m"
                      if (((MR_tag((MR_Word) hlds__goal_util__MaybeCond_81)) == (MR_mktag((MR_Integer) 1))))
#line 2193 "goal_util.m"
                        {
#line 2193 "goal_util.m"
                          MR_Word hlds__goal_util__Cond_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeCond_81, (MR_Integer) 0)));
#line 2193 "goal_util.m"
                          MR_Word hlds__goal_util__V_94_94;
#line 2193 "goal_util.m"
                          MR_Word hlds__goal_util__GoalExpr_137;
#line 2195 "goal_util.m"
                          MR_Word hlds__goal_util__V_172_172;
#line 2195 "goal_util.m"
                          MR_Word hlds__goal_util__V_171_171;

#line 2194 "goal_util.m"
                          {
#line 2194 "goal_util.m"
                            hlds__goal_util__GoalExpr_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 2194 "goal_util.m"
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2194 "goal_util.m"
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_137, 1) = ((MR_Box) (hlds__goal_util__ExistVars_77));
#line 2194 "goal_util.m"
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_137, 2) = ((MR_Box) (hlds__goal_util__Cond_82));
#line 2194 "goal_util.m"
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_137, 3) = ((MR_Box) (hlds__goal_util__Then0_79));
#line 2194 "goal_util.m"
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_137, 4) = ((MR_Box) (hlds__goal_util__Else0_80));
#line 2194 "goal_util.m"
                          }
#line 2195 "goal_util.m"
                          hlds__goal_util__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
#line 2195 "goal_util.m"
                          hlds__goal_util__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
#line 2195 "goal_util.m"
                          {
#line 2195 "goal_util.m"
                            hlds__goal_util__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2195 "goal_util.m"
                            MR_hl_field(MR_mktag(0), hlds__goal_util__V_94_94, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_137));
#line 2195 "goal_util.m"
                            MR_hl_field(MR_mktag(0), hlds__goal_util__V_94_94, 1) = ((MR_Box) (hlds__goal_util__V_172_172));
#line 2195 "goal_util.m"
                          }
#line 2195 "goal_util.m"
                          {
#line 2195 "goal_util.m"
                            MR_Word base;
#line 2195 "goal_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2195 "goal_util.m"
                            *hlds__goal_util__MaybeGoal_10 = base;
#line 2195 "goal_util.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_94_94));
#line 2195 "goal_util.m"
                          }
#line 2193 "goal_util.m"
                        }
#line 2196 "goal_util.m"
                      else
#line 2200 "goal_util.m"
                        *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeCond_81;
#line 2191 "goal_util.m"
                    }
#line 2202 "goal_util.m"
                  else
#line 2218 "goal_util.m"
                    {
#line 2202 "goal_util.m"
                      hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 2218 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 2205 "goal_util.m"
                        {
#line 2205 "goal_util.m"
                          MR_Word hlds__goal_util__MaybeThen_84;
#line 2205 "goal_util.m"
                          MR_Word hlds__goal_util__V_95_95;
#line 2205 "goal_util.m"
                          MR_Word hlds__goal_util__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond0_78, (MR_Integer) 1)));
#line 2205 "goal_util.m"
                          MR_Word hlds__goal_util__Instmap_142;
#line 2204 "goal_util.m"
                          MR_Word hlds__goal_util__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond0_78, (MR_Integer) 0)));

#line 2203 "goal_util.m"
                          {
#line 2203 "goal_util.m"
                            hlds__goal_util__V_95_95 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__V_96_96);
                          }
#line 2203 "goal_util.m"
                          {
#line 2203 "goal_util.m"
                            hlds__instmap__apply_instmap_delta_sv_3_p_0(hlds__goal_util__V_95_95, hlds__goal_util__Instmap0_8, &hlds__goal_util__Instmap_142);
                          }
#line 2206 "goal_util.m"
                          {
#line 2206 "goal_util.m"
                            hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap_142, hlds__goal_util__Then0_79, &hlds__goal_util__MaybeThen_84);
                          }
#line 2212 "goal_util.m"
                          if (((MR_tag((MR_Word) hlds__goal_util__MaybeThen_84)) == (MR_mktag((MR_Integer) 1))))
#line 2209 "goal_util.m"
                            {
#line 2209 "goal_util.m"
                              MR_Word hlds__goal_util__Then_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeThen_84, (MR_Integer) 0)));
#line 2209 "goal_util.m"
                              MR_Word hlds__goal_util__V_97_97;
#line 2209 "goal_util.m"
                              MR_Word hlds__goal_util__GoalExpr_140;
#line 2211 "goal_util.m"
                              MR_Word hlds__goal_util__V_175_175;
#line 2211 "goal_util.m"
                              MR_Word hlds__goal_util__V_174_174;

#line 2210 "goal_util.m"
                              {
#line 2210 "goal_util.m"
                                hlds__goal_util__GoalExpr_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 2210 "goal_util.m"
                                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2210 "goal_util.m"
                                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_140, 1) = ((MR_Box) (hlds__goal_util__ExistVars_77));
#line 2210 "goal_util.m"
                                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_140, 2) = ((MR_Box) (hlds__goal_util__Cond0_78));
#line 2210 "goal_util.m"
                                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_140, 3) = ((MR_Box) (hlds__goal_util__Then_85));
#line 2210 "goal_util.m"
                                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_140, 4) = ((MR_Box) (hlds__goal_util__Else0_80));
#line 2210 "goal_util.m"
                              }
#line 2211 "goal_util.m"
                              hlds__goal_util__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
#line 2211 "goal_util.m"
                              hlds__goal_util__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
#line 2211 "goal_util.m"
                              {
#line 2211 "goal_util.m"
                                hlds__goal_util__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2211 "goal_util.m"
                                MR_hl_field(MR_mktag(0), hlds__goal_util__V_97_97, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_140));
#line 2211 "goal_util.m"
                                MR_hl_field(MR_mktag(0), hlds__goal_util__V_97_97, 1) = ((MR_Box) (hlds__goal_util__V_175_175));
#line 2211 "goal_util.m"
                              }
#line 2211 "goal_util.m"
                              {
#line 2211 "goal_util.m"
                                MR_Word base;
#line 2211 "goal_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2211 "goal_util.m"
                                *hlds__goal_util__MaybeGoal_10 = base;
#line 2211 "goal_util.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_97_97));
#line 2211 "goal_util.m"
                              }
#line 2209 "goal_util.m"
                            }
#line 2212 "goal_util.m"
                          else
#line 2216 "goal_util.m"
                            *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeThen_84;
#line 2205 "goal_util.m"
                        }
#line 2218 "goal_util.m"
                      else
#line 2231 "goal_util.m"
                        {
#line 2218 "goal_util.m"
                          hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 2231 "goal_util.m"
                          if (hlds__goal_util__succeeded)
#line 2220 "goal_util.m"
                            {
#line 2220 "goal_util.m"
                              MR_Word hlds__goal_util__MaybeElse_87;

#line 2219 "goal_util.m"
                              {
#line 2219 "goal_util.m"
                                hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap0_8, hlds__goal_util__Else0_80, &hlds__goal_util__MaybeElse_87);
                              }
#line 2225 "goal_util.m"
                              if (((MR_tag((MR_Word) hlds__goal_util__MaybeElse_87)) == (MR_mktag((MR_Integer) 1))))
#line 2222 "goal_util.m"
                                {
#line 2222 "goal_util.m"
                                  MR_Word hlds__goal_util__Else_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeElse_87, (MR_Integer) 0)));
#line 2222 "goal_util.m"
                                  MR_Word hlds__goal_util__V_98_98;
#line 2222 "goal_util.m"
                                  MR_Word hlds__goal_util__GoalExpr_144;
#line 2224 "goal_util.m"
                                  MR_Word hlds__goal_util__V_177_177;
#line 2224 "goal_util.m"
                                  MR_Word hlds__goal_util__V_176_176;

#line 2223 "goal_util.m"
                                  {
#line 2223 "goal_util.m"
                                    hlds__goal_util__GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 2223 "goal_util.m"
                                    MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2223 "goal_util.m"
                                    MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_144, 1) = ((MR_Box) (hlds__goal_util__ExistVars_77));
#line 2223 "goal_util.m"
                                    MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_144, 2) = ((MR_Box) (hlds__goal_util__Cond0_78));
#line 2223 "goal_util.m"
                                    MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_144, 3) = ((MR_Box) (hlds__goal_util__Then0_79));
#line 2223 "goal_util.m"
                                    MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_144, 4) = ((MR_Box) (hlds__goal_util__Else_88));
#line 2223 "goal_util.m"
                                  }
#line 2224 "goal_util.m"
                                  hlds__goal_util__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
#line 2224 "goal_util.m"
                                  hlds__goal_util__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
#line 2224 "goal_util.m"
                                  {
#line 2224 "goal_util.m"
                                    hlds__goal_util__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2224 "goal_util.m"
                                    MR_hl_field(MR_mktag(0), hlds__goal_util__V_98_98, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_144));
#line 2224 "goal_util.m"
                                    MR_hl_field(MR_mktag(0), hlds__goal_util__V_98_98, 1) = ((MR_Box) (hlds__goal_util__V_177_177));
#line 2224 "goal_util.m"
                                  }
#line 2224 "goal_util.m"
                                  {
#line 2224 "goal_util.m"
                                    MR_Word base;
#line 2224 "goal_util.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2224 "goal_util.m"
                                    *hlds__goal_util__MaybeGoal_10 = base;
#line 2224 "goal_util.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_98_98));
#line 2224 "goal_util.m"
                                  }
#line 2222 "goal_util.m"
                                }
#line 2225 "goal_util.m"
                              else
#line 2229 "goal_util.m"
                                *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeElse_87;
#line 2220 "goal_util.m"
                            }
#line 2231 "goal_util.m"
                          else
#line 2232 "goal_util.m"
                            *hlds__goal_util__MaybeGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2231 "goal_util.m"
                        }
#line 2218 "goal_util.m"
                    }
#line 2188 "goal_util.m"
                }
#line 2077 "goal_util.m"
              else
#line 2077 "goal_util.m"
                if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2170 "goal_util.m"
                  {
#line 2170 "goal_util.m"
                    MR_Word hlds__goal_util__Reason_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 1)));
#line 2170 "goal_util.m"
                    MR_Word hlds__goal_util__SubGoal0_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 2)));
#line 2171 "goal_util.m"
                    MR_Word hlds__goal_util___MaybeCut_75;

#line 2171 "goal_util.m"
                    hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__FirstStep_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 2171 "goal_util.m"
                    if (hlds__goal_util__succeeded)
#line 2171 "goal_util.m"
                      {
#line 2171 "goal_util.m"
                        hlds__goal_util___MaybeCut_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_12, (MR_Integer) 1)));
#line 2173 "goal_util.m"
                        {
#line 2173 "goal_util.m"
                          MR_Word hlds__goal_util__MaybeSubGoal_128;

#line 2172 "goal_util.m"
                          {
#line 2172 "goal_util.m"
                            hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap0_8, hlds__goal_util__SubGoal0_134, &hlds__goal_util__MaybeSubGoal_128);
                          }
#line 2178 "goal_util.m"
                          if (((MR_tag((MR_Word) hlds__goal_util__MaybeSubGoal_128)) == (MR_mktag((MR_Integer) 1))))
#line 2175 "goal_util.m"
                            {
#line 2175 "goal_util.m"
                              MR_Word hlds__goal_util__V_99_99;
#line 2175 "goal_util.m"
                              MR_Word hlds__goal_util__GoalExpr_123;
#line 2175 "goal_util.m"
                              MR_Word hlds__goal_util__SubGoal_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeSubGoal_128, (MR_Integer) 0)));
#line 2177 "goal_util.m"
                              MR_Word hlds__goal_util__V_170_170;
#line 2177 "goal_util.m"
                              MR_Word hlds__goal_util__V_169_169;

#line 2176 "goal_util.m"
                              {
#line 2176 "goal_util.m"
                                hlds__goal_util__GoalExpr_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2176 "goal_util.m"
                                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 2176 "goal_util.m"
                                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_123, 1) = ((MR_Box) (hlds__goal_util__Reason_74));
#line 2176 "goal_util.m"
                                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_123, 2) = ((MR_Box) (hlds__goal_util__SubGoal_124));
#line 2176 "goal_util.m"
                              }
#line 2177 "goal_util.m"
                              hlds__goal_util__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
#line 2177 "goal_util.m"
                              hlds__goal_util__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
#line 2177 "goal_util.m"
                              {
#line 2177 "goal_util.m"
                                hlds__goal_util__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2177 "goal_util.m"
                                MR_hl_field(MR_mktag(0), hlds__goal_util__V_99_99, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_123));
#line 2177 "goal_util.m"
                                MR_hl_field(MR_mktag(0), hlds__goal_util__V_99_99, 1) = ((MR_Box) (hlds__goal_util__V_170_170));
#line 2177 "goal_util.m"
                              }
#line 2177 "goal_util.m"
                              {
#line 2177 "goal_util.m"
                                MR_Word base;
#line 2177 "goal_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2177 "goal_util.m"
                                *hlds__goal_util__MaybeGoal_10 = base;
#line 2177 "goal_util.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_99_99));
#line 2177 "goal_util.m"
                              }
#line 2175 "goal_util.m"
                            }
#line 2178 "goal_util.m"
                          else
#line 2182 "goal_util.m"
                            *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeSubGoal_128;
#line 2173 "goal_util.m"
                        }
#line 2171 "goal_util.m"
                      }
#line 2171 "goal_util.m"
                    else
#line 2185 "goal_util.m"
                      *hlds__goal_util__MaybeGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2170 "goal_util.m"
                  }
#line 2077 "goal_util.m"
                else
#line 2077 "goal_util.m"
                  if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 2235 "goal_util.m"
                    {
#line 2236 "goal_util.m"
                      {
#line 2236 "goal_util.m"
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "predicate \140hlds.goal_util.maybe_transform_goal_at_goal_path_with_instmap\'/5", (MR_String) "shorthand");
#line 2236 "goal_util.m"
                        return;
                      }
#line 2235 "goal_util.m"
                    }
#line 2077 "goal_util.m"
                  else
#line 2077 "goal_util.m"
                    if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2128 "goal_util.m"
                      {
#line 2128 "goal_util.m"
                        MR_Word hlds__goal_util__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 1)));
#line 2128 "goal_util.m"
                        MR_Word hlds__goal_util__CanFail_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 2)));
#line 2128 "goal_util.m"
                        MR_Word hlds__goal_util__Cases0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 3)));
#line 2148 "goal_util.m"
                        MR_Integer hlds__goal_util__CaseNum_61;
#line 2148 "goal_util.m"
                        MR_Word hlds__goal_util__Case0_63;
#line 2130 "goal_util.m"
                        MR_Word hlds__goal_util__TypeCtorInfo_187_187;
#line 2130 "goal_util.m"
                        MR_Word hlds__goal_util___MaybeNumConstructors_62;
#line 2131 "goal_util.m"
                        MR_Box hlds__goal_util__conv7_Case0_63;

#line 2130 "goal_util.m"
                        hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__FirstStep_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 2130 "goal_util.m"
                        if (hlds__goal_util__succeeded)
#line 2130 "goal_util.m"
                          {
#line 2130 "goal_util.m"
                            hlds__goal_util__CaseNum_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_12, (MR_Integer) 1)));
#line 2130 "goal_util.m"
                            hlds__goal_util___MaybeNumConstructors_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_12, (MR_Integer) 2)));
#line 11473 "hlds.goal_util.c"
                            hlds__goal_util__TypeCtorInfo_187_187 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 2131 "goal_util.m"
                            {
#line 2131 "goal_util.m"
                              hlds__goal_util__succeeded = mercury__list__index1_3_p_0(hlds__goal_util__TypeCtorInfo_187_187, hlds__goal_util__Cases0_60, hlds__goal_util__CaseNum_61, &hlds__goal_util__conv7_Case0_63);
                            }
#line 2131 "goal_util.m"
                            if (hlds__goal_util__succeeded)
#line 2131 "goal_util.m"
                              {
#line 2131 "goal_util.m"
                                hlds__goal_util__Case0_63 = ((MR_Word) hlds__goal_util__conv7_Case0_63);
#line 2131 "goal_util.m"
                                hlds__goal_util__succeeded = MR_TRUE;
#line 2131 "goal_util.m"
                              }
#line 2130 "goal_util.m"
                          }
#line 2148 "goal_util.m"
                        if (hlds__goal_util__succeeded)
#line 2133 "goal_util.m"
                          {
#line 2133 "goal_util.m"
                            MR_Word hlds__goal_util__CaseGoal0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_63, (MR_Integer) 2)));
#line 2133 "goal_util.m"
                            MR_Word hlds__goal_util__MaybeCaseGoal_65;
#line 2133 "goal_util.m"
                            MR_Word hlds__goal_util__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_63, (MR_Integer) 0)));
#line 2133 "goal_util.m"
                            MR_Word hlds__goal_util__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_63, (MR_Integer) 1)));

#line 2134 "goal_util.m"
                            {
#line 2134 "goal_util.m"
                              hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap0_8, hlds__goal_util__CaseGoal0_64, &hlds__goal_util__MaybeCaseGoal_65);
                            }
#line 2142 "goal_util.m"
                            if (((MR_tag((MR_Word) hlds__goal_util__MaybeCaseGoal_65)) == (MR_mktag((MR_Integer) 1))))
#line 2137 "goal_util.m"
                              {
#line 2137 "goal_util.m"
                                MR_Word hlds__goal_util__CaseGoal_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeCaseGoal_65, (MR_Integer) 0)));
#line 2137 "goal_util.m"
                                MR_Word hlds__goal_util__Case_67;
#line 2137 "goal_util.m"
                                MR_Word hlds__goal_util__Cases_68;
#line 2137 "goal_util.m"
                                MR_Word hlds__goal_util__V_101_101;
#line 2137 "goal_util.m"
                                MR_Word hlds__goal_util__GoalExpr_113;
#line 2138 "goal_util.m"
                                MR_Word hlds__goal_util__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_63, (MR_Integer) 0)));
#line 2138 "goal_util.m"
                                MR_Word hlds__goal_util__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_63, (MR_Integer) 1)));
#line 2138 "goal_util.m"
                                MR_Word hlds__goal_util__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_63, (MR_Integer) 2)));
#line 2141 "goal_util.m"
                                MR_Word hlds__goal_util__V_166_166;
#line 2141 "goal_util.m"
                                MR_Word hlds__goal_util__V_165_165;

#line 2138 "goal_util.m"
                                {
#line 2138 "goal_util.m"
                                  hlds__goal_util__Case_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2138 "goal_util.m"
                                  MR_hl_field(MR_mktag(0), hlds__goal_util__Case_67, 0) = ((MR_Box) (hlds__goal_util__V_162_162));
#line 2138 "goal_util.m"
                                  MR_hl_field(MR_mktag(0), hlds__goal_util__Case_67, 1) = ((MR_Box) (hlds__goal_util__V_163_163));
#line 2138 "goal_util.m"
                                  MR_hl_field(MR_mktag(0), hlds__goal_util__Case_67, 2) = ((MR_Box) (hlds__goal_util__CaseGoal_66));
#line 2138 "goal_util.m"
                                }
#line 2139 "goal_util.m"
                                {
#line 2139 "goal_util.m"
                                  mercury__list__det_replace_nth_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, hlds__goal_util__Cases0_60, hlds__goal_util__CaseNum_61, ((MR_Box) (hlds__goal_util__Case_67)), &hlds__goal_util__Cases_68);
                                }
#line 2140 "goal_util.m"
                                {
#line 2140 "goal_util.m"
                                  hlds__goal_util__GoalExpr_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2140 "goal_util.m"
                                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2140 "goal_util.m"
                                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_113, 1) = ((MR_Box) (hlds__goal_util__Var_58));
#line 2140 "goal_util.m"
                                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_113, 2) = ((MR_Box) (hlds__goal_util__CanFail_59));
#line 2140 "goal_util.m"
                                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_113, 3) = ((MR_Box) (hlds__goal_util__Cases_68));
#line 2140 "goal_util.m"
                                }
#line 2141 "goal_util.m"
                                hlds__goal_util__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
#line 2141 "goal_util.m"
                                hlds__goal_util__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
#line 2141 "goal_util.m"
                                {
#line 2141 "goal_util.m"
                                  hlds__goal_util__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2141 "goal_util.m"
                                  MR_hl_field(MR_mktag(0), hlds__goal_util__V_101_101, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_113));
#line 2141 "goal_util.m"
                                  MR_hl_field(MR_mktag(0), hlds__goal_util__V_101_101, 1) = ((MR_Box) (hlds__goal_util__V_166_166));
#line 2141 "goal_util.m"
                                }
#line 2141 "goal_util.m"
                                {
#line 2141 "goal_util.m"
                                  MR_Word base;
#line 2141 "goal_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2141 "goal_util.m"
                                  *hlds__goal_util__MaybeGoal_10 = base;
#line 2141 "goal_util.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_101_101));
#line 2141 "goal_util.m"
                                }
#line 2137 "goal_util.m"
                              }
#line 2142 "goal_util.m"
                            else
#line 2146 "goal_util.m"
                              *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeCaseGoal_65;
#line 2133 "goal_util.m"
                          }
#line 2148 "goal_util.m"
                        else
#line 2149 "goal_util.m"
                          *hlds__goal_util__MaybeGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2128 "goal_util.m"
                      }
#line 2077 "goal_util.m"
                    else
#line 2076 "goal_util.m"
                      *hlds__goal_util__MaybeGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2067 "goal_util.m"
      }
#line 2063 "goal_util.m"
  }
#line 422 "goal_util.m"
}

#line 414 "goal_util.m"
void MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(
#line 414 "goal_util.m"
  MR_Word hlds__goal_util__TransformP_5,
#line 414 "goal_util.m"
  MR_Word hlds__goal_util__TargetGoalPath_6,
#line 414 "goal_util.m"
  MR_Word hlds__goal_util__Goal0_7,
#line 414 "goal_util.m"
  MR_Word * hlds__goal_util__MaybeGoal_8)
#line 414 "goal_util.m"
{
#line 1893 "goal_util.m"
  {
#line 1893 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 1893 "goal_util.m"
    if ((hlds__goal_util__TargetGoalPath_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1893 "goal_util.m"
      {
#line 1893 "goal_util.m"
        MR_Word hlds__goal_util__MaybeGoal0_9;
#line 1894 "goal_util.m"
        void MR_CALL (* hlds__goal_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__goal_util__TransformP_5, (MR_Integer) 1)));
#line 1894 "goal_util.m"
        MR_Box hlds__goal_util__conv1_MaybeGoal0_9;

#line 1894 "goal_util.m"
        {
#line 1894 "goal_util.m"
          hlds__goal_util__func_0(((MR_Box) hlds__goal_util__TransformP_5), ((MR_Box) (hlds__goal_util__Goal0_7)), &hlds__goal_util__conv1_MaybeGoal0_9);
        }
#line 1894 "goal_util.m"
        hlds__goal_util__MaybeGoal0_9 = ((MR_Word) hlds__goal_util__conv1_MaybeGoal0_9);
#line 1895 "goal_util.m"
        {
#line 1895 "goal_util.m"
          hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_p_0(hlds__goal_util__MaybeGoal0_9, hlds__goal_util__MaybeGoal_8);
#line 1895 "goal_util.m"
          return;
        }
#line 1893 "goal_util.m"
      }
#line 1893 "goal_util.m"
    else
#line 1897 "goal_util.m"
      {
#line 1897 "goal_util.m"
        MR_Word hlds__goal_util__FirstStep_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__TargetGoalPath_6, (MR_Integer) 0)));
#line 1897 "goal_util.m"
        MR_Word hlds__goal_util__LaterPath_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__TargetGoalPath_6, (MR_Integer) 1)));
#line 1897 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
#line 1898 "goal_util.m"
        MR_Word hlds__goal_util__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));

#line 1907 "goal_util.m"
        if (((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_12)) == (MR_mktag((MR_Integer) 0))))
#line 1976 "goal_util.m"
          {
#line 1976 "goal_util.m"
            MR_Word hlds__goal_util__SubGoal0_64 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr0_12), (MR_Integer) 0);

#line 1977 "goal_util.m"
            hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1989 "goal_util.m"
            if (hlds__goal_util__succeeded)
#line 1979 "goal_util.m"
              {
#line 1979 "goal_util.m"
                MR_Word hlds__goal_util__MaybeSubGoal_65;

#line 1978 "goal_util.m"
                {
#line 1978 "goal_util.m"
                  hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__SubGoal0_64, &hlds__goal_util__MaybeSubGoal_65);
                }
#line 1983 "goal_util.m"
                if (((MR_tag((MR_Word) hlds__goal_util__MaybeSubGoal_65)) == (MR_mktag((MR_Integer) 1))))
#line 1981 "goal_util.m"
                  {
#line 1981 "goal_util.m"
                    MR_Word hlds__goal_util__SubGoal_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeSubGoal_65, (MR_Integer) 0)));
#line 1981 "goal_util.m"
                    MR_Word hlds__goal_util__V_92_92;
#line 1981 "goal_util.m"
                    MR_Word hlds__goal_util__V_93_93 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_util__SubGoal_66);
#line 1982 "goal_util.m"
                    MR_Word hlds__goal_util__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
#line 1982 "goal_util.m"
                    MR_Word hlds__goal_util__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));

#line 1982 "goal_util.m"
                    {
#line 1982 "goal_util.m"
                      hlds__goal_util__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1982 "goal_util.m"
                      MR_hl_field(MR_mktag(0), hlds__goal_util__V_92_92, 0) = ((MR_Box) (hlds__goal_util__V_93_93));
#line 1982 "goal_util.m"
                      MR_hl_field(MR_mktag(0), hlds__goal_util__V_92_92, 1) = ((MR_Box) (hlds__goal_util__V_147_147));
#line 1982 "goal_util.m"
                    }
#line 1982 "goal_util.m"
                    {
#line 1982 "goal_util.m"
                      MR_Word base;
#line 1982 "goal_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1982 "goal_util.m"
                      *hlds__goal_util__MaybeGoal_8 = base;
#line 1982 "goal_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_92_92));
#line 1982 "goal_util.m"
                    }
#line 1981 "goal_util.m"
                  }
#line 1983 "goal_util.m"
                else
#line 1987 "goal_util.m"
                  *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeSubGoal_65;
#line 1979 "goal_util.m"
              }
#line 1989 "goal_util.m"
            else
#line 1990 "goal_util.m"
              *hlds__goal_util__MaybeGoal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1976 "goal_util.m"
          }
#line 1907 "goal_util.m"
        else
#line 1907 "goal_util.m"
          if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1908 "goal_util.m"
            {
#line 1908 "goal_util.m"
              MR_Word hlds__goal_util__ConjType_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 1)));
#line 1908 "goal_util.m"
              MR_Word hlds__goal_util__Conjs0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 2)));
#line 1926 "goal_util.m"
              MR_Integer hlds__goal_util__ConjNum_38;
#line 1926 "goal_util.m"
              MR_Word hlds__goal_util__Conj0_39;
#line 1910 "goal_util.m"
              MR_Word hlds__goal_util__TypeCtorInfo_156_156;
#line 1911 "goal_util.m"
              MR_Box hlds__goal_util__conv2_Conj0_39;

#line 1910 "goal_util.m"
              hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__FirstStep_10)) == (MR_mktag((MR_Integer) 1)));
#line 1910 "goal_util.m"
              if (hlds__goal_util__succeeded)
#line 1910 "goal_util.m"
                {
#line 1910 "goal_util.m"
                  hlds__goal_util__ConjNum_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__goal_util__FirstStep_10, (MR_Integer) 0)));
#line 11774 "hlds.goal_util.c"
                  hlds__goal_util__TypeCtorInfo_156_156 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1911 "goal_util.m"
                  {
#line 1911 "goal_util.m"
                    hlds__goal_util__succeeded = mercury__list__index1_3_p_0(hlds__goal_util__TypeCtorInfo_156_156, hlds__goal_util__Conjs0_37, hlds__goal_util__ConjNum_38, &hlds__goal_util__conv2_Conj0_39);
                  }
#line 1911 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 1911 "goal_util.m"
                    {
#line 1911 "goal_util.m"
                      hlds__goal_util__Conj0_39 = ((MR_Word) hlds__goal_util__conv2_Conj0_39);
#line 1911 "goal_util.m"
                      hlds__goal_util__succeeded = MR_TRUE;
#line 1911 "goal_util.m"
                    }
#line 1910 "goal_util.m"
                }
#line 1926 "goal_util.m"
              if (hlds__goal_util__succeeded)
#line 1914 "goal_util.m"
                {
#line 1914 "goal_util.m"
                  MR_Word hlds__goal_util__MaybeConj_40;

#line 1913 "goal_util.m"
                  {
#line 1913 "goal_util.m"
                    hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__Conj0_39, &hlds__goal_util__MaybeConj_40);
                  }
#line 1920 "goal_util.m"
                  if (((MR_tag((MR_Word) hlds__goal_util__MaybeConj_40)) == (MR_mktag((MR_Integer) 1))))
#line 1916 "goal_util.m"
                    {
#line 1916 "goal_util.m"
                      MR_Word hlds__goal_util__Conj_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeConj_40, (MR_Integer) 0)));
#line 1916 "goal_util.m"
                      MR_Word hlds__goal_util__Conjs_42;
#line 1916 "goal_util.m"
                      MR_Word hlds__goal_util__GoalExpr_43;
#line 1916 "goal_util.m"
                      MR_Word hlds__goal_util__V_96_96;
#line 1919 "goal_util.m"
                      MR_Word hlds__goal_util__V_136_136;
#line 1919 "goal_util.m"
                      MR_Word hlds__goal_util__V_135_135;

#line 1917 "goal_util.m"
                      {
#line 1917 "goal_util.m"
                        mercury__list__det_replace_nth_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__goal_util__Conjs0_37, hlds__goal_util__ConjNum_38, ((MR_Box) (hlds__goal_util__Conj_41)), &hlds__goal_util__Conjs_42);
                      }
#line 1918 "goal_util.m"
                      {
#line 1918 "goal_util.m"
                        hlds__goal_util__GoalExpr_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1918 "goal_util.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1918 "goal_util.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_43, 1) = ((MR_Box) (hlds__goal_util__ConjType_36));
#line 1918 "goal_util.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_43, 2) = ((MR_Box) (hlds__goal_util__Conjs_42));
#line 1918 "goal_util.m"
                      }
#line 1919 "goal_util.m"
                      hlds__goal_util__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
#line 1919 "goal_util.m"
                      hlds__goal_util__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
#line 1919 "goal_util.m"
                      {
#line 1919 "goal_util.m"
                        hlds__goal_util__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1919 "goal_util.m"
                        MR_hl_field(MR_mktag(0), hlds__goal_util__V_96_96, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_43));
#line 1919 "goal_util.m"
                        MR_hl_field(MR_mktag(0), hlds__goal_util__V_96_96, 1) = ((MR_Box) (hlds__goal_util__V_136_136));
#line 1919 "goal_util.m"
                      }
#line 1919 "goal_util.m"
                      {
#line 1919 "goal_util.m"
                        MR_Word base;
#line 1919 "goal_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1919 "goal_util.m"
                        *hlds__goal_util__MaybeGoal_8 = base;
#line 1919 "goal_util.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_96_96));
#line 1919 "goal_util.m"
                      }
#line 1916 "goal_util.m"
                    }
#line 1920 "goal_util.m"
                  else
#line 1924 "goal_util.m"
                    *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeConj_40;
#line 1914 "goal_util.m"
                }
#line 1926 "goal_util.m"
              else
#line 1927 "goal_util.m"
                *hlds__goal_util__MaybeGoal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1908 "goal_util.m"
            }
#line 1907 "goal_util.m"
          else
#line 1907 "goal_util.m"
            if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1930 "goal_util.m"
              {
#line 1930 "goal_util.m"
                MR_Word hlds__goal_util__Disjs0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 1)));
#line 1948 "goal_util.m"
                MR_Integer hlds__goal_util__DisjNum_46;
#line 1948 "goal_util.m"
                MR_Word hlds__goal_util__Disj0_47;
#line 1932 "goal_util.m"
                MR_Word hlds__goal_util__TypeCtorInfo_158_158;
#line 1933 "goal_util.m"
                MR_Box hlds__goal_util__conv3_Disj0_47;

#line 1932 "goal_util.m"
                hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__FirstStep_10)) == (MR_mktag((MR_Integer) 2)));
#line 1932 "goal_util.m"
                if (hlds__goal_util__succeeded)
#line 1932 "goal_util.m"
                  {
#line 1932 "goal_util.m"
                    hlds__goal_util__DisjNum_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__FirstStep_10, (MR_Integer) 0)));
#line 11904 "hlds.goal_util.c"
                    hlds__goal_util__TypeCtorInfo_158_158 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1933 "goal_util.m"
                    {
#line 1933 "goal_util.m"
                      hlds__goal_util__succeeded = mercury__list__index1_3_p_0(hlds__goal_util__TypeCtorInfo_158_158, hlds__goal_util__Disjs0_45, hlds__goal_util__DisjNum_46, &hlds__goal_util__conv3_Disj0_47);
                    }
#line 1933 "goal_util.m"
                    if (hlds__goal_util__succeeded)
#line 1933 "goal_util.m"
                      {
#line 1933 "goal_util.m"
                        hlds__goal_util__Disj0_47 = ((MR_Word) hlds__goal_util__conv3_Disj0_47);
#line 1933 "goal_util.m"
                        hlds__goal_util__succeeded = MR_TRUE;
#line 1933 "goal_util.m"
                      }
#line 1932 "goal_util.m"
                  }
#line 1948 "goal_util.m"
                if (hlds__goal_util__succeeded)
#line 1936 "goal_util.m"
                  {
#line 1936 "goal_util.m"
                    MR_Word hlds__goal_util__MaybeDisj_48;

#line 1935 "goal_util.m"
                    {
#line 1935 "goal_util.m"
                      hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__Disj0_47, &hlds__goal_util__MaybeDisj_48);
                    }
#line 1942 "goal_util.m"
                    if (((MR_tag((MR_Word) hlds__goal_util__MaybeDisj_48)) == (MR_mktag((MR_Integer) 1))))
#line 1938 "goal_util.m"
                      {
#line 1938 "goal_util.m"
                        MR_Word hlds__goal_util__Disj_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeDisj_48, (MR_Integer) 0)));
#line 1938 "goal_util.m"
                        MR_Word hlds__goal_util__Disjs_50;
#line 1938 "goal_util.m"
                        MR_Word hlds__goal_util__V_95_95;
#line 1938 "goal_util.m"
                        MR_Word hlds__goal_util__GoalExpr_97;
#line 1941 "goal_util.m"
                        MR_Word hlds__goal_util__V_138_138;
#line 1941 "goal_util.m"
                        MR_Word hlds__goal_util__V_137_137;

#line 1939 "goal_util.m"
                        {
#line 1939 "goal_util.m"
                          mercury__list__det_replace_nth_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__goal_util__Disjs0_45, hlds__goal_util__DisjNum_46, ((MR_Box) (hlds__goal_util__Disj_49)), &hlds__goal_util__Disjs_50);
                        }
#line 1940 "goal_util.m"
                        {
#line 1940 "goal_util.m"
                          hlds__goal_util__GoalExpr_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1940 "goal_util.m"
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1940 "goal_util.m"
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_97, 1) = ((MR_Box) (hlds__goal_util__Disjs_50));
#line 1940 "goal_util.m"
                        }
#line 1941 "goal_util.m"
                        hlds__goal_util__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
#line 1941 "goal_util.m"
                        hlds__goal_util__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
#line 1941 "goal_util.m"
                        {
#line 1941 "goal_util.m"
                          hlds__goal_util__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1941 "goal_util.m"
                          MR_hl_field(MR_mktag(0), hlds__goal_util__V_95_95, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_97));
#line 1941 "goal_util.m"
                          MR_hl_field(MR_mktag(0), hlds__goal_util__V_95_95, 1) = ((MR_Box) (hlds__goal_util__V_138_138));
#line 1941 "goal_util.m"
                        }
#line 1941 "goal_util.m"
                        {
#line 1941 "goal_util.m"
                          MR_Word base;
#line 1941 "goal_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1941 "goal_util.m"
                          *hlds__goal_util__MaybeGoal_8 = base;
#line 1941 "goal_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_95_95));
#line 1941 "goal_util.m"
                        }
#line 1938 "goal_util.m"
                      }
#line 1942 "goal_util.m"
                    else
#line 1946 "goal_util.m"
                      *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeDisj_48;
#line 1936 "goal_util.m"
                  }
#line 1948 "goal_util.m"
                else
#line 1949 "goal_util.m"
                  *hlds__goal_util__MaybeGoal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1930 "goal_util.m"
              }
#line 1907 "goal_util.m"
            else
#line 1907 "goal_util.m"
              if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 2011 "goal_util.m"
                {
#line 2011 "goal_util.m"
                  MR_Word hlds__goal_util__ExistVars_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 1)));
#line 2011 "goal_util.m"
                  MR_Word hlds__goal_util__Cond0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 2)));
#line 2011 "goal_util.m"
                  MR_Word hlds__goal_util__Then0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 3)));
#line 2011 "goal_util.m"
                  MR_Word hlds__goal_util__Else0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 4)));

#line 2012 "goal_util.m"
                  hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2025 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 2014 "goal_util.m"
                    {
#line 2014 "goal_util.m"
                      MR_Word hlds__goal_util__MaybeCond_75;

#line 2013 "goal_util.m"
                      {
#line 2013 "goal_util.m"
                        hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__Cond0_72, &hlds__goal_util__MaybeCond_75);
                      }
#line 2019 "goal_util.m"
                      if (((MR_tag((MR_Word) hlds__goal_util__MaybeCond_75)) == (MR_mktag((MR_Integer) 1))))
#line 2016 "goal_util.m"
                        {
#line 2016 "goal_util.m"
                          MR_Word hlds__goal_util__Cond_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeCond_75, (MR_Integer) 0)));
#line 2016 "goal_util.m"
                          MR_Word hlds__goal_util__V_88_88;
#line 2016 "goal_util.m"
                          MR_Word hlds__goal_util__GoalExpr_121;
#line 2018 "goal_util.m"
                          MR_Word hlds__goal_util__V_151_151;
#line 2018 "goal_util.m"
                          MR_Word hlds__goal_util__V_150_150;

#line 2017 "goal_util.m"
                          {
#line 2017 "goal_util.m"
                            hlds__goal_util__GoalExpr_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 2017 "goal_util.m"
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2017 "goal_util.m"
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_121, 1) = ((MR_Box) (hlds__goal_util__ExistVars_71));
#line 2017 "goal_util.m"
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_121, 2) = ((MR_Box) (hlds__goal_util__Cond_76));
#line 2017 "goal_util.m"
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_121, 3) = ((MR_Box) (hlds__goal_util__Then0_73));
#line 2017 "goal_util.m"
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_121, 4) = ((MR_Box) (hlds__goal_util__Else0_74));
#line 2017 "goal_util.m"
                          }
#line 2018 "goal_util.m"
                          hlds__goal_util__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
#line 2018 "goal_util.m"
                          hlds__goal_util__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
#line 2018 "goal_util.m"
                          {
#line 2018 "goal_util.m"
                            hlds__goal_util__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2018 "goal_util.m"
                            MR_hl_field(MR_mktag(0), hlds__goal_util__V_88_88, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_121));
#line 2018 "goal_util.m"
                            MR_hl_field(MR_mktag(0), hlds__goal_util__V_88_88, 1) = ((MR_Box) (hlds__goal_util__V_151_151));
#line 2018 "goal_util.m"
                          }
#line 2018 "goal_util.m"
                          {
#line 2018 "goal_util.m"
                            MR_Word base;
#line 2018 "goal_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2018 "goal_util.m"
                            *hlds__goal_util__MaybeGoal_8 = base;
#line 2018 "goal_util.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_88_88));
#line 2018 "goal_util.m"
                          }
#line 2016 "goal_util.m"
                        }
#line 2019 "goal_util.m"
                      else
#line 2023 "goal_util.m"
                        *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeCond_75;
#line 2014 "goal_util.m"
                    }
#line 2025 "goal_util.m"
                  else
#line 2038 "goal_util.m"
                    {
#line 2025 "goal_util.m"
                      hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 2038 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 2027 "goal_util.m"
                        {
#line 2027 "goal_util.m"
                          MR_Word hlds__goal_util__MaybeThen_78;

#line 2026 "goal_util.m"
                          {
#line 2026 "goal_util.m"
                            hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__Then0_73, &hlds__goal_util__MaybeThen_78);
                          }
#line 2032 "goal_util.m"
                          if (((MR_tag((MR_Word) hlds__goal_util__MaybeThen_78)) == (MR_mktag((MR_Integer) 1))))
#line 2029 "goal_util.m"
                            {
#line 2029 "goal_util.m"
                              MR_Word hlds__goal_util__Then_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeThen_78, (MR_Integer) 0)));
#line 2029 "goal_util.m"
                              MR_Word hlds__goal_util__V_89_89;
#line 2029 "goal_util.m"
                              MR_Word hlds__goal_util__GoalExpr_124;
#line 2031 "goal_util.m"
                              MR_Word hlds__goal_util__V_153_153;
#line 2031 "goal_util.m"
                              MR_Word hlds__goal_util__V_152_152;

#line 2030 "goal_util.m"
                              {
#line 2030 "goal_util.m"
                                hlds__goal_util__GoalExpr_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 2030 "goal_util.m"
                                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2030 "goal_util.m"
                                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_124, 1) = ((MR_Box) (hlds__goal_util__ExistVars_71));
#line 2030 "goal_util.m"
                                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_124, 2) = ((MR_Box) (hlds__goal_util__Cond0_72));
#line 2030 "goal_util.m"
                                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_124, 3) = ((MR_Box) (hlds__goal_util__Then_79));
#line 2030 "goal_util.m"
                                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_124, 4) = ((MR_Box) (hlds__goal_util__Else0_74));
#line 2030 "goal_util.m"
                              }
#line 2031 "goal_util.m"
                              hlds__goal_util__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
#line 2031 "goal_util.m"
                              hlds__goal_util__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
#line 2031 "goal_util.m"
                              {
#line 2031 "goal_util.m"
                                hlds__goal_util__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2031 "goal_util.m"
                                MR_hl_field(MR_mktag(0), hlds__goal_util__V_89_89, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_124));
#line 2031 "goal_util.m"
                                MR_hl_field(MR_mktag(0), hlds__goal_util__V_89_89, 1) = ((MR_Box) (hlds__goal_util__V_153_153));
#line 2031 "goal_util.m"
                              }
#line 2031 "goal_util.m"
                              {
#line 2031 "goal_util.m"
                                MR_Word base;
#line 2031 "goal_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2031 "goal_util.m"
                                *hlds__goal_util__MaybeGoal_8 = base;
#line 2031 "goal_util.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_89_89));
#line 2031 "goal_util.m"
                              }
#line 2029 "goal_util.m"
                            }
#line 2032 "goal_util.m"
                          else
#line 2036 "goal_util.m"
                            *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeThen_78;
#line 2027 "goal_util.m"
                        }
#line 2038 "goal_util.m"
                      else
#line 2051 "goal_util.m"
                        {
#line 2038 "goal_util.m"
                          hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 2051 "goal_util.m"
                          if (hlds__goal_util__succeeded)
#line 2040 "goal_util.m"
                            {
#line 2040 "goal_util.m"
                              MR_Word hlds__goal_util__MaybeElse_81;

#line 2039 "goal_util.m"
                              {
#line 2039 "goal_util.m"
                                hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__Else0_74, &hlds__goal_util__MaybeElse_81);
                              }
#line 2045 "goal_util.m"
                              if (((MR_tag((MR_Word) hlds__goal_util__MaybeElse_81)) == (MR_mktag((MR_Integer) 1))))
#line 2042 "goal_util.m"
                                {
#line 2042 "goal_util.m"
                                  MR_Word hlds__goal_util__Else_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeElse_81, (MR_Integer) 0)));
#line 2042 "goal_util.m"
                                  MR_Word hlds__goal_util__V_90_90;
#line 2042 "goal_util.m"
                                  MR_Word hlds__goal_util__GoalExpr_127;
#line 2044 "goal_util.m"
                                  MR_Word hlds__goal_util__V_155_155;
#line 2044 "goal_util.m"
                                  MR_Word hlds__goal_util__V_154_154;

#line 2043 "goal_util.m"
                                  {
#line 2043 "goal_util.m"
                                    hlds__goal_util__GoalExpr_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 2043 "goal_util.m"
                                    MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2043 "goal_util.m"
                                    MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_127, 1) = ((MR_Box) (hlds__goal_util__ExistVars_71));
#line 2043 "goal_util.m"
                                    MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_127, 2) = ((MR_Box) (hlds__goal_util__Cond0_72));
#line 2043 "goal_util.m"
                                    MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_127, 3) = ((MR_Box) (hlds__goal_util__Then0_73));
#line 2043 "goal_util.m"
                                    MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_127, 4) = ((MR_Box) (hlds__goal_util__Else_82));
#line 2043 "goal_util.m"
                                  }
#line 2044 "goal_util.m"
                                  hlds__goal_util__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
#line 2044 "goal_util.m"
                                  hlds__goal_util__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
#line 2044 "goal_util.m"
                                  {
#line 2044 "goal_util.m"
                                    hlds__goal_util__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2044 "goal_util.m"
                                    MR_hl_field(MR_mktag(0), hlds__goal_util__V_90_90, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_127));
#line 2044 "goal_util.m"
                                    MR_hl_field(MR_mktag(0), hlds__goal_util__V_90_90, 1) = ((MR_Box) (hlds__goal_util__V_155_155));
#line 2044 "goal_util.m"
                                  }
#line 2044 "goal_util.m"
                                  {
#line 2044 "goal_util.m"
                                    MR_Word base;
#line 2044 "goal_util.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2044 "goal_util.m"
                                    *hlds__goal_util__MaybeGoal_8 = base;
#line 2044 "goal_util.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_90_90));
#line 2044 "goal_util.m"
                                  }
#line 2042 "goal_util.m"
                                }
#line 2045 "goal_util.m"
                              else
#line 2049 "goal_util.m"
                                *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeElse_81;
#line 2040 "goal_util.m"
                            }
#line 2051 "goal_util.m"
                          else
#line 2052 "goal_util.m"
                            *hlds__goal_util__MaybeGoal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2051 "goal_util.m"
                        }
#line 2038 "goal_util.m"
                    }
#line 2011 "goal_util.m"
                }
#line 1907 "goal_util.m"
              else
#line 1907 "goal_util.m"
                if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1993 "goal_util.m"
                  {
#line 1993 "goal_util.m"
                    MR_Word hlds__goal_util__Reason_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 1)));
#line 1993 "goal_util.m"
                    MR_Word hlds__goal_util__SubGoal0_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 2)));
#line 1994 "goal_util.m"
                    MR_Word hlds__goal_util___MaybeCut_69;

#line 1994 "goal_util.m"
                    hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__FirstStep_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1994 "goal_util.m"
                    if (hlds__goal_util__succeeded)
#line 1994 "goal_util.m"
                      {
#line 1994 "goal_util.m"
                        hlds__goal_util___MaybeCut_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_10, (MR_Integer) 1)));
#line 1996 "goal_util.m"
                        {
#line 1996 "goal_util.m"
                          MR_Word hlds__goal_util__MaybeSubGoal_112;

#line 1995 "goal_util.m"
                          {
#line 1995 "goal_util.m"
                            hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__SubGoal0_118, &hlds__goal_util__MaybeSubGoal_112);
                          }
#line 2001 "goal_util.m"
                          if (((MR_tag((MR_Word) hlds__goal_util__MaybeSubGoal_112)) == (MR_mktag((MR_Integer) 1))))
#line 1998 "goal_util.m"
                            {
#line 1998 "goal_util.m"
                              MR_Word hlds__goal_util__V_91_91;
#line 1998 "goal_util.m"
                              MR_Word hlds__goal_util__GoalExpr_107;
#line 1998 "goal_util.m"
                              MR_Word hlds__goal_util__SubGoal_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeSubGoal_112, (MR_Integer) 0)));
#line 2000 "goal_util.m"
                              MR_Word hlds__goal_util__V_149_149;
#line 2000 "goal_util.m"
                              MR_Word hlds__goal_util__V_148_148;

#line 1999 "goal_util.m"
                              {
#line 1999 "goal_util.m"
                                hlds__goal_util__GoalExpr_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1999 "goal_util.m"
                                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1999 "goal_util.m"
                                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_107, 1) = ((MR_Box) (hlds__goal_util__Reason_68));
#line 1999 "goal_util.m"
                                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_107, 2) = ((MR_Box) (hlds__goal_util__SubGoal_108));
#line 1999 "goal_util.m"
                              }
#line 2000 "goal_util.m"
                              hlds__goal_util__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
#line 2000 "goal_util.m"
                              hlds__goal_util__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
#line 2000 "goal_util.m"
                              {
#line 2000 "goal_util.m"
                                hlds__goal_util__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2000 "goal_util.m"
                                MR_hl_field(MR_mktag(0), hlds__goal_util__V_91_91, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_107));
#line 2000 "goal_util.m"
                                MR_hl_field(MR_mktag(0), hlds__goal_util__V_91_91, 1) = ((MR_Box) (hlds__goal_util__V_149_149));
#line 2000 "goal_util.m"
                              }
#line 2000 "goal_util.m"
                              {
#line 2000 "goal_util.m"
                                MR_Word base;
#line 2000 "goal_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2000 "goal_util.m"
                                *hlds__goal_util__MaybeGoal_8 = base;
#line 2000 "goal_util.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_91_91));
#line 2000 "goal_util.m"
                              }
#line 1998 "goal_util.m"
                            }
#line 2001 "goal_util.m"
                          else
#line 2005 "goal_util.m"
                            *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeSubGoal_112;
#line 1996 "goal_util.m"
                        }
#line 1994 "goal_util.m"
                      }
#line 1994 "goal_util.m"
                    else
#line 2008 "goal_util.m"
                      *hlds__goal_util__MaybeGoal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1993 "goal_util.m"
                  }
#line 1907 "goal_util.m"
                else
#line 1907 "goal_util.m"
                  if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 2055 "goal_util.m"
                    {
#line 2056 "goal_util.m"
                      {
#line 2056 "goal_util.m"
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "predicate \140hlds.goal_util.maybe_transform_goal_at_goal_path\'/4", (MR_String) "shorthand");
#line 2056 "goal_util.m"
                        return;
                      }
#line 2055 "goal_util.m"
                    }
#line 1907 "goal_util.m"
                  else
#line 1907 "goal_util.m"
                    if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1952 "goal_util.m"
                      {
#line 1952 "goal_util.m"
                        MR_Word hlds__goal_util__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 1)));
#line 1952 "goal_util.m"
                        MR_Word hlds__goal_util__CanFail_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 2)));
#line 1952 "goal_util.m"
                        MR_Word hlds__goal_util__Cases0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 3)));
#line 1972 "goal_util.m"
                        MR_Integer hlds__goal_util__CaseNum_55;
#line 1972 "goal_util.m"
                        MR_Word hlds__goal_util__Case0_57;
#line 1954 "goal_util.m"
                        MR_Word hlds__goal_util__TypeCtorInfo_160_160;
#line 1954 "goal_util.m"
                        MR_Word hlds__goal_util___MaybeNumConstructors_56;
#line 1955 "goal_util.m"
                        MR_Box hlds__goal_util__conv4_Case0_57;

#line 1954 "goal_util.m"
                        hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__FirstStep_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1954 "goal_util.m"
                        if (hlds__goal_util__succeeded)
#line 1954 "goal_util.m"
                          {
#line 1954 "goal_util.m"
                            hlds__goal_util__CaseNum_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_10, (MR_Integer) 1)));
#line 1954 "goal_util.m"
                            hlds__goal_util___MaybeNumConstructors_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_10, (MR_Integer) 2)));
#line 12425 "hlds.goal_util.c"
                            hlds__goal_util__TypeCtorInfo_160_160 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 1955 "goal_util.m"
                            {
#line 1955 "goal_util.m"
                              hlds__goal_util__succeeded = mercury__list__index1_3_p_0(hlds__goal_util__TypeCtorInfo_160_160, hlds__goal_util__Cases0_54, hlds__goal_util__CaseNum_55, &hlds__goal_util__conv4_Case0_57);
                            }
#line 1955 "goal_util.m"
                            if (hlds__goal_util__succeeded)
#line 1955 "goal_util.m"
                              {
#line 1955 "goal_util.m"
                                hlds__goal_util__Case0_57 = ((MR_Word) hlds__goal_util__conv4_Case0_57);
#line 1955 "goal_util.m"
                                hlds__goal_util__succeeded = MR_TRUE;
#line 1955 "goal_util.m"
                              }
#line 1954 "goal_util.m"
                          }
#line 1972 "goal_util.m"
                        if (hlds__goal_util__succeeded)
#line 1957 "goal_util.m"
                          {
#line 1957 "goal_util.m"
                            MR_Word hlds__goal_util__CaseGoal0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_57, (MR_Integer) 2)));
#line 1957 "goal_util.m"
                            MR_Word hlds__goal_util__MaybeCaseGoal_59;
#line 1957 "goal_util.m"
                            MR_Word hlds__goal_util__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_57, (MR_Integer) 0)));
#line 1957 "goal_util.m"
                            MR_Word hlds__goal_util__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_57, (MR_Integer) 1)));

#line 1958 "goal_util.m"
                            {
#line 1958 "goal_util.m"
                              hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__CaseGoal0_58, &hlds__goal_util__MaybeCaseGoal_59);
                            }
#line 1966 "goal_util.m"
                            if (((MR_tag((MR_Word) hlds__goal_util__MaybeCaseGoal_59)) == (MR_mktag((MR_Integer) 1))))
#line 1961 "goal_util.m"
                              {
#line 1961 "goal_util.m"
                                MR_Word hlds__goal_util__CaseGoal_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeCaseGoal_59, (MR_Integer) 0)));
#line 1961 "goal_util.m"
                                MR_Word hlds__goal_util__Case_61;
#line 1961 "goal_util.m"
                                MR_Word hlds__goal_util__Cases_62;
#line 1961 "goal_util.m"
                                MR_Word hlds__goal_util__V_94_94;
#line 1961 "goal_util.m"
                                MR_Word hlds__goal_util__GoalExpr_102;
#line 1962 "goal_util.m"
                                MR_Word hlds__goal_util__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_57, (MR_Integer) 0)));
#line 1962 "goal_util.m"
                                MR_Word hlds__goal_util__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_57, (MR_Integer) 1)));
#line 1962 "goal_util.m"
                                MR_Word hlds__goal_util__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_57, (MR_Integer) 2)));
#line 1965 "goal_util.m"
                                MR_Word hlds__goal_util__V_145_145;
#line 1965 "goal_util.m"
                                MR_Word hlds__goal_util__V_144_144;

#line 1962 "goal_util.m"
                                {
#line 1962 "goal_util.m"
                                  hlds__goal_util__Case_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1962 "goal_util.m"
                                  MR_hl_field(MR_mktag(0), hlds__goal_util__Case_61, 0) = ((MR_Box) (hlds__goal_util__V_141_141));
#line 1962 "goal_util.m"
                                  MR_hl_field(MR_mktag(0), hlds__goal_util__Case_61, 1) = ((MR_Box) (hlds__goal_util__V_142_142));
#line 1962 "goal_util.m"
                                  MR_hl_field(MR_mktag(0), hlds__goal_util__Case_61, 2) = ((MR_Box) (hlds__goal_util__CaseGoal_60));
#line 1962 "goal_util.m"
                                }
#line 1963 "goal_util.m"
                                {
#line 1963 "goal_util.m"
                                  mercury__list__det_replace_nth_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, hlds__goal_util__Cases0_54, hlds__goal_util__CaseNum_55, ((MR_Box) (hlds__goal_util__Case_61)), &hlds__goal_util__Cases_62);
                                }
#line 1964 "goal_util.m"
                                {
#line 1964 "goal_util.m"
                                  hlds__goal_util__GoalExpr_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1964 "goal_util.m"
                                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1964 "goal_util.m"
                                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_102, 1) = ((MR_Box) (hlds__goal_util__Var_52));
#line 1964 "goal_util.m"
                                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_102, 2) = ((MR_Box) (hlds__goal_util__CanFail_53));
#line 1964 "goal_util.m"
                                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_102, 3) = ((MR_Box) (hlds__goal_util__Cases_62));
#line 1964 "goal_util.m"
                                }
#line 1965 "goal_util.m"
                                hlds__goal_util__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
#line 1965 "goal_util.m"
                                hlds__goal_util__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
#line 1965 "goal_util.m"
                                {
#line 1965 "goal_util.m"
                                  hlds__goal_util__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1965 "goal_util.m"
                                  MR_hl_field(MR_mktag(0), hlds__goal_util__V_94_94, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_102));
#line 1965 "goal_util.m"
                                  MR_hl_field(MR_mktag(0), hlds__goal_util__V_94_94, 1) = ((MR_Box) (hlds__goal_util__V_145_145));
#line 1965 "goal_util.m"
                                }
#line 1965 "goal_util.m"
                                {
#line 1965 "goal_util.m"
                                  MR_Word base;
#line 1965 "goal_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1965 "goal_util.m"
                                  *hlds__goal_util__MaybeGoal_8 = base;
#line 1965 "goal_util.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_94_94));
#line 1965 "goal_util.m"
                                }
#line 1961 "goal_util.m"
                              }
#line 1966 "goal_util.m"
                            else
#line 1970 "goal_util.m"
                              *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeCaseGoal_59;
#line 1957 "goal_util.m"
                          }
#line 1972 "goal_util.m"
                        else
#line 1973 "goal_util.m"
                          *hlds__goal_util__MaybeGoal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1952 "goal_util.m"
                      }
#line 1907 "goal_util.m"
                    else
#line 1906 "goal_util.m"
                      *hlds__goal_util__MaybeGoal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1897 "goal_util.m"
      }
#line 1893 "goal_util.m"
  }
#line 414 "goal_util.m"
}

#line 1825 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_4(
#line 1825 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1825 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1)
#line 1825 "goal_util.m"
{
#line 1825 "goal_util.m"
  {
#line 1825 "goal_util.m"
    MR_Box hlds__goal_util__wrapper_arg_2;
#line 1825 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 1825 "goal_util.m"
    MR_Word hlds__goal_util__conv3_Case_4;

#line 1825 "goal_util.m"
    {
#line 1825 "goal_util.m"
      hlds__goal_util__conv3_Case_4 = hlds__goal_util__maybe_strip_equality_pretest_case_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    }
#line 1825 "goal_util.m"
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv3_Case_4));
#line 1825 "goal_util.m"
    return hlds__goal_util__wrapper_arg_2;
#line 1825 "goal_util.m"
  }
#line 1825 "goal_util.m"
}

#line 1864 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_3(
#line 1864 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1864 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1)
#line 1864 "goal_util.m"
{
#line 1864 "goal_util.m"
  {
#line 1864 "goal_util.m"
    MR_Box hlds__goal_util__wrapper_arg_2;
#line 1864 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 1864 "goal_util.m"
    MR_Word hlds__goal_util__conv2_Goal_4;

#line 1864 "goal_util.m"
    {
#line 1864 "goal_util.m"
      hlds__goal_util__conv2_Goal_4 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    }
#line 1864 "goal_util.m"
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv2_Goal_4));
#line 1864 "goal_util.m"
    return hlds__goal_util__wrapper_arg_2;
#line 1864 "goal_util.m"
  }
#line 1864 "goal_util.m"
}

#line 1820 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_2(
#line 1820 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1820 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1)
#line 1820 "goal_util.m"
{
#line 1820 "goal_util.m"
  {
#line 1820 "goal_util.m"
    MR_Box hlds__goal_util__wrapper_arg_2;
#line 1820 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 1820 "goal_util.m"
    MR_Word hlds__goal_util__conv1_Goal_4;

#line 1820 "goal_util.m"
    {
#line 1820 "goal_util.m"
      hlds__goal_util__conv1_Goal_4 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    }
#line 1820 "goal_util.m"
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv1_Goal_4));
#line 1820 "goal_util.m"
    return hlds__goal_util__wrapper_arg_2;
#line 1820 "goal_util.m"
  }
#line 1820 "goal_util.m"
}

#line 1815 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_1(
#line 1815 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1815 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1)
#line 1815 "goal_util.m"
{
#line 1815 "goal_util.m"
  {
#line 1815 "goal_util.m"
    MR_Box hlds__goal_util__wrapper_arg_2;
#line 1815 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 1815 "goal_util.m"
    MR_Word hlds__goal_util__conv0_Goal_4;

#line 1815 "goal_util.m"
    {
#line 1815 "goal_util.m"
      hlds__goal_util__conv0_Goal_4 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    }
#line 1815 "goal_util.m"
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv0_Goal_4));
#line 1815 "goal_util.m"
    return hlds__goal_util__wrapper_arg_2;
#line 1815 "goal_util.m"
  }
#line 1815 "goal_util.m"
}

#line 400 "goal_util.m"
MR_Word MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0(
#line 400 "goal_util.m"
  MR_Word hlds__goal_util__Goal0_3)
#line 400 "goal_util.m"
{
#line 1802 "goal_util.m"
  {
#line 1802 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1802 "goal_util.m"
    MR_Word hlds__goal_util__Goal_4;
#line 1802 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_3, (MR_Integer) 0)));
#line 1802 "goal_util.m"
    MR_Word hlds__goal_util__GoalInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_3, (MR_Integer) 1)));

#line 1813 "goal_util.m"
    if (((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_5)) == (MR_mktag((MR_Integer) 0))))
#line 1840 "goal_util.m"
      {
#line 1840 "goal_util.m"
        MR_Word hlds__goal_util__SubGoal0_47 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr0_5), (MR_Integer) 0);
#line 1840 "goal_util.m"
        MR_Word hlds__goal_util__SubGoal_48;
#line 1840 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr_80;

#line 1841 "goal_util.m"
        {
#line 1841 "goal_util.m"
          hlds__goal_util__SubGoal_48 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__SubGoal0_47);
        }
#line 1842 "goal_util.m"
        hlds__goal_util__GoalExpr_80 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_util__SubGoal_48);
#line 1843 "goal_util.m"
        {
#line 1843 "goal_util.m"
          hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1843 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_80));
#line 1843 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
#line 1843 "goal_util.m"
        }
#line 1840 "goal_util.m"
      }
#line 1813 "goal_util.m"
    else
#line 1813 "goal_util.m"
      if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1814 "goal_util.m"
        {
#line 1814 "goal_util.m"
          MR_Word hlds__goal_util__TypeCtorInfo_99_99 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1814 "goal_util.m"
          MR_Word hlds__goal_util__ConjType_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 1)));
#line 1814 "goal_util.m"
          MR_Word hlds__goal_util__Goals0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 2)));
#line 1814 "goal_util.m"
          MR_Word hlds__goal_util__Goals_32;
#line 1814 "goal_util.m"
          MR_Word hlds__goal_util__GoalExpr_33;

#line 1815 "goal_util.m"
          {
#line 1815 "goal_util.m"
            hlds__goal_util__Goals_32 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_99_99, hlds__goal_util__TypeCtorInfo_99_99, (MR_Word) &hlds__goal_util_scalar_common_4[7], hlds__goal_util__Goals0_31);
          }
#line 1816 "goal_util.m"
          {
#line 1816 "goal_util.m"
            hlds__goal_util__GoalExpr_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1816 "goal_util.m"
            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1816 "goal_util.m"
            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_33, 1) = ((MR_Box) (hlds__goal_util__ConjType_30));
#line 1816 "goal_util.m"
            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_33, 2) = ((MR_Box) (hlds__goal_util__Goals_32));
#line 1816 "goal_util.m"
          }
#line 1817 "goal_util.m"
          {
#line 1817 "goal_util.m"
            hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1817 "goal_util.m"
            MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_33));
#line 1817 "goal_util.m"
            MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
#line 1817 "goal_util.m"
          }
#line 1814 "goal_util.m"
        }
#line 1813 "goal_util.m"
      else
#line 1813 "goal_util.m"
        if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1819 "goal_util.m"
          {
#line 1819 "goal_util.m"
            MR_Word hlds__goal_util__TypeCtorInfo_102_102 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1819 "goal_util.m"
            MR_Word hlds__goal_util__SubGoals0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 1)));
#line 1819 "goal_util.m"
            MR_Word hlds__goal_util__SubGoals_35;
#line 1819 "goal_util.m"
            MR_Word hlds__goal_util__GoalExpr_75;

#line 1820 "goal_util.m"
            {
#line 1820 "goal_util.m"
              hlds__goal_util__SubGoals_35 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_102_102, hlds__goal_util__TypeCtorInfo_102_102, (MR_Word) &hlds__goal_util_scalar_common_4[8], hlds__goal_util__SubGoals0_34);
            }
#line 1821 "goal_util.m"
            {
#line 1821 "goal_util.m"
              hlds__goal_util__GoalExpr_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1821 "goal_util.m"
              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1821 "goal_util.m"
              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_75, 1) = ((MR_Box) (hlds__goal_util__SubGoals_35));
#line 1821 "goal_util.m"
            }
#line 1822 "goal_util.m"
            {
#line 1822 "goal_util.m"
              hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1822 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_75));
#line 1822 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
#line 1822 "goal_util.m"
            }
#line 1819 "goal_util.m"
          }
#line 1813 "goal_util.m"
        else
#line 1813 "goal_util.m"
          if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1829 "goal_util.m"
            {
#line 1829 "goal_util.m"
              MR_Word hlds__goal_util__Vars_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 1)));
#line 1829 "goal_util.m"
              MR_Word hlds__goal_util__Cond0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 2)));
#line 1829 "goal_util.m"
              MR_Word hlds__goal_util__Then0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 3)));
#line 1829 "goal_util.m"
              MR_Word hlds__goal_util__Else0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 4)));

#line 1830 "goal_util.m"
              {
#line 1830 "goal_util.m"
                hlds__goal_util__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__goal_util__GoalInfo0_6, (MR_Integer) 18);
              }
#line 1832 "goal_util.m"
              if (hlds__goal_util__succeeded)
#line 1831 "goal_util.m"
                hlds__goal_util__Goal_4 = hlds__goal_util__Else0_43;
#line 1832 "goal_util.m"
              else
#line 1833 "goal_util.m"
                {
#line 1833 "goal_util.m"
                  MR_Word hlds__goal_util__Cond_44;
#line 1833 "goal_util.m"
                  MR_Word hlds__goal_util__Then_45;
#line 1833 "goal_util.m"
                  MR_Word hlds__goal_util__Else_46;
#line 1833 "goal_util.m"
                  MR_Word hlds__goal_util__GoalExpr_77;

#line 1833 "goal_util.m"
                  {
#line 1833 "goal_util.m"
                    hlds__goal_util__Cond_44 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__Cond0_41);
                  }
#line 1834 "goal_util.m"
                  {
#line 1834 "goal_util.m"
                    hlds__goal_util__Then_45 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__Then0_42);
                  }
#line 1835 "goal_util.m"
                  {
#line 1835 "goal_util.m"
                    hlds__goal_util__Else_46 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__Else0_43);
                  }
#line 1836 "goal_util.m"
                  {
#line 1836 "goal_util.m"
                    hlds__goal_util__GoalExpr_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1836 "goal_util.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1836 "goal_util.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_77, 1) = ((MR_Box) (hlds__goal_util__Vars_40));
#line 1836 "goal_util.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_77, 2) = ((MR_Box) (hlds__goal_util__Cond_44));
#line 1836 "goal_util.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_77, 3) = ((MR_Box) (hlds__goal_util__Then_45));
#line 1836 "goal_util.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_77, 4) = ((MR_Box) (hlds__goal_util__Else_46));
#line 1836 "goal_util.m"
                  }
#line 1837 "goal_util.m"
                  {
#line 1837 "goal_util.m"
                    hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1837 "goal_util.m"
                    MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_77));
#line 1837 "goal_util.m"
                    MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
#line 1837 "goal_util.m"
                  }
#line 1833 "goal_util.m"
                }
#line 1829 "goal_util.m"
            }
#line 1813 "goal_util.m"
          else
#line 1813 "goal_util.m"
            if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1845 "goal_util.m"
              {
#line 1845 "goal_util.m"
                MR_Word hlds__goal_util__Reason_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 1)));
#line 1845 "goal_util.m"
                MR_Word hlds__goal_util__SubGoal0_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 2)));
#line 1847 "goal_util.m"
                MR_Word hlds__goal_util__FGT_51;
#line 1847 "goal_util.m"
                MR_Word hlds__goal_util__V_50_50;

#line 1847 "goal_util.m"
                hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_49)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_49, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1847 "goal_util.m"
                if (hlds__goal_util__succeeded)
#line 1847 "goal_util.m"
                  {
#line 1847 "goal_util.m"
                    hlds__goal_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_49, (MR_Integer) 1)));
#line 1847 "goal_util.m"
                    hlds__goal_util__FGT_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_49, (MR_Integer) 2)));
#line 1849 "goal_util.m"
                    if ((hlds__goal_util__FGT_51 == (MR_Integer) 1))
#line 1848 "goal_util.m"
                      hlds__goal_util__succeeded = MR_TRUE;
#line 1849 "goal_util.m"
                    else
#line 1849 "goal_util.m"
                      if ((hlds__goal_util__FGT_51 == (MR_Integer) 2))
#line 1849 "goal_util.m"
                        hlds__goal_util__succeeded = MR_TRUE;
#line 1849 "goal_util.m"
                      else
#line 1849 "goal_util.m"
                        hlds__goal_util__succeeded = MR_FALSE;
#line 1847 "goal_util.m"
                  }
#line 1853 "goal_util.m"
                if (hlds__goal_util__succeeded)
#line 1852 "goal_util.m"
                  hlds__goal_util__Goal_4 = hlds__goal_util__Goal0_3;
#line 1853 "goal_util.m"
                else
#line 1854 "goal_util.m"
                  {
#line 1854 "goal_util.m"
                    MR_Word hlds__goal_util__GoalExpr_81;
#line 1854 "goal_util.m"
                    MR_Word hlds__goal_util__SubGoal_82;

#line 1854 "goal_util.m"
                    {
#line 1854 "goal_util.m"
                      hlds__goal_util__SubGoal_82 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__SubGoal0_86);
                    }
#line 1855 "goal_util.m"
                    {
#line 1855 "goal_util.m"
                      hlds__goal_util__GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1855 "goal_util.m"
                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1855 "goal_util.m"
                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_81, 1) = ((MR_Box) (hlds__goal_util__Reason_49));
#line 1855 "goal_util.m"
                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_81, 2) = ((MR_Box) (hlds__goal_util__SubGoal_82));
#line 1855 "goal_util.m"
                    }
#line 1856 "goal_util.m"
                    {
#line 1856 "goal_util.m"
                      hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1856 "goal_util.m"
                      MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_81));
#line 1856 "goal_util.m"
                      MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
#line 1856 "goal_util.m"
                    }
#line 1854 "goal_util.m"
                  }
#line 1845 "goal_util.m"
              }
#line 1813 "goal_util.m"
            else
#line 1813 "goal_util.m"
              if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1859 "goal_util.m"
                {
#line 1859 "goal_util.m"
                  MR_Word hlds__goal_util__ShortHand0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 1)));

#line 1869 "goal_util.m"
                  if (((MR_tag((MR_Word) hlds__goal_util__ShortHand0_52)) == (MR_mktag((MR_Integer) 1))))
#line 1862 "goal_util.m"
                    {
#line 1862 "goal_util.m"
                      MR_Word hlds__goal_util__TypeCtorInfo_108_108;
#line 1862 "goal_util.m"
                      MR_Word hlds__goal_util__GoalType_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_52, (MR_Integer) 0)));
#line 1862 "goal_util.m"
                      MR_Word hlds__goal_util__Outer_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_52, (MR_Integer) 1)));
#line 1862 "goal_util.m"
                      MR_Word hlds__goal_util__Inner_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_52, (MR_Integer) 2)));
#line 1862 "goal_util.m"
                      MR_Word hlds__goal_util__MaybeOutputVars_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_52, (MR_Integer) 3)));
#line 1862 "goal_util.m"
                      MR_Word hlds__goal_util__MainGoal0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_52, (MR_Integer) 4)));
#line 1862 "goal_util.m"
                      MR_Word hlds__goal_util__OrElseGoals0_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_52, (MR_Integer) 5)));
#line 1862 "goal_util.m"
                      MR_Word hlds__goal_util__OrElseInners_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_52, (MR_Integer) 6)));
#line 1862 "goal_util.m"
                      MR_Word hlds__goal_util__MainGoal_60;
#line 1862 "goal_util.m"
                      MR_Word hlds__goal_util__OrElseGoals_61;
#line 1862 "goal_util.m"
                      MR_Word hlds__goal_util__ShortHand_62;
#line 1862 "goal_util.m"
                      MR_Word hlds__goal_util__GoalExpr_88;

#line 1863 "goal_util.m"
                      {
#line 1863 "goal_util.m"
                        hlds__goal_util__MainGoal_60 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__MainGoal0_57);
                      }
#line 13043 "hlds.goal_util.c"
                      hlds__goal_util__TypeCtorInfo_108_108 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1864 "goal_util.m"
                      {
#line 1864 "goal_util.m"
                        hlds__goal_util__OrElseGoals_61 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_108_108, hlds__goal_util__TypeCtorInfo_108_108, (MR_Word) &hlds__goal_util_scalar_common_4[9], hlds__goal_util__OrElseGoals0_58);
                      }
#line 1865 "goal_util.m"
                      {
#line 1865 "goal_util.m"
                        hlds__goal_util__ShortHand_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1865 "goal_util.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_62, 0) = ((MR_Box) (hlds__goal_util__GoalType_53));
#line 1865 "goal_util.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_62, 1) = ((MR_Box) (hlds__goal_util__Outer_54));
#line 1865 "goal_util.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_62, 2) = ((MR_Box) (hlds__goal_util__Inner_55));
#line 1865 "goal_util.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_62, 3) = ((MR_Box) (hlds__goal_util__MaybeOutputVars_56));
#line 1865 "goal_util.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_62, 4) = ((MR_Box) (hlds__goal_util__MainGoal_60));
#line 1865 "goal_util.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_62, 5) = ((MR_Box) (hlds__goal_util__OrElseGoals_61));
#line 1865 "goal_util.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_62, 6) = ((MR_Box) (hlds__goal_util__OrElseInners_59));
#line 1865 "goal_util.m"
                      }
#line 1867 "goal_util.m"
                      {
#line 1867 "goal_util.m"
                        hlds__goal_util__GoalExpr_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1867 "goal_util.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1867 "goal_util.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_88, 1) = ((MR_Box) (hlds__goal_util__ShortHand_62));
#line 1867 "goal_util.m"
                      }
#line 1868 "goal_util.m"
                      {
#line 1868 "goal_util.m"
                        hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1868 "goal_util.m"
                        MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_88));
#line 1868 "goal_util.m"
                        MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
#line 1868 "goal_util.m"
                      }
#line 1862 "goal_util.m"
                    }
#line 1869 "goal_util.m"
                  else
#line 1869 "goal_util.m"
                    if (((MR_tag((MR_Word) hlds__goal_util__ShortHand0_52)) == (MR_mktag((MR_Integer) 0))))
#line 1876 "goal_util.m"
                      {
#line 1877 "goal_util.m"
                        {
#line 1877 "goal_util.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "function \140hlds.goal_util.maybe_strip_equality_pretest\'/1", (MR_String) "bi_implication");
                        }
#line 1876 "goal_util.m"
                      }
#line 1869 "goal_util.m"
                    else
#line 1870 "goal_util.m"
                      {
#line 1870 "goal_util.m"
                        MR_Word hlds__goal_util__MaybeIO_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_52, (MR_Integer) 0)));
#line 1870 "goal_util.m"
                        MR_Word hlds__goal_util__ResultVar_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_52, (MR_Integer) 1)));
#line 1870 "goal_util.m"
                        MR_Word hlds__goal_util__GoalExpr_89;
#line 1870 "goal_util.m"
                        MR_Word hlds__goal_util__SubGoal0_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_52, (MR_Integer) 2)));
#line 1870 "goal_util.m"
                        MR_Word hlds__goal_util__SubGoal_91;
#line 1870 "goal_util.m"
                        MR_Word hlds__goal_util__ShortHand_92;

#line 1871 "goal_util.m"
                        {
#line 1871 "goal_util.m"
                          hlds__goal_util__SubGoal_91 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__SubGoal0_90);
                        }
#line 1872 "goal_util.m"
                        {
#line 1872 "goal_util.m"
                          hlds__goal_util__ShortHand_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1872 "goal_util.m"
                          MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_92, 0) = ((MR_Box) (hlds__goal_util__MaybeIO_63));
#line 1872 "goal_util.m"
                          MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_92, 1) = ((MR_Box) (hlds__goal_util__ResultVar_64));
#line 1872 "goal_util.m"
                          MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_92, 2) = ((MR_Box) (hlds__goal_util__SubGoal_91));
#line 1872 "goal_util.m"
                        }
#line 1873 "goal_util.m"
                        {
#line 1873 "goal_util.m"
                          hlds__goal_util__GoalExpr_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1873 "goal_util.m"
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1873 "goal_util.m"
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_89, 1) = ((MR_Box) (hlds__goal_util__ShortHand_92));
#line 1873 "goal_util.m"
                        }
#line 1874 "goal_util.m"
                        {
#line 1874 "goal_util.m"
                          hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1874 "goal_util.m"
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_89));
#line 1874 "goal_util.m"
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
#line 1874 "goal_util.m"
                        }
#line 1870 "goal_util.m"
                      }
#line 1859 "goal_util.m"
                }
#line 1813 "goal_util.m"
              else
#line 1813 "goal_util.m"
                if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1824 "goal_util.m"
                  {
#line 1824 "goal_util.m"
                    MR_Word hlds__goal_util__TypeCtorInfo_105_105 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 1824 "goal_util.m"
                    MR_Word hlds__goal_util__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 1)));
#line 1824 "goal_util.m"
                    MR_Word hlds__goal_util__CanFail_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 2)));
#line 1824 "goal_util.m"
                    MR_Word hlds__goal_util__Cases0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 3)));
#line 1824 "goal_util.m"
                    MR_Word hlds__goal_util__Cases_39;
#line 1824 "goal_util.m"
                    MR_Word hlds__goal_util__GoalExpr_76;

#line 1825 "goal_util.m"
                    {
#line 1825 "goal_util.m"
                      hlds__goal_util__Cases_39 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_105_105, hlds__goal_util__TypeCtorInfo_105_105, (MR_Word) &hlds__goal_util_scalar_common_4[10], hlds__goal_util__Cases0_38);
                    }
#line 1826 "goal_util.m"
                    {
#line 1826 "goal_util.m"
                      hlds__goal_util__GoalExpr_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1826 "goal_util.m"
                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1826 "goal_util.m"
                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_76, 1) = ((MR_Box) (hlds__goal_util__Var_36));
#line 1826 "goal_util.m"
                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_76, 2) = ((MR_Box) (hlds__goal_util__CanFail_37));
#line 1826 "goal_util.m"
                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_76, 3) = ((MR_Box) (hlds__goal_util__Cases_39));
#line 1826 "goal_util.m"
                    }
#line 1827 "goal_util.m"
                    {
#line 1827 "goal_util.m"
                      hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1827 "goal_util.m"
                      MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_76));
#line 1827 "goal_util.m"
                      MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
#line 1827 "goal_util.m"
                    }
#line 1824 "goal_util.m"
                  }
#line 1813 "goal_util.m"
                else
#line 1812 "goal_util.m"
                  hlds__goal_util__Goal_4 = hlds__goal_util__Goal0_3;
#line 1802 "goal_util.m"
    return hlds__goal_util__Goal_4;
#line 1802 "goal_util.m"
  }
#line 400 "goal_util.m"
}

#line 395 "goal_util.m"
MR_bool MR_CALL 
hlds__goal_util__foreign_code_uses_variable_2_p_0(
#line 395 "goal_util.m"
  MR_Word hlds__goal_util__Impl_3,
#line 395 "goal_util.m"
  MR_String hlds__goal_util__VarName_4)
#line 395 "goal_util.m"
{
#line 1796 "goal_util.m"
  {
#line 1796 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1796 "goal_util.m"
    MR_String hlds__goal_util__ForeignBody_5 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__goal_util__Impl_3, (MR_Integer) 0)));
#line 1797 "goal_util.m"
    MR_Word hlds__goal_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Impl_3, (MR_Integer) 1)));
#line 1798 "goal_util.m"
    MR_Integer hlds__goal_util__V_7_7;

#line 1798 "goal_util.m"
    {
#line 1798 "goal_util.m"
      hlds__goal_util__succeeded = mercury__string__sub_string_search_3_p_0(hlds__goal_util__ForeignBody_5, hlds__goal_util__VarName_4, &hlds__goal_util__V_7_7);
    }
#line 1796 "goal_util.m"
    return hlds__goal_util__succeeded;
#line 1796 "goal_util.m"
  }
#line 395 "goal_util.m"
}

#line 390 "goal_util.m"
void MR_CALL 
hlds__goal_util__generate_cast_with_insts_7_p_0(
#line 390 "goal_util.m"
  MR_Word hlds__goal_util__CastType_8,
#line 390 "goal_util.m"
  MR_Word hlds__goal_util__InArg_9,
#line 390 "goal_util.m"
  MR_Word hlds__goal_util__OutArg_10,
#line 390 "goal_util.m"
  MR_Word hlds__goal_util__InInst_11,
#line 390 "goal_util.m"
  MR_Word hlds__goal_util__OutInst_12,
#line 390 "goal_util.m"
  MR_Word hlds__goal_util__Context_13,
#line 390 "goal_util.m"
  MR_Word * hlds__goal_util__Goal_14)
#line 390 "goal_util.m"
{
#line 1732 "goal_util.m"
  {
#line 1732 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1732 "goal_util.m"
    MR_Word hlds__goal_util__NonLocals_15;
#line 1732 "goal_util.m"
    MR_Word hlds__goal_util__InstMapDelta_16;
#line 1732 "goal_util.m"
    MR_Word hlds__goal_util__GoalInfo_17;
#line 1732 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_18;
#line 1732 "goal_util.m"
    MR_Word hlds__goal_util__V_19_19;
#line 1732 "goal_util.m"
    MR_Word hlds__goal_util__V_20_20;
#line 1732 "goal_util.m"
    MR_Word hlds__goal_util__V_22_22;
#line 1732 "goal_util.m"
    MR_Word hlds__goal_util__V_23_23;
#line 1732 "goal_util.m"
    MR_Word hlds__goal_util__V_27_27;
#line 1732 "goal_util.m"
    MR_Word hlds__goal_util__V_31_31;
#line 1732 "goal_util.m"
    MR_Word hlds__goal_util__V_32_32;
#line 1732 "goal_util.m"
    MR_Word hlds__goal_util__V_33_33;
#line 1732 "goal_util.m"
    MR_Word hlds__goal_util__V_34_34;

#line 1733 "goal_util.m"
    {
#line 1733 "goal_util.m"
      hlds__goal_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1733 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_20_20, 0) = ((MR_Box) (hlds__goal_util__OutArg_10));
#line 1733 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1733 "goal_util.m"
    }
#line 1733 "goal_util.m"
    {
#line 1733 "goal_util.m"
      hlds__goal_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1733 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_19_19, 0) = ((MR_Box) (hlds__goal_util__InArg_9));
#line 1733 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_19_19, 1) = ((MR_Box) (hlds__goal_util__V_20_20));
#line 1733 "goal_util.m"
    }
#line 1733 "goal_util.m"
    {
#line 1733 "goal_util.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__V_19_19, &hlds__goal_util__NonLocals_15);
    }
#line 1734 "goal_util.m"
    {
#line 1734 "goal_util.m"
      hlds__goal_util__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1734 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_23_23, 0) = ((MR_Box) (hlds__goal_util__OutArg_10));
#line 1734 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_23_23, 1) = ((MR_Box) (hlds__goal_util__OutInst_12));
#line 1734 "goal_util.m"
    }
#line 1734 "goal_util.m"
    {
#line 1734 "goal_util.m"
      hlds__goal_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1734 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_22_22, 0) = ((MR_Box) (hlds__goal_util__V_23_23));
#line 1734 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1734 "goal_util.m"
    }
#line 1734 "goal_util.m"
    {
#line 1734 "goal_util.m"
      hlds__goal_util__InstMapDelta_16 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(hlds__goal_util__V_22_22);
    }
#line 1735 "goal_util.m"
    {
#line 1735 "goal_util.m"
      hlds__hlds_goal__goal_info_init_6_p_0(hlds__goal_util__NonLocals_15, hlds__goal_util__InstMapDelta_16, (MR_Integer) 0, (MR_Integer) 0, hlds__goal_util__Context_13, &hlds__goal_util__GoalInfo_17);
    }
#line 1737 "goal_util.m"
    {
#line 1737 "goal_util.m"
      hlds__goal_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1737 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__V_27_27, 0) = ((MR_Box) (hlds__goal_util__CastType_8));
#line 1737 "goal_util.m"
    }
#line 1738 "goal_util.m"
    {
#line 1738 "goal_util.m"
      hlds__goal_util__V_32_32 = parse_tree__prog_mode__in_mode_1_f_0(hlds__goal_util__InInst_11);
    }
#line 1738 "goal_util.m"
    {
#line 1738 "goal_util.m"
      hlds__goal_util__V_34_34 = parse_tree__prog_mode__out_mode_1_f_0(hlds__goal_util__OutInst_12);
    }
#line 1738 "goal_util.m"
    {
#line 1738 "goal_util.m"
      hlds__goal_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1738 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_33_33, 0) = ((MR_Box) (hlds__goal_util__V_34_34));
#line 1738 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1738 "goal_util.m"
    }
#line 1737 "goal_util.m"
    {
#line 1737 "goal_util.m"
      hlds__goal_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1737 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_31_31, 0) = ((MR_Box) (hlds__goal_util__V_32_32));
#line 1737 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_31_31, 1) = ((MR_Box) (hlds__goal_util__V_33_33));
#line 1737 "goal_util.m"
    }
#line 1737 "goal_util.m"
    {
#line 1737 "goal_util.m"
      hlds__goal_util__GoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1737 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1737 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_18, 1) = ((MR_Box) (hlds__goal_util__V_27_27));
#line 1737 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_18, 2) = ((MR_Box) (hlds__goal_util__V_19_19));
#line 1737 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_18, 3) = ((MR_Box) (hlds__goal_util__V_31_31));
#line 1737 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_18, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1737 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_18, 5) = ((MR_Box) ((MR_Integer) 0));
#line 1737 "goal_util.m"
    }
#line 1739 "goal_util.m"
    {
#line 1739 "goal_util.m"
      MR_Word base;
#line 1739 "goal_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1739 "goal_util.m"
      *hlds__goal_util__Goal_14 = base;
#line 1739 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_18));
#line 1739 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_17));
#line 1739 "goal_util.m"
    }
#line 1732 "goal_util.m"
  }
#line 390 "goal_util.m"
}

#line 383 "goal_util.m"
void MR_CALL 
hlds__goal_util__generate_cast_5_p_0(
#line 383 "goal_util.m"
  MR_Word hlds__goal_util__CastType_6,
#line 383 "goal_util.m"
  MR_Word hlds__goal_util__InArg_7,
#line 383 "goal_util.m"
  MR_Word hlds__goal_util__OutArg_8,
#line 383 "goal_util.m"
  MR_Word hlds__goal_util__Context_9,
#line 383 "goal_util.m"
  MR_Word * hlds__goal_util__Goal_10)
#line 383 "goal_util.m"
{
#line 1726 "goal_util.m"
  {
#line 1726 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1726 "goal_util.m"
    MR_Word hlds__goal_util__Ground_11;

#line 1727 "goal_util.m"
    {
#line 1727 "goal_util.m"
      hlds__goal_util__Ground_11 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 1728 "goal_util.m"
    {
#line 1728 "goal_util.m"
      hlds__goal_util__generate_cast_with_insts_7_p_0(hlds__goal_util__CastType_6, hlds__goal_util__InArg_7, hlds__goal_util__OutArg_8, hlds__goal_util__Ground_11, hlds__goal_util__Ground_11, hlds__goal_util__Context_9, hlds__goal_util__Goal_10);
#line 1728 "goal_util.m"
      return;
    }
#line 1726 "goal_util.m"
  }
#line 383 "goal_util.m"
}

#line 1723 "goal_util.m"
static void MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_4(
#line 1723 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1723 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1723 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 1723 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 1723 "goal_util.m"
{
#line 1723 "goal_util.m"
  {
#line 1723 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 1723 "goal_util.m"
    MR_Word hlds__goal_util__conv2_HeadVar__3_3;

#line 1723 "goal_util.m"
    {
#line 1723 "goal_util.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv2_HeadVar__3_3);
    }
#line 1723 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv2_HeadVar__3_3));
#line 1723 "goal_util.m"
  }
#line 1723 "goal_util.m"
}

#line 1719 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_3(
#line 1719 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg)
#line 1719 "goal_util.m"
{
#line 1719 "goal_util.m"
  {
#line 1719 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1719 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;

#line 1719 "goal_util.m"
    {
#line 1719 "goal_util.m"
      return hlds__goal_util__succeeded = hlds__goal_util__IntroducedFrom__pred__generate_foreign_proc__1719__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 4))));
    }
#line 1719 "goal_util.m"
    return hlds__goal_util__succeeded;
#line 1719 "goal_util.m"
  }
#line 1719 "goal_util.m"
}

#line 1703 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_2(
#line 1703 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1703 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1)
#line 1703 "goal_util.m"
{
#line 1703 "goal_util.m"
  {
#line 1703 "goal_util.m"
    MR_Box hlds__goal_util__wrapper_arg_2;
#line 1703 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 1703 "goal_util.m"
    MR_Word hlds__goal_util__conv1_HeadVar__2_2;

#line 1703 "goal_util.m"
    {
#line 1703 "goal_util.m"
      hlds__goal_util__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    }
#line 1703 "goal_util.m"
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv1_HeadVar__2_2));
#line 1703 "goal_util.m"
    return hlds__goal_util__wrapper_arg_2;
#line 1703 "goal_util.m"
  }
#line 1703 "goal_util.m"
}

#line 1702 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_1(
#line 1702 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1702 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1)
#line 1702 "goal_util.m"
{
#line 1702 "goal_util.m"
  {
#line 1702 "goal_util.m"
    MR_Box hlds__goal_util__wrapper_arg_2;
#line 1702 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 1702 "goal_util.m"
    MR_Word hlds__goal_util__conv0_HeadVar__2_2;

#line 1702 "goal_util.m"
    {
#line 1702 "goal_util.m"
      hlds__goal_util__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    }
#line 1702 "goal_util.m"
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__2_2));
#line 1702 "goal_util.m"
    return hlds__goal_util__wrapper_arg_2;
#line 1702 "goal_util.m"
  }
#line 1702 "goal_util.m"
}

#line 373 "goal_util.m"
void MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0(
#line 373 "goal_util.m"
  MR_Word hlds__goal_util__ModuleName_17,
#line 373 "goal_util.m"
  MR_String hlds__goal_util__ProcName_18,
#line 373 "goal_util.m"
  MR_Word hlds__goal_util__PredOrFunc_19,
#line 373 "goal_util.m"
  MR_Word hlds__goal_util__ModeNo_20,
#line 373 "goal_util.m"
  MR_Word hlds__goal_util__Detism_21,
#line 373 "goal_util.m"
  MR_Word hlds__goal_util__Purity_22,
#line 373 "goal_util.m"
  MR_Word hlds__goal_util__Attributes_23,
#line 373 "goal_util.m"
  MR_Word hlds__goal_util__Args_24,
#line 373 "goal_util.m"
  MR_Word hlds__goal_util__ExtraArgs_25,
#line 373 "goal_util.m"
  MR_Word hlds__goal_util__MaybeTraceRuntimeCond_26,
#line 373 "goal_util.m"
  MR_String hlds__goal_util__Code_27,
#line 373 "goal_util.m"
  MR_Word hlds__goal_util__Features_28,
#line 373 "goal_util.m"
  MR_Word hlds__goal_util__InstMapDelta0_29,
#line 373 "goal_util.m"
  MR_Word hlds__goal_util__ModuleInfo_30,
#line 373 "goal_util.m"
  MR_Word hlds__goal_util__Context_31,
#line 373 "goal_util.m"
  MR_Word * hlds__goal_util__Goal_32)
#line 373 "goal_util.m"
{
#line 1695 "goal_util.m"
  {
#line 1695 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1695 "goal_util.m"
    MR_Word hlds__goal_util__TypeCtorInfo_56_56 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 1695 "goal_util.m"
    MR_Word hlds__goal_util__TypeInfo_57_57;
#line 1695 "goal_util.m"
    MR_Integer hlds__goal_util__Arity_33;
#line 1695 "goal_util.m"
    MR_Word hlds__goal_util__PredId_34;
#line 1695 "goal_util.m"
    MR_Integer hlds__goal_util__ProcId_35;
#line 1695 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_36;
#line 1695 "goal_util.m"
    MR_Word hlds__goal_util__ArgVars_37;
#line 1695 "goal_util.m"
    MR_Word hlds__goal_util__ExtraArgVars_38;
#line 1695 "goal_util.m"
    MR_Word hlds__goal_util__Vars_39;
#line 1695 "goal_util.m"
    MR_Word hlds__goal_util__NonLocals_40;
#line 1695 "goal_util.m"
    MR_Word hlds__goal_util__NumSolns_42;
#line 1695 "goal_util.m"
    MR_Word hlds__goal_util__InstMapDelta_43;
#line 1695 "goal_util.m"
    MR_Word hlds__goal_util__PredInfo_44;
#line 1695 "goal_util.m"
    MR_Word hlds__goal_util__PredPurity_45;
#line 1695 "goal_util.m"
    MR_Word hlds__goal_util__GoalInfo0_46;
#line 1695 "goal_util.m"
    MR_Word hlds__goal_util__GoalInfo_47;
#line 1695 "goal_util.m"
    MR_Word hlds__goal_util__V_48_48;
#line 1695 "goal_util.m"
    MR_Word hlds__goal_util__V_52_52;
#line 1706 "goal_util.m"
    MR_Word hlds__goal_util___CanFail_41;
#line 1723 "goal_util.m"
    MR_Box hlds__goal_util__conv3_GoalInfo_47;

#line 1696 "goal_util.m"
    {
#line 1696 "goal_util.m"
      mercury__list__length_2_p_0(hlds__goal_util__TypeCtorInfo_56_56, hlds__goal_util__Args_24, &hlds__goal_util__Arity_33);
    }
#line 1697 "goal_util.m"
    {
#line 1697 "goal_util.m"
      hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(hlds__goal_util__ModuleInfo_30, hlds__goal_util__ModuleName_17, hlds__goal_util__ProcName_18, hlds__goal_util__PredOrFunc_19, hlds__goal_util__Arity_33, hlds__goal_util__ModeNo_20, &hlds__goal_util__PredId_34, &hlds__goal_util__ProcId_35);
    }
#line 1700 "goal_util.m"
    {
#line 1700 "goal_util.m"
      hlds__goal_util__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1700 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_48_48, 0) = ((MR_Box) (hlds__goal_util__Code_27));
#line 1700 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1700 "goal_util.m"
    }
#line 1700 "goal_util.m"
    {
#line 1700 "goal_util.m"
      hlds__goal_util__GoalExpr_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1700 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1700 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 1) = ((MR_Box) (hlds__goal_util__Attributes_23));
#line 1700 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 2) = ((MR_Box) (hlds__goal_util__PredId_34));
#line 1700 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 3) = ((MR_Box) (hlds__goal_util__ProcId_35));
#line 1700 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 4) = ((MR_Box) (hlds__goal_util__Args_24));
#line 1700 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 5) = ((MR_Box) (hlds__goal_util__ExtraArgs_25));
#line 1700 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 6) = ((MR_Box) (hlds__goal_util__MaybeTraceRuntimeCond_26));
#line 1700 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 7) = ((MR_Box) (hlds__goal_util__V_48_48));
#line 1700 "goal_util.m"
    }
#line 13721 "hlds.goal_util.c"
    hlds__goal_util__TypeInfo_57_57 = (MR_Word) &hlds__goal_util_scalar_common_1[0];
#line 1702 "goal_util.m"
    {
#line 1702 "goal_util.m"
      hlds__goal_util__ArgVars_37 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_56_56, hlds__goal_util__TypeInfo_57_57, (MR_Word) &hlds__goal_util_scalar_common_4[4], hlds__goal_util__Args_24);
    }
#line 1703 "goal_util.m"
    {
#line 1703 "goal_util.m"
      hlds__goal_util__ExtraArgVars_38 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_56_56, hlds__goal_util__TypeInfo_57_57, (MR_Word) &hlds__goal_util_scalar_common_4[5], hlds__goal_util__ExtraArgs_25);
    }
#line 1704 "goal_util.m"
    {
#line 1704 "goal_util.m"
      hlds__goal_util__Vars_39 = mercury__list__f_43_43_2_f_0(hlds__goal_util__TypeInfo_57_57, hlds__goal_util__ArgVars_37, hlds__goal_util__ExtraArgVars_38);
    }
#line 1705 "goal_util.m"
    {
#line 1705 "goal_util.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Vars_39, &hlds__goal_util__NonLocals_40);
    }
#line 1706 "goal_util.m"
    {
#line 1706 "goal_util.m"
      parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_util__Detism_21, &hlds__goal_util___CanFail_41, &hlds__goal_util__NumSolns_42);
    }
#line 1710 "goal_util.m"
    if ((hlds__goal_util__NumSolns_42 == (MR_Integer) 0))
#line 1709 "goal_util.m"
      {
#line 1709 "goal_util.m"
        hlds__instmap__instmap_delta_init_unreachable_1_p_0(&hlds__goal_util__InstMapDelta_43);
      }
#line 1710 "goal_util.m"
    else
#line 1715 "goal_util.m"
      hlds__goal_util__InstMapDelta_43 = hlds__goal_util__InstMapDelta0_29;
#line 1717 "goal_util.m"
    {
#line 1717 "goal_util.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__goal_util__ModuleInfo_30, hlds__goal_util__PredId_34, &hlds__goal_util__PredInfo_44);
    }
#line 1718 "goal_util.m"
    {
#line 1718 "goal_util.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(hlds__goal_util__PredInfo_44, &hlds__goal_util__PredPurity_45);
    }
#line 1719 "goal_util.m"
    {
#line 1719 "goal_util.m"
      hlds__goal_util__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1719 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_52_52, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[4]));
#line 1719 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_52_52, 1) = ((MR_Box) (hlds__goal_util__generate_foreign_proc_16_p_0_3));
#line 1719 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1719 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_52_52, 3) = ((MR_Box) (hlds__goal_util__Purity_22));
#line 1719 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_52_52, 4) = ((MR_Box) (hlds__goal_util__PredPurity_45));
#line 1719 "goal_util.m"
    }
#line 1719 "goal_util.m"
    {
#line 1719 "goal_util.m"
      mercury__require__expect_3_p_0(hlds__goal_util__V_52_52, (MR_String) "hlds.goal_util", (MR_String) "generate_simple_call: purity disagreement");
    }
#line 1721 "goal_util.m"
    {
#line 1721 "goal_util.m"
      hlds__hlds_goal__goal_info_init_6_p_0(hlds__goal_util__NonLocals_40, hlds__goal_util__InstMapDelta_43, hlds__goal_util__Detism_21, hlds__goal_util__Purity_22, hlds__goal_util__Context_31, &hlds__goal_util__GoalInfo0_46);
    }
#line 1723 "goal_util.m"
    {
#line 1723 "goal_util.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_4[6], hlds__goal_util__Features_28, ((MR_Box) (hlds__goal_util__GoalInfo0_46)), &hlds__goal_util__conv3_GoalInfo_47);
    }
#line 1723 "goal_util.m"
    hlds__goal_util__GoalInfo_47 = ((MR_Word) hlds__goal_util__conv3_GoalInfo_47);
#line 1724 "goal_util.m"
    {
#line 1724 "goal_util.m"
      MR_Word base;
#line 1724 "goal_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1724 "goal_util.m"
      *hlds__goal_util__Goal_32 = base;
#line 1724 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_36));
#line 1724 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_47));
#line 1724 "goal_util.m"
    }
#line 1695 "goal_util.m"
  }
#line 373 "goal_util.m"
}

#line 1690 "goal_util.m"
static void MR_CALL 
hlds__goal_util__generate_simple_call_12_p_0_2(
#line 1690 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1690 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1690 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 1690 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 1690 "goal_util.m"
{
#line 1690 "goal_util.m"
  {
#line 1690 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 1690 "goal_util.m"
    MR_Word hlds__goal_util__conv0_HeadVar__3_3;

#line 1690 "goal_util.m"
    {
#line 1690 "goal_util.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_HeadVar__3_3);
    }
#line 1690 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__3_3));
#line 1690 "goal_util.m"
  }
#line 1690 "goal_util.m"
}

#line 1686 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__generate_simple_call_12_p_0_1(
#line 1686 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg)
#line 1686 "goal_util.m"
{
#line 1686 "goal_util.m"
  {
#line 1686 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1686 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;

#line 1686 "goal_util.m"
    {
#line 1686 "goal_util.m"
      return hlds__goal_util__succeeded = hlds__goal_util__IntroducedFrom__pred__generate_simple_call__1686__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 4))));
    }
#line 1686 "goal_util.m"
    return hlds__goal_util__succeeded;
#line 1686 "goal_util.m"
  }
#line 1686 "goal_util.m"
}

#line 356 "goal_util.m"
void MR_CALL 
hlds__goal_util__generate_simple_call_12_p_0(
#line 356 "goal_util.m"
  MR_Word hlds__goal_util__ModuleName_13,
#line 356 "goal_util.m"
  MR_String hlds__goal_util__ProcName_14,
#line 356 "goal_util.m"
  MR_Word hlds__goal_util__PredOrFunc_15,
#line 356 "goal_util.m"
  MR_Word hlds__goal_util__ModeNo_16,
#line 356 "goal_util.m"
  MR_Word hlds__goal_util__Detism_17,
#line 356 "goal_util.m"
  MR_Word hlds__goal_util__Purity_18,
#line 356 "goal_util.m"
  MR_Word hlds__goal_util__Args_19,
#line 356 "goal_util.m"
  MR_Word hlds__goal_util__Features_20,
#line 356 "goal_util.m"
  MR_Word hlds__goal_util__InstMapDelta0_21,
#line 356 "goal_util.m"
  MR_Word hlds__goal_util__ModuleInfo_22,
#line 356 "goal_util.m"
  MR_Word hlds__goal_util__Context_23,
#line 356 "goal_util.m"
  MR_Word * hlds__goal_util__Goal_24)
#line 356 "goal_util.m"
{
#line 1659 "goal_util.m"
  {
#line 1659 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1659 "goal_util.m"
    MR_Integer hlds__goal_util__Arity_25;
#line 1659 "goal_util.m"
    MR_Word hlds__goal_util__PredId_26;
#line 1659 "goal_util.m"
    MR_Integer hlds__goal_util__ProcId_27;
#line 1659 "goal_util.m"
    MR_Word hlds__goal_util__InvalidPredId_28;
#line 1659 "goal_util.m"
    MR_Word hlds__goal_util__BuiltinState_29;
#line 1659 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_30;
#line 1659 "goal_util.m"
    MR_Word hlds__goal_util__NonLocals_31;
#line 1659 "goal_util.m"
    MR_Word hlds__goal_util__NumSolns_33;
#line 1659 "goal_util.m"
    MR_Word hlds__goal_util__InstMapDelta_34;
#line 1659 "goal_util.m"
    MR_Word hlds__goal_util__PredInfo_35;
#line 1659 "goal_util.m"
    MR_Word hlds__goal_util__PredPurity_36;
#line 1659 "goal_util.m"
    MR_Word hlds__goal_util__GoalInfo0_37;
#line 1659 "goal_util.m"
    MR_Word hlds__goal_util__GoalInfo_38;
#line 1659 "goal_util.m"
    MR_Word hlds__goal_util__V_40_40;
#line 1659 "goal_util.m"
    MR_Word hlds__goal_util__V_41_41;
#line 1673 "goal_util.m"
    MR_Word hlds__goal_util___CanFail_32;
#line 1690 "goal_util.m"
    MR_Box hlds__goal_util__conv1_GoalInfo_38;

#line 1660 "goal_util.m"
    {
#line 1660 "goal_util.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__goal_util_scalar_common_1[0], hlds__goal_util__Args_19, &hlds__goal_util__Arity_25);
    }
#line 1661 "goal_util.m"
    {
#line 1661 "goal_util.m"
      hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(hlds__goal_util__ModuleInfo_22, hlds__goal_util__ModuleName_13, hlds__goal_util__ProcName_14, hlds__goal_util__PredOrFunc_15, hlds__goal_util__Arity_25, hlds__goal_util__ModeNo_16, &hlds__goal_util__PredId_26, &hlds__goal_util__ProcId_27);
    }
#line 1667 "goal_util.m"
    {
#line 1667 "goal_util.m"
      hlds__goal_util__InvalidPredId_28 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
#line 1668 "goal_util.m"
    {
#line 1668 "goal_util.m"
      hlds__goal_util__BuiltinState_29 = hlds__hlds_pred__builtin_state_4_f_0(hlds__goal_util__ModuleInfo_22, hlds__goal_util__InvalidPredId_28, hlds__goal_util__PredId_26, hlds__goal_util__ProcId_27);
    }
#line 1670 "goal_util.m"
    {
#line 1670 "goal_util.m"
      hlds__goal_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1670 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_40_40, 0) = ((MR_Box) (hlds__goal_util__ModuleName_13));
#line 1670 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_40_40, 1) = ((MR_Box) (hlds__goal_util__ProcName_14));
#line 1670 "goal_util.m"
    }
#line 1670 "goal_util.m"
    {
#line 1670 "goal_util.m"
      hlds__goal_util__GoalExpr_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1670 "goal_util.m"
      MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_30, 0) = ((MR_Box) (hlds__goal_util__PredId_26));
#line 1670 "goal_util.m"
      MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_30, 1) = ((MR_Box) (hlds__goal_util__ProcId_27));
#line 1670 "goal_util.m"
      MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_30, 2) = ((MR_Box) (hlds__goal_util__Args_19));
#line 1670 "goal_util.m"
      MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_30, 3) = ((MR_Box) (hlds__goal_util__BuiltinState_29));
#line 1670 "goal_util.m"
      MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_30, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1670 "goal_util.m"
      MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_30, 5) = ((MR_Box) (hlds__goal_util__V_40_40));
#line 1670 "goal_util.m"
    }
#line 1672 "goal_util.m"
    {
#line 1672 "goal_util.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Args_19, &hlds__goal_util__NonLocals_31);
    }
#line 1673 "goal_util.m"
    {
#line 1673 "goal_util.m"
      parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_util__Detism_17, &hlds__goal_util___CanFail_32, &hlds__goal_util__NumSolns_33);
    }
#line 1677 "goal_util.m"
    if ((hlds__goal_util__NumSolns_33 == (MR_Integer) 0))
#line 1676 "goal_util.m"
      {
#line 1676 "goal_util.m"
        hlds__instmap__instmap_delta_init_unreachable_1_p_0(&hlds__goal_util__InstMapDelta_34);
      }
#line 1677 "goal_util.m"
    else
#line 1682 "goal_util.m"
      hlds__goal_util__InstMapDelta_34 = hlds__goal_util__InstMapDelta0_21;
#line 1684 "goal_util.m"
    {
#line 1684 "goal_util.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__goal_util__ModuleInfo_22, hlds__goal_util__PredId_26, &hlds__goal_util__PredInfo_35);
    }
#line 1685 "goal_util.m"
    {
#line 1685 "goal_util.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(hlds__goal_util__PredInfo_35, &hlds__goal_util__PredPurity_36);
    }
#line 1686 "goal_util.m"
    {
#line 1686 "goal_util.m"
      hlds__goal_util__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1686 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_41_41, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[4]));
#line 1686 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_41_41, 1) = ((MR_Box) (hlds__goal_util__generate_simple_call_12_p_0_1));
#line 1686 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1686 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_41_41, 3) = ((MR_Box) (hlds__goal_util__Purity_18));
#line 1686 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_41_41, 4) = ((MR_Box) (hlds__goal_util__PredPurity_36));
#line 1686 "goal_util.m"
    }
#line 1686 "goal_util.m"
    {
#line 1686 "goal_util.m"
      mercury__require__expect_3_p_0(hlds__goal_util__V_41_41, (MR_String) "hlds.goal_util", (MR_String) "generate_simple_call: purity disagreement");
    }
#line 1688 "goal_util.m"
    {
#line 1688 "goal_util.m"
      hlds__hlds_goal__goal_info_init_6_p_0(hlds__goal_util__NonLocals_31, hlds__goal_util__InstMapDelta_34, hlds__goal_util__Detism_17, hlds__goal_util__Purity_18, hlds__goal_util__Context_23, &hlds__goal_util__GoalInfo0_37);
    }
#line 1690 "goal_util.m"
    {
#line 1690 "goal_util.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_4[3], hlds__goal_util__Features_20, ((MR_Box) (hlds__goal_util__GoalInfo0_37)), &hlds__goal_util__conv1_GoalInfo_38);
    }
#line 1690 "goal_util.m"
    hlds__goal_util__GoalInfo_38 = ((MR_Word) hlds__goal_util__conv1_GoalInfo_38);
#line 1691 "goal_util.m"
    {
#line 1691 "goal_util.m"
      MR_Word base;
#line 1691 "goal_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1691 "goal_util.m"
      *hlds__goal_util__Goal_24 = base;
#line 1691 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_30));
#line 1691 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_38));
#line 1691 "goal_util.m"
    }
#line 1659 "goal_util.m"
  }
#line 356 "goal_util.m"
}

#line 339 "goal_util.m"
void MR_CALL 
hlds__goal_util__reordering_maintains_termination_6_p_0(
#line 339 "goal_util.m"
  MR_Word hlds__goal_util__FullyStrict_7,
#line 339 "goal_util.m"
  MR_Word hlds__goal_util__EarlierGoal_8,
#line 339 "goal_util.m"
  MR_Word hlds__goal_util__LaterGoal_9,
#line 339 "goal_util.m"
  MR_Word * hlds__goal_util__MaintainsTermination_10,
#line 339 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_24,
#line 339 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_ModuleInfo_25)
#line 339 "goal_util.m"
{
#line 1598 "goal_util.m"
  {
#line 1598 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1598 "goal_util.m"
    MR_Word hlds__goal_util__EarlierGoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_8, (MR_Integer) 1)));
#line 1598 "goal_util.m"
    MR_Word hlds__goal_util__LaterGoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_9, (MR_Integer) 1)));
#line 1598 "goal_util.m"
    MR_Word hlds__goal_util__EarlierDetism_16;
#line 1598 "goal_util.m"
    MR_Word hlds__goal_util__EarlierCanFail_17;
#line 1598 "goal_util.m"
    MR_Word hlds__goal_util__LaterDetism_19;
#line 1598 "goal_util.m"
    MR_Word hlds__goal_util__LaterCanFail_20;
#line 1598 "goal_util.m"
    MR_Word hlds__goal_util__EarlierCanLoopOrThrow_22;
#line 1598 "goal_util.m"
    MR_Word hlds__goal_util__STATE_VARIABLE_ModuleInfo_26_26;
#line 1599 "goal_util.m"
    MR_Word hlds__goal_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_8, (MR_Integer) 0)));
#line 1600 "goal_util.m"
    MR_Word hlds__goal_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_9, (MR_Integer) 0)));
#line 1603 "goal_util.m"
    MR_Word hlds__goal_util__V_18_18;
#line 1605 "goal_util.m"
    MR_Word hlds__goal_util__V_21_21;

#line 1602 "goal_util.m"
    {
#line 1602 "goal_util.m"
      hlds__goal_util__EarlierDetism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_util__EarlierGoalInfo_13);
    }
#line 1603 "goal_util.m"
    {
#line 1603 "goal_util.m"
      parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_util__EarlierDetism_16, &hlds__goal_util__EarlierCanFail_17, &hlds__goal_util__V_18_18);
    }
#line 1604 "goal_util.m"
    {
#line 1604 "goal_util.m"
      hlds__goal_util__LaterDetism_19 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_util__LaterGoalInfo_15);
    }
#line 1605 "goal_util.m"
    {
#line 1605 "goal_util.m"
      parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_util__LaterDetism_19, &hlds__goal_util__LaterCanFail_20, &hlds__goal_util__V_21_21);
    }
#line 1609 "goal_util.m"
    {
#line 1609 "goal_util.m"
      hlds__goal_form__goal_can_loop_or_throw_4_p_0(hlds__goal_util__EarlierGoal_8, &hlds__goal_util__EarlierCanLoopOrThrow_22, hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_24, &hlds__goal_util__STATE_VARIABLE_ModuleInfo_26_26);
    }
#line 1611 "goal_util.m"
    hlds__goal_util__succeeded = (hlds__goal_util__FullyStrict_7 == (MR_Integer) 1);
#line 1611 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 1611 "goal_util.m"
      {
#line 1612 "goal_util.m"
        hlds__goal_util__succeeded = (hlds__goal_util__EarlierCanLoopOrThrow_22 == (MR_Integer) 0);
#line 1611 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1613 "goal_util.m"
          hlds__goal_util__succeeded = (hlds__goal_util__LaterCanFail_20 == (MR_Integer) 0);
#line 1611 "goal_util.m"
      }
#line 1616 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 1615 "goal_util.m"
      {
#line 1615 "goal_util.m"
        *hlds__goal_util__MaintainsTermination_10 = (MR_Integer) 0;
#line 1615 "goal_util.m"
        *hlds__goal_util__STATE_VARIABLE_ModuleInfo_25 = hlds__goal_util__STATE_VARIABLE_ModuleInfo_26_26;
#line 1615 "goal_util.m"
      }
#line 1616 "goal_util.m"
    else
#line 1621 "goal_util.m"
      {
#line 1621 "goal_util.m"
        MR_Word hlds__goal_util__LaterCanLoopOrThrow_23;

#line 1620 "goal_util.m"
        {
#line 1620 "goal_util.m"
          hlds__goal_form__goal_can_loop_or_throw_4_p_0(hlds__goal_util__LaterGoal_9, &hlds__goal_util__LaterCanLoopOrThrow_23, hlds__goal_util__STATE_VARIABLE_ModuleInfo_26_26, hlds__goal_util__STATE_VARIABLE_ModuleInfo_25);
        }
#line 1623 "goal_util.m"
        hlds__goal_util__succeeded = (hlds__goal_util__EarlierCanFail_17 == (MR_Integer) 0);
#line 1623 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1624 "goal_util.m"
          hlds__goal_util__succeeded = (hlds__goal_util__LaterCanLoopOrThrow_23 == (MR_Integer) 0);
#line 1627 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1626 "goal_util.m"
          *hlds__goal_util__MaintainsTermination_10 = (MR_Integer) 0;
#line 1627 "goal_util.m"
        else
#line 1628 "goal_util.m"
          *hlds__goal_util__MaintainsTermination_10 = (MR_Integer) 1;
#line 1621 "goal_util.m"
      }
#line 1598 "goal_util.m"
  }
#line 339 "goal_util.m"
}

#line 325 "goal_util.m"
MR_bool MR_CALL 
hlds__goal_util__reordering_maintains_termination_old_4_p_0(
#line 325 "goal_util.m"
  MR_Word hlds__goal_util__ModuleInfo_5,
#line 325 "goal_util.m"
  MR_Word hlds__goal_util__FullyStrict_6,
#line 325 "goal_util.m"
  MR_Word hlds__goal_util__EarlierGoal_7,
#line 325 "goal_util.m"
  MR_Word hlds__goal_util__LaterGoal_8)
#line 325 "goal_util.m"
{
#line 1569 "goal_util.m"
  {
#line 1569 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1569 "goal_util.m"
    MR_Word hlds__goal_util__EarlierGoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_7, (MR_Integer) 1)));
#line 1569 "goal_util.m"
    MR_Word hlds__goal_util__LaterGoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_8, (MR_Integer) 1)));
#line 1569 "goal_util.m"
    MR_Word hlds__goal_util__EarlierDetism_13;
#line 1569 "goal_util.m"
    MR_Word hlds__goal_util__EarlierCanFail_14;
#line 1569 "goal_util.m"
    MR_Word hlds__goal_util__LaterDetism_16;
#line 1569 "goal_util.m"
    MR_Word hlds__goal_util__LaterCanFail_17;
#line 1570 "goal_util.m"
    MR_Word hlds__goal_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_7, (MR_Integer) 0)));
#line 1571 "goal_util.m"
    MR_Word hlds__goal_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_8, (MR_Integer) 0)));
#line 1574 "goal_util.m"
    MR_Word hlds__goal_util__V_15_15;
#line 1576 "goal_util.m"
    MR_Word hlds__goal_util__V_18_18;

#line 1573 "goal_util.m"
    {
#line 1573 "goal_util.m"
      hlds__goal_util__EarlierDetism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_util__EarlierGoalInfo_10);
    }
#line 1574 "goal_util.m"
    {
#line 1574 "goal_util.m"
      parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_util__EarlierDetism_13, &hlds__goal_util__EarlierCanFail_14, &hlds__goal_util__V_15_15);
    }
#line 1575 "goal_util.m"
    {
#line 1575 "goal_util.m"
      hlds__goal_util__LaterDetism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_util__LaterGoalInfo_12);
    }
#line 1576 "goal_util.m"
    {
#line 1576 "goal_util.m"
      parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_util__LaterDetism_16, &hlds__goal_util__LaterCanFail_17, &hlds__goal_util__V_18_18);
    }
#line 1581 "goal_util.m"
    hlds__goal_util__succeeded = (hlds__goal_util__FullyStrict_6 == (MR_Integer) 1);
#line 1581 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 1581 "goal_util.m"
      {
#line 1582 "goal_util.m"
        {
#line 1582 "goal_util.m"
          hlds__goal_util__succeeded = hlds__goal_form__goal_cannot_loop_or_throw_1_p_0(hlds__goal_util__EarlierGoal_7);
        }
#line 1582 "goal_util.m"
        hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
#line 1581 "goal_util.m"
      }
#line 1585 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 1584 "goal_util.m"
      hlds__goal_util__succeeded = (hlds__goal_util__LaterCanFail_17 == (MR_Integer) 1);
#line 1585 "goal_util.m"
    else
#line 1586 "goal_util.m"
      hlds__goal_util__succeeded = MR_TRUE;
#line 1569 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 1593 "goal_util.m"
      {
#line 1593 "goal_util.m"
        if ((hlds__goal_util__EarlierCanFail_14 == (MR_Integer) 0))
#line 1592 "goal_util.m"
          {
#line 1592 "goal_util.m"
            return hlds__goal_util__succeeded = hlds__goal_form__goal_cannot_loop_or_throw_2_p_0(hlds__goal_util__ModuleInfo_5, hlds__goal_util__LaterGoal_8);
          }
#line 1593 "goal_util.m"
        else
#line 1594 "goal_util.m"
          hlds__goal_util__succeeded = MR_TRUE;
#line 1593 "goal_util.m"
      }
#line 1569 "goal_util.m"
    return hlds__goal_util__succeeded;
#line 1569 "goal_util.m"
  }
#line 325 "goal_util.m"
}

#line 310 "goal_util.m"
void MR_CALL 
hlds__goal_util__can_reorder_goals_9_p_0(
#line 310 "goal_util.m"
  MR_Word hlds__goal_util__VarTypes_10,
#line 310 "goal_util.m"
  MR_Word hlds__goal_util__FullyStrict_11,
#line 310 "goal_util.m"
  MR_Word hlds__goal_util__InstmapBeforeEarlierGoal_12,
#line 310 "goal_util.m"
  MR_Word hlds__goal_util__EarlierGoal_13,
#line 310 "goal_util.m"
  MR_Word hlds__goal_util__InstmapBeforeLaterGoal_14,
#line 310 "goal_util.m"
  MR_Word hlds__goal_util__LaterGoal_15,
#line 310 "goal_util.m"
  MR_Word * hlds__goal_util__CanReorder_16,
#line 310 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_27,
#line 310 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_ModuleInfo_28)
#line 310 "goal_util.m"
{
#line 1517 "goal_util.m"
  {
#line 1517 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1517 "goal_util.m"
    MR_Word hlds__goal_util__EarlierGoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_13, (MR_Integer) 1)));
#line 1517 "goal_util.m"
    MR_Word hlds__goal_util__LaterGoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_15, (MR_Integer) 1)));
#line 1517 "goal_util.m"
    MR_Word hlds__goal_util__EarlierPurity_22;
#line 1517 "goal_util.m"
    MR_Word hlds__goal_util__EarlierTrace_23;
#line 1517 "goal_util.m"
    MR_Word hlds__goal_util__LaterPurity_24;
#line 1517 "goal_util.m"
    MR_Word hlds__goal_util__LaterTrace_25;
#line 1521 "goal_util.m"
    MR_Word hlds__goal_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_13, (MR_Integer) 0)));
#line 1522 "goal_util.m"
    MR_Word hlds__goal_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_15, (MR_Integer) 0)));

#line 1525 "goal_util.m"
    {
#line 1525 "goal_util.m"
      hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(hlds__goal_util__EarlierGoalInfo_19, &hlds__goal_util__EarlierPurity_22, &hlds__goal_util__EarlierTrace_23);
    }
#line 1526 "goal_util.m"
    {
#line 1526 "goal_util.m"
      hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(hlds__goal_util__LaterGoalInfo_21, &hlds__goal_util__LaterPurity_24, &hlds__goal_util__LaterTrace_25);
    }
#line 1528 "goal_util.m"
    hlds__goal_util__succeeded = (hlds__goal_util__EarlierPurity_22 == (MR_Integer) 2);
#line 1529 "goal_util.m"
    if (!(hlds__goal_util__succeeded))
#line 1529 "goal_util.m"
      {
#line 1529 "goal_util.m"
        hlds__goal_util__succeeded = (hlds__goal_util__LaterPurity_24 == (MR_Integer) 2);
#line 1529 "goal_util.m"
        if (!(hlds__goal_util__succeeded))
#line 1529 "goal_util.m"
          {
#line 1530 "goal_util.m"
            hlds__goal_util__succeeded = (hlds__goal_util__EarlierTrace_23 == (MR_Integer) 0);
#line 1529 "goal_util.m"
            if (!(hlds__goal_util__succeeded))
#line 1531 "goal_util.m"
              hlds__goal_util__succeeded = (hlds__goal_util__LaterTrace_25 == (MR_Integer) 0);
#line 1529 "goal_util.m"
          }
#line 1529 "goal_util.m"
      }
#line 1535 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 1534 "goal_util.m"
      {
#line 1534 "goal_util.m"
        *hlds__goal_util__CanReorder_16 = (MR_Integer) 0;
#line 1534 "goal_util.m"
        *hlds__goal_util__STATE_VARIABLE_ModuleInfo_28 = hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_27;
#line 1534 "goal_util.m"
      }
#line 1535 "goal_util.m"
    else
#line 1537 "goal_util.m"
      {
#line 1537 "goal_util.m"
        MR_Word hlds__goal_util__MaintainsTermination_26;

#line 1536 "goal_util.m"
        {
#line 1536 "goal_util.m"
          hlds__goal_util__reordering_maintains_termination_6_p_0(hlds__goal_util__FullyStrict_11, hlds__goal_util__EarlierGoal_13, hlds__goal_util__LaterGoal_15, &hlds__goal_util__MaintainsTermination_26, hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_27, hlds__goal_util__STATE_VARIABLE_ModuleInfo_28);
        }
#line 1541 "goal_util.m"
        if ((hlds__goal_util__MaintainsTermination_26 == (MR_Integer) 0))
#line 1540 "goal_util.m"
          *hlds__goal_util__CanReorder_16 = (MR_Integer) 0;
#line 1541 "goal_util.m"
        else
#line 1551 "goal_util.m"
          {
#line 1642 "goal_util.m"
            MR_Word hlds__goal_util__TypeCtorInfo_20_44;
#line 1642 "goal_util.m"
            MR_Word hlds__goal_util__LaterGoalInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_15, (MR_Integer) 1)));
#line 1642 "goal_util.m"
            MR_Word hlds__goal_util__EarlierGoalInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_13, (MR_Integer) 1)));
#line 1642 "goal_util.m"
            MR_Word hlds__goal_util__EarlierInstMapDelta_39;
#line 1642 "goal_util.m"
            MR_Word hlds__goal_util__InstMapAfterEarlierGoal_40;
#line 1642 "goal_util.m"
            MR_Word hlds__goal_util__EarlierChangedVars_41;
#line 1642 "goal_util.m"
            MR_Word hlds__goal_util__LaterGoalNonLocals_42;
#line 1642 "goal_util.m"
            MR_Word hlds__goal_util__Intersection_43;
#line 1643 "goal_util.m"
            MR_Word hlds__goal_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_15, (MR_Integer) 0)));
#line 1644 "goal_util.m"
            MR_Word hlds__goal_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_13, (MR_Integer) 0)));

#line 1645 "goal_util.m"
            {
#line 1645 "goal_util.m"
              hlds__goal_util__EarlierInstMapDelta_39 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__EarlierGoalInfo_38);
            }
#line 1646 "goal_util.m"
            {
#line 1646 "goal_util.m"
              hlds__instmap__apply_instmap_delta_3_p_0(hlds__goal_util__InstmapBeforeEarlierGoal_12, hlds__goal_util__EarlierInstMapDelta_39, &hlds__goal_util__InstMapAfterEarlierGoal_40);
            }
#line 1649 "goal_util.m"
            {
#line 1649 "goal_util.m"
              hlds__instmap__instmap_changed_vars_5_p_0(hlds__goal_util__InstmapBeforeEarlierGoal_12, hlds__goal_util__InstMapAfterEarlierGoal_40, hlds__goal_util__VarTypes_10, *hlds__goal_util__STATE_VARIABLE_ModuleInfo_28, &hlds__goal_util__EarlierChangedVars_41);
            }
#line 1652 "goal_util.m"
            {
#line 1652 "goal_util.m"
              hlds__goal_util__LaterGoalNonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__goal_util__LaterGoalInfo_36);
            }
#line 14458 "hlds.goal_util.c"
            hlds__goal_util__TypeCtorInfo_20_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1653 "goal_util.m"
            {
#line 1653 "goal_util.m"
              parse_tree__set_of_var__intersect_3_p_0(hlds__goal_util__TypeCtorInfo_20_44, hlds__goal_util__EarlierChangedVars_41, hlds__goal_util__LaterGoalNonLocals_42, &hlds__goal_util__Intersection_43);
            }
#line 1654 "goal_util.m"
            {
#line 1654 "goal_util.m"
              hlds__goal_util__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_util__TypeCtorInfo_20_44, hlds__goal_util__Intersection_43);
            }
#line 1654 "goal_util.m"
            hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
#line 1551 "goal_util.m"
            if (hlds__goal_util__succeeded)
#line 1550 "goal_util.m"
              *hlds__goal_util__CanReorder_16 = (MR_Integer) 0;
#line 1551 "goal_util.m"
            else
#line 1562 "goal_util.m"
              {
#line 1642 "goal_util.m"
                MR_Word hlds__goal_util__TypeCtorInfo_20_59;
#line 1642 "goal_util.m"
                MR_Word hlds__goal_util__LaterGoalInfo_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_13, (MR_Integer) 1)));
#line 1642 "goal_util.m"
                MR_Word hlds__goal_util__EarlierGoalInfo_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_15, (MR_Integer) 1)));
#line 1642 "goal_util.m"
                MR_Word hlds__goal_util__EarlierInstMapDelta_54;
#line 1642 "goal_util.m"
                MR_Word hlds__goal_util__InstMapAfterEarlierGoal_55;
#line 1642 "goal_util.m"
                MR_Word hlds__goal_util__EarlierChangedVars_56;
#line 1642 "goal_util.m"
                MR_Word hlds__goal_util__LaterGoalNonLocals_57;
#line 1642 "goal_util.m"
                MR_Word hlds__goal_util__Intersection_58;
#line 1643 "goal_util.m"
                MR_Word hlds__goal_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_13, (MR_Integer) 0)));
#line 1644 "goal_util.m"
                MR_Word hlds__goal_util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_15, (MR_Integer) 0)));

#line 1645 "goal_util.m"
                {
#line 1645 "goal_util.m"
                  hlds__goal_util__EarlierInstMapDelta_54 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__EarlierGoalInfo_53);
                }
#line 1646 "goal_util.m"
                {
#line 1646 "goal_util.m"
                  hlds__instmap__apply_instmap_delta_3_p_0(hlds__goal_util__InstmapBeforeLaterGoal_14, hlds__goal_util__EarlierInstMapDelta_54, &hlds__goal_util__InstMapAfterEarlierGoal_55);
                }
#line 1649 "goal_util.m"
                {
#line 1649 "goal_util.m"
                  hlds__instmap__instmap_changed_vars_5_p_0(hlds__goal_util__InstmapBeforeLaterGoal_14, hlds__goal_util__InstMapAfterEarlierGoal_55, hlds__goal_util__VarTypes_10, *hlds__goal_util__STATE_VARIABLE_ModuleInfo_28, &hlds__goal_util__EarlierChangedVars_56);
                }
#line 1652 "goal_util.m"
                {
#line 1652 "goal_util.m"
                  hlds__goal_util__LaterGoalNonLocals_57 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__goal_util__LaterGoalInfo_51);
                }
#line 14521 "hlds.goal_util.c"
                hlds__goal_util__TypeCtorInfo_20_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1653 "goal_util.m"
                {
#line 1653 "goal_util.m"
                  parse_tree__set_of_var__intersect_3_p_0(hlds__goal_util__TypeCtorInfo_20_59, hlds__goal_util__EarlierChangedVars_56, hlds__goal_util__LaterGoalNonLocals_57, &hlds__goal_util__Intersection_58);
                }
#line 1654 "goal_util.m"
                {
#line 1654 "goal_util.m"
                  hlds__goal_util__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_util__TypeCtorInfo_20_59, hlds__goal_util__Intersection_58);
                }
#line 1654 "goal_util.m"
                hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
#line 1562 "goal_util.m"
                if (hlds__goal_util__succeeded)
#line 1561 "goal_util.m"
                  *hlds__goal_util__CanReorder_16 = (MR_Integer) 0;
#line 1562 "goal_util.m"
                else
#line 1563 "goal_util.m"
                  *hlds__goal_util__CanReorder_16 = (MR_Integer) 1;
#line 1562 "goal_util.m"
              }
#line 1551 "goal_util.m"
          }
#line 1537 "goal_util.m"
      }
#line 1517 "goal_util.m"
  }
#line 310 "goal_util.m"
}

#line 293 "goal_util.m"
MR_bool MR_CALL 
hlds__goal_util__can_reorder_goals_old_7_p_0(
#line 293 "goal_util.m"
  MR_Word hlds__goal_util__ModuleInfo_8,
#line 293 "goal_util.m"
  MR_Word hlds__goal_util__VarTypes_9,
#line 293 "goal_util.m"
  MR_Word hlds__goal_util__FullyStrict_10,
#line 293 "goal_util.m"
  MR_Word hlds__goal_util__InstmapBeforeEarlierGoal_11,
#line 293 "goal_util.m"
  MR_Word hlds__goal_util__EarlierGoal_12,
#line 293 "goal_util.m"
  MR_Word hlds__goal_util__InstmapBeforeLaterGoal_13,
#line 293 "goal_util.m"
  MR_Word hlds__goal_util__LaterGoal_14)
#line 293 "goal_util.m"
{
#line 1485 "goal_util.m"
  {
#line 1485 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1485 "goal_util.m"
    MR_Word hlds__goal_util__EarlierGoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_12, (MR_Integer) 1)));
#line 1485 "goal_util.m"
    MR_Word hlds__goal_util__LaterGoalInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_14, (MR_Integer) 1)));
#line 1485 "goal_util.m"
    MR_Word hlds__goal_util__EarlierPurity_19;
#line 1485 "goal_util.m"
    MR_Word hlds__goal_util__EarlierTrace_20;
#line 1485 "goal_util.m"
    MR_Word hlds__goal_util__LaterPurity_21;
#line 1485 "goal_util.m"
    MR_Word hlds__goal_util__LaterTrace_22;
#line 1489 "goal_util.m"
    MR_Word hlds__goal_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_12, (MR_Integer) 0)));
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_14, (MR_Integer) 0)));
#line 1642 "goal_util.m"
    MR_Word hlds__goal_util__TypeCtorInfo_20_37;
#line 1642 "goal_util.m"
    MR_Word hlds__goal_util__LaterGoalInfo_29;
#line 1642 "goal_util.m"
    MR_Word hlds__goal_util__EarlierGoalInfo_31;
#line 1642 "goal_util.m"
    MR_Word hlds__goal_util__EarlierInstMapDelta_32;
#line 1642 "goal_util.m"
    MR_Word hlds__goal_util__InstMapAfterEarlierGoal_33;
#line 1642 "goal_util.m"
    MR_Word hlds__goal_util__EarlierChangedVars_34;
#line 1642 "goal_util.m"
    MR_Word hlds__goal_util__LaterGoalNonLocals_35;
#line 1642 "goal_util.m"
    MR_Word hlds__goal_util__Intersection_36;
#line 1643 "goal_util.m"
    MR_Word hlds__goal_util__V_28_28;
#line 1644 "goal_util.m"
    MR_Word hlds__goal_util__V_30_30;
#line 1642 "goal_util.m"
    MR_Word hlds__goal_util__TypeCtorInfo_20_52;
#line 1642 "goal_util.m"
    MR_Word hlds__goal_util__LaterGoalInfo_44;
#line 1642 "goal_util.m"
    MR_Word hlds__goal_util__EarlierGoalInfo_46;
#line 1642 "goal_util.m"
    MR_Word hlds__goal_util__EarlierInstMapDelta_47;
#line 1642 "goal_util.m"
    MR_Word hlds__goal_util__InstMapAfterEarlierGoal_48;
#line 1642 "goal_util.m"
    MR_Word hlds__goal_util__EarlierChangedVars_49;
#line 1642 "goal_util.m"
    MR_Word hlds__goal_util__LaterGoalNonLocals_50;
#line 1642 "goal_util.m"
    MR_Word hlds__goal_util__Intersection_51;
#line 1643 "goal_util.m"
    MR_Word hlds__goal_util__V_43_43;
#line 1644 "goal_util.m"
    MR_Word hlds__goal_util__V_45_45;

#line 1493 "goal_util.m"
    {
#line 1493 "goal_util.m"
      hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(hlds__goal_util__EarlierGoalInfo_16, &hlds__goal_util__EarlierPurity_19, &hlds__goal_util__EarlierTrace_20);
    }
#line 1494 "goal_util.m"
    {
#line 1494 "goal_util.m"
      hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(hlds__goal_util__LaterGoalInfo_18, &hlds__goal_util__LaterPurity_21, &hlds__goal_util__LaterTrace_22);
    }
#line 1496 "goal_util.m"
    hlds__goal_util__succeeded = (hlds__goal_util__LaterPurity_21 == (MR_Integer) 2);
#line 1496 "goal_util.m"
    hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
#line 1485 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 1485 "goal_util.m"
      {
#line 1498 "goal_util.m"
        hlds__goal_util__succeeded = (hlds__goal_util__LaterTrace_22 == (MR_Integer) 1);
#line 1485 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1485 "goal_util.m"
          {
#line 1495 "goal_util.m"
            hlds__goal_util__succeeded = (hlds__goal_util__EarlierPurity_19 == (MR_Integer) 2);
#line 1495 "goal_util.m"
            hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
#line 1485 "goal_util.m"
            if (hlds__goal_util__succeeded)
#line 1485 "goal_util.m"
              {
#line 1497 "goal_util.m"
                hlds__goal_util__succeeded = (hlds__goal_util__EarlierTrace_20 == (MR_Integer) 1);
#line 1485 "goal_util.m"
                if (hlds__goal_util__succeeded)
#line 1485 "goal_util.m"
                  {
#line 1500 "goal_util.m"
                    {
#line 1500 "goal_util.m"
                      hlds__goal_util__succeeded = hlds__goal_util__reordering_maintains_termination_old_4_p_0(hlds__goal_util__ModuleInfo_8, hlds__goal_util__FullyStrict_10, hlds__goal_util__EarlierGoal_12, hlds__goal_util__LaterGoal_14);
                    }
#line 1485 "goal_util.m"
                    if (hlds__goal_util__succeeded)
#line 1485 "goal_util.m"
                      {
#line 1643 "goal_util.m"
                        hlds__goal_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_14, (MR_Integer) 0)));
#line 1643 "goal_util.m"
                        hlds__goal_util__LaterGoalInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_14, (MR_Integer) 1)));
#line 1644 "goal_util.m"
                        hlds__goal_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_12, (MR_Integer) 0)));
#line 1644 "goal_util.m"
                        hlds__goal_util__EarlierGoalInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_12, (MR_Integer) 1)));
#line 1645 "goal_util.m"
                        {
#line 1645 "goal_util.m"
                          hlds__goal_util__EarlierInstMapDelta_32 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__EarlierGoalInfo_31);
                        }
#line 1646 "goal_util.m"
                        {
#line 1646 "goal_util.m"
                          hlds__instmap__apply_instmap_delta_3_p_0(hlds__goal_util__InstmapBeforeEarlierGoal_11, hlds__goal_util__EarlierInstMapDelta_32, &hlds__goal_util__InstMapAfterEarlierGoal_33);
                        }
#line 1649 "goal_util.m"
                        {
#line 1649 "goal_util.m"
                          hlds__instmap__instmap_changed_vars_5_p_0(hlds__goal_util__InstmapBeforeEarlierGoal_11, hlds__goal_util__InstMapAfterEarlierGoal_33, hlds__goal_util__VarTypes_9, hlds__goal_util__ModuleInfo_8, &hlds__goal_util__EarlierChangedVars_34);
                        }
#line 1652 "goal_util.m"
                        {
#line 1652 "goal_util.m"
                          hlds__goal_util__LaterGoalNonLocals_35 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__goal_util__LaterGoalInfo_29);
                        }
#line 14709 "hlds.goal_util.c"
                        hlds__goal_util__TypeCtorInfo_20_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1653 "goal_util.m"
                        {
#line 1653 "goal_util.m"
                          parse_tree__set_of_var__intersect_3_p_0(hlds__goal_util__TypeCtorInfo_20_37, hlds__goal_util__EarlierChangedVars_34, hlds__goal_util__LaterGoalNonLocals_35, &hlds__goal_util__Intersection_36);
                        }
#line 1654 "goal_util.m"
                        {
#line 1654 "goal_util.m"
                          hlds__goal_util__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_util__TypeCtorInfo_20_37, hlds__goal_util__Intersection_36);
                        }
#line 1654 "goal_util.m"
                        hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
#line 1505 "goal_util.m"
                        hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
#line 1485 "goal_util.m"
                        if (hlds__goal_util__succeeded)
#line 1485 "goal_util.m"
                          {
#line 1643 "goal_util.m"
                            hlds__goal_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_12, (MR_Integer) 0)));
#line 1643 "goal_util.m"
                            hlds__goal_util__LaterGoalInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_12, (MR_Integer) 1)));
#line 1644 "goal_util.m"
                            hlds__goal_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_14, (MR_Integer) 0)));
#line 1644 "goal_util.m"
                            hlds__goal_util__EarlierGoalInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_14, (MR_Integer) 1)));
#line 1645 "goal_util.m"
                            {
#line 1645 "goal_util.m"
                              hlds__goal_util__EarlierInstMapDelta_47 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__EarlierGoalInfo_46);
                            }
#line 1646 "goal_util.m"
                            {
#line 1646 "goal_util.m"
                              hlds__instmap__apply_instmap_delta_3_p_0(hlds__goal_util__InstmapBeforeLaterGoal_13, hlds__goal_util__EarlierInstMapDelta_47, &hlds__goal_util__InstMapAfterEarlierGoal_48);
                            }
#line 1649 "goal_util.m"
                            {
#line 1649 "goal_util.m"
                              hlds__instmap__instmap_changed_vars_5_p_0(hlds__goal_util__InstmapBeforeLaterGoal_13, hlds__goal_util__InstMapAfterEarlierGoal_48, hlds__goal_util__VarTypes_9, hlds__goal_util__ModuleInfo_8, &hlds__goal_util__EarlierChangedVars_49);
                            }
#line 1652 "goal_util.m"
                            {
#line 1652 "goal_util.m"
                              hlds__goal_util__LaterGoalNonLocals_50 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__goal_util__LaterGoalInfo_44);
                            }
#line 14757 "hlds.goal_util.c"
                            hlds__goal_util__TypeCtorInfo_20_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1653 "goal_util.m"
                            {
#line 1653 "goal_util.m"
                              parse_tree__set_of_var__intersect_3_p_0(hlds__goal_util__TypeCtorInfo_20_52, hlds__goal_util__EarlierChangedVars_49, hlds__goal_util__LaterGoalNonLocals_50, &hlds__goal_util__Intersection_51);
                            }
#line 1654 "goal_util.m"
                            {
#line 1654 "goal_util.m"
                              hlds__goal_util__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_util__TypeCtorInfo_20_52, hlds__goal_util__Intersection_51);
                            }
#line 1654 "goal_util.m"
                            hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
#line 1512 "goal_util.m"
                            hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
#line 1485 "goal_util.m"
                          }
#line 1485 "goal_util.m"
                      }
#line 1485 "goal_util.m"
                  }
#line 1485 "goal_util.m"
              }
#line 1485 "goal_util.m"
          }
#line 1485 "goal_util.m"
      }
#line 1485 "goal_util.m"
    return hlds__goal_util__succeeded;
#line 1485 "goal_util.m"
  }
#line 293 "goal_util.m"
}

#line 278 "goal_util.m"
void MR_CALL 
hlds__goal_util__create_conj_4_p_0(
#line 278 "goal_util.m"
  MR_Word hlds__goal_util__GoalA_5,
#line 278 "goal_util.m"
  MR_Word hlds__goal_util__GoalB_6,
#line 278 "goal_util.m"
  MR_Word hlds__goal_util__Type_7,
#line 278 "goal_util.m"
  MR_Word * hlds__goal_util__ConjGoal_8)
#line 278 "goal_util.m"
{
#line 1454 "goal_util.m"
  {
#line 1454 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1454 "goal_util.m"
    MR_Word hlds__goal_util__V_9_9;
#line 1454 "goal_util.m"
    MR_Word hlds__goal_util__V_10_10;

#line 1455 "goal_util.m"
    {
#line 1455 "goal_util.m"
      hlds__goal_util__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1455 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_10_10, 0) = ((MR_Box) (hlds__goal_util__GoalB_6));
#line 1455 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1455 "goal_util.m"
    }
#line 1455 "goal_util.m"
    {
#line 1455 "goal_util.m"
      hlds__goal_util__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1455 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_9_9, 0) = ((MR_Box) (hlds__goal_util__GoalA_5));
#line 1455 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_9_9, 1) = ((MR_Box) (hlds__goal_util__V_10_10));
#line 1455 "goal_util.m"
    }
#line 1455 "goal_util.m"
    {
#line 1455 "goal_util.m"
      hlds__goal_util__create_conj_from_list_3_p_0(hlds__goal_util__V_9_9, hlds__goal_util__Type_7, hlds__goal_util__ConjGoal_8);
#line 1455 "goal_util.m"
      return;
    }
#line 1454 "goal_util.m"
  }
#line 278 "goal_util.m"
}

#line 272 "goal_util.m"
void MR_CALL 
hlds__goal_util__create_conj_from_list_3_p_0(
#line 272 "goal_util.m"
  MR_Word hlds__goal_util__Conjuncts_4,
#line 272 "goal_util.m"
  MR_Word hlds__goal_util__ConjType_5,
#line 272 "goal_util.m"
  MR_Word * hlds__goal_util__ConjGoal_6)
#line 272 "goal_util.m"
{
#line 1459 "goal_util.m"
  {
#line 1459 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 1459 "goal_util.m"
    if ((hlds__goal_util__Conjuncts_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1477 "goal_util.m"
      {
#line 1478 "goal_util.m"
        {
#line 1478 "goal_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "predicate \140hlds.goal_util.create_conj_from_list\'/3", (MR_String) "empty conjunction");
#line 1478 "goal_util.m"
          return;
        }
#line 1477 "goal_util.m"
      }
#line 1459 "goal_util.m"
    else
#line 1459 "goal_util.m"
      {
#line 1459 "goal_util.m"
        MR_Word hlds__goal_util__HeadGoal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Conjuncts_4, (MR_Integer) 0)));
#line 1459 "goal_util.m"
        MR_Word hlds__goal_util__TailGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Conjuncts_4, (MR_Integer) 1)));

#line 1472 "goal_util.m"
        if ((hlds__goal_util__TailGoals_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1474 "goal_util.m"
          *hlds__goal_util__ConjGoal_6 = hlds__goal_util__HeadGoal_7;
#line 1472 "goal_util.m"
        else
#line 1461 "goal_util.m"
          {
#line 1461 "goal_util.m"
            MR_Word hlds__goal_util__ConjGoalExpr_11;
#line 1461 "goal_util.m"
            MR_Word hlds__goal_util__NonLocals_12;
#line 1461 "goal_util.m"
            MR_Word hlds__goal_util__InstMapDelta_13;
#line 1461 "goal_util.m"
            MR_Word hlds__goal_util__Detism_14;
#line 1461 "goal_util.m"
            MR_Word hlds__goal_util__Purity_15;
#line 1461 "goal_util.m"
            MR_Word hlds__goal_util__HeadGoalInfo_17;
#line 1461 "goal_util.m"
            MR_Word hlds__goal_util__Context_18;
#line 1461 "goal_util.m"
            MR_Word hlds__goal_util__ConjGoalInfo_19;
#line 1467 "goal_util.m"
            MR_Word hlds__goal_util__V_16_16;

#line 1462 "goal_util.m"
            {
#line 1462 "goal_util.m"
              hlds__goal_util__ConjGoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1462 "goal_util.m"
              MR_hl_field(MR_mktag(3), hlds__goal_util__ConjGoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1462 "goal_util.m"
              MR_hl_field(MR_mktag(3), hlds__goal_util__ConjGoalExpr_11, 1) = ((MR_Box) (hlds__goal_util__ConjType_5));
#line 1462 "goal_util.m"
              MR_hl_field(MR_mktag(3), hlds__goal_util__ConjGoalExpr_11, 2) = ((MR_Box) (hlds__goal_util__Conjuncts_4));
#line 1462 "goal_util.m"
            }
#line 1463 "goal_util.m"
            {
#line 1463 "goal_util.m"
              hlds__hlds_goal__goal_list_nonlocals_2_p_0(hlds__goal_util__Conjuncts_4, &hlds__goal_util__NonLocals_12);
            }
#line 1464 "goal_util.m"
            {
#line 1464 "goal_util.m"
              hlds__hlds_goal__goal_list_instmap_delta_2_p_0(hlds__goal_util__Conjuncts_4, &hlds__goal_util__InstMapDelta_13);
            }
#line 1465 "goal_util.m"
            {
#line 1465 "goal_util.m"
              hlds__hlds_goal__goal_list_determinism_2_p_0(hlds__goal_util__Conjuncts_4, &hlds__goal_util__Detism_14);
            }
#line 1466 "goal_util.m"
            {
#line 1466 "goal_util.m"
              hlds__hlds_goal__goal_list_purity_2_p_0(hlds__goal_util__Conjuncts_4, &hlds__goal_util__Purity_15);
            }
#line 1467 "goal_util.m"
            hlds__goal_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadGoal_7, (MR_Integer) 0)));
#line 1467 "goal_util.m"
            hlds__goal_util__HeadGoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadGoal_7, (MR_Integer) 1)));
#line 1468 "goal_util.m"
            {
#line 1468 "goal_util.m"
              hlds__goal_util__Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__goal_util__HeadGoalInfo_17);
            }
#line 1469 "goal_util.m"
            {
#line 1469 "goal_util.m"
              hlds__hlds_goal__goal_info_init_6_p_0(hlds__goal_util__NonLocals_12, hlds__goal_util__InstMapDelta_13, hlds__goal_util__Detism_14, hlds__goal_util__Purity_15, hlds__goal_util__Context_18, &hlds__goal_util__ConjGoalInfo_19);
            }
#line 1471 "goal_util.m"
            {
#line 1471 "goal_util.m"
              MR_Word base;
#line 1471 "goal_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1471 "goal_util.m"
              *hlds__goal_util__ConjGoal_6 = base;
#line 1471 "goal_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__ConjGoalExpr_11));
#line 1471 "goal_util.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__ConjGoalInfo_19));
#line 1471 "goal_util.m"
            }
#line 1461 "goal_util.m"
          }
#line 1459 "goal_util.m"
      }
#line 1459 "goal_util.m"
  }
#line 272 "goal_util.m"
}

#line 1441 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__flatten_disjs_1_f_0_1(
#line 1441 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1441 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1441 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2)
#line 1441 "goal_util.m"
{
#line 1441 "goal_util.m"
  {
#line 1441 "goal_util.m"
    MR_Box hlds__goal_util__wrapper_arg_3;
#line 1441 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 1441 "goal_util.m"
    MR_Word hlds__goal_util__conv0_Disjs_6;

#line 1441 "goal_util.m"
    {
#line 1441 "goal_util.m"
      hlds__goal_util__conv0_Disjs_6 = hlds__goal_util__flatten_disj_2_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2));
    }
#line 1441 "goal_util.m"
    hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_Disjs_6));
#line 1441 "goal_util.m"
    return hlds__goal_util__wrapper_arg_3;
#line 1441 "goal_util.m"
  }
#line 1441 "goal_util.m"
}

#line 267 "goal_util.m"
MR_Word MR_CALL 
hlds__goal_util__flatten_disjs_1_f_0(
#line 267 "goal_util.m"
  MR_Word hlds__goal_util__Disjs_3)
#line 267 "goal_util.m"
{
#line 1441 "goal_util.m"
  {
#line 1441 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1441 "goal_util.m"
    MR_Word hlds__goal_util__HeadVar__2_2;
#line 1441 "goal_util.m"
    MR_Box hlds__goal_util__conv1_HeadVar__2_2;

#line 1441 "goal_util.m"
    {
#line 1441 "goal_util.m"
      hlds__goal_util__conv1_HeadVar__2_2 = mercury__list__foldr_3_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__goal_util_scalar_common_1[4], (MR_Word) &hlds__goal_util_scalar_common_4[2], hlds__goal_util__Disjs_3, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    }
#line 1441 "goal_util.m"
    hlds__goal_util__HeadVar__2_2 = ((MR_Word) hlds__goal_util__conv1_HeadVar__2_2);
#line 1441 "goal_util.m"
    return hlds__goal_util__HeadVar__2_2;
#line 1441 "goal_util.m"
  }
#line 267 "goal_util.m"
}

#line 265 "goal_util.m"
void MR_CALL 
hlds__goal_util__flatten_conj_2_p_0(
#line 265 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 265 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__2_2)
#line 265 "goal_util.m"
{
#line 1432 "goal_util.m"
  {
#line 1432 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 1432 "goal_util.m"
    if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1432 "goal_util.m"
      *hlds__goal_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1432 "goal_util.m"
    else
#line 1433 "goal_util.m"
      {
#line 1433 "goal_util.m"
        MR_Word hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1433 "goal_util.m"
        MR_Word hlds__goal_util__Goals0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1433 "goal_util.m"
        MR_Word hlds__goal_util__Goals1_6;
#line 1437 "goal_util.m"
        MR_Word hlds__goal_util__SubGoals_7;
#line 1435 "goal_util.m"
        MR_Word hlds__goal_util__V_8_8;
#line 1435 "goal_util.m"
        MR_Word hlds__goal_util__V_9_9;
#line 1435 "goal_util.m"
        MR_Word hlds__goal_util__V_10_10;

#line 1434 "goal_util.m"
        {
#line 1434 "goal_util.m"
          hlds__goal_util__flatten_conj_2_p_0(hlds__goal_util__Goals0_4, &hlds__goal_util__Goals1_6);
        }
#line 1435 "goal_util.m"
        hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 0)));
#line 1435 "goal_util.m"
        hlds__goal_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 1)));
#line 1435 "goal_util.m"
        hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__V_8_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__V_8_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1435 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1435 "goal_util.m"
          {
#line 1435 "goal_util.m"
            hlds__goal_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__V_8_8, (MR_Integer) 1)));
#line 1435 "goal_util.m"
            hlds__goal_util__SubGoals_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__V_8_8, (MR_Integer) 2)));
#line 1435 "goal_util.m"
            hlds__goal_util__succeeded = (hlds__goal_util__V_9_9 == (MR_Integer) 0);
#line 1435 "goal_util.m"
          }
#line 1437 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1436 "goal_util.m"
          {
#line 1436 "goal_util.m"
            {
#line 1436 "goal_util.m"
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__goal_util__SubGoals_7, hlds__goal_util__Goals1_6, hlds__goal_util__HeadVar__2_2);
#line 1436 "goal_util.m"
              return;
            }
#line 1436 "goal_util.m"
          }
#line 1437 "goal_util.m"
        else
#line 1438 "goal_util.m"
          {
#line 1438 "goal_util.m"
            MR_Word base;
#line 1438 "goal_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1438 "goal_util.m"
            *hlds__goal_util__HeadVar__2_2 = base;
#line 1438 "goal_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Goal_3));
#line 1438 "goal_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_util__Goals1_6));
#line 1438 "goal_util.m"
          }
#line 1433 "goal_util.m"
      }
#line 1432 "goal_util.m"
  }
#line 265 "goal_util.m"
}

#line 1394 "goal_util.m"
static void MR_CALL 
hlds__goal_util__case_to_disjunct_11_p_0_1(
#line 1394 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1394 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1394 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_2)
#line 1394 "goal_util.m"
{
#line 1394 "goal_util.m"
  {
#line 1394 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 1394 "goal_util.m"
    MR_Word hlds__goal_util__conv0_HeadVar__2_64;

#line 1394 "goal_util.m"
    {
#line 1394 "goal_util.m"
      hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1394__1_2_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), &hlds__goal_util__conv0_HeadVar__2_64);
    }
#line 1394 "goal_util.m"
    *hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__2_64));
#line 1394 "goal_util.m"
  }
#line 1394 "goal_util.m"
}

#line 257 "goal_util.m"
void MR_CALL 
hlds__goal_util__case_to_disjunct_11_p_0(
#line 257 "goal_util.m"
  MR_Word hlds__goal_util__Var_12,
#line 257 "goal_util.m"
  MR_Word hlds__goal_util__CaseGoal_13,
#line 257 "goal_util.m"
  MR_Word hlds__goal_util__InstMap_14,
#line 257 "goal_util.m"
  MR_Word hlds__goal_util__ConsId_15,
#line 257 "goal_util.m"
  MR_Word * hlds__goal_util__Disjunct_16,
#line 257 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0_52,
#line 257 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarSet_53,
#line 257 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0_54,
#line 257 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarTypes_55,
#line 257 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_56,
#line 257 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_ModuleInfo_57)
#line 257 "goal_util.m"
{
#line 1379 "goal_util.m"
  {
#line 1379 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__TypeCtorInfo_89_89;
#line 1379 "goal_util.m"
    MR_Integer hlds__goal_util__ConsArity_20;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__ArgVars_21;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__VarType_22;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__ArgTypes_23;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__Inst0_24;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__ArgInsts_27;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__UniModes_31;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__UniMode_32;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__Unification_34;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__ExtraGoalExpr_35;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__NonLocals_36;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__ExtraInstMapDelta0_37;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__ExtraInstMapDelta_38;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__ExtraGoalInfo_39;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__CaseGoalConj_40;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__GoalList_41;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__CaseGoalInfo_43;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__CaseNonLocals0_44;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__CaseNonLocals_45;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__CaseInstMapDelta_46;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__InstMapDelta_47;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__CaseDetism0_48;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__Detism_49;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__CasePurity_50;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__CombinedGoalInfo_51;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__V_69_69;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__V_77_77;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__V_82_82;
#line 1379 "goal_util.m"
    MR_Word hlds__goal_util__V_85_85;
#line 1391 "goal_util.m"
    MR_Word hlds__goal_util__ArgInsts1_26;
#line 1387 "goal_util.m"
    MR_Word hlds__goal_util__Inst1_25;
#line 1417 "goal_util.m"
    MR_Word hlds__goal_util__V_42_42;

#line 1380 "goal_util.m"
    {
#line 1380 "goal_util.m"
      hlds__goal_util__ConsArity_20 = parse_tree__prog_util__cons_id_arity_1_f_0(hlds__goal_util__ConsId_15);
    }
#line 15273 "hlds.goal_util.c"
    hlds__goal_util__TypeCtorInfo_89_89 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1381 "goal_util.m"
    {
#line 1381 "goal_util.m"
      mercury__varset__new_vars_4_p_0(hlds__goal_util__TypeCtorInfo_89_89, hlds__goal_util__ConsArity_20, &hlds__goal_util__ArgVars_21, hlds__goal_util__STATE_VARIABLE_VarSet_0_52, hlds__goal_util__STATE_VARIABLE_VarSet_53);
    }
#line 1382 "goal_util.m"
    {
#line 1382 "goal_util.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(hlds__goal_util__STATE_VARIABLE_VarTypes_0_54, hlds__goal_util__Var_12, &hlds__goal_util__VarType_22);
    }
#line 1383 "goal_util.m"
    {
#line 1383 "goal_util.m"
      check_hlds__type_util__get_cons_id_arg_types_4_p_0(hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_56, hlds__goal_util__VarType_22, hlds__goal_util__ConsId_15, &hlds__goal_util__ArgTypes_23);
    }
#line 1384 "goal_util.m"
    {
#line 1384 "goal_util.m"
      parse_tree__prog_data__vartypes_add_corresponding_lists_4_p_0(hlds__goal_util__ArgVars_21, hlds__goal_util__ArgTypes_23, hlds__goal_util__STATE_VARIABLE_VarTypes_0_54, hlds__goal_util__STATE_VARIABLE_VarTypes_55);
    }
#line 1385 "goal_util.m"
    {
#line 1385 "goal_util.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__goal_util__InstMap_14, hlds__goal_util__Var_12, &hlds__goal_util__Inst0_24);
    }
#line 1387 "goal_util.m"
    {
#line 1387 "goal_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_56, hlds__goal_util__Inst0_24, &hlds__goal_util__Inst1_25);
    }
#line 1388 "goal_util.m"
    {
#line 1388 "goal_util.m"
      hlds__goal_util__succeeded = parse_tree__prog_mode__get_arg_insts_4_p_0(hlds__goal_util__Inst1_25, hlds__goal_util__ConsId_15, hlds__goal_util__ConsArity_20, &hlds__goal_util__ArgInsts1_26);
    }
#line 1391 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 1390 "goal_util.m"
      hlds__goal_util__ArgInsts_27 = hlds__goal_util__ArgInsts1_26;
#line 1391 "goal_util.m"
    else
#line 1392 "goal_util.m"
      {
#line 1392 "goal_util.m"
        {
#line 1392 "goal_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "predicate \140hlds.goal_util.case_to_disjunct\'/11", (MR_String) "get_arg_insts failed");
#line 1392 "goal_util.m"
          return;
        }
#line 1392 "goal_util.m"
      }
#line 1397 "goal_util.m"
    {
#line 1397 "goal_util.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, (MR_Word) &hlds__goal_util_scalar_common_4[1], hlds__goal_util__ArgInsts_27, &hlds__goal_util__UniModes_31);
    }
#line 1398 "goal_util.m"
    {
#line 1398 "goal_util.m"
      hlds__goal_util__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1398 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_69_69, 0) = ((MR_Box) (hlds__goal_util__Inst0_24));
#line 1398 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_69_69, 1) = ((MR_Box) (hlds__goal_util__Inst0_24));
#line 1398 "goal_util.m"
    }
#line 1398 "goal_util.m"
    {
#line 1398 "goal_util.m"
      hlds__goal_util__UniMode_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1398 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__UniMode_32, 0) = ((MR_Box) (hlds__goal_util__V_69_69));
#line 1398 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__UniMode_32, 1) = ((MR_Box) (hlds__goal_util__V_69_69));
#line 1398 "goal_util.m"
    }
#line 1400 "goal_util.m"
    {
#line 1400 "goal_util.m"
      hlds__goal_util__Unification_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1400 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__Unification_34, 0) = ((MR_Box) (hlds__goal_util__Var_12));
#line 1400 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__Unification_34, 1) = ((MR_Box) (hlds__goal_util__ConsId_15));
#line 1400 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__Unification_34, 2) = ((MR_Box) (hlds__goal_util__ArgVars_21));
#line 1400 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__Unification_34, 3) = ((MR_Box) (hlds__goal_util__UniModes_31));
#line 1400 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__Unification_34, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1400 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__Unification_34, 5) = ((MR_Box) ((MR_Integer) 1));
#line 1400 "goal_util.m"
    }
#line 1402 "goal_util.m"
    {
#line 1402 "goal_util.m"
      hlds__goal_util__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1402 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_77_77, 0) = ((MR_Box) (hlds__goal_util__ConsId_15));
#line 1402 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_77_77, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1402 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_77_77, 2) = ((MR_Box) (hlds__goal_util__ArgVars_21));
#line 1402 "goal_util.m"
    }
#line 1402 "goal_util.m"
    {
#line 1402 "goal_util.m"
      hlds__goal_util__ExtraGoalExpr_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1402 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__ExtraGoalExpr_35, 0) = ((MR_Box) (hlds__goal_util__Var_12));
#line 1402 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__ExtraGoalExpr_35, 1) = ((MR_Box) (hlds__goal_util__V_77_77));
#line 1402 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__ExtraGoalExpr_35, 2) = ((MR_Box) (hlds__goal_util__UniMode_32));
#line 1402 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__ExtraGoalExpr_35, 3) = ((MR_Box) (hlds__goal_util__Unification_34));
#line 1402 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__ExtraGoalExpr_35, 4) = ((MR_Box) (&hlds__goal_util_scalar_common_1[5]));
#line 1402 "goal_util.m"
    }
#line 1404 "goal_util.m"
    {
#line 1404 "goal_util.m"
      hlds__goal_util__NonLocals_36 = parse_tree__set_of_var__make_singleton_1_f_0(hlds__goal_util__TypeCtorInfo_89_89, hlds__goal_util__Var_12);
    }
#line 1405 "goal_util.m"
    {
#line 1405 "goal_util.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&hlds__goal_util__ExtraInstMapDelta0_37);
    }
#line 1406 "goal_util.m"
    {
#line 1406 "goal_util.m"
      hlds__instmap__instmap_delta_bind_var_to_functor_8_p_0(hlds__goal_util__Var_12, hlds__goal_util__VarType_22, hlds__goal_util__ConsId_15, hlds__goal_util__InstMap_14, hlds__goal_util__ExtraInstMapDelta0_37, &hlds__goal_util__ExtraInstMapDelta_38, hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_56, hlds__goal_util__STATE_VARIABLE_ModuleInfo_57);
    }
#line 1408 "goal_util.m"
    {
#line 1408 "goal_util.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__goal_util__NonLocals_36, hlds__goal_util__ExtraInstMapDelta_38, (MR_Integer) 1, (MR_Integer) 0, &hlds__goal_util__ExtraGoalInfo_39);
    }
#line 1412 "goal_util.m"
    {
#line 1412 "goal_util.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__goal_util__CaseGoal_13, &hlds__goal_util__CaseGoalConj_40);
    }
#line 1413 "goal_util.m"
    {
#line 1413 "goal_util.m"
      hlds__goal_util__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1413 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_82_82, 0) = ((MR_Box) (hlds__goal_util__ExtraGoalExpr_35));
#line 1413 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_82_82, 1) = ((MR_Box) (hlds__goal_util__ExtraGoalInfo_39));
#line 1413 "goal_util.m"
    }
#line 1413 "goal_util.m"
    {
#line 1413 "goal_util.m"
      hlds__goal_util__GoalList_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1413 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__GoalList_41, 0) = ((MR_Box) (hlds__goal_util__V_82_82));
#line 1413 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__GoalList_41, 1) = ((MR_Box) (hlds__goal_util__CaseGoalConj_40));
#line 1413 "goal_util.m"
    }
#line 1417 "goal_util.m"
    hlds__goal_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__CaseGoal_13, (MR_Integer) 0)));
#line 1417 "goal_util.m"
    hlds__goal_util__CaseGoalInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__CaseGoal_13, (MR_Integer) 1)));
#line 1418 "goal_util.m"
    {
#line 1418 "goal_util.m"
      hlds__goal_util__CaseNonLocals0_44 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__goal_util__CaseGoalInfo_43);
    }
#line 1419 "goal_util.m"
    {
#line 1419 "goal_util.m"
      parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_89_89, hlds__goal_util__Var_12, hlds__goal_util__CaseNonLocals0_44, &hlds__goal_util__CaseNonLocals_45);
    }
#line 1420 "goal_util.m"
    {
#line 1420 "goal_util.m"
      hlds__goal_util__CaseInstMapDelta_46 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__CaseGoalInfo_43);
    }
#line 1421 "goal_util.m"
    {
#line 1421 "goal_util.m"
      hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(hlds__goal_util__ExtraInstMapDelta_38, hlds__goal_util__CaseInstMapDelta_46, (MR_Integer) 2, &hlds__goal_util__InstMapDelta_47);
    }
#line 1423 "goal_util.m"
    {
#line 1423 "goal_util.m"
      hlds__goal_util__CaseDetism0_48 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_util__CaseGoalInfo_43);
    }
#line 1424 "goal_util.m"
    {
#line 1424 "goal_util.m"
      parse_tree__prog_data__det_conjunction_detism_3_p_0((MR_Integer) 1, hlds__goal_util__CaseDetism0_48, &hlds__goal_util__Detism_49);
    }
#line 1425 "goal_util.m"
    {
#line 1425 "goal_util.m"
      hlds__goal_util__CasePurity_50 = hlds__hlds_goal__goal_info_get_purity_1_f_0(hlds__goal_util__CaseGoalInfo_43);
    }
#line 1426 "goal_util.m"
    {
#line 1426 "goal_util.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__goal_util__CaseNonLocals_45, hlds__goal_util__InstMapDelta_47, hlds__goal_util__Detism_49, hlds__goal_util__CasePurity_50, &hlds__goal_util__CombinedGoalInfo_51);
    }
#line 1428 "goal_util.m"
    {
#line 1428 "goal_util.m"
      hlds__goal_util__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1428 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1428 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__V_85_85, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1428 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__V_85_85, 2) = ((MR_Box) (hlds__goal_util__GoalList_41));
#line 1428 "goal_util.m"
    }
#line 1428 "goal_util.m"
    {
#line 1428 "goal_util.m"
      MR_Word base;
#line 1428 "goal_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1428 "goal_util.m"
      *hlds__goal_util__Disjunct_16 = base;
#line 1428 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__V_85_85));
#line 1428 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__CombinedGoalInfo_51));
#line 1428 "goal_util.m"
    }
#line 1379 "goal_util.m"
  }
#line 257 "goal_util.m"
}

#line 1372 "goal_util.m"
static void MR_CALL 
hlds__goal_util__switch_to_disjunction_10_p_0_1(
#line 1372 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1372 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1372 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_2,
#line 1372 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_3,
#line 1372 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_4,
#line 1372 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_5,
#line 1372 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_6,
#line 1372 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_7,
#line 1372 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_8)
#line 1372 "goal_util.m"
{
#line 1372 "goal_util.m"
  {
#line 1372 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 1372 "goal_util.m"
    MR_Word hlds__goal_util__conv3_Disjunct_16;
#line 1372 "goal_util.m"
    MR_Word hlds__goal_util__conv2_STATE_VARIABLE_VarSet_53;
#line 1372 "goal_util.m"
    MR_Word hlds__goal_util__conv1_STATE_VARIABLE_VarTypes_55;
#line 1372 "goal_util.m"
    MR_Word hlds__goal_util__conv0_STATE_VARIABLE_ModuleInfo_57;

#line 1372 "goal_util.m"
    {
#line 1372 "goal_util.m"
      hlds__goal_util__case_to_disjunct_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 5))), ((MR_Word) hlds__goal_util__wrapper_arg_1), &hlds__goal_util__conv3_Disjunct_16, ((MR_Word) hlds__goal_util__wrapper_arg_3), &hlds__goal_util__conv2_STATE_VARIABLE_VarSet_53, ((MR_Word) hlds__goal_util__wrapper_arg_5), &hlds__goal_util__conv1_STATE_VARIABLE_VarTypes_55, ((MR_Word) hlds__goal_util__wrapper_arg_7), &hlds__goal_util__conv0_STATE_VARIABLE_ModuleInfo_57);
    }
#line 1372 "goal_util.m"
    *hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv3_Disjunct_16));
#line 1372 "goal_util.m"
    *hlds__goal_util__wrapper_arg_4 = ((MR_Box) (hlds__goal_util__conv2_STATE_VARIABLE_VarSet_53));
#line 1372 "goal_util.m"
    *hlds__goal_util__wrapper_arg_6 = ((MR_Box) (hlds__goal_util__conv1_STATE_VARIABLE_VarTypes_55));
#line 1372 "goal_util.m"
    *hlds__goal_util__wrapper_arg_8 = ((MR_Box) (hlds__goal_util__conv0_STATE_VARIABLE_ModuleInfo_57));
#line 1372 "goal_util.m"
  }
#line 1372 "goal_util.m"
}

#line 249 "goal_util.m"
void MR_CALL 
hlds__goal_util__switch_to_disjunction_10_p_0(
#line 249 "goal_util.m"
  MR_Word hlds__goal_util__Var_1,
#line 249 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_2,
#line 249 "goal_util.m"
  MR_Word hlds__goal_util__InstMap_3,
#line 249 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__4_4,
#line 249 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0_5,
#line 249 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarSet_6,
#line 249 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0_7,
#line 249 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarTypes_8,
#line 249 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_9,
#line 249 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_ModuleInfo_10)
#line 249 "goal_util.m"
{
#line 1366 "goal_util.m"
  {
#line 1366 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 1366 "goal_util.m"
    if ((hlds__goal_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1366 "goal_util.m"
      {
#line 1366 "goal_util.m"
        *hlds__goal_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1366 "goal_util.m"
        *hlds__goal_util__STATE_VARIABLE_ModuleInfo_10 = hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_9;
#line 1366 "goal_util.m"
        *hlds__goal_util__STATE_VARIABLE_VarTypes_8 = hlds__goal_util__STATE_VARIABLE_VarTypes_0_7;
#line 1366 "goal_util.m"
        *hlds__goal_util__STATE_VARIABLE_VarSet_6 = hlds__goal_util__STATE_VARIABLE_VarSet_0_5;
#line 1366 "goal_util.m"
      }
#line 1366 "goal_util.m"
    else
#line 1368 "goal_util.m"
      {
#line 1368 "goal_util.m"
        MR_Word hlds__goal_util__TypeCtorInfo_62_62;
#line 1368 "goal_util.m"
        MR_Word hlds__goal_util__Case_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1368 "goal_util.m"
        MR_Word hlds__goal_util__Cases_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1368 "goal_util.m"
        MR_Word hlds__goal_util__MainConsId_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_23, (MR_Integer) 0)));
#line 1368 "goal_util.m"
        MR_Word hlds__goal_util__OtherConsIds_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_23, (MR_Integer) 1)));
#line 1368 "goal_util.m"
        MR_Word hlds__goal_util__CaseGoal_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_23, (MR_Integer) 2)));
#line 1368 "goal_util.m"
        MR_Word hlds__goal_util__MainDisjunctGoal_33;
#line 1368 "goal_util.m"
        MR_Word hlds__goal_util__OtherDisjunctGoals_34;
#line 1368 "goal_util.m"
        MR_Word hlds__goal_util__CasesGoals_35;
#line 1368 "goal_util.m"
        MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_42_42;
#line 1368 "goal_util.m"
        MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_43_43;
#line 1368 "goal_util.m"
        MR_Word hlds__goal_util__STATE_VARIABLE_ModuleInfo_44_44;
#line 1368 "goal_util.m"
        MR_Word hlds__goal_util__V_45_45;
#line 1368 "goal_util.m"
        MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_46_46;
#line 1368 "goal_util.m"
        MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_47_47;
#line 1368 "goal_util.m"
        MR_Word hlds__goal_util__STATE_VARIABLE_ModuleInfo_48_48;
#line 1368 "goal_util.m"
        MR_Word hlds__goal_util__V_52_52;
#line 1372 "goal_util.m"
        MR_Box hlds__goal_util__conv6_STATE_VARIABLE_VarSet_46_46;
#line 1372 "goal_util.m"
        MR_Box hlds__goal_util__conv5_STATE_VARIABLE_VarTypes_47_47;
#line 1372 "goal_util.m"
        MR_Box hlds__goal_util__conv4_STATE_VARIABLE_ModuleInfo_48_48;

#line 1370 "goal_util.m"
        {
#line 1370 "goal_util.m"
          hlds__goal_util__case_to_disjunct_11_p_0(hlds__goal_util__Var_1, hlds__goal_util__CaseGoal_32, hlds__goal_util__InstMap_3, hlds__goal_util__MainConsId_30, &hlds__goal_util__MainDisjunctGoal_33, hlds__goal_util__STATE_VARIABLE_VarSet_0_5, &hlds__goal_util__STATE_VARIABLE_VarSet_42_42, hlds__goal_util__STATE_VARIABLE_VarTypes_0_7, &hlds__goal_util__STATE_VARIABLE_VarTypes_43_43, hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_9, &hlds__goal_util__STATE_VARIABLE_ModuleInfo_44_44);
        }
#line 1372 "goal_util.m"
        {
#line 1372 "goal_util.m"
          hlds__goal_util__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1372 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__V_45_45, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_6[0]));
#line 1372 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__V_45_45, 1) = ((MR_Box) (hlds__goal_util__switch_to_disjunction_10_p_0_1));
#line 1372 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1372 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__V_45_45, 3) = ((MR_Box) (hlds__goal_util__Var_1));
#line 1372 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__V_45_45, 4) = ((MR_Box) (hlds__goal_util__CaseGoal_32));
#line 1372 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__V_45_45, 5) = ((MR_Box) (hlds__goal_util__InstMap_3));
#line 1372 "goal_util.m"
        }
#line 15684 "hlds.goal_util.c"
        hlds__goal_util__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1372 "goal_util.m"
        {
#line 1372 "goal_util.m"
          mercury__list__map_foldl3_9_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, hlds__goal_util__TypeCtorInfo_62_62, (MR_Word) &hlds__goal_util_scalar_common_1[3], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, hlds__goal_util__V_45_45, hlds__goal_util__OtherConsIds_31, &hlds__goal_util__OtherDisjunctGoals_34, ((MR_Box) (hlds__goal_util__STATE_VARIABLE_VarSet_42_42)), &hlds__goal_util__conv6_STATE_VARIABLE_VarSet_46_46, ((MR_Box) (hlds__goal_util__STATE_VARIABLE_VarTypes_43_43)), &hlds__goal_util__conv5_STATE_VARIABLE_VarTypes_47_47, ((MR_Box) (hlds__goal_util__STATE_VARIABLE_ModuleInfo_44_44)), &hlds__goal_util__conv4_STATE_VARIABLE_ModuleInfo_48_48);
        }
#line 1372 "goal_util.m"
        hlds__goal_util__STATE_VARIABLE_VarSet_46_46 = ((MR_Word) hlds__goal_util__conv6_STATE_VARIABLE_VarSet_46_46);
#line 1372 "goal_util.m"
        hlds__goal_util__STATE_VARIABLE_VarTypes_47_47 = ((MR_Word) hlds__goal_util__conv5_STATE_VARIABLE_VarTypes_47_47);
#line 1372 "goal_util.m"
        hlds__goal_util__STATE_VARIABLE_ModuleInfo_48_48 = ((MR_Word) hlds__goal_util__conv4_STATE_VARIABLE_ModuleInfo_48_48);
#line 1374 "goal_util.m"
        {
#line 1374 "goal_util.m"
          hlds__goal_util__switch_to_disjunction_10_p_0(hlds__goal_util__Var_1, hlds__goal_util__Cases_24, hlds__goal_util__InstMap_3, &hlds__goal_util__CasesGoals_35, hlds__goal_util__STATE_VARIABLE_VarSet_46_46, hlds__goal_util__STATE_VARIABLE_VarSet_6, hlds__goal_util__STATE_VARIABLE_VarTypes_47_47, hlds__goal_util__STATE_VARIABLE_VarTypes_8, hlds__goal_util__STATE_VARIABLE_ModuleInfo_48_48, hlds__goal_util__STATE_VARIABLE_ModuleInfo_10);
        }
#line 1376 "goal_util.m"
        {
#line 1376 "goal_util.m"
          hlds__goal_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1376 "goal_util.m"
          MR_hl_field(MR_mktag(1), hlds__goal_util__V_52_52, 0) = ((MR_Box) (hlds__goal_util__MainDisjunctGoal_33));
#line 1376 "goal_util.m"
          MR_hl_field(MR_mktag(1), hlds__goal_util__V_52_52, 1) = ((MR_Box) (hlds__goal_util__OtherDisjunctGoals_34));
#line 1376 "goal_util.m"
        }
#line 1376 "goal_util.m"
        {
#line 1376 "goal_util.m"
          *hlds__goal_util__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(hlds__goal_util__TypeCtorInfo_62_62, hlds__goal_util__V_52_52, hlds__goal_util__CasesGoals_35);
        }
#line 1368 "goal_util.m"
      }
#line 1366 "goal_util.m"
  }
#line 249 "goal_util.m"
}

#line 241 "goal_util.m"
void MR_CALL 
hlds__goal_util__goal_is_atomic_2_p_0(
#line 241 "goal_util.m"
  MR_Word hlds__goal_util__Goal_3,
#line 241 "goal_util.m"
  MR_Word * hlds__goal_util__GoalIsAtomic_4)
#line 241 "goal_util.m"
{
#line 1771 "goal_util.m"
  {
#line 1771 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1771 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 0)));
#line 1772 "goal_util.m"
    MR_Word hlds__goal_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 1)));

#line 1780 "goal_util.m"
    if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1790 "goal_util.m"
      {
#line 1791 "goal_util.m"
        {
#line 1791 "goal_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "predicate \140hlds.goal_util.goal_is_atomic\'/2", (MR_String) "shorthand");
#line 1791 "goal_util.m"
          return;
        }
#line 1790 "goal_util.m"
      }
#line 1780 "goal_util.m"
    else
#line 1780 "goal_util.m"
      if (((((((((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 1)))) || (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || (((MR_tag((MR_Word) hlds__goal_util__GoalExpr_5)) == (MR_mktag((MR_Integer) 2)))))) || (((MR_tag((MR_Word) hlds__goal_util__GoalExpr_5)) == (MR_mktag((MR_Integer) 1))))))
#line 1779 "goal_util.m"
        *hlds__goal_util__GoalIsAtomic_4 = (MR_Integer) 0;
#line 1780 "goal_util.m"
      else
#line 1788 "goal_util.m"
        *hlds__goal_util__GoalIsAtomic_4 = (MR_Integer) 1;
#line 1771 "goal_util.m"
  }
#line 241 "goal_util.m"
}

#line 1768 "goal_util.m"
static void MR_CALL 
hlds__goal_util__pred_proc_ids_from_goal_2_p_0_1(
#line 1768 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1768 "goal_util.m"
{
#line 1768 "goal_util.m"
  {
#line 1768 "goal_util.m"
    struct hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1768 "goal_util.m"
    *((hlds__goal_util__env_ptr)->hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((hlds__goal_util__env_ptr)->hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__conv0_PredProcId_5));
#line 1768 "goal_util.m"
    {
#line 1768 "goal_util.m"
      ((hlds__goal_util__env_ptr)->hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__cont_env_ptr);
#line 1768 "goal_util.m"
      return;
    }
#line 1768 "goal_util.m"
  }
#line 1768 "goal_util.m"
}

#line 1768 "goal_util.m"
static void MR_CALL 
hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2(
#line 1768 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1768 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 1768 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1768 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 1768 "goal_util.m"
{
#line 1768 "goal_util.m"
  {
#line 1768 "goal_util.m"
    struct hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0_s hlds__goal_util__env;

#line 1768 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__wrapper_arg_1 = hlds__goal_util__wrapper_arg_1;
#line 1768 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__cont = hlds__goal_util__cont;
#line 1768 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
#line 1768 "goal_util.m"
    {
#line 1768 "goal_util.m"
      MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;

#line 1768 "goal_util.m"
      {
#line 1768 "goal_util.m"
        hlds__goal_util__goal_calls_2_p_1(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), &(hlds__goal_util__env).hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__conv0_PredProcId_5, hlds__goal_util__pred_proc_ids_from_goal_2_p_0_1, &hlds__goal_util__env);
      }
#line 1768 "goal_util.m"
    }
#line 1768 "goal_util.m"
  }
#line 1768 "goal_util.m"
}

#line 233 "goal_util.m"
void MR_CALL 
hlds__goal_util__pred_proc_ids_from_goal_2_p_0(
#line 233 "goal_util.m"
  MR_Word hlds__goal_util__Goal_3,
#line 233 "goal_util.m"
  MR_Word * hlds__goal_util__PredProcIds_4)
#line 233 "goal_util.m"
{
#line 1767 "goal_util.m"
  {
#line 1767 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1767 "goal_util.m"
    MR_Word hlds__goal_util__P_5;

#line 1768 "goal_util.m"
    {
#line 1768 "goal_util.m"
      hlds__goal_util__P_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1768 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[2]));
#line 1768 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 1) = ((MR_Box) (hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2));
#line 1768 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1768 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 3) = ((MR_Box) (hlds__goal_util__Goal_3));
#line 1768 "goal_util.m"
    }
#line 1769 "goal_util.m"
    {
#line 1769 "goal_util.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, hlds__goal_util__P_5, hlds__goal_util__PredProcIds_4);
#line 1769 "goal_util.m"
      return;
    }
#line 1767 "goal_util.m"
  }
#line 233 "goal_util.m"
}

#line 1757 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_from_goals_2_p_0_1(
#line 1757 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1757 "goal_util.m"
{
#line 1757 "goal_util.m"
  {
#line 1757 "goal_util.m"
    struct hlds__goal_util__predids_from_goals_2_p_0_2_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__predids_from_goals_2_p_0_2_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1757 "goal_util.m"
    *((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goals_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goals_2_p_0_2_env_0__conv0_PredId_5));
#line 1757 "goal_util.m"
    {
#line 1757 "goal_util.m"
      ((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goals_2_p_0_2_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goals_2_p_0_2_env_0__cont_env_ptr);
#line 1757 "goal_util.m"
      return;
    }
#line 1757 "goal_util.m"
  }
#line 1757 "goal_util.m"
}

#line 1757 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_from_goals_2_p_0_2(
#line 1757 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1757 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 1757 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1757 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 1757 "goal_util.m"
{
#line 1757 "goal_util.m"
  {
#line 1757 "goal_util.m"
    struct hlds__goal_util__predids_from_goals_2_p_0_2_env_0_s hlds__goal_util__env;

#line 1757 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__predids_from_goals_2_p_0_2_env_0__wrapper_arg_1 = hlds__goal_util__wrapper_arg_1;
#line 1757 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__predids_from_goals_2_p_0_2_env_0__cont = hlds__goal_util__cont;
#line 1757 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__predids_from_goals_2_p_0_2_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
#line 1757 "goal_util.m"
    {
#line 1757 "goal_util.m"
      MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;

#line 1757 "goal_util.m"
      {
#line 1757 "goal_util.m"
        hlds__goal_util__goal_calls_pred_id_2_p_1(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), &(hlds__goal_util__env).hlds__goal_util__predids_from_goals_2_p_0_2_env_0__conv0_PredId_5, hlds__goal_util__predids_from_goals_2_p_0_1, &hlds__goal_util__env);
      }
#line 1757 "goal_util.m"
    }
#line 1757 "goal_util.m"
  }
#line 1757 "goal_util.m"
}

#line 229 "goal_util.m"
void MR_CALL 
hlds__goal_util__predids_from_goals_2_p_0(
#line 229 "goal_util.m"
  MR_Word hlds__goal_util__Goals_3,
#line 229 "goal_util.m"
  MR_Word * hlds__goal_util__PredIds_4)
#line 229 "goal_util.m"
{
#line 1745 "goal_util.m"
  {
#line 1745 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 1745 "goal_util.m"
    if ((hlds__goal_util__Goals_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1746 "goal_util.m"
      *hlds__goal_util__PredIds_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1745 "goal_util.m"
    else
#line 1748 "goal_util.m"
      {
#line 1748 "goal_util.m"
        MR_Word hlds__goal_util__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Goals_3, (MR_Integer) 0)));
#line 1748 "goal_util.m"
        MR_Word hlds__goal_util__Rest_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Goals_3, (MR_Integer) 1)));
#line 1748 "goal_util.m"
        MR_Word hlds__goal_util__PredIds0_7;
#line 1748 "goal_util.m"
        MR_Word hlds__goal_util__PredIds1_8;
#line 1748 "goal_util.m"
        MR_Word hlds__goal_util__P_12;

#line 1757 "goal_util.m"
        {
#line 1757 "goal_util.m"
          hlds__goal_util__P_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1757 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__P_12, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[0]));
#line 1757 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__P_12, 1) = ((MR_Box) (hlds__goal_util__predids_from_goals_2_p_0_2));
#line 1757 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__P_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1757 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__P_12, 3) = ((MR_Box) (hlds__goal_util__Goal_5));
#line 1757 "goal_util.m"
        }
#line 1758 "goal_util.m"
        {
#line 1758 "goal_util.m"
          mercury__solutions__solutions_2_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__goal_util__P_12, &hlds__goal_util__PredIds0_7);
        }
#line 1750 "goal_util.m"
        {
#line 1750 "goal_util.m"
          hlds__goal_util__predids_from_goals_2_p_0(hlds__goal_util__Rest_6, &hlds__goal_util__PredIds1_8);
        }
#line 1751 "goal_util.m"
        {
#line 1751 "goal_util.m"
          *hlds__goal_util__PredIds_4 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__goal_util__PredIds0_7, hlds__goal_util__PredIds1_8);
        }
#line 1748 "goal_util.m"
      }
#line 1745 "goal_util.m"
  }
#line 229 "goal_util.m"
}

#line 1761 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_with_args_from_goal_2_p_0_1(
#line 1761 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1761 "goal_util.m"
{
#line 1761 "goal_util.m"
  {
#line 1761 "goal_util.m"
    struct hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1761 "goal_util.m"
    *((hlds__goal_util__env_ptr)->hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((hlds__goal_util__env_ptr)->hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__conv0_HeadVar__2_14));
#line 1761 "goal_util.m"
    {
#line 1761 "goal_util.m"
      ((hlds__goal_util__env_ptr)->hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__cont_env_ptr);
#line 1761 "goal_util.m"
      return;
    }
#line 1761 "goal_util.m"
  }
#line 1761 "goal_util.m"
}

#line 1761 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_with_args_from_goal_2_p_0_2(
#line 1761 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1761 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 1761 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1761 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 1761 "goal_util.m"
{
#line 1761 "goal_util.m"
  {
#line 1761 "goal_util.m"
    struct hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0_s hlds__goal_util__env;

#line 1761 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__wrapper_arg_1 = hlds__goal_util__wrapper_arg_1;
#line 1761 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__cont = hlds__goal_util__cont;
#line 1761 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
#line 1761 "goal_util.m"
    {
#line 1761 "goal_util.m"
      MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;

#line 1761 "goal_util.m"
      {
#line 1761 "goal_util.m"
        hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1761__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), &(hlds__goal_util__env).hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__conv0_HeadVar__2_14, hlds__goal_util__predids_with_args_from_goal_2_p_0_1, &hlds__goal_util__env);
      }
#line 1761 "goal_util.m"
    }
#line 1761 "goal_util.m"
  }
#line 1761 "goal_util.m"
}

#line 224 "goal_util.m"
void MR_CALL 
hlds__goal_util__predids_with_args_from_goal_2_p_0(
#line 224 "goal_util.m"
  MR_Word hlds__goal_util__Goal_3,
#line 224 "goal_util.m"
  MR_Word * hlds__goal_util__List_4)
#line 224 "goal_util.m"
{
#line 1760 "goal_util.m"
  {
#line 1760 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1760 "goal_util.m"
    MR_Word hlds__goal_util__V_13_13;

#line 1761 "goal_util.m"
    {
#line 1761 "goal_util.m"
      hlds__goal_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1761 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_13_13, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[1]));
#line 1761 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_13_13, 1) = ((MR_Box) (hlds__goal_util__predids_with_args_from_goal_2_p_0_2));
#line 1761 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1761 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_13_13, 3) = ((MR_Box) (hlds__goal_util__Goal_3));
#line 1761 "goal_util.m"
    }
#line 1761 "goal_util.m"
    {
#line 1761 "goal_util.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &hlds__goal_util_scalar_common_2[0], hlds__goal_util__V_13_13, hlds__goal_util__List_4);
#line 1761 "goal_util.m"
      return;
    }
#line 1760 "goal_util.m"
  }
#line 224 "goal_util.m"
}

#line 1757 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_from_goal_2_p_0_1(
#line 1757 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1757 "goal_util.m"
{
#line 1757 "goal_util.m"
  {
#line 1757 "goal_util.m"
    struct hlds__goal_util__predids_from_goal_2_p_0_2_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__predids_from_goal_2_p_0_2_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1757 "goal_util.m"
    *((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goal_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goal_2_p_0_2_env_0__conv0_PredId_5));
#line 1757 "goal_util.m"
    {
#line 1757 "goal_util.m"
      ((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goal_2_p_0_2_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goal_2_p_0_2_env_0__cont_env_ptr);
#line 1757 "goal_util.m"
      return;
    }
#line 1757 "goal_util.m"
  }
#line 1757 "goal_util.m"
}

#line 1757 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_from_goal_2_p_0_2(
#line 1757 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1757 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 1757 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1757 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 1757 "goal_util.m"
{
#line 1757 "goal_util.m"
  {
#line 1757 "goal_util.m"
    struct hlds__goal_util__predids_from_goal_2_p_0_2_env_0_s hlds__goal_util__env;

#line 1757 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__predids_from_goal_2_p_0_2_env_0__wrapper_arg_1 = hlds__goal_util__wrapper_arg_1;
#line 1757 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__predids_from_goal_2_p_0_2_env_0__cont = hlds__goal_util__cont;
#line 1757 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__predids_from_goal_2_p_0_2_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
#line 1757 "goal_util.m"
    {
#line 1757 "goal_util.m"
      MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;

#line 1757 "goal_util.m"
      {
#line 1757 "goal_util.m"
        hlds__goal_util__goal_calls_pred_id_2_p_1(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), &(hlds__goal_util__env).hlds__goal_util__predids_from_goal_2_p_0_2_env_0__conv0_PredId_5, hlds__goal_util__predids_from_goal_2_p_0_1, &hlds__goal_util__env);
      }
#line 1757 "goal_util.m"
    }
#line 1757 "goal_util.m"
  }
#line 1757 "goal_util.m"
}

#line 220 "goal_util.m"
void MR_CALL 
hlds__goal_util__predids_from_goal_2_p_0(
#line 220 "goal_util.m"
  MR_Word hlds__goal_util__Goal_3,
#line 220 "goal_util.m"
  MR_Word * hlds__goal_util__PredIds_4)
#line 220 "goal_util.m"
{
#line 1754 "goal_util.m"
  {
#line 1754 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1754 "goal_util.m"
    MR_Word hlds__goal_util__P_5;

#line 1757 "goal_util.m"
    {
#line 1757 "goal_util.m"
      hlds__goal_util__P_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1757 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[0]));
#line 1757 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 1) = ((MR_Box) (hlds__goal_util__predids_from_goal_2_p_0_2));
#line 1757 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1757 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 3) = ((MR_Box) (hlds__goal_util__Goal_3));
#line 1757 "goal_util.m"
    }
#line 1758 "goal_util.m"
    {
#line 1758 "goal_util.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__goal_util__P_5, hlds__goal_util__PredIds_4);
#line 1758 "goal_util.m"
      return;
    }
#line 1754 "goal_util.m"
  }
#line 220 "goal_util.m"
}

#line 1357 "goal_util.m"
static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_1(
#line 1357 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1357 "goal_util.m"
{
#line 1357 "goal_util.m"
  {
#line 1357 "goal_util.m"
    struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1357 "goal_util.m"
    *((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = ((MR_Word) (hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__conv0_Goal_2);
#line 1357 "goal_util.m"
    {
#line 1357 "goal_util.m"
      ((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
#line 1357 "goal_util.m"
      return;
    }
#line 1357 "goal_util.m"
  }
#line 1357 "goal_util.m"
}

#line 1359 "goal_util.m"
static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_2(
#line 1359 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1359 "goal_util.m"
{
#line 1359 "goal_util.m"
  {
#line 1359 "goal_util.m"
    struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1359 "goal_util.m"
    *((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = ((MR_Word) (hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__conv1_Goal_2);
#line 1359 "goal_util.m"
    {
#line 1359 "goal_util.m"
      ((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
#line 1359 "goal_util.m"
      return;
    }
#line 1359 "goal_util.m"
  }
#line 1359 "goal_util.m"
}

#line 1361 "goal_util.m"
static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_4(
#line 1361 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1361 "goal_util.m"
{
#line 1361 "goal_util.m"
  {
#line 1361 "goal_util.m"
    struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1361 "goal_util.m"
    (hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Case_20 = ((MR_Word) (hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__conv2_Case_20);
#line 1361 "goal_util.m"
    {
#line 1361 "goal_util.m"
      hlds__goal_util__direct_subgoal_2_p_0_3(hlds__goal_util__env_ptr);
#line 1361 "goal_util.m"
      return;
    }
#line 1361 "goal_util.m"
  }
#line 1361 "goal_util.m"
}

#line 1360 "goal_util.m"
static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_3(
#line 1360 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1360 "goal_util.m"
{
#line 1360 "goal_util.m"
  {
#line 1360 "goal_util.m"
    struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1360 "goal_util.m"
    {
#line 1362 "goal_util.m"
      MR_Word hlds__goal_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Case_20, (MR_Integer) 0)));
#line 1362 "goal_util.m"
      MR_Word hlds__goal_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Case_20, (MR_Integer) 1)));

#line 1362 "goal_util.m"
      *((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Case_20, (MR_Integer) 2)));
#line 1362 "goal_util.m"
      {
#line 1362 "goal_util.m"
        ((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
#line 1362 "goal_util.m"
        return;
      }
#line 1360 "goal_util.m"
    }
#line 1360 "goal_util.m"
  }
#line 1360 "goal_util.m"
}

#line 216 "goal_util.m"
void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0(
#line 216 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 216 "goal_util.m"
  MR_Word * hlds__goal_util__Goal_2,
#line 216 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 216 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 216 "goal_util.m"
{
#line 216 "goal_util.m"
  {
#line 216 "goal_util.m"
    struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s hlds__goal_util__env;

#line 216 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2 = hlds__goal_util__Goal_2;
#line 216 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont = hlds__goal_util__cont;
#line 216 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
#line 1349 "goal_util.m"
    {
#line 1349 "goal_util.m"
      MR_bool hlds__goal_util__succeeded;

#line 1349 "goal_util.m"
      if (((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1350 "goal_util.m"
        {
#line 1350 "goal_util.m"
          *((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = (MR_Word) MR_body(((MR_Word) hlds__goal_util__HeadVar__1_1), (MR_Integer) 0);
#line 1350 "goal_util.m"
          {
#line 1350 "goal_util.m"
            ((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
#line 1350 "goal_util.m"
            return;
          }
#line 1350 "goal_util.m"
        }
#line 1349 "goal_util.m"
      else
#line 1349 "goal_util.m"
        if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1356 "goal_util.m"
          {
#line 1356 "goal_util.m"
            MR_Word hlds__goal_util__ConjList_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1356 "goal_util.m"
            MR_Word hlds__goal_util___ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1357 "goal_util.m"
            {
#line 1357 "goal_util.m"
              mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__conv0_Goal_2, hlds__goal_util__ConjList_12, hlds__goal_util__direct_subgoal_2_p_0_1, &hlds__goal_util__env);
            }
#line 1356 "goal_util.m"
          }
#line 1349 "goal_util.m"
        else
#line 1349 "goal_util.m"
          if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1358 "goal_util.m"
            {
#line 1358 "goal_util.m"
              MR_Word hlds__goal_util__DisjList_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1359 "goal_util.m"
              {
#line 1359 "goal_util.m"
                mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__conv1_Goal_2, hlds__goal_util__DisjList_14, hlds__goal_util__direct_subgoal_2_p_0_2, &hlds__goal_util__env);
              }
#line 1358 "goal_util.m"
            }
#line 1349 "goal_util.m"
          else
#line 1349 "goal_util.m"
            if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1351 "goal_util.m"
              {
#line 1351 "goal_util.m"
                MR_Word hlds__goal_util__If_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1351 "goal_util.m"
                MR_Word hlds__goal_util__Then_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1351 "goal_util.m"
                MR_Word hlds__goal_util__Else_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 4)));
#line 1351 "goal_util.m"
                MR_Word hlds__goal_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1352 "goal_util.m"
                *((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = hlds__goal_util__If_7;
#line 1352 "goal_util.m"
                {
#line 1352 "goal_util.m"
                  ((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
                }
#line 1353 "goal_util.m"
                *((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = hlds__goal_util__Then_8;
#line 1353 "goal_util.m"
                {
#line 1353 "goal_util.m"
                  ((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
                }
#line 1354 "goal_util.m"
                *((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = hlds__goal_util__Else_9;
#line 1354 "goal_util.m"
                {
#line 1354 "goal_util.m"
                  ((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
#line 1354 "goal_util.m"
                  return;
                }
#line 1351 "goal_util.m"
              }
#line 1349 "goal_util.m"
            else
#line 1349 "goal_util.m"
              if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1349 "goal_util.m"
                {
#line 1349 "goal_util.m"
                  MR_Word hlds__goal_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1349 "goal_util.m"
                  *((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1349 "goal_util.m"
                  {
#line 1349 "goal_util.m"
                    ((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
#line 1349 "goal_util.m"
                    return;
                  }
#line 1349 "goal_util.m"
                }
#line 1349 "goal_util.m"
              else
#line 1349 "goal_util.m"
                if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1360 "goal_util.m"
                  {
#line 1360 "goal_util.m"
                    MR_Word hlds__goal_util__CaseList_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1360 "goal_util.m"
                    MR_Word hlds__goal_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1360 "goal_util.m"
                    MR_Word hlds__goal_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));

#line 1361 "goal_util.m"
                    {
#line 1361 "goal_util.m"
                      mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, &(hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__conv2_Case_20, hlds__goal_util__CaseList_18, hlds__goal_util__direct_subgoal_2_p_0_4, &hlds__goal_util__env);
                    }
#line 1360 "goal_util.m"
                  }
#line 1349 "goal_util.m"
                else
#line 1349 "goal_util.m"
                  {
#line 1349 "goal_util.m"
                  }
#line 1349 "goal_util.m"
    }
#line 216 "goal_util.m"
  }
#line 216 "goal_util.m"
}

#line 1345 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_contains_goal_2_p_0_1(
#line 1345 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1345 "goal_util.m"
{
#line 1345 "goal_util.m"
  {
#line 1345 "goal_util.m"
    struct hlds__goal_util__goal_contains_goal_2_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__goal_contains_goal_2_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1347 "goal_util.m"
    {
#line 1347 "goal_util.m"
      hlds__goal_util__goal_contains_goal_2_p_0((hlds__goal_util__env_ptr)->hlds__goal_util__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7, (hlds__goal_util__env_ptr)->hlds__goal_util__goal_contains_goal_2_p_0_env_0__HeadVar__2_2, (hlds__goal_util__env_ptr)->hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont, (hlds__goal_util__env_ptr)->hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont_env_ptr);
#line 1347 "goal_util.m"
      return;
    }
#line 1345 "goal_util.m"
  }
#line 1345 "goal_util.m"
}

#line 211 "goal_util.m"
void MR_CALL 
hlds__goal_util__goal_contains_goal_2_p_0(
#line 211 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 211 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__2_2,
#line 211 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 211 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 211 "goal_util.m"
{
#line 211 "goal_util.m"
  {
#line 211 "goal_util.m"
    struct hlds__goal_util__goal_contains_goal_2_p_0_env_0_s hlds__goal_util__env;

#line 211 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__HeadVar__2_2 = hlds__goal_util__HeadVar__2_2;
#line 211 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont = hlds__goal_util__cont;
#line 211 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
#line 1344 "goal_util.m"
    {
#line 1344 "goal_util.m"
      MR_bool hlds__goal_util__succeeded;

#line 1344 "goal_util.m"
      *((hlds__goal_util__env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__HeadVar__2_2) = hlds__goal_util__HeadVar__1_1;
#line 1344 "goal_util.m"
      {
#line 1344 "goal_util.m"
        ((hlds__goal_util__env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont)((hlds__goal_util__env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont_env_ptr);
      }
#line 1345 "goal_util.m"
      {
#line 1345 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1345 "goal_util.m"
        MR_Word hlds__goal_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1346 "goal_util.m"
        {
#line 1346 "goal_util.m"
          hlds__goal_util__direct_subgoal_2_p_0(hlds__goal_util__GoalExpr_4, &(hlds__goal_util__env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7, hlds__goal_util__goal_contains_goal_2_p_0_1, &hlds__goal_util__env);
        }
#line 1345 "goal_util.m"
      }
#line 1344 "goal_util.m"
    }
#line 211 "goal_util.m"
  }
#line 211 "goal_util.m"
}

#line 205 "goal_util.m"
MR_bool MR_CALL 
hlds__goal_util__goal_contains_reconstruction_1_p_0(
#line 205 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1)
#line 205 "goal_util.m"
{
#line 1301 "goal_util.m"
  {
#line 1301 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1301 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1301 "goal_util.m"
    MR_Word hlds__goal_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1302 "goal_util.m"
    {
#line 1302 "goal_util.m"
      return hlds__goal_util__succeeded = hlds__goal_util__goal_expr_contains_reconstruction_1_p_0(hlds__goal_util__GoalExpr_2);
    }
#line 1301 "goal_util.m"
    return hlds__goal_util__succeeded;
#line 1301 "goal_util.m"
  }
#line 205 "goal_util.m"
}

#line 199 "goal_util.m"
MR_Word MR_CALL 
hlds__goal_util__goal_list_calls_proc_in_list_2_f_0(
#line 199 "goal_util.m"
  MR_Word hlds__goal_util__Goals_4,
#line 199 "goal_util.m"
  MR_Word hlds__goal_util__PredProcIds_5)
#line 199 "goal_util.m"
{
#line 1213 "goal_util.m"
  {
#line 1213 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1213 "goal_util.m"
    MR_Word hlds__goal_util__CalledPredProcIds_6;
#line 1213 "goal_util.m"
    MR_Word hlds__goal_util__TypeCtorInfo_9_9 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 1213 "goal_util.m"
    MR_Word hlds__goal_util__CalledSet_7;
#line 1213 "goal_util.m"
    MR_Word hlds__goal_util__V_8_8;

#line 1214 "goal_util.m"
    {
#line 1214 "goal_util.m"
      hlds__goal_util__V_8_8 = mercury__set__init_0_f_0(hlds__goal_util__TypeCtorInfo_9_9);
    }
#line 1214 "goal_util.m"
    {
#line 1214 "goal_util.m"
      hlds__goal_util__goal_list_calls_proc_in_list_2_4_p_0(hlds__goal_util__Goals_4, hlds__goal_util__PredProcIds_5, hlds__goal_util__V_8_8, &hlds__goal_util__CalledSet_7);
    }
#line 1215 "goal_util.m"
    {
#line 1215 "goal_util.m"
      mercury__set__to_sorted_list_2_p_0(hlds__goal_util__TypeCtorInfo_9_9, hlds__goal_util__CalledSet_7, &hlds__goal_util__CalledPredProcIds_6);
    }
#line 1213 "goal_util.m"
    return hlds__goal_util__CalledPredProcIds_6;
#line 1213 "goal_util.m"
  }
#line 199 "goal_util.m"
}

#line 191 "goal_util.m"
MR_Word MR_CALL 
hlds__goal_util__goal_calls_proc_in_list_2_f_0(
#line 191 "goal_util.m"
  MR_Word hlds__goal_util__Goal_4,
#line 191 "goal_util.m"
  MR_Word hlds__goal_util__PredProcIds_5)
#line 191 "goal_util.m"
{
#line 1209 "goal_util.m"
  {
#line 1209 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1209 "goal_util.m"
    MR_Word hlds__goal_util__CalledPredProcIds_6;
#line 1209 "goal_util.m"
    MR_Word hlds__goal_util__TypeCtorInfo_9_9 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 1209 "goal_util.m"
    MR_Word hlds__goal_util__CalledSet_7;
#line 1209 "goal_util.m"
    MR_Word hlds__goal_util__V_8_8;

#line 1210 "goal_util.m"
    {
#line 1210 "goal_util.m"
      hlds__goal_util__V_8_8 = mercury__set__init_0_f_0(hlds__goal_util__TypeCtorInfo_9_9);
    }
#line 1210 "goal_util.m"
    {
#line 1210 "goal_util.m"
      hlds__goal_util__goal_calls_proc_in_list_2_4_p_0(hlds__goal_util__Goal_4, hlds__goal_util__PredProcIds_5, hlds__goal_util__V_8_8, &hlds__goal_util__CalledSet_7);
    }
#line 1211 "goal_util.m"
    {
#line 1211 "goal_util.m"
      mercury__set__to_sorted_list_2_p_0(hlds__goal_util__TypeCtorInfo_9_9, hlds__goal_util__CalledSet_7, &hlds__goal_util__CalledPredProcIds_6);
    }
#line 1209 "goal_util.m"
    return hlds__goal_util__CalledPredProcIds_6;
#line 1209 "goal_util.m"
  }
#line 191 "goal_util.m"
}

#line 184 "goal_util.m"
void MR_CALL 
hlds__goal_util__goal_calls_pred_id_2_p_1(
#line 184 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 184 "goal_util.m"
  MR_Word * hlds__goal_util__PredId_5,
#line 184 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 184 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 184 "goal_util.m"
{
#line 1148 "goal_util.m"
  {
#line 1148 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1148 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1148 "goal_util.m"
    MR_Word hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1149 "goal_util.m"
    {
#line 1149 "goal_util.m"
      hlds__goal_util__goal_expr_calls_pred_id_2_p_1(hlds__goal_util__GoalExpr_3, hlds__goal_util__PredId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
#line 1149 "goal_util.m"
      return;
    }
#line 1148 "goal_util.m"
  }
#line 184 "goal_util.m"
}

#line 183 "goal_util.m"
MR_bool MR_CALL 
hlds__goal_util__goal_calls_pred_id_2_p_0(
#line 183 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 183 "goal_util.m"
  MR_Word hlds__goal_util__PredId_5)
#line 183 "goal_util.m"
{
#line 1148 "goal_util.m"
  {
#line 1148 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1148 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1148 "goal_util.m"
    MR_Word hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1149 "goal_util.m"
    {
#line 1149 "goal_util.m"
      return hlds__goal_util__succeeded = hlds__goal_util__goal_expr_calls_pred_id_2_p_0(hlds__goal_util__GoalExpr_3, hlds__goal_util__PredId_5);
    }
#line 1148 "goal_util.m"
    return hlds__goal_util__succeeded;
#line 1148 "goal_util.m"
  }
#line 183 "goal_util.m"
}

#line 176 "goal_util.m"
void MR_CALL 
hlds__goal_util__goal_calls_2_p_1(
#line 176 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 176 "goal_util.m"
  MR_Word * hlds__goal_util__PredProcId_5,
#line 176 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 176 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 176 "goal_util.m"
{
#line 1080 "goal_util.m"
  {
#line 1080 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1080 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1080 "goal_util.m"
    MR_Word hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1081 "goal_util.m"
    {
#line 1081 "goal_util.m"
      hlds__goal_util__goal_expr_calls_2_p_1(hlds__goal_util__GoalExpr_3, hlds__goal_util__PredProcId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
#line 1081 "goal_util.m"
      return;
    }
#line 1080 "goal_util.m"
  }
#line 176 "goal_util.m"
}

#line 175 "goal_util.m"
MR_bool MR_CALL 
hlds__goal_util__goal_calls_2_p_0(
#line 175 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 175 "goal_util.m"
  MR_Word hlds__goal_util__PredProcId_5)
#line 175 "goal_util.m"
{
#line 1080 "goal_util.m"
  {
#line 1080 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1080 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1080 "goal_util.m"
    MR_Word hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1081 "goal_util.m"
    {
#line 1081 "goal_util.m"
      return hlds__goal_util__succeeded = hlds__goal_util__goal_expr_calls_2_p_0(hlds__goal_util__GoalExpr_3, hlds__goal_util__PredProcId_5);
    }
#line 1080 "goal_util.m"
    return hlds__goal_util__succeeded;
#line 1080 "goal_util.m"
  }
#line 175 "goal_util.m"
}

#line 977 "goal_util.m"
static void MR_CALL 
hlds__goal_util__clause_list_size_2_p_0_1(
#line 977 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 977 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 977 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 977 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 977 "goal_util.m"
{
#line 977 "goal_util.m"
  {
#line 977 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 977 "goal_util.m"
    MR_Integer hlds__goal_util__conv0_Size_6;

#line 977 "goal_util.m"
    {
#line 977 "goal_util.m"
      hlds__goal_util__clause_size_increment_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Integer) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_Size_6);
    }
#line 977 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_Size_6));
#line 977 "goal_util.m"
  }
#line 977 "goal_util.m"
}

#line 170 "goal_util.m"
void MR_CALL 
hlds__goal_util__clause_list_size_2_p_0(
#line 170 "goal_util.m"
  MR_Word hlds__goal_util__Clauses_3,
#line 170 "goal_util.m"
  MR_Integer * hlds__goal_util__GoalSize_4)
#line 170 "goal_util.m"
{
#line 976 "goal_util.m"
  {
#line 976 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 976 "goal_util.m"
    MR_Integer hlds__goal_util__GoalSize0_5;
#line 977 "goal_util.m"
    MR_Box hlds__goal_util__conv1_GoalSize0_5;
#line 978 "goal_util.m"
    MR_Word hlds__goal_util__V_9_9;
#line 978 "goal_util.m"
    MR_Word hlds__goal_util__V_6_6;

#line 977 "goal_util.m"
    {
#line 977 "goal_util.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__goal_util_scalar_common_4[0], hlds__goal_util__Clauses_3, ((MR_Box) ((MR_Integer) 0)), &hlds__goal_util__conv1_GoalSize0_5);
    }
#line 977 "goal_util.m"
    hlds__goal_util__GoalSize0_5 = ((MR_Integer) hlds__goal_util__conv1_GoalSize0_5);
#line 978 "goal_util.m"
    hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__Clauses_3)) == (MR_mktag((MR_Integer) 1)));
#line 978 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 978 "goal_util.m"
      {
#line 978 "goal_util.m"
        hlds__goal_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Clauses_3, (MR_Integer) 0)));
#line 978 "goal_util.m"
        hlds__goal_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Clauses_3, (MR_Integer) 1)));
#line 978 "goal_util.m"
        hlds__goal_util__succeeded = (hlds__goal_util__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 978 "goal_util.m"
      }
#line 980 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 979 "goal_util.m"
      *hlds__goal_util__GoalSize_4 = hlds__goal_util__GoalSize0_5;
#line 980 "goal_util.m"
    else
#line 982 "goal_util.m"
      {
#line 982 "goal_util.m"
        *hlds__goal_util__GoalSize_4 = (hlds__goal_util__GoalSize0_5 + (MR_Integer) 1);
#line 982 "goal_util.m"
      }
#line 976 "goal_util.m"
  }
#line 170 "goal_util.m"
}

#line 166 "goal_util.m"
void MR_CALL 
hlds__goal_util__goals_size_2_p_0(
#line 166 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 166 "goal_util.m"
  MR_Integer * hlds__goal_util__HeadVar__2_2)
#line 166 "goal_util.m"
{
#line 970 "goal_util.m"
  {
#line 970 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 970 "goal_util.m"
    if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 970 "goal_util.m"
      *hlds__goal_util__HeadVar__2_2 = (MR_Integer) 0;
#line 970 "goal_util.m"
    else
#line 971 "goal_util.m"
      {
#line 971 "goal_util.m"
        MR_Word hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 971 "goal_util.m"
        MR_Word hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 971 "goal_util.m"
        MR_Integer hlds__goal_util__Size1_6;
#line 971 "goal_util.m"
        MR_Integer hlds__goal_util__Size2_7;
#line 971 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 0)));
#line 967 "goal_util.m"
        MR_Word hlds__goal_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 1)));

#line 968 "goal_util.m"
        {
#line 968 "goal_util.m"
          hlds__goal_util__goal_expr_size_2_p_0(hlds__goal_util__GoalExpr_9, &hlds__goal_util__Size1_6);
        }
#line 973 "goal_util.m"
        {
#line 973 "goal_util.m"
          hlds__goal_util__goals_size_2_p_0(hlds__goal_util__Goals_4, &hlds__goal_util__Size2_7);
        }
#line 974 "goal_util.m"
        *hlds__goal_util__HeadVar__2_2 = (hlds__goal_util__Size1_6 + hlds__goal_util__Size2_7);
#line 971 "goal_util.m"
      }
#line 970 "goal_util.m"
  }
#line 166 "goal_util.m"
}

#line 162 "goal_util.m"
void MR_CALL 
hlds__goal_util__goal_size_2_p_0(
#line 162 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 162 "goal_util.m"
  MR_Integer * hlds__goal_util__Size_5)
#line 162 "goal_util.m"
{
#line 967 "goal_util.m"
  {
#line 967 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 967 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 967 "goal_util.m"
    MR_Word hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 968 "goal_util.m"
    {
#line 968 "goal_util.m"
      hlds__goal_util__goal_expr_size_2_p_0(hlds__goal_util__GoalExpr_3, hlds__goal_util__Size_5);
#line 968 "goal_util.m"
      return;
    }
#line 967 "goal_util.m"
  }
#line 162 "goal_util.m"
}

#line 158 "goal_util.m"
MR_bool MR_CALL 
hlds__goal_util__goal_is_branched_1_p_0(
#line 158 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1)
#line 158 "goal_util.m"
{
#line 961 "goal_util.m"
  {
#line 961 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 961 "goal_util.m"
    if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 963 "goal_util.m"
      hlds__goal_util__succeeded = MR_TRUE;
#line 961 "goal_util.m"
    else
#line 961 "goal_util.m"
      if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 961 "goal_util.m"
        hlds__goal_util__succeeded = MR_TRUE;
#line 961 "goal_util.m"
      else
#line 961 "goal_util.m"
        if (((((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 962 "goal_util.m"
          hlds__goal_util__succeeded = MR_TRUE;
#line 961 "goal_util.m"
        else
#line 961 "goal_util.m"
          hlds__goal_util__succeeded = MR_FALSE;
#line 961 "goal_util.m"
    return hlds__goal_util__succeeded;
#line 961 "goal_util.m"
  }
#line 158 "goal_util.m"
}

#line 154 "goal_util.m"
MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_1_f_0(
#line 154 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1)
#line 154 "goal_util.m"
{
#line 858 "goal_util.m"
  while (MR_TRUE)
#line 858 "goal_util.m"
    {
#line 858 "goal_util.m"
      /* tailcall optimized into a loop */
#line 858 "goal_util.m"
      {
#line 858 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;
#line 858 "goal_util.m"
        MR_Word hlds__goal_util__IsLeaf_5;
#line 858 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 858 "goal_util.m"
        MR_Word hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 872 "goal_util.m"
        if (((MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) == (MR_mktag((MR_Integer) 0))))
#line 884 "goal_util.m"
          {
#line 884 "goal_util.m"
            MR_Word hlds__goal_util__SubGoal_51 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_3), (MR_Integer) 0);

#line 885 "goal_util.m"
            /* direct tailcall eliminated */
#line 885 "goal_util.m"
            {
#line 885 "goal_util.m"
              MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__SubGoal_51;

#line 885 "goal_util.m"
              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 885 "goal_util.m"
            }
#line 885 "goal_util.m"
            continue;
#line 884 "goal_util.m"
          }
#line 872 "goal_util.m"
        else
#line 872 "goal_util.m"
          if (((MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) == (MR_mktag((MR_Integer) 1))))
#line 860 "goal_util.m"
            {
#line 860 "goal_util.m"
              MR_Word hlds__goal_util__UnifyKind_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
#line 860 "goal_util.m"
              MR_Word hlds__goal_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)));
#line 860 "goal_util.m"
              MR_Word hlds__goal_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 860 "goal_util.m"
              MR_Word hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 860 "goal_util.m"
              MR_Word hlds__goal_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));

#line 864 "goal_util.m"
              if (((((MR_tag((MR_Word) hlds__goal_util__UnifyKind_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__UnifyKind_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 863 "goal_util.m"
                hlds__goal_util__IsLeaf_5 = (MR_Integer) 1;
#line 864 "goal_util.m"
              else
#line 870 "goal_util.m"
                hlds__goal_util__IsLeaf_5 = (MR_Integer) 0;
#line 860 "goal_util.m"
            }
#line 872 "goal_util.m"
          else
#line 872 "goal_util.m"
            if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 881 "goal_util.m"
              {
#line 881 "goal_util.m"
                MR_Word hlds__goal_util__Goals_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 879 "goal_util.m"
                MR_Word hlds__goal_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

#line 882 "goal_util.m"
                {
#line 882 "goal_util.m"
                  return hlds__goal_util__IsLeaf_5 = hlds__goal_util__proc_body_is_leaf_goals_1_f_0(hlds__goal_util__Goals_50);
                }
#line 881 "goal_util.m"
              }
#line 872 "goal_util.m"
            else
#line 872 "goal_util.m"
              if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 881 "goal_util.m"
                {
#line 881 "goal_util.m"
                  MR_Word hlds__goal_util__Goals_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

#line 882 "goal_util.m"
                  {
#line 882 "goal_util.m"
                    return hlds__goal_util__IsLeaf_5 = hlds__goal_util__proc_body_is_leaf_goals_1_f_0(hlds__goal_util__Goals_81);
                  }
#line 881 "goal_util.m"
                }
#line 872 "goal_util.m"
              else
#line 872 "goal_util.m"
                if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 902 "goal_util.m"
                  {
#line 902 "goal_util.m"
                    MR_Word hlds__goal_util__Cond_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 902 "goal_util.m"
                    MR_Word hlds__goal_util__Then_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
#line 902 "goal_util.m"
                    MR_Word hlds__goal_util__Else_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));
#line 902 "goal_util.m"
                    MR_Word hlds__goal_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 904 "goal_util.m"
                    MR_Word hlds__goal_util__V_77_77;
#line 904 "goal_util.m"
                    MR_Word hlds__goal_util__V_78_78;
#line 904 "goal_util.m"
                    MR_Word hlds__goal_util__V_79_79;

#line 904 "goal_util.m"
                    {
#line 904 "goal_util.m"
                      hlds__goal_util__V_77_77 = hlds__goal_util__proc_body_is_leaf_1_f_0(hlds__goal_util__Cond_59);
                    }
#line 904 "goal_util.m"
                    hlds__goal_util__succeeded = (hlds__goal_util__V_77_77 == (MR_Integer) 0);
#line 904 "goal_util.m"
                    if (hlds__goal_util__succeeded)
#line 904 "goal_util.m"
                      {
#line 905 "goal_util.m"
                        {
#line 905 "goal_util.m"
                          hlds__goal_util__V_78_78 = hlds__goal_util__proc_body_is_leaf_1_f_0(hlds__goal_util__Then_60);
                        }
#line 905 "goal_util.m"
                        hlds__goal_util__succeeded = (hlds__goal_util__V_78_78 == (MR_Integer) 0);
#line 904 "goal_util.m"
                        if (hlds__goal_util__succeeded)
#line 904 "goal_util.m"
                          {
#line 906 "goal_util.m"
                            {
#line 906 "goal_util.m"
                              hlds__goal_util__V_79_79 = hlds__goal_util__proc_body_is_leaf_1_f_0(hlds__goal_util__Else_61);
                            }
#line 906 "goal_util.m"
                            hlds__goal_util__succeeded = (hlds__goal_util__V_79_79 == (MR_Integer) 0);
#line 904 "goal_util.m"
                          }
#line 904 "goal_util.m"
                      }
#line 909 "goal_util.m"
                    if (hlds__goal_util__succeeded)
#line 908 "goal_util.m"
                      hlds__goal_util__IsLeaf_5 = (MR_Integer) 0;
#line 909 "goal_util.m"
                    else
#line 910 "goal_util.m"
                      hlds__goal_util__IsLeaf_5 = (MR_Integer) 1;
#line 902 "goal_util.m"
                  }
#line 872 "goal_util.m"
                else
#line 872 "goal_util.m"
                  if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 887 "goal_util.m"
                    {
#line 887 "goal_util.m"
                      MR_Word hlds__goal_util__Reason_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 887 "goal_util.m"
                      MR_Word hlds__goal_util__SubGoal_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 889 "goal_util.m"
                      MR_Word hlds__goal_util__FGT_54;
#line 889 "goal_util.m"
                      MR_Word hlds__goal_util__V_53_53;

#line 889 "goal_util.m"
                      hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_52, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 889 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 889 "goal_util.m"
                        {
#line 889 "goal_util.m"
                          hlds__goal_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_52, (MR_Integer) 1)));
#line 889 "goal_util.m"
                          hlds__goal_util__FGT_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_52, (MR_Integer) 2)));
#line 891 "goal_util.m"
                          if ((hlds__goal_util__FGT_54 == (MR_Integer) 1))
#line 890 "goal_util.m"
                            hlds__goal_util__succeeded = MR_TRUE;
#line 891 "goal_util.m"
                          else
#line 891 "goal_util.m"
                            if ((hlds__goal_util__FGT_54 == (MR_Integer) 2))
#line 891 "goal_util.m"
                              hlds__goal_util__succeeded = MR_TRUE;
#line 891 "goal_util.m"
                            else
#line 891 "goal_util.m"
                              hlds__goal_util__succeeded = MR_FALSE;
#line 889 "goal_util.m"
                        }
#line 895 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 894 "goal_util.m"
                        hlds__goal_util__IsLeaf_5 = (MR_Integer) 0;
#line 895 "goal_util.m"
                      else
#line 896 "goal_util.m"
                        {
#line 896 "goal_util.m"
                          /* direct tailcall eliminated */
#line 896 "goal_util.m"
                          {
#line 896 "goal_util.m"
                            MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__SubGoal_80;

#line 896 "goal_util.m"
                            hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 896 "goal_util.m"
                          }
#line 896 "goal_util.m"
                          continue;
#line 896 "goal_util.m"
                        }
#line 887 "goal_util.m"
                    }
#line 872 "goal_util.m"
                  else
#line 872 "goal_util.m"
                    if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 913 "goal_util.m"
                      {
#line 913 "goal_util.m"
                        MR_Word hlds__goal_util__ShortHand_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

#line 919 "goal_util.m"
                        if (((MR_tag((MR_Word) hlds__goal_util__ShortHand_62)) == (MR_mktag((MR_Integer) 0))))
#line 920 "goal_util.m"
                          {
#line 920 "goal_util.m"
                            MR_Word hlds__goal_util__GoalA_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_62, (MR_Integer) 0)));
#line 920 "goal_util.m"
                            MR_Word hlds__goal_util__GoalB_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_62, (MR_Integer) 1)));
#line 922 "goal_util.m"
                            MR_Word hlds__goal_util__V_75_75;
#line 922 "goal_util.m"
                            MR_Word hlds__goal_util__V_76_76;

#line 922 "goal_util.m"
                            {
#line 922 "goal_util.m"
                              hlds__goal_util__V_75_75 = hlds__goal_util__proc_body_is_leaf_1_f_0(hlds__goal_util__GoalA_73);
                            }
#line 922 "goal_util.m"
                            hlds__goal_util__succeeded = (hlds__goal_util__V_75_75 == (MR_Integer) 0);
#line 922 "goal_util.m"
                            if (hlds__goal_util__succeeded)
#line 922 "goal_util.m"
                              {
#line 923 "goal_util.m"
                                {
#line 923 "goal_util.m"
                                  hlds__goal_util__V_76_76 = hlds__goal_util__proc_body_is_leaf_1_f_0(hlds__goal_util__GoalB_74);
                                }
#line 923 "goal_util.m"
                                hlds__goal_util__succeeded = (hlds__goal_util__V_76_76 == (MR_Integer) 0);
#line 922 "goal_util.m"
                              }
#line 926 "goal_util.m"
                            if (hlds__goal_util__succeeded)
#line 925 "goal_util.m"
                              hlds__goal_util__IsLeaf_5 = (MR_Integer) 0;
#line 926 "goal_util.m"
                            else
#line 927 "goal_util.m"
                              hlds__goal_util__IsLeaf_5 = (MR_Integer) 1;
#line 920 "goal_util.m"
                          }
#line 919 "goal_util.m"
                        else
#line 918 "goal_util.m"
                          hlds__goal_util__IsLeaf_5 = (MR_Integer) 1;
#line 913 "goal_util.m"
                      }
#line 872 "goal_util.m"
                    else
#line 872 "goal_util.m"
                      if (((((MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 899 "goal_util.m"
                        {
#line 899 "goal_util.m"
                          MR_Word hlds__goal_util__Cases_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
#line 899 "goal_util.m"
                          MR_Word hlds__goal_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 899 "goal_util.m"
                          MR_Word hlds__goal_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));

#line 900 "goal_util.m"
                          {
#line 900 "goal_util.m"
                            return hlds__goal_util__IsLeaf_5 = hlds__goal_util__proc_body_is_leaf_cases_1_f_0(hlds__goal_util__Cases_57);
                          }
#line 899 "goal_util.m"
                        }
#line 872 "goal_util.m"
                      else
#line 877 "goal_util.m"
                        hlds__goal_util__IsLeaf_5 = (MR_Integer) 1;
#line 858 "goal_util.m"
        return hlds__goal_util__IsLeaf_5;
#line 858 "goal_util.m"
      }
#line 858 "goal_util.m"
      break;
#line 858 "goal_util.m"
    }
#line 154 "goal_util.m"
}

#line 837 "goal_util.m"
static void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_2(
#line 837 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 837 "goal_util.m"
{
#line 837 "goal_util.m"
  {
#line 837 "goal_util.m"
    struct hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 837 "goal_util.m"
    *((hlds__goal_util__env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__wrapper_arg_1) = ((MR_Box) ((hlds__goal_util__env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__conv1_HeadVar__3_32));
#line 837 "goal_util.m"
    {
#line 837 "goal_util.m"
      ((hlds__goal_util__env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__cont_env_ptr);
#line 837 "goal_util.m"
      return;
    }
#line 837 "goal_util.m"
  }
#line 837 "goal_util.m"
}

#line 837 "goal_util.m"
static void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3(
#line 837 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 837 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 837 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 837 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 837 "goal_util.m"
{
#line 837 "goal_util.m"
  {
#line 837 "goal_util.m"
    struct hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0_s hlds__goal_util__env;

#line 837 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__wrapper_arg_1 = hlds__goal_util__wrapper_arg_1;
#line 837 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__cont = hlds__goal_util__cont;
#line 837 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
#line 837 "goal_util.m"
    {
#line 837 "goal_util.m"
      MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;

#line 837 "goal_util.m"
      {
#line 837 "goal_util.m"
        hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__837__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 4))), &(hlds__goal_util__env).hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__conv1_HeadVar__3_32, hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_2, &hlds__goal_util__env);
      }
#line 837 "goal_util.m"
    }
#line 837 "goal_util.m"
  }
#line 837 "goal_util.m"
}

#line 826 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_1(
#line 826 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 826 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1)
#line 826 "goal_util.m"
{
#line 826 "goal_util.m"
  {
#line 826 "goal_util.m"
    MR_Box hlds__goal_util__wrapper_arg_2;
#line 826 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 826 "goal_util.m"
    MR_Word hlds__goal_util__conv0_HeadVar__3_29;

#line 826 "goal_util.m"
    {
#line 826 "goal_util.m"
      hlds__goal_util__conv0_HeadVar__3_29 = hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__826__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) hlds__goal_util__wrapper_arg_1));
    }
#line 826 "goal_util.m"
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__3_29));
#line 826 "goal_util.m"
    return hlds__goal_util__wrapper_arg_2;
#line 826 "goal_util.m"
  }
#line 826 "goal_util.m"
}

#line 145 "goal_util.m"
void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0(
#line 145 "goal_util.m"
  MR_Word hlds__goal_util__RttiVarMaps_6,
#line 145 "goal_util.m"
  MR_Word hlds__goal_util__VarTypes_7,
#line 145 "goal_util.m"
  MR_Word hlds__goal_util__ExistQVars_8,
#line 145 "goal_util.m"
  MR_Word hlds__goal_util__NonLocals_9,
#line 145 "goal_util.m"
  MR_Word * hlds__goal_util__NonLocalTypeInfos_10)
#line 145 "goal_util.m"
{
#line 813 "goal_util.m"
  {
#line 813 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 813 "goal_util.m"
    MR_Word hlds__goal_util__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 813 "goal_util.m"
    MR_Word hlds__goal_util__TypeInfo_39_39;
#line 813 "goal_util.m"
    MR_Word hlds__goal_util__TypeInfo_41_41;
#line 813 "goal_util.m"
    MR_Word hlds__goal_util__NonLocalsList_11;
#line 813 "goal_util.m"
    MR_Word hlds__goal_util__NonLocalsTypes_12;
#line 813 "goal_util.m"
    MR_Word hlds__goal_util__NonLocalTypeVarsList0_13;
#line 813 "goal_util.m"
    MR_Word hlds__goal_util__NonLocalTypeVarsList_14;
#line 813 "goal_util.m"
    MR_Word hlds__goal_util__NonLocalTypeVars_15;
#line 813 "goal_util.m"
    MR_Word hlds__goal_util__TypeVarToProgVar_16;
#line 813 "goal_util.m"
    MR_Word hlds__goal_util__NonLocalTypeInfoVars_20;
#line 813 "goal_util.m"
    MR_Word hlds__goal_util__NonLocalTypeClassInfoVarsList_26;
#line 813 "goal_util.m"
    MR_Word hlds__goal_util__NonLocalTypeClassInfoVars_27;
#line 813 "goal_util.m"
    MR_Word hlds__goal_util__V_30_30;
#line 813 "goal_util.m"
    MR_Word hlds__goal_util__V_31_31;

#line 817 "goal_util.m"
    {
#line 817 "goal_util.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__goal_util__TypeCtorInfo_38_38, hlds__goal_util__NonLocals_9, &hlds__goal_util__NonLocalsList_11);
    }
#line 818 "goal_util.m"
    {
#line 818 "goal_util.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(hlds__goal_util__VarTypes_7, hlds__goal_util__NonLocalsList_11, &hlds__goal_util__NonLocalsTypes_12);
    }
#line 819 "goal_util.m"
    {
#line 819 "goal_util.m"
      parse_tree__prog_type__type_vars_list_2_p_0(hlds__goal_util__NonLocalsTypes_12, &hlds__goal_util__NonLocalTypeVarsList0_13);
    }
#line 17549 "hlds.goal_util.c"
    hlds__goal_util__TypeInfo_39_39 = (MR_Word) &hlds__goal_util_scalar_common_1[1];
#line 820 "goal_util.m"
    {
#line 820 "goal_util.m"
      hlds__goal_util__NonLocalTypeVarsList_14 = mercury__list__f_43_43_2_f_0(hlds__goal_util__TypeInfo_39_39, hlds__goal_util__ExistQVars_8, hlds__goal_util__NonLocalTypeVarsList0_13);
    }
#line 821 "goal_util.m"
    {
#line 821 "goal_util.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__goal_util__NonLocalTypeVarsList_14, &hlds__goal_util__NonLocalTypeVars_15);
    }
#line 826 "goal_util.m"
    {
#line 826 "goal_util.m"
      hlds__goal_util__TypeVarToProgVar_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 826 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__TypeVarToProgVar_16, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_3[0]));
#line 826 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__TypeVarToProgVar_16, 1) = ((MR_Box) (hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_1));
#line 826 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__TypeVarToProgVar_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 826 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__TypeVarToProgVar_16, 3) = ((MR_Box) (hlds__goal_util__RttiVarMaps_6));
#line 826 "goal_util.m"
    }
#line 17575 "hlds.goal_util.c"
    hlds__goal_util__TypeInfo_41_41 = (MR_Word) &hlds__goal_util_scalar_common_1[0];
#line 830 "goal_util.m"
    {
#line 830 "goal_util.m"
      hlds__goal_util__V_30_30 = mercury__list__map_2_f_0(hlds__goal_util__TypeInfo_39_39, hlds__goal_util__TypeInfo_41_41, hlds__goal_util__TypeVarToProgVar_16, hlds__goal_util__NonLocalTypeVarsList_14);
    }
#line 830 "goal_util.m"
    {
#line 830 "goal_util.m"
      hlds__goal_util__NonLocalTypeInfoVars_20 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__goal_util__TypeCtorInfo_38_38, hlds__goal_util__V_30_30);
    }
#line 837 "goal_util.m"
    {
#line 837 "goal_util.m"
      hlds__goal_util__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 837 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_31_31, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_3[1]));
#line 837 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_31_31, 1) = ((MR_Box) (hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3));
#line 837 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 837 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_31_31, 3) = ((MR_Box) (hlds__goal_util__RttiVarMaps_6));
#line 837 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_31_31, 4) = ((MR_Box) (hlds__goal_util__NonLocalTypeVars_15));
#line 837 "goal_util.m"
    }
#line 837 "goal_util.m"
    {
#line 837 "goal_util.m"
      mercury__solutions__solutions_2_p_1(hlds__goal_util__TypeInfo_41_41, hlds__goal_util__V_31_31, &hlds__goal_util__NonLocalTypeClassInfoVarsList_26);
    }
#line 851 "goal_util.m"
    {
#line 851 "goal_util.m"
      parse_tree__set_of_var__sorted_list_to_set_2_p_0(hlds__goal_util__TypeCtorInfo_38_38, hlds__goal_util__NonLocalTypeClassInfoVarsList_26, &hlds__goal_util__NonLocalTypeClassInfoVars_27);
    }
#line 853 "goal_util.m"
    {
#line 853 "goal_util.m"
      *hlds__goal_util__NonLocalTypeInfos_10 = parse_tree__set_of_var__union_2_f_0(hlds__goal_util__TypeCtorInfo_38_38, hlds__goal_util__NonLocalTypeInfoVars_20, hlds__goal_util__NonLocalTypeClassInfoVars_27);
    }
#line 813 "goal_util.m"
  }
#line 145 "goal_util.m"
}

#line 124 "goal_util.m"
void MR_CALL 
hlds__goal_util__attach_features_to_all_goals_4_p_1(
#line 124 "goal_util.m"
  MR_Word hlds__goal_util__Features_5,
#line 124 "goal_util.m"
  MR_Word hlds__goal_util__InFromGroundTerm_6,
#line 124 "goal_util.m"
  MR_Word hlds__goal_util__Goal0_7,
#line 124 "goal_util.m"
  MR_Word * hlds__goal_util__Goal_8)
#line 124 "goal_util.m"
{
#line 693 "goal_util.m"
  {
#line 693 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 693 "goal_util.m"
    {
#line 693 "goal_util.m"
      hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__Goal0_7, hlds__goal_util__Goal_8);
#line 693 "goal_util.m"
      return;
    }
#line 693 "goal_util.m"
  }
#line 124 "goal_util.m"
}

#line 121 "goal_util.m"
void MR_CALL 
hlds__goal_util__attach_features_to_all_goals_4_p_0(
#line 121 "goal_util.m"
  MR_Word hlds__goal_util__Features_5,
#line 121 "goal_util.m"
  MR_Word hlds__goal_util__InFromGroundTerm_6,
#line 121 "goal_util.m"
  MR_Word hlds__goal_util__Goal0_7,
#line 121 "goal_util.m"
  MR_Word * hlds__goal_util__Goal_8)
#line 121 "goal_util.m"
{
#line 693 "goal_util.m"
  {
#line 693 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 693 "goal_util.m"
    {
#line 693 "goal_util.m"
      hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__Goal0_7, hlds__goal_util__Goal_8);
#line 693 "goal_util.m"
      return;
    }
#line 693 "goal_util.m"
  }
#line 121 "goal_util.m"
}

#line 110 "goal_util.m"
void MR_CALL 
hlds__goal_util__generic_call_vars_2_p_0(
#line 110 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 110 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__2_2)
#line 110 "goal_util.m"
{
#line 686 "goal_util.m"
  {
#line 686 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 686 "goal_util.m"
    if (((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 689 "goal_util.m"
      *hlds__goal_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 686 "goal_util.m"
    else
#line 686 "goal_util.m"
      if (((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 687 "goal_util.m"
        {
#line 687 "goal_util.m"
          MR_Word hlds__goal_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 687 "goal_util.m"
          MR_Integer hlds__goal_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 687 "goal_util.m"
          MR_Word hlds__goal_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 687 "goal_util.m"
          MR_Word hlds__goal_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));

#line 687 "goal_util.m"
          {
#line 687 "goal_util.m"
            MR_Word base;
#line 687 "goal_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 687 "goal_util.m"
            *hlds__goal_util__HeadVar__2_2 = base;
#line 687 "goal_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Var_8));
#line 687 "goal_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "goal_util.m"
          }
#line 687 "goal_util.m"
        }
#line 686 "goal_util.m"
      else
#line 686 "goal_util.m"
        if (((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 688 "goal_util.m"
          *hlds__goal_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 686 "goal_util.m"
        else
#line 686 "goal_util.m"
          {
#line 686 "goal_util.m"
            MR_Word hlds__goal_util__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 686 "goal_util.m"
            MR_Word hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 686 "goal_util.m"
            MR_Word hlds__goal_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 686 "goal_util.m"
            MR_Integer hlds__goal_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));

#line 686 "goal_util.m"
            {
#line 686 "goal_util.m"
              MR_Word base;
#line 686 "goal_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "goal_util.m"
              *hlds__goal_util__HeadVar__2_2 = base;
#line 686 "goal_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Var_3));
#line 686 "goal_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 686 "goal_util.m"
            }
#line 686 "goal_util.m"
          }
#line 686 "goal_util.m"
  }
#line 110 "goal_util.m"
}

#line 105 "goal_util.m"
void MR_CALL 
hlds__goal_util__goals_goal_vars_3_p_0(
#line 105 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 105 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_Set_0_2,
#line 105 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_3)
#line 105 "goal_util.m"
{
#line 658 "goal_util.m"
  while (MR_TRUE)
#line 658 "goal_util.m"
    {
#line 658 "goal_util.m"
      /* tailcall optimized into a loop */
#line 658 "goal_util.m"
      {
#line 658 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;

#line 658 "goal_util.m"
        if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 658 "goal_util.m"
          *hlds__goal_util__STATE_VARIABLE_Set_3 = hlds__goal_util__STATE_VARIABLE_Set_0_2;
#line 658 "goal_util.m"
        else
#line 659 "goal_util.m"
          {
#line 659 "goal_util.m"
            MR_Word hlds__goal_util__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 659 "goal_util.m"
            MR_Word hlds__goal_util__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 659 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_Set_12_12;

#line 660 "goal_util.m"
            {
#line 660 "goal_util.m"
              hlds__goal_util__goal_vars_2_3_p_0(hlds__goal_util__Goal_7, hlds__goal_util__STATE_VARIABLE_Set_0_2, &hlds__goal_util__STATE_VARIABLE_Set_12_12);
            }
#line 661 "goal_util.m"
            /* direct tailcall eliminated */
#line 661 "goal_util.m"
            {
#line 661 "goal_util.m"
              MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Goals_8;
#line 661 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_Set_0__tmp_copy_2 = hlds__goal_util__STATE_VARIABLE_Set_12_12;

#line 661 "goal_util.m"
              hlds__goal_util__STATE_VARIABLE_Set_0_2 = hlds__goal_util__STATE_VARIABLE_Set_0__tmp_copy_2;
#line 661 "goal_util.m"
              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 661 "goal_util.m"
            }
#line 661 "goal_util.m"
            continue;
#line 659 "goal_util.m"
          }
#line 658 "goal_util.m"
      }
#line 658 "goal_util.m"
      break;
#line 658 "goal_util.m"
    }
#line 105 "goal_util.m"
}

#line 100 "goal_util.m"
void MR_CALL 
hlds__goal_util__goal_vars_2_p_0(
#line 100 "goal_util.m"
  MR_Word hlds__goal_util__Goal_3,
#line 100 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_5)
#line 100 "goal_util.m"
{
#line 540 "goal_util.m"
  {
#line 540 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 540 "goal_util.m"
    MR_Word hlds__goal_util__STATE_VARIABLE_Set_6_6;

#line 541 "goal_util.m"
    {
#line 541 "goal_util.m"
      hlds__goal_util__STATE_VARIABLE_Set_6_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 542 "goal_util.m"
    {
#line 542 "goal_util.m"
      hlds__goal_util__goal_vars_2_3_p_0(hlds__goal_util__Goal_3, hlds__goal_util__STATE_VARIABLE_Set_6_6, hlds__goal_util__STATE_VARIABLE_Set_5);
#line 542 "goal_util.m"
      return;
    }
#line 540 "goal_util.m"
  }
#line 100 "goal_util.m"
}

#line 87 "goal_util.m"
void MR_CALL 
hlds__goal_util__clone_variables_9_p_0(
#line 87 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 87 "goal_util.m"
  MR_Word hlds__goal_util__OldVarNames_2,
#line 87 "goal_util.m"
  MR_Word hlds__goal_util__OldVarTypes_3,
#line 87 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0_4,
#line 87 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarSet_5,
#line 87 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0_6,
#line 87 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarTypes_7,
#line 87 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_Renaming_0_8,
#line 87 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Renaming_9)
#line 87 "goal_util.m"
{
#line 530 "goal_util.m"
  while (MR_TRUE)
#line 530 "goal_util.m"
    {
#line 530 "goal_util.m"
      /* tailcall optimized into a loop */
#line 530 "goal_util.m"
      {
#line 530 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;

#line 530 "goal_util.m"
        if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 530 "goal_util.m"
          {
#line 530 "goal_util.m"
            *hlds__goal_util__STATE_VARIABLE_Renaming_9 = hlds__goal_util__STATE_VARIABLE_Renaming_0_8;
#line 530 "goal_util.m"
            *hlds__goal_util__STATE_VARIABLE_VarTypes_7 = hlds__goal_util__STATE_VARIABLE_VarTypes_0_6;
#line 530 "goal_util.m"
            *hlds__goal_util__STATE_VARIABLE_VarSet_5 = hlds__goal_util__STATE_VARIABLE_VarSet_0_4;
#line 530 "goal_util.m"
          }
#line 530 "goal_util.m"
        else
#line 532 "goal_util.m"
          {
#line 532 "goal_util.m"
            MR_Word hlds__goal_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 532 "goal_util.m"
            MR_Word hlds__goal_util__Vars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 532 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_35_35;
#line 532 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_36_36;
#line 532 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_Renaming_37_37;
#line 533 "goal_util.m"
            MR_Word hlds__goal_util___CloneVar_28;

#line 533 "goal_util.m"
            {
#line 533 "goal_util.m"
              hlds__goal_util__clone_variable_10_p_0(hlds__goal_util__Var_21, hlds__goal_util__OldVarNames_2, hlds__goal_util__OldVarTypes_3, hlds__goal_util__STATE_VARIABLE_VarSet_0_4, &hlds__goal_util__STATE_VARIABLE_VarSet_35_35, hlds__goal_util__STATE_VARIABLE_VarTypes_0_6, &hlds__goal_util__STATE_VARIABLE_VarTypes_36_36, hlds__goal_util__STATE_VARIABLE_Renaming_0_8, &hlds__goal_util__STATE_VARIABLE_Renaming_37_37, &hlds__goal_util___CloneVar_28);
            }
#line 535 "goal_util.m"
            /* direct tailcall eliminated */
#line 535 "goal_util.m"
            {
#line 535 "goal_util.m"
              MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Vars_22;
#line 535 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0__tmp_copy_4 = hlds__goal_util__STATE_VARIABLE_VarSet_35_35;
#line 535 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0__tmp_copy_6 = hlds__goal_util__STATE_VARIABLE_VarTypes_36_36;
#line 535 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_Renaming_0__tmp_copy_8 = hlds__goal_util__STATE_VARIABLE_Renaming_37_37;

#line 535 "goal_util.m"
              hlds__goal_util__STATE_VARIABLE_Renaming_0_8 = hlds__goal_util__STATE_VARIABLE_Renaming_0__tmp_copy_8;
#line 535 "goal_util.m"
              hlds__goal_util__STATE_VARIABLE_VarTypes_0_6 = hlds__goal_util__STATE_VARIABLE_VarTypes_0__tmp_copy_6;
#line 535 "goal_util.m"
              hlds__goal_util__STATE_VARIABLE_VarSet_0_4 = hlds__goal_util__STATE_VARIABLE_VarSet_0__tmp_copy_4;
#line 535 "goal_util.m"
              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 535 "goal_util.m"
            }
#line 535 "goal_util.m"
            continue;
#line 532 "goal_util.m"
          }
#line 530 "goal_util.m"
      }
#line 530 "goal_util.m"
      break;
#line 530 "goal_util.m"
    }
#line 87 "goal_util.m"
}

#line 75 "goal_util.m"
void MR_CALL 
hlds__goal_util__clone_variable_10_p_0(
#line 75 "goal_util.m"
  MR_Word hlds__goal_util__Var_11,
#line 75 "goal_util.m"
  MR_Word hlds__goal_util__OldVarNames_12,
#line 75 "goal_util.m"
  MR_Word hlds__goal_util__OldVarTypes_13,
#line 75 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0_21,
#line 75 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarSet_22,
#line 75 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0_23,
#line 75 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarTypes_24,
#line 75 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_Renaming_0_25,
#line 75 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Renaming_26,
#line 75 "goal_util.m"
  MR_Word * hlds__goal_util__CloneVar_17)
#line 75 "goal_util.m"
{
#line 513 "goal_util.m"
  {
#line 513 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 513 "goal_util.m"
    MR_Word hlds__goal_util__CloneVarPrime_18;
#line 511 "goal_util.m"
    MR_Word hlds__goal_util__TypeInfo_31_31 = (MR_Word) &hlds__goal_util_scalar_common_1[0];
#line 511 "goal_util.m"
    MR_Box hlds__goal_util__conv0_CloneVarPrime_18;

#line 511 "goal_util.m"
    {
#line 511 "goal_util.m"
      hlds__goal_util__succeeded = mercury__map__search_3_p_0(hlds__goal_util__TypeInfo_31_31, hlds__goal_util__TypeInfo_31_31, hlds__goal_util__STATE_VARIABLE_Renaming_0_25, ((MR_Box) (hlds__goal_util__Var_11)), &hlds__goal_util__conv0_CloneVarPrime_18);
    }
#line 511 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 511 "goal_util.m"
      {
#line 511 "goal_util.m"
        hlds__goal_util__CloneVarPrime_18 = ((MR_Word) hlds__goal_util__conv0_CloneVarPrime_18);
#line 511 "goal_util.m"
        hlds__goal_util__succeeded = MR_TRUE;
#line 511 "goal_util.m"
      }
#line 513 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 512 "goal_util.m"
      {
#line 512 "goal_util.m"
        *hlds__goal_util__CloneVar_17 = hlds__goal_util__CloneVarPrime_18;
#line 512 "goal_util.m"
        *hlds__goal_util__STATE_VARIABLE_Renaming_26 = hlds__goal_util__STATE_VARIABLE_Renaming_0_25;
#line 512 "goal_util.m"
        *hlds__goal_util__STATE_VARIABLE_VarTypes_24 = hlds__goal_util__STATE_VARIABLE_VarTypes_0_23;
#line 512 "goal_util.m"
        *hlds__goal_util__STATE_VARIABLE_VarSet_22 = hlds__goal_util__STATE_VARIABLE_VarSet_0_21;
#line 512 "goal_util.m"
      }
#line 513 "goal_util.m"
    else
#line 514 "goal_util.m"
      {
#line 514 "goal_util.m"
        MR_Word hlds__goal_util__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 514 "goal_util.m"
        MR_Word hlds__goal_util__TypeInfo_33_33;
#line 514 "goal_util.m"
        MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_27_27;
#line 517 "goal_util.m"
        MR_String hlds__goal_util__Name_19;
#line 523 "goal_util.m"
        MR_Word hlds__goal_util__VarType_20;

#line 514 "goal_util.m"
        {
#line 514 "goal_util.m"
          mercury__varset__new_var_3_p_0(hlds__goal_util__TypeCtorInfo_32_32, hlds__goal_util__CloneVar_17, hlds__goal_util__STATE_VARIABLE_VarSet_0_21, &hlds__goal_util__STATE_VARIABLE_VarSet_27_27);
        }
#line 515 "goal_util.m"
        {
#line 515 "goal_util.m"
          hlds__goal_util__succeeded = mercury__varset__search_name_3_p_0(hlds__goal_util__TypeCtorInfo_32_32, hlds__goal_util__OldVarNames_12, hlds__goal_util__Var_11, &hlds__goal_util__Name_19);
        }
#line 517 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 516 "goal_util.m"
          {
#line 516 "goal_util.m"
            mercury__varset__name_var_4_p_0(hlds__goal_util__TypeCtorInfo_32_32, *hlds__goal_util__CloneVar_17, hlds__goal_util__Name_19, hlds__goal_util__STATE_VARIABLE_VarSet_27_27, hlds__goal_util__STATE_VARIABLE_VarSet_22);
          }
#line 517 "goal_util.m"
        else
#line 516 "goal_util.m"
          *hlds__goal_util__STATE_VARIABLE_VarSet_22 = hlds__goal_util__STATE_VARIABLE_VarSet_27_27;
#line 18080 "hlds.goal_util.c"
        hlds__goal_util__TypeInfo_33_33 = (MR_Word) &hlds__goal_util_scalar_common_1[0];
#line 520 "goal_util.m"
        {
#line 520 "goal_util.m"
          mercury__map__det_insert_4_p_0(hlds__goal_util__TypeInfo_33_33, hlds__goal_util__TypeInfo_33_33, ((MR_Box) (hlds__goal_util__Var_11)), ((MR_Box) (*hlds__goal_util__CloneVar_17)), hlds__goal_util__STATE_VARIABLE_Renaming_0_25, hlds__goal_util__STATE_VARIABLE_Renaming_26);
        }
#line 521 "goal_util.m"
        {
#line 521 "goal_util.m"
          hlds__goal_util__succeeded = parse_tree__prog_data__search_var_type_3_p_0(hlds__goal_util__OldVarTypes_13, hlds__goal_util__Var_11, &hlds__goal_util__VarType_20);
        }
#line 523 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 522 "goal_util.m"
          {
#line 522 "goal_util.m"
            parse_tree__prog_data__add_var_type_4_p_0(*hlds__goal_util__CloneVar_17, hlds__goal_util__VarType_20, hlds__goal_util__STATE_VARIABLE_VarTypes_0_23, hlds__goal_util__STATE_VARIABLE_VarTypes_24);
#line 522 "goal_util.m"
            return;
          }
#line 523 "goal_util.m"
        else
#line 522 "goal_util.m"
          *hlds__goal_util__STATE_VARIABLE_VarTypes_24 = hlds__goal_util__STATE_VARIABLE_VarTypes_0_23;
#line 514 "goal_util.m"
      }
#line 513 "goal_util.m"
  }
#line 75 "goal_util.m"
}

#line 57 "goal_util.m"
void MR_CALL 
hlds__goal_util__create_renaming_9_p_0(
#line 57 "goal_util.m"
  MR_Word hlds__goal_util__OrigVars_10,
#line 57 "goal_util.m"
  MR_Word hlds__goal_util__InstMapDelta_11,
#line 57 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0_19,
#line 57 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarSet_20,
#line 57 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0_21,
#line 57 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarTypes_22,
#line 57 "goal_util.m"
  MR_Word * hlds__goal_util__Unifies_14,
#line 57 "goal_util.m"
  MR_Word * hlds__goal_util__NewVars_15,
#line 57 "goal_util.m"
  MR_Word * hlds__goal_util__Renaming_16)
#line 57 "goal_util.m"
{
#line 468 "goal_util.m"
  {
#line 468 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 468 "goal_util.m"
    MR_Word hlds__goal_util__TypeInfo_28_28 = (MR_Word) &hlds__goal_util_scalar_common_1[0];
#line 468 "goal_util.m"
    MR_Word hlds__goal_util__RevUnifies_17;
#line 468 "goal_util.m"
    MR_Word hlds__goal_util__RevNewVars_18;
#line 468 "goal_util.m"
    MR_Word hlds__goal_util__V_27_27;

#line 469 "goal_util.m"
    {
#line 469 "goal_util.m"
      hlds__goal_util__V_27_27 = mercury__map__init_0_f_0(hlds__goal_util__TypeInfo_28_28, hlds__goal_util__TypeInfo_28_28);
    }
#line 469 "goal_util.m"
    {
#line 469 "goal_util.m"
      hlds__goal_util__create_renaming_2_12_p_0(hlds__goal_util__OrigVars_10, hlds__goal_util__InstMapDelta_11, hlds__goal_util__STATE_VARIABLE_VarSet_0_19, hlds__goal_util__STATE_VARIABLE_VarSet_20, hlds__goal_util__STATE_VARIABLE_VarTypes_0_21, hlds__goal_util__STATE_VARIABLE_VarTypes_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__goal_util__RevUnifies_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__goal_util__RevNewVars_18, hlds__goal_util__V_27_27, hlds__goal_util__Renaming_16);
    }
#line 471 "goal_util.m"
    {
#line 471 "goal_util.m"
      mercury__list__reverse_2_p_0(hlds__goal_util__TypeInfo_28_28, hlds__goal_util__RevNewVars_18, hlds__goal_util__NewVars_15);
    }
#line 472 "goal_util.m"
    {
#line 472 "goal_util.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__goal_util__RevUnifies_17, hlds__goal_util__Unifies_14);
#line 472 "goal_util.m"
      return;
    }
#line 468 "goal_util.m"
  }
#line 57 "goal_util.m"
}

#line 43 "goal_util.m"
void MR_CALL 
hlds__goal_util__update_instmap_3_p_0(
#line 43 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 43 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_InstMap_0_8,
#line 43 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_InstMap_9)
#line 43 "goal_util.m"
{
#line 461 "goal_util.m"
  {
#line 461 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 461 "goal_util.m"
    MR_Word hlds__goal_util__GoalInfo0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 461 "goal_util.m"
    MR_Word hlds__goal_util__DeltaInstMap_7;
#line 461 "goal_util.m"
    MR_Word hlds__goal_util___GoalExpr0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));

#line 462 "goal_util.m"
    {
#line 462 "goal_util.m"
      hlds__goal_util__DeltaInstMap_7 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__GoalInfo0_5);
    }
#line 463 "goal_util.m"
    {
#line 463 "goal_util.m"
      hlds__instmap__apply_instmap_delta_3_p_0(hlds__goal_util__STATE_VARIABLE_InstMap_0_8, hlds__goal_util__DeltaInstMap_7, hlds__goal_util__STATE_VARIABLE_InstMap_9);
#line 463 "goal_util.m"
      return;
    }
#line 461 "goal_util.m"
  }
#line 43 "goal_util.m"
}

void mercury__hlds__goal_util__init(void)
{
}

void mercury__hlds__goal_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__goal_util__hlds__goal_util__type_ctor_info_attach_in_from_ground_term_0);
	MR_register_type_ctor_info(&hlds__goal_util__hlds__goal_util__type_ctor_info_goal_is_atomic_0);
	MR_register_type_ctor_info(&hlds__goal_util__hlds__goal_util__type_ctor_info_is_leaf_0);
	MR_register_type_ctor_info(&hlds__goal_util__hlds__goal_util__type_ctor_info_maybe_transformed_goal_0);
}

void mercury__hlds__goal_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.goal_util. */
