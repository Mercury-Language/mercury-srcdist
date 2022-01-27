/*
** Automatically generated from `goal_util.m'
** by the Mercury compiler,
** version DEV
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


/* :- module hlds.goal_util. */
/* :- implementation. */

/*
INIT mercury__hlds__goal_util__init
ENDINIT
*/

#include "hlds.goal_util.mih"


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
#include "check_hlds.inst_util.mih"
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
#include "int.mih"
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
#include "solutions.mih"
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
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1874 "goal_util.m"
struct hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0_s {
#line 1874 "goal_util.m"
  MR_Tuple * hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__LambdaHeadVar__1_14;
#line 1874 "goal_util.m"
  MR_Cont hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__cont;
#line 1874 "goal_util.m"
  void * hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__cont_env_ptr;
#line 1874 "goal_util.m"
  MR_bool hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__succeeded;
#line 1874 "goal_util.m"
  MR_Word hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__SubGoal_7;
#line 1874 "goal_util.m"
  MR_Word hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__V_15_15;
#line 1874 "goal_util.m"
  MR_Word hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__PredId_16;
#line 1874 "goal_util.m"
  MR_Word hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__Args_17;
#line 1874 "goal_util.m"
};

#line 845 "goal_util.m"
struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0_s {
#line 845 "goal_util.m"
  MR_Word hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__RttiVarMaps_6;
#line 845 "goal_util.m"
  MR_Word hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__NonLocalTypeVars_15;
#line 845 "goal_util.m"
  MR_Word * hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__LambdaHeadVar__1_32;
#line 845 "goal_util.m"
  MR_Cont hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__cont;
#line 845 "goal_util.m"
  void * hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__cont_env_ptr;
#line 845 "goal_util.m"
  MR_bool hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__succeeded;
#line 845 "goal_util.m"
  MR_Word hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__TypeCtorInfo_43_43;
#line 845 "goal_util.m"
  MR_Word hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__Constraint_23;
#line 845 "goal_util.m"
  MR_Word hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__ArgTypes_25;
#line 845 "goal_util.m"
  MR_Word hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__TypeVar_34;
#line 850 "goal_util.m"
  MR_Box hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__conv0_Constraint_23;
#line 845 "goal_util.m"
};

#line 1881 "goal_util.m"
struct hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0_s {
#line 1881 "goal_util.m"
  MR_Box * hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__wrapper_arg_1;
#line 1881 "goal_util.m"
  MR_Cont hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__cont;
#line 1881 "goal_util.m"
  void * hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__cont_env_ptr;
#line 1881 "goal_util.m"
  MR_Word hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__conv0_PredProcId_5;
#line 1881 "goal_util.m"
};

#line 1870 "goal_util.m"
struct hlds__goal_util__predids_from_goals_2_p_0_2_env_0_s {
#line 1870 "goal_util.m"
  MR_Box * hlds__goal_util__predids_from_goals_2_p_0_2_env_0__wrapper_arg_1;
#line 1870 "goal_util.m"
  MR_Cont hlds__goal_util__predids_from_goals_2_p_0_2_env_0__cont;
#line 1870 "goal_util.m"
  void * hlds__goal_util__predids_from_goals_2_p_0_2_env_0__cont_env_ptr;
#line 1870 "goal_util.m"
  MR_Word hlds__goal_util__predids_from_goals_2_p_0_2_env_0__conv0_PredId_5;
#line 1870 "goal_util.m"
};

#line 1874 "goal_util.m"
struct hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0_s {
#line 1874 "goal_util.m"
  MR_Box * hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__wrapper_arg_1;
#line 1874 "goal_util.m"
  MR_Cont hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__cont;
#line 1874 "goal_util.m"
  void * hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__cont_env_ptr;
#line 1874 "goal_util.m"
  MR_Tuple hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__conv0_LambdaHeadVar__1_14;
#line 1874 "goal_util.m"
};

#line 1870 "goal_util.m"
struct hlds__goal_util__predids_from_goal_2_p_0_2_env_0_s {
#line 1870 "goal_util.m"
  MR_Box * hlds__goal_util__predids_from_goal_2_p_0_2_env_0__wrapper_arg_1;
#line 1870 "goal_util.m"
  MR_Cont hlds__goal_util__predids_from_goal_2_p_0_2_env_0__cont;
#line 1870 "goal_util.m"
  void * hlds__goal_util__predids_from_goal_2_p_0_2_env_0__cont_env_ptr;
#line 1870 "goal_util.m"
  MR_Word hlds__goal_util__predids_from_goal_2_p_0_2_env_0__conv0_PredId_5;
#line 1870 "goal_util.m"
};

#line 217 "goal_util.m"
struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s {
#line 217 "goal_util.m"
  MR_Word * hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2;
#line 217 "goal_util.m"
  MR_Cont hlds__goal_util__direct_subgoal_2_p_0_env_0__cont;
#line 217 "goal_util.m"
  void * hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr;
#line 1468 "goal_util.m"
  MR_Box hlds__goal_util__direct_subgoal_2_p_0_env_0__conv0_Goal_2;
#line 1470 "goal_util.m"
  MR_Box hlds__goal_util__direct_subgoal_2_p_0_env_0__conv1_Goal_2;
#line 1471 "goal_util.m"
  MR_Word hlds__goal_util__direct_subgoal_2_p_0_env_0__Case_20;
#line 1472 "goal_util.m"
  MR_Box hlds__goal_util__direct_subgoal_2_p_0_env_0__conv2_Case_20;
#line 217 "goal_util.m"
};

#line 212 "goal_util.m"
struct hlds__goal_util__goal_contains_goal_2_p_0_env_0_s {
#line 212 "goal_util.m"
  MR_Word * hlds__goal_util__goal_contains_goal_2_p_0_env_0__HeadVar__2_2;
#line 212 "goal_util.m"
  MR_Cont hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont;
#line 212 "goal_util.m"
  void * hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont_env_ptr;
#line 1456 "goal_util.m"
  MR_Word hlds__goal_util__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7;
#line 212 "goal_util.m"
};

#line 845 "goal_util.m"
struct hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0_s {
#line 845 "goal_util.m"
  MR_Box * hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__wrapper_arg_1;
#line 845 "goal_util.m"
  MR_Cont hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__cont;
#line 845 "goal_util.m"
  void * hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__cont_env_ptr;
#line 845 "goal_util.m"
  MR_Word hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__conv1_LambdaHeadVar__1_32;
#line 845 "goal_util.m"
};


#line 293 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 296 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 299 "hlds.goal_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 302 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 305 "hlds.goal_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 308 "hlds.goal_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__goal_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 311 "hlds.goal_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 hlds__goal_util____vpti_tuple_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 314 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 317 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__goal_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 320 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 323 "hlds.goal_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 hlds__goal_util____vpti_pred_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 326 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_0;

#line 329 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_1;

#line 332 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_value_ordered_attach_in_from_ground_term_0[2];

#line 335 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_attach_in_from_ground_term_0[2];

#line 338 "hlds.goal_util.c"
static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_attach_in_from_ground_term_0[2];

#line 341 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_0;

#line 344 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_1;

#line 347 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_value_ordered_goal_is_atomic_0[2];

#line 350 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_goal_is_atomic_0[2];

#line 353 "hlds.goal_util.c"
static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_goal_is_atomic_0[2];

#line 356 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_0;

#line 359 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_1;

#line 362 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_value_ordered_is_leaf_0[2];

#line 365 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_is_leaf_0[2];

#line 368 "hlds.goal_util.c"
static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_is_leaf_0[2];

#line 371 "hlds.goal_util.c"
static const MR_PseudoTypeInfo hlds__goal_util__hlds__goal_util__field_types_maybe_transformed_goal_0_0[1];

#line 374 "hlds.goal_util.c"
static const MR_DuFunctorDesc hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_0;

#line 377 "hlds.goal_util.c"
static const MR_PseudoTypeInfo hlds__goal_util__hlds__goal_util__field_types_maybe_transformed_goal_0_1[1];

#line 380 "hlds.goal_util.c"
static const MR_DuFunctorDesc hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_1;

#line 383 "hlds.goal_util.c"
static const MR_DuFunctorDesc hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_2;

#line 386 "hlds.goal_util.c"
static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_0[1];

#line 389 "hlds.goal_util.c"
static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_1[1];

#line 392 "hlds.goal_util.c"
static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_2[1];

#line 395 "hlds.goal_util.c"
static const MR_DuPtagLayout hlds__goal_util__hlds__goal_util__du_ptag_ordered_maybe_transformed_goal_0[3];

#line 398 "hlds.goal_util.c"
static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_name_ordered_maybe_transformed_goal_0[3];

#line 401 "hlds.goal_util.c"
static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_maybe_transformed_goal_0[3];

#line 404 "hlds.goal_util.c"
static MR_bool MR_CALL 
hlds__goal_util____Unify____attach_in_from_ground_term_0_0_10001(
#line 407 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 409 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2);

#line 412 "hlds.goal_util.c"
static void MR_CALL 
hlds__goal_util____Compare____attach_in_from_ground_term_0_0_10001(
#line 415 "hlds.goal_util.c"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 417 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 419 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_3);

#line 422 "hlds.goal_util.c"
static MR_bool MR_CALL 
hlds__goal_util____Unify____goal_is_atomic_0_0_10001(
#line 425 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 427 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2);

#line 430 "hlds.goal_util.c"
static void MR_CALL 
hlds__goal_util____Compare____goal_is_atomic_0_0_10001(
#line 433 "hlds.goal_util.c"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 435 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 437 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_3);

#line 440 "hlds.goal_util.c"
static MR_bool MR_CALL 
hlds__goal_util____Unify____is_leaf_0_0_10001(
#line 443 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 445 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2);

#line 448 "hlds.goal_util.c"
static void MR_CALL 
hlds__goal_util____Compare____is_leaf_0_0_10001(
#line 451 "hlds.goal_util.c"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 453 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 455 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_3);

#line 458 "hlds.goal_util.c"
static MR_bool MR_CALL 
hlds__goal_util____Unify____maybe_transformed_goal_0_0_10001(
#line 461 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 463 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2);

#line 466 "hlds.goal_util.c"
static void MR_CALL 
hlds__goal_util____Compare____maybe_transformed_goal_0_0_10001(
#line 469 "hlds.goal_util.c"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 471 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 473 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_3);

#line 705 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_p_1_1(
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 705 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 740 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_p_1(
#line 740 "goal_util.m"
  MR_Word hlds__goal_util__Features_5,
#line 740 "goal_util.m"
  MR_Word hlds__goal_util__GoalExpr0_7,
#line 740 "goal_util.m"
  MR_Word * hlds__goal_util__GoalExpr_8);

#line 705 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_p_0_1(
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 705 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 738 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_p_0(
#line 738 "goal_util.m"
  MR_Word hlds__goal_util__Features_5,
#line 738 "goal_util.m"
  MR_Word hlds__goal_util__GoalExpr0_7,
#line 738 "goal_util.m"
  MR_Word * hlds__goal_util__GoalExpr_8);

#line 705 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1_1(
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 705 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 725 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(
#line 725 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 725 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3,
#line 725 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__4_4);

#line 705 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0_1(
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 705 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 723 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(
#line 723 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 723 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3,
#line 723 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__4_4);

#line 705 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1(
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 705 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 712 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(
#line 712 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 712 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3,
#line 712 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__4_4);

#line 705 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1(
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 705 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 710 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(
#line 710 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 710 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3,
#line 710 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__4_4);

#line 705 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1(
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 705 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 705 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1(
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 705 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 2378 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2378__1_3_p_0(
#line 2378 "goal_util.m"
  MR_Word hlds__goal_util__TransformP_4,
#line 2378 "goal_util.m"
  MR_Word hlds__goal_util__LambdaHeadVar__1_61,
#line 2378 "goal_util.m"
  MR_Word * hlds__goal_util__LambdaHeadVar__2_62);

#line 2197 "goal_util.m"
static MR_Word MR_CALL 
hlds__goal_util__IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap__2197__1_1_f_0(
#line 2197 "goal_util.m"
  MR_Word hlds__goal_util__LambdaHeadVar__1_107);

#line 1832 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_foreign_proc__1832__1_2_p_0(
#line 1832 "goal_util.m"
  MR_Word hlds__goal_util__Purity_22,
#line 1832 "goal_util.m"
  MR_Word hlds__goal_util__PredPurity_45);

#line 1799 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_simple_call__1799__1_2_p_0(
#line 1799 "goal_util.m"
  MR_Word hlds__goal_util__Purity_18,
#line 1799 "goal_util.m"
  MR_Word hlds__goal_util__PredPurity_36);

#line 1505 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1505__1_2_p_0(
#line 1505 "goal_util.m"
  MR_Word hlds__goal_util__LambdaHeadVar__1_64,
#line 1505 "goal_util.m"
  MR_Word * hlds__goal_util__LambdaHeadVar__2_65);

#line 1874 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_1(
#line 1874 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1874 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0(
#line 1874 "goal_util.m"
  MR_Word hlds__goal_util__Goal_3,
#line 1874 "goal_util.m"
  MR_Tuple * hlds__goal_util__LambdaHeadVar__1_14,
#line 1874 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1874 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 850 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_2(
#line 850 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 845 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_3(
#line 845 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 845 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_1(
#line 845 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 845 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0(
#line 845 "goal_util.m"
  MR_Word hlds__goal_util__RttiVarMaps_6,
#line 845 "goal_util.m"
  MR_Word hlds__goal_util__NonLocalTypeVars_15,
#line 845 "goal_util.m"
  MR_Word * hlds__goal_util__LambdaHeadVar__1_32,
#line 845 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 845 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 834 "goal_util.m"
static MR_Word MR_CALL 
hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__834__1_2_f_0(
#line 834 "goal_util.m"
  MR_Word hlds__goal_util__RttiVarMaps_6,
#line 834 "goal_util.m"
  MR_Word hlds__goal_util__LambdaHeadVar__1_28);

#line 2353 "goal_util.m"
static void MR_CALL 
hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_p_0(
#line 2353 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 2353 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__2_2);

#line 1994 "goal_util.m"
static MR_Word MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_case_1_f_0(
#line 1994 "goal_util.m"
  MR_Word hlds__goal_util__Case0_3);

#line 1560 "goal_util.m"
static void MR_CALL 
hlds__goal_util__flatten_disj_acc_3_p_0_1(
#line 1560 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1560 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1560 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 1560 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 1555 "goal_util.m"
static void MR_CALL 
hlds__goal_util__flatten_disj_acc_3_p_0(
#line 1555 "goal_util.m"
  MR_Word hlds__goal_util__Disjunct_4,
#line 1555 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_FlatDisjuncts_0_8,
#line 1555 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_FlatDisjuncts_9);

#line 1439 "goal_util.m"
static void MR_CALL 
hlds__goal_util__cases_contain_reconstruction_2_p_0(
#line 1439 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1439 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__2_2);

#line 1426 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goals_contain_reconstruction_2_p_0(
#line 1426 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1426 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__2_2);

#line 1329 "goal_util.m"
static void MR_CALL 
hlds__goal_util__case_list_calls_proc_in_list_4_p_0(
#line 1329 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1329 "goal_util.m"
  MR_Word hlds__goal_util__PredProcIds_2,
#line 1329 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0_3,
#line 1329 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_CalledSet_4);

#line 1320 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_list_calls_proc_in_list_2_4_p_0(
#line 1320 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1320 "goal_util.m"
  MR_Word hlds__goal_util__PredProcIds_2,
#line 1320 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0_3,
#line 1320 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_CalledSet_4);

#line 1256 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_calls_proc_in_list_2_4_p_0(
#line 1256 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1256 "goal_util.m"
  MR_Word hlds__goal_util__PredProcIds_7,
#line 1256 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0_58,
#line 1256 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_CalledSet_59);

#line 1199 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_expr_calls_pred_id_2_p_1(
#line 1199 "goal_util.m"
  MR_Word hlds__goal_util__GoalExpr_3,
#line 1199 "goal_util.m"
  MR_Word * hlds__goal_util__PredId_4,
#line 1199 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1199 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 1198 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__goal_expr_calls_pred_id_2_p_0(
#line 1198 "goal_util.m"
  MR_Word hlds__goal_util__GoalExpr_3,
#line 1198 "goal_util.m"
  MR_Word hlds__goal_util__PredId_4);

#line 1188 "goal_util.m"
static void MR_CALL 
hlds__goal_util__cases_calls_pred_id_2_p_1(
#line 1188 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1188 "goal_util.m"
  MR_Word * hlds__goal_util__PredId_7,
#line 1188 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1188 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 1187 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__cases_calls_pred_id_2_p_0(
#line 1187 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1187 "goal_util.m"
  MR_Word hlds__goal_util__PredId_7);

#line 1177 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goals_calls_pred_id_2_p_1(
#line 1177 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1177 "goal_util.m"
  MR_Word * hlds__goal_util__PredId_5,
#line 1177 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1177 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 1176 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__goals_calls_pred_id_2_p_0(
#line 1176 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1176 "goal_util.m"
  MR_Word hlds__goal_util__PredId_5);

#line 1115 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_expr_calls_2_p_1(
#line 1115 "goal_util.m"
  MR_Word hlds__goal_util__GoalExpr_3,
#line 1115 "goal_util.m"
  MR_Word * hlds__goal_util__PredProcId_4,
#line 1115 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1115 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 1114 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__goal_expr_calls_2_p_0(
#line 1114 "goal_util.m"
  MR_Word hlds__goal_util__GoalExpr_3,
#line 1114 "goal_util.m"
  MR_Word hlds__goal_util__PredProcId_4);

#line 1104 "goal_util.m"
static void MR_CALL 
hlds__goal_util__cases_calls_2_p_1(
#line 1104 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1104 "goal_util.m"
  MR_Word * hlds__goal_util__PredProcId_7,
#line 1104 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1104 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 1103 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__cases_calls_2_p_0(
#line 1103 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1103 "goal_util.m"
  MR_Word hlds__goal_util__PredProcId_7);

#line 1093 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goals_calls_2_p_1(
#line 1093 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1093 "goal_util.m"
  MR_Word * hlds__goal_util__PredProcId_5,
#line 1093 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1093 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 1092 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__goals_calls_2_p_0(
#line 1092 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1092 "goal_util.m"
  MR_Word hlds__goal_util__PredProcId_5);

#line 1007 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_expr_size_2_p_0(
#line 1007 "goal_util.m"
  MR_Word hlds__goal_util__GoalExpr_3,
#line 1007 "goal_util.m"
  MR_Integer * hlds__goal_util__Size_4);

#line 999 "goal_util.m"
static void MR_CALL 
hlds__goal_util__cases_size_2_p_0(
#line 999 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 999 "goal_util.m"
  MR_Integer * hlds__goal_util__HeadVar__2_2);

#line 993 "goal_util.m"
static void MR_CALL 
hlds__goal_util__clause_size_increment_3_p_0(
#line 993 "goal_util.m"
  MR_Word hlds__goal_util__Clause_4,
#line 993 "goal_util.m"
  MR_Integer hlds__goal_util__Size0_5,
#line 993 "goal_util.m"
  MR_Integer * hlds__goal_util__Size_6);

#line 953 "goal_util.m"
static MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_cases_1_f_0(
#line 953 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1);

#line 940 "goal_util.m"
static MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_goals_1_f_0(
#line 940 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1);

#line 677 "goal_util.m"
static void MR_CALL 
hlds__goal_util__rhs_goal_vars_acc_3_p_0(
#line 677 "goal_util.m"
  MR_Word hlds__goal_util__RHS_4,
#line 677 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_Set_0_19,
#line 677 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_20);

#line 669 "goal_util.m"
static void MR_CALL 
hlds__goal_util__cases_goal_vars_acc_3_p_0(
#line 669 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 669 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_Set_0_2,
#line 669 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_3);

#line 661 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goals_goal_vars_acc_3_p_0(
#line 661 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 661 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_Set_0_2,
#line 661 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_3);

#line 628 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__goal_vars_acc_3_p_0_2(
#line 628 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 628 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1);

#line 627 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__goal_vars_acc_3_p_0_1(
#line 627 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 627 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1);

#line 547 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_vars_acc_3_p_0(
#line 547 "goal_util.m"
  MR_Word hlds__goal_util__Goal_4,
#line 547 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_Set_0_96,
#line 547 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_97);

#line 478 "goal_util.m"
static void MR_CALL 
hlds__goal_util__create_renaming_2_12_p_0(
#line 478 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 478 "goal_util.m"
  MR_Word hlds__goal_util__InstMapDelta_2,
#line 478 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0_3,
#line 478 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarSet_4,
#line 478 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0_5,
#line 478 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarTypes_6,
#line 478 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_RevUnifies_0_7,
#line 478 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_RevUnifies_8,
#line 478 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_RevNewVars_0_9,
#line 478 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_RevNewVars_10,
#line 478 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_Renaming_0_11,
#line 478 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Renaming_12);

#line 2378 "goal_util.m"
static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_3(
#line 2378 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 2378 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2378 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_2);

#line 2374 "goal_util.m"
static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_2(
#line 2374 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 2374 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2374 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_2);

#line 2370 "goal_util.m"
static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_1(
#line 2370 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 2370 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2370 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_2);

#line 2201 "goal_util.m"
static void MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_2(
#line 2201 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 2201 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2201 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 2201 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 2197 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_1(
#line 2197 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 2197 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1);

#line 1938 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_4(
#line 1938 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1938 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1);

#line 1977 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_3(
#line 1977 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1977 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1);

#line 1933 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_2(
#line 1933 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1933 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1);

#line 1928 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_1(
#line 1928 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1928 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1);

#line 1836 "goal_util.m"
static void MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_4(
#line 1836 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1836 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1836 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 1836 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 1832 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_3(
#line 1832 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg);

#line 1816 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_2(
#line 1816 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1816 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1);

#line 1815 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_1(
#line 1815 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1815 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1);

#line 1803 "goal_util.m"
static void MR_CALL 
hlds__goal_util__generate_simple_call_12_p_0_2(
#line 1803 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1803 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1803 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 1803 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 1799 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__generate_simple_call_12_p_0_1(
#line 1799 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg);

#line 1553 "goal_util.m"
static void MR_CALL 
hlds__goal_util__flatten_disj_2_p_0_1(
#line 1553 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1553 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1553 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 1553 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 1505 "goal_util.m"
static void MR_CALL 
hlds__goal_util__case_to_disjunct_11_p_0_1(
#line 1505 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1505 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1505 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_2);

#line 1483 "goal_util.m"
static void MR_CALL 
hlds__goal_util__switch_to_disjunction_10_p_0_1(
#line 1483 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1483 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1483 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_2,
#line 1483 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_3,
#line 1483 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_4,
#line 1483 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_5,
#line 1483 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_6,
#line 1483 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_7,
#line 1483 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_8);

#line 1881 "goal_util.m"
static void MR_CALL 
hlds__goal_util__pred_proc_ids_from_goal_2_p_0_1(
#line 1881 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1881 "goal_util.m"
static void MR_CALL 
hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2(
#line 1881 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1881 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 1881 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1881 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 1870 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_from_goals_2_p_0_1(
#line 1870 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1870 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_from_goals_2_p_0_2(
#line 1870 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1870 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 1870 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1870 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 1874 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_with_args_from_goal_2_p_0_1(
#line 1874 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1874 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_with_args_from_goal_2_p_0_2(
#line 1874 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1874 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 1874 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1874 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 1870 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_from_goal_2_p_0_1(
#line 1870 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1870 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_from_goal_2_p_0_2(
#line 1870 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1870 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 1870 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1870 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 1468 "goal_util.m"
static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_1(
#line 1468 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1470 "goal_util.m"
static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_2(
#line 1470 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1472 "goal_util.m"
static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_4(
#line 1472 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1471 "goal_util.m"
static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_3(
#line 1471 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 1456 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_contains_goal_2_p_0_1(
#line 1456 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 985 "goal_util.m"
static void MR_CALL 
hlds__goal_util__clause_list_size_2_p_0_1(
#line 985 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 985 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 985 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 985 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3);

#line 845 "goal_util.m"
static void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_2(
#line 845 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg);

#line 845 "goal_util.m"
static void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3(
#line 845 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 845 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 845 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 845 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr);

#line 834 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_1(
#line 834 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 834 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1);


static /* final */ const MR_Box hlds__goal_util_scalar_common_1[6][2];

static /* final */ const MR_Box hlds__goal_util_scalar_common_2[1][4];

static /* final */ const MR_Box hlds__goal_util_scalar_common_3[25][3];

static /* final */ const MR_Box hlds__goal_util_scalar_common_4[8][6];

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

static /* final */ const MR_Box hlds__goal_util_scalar_common_3[25][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__goal_util_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[2])),
    ((MR_Box) (hlds__goal_util__clause_list_size_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[3])),
    ((MR_Box) (hlds__goal_util__case_to_disjunct_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[3])),
    ((MR_Box) (hlds__goal_util__flatten_disj_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[4])),
    ((MR_Box) (hlds__goal_util__generate_simple_call_12_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[5])),
    ((MR_Box) (hlds__goal_util__generate_foreign_proc_16_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[5])),
    ((MR_Box) (hlds__goal_util__generate_foreign_proc_16_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[4])),
    ((MR_Box) (hlds__goal_util__generate_foreign_proc_16_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[6])),
    ((MR_Box) (hlds__goal_util__maybe_strip_equality_pretest_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[6])),
    ((MR_Box) (hlds__goal_util__maybe_strip_equality_pretest_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[6])),
    ((MR_Box) (hlds__goal_util__maybe_strip_equality_pretest_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[7])),
    ((MR_Box) (hlds__goal_util__maybe_strip_equality_pretest_1_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[8])),
    ((MR_Box) (hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[5])),
    ((MR_Box) (hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[5])),
    ((MR_Box) (hlds__goal_util__goal_vars_acc_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[5])),
    ((MR_Box) (hlds__goal_util__goal_vars_acc_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[3])),
    ((MR_Box) (hlds__goal_util__flatten_disj_acc_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[4])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[4])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[4])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[4])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[4])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[4])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[4])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[4])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_p_1_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__goal_util_scalar_common_4[8][6] = {
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
    ((MR_Box) (&hlds__goal_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1769 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1777 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1785 "hlds.goal_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1793 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1801 "hlds.goal_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1809 "hlds.goal_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__goal_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1817 "hlds.goal_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 hlds__goal_util____vpti_tuple_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__goal_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1827 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1835 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__goal_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1844 "hlds.goal_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1852 "hlds.goal_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 hlds__goal_util____vpti_pred_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1862 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_0 = {
  (MR_String) "attach_in_from_ground_term",
  (MR_Integer) 0
};

#line 1868 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_1 = {
  (MR_String) "do_not_attach_in_from_ground_term",
  (MR_Integer) 1
};

#line 1874 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_value_ordered_attach_in_from_ground_term_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_1
};

#line 1880 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_attach_in_from_ground_term_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_1
};

#line 1886 "hlds.goal_util.c"
static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_attach_in_from_ground_term_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1892 "hlds.goal_util.c"
const MR_TypeCtorInfo_Struct hlds__goal_util__hlds__goal_util__type_ctor_info_attach_in_from_ground_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_util____Unify____attach_in_from_ground_term_0_0_10001)),
  ((MR_Box) (hlds__goal_util____Compare____attach_in_from_ground_term_0_0_10001)),
  (MR_String) "hlds.goal_util",
  (MR_String) "attach_in_from_ground_term",
  {     hlds__goal_util__hlds__goal_util__enum_name_ordered_attach_in_from_ground_term_0 },
  {     hlds__goal_util__hlds__goal_util__enum_value_ordered_attach_in_from_ground_term_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__goal_util__hlds__goal_util__functor_number_map_attach_in_from_ground_term_0
};

#line 1909 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_0 = {
  (MR_String) "goal_is_atomic",
  (MR_Integer) 0
};

#line 1915 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_1 = {
  (MR_String) "goal_is_nonatomic",
  (MR_Integer) 1
};

#line 1921 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_value_ordered_goal_is_atomic_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_1
};

#line 1927 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_goal_is_atomic_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_1
};

#line 1933 "hlds.goal_util.c"
static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_goal_is_atomic_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1939 "hlds.goal_util.c"
const MR_TypeCtorInfo_Struct hlds__goal_util__hlds__goal_util__type_ctor_info_goal_is_atomic_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_util____Unify____goal_is_atomic_0_0_10001)),
  ((MR_Box) (hlds__goal_util____Compare____goal_is_atomic_0_0_10001)),
  (MR_String) "hlds.goal_util",
  (MR_String) "goal_is_atomic",
  {     hlds__goal_util__hlds__goal_util__enum_name_ordered_goal_is_atomic_0 },
  {     hlds__goal_util__hlds__goal_util__enum_value_ordered_goal_is_atomic_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__goal_util__hlds__goal_util__functor_number_map_goal_is_atomic_0
};

#line 1956 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_0 = {
  (MR_String) "is_leaf",
  (MR_Integer) 0
};

#line 1962 "hlds.goal_util.c"
static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_1 = {
  (MR_String) "is_not_leaf",
  (MR_Integer) 1
};

#line 1968 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_value_ordered_is_leaf_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_1
};

#line 1974 "hlds.goal_util.c"
static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_is_leaf_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_1
};

#line 1980 "hlds.goal_util.c"
static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_is_leaf_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1986 "hlds.goal_util.c"
const MR_TypeCtorInfo_Struct hlds__goal_util__hlds__goal_util__type_ctor_info_is_leaf_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_util____Unify____is_leaf_0_0_10001)),
  ((MR_Box) (hlds__goal_util____Compare____is_leaf_0_0_10001)),
  (MR_String) "hlds.goal_util",
  (MR_String) "is_leaf",
  {     hlds__goal_util__hlds__goal_util__enum_name_ordered_is_leaf_0 },
  {     hlds__goal_util__hlds__goal_util__enum_value_ordered_is_leaf_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__goal_util__hlds__goal_util__functor_number_map_is_leaf_0
};

#line 2003 "hlds.goal_util.c"
static const MR_PseudoTypeInfo hlds__goal_util__hlds__goal_util__field_types_maybe_transformed_goal_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 2008 "hlds.goal_util.c"
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

#line 2023 "hlds.goal_util.c"
static const MR_PseudoTypeInfo hlds__goal_util__hlds__goal_util__field_types_maybe_transformed_goal_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2028 "hlds.goal_util.c"
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

#line 2043 "hlds.goal_util.c"
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

#line 2058 "hlds.goal_util.c"
static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_0[1] = {
  &hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_2
};

#line 2063 "hlds.goal_util.c"
static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_1[1] = {
  &hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_0
};

#line 2068 "hlds.goal_util.c"
static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_2[1] = {
  &hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_1
};

#line 2073 "hlds.goal_util.c"
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

#line 2092 "hlds.goal_util.c"
static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_name_ordered_maybe_transformed_goal_0[3] = {
  &hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_1,
  &hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_2,
  &hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_0
};

#line 2099 "hlds.goal_util.c"
static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_maybe_transformed_goal_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2106 "hlds.goal_util.c"
const MR_TypeCtorInfo_Struct hlds__goal_util__hlds__goal_util__type_ctor_info_maybe_transformed_goal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__goal_util____Unify____maybe_transformed_goal_0_0_10001)),
  ((MR_Box) (hlds__goal_util____Compare____maybe_transformed_goal_0_0_10001)),
  (MR_String) "hlds.goal_util",
  (MR_String) "maybe_transformed_goal",
  {     hlds__goal_util__hlds__goal_util__du_name_ordered_maybe_transformed_goal_0 },
  {     hlds__goal_util__hlds__goal_util__du_ptag_ordered_maybe_transformed_goal_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__goal_util__hlds__goal_util__functor_number_map_maybe_transformed_goal_0
};

#line 2123 "hlds.goal_util.c"
static MR_bool MR_CALL 
hlds__goal_util____Unify____attach_in_from_ground_term_0_0_10001(
#line 2126 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2128 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2)
#line 2130 "hlds.goal_util.c"
{
#line 2132 "hlds.goal_util.c"
  {
#line 2134 "hlds.goal_util.c"
    MR_bool hlds__goal_util__succeeded;

#line 2137 "hlds.goal_util.c"
    {
#line 2139 "hlds.goal_util.c"
      hlds__goal_util__succeeded = hlds__goal_util____Unify____attach_in_from_ground_term_0_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2));
    }
#line 2142 "hlds.goal_util.c"
    return hlds__goal_util__succeeded;
#line 2144 "hlds.goal_util.c"
  }
#line 2146 "hlds.goal_util.c"
}

#line 2149 "hlds.goal_util.c"
static void MR_CALL 
hlds__goal_util____Compare____attach_in_from_ground_term_0_0_10001(
#line 2152 "hlds.goal_util.c"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 2154 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 2156 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_3)
#line 2158 "hlds.goal_util.c"
{
#line 2160 "hlds.goal_util.c"
  {
#line 2162 "hlds.goal_util.c"
    MR_Word hlds__goal_util__conv0_HeadVar__1_1;

#line 2165 "hlds.goal_util.c"
    {
#line 2167 "hlds.goal_util.c"
      hlds__goal_util____Compare____attach_in_from_ground_term_0_0(&hlds__goal_util__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_util__wrapper_arg_2), ((MR_Word) hlds__goal_util__wrapper_arg_3));
    }
#line 2170 "hlds.goal_util.c"
    *hlds__goal_util__wrapper_arg_1 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__1_1));
#line 2172 "hlds.goal_util.c"
  }
#line 2174 "hlds.goal_util.c"
}

#line 2177 "hlds.goal_util.c"
static MR_bool MR_CALL 
hlds__goal_util____Unify____goal_is_atomic_0_0_10001(
#line 2180 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2182 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2)
#line 2184 "hlds.goal_util.c"
{
#line 2186 "hlds.goal_util.c"
  {
#line 2188 "hlds.goal_util.c"
    MR_bool hlds__goal_util__succeeded;

#line 2191 "hlds.goal_util.c"
    {
#line 2193 "hlds.goal_util.c"
      hlds__goal_util__succeeded = hlds__goal_util____Unify____goal_is_atomic_0_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2));
    }
#line 2196 "hlds.goal_util.c"
    return hlds__goal_util__succeeded;
#line 2198 "hlds.goal_util.c"
  }
#line 2200 "hlds.goal_util.c"
}

#line 2203 "hlds.goal_util.c"
static void MR_CALL 
hlds__goal_util____Compare____goal_is_atomic_0_0_10001(
#line 2206 "hlds.goal_util.c"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 2208 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 2210 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_3)
#line 2212 "hlds.goal_util.c"
{
#line 2214 "hlds.goal_util.c"
  {
#line 2216 "hlds.goal_util.c"
    MR_Word hlds__goal_util__conv0_HeadVar__1_1;

#line 2219 "hlds.goal_util.c"
    {
#line 2221 "hlds.goal_util.c"
      hlds__goal_util____Compare____goal_is_atomic_0_0(&hlds__goal_util__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_util__wrapper_arg_2), ((MR_Word) hlds__goal_util__wrapper_arg_3));
    }
#line 2224 "hlds.goal_util.c"
    *hlds__goal_util__wrapper_arg_1 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__1_1));
#line 2226 "hlds.goal_util.c"
  }
#line 2228 "hlds.goal_util.c"
}

#line 2231 "hlds.goal_util.c"
static MR_bool MR_CALL 
hlds__goal_util____Unify____is_leaf_0_0_10001(
#line 2234 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2236 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2)
#line 2238 "hlds.goal_util.c"
{
#line 2240 "hlds.goal_util.c"
  {
#line 2242 "hlds.goal_util.c"
    MR_bool hlds__goal_util__succeeded;

#line 2245 "hlds.goal_util.c"
    {
#line 2247 "hlds.goal_util.c"
      hlds__goal_util__succeeded = hlds__goal_util____Unify____is_leaf_0_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2));
    }
#line 2250 "hlds.goal_util.c"
    return hlds__goal_util__succeeded;
#line 2252 "hlds.goal_util.c"
  }
#line 2254 "hlds.goal_util.c"
}

#line 2257 "hlds.goal_util.c"
static void MR_CALL 
hlds__goal_util____Compare____is_leaf_0_0_10001(
#line 2260 "hlds.goal_util.c"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 2262 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 2264 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_3)
#line 2266 "hlds.goal_util.c"
{
#line 2268 "hlds.goal_util.c"
  {
#line 2270 "hlds.goal_util.c"
    MR_Word hlds__goal_util__conv0_HeadVar__1_1;

#line 2273 "hlds.goal_util.c"
    {
#line 2275 "hlds.goal_util.c"
      hlds__goal_util____Compare____is_leaf_0_0(&hlds__goal_util__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_util__wrapper_arg_2), ((MR_Word) hlds__goal_util__wrapper_arg_3));
    }
#line 2278 "hlds.goal_util.c"
    *hlds__goal_util__wrapper_arg_1 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__1_1));
#line 2280 "hlds.goal_util.c"
  }
#line 2282 "hlds.goal_util.c"
}

#line 2285 "hlds.goal_util.c"
static MR_bool MR_CALL 
hlds__goal_util____Unify____maybe_transformed_goal_0_0_10001(
#line 2288 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2290 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2)
#line 2292 "hlds.goal_util.c"
{
#line 2294 "hlds.goal_util.c"
  {
#line 2296 "hlds.goal_util.c"
    MR_bool hlds__goal_util__succeeded;

#line 2299 "hlds.goal_util.c"
    {
#line 2301 "hlds.goal_util.c"
      hlds__goal_util__succeeded = hlds__goal_util____Unify____maybe_transformed_goal_0_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2));
    }
#line 2304 "hlds.goal_util.c"
    return hlds__goal_util__succeeded;
#line 2306 "hlds.goal_util.c"
  }
#line 2308 "hlds.goal_util.c"
}

#line 2311 "hlds.goal_util.c"
static void MR_CALL 
hlds__goal_util____Compare____maybe_transformed_goal_0_0_10001(
#line 2314 "hlds.goal_util.c"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 2316 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 2318 "hlds.goal_util.c"
  MR_Box hlds__goal_util__wrapper_arg_3)
#line 2320 "hlds.goal_util.c"
{
#line 2322 "hlds.goal_util.c"
  {
#line 2324 "hlds.goal_util.c"
    MR_Word hlds__goal_util__conv0_HeadVar__1_1;

#line 2327 "hlds.goal_util.c"
    {
#line 2329 "hlds.goal_util.c"
      hlds__goal_util____Compare____maybe_transformed_goal_0_0(&hlds__goal_util__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_util__wrapper_arg_2), ((MR_Word) hlds__goal_util__wrapper_arg_3));
    }
#line 2332 "hlds.goal_util.c"
    *hlds__goal_util__wrapper_arg_1 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__1_1));
#line 2334 "hlds.goal_util.c"
  }
#line 2336 "hlds.goal_util.c"
}

#line 705 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_p_1_1(
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 705 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 705 "goal_util.m"
{
#line 705 "goal_util.m"
  {
#line 705 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 705 "goal_util.m"
    MR_Word hlds__goal_util__conv0_HeadVar__3_3;

#line 705 "goal_util.m"
    {
#line 705 "goal_util.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_HeadVar__3_3);
    }
#line 705 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__3_3));
#line 705 "goal_util.m"
  }
#line 705 "goal_util.m"
}

#line 740 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_p_1(
#line 740 "goal_util.m"
  MR_Word hlds__goal_util__Features_5,
#line 740 "goal_util.m"
  MR_Word hlds__goal_util__GoalExpr0_7,
#line 740 "goal_util.m"
  MR_Word * hlds__goal_util__GoalExpr_8)
#line 740 "goal_util.m"
{
#line 750 "goal_util.m"
  {
#line 750 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 750 "goal_util.m"
#line 750 "goal_util.m"
    switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) {
#line 750 "goal_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 750 "goal_util.m"
      case (MR_Integer) 0:
#line 771 "goal_util.m"
        {
#line 771 "goal_util.m"
          MR_Word hlds__goal_util__SubGoal0_46 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr0_7), (MR_Integer) 0);
#line 771 "goal_util.m"
          MR_Word hlds__goal_util__SubGoal_47;

#line 772 "goal_util.m"
          {
#line 772 "goal_util.m"
            hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__SubGoal0_46, &hlds__goal_util__SubGoal_47);
          }
#line 774 "goal_util.m"
          *hlds__goal_util__GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_util__SubGoal_47);
#line 771 "goal_util.m"
        }
#line 750 "goal_util.m"
        break;
#line 750 "goal_util.m"
      case (MR_Integer) 1:
#line 750 "goal_util.m"
      case (MR_Integer) 2:
#line 751 "goal_util.m"
        *hlds__goal_util__GoalExpr_8 = hlds__goal_util__GoalExpr0_7;
#line 750 "goal_util.m"
        break;
#line 750 "goal_util.m"
      case (MR_Integer) 3:
#line 750 "goal_util.m"
#line 750 "goal_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 0)))) {
#line 750 "goal_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 750 "goal_util.m"
          case (MR_Integer) 0:
#line 750 "goal_util.m"
          case (MR_Integer) 1:
#line 751 "goal_util.m"
            *hlds__goal_util__GoalExpr_8 = hlds__goal_util__GoalExpr0_7;
#line 750 "goal_util.m"
            break;
#line 750 "goal_util.m"
          case (MR_Integer) 2:
#line 753 "goal_util.m"
            {
#line 753 "goal_util.m"
              MR_Word hlds__goal_util__ConjType_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 753 "goal_util.m"
              MR_Word hlds__goal_util__Goals0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 753 "goal_util.m"
              MR_Word hlds__goal_util__Goals_34;

#line 754 "goal_util.m"
              {
#line 754 "goal_util.m"
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__Goals0_33, &hlds__goal_util__Goals_34);
              }
#line 755 "goal_util.m"
              {
#line 755 "goal_util.m"
                MR_Word base;
#line 755 "goal_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 755 "goal_util.m"
                *hlds__goal_util__GoalExpr_8 = base;
#line 755 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 755 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__ConjType_32));
#line 755 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__goal_util__Goals_34));
#line 755 "goal_util.m"
              }
#line 753 "goal_util.m"
            }
#line 750 "goal_util.m"
            break;
#line 750 "goal_util.m"
          case (MR_Integer) 3:
#line 757 "goal_util.m"
            {
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__Goals0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__Goals_69;

#line 758 "goal_util.m"
              {
#line 758 "goal_util.m"
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__Goals0_68, &hlds__goal_util__Goals_69);
              }
#line 759 "goal_util.m"
              {
#line 759 "goal_util.m"
                MR_Word base;
#line 759 "goal_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "goal_util.m"
                *hlds__goal_util__GoalExpr_8 = base;
#line 759 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 759 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__Goals_69));
#line 759 "goal_util.m"
              }
#line 757 "goal_util.m"
            }
#line 750 "goal_util.m"
            break;
#line 750 "goal_util.m"
          case (MR_Integer) 4:
#line 761 "goal_util.m"
            {
#line 761 "goal_util.m"
              MR_Word hlds__goal_util__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 761 "goal_util.m"
              MR_Word hlds__goal_util__CanFail_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 761 "goal_util.m"
              MR_Word hlds__goal_util__Cases0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 3)));
#line 761 "goal_util.m"
              MR_Word hlds__goal_util__Cases_38;

#line 762 "goal_util.m"
              {
#line 762 "goal_util.m"
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__Cases0_37, &hlds__goal_util__Cases_38);
              }
#line 763 "goal_util.m"
              {
#line 763 "goal_util.m"
                MR_Word base;
#line 763 "goal_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 763 "goal_util.m"
                *hlds__goal_util__GoalExpr_8 = base;
#line 763 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 763 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__Var_35));
#line 763 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__goal_util__CanFail_36));
#line 763 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__goal_util__Cases_38));
#line 763 "goal_util.m"
              }
#line 761 "goal_util.m"
            }
#line 750 "goal_util.m"
            break;
#line 750 "goal_util.m"
          case (MR_Integer) 5:
#line 776 "goal_util.m"
            {
#line 776 "goal_util.m"
              MR_Word hlds__goal_util__Reason_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 776 "goal_util.m"
              MR_Word hlds__goal_util__SubGoal0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 776 "goal_util.m"
              MR_Word hlds__goal_util__SubGoal_71;
#line 777 "goal_util.m"
              MR_Word hlds__goal_util__V_49_49;
#line 777 "goal_util.m"
              MR_Word hlds__goal_util__V_50_50;

#line 777 "goal_util.m"
              hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_48, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 777 "goal_util.m"
              if (hlds__goal_util__succeeded)
#line 777 "goal_util.m"
                {
#line 777 "goal_util.m"
                  hlds__goal_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_48, (MR_Integer) 1)));
#line 777 "goal_util.m"
                  hlds__goal_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_48, (MR_Integer) 2)));
#line 780 "goal_util.m"
                  hlds__goal_util__SubGoal_71 = hlds__goal_util__SubGoal0_70;
#line 777 "goal_util.m"
                }
#line 777 "goal_util.m"
              else
#line 787 "goal_util.m"
                {
#line 787 "goal_util.m"
                  hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__SubGoal0_70, &hlds__goal_util__SubGoal_71);
                }
#line 790 "goal_util.m"
              {
#line 790 "goal_util.m"
                MR_Word base;
#line 790 "goal_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 790 "goal_util.m"
                *hlds__goal_util__GoalExpr_8 = base;
#line 790 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 790 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__Reason_48));
#line 790 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__goal_util__SubGoal_71));
#line 790 "goal_util.m"
              }
#line 776 "goal_util.m"
            }
#line 750 "goal_util.m"
            break;
#line 750 "goal_util.m"
          case (MR_Integer) 6:
#line 765 "goal_util.m"
            {
#line 765 "goal_util.m"
              MR_Word hlds__goal_util__Vars_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 765 "goal_util.m"
              MR_Word hlds__goal_util__Cond0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 765 "goal_util.m"
              MR_Word hlds__goal_util__Then0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 3)));
#line 765 "goal_util.m"
              MR_Word hlds__goal_util__Else0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 4)));
#line 765 "goal_util.m"
              MR_Word hlds__goal_util__Cond_43;
#line 765 "goal_util.m"
              MR_Word hlds__goal_util__Then_44;
#line 765 "goal_util.m"
              MR_Word hlds__goal_util__Else_45;
#line 765 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr0_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond0_40, (MR_Integer) 0)));
#line 765 "goal_util.m"
              MR_Word hlds__goal_util__GoalInfo0_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond0_40, (MR_Integer) 1)));
#line 765 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_84;
#line 765 "goal_util.m"
              MR_Word hlds__goal_util__GoalInfo_85;
#line 705 "goal_util.m"
              MR_Box hlds__goal_util__conv1_GoalInfo_85;

#line 703 "goal_util.m"
              {
#line 703 "goal_util.m"
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__GoalExpr0_82, &hlds__goal_util__GoalExpr_84);
              }
#line 705 "goal_util.m"
              {
#line 705 "goal_util.m"
                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_3[24], hlds__goal_util__Features_5, ((MR_Box) (hlds__goal_util__GoalInfo0_83)), &hlds__goal_util__conv1_GoalInfo_85);
              }
#line 705 "goal_util.m"
              hlds__goal_util__GoalInfo_85 = ((MR_Word) hlds__goal_util__conv1_GoalInfo_85);
#line 706 "goal_util.m"
              {
#line 706 "goal_util.m"
                hlds__goal_util__Cond_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 706 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_43, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_84));
#line 706 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_43, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_85));
#line 706 "goal_util.m"
              }
#line 767 "goal_util.m"
              {
#line 767 "goal_util.m"
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__Then0_41, &hlds__goal_util__Then_44);
              }
#line 768 "goal_util.m"
              {
#line 768 "goal_util.m"
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__Else0_42, &hlds__goal_util__Else_45);
              }
#line 769 "goal_util.m"
              {
#line 769 "goal_util.m"
                MR_Word base;
#line 769 "goal_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 769 "goal_util.m"
                *hlds__goal_util__GoalExpr_8 = base;
#line 769 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 769 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__Vars_39));
#line 769 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__goal_util__Cond_43));
#line 769 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__goal_util__Then_44));
#line 769 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (hlds__goal_util__Else_45));
#line 769 "goal_util.m"
              }
#line 765 "goal_util.m"
            }
#line 750 "goal_util.m"
            break;
#line 750 "goal_util.m"
          case (MR_Integer) 7:
#line 792 "goal_util.m"
            {
#line 792 "goal_util.m"
              MR_Word hlds__goal_util__ShortHand0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 792 "goal_util.m"
              MR_Word hlds__goal_util__ShortHand_61;

#line 802 "goal_util.m"
#line 802 "goal_util.m"
              switch (MR_tag((MR_Word) hlds__goal_util__ShortHand0_51)) {
#line 802 "goal_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 802 "goal_util.m"
                case (MR_Integer) 0:
#line 808 "goal_util.m"
                  {
#line 808 "goal_util.m"
                    MR_Word hlds__goal_util__GoalA0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand0_51, (MR_Integer) 0)));
#line 808 "goal_util.m"
                    MR_Word hlds__goal_util__GoalB0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand0_51, (MR_Integer) 1)));
#line 808 "goal_util.m"
                    MR_Word hlds__goal_util__GoalA_66;
#line 808 "goal_util.m"
                    MR_Word hlds__goal_util__GoalB_67;

#line 809 "goal_util.m"
                    {
#line 809 "goal_util.m"
                      hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__GoalA0_64, &hlds__goal_util__GoalA_66);
                    }
#line 811 "goal_util.m"
                    {
#line 811 "goal_util.m"
                      hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__GoalB0_65, &hlds__goal_util__GoalB_67);
                    }
#line 813 "goal_util.m"
                    {
#line 813 "goal_util.m"
                      hlds__goal_util__ShortHand_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 813 "goal_util.m"
                      MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_61, 0) = ((MR_Box) (hlds__goal_util__GoalA_66));
#line 813 "goal_util.m"
                      MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_61, 1) = ((MR_Box) (hlds__goal_util__GoalB_67));
#line 813 "goal_util.m"
                    }
#line 808 "goal_util.m"
                  }
#line 802 "goal_util.m"
                  break;
#line 802 "goal_util.m"
                case (MR_Integer) 1:
#line 795 "goal_util.m"
                  {
#line 795 "goal_util.m"
                    MR_Word hlds__goal_util__GoalType_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 0)));
#line 795 "goal_util.m"
                    MR_Word hlds__goal_util__Outer_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 1)));
#line 795 "goal_util.m"
                    MR_Word hlds__goal_util__Inner_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 2)));
#line 795 "goal_util.m"
                    MR_Word hlds__goal_util__MaybeOutputVars_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 3)));
#line 795 "goal_util.m"
                    MR_Word hlds__goal_util__MainGoal0_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 4)));
#line 795 "goal_util.m"
                    MR_Word hlds__goal_util__OrElseGoals0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 5)));
#line 795 "goal_util.m"
                    MR_Word hlds__goal_util__OrElseInners_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 6)));
#line 795 "goal_util.m"
                    MR_Word hlds__goal_util__MainGoal_59;
#line 795 "goal_util.m"
                    MR_Word hlds__goal_util__OrElseGoals_60;

#line 796 "goal_util.m"
                    {
#line 796 "goal_util.m"
                      hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__MainGoal0_56, &hlds__goal_util__MainGoal_59);
                    }
#line 798 "goal_util.m"
                    {
#line 798 "goal_util.m"
                      hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__OrElseGoals0_57, &hlds__goal_util__OrElseGoals_60);
                    }
#line 800 "goal_util.m"
                    {
#line 800 "goal_util.m"
                      hlds__goal_util__ShortHand_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 800 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 0) = ((MR_Box) (hlds__goal_util__GoalType_52));
#line 800 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 1) = ((MR_Box) (hlds__goal_util__Outer_53));
#line 800 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 2) = ((MR_Box) (hlds__goal_util__Inner_54));
#line 800 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 3) = ((MR_Box) (hlds__goal_util__MaybeOutputVars_55));
#line 800 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 4) = ((MR_Box) (hlds__goal_util__MainGoal_59));
#line 800 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 5) = ((MR_Box) (hlds__goal_util__OrElseGoals_60));
#line 800 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 6) = ((MR_Box) (hlds__goal_util__OrElseInners_58));
#line 800 "goal_util.m"
                    }
#line 795 "goal_util.m"
                  }
#line 802 "goal_util.m"
                  break;
#line 802 "goal_util.m"
                case (MR_Integer) 2:
#line 803 "goal_util.m"
                  {
#line 803 "goal_util.m"
                    MR_Word hlds__goal_util__MaybeIO_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_51, (MR_Integer) 0)));
#line 803 "goal_util.m"
                    MR_Word hlds__goal_util__ResultVar_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_51, (MR_Integer) 1)));
#line 803 "goal_util.m"
                    MR_Word hlds__goal_util__SubGoal0_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_51, (MR_Integer) 2)));
#line 803 "goal_util.m"
                    MR_Word hlds__goal_util__SubGoal_73;

#line 804 "goal_util.m"
                    {
#line 804 "goal_util.m"
                      hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__SubGoal0_72, &hlds__goal_util__SubGoal_73);
                    }
#line 806 "goal_util.m"
                    {
#line 806 "goal_util.m"
                      hlds__goal_util__ShortHand_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 806 "goal_util.m"
                      MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_61, 0) = ((MR_Box) (hlds__goal_util__MaybeIO_62));
#line 806 "goal_util.m"
                      MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_61, 1) = ((MR_Box) (hlds__goal_util__ResultVar_63));
#line 806 "goal_util.m"
                      MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_61, 2) = ((MR_Box) (hlds__goal_util__SubGoal_73));
#line 806 "goal_util.m"
                    }
#line 803 "goal_util.m"
                  }
#line 802 "goal_util.m"
                  break;
#line 802 "goal_util.m"
              }
#line 815 "goal_util.m"
              {
#line 815 "goal_util.m"
                MR_Word base;
#line 815 "goal_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 815 "goal_util.m"
                *hlds__goal_util__GoalExpr_8 = base;
#line 815 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 815 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__ShortHand_61));
#line 815 "goal_util.m"
              }
#line 792 "goal_util.m"
            }
#line 750 "goal_util.m"
            break;
#line 750 "goal_util.m"
        }
#line 750 "goal_util.m"
        break;
#line 750 "goal_util.m"
    }
#line 750 "goal_util.m"
  }
#line 740 "goal_util.m"
}

#line 705 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_p_0_1(
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 705 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 705 "goal_util.m"
{
#line 705 "goal_util.m"
  {
#line 705 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 705 "goal_util.m"
    MR_Word hlds__goal_util__conv0_HeadVar__3_3;

#line 705 "goal_util.m"
    {
#line 705 "goal_util.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_HeadVar__3_3);
    }
#line 705 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__3_3));
#line 705 "goal_util.m"
  }
#line 705 "goal_util.m"
}

#line 738 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_p_0(
#line 738 "goal_util.m"
  MR_Word hlds__goal_util__Features_5,
#line 738 "goal_util.m"
  MR_Word hlds__goal_util__GoalExpr0_7,
#line 738 "goal_util.m"
  MR_Word * hlds__goal_util__GoalExpr_8)
#line 738 "goal_util.m"
{
#line 750 "goal_util.m"
  {
#line 750 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 750 "goal_util.m"
#line 750 "goal_util.m"
    switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) {
#line 750 "goal_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 750 "goal_util.m"
      case (MR_Integer) 0:
#line 771 "goal_util.m"
        {
#line 771 "goal_util.m"
          MR_Word hlds__goal_util__SubGoal0_46 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr0_7), (MR_Integer) 0);
#line 771 "goal_util.m"
          MR_Word hlds__goal_util__SubGoal_47;

#line 772 "goal_util.m"
          {
#line 772 "goal_util.m"
            hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__SubGoal0_46, &hlds__goal_util__SubGoal_47);
          }
#line 774 "goal_util.m"
          *hlds__goal_util__GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_util__SubGoal_47);
#line 771 "goal_util.m"
        }
#line 750 "goal_util.m"
        break;
#line 750 "goal_util.m"
      case (MR_Integer) 1:
#line 750 "goal_util.m"
      case (MR_Integer) 2:
#line 751 "goal_util.m"
        *hlds__goal_util__GoalExpr_8 = hlds__goal_util__GoalExpr0_7;
#line 750 "goal_util.m"
        break;
#line 750 "goal_util.m"
      case (MR_Integer) 3:
#line 750 "goal_util.m"
#line 750 "goal_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 0)))) {
#line 750 "goal_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 750 "goal_util.m"
          case (MR_Integer) 0:
#line 750 "goal_util.m"
          case (MR_Integer) 1:
#line 751 "goal_util.m"
            *hlds__goal_util__GoalExpr_8 = hlds__goal_util__GoalExpr0_7;
#line 750 "goal_util.m"
            break;
#line 750 "goal_util.m"
          case (MR_Integer) 2:
#line 753 "goal_util.m"
            {
#line 753 "goal_util.m"
              MR_Word hlds__goal_util__ConjType_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 753 "goal_util.m"
              MR_Word hlds__goal_util__Goals0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 753 "goal_util.m"
              MR_Word hlds__goal_util__Goals_34;

#line 754 "goal_util.m"
              {
#line 754 "goal_util.m"
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__Goals0_33, &hlds__goal_util__Goals_34);
              }
#line 755 "goal_util.m"
              {
#line 755 "goal_util.m"
                MR_Word base;
#line 755 "goal_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 755 "goal_util.m"
                *hlds__goal_util__GoalExpr_8 = base;
#line 755 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 755 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__ConjType_32));
#line 755 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__goal_util__Goals_34));
#line 755 "goal_util.m"
              }
#line 753 "goal_util.m"
            }
#line 750 "goal_util.m"
            break;
#line 750 "goal_util.m"
          case (MR_Integer) 3:
#line 757 "goal_util.m"
            {
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__Goals0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 757 "goal_util.m"
              MR_Word hlds__goal_util__Goals_69;

#line 758 "goal_util.m"
              {
#line 758 "goal_util.m"
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__Goals0_68, &hlds__goal_util__Goals_69);
              }
#line 759 "goal_util.m"
              {
#line 759 "goal_util.m"
                MR_Word base;
#line 759 "goal_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "goal_util.m"
                *hlds__goal_util__GoalExpr_8 = base;
#line 759 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 759 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__Goals_69));
#line 759 "goal_util.m"
              }
#line 757 "goal_util.m"
            }
#line 750 "goal_util.m"
            break;
#line 750 "goal_util.m"
          case (MR_Integer) 4:
#line 761 "goal_util.m"
            {
#line 761 "goal_util.m"
              MR_Word hlds__goal_util__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 761 "goal_util.m"
              MR_Word hlds__goal_util__CanFail_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 761 "goal_util.m"
              MR_Word hlds__goal_util__Cases0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 3)));
#line 761 "goal_util.m"
              MR_Word hlds__goal_util__Cases_38;

#line 762 "goal_util.m"
              {
#line 762 "goal_util.m"
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__Cases0_37, &hlds__goal_util__Cases_38);
              }
#line 763 "goal_util.m"
              {
#line 763 "goal_util.m"
                MR_Word base;
#line 763 "goal_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 763 "goal_util.m"
                *hlds__goal_util__GoalExpr_8 = base;
#line 763 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 763 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__Var_35));
#line 763 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__goal_util__CanFail_36));
#line 763 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__goal_util__Cases_38));
#line 763 "goal_util.m"
              }
#line 761 "goal_util.m"
            }
#line 750 "goal_util.m"
            break;
#line 750 "goal_util.m"
          case (MR_Integer) 5:
#line 776 "goal_util.m"
            {
#line 776 "goal_util.m"
              MR_Word hlds__goal_util__Reason_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 776 "goal_util.m"
              MR_Word hlds__goal_util__SubGoal0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 776 "goal_util.m"
              MR_Word hlds__goal_util__SubGoal_71;
#line 777 "goal_util.m"
              MR_Word hlds__goal_util__V_49_49;
#line 777 "goal_util.m"
              MR_Word hlds__goal_util__V_50_50;

#line 777 "goal_util.m"
              hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_48, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 777 "goal_util.m"
              if (hlds__goal_util__succeeded)
#line 777 "goal_util.m"
                {
#line 777 "goal_util.m"
                  hlds__goal_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_48, (MR_Integer) 1)));
#line 777 "goal_util.m"
                  hlds__goal_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_48, (MR_Integer) 2)));
#line 783 "goal_util.m"
                  {
#line 783 "goal_util.m"
                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__SubGoal0_70, &hlds__goal_util__SubGoal_71);
                  }
#line 777 "goal_util.m"
                }
#line 777 "goal_util.m"
              else
#line 787 "goal_util.m"
                {
#line 787 "goal_util.m"
                  hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__SubGoal0_70, &hlds__goal_util__SubGoal_71);
                }
#line 790 "goal_util.m"
              {
#line 790 "goal_util.m"
                MR_Word base;
#line 790 "goal_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 790 "goal_util.m"
                *hlds__goal_util__GoalExpr_8 = base;
#line 790 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 790 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__Reason_48));
#line 790 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__goal_util__SubGoal_71));
#line 790 "goal_util.m"
              }
#line 776 "goal_util.m"
            }
#line 750 "goal_util.m"
            break;
#line 750 "goal_util.m"
          case (MR_Integer) 6:
#line 765 "goal_util.m"
            {
#line 765 "goal_util.m"
              MR_Word hlds__goal_util__Vars_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 765 "goal_util.m"
              MR_Word hlds__goal_util__Cond0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 765 "goal_util.m"
              MR_Word hlds__goal_util__Then0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 3)));
#line 765 "goal_util.m"
              MR_Word hlds__goal_util__Else0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 4)));
#line 765 "goal_util.m"
              MR_Word hlds__goal_util__Cond_43;
#line 765 "goal_util.m"
              MR_Word hlds__goal_util__Then_44;
#line 765 "goal_util.m"
              MR_Word hlds__goal_util__Else_45;
#line 765 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr0_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond0_40, (MR_Integer) 0)));
#line 765 "goal_util.m"
              MR_Word hlds__goal_util__GoalInfo0_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond0_40, (MR_Integer) 1)));
#line 765 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_84;
#line 765 "goal_util.m"
              MR_Word hlds__goal_util__GoalInfo_85;
#line 705 "goal_util.m"
              MR_Box hlds__goal_util__conv1_GoalInfo_85;

#line 703 "goal_util.m"
              {
#line 703 "goal_util.m"
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__GoalExpr0_82, &hlds__goal_util__GoalExpr_84);
              }
#line 705 "goal_util.m"
              {
#line 705 "goal_util.m"
                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_3[23], hlds__goal_util__Features_5, ((MR_Box) (hlds__goal_util__GoalInfo0_83)), &hlds__goal_util__conv1_GoalInfo_85);
              }
#line 705 "goal_util.m"
              hlds__goal_util__GoalInfo_85 = ((MR_Word) hlds__goal_util__conv1_GoalInfo_85);
#line 706 "goal_util.m"
              {
#line 706 "goal_util.m"
                hlds__goal_util__Cond_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 706 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_43, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_84));
#line 706 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_43, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_85));
#line 706 "goal_util.m"
              }
#line 767 "goal_util.m"
              {
#line 767 "goal_util.m"
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__Then0_41, &hlds__goal_util__Then_44);
              }
#line 768 "goal_util.m"
              {
#line 768 "goal_util.m"
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__Else0_42, &hlds__goal_util__Else_45);
              }
#line 769 "goal_util.m"
              {
#line 769 "goal_util.m"
                MR_Word base;
#line 769 "goal_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 769 "goal_util.m"
                *hlds__goal_util__GoalExpr_8 = base;
#line 769 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 769 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__Vars_39));
#line 769 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__goal_util__Cond_43));
#line 769 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__goal_util__Then_44));
#line 769 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (hlds__goal_util__Else_45));
#line 769 "goal_util.m"
              }
#line 765 "goal_util.m"
            }
#line 750 "goal_util.m"
            break;
#line 750 "goal_util.m"
          case (MR_Integer) 7:
#line 792 "goal_util.m"
            {
#line 792 "goal_util.m"
              MR_Word hlds__goal_util__ShortHand0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 792 "goal_util.m"
              MR_Word hlds__goal_util__ShortHand_61;

#line 802 "goal_util.m"
#line 802 "goal_util.m"
              switch (MR_tag((MR_Word) hlds__goal_util__ShortHand0_51)) {
#line 802 "goal_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 802 "goal_util.m"
                case (MR_Integer) 0:
#line 808 "goal_util.m"
                  {
#line 808 "goal_util.m"
                    MR_Word hlds__goal_util__GoalA0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand0_51, (MR_Integer) 0)));
#line 808 "goal_util.m"
                    MR_Word hlds__goal_util__GoalB0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand0_51, (MR_Integer) 1)));
#line 808 "goal_util.m"
                    MR_Word hlds__goal_util__GoalA_66;
#line 808 "goal_util.m"
                    MR_Word hlds__goal_util__GoalB_67;

#line 809 "goal_util.m"
                    {
#line 809 "goal_util.m"
                      hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__GoalA0_64, &hlds__goal_util__GoalA_66);
                    }
#line 811 "goal_util.m"
                    {
#line 811 "goal_util.m"
                      hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__GoalB0_65, &hlds__goal_util__GoalB_67);
                    }
#line 813 "goal_util.m"
                    {
#line 813 "goal_util.m"
                      hlds__goal_util__ShortHand_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 813 "goal_util.m"
                      MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_61, 0) = ((MR_Box) (hlds__goal_util__GoalA_66));
#line 813 "goal_util.m"
                      MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_61, 1) = ((MR_Box) (hlds__goal_util__GoalB_67));
#line 813 "goal_util.m"
                    }
#line 808 "goal_util.m"
                  }
#line 802 "goal_util.m"
                  break;
#line 802 "goal_util.m"
                case (MR_Integer) 1:
#line 795 "goal_util.m"
                  {
#line 795 "goal_util.m"
                    MR_Word hlds__goal_util__GoalType_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 0)));
#line 795 "goal_util.m"
                    MR_Word hlds__goal_util__Outer_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 1)));
#line 795 "goal_util.m"
                    MR_Word hlds__goal_util__Inner_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 2)));
#line 795 "goal_util.m"
                    MR_Word hlds__goal_util__MaybeOutputVars_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 3)));
#line 795 "goal_util.m"
                    MR_Word hlds__goal_util__MainGoal0_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 4)));
#line 795 "goal_util.m"
                    MR_Word hlds__goal_util__OrElseGoals0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 5)));
#line 795 "goal_util.m"
                    MR_Word hlds__goal_util__OrElseInners_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_51, (MR_Integer) 6)));
#line 795 "goal_util.m"
                    MR_Word hlds__goal_util__MainGoal_59;
#line 795 "goal_util.m"
                    MR_Word hlds__goal_util__OrElseGoals_60;

#line 796 "goal_util.m"
                    {
#line 796 "goal_util.m"
                      hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__MainGoal0_56, &hlds__goal_util__MainGoal_59);
                    }
#line 798 "goal_util.m"
                    {
#line 798 "goal_util.m"
                      hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__OrElseGoals0_57, &hlds__goal_util__OrElseGoals_60);
                    }
#line 800 "goal_util.m"
                    {
#line 800 "goal_util.m"
                      hlds__goal_util__ShortHand_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 800 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 0) = ((MR_Box) (hlds__goal_util__GoalType_52));
#line 800 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 1) = ((MR_Box) (hlds__goal_util__Outer_53));
#line 800 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 2) = ((MR_Box) (hlds__goal_util__Inner_54));
#line 800 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 3) = ((MR_Box) (hlds__goal_util__MaybeOutputVars_55));
#line 800 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 4) = ((MR_Box) (hlds__goal_util__MainGoal_59));
#line 800 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 5) = ((MR_Box) (hlds__goal_util__OrElseGoals_60));
#line 800 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_61, 6) = ((MR_Box) (hlds__goal_util__OrElseInners_58));
#line 800 "goal_util.m"
                    }
#line 795 "goal_util.m"
                  }
#line 802 "goal_util.m"
                  break;
#line 802 "goal_util.m"
                case (MR_Integer) 2:
#line 803 "goal_util.m"
                  {
#line 803 "goal_util.m"
                    MR_Word hlds__goal_util__MaybeIO_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_51, (MR_Integer) 0)));
#line 803 "goal_util.m"
                    MR_Word hlds__goal_util__ResultVar_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_51, (MR_Integer) 1)));
#line 803 "goal_util.m"
                    MR_Word hlds__goal_util__SubGoal0_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_51, (MR_Integer) 2)));
#line 803 "goal_util.m"
                    MR_Word hlds__goal_util__SubGoal_73;

#line 804 "goal_util.m"
                    {
#line 804 "goal_util.m"
                      hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__SubGoal0_72, &hlds__goal_util__SubGoal_73);
                    }
#line 806 "goal_util.m"
                    {
#line 806 "goal_util.m"
                      hlds__goal_util__ShortHand_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 806 "goal_util.m"
                      MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_61, 0) = ((MR_Box) (hlds__goal_util__MaybeIO_62));
#line 806 "goal_util.m"
                      MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_61, 1) = ((MR_Box) (hlds__goal_util__ResultVar_63));
#line 806 "goal_util.m"
                      MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_61, 2) = ((MR_Box) (hlds__goal_util__SubGoal_73));
#line 806 "goal_util.m"
                    }
#line 803 "goal_util.m"
                  }
#line 802 "goal_util.m"
                  break;
#line 802 "goal_util.m"
              }
#line 815 "goal_util.m"
              {
#line 815 "goal_util.m"
                MR_Word base;
#line 815 "goal_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 815 "goal_util.m"
                *hlds__goal_util__GoalExpr_8 = base;
#line 815 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 815 "goal_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__goal_util__ShortHand_61));
#line 815 "goal_util.m"
              }
#line 792 "goal_util.m"
            }
#line 750 "goal_util.m"
            break;
#line 750 "goal_util.m"
        }
#line 750 "goal_util.m"
        break;
#line 750 "goal_util.m"
    }
#line 750 "goal_util.m"
  }
#line 738 "goal_util.m"
}

#line 705 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1_1(
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 705 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 705 "goal_util.m"
{
#line 705 "goal_util.m"
  {
#line 705 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 705 "goal_util.m"
    MR_Word hlds__goal_util__conv0_HeadVar__3_3;

#line 705 "goal_util.m"
    {
#line 705 "goal_util.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_HeadVar__3_3);
    }
#line 705 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__3_3));
#line 705 "goal_util.m"
  }
#line 705 "goal_util.m"
}

#line 725 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(
#line 725 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 725 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3,
#line 725 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__4_4)
#line 725 "goal_util.m"
{
#line 728 "goal_util.m"
  {
#line 728 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 728 "goal_util.m"
    if ((hlds__goal_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 728 "goal_util.m"
      *hlds__goal_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 728 "goal_util.m"
    else
#line 730 "goal_util.m"
      {
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__Case0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 0)));
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__Cases0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 1)));
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__Case_11;
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__Cases_12;
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_9, (MR_Integer) 0)));
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_9, (MR_Integer) 1)));
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_9, (MR_Integer) 2)));
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__Goal_16;
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_15, (MR_Integer) 0)));
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__GoalInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_15, (MR_Integer) 1)));
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr_23;
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__GoalInfo_24;
#line 705 "goal_util.m"
        MR_Box hlds__goal_util__conv1_GoalInfo_24;

#line 703 "goal_util.m"
        {
#line 703 "goal_util.m"
          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__HeadVar__1_1, hlds__goal_util__GoalExpr0_21, &hlds__goal_util__GoalExpr_23);
        }
#line 705 "goal_util.m"
        {
#line 705 "goal_util.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_3[22], hlds__goal_util__HeadVar__1_1, ((MR_Box) (hlds__goal_util__GoalInfo0_22)), &hlds__goal_util__conv1_GoalInfo_24);
        }
#line 705 "goal_util.m"
        hlds__goal_util__GoalInfo_24 = ((MR_Word) hlds__goal_util__conv1_GoalInfo_24);
#line 706 "goal_util.m"
        {
#line 706 "goal_util.m"
          hlds__goal_util__Goal_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 706 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_16, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_23));
#line 706 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_16, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_24));
#line 706 "goal_util.m"
        }
#line 733 "goal_util.m"
        {
#line 733 "goal_util.m"
          hlds__goal_util__Case_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 733 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Case_11, 0) = ((MR_Box) (hlds__goal_util__MainConsId_13));
#line 733 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Case_11, 1) = ((MR_Box) (hlds__goal_util__OtherConsIds_14));
#line 733 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Case_11, 2) = ((MR_Box) (hlds__goal_util__Goal_16));
#line 733 "goal_util.m"
        }
#line 734 "goal_util.m"
        {
#line 734 "goal_util.m"
          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Cases0_10, &hlds__goal_util__Cases_12);
        }
#line 730 "goal_util.m"
        {
#line 730 "goal_util.m"
          MR_Word base;
#line 730 "goal_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "goal_util.m"
          *hlds__goal_util__HeadVar__4_4 = base;
#line 730 "goal_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Case_11));
#line 730 "goal_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_util__Cases_12));
#line 730 "goal_util.m"
        }
#line 730 "goal_util.m"
      }
#line 728 "goal_util.m"
  }
#line 725 "goal_util.m"
}

#line 705 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0_1(
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 705 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 705 "goal_util.m"
{
#line 705 "goal_util.m"
  {
#line 705 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 705 "goal_util.m"
    MR_Word hlds__goal_util__conv0_HeadVar__3_3;

#line 705 "goal_util.m"
    {
#line 705 "goal_util.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_HeadVar__3_3);
    }
#line 705 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__3_3));
#line 705 "goal_util.m"
  }
#line 705 "goal_util.m"
}

#line 723 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(
#line 723 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 723 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3,
#line 723 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__4_4)
#line 723 "goal_util.m"
{
#line 728 "goal_util.m"
  {
#line 728 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 728 "goal_util.m"
    if ((hlds__goal_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 728 "goal_util.m"
      *hlds__goal_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 728 "goal_util.m"
    else
#line 730 "goal_util.m"
      {
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__Case0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 0)));
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__Cases0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 1)));
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__Case_11;
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__Cases_12;
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_9, (MR_Integer) 0)));
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_9, (MR_Integer) 1)));
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_9, (MR_Integer) 2)));
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__Goal_16;
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_15, (MR_Integer) 0)));
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__GoalInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_15, (MR_Integer) 1)));
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr_23;
#line 730 "goal_util.m"
        MR_Word hlds__goal_util__GoalInfo_24;
#line 705 "goal_util.m"
        MR_Box hlds__goal_util__conv1_GoalInfo_24;

#line 703 "goal_util.m"
        {
#line 703 "goal_util.m"
          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__GoalExpr0_21, &hlds__goal_util__GoalExpr_23);
        }
#line 705 "goal_util.m"
        {
#line 705 "goal_util.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_3[21], hlds__goal_util__HeadVar__1_1, ((MR_Box) (hlds__goal_util__GoalInfo0_22)), &hlds__goal_util__conv1_GoalInfo_24);
        }
#line 705 "goal_util.m"
        hlds__goal_util__GoalInfo_24 = ((MR_Word) hlds__goal_util__conv1_GoalInfo_24);
#line 706 "goal_util.m"
        {
#line 706 "goal_util.m"
          hlds__goal_util__Goal_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 706 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_16, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_23));
#line 706 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_16, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_24));
#line 706 "goal_util.m"
        }
#line 733 "goal_util.m"
        {
#line 733 "goal_util.m"
          hlds__goal_util__Case_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 733 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Case_11, 0) = ((MR_Box) (hlds__goal_util__MainConsId_13));
#line 733 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Case_11, 1) = ((MR_Box) (hlds__goal_util__OtherConsIds_14));
#line 733 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Case_11, 2) = ((MR_Box) (hlds__goal_util__Goal_16));
#line 733 "goal_util.m"
        }
#line 734 "goal_util.m"
        {
#line 734 "goal_util.m"
          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Cases0_10, &hlds__goal_util__Cases_12);
        }
#line 730 "goal_util.m"
        {
#line 730 "goal_util.m"
          MR_Word base;
#line 730 "goal_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "goal_util.m"
          *hlds__goal_util__HeadVar__4_4 = base;
#line 730 "goal_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Case_11));
#line 730 "goal_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_util__Cases_12));
#line 730 "goal_util.m"
        }
#line 730 "goal_util.m"
      }
#line 728 "goal_util.m"
  }
#line 723 "goal_util.m"
}

#line 705 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1(
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 705 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 705 "goal_util.m"
{
#line 705 "goal_util.m"
  {
#line 705 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 705 "goal_util.m"
    MR_Word hlds__goal_util__conv0_HeadVar__3_3;

#line 705 "goal_util.m"
    {
#line 705 "goal_util.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_HeadVar__3_3);
    }
#line 705 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__3_3));
#line 705 "goal_util.m"
  }
#line 705 "goal_util.m"
}

#line 712 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(
#line 712 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 712 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3,
#line 712 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__4_4)
#line 712 "goal_util.m"
{
#line 715 "goal_util.m"
  {
#line 715 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 715 "goal_util.m"
    if ((hlds__goal_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 715 "goal_util.m"
      *hlds__goal_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 715 "goal_util.m"
    else
#line 717 "goal_util.m"
      {
#line 717 "goal_util.m"
        MR_Word hlds__goal_util__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 0)));
#line 717 "goal_util.m"
        MR_Word hlds__goal_util__Goals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 1)));
#line 717 "goal_util.m"
        MR_Word hlds__goal_util__Goal_11;
#line 717 "goal_util.m"
        MR_Word hlds__goal_util__Goals_12;
#line 717 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
#line 717 "goal_util.m"
        MR_Word hlds__goal_util__GoalInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
#line 717 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr_19;
#line 717 "goal_util.m"
        MR_Word hlds__goal_util__GoalInfo_20;
#line 705 "goal_util.m"
        MR_Box hlds__goal_util__conv1_GoalInfo_20;

#line 703 "goal_util.m"
        {
#line 703 "goal_util.m"
          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__HeadVar__1_1, hlds__goal_util__GoalExpr0_17, &hlds__goal_util__GoalExpr_19);
        }
#line 705 "goal_util.m"
        {
#line 705 "goal_util.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_3[20], hlds__goal_util__HeadVar__1_1, ((MR_Box) (hlds__goal_util__GoalInfo0_18)), &hlds__goal_util__conv1_GoalInfo_20);
        }
#line 705 "goal_util.m"
        hlds__goal_util__GoalInfo_20 = ((MR_Word) hlds__goal_util__conv1_GoalInfo_20);
#line 706 "goal_util.m"
        {
#line 706 "goal_util.m"
          hlds__goal_util__Goal_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 706 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_11, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_19));
#line 706 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_11, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_20));
#line 706 "goal_util.m"
        }
#line 719 "goal_util.m"
        {
#line 719 "goal_util.m"
          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Goals0_10, &hlds__goal_util__Goals_12);
        }
#line 717 "goal_util.m"
        {
#line 717 "goal_util.m"
          MR_Word base;
#line 717 "goal_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 717 "goal_util.m"
          *hlds__goal_util__HeadVar__4_4 = base;
#line 717 "goal_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Goal_11));
#line 717 "goal_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_util__Goals_12));
#line 717 "goal_util.m"
        }
#line 717 "goal_util.m"
      }
#line 715 "goal_util.m"
  }
#line 712 "goal_util.m"
}

#line 705 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1(
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 705 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 705 "goal_util.m"
{
#line 705 "goal_util.m"
  {
#line 705 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 705 "goal_util.m"
    MR_Word hlds__goal_util__conv0_HeadVar__3_3;

#line 705 "goal_util.m"
    {
#line 705 "goal_util.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_HeadVar__3_3);
    }
#line 705 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__3_3));
#line 705 "goal_util.m"
  }
#line 705 "goal_util.m"
}

#line 710 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(
#line 710 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 710 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3,
#line 710 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__4_4)
#line 710 "goal_util.m"
{
#line 715 "goal_util.m"
  {
#line 715 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 715 "goal_util.m"
    if ((hlds__goal_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 715 "goal_util.m"
      *hlds__goal_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 715 "goal_util.m"
    else
#line 717 "goal_util.m"
      {
#line 717 "goal_util.m"
        MR_Word hlds__goal_util__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 0)));
#line 717 "goal_util.m"
        MR_Word hlds__goal_util__Goals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 1)));
#line 717 "goal_util.m"
        MR_Word hlds__goal_util__Goal_11;
#line 717 "goal_util.m"
        MR_Word hlds__goal_util__Goals_12;
#line 717 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
#line 717 "goal_util.m"
        MR_Word hlds__goal_util__GoalInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
#line 717 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr_19;
#line 717 "goal_util.m"
        MR_Word hlds__goal_util__GoalInfo_20;
#line 705 "goal_util.m"
        MR_Box hlds__goal_util__conv1_GoalInfo_20;

#line 703 "goal_util.m"
        {
#line 703 "goal_util.m"
          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__GoalExpr0_17, &hlds__goal_util__GoalExpr_19);
        }
#line 705 "goal_util.m"
        {
#line 705 "goal_util.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_3[19], hlds__goal_util__HeadVar__1_1, ((MR_Box) (hlds__goal_util__GoalInfo0_18)), &hlds__goal_util__conv1_GoalInfo_20);
        }
#line 705 "goal_util.m"
        hlds__goal_util__GoalInfo_20 = ((MR_Word) hlds__goal_util__conv1_GoalInfo_20);
#line 706 "goal_util.m"
        {
#line 706 "goal_util.m"
          hlds__goal_util__Goal_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 706 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_11, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_19));
#line 706 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_11, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_20));
#line 706 "goal_util.m"
        }
#line 719 "goal_util.m"
        {
#line 719 "goal_util.m"
          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Goals0_10, &hlds__goal_util__Goals_12);
        }
#line 717 "goal_util.m"
        {
#line 717 "goal_util.m"
          MR_Word base;
#line 717 "goal_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 717 "goal_util.m"
          *hlds__goal_util__HeadVar__4_4 = base;
#line 717 "goal_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Goal_11));
#line 717 "goal_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_util__Goals_12));
#line 717 "goal_util.m"
        }
#line 717 "goal_util.m"
      }
#line 715 "goal_util.m"
  }
#line 710 "goal_util.m"
}

#line 705 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1(
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 705 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 705 "goal_util.m"
{
#line 705 "goal_util.m"
  {
#line 705 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 705 "goal_util.m"
    MR_Word hlds__goal_util__conv0_HeadVar__3_3;

#line 705 "goal_util.m"
    {
#line 705 "goal_util.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_HeadVar__3_3);
    }
#line 705 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__3_3));
#line 705 "goal_util.m"
  }
#line 705 "goal_util.m"
}

#line 125 "goal_util.m"
void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(
#line 125 "goal_util.m"
  MR_Word hlds__goal_util__Features_5,
#line 125 "goal_util.m"
  MR_Word hlds__goal_util__Goal0_7,
#line 125 "goal_util.m"
  MR_Word * hlds__goal_util__Goal_8)
#line 125 "goal_util.m"
{
#line 701 "goal_util.m"
  {
#line 701 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 701 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
#line 701 "goal_util.m"
    MR_Word hlds__goal_util__GoalInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
#line 701 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_11;
#line 701 "goal_util.m"
    MR_Word hlds__goal_util__GoalInfo_12;
#line 705 "goal_util.m"
    MR_Box hlds__goal_util__conv1_GoalInfo_12;

#line 703 "goal_util.m"
    {
#line 703 "goal_util.m"
      hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__GoalExpr0_9, &hlds__goal_util__GoalExpr_11);
    }
#line 705 "goal_util.m"
    {
#line 705 "goal_util.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_3[18], hlds__goal_util__Features_5, ((MR_Box) (hlds__goal_util__GoalInfo0_10)), &hlds__goal_util__conv1_GoalInfo_12);
    }
#line 705 "goal_util.m"
    hlds__goal_util__GoalInfo_12 = ((MR_Word) hlds__goal_util__conv1_GoalInfo_12);
#line 706 "goal_util.m"
    {
#line 706 "goal_util.m"
      MR_Word base;
#line 706 "goal_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 706 "goal_util.m"
      *hlds__goal_util__Goal_8 = base;
#line 706 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_11));
#line 706 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_12));
#line 706 "goal_util.m"
    }
#line 701 "goal_util.m"
  }
#line 125 "goal_util.m"
}

#line 705 "goal_util.m"
static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1(
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 705 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 705 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 705 "goal_util.m"
{
#line 705 "goal_util.m"
  {
#line 705 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 705 "goal_util.m"
    MR_Word hlds__goal_util__conv0_HeadVar__3_3;

#line 705 "goal_util.m"
    {
#line 705 "goal_util.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_HeadVar__3_3);
    }
#line 705 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__3_3));
#line 705 "goal_util.m"
  }
#line 705 "goal_util.m"
}

#line 122 "goal_util.m"
void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(
#line 122 "goal_util.m"
  MR_Word hlds__goal_util__Features_5,
#line 122 "goal_util.m"
  MR_Word hlds__goal_util__Goal0_7,
#line 122 "goal_util.m"
  MR_Word * hlds__goal_util__Goal_8)
#line 122 "goal_util.m"
{
#line 701 "goal_util.m"
  {
#line 701 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 701 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
#line 701 "goal_util.m"
    MR_Word hlds__goal_util__GoalInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
#line 701 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_11;
#line 701 "goal_util.m"
    MR_Word hlds__goal_util__GoalInfo_12;
#line 705 "goal_util.m"
    MR_Box hlds__goal_util__conv1_GoalInfo_12;

#line 703 "goal_util.m"
    {
#line 703 "goal_util.m"
      hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__GoalExpr0_9, &hlds__goal_util__GoalExpr_11);
    }
#line 705 "goal_util.m"
    {
#line 705 "goal_util.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_3[17], hlds__goal_util__Features_5, ((MR_Box) (hlds__goal_util__GoalInfo0_10)), &hlds__goal_util__conv1_GoalInfo_12);
    }
#line 705 "goal_util.m"
    hlds__goal_util__GoalInfo_12 = ((MR_Word) hlds__goal_util__conv1_GoalInfo_12);
#line 706 "goal_util.m"
    {
#line 706 "goal_util.m"
      MR_Word base;
#line 706 "goal_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 706 "goal_util.m"
      *hlds__goal_util__Goal_8 = base;
#line 706 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_11));
#line 706 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_12));
#line 706 "goal_util.m"
    }
#line 701 "goal_util.m"
  }
#line 122 "goal_util.m"
}

#line 2378 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2378__1_3_p_0(
#line 2378 "goal_util.m"
  MR_Word hlds__goal_util__TransformP_4,
#line 2378 "goal_util.m"
  MR_Word hlds__goal_util__LambdaHeadVar__1_61,
#line 2378 "goal_util.m"
  MR_Word * hlds__goal_util__LambdaHeadVar__2_62)
#line 2378 "goal_util.m"
{
#line 2378 "goal_util.m"
  {
#line 2378 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 2378 "goal_util.m"
    MR_Word hlds__goal_util__GoalI0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LambdaHeadVar__1_61, (MR_Integer) 2)));
#line 2378 "goal_util.m"
    MR_Word hlds__goal_util__GoalI_43;
#line 2379 "goal_util.m"
    MR_Word hlds__goal_util__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LambdaHeadVar__1_61, (MR_Integer) 0)));
#line 2379 "goal_util.m"
    MR_Word hlds__goal_util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LambdaHeadVar__1_61, (MR_Integer) 1)));
#line 2381 "goal_util.m"
    MR_Word hlds__goal_util__V_72_72;
#line 2381 "goal_util.m"
    MR_Word hlds__goal_util__V_73_73;
#line 2381 "goal_util.m"
    MR_Word hlds__goal_util__V_74_74;

#line 2380 "goal_util.m"
    {
#line 2380 "goal_util.m"
      hlds__goal_util__transform_all_goals_3_p_0(hlds__goal_util__TransformP_4, hlds__goal_util__GoalI0_42, &hlds__goal_util__GoalI_43);
    }
#line 2381 "goal_util.m"
    hlds__goal_util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LambdaHeadVar__1_61, (MR_Integer) 0)));
#line 2381 "goal_util.m"
    hlds__goal_util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LambdaHeadVar__1_61, (MR_Integer) 1)));
#line 2381 "goal_util.m"
    hlds__goal_util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LambdaHeadVar__1_61, (MR_Integer) 2)));
#line 2381 "goal_util.m"
    {
#line 2381 "goal_util.m"
      MR_Word base;
#line 2381 "goal_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2381 "goal_util.m"
      *hlds__goal_util__LambdaHeadVar__2_62 = base;
#line 2381 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__V_72_72));
#line 2381 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__V_73_73));
#line 2381 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__goal_util__GoalI_43));
#line 2381 "goal_util.m"
    }
#line 2378 "goal_util.m"
  }
#line 2378 "goal_util.m"
}

#line 2197 "goal_util.m"
static MR_Word MR_CALL 
hlds__goal_util__IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap__2197__1_1_f_0(
#line 2197 "goal_util.m"
  MR_Word hlds__goal_util__LambdaHeadVar__1_107)
#line 2197 "goal_util.m"
{
#line 2197 "goal_util.m"
  {
#line 2197 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 2197 "goal_util.m"
    MR_Word hlds__goal_util__LambdaHeadVar__2_108;
#line 2197 "goal_util.m"
    MR_Word hlds__goal_util__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LambdaHeadVar__1_107, (MR_Integer) 1)));
#line 2199 "goal_util.m"
    MR_Word hlds__goal_util__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LambdaHeadVar__1_107, (MR_Integer) 0)));

#line 2199 "goal_util.m"
    {
#line 2199 "goal_util.m"
      hlds__goal_util__LambdaHeadVar__2_108 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__V_109_109);
    }
#line 2197 "goal_util.m"
    return hlds__goal_util__LambdaHeadVar__2_108;
#line 2197 "goal_util.m"
  }
#line 2197 "goal_util.m"
}

#line 1832 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_foreign_proc__1832__1_2_p_0(
#line 1832 "goal_util.m"
  MR_Word hlds__goal_util__Purity_22,
#line 1832 "goal_util.m"
  MR_Word hlds__goal_util__PredPurity_45)
#line 1832 "goal_util.m"
{
#line 1832 "goal_util.m"
  {
#line 1832 "goal_util.m"
    MR_bool hlds__goal_util__succeeded = (hlds__goal_util__Purity_22 == hlds__goal_util__PredPurity_45);

#line 1832 "goal_util.m"
    return hlds__goal_util__succeeded;
#line 1832 "goal_util.m"
  }
#line 1832 "goal_util.m"
}

#line 1799 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_simple_call__1799__1_2_p_0(
#line 1799 "goal_util.m"
  MR_Word hlds__goal_util__Purity_18,
#line 1799 "goal_util.m"
  MR_Word hlds__goal_util__PredPurity_36)
#line 1799 "goal_util.m"
{
#line 1799 "goal_util.m"
  {
#line 1799 "goal_util.m"
    MR_bool hlds__goal_util__succeeded = (hlds__goal_util__Purity_18 == hlds__goal_util__PredPurity_36);

#line 1799 "goal_util.m"
    return hlds__goal_util__succeeded;
#line 1799 "goal_util.m"
  }
#line 1799 "goal_util.m"
}

#line 1505 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1505__1_2_p_0(
#line 1505 "goal_util.m"
  MR_Word hlds__goal_util__LambdaHeadVar__1_64,
#line 1505 "goal_util.m"
  MR_Word * hlds__goal_util__LambdaHeadVar__2_65)
#line 1505 "goal_util.m"
{
#line 1505 "goal_util.m"
  {
#line 1505 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1505 "goal_util.m"
    MR_Word hlds__goal_util__V_66_66;
#line 1505 "goal_util.m"
    MR_Word hlds__goal_util__V_68_68;

#line 1506 "goal_util.m"
    {
#line 1506 "goal_util.m"
      hlds__goal_util__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1506 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_66_66, 0) = ((MR_Box) (hlds__goal_util__LambdaHeadVar__1_64));
#line 1506 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1506 "goal_util.m"
    }
#line 1506 "goal_util.m"
    {
#line 1506 "goal_util.m"
      hlds__goal_util__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1506 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_68_68, 0) = ((MR_Box) (hlds__goal_util__LambdaHeadVar__1_64));
#line 1506 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_68_68, 1) = ((MR_Box) (hlds__goal_util__LambdaHeadVar__1_64));
#line 1506 "goal_util.m"
    }
#line 1506 "goal_util.m"
    {
#line 1506 "goal_util.m"
      MR_Word base;
#line 1506 "goal_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1506 "goal_util.m"
      *hlds__goal_util__LambdaHeadVar__2_65 = base;
#line 1506 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__V_66_66));
#line 1506 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__V_68_68));
#line 1506 "goal_util.m"
    }
#line 1505 "goal_util.m"
  }
#line 1505 "goal_util.m"
}

#line 1874 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_1(
#line 1874 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1874 "goal_util.m"
{
#line 1874 "goal_util.m"
  {
#line 1874 "goal_util.m"
    struct hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1874 "goal_util.m"
    {
#line 1876 "goal_util.m"
      MR_Word hlds__goal_util__V_8_8;
#line 1877 "goal_util.m"
      MR_Integer hlds__goal_util__V_9_9;
#line 1877 "goal_util.m"
      MR_Word hlds__goal_util__V_10_10;
#line 1877 "goal_util.m"
      MR_Word hlds__goal_util__V_11_11;
#line 1877 "goal_util.m"
      MR_Word hlds__goal_util__V_12_12;

#line 1876 "goal_util.m"
      (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__SubGoal_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__V_15_15, (MR_Integer) 0)));
#line 1876 "goal_util.m"
      hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__V_15_15, (MR_Integer) 1)));
#line 1877 "goal_util.m"
      (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__SubGoal_7)) == (MR_mktag((MR_Integer) 2)));
#line 1877 "goal_util.m"
      if ((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__succeeded)
#line 1877 "goal_util.m"
        {
#line 1877 "goal_util.m"
          {
#line 1877 "goal_util.m"
            (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 0)));
#line 1877 "goal_util.m"
            hlds__goal_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 1)));
#line 1877 "goal_util.m"
            (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 2)));
#line 1877 "goal_util.m"
            hlds__goal_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 3)));
#line 1877 "goal_util.m"
            hlds__goal_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 4)));
#line 1877 "goal_util.m"
            hlds__goal_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 5)));
#line 1877 "goal_util.m"
          }
#line 1874 "goal_util.m"
          {
#line 1875 "goal_util.m"
            {
#line 1875 "goal_util.m"
              MR_Tuple base;
#line 1875 "goal_util.m"
              base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1875 "goal_util.m"
              *((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__LambdaHeadVar__1_14) = base;
#line 1875 "goal_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__PredId_16));
#line 1875 "goal_util.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__Args_17));
#line 1875 "goal_util.m"
            }
#line 1875 "goal_util.m"
            {
#line 1875 "goal_util.m"
              ((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__cont_env_ptr);
            }
#line 1874 "goal_util.m"
          }
#line 1877 "goal_util.m"
        }
#line 1874 "goal_util.m"
    }
#line 1874 "goal_util.m"
  }
#line 1874 "goal_util.m"
}

#line 1874 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0(
#line 1874 "goal_util.m"
  MR_Word hlds__goal_util__Goal_3,
#line 1874 "goal_util.m"
  MR_Tuple * hlds__goal_util__LambdaHeadVar__1_14,
#line 1874 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1874 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 1874 "goal_util.m"
{
#line 1874 "goal_util.m"
  {
#line 1874 "goal_util.m"
    struct hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0_s hlds__goal_util__env;

#line 1874 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__LambdaHeadVar__1_14 = hlds__goal_util__LambdaHeadVar__1_14;
#line 1874 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__cont = hlds__goal_util__cont;
#line 1874 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
#line 1876 "goal_util.m"
    {
#line 1876 "goal_util.m"
      hlds__goal_util__goal_contains_goal_2_p_0(hlds__goal_util__Goal_3, &(hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_env_0__V_15_15, hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0_1, &hlds__goal_util__env);
    }
#line 1874 "goal_util.m"
  }
#line 1874 "goal_util.m"
}

#line 850 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_2(
#line 850 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 850 "goal_util.m"
{
#line 850 "goal_util.m"
  {
#line 850 "goal_util.m"
    struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 850 "goal_util.m"
    (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__Constraint_23 = ((MR_Word) (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__conv0_Constraint_23);
#line 850 "goal_util.m"
    {
#line 850 "goal_util.m"
      hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_1(hlds__goal_util__env_ptr);
    }
#line 850 "goal_util.m"
  }
#line 850 "goal_util.m"
}

#line 845 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_3(
#line 845 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 845 "goal_util.m"
{
#line 845 "goal_util.m"
  {
#line 845 "goal_util.m"
    struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 4432 "hlds.goal_util.c"
    (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 853 "goal_util.m"
    {
#line 853 "goal_util.m"
      (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__TypeCtorInfo_43_43, (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__NonLocalTypeVars_15, (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__TypeVar_34);
    }
#line 845 "goal_util.m"
    if ((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__succeeded)
#line 845 "goal_util.m"
      {
#line 857 "goal_util.m"
        {
#line 857 "goal_util.m"
          hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_p_0((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__RttiVarMaps_6, (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__Constraint_23, (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__LambdaHeadVar__1_32);
        }
#line 857 "goal_util.m"
        {
#line 857 "goal_util.m"
          ((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__cont_env_ptr);
        }
#line 845 "goal_util.m"
      }
#line 845 "goal_util.m"
  }
#line 845 "goal_util.m"
}

#line 845 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_1(
#line 845 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 845 "goal_util.m"
{
#line 845 "goal_util.m"
  {
#line 845 "goal_util.m"
    struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 845 "goal_util.m"
    {
#line 851 "goal_util.m"
      MR_Word hlds__goal_util___ClassName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__Constraint_23, (MR_Integer) 0)));

#line 851 "goal_util.m"
      (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__ArgTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__Constraint_23, (MR_Integer) 1)));
#line 852 "goal_util.m"
      {
#line 852 "goal_util.m"
        parse_tree__prog_type__type_list_contains_var_2_p_0((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__ArgTypes_25, &(hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__TypeVar_34, hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_3, hlds__goal_util__env_ptr);
      }
#line 845 "goal_util.m"
    }
#line 845 "goal_util.m"
  }
#line 845 "goal_util.m"
}

#line 845 "goal_util.m"
static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0(
#line 845 "goal_util.m"
  MR_Word hlds__goal_util__RttiVarMaps_6,
#line 845 "goal_util.m"
  MR_Word hlds__goal_util__NonLocalTypeVars_15,
#line 845 "goal_util.m"
  MR_Word * hlds__goal_util__LambdaHeadVar__1_32,
#line 845 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 845 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 845 "goal_util.m"
{
#line 845 "goal_util.m"
  {
#line 845 "goal_util.m"
    struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0_s hlds__goal_util__env;

#line 845 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__RttiVarMaps_6 = hlds__goal_util__RttiVarMaps_6;
#line 845 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__NonLocalTypeVars_15 = hlds__goal_util__NonLocalTypeVars_15;
#line 845 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__LambdaHeadVar__1_32 = hlds__goal_util__LambdaHeadVar__1_32;
#line 845 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__cont = hlds__goal_util__cont;
#line 845 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
#line 845 "goal_util.m"
    {
#line 845 "goal_util.m"
      MR_Word hlds__goal_util__Constraints_22;

#line 849 "goal_util.m"
      {
#line 849 "goal_util.m"
        hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0((hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__RttiVarMaps_6, &hlds__goal_util__Constraints_22);
      }
#line 850 "goal_util.m"
      {
#line 850 "goal_util.m"
        mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, &(hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_env_0__conv0_Constraint_23, hlds__goal_util__Constraints_22, hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0_2, &hlds__goal_util__env);
      }
#line 845 "goal_util.m"
    }
#line 845 "goal_util.m"
  }
#line 845 "goal_util.m"
}

#line 834 "goal_util.m"
static MR_Word MR_CALL 
hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__834__1_2_f_0(
#line 834 "goal_util.m"
  MR_Word hlds__goal_util__RttiVarMaps_6,
#line 834 "goal_util.m"
  MR_Word hlds__goal_util__LambdaHeadVar__1_28)
#line 834 "goal_util.m"
{
#line 834 "goal_util.m"
  {
#line 834 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 834 "goal_util.m"
    MR_Word hlds__goal_util__LambdaHeadVar__2_29;
#line 834 "goal_util.m"
    MR_Word hlds__goal_util__Locn_19;

#line 835 "goal_util.m"
    {
#line 835 "goal_util.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(hlds__goal_util__RttiVarMaps_6, hlds__goal_util__LambdaHeadVar__1_28, &hlds__goal_util__Locn_19);
    }
#line 836 "goal_util.m"
    {
#line 836 "goal_util.m"
      hlds__hlds_rtti__type_info_locn_var_2_p_0(hlds__goal_util__Locn_19, &hlds__goal_util__LambdaHeadVar__2_29);
    }
#line 834 "goal_util.m"
    return hlds__goal_util__LambdaHeadVar__2_29;
#line 834 "goal_util.m"
  }
#line 834 "goal_util.m"
}

#line 408 "goal_util.m"
void MR_CALL 
hlds__goal_util____Compare____maybe_transformed_goal_0_0(
#line 408 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__1_1,
#line 408 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_2,
#line 408 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3)
#line 408 "goal_util.m"
{
#line 408 "goal_util.m"
  {
#line 408 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 408 "goal_util.m"
    MR_Integer hlds__goal_util__CastX_16 = (MR_Integer) hlds__goal_util__HeadVar__2_2;
#line 408 "goal_util.m"
    MR_Integer hlds__goal_util__CastY_17 = (MR_Integer) hlds__goal_util__HeadVar__3_3;

#line 408 "goal_util.m"
    hlds__goal_util__succeeded = (hlds__goal_util__CastX_16 == hlds__goal_util__CastY_17);
#line 408 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 4602 "hlds.goal_util.c"
      *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 0;
#line 408 "goal_util.m"
    else
#line 408 "goal_util.m"
#line 408 "goal_util.m"
      switch (MR_tag((MR_Word) hlds__goal_util__HeadVar__2_2)) {
#line 408 "goal_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 408 "goal_util.m"
        case (MR_Integer) 0:
#line 408 "goal_util.m"
#line 408 "goal_util.m"
          switch (MR_tag((MR_Word) hlds__goal_util__HeadVar__3_3)) {
#line 408 "goal_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 408 "goal_util.m"
            case (MR_Integer) 0:
#line 408 "goal_util.m"
              *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 0;
#line 408 "goal_util.m"
              break;
#line 408 "goal_util.m"
            case (MR_Integer) 1:
#line 4626 "hlds.goal_util.c"
              *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 2;
#line 408 "goal_util.m"
              break;
#line 408 "goal_util.m"
            case (MR_Integer) 2:
#line 4632 "hlds.goal_util.c"
              *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 2;
#line 408 "goal_util.m"
              break;
#line 408 "goal_util.m"
          }
#line 408 "goal_util.m"
          break;
#line 408 "goal_util.m"
        case (MR_Integer) 1:
#line 408 "goal_util.m"
          {
#line 408 "goal_util.m"
            MR_Word hlds__goal_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__2_2, (MR_Integer) 0)));

#line 408 "goal_util.m"
#line 408 "goal_util.m"
            switch (MR_tag((MR_Word) hlds__goal_util__HeadVar__3_3)) {
#line 408 "goal_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 408 "goal_util.m"
              case (MR_Integer) 0:
#line 4654 "hlds.goal_util.c"
                *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 1;
#line 408 "goal_util.m"
                break;
#line 408 "goal_util.m"
              case (MR_Integer) 1:
#line 408 "goal_util.m"
                {
#line 408 "goal_util.m"
                  MR_Word hlds__goal_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 0)));

#line 408 "goal_util.m"
                  {
#line 408 "goal_util.m"
                    hlds__hlds_goal____Compare____hlds_goal_0_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__V_21_21, hlds__goal_util__V_5_5);
                  }
#line 408 "goal_util.m"
                }
#line 408 "goal_util.m"
                break;
#line 408 "goal_util.m"
              case (MR_Integer) 2:
#line 4676 "hlds.goal_util.c"
                *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 1;
#line 408 "goal_util.m"
                break;
#line 408 "goal_util.m"
            }
#line 408 "goal_util.m"
          }
#line 408 "goal_util.m"
          break;
#line 408 "goal_util.m"
        case (MR_Integer) 2:
#line 408 "goal_util.m"
          {
#line 408 "goal_util.m"
            MR_String hlds__goal_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__2_2, (MR_Integer) 0)));

#line 408 "goal_util.m"
#line 408 "goal_util.m"
            switch (MR_tag((MR_Word) hlds__goal_util__HeadVar__3_3)) {
#line 408 "goal_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 408 "goal_util.m"
              case (MR_Integer) 0:
#line 4700 "hlds.goal_util.c"
                *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 1;
#line 408 "goal_util.m"
                break;
#line 408 "goal_util.m"
              case (MR_Integer) 1:
#line 4706 "hlds.goal_util.c"
                *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 2;
#line 408 "goal_util.m"
                break;
#line 408 "goal_util.m"
              case (MR_Integer) 2:
#line 408 "goal_util.m"
                {
#line 408 "goal_util.m"
                  MR_String hlds__goal_util__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__3_3, (MR_Integer) 0)));

#line 408 "goal_util.m"
                  {
#line 408 "goal_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__V_20_20, hlds__goal_util__V_12_12);
                  }
#line 408 "goal_util.m"
                }
#line 408 "goal_util.m"
                break;
#line 408 "goal_util.m"
            }
#line 408 "goal_util.m"
          }
#line 408 "goal_util.m"
          break;
#line 408 "goal_util.m"
      }
#line 408 "goal_util.m"
  }
#line 408 "goal_util.m"
}

#line 408 "goal_util.m"
MR_bool MR_CALL 
hlds__goal_util____Unify____maybe_transformed_goal_0_0(
#line 408 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 408 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_2)
#line 408 "goal_util.m"
{
#line 408 "goal_util.m"
  {
#line 408 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 408 "goal_util.m"
    MR_Integer hlds__goal_util__CastX_9 = (MR_Integer) hlds__goal_util__HeadVar__1_1;
#line 408 "goal_util.m"
    MR_Integer hlds__goal_util__CastY_10 = (MR_Integer) hlds__goal_util__HeadVar__2_2;

#line 408 "goal_util.m"
    hlds__goal_util__succeeded = (hlds__goal_util__CastX_9 == hlds__goal_util__CastY_10);
#line 408 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 408 "goal_util.m"
      hlds__goal_util__succeeded = MR_TRUE;
#line 408 "goal_util.m"
    else
#line 408 "goal_util.m"
#line 408 "goal_util.m"
      switch (MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) {
#line 408 "goal_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 408 "goal_util.m"
        case (MR_Integer) 0:
#line 408 "goal_util.m"
          {
#line 408 "goal_util.m"
            MR_Integer hlds__goal_util__CastX_7 = (MR_Integer) hlds__goal_util__HeadVar__1_1;
#line 408 "goal_util.m"
            MR_Integer hlds__goal_util__CastY_8 = (MR_Integer) hlds__goal_util__HeadVar__2_2;

#line 408 "goal_util.m"
            hlds__goal_util__succeeded = (hlds__goal_util__CastY_8 == hlds__goal_util__CastX_7);
#line 408 "goal_util.m"
          }
#line 408 "goal_util.m"
          break;
#line 408 "goal_util.m"
        case (MR_Integer) 1:
#line 408 "goal_util.m"
          {
#line 408 "goal_util.m"
            MR_Word hlds__goal_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 408 "goal_util.m"
            MR_Word hlds__goal_util__V_4_4;

#line 408 "goal_util.m"
            hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 408 "goal_util.m"
            if (hlds__goal_util__succeeded)
#line 408 "goal_util.m"
              {
#line 408 "goal_util.m"
                hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__2_2, (MR_Integer) 0)));
#line 4802 "hlds.goal_util.c"
                {
#line 4804 "hlds.goal_util.c"
                  hlds__goal_util__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(hlds__goal_util__V_3_3, hlds__goal_util__V_4_4);
                }
#line 408 "goal_util.m"
              }
#line 408 "goal_util.m"
          }
#line 408 "goal_util.m"
          break;
#line 408 "goal_util.m"
        case (MR_Integer) 2:
#line 408 "goal_util.m"
          {
#line 408 "goal_util.m"
            MR_String hlds__goal_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 408 "goal_util.m"
            MR_String hlds__goal_util__V_6_6;

#line 408 "goal_util.m"
            hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 408 "goal_util.m"
            if (hlds__goal_util__succeeded)
#line 408 "goal_util.m"
              {
#line 408 "goal_util.m"
                hlds__goal_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__2_2, (MR_Integer) 0)));
#line 4830 "hlds.goal_util.c"
                hlds__goal_util__succeeded = (strcmp(hlds__goal_util__V_5_5, hlds__goal_util__V_6_6) == 0);
#line 408 "goal_util.m"
              }
#line 408 "goal_util.m"
          }
#line 408 "goal_util.m"
          break;
#line 408 "goal_util.m"
      }
#line 408 "goal_util.m"
    return hlds__goal_util__succeeded;
#line 408 "goal_util.m"
  }
#line 408 "goal_util.m"
}

#line 149 "goal_util.m"
void MR_CALL 
hlds__goal_util____Compare____is_leaf_0_0(
#line 149 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__1_1,
#line 149 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_2,
#line 149 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3)
#line 149 "goal_util.m"
{
#line 149 "goal_util.m"
  {
#line 149 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 149 "goal_util.m"
    MR_Integer hlds__goal_util__Cast_HeadVar1_4 = (MR_Integer) hlds__goal_util__HeadVar__2_2;
#line 149 "goal_util.m"
    MR_Integer hlds__goal_util__Cast_HeadVar2_5 = (MR_Integer) hlds__goal_util__HeadVar__3_3;

#line 149 "goal_util.m"
    {
#line 149 "goal_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Cast_HeadVar1_4, hlds__goal_util__Cast_HeadVar2_5);
    }
#line 149 "goal_util.m"
  }
#line 149 "goal_util.m"
}

#line 149 "goal_util.m"
MR_bool MR_CALL 
hlds__goal_util____Unify____is_leaf_0_0(
#line 149 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_1,
#line 149 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_2)
#line 149 "goal_util.m"
{
#line 4886 "hlds.goal_util.c"
  {
#line 4888 "hlds.goal_util.c"
    MR_bool hlds__goal_util__succeeded = (hlds__goal_util__HeadVar__2_1 == hlds__goal_util__HeadVar__2_2);

#line 4891 "hlds.goal_util.c"
    return hlds__goal_util__succeeded;
#line 4893 "hlds.goal_util.c"
  }
#line 149 "goal_util.m"
}

#line 236 "goal_util.m"
void MR_CALL 
hlds__goal_util____Compare____goal_is_atomic_0_0(
#line 236 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__1_1,
#line 236 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_2,
#line 236 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3)
#line 236 "goal_util.m"
{
#line 236 "goal_util.m"
  {
#line 236 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 236 "goal_util.m"
    MR_Integer hlds__goal_util__Cast_HeadVar1_4 = (MR_Integer) hlds__goal_util__HeadVar__2_2;
#line 236 "goal_util.m"
    MR_Integer hlds__goal_util__Cast_HeadVar2_5 = (MR_Integer) hlds__goal_util__HeadVar__3_3;

#line 236 "goal_util.m"
    {
#line 236 "goal_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Cast_HeadVar1_4, hlds__goal_util__Cast_HeadVar2_5);
    }
#line 236 "goal_util.m"
  }
#line 236 "goal_util.m"
}

#line 236 "goal_util.m"
MR_bool MR_CALL 
hlds__goal_util____Unify____goal_is_atomic_0_0(
#line 236 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_1,
#line 236 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_2)
#line 236 "goal_util.m"
{
#line 4937 "hlds.goal_util.c"
  {
#line 4939 "hlds.goal_util.c"
    MR_bool hlds__goal_util__succeeded = (hlds__goal_util__HeadVar__2_1 == hlds__goal_util__HeadVar__2_2);

#line 4942 "hlds.goal_util.c"
    return hlds__goal_util__succeeded;
#line 4944 "hlds.goal_util.c"
  }
#line 236 "goal_util.m"
}

#line 113 "goal_util.m"
void MR_CALL 
hlds__goal_util____Compare____attach_in_from_ground_term_0_0(
#line 113 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__1_1,
#line 113 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_2,
#line 113 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__3_3)
#line 113 "goal_util.m"
{
#line 113 "goal_util.m"
  {
#line 113 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 113 "goal_util.m"
    MR_Integer hlds__goal_util__Cast_HeadVar1_4 = (MR_Integer) hlds__goal_util__HeadVar__2_2;
#line 113 "goal_util.m"
    MR_Integer hlds__goal_util__Cast_HeadVar2_5 = (MR_Integer) hlds__goal_util__HeadVar__3_3;

#line 113 "goal_util.m"
    {
#line 113 "goal_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Cast_HeadVar1_4, hlds__goal_util__Cast_HeadVar2_5);
    }
#line 113 "goal_util.m"
  }
#line 113 "goal_util.m"
}

#line 113 "goal_util.m"
MR_bool MR_CALL 
hlds__goal_util____Unify____attach_in_from_ground_term_0_0(
#line 113 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_1,
#line 113 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_2)
#line 113 "goal_util.m"
{
#line 4988 "hlds.goal_util.c"
  {
#line 4990 "hlds.goal_util.c"
    MR_bool hlds__goal_util__succeeded = (hlds__goal_util__HeadVar__2_1 == hlds__goal_util__HeadVar__2_2);

#line 4993 "hlds.goal_util.c"
    return hlds__goal_util__succeeded;
#line 4995 "hlds.goal_util.c"
  }
#line 113 "goal_util.m"
}

#line 2353 "goal_util.m"
static void MR_CALL 
hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_p_0(
#line 2353 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 2353 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__2_2)
#line 2353 "goal_util.m"
{
#line 2356 "goal_util.m"
  {
#line 2356 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 2356 "goal_util.m"
    if (((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 2357 "goal_util.m"
      {
#line 2357 "goal_util.m"
        MR_String hlds__goal_util__Error_4 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));

#line 2357 "goal_util.m"
        {
#line 2357 "goal_util.m"
          MR_Word base;
#line 2357 "goal_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2357 "goal_util.m"
          *hlds__goal_util__HeadVar__2_2 = base;
#line 2357 "goal_util.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__goal_util__Error_4));
#line 2357 "goal_util.m"
        }
#line 2357 "goal_util.m"
      }
#line 2356 "goal_util.m"
    else
#line 2356 "goal_util.m"
      {
#line 2356 "goal_util.m"
        MR_Word hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));

#line 2356 "goal_util.m"
        {
#line 2356 "goal_util.m"
          MR_Word base;
#line 2356 "goal_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2356 "goal_util.m"
          *hlds__goal_util__HeadVar__2_2 = base;
#line 2356 "goal_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Goal_3));
#line 2356 "goal_util.m"
        }
#line 2356 "goal_util.m"
      }
#line 2356 "goal_util.m"
  }
#line 2353 "goal_util.m"
}

#line 1994 "goal_util.m"
static MR_Word MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_case_1_f_0(
#line 1994 "goal_util.m"
  MR_Word hlds__goal_util__Case0_3)
#line 1994 "goal_util.m"
{
#line 1996 "goal_util.m"
  {
#line 1996 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1996 "goal_util.m"
    MR_Word hlds__goal_util__Case_4;
#line 1996 "goal_util.m"
    MR_Word hlds__goal_util__MainConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_3, (MR_Integer) 0)));
#line 1996 "goal_util.m"
    MR_Word hlds__goal_util__OtherConsIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_3, (MR_Integer) 1)));
#line 1996 "goal_util.m"
    MR_Word hlds__goal_util__Goal0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_3, (MR_Integer) 2)));
#line 1996 "goal_util.m"
    MR_Word hlds__goal_util__Goal_8;

#line 1998 "goal_util.m"
    {
#line 1998 "goal_util.m"
      hlds__goal_util__Goal_8 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__Goal0_7);
    }
#line 1999 "goal_util.m"
    {
#line 1999 "goal_util.m"
      hlds__goal_util__Case_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1999 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__Case_4, 0) = ((MR_Box) (hlds__goal_util__MainConsId_5));
#line 1999 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__Case_4, 1) = ((MR_Box) (hlds__goal_util__OtherConsIds_6));
#line 1999 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__Case_4, 2) = ((MR_Box) (hlds__goal_util__Goal_8));
#line 1999 "goal_util.m"
    }
#line 1996 "goal_util.m"
    return hlds__goal_util__Case_4;
#line 1996 "goal_util.m"
  }
#line 1994 "goal_util.m"
}

#line 1560 "goal_util.m"
static void MR_CALL 
hlds__goal_util__flatten_disj_acc_3_p_0_1(
#line 1560 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1560 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1560 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 1560 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 1560 "goal_util.m"
{
#line 1560 "goal_util.m"
  {
#line 1560 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 1560 "goal_util.m"
    MR_Word hlds__goal_util__conv0_STATE_VARIABLE_FlatDisjuncts_9;

#line 1560 "goal_util.m"
    {
#line 1560 "goal_util.m"
      hlds__goal_util__flatten_disj_acc_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_STATE_VARIABLE_FlatDisjuncts_9);
    }
#line 1560 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_STATE_VARIABLE_FlatDisjuncts_9));
#line 1560 "goal_util.m"
  }
#line 1560 "goal_util.m"
}

#line 1555 "goal_util.m"
static void MR_CALL 
hlds__goal_util__flatten_disj_acc_3_p_0(
#line 1555 "goal_util.m"
  MR_Word hlds__goal_util__Disjunct_4,
#line 1555 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_FlatDisjuncts_0_8,
#line 1555 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_FlatDisjuncts_9)
#line 1555 "goal_util.m"
{
#line 1561 "goal_util.m"
  {
#line 1561 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1561 "goal_util.m"
    MR_Word hlds__goal_util__SubDisjs_6;
#line 1559 "goal_util.m"
    MR_Word hlds__goal_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Disjunct_4, (MR_Integer) 0)));
#line 1559 "goal_util.m"
    MR_Word hlds__goal_util___GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Disjunct_4, (MR_Integer) 1)));

#line 1559 "goal_util.m"
    hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__V_10_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__V_10_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1559 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 1559 "goal_util.m"
      {
#line 1559 "goal_util.m"
        hlds__goal_util__SubDisjs_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__V_10_10, (MR_Integer) 1)));
#line 1560 "goal_util.m"
        {
#line 1560 "goal_util.m"
          MR_Box hlds__goal_util__conv1_STATE_VARIABLE_FlatDisjuncts_9;

#line 1560 "goal_util.m"
          {
#line 1560 "goal_util.m"
            mercury__list__foldr_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__goal_util_scalar_common_1[4], (MR_Word) &hlds__goal_util_scalar_common_3[16], hlds__goal_util__SubDisjs_6, ((MR_Box) (hlds__goal_util__STATE_VARIABLE_FlatDisjuncts_0_8)), &hlds__goal_util__conv1_STATE_VARIABLE_FlatDisjuncts_9);
          }
#line 1560 "goal_util.m"
          *hlds__goal_util__STATE_VARIABLE_FlatDisjuncts_9 = ((MR_Word) hlds__goal_util__conv1_STATE_VARIABLE_FlatDisjuncts_9);
#line 1560 "goal_util.m"
        }
#line 1559 "goal_util.m"
      }
#line 1559 "goal_util.m"
    else
#line 1562 "goal_util.m"
      {
#line 1562 "goal_util.m"
        MR_Word base;
#line 1562 "goal_util.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1562 "goal_util.m"
        *hlds__goal_util__STATE_VARIABLE_FlatDisjuncts_9 = base;
#line 1562 "goal_util.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Disjunct_4));
#line 1562 "goal_util.m"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_util__STATE_VARIABLE_FlatDisjuncts_0_8));
#line 1562 "goal_util.m"
      }
#line 1561 "goal_util.m"
  }
#line 1555 "goal_util.m"
}

#line 1439 "goal_util.m"
static void MR_CALL 
hlds__goal_util__cases_contain_reconstruction_2_p_0(
#line 1439 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1439 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__2_2)
#line 1439 "goal_util.m"
{
#line 1441 "goal_util.m"
  while (MR_TRUE)
#line 1441 "goal_util.m"
    {
#line 1441 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1441 "goal_util.m"
      {
#line 1441 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;

#line 1441 "goal_util.m"
        if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1441 "goal_util.m"
          *hlds__goal_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1441 "goal_util.m"
        else
#line 1442 "goal_util.m"
          {
#line 1442 "goal_util.m"
            MR_Word hlds__goal_util__Case_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1442 "goal_util.m"
            MR_Word hlds__goal_util__Cases_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1442 "goal_util.m"
            MR_Word hlds__goal_util__CaseGoal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_3, (MR_Integer) 2)));
#line 1442 "goal_util.m"
            MR_Word hlds__goal_util__HeadContainsReconstruction_9;
#line 1443 "goal_util.m"
            MR_Word hlds__goal_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_3, (MR_Integer) 0)));
#line 1443 "goal_util.m"
            MR_Word hlds__goal_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_3, (MR_Integer) 1)));

#line 1444 "goal_util.m"
            {
#line 1444 "goal_util.m"
              hlds__goal_util__goal_contains_reconstruction_2_p_0(hlds__goal_util__CaseGoal_8, &hlds__goal_util__HeadContainsReconstruction_9);
            }
#line 1448 "goal_util.m"
#line 1448 "goal_util.m"
            switch (hlds__goal_util__HeadContainsReconstruction_9) {
#line 1448 "goal_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1448 "goal_util.m"
              case (MR_Integer) 0:
#line 1450 "goal_util.m"
                {
#line 1450 "goal_util.m"
                  /* direct tailcall eliminated */
#line 1450 "goal_util.m"
                  {
#line 1450 "goal_util.m"
                    MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Cases_4;

#line 1450 "goal_util.m"
                    hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1450 "goal_util.m"
                  }
#line 1450 "goal_util.m"
                  continue;
#line 1450 "goal_util.m"
                }
#line 1448 "goal_util.m"
                break;
#line 1448 "goal_util.m"
              case (MR_Integer) 1:
#line 1447 "goal_util.m"
                *hlds__goal_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1448 "goal_util.m"
                break;
#line 1448 "goal_util.m"
            }
#line 1442 "goal_util.m"
          }
#line 1441 "goal_util.m"
      }
#line 1441 "goal_util.m"
      break;
#line 1441 "goal_util.m"
    }
#line 1439 "goal_util.m"
}

#line 1426 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goals_contain_reconstruction_2_p_0(
#line 1426 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1426 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__2_2)
#line 1426 "goal_util.m"
{
#line 1428 "goal_util.m"
  while (MR_TRUE)
#line 1428 "goal_util.m"
    {
#line 1428 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1428 "goal_util.m"
      {
#line 1428 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;

#line 1428 "goal_util.m"
        if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1428 "goal_util.m"
          *hlds__goal_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1428 "goal_util.m"
        else
#line 1429 "goal_util.m"
          {
#line 1429 "goal_util.m"
            MR_Word hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1429 "goal_util.m"
            MR_Word hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1429 "goal_util.m"
            MR_Word hlds__goal_util__HeadContainsReconstruction_6;

#line 1430 "goal_util.m"
            {
#line 1430 "goal_util.m"
              hlds__goal_util__goal_contains_reconstruction_2_p_0(hlds__goal_util__Goal_3, &hlds__goal_util__HeadContainsReconstruction_6);
            }
#line 1434 "goal_util.m"
#line 1434 "goal_util.m"
            switch (hlds__goal_util__HeadContainsReconstruction_6) {
#line 1434 "goal_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1434 "goal_util.m"
              case (MR_Integer) 0:
#line 1436 "goal_util.m"
                {
#line 1436 "goal_util.m"
                  /* direct tailcall eliminated */
#line 1436 "goal_util.m"
                  {
#line 1436 "goal_util.m"
                    MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Goals_4;

#line 1436 "goal_util.m"
                    hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1436 "goal_util.m"
                  }
#line 1436 "goal_util.m"
                  continue;
#line 1436 "goal_util.m"
                }
#line 1434 "goal_util.m"
                break;
#line 1434 "goal_util.m"
              case (MR_Integer) 1:
#line 1433 "goal_util.m"
                *hlds__goal_util__HeadVar__2_2 = (MR_Integer) 1;
#line 1434 "goal_util.m"
                break;
#line 1434 "goal_util.m"
            }
#line 1429 "goal_util.m"
          }
#line 1428 "goal_util.m"
      }
#line 1428 "goal_util.m"
      break;
#line 1428 "goal_util.m"
    }
#line 1426 "goal_util.m"
}

#line 1329 "goal_util.m"
static void MR_CALL 
hlds__goal_util__case_list_calls_proc_in_list_4_p_0(
#line 1329 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1329 "goal_util.m"
  MR_Word hlds__goal_util__PredProcIds_2,
#line 1329 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0_3,
#line 1329 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_CalledSet_4)
#line 1329 "goal_util.m"
{
#line 1332 "goal_util.m"
  while (MR_TRUE)
#line 1332 "goal_util.m"
    {
#line 1332 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1332 "goal_util.m"
      {
#line 1332 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;

#line 1332 "goal_util.m"
        if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1332 "goal_util.m"
          *hlds__goal_util__STATE_VARIABLE_CalledSet_4 = hlds__goal_util__STATE_VARIABLE_CalledSet_0_3;
#line 1332 "goal_util.m"
        else
#line 1333 "goal_util.m"
          {
#line 1333 "goal_util.m"
            MR_Word hlds__goal_util__Case_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1333 "goal_util.m"
            MR_Word hlds__goal_util__Cases_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1333 "goal_util.m"
            MR_Word hlds__goal_util__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_9, (MR_Integer) 2)));
#line 1333 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_18_18;
#line 1334 "goal_util.m"
            MR_Word hlds__goal_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_9, (MR_Integer) 0)));
#line 1334 "goal_util.m"
            MR_Word hlds__goal_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_9, (MR_Integer) 1)));

#line 1335 "goal_util.m"
            {
#line 1335 "goal_util.m"
              hlds__goal_util__goal_calls_proc_in_list_2_4_p_0(hlds__goal_util__Goal_15, hlds__goal_util__PredProcIds_2, hlds__goal_util__STATE_VARIABLE_CalledSet_0_3, &hlds__goal_util__STATE_VARIABLE_CalledSet_18_18);
            }
#line 1336 "goal_util.m"
            /* direct tailcall eliminated */
#line 1336 "goal_util.m"
            {
#line 1336 "goal_util.m"
              MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Cases_10;
#line 1336 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0__tmp_copy_3 = hlds__goal_util__STATE_VARIABLE_CalledSet_18_18;

#line 1336 "goal_util.m"
              hlds__goal_util__STATE_VARIABLE_CalledSet_0_3 = hlds__goal_util__STATE_VARIABLE_CalledSet_0__tmp_copy_3;
#line 1336 "goal_util.m"
              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1336 "goal_util.m"
            }
#line 1336 "goal_util.m"
            continue;
#line 1333 "goal_util.m"
          }
#line 1332 "goal_util.m"
      }
#line 1332 "goal_util.m"
      break;
#line 1332 "goal_util.m"
    }
#line 1329 "goal_util.m"
}

#line 1320 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_list_calls_proc_in_list_2_4_p_0(
#line 1320 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1320 "goal_util.m"
  MR_Word hlds__goal_util__PredProcIds_2,
#line 1320 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0_3,
#line 1320 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_CalledSet_4)
#line 1320 "goal_util.m"
{
#line 1324 "goal_util.m"
  while (MR_TRUE)
#line 1324 "goal_util.m"
    {
#line 1324 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1324 "goal_util.m"
      {
#line 1324 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;

#line 1324 "goal_util.m"
        if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1324 "goal_util.m"
          *hlds__goal_util__STATE_VARIABLE_CalledSet_4 = hlds__goal_util__STATE_VARIABLE_CalledSet_0_3;
#line 1324 "goal_util.m"
        else
#line 1325 "goal_util.m"
          {
#line 1325 "goal_util.m"
            MR_Word hlds__goal_util__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1325 "goal_util.m"
            MR_Word hlds__goal_util__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1325 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_15_15;

#line 1326 "goal_util.m"
            {
#line 1326 "goal_util.m"
              hlds__goal_util__goal_calls_proc_in_list_2_4_p_0(hlds__goal_util__Goal_9, hlds__goal_util__PredProcIds_2, hlds__goal_util__STATE_VARIABLE_CalledSet_0_3, &hlds__goal_util__STATE_VARIABLE_CalledSet_15_15);
            }
#line 1327 "goal_util.m"
            /* direct tailcall eliminated */
#line 1327 "goal_util.m"
            {
#line 1327 "goal_util.m"
              MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Goals_10;
#line 1327 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0__tmp_copy_3 = hlds__goal_util__STATE_VARIABLE_CalledSet_15_15;

#line 1327 "goal_util.m"
              hlds__goal_util__STATE_VARIABLE_CalledSet_0_3 = hlds__goal_util__STATE_VARIABLE_CalledSet_0__tmp_copy_3;
#line 1327 "goal_util.m"
              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1327 "goal_util.m"
            }
#line 1327 "goal_util.m"
            continue;
#line 1325 "goal_util.m"
          }
#line 1324 "goal_util.m"
      }
#line 1324 "goal_util.m"
      break;
#line 1324 "goal_util.m"
    }
#line 1320 "goal_util.m"
}

#line 1256 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_calls_proc_in_list_2_4_p_0(
#line 1256 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1256 "goal_util.m"
  MR_Word hlds__goal_util__PredProcIds_7,
#line 1256 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0_58,
#line 1256 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_CalledSet_59)
#line 1256 "goal_util.m"
{
#line 1260 "goal_util.m"
  while (MR_TRUE)
#line 1260 "goal_util.m"
    {
#line 1260 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1260 "goal_util.m"
      {
#line 1260 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;
#line 1260 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1259 "goal_util.m"
        MR_Word hlds__goal_util___GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1263 "goal_util.m"
#line 1263 "goal_util.m"
        switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_5)) {
#line 1263 "goal_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1263 "goal_util.m"
          case (MR_Integer) 0:
#line 1289 "goal_util.m"
            {
#line 1289 "goal_util.m"
              MR_Word hlds__goal_util__Goal_41 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_5), (MR_Integer) 0);

#line 1290 "goal_util.m"
              /* direct tailcall eliminated */
#line 1290 "goal_util.m"
              {
#line 1290 "goal_util.m"
                MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Goal_41;

#line 1290 "goal_util.m"
                hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1290 "goal_util.m"
              }
#line 1290 "goal_util.m"
              continue;
#line 1289 "goal_util.m"
            }
#line 1263 "goal_util.m"
            break;
#line 1263 "goal_util.m"
          case (MR_Integer) 1:
#line 1262 "goal_util.m"
            *hlds__goal_util__STATE_VARIABLE_CalledSet_59 = hlds__goal_util__STATE_VARIABLE_CalledSet_0_58;
#line 1263 "goal_util.m"
            break;
#line 1263 "goal_util.m"
          case (MR_Integer) 2:
#line 1264 "goal_util.m"
            {
#line 1264 "goal_util.m"
              MR_Word hlds__goal_util__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_5, (MR_Integer) 0)));
#line 1264 "goal_util.m"
              MR_Integer hlds__goal_util__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));
#line 1264 "goal_util.m"
              MR_Word hlds__goal_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));
#line 1264 "goal_util.m"
              MR_Word hlds__goal_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_5, (MR_Integer) 3)));
#line 1264 "goal_util.m"
              MR_Word hlds__goal_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_5, (MR_Integer) 4)));
#line 1264 "goal_util.m"
              MR_Word hlds__goal_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_5, (MR_Integer) 5)));
#line 1267 "goal_util.m"
              MR_Word hlds__goal_util__V_74_74;

#line 1265 "goal_util.m"
              {
#line 1265 "goal_util.m"
                hlds__goal_util__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1265 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__V_74_74, 0) = ((MR_Box) (hlds__goal_util__PredId_14));
#line 1265 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__V_74_74, 1) = ((MR_Box) (hlds__goal_util__ProcId_15));
#line 1265 "goal_util.m"
              }
#line 1265 "goal_util.m"
              {
#line 1265 "goal_util.m"
                hlds__goal_util__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (hlds__goal_util__V_74_74)), hlds__goal_util__PredProcIds_7);
              }
#line 1267 "goal_util.m"
              if (hlds__goal_util__succeeded)
#line 1266 "goal_util.m"
                {
#line 1266 "goal_util.m"
                  {
#line 1266 "goal_util.m"
                    mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (hlds__goal_util__V_74_74)), hlds__goal_util__STATE_VARIABLE_CalledSet_0_58, hlds__goal_util__STATE_VARIABLE_CalledSet_59);
                  }
#line 1266 "goal_util.m"
                }
#line 1267 "goal_util.m"
              else
#line 1267 "goal_util.m"
                *hlds__goal_util__STATE_VARIABLE_CalledSet_59 = hlds__goal_util__STATE_VARIABLE_CalledSet_0_58;
#line 1264 "goal_util.m"
            }
#line 1263 "goal_util.m"
            break;
#line 1263 "goal_util.m"
          case (MR_Integer) 3:
#line 1263 "goal_util.m"
#line 1263 "goal_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 0)))) {
#line 1263 "goal_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1263 "goal_util.m"
              case (MR_Integer) 0:
#line 1271 "goal_util.m"
                *hlds__goal_util__STATE_VARIABLE_CalledSet_59 = hlds__goal_util__STATE_VARIABLE_CalledSet_0_58;
#line 1263 "goal_util.m"
                break;
#line 1263 "goal_util.m"
              case (MR_Integer) 1:
#line 1273 "goal_util.m"
                *hlds__goal_util__STATE_VARIABLE_CalledSet_59 = hlds__goal_util__STATE_VARIABLE_CalledSet_0_58;
#line 1263 "goal_util.m"
                break;
#line 1263 "goal_util.m"
              case (MR_Integer) 2:
#line 1275 "goal_util.m"
                {
#line 1275 "goal_util.m"
                  MR_Word hlds__goal_util__Goals_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));
#line 1275 "goal_util.m"
                  MR_Word hlds__goal_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));

#line 1276 "goal_util.m"
                  {
#line 1276 "goal_util.m"
                    hlds__goal_util__goal_list_calls_proc_in_list_2_4_p_0(hlds__goal_util__Goals_33, hlds__goal_util__PredProcIds_7, hlds__goal_util__STATE_VARIABLE_CalledSet_0_58, hlds__goal_util__STATE_VARIABLE_CalledSet_59);
                  }
#line 1275 "goal_util.m"
                }
#line 1263 "goal_util.m"
                break;
#line 1263 "goal_util.m"
              case (MR_Integer) 3:
#line 1278 "goal_util.m"
                {
#line 1278 "goal_util.m"
                  MR_Word hlds__goal_util__Goals_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));

#line 1279 "goal_util.m"
                  {
#line 1279 "goal_util.m"
                    hlds__goal_util__goal_list_calls_proc_in_list_2_4_p_0(hlds__goal_util__Goals_77, hlds__goal_util__PredProcIds_7, hlds__goal_util__STATE_VARIABLE_CalledSet_0_58, hlds__goal_util__STATE_VARIABLE_CalledSet_59);
                  }
#line 1278 "goal_util.m"
                }
#line 1263 "goal_util.m"
                break;
#line 1263 "goal_util.m"
              case (MR_Integer) 4:
#line 1281 "goal_util.m"
                {
#line 1281 "goal_util.m"
                  MR_Word hlds__goal_util__Cases_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 3)));
#line 1281 "goal_util.m"
                  MR_Word hlds__goal_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));
#line 1281 "goal_util.m"
                  MR_Word hlds__goal_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));

#line 1282 "goal_util.m"
                  {
#line 1282 "goal_util.m"
                    hlds__goal_util__case_list_calls_proc_in_list_4_p_0(hlds__goal_util__Cases_36, hlds__goal_util__PredProcIds_7, hlds__goal_util__STATE_VARIABLE_CalledSet_0_58, hlds__goal_util__STATE_VARIABLE_CalledSet_59);
                  }
#line 1281 "goal_util.m"
                }
#line 1263 "goal_util.m"
                break;
#line 1263 "goal_util.m"
              case (MR_Integer) 5:
#line 1292 "goal_util.m"
                {
#line 1292 "goal_util.m"
                  MR_Word hlds__goal_util__Reason_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));
#line 1292 "goal_util.m"
                  MR_Word hlds__goal_util__Goal_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));
#line 1294 "goal_util.m"
                  MR_Word hlds__goal_util__FGT_44;
#line 1294 "goal_util.m"
                  MR_Word hlds__goal_util__V_43_43;

#line 1294 "goal_util.m"
                  hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_42, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1294 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 1294 "goal_util.m"
                    {
#line 1294 "goal_util.m"
                      hlds__goal_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_42, (MR_Integer) 1)));
#line 1294 "goal_util.m"
                      hlds__goal_util__FGT_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_42, (MR_Integer) 2)));
#line 1296 "goal_util.m"
#line 1296 "goal_util.m"
                      switch (hlds__goal_util__FGT_44) {
#line 1296 "goal_util.m"
                        default:
#line 1296 "goal_util.m"
                          hlds__goal_util__succeeded = MR_FALSE;
#line 1296 "goal_util.m"
                          break;
#line 1296 "goal_util.m"
                        case (MR_Integer) 1:
#line 1295 "goal_util.m"
                          hlds__goal_util__succeeded = MR_TRUE;
#line 1296 "goal_util.m"
                          break;
#line 1296 "goal_util.m"
                        case (MR_Integer) 2:
#line 1296 "goal_util.m"
                          hlds__goal_util__succeeded = MR_TRUE;
#line 1296 "goal_util.m"
                          break;
#line 1296 "goal_util.m"
                      }
#line 1294 "goal_util.m"
                    }
#line 1301 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 1301 "goal_util.m"
                    *hlds__goal_util__STATE_VARIABLE_CalledSet_59 = hlds__goal_util__STATE_VARIABLE_CalledSet_0_58;
#line 1301 "goal_util.m"
                  else
#line 1302 "goal_util.m"
                    {
#line 1302 "goal_util.m"
                      /* direct tailcall eliminated */
#line 1302 "goal_util.m"
                      {
#line 1302 "goal_util.m"
                        MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Goal_78;

#line 1302 "goal_util.m"
                        hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1302 "goal_util.m"
                      }
#line 1302 "goal_util.m"
                      continue;
#line 1302 "goal_util.m"
                    }
#line 1292 "goal_util.m"
                }
#line 1263 "goal_util.m"
                break;
#line 1263 "goal_util.m"
              case (MR_Integer) 6:
#line 1284 "goal_util.m"
                {
#line 1284 "goal_util.m"
                  MR_Word hlds__goal_util__Cond_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));
#line 1284 "goal_util.m"
                  MR_Word hlds__goal_util__Then_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 3)));
#line 1284 "goal_util.m"
                  MR_Word hlds__goal_util__Else_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 4)));
#line 1284 "goal_util.m"
                  MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_68_68;
#line 1284 "goal_util.m"
                  MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_69_69;
#line 1284 "goal_util.m"
                  MR_Word hlds__goal_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));

#line 1285 "goal_util.m"
                  {
#line 1285 "goal_util.m"
                    hlds__goal_util__goal_calls_proc_in_list_2_4_p_0(hlds__goal_util__Cond_38, hlds__goal_util__PredProcIds_7, hlds__goal_util__STATE_VARIABLE_CalledSet_0_58, &hlds__goal_util__STATE_VARIABLE_CalledSet_68_68);
                  }
#line 1286 "goal_util.m"
                  {
#line 1286 "goal_util.m"
                    hlds__goal_util__goal_calls_proc_in_list_2_4_p_0(hlds__goal_util__Then_39, hlds__goal_util__PredProcIds_7, hlds__goal_util__STATE_VARIABLE_CalledSet_68_68, &hlds__goal_util__STATE_VARIABLE_CalledSet_69_69);
                  }
#line 1287 "goal_util.m"
                  /* direct tailcall eliminated */
#line 1287 "goal_util.m"
                  {
#line 1287 "goal_util.m"
                    MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Else_40;
#line 1287 "goal_util.m"
                    MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0__tmp_copy_58 = hlds__goal_util__STATE_VARIABLE_CalledSet_69_69;

#line 1287 "goal_util.m"
                    hlds__goal_util__STATE_VARIABLE_CalledSet_0_58 = hlds__goal_util__STATE_VARIABLE_CalledSet_0__tmp_copy_58;
#line 1287 "goal_util.m"
                    hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1287 "goal_util.m"
                  }
#line 1287 "goal_util.m"
                  continue;
#line 1284 "goal_util.m"
                }
#line 1263 "goal_util.m"
                break;
#line 1263 "goal_util.m"
              case (MR_Integer) 7:
#line 1305 "goal_util.m"
                {
#line 1305 "goal_util.m"
                  MR_Word hlds__goal_util__ShortHand_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));

#line 1311 "goal_util.m"
#line 1311 "goal_util.m"
                  switch (MR_tag((MR_Word) hlds__goal_util__ShortHand_45)) {
#line 1311 "goal_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1311 "goal_util.m"
                    case (MR_Integer) 0:
#line 1315 "goal_util.m"
                      {
#line 1316 "goal_util.m"
                        {
#line 1316 "goal_util.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "predicate \140hlds.goal_util.goal_calls_proc_in_list_2\'/4", (MR_String) "bi_implication");
#line 1316 "goal_util.m"
                          return;
                        }
#line 1315 "goal_util.m"
                      }
#line 1311 "goal_util.m"
                      break;
#line 1311 "goal_util.m"
                    case (MR_Integer) 1:
#line 1307 "goal_util.m"
                      {
#line 1307 "goal_util.m"
                        MR_Word hlds__goal_util__MainGoal_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_45, (MR_Integer) 4)));
#line 1307 "goal_util.m"
                        MR_Word hlds__goal_util__OrElseGoals_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_45, (MR_Integer) 5)));
#line 1307 "goal_util.m"
                        MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_64_64;
#line 1307 "goal_util.m"
                        MR_Word hlds__goal_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_45, (MR_Integer) 0)));
#line 1307 "goal_util.m"
                        MR_Word hlds__goal_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_45, (MR_Integer) 1)));
#line 1307 "goal_util.m"
                        MR_Word hlds__goal_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_45, (MR_Integer) 2)));
#line 1307 "goal_util.m"
                        MR_Word hlds__goal_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_45, (MR_Integer) 3)));
#line 1307 "goal_util.m"
                        MR_Word hlds__goal_util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_45, (MR_Integer) 6)));

#line 1308 "goal_util.m"
                        {
#line 1308 "goal_util.m"
                          hlds__goal_util__goal_calls_proc_in_list_2_4_p_0(hlds__goal_util__MainGoal_50, hlds__goal_util__PredProcIds_7, hlds__goal_util__STATE_VARIABLE_CalledSet_0_58, &hlds__goal_util__STATE_VARIABLE_CalledSet_64_64);
                        }
#line 1309 "goal_util.m"
                        {
#line 1309 "goal_util.m"
                          hlds__goal_util__goal_list_calls_proc_in_list_2_4_p_0(hlds__goal_util__OrElseGoals_51, hlds__goal_util__PredProcIds_7, hlds__goal_util__STATE_VARIABLE_CalledSet_64_64, hlds__goal_util__STATE_VARIABLE_CalledSet_59);
                        }
#line 1307 "goal_util.m"
                      }
#line 1311 "goal_util.m"
                      break;
#line 1311 "goal_util.m"
                    case (MR_Integer) 2:
#line 1312 "goal_util.m"
                      {
#line 1312 "goal_util.m"
                        MR_Word hlds__goal_util__SubGoal_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_45, (MR_Integer) 2)));
#line 1312 "goal_util.m"
                        MR_Word hlds__goal_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_45, (MR_Integer) 0)));
#line 1312 "goal_util.m"
                        MR_Word hlds__goal_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_45, (MR_Integer) 1)));

#line 1313 "goal_util.m"
                        /* direct tailcall eliminated */
#line 1313 "goal_util.m"
                        {
#line 1313 "goal_util.m"
                          MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__SubGoal_55;

#line 1313 "goal_util.m"
                          hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1313 "goal_util.m"
                        }
#line 1313 "goal_util.m"
                        continue;
#line 1312 "goal_util.m"
                      }
#line 1311 "goal_util.m"
                      break;
#line 1311 "goal_util.m"
                  }
#line 1305 "goal_util.m"
                }
#line 1263 "goal_util.m"
                break;
#line 1263 "goal_util.m"
            }
#line 1263 "goal_util.m"
            break;
#line 1263 "goal_util.m"
        }
#line 1260 "goal_util.m"
      }
#line 1260 "goal_util.m"
      break;
#line 1260 "goal_util.m"
    }
#line 1256 "goal_util.m"
}

#line 1199 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_expr_calls_pred_id_2_p_1(
#line 1199 "goal_util.m"
  MR_Word hlds__goal_util__GoalExpr_3,
#line 1199 "goal_util.m"
  MR_Word * hlds__goal_util__PredId_4,
#line 1199 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1199 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 1199 "goal_util.m"
{
#line 1206 "goal_util.m"
  while (MR_TRUE)
#line 1206 "goal_util.m"
    {
#line 1206 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1206 "goal_util.m"
      {
#line 1206 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;

#line 1206 "goal_util.m"
#line 1206 "goal_util.m"
        switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) {
#line 1206 "goal_util.m"
          case (MR_Integer) 0:
#line 1219 "goal_util.m"
            {
#line 1219 "goal_util.m"
              MR_Word hlds__goal_util__SubGoal_15 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_3), (MR_Integer) 0);
#line 1219 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__SubGoal_15, (MR_Integer) 0)));
#line 1172 "goal_util.m"
              MR_Word hlds__goal_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__SubGoal_15, (MR_Integer) 1)));

#line 1173 "goal_util.m"
              /* direct tailcall eliminated */
#line 1173 "goal_util.m"
              {
#line 1173 "goal_util.m"
                MR_Word hlds__goal_util__GoalExpr__tmp_copy_3 = hlds__goal_util__GoalExpr_53;

#line 1173 "goal_util.m"
                hlds__goal_util__GoalExpr_3 = hlds__goal_util__GoalExpr__tmp_copy_3;
#line 1173 "goal_util.m"
              }
#line 1173 "goal_util.m"
              continue;
#line 1219 "goal_util.m"
            }
#line 1206 "goal_util.m"
            break;
#line 1206 "goal_util.m"
          case (MR_Integer) 2:
#line 1236 "goal_util.m"
            {
#line 1236 "goal_util.m"
              MR_Integer hlds__goal_util__V_19_19;
#line 1236 "goal_util.m"
              MR_Word hlds__goal_util__V_20_20;
#line 1236 "goal_util.m"
              MR_Word hlds__goal_util__V_21_21;
#line 1236 "goal_util.m"
              MR_Word hlds__goal_util__V_22_22;
#line 1236 "goal_util.m"
              MR_Word hlds__goal_util__V_23_23;

#line 1236 "goal_util.m"
              *hlds__goal_util__PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)));
#line 1236 "goal_util.m"
              hlds__goal_util__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 1236 "goal_util.m"
              hlds__goal_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 1236 "goal_util.m"
              hlds__goal_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
#line 1236 "goal_util.m"
              hlds__goal_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));
#line 1236 "goal_util.m"
              hlds__goal_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 5)));
#line 1236 "goal_util.m"
              {
#line 1236 "goal_util.m"
                hlds__goal_util__cont(hlds__goal_util__cont_env_ptr);
              }
#line 1236 "goal_util.m"
            }
#line 1206 "goal_util.m"
            break;
#line 1206 "goal_util.m"
          case (MR_Integer) 3:
#line 1206 "goal_util.m"
#line 1206 "goal_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) {
#line 1206 "goal_util.m"
              case (MR_Integer) 2:
#line 1204 "goal_util.m"
                {
#line 1204 "goal_util.m"
                  MR_Word hlds__goal_util__Conjuncts_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 1204 "goal_util.m"
                  MR_Word hlds__goal_util___ConjType_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

#line 1205 "goal_util.m"
                  {
#line 1205 "goal_util.m"
                    hlds__goal_util__goals_calls_pred_id_2_p_1(hlds__goal_util__Conjuncts_6, hlds__goal_util__PredId_4, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
#line 1204 "goal_util.m"
                }
#line 1206 "goal_util.m"
                break;
#line 1206 "goal_util.m"
              case (MR_Integer) 3:
#line 1207 "goal_util.m"
                {
#line 1207 "goal_util.m"
                  MR_Word hlds__goal_util__Disjuncts_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

#line 1208 "goal_util.m"
                  {
#line 1208 "goal_util.m"
                    hlds__goal_util__goals_calls_pred_id_2_p_1(hlds__goal_util__Disjuncts_7, hlds__goal_util__PredId_4, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
#line 1207 "goal_util.m"
                }
#line 1206 "goal_util.m"
                break;
#line 1206 "goal_util.m"
              case (MR_Integer) 4:
#line 1210 "goal_util.m"
                {
#line 1210 "goal_util.m"
                  MR_Word hlds__goal_util__Cases_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
#line 1210 "goal_util.m"
                  MR_Word hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 1210 "goal_util.m"
                  MR_Word hlds__goal_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));

#line 1211 "goal_util.m"
                  {
#line 1211 "goal_util.m"
                    hlds__goal_util__cases_calls_pred_id_2_p_1(hlds__goal_util__Cases_10, hlds__goal_util__PredId_4, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
#line 1210 "goal_util.m"
                }
#line 1206 "goal_util.m"
                break;
#line 1206 "goal_util.m"
              case (MR_Integer) 5:
#line 1222 "goal_util.m"
                {
#line 1222 "goal_util.m"
                  MR_Word hlds__goal_util__Reason_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 1222 "goal_util.m"
                  MR_Word hlds__goal_util__SubGoal_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 1224 "goal_util.m"
                  MR_Word hlds__goal_util__FGT_18;
#line 1224 "goal_util.m"
                  MR_Word hlds__goal_util__V_17_17;

#line 1224 "goal_util.m"
                  hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_16, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1224 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 1224 "goal_util.m"
                    {
#line 1224 "goal_util.m"
                      hlds__goal_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_16, (MR_Integer) 1)));
#line 1224 "goal_util.m"
                      hlds__goal_util__FGT_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_16, (MR_Integer) 2)));
#line 1226 "goal_util.m"
#line 1226 "goal_util.m"
                      switch (hlds__goal_util__FGT_18) {
#line 1226 "goal_util.m"
                        default:
#line 1226 "goal_util.m"
                          hlds__goal_util__succeeded = MR_FALSE;
#line 1226 "goal_util.m"
                          break;
#line 1226 "goal_util.m"
                        case (MR_Integer) 1:
#line 1225 "goal_util.m"
                          hlds__goal_util__succeeded = MR_TRUE;
#line 1226 "goal_util.m"
                          break;
#line 1226 "goal_util.m"
                        case (MR_Integer) 2:
#line 1226 "goal_util.m"
                          hlds__goal_util__succeeded = MR_TRUE;
#line 1226 "goal_util.m"
                          break;
#line 1226 "goal_util.m"
                      }
#line 1224 "goal_util.m"
                    }
#line 1232 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 1231 "goal_util.m"
                    {
#line 1231 "goal_util.m"
                      hlds__goal_util__succeeded = MR_FALSE;
#line 1231 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 1231 "goal_util.m"
                        {
#line 1231 "goal_util.m"
                          hlds__goal_util__cont(hlds__goal_util__cont_env_ptr);
                        }
#line 1231 "goal_util.m"
                    }
#line 1232 "goal_util.m"
                  else
#line 1172 "goal_util.m"
                    {
#line 1172 "goal_util.m"
                      MR_Word hlds__goal_util__GoalExpr_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__SubGoal_42, (MR_Integer) 0)));
#line 1172 "goal_util.m"
                      MR_Word hlds__goal_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__SubGoal_42, (MR_Integer) 1)));

#line 1173 "goal_util.m"
                      /* direct tailcall eliminated */
#line 1173 "goal_util.m"
                      {
#line 1173 "goal_util.m"
                        MR_Word hlds__goal_util__GoalExpr__tmp_copy_3 = hlds__goal_util__GoalExpr_56;

#line 1173 "goal_util.m"
                        hlds__goal_util__GoalExpr_3 = hlds__goal_util__GoalExpr__tmp_copy_3;
#line 1173 "goal_util.m"
                      }
#line 1173 "goal_util.m"
                      continue;
#line 1172 "goal_util.m"
                    }
#line 1222 "goal_util.m"
                }
#line 1206 "goal_util.m"
                break;
#line 1206 "goal_util.m"
              case (MR_Integer) 6:
#line 1213 "goal_util.m"
                {
#line 1213 "goal_util.m"
                  MR_Word hlds__goal_util__Cond_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 1213 "goal_util.m"
                  MR_Word hlds__goal_util__Then_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
#line 1213 "goal_util.m"
                  MR_Word hlds__goal_util__Else_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));
#line 1213 "goal_util.m"
                  MR_Word hlds__goal_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

#line 1172 "goal_util.m"
                  {
#line 1172 "goal_util.m"
                    MR_Word hlds__goal_util__GoalExpr_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_12, (MR_Integer) 0)));
#line 1172 "goal_util.m"
                    MR_Word hlds__goal_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_12, (MR_Integer) 1)));

#line 1173 "goal_util.m"
                    {
#line 1173 "goal_util.m"
                      hlds__goal_util__goal_expr_calls_pred_id_2_p_1(hlds__goal_util__GoalExpr_44, hlds__goal_util__PredId_4, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                    }
#line 1172 "goal_util.m"
                  }
#line 1172 "goal_util.m"
                  {
#line 1172 "goal_util.m"
                    MR_Word hlds__goal_util__GoalExpr_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Then_13, (MR_Integer) 0)));
#line 1172 "goal_util.m"
                    MR_Word hlds__goal_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Then_13, (MR_Integer) 1)));

#line 1173 "goal_util.m"
                    {
#line 1173 "goal_util.m"
                      hlds__goal_util__goal_expr_calls_pred_id_2_p_1(hlds__goal_util__GoalExpr_47, hlds__goal_util__PredId_4, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                    }
#line 1172 "goal_util.m"
                  }
#line 1172 "goal_util.m"
                  {
#line 1172 "goal_util.m"
                    MR_Word hlds__goal_util__GoalExpr_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Else_14, (MR_Integer) 0)));
#line 1172 "goal_util.m"
                    MR_Word hlds__goal_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Else_14, (MR_Integer) 1)));

#line 1173 "goal_util.m"
                    /* direct tailcall eliminated */
#line 1173 "goal_util.m"
                    {
#line 1173 "goal_util.m"
                      MR_Word hlds__goal_util__GoalExpr__tmp_copy_3 = hlds__goal_util__GoalExpr_50;

#line 1173 "goal_util.m"
                      hlds__goal_util__GoalExpr_3 = hlds__goal_util__GoalExpr__tmp_copy_3;
#line 1173 "goal_util.m"
                    }
#line 1173 "goal_util.m"
                    continue;
#line 1172 "goal_util.m"
                  }
#line 1213 "goal_util.m"
                }
#line 1206 "goal_util.m"
                break;
#line 1206 "goal_util.m"
            }
#line 1206 "goal_util.m"
            break;
#line 1206 "goal_util.m"
        }
#line 1206 "goal_util.m"
      }
#line 1206 "goal_util.m"
      break;
#line 1206 "goal_util.m"
    }
#line 1199 "goal_util.m"
}

#line 1198 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__goal_expr_calls_pred_id_2_p_0(
#line 1198 "goal_util.m"
  MR_Word hlds__goal_util__GoalExpr_3,
#line 1198 "goal_util.m"
  MR_Word hlds__goal_util__PredId_4)
#line 1198 "goal_util.m"
{
#line 1206 "goal_util.m"
  while (MR_TRUE)
#line 1206 "goal_util.m"
    {
#line 1206 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1206 "goal_util.m"
      {
#line 1206 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;

#line 1206 "goal_util.m"
#line 1206 "goal_util.m"
        switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) {
#line 1206 "goal_util.m"
          default:
#line 1206 "goal_util.m"
            hlds__goal_util__succeeded = MR_FALSE;
#line 1206 "goal_util.m"
            break;
#line 1206 "goal_util.m"
          case (MR_Integer) 0:
#line 1219 "goal_util.m"
            {
#line 1219 "goal_util.m"
              MR_Word hlds__goal_util__SubGoal_15 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_3), (MR_Integer) 0);
#line 1219 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__SubGoal_15, (MR_Integer) 0)));
#line 1172 "goal_util.m"
              MR_Word hlds__goal_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__SubGoal_15, (MR_Integer) 1)));

#line 1173 "goal_util.m"
              /* direct tailcall eliminated */
#line 1173 "goal_util.m"
              {
#line 1173 "goal_util.m"
                MR_Word hlds__goal_util__GoalExpr__tmp_copy_3 = hlds__goal_util__GoalExpr_55;

#line 1173 "goal_util.m"
                hlds__goal_util__GoalExpr_3 = hlds__goal_util__GoalExpr__tmp_copy_3;
#line 1173 "goal_util.m"
              }
#line 1173 "goal_util.m"
              continue;
#line 1219 "goal_util.m"
            }
#line 1206 "goal_util.m"
            break;
#line 1206 "goal_util.m"
          case (MR_Integer) 2:
#line 1236 "goal_util.m"
            {
#line 1236 "goal_util.m"
              MR_Word hlds__goal_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)));
#line 1236 "goal_util.m"
              MR_Integer hlds__goal_util__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 1236 "goal_util.m"
              MR_Word hlds__goal_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 1236 "goal_util.m"
              MR_Word hlds__goal_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
#line 1236 "goal_util.m"
              MR_Word hlds__goal_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));
#line 1236 "goal_util.m"
              MR_Word hlds__goal_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 5)));

#line 1236 "goal_util.m"
              {
#line 1236 "goal_util.m"
                hlds__goal_util__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__goal_util__PredId_4, hlds__goal_util__V_43_43);
              }
#line 1236 "goal_util.m"
            }
#line 1206 "goal_util.m"
            break;
#line 1206 "goal_util.m"
          case (MR_Integer) 3:
#line 1206 "goal_util.m"
#line 1206 "goal_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) {
#line 1206 "goal_util.m"
              default:
#line 1206 "goal_util.m"
                hlds__goal_util__succeeded = MR_FALSE;
#line 1206 "goal_util.m"
                break;
#line 1206 "goal_util.m"
              case (MR_Integer) 2:
#line 1204 "goal_util.m"
                {
#line 1204 "goal_util.m"
                  MR_Word hlds__goal_util__Conjuncts_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 1204 "goal_util.m"
                  MR_Word hlds__goal_util___ConjType_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

#line 1205 "goal_util.m"
                  {
#line 1205 "goal_util.m"
                    hlds__goal_util__succeeded = hlds__goal_util__goals_calls_pred_id_2_p_0(hlds__goal_util__Conjuncts_6, hlds__goal_util__PredId_4);
                  }
#line 1204 "goal_util.m"
                }
#line 1206 "goal_util.m"
                break;
#line 1206 "goal_util.m"
              case (MR_Integer) 3:
#line 1207 "goal_util.m"
                {
#line 1207 "goal_util.m"
                  MR_Word hlds__goal_util__Disjuncts_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

#line 1208 "goal_util.m"
                  {
#line 1208 "goal_util.m"
                    hlds__goal_util__succeeded = hlds__goal_util__goals_calls_pred_id_2_p_0(hlds__goal_util__Disjuncts_7, hlds__goal_util__PredId_4);
                  }
#line 1207 "goal_util.m"
                }
#line 1206 "goal_util.m"
                break;
#line 1206 "goal_util.m"
              case (MR_Integer) 4:
#line 1210 "goal_util.m"
                {
#line 1210 "goal_util.m"
                  MR_Word hlds__goal_util__Cases_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
#line 1210 "goal_util.m"
                  MR_Word hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 1210 "goal_util.m"
                  MR_Word hlds__goal_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));

#line 1211 "goal_util.m"
                  {
#line 1211 "goal_util.m"
                    hlds__goal_util__succeeded = hlds__goal_util__cases_calls_pred_id_2_p_0(hlds__goal_util__Cases_10, hlds__goal_util__PredId_4);
                  }
#line 1210 "goal_util.m"
                }
#line 1206 "goal_util.m"
                break;
#line 1206 "goal_util.m"
              case (MR_Integer) 5:
#line 1222 "goal_util.m"
                {
#line 1222 "goal_util.m"
                  MR_Word hlds__goal_util__Reason_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 1222 "goal_util.m"
                  MR_Word hlds__goal_util__SubGoal_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 1224 "goal_util.m"
                  MR_Word hlds__goal_util__FGT_18;
#line 1224 "goal_util.m"
                  MR_Word hlds__goal_util__V_17_17;

#line 1224 "goal_util.m"
                  hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_16, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1224 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 1224 "goal_util.m"
                    {
#line 1224 "goal_util.m"
                      hlds__goal_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_16, (MR_Integer) 1)));
#line 1224 "goal_util.m"
                      hlds__goal_util__FGT_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_16, (MR_Integer) 2)));
#line 1226 "goal_util.m"
#line 1226 "goal_util.m"
                      switch (hlds__goal_util__FGT_18) {
#line 1226 "goal_util.m"
                        default:
#line 1226 "goal_util.m"
                          hlds__goal_util__succeeded = MR_FALSE;
#line 1226 "goal_util.m"
                          break;
#line 1226 "goal_util.m"
                        case (MR_Integer) 1:
#line 1225 "goal_util.m"
                          hlds__goal_util__succeeded = MR_TRUE;
#line 1226 "goal_util.m"
                          break;
#line 1226 "goal_util.m"
                        case (MR_Integer) 2:
#line 1226 "goal_util.m"
                          hlds__goal_util__succeeded = MR_TRUE;
#line 1226 "goal_util.m"
                          break;
#line 1226 "goal_util.m"
                      }
#line 1224 "goal_util.m"
                    }
#line 1232 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 1231 "goal_util.m"
                    hlds__goal_util__succeeded = MR_FALSE;
#line 1232 "goal_util.m"
                  else
#line 1172 "goal_util.m"
                    {
#line 1172 "goal_util.m"
                      MR_Word hlds__goal_util__GoalExpr_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__SubGoal_42, (MR_Integer) 0)));
#line 1172 "goal_util.m"
                      MR_Word hlds__goal_util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__SubGoal_42, (MR_Integer) 1)));

#line 1173 "goal_util.m"
                      /* direct tailcall eliminated */
#line 1173 "goal_util.m"
                      {
#line 1173 "goal_util.m"
                        MR_Word hlds__goal_util__GoalExpr__tmp_copy_3 = hlds__goal_util__GoalExpr_58;

#line 1173 "goal_util.m"
                        hlds__goal_util__GoalExpr_3 = hlds__goal_util__GoalExpr__tmp_copy_3;
#line 1173 "goal_util.m"
                      }
#line 1173 "goal_util.m"
                      continue;
#line 1172 "goal_util.m"
                    }
#line 1222 "goal_util.m"
                }
#line 1206 "goal_util.m"
                break;
#line 1206 "goal_util.m"
              case (MR_Integer) 6:
#line 1213 "goal_util.m"
                {
#line 1213 "goal_util.m"
                  MR_Word hlds__goal_util__Cond_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 1213 "goal_util.m"
                  MR_Word hlds__goal_util__Then_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
#line 1213 "goal_util.m"
                  MR_Word hlds__goal_util__Else_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));
#line 1213 "goal_util.m"
                  MR_Word hlds__goal_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

#line 1172 "goal_util.m"
                  {
#line 1172 "goal_util.m"
                    MR_Word hlds__goal_util__GoalExpr_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_12, (MR_Integer) 0)));
#line 1172 "goal_util.m"
                    MR_Word hlds__goal_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_12, (MR_Integer) 1)));

#line 1173 "goal_util.m"
                    {
#line 1173 "goal_util.m"
                      hlds__goal_util__succeeded = hlds__goal_util__goal_expr_calls_pred_id_2_p_0(hlds__goal_util__GoalExpr_46, hlds__goal_util__PredId_4);
                    }
#line 1172 "goal_util.m"
                  }
#line 1215 "goal_util.m"
                  if (!(hlds__goal_util__succeeded))
#line 1215 "goal_util.m"
                    {
#line 1172 "goal_util.m"
                      {
#line 1172 "goal_util.m"
                        MR_Word hlds__goal_util__GoalExpr_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Then_13, (MR_Integer) 0)));
#line 1172 "goal_util.m"
                        MR_Word hlds__goal_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Then_13, (MR_Integer) 1)));

#line 1173 "goal_util.m"
                        {
#line 1173 "goal_util.m"
                          hlds__goal_util__succeeded = hlds__goal_util__goal_expr_calls_pred_id_2_p_0(hlds__goal_util__GoalExpr_49, hlds__goal_util__PredId_4);
                        }
#line 1172 "goal_util.m"
                      }
#line 1215 "goal_util.m"
                      if (!(hlds__goal_util__succeeded))
#line 1172 "goal_util.m"
                        {
#line 1172 "goal_util.m"
                          MR_Word hlds__goal_util__GoalExpr_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Else_14, (MR_Integer) 0)));
#line 1172 "goal_util.m"
                          MR_Word hlds__goal_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Else_14, (MR_Integer) 1)));

#line 1173 "goal_util.m"
                          /* direct tailcall eliminated */
#line 1173 "goal_util.m"
                          {
#line 1173 "goal_util.m"
                            MR_Word hlds__goal_util__GoalExpr__tmp_copy_3 = hlds__goal_util__GoalExpr_52;

#line 1173 "goal_util.m"
                            hlds__goal_util__GoalExpr_3 = hlds__goal_util__GoalExpr__tmp_copy_3;
#line 1173 "goal_util.m"
                          }
#line 1173 "goal_util.m"
                          continue;
#line 1172 "goal_util.m"
                        }
#line 1215 "goal_util.m"
                    }
#line 1213 "goal_util.m"
                }
#line 1206 "goal_util.m"
                break;
#line 1206 "goal_util.m"
            }
#line 1206 "goal_util.m"
            break;
#line 1206 "goal_util.m"
        }
#line 1206 "goal_util.m"
        return hlds__goal_util__succeeded;
#line 1206 "goal_util.m"
      }
#line 1206 "goal_util.m"
      break;
#line 1206 "goal_util.m"
    }
#line 1198 "goal_util.m"
}

#line 1188 "goal_util.m"
static void MR_CALL 
hlds__goal_util__cases_calls_pred_id_2_p_1(
#line 1188 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1188 "goal_util.m"
  MR_Word * hlds__goal_util__PredId_7,
#line 1188 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1188 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 1188 "goal_util.m"
{
#line 1190 "goal_util.m"
  while (MR_TRUE)
#line 1190 "goal_util.m"
    {
#line 1190 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1190 "goal_util.m"
      {
#line 1190 "goal_util.m"
        MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1190 "goal_util.m"
        MR_Word hlds__goal_util__Goal_5;
#line 1190 "goal_util.m"
        MR_Word hlds__goal_util__Cases_6;
#line 1190 "goal_util.m"
        MR_Word hlds__goal_util__V_8_8;
#line 1190 "goal_util.m"
        MR_Word hlds__goal_util__V_3_3;
#line 1190 "goal_util.m"
        MR_Word hlds__goal_util__V_4_4;

#line 1190 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1190 "goal_util.m"
          {
#line 1190 "goal_util.m"
            hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1190 "goal_util.m"
            hlds__goal_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1190 "goal_util.m"
            hlds__goal_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 0)));
#line 1190 "goal_util.m"
            hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 1)));
#line 1190 "goal_util.m"
            hlds__goal_util__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 2)));
#line 1172 "goal_util.m"
            {
#line 1172 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 0)));
#line 1172 "goal_util.m"
              MR_Word hlds__goal_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 1)));

#line 1173 "goal_util.m"
              {
#line 1173 "goal_util.m"
                hlds__goal_util__goal_expr_calls_pred_id_2_p_1(hlds__goal_util__GoalExpr_10, hlds__goal_util__PredId_7, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
              }
#line 1172 "goal_util.m"
            }
#line 1194 "goal_util.m"
            {
#line 1194 "goal_util.m"
              /* direct tailcall eliminated */
#line 1194 "goal_util.m"
              {
#line 1194 "goal_util.m"
                MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Cases_6;

#line 1194 "goal_util.m"
                hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1194 "goal_util.m"
              }
#line 1194 "goal_util.m"
              continue;
#line 1194 "goal_util.m"
            }
#line 1190 "goal_util.m"
          }
#line 1190 "goal_util.m"
      }
#line 1190 "goal_util.m"
      break;
#line 1190 "goal_util.m"
    }
#line 1188 "goal_util.m"
}

#line 1187 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__cases_calls_pred_id_2_p_0(
#line 1187 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1187 "goal_util.m"
  MR_Word hlds__goal_util__PredId_7)
#line 1187 "goal_util.m"
{
#line 1190 "goal_util.m"
  while (MR_TRUE)
#line 1190 "goal_util.m"
    {
#line 1190 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1190 "goal_util.m"
      {
#line 1190 "goal_util.m"
        MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1190 "goal_util.m"
        MR_Word hlds__goal_util__Goal_5;
#line 1190 "goal_util.m"
        MR_Word hlds__goal_util__Cases_6;
#line 1190 "goal_util.m"
        MR_Word hlds__goal_util__V_8_8;
#line 1190 "goal_util.m"
        MR_Word hlds__goal_util__V_3_3;
#line 1190 "goal_util.m"
        MR_Word hlds__goal_util__V_4_4;

#line 1190 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1190 "goal_util.m"
          {
#line 1190 "goal_util.m"
            hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1190 "goal_util.m"
            hlds__goal_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1190 "goal_util.m"
            hlds__goal_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 0)));
#line 1190 "goal_util.m"
            hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 1)));
#line 1190 "goal_util.m"
            hlds__goal_util__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 2)));
#line 1172 "goal_util.m"
            {
#line 1172 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 0)));
#line 1172 "goal_util.m"
              MR_Word hlds__goal_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 1)));

#line 1173 "goal_util.m"
              {
#line 1173 "goal_util.m"
                hlds__goal_util__succeeded = hlds__goal_util__goal_expr_calls_pred_id_2_p_0(hlds__goal_util__GoalExpr_10, hlds__goal_util__PredId_7);
              }
#line 1172 "goal_util.m"
            }
#line 1193 "goal_util.m"
            if (!(hlds__goal_util__succeeded))
#line 1194 "goal_util.m"
              {
#line 1194 "goal_util.m"
                /* direct tailcall eliminated */
#line 1194 "goal_util.m"
                {
#line 1194 "goal_util.m"
                  MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Cases_6;

#line 1194 "goal_util.m"
                  hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1194 "goal_util.m"
                }
#line 1194 "goal_util.m"
                continue;
#line 1194 "goal_util.m"
              }
#line 1190 "goal_util.m"
          }
#line 1190 "goal_util.m"
        return hlds__goal_util__succeeded;
#line 1190 "goal_util.m"
      }
#line 1190 "goal_util.m"
      break;
#line 1190 "goal_util.m"
    }
#line 1187 "goal_util.m"
}

#line 1177 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goals_calls_pred_id_2_p_1(
#line 1177 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1177 "goal_util.m"
  MR_Word * hlds__goal_util__PredId_5,
#line 1177 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1177 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 1177 "goal_util.m"
{
#line 1179 "goal_util.m"
  while (MR_TRUE)
#line 1179 "goal_util.m"
    {
#line 1179 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1179 "goal_util.m"
      {
#line 1179 "goal_util.m"
        MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1179 "goal_util.m"
        MR_Word hlds__goal_util__Goal_3;
#line 1179 "goal_util.m"
        MR_Word hlds__goal_util__Goals_4;

#line 1179 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1179 "goal_util.m"
          {
#line 1179 "goal_util.m"
            hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1179 "goal_util.m"
            hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1172 "goal_util.m"
            {
#line 1172 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 0)));
#line 1172 "goal_util.m"
              MR_Word hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 1)));

#line 1173 "goal_util.m"
              {
#line 1173 "goal_util.m"
                hlds__goal_util__goal_expr_calls_pred_id_2_p_1(hlds__goal_util__GoalExpr_7, hlds__goal_util__PredId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
              }
#line 1172 "goal_util.m"
            }
#line 1183 "goal_util.m"
            {
#line 1183 "goal_util.m"
              /* direct tailcall eliminated */
#line 1183 "goal_util.m"
              {
#line 1183 "goal_util.m"
                MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Goals_4;

#line 1183 "goal_util.m"
                hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1183 "goal_util.m"
              }
#line 1183 "goal_util.m"
              continue;
#line 1183 "goal_util.m"
            }
#line 1179 "goal_util.m"
          }
#line 1179 "goal_util.m"
      }
#line 1179 "goal_util.m"
      break;
#line 1179 "goal_util.m"
    }
#line 1177 "goal_util.m"
}

#line 1176 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__goals_calls_pred_id_2_p_0(
#line 1176 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1176 "goal_util.m"
  MR_Word hlds__goal_util__PredId_5)
#line 1176 "goal_util.m"
{
#line 1179 "goal_util.m"
  while (MR_TRUE)
#line 1179 "goal_util.m"
    {
#line 1179 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1179 "goal_util.m"
      {
#line 1179 "goal_util.m"
        MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1179 "goal_util.m"
        MR_Word hlds__goal_util__Goal_3;
#line 1179 "goal_util.m"
        MR_Word hlds__goal_util__Goals_4;

#line 1179 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1179 "goal_util.m"
          {
#line 1179 "goal_util.m"
            hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1179 "goal_util.m"
            hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1172 "goal_util.m"
            {
#line 1172 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 0)));
#line 1172 "goal_util.m"
              MR_Word hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 1)));

#line 1173 "goal_util.m"
              {
#line 1173 "goal_util.m"
                hlds__goal_util__succeeded = hlds__goal_util__goal_expr_calls_pred_id_2_p_0(hlds__goal_util__GoalExpr_7, hlds__goal_util__PredId_5);
              }
#line 1172 "goal_util.m"
            }
#line 1182 "goal_util.m"
            if (!(hlds__goal_util__succeeded))
#line 1183 "goal_util.m"
              {
#line 1183 "goal_util.m"
                /* direct tailcall eliminated */
#line 1183 "goal_util.m"
                {
#line 1183 "goal_util.m"
                  MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Goals_4;

#line 1183 "goal_util.m"
                  hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1183 "goal_util.m"
                }
#line 1183 "goal_util.m"
                continue;
#line 1183 "goal_util.m"
              }
#line 1179 "goal_util.m"
          }
#line 1179 "goal_util.m"
        return hlds__goal_util__succeeded;
#line 1179 "goal_util.m"
      }
#line 1179 "goal_util.m"
      break;
#line 1179 "goal_util.m"
    }
#line 1176 "goal_util.m"
}

#line 1115 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_expr_calls_2_p_1(
#line 1115 "goal_util.m"
  MR_Word hlds__goal_util__GoalExpr_3,
#line 1115 "goal_util.m"
  MR_Word * hlds__goal_util__PredProcId_4,
#line 1115 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1115 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 1115 "goal_util.m"
{
#line 1122 "goal_util.m"
  while (MR_TRUE)
#line 1122 "goal_util.m"
    {
#line 1122 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1122 "goal_util.m"
      {
#line 1122 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;

#line 1122 "goal_util.m"
#line 1122 "goal_util.m"
        switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) {
#line 1122 "goal_util.m"
          case (MR_Integer) 0:
#line 1135 "goal_util.m"
            {
#line 1135 "goal_util.m"
              MR_Word hlds__goal_util__SubGoal_15 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_3), (MR_Integer) 0);
#line 1135 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__SubGoal_15, (MR_Integer) 0)));
#line 1088 "goal_util.m"
              MR_Word hlds__goal_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__SubGoal_15, (MR_Integer) 1)));

#line 1089 "goal_util.m"
              /* direct tailcall eliminated */
#line 1089 "goal_util.m"
              {
#line 1089 "goal_util.m"
                MR_Word hlds__goal_util__GoalExpr__tmp_copy_3 = hlds__goal_util__GoalExpr_54;

#line 1089 "goal_util.m"
                hlds__goal_util__GoalExpr_3 = hlds__goal_util__GoalExpr__tmp_copy_3;
#line 1089 "goal_util.m"
              }
#line 1089 "goal_util.m"
              continue;
#line 1135 "goal_util.m"
            }
#line 1122 "goal_util.m"
            break;
#line 1122 "goal_util.m"
          case (MR_Integer) 2:
#line 1152 "goal_util.m"
            {
#line 1152 "goal_util.m"
              MR_Word hlds__goal_util__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)));
#line 1152 "goal_util.m"
              MR_Integer hlds__goal_util__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 1152 "goal_util.m"
              MR_Word hlds__goal_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 1152 "goal_util.m"
              MR_Word hlds__goal_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
#line 1152 "goal_util.m"
              MR_Word hlds__goal_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));
#line 1152 "goal_util.m"
              MR_Word hlds__goal_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 5)));

#line 1153 "goal_util.m"
              {
#line 1153 "goal_util.m"
                MR_Word base;
#line 1153 "goal_util.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1153 "goal_util.m"
                *hlds__goal_util__PredProcId_4 = base;
#line 1153 "goal_util.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__PredId_19));
#line 1153 "goal_util.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__ProcId_20));
#line 1153 "goal_util.m"
              }
#line 1152 "goal_util.m"
              {
#line 1152 "goal_util.m"
                hlds__goal_util__cont(hlds__goal_util__cont_env_ptr);
              }
#line 1152 "goal_util.m"
            }
#line 1122 "goal_util.m"
            break;
#line 1122 "goal_util.m"
          case (MR_Integer) 3:
#line 1122 "goal_util.m"
#line 1122 "goal_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) {
#line 1122 "goal_util.m"
              case (MR_Integer) 2:
#line 1120 "goal_util.m"
                {
#line 1120 "goal_util.m"
                  MR_Word hlds__goal_util__Conjuncts_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 1120 "goal_util.m"
                  MR_Word hlds__goal_util___ConjType_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

#line 1121 "goal_util.m"
                  {
#line 1121 "goal_util.m"
                    hlds__goal_util__goals_calls_2_p_1(hlds__goal_util__Conjuncts_6, hlds__goal_util__PredProcId_4, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
#line 1120 "goal_util.m"
                }
#line 1122 "goal_util.m"
                break;
#line 1122 "goal_util.m"
              case (MR_Integer) 3:
#line 1123 "goal_util.m"
                {
#line 1123 "goal_util.m"
                  MR_Word hlds__goal_util__Disjuncts_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

#line 1124 "goal_util.m"
                  {
#line 1124 "goal_util.m"
                    hlds__goal_util__goals_calls_2_p_1(hlds__goal_util__Disjuncts_7, hlds__goal_util__PredProcId_4, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
#line 1123 "goal_util.m"
                }
#line 1122 "goal_util.m"
                break;
#line 1122 "goal_util.m"
              case (MR_Integer) 4:
#line 1126 "goal_util.m"
                {
#line 1126 "goal_util.m"
                  MR_Word hlds__goal_util__Cases_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
#line 1126 "goal_util.m"
                  MR_Word hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 1126 "goal_util.m"
                  MR_Word hlds__goal_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));

#line 1127 "goal_util.m"
                  {
#line 1127 "goal_util.m"
                    hlds__goal_util__cases_calls_2_p_1(hlds__goal_util__Cases_10, hlds__goal_util__PredProcId_4, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
#line 1126 "goal_util.m"
                }
#line 1122 "goal_util.m"
                break;
#line 1122 "goal_util.m"
              case (MR_Integer) 5:
#line 1138 "goal_util.m"
                {
#line 1138 "goal_util.m"
                  MR_Word hlds__goal_util__Reason_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 1138 "goal_util.m"
                  MR_Word hlds__goal_util__SubGoal_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 1140 "goal_util.m"
                  MR_Word hlds__goal_util__FGT_18;
#line 1140 "goal_util.m"
                  MR_Word hlds__goal_util__V_17_17;

#line 1140 "goal_util.m"
                  hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_16, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1140 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 1140 "goal_util.m"
                    {
#line 1140 "goal_util.m"
                      hlds__goal_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_16, (MR_Integer) 1)));
#line 1140 "goal_util.m"
                      hlds__goal_util__FGT_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_16, (MR_Integer) 2)));
#line 1142 "goal_util.m"
#line 1142 "goal_util.m"
                      switch (hlds__goal_util__FGT_18) {
#line 1142 "goal_util.m"
                        default:
#line 1142 "goal_util.m"
                          hlds__goal_util__succeeded = MR_FALSE;
#line 1142 "goal_util.m"
                          break;
#line 1142 "goal_util.m"
                        case (MR_Integer) 1:
#line 1141 "goal_util.m"
                          hlds__goal_util__succeeded = MR_TRUE;
#line 1142 "goal_util.m"
                          break;
#line 1142 "goal_util.m"
                        case (MR_Integer) 2:
#line 1142 "goal_util.m"
                          hlds__goal_util__succeeded = MR_TRUE;
#line 1142 "goal_util.m"
                          break;
#line 1142 "goal_util.m"
                      }
#line 1140 "goal_util.m"
                    }
#line 1148 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 1147 "goal_util.m"
                    {
#line 1147 "goal_util.m"
                      hlds__goal_util__succeeded = MR_FALSE;
#line 1147 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 1147 "goal_util.m"
                        {
#line 1147 "goal_util.m"
                          hlds__goal_util__cont(hlds__goal_util__cont_env_ptr);
                        }
#line 1147 "goal_util.m"
                    }
#line 1148 "goal_util.m"
                  else
#line 1088 "goal_util.m"
                    {
#line 1088 "goal_util.m"
                      MR_Word hlds__goal_util__GoalExpr_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__SubGoal_43, (MR_Integer) 0)));
#line 1088 "goal_util.m"
                      MR_Word hlds__goal_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__SubGoal_43, (MR_Integer) 1)));

#line 1089 "goal_util.m"
                      /* direct tailcall eliminated */
#line 1089 "goal_util.m"
                      {
#line 1089 "goal_util.m"
                        MR_Word hlds__goal_util__GoalExpr__tmp_copy_3 = hlds__goal_util__GoalExpr_57;

#line 1089 "goal_util.m"
                        hlds__goal_util__GoalExpr_3 = hlds__goal_util__GoalExpr__tmp_copy_3;
#line 1089 "goal_util.m"
                      }
#line 1089 "goal_util.m"
                      continue;
#line 1088 "goal_util.m"
                    }
#line 1138 "goal_util.m"
                }
#line 1122 "goal_util.m"
                break;
#line 1122 "goal_util.m"
              case (MR_Integer) 6:
#line 1129 "goal_util.m"
                {
#line 1129 "goal_util.m"
                  MR_Word hlds__goal_util__Cond_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 1129 "goal_util.m"
                  MR_Word hlds__goal_util__Then_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
#line 1129 "goal_util.m"
                  MR_Word hlds__goal_util__Else_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));
#line 1129 "goal_util.m"
                  MR_Word hlds__goal_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

#line 1088 "goal_util.m"
                  {
#line 1088 "goal_util.m"
                    MR_Word hlds__goal_util__GoalExpr_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_12, (MR_Integer) 0)));
#line 1088 "goal_util.m"
                    MR_Word hlds__goal_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_12, (MR_Integer) 1)));

#line 1089 "goal_util.m"
                    {
#line 1089 "goal_util.m"
                      hlds__goal_util__goal_expr_calls_2_p_1(hlds__goal_util__GoalExpr_45, hlds__goal_util__PredProcId_4, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                    }
#line 1088 "goal_util.m"
                  }
#line 1088 "goal_util.m"
                  {
#line 1088 "goal_util.m"
                    MR_Word hlds__goal_util__GoalExpr_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Then_13, (MR_Integer) 0)));
#line 1088 "goal_util.m"
                    MR_Word hlds__goal_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Then_13, (MR_Integer) 1)));

#line 1089 "goal_util.m"
                    {
#line 1089 "goal_util.m"
                      hlds__goal_util__goal_expr_calls_2_p_1(hlds__goal_util__GoalExpr_48, hlds__goal_util__PredProcId_4, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                    }
#line 1088 "goal_util.m"
                  }
#line 1088 "goal_util.m"
                  {
#line 1088 "goal_util.m"
                    MR_Word hlds__goal_util__GoalExpr_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Else_14, (MR_Integer) 0)));
#line 1088 "goal_util.m"
                    MR_Word hlds__goal_util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Else_14, (MR_Integer) 1)));

#line 1089 "goal_util.m"
                    /* direct tailcall eliminated */
#line 1089 "goal_util.m"
                    {
#line 1089 "goal_util.m"
                      MR_Word hlds__goal_util__GoalExpr__tmp_copy_3 = hlds__goal_util__GoalExpr_51;

#line 1089 "goal_util.m"
                      hlds__goal_util__GoalExpr_3 = hlds__goal_util__GoalExpr__tmp_copy_3;
#line 1089 "goal_util.m"
                    }
#line 1089 "goal_util.m"
                    continue;
#line 1088 "goal_util.m"
                  }
#line 1129 "goal_util.m"
                }
#line 1122 "goal_util.m"
                break;
#line 1122 "goal_util.m"
            }
#line 1122 "goal_util.m"
            break;
#line 1122 "goal_util.m"
        }
#line 1122 "goal_util.m"
      }
#line 1122 "goal_util.m"
      break;
#line 1122 "goal_util.m"
    }
#line 1115 "goal_util.m"
}

#line 1114 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__goal_expr_calls_2_p_0(
#line 1114 "goal_util.m"
  MR_Word hlds__goal_util__GoalExpr_3,
#line 1114 "goal_util.m"
  MR_Word hlds__goal_util__PredProcId_4)
#line 1114 "goal_util.m"
{
#line 1122 "goal_util.m"
  while (MR_TRUE)
#line 1122 "goal_util.m"
    {
#line 1122 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1122 "goal_util.m"
      {
#line 1122 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;

#line 1122 "goal_util.m"
#line 1122 "goal_util.m"
        switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) {
#line 1122 "goal_util.m"
          default:
#line 1122 "goal_util.m"
            hlds__goal_util__succeeded = MR_FALSE;
#line 1122 "goal_util.m"
            break;
#line 1122 "goal_util.m"
          case (MR_Integer) 0:
#line 1135 "goal_util.m"
            {
#line 1135 "goal_util.m"
              MR_Word hlds__goal_util__SubGoal_15 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_3), (MR_Integer) 0);
#line 1135 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__SubGoal_15, (MR_Integer) 0)));
#line 1088 "goal_util.m"
              MR_Word hlds__goal_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__SubGoal_15, (MR_Integer) 1)));

#line 1089 "goal_util.m"
              /* direct tailcall eliminated */
#line 1089 "goal_util.m"
              {
#line 1089 "goal_util.m"
                MR_Word hlds__goal_util__GoalExpr__tmp_copy_3 = hlds__goal_util__GoalExpr_57;

#line 1089 "goal_util.m"
                hlds__goal_util__GoalExpr_3 = hlds__goal_util__GoalExpr__tmp_copy_3;
#line 1089 "goal_util.m"
              }
#line 1089 "goal_util.m"
              continue;
#line 1135 "goal_util.m"
            }
#line 1122 "goal_util.m"
            break;
#line 1122 "goal_util.m"
          case (MR_Integer) 2:
#line 1152 "goal_util.m"
            {
#line 1152 "goal_util.m"
              MR_Word hlds__goal_util__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)));
#line 1152 "goal_util.m"
              MR_Integer hlds__goal_util__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 1152 "goal_util.m"
              MR_Word hlds__goal_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__PredProcId_4, (MR_Integer) 0)));
#line 1152 "goal_util.m"
              MR_Integer hlds__goal_util__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__goal_util__PredProcId_4, (MR_Integer) 1)));
#line 1152 "goal_util.m"
              MR_Word hlds__goal_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 1152 "goal_util.m"
              MR_Word hlds__goal_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
#line 1152 "goal_util.m"
              MR_Word hlds__goal_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));
#line 1152 "goal_util.m"
              MR_Word hlds__goal_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 5)));

#line 1153 "goal_util.m"
              {
#line 1153 "goal_util.m"
                hlds__goal_util__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__goal_util__PredId_19, hlds__goal_util__V_44_44);
              }
#line 1152 "goal_util.m"
              if (hlds__goal_util__succeeded)
#line 1153 "goal_util.m"
                hlds__goal_util__succeeded = (hlds__goal_util__ProcId_20 == hlds__goal_util__V_45_45);
#line 1152 "goal_util.m"
            }
#line 1122 "goal_util.m"
            break;
#line 1122 "goal_util.m"
          case (MR_Integer) 3:
#line 1122 "goal_util.m"
#line 1122 "goal_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) {
#line 1122 "goal_util.m"
              default:
#line 1122 "goal_util.m"
                hlds__goal_util__succeeded = MR_FALSE;
#line 1122 "goal_util.m"
                break;
#line 1122 "goal_util.m"
              case (MR_Integer) 2:
#line 1120 "goal_util.m"
                {
#line 1120 "goal_util.m"
                  MR_Word hlds__goal_util__Conjuncts_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 1120 "goal_util.m"
                  MR_Word hlds__goal_util___ConjType_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

#line 1121 "goal_util.m"
                  {
#line 1121 "goal_util.m"
                    hlds__goal_util__succeeded = hlds__goal_util__goals_calls_2_p_0(hlds__goal_util__Conjuncts_6, hlds__goal_util__PredProcId_4);
                  }
#line 1120 "goal_util.m"
                }
#line 1122 "goal_util.m"
                break;
#line 1122 "goal_util.m"
              case (MR_Integer) 3:
#line 1123 "goal_util.m"
                {
#line 1123 "goal_util.m"
                  MR_Word hlds__goal_util__Disjuncts_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

#line 1124 "goal_util.m"
                  {
#line 1124 "goal_util.m"
                    hlds__goal_util__succeeded = hlds__goal_util__goals_calls_2_p_0(hlds__goal_util__Disjuncts_7, hlds__goal_util__PredProcId_4);
                  }
#line 1123 "goal_util.m"
                }
#line 1122 "goal_util.m"
                break;
#line 1122 "goal_util.m"
              case (MR_Integer) 4:
#line 1126 "goal_util.m"
                {
#line 1126 "goal_util.m"
                  MR_Word hlds__goal_util__Cases_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
#line 1126 "goal_util.m"
                  MR_Word hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 1126 "goal_util.m"
                  MR_Word hlds__goal_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));

#line 1127 "goal_util.m"
                  {
#line 1127 "goal_util.m"
                    hlds__goal_util__succeeded = hlds__goal_util__cases_calls_2_p_0(hlds__goal_util__Cases_10, hlds__goal_util__PredProcId_4);
                  }
#line 1126 "goal_util.m"
                }
#line 1122 "goal_util.m"
                break;
#line 1122 "goal_util.m"
              case (MR_Integer) 5:
#line 1138 "goal_util.m"
                {
#line 1138 "goal_util.m"
                  MR_Word hlds__goal_util__Reason_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 1138 "goal_util.m"
                  MR_Word hlds__goal_util__SubGoal_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 1140 "goal_util.m"
                  MR_Word hlds__goal_util__FGT_18;
#line 1140 "goal_util.m"
                  MR_Word hlds__goal_util__V_17_17;

#line 1140 "goal_util.m"
                  hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_16, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1140 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 1140 "goal_util.m"
                    {
#line 1140 "goal_util.m"
                      hlds__goal_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_16, (MR_Integer) 1)));
#line 1140 "goal_util.m"
                      hlds__goal_util__FGT_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_16, (MR_Integer) 2)));
#line 1142 "goal_util.m"
#line 1142 "goal_util.m"
                      switch (hlds__goal_util__FGT_18) {
#line 1142 "goal_util.m"
                        default:
#line 1142 "goal_util.m"
                          hlds__goal_util__succeeded = MR_FALSE;
#line 1142 "goal_util.m"
                          break;
#line 1142 "goal_util.m"
                        case (MR_Integer) 1:
#line 1141 "goal_util.m"
                          hlds__goal_util__succeeded = MR_TRUE;
#line 1142 "goal_util.m"
                          break;
#line 1142 "goal_util.m"
                        case (MR_Integer) 2:
#line 1142 "goal_util.m"
                          hlds__goal_util__succeeded = MR_TRUE;
#line 1142 "goal_util.m"
                          break;
#line 1142 "goal_util.m"
                      }
#line 1140 "goal_util.m"
                    }
#line 1148 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 1147 "goal_util.m"
                    hlds__goal_util__succeeded = MR_FALSE;
#line 1148 "goal_util.m"
                  else
#line 1088 "goal_util.m"
                    {
#line 1088 "goal_util.m"
                      MR_Word hlds__goal_util__GoalExpr_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__SubGoal_43, (MR_Integer) 0)));
#line 1088 "goal_util.m"
                      MR_Word hlds__goal_util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__SubGoal_43, (MR_Integer) 1)));

#line 1089 "goal_util.m"
                      /* direct tailcall eliminated */
#line 1089 "goal_util.m"
                      {
#line 1089 "goal_util.m"
                        MR_Word hlds__goal_util__GoalExpr__tmp_copy_3 = hlds__goal_util__GoalExpr_60;

#line 1089 "goal_util.m"
                        hlds__goal_util__GoalExpr_3 = hlds__goal_util__GoalExpr__tmp_copy_3;
#line 1089 "goal_util.m"
                      }
#line 1089 "goal_util.m"
                      continue;
#line 1088 "goal_util.m"
                    }
#line 1138 "goal_util.m"
                }
#line 1122 "goal_util.m"
                break;
#line 1122 "goal_util.m"
              case (MR_Integer) 6:
#line 1129 "goal_util.m"
                {
#line 1129 "goal_util.m"
                  MR_Word hlds__goal_util__Cond_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 1129 "goal_util.m"
                  MR_Word hlds__goal_util__Then_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
#line 1129 "goal_util.m"
                  MR_Word hlds__goal_util__Else_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));
#line 1129 "goal_util.m"
                  MR_Word hlds__goal_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

#line 1088 "goal_util.m"
                  {
#line 1088 "goal_util.m"
                    MR_Word hlds__goal_util__GoalExpr_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_12, (MR_Integer) 0)));
#line 1088 "goal_util.m"
                    MR_Word hlds__goal_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_12, (MR_Integer) 1)));

#line 1089 "goal_util.m"
                    {
#line 1089 "goal_util.m"
                      hlds__goal_util__succeeded = hlds__goal_util__goal_expr_calls_2_p_0(hlds__goal_util__GoalExpr_48, hlds__goal_util__PredProcId_4);
                    }
#line 1088 "goal_util.m"
                  }
#line 1131 "goal_util.m"
                  if (!(hlds__goal_util__succeeded))
#line 1131 "goal_util.m"
                    {
#line 1088 "goal_util.m"
                      {
#line 1088 "goal_util.m"
                        MR_Word hlds__goal_util__GoalExpr_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Then_13, (MR_Integer) 0)));
#line 1088 "goal_util.m"
                        MR_Word hlds__goal_util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Then_13, (MR_Integer) 1)));

#line 1089 "goal_util.m"
                        {
#line 1089 "goal_util.m"
                          hlds__goal_util__succeeded = hlds__goal_util__goal_expr_calls_2_p_0(hlds__goal_util__GoalExpr_51, hlds__goal_util__PredProcId_4);
                        }
#line 1088 "goal_util.m"
                      }
#line 1131 "goal_util.m"
                      if (!(hlds__goal_util__succeeded))
#line 1088 "goal_util.m"
                        {
#line 1088 "goal_util.m"
                          MR_Word hlds__goal_util__GoalExpr_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Else_14, (MR_Integer) 0)));
#line 1088 "goal_util.m"
                          MR_Word hlds__goal_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Else_14, (MR_Integer) 1)));

#line 1089 "goal_util.m"
                          /* direct tailcall eliminated */
#line 1089 "goal_util.m"
                          {
#line 1089 "goal_util.m"
                            MR_Word hlds__goal_util__GoalExpr__tmp_copy_3 = hlds__goal_util__GoalExpr_54;

#line 1089 "goal_util.m"
                            hlds__goal_util__GoalExpr_3 = hlds__goal_util__GoalExpr__tmp_copy_3;
#line 1089 "goal_util.m"
                          }
#line 1089 "goal_util.m"
                          continue;
#line 1088 "goal_util.m"
                        }
#line 1131 "goal_util.m"
                    }
#line 1129 "goal_util.m"
                }
#line 1122 "goal_util.m"
                break;
#line 1122 "goal_util.m"
            }
#line 1122 "goal_util.m"
            break;
#line 1122 "goal_util.m"
        }
#line 1122 "goal_util.m"
        return hlds__goal_util__succeeded;
#line 1122 "goal_util.m"
      }
#line 1122 "goal_util.m"
      break;
#line 1122 "goal_util.m"
    }
#line 1114 "goal_util.m"
}

#line 1104 "goal_util.m"
static void MR_CALL 
hlds__goal_util__cases_calls_2_p_1(
#line 1104 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1104 "goal_util.m"
  MR_Word * hlds__goal_util__PredProcId_7,
#line 1104 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1104 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 1104 "goal_util.m"
{
#line 1106 "goal_util.m"
  while (MR_TRUE)
#line 1106 "goal_util.m"
    {
#line 1106 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1106 "goal_util.m"
      {
#line 1106 "goal_util.m"
        MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1106 "goal_util.m"
        MR_Word hlds__goal_util__Goal_5;
#line 1106 "goal_util.m"
        MR_Word hlds__goal_util__Cases_6;
#line 1106 "goal_util.m"
        MR_Word hlds__goal_util__V_8_8;
#line 1106 "goal_util.m"
        MR_Word hlds__goal_util__V_3_3;
#line 1106 "goal_util.m"
        MR_Word hlds__goal_util__V_4_4;

#line 1106 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1106 "goal_util.m"
          {
#line 1106 "goal_util.m"
            hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1106 "goal_util.m"
            hlds__goal_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1106 "goal_util.m"
            hlds__goal_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 0)));
#line 1106 "goal_util.m"
            hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 1)));
#line 1106 "goal_util.m"
            hlds__goal_util__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 2)));
#line 1088 "goal_util.m"
            {
#line 1088 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 0)));
#line 1088 "goal_util.m"
              MR_Word hlds__goal_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 1)));

#line 1089 "goal_util.m"
              {
#line 1089 "goal_util.m"
                hlds__goal_util__goal_expr_calls_2_p_1(hlds__goal_util__GoalExpr_10, hlds__goal_util__PredProcId_7, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
              }
#line 1088 "goal_util.m"
            }
#line 1110 "goal_util.m"
            {
#line 1110 "goal_util.m"
              /* direct tailcall eliminated */
#line 1110 "goal_util.m"
              {
#line 1110 "goal_util.m"
                MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Cases_6;

#line 1110 "goal_util.m"
                hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1110 "goal_util.m"
              }
#line 1110 "goal_util.m"
              continue;
#line 1110 "goal_util.m"
            }
#line 1106 "goal_util.m"
          }
#line 1106 "goal_util.m"
      }
#line 1106 "goal_util.m"
      break;
#line 1106 "goal_util.m"
    }
#line 1104 "goal_util.m"
}

#line 1103 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__cases_calls_2_p_0(
#line 1103 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1103 "goal_util.m"
  MR_Word hlds__goal_util__PredProcId_7)
#line 1103 "goal_util.m"
{
#line 1106 "goal_util.m"
  while (MR_TRUE)
#line 1106 "goal_util.m"
    {
#line 1106 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1106 "goal_util.m"
      {
#line 1106 "goal_util.m"
        MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1106 "goal_util.m"
        MR_Word hlds__goal_util__Goal_5;
#line 1106 "goal_util.m"
        MR_Word hlds__goal_util__Cases_6;
#line 1106 "goal_util.m"
        MR_Word hlds__goal_util__V_8_8;
#line 1106 "goal_util.m"
        MR_Word hlds__goal_util__V_3_3;
#line 1106 "goal_util.m"
        MR_Word hlds__goal_util__V_4_4;

#line 1106 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1106 "goal_util.m"
          {
#line 1106 "goal_util.m"
            hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1106 "goal_util.m"
            hlds__goal_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1106 "goal_util.m"
            hlds__goal_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 0)));
#line 1106 "goal_util.m"
            hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 1)));
#line 1106 "goal_util.m"
            hlds__goal_util__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 2)));
#line 1088 "goal_util.m"
            {
#line 1088 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 0)));
#line 1088 "goal_util.m"
              MR_Word hlds__goal_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 1)));

#line 1089 "goal_util.m"
              {
#line 1089 "goal_util.m"
                hlds__goal_util__succeeded = hlds__goal_util__goal_expr_calls_2_p_0(hlds__goal_util__GoalExpr_10, hlds__goal_util__PredProcId_7);
              }
#line 1088 "goal_util.m"
            }
#line 1109 "goal_util.m"
            if (!(hlds__goal_util__succeeded))
#line 1110 "goal_util.m"
              {
#line 1110 "goal_util.m"
                /* direct tailcall eliminated */
#line 1110 "goal_util.m"
                {
#line 1110 "goal_util.m"
                  MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Cases_6;

#line 1110 "goal_util.m"
                  hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1110 "goal_util.m"
                }
#line 1110 "goal_util.m"
                continue;
#line 1110 "goal_util.m"
              }
#line 1106 "goal_util.m"
          }
#line 1106 "goal_util.m"
        return hlds__goal_util__succeeded;
#line 1106 "goal_util.m"
      }
#line 1106 "goal_util.m"
      break;
#line 1106 "goal_util.m"
    }
#line 1103 "goal_util.m"
}

#line 1093 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goals_calls_2_p_1(
#line 1093 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1093 "goal_util.m"
  MR_Word * hlds__goal_util__PredProcId_5,
#line 1093 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1093 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 1093 "goal_util.m"
{
#line 1095 "goal_util.m"
  while (MR_TRUE)
#line 1095 "goal_util.m"
    {
#line 1095 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1095 "goal_util.m"
      {
#line 1095 "goal_util.m"
        MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1095 "goal_util.m"
        MR_Word hlds__goal_util__Goal_3;
#line 1095 "goal_util.m"
        MR_Word hlds__goal_util__Goals_4;

#line 1095 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1095 "goal_util.m"
          {
#line 1095 "goal_util.m"
            hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1095 "goal_util.m"
            hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1088 "goal_util.m"
            {
#line 1088 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 0)));
#line 1088 "goal_util.m"
              MR_Word hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 1)));

#line 1089 "goal_util.m"
              {
#line 1089 "goal_util.m"
                hlds__goal_util__goal_expr_calls_2_p_1(hlds__goal_util__GoalExpr_7, hlds__goal_util__PredProcId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
              }
#line 1088 "goal_util.m"
            }
#line 1099 "goal_util.m"
            {
#line 1099 "goal_util.m"
              /* direct tailcall eliminated */
#line 1099 "goal_util.m"
              {
#line 1099 "goal_util.m"
                MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Goals_4;

#line 1099 "goal_util.m"
                hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1099 "goal_util.m"
              }
#line 1099 "goal_util.m"
              continue;
#line 1099 "goal_util.m"
            }
#line 1095 "goal_util.m"
          }
#line 1095 "goal_util.m"
      }
#line 1095 "goal_util.m"
      break;
#line 1095 "goal_util.m"
    }
#line 1093 "goal_util.m"
}

#line 1092 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__goals_calls_2_p_0(
#line 1092 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 1092 "goal_util.m"
  MR_Word hlds__goal_util__PredProcId_5)
#line 1092 "goal_util.m"
{
#line 1095 "goal_util.m"
  while (MR_TRUE)
#line 1095 "goal_util.m"
    {
#line 1095 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1095 "goal_util.m"
      {
#line 1095 "goal_util.m"
        MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1095 "goal_util.m"
        MR_Word hlds__goal_util__Goal_3;
#line 1095 "goal_util.m"
        MR_Word hlds__goal_util__Goals_4;

#line 1095 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1095 "goal_util.m"
          {
#line 1095 "goal_util.m"
            hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1095 "goal_util.m"
            hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1088 "goal_util.m"
            {
#line 1088 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 0)));
#line 1088 "goal_util.m"
              MR_Word hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 1)));

#line 1089 "goal_util.m"
              {
#line 1089 "goal_util.m"
                hlds__goal_util__succeeded = hlds__goal_util__goal_expr_calls_2_p_0(hlds__goal_util__GoalExpr_7, hlds__goal_util__PredProcId_5);
              }
#line 1088 "goal_util.m"
            }
#line 1098 "goal_util.m"
            if (!(hlds__goal_util__succeeded))
#line 1099 "goal_util.m"
              {
#line 1099 "goal_util.m"
                /* direct tailcall eliminated */
#line 1099 "goal_util.m"
                {
#line 1099 "goal_util.m"
                  MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Goals_4;

#line 1099 "goal_util.m"
                  hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 1099 "goal_util.m"
                }
#line 1099 "goal_util.m"
                continue;
#line 1099 "goal_util.m"
              }
#line 1095 "goal_util.m"
          }
#line 1095 "goal_util.m"
        return hlds__goal_util__succeeded;
#line 1095 "goal_util.m"
      }
#line 1095 "goal_util.m"
      break;
#line 1095 "goal_util.m"
    }
#line 1092 "goal_util.m"
}

#line 1007 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_expr_size_2_p_0(
#line 1007 "goal_util.m"
  MR_Word hlds__goal_util__GoalExpr_3,
#line 1007 "goal_util.m"
  MR_Integer * hlds__goal_util__Size_4)
#line 1007 "goal_util.m"
{
#line 1015 "goal_util.m"
  {
#line 1015 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 1015 "goal_util.m"
#line 1015 "goal_util.m"
    switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) {
#line 1015 "goal_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1015 "goal_util.m"
      case (MR_Integer) 0:
#line 1042 "goal_util.m"
        {
#line 1042 "goal_util.m"
          MR_Word hlds__goal_util__SubGoal_41 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_3), (MR_Integer) 0);
#line 1042 "goal_util.m"
          MR_Integer hlds__goal_util__Size1_72;

#line 1043 "goal_util.m"
          {
#line 1043 "goal_util.m"
            hlds__goal_util__goal_size_2_p_0(hlds__goal_util__SubGoal_41, &hlds__goal_util__Size1_72);
          }
#line 1044 "goal_util.m"
          *hlds__goal_util__Size_4 = (hlds__goal_util__Size1_72 + (MR_Integer) 1);
#line 1042 "goal_util.m"
        }
#line 1015 "goal_util.m"
        break;
#line 1015 "goal_util.m"
      case (MR_Integer) 1:
#line 1015 "goal_util.m"
      case (MR_Integer) 2:
#line 1016 "goal_util.m"
        *hlds__goal_util__Size_4 = (MR_Integer) 1;
#line 1015 "goal_util.m"
        break;
#line 1015 "goal_util.m"
      case (MR_Integer) 3:
#line 1015 "goal_util.m"
#line 1015 "goal_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) {
#line 1015 "goal_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1015 "goal_util.m"
          case (MR_Integer) 0:
#line 1015 "goal_util.m"
          case (MR_Integer) 1:
#line 1016 "goal_util.m"
            *hlds__goal_util__Size_4 = (MR_Integer) 1;
#line 1015 "goal_util.m"
            break;
#line 1015 "goal_util.m"
          case (MR_Integer) 2:
#line 1018 "goal_util.m"
            {
#line 1018 "goal_util.m"
              MR_Word hlds__goal_util__ConjType_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 1018 "goal_util.m"
              MR_Word hlds__goal_util__Goals_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 1018 "goal_util.m"
              MR_Integer hlds__goal_util__InnerSize_30;

#line 1019 "goal_util.m"
              {
#line 1019 "goal_util.m"
                hlds__goal_util__goals_size_2_p_0(hlds__goal_util__Goals_29, &hlds__goal_util__InnerSize_30);
              }
#line 1023 "goal_util.m"
#line 1023 "goal_util.m"
              switch (hlds__goal_util__ConjType_28) {
#line 1023 "goal_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1023 "goal_util.m"
                case (MR_Integer) 1:
#line 1024 "goal_util.m"
                  {
#line 1025 "goal_util.m"
                    *hlds__goal_util__Size_4 = (hlds__goal_util__InnerSize_30 + (MR_Integer) 1);
#line 1024 "goal_util.m"
                  }
#line 1023 "goal_util.m"
                  break;
#line 1023 "goal_util.m"
                case (MR_Integer) 0:
#line 1022 "goal_util.m"
                  *hlds__goal_util__Size_4 = hlds__goal_util__InnerSize_30;
#line 1023 "goal_util.m"
                  break;
#line 1023 "goal_util.m"
              }
#line 1018 "goal_util.m"
            }
#line 1015 "goal_util.m"
            break;
#line 1015 "goal_util.m"
          case (MR_Integer) 3:
#line 1028 "goal_util.m"
            {
#line 1028 "goal_util.m"
              MR_Integer hlds__goal_util__Size1_31;
#line 1028 "goal_util.m"
              MR_Word hlds__goal_util__Goals_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

#line 1029 "goal_util.m"
              {
#line 1029 "goal_util.m"
                hlds__goal_util__goals_size_2_p_0(hlds__goal_util__Goals_69, &hlds__goal_util__Size1_31);
              }
#line 1030 "goal_util.m"
              *hlds__goal_util__Size_4 = (hlds__goal_util__Size1_31 + (MR_Integer) 1);
#line 1028 "goal_util.m"
            }
#line 1015 "goal_util.m"
            break;
#line 1015 "goal_util.m"
          case (MR_Integer) 4:
#line 1032 "goal_util.m"
            {
#line 1032 "goal_util.m"
              MR_Word hlds__goal_util__Cases_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
#line 1032 "goal_util.m"
              MR_Integer hlds__goal_util__Size1_70;
#line 1032 "goal_util.m"
              MR_Word hlds__goal_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 1032 "goal_util.m"
              MR_Word hlds__goal_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));

#line 1033 "goal_util.m"
              {
#line 1033 "goal_util.m"
                hlds__goal_util__cases_size_2_p_0(hlds__goal_util__Cases_34, &hlds__goal_util__Size1_70);
              }
#line 1034 "goal_util.m"
              *hlds__goal_util__Size_4 = (hlds__goal_util__Size1_70 + (MR_Integer) 1);
#line 1032 "goal_util.m"
            }
#line 1015 "goal_util.m"
            break;
#line 1015 "goal_util.m"
          case (MR_Integer) 5:
#line 1046 "goal_util.m"
            {
#line 1046 "goal_util.m"
              MR_Word hlds__goal_util__Reason_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 1046 "goal_util.m"
              MR_Word hlds__goal_util__SubGoal_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 1047 "goal_util.m"
              MR_Word hlds__goal_util__V_60_60;
#line 1047 "goal_util.m"
              MR_Word hlds__goal_util__V_43_43;

#line 1047 "goal_util.m"
              hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_42, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1047 "goal_util.m"
              if (hlds__goal_util__succeeded)
#line 1047 "goal_util.m"
                {
#line 1047 "goal_util.m"
                  hlds__goal_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_42, (MR_Integer) 1)));
#line 1047 "goal_util.m"
                  hlds__goal_util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_42, (MR_Integer) 2)));
#line 1047 "goal_util.m"
                  hlds__goal_util__succeeded = (hlds__goal_util__V_60_60 == (MR_Integer) 1);
#line 1047 "goal_util.m"
                }
#line 1050 "goal_util.m"
              if (hlds__goal_util__succeeded)
#line 1049 "goal_util.m"
                *hlds__goal_util__Size_4 = (MR_Integer) 1;
#line 1050 "goal_util.m"
              else
#line 1051 "goal_util.m"
                {
#line 1051 "goal_util.m"
                  MR_Integer hlds__goal_util__Size1_73;

#line 1051 "goal_util.m"
                  {
#line 1051 "goal_util.m"
                    hlds__goal_util__goal_size_2_p_0(hlds__goal_util__SubGoal_76, &hlds__goal_util__Size1_73);
                  }
#line 1052 "goal_util.m"
                  *hlds__goal_util__Size_4 = (hlds__goal_util__Size1_73 + (MR_Integer) 1);
#line 1051 "goal_util.m"
                }
#line 1046 "goal_util.m"
            }
#line 1015 "goal_util.m"
            break;
#line 1015 "goal_util.m"
          case (MR_Integer) 6:
#line 1036 "goal_util.m"
            {
#line 1036 "goal_util.m"
              MR_Word hlds__goal_util__Cond_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 1036 "goal_util.m"
              MR_Word hlds__goal_util__Then_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
#line 1036 "goal_util.m"
              MR_Word hlds__goal_util__Else_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));
#line 1036 "goal_util.m"
              MR_Integer hlds__goal_util__Size2_39;
#line 1036 "goal_util.m"
              MR_Integer hlds__goal_util__Size3_40;
#line 1036 "goal_util.m"
              MR_Integer hlds__goal_util__V_63_63;
#line 1036 "goal_util.m"
              MR_Integer hlds__goal_util__V_64_64;
#line 1036 "goal_util.m"
              MR_Integer hlds__goal_util__Size1_71;
#line 1036 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_36, (MR_Integer) 0)));
#line 1036 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_92;
#line 1036 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_95;
#line 1036 "goal_util.m"
              MR_Word hlds__goal_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 975 "goal_util.m"
              MR_Word hlds__goal_util__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond_36, (MR_Integer) 1)));
#line 975 "goal_util.m"
              MR_Word hlds__goal_util__V_93_93;
#line 975 "goal_util.m"
              MR_Word hlds__goal_util__V_96_96;

#line 976 "goal_util.m"
              {
#line 976 "goal_util.m"
                hlds__goal_util__goal_expr_size_2_p_0(hlds__goal_util__GoalExpr_89, &hlds__goal_util__Size1_71);
              }
#line 975 "goal_util.m"
              hlds__goal_util__GoalExpr_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Then_37, (MR_Integer) 0)));
#line 975 "goal_util.m"
              hlds__goal_util__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Then_37, (MR_Integer) 1)));
#line 976 "goal_util.m"
              {
#line 976 "goal_util.m"
                hlds__goal_util__goal_expr_size_2_p_0(hlds__goal_util__GoalExpr_92, &hlds__goal_util__Size2_39);
              }
#line 975 "goal_util.m"
              hlds__goal_util__GoalExpr_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Else_38, (MR_Integer) 0)));
#line 975 "goal_util.m"
              hlds__goal_util__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Else_38, (MR_Integer) 1)));
#line 976 "goal_util.m"
              {
#line 976 "goal_util.m"
                hlds__goal_util__goal_expr_size_2_p_0(hlds__goal_util__GoalExpr_95, &hlds__goal_util__Size3_40);
              }
#line 1040 "goal_util.m"
              hlds__goal_util__V_64_64 = (hlds__goal_util__Size1_71 + hlds__goal_util__Size2_39);
#line 1040 "goal_util.m"
              hlds__goal_util__V_63_63 = (hlds__goal_util__V_64_64 + hlds__goal_util__Size3_40);
#line 1040 "goal_util.m"
              *hlds__goal_util__Size_4 = (hlds__goal_util__V_63_63 + (MR_Integer) 1);
#line 1036 "goal_util.m"
            }
#line 1015 "goal_util.m"
            break;
#line 1015 "goal_util.m"
          case (MR_Integer) 7:
#line 1055 "goal_util.m"
            {
#line 1055 "goal_util.m"
              MR_Word hlds__goal_util__ShortHand_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

#line 1061 "goal_util.m"
#line 1061 "goal_util.m"
              switch (MR_tag((MR_Word) hlds__goal_util__ShortHand_44)) {
#line 1061 "goal_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1061 "goal_util.m"
                case (MR_Integer) 0:
#line 1067 "goal_util.m"
                  {
#line 1067 "goal_util.m"
                    MR_Word hlds__goal_util__GoalA_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_44, (MR_Integer) 0)));
#line 1067 "goal_util.m"
                    MR_Word hlds__goal_util__GoalB_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_44, (MR_Integer) 1)));
#line 1067 "goal_util.m"
                    MR_Integer hlds__goal_util__V_56_56;
#line 1067 "goal_util.m"
                    MR_Integer hlds__goal_util__Size1_80;
#line 1067 "goal_util.m"
                    MR_Integer hlds__goal_util__Size2_81;

#line 1068 "goal_util.m"
                    {
#line 1068 "goal_util.m"
                      hlds__goal_util__goal_size_2_p_0(hlds__goal_util__GoalA_54, &hlds__goal_util__Size1_80);
                    }
#line 1069 "goal_util.m"
                    {
#line 1069 "goal_util.m"
                      hlds__goal_util__goal_size_2_p_0(hlds__goal_util__GoalB_55, &hlds__goal_util__Size2_81);
                    }
#line 1070 "goal_util.m"
                    hlds__goal_util__V_56_56 = (hlds__goal_util__Size1_80 + hlds__goal_util__Size2_81);
#line 1070 "goal_util.m"
                    *hlds__goal_util__Size_4 = (hlds__goal_util__V_56_56 + (MR_Integer) 1);
#line 1067 "goal_util.m"
                  }
#line 1061 "goal_util.m"
                  break;
#line 1061 "goal_util.m"
                case (MR_Integer) 1:
#line 1057 "goal_util.m"
                  {
#line 1057 "goal_util.m"
                    MR_Word hlds__goal_util__MainGoal_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_44, (MR_Integer) 4)));
#line 1057 "goal_util.m"
                    MR_Word hlds__goal_util__OrElseGoals_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_44, (MR_Integer) 5)));
#line 1057 "goal_util.m"
                    MR_Integer hlds__goal_util__V_58_58;
#line 1057 "goal_util.m"
                    MR_Integer hlds__goal_util__Size1_77;
#line 1057 "goal_util.m"
                    MR_Integer hlds__goal_util__Size2_78;
#line 1057 "goal_util.m"
                    MR_Word hlds__goal_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_44, (MR_Integer) 0)));
#line 1057 "goal_util.m"
                    MR_Word hlds__goal_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_44, (MR_Integer) 1)));
#line 1057 "goal_util.m"
                    MR_Word hlds__goal_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_44, (MR_Integer) 2)));
#line 1057 "goal_util.m"
                    MR_Word hlds__goal_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_44, (MR_Integer) 3)));
#line 1057 "goal_util.m"
                    MR_Word hlds__goal_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_44, (MR_Integer) 6)));

#line 1058 "goal_util.m"
                    {
#line 1058 "goal_util.m"
                      hlds__goal_util__goal_size_2_p_0(hlds__goal_util__MainGoal_49, &hlds__goal_util__Size1_77);
                    }
#line 1059 "goal_util.m"
                    {
#line 1059 "goal_util.m"
                      hlds__goal_util__goals_size_2_p_0(hlds__goal_util__OrElseGoals_50, &hlds__goal_util__Size2_78);
                    }
#line 1060 "goal_util.m"
                    hlds__goal_util__V_58_58 = (hlds__goal_util__Size1_77 + hlds__goal_util__Size2_78);
#line 1060 "goal_util.m"
                    *hlds__goal_util__Size_4 = (hlds__goal_util__V_58_58 + (MR_Integer) 1);
#line 1057 "goal_util.m"
                  }
#line 1061 "goal_util.m"
                  break;
#line 1061 "goal_util.m"
                case (MR_Integer) 2:
#line 1062 "goal_util.m"
                  {
#line 1062 "goal_util.m"
                    MR_Word hlds__goal_util__SubGoal_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_44, (MR_Integer) 2)));
#line 1062 "goal_util.m"
                    MR_Word hlds__goal_util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_44, (MR_Integer) 0)));
#line 1062 "goal_util.m"
                    MR_Word hlds__goal_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_44, (MR_Integer) 1)));

#line 1065 "goal_util.m"
                    {
#line 1065 "goal_util.m"
                      hlds__goal_util__goal_size_2_p_0(hlds__goal_util__SubGoal_79, hlds__goal_util__Size_4);
                    }
#line 1062 "goal_util.m"
                  }
#line 1061 "goal_util.m"
                  break;
#line 1061 "goal_util.m"
              }
#line 1055 "goal_util.m"
            }
#line 1015 "goal_util.m"
            break;
#line 1015 "goal_util.m"
        }
#line 1015 "goal_util.m"
        break;
#line 1015 "goal_util.m"
    }
#line 1015 "goal_util.m"
  }
#line 1007 "goal_util.m"
}

#line 999 "goal_util.m"
static void MR_CALL 
hlds__goal_util__cases_size_2_p_0(
#line 999 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 999 "goal_util.m"
  MR_Integer * hlds__goal_util__HeadVar__2_2)
#line 999 "goal_util.m"
{
#line 1001 "goal_util.m"
  {
#line 1001 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 1001 "goal_util.m"
    if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1001 "goal_util.m"
      *hlds__goal_util__HeadVar__2_2 = (MR_Integer) 0;
#line 1001 "goal_util.m"
    else
#line 1002 "goal_util.m"
      {
#line 1002 "goal_util.m"
        MR_Word hlds__goal_util__Goal_5;
#line 1002 "goal_util.m"
        MR_Word hlds__goal_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1002 "goal_util.m"
        MR_Integer hlds__goal_util__Size1_8;
#line 1002 "goal_util.m"
        MR_Integer hlds__goal_util__Size2_9;
#line 1002 "goal_util.m"
        MR_Word hlds__goal_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1002 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr_12;
#line 1002 "goal_util.m"
        MR_Word hlds__goal_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_10_10, (MR_Integer) 0)));
#line 1002 "goal_util.m"
        MR_Word hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_10_10, (MR_Integer) 1)));
#line 975 "goal_util.m"
        MR_Word hlds__goal_util__V_13_13;

#line 1002 "goal_util.m"
        hlds__goal_util__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_10_10, (MR_Integer) 2)));
#line 975 "goal_util.m"
        hlds__goal_util__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 0)));
#line 975 "goal_util.m"
        hlds__goal_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 1)));
#line 976 "goal_util.m"
        {
#line 976 "goal_util.m"
          hlds__goal_util__goal_expr_size_2_p_0(hlds__goal_util__GoalExpr_12, &hlds__goal_util__Size1_8);
        }
#line 1004 "goal_util.m"
        {
#line 1004 "goal_util.m"
          hlds__goal_util__cases_size_2_p_0(hlds__goal_util__Cases_6, &hlds__goal_util__Size2_9);
        }
#line 1005 "goal_util.m"
        *hlds__goal_util__HeadVar__2_2 = (hlds__goal_util__Size1_8 + hlds__goal_util__Size2_9);
#line 1002 "goal_util.m"
      }
#line 1001 "goal_util.m"
  }
#line 999 "goal_util.m"
}

#line 993 "goal_util.m"
static void MR_CALL 
hlds__goal_util__clause_size_increment_3_p_0(
#line 993 "goal_util.m"
  MR_Word hlds__goal_util__Clause_4,
#line 993 "goal_util.m"
  MR_Integer hlds__goal_util__Size0_5,
#line 993 "goal_util.m"
  MR_Integer * hlds__goal_util__Size_6)
#line 993 "goal_util.m"
{
#line 995 "goal_util.m"
  {
#line 995 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 995 "goal_util.m"
    MR_Integer hlds__goal_util__ClauseSize_7;
#line 995 "goal_util.m"
    MR_Word hlds__goal_util__V_8_8;
#line 995 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_10;
#line 975 "goal_util.m"
    MR_Word hlds__goal_util__V_11_11;

#line 996 "goal_util.m"
    {
#line 996 "goal_util.m"
      hlds__goal_util__V_8_8 = hlds__hlds_clauses__clause_body_1_f_0(hlds__goal_util__Clause_4);
    }
#line 975 "goal_util.m"
    hlds__goal_util__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 0)));
#line 975 "goal_util.m"
    hlds__goal_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_8_8, (MR_Integer) 1)));
#line 976 "goal_util.m"
    {
#line 976 "goal_util.m"
      hlds__goal_util__goal_expr_size_2_p_0(hlds__goal_util__GoalExpr_10, &hlds__goal_util__ClauseSize_7);
    }
#line 997 "goal_util.m"
    *hlds__goal_util__Size_6 = (hlds__goal_util__Size0_5 + hlds__goal_util__ClauseSize_7);
#line 995 "goal_util.m"
  }
#line 993 "goal_util.m"
}

#line 953 "goal_util.m"
static MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_cases_1_f_0(
#line 953 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1)
#line 953 "goal_util.m"
{
#line 955 "goal_util.m"
  {
#line 955 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 955 "goal_util.m"
    MR_Word hlds__goal_util__HeadVar__2_2;

#line 955 "goal_util.m"
    if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 955 "goal_util.m"
      hlds__goal_util__HeadVar__2_2 = (MR_Integer) 0;
#line 955 "goal_util.m"
    else
#line 956 "goal_util.m"
      {
#line 956 "goal_util.m"
        MR_Word hlds__goal_util__Case_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 956 "goal_util.m"
        MR_Word hlds__goal_util__Cases_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 956 "goal_util.m"
        MR_Word hlds__goal_util__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_3, (MR_Integer) 2)));
#line 957 "goal_util.m"
        MR_Word hlds__goal_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_3, (MR_Integer) 0)));
#line 957 "goal_util.m"
        MR_Word hlds__goal_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_3, (MR_Integer) 1)));
#line 959 "goal_util.m"
        MR_Word hlds__goal_util__V_9_9;
#line 959 "goal_util.m"
        MR_Word hlds__goal_util__V_10_10;

#line 959 "goal_util.m"
        {
#line 959 "goal_util.m"
          hlds__goal_util__V_9_9 = hlds__goal_util__proc_body_is_leaf_1_f_0(hlds__goal_util__Goal_8);
        }
#line 959 "goal_util.m"
        hlds__goal_util__succeeded = (hlds__goal_util__V_9_9 == (MR_Integer) 0);
#line 959 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 959 "goal_util.m"
          {
#line 960 "goal_util.m"
            {
#line 960 "goal_util.m"
              hlds__goal_util__V_10_10 = hlds__goal_util__proc_body_is_leaf_cases_1_f_0(hlds__goal_util__Cases_4);
            }
#line 960 "goal_util.m"
            hlds__goal_util__succeeded = (hlds__goal_util__V_10_10 == (MR_Integer) 0);
#line 959 "goal_util.m"
          }
#line 963 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 962 "goal_util.m"
          hlds__goal_util__HeadVar__2_2 = (MR_Integer) 0;
#line 963 "goal_util.m"
        else
#line 964 "goal_util.m"
          hlds__goal_util__HeadVar__2_2 = (MR_Integer) 1;
#line 956 "goal_util.m"
      }
#line 955 "goal_util.m"
    return hlds__goal_util__HeadVar__2_2;
#line 955 "goal_util.m"
  }
#line 953 "goal_util.m"
}

#line 940 "goal_util.m"
static MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_goals_1_f_0(
#line 940 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1)
#line 940 "goal_util.m"
{
#line 942 "goal_util.m"
  {
#line 942 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 942 "goal_util.m"
    MR_Word hlds__goal_util__HeadVar__2_2;

#line 942 "goal_util.m"
    if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 942 "goal_util.m"
      hlds__goal_util__HeadVar__2_2 = (MR_Integer) 0;
#line 942 "goal_util.m"
    else
#line 943 "goal_util.m"
      {
#line 943 "goal_util.m"
        MR_Word hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 943 "goal_util.m"
        MR_Word hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 945 "goal_util.m"
        MR_Word hlds__goal_util__V_6_6;
#line 945 "goal_util.m"
        MR_Word hlds__goal_util__V_7_7;

#line 945 "goal_util.m"
        {
#line 945 "goal_util.m"
          hlds__goal_util__V_6_6 = hlds__goal_util__proc_body_is_leaf_1_f_0(hlds__goal_util__Goal_3);
        }
#line 945 "goal_util.m"
        hlds__goal_util__succeeded = (hlds__goal_util__V_6_6 == (MR_Integer) 0);
#line 945 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 945 "goal_util.m"
          {
#line 946 "goal_util.m"
            {
#line 946 "goal_util.m"
              hlds__goal_util__V_7_7 = hlds__goal_util__proc_body_is_leaf_goals_1_f_0(hlds__goal_util__Goals_4);
            }
#line 946 "goal_util.m"
            hlds__goal_util__succeeded = (hlds__goal_util__V_7_7 == (MR_Integer) 0);
#line 945 "goal_util.m"
          }
#line 949 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 948 "goal_util.m"
          hlds__goal_util__HeadVar__2_2 = (MR_Integer) 0;
#line 949 "goal_util.m"
        else
#line 950 "goal_util.m"
          hlds__goal_util__HeadVar__2_2 = (MR_Integer) 1;
#line 943 "goal_util.m"
      }
#line 942 "goal_util.m"
    return hlds__goal_util__HeadVar__2_2;
#line 942 "goal_util.m"
  }
#line 940 "goal_util.m"
}

#line 677 "goal_util.m"
static void MR_CALL 
hlds__goal_util__rhs_goal_vars_acc_3_p_0(
#line 677 "goal_util.m"
  MR_Word hlds__goal_util__RHS_4,
#line 677 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_Set_0_19,
#line 677 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_20)
#line 677 "goal_util.m"
{
#line 682 "goal_util.m"
  {
#line 682 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 682 "goal_util.m"
#line 682 "goal_util.m"
    switch (MR_tag((MR_Word) hlds__goal_util__RHS_4)) {
#line 682 "goal_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 682 "goal_util.m"
      case (MR_Integer) 0:
#line 682 "goal_util.m"
        {
#line 682 "goal_util.m"
          MR_Word hlds__goal_util__X_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__RHS_4, (MR_Integer) 0)));

#line 683 "goal_util.m"
          {
#line 683 "goal_util.m"
            parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__X_6, hlds__goal_util__STATE_VARIABLE_Set_0_19, hlds__goal_util__STATE_VARIABLE_Set_20);
          }
#line 682 "goal_util.m"
        }
#line 682 "goal_util.m"
        break;
#line 682 "goal_util.m"
      case (MR_Integer) 1:
#line 685 "goal_util.m"
        {
#line 685 "goal_util.m"
          MR_Word hlds__goal_util__ArgVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__RHS_4, (MR_Integer) 2)));
#line 685 "goal_util.m"
          MR_Word hlds__goal_util___Functor_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__RHS_4, (MR_Integer) 0)));
#line 685 "goal_util.m"
          MR_Word hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__RHS_4, (MR_Integer) 1)));

#line 686 "goal_util.m"
          {
#line 686 "goal_util.m"
            parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__ArgVars_9, hlds__goal_util__STATE_VARIABLE_Set_0_19, hlds__goal_util__STATE_VARIABLE_Set_20);
          }
#line 685 "goal_util.m"
        }
#line 682 "goal_util.m"
        break;
#line 682 "goal_util.m"
      case (MR_Integer) 2:
#line 688 "goal_util.m"
        {
#line 688 "goal_util.m"
          MR_Word hlds__goal_util__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 688 "goal_util.m"
          MR_Word hlds__goal_util__NonLocals_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_4, (MR_Integer) 2)));
#line 688 "goal_util.m"
          MR_Word hlds__goal_util__LambdaVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_4, (MR_Integer) 3)));
#line 688 "goal_util.m"
          MR_Word hlds__goal_util__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_4, (MR_Integer) 6)));
#line 688 "goal_util.m"
          MR_Word hlds__goal_util__STATE_VARIABLE_Set_21_21;
#line 688 "goal_util.m"
          MR_Word hlds__goal_util__STATE_VARIABLE_Set_22_22;
#line 688 "goal_util.m"
          MR_Word hlds__goal_util__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 688 "goal_util.m"
          MR_Word hlds__goal_util__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 688 "goal_util.m"
          MR_Word hlds__goal_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_4, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 688 "goal_util.m"
          MR_Word hlds__goal_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_4, (MR_Integer) 4)));
#line 688 "goal_util.m"
          MR_Word hlds__goal_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_4, (MR_Integer) 5)));

#line 689 "goal_util.m"
          {
#line 689 "goal_util.m"
            parse_tree__set_of_var__insert_list_3_p_0(hlds__goal_util__TypeCtorInfo_28_28, hlds__goal_util__NonLocals_14, hlds__goal_util__STATE_VARIABLE_Set_0_19, &hlds__goal_util__STATE_VARIABLE_Set_21_21);
          }
#line 690 "goal_util.m"
          {
#line 690 "goal_util.m"
            parse_tree__set_of_var__insert_list_3_p_0(hlds__goal_util__TypeCtorInfo_28_28, hlds__goal_util__LambdaVars_15, hlds__goal_util__STATE_VARIABLE_Set_21_21, &hlds__goal_util__STATE_VARIABLE_Set_22_22);
          }
#line 691 "goal_util.m"
          {
#line 691 "goal_util.m"
            hlds__goal_util__goal_vars_acc_3_p_0(hlds__goal_util__Goal_18, hlds__goal_util__STATE_VARIABLE_Set_22_22, hlds__goal_util__STATE_VARIABLE_Set_20);
          }
#line 688 "goal_util.m"
        }
#line 682 "goal_util.m"
        break;
#line 682 "goal_util.m"
    }
#line 682 "goal_util.m"
  }
#line 677 "goal_util.m"
}

#line 669 "goal_util.m"
static void MR_CALL 
hlds__goal_util__cases_goal_vars_acc_3_p_0(
#line 669 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 669 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_Set_0_2,
#line 669 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_3)
#line 669 "goal_util.m"
{
#line 672 "goal_util.m"
  while (MR_TRUE)
#line 672 "goal_util.m"
    {
#line 672 "goal_util.m"
      /* tailcall optimized into a loop */
#line 672 "goal_util.m"
      {
#line 672 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;

#line 672 "goal_util.m"
        if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 672 "goal_util.m"
          *hlds__goal_util__STATE_VARIABLE_Set_3 = hlds__goal_util__STATE_VARIABLE_Set_0_2;
#line 672 "goal_util.m"
        else
#line 673 "goal_util.m"
          {
#line 673 "goal_util.m"
            MR_Word hlds__goal_util__Goal_9;
#line 673 "goal_util.m"
            MR_Word hlds__goal_util__Cases_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 673 "goal_util.m"
            MR_Word hlds__goal_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 673 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_Set_15_15;
#line 673 "goal_util.m"
            MR_Word hlds__goal_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_14_14, (MR_Integer) 0)));
#line 673 "goal_util.m"
            MR_Word hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_14_14, (MR_Integer) 1)));

#line 673 "goal_util.m"
            hlds__goal_util__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_14_14, (MR_Integer) 2)));
#line 674 "goal_util.m"
            {
#line 674 "goal_util.m"
              hlds__goal_util__goal_vars_acc_3_p_0(hlds__goal_util__Goal_9, hlds__goal_util__STATE_VARIABLE_Set_0_2, &hlds__goal_util__STATE_VARIABLE_Set_15_15);
            }
#line 675 "goal_util.m"
            /* direct tailcall eliminated */
#line 675 "goal_util.m"
            {
#line 675 "goal_util.m"
              MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Cases_10;
#line 675 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_Set_0__tmp_copy_2 = hlds__goal_util__STATE_VARIABLE_Set_15_15;

#line 675 "goal_util.m"
              hlds__goal_util__STATE_VARIABLE_Set_0_2 = hlds__goal_util__STATE_VARIABLE_Set_0__tmp_copy_2;
#line 675 "goal_util.m"
              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 675 "goal_util.m"
            }
#line 675 "goal_util.m"
            continue;
#line 673 "goal_util.m"
          }
#line 672 "goal_util.m"
      }
#line 672 "goal_util.m"
      break;
#line 672 "goal_util.m"
    }
#line 669 "goal_util.m"
}

#line 661 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goals_goal_vars_acc_3_p_0(
#line 661 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 661 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_Set_0_2,
#line 661 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_3)
#line 661 "goal_util.m"
{
#line 664 "goal_util.m"
  while (MR_TRUE)
#line 664 "goal_util.m"
    {
#line 664 "goal_util.m"
      /* tailcall optimized into a loop */
#line 664 "goal_util.m"
      {
#line 664 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;

#line 664 "goal_util.m"
        if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 664 "goal_util.m"
          *hlds__goal_util__STATE_VARIABLE_Set_3 = hlds__goal_util__STATE_VARIABLE_Set_0_2;
#line 664 "goal_util.m"
        else
#line 665 "goal_util.m"
          {
#line 665 "goal_util.m"
            MR_Word hlds__goal_util__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 665 "goal_util.m"
            MR_Word hlds__goal_util__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 665 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_Set_12_12;

#line 666 "goal_util.m"
            {
#line 666 "goal_util.m"
              hlds__goal_util__goal_vars_acc_3_p_0(hlds__goal_util__Goal_7, hlds__goal_util__STATE_VARIABLE_Set_0_2, &hlds__goal_util__STATE_VARIABLE_Set_12_12);
            }
#line 667 "goal_util.m"
            /* direct tailcall eliminated */
#line 667 "goal_util.m"
            {
#line 667 "goal_util.m"
              MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Goals_8;
#line 667 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_Set_0__tmp_copy_2 = hlds__goal_util__STATE_VARIABLE_Set_12_12;

#line 667 "goal_util.m"
              hlds__goal_util__STATE_VARIABLE_Set_0_2 = hlds__goal_util__STATE_VARIABLE_Set_0__tmp_copy_2;
#line 667 "goal_util.m"
              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 667 "goal_util.m"
            }
#line 667 "goal_util.m"
            continue;
#line 665 "goal_util.m"
          }
#line 664 "goal_util.m"
      }
#line 664 "goal_util.m"
      break;
#line 664 "goal_util.m"
    }
#line 661 "goal_util.m"
}

#line 628 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__goal_vars_acc_3_p_0_2(
#line 628 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 628 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1)
#line 628 "goal_util.m"
{
#line 628 "goal_util.m"
  {
#line 628 "goal_util.m"
    MR_Box hlds__goal_util__wrapper_arg_2;
#line 628 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 628 "goal_util.m"
    MR_Word hlds__goal_util__conv1_HeadVar__2_2;

#line 628 "goal_util.m"
    {
#line 628 "goal_util.m"
      hlds__goal_util__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    }
#line 628 "goal_util.m"
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv1_HeadVar__2_2));
#line 628 "goal_util.m"
    return hlds__goal_util__wrapper_arg_2;
#line 628 "goal_util.m"
  }
#line 628 "goal_util.m"
}

#line 627 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__goal_vars_acc_3_p_0_1(
#line 627 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 627 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1)
#line 627 "goal_util.m"
{
#line 627 "goal_util.m"
  {
#line 627 "goal_util.m"
    MR_Box hlds__goal_util__wrapper_arg_2;
#line 627 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 627 "goal_util.m"
    MR_Word hlds__goal_util__conv0_HeadVar__2_2;

#line 627 "goal_util.m"
    {
#line 627 "goal_util.m"
      hlds__goal_util__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    }
#line 627 "goal_util.m"
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__2_2));
#line 627 "goal_util.m"
    return hlds__goal_util__wrapper_arg_2;
#line 627 "goal_util.m"
  }
#line 627 "goal_util.m"
}

#line 547 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_vars_acc_3_p_0(
#line 547 "goal_util.m"
  MR_Word hlds__goal_util__Goal_4,
#line 547 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_Set_0_96,
#line 547 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_97)
#line 547 "goal_util.m"
{
#line 550 "goal_util.m"
  while (MR_TRUE)
#line 550 "goal_util.m"
    {
#line 550 "goal_util.m"
      /* tailcall optimized into a loop */
#line 550 "goal_util.m"
      {
#line 550 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;
#line 550 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, (MR_Integer) 0)));
#line 551 "goal_util.m"
        MR_Word hlds__goal_util___GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, (MR_Integer) 1)));

#line 570 "goal_util.m"
#line 570 "goal_util.m"
        switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_6)) {
#line 570 "goal_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 570 "goal_util.m"
          case (MR_Integer) 0:
#line 617 "goal_util.m"
            {
#line 617 "goal_util.m"
              MR_Word hlds__goal_util__SubGoal_141 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_6), (MR_Integer) 0);

#line 618 "goal_util.m"
              /* direct tailcall eliminated */
#line 618 "goal_util.m"
              {
#line 618 "goal_util.m"
                MR_Word hlds__goal_util__Goal__tmp_copy_4 = hlds__goal_util__SubGoal_141;

#line 618 "goal_util.m"
                hlds__goal_util__Goal_4 = hlds__goal_util__Goal__tmp_copy_4;
#line 618 "goal_util.m"
              }
#line 618 "goal_util.m"
              continue;
#line 617 "goal_util.m"
            }
#line 570 "goal_util.m"
            break;
#line 570 "goal_util.m"
          case (MR_Integer) 1:
#line 553 "goal_util.m"
            {
#line 553 "goal_util.m"
              MR_Word hlds__goal_util__TypeCtorInfo_147_147 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 553 "goal_util.m"
              MR_Word hlds__goal_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_6, (MR_Integer) 0)));
#line 553 "goal_util.m"
              MR_Word hlds__goal_util__RHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
#line 553 "goal_util.m"
              MR_Word hlds__goal_util__Unif_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_6, (MR_Integer) 3)));
#line 553 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_Set_130_130;
#line 553 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_Set_132_132;
#line 553 "goal_util.m"
              MR_Word hlds__goal_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
#line 553 "goal_util.m"
              MR_Word hlds__goal_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_6, (MR_Integer) 4)));

#line 554 "goal_util.m"
              {
#line 554 "goal_util.m"
                parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_147_147, hlds__goal_util__Var_8, hlds__goal_util__STATE_VARIABLE_Set_0_96, &hlds__goal_util__STATE_VARIABLE_Set_130_130);
              }
#line 562 "goal_util.m"
#line 562 "goal_util.m"
              switch (MR_tag((MR_Word) hlds__goal_util__Unif_11)) {
#line 562 "goal_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 562 "goal_util.m"
                case (MR_Integer) 0:
#line 556 "goal_util.m"
                  {
#line 556 "goal_util.m"
                    MR_Word hlds__goal_util__CellToReuse_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unif_11, (MR_Integer) 4)));
#line 556 "goal_util.m"
                    MR_Word hlds__goal_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unif_11, (MR_Integer) 0)));
#line 556 "goal_util.m"
                    MR_Word hlds__goal_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unif_11, (MR_Integer) 1)));
#line 556 "goal_util.m"
                    MR_Word hlds__goal_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unif_11, (MR_Integer) 2)));
#line 556 "goal_util.m"
                    MR_Word hlds__goal_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unif_11, (MR_Integer) 3)));
#line 556 "goal_util.m"
                    MR_Word hlds__goal_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unif_11, (MR_Integer) 5)));
#line 556 "goal_util.m"
                    MR_Word hlds__goal_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unif_11, (MR_Integer) 6)));
#line 557 "goal_util.m"
                    MR_Word hlds__goal_util__TypeInfo_169_169;
#line 557 "goal_util.m"
                    MR_Word hlds__goal_util__V_131_131;
#line 557 "goal_util.m"
                    MR_Word hlds__goal_util__V_165_165;
#line 557 "goal_util.m"
                    MR_Word hlds__goal_util__V_20_20;
#line 557 "goal_util.m"
                    MR_Word hlds__goal_util__V_21_21;

#line 557 "goal_util.m"
                    hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__CellToReuse_17)) == (MR_mktag((MR_Integer) 1)));
#line 557 "goal_util.m"
                    if (hlds__goal_util__succeeded)
#line 557 "goal_util.m"
                      {
#line 557 "goal_util.m"
                        hlds__goal_util__V_131_131 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__CellToReuse_17), (MR_Integer) 1);
#line 557 "goal_util.m"
                        hlds__goal_util__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_131_131, (MR_Integer) 0)));
#line 557 "goal_util.m"
                        hlds__goal_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_131_131, (MR_Integer) 1)));
#line 557 "goal_util.m"
                        hlds__goal_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__V_131_131, (MR_Integer) 2)));
#line 9022 "hlds.goal_util.c"
                        hlds__goal_util__TypeInfo_169_169 = (MR_Word) &hlds__goal_util_scalar_common_1[0];
#line 557 "goal_util.m"
                        {
#line 557 "goal_util.m"
                          hlds__goal_util__succeeded = mercury__builtin__unify_2_p_0(hlds__goal_util__TypeInfo_169_169, ((MR_Box) (hlds__goal_util__Var_8)), ((MR_Box) (hlds__goal_util__V_165_165)));
                        }
#line 557 "goal_util.m"
                      }
#line 559 "goal_util.m"
                    if (hlds__goal_util__succeeded)
#line 558 "goal_util.m"
                      {
#line 558 "goal_util.m"
                        parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_147_147, hlds__goal_util__Var_8, hlds__goal_util__STATE_VARIABLE_Set_130_130, &hlds__goal_util__STATE_VARIABLE_Set_132_132);
                      }
#line 559 "goal_util.m"
                    else
#line 559 "goal_util.m"
                      hlds__goal_util__STATE_VARIABLE_Set_132_132 = hlds__goal_util__STATE_VARIABLE_Set_130_130;
#line 556 "goal_util.m"
                  }
#line 562 "goal_util.m"
                  break;
#line 562 "goal_util.m"
                case (MR_Integer) 1:
#line 563 "goal_util.m"
                  hlds__goal_util__STATE_VARIABLE_Set_132_132 = hlds__goal_util__STATE_VARIABLE_Set_130_130;
#line 562 "goal_util.m"
                  break;
#line 562 "goal_util.m"
                case (MR_Integer) 2:
#line 564 "goal_util.m"
                  hlds__goal_util__STATE_VARIABLE_Set_132_132 = hlds__goal_util__STATE_VARIABLE_Set_130_130;
#line 562 "goal_util.m"
                  break;
#line 562 "goal_util.m"
                case (MR_Integer) 3:
#line 562 "goal_util.m"
#line 562 "goal_util.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Unif_11, (MR_Integer) 0)))) {
#line 562 "goal_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 562 "goal_util.m"
                    case (MR_Integer) 0:
#line 565 "goal_util.m"
                      hlds__goal_util__STATE_VARIABLE_Set_132_132 = hlds__goal_util__STATE_VARIABLE_Set_130_130;
#line 562 "goal_util.m"
                      break;
#line 562 "goal_util.m"
                    case (MR_Integer) 1:
#line 566 "goal_util.m"
                      hlds__goal_util__STATE_VARIABLE_Set_132_132 = hlds__goal_util__STATE_VARIABLE_Set_130_130;
#line 562 "goal_util.m"
                      break;
#line 562 "goal_util.m"
                  }
#line 562 "goal_util.m"
                  break;
#line 562 "goal_util.m"
              }
#line 569 "goal_util.m"
              {
#line 569 "goal_util.m"
                hlds__goal_util__rhs_goal_vars_acc_3_p_0(hlds__goal_util__RHS_9, hlds__goal_util__STATE_VARIABLE_Set_132_132, hlds__goal_util__STATE_VARIABLE_Set_97);
              }
#line 553 "goal_util.m"
            }
#line 570 "goal_util.m"
            break;
#line 570 "goal_util.m"
          case (MR_Integer) 2:
#line 576 "goal_util.m"
            {
#line 576 "goal_util.m"
              MR_Word hlds__goal_util__ArgVars_134 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
#line 576 "goal_util.m"
              MR_Word hlds__goal_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 0)));
#line 576 "goal_util.m"
              MR_Integer hlds__goal_util__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
#line 576 "goal_util.m"
              MR_Word hlds__goal_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 3)));
#line 576 "goal_util.m"
              MR_Word hlds__goal_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 4)));
#line 576 "goal_util.m"
              MR_Word hlds__goal_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 5)));

#line 577 "goal_util.m"
              {
#line 577 "goal_util.m"
                parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__ArgVars_134, hlds__goal_util__STATE_VARIABLE_Set_0_96, hlds__goal_util__STATE_VARIABLE_Set_97);
              }
#line 576 "goal_util.m"
            }
#line 570 "goal_util.m"
            break;
#line 570 "goal_util.m"
          case (MR_Integer) 3:
#line 570 "goal_util.m"
#line 570 "goal_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 0)))) {
#line 570 "goal_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 570 "goal_util.m"
              case (MR_Integer) 0:
#line 571 "goal_util.m"
                {
#line 571 "goal_util.m"
                  MR_Word hlds__goal_util__TypeCtorInfo_148_148;
#line 571 "goal_util.m"
                  MR_Word hlds__goal_util__GenericCall_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
#line 571 "goal_util.m"
                  MR_Word hlds__goal_util__ArgVars_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
#line 571 "goal_util.m"
                  MR_Word hlds__goal_util__GenericCallVars_40;
#line 571 "goal_util.m"
                  MR_Word hlds__goal_util__STATE_VARIABLE_Set_128_128;
#line 571 "goal_util.m"
                  MR_Word hlds__goal_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 3)));
#line 571 "goal_util.m"
                  MR_Word hlds__goal_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 4)));
#line 571 "goal_util.m"
                  MR_Word hlds__goal_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 5)));

#line 572 "goal_util.m"
                  {
#line 572 "goal_util.m"
                    hlds__goal_util__generic_call_vars_2_p_0(hlds__goal_util__GenericCall_35, &hlds__goal_util__GenericCallVars_40);
                  }
#line 9151 "hlds.goal_util.c"
                  hlds__goal_util__TypeCtorInfo_148_148 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 573 "goal_util.m"
                  {
#line 573 "goal_util.m"
                    parse_tree__set_of_var__insert_list_3_p_0(hlds__goal_util__TypeCtorInfo_148_148, hlds__goal_util__GenericCallVars_40, hlds__goal_util__STATE_VARIABLE_Set_0_96, &hlds__goal_util__STATE_VARIABLE_Set_128_128);
                  }
#line 574 "goal_util.m"
                  {
#line 574 "goal_util.m"
                    parse_tree__set_of_var__insert_list_3_p_0(hlds__goal_util__TypeCtorInfo_148_148, hlds__goal_util__ArgVars_36, hlds__goal_util__STATE_VARIABLE_Set_128_128, hlds__goal_util__STATE_VARIABLE_Set_97);
                  }
#line 571 "goal_util.m"
                }
#line 570 "goal_util.m"
                break;
#line 570 "goal_util.m"
              case (MR_Integer) 1:
#line 626 "goal_util.m"
                {
#line 626 "goal_util.m"
                  MR_Word hlds__goal_util__TypeCtorInfo_157_157 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 626 "goal_util.m"
                  MR_Word hlds__goal_util__TypeInfo_158_158 = (MR_Word) &hlds__goal_util_scalar_common_1[0];
#line 626 "goal_util.m"
                  MR_Word hlds__goal_util__TypeCtorInfo_163_163;
#line 626 "goal_util.m"
                  MR_Word hlds__goal_util__Args_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 4)));
#line 626 "goal_util.m"
                  MR_Word hlds__goal_util__ExtraArgs_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 5)));
#line 626 "goal_util.m"
                  MR_Word hlds__goal_util__ExtraVars_78;
#line 626 "goal_util.m"
                  MR_Word hlds__goal_util__STATE_VARIABLE_Set_110_110;
#line 626 "goal_util.m"
                  MR_Word hlds__goal_util__ArgVars_143;
#line 626 "goal_util.m"
                  MR_Word hlds__goal_util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
#line 626 "goal_util.m"
                  MR_Word hlds__goal_util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
#line 626 "goal_util.m"
                  MR_Integer hlds__goal_util__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 3)));
#line 626 "goal_util.m"
                  MR_Word hlds__goal_util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 6)));
#line 626 "goal_util.m"
                  MR_Word hlds__goal_util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 7)));

#line 627 "goal_util.m"
                  {
#line 627 "goal_util.m"
                    hlds__goal_util__ArgVars_143 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_157_157, hlds__goal_util__TypeInfo_158_158, (MR_Word) &hlds__goal_util_scalar_common_3[14], hlds__goal_util__Args_74);
                  }
#line 628 "goal_util.m"
                  {
#line 628 "goal_util.m"
                    hlds__goal_util__ExtraVars_78 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_157_157, hlds__goal_util__TypeInfo_158_158, (MR_Word) &hlds__goal_util_scalar_common_3[15], hlds__goal_util__ExtraArgs_75);
                  }
#line 9208 "hlds.goal_util.c"
                  hlds__goal_util__TypeCtorInfo_163_163 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 629 "goal_util.m"
                  {
#line 629 "goal_util.m"
                    parse_tree__set_of_var__insert_list_3_p_0(hlds__goal_util__TypeCtorInfo_163_163, hlds__goal_util__ArgVars_143, hlds__goal_util__STATE_VARIABLE_Set_0_96, &hlds__goal_util__STATE_VARIABLE_Set_110_110);
                  }
#line 630 "goal_util.m"
                  {
#line 630 "goal_util.m"
                    parse_tree__set_of_var__insert_list_3_p_0(hlds__goal_util__TypeCtorInfo_163_163, hlds__goal_util__ExtraVars_78, hlds__goal_util__STATE_VARIABLE_Set_110_110, hlds__goal_util__STATE_VARIABLE_Set_97);
                  }
#line 626 "goal_util.m"
                }
#line 570 "goal_util.m"
                break;
#line 570 "goal_util.m"
              case (MR_Integer) 2:
#line 581 "goal_util.m"
                {
#line 581 "goal_util.m"
                  MR_Word hlds__goal_util__Goals_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
#line 579 "goal_util.m"
                  MR_Word hlds__goal_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));

#line 582 "goal_util.m"
                  {
#line 582 "goal_util.m"
                    hlds__goal_util__goals_goal_vars_acc_3_p_0(hlds__goal_util__Goals_47, hlds__goal_util__STATE_VARIABLE_Set_0_96, hlds__goal_util__STATE_VARIABLE_Set_97);
                  }
#line 581 "goal_util.m"
                }
#line 570 "goal_util.m"
                break;
#line 570 "goal_util.m"
              case (MR_Integer) 3:
#line 581 "goal_util.m"
                {
#line 581 "goal_util.m"
                  MR_Word hlds__goal_util__Goals_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));

#line 582 "goal_util.m"
                  {
#line 582 "goal_util.m"
                    hlds__goal_util__goals_goal_vars_acc_3_p_0(hlds__goal_util__Goals_166, hlds__goal_util__STATE_VARIABLE_Set_0_96, hlds__goal_util__STATE_VARIABLE_Set_97);
                  }
#line 581 "goal_util.m"
                }
#line 570 "goal_util.m"
                break;
#line 570 "goal_util.m"
              case (MR_Integer) 4:
#line 584 "goal_util.m"
                {
#line 584 "goal_util.m"
                  MR_Word hlds__goal_util__Cases_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 3)));
#line 584 "goal_util.m"
                  MR_Word hlds__goal_util__STATE_VARIABLE_Set_124_124;
#line 584 "goal_util.m"
                  MR_Word hlds__goal_util__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
#line 584 "goal_util.m"
                  MR_Word hlds__goal_util___Det_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));

#line 585 "goal_util.m"
                  {
#line 585 "goal_util.m"
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Var_135, hlds__goal_util__STATE_VARIABLE_Set_0_96, &hlds__goal_util__STATE_VARIABLE_Set_124_124);
                  }
#line 586 "goal_util.m"
                  {
#line 586 "goal_util.m"
                    hlds__goal_util__cases_goal_vars_acc_3_p_0(hlds__goal_util__Cases_49, hlds__goal_util__STATE_VARIABLE_Set_124_124, hlds__goal_util__STATE_VARIABLE_Set_97);
                  }
#line 584 "goal_util.m"
                }
#line 570 "goal_util.m"
                break;
#line 570 "goal_util.m"
              case (MR_Integer) 5:
#line 588 "goal_util.m"
                {
#line 588 "goal_util.m"
                  MR_Word hlds__goal_util__Reason_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
#line 588 "goal_util.m"
                  MR_Word hlds__goal_util__SubGoal_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
#line 588 "goal_util.m"
                  MR_Word hlds__goal_util__STATE_VARIABLE_Set_122_122;

#line 592 "goal_util.m"
#line 592 "goal_util.m"
                  switch (MR_tag((MR_Word) hlds__goal_util__Reason_50)) {
#line 592 "goal_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 592 "goal_util.m"
                    case (MR_Integer) 0:
#line 590 "goal_util.m"
                      {
#line 590 "goal_util.m"
                        MR_Word hlds__goal_util__Vars_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Reason_50, (MR_Integer) 0)));

#line 591 "goal_util.m"
                        {
#line 591 "goal_util.m"
                          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Vars_52, hlds__goal_util__STATE_VARIABLE_Set_0_96, &hlds__goal_util__STATE_VARIABLE_Set_122_122);
                        }
#line 590 "goal_util.m"
                      }
#line 592 "goal_util.m"
                      break;
#line 592 "goal_util.m"
                    case (MR_Integer) 1:
#line 593 "goal_util.m"
                      {
#line 593 "goal_util.m"
                        MR_Word hlds__goal_util__Vars_136 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Reason_50, (MR_Integer) 0)));
#line 593 "goal_util.m"
                        MR_Word hlds__goal_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Reason_50, (MR_Integer) 1)));

#line 594 "goal_util.m"
                        {
#line 594 "goal_util.m"
                          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Vars_136, hlds__goal_util__STATE_VARIABLE_Set_0_96, &hlds__goal_util__STATE_VARIABLE_Set_122_122);
                        }
#line 593 "goal_util.m"
                      }
#line 592 "goal_util.m"
                      break;
#line 592 "goal_util.m"
                    case (MR_Integer) 2:
#line 608 "goal_util.m"
                      hlds__goal_util__STATE_VARIABLE_Set_122_122 = hlds__goal_util__STATE_VARIABLE_Set_0_96;
#line 592 "goal_util.m"
                      break;
#line 592 "goal_util.m"
                    case (MR_Integer) 3:
#line 592 "goal_util.m"
#line 592 "goal_util.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 0)))) {
#line 592 "goal_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 592 "goal_util.m"
                        case (MR_Integer) 0:
#line 609 "goal_util.m"
                          hlds__goal_util__STATE_VARIABLE_Set_122_122 = hlds__goal_util__STATE_VARIABLE_Set_0_96;
#line 592 "goal_util.m"
                          break;
#line 592 "goal_util.m"
                        case (MR_Integer) 1:
#line 601 "goal_util.m"
                          {
#line 601 "goal_util.m"
                            MR_Word hlds__goal_util__Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 1)));

#line 602 "goal_util.m"
                            {
#line 602 "goal_util.m"
                              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Var_138, hlds__goal_util__STATE_VARIABLE_Set_0_96, &hlds__goal_util__STATE_VARIABLE_Set_122_122);
                            }
#line 601 "goal_util.m"
                          }
#line 592 "goal_util.m"
                          break;
#line 592 "goal_util.m"
                        case (MR_Integer) 2:
#line 601 "goal_util.m"
                          {
#line 601 "goal_util.m"
                            MR_Word hlds__goal_util__Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 1)));
#line 600 "goal_util.m"
                            MR_Word hlds__goal_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 2)));

#line 602 "goal_util.m"
                            {
#line 602 "goal_util.m"
                              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Var_167, hlds__goal_util__STATE_VARIABLE_Set_0_96, &hlds__goal_util__STATE_VARIABLE_Set_122_122);
                            }
#line 601 "goal_util.m"
                          }
#line 592 "goal_util.m"
                          break;
#line 592 "goal_util.m"
                        case (MR_Integer) 3:
#line 610 "goal_util.m"
                          hlds__goal_util__STATE_VARIABLE_Set_122_122 = hlds__goal_util__STATE_VARIABLE_Set_0_96;
#line 592 "goal_util.m"
                          break;
#line 592 "goal_util.m"
                        case (MR_Integer) 4:
#line 611 "goal_util.m"
                          hlds__goal_util__STATE_VARIABLE_Set_122_122 = hlds__goal_util__STATE_VARIABLE_Set_0_96;
#line 592 "goal_util.m"
                          break;
#line 592 "goal_util.m"
                        case (MR_Integer) 5:
#line 596 "goal_util.m"
                          {
#line 596 "goal_util.m"
                            MR_Word hlds__goal_util__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 1)));
#line 596 "goal_util.m"
                            MR_Word hlds__goal_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 2)));

#line 597 "goal_util.m"
                            {
#line 597 "goal_util.m"
                              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Var_137, hlds__goal_util__STATE_VARIABLE_Set_0_96, &hlds__goal_util__STATE_VARIABLE_Set_122_122);
                            }
#line 596 "goal_util.m"
                          }
#line 592 "goal_util.m"
                          break;
#line 592 "goal_util.m"
                        case (MR_Integer) 6:
#line 612 "goal_util.m"
                          hlds__goal_util__STATE_VARIABLE_Set_122_122 = hlds__goal_util__STATE_VARIABLE_Set_0_96;
#line 592 "goal_util.m"
                          break;
#line 592 "goal_util.m"
                        case (MR_Integer) 7:
#line 604 "goal_util.m"
                          {
#line 604 "goal_util.m"
                            MR_Word hlds__goal_util__TypeCtorInfo_155_155 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 604 "goal_util.m"
                            MR_Word hlds__goal_util__LCVar_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 1)));
#line 604 "goal_util.m"
                            MR_Word hlds__goal_util__LCSVar_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 2)));
#line 604 "goal_util.m"
                            MR_Word hlds__goal_util__STATE_VARIABLE_Set_117_117;
#line 604 "goal_util.m"
                            MR_Word hlds__goal_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 3)));

#line 605 "goal_util.m"
                            {
#line 605 "goal_util.m"
                              parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_155_155, hlds__goal_util__LCVar_56, hlds__goal_util__STATE_VARIABLE_Set_0_96, &hlds__goal_util__STATE_VARIABLE_Set_117_117);
                            }
#line 606 "goal_util.m"
                            {
#line 606 "goal_util.m"
                              parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_155_155, hlds__goal_util__LCSVar_57, hlds__goal_util__STATE_VARIABLE_Set_117_117, &hlds__goal_util__STATE_VARIABLE_Set_122_122);
                            }
#line 604 "goal_util.m"
                          }
#line 592 "goal_util.m"
                          break;
#line 592 "goal_util.m"
                      }
#line 592 "goal_util.m"
                      break;
#line 592 "goal_util.m"
                  }
#line 615 "goal_util.m"
                  /* direct tailcall eliminated */
#line 615 "goal_util.m"
                  {
#line 615 "goal_util.m"
                    MR_Word hlds__goal_util__Goal__tmp_copy_4 = hlds__goal_util__SubGoal_51;
#line 615 "goal_util.m"
                    MR_Word hlds__goal_util__STATE_VARIABLE_Set_0__tmp_copy_96 = hlds__goal_util__STATE_VARIABLE_Set_122_122;

#line 615 "goal_util.m"
                    hlds__goal_util__STATE_VARIABLE_Set_0_96 = hlds__goal_util__STATE_VARIABLE_Set_0__tmp_copy_96;
#line 615 "goal_util.m"
                    hlds__goal_util__Goal_4 = hlds__goal_util__Goal__tmp_copy_4;
#line 615 "goal_util.m"
                  }
#line 615 "goal_util.m"
                  continue;
#line 588 "goal_util.m"
                }
#line 570 "goal_util.m"
                break;
#line 570 "goal_util.m"
              case (MR_Integer) 6:
#line 620 "goal_util.m"
                {
#line 620 "goal_util.m"
                  MR_Word hlds__goal_util__Cond_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
#line 620 "goal_util.m"
                  MR_Word hlds__goal_util__Then_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 3)));
#line 620 "goal_util.m"
                  MR_Word hlds__goal_util__Else_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 4)));
#line 620 "goal_util.m"
                  MR_Word hlds__goal_util__STATE_VARIABLE_Set_112_112;
#line 620 "goal_util.m"
                  MR_Word hlds__goal_util__STATE_VARIABLE_Set_113_113;
#line 620 "goal_util.m"
                  MR_Word hlds__goal_util__STATE_VARIABLE_Set_114_114;
#line 620 "goal_util.m"
                  MR_Word hlds__goal_util__Vars_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));

#line 621 "goal_util.m"
                  {
#line 621 "goal_util.m"
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Vars_142, hlds__goal_util__STATE_VARIABLE_Set_0_96, &hlds__goal_util__STATE_VARIABLE_Set_112_112);
                  }
#line 622 "goal_util.m"
                  {
#line 622 "goal_util.m"
                    hlds__goal_util__goal_vars_acc_3_p_0(hlds__goal_util__Cond_68, hlds__goal_util__STATE_VARIABLE_Set_112_112, &hlds__goal_util__STATE_VARIABLE_Set_113_113);
                  }
#line 623 "goal_util.m"
                  {
#line 623 "goal_util.m"
                    hlds__goal_util__goal_vars_acc_3_p_0(hlds__goal_util__Then_69, hlds__goal_util__STATE_VARIABLE_Set_113_113, &hlds__goal_util__STATE_VARIABLE_Set_114_114);
                  }
#line 624 "goal_util.m"
                  /* direct tailcall eliminated */
#line 624 "goal_util.m"
                  {
#line 624 "goal_util.m"
                    MR_Word hlds__goal_util__Goal__tmp_copy_4 = hlds__goal_util__Else_70;
#line 624 "goal_util.m"
                    MR_Word hlds__goal_util__STATE_VARIABLE_Set_0__tmp_copy_96 = hlds__goal_util__STATE_VARIABLE_Set_114_114;

#line 624 "goal_util.m"
                    hlds__goal_util__STATE_VARIABLE_Set_0_96 = hlds__goal_util__STATE_VARIABLE_Set_0__tmp_copy_96;
#line 624 "goal_util.m"
                    hlds__goal_util__Goal_4 = hlds__goal_util__Goal__tmp_copy_4;
#line 624 "goal_util.m"
                  }
#line 624 "goal_util.m"
                  continue;
#line 620 "goal_util.m"
                }
#line 570 "goal_util.m"
                break;
#line 570 "goal_util.m"
              case (MR_Integer) 7:
#line 632 "goal_util.m"
                {
#line 632 "goal_util.m"
                  MR_Word hlds__goal_util__Shorthand_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));

#line 650 "goal_util.m"
#line 650 "goal_util.m"
                  switch (MR_tag((MR_Word) hlds__goal_util__Shorthand_79)) {
#line 650 "goal_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 650 "goal_util.m"
                    case (MR_Integer) 0:
#line 655 "goal_util.m"
                      {
#line 655 "goal_util.m"
                        MR_Word hlds__goal_util__LeftGoal_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Shorthand_79, (MR_Integer) 0)));
#line 655 "goal_util.m"
                        MR_Word hlds__goal_util__RightGoal_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Shorthand_79, (MR_Integer) 1)));
#line 655 "goal_util.m"
                        MR_Word hlds__goal_util__STATE_VARIABLE_Set_98_98;

#line 656 "goal_util.m"
                        {
#line 656 "goal_util.m"
                          hlds__goal_util__goal_vars_acc_3_p_0(hlds__goal_util__LeftGoal_94, hlds__goal_util__STATE_VARIABLE_Set_0_96, &hlds__goal_util__STATE_VARIABLE_Set_98_98);
                        }
#line 657 "goal_util.m"
                        /* direct tailcall eliminated */
#line 657 "goal_util.m"
                        {
#line 657 "goal_util.m"
                          MR_Word hlds__goal_util__Goal__tmp_copy_4 = hlds__goal_util__RightGoal_95;
#line 657 "goal_util.m"
                          MR_Word hlds__goal_util__STATE_VARIABLE_Set_0__tmp_copy_96 = hlds__goal_util__STATE_VARIABLE_Set_98_98;

#line 657 "goal_util.m"
                          hlds__goal_util__STATE_VARIABLE_Set_0_96 = hlds__goal_util__STATE_VARIABLE_Set_0__tmp_copy_96;
#line 657 "goal_util.m"
                          hlds__goal_util__Goal_4 = hlds__goal_util__Goal__tmp_copy_4;
#line 657 "goal_util.m"
                        }
#line 657 "goal_util.m"
                        continue;
#line 655 "goal_util.m"
                      }
#line 650 "goal_util.m"
                      break;
#line 650 "goal_util.m"
                    case (MR_Integer) 1:
#line 635 "goal_util.m"
                      {
#line 635 "goal_util.m"
                        MR_Word hlds__goal_util__TypeCtorInfo_164_164 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 635 "goal_util.m"
                        MR_Word hlds__goal_util__Outer_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_79, (MR_Integer) 1)));
#line 635 "goal_util.m"
                        MR_Word hlds__goal_util__Inner_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_79, (MR_Integer) 2)));
#line 635 "goal_util.m"
                        MR_Word hlds__goal_util__MaybeOutputVars_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_79, (MR_Integer) 3)));
#line 635 "goal_util.m"
                        MR_Word hlds__goal_util__MainGoal_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_79, (MR_Integer) 4)));
#line 635 "goal_util.m"
                        MR_Word hlds__goal_util__OrElseGoals_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_79, (MR_Integer) 5)));
#line 635 "goal_util.m"
                        MR_Word hlds__goal_util__OuterDI_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Outer_81, (MR_Integer) 0)));
#line 635 "goal_util.m"
                        MR_Word hlds__goal_util__OuterUO_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Outer_81, (MR_Integer) 1)));
#line 635 "goal_util.m"
                        MR_Word hlds__goal_util__InnerDI_89;
#line 635 "goal_util.m"
                        MR_Word hlds__goal_util__InnerUO_90;
#line 635 "goal_util.m"
                        MR_Word hlds__goal_util__STATE_VARIABLE_Set_101_101;
#line 635 "goal_util.m"
                        MR_Word hlds__goal_util__STATE_VARIABLE_Set_102_102;
#line 635 "goal_util.m"
                        MR_Word hlds__goal_util__STATE_VARIABLE_Set_103_103;
#line 635 "goal_util.m"
                        MR_Word hlds__goal_util__STATE_VARIABLE_Set_104_104;
#line 635 "goal_util.m"
                        MR_Word hlds__goal_util__STATE_VARIABLE_Set_105_105;
#line 635 "goal_util.m"
                        MR_Word hlds__goal_util__STATE_VARIABLE_Set_106_106;
#line 634 "goal_util.m"
                        MR_Word hlds__goal_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_79, (MR_Integer) 0)));
#line 634 "goal_util.m"
                        MR_Word hlds__goal_util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_79, (MR_Integer) 6)));

#line 637 "goal_util.m"
                        {
#line 637 "goal_util.m"
                          parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_164_164, hlds__goal_util__OuterDI_87, hlds__goal_util__STATE_VARIABLE_Set_0_96, &hlds__goal_util__STATE_VARIABLE_Set_101_101);
                        }
#line 638 "goal_util.m"
                        {
#line 638 "goal_util.m"
                          parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_164_164, hlds__goal_util__OuterUO_88, hlds__goal_util__STATE_VARIABLE_Set_101_101, &hlds__goal_util__STATE_VARIABLE_Set_102_102);
                        }
#line 639 "goal_util.m"
                        hlds__goal_util__InnerDI_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Inner_82, (MR_Integer) 0)));
#line 639 "goal_util.m"
                        hlds__goal_util__InnerUO_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Inner_82, (MR_Integer) 1)));
#line 640 "goal_util.m"
                        {
#line 640 "goal_util.m"
                          parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_164_164, hlds__goal_util__InnerDI_89, hlds__goal_util__STATE_VARIABLE_Set_102_102, &hlds__goal_util__STATE_VARIABLE_Set_103_103);
                        }
#line 641 "goal_util.m"
                        {
#line 641 "goal_util.m"
                          parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_164_164, hlds__goal_util__InnerUO_90, hlds__goal_util__STATE_VARIABLE_Set_103_103, &hlds__goal_util__STATE_VARIABLE_Set_104_104);
                        }
#line 644 "goal_util.m"
                        if ((hlds__goal_util__MaybeOutputVars_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 643 "goal_util.m"
                          hlds__goal_util__STATE_VARIABLE_Set_105_105 = hlds__goal_util__STATE_VARIABLE_Set_104_104;
#line 644 "goal_util.m"
                        else
#line 645 "goal_util.m"
                          {
#line 645 "goal_util.m"
                            MR_Word hlds__goal_util__OutputVars_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeOutputVars_83, (MR_Integer) 0)));

#line 646 "goal_util.m"
                            {
#line 646 "goal_util.m"
                              parse_tree__set_of_var__insert_list_3_p_0(hlds__goal_util__TypeCtorInfo_164_164, hlds__goal_util__OutputVars_91, hlds__goal_util__STATE_VARIABLE_Set_104_104, &hlds__goal_util__STATE_VARIABLE_Set_105_105);
                            }
#line 645 "goal_util.m"
                          }
#line 648 "goal_util.m"
                        {
#line 648 "goal_util.m"
                          hlds__goal_util__goal_vars_acc_3_p_0(hlds__goal_util__MainGoal_84, hlds__goal_util__STATE_VARIABLE_Set_105_105, &hlds__goal_util__STATE_VARIABLE_Set_106_106);
                        }
#line 649 "goal_util.m"
                        {
#line 649 "goal_util.m"
                          hlds__goal_util__goals_goal_vars_acc_3_p_0(hlds__goal_util__OrElseGoals_85, hlds__goal_util__STATE_VARIABLE_Set_106_106, hlds__goal_util__STATE_VARIABLE_Set_97);
                        }
#line 635 "goal_util.m"
                      }
#line 650 "goal_util.m"
                      break;
#line 650 "goal_util.m"
                    case (MR_Integer) 2:
#line 651 "goal_util.m"
                      {
#line 651 "goal_util.m"
                        MR_Word hlds__goal_util__SubGoal_144 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__Shorthand_79, (MR_Integer) 2)));
#line 651 "goal_util.m"
                        MR_Word hlds__goal_util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__Shorthand_79, (MR_Integer) 0)));
#line 651 "goal_util.m"
                        MR_Word hlds__goal_util__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__Shorthand_79, (MR_Integer) 1)));

#line 653 "goal_util.m"
                        /* direct tailcall eliminated */
#line 653 "goal_util.m"
                        {
#line 653 "goal_util.m"
                          MR_Word hlds__goal_util__Goal__tmp_copy_4 = hlds__goal_util__SubGoal_144;

#line 653 "goal_util.m"
                          hlds__goal_util__Goal_4 = hlds__goal_util__Goal__tmp_copy_4;
#line 653 "goal_util.m"
                        }
#line 653 "goal_util.m"
                        continue;
#line 651 "goal_util.m"
                      }
#line 650 "goal_util.m"
                      break;
#line 650 "goal_util.m"
                  }
#line 632 "goal_util.m"
                }
#line 570 "goal_util.m"
                break;
#line 570 "goal_util.m"
            }
#line 570 "goal_util.m"
            break;
#line 570 "goal_util.m"
        }
#line 550 "goal_util.m"
      }
#line 550 "goal_util.m"
      break;
#line 550 "goal_util.m"
    }
#line 547 "goal_util.m"
}

#line 478 "goal_util.m"
static void MR_CALL 
hlds__goal_util__create_renaming_2_12_p_0(
#line 478 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 478 "goal_util.m"
  MR_Word hlds__goal_util__InstMapDelta_2,
#line 478 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0_3,
#line 478 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarSet_4,
#line 478 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0_5,
#line 478 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarTypes_6,
#line 478 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_RevUnifies_0_7,
#line 478 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_RevUnifies_8,
#line 478 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_RevNewVars_0_9,
#line 478 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_RevNewVars_10,
#line 478 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_Renaming_0_11,
#line 478 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Renaming_12)
#line 478 "goal_util.m"
{
#line 484 "goal_util.m"
  while (MR_TRUE)
#line 484 "goal_util.m"
    {
#line 484 "goal_util.m"
      /* tailcall optimized into a loop */
#line 484 "goal_util.m"
      {
#line 484 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;

#line 484 "goal_util.m"
        if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "goal_util.m"
          {
#line 485 "goal_util.m"
            *hlds__goal_util__STATE_VARIABLE_Renaming_12 = hlds__goal_util__STATE_VARIABLE_Renaming_0_11;
#line 484 "goal_util.m"
            *hlds__goal_util__STATE_VARIABLE_RevNewVars_10 = hlds__goal_util__STATE_VARIABLE_RevNewVars_0_9;
#line 484 "goal_util.m"
            *hlds__goal_util__STATE_VARIABLE_RevUnifies_8 = hlds__goal_util__STATE_VARIABLE_RevUnifies_0_7;
#line 484 "goal_util.m"
            *hlds__goal_util__STATE_VARIABLE_VarTypes_6 = hlds__goal_util__STATE_VARIABLE_VarTypes_0_5;
#line 484 "goal_util.m"
            *hlds__goal_util__STATE_VARIABLE_VarSet_4 = hlds__goal_util__STATE_VARIABLE_VarSet_0_3;
#line 484 "goal_util.m"
          }
#line 484 "goal_util.m"
        else
#line 487 "goal_util.m"
          {
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__TypeCtorInfo_84_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__TypeInfo_85_85;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__OrigVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__OrigVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__NewVar_37;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__Type_38;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__NewInst_39;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__Mode_40;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__UnifyInfo_41;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__GoalExpr_43;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__NonLocals_44;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__UnifyInstMapDelta_45;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__GoalInfo_46;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__Goal_47;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_58_58;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_59_59;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__V_60_60;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__V_62_62;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__V_66_66;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__V_67_67;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__V_68_68;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__V_70_70;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__V_71_71;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__V_75_75;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_RevUnifies_76_76;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_Renaming_77_77;
#line 487 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_RevNewVars_78_78;

#line 488 "goal_util.m"
            {
#line 488 "goal_util.m"
              mercury__varset__new_var_3_p_0(hlds__goal_util__TypeCtorInfo_84_84, &hlds__goal_util__NewVar_37, hlds__goal_util__STATE_VARIABLE_VarSet_0_3, &hlds__goal_util__STATE_VARIABLE_VarSet_58_58);
            }
#line 489 "goal_util.m"
            {
#line 489 "goal_util.m"
              hlds__vartypes__lookup_var_type_3_p_0(hlds__goal_util__STATE_VARIABLE_VarTypes_0_5, hlds__goal_util__OrigVar_29, &hlds__goal_util__Type_38);
            }
#line 490 "goal_util.m"
            {
#line 490 "goal_util.m"
              hlds__vartypes__add_var_type_4_p_0(hlds__goal_util__NewVar_37, hlds__goal_util__Type_38, hlds__goal_util__STATE_VARIABLE_VarTypes_0_5, &hlds__goal_util__STATE_VARIABLE_VarTypes_59_59);
            }
#line 491 "goal_util.m"
            {
#line 491 "goal_util.m"
              hlds__instmap__instmap_delta_lookup_var_3_p_0(hlds__goal_util__InstMapDelta_2, hlds__goal_util__OrigVar_29, &hlds__goal_util__NewInst_39);
            }
#line 492 "goal_util.m"
            {
#line 492 "goal_util.m"
              hlds__goal_util__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 492 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__V_60_60, 0) = ((MR_Box) (hlds__goal_util__NewInst_39));
#line 492 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__V_60_60, 1) = ((MR_Box) (hlds__goal_util__NewInst_39));
#line 492 "goal_util.m"
            }
#line 492 "goal_util.m"
            {
#line 492 "goal_util.m"
              hlds__goal_util__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 492 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 492 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__V_62_62, 1) = ((MR_Box) (hlds__goal_util__NewInst_39));
#line 492 "goal_util.m"
            }
#line 492 "goal_util.m"
            {
#line 492 "goal_util.m"
              hlds__goal_util__Mode_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 492 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__Mode_40, 0) = ((MR_Box) (hlds__goal_util__V_60_60));
#line 492 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__Mode_40, 1) = ((MR_Box) (hlds__goal_util__V_62_62));
#line 492 "goal_util.m"
            }
#line 493 "goal_util.m"
            {
#line 493 "goal_util.m"
              hlds__goal_util__UnifyInfo_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "goal_util.m"
              MR_hl_field(MR_mktag(2), hlds__goal_util__UnifyInfo_41, 0) = ((MR_Box) (hlds__goal_util__OrigVar_29));
#line 493 "goal_util.m"
              MR_hl_field(MR_mktag(2), hlds__goal_util__UnifyInfo_41, 1) = ((MR_Box) (hlds__goal_util__NewVar_37));
#line 493 "goal_util.m"
            }
#line 495 "goal_util.m"
            {
#line 495 "goal_util.m"
              hlds__goal_util__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 495 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__V_66_66, 0) = ((MR_Box) (hlds__goal_util__NewVar_37));
#line 495 "goal_util.m"
            }
#line 495 "goal_util.m"
            {
#line 495 "goal_util.m"
              hlds__goal_util__GoalExpr_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 495 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_43, 0) = ((MR_Box) (hlds__goal_util__OrigVar_29));
#line 495 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_43, 1) = ((MR_Box) (hlds__goal_util__V_66_66));
#line 495 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_43, 2) = ((MR_Box) (hlds__goal_util__Mode_40));
#line 495 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_43, 3) = ((MR_Box) (hlds__goal_util__UnifyInfo_41));
#line 495 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_43, 4) = ((MR_Box) (&hlds__goal_util_scalar_common_1[5]));
#line 495 "goal_util.m"
            }
#line 496 "goal_util.m"
            {
#line 496 "goal_util.m"
              hlds__goal_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__V_68_68, 0) = ((MR_Box) (hlds__goal_util__NewVar_37));
#line 496 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 496 "goal_util.m"
            }
#line 496 "goal_util.m"
            {
#line 496 "goal_util.m"
              hlds__goal_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__V_67_67, 0) = ((MR_Box) (hlds__goal_util__OrigVar_29));
#line 496 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__V_67_67, 1) = ((MR_Box) (hlds__goal_util__V_68_68));
#line 496 "goal_util.m"
            }
#line 496 "goal_util.m"
            {
#line 496 "goal_util.m"
              parse_tree__set_of_var__list_to_set_2_p_0(hlds__goal_util__TypeCtorInfo_84_84, hlds__goal_util__V_67_67, &hlds__goal_util__NonLocals_44);
            }
#line 497 "goal_util.m"
            {
#line 497 "goal_util.m"
              hlds__goal_util__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 497 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__V_71_71, 0) = ((MR_Box) (hlds__goal_util__OrigVar_29));
#line 497 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__V_71_71, 1) = ((MR_Box) (hlds__goal_util__NewInst_39));
#line 497 "goal_util.m"
            }
#line 497 "goal_util.m"
            {
#line 497 "goal_util.m"
              hlds__goal_util__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 497 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__V_70_70, 0) = ((MR_Box) (hlds__goal_util__V_71_71));
#line 497 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 497 "goal_util.m"
            }
#line 497 "goal_util.m"
            {
#line 497 "goal_util.m"
              hlds__goal_util__UnifyInstMapDelta_45 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(hlds__goal_util__V_70_70);
            }
#line 499 "goal_util.m"
            {
#line 499 "goal_util.m"
              hlds__goal_util__V_75_75 = mercury__term__context_init_0_f_0();
            }
#line 498 "goal_util.m"
            {
#line 498 "goal_util.m"
              hlds__hlds_goal__goal_info_init_6_p_0(hlds__goal_util__NonLocals_44, hlds__goal_util__UnifyInstMapDelta_45, (MR_Integer) 0, (MR_Integer) 0, hlds__goal_util__V_75_75, &hlds__goal_util__GoalInfo_46);
            }
#line 500 "goal_util.m"
            {
#line 500 "goal_util.m"
              hlds__goal_util__Goal_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 500 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_47, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_43));
#line 500 "goal_util.m"
              MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_47, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_46));
#line 500 "goal_util.m"
            }
#line 501 "goal_util.m"
            {
#line 501 "goal_util.m"
              hlds__goal_util__STATE_VARIABLE_RevUnifies_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__STATE_VARIABLE_RevUnifies_76_76, 0) = ((MR_Box) (hlds__goal_util__Goal_47));
#line 501 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__STATE_VARIABLE_RevUnifies_76_76, 1) = ((MR_Box) (hlds__goal_util__STATE_VARIABLE_RevUnifies_0_7));
#line 501 "goal_util.m"
            }
#line 10009 "hlds.goal_util.c"
            hlds__goal_util__TypeInfo_85_85 = (MR_Word) &hlds__goal_util_scalar_common_1[0];
#line 502 "goal_util.m"
            {
#line 502 "goal_util.m"
              mercury__map__det_insert_4_p_0(hlds__goal_util__TypeInfo_85_85, hlds__goal_util__TypeInfo_85_85, ((MR_Box) (hlds__goal_util__OrigVar_29)), ((MR_Box) (hlds__goal_util__NewVar_37)), hlds__goal_util__STATE_VARIABLE_Renaming_0_11, &hlds__goal_util__STATE_VARIABLE_Renaming_77_77);
            }
#line 503 "goal_util.m"
            {
#line 503 "goal_util.m"
              hlds__goal_util__STATE_VARIABLE_RevNewVars_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__STATE_VARIABLE_RevNewVars_78_78, 0) = ((MR_Box) (hlds__goal_util__NewVar_37));
#line 503 "goal_util.m"
              MR_hl_field(MR_mktag(1), hlds__goal_util__STATE_VARIABLE_RevNewVars_78_78, 1) = ((MR_Box) (hlds__goal_util__STATE_VARIABLE_RevNewVars_0_9));
#line 503 "goal_util.m"
            }
#line 504 "goal_util.m"
            /* direct tailcall eliminated */
#line 504 "goal_util.m"
            {
#line 504 "goal_util.m"
              MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__OrigVars_30;
#line 504 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0__tmp_copy_3 = hlds__goal_util__STATE_VARIABLE_VarSet_58_58;
#line 504 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0__tmp_copy_5 = hlds__goal_util__STATE_VARIABLE_VarTypes_59_59;
#line 504 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_RevUnifies_0__tmp_copy_7 = hlds__goal_util__STATE_VARIABLE_RevUnifies_76_76;
#line 504 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_RevNewVars_0__tmp_copy_9 = hlds__goal_util__STATE_VARIABLE_RevNewVars_78_78;
#line 504 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_Renaming_0__tmp_copy_11 = hlds__goal_util__STATE_VARIABLE_Renaming_77_77;

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
#line 487 "goal_util.m"
          }
#line 484 "goal_util.m"
      }
#line 484 "goal_util.m"
      break;
#line 484 "goal_util.m"
    }
#line 478 "goal_util.m"
}

#line 2378 "goal_util.m"
static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_3(
#line 2378 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 2378 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2378 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_2)
#line 2378 "goal_util.m"
{
#line 2378 "goal_util.m"
  {
#line 2378 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 2378 "goal_util.m"
    MR_Word hlds__goal_util__conv2_LambdaHeadVar__2_62;

#line 2378 "goal_util.m"
    {
#line 2378 "goal_util.m"
      hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2378__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) hlds__goal_util__wrapper_arg_1), &hlds__goal_util__conv2_LambdaHeadVar__2_62);
    }
#line 2378 "goal_util.m"
    *hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv2_LambdaHeadVar__2_62));
#line 2378 "goal_util.m"
  }
#line 2378 "goal_util.m"
}

#line 2374 "goal_util.m"
static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_2(
#line 2374 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 2374 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2374 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_2)
#line 2374 "goal_util.m"
{
#line 2374 "goal_util.m"
  {
#line 2374 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 2374 "goal_util.m"
    MR_Word hlds__goal_util__conv1_Goal_6;

#line 2374 "goal_util.m"
    {
#line 2374 "goal_util.m"
      hlds__goal_util__transform_all_goals_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) hlds__goal_util__wrapper_arg_1), &hlds__goal_util__conv1_Goal_6);
    }
#line 2374 "goal_util.m"
    *hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv1_Goal_6));
#line 2374 "goal_util.m"
  }
#line 2374 "goal_util.m"
}

#line 2370 "goal_util.m"
static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_1(
#line 2370 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 2370 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2370 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_2)
#line 2370 "goal_util.m"
{
#line 2370 "goal_util.m"
  {
#line 2370 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 2370 "goal_util.m"
    MR_Word hlds__goal_util__conv0_Goal_6;

#line 2370 "goal_util.m"
    {
#line 2370 "goal_util.m"
      hlds__goal_util__transform_all_goals_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) hlds__goal_util__wrapper_arg_1), &hlds__goal_util__conv0_Goal_6);
    }
#line 2370 "goal_util.m"
    *hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv0_Goal_6));
#line 2370 "goal_util.m"
  }
#line 2370 "goal_util.m"
}

#line 437 "goal_util.m"
void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0(
#line 437 "goal_util.m"
  MR_Word hlds__goal_util__TransformP_4,
#line 437 "goal_util.m"
  MR_Word hlds__goal_util__Goal0_5,
#line 437 "goal_util.m"
  MR_Word * hlds__goal_util__Goal_6)
#line 437 "goal_util.m"
{
#line 2359 "goal_util.m"
  {
#line 2359 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 2359 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_5, (MR_Integer) 0)));
#line 2359 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_31;
#line 2359 "goal_util.m"
    MR_Word hlds__goal_util__Goal1_56;
#line 2359 "goal_util.m"
    MR_Word hlds__goal_util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_5, (MR_Integer) 1)));
#line 2403 "goal_util.m"
    void MR_CALL (* hlds__goal_util__func_3)(MR_Box, MR_Box, MR_Box *);
#line 2403 "goal_util.m"
    MR_Box hlds__goal_util__conv4_Goal_6;

#line 2368 "goal_util.m"
#line 2368 "goal_util.m"
    switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) {
#line 2368 "goal_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2368 "goal_util.m"
      case (MR_Integer) 0:
#line 2385 "goal_util.m"
        {
#line 2385 "goal_util.m"
          MR_Word hlds__goal_util__SubGoal0_45 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr0_7), (MR_Integer) 0);
#line 2385 "goal_util.m"
          MR_Word hlds__goal_util__SubGoal_46;

#line 2386 "goal_util.m"
          {
#line 2386 "goal_util.m"
            hlds__goal_util__transform_all_goals_3_p_0(hlds__goal_util__TransformP_4, hlds__goal_util__SubGoal0_45, &hlds__goal_util__SubGoal_46);
          }
#line 2387 "goal_util.m"
          hlds__goal_util__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_util__SubGoal_46);
#line 2385 "goal_util.m"
        }
#line 2368 "goal_util.m"
        break;
#line 2368 "goal_util.m"
      case (MR_Integer) 1:
#line 2368 "goal_util.m"
      case (MR_Integer) 2:
#line 2367 "goal_util.m"
        hlds__goal_util__GoalExpr_31 = hlds__goal_util__GoalExpr0_7;
#line 2368 "goal_util.m"
        break;
#line 2368 "goal_util.m"
      case (MR_Integer) 3:
#line 2368 "goal_util.m"
#line 2368 "goal_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 0)))) {
#line 2368 "goal_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2368 "goal_util.m"
          case (MR_Integer) 0:
#line 2368 "goal_util.m"
          case (MR_Integer) 1:
#line 2367 "goal_util.m"
            hlds__goal_util__GoalExpr_31 = hlds__goal_util__GoalExpr0_7;
#line 2368 "goal_util.m"
            break;
#line 2368 "goal_util.m"
          case (MR_Integer) 2:
#line 2369 "goal_util.m"
            {
#line 2369 "goal_util.m"
              MR_Word hlds__goal_util__TypeCtorInfo_79_79;
#line 2369 "goal_util.m"
              MR_Word hlds__goal_util__ConjType_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 2369 "goal_util.m"
              MR_Word hlds__goal_util__Conjs0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 2369 "goal_util.m"
              MR_Word hlds__goal_util__Conjs_34;
#line 2369 "goal_util.m"
              MR_Word hlds__goal_util__V_64_64;

#line 2370 "goal_util.m"
              {
#line 2370 "goal_util.m"
                hlds__goal_util__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2370 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__V_64_64, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_4[6]));
#line 2370 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__V_64_64, 1) = ((MR_Box) (hlds__goal_util__transform_all_goals_3_p_0_1));
#line 2370 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2370 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__V_64_64, 3) = ((MR_Box) (hlds__goal_util__TransformP_4));
#line 2370 "goal_util.m"
              }
#line 10265 "hlds.goal_util.c"
              hlds__goal_util__TypeCtorInfo_79_79 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 2370 "goal_util.m"
              {
#line 2370 "goal_util.m"
                mercury__list__map_3_p_0(hlds__goal_util__TypeCtorInfo_79_79, hlds__goal_util__TypeCtorInfo_79_79, hlds__goal_util__V_64_64, hlds__goal_util__Conjs0_33, &hlds__goal_util__Conjs_34);
              }
#line 2371 "goal_util.m"
              {
#line 2371 "goal_util.m"
                hlds__goal_util__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2371 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2371 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 1) = ((MR_Box) (hlds__goal_util__ConjType_32));
#line 2371 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 2) = ((MR_Box) (hlds__goal_util__Conjs_34));
#line 2371 "goal_util.m"
              }
#line 2369 "goal_util.m"
            }
#line 2368 "goal_util.m"
            break;
#line 2368 "goal_util.m"
          case (MR_Integer) 3:
#line 2373 "goal_util.m"
            {
#line 2373 "goal_util.m"
              MR_Word hlds__goal_util__TypeCtorInfo_82_82;
#line 2373 "goal_util.m"
              MR_Word hlds__goal_util__Disjs0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 2373 "goal_util.m"
              MR_Word hlds__goal_util__Disjs_36;
#line 2373 "goal_util.m"
              MR_Word hlds__goal_util__V_63_63;

#line 2374 "goal_util.m"
              {
#line 2374 "goal_util.m"
                hlds__goal_util__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2374 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__V_63_63, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_4[6]));
#line 2374 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__V_63_63, 1) = ((MR_Box) (hlds__goal_util__transform_all_goals_3_p_0_2));
#line 2374 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2374 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__V_63_63, 3) = ((MR_Box) (hlds__goal_util__TransformP_4));
#line 2374 "goal_util.m"
              }
#line 10315 "hlds.goal_util.c"
              hlds__goal_util__TypeCtorInfo_82_82 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 2374 "goal_util.m"
              {
#line 2374 "goal_util.m"
                mercury__list__map_3_p_0(hlds__goal_util__TypeCtorInfo_82_82, hlds__goal_util__TypeCtorInfo_82_82, hlds__goal_util__V_63_63, hlds__goal_util__Disjs0_35, &hlds__goal_util__Disjs_36);
              }
#line 2375 "goal_util.m"
              {
#line 2375 "goal_util.m"
                hlds__goal_util__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2375 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2375 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 1) = ((MR_Box) (hlds__goal_util__Disjs_36));
#line 2375 "goal_util.m"
              }
#line 2373 "goal_util.m"
            }
#line 2368 "goal_util.m"
            break;
#line 2368 "goal_util.m"
          case (MR_Integer) 4:
#line 2377 "goal_util.m"
            {
#line 2377 "goal_util.m"
              MR_Word hlds__goal_util__TypeCtorInfo_83_83;
#line 2377 "goal_util.m"
              MR_Word hlds__goal_util__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 2377 "goal_util.m"
              MR_Word hlds__goal_util__CanFail_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 2377 "goal_util.m"
              MR_Word hlds__goal_util__Cases0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 3)));
#line 2377 "goal_util.m"
              MR_Word hlds__goal_util__Cases_44;
#line 2377 "goal_util.m"
              MR_Word hlds__goal_util__V_60_60;

#line 2378 "goal_util.m"
              {
#line 2378 "goal_util.m"
                hlds__goal_util__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2378 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__V_60_60, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_4[7]));
#line 2378 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__V_60_60, 1) = ((MR_Box) (hlds__goal_util__transform_all_goals_3_p_0_3));
#line 2378 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2378 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__V_60_60, 3) = ((MR_Box) (hlds__goal_util__TransformP_4));
#line 2378 "goal_util.m"
              }
#line 10367 "hlds.goal_util.c"
              hlds__goal_util__TypeCtorInfo_83_83 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 2378 "goal_util.m"
              {
#line 2378 "goal_util.m"
                mercury__list__map_3_p_0(hlds__goal_util__TypeCtorInfo_83_83, hlds__goal_util__TypeCtorInfo_83_83, hlds__goal_util__V_60_60, hlds__goal_util__Cases0_39, &hlds__goal_util__Cases_44);
              }
#line 2383 "goal_util.m"
              {
#line 2383 "goal_util.m"
                hlds__goal_util__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2383 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2383 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 1) = ((MR_Box) (hlds__goal_util__Var_37));
#line 2383 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 2) = ((MR_Box) (hlds__goal_util__CanFail_38));
#line 2383 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 3) = ((MR_Box) (hlds__goal_util__Cases_44));
#line 2383 "goal_util.m"
              }
#line 2377 "goal_util.m"
            }
#line 2368 "goal_util.m"
            break;
#line 2368 "goal_util.m"
          case (MR_Integer) 5:
#line 2389 "goal_util.m"
            {
#line 2389 "goal_util.m"
              MR_Word hlds__goal_util__Reason_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 2389 "goal_util.m"
              MR_Word hlds__goal_util__SubGoal0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 2389 "goal_util.m"
              MR_Word hlds__goal_util__SubGoal_68;

#line 2390 "goal_util.m"
              {
#line 2390 "goal_util.m"
                hlds__goal_util__transform_all_goals_3_p_0(hlds__goal_util__TransformP_4, hlds__goal_util__SubGoal0_67, &hlds__goal_util__SubGoal_68);
              }
#line 2391 "goal_util.m"
              {
#line 2391 "goal_util.m"
                hlds__goal_util__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2391 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 2391 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 1) = ((MR_Box) (hlds__goal_util__Reason_47));
#line 2391 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 2) = ((MR_Box) (hlds__goal_util__SubGoal_68));
#line 2391 "goal_util.m"
              }
#line 2389 "goal_util.m"
            }
#line 2368 "goal_util.m"
            break;
#line 2368 "goal_util.m"
          case (MR_Integer) 6:
#line 2393 "goal_util.m"
            {
#line 2393 "goal_util.m"
              MR_Word hlds__goal_util__ExistVars_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
#line 2393 "goal_util.m"
              MR_Word hlds__goal_util__Cond0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
#line 2393 "goal_util.m"
              MR_Word hlds__goal_util__Then0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 3)));
#line 2393 "goal_util.m"
              MR_Word hlds__goal_util__Else0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 4)));
#line 2393 "goal_util.m"
              MR_Word hlds__goal_util__Cond_52;
#line 2393 "goal_util.m"
              MR_Word hlds__goal_util__Then_53;
#line 2393 "goal_util.m"
              MR_Word hlds__goal_util__Else_54;

#line 2394 "goal_util.m"
              {
#line 2394 "goal_util.m"
                hlds__goal_util__transform_all_goals_3_p_0(hlds__goal_util__TransformP_4, hlds__goal_util__Cond0_49, &hlds__goal_util__Cond_52);
              }
#line 2395 "goal_util.m"
              {
#line 2395 "goal_util.m"
                hlds__goal_util__transform_all_goals_3_p_0(hlds__goal_util__TransformP_4, hlds__goal_util__Then0_50, &hlds__goal_util__Then_53);
              }
#line 2396 "goal_util.m"
              {
#line 2396 "goal_util.m"
                hlds__goal_util__transform_all_goals_3_p_0(hlds__goal_util__TransformP_4, hlds__goal_util__Else0_51, &hlds__goal_util__Else_54);
              }
#line 2397 "goal_util.m"
              {
#line 2397 "goal_util.m"
                hlds__goal_util__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 2397 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2397 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 1) = ((MR_Box) (hlds__goal_util__ExistVars_48));
#line 2397 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 2) = ((MR_Box) (hlds__goal_util__Cond_52));
#line 2397 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 3) = ((MR_Box) (hlds__goal_util__Then_53));
#line 2397 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 4) = ((MR_Box) (hlds__goal_util__Else_54));
#line 2397 "goal_util.m"
              }
#line 2393 "goal_util.m"
            }
#line 2368 "goal_util.m"
            break;
#line 2368 "goal_util.m"
          case (MR_Integer) 7:
#line 2399 "goal_util.m"
            {
#line 2400 "goal_util.m"
              {
#line 2400 "goal_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "predicate \140hlds.goal_util.transform_all_goals\'/3", (MR_String) "shorthand");
#line 2400 "goal_util.m"
                return;
              }
#line 2399 "goal_util.m"
            }
#line 2368 "goal_util.m"
            break;
#line 2368 "goal_util.m"
        }
#line 2368 "goal_util.m"
        break;
#line 2368 "goal_util.m"
    }
#line 2402 "goal_util.m"
    {
#line 2402 "goal_util.m"
      hlds__goal_util__Goal1_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2402 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__Goal1_56, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_31));
#line 2402 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__Goal1_56, 1) = ((MR_Box) (hlds__goal_util__V_69_69));
#line 2402 "goal_util.m"
    }
#line 2403 "goal_util.m"
    hlds__goal_util__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__goal_util__TransformP_4, (MR_Integer) 1)));
#line 2403 "goal_util.m"
    {
#line 2403 "goal_util.m"
      hlds__goal_util__func_3(((MR_Box) hlds__goal_util__TransformP_4), ((MR_Box) (hlds__goal_util__Goal1_56)), &hlds__goal_util__conv4_Goal_6);
    }
#line 2403 "goal_util.m"
    *hlds__goal_util__Goal_6 = ((MR_Word) hlds__goal_util__conv4_Goal_6);
#line 2359 "goal_util.m"
  }
#line 437 "goal_util.m"
}

#line 2201 "goal_util.m"
static void MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_2(
#line 2201 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 2201 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 2201 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 2201 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 2201 "goal_util.m"
{
#line 2201 "goal_util.m"
  {
#line 2201 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 2201 "goal_util.m"
    MR_Word hlds__goal_util__conv4_HeadVar__3_3;

#line 2201 "goal_util.m"
    {
#line 2201 "goal_util.m"
      hlds__instmap__apply_instmap_delta_sv_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv4_HeadVar__3_3);
    }
#line 2201 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv4_HeadVar__3_3));
#line 2201 "goal_util.m"
  }
#line 2201 "goal_util.m"
}

#line 2197 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_1(
#line 2197 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 2197 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1)
#line 2197 "goal_util.m"
{
#line 2197 "goal_util.m"
  {
#line 2197 "goal_util.m"
    MR_Box hlds__goal_util__wrapper_arg_2;
#line 2197 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 2197 "goal_util.m"
    MR_Word hlds__goal_util__conv3_LambdaHeadVar__2_108;

#line 2197 "goal_util.m"
    {
#line 2197 "goal_util.m"
      hlds__goal_util__conv3_LambdaHeadVar__2_108 = hlds__goal_util__IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap__2197__1_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    }
#line 2197 "goal_util.m"
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv3_LambdaHeadVar__2_108));
#line 2197 "goal_util.m"
    return hlds__goal_util__wrapper_arg_2;
#line 2197 "goal_util.m"
  }
#line 2197 "goal_util.m"
}

#line 426 "goal_util.m"
void MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(
#line 426 "goal_util.m"
  MR_Word hlds__goal_util__TransformP_6,
#line 426 "goal_util.m"
  MR_Word hlds__goal_util__TargetGoalPath_7,
#line 426 "goal_util.m"
  MR_Word hlds__goal_util__Instmap0_8,
#line 426 "goal_util.m"
  MR_Word hlds__goal_util__Goal0_9,
#line 426 "goal_util.m"
  MR_Word * hlds__goal_util__MaybeGoal_10)
#line 426 "goal_util.m"
{
#line 2176 "goal_util.m"
  {
#line 2176 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 2176 "goal_util.m"
    if ((hlds__goal_util__TargetGoalPath_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2176 "goal_util.m"
      {
#line 2176 "goal_util.m"
        MR_Word hlds__goal_util__MaybeGoal0_11;
#line 2177 "goal_util.m"
        void MR_CALL (* hlds__goal_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__goal_util__TransformP_6, (MR_Integer) 1)));
#line 2177 "goal_util.m"
        MR_Box hlds__goal_util__conv1_MaybeGoal0_11;

#line 2177 "goal_util.m"
        {
#line 2177 "goal_util.m"
          hlds__goal_util__func_0(((MR_Box) hlds__goal_util__TransformP_6), ((MR_Box) (hlds__goal_util__Instmap0_8)), ((MR_Box) (hlds__goal_util__Goal0_9)), &hlds__goal_util__conv1_MaybeGoal0_11);
        }
#line 2177 "goal_util.m"
        hlds__goal_util__MaybeGoal0_11 = ((MR_Word) hlds__goal_util__conv1_MaybeGoal0_11);
#line 2178 "goal_util.m"
        {
#line 2178 "goal_util.m"
          hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_p_0(hlds__goal_util__MaybeGoal0_11, hlds__goal_util__MaybeGoal_10);
        }
#line 2176 "goal_util.m"
      }
#line 2176 "goal_util.m"
    else
#line 2180 "goal_util.m"
      {
#line 2180 "goal_util.m"
        MR_Word hlds__goal_util__FirstStep_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__TargetGoalPath_7, (MR_Integer) 0)));
#line 2180 "goal_util.m"
        MR_Word hlds__goal_util__LaterPath_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__TargetGoalPath_7, (MR_Integer) 1)));
#line 2180 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
#line 2181 "goal_util.m"
        MR_Word hlds__goal_util__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));

#line 2190 "goal_util.m"
#line 2190 "goal_util.m"
        switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr0_14)) {
#line 2190 "goal_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2190 "goal_util.m"
          case (MR_Integer) 0:
#line 2265 "goal_util.m"
            {
#line 2265 "goal_util.m"
              MR_Word hlds__goal_util__SubGoal0_70 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr0_14), (MR_Integer) 0);

#line 2266 "goal_util.m"
              hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 2279 "goal_util.m"
              if (hlds__goal_util__succeeded)
#line 2268 "goal_util.m"
                {
#line 2268 "goal_util.m"
                  MR_Word hlds__goal_util__MaybeSubGoal_71;

#line 2267 "goal_util.m"
                  {
#line 2267 "goal_util.m"
                    hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap0_8, hlds__goal_util__SubGoal0_70, &hlds__goal_util__MaybeSubGoal_71);
                  }
#line 2273 "goal_util.m"
#line 2273 "goal_util.m"
                  switch (MR_tag((MR_Word) hlds__goal_util__MaybeSubGoal_71)) {
#line 2273 "goal_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 2273 "goal_util.m"
                    case (MR_Integer) 0:
#line 2277 "goal_util.m"
                      *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeSubGoal_71;
#line 2273 "goal_util.m"
                      break;
#line 2273 "goal_util.m"
                    case (MR_Integer) 1:
#line 2270 "goal_util.m"
                      {
#line 2270 "goal_util.m"
                        MR_Word hlds__goal_util__SubGoal_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeSubGoal_71, (MR_Integer) 0)));
#line 2270 "goal_util.m"
                        MR_Word hlds__goal_util__V_100_100;
#line 2270 "goal_util.m"
                        MR_Word hlds__goal_util__GoalExpr_118 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_util__SubGoal_72);
#line 2272 "goal_util.m"
                        MR_Word hlds__goal_util__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
#line 2272 "goal_util.m"
                        MR_Word hlds__goal_util__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));

#line 2272 "goal_util.m"
                        {
#line 2272 "goal_util.m"
                          hlds__goal_util__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2272 "goal_util.m"
                          MR_hl_field(MR_mktag(0), hlds__goal_util__V_100_100, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_118));
#line 2272 "goal_util.m"
                          MR_hl_field(MR_mktag(0), hlds__goal_util__V_100_100, 1) = ((MR_Box) (hlds__goal_util__V_168_168));
#line 2272 "goal_util.m"
                        }
#line 2272 "goal_util.m"
                        {
#line 2272 "goal_util.m"
                          MR_Word base;
#line 2272 "goal_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2272 "goal_util.m"
                          *hlds__goal_util__MaybeGoal_10 = base;
#line 2272 "goal_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_100_100));
#line 2272 "goal_util.m"
                        }
#line 2270 "goal_util.m"
                      }
#line 2273 "goal_util.m"
                      break;
#line 2273 "goal_util.m"
                    case (MR_Integer) 2:
#line 2277 "goal_util.m"
                      *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeSubGoal_71;
#line 2273 "goal_util.m"
                      break;
#line 2273 "goal_util.m"
                  }
#line 2268 "goal_util.m"
                }
#line 2279 "goal_util.m"
              else
#line 2280 "goal_util.m"
                *hlds__goal_util__MaybeGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2265 "goal_util.m"
            }
#line 2190 "goal_util.m"
            break;
#line 2190 "goal_util.m"
          case (MR_Integer) 1:
#line 2190 "goal_util.m"
          case (MR_Integer) 2:
#line 2189 "goal_util.m"
            *hlds__goal_util__MaybeGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2190 "goal_util.m"
            break;
#line 2190 "goal_util.m"
          case (MR_Integer) 3:
#line 2190 "goal_util.m"
#line 2190 "goal_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 0)))) {
#line 2190 "goal_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2190 "goal_util.m"
              case (MR_Integer) 0:
#line 2190 "goal_util.m"
              case (MR_Integer) 1:
#line 2189 "goal_util.m"
                *hlds__goal_util__MaybeGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2190 "goal_util.m"
                break;
#line 2190 "goal_util.m"
              case (MR_Integer) 2:
#line 2191 "goal_util.m"
                {
#line 2191 "goal_util.m"
                  MR_Word hlds__goal_util__ConjType_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 1)));
#line 2191 "goal_util.m"
                  MR_Word hlds__goal_util__Conjs0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 2)));
#line 2216 "goal_util.m"
                  MR_Integer hlds__goal_util__ConjNum_40;
#line 2216 "goal_util.m"
                  MR_Word hlds__goal_util__Conj0_41;
#line 2193 "goal_util.m"
                  MR_Word hlds__goal_util__TypeCtorInfo_178_178;
#line 2194 "goal_util.m"
                  MR_Box hlds__goal_util__conv2_Conj0_41;

#line 2193 "goal_util.m"
                  hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__FirstStep_12)) == (MR_mktag((MR_Integer) 1)));
#line 2193 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 2193 "goal_util.m"
                    {
#line 2193 "goal_util.m"
                      hlds__goal_util__ConjNum_40 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__goal_util__FirstStep_12, (MR_Integer) 0)));
#line 10789 "hlds.goal_util.c"
                      hlds__goal_util__TypeCtorInfo_178_178 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 2194 "goal_util.m"
                      {
#line 2194 "goal_util.m"
                        hlds__goal_util__succeeded = mercury__list__index1_3_p_0(hlds__goal_util__TypeCtorInfo_178_178, hlds__goal_util__Conjs0_39, hlds__goal_util__ConjNum_40, &hlds__goal_util__conv2_Conj0_41);
                      }
#line 2194 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 2194 "goal_util.m"
                        {
#line 2194 "goal_util.m"
                          hlds__goal_util__Conj0_41 = ((MR_Word) hlds__goal_util__conv2_Conj0_41);
#line 2194 "goal_util.m"
                          hlds__goal_util__succeeded = MR_TRUE;
#line 2194 "goal_util.m"
                        }
#line 2193 "goal_util.m"
                    }
#line 2216 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 2196 "goal_util.m"
                    {
#line 2196 "goal_util.m"
                      MR_Word hlds__goal_util__TypeCtorInfo_179_179 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 2196 "goal_util.m"
                      MR_Word hlds__goal_util__TypeCtorInfo_180_180;
#line 2196 "goal_util.m"
                      MR_Word hlds__goal_util__HeadConjs_42;
#line 2196 "goal_util.m"
                      MR_Word hlds__goal_util__HeadInstdeltas_43;
#line 2196 "goal_util.m"
                      MR_Word hlds__goal_util__Instmap_45;
#line 2196 "goal_util.m"
                      MR_Word hlds__goal_util__MaybeConj_46;
#line 2196 "goal_util.m"
                      MR_Integer hlds__goal_util__V_104_104 = (hlds__goal_util__ConjNum_40 - (MR_Integer) 1);
#line 2201 "goal_util.m"
                      MR_Box hlds__goal_util__conv5_Instmap_45;

#line 2196 "goal_util.m"
                      {
#line 2196 "goal_util.m"
                        mercury__list__take_upto_3_p_0(hlds__goal_util__TypeCtorInfo_179_179, hlds__goal_util__V_104_104, hlds__goal_util__Conjs0_39, &hlds__goal_util__HeadConjs_42);
                      }
#line 10834 "hlds.goal_util.c"
                      hlds__goal_util__TypeCtorInfo_180_180 = (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0;
#line 2197 "goal_util.m"
                      {
#line 2197 "goal_util.m"
                        hlds__goal_util__HeadInstdeltas_43 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_179_179, hlds__goal_util__TypeCtorInfo_180_180, (MR_Word) &hlds__goal_util_scalar_common_3[12], hlds__goal_util__HeadConjs_42);
                      }
#line 2201 "goal_util.m"
                      {
#line 2201 "goal_util.m"
                        mercury__list__foldl_4_p_0(hlds__goal_util__TypeCtorInfo_180_180, hlds__goal_util__TypeCtorInfo_180_180, (MR_Word) &hlds__goal_util_scalar_common_3[13], hlds__goal_util__HeadInstdeltas_43, ((MR_Box) (hlds__goal_util__Instmap0_8)), &hlds__goal_util__conv5_Instmap_45);
                      }
#line 2201 "goal_util.m"
                      hlds__goal_util__Instmap_45 = ((MR_Word) hlds__goal_util__conv5_Instmap_45);
#line 2203 "goal_util.m"
                      {
#line 2203 "goal_util.m"
                        hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap_45, hlds__goal_util__Conj0_41, &hlds__goal_util__MaybeConj_46);
                      }
#line 2210 "goal_util.m"
#line 2210 "goal_util.m"
                      switch (MR_tag((MR_Word) hlds__goal_util__MaybeConj_46)) {
#line 2210 "goal_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 2210 "goal_util.m"
                        case (MR_Integer) 0:
#line 2214 "goal_util.m"
                          *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeConj_46;
#line 2210 "goal_util.m"
                          break;
#line 2210 "goal_util.m"
                        case (MR_Integer) 1:
#line 2206 "goal_util.m"
                          {
#line 2206 "goal_util.m"
                            MR_Word hlds__goal_util__Conj_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeConj_46, (MR_Integer) 0)));
#line 2206 "goal_util.m"
                            MR_Word hlds__goal_util__Conjs_48;
#line 2206 "goal_util.m"
                            MR_Word hlds__goal_util__GoalExpr_49;
#line 2206 "goal_util.m"
                            MR_Word hlds__goal_util__V_111_111;
#line 2209 "goal_util.m"
                            MR_Word hlds__goal_util__V_157_157;
#line 2209 "goal_util.m"
                            MR_Word hlds__goal_util__V_156_156;

#line 2207 "goal_util.m"
                            {
#line 2207 "goal_util.m"
                              mercury__list__det_replace_nth_4_p_0(hlds__goal_util__TypeCtorInfo_179_179, hlds__goal_util__Conjs0_39, hlds__goal_util__ConjNum_40, ((MR_Box) (hlds__goal_util__Conj_47)), &hlds__goal_util__Conjs_48);
                            }
#line 2208 "goal_util.m"
                            {
#line 2208 "goal_util.m"
                              hlds__goal_util__GoalExpr_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2208 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2208 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_49, 1) = ((MR_Box) (hlds__goal_util__ConjType_38));
#line 2208 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_49, 2) = ((MR_Box) (hlds__goal_util__Conjs_48));
#line 2208 "goal_util.m"
                            }
#line 2209 "goal_util.m"
                            hlds__goal_util__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
#line 2209 "goal_util.m"
                            hlds__goal_util__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
#line 2209 "goal_util.m"
                            {
#line 2209 "goal_util.m"
                              hlds__goal_util__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2209 "goal_util.m"
                              MR_hl_field(MR_mktag(0), hlds__goal_util__V_111_111, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_49));
#line 2209 "goal_util.m"
                              MR_hl_field(MR_mktag(0), hlds__goal_util__V_111_111, 1) = ((MR_Box) (hlds__goal_util__V_157_157));
#line 2209 "goal_util.m"
                            }
#line 2209 "goal_util.m"
                            {
#line 2209 "goal_util.m"
                              MR_Word base;
#line 2209 "goal_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2209 "goal_util.m"
                              *hlds__goal_util__MaybeGoal_10 = base;
#line 2209 "goal_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_111_111));
#line 2209 "goal_util.m"
                            }
#line 2206 "goal_util.m"
                          }
#line 2210 "goal_util.m"
                          break;
#line 2210 "goal_util.m"
                        case (MR_Integer) 2:
#line 2214 "goal_util.m"
                          *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeConj_46;
#line 2210 "goal_util.m"
                          break;
#line 2210 "goal_util.m"
                      }
#line 2196 "goal_util.m"
                    }
#line 2216 "goal_util.m"
                  else
#line 2217 "goal_util.m"
                    *hlds__goal_util__MaybeGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2191 "goal_util.m"
                }
#line 2190 "goal_util.m"
                break;
#line 2190 "goal_util.m"
              case (MR_Integer) 3:
#line 2220 "goal_util.m"
                {
#line 2220 "goal_util.m"
                  MR_Word hlds__goal_util__Disjs0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 1)));
#line 2237 "goal_util.m"
                  MR_Integer hlds__goal_util__DisjNum_52;
#line 2237 "goal_util.m"
                  MR_Word hlds__goal_util__Disj0_53;
#line 2222 "goal_util.m"
                  MR_Word hlds__goal_util__TypeCtorInfo_184_184;
#line 2223 "goal_util.m"
                  MR_Box hlds__goal_util__conv6_Disj0_53;

#line 2222 "goal_util.m"
                  hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__FirstStep_12)) == (MR_mktag((MR_Integer) 2)));
#line 2222 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 2222 "goal_util.m"
                    {
#line 2222 "goal_util.m"
                      hlds__goal_util__DisjNum_52 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__FirstStep_12, (MR_Integer) 0)));
#line 10969 "hlds.goal_util.c"
                      hlds__goal_util__TypeCtorInfo_184_184 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 2223 "goal_util.m"
                      {
#line 2223 "goal_util.m"
                        hlds__goal_util__succeeded = mercury__list__index1_3_p_0(hlds__goal_util__TypeCtorInfo_184_184, hlds__goal_util__Disjs0_51, hlds__goal_util__DisjNum_52, &hlds__goal_util__conv6_Disj0_53);
                      }
#line 2223 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 2223 "goal_util.m"
                        {
#line 2223 "goal_util.m"
                          hlds__goal_util__Disj0_53 = ((MR_Word) hlds__goal_util__conv6_Disj0_53);
#line 2223 "goal_util.m"
                          hlds__goal_util__succeeded = MR_TRUE;
#line 2223 "goal_util.m"
                        }
#line 2222 "goal_util.m"
                    }
#line 2237 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 2226 "goal_util.m"
                    {
#line 2226 "goal_util.m"
                      MR_Word hlds__goal_util__MaybeDisj_54;

#line 2225 "goal_util.m"
                      {
#line 2225 "goal_util.m"
                        hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap0_8, hlds__goal_util__Disj0_53, &hlds__goal_util__MaybeDisj_54);
                      }
#line 2231 "goal_util.m"
#line 2231 "goal_util.m"
                      switch (MR_tag((MR_Word) hlds__goal_util__MaybeDisj_54)) {
#line 2231 "goal_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 2231 "goal_util.m"
                        case (MR_Integer) 0:
#line 2235 "goal_util.m"
                          *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeDisj_54;
#line 2231 "goal_util.m"
                          break;
#line 2231 "goal_util.m"
                        case (MR_Integer) 1:
#line 2228 "goal_util.m"
                          {
#line 2228 "goal_util.m"
                            MR_Word hlds__goal_util__Disj_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeDisj_54, (MR_Integer) 0)));
#line 2228 "goal_util.m"
                            MR_Word hlds__goal_util__Disjs_56;
#line 2228 "goal_util.m"
                            MR_Word hlds__goal_util__V_102_102;
#line 2228 "goal_util.m"
                            MR_Word hlds__goal_util__V_103_103;
#line 2230 "goal_util.m"
                            MR_Word hlds__goal_util__V_159_159;
#line 2230 "goal_util.m"
                            MR_Word hlds__goal_util__V_158_158;

#line 2229 "goal_util.m"
                            {
#line 2229 "goal_util.m"
                              mercury__list__det_replace_nth_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__goal_util__Disjs0_51, hlds__goal_util__DisjNum_52, ((MR_Box) (hlds__goal_util__Disj_55)), &hlds__goal_util__Disjs_56);
                            }
#line 2230 "goal_util.m"
                            {
#line 2230 "goal_util.m"
                              hlds__goal_util__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2230 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2230 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__V_103_103, 1) = ((MR_Box) (hlds__goal_util__Disjs_56));
#line 2230 "goal_util.m"
                            }
#line 2230 "goal_util.m"
                            hlds__goal_util__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
#line 2230 "goal_util.m"
                            hlds__goal_util__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
#line 2230 "goal_util.m"
                            {
#line 2230 "goal_util.m"
                              hlds__goal_util__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2230 "goal_util.m"
                              MR_hl_field(MR_mktag(0), hlds__goal_util__V_102_102, 0) = ((MR_Box) (hlds__goal_util__V_103_103));
#line 2230 "goal_util.m"
                              MR_hl_field(MR_mktag(0), hlds__goal_util__V_102_102, 1) = ((MR_Box) (hlds__goal_util__V_159_159));
#line 2230 "goal_util.m"
                            }
#line 2230 "goal_util.m"
                            {
#line 2230 "goal_util.m"
                              MR_Word base;
#line 2230 "goal_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2230 "goal_util.m"
                              *hlds__goal_util__MaybeGoal_10 = base;
#line 2230 "goal_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_102_102));
#line 2230 "goal_util.m"
                            }
#line 2228 "goal_util.m"
                          }
#line 2231 "goal_util.m"
                          break;
#line 2231 "goal_util.m"
                        case (MR_Integer) 2:
#line 2235 "goal_util.m"
                          *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeDisj_54;
#line 2231 "goal_util.m"
                          break;
#line 2231 "goal_util.m"
                      }
#line 2226 "goal_util.m"
                    }
#line 2237 "goal_util.m"
                  else
#line 2238 "goal_util.m"
                    *hlds__goal_util__MaybeGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2220 "goal_util.m"
                }
#line 2190 "goal_util.m"
                break;
#line 2190 "goal_util.m"
              case (MR_Integer) 4:
#line 2241 "goal_util.m"
                {
#line 2241 "goal_util.m"
                  MR_Word hlds__goal_util__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 1)));
#line 2241 "goal_util.m"
                  MR_Word hlds__goal_util__CanFail_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 2)));
#line 2241 "goal_util.m"
                  MR_Word hlds__goal_util__Cases0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 3)));
#line 2261 "goal_util.m"
                  MR_Integer hlds__goal_util__CaseNum_61;
#line 2261 "goal_util.m"
                  MR_Word hlds__goal_util__Case0_63;
#line 2243 "goal_util.m"
                  MR_Word hlds__goal_util__TypeCtorInfo_186_186;
#line 2243 "goal_util.m"
                  MR_Word hlds__goal_util___MaybeNumConstructors_62;
#line 2244 "goal_util.m"
                  MR_Box hlds__goal_util__conv7_Case0_63;

#line 2243 "goal_util.m"
                  hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__FirstStep_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 2243 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 2243 "goal_util.m"
                    {
#line 2243 "goal_util.m"
                      hlds__goal_util__CaseNum_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_12, (MR_Integer) 1)));
#line 2243 "goal_util.m"
                      hlds__goal_util___MaybeNumConstructors_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_12, (MR_Integer) 2)));
#line 11122 "hlds.goal_util.c"
                      hlds__goal_util__TypeCtorInfo_186_186 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 2244 "goal_util.m"
                      {
#line 2244 "goal_util.m"
                        hlds__goal_util__succeeded = mercury__list__index1_3_p_0(hlds__goal_util__TypeCtorInfo_186_186, hlds__goal_util__Cases0_60, hlds__goal_util__CaseNum_61, &hlds__goal_util__conv7_Case0_63);
                      }
#line 2244 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 2244 "goal_util.m"
                        {
#line 2244 "goal_util.m"
                          hlds__goal_util__Case0_63 = ((MR_Word) hlds__goal_util__conv7_Case0_63);
#line 2244 "goal_util.m"
                          hlds__goal_util__succeeded = MR_TRUE;
#line 2244 "goal_util.m"
                        }
#line 2243 "goal_util.m"
                    }
#line 2261 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 2246 "goal_util.m"
                    {
#line 2246 "goal_util.m"
                      MR_Word hlds__goal_util__CaseGoal0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_63, (MR_Integer) 2)));
#line 2246 "goal_util.m"
                      MR_Word hlds__goal_util__MaybeCaseGoal_65;
#line 2246 "goal_util.m"
                      MR_Word hlds__goal_util__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_63, (MR_Integer) 0)));
#line 2246 "goal_util.m"
                      MR_Word hlds__goal_util__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_63, (MR_Integer) 1)));

#line 2247 "goal_util.m"
                      {
#line 2247 "goal_util.m"
                        hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap0_8, hlds__goal_util__CaseGoal0_64, &hlds__goal_util__MaybeCaseGoal_65);
                      }
#line 2255 "goal_util.m"
#line 2255 "goal_util.m"
                      switch (MR_tag((MR_Word) hlds__goal_util__MaybeCaseGoal_65)) {
#line 2255 "goal_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 2255 "goal_util.m"
                        case (MR_Integer) 0:
#line 2259 "goal_util.m"
                          *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeCaseGoal_65;
#line 2255 "goal_util.m"
                          break;
#line 2255 "goal_util.m"
                        case (MR_Integer) 1:
#line 2250 "goal_util.m"
                          {
#line 2250 "goal_util.m"
                            MR_Word hlds__goal_util__CaseGoal_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeCaseGoal_65, (MR_Integer) 0)));
#line 2250 "goal_util.m"
                            MR_Word hlds__goal_util__Case_67;
#line 2250 "goal_util.m"
                            MR_Word hlds__goal_util__Cases_68;
#line 2250 "goal_util.m"
                            MR_Word hlds__goal_util__V_101_101;
#line 2250 "goal_util.m"
                            MR_Word hlds__goal_util__GoalExpr_113;
#line 2251 "goal_util.m"
                            MR_Word hlds__goal_util__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_63, (MR_Integer) 0)));
#line 2251 "goal_util.m"
                            MR_Word hlds__goal_util__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_63, (MR_Integer) 1)));
#line 2251 "goal_util.m"
                            MR_Word hlds__goal_util__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_63, (MR_Integer) 2)));
#line 2254 "goal_util.m"
                            MR_Word hlds__goal_util__V_166_166;
#line 2254 "goal_util.m"
                            MR_Word hlds__goal_util__V_165_165;

#line 2251 "goal_util.m"
                            {
#line 2251 "goal_util.m"
                              hlds__goal_util__Case_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2251 "goal_util.m"
                              MR_hl_field(MR_mktag(0), hlds__goal_util__Case_67, 0) = ((MR_Box) (hlds__goal_util__V_162_162));
#line 2251 "goal_util.m"
                              MR_hl_field(MR_mktag(0), hlds__goal_util__Case_67, 1) = ((MR_Box) (hlds__goal_util__V_163_163));
#line 2251 "goal_util.m"
                              MR_hl_field(MR_mktag(0), hlds__goal_util__Case_67, 2) = ((MR_Box) (hlds__goal_util__CaseGoal_66));
#line 2251 "goal_util.m"
                            }
#line 2252 "goal_util.m"
                            {
#line 2252 "goal_util.m"
                              mercury__list__det_replace_nth_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, hlds__goal_util__Cases0_60, hlds__goal_util__CaseNum_61, ((MR_Box) (hlds__goal_util__Case_67)), &hlds__goal_util__Cases_68);
                            }
#line 2253 "goal_util.m"
                            {
#line 2253 "goal_util.m"
                              hlds__goal_util__GoalExpr_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2253 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2253 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_113, 1) = ((MR_Box) (hlds__goal_util__Var_58));
#line 2253 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_113, 2) = ((MR_Box) (hlds__goal_util__CanFail_59));
#line 2253 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_113, 3) = ((MR_Box) (hlds__goal_util__Cases_68));
#line 2253 "goal_util.m"
                            }
#line 2254 "goal_util.m"
                            hlds__goal_util__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
#line 2254 "goal_util.m"
                            hlds__goal_util__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
#line 2254 "goal_util.m"
                            {
#line 2254 "goal_util.m"
                              hlds__goal_util__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2254 "goal_util.m"
                              MR_hl_field(MR_mktag(0), hlds__goal_util__V_101_101, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_113));
#line 2254 "goal_util.m"
                              MR_hl_field(MR_mktag(0), hlds__goal_util__V_101_101, 1) = ((MR_Box) (hlds__goal_util__V_166_166));
#line 2254 "goal_util.m"
                            }
#line 2254 "goal_util.m"
                            {
#line 2254 "goal_util.m"
                              MR_Word base;
#line 2254 "goal_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2254 "goal_util.m"
                              *hlds__goal_util__MaybeGoal_10 = base;
#line 2254 "goal_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_101_101));
#line 2254 "goal_util.m"
                            }
#line 2250 "goal_util.m"
                          }
#line 2255 "goal_util.m"
                          break;
#line 2255 "goal_util.m"
                        case (MR_Integer) 2:
#line 2259 "goal_util.m"
                          *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeCaseGoal_65;
#line 2255 "goal_util.m"
                          break;
#line 2255 "goal_util.m"
                      }
#line 2246 "goal_util.m"
                    }
#line 2261 "goal_util.m"
                  else
#line 2262 "goal_util.m"
                    *hlds__goal_util__MaybeGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2241 "goal_util.m"
                }
#line 2190 "goal_util.m"
                break;
#line 2190 "goal_util.m"
              case (MR_Integer) 5:
#line 2283 "goal_util.m"
                {
#line 2283 "goal_util.m"
                  MR_Word hlds__goal_util__Reason_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 1)));
#line 2283 "goal_util.m"
                  MR_Word hlds__goal_util__SubGoal0_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 2)));
#line 2284 "goal_util.m"
                  MR_Word hlds__goal_util___MaybeCut_75;

#line 2284 "goal_util.m"
                  hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__FirstStep_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 2284 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 2284 "goal_util.m"
                    {
#line 2284 "goal_util.m"
                      hlds__goal_util___MaybeCut_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_12, (MR_Integer) 1)));
#line 2286 "goal_util.m"
                      {
#line 2286 "goal_util.m"
                        MR_Word hlds__goal_util__MaybeSubGoal_128;

#line 2285 "goal_util.m"
                        {
#line 2285 "goal_util.m"
                          hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap0_8, hlds__goal_util__SubGoal0_134, &hlds__goal_util__MaybeSubGoal_128);
                        }
#line 2291 "goal_util.m"
#line 2291 "goal_util.m"
                        switch (MR_tag((MR_Word) hlds__goal_util__MaybeSubGoal_128)) {
#line 2291 "goal_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 2291 "goal_util.m"
                          case (MR_Integer) 0:
#line 2295 "goal_util.m"
                            *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeSubGoal_128;
#line 2291 "goal_util.m"
                            break;
#line 2291 "goal_util.m"
                          case (MR_Integer) 1:
#line 2288 "goal_util.m"
                            {
#line 2288 "goal_util.m"
                              MR_Word hlds__goal_util__V_99_99;
#line 2288 "goal_util.m"
                              MR_Word hlds__goal_util__GoalExpr_123;
#line 2288 "goal_util.m"
                              MR_Word hlds__goal_util__SubGoal_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeSubGoal_128, (MR_Integer) 0)));
#line 2290 "goal_util.m"
                              MR_Word hlds__goal_util__V_170_170;
#line 2290 "goal_util.m"
                              MR_Word hlds__goal_util__V_169_169;

#line 2289 "goal_util.m"
                              {
#line 2289 "goal_util.m"
                                hlds__goal_util__GoalExpr_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2289 "goal_util.m"
                                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 2289 "goal_util.m"
                                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_123, 1) = ((MR_Box) (hlds__goal_util__Reason_74));
#line 2289 "goal_util.m"
                                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_123, 2) = ((MR_Box) (hlds__goal_util__SubGoal_124));
#line 2289 "goal_util.m"
                              }
#line 2290 "goal_util.m"
                              hlds__goal_util__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
#line 2290 "goal_util.m"
                              hlds__goal_util__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
#line 2290 "goal_util.m"
                              {
#line 2290 "goal_util.m"
                                hlds__goal_util__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2290 "goal_util.m"
                                MR_hl_field(MR_mktag(0), hlds__goal_util__V_99_99, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_123));
#line 2290 "goal_util.m"
                                MR_hl_field(MR_mktag(0), hlds__goal_util__V_99_99, 1) = ((MR_Box) (hlds__goal_util__V_170_170));
#line 2290 "goal_util.m"
                              }
#line 2290 "goal_util.m"
                              {
#line 2290 "goal_util.m"
                                MR_Word base;
#line 2290 "goal_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2290 "goal_util.m"
                                *hlds__goal_util__MaybeGoal_10 = base;
#line 2290 "goal_util.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_99_99));
#line 2290 "goal_util.m"
                              }
#line 2288 "goal_util.m"
                            }
#line 2291 "goal_util.m"
                            break;
#line 2291 "goal_util.m"
                          case (MR_Integer) 2:
#line 2295 "goal_util.m"
                            *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeSubGoal_128;
#line 2291 "goal_util.m"
                            break;
#line 2291 "goal_util.m"
                        }
#line 2286 "goal_util.m"
                      }
#line 2284 "goal_util.m"
                    }
#line 2284 "goal_util.m"
                  else
#line 2298 "goal_util.m"
                    *hlds__goal_util__MaybeGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2283 "goal_util.m"
                }
#line 2190 "goal_util.m"
                break;
#line 2190 "goal_util.m"
              case (MR_Integer) 6:
#line 2301 "goal_util.m"
                {
#line 2301 "goal_util.m"
                  MR_Word hlds__goal_util__ExistVars_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 1)));
#line 2301 "goal_util.m"
                  MR_Word hlds__goal_util__Cond0_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 2)));
#line 2301 "goal_util.m"
                  MR_Word hlds__goal_util__Then0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 3)));
#line 2301 "goal_util.m"
                  MR_Word hlds__goal_util__Else0_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 4)));

#line 2302 "goal_util.m"
                  hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2315 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 2304 "goal_util.m"
                    {
#line 2304 "goal_util.m"
                      MR_Word hlds__goal_util__MaybeCond_81;

#line 2303 "goal_util.m"
                      {
#line 2303 "goal_util.m"
                        hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap0_8, hlds__goal_util__Cond0_78, &hlds__goal_util__MaybeCond_81);
                      }
#line 2309 "goal_util.m"
#line 2309 "goal_util.m"
                      switch (MR_tag((MR_Word) hlds__goal_util__MaybeCond_81)) {
#line 2309 "goal_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 2309 "goal_util.m"
                        case (MR_Integer) 0:
#line 2313 "goal_util.m"
                          *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeCond_81;
#line 2309 "goal_util.m"
                          break;
#line 2309 "goal_util.m"
                        case (MR_Integer) 1:
#line 2306 "goal_util.m"
                          {
#line 2306 "goal_util.m"
                            MR_Word hlds__goal_util__Cond_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeCond_81, (MR_Integer) 0)));
#line 2306 "goal_util.m"
                            MR_Word hlds__goal_util__V_94_94;
#line 2306 "goal_util.m"
                            MR_Word hlds__goal_util__GoalExpr_137;
#line 2308 "goal_util.m"
                            MR_Word hlds__goal_util__V_172_172;
#line 2308 "goal_util.m"
                            MR_Word hlds__goal_util__V_171_171;

#line 2307 "goal_util.m"
                            {
#line 2307 "goal_util.m"
                              hlds__goal_util__GoalExpr_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 2307 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2307 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_137, 1) = ((MR_Box) (hlds__goal_util__ExistVars_77));
#line 2307 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_137, 2) = ((MR_Box) (hlds__goal_util__Cond_82));
#line 2307 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_137, 3) = ((MR_Box) (hlds__goal_util__Then0_79));
#line 2307 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_137, 4) = ((MR_Box) (hlds__goal_util__Else0_80));
#line 2307 "goal_util.m"
                            }
#line 2308 "goal_util.m"
                            hlds__goal_util__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
#line 2308 "goal_util.m"
                            hlds__goal_util__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
#line 2308 "goal_util.m"
                            {
#line 2308 "goal_util.m"
                              hlds__goal_util__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2308 "goal_util.m"
                              MR_hl_field(MR_mktag(0), hlds__goal_util__V_94_94, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_137));
#line 2308 "goal_util.m"
                              MR_hl_field(MR_mktag(0), hlds__goal_util__V_94_94, 1) = ((MR_Box) (hlds__goal_util__V_172_172));
#line 2308 "goal_util.m"
                            }
#line 2308 "goal_util.m"
                            {
#line 2308 "goal_util.m"
                              MR_Word base;
#line 2308 "goal_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2308 "goal_util.m"
                              *hlds__goal_util__MaybeGoal_10 = base;
#line 2308 "goal_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_94_94));
#line 2308 "goal_util.m"
                            }
#line 2306 "goal_util.m"
                          }
#line 2309 "goal_util.m"
                          break;
#line 2309 "goal_util.m"
                        case (MR_Integer) 2:
#line 2313 "goal_util.m"
                          *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeCond_81;
#line 2309 "goal_util.m"
                          break;
#line 2309 "goal_util.m"
                      }
#line 2304 "goal_util.m"
                    }
#line 2315 "goal_util.m"
                  else
#line 2331 "goal_util.m"
                    {
#line 2315 "goal_util.m"
                      hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 2331 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 2318 "goal_util.m"
                        {
#line 2318 "goal_util.m"
                          MR_Word hlds__goal_util__MaybeThen_84;
#line 2318 "goal_util.m"
                          MR_Word hlds__goal_util__V_95_95;
#line 2318 "goal_util.m"
                          MR_Word hlds__goal_util__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond0_78, (MR_Integer) 1)));
#line 2318 "goal_util.m"
                          MR_Word hlds__goal_util__Instmap_142;
#line 2317 "goal_util.m"
                          MR_Word hlds__goal_util__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond0_78, (MR_Integer) 0)));

#line 2317 "goal_util.m"
                          {
#line 2317 "goal_util.m"
                            hlds__goal_util__V_95_95 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__V_96_96);
                          }
#line 2316 "goal_util.m"
                          {
#line 2316 "goal_util.m"
                            hlds__instmap__apply_instmap_delta_sv_3_p_0(hlds__goal_util__V_95_95, hlds__goal_util__Instmap0_8, &hlds__goal_util__Instmap_142);
                          }
#line 2319 "goal_util.m"
                          {
#line 2319 "goal_util.m"
                            hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap_142, hlds__goal_util__Then0_79, &hlds__goal_util__MaybeThen_84);
                          }
#line 2325 "goal_util.m"
#line 2325 "goal_util.m"
                          switch (MR_tag((MR_Word) hlds__goal_util__MaybeThen_84)) {
#line 2325 "goal_util.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 2325 "goal_util.m"
                            case (MR_Integer) 0:
#line 2329 "goal_util.m"
                              *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeThen_84;
#line 2325 "goal_util.m"
                              break;
#line 2325 "goal_util.m"
                            case (MR_Integer) 1:
#line 2322 "goal_util.m"
                              {
#line 2322 "goal_util.m"
                                MR_Word hlds__goal_util__Then_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeThen_84, (MR_Integer) 0)));
#line 2322 "goal_util.m"
                                MR_Word hlds__goal_util__V_97_97;
#line 2322 "goal_util.m"
                                MR_Word hlds__goal_util__GoalExpr_140;
#line 2324 "goal_util.m"
                                MR_Word hlds__goal_util__V_175_175;
#line 2324 "goal_util.m"
                                MR_Word hlds__goal_util__V_174_174;

#line 2323 "goal_util.m"
                                {
#line 2323 "goal_util.m"
                                  hlds__goal_util__GoalExpr_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 2323 "goal_util.m"
                                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2323 "goal_util.m"
                                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_140, 1) = ((MR_Box) (hlds__goal_util__ExistVars_77));
#line 2323 "goal_util.m"
                                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_140, 2) = ((MR_Box) (hlds__goal_util__Cond0_78));
#line 2323 "goal_util.m"
                                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_140, 3) = ((MR_Box) (hlds__goal_util__Then_85));
#line 2323 "goal_util.m"
                                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_140, 4) = ((MR_Box) (hlds__goal_util__Else0_80));
#line 2323 "goal_util.m"
                                }
#line 2324 "goal_util.m"
                                hlds__goal_util__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
#line 2324 "goal_util.m"
                                hlds__goal_util__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
#line 2324 "goal_util.m"
                                {
#line 2324 "goal_util.m"
                                  hlds__goal_util__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2324 "goal_util.m"
                                  MR_hl_field(MR_mktag(0), hlds__goal_util__V_97_97, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_140));
#line 2324 "goal_util.m"
                                  MR_hl_field(MR_mktag(0), hlds__goal_util__V_97_97, 1) = ((MR_Box) (hlds__goal_util__V_175_175));
#line 2324 "goal_util.m"
                                }
#line 2324 "goal_util.m"
                                {
#line 2324 "goal_util.m"
                                  MR_Word base;
#line 2324 "goal_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2324 "goal_util.m"
                                  *hlds__goal_util__MaybeGoal_10 = base;
#line 2324 "goal_util.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_97_97));
#line 2324 "goal_util.m"
                                }
#line 2322 "goal_util.m"
                              }
#line 2325 "goal_util.m"
                              break;
#line 2325 "goal_util.m"
                            case (MR_Integer) 2:
#line 2329 "goal_util.m"
                              *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeThen_84;
#line 2325 "goal_util.m"
                              break;
#line 2325 "goal_util.m"
                          }
#line 2318 "goal_util.m"
                        }
#line 2331 "goal_util.m"
                      else
#line 2344 "goal_util.m"
                        {
#line 2331 "goal_util.m"
                          hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 2344 "goal_util.m"
                          if (hlds__goal_util__succeeded)
#line 2333 "goal_util.m"
                            {
#line 2333 "goal_util.m"
                              MR_Word hlds__goal_util__MaybeElse_87;

#line 2332 "goal_util.m"
                              {
#line 2332 "goal_util.m"
                                hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap0_8, hlds__goal_util__Else0_80, &hlds__goal_util__MaybeElse_87);
                              }
#line 2338 "goal_util.m"
#line 2338 "goal_util.m"
                              switch (MR_tag((MR_Word) hlds__goal_util__MaybeElse_87)) {
#line 2338 "goal_util.m"
                                default: /*NOTREACHED*/ MR_assert(0);
#line 2338 "goal_util.m"
                                case (MR_Integer) 0:
#line 2342 "goal_util.m"
                                  *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeElse_87;
#line 2338 "goal_util.m"
                                  break;
#line 2338 "goal_util.m"
                                case (MR_Integer) 1:
#line 2335 "goal_util.m"
                                  {
#line 2335 "goal_util.m"
                                    MR_Word hlds__goal_util__Else_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeElse_87, (MR_Integer) 0)));
#line 2335 "goal_util.m"
                                    MR_Word hlds__goal_util__V_98_98;
#line 2335 "goal_util.m"
                                    MR_Word hlds__goal_util__GoalExpr_144;
#line 2337 "goal_util.m"
                                    MR_Word hlds__goal_util__V_177_177;
#line 2337 "goal_util.m"
                                    MR_Word hlds__goal_util__V_176_176;

#line 2336 "goal_util.m"
                                    {
#line 2336 "goal_util.m"
                                      hlds__goal_util__GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 2336 "goal_util.m"
                                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2336 "goal_util.m"
                                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_144, 1) = ((MR_Box) (hlds__goal_util__ExistVars_77));
#line 2336 "goal_util.m"
                                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_144, 2) = ((MR_Box) (hlds__goal_util__Cond0_78));
#line 2336 "goal_util.m"
                                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_144, 3) = ((MR_Box) (hlds__goal_util__Then0_79));
#line 2336 "goal_util.m"
                                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_144, 4) = ((MR_Box) (hlds__goal_util__Else_88));
#line 2336 "goal_util.m"
                                    }
#line 2337 "goal_util.m"
                                    hlds__goal_util__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
#line 2337 "goal_util.m"
                                    hlds__goal_util__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
#line 2337 "goal_util.m"
                                    {
#line 2337 "goal_util.m"
                                      hlds__goal_util__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2337 "goal_util.m"
                                      MR_hl_field(MR_mktag(0), hlds__goal_util__V_98_98, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_144));
#line 2337 "goal_util.m"
                                      MR_hl_field(MR_mktag(0), hlds__goal_util__V_98_98, 1) = ((MR_Box) (hlds__goal_util__V_177_177));
#line 2337 "goal_util.m"
                                    }
#line 2337 "goal_util.m"
                                    {
#line 2337 "goal_util.m"
                                      MR_Word base;
#line 2337 "goal_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2337 "goal_util.m"
                                      *hlds__goal_util__MaybeGoal_10 = base;
#line 2337 "goal_util.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_98_98));
#line 2337 "goal_util.m"
                                    }
#line 2335 "goal_util.m"
                                  }
#line 2338 "goal_util.m"
                                  break;
#line 2338 "goal_util.m"
                                case (MR_Integer) 2:
#line 2342 "goal_util.m"
                                  *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeElse_87;
#line 2338 "goal_util.m"
                                  break;
#line 2338 "goal_util.m"
                              }
#line 2333 "goal_util.m"
                            }
#line 2344 "goal_util.m"
                          else
#line 2345 "goal_util.m"
                            *hlds__goal_util__MaybeGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2344 "goal_util.m"
                        }
#line 2331 "goal_util.m"
                    }
#line 2301 "goal_util.m"
                }
#line 2190 "goal_util.m"
                break;
#line 2190 "goal_util.m"
              case (MR_Integer) 7:
#line 2348 "goal_util.m"
                {
#line 2349 "goal_util.m"
                  {
#line 2349 "goal_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "predicate \140hlds.goal_util.maybe_transform_goal_at_goal_path_with_instmap\'/5", (MR_String) "shorthand");
#line 2349 "goal_util.m"
                    return;
                  }
#line 2348 "goal_util.m"
                }
#line 2190 "goal_util.m"
                break;
#line 2190 "goal_util.m"
            }
#line 2190 "goal_util.m"
            break;
#line 2190 "goal_util.m"
        }
#line 2180 "goal_util.m"
      }
#line 2176 "goal_util.m"
  }
#line 426 "goal_util.m"
}

#line 418 "goal_util.m"
void MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(
#line 418 "goal_util.m"
  MR_Word hlds__goal_util__TransformP_5,
#line 418 "goal_util.m"
  MR_Word hlds__goal_util__TargetGoalPath_6,
#line 418 "goal_util.m"
  MR_Word hlds__goal_util__Goal0_7,
#line 418 "goal_util.m"
  MR_Word * hlds__goal_util__MaybeGoal_8)
#line 418 "goal_util.m"
{
#line 2006 "goal_util.m"
  {
#line 2006 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 2006 "goal_util.m"
    if ((hlds__goal_util__TargetGoalPath_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2006 "goal_util.m"
      {
#line 2006 "goal_util.m"
        MR_Word hlds__goal_util__MaybeGoal0_9;
#line 2007 "goal_util.m"
        void MR_CALL (* hlds__goal_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__goal_util__TransformP_5, (MR_Integer) 1)));
#line 2007 "goal_util.m"
        MR_Box hlds__goal_util__conv1_MaybeGoal0_9;

#line 2007 "goal_util.m"
        {
#line 2007 "goal_util.m"
          hlds__goal_util__func_0(((MR_Box) hlds__goal_util__TransformP_5), ((MR_Box) (hlds__goal_util__Goal0_7)), &hlds__goal_util__conv1_MaybeGoal0_9);
        }
#line 2007 "goal_util.m"
        hlds__goal_util__MaybeGoal0_9 = ((MR_Word) hlds__goal_util__conv1_MaybeGoal0_9);
#line 2008 "goal_util.m"
        {
#line 2008 "goal_util.m"
          hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_p_0(hlds__goal_util__MaybeGoal0_9, hlds__goal_util__MaybeGoal_8);
        }
#line 2006 "goal_util.m"
      }
#line 2006 "goal_util.m"
    else
#line 2010 "goal_util.m"
      {
#line 2010 "goal_util.m"
        MR_Word hlds__goal_util__FirstStep_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__TargetGoalPath_6, (MR_Integer) 0)));
#line 2010 "goal_util.m"
        MR_Word hlds__goal_util__LaterPath_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__TargetGoalPath_6, (MR_Integer) 1)));
#line 2010 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
#line 2011 "goal_util.m"
        MR_Word hlds__goal_util__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));

#line 2020 "goal_util.m"
#line 2020 "goal_util.m"
        switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr0_12)) {
#line 2020 "goal_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2020 "goal_util.m"
          case (MR_Integer) 0:
#line 2089 "goal_util.m"
            {
#line 2089 "goal_util.m"
              MR_Word hlds__goal_util__SubGoal0_64 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr0_12), (MR_Integer) 0);

#line 2090 "goal_util.m"
              hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 2102 "goal_util.m"
              if (hlds__goal_util__succeeded)
#line 2092 "goal_util.m"
                {
#line 2092 "goal_util.m"
                  MR_Word hlds__goal_util__MaybeSubGoal_65;

#line 2091 "goal_util.m"
                  {
#line 2091 "goal_util.m"
                    hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__SubGoal0_64, &hlds__goal_util__MaybeSubGoal_65);
                  }
#line 2096 "goal_util.m"
#line 2096 "goal_util.m"
                  switch (MR_tag((MR_Word) hlds__goal_util__MaybeSubGoal_65)) {
#line 2096 "goal_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 2096 "goal_util.m"
                    case (MR_Integer) 0:
#line 2100 "goal_util.m"
                      *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeSubGoal_65;
#line 2096 "goal_util.m"
                      break;
#line 2096 "goal_util.m"
                    case (MR_Integer) 1:
#line 2094 "goal_util.m"
                      {
#line 2094 "goal_util.m"
                        MR_Word hlds__goal_util__SubGoal_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeSubGoal_65, (MR_Integer) 0)));
#line 2094 "goal_util.m"
                        MR_Word hlds__goal_util__V_92_92;
#line 2094 "goal_util.m"
                        MR_Word hlds__goal_util__V_93_93 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_util__SubGoal_66);
#line 2095 "goal_util.m"
                        MR_Word hlds__goal_util__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
#line 2095 "goal_util.m"
                        MR_Word hlds__goal_util__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));

#line 2095 "goal_util.m"
                        {
#line 2095 "goal_util.m"
                          hlds__goal_util__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2095 "goal_util.m"
                          MR_hl_field(MR_mktag(0), hlds__goal_util__V_92_92, 0) = ((MR_Box) (hlds__goal_util__V_93_93));
#line 2095 "goal_util.m"
                          MR_hl_field(MR_mktag(0), hlds__goal_util__V_92_92, 1) = ((MR_Box) (hlds__goal_util__V_147_147));
#line 2095 "goal_util.m"
                        }
#line 2095 "goal_util.m"
                        {
#line 2095 "goal_util.m"
                          MR_Word base;
#line 2095 "goal_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2095 "goal_util.m"
                          *hlds__goal_util__MaybeGoal_8 = base;
#line 2095 "goal_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_92_92));
#line 2095 "goal_util.m"
                        }
#line 2094 "goal_util.m"
                      }
#line 2096 "goal_util.m"
                      break;
#line 2096 "goal_util.m"
                    case (MR_Integer) 2:
#line 2100 "goal_util.m"
                      *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeSubGoal_65;
#line 2096 "goal_util.m"
                      break;
#line 2096 "goal_util.m"
                  }
#line 2092 "goal_util.m"
                }
#line 2102 "goal_util.m"
              else
#line 2103 "goal_util.m"
                *hlds__goal_util__MaybeGoal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2089 "goal_util.m"
            }
#line 2020 "goal_util.m"
            break;
#line 2020 "goal_util.m"
          case (MR_Integer) 1:
#line 2020 "goal_util.m"
          case (MR_Integer) 2:
#line 2019 "goal_util.m"
            *hlds__goal_util__MaybeGoal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2020 "goal_util.m"
            break;
#line 2020 "goal_util.m"
          case (MR_Integer) 3:
#line 2020 "goal_util.m"
#line 2020 "goal_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 0)))) {
#line 2020 "goal_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2020 "goal_util.m"
              case (MR_Integer) 0:
#line 2020 "goal_util.m"
              case (MR_Integer) 1:
#line 2019 "goal_util.m"
                *hlds__goal_util__MaybeGoal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2020 "goal_util.m"
                break;
#line 2020 "goal_util.m"
              case (MR_Integer) 2:
#line 2021 "goal_util.m"
                {
#line 2021 "goal_util.m"
                  MR_Word hlds__goal_util__ConjType_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 1)));
#line 2021 "goal_util.m"
                  MR_Word hlds__goal_util__Conjs0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 2)));
#line 2039 "goal_util.m"
                  MR_Integer hlds__goal_util__ConjNum_38;
#line 2039 "goal_util.m"
                  MR_Word hlds__goal_util__Conj0_39;
#line 2023 "goal_util.m"
                  MR_Word hlds__goal_util__TypeCtorInfo_156_156;
#line 2024 "goal_util.m"
                  MR_Box hlds__goal_util__conv2_Conj0_39;

#line 2023 "goal_util.m"
                  hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__FirstStep_10)) == (MR_mktag((MR_Integer) 1)));
#line 2023 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 2023 "goal_util.m"
                    {
#line 2023 "goal_util.m"
                      hlds__goal_util__ConjNum_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__goal_util__FirstStep_10, (MR_Integer) 0)));
#line 11958 "hlds.goal_util.c"
                      hlds__goal_util__TypeCtorInfo_156_156 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 2024 "goal_util.m"
                      {
#line 2024 "goal_util.m"
                        hlds__goal_util__succeeded = mercury__list__index1_3_p_0(hlds__goal_util__TypeCtorInfo_156_156, hlds__goal_util__Conjs0_37, hlds__goal_util__ConjNum_38, &hlds__goal_util__conv2_Conj0_39);
                      }
#line 2024 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 2024 "goal_util.m"
                        {
#line 2024 "goal_util.m"
                          hlds__goal_util__Conj0_39 = ((MR_Word) hlds__goal_util__conv2_Conj0_39);
#line 2024 "goal_util.m"
                          hlds__goal_util__succeeded = MR_TRUE;
#line 2024 "goal_util.m"
                        }
#line 2023 "goal_util.m"
                    }
#line 2039 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 2027 "goal_util.m"
                    {
#line 2027 "goal_util.m"
                      MR_Word hlds__goal_util__MaybeConj_40;

#line 2026 "goal_util.m"
                      {
#line 2026 "goal_util.m"
                        hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__Conj0_39, &hlds__goal_util__MaybeConj_40);
                      }
#line 2033 "goal_util.m"
#line 2033 "goal_util.m"
                      switch (MR_tag((MR_Word) hlds__goal_util__MaybeConj_40)) {
#line 2033 "goal_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 2033 "goal_util.m"
                        case (MR_Integer) 0:
#line 2037 "goal_util.m"
                          *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeConj_40;
#line 2033 "goal_util.m"
                          break;
#line 2033 "goal_util.m"
                        case (MR_Integer) 1:
#line 2029 "goal_util.m"
                          {
#line 2029 "goal_util.m"
                            MR_Word hlds__goal_util__Conj_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeConj_40, (MR_Integer) 0)));
#line 2029 "goal_util.m"
                            MR_Word hlds__goal_util__Conjs_42;
#line 2029 "goal_util.m"
                            MR_Word hlds__goal_util__GoalExpr_43;
#line 2029 "goal_util.m"
                            MR_Word hlds__goal_util__V_96_96;
#line 2032 "goal_util.m"
                            MR_Word hlds__goal_util__V_136_136;
#line 2032 "goal_util.m"
                            MR_Word hlds__goal_util__V_135_135;

#line 2030 "goal_util.m"
                            {
#line 2030 "goal_util.m"
                              mercury__list__det_replace_nth_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__goal_util__Conjs0_37, hlds__goal_util__ConjNum_38, ((MR_Box) (hlds__goal_util__Conj_41)), &hlds__goal_util__Conjs_42);
                            }
#line 2031 "goal_util.m"
                            {
#line 2031 "goal_util.m"
                              hlds__goal_util__GoalExpr_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2031 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2031 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_43, 1) = ((MR_Box) (hlds__goal_util__ConjType_36));
#line 2031 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_43, 2) = ((MR_Box) (hlds__goal_util__Conjs_42));
#line 2031 "goal_util.m"
                            }
#line 2032 "goal_util.m"
                            hlds__goal_util__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
#line 2032 "goal_util.m"
                            hlds__goal_util__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
#line 2032 "goal_util.m"
                            {
#line 2032 "goal_util.m"
                              hlds__goal_util__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2032 "goal_util.m"
                              MR_hl_field(MR_mktag(0), hlds__goal_util__V_96_96, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_43));
#line 2032 "goal_util.m"
                              MR_hl_field(MR_mktag(0), hlds__goal_util__V_96_96, 1) = ((MR_Box) (hlds__goal_util__V_136_136));
#line 2032 "goal_util.m"
                            }
#line 2032 "goal_util.m"
                            {
#line 2032 "goal_util.m"
                              MR_Word base;
#line 2032 "goal_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2032 "goal_util.m"
                              *hlds__goal_util__MaybeGoal_8 = base;
#line 2032 "goal_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_96_96));
#line 2032 "goal_util.m"
                            }
#line 2029 "goal_util.m"
                          }
#line 2033 "goal_util.m"
                          break;
#line 2033 "goal_util.m"
                        case (MR_Integer) 2:
#line 2037 "goal_util.m"
                          *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeConj_40;
#line 2033 "goal_util.m"
                          break;
#line 2033 "goal_util.m"
                      }
#line 2027 "goal_util.m"
                    }
#line 2039 "goal_util.m"
                  else
#line 2040 "goal_util.m"
                    *hlds__goal_util__MaybeGoal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2021 "goal_util.m"
                }
#line 2020 "goal_util.m"
                break;
#line 2020 "goal_util.m"
              case (MR_Integer) 3:
#line 2043 "goal_util.m"
                {
#line 2043 "goal_util.m"
                  MR_Word hlds__goal_util__Disjs0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 1)));
#line 2061 "goal_util.m"
                  MR_Integer hlds__goal_util__DisjNum_46;
#line 2061 "goal_util.m"
                  MR_Word hlds__goal_util__Disj0_47;
#line 2045 "goal_util.m"
                  MR_Word hlds__goal_util__TypeCtorInfo_158_158;
#line 2046 "goal_util.m"
                  MR_Box hlds__goal_util__conv3_Disj0_47;

#line 2045 "goal_util.m"
                  hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__FirstStep_10)) == (MR_mktag((MR_Integer) 2)));
#line 2045 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 2045 "goal_util.m"
                    {
#line 2045 "goal_util.m"
                      hlds__goal_util__DisjNum_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__FirstStep_10, (MR_Integer) 0)));
#line 12105 "hlds.goal_util.c"
                      hlds__goal_util__TypeCtorInfo_158_158 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 2046 "goal_util.m"
                      {
#line 2046 "goal_util.m"
                        hlds__goal_util__succeeded = mercury__list__index1_3_p_0(hlds__goal_util__TypeCtorInfo_158_158, hlds__goal_util__Disjs0_45, hlds__goal_util__DisjNum_46, &hlds__goal_util__conv3_Disj0_47);
                      }
#line 2046 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 2046 "goal_util.m"
                        {
#line 2046 "goal_util.m"
                          hlds__goal_util__Disj0_47 = ((MR_Word) hlds__goal_util__conv3_Disj0_47);
#line 2046 "goal_util.m"
                          hlds__goal_util__succeeded = MR_TRUE;
#line 2046 "goal_util.m"
                        }
#line 2045 "goal_util.m"
                    }
#line 2061 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 2049 "goal_util.m"
                    {
#line 2049 "goal_util.m"
                      MR_Word hlds__goal_util__MaybeDisj_48;

#line 2048 "goal_util.m"
                      {
#line 2048 "goal_util.m"
                        hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__Disj0_47, &hlds__goal_util__MaybeDisj_48);
                      }
#line 2055 "goal_util.m"
#line 2055 "goal_util.m"
                      switch (MR_tag((MR_Word) hlds__goal_util__MaybeDisj_48)) {
#line 2055 "goal_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 2055 "goal_util.m"
                        case (MR_Integer) 0:
#line 2059 "goal_util.m"
                          *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeDisj_48;
#line 2055 "goal_util.m"
                          break;
#line 2055 "goal_util.m"
                        case (MR_Integer) 1:
#line 2051 "goal_util.m"
                          {
#line 2051 "goal_util.m"
                            MR_Word hlds__goal_util__Disj_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeDisj_48, (MR_Integer) 0)));
#line 2051 "goal_util.m"
                            MR_Word hlds__goal_util__Disjs_50;
#line 2051 "goal_util.m"
                            MR_Word hlds__goal_util__V_95_95;
#line 2051 "goal_util.m"
                            MR_Word hlds__goal_util__GoalExpr_97;
#line 2054 "goal_util.m"
                            MR_Word hlds__goal_util__V_138_138;
#line 2054 "goal_util.m"
                            MR_Word hlds__goal_util__V_137_137;

#line 2052 "goal_util.m"
                            {
#line 2052 "goal_util.m"
                              mercury__list__det_replace_nth_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__goal_util__Disjs0_45, hlds__goal_util__DisjNum_46, ((MR_Box) (hlds__goal_util__Disj_49)), &hlds__goal_util__Disjs_50);
                            }
#line 2053 "goal_util.m"
                            {
#line 2053 "goal_util.m"
                              hlds__goal_util__GoalExpr_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2053 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2053 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_97, 1) = ((MR_Box) (hlds__goal_util__Disjs_50));
#line 2053 "goal_util.m"
                            }
#line 2054 "goal_util.m"
                            hlds__goal_util__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
#line 2054 "goal_util.m"
                            hlds__goal_util__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
#line 2054 "goal_util.m"
                            {
#line 2054 "goal_util.m"
                              hlds__goal_util__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2054 "goal_util.m"
                              MR_hl_field(MR_mktag(0), hlds__goal_util__V_95_95, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_97));
#line 2054 "goal_util.m"
                              MR_hl_field(MR_mktag(0), hlds__goal_util__V_95_95, 1) = ((MR_Box) (hlds__goal_util__V_138_138));
#line 2054 "goal_util.m"
                            }
#line 2054 "goal_util.m"
                            {
#line 2054 "goal_util.m"
                              MR_Word base;
#line 2054 "goal_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2054 "goal_util.m"
                              *hlds__goal_util__MaybeGoal_8 = base;
#line 2054 "goal_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_95_95));
#line 2054 "goal_util.m"
                            }
#line 2051 "goal_util.m"
                          }
#line 2055 "goal_util.m"
                          break;
#line 2055 "goal_util.m"
                        case (MR_Integer) 2:
#line 2059 "goal_util.m"
                          *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeDisj_48;
#line 2055 "goal_util.m"
                          break;
#line 2055 "goal_util.m"
                      }
#line 2049 "goal_util.m"
                    }
#line 2061 "goal_util.m"
                  else
#line 2062 "goal_util.m"
                    *hlds__goal_util__MaybeGoal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2043 "goal_util.m"
                }
#line 2020 "goal_util.m"
                break;
#line 2020 "goal_util.m"
              case (MR_Integer) 4:
#line 2065 "goal_util.m"
                {
#line 2065 "goal_util.m"
                  MR_Word hlds__goal_util__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 1)));
#line 2065 "goal_util.m"
                  MR_Word hlds__goal_util__CanFail_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 2)));
#line 2065 "goal_util.m"
                  MR_Word hlds__goal_util__Cases0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 3)));
#line 2085 "goal_util.m"
                  MR_Integer hlds__goal_util__CaseNum_55;
#line 2085 "goal_util.m"
                  MR_Word hlds__goal_util__Case0_57;
#line 2067 "goal_util.m"
                  MR_Word hlds__goal_util__TypeCtorInfo_160_160;
#line 2067 "goal_util.m"
                  MR_Word hlds__goal_util___MaybeNumConstructors_56;
#line 2068 "goal_util.m"
                  MR_Box hlds__goal_util__conv4_Case0_57;

#line 2067 "goal_util.m"
                  hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__FirstStep_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 2067 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 2067 "goal_util.m"
                    {
#line 2067 "goal_util.m"
                      hlds__goal_util__CaseNum_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_10, (MR_Integer) 1)));
#line 2067 "goal_util.m"
                      hlds__goal_util___MaybeNumConstructors_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_10, (MR_Integer) 2)));
#line 12258 "hlds.goal_util.c"
                      hlds__goal_util__TypeCtorInfo_160_160 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 2068 "goal_util.m"
                      {
#line 2068 "goal_util.m"
                        hlds__goal_util__succeeded = mercury__list__index1_3_p_0(hlds__goal_util__TypeCtorInfo_160_160, hlds__goal_util__Cases0_54, hlds__goal_util__CaseNum_55, &hlds__goal_util__conv4_Case0_57);
                      }
#line 2068 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 2068 "goal_util.m"
                        {
#line 2068 "goal_util.m"
                          hlds__goal_util__Case0_57 = ((MR_Word) hlds__goal_util__conv4_Case0_57);
#line 2068 "goal_util.m"
                          hlds__goal_util__succeeded = MR_TRUE;
#line 2068 "goal_util.m"
                        }
#line 2067 "goal_util.m"
                    }
#line 2085 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 2070 "goal_util.m"
                    {
#line 2070 "goal_util.m"
                      MR_Word hlds__goal_util__CaseGoal0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_57, (MR_Integer) 2)));
#line 2070 "goal_util.m"
                      MR_Word hlds__goal_util__MaybeCaseGoal_59;
#line 2070 "goal_util.m"
                      MR_Word hlds__goal_util__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_57, (MR_Integer) 0)));
#line 2070 "goal_util.m"
                      MR_Word hlds__goal_util__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_57, (MR_Integer) 1)));

#line 2071 "goal_util.m"
                      {
#line 2071 "goal_util.m"
                        hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__CaseGoal0_58, &hlds__goal_util__MaybeCaseGoal_59);
                      }
#line 2079 "goal_util.m"
#line 2079 "goal_util.m"
                      switch (MR_tag((MR_Word) hlds__goal_util__MaybeCaseGoal_59)) {
#line 2079 "goal_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 2079 "goal_util.m"
                        case (MR_Integer) 0:
#line 2083 "goal_util.m"
                          *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeCaseGoal_59;
#line 2079 "goal_util.m"
                          break;
#line 2079 "goal_util.m"
                        case (MR_Integer) 1:
#line 2074 "goal_util.m"
                          {
#line 2074 "goal_util.m"
                            MR_Word hlds__goal_util__CaseGoal_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeCaseGoal_59, (MR_Integer) 0)));
#line 2074 "goal_util.m"
                            MR_Word hlds__goal_util__Case_61;
#line 2074 "goal_util.m"
                            MR_Word hlds__goal_util__Cases_62;
#line 2074 "goal_util.m"
                            MR_Word hlds__goal_util__V_94_94;
#line 2074 "goal_util.m"
                            MR_Word hlds__goal_util__GoalExpr_102;
#line 2075 "goal_util.m"
                            MR_Word hlds__goal_util__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_57, (MR_Integer) 0)));
#line 2075 "goal_util.m"
                            MR_Word hlds__goal_util__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_57, (MR_Integer) 1)));
#line 2075 "goal_util.m"
                            MR_Word hlds__goal_util__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_57, (MR_Integer) 2)));
#line 2078 "goal_util.m"
                            MR_Word hlds__goal_util__V_145_145;
#line 2078 "goal_util.m"
                            MR_Word hlds__goal_util__V_144_144;

#line 2075 "goal_util.m"
                            {
#line 2075 "goal_util.m"
                              hlds__goal_util__Case_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2075 "goal_util.m"
                              MR_hl_field(MR_mktag(0), hlds__goal_util__Case_61, 0) = ((MR_Box) (hlds__goal_util__V_141_141));
#line 2075 "goal_util.m"
                              MR_hl_field(MR_mktag(0), hlds__goal_util__Case_61, 1) = ((MR_Box) (hlds__goal_util__V_142_142));
#line 2075 "goal_util.m"
                              MR_hl_field(MR_mktag(0), hlds__goal_util__Case_61, 2) = ((MR_Box) (hlds__goal_util__CaseGoal_60));
#line 2075 "goal_util.m"
                            }
#line 2076 "goal_util.m"
                            {
#line 2076 "goal_util.m"
                              mercury__list__det_replace_nth_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, hlds__goal_util__Cases0_54, hlds__goal_util__CaseNum_55, ((MR_Box) (hlds__goal_util__Case_61)), &hlds__goal_util__Cases_62);
                            }
#line 2077 "goal_util.m"
                            {
#line 2077 "goal_util.m"
                              hlds__goal_util__GoalExpr_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2077 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2077 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_102, 1) = ((MR_Box) (hlds__goal_util__Var_52));
#line 2077 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_102, 2) = ((MR_Box) (hlds__goal_util__CanFail_53));
#line 2077 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_102, 3) = ((MR_Box) (hlds__goal_util__Cases_62));
#line 2077 "goal_util.m"
                            }
#line 2078 "goal_util.m"
                            hlds__goal_util__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
#line 2078 "goal_util.m"
                            hlds__goal_util__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
#line 2078 "goal_util.m"
                            {
#line 2078 "goal_util.m"
                              hlds__goal_util__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2078 "goal_util.m"
                              MR_hl_field(MR_mktag(0), hlds__goal_util__V_94_94, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_102));
#line 2078 "goal_util.m"
                              MR_hl_field(MR_mktag(0), hlds__goal_util__V_94_94, 1) = ((MR_Box) (hlds__goal_util__V_145_145));
#line 2078 "goal_util.m"
                            }
#line 2078 "goal_util.m"
                            {
#line 2078 "goal_util.m"
                              MR_Word base;
#line 2078 "goal_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2078 "goal_util.m"
                              *hlds__goal_util__MaybeGoal_8 = base;
#line 2078 "goal_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_94_94));
#line 2078 "goal_util.m"
                            }
#line 2074 "goal_util.m"
                          }
#line 2079 "goal_util.m"
                          break;
#line 2079 "goal_util.m"
                        case (MR_Integer) 2:
#line 2083 "goal_util.m"
                          *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeCaseGoal_59;
#line 2079 "goal_util.m"
                          break;
#line 2079 "goal_util.m"
                      }
#line 2070 "goal_util.m"
                    }
#line 2085 "goal_util.m"
                  else
#line 2086 "goal_util.m"
                    *hlds__goal_util__MaybeGoal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2065 "goal_util.m"
                }
#line 2020 "goal_util.m"
                break;
#line 2020 "goal_util.m"
              case (MR_Integer) 5:
#line 2106 "goal_util.m"
                {
#line 2106 "goal_util.m"
                  MR_Word hlds__goal_util__Reason_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 1)));
#line 2106 "goal_util.m"
                  MR_Word hlds__goal_util__SubGoal0_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 2)));
#line 2107 "goal_util.m"
                  MR_Word hlds__goal_util___MaybeCut_69;

#line 2107 "goal_util.m"
                  hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__FirstStep_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 2107 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 2107 "goal_util.m"
                    {
#line 2107 "goal_util.m"
                      hlds__goal_util___MaybeCut_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_10, (MR_Integer) 1)));
#line 2109 "goal_util.m"
                      {
#line 2109 "goal_util.m"
                        MR_Word hlds__goal_util__MaybeSubGoal_112;

#line 2108 "goal_util.m"
                        {
#line 2108 "goal_util.m"
                          hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__SubGoal0_118, &hlds__goal_util__MaybeSubGoal_112);
                        }
#line 2114 "goal_util.m"
#line 2114 "goal_util.m"
                        switch (MR_tag((MR_Word) hlds__goal_util__MaybeSubGoal_112)) {
#line 2114 "goal_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 2114 "goal_util.m"
                          case (MR_Integer) 0:
#line 2118 "goal_util.m"
                            *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeSubGoal_112;
#line 2114 "goal_util.m"
                            break;
#line 2114 "goal_util.m"
                          case (MR_Integer) 1:
#line 2111 "goal_util.m"
                            {
#line 2111 "goal_util.m"
                              MR_Word hlds__goal_util__V_91_91;
#line 2111 "goal_util.m"
                              MR_Word hlds__goal_util__GoalExpr_107;
#line 2111 "goal_util.m"
                              MR_Word hlds__goal_util__SubGoal_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeSubGoal_112, (MR_Integer) 0)));
#line 2113 "goal_util.m"
                              MR_Word hlds__goal_util__V_149_149;
#line 2113 "goal_util.m"
                              MR_Word hlds__goal_util__V_148_148;

#line 2112 "goal_util.m"
                              {
#line 2112 "goal_util.m"
                                hlds__goal_util__GoalExpr_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2112 "goal_util.m"
                                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 2112 "goal_util.m"
                                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_107, 1) = ((MR_Box) (hlds__goal_util__Reason_68));
#line 2112 "goal_util.m"
                                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_107, 2) = ((MR_Box) (hlds__goal_util__SubGoal_108));
#line 2112 "goal_util.m"
                              }
#line 2113 "goal_util.m"
                              hlds__goal_util__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
#line 2113 "goal_util.m"
                              hlds__goal_util__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
#line 2113 "goal_util.m"
                              {
#line 2113 "goal_util.m"
                                hlds__goal_util__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2113 "goal_util.m"
                                MR_hl_field(MR_mktag(0), hlds__goal_util__V_91_91, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_107));
#line 2113 "goal_util.m"
                                MR_hl_field(MR_mktag(0), hlds__goal_util__V_91_91, 1) = ((MR_Box) (hlds__goal_util__V_149_149));
#line 2113 "goal_util.m"
                              }
#line 2113 "goal_util.m"
                              {
#line 2113 "goal_util.m"
                                MR_Word base;
#line 2113 "goal_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2113 "goal_util.m"
                                *hlds__goal_util__MaybeGoal_8 = base;
#line 2113 "goal_util.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_91_91));
#line 2113 "goal_util.m"
                              }
#line 2111 "goal_util.m"
                            }
#line 2114 "goal_util.m"
                            break;
#line 2114 "goal_util.m"
                          case (MR_Integer) 2:
#line 2118 "goal_util.m"
                            *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeSubGoal_112;
#line 2114 "goal_util.m"
                            break;
#line 2114 "goal_util.m"
                        }
#line 2109 "goal_util.m"
                      }
#line 2107 "goal_util.m"
                    }
#line 2107 "goal_util.m"
                  else
#line 2121 "goal_util.m"
                    *hlds__goal_util__MaybeGoal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2106 "goal_util.m"
                }
#line 2020 "goal_util.m"
                break;
#line 2020 "goal_util.m"
              case (MR_Integer) 6:
#line 2124 "goal_util.m"
                {
#line 2124 "goal_util.m"
                  MR_Word hlds__goal_util__ExistVars_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 1)));
#line 2124 "goal_util.m"
                  MR_Word hlds__goal_util__Cond0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 2)));
#line 2124 "goal_util.m"
                  MR_Word hlds__goal_util__Then0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 3)));
#line 2124 "goal_util.m"
                  MR_Word hlds__goal_util__Else0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 4)));

#line 2125 "goal_util.m"
                  hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2138 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 2127 "goal_util.m"
                    {
#line 2127 "goal_util.m"
                      MR_Word hlds__goal_util__MaybeCond_75;

#line 2126 "goal_util.m"
                      {
#line 2126 "goal_util.m"
                        hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__Cond0_72, &hlds__goal_util__MaybeCond_75);
                      }
#line 2132 "goal_util.m"
#line 2132 "goal_util.m"
                      switch (MR_tag((MR_Word) hlds__goal_util__MaybeCond_75)) {
#line 2132 "goal_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 2132 "goal_util.m"
                        case (MR_Integer) 0:
#line 2136 "goal_util.m"
                          *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeCond_75;
#line 2132 "goal_util.m"
                          break;
#line 2132 "goal_util.m"
                        case (MR_Integer) 1:
#line 2129 "goal_util.m"
                          {
#line 2129 "goal_util.m"
                            MR_Word hlds__goal_util__Cond_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeCond_75, (MR_Integer) 0)));
#line 2129 "goal_util.m"
                            MR_Word hlds__goal_util__V_88_88;
#line 2129 "goal_util.m"
                            MR_Word hlds__goal_util__GoalExpr_121;
#line 2131 "goal_util.m"
                            MR_Word hlds__goal_util__V_151_151;
#line 2131 "goal_util.m"
                            MR_Word hlds__goal_util__V_150_150;

#line 2130 "goal_util.m"
                            {
#line 2130 "goal_util.m"
                              hlds__goal_util__GoalExpr_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 2130 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2130 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_121, 1) = ((MR_Box) (hlds__goal_util__ExistVars_71));
#line 2130 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_121, 2) = ((MR_Box) (hlds__goal_util__Cond_76));
#line 2130 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_121, 3) = ((MR_Box) (hlds__goal_util__Then0_73));
#line 2130 "goal_util.m"
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_121, 4) = ((MR_Box) (hlds__goal_util__Else0_74));
#line 2130 "goal_util.m"
                            }
#line 2131 "goal_util.m"
                            hlds__goal_util__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
#line 2131 "goal_util.m"
                            hlds__goal_util__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
#line 2131 "goal_util.m"
                            {
#line 2131 "goal_util.m"
                              hlds__goal_util__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2131 "goal_util.m"
                              MR_hl_field(MR_mktag(0), hlds__goal_util__V_88_88, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_121));
#line 2131 "goal_util.m"
                              MR_hl_field(MR_mktag(0), hlds__goal_util__V_88_88, 1) = ((MR_Box) (hlds__goal_util__V_151_151));
#line 2131 "goal_util.m"
                            }
#line 2131 "goal_util.m"
                            {
#line 2131 "goal_util.m"
                              MR_Word base;
#line 2131 "goal_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2131 "goal_util.m"
                              *hlds__goal_util__MaybeGoal_8 = base;
#line 2131 "goal_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_88_88));
#line 2131 "goal_util.m"
                            }
#line 2129 "goal_util.m"
                          }
#line 2132 "goal_util.m"
                          break;
#line 2132 "goal_util.m"
                        case (MR_Integer) 2:
#line 2136 "goal_util.m"
                          *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeCond_75;
#line 2132 "goal_util.m"
                          break;
#line 2132 "goal_util.m"
                      }
#line 2127 "goal_util.m"
                    }
#line 2138 "goal_util.m"
                  else
#line 2151 "goal_util.m"
                    {
#line 2138 "goal_util.m"
                      hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 2151 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 2140 "goal_util.m"
                        {
#line 2140 "goal_util.m"
                          MR_Word hlds__goal_util__MaybeThen_78;

#line 2139 "goal_util.m"
                          {
#line 2139 "goal_util.m"
                            hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__Then0_73, &hlds__goal_util__MaybeThen_78);
                          }
#line 2145 "goal_util.m"
#line 2145 "goal_util.m"
                          switch (MR_tag((MR_Word) hlds__goal_util__MaybeThen_78)) {
#line 2145 "goal_util.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 2145 "goal_util.m"
                            case (MR_Integer) 0:
#line 2149 "goal_util.m"
                              *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeThen_78;
#line 2145 "goal_util.m"
                              break;
#line 2145 "goal_util.m"
                            case (MR_Integer) 1:
#line 2142 "goal_util.m"
                              {
#line 2142 "goal_util.m"
                                MR_Word hlds__goal_util__Then_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeThen_78, (MR_Integer) 0)));
#line 2142 "goal_util.m"
                                MR_Word hlds__goal_util__V_89_89;
#line 2142 "goal_util.m"
                                MR_Word hlds__goal_util__GoalExpr_124;
#line 2144 "goal_util.m"
                                MR_Word hlds__goal_util__V_153_153;
#line 2144 "goal_util.m"
                                MR_Word hlds__goal_util__V_152_152;

#line 2143 "goal_util.m"
                                {
#line 2143 "goal_util.m"
                                  hlds__goal_util__GoalExpr_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 2143 "goal_util.m"
                                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2143 "goal_util.m"
                                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_124, 1) = ((MR_Box) (hlds__goal_util__ExistVars_71));
#line 2143 "goal_util.m"
                                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_124, 2) = ((MR_Box) (hlds__goal_util__Cond0_72));
#line 2143 "goal_util.m"
                                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_124, 3) = ((MR_Box) (hlds__goal_util__Then_79));
#line 2143 "goal_util.m"
                                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_124, 4) = ((MR_Box) (hlds__goal_util__Else0_74));
#line 2143 "goal_util.m"
                                }
#line 2144 "goal_util.m"
                                hlds__goal_util__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
#line 2144 "goal_util.m"
                                hlds__goal_util__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
#line 2144 "goal_util.m"
                                {
#line 2144 "goal_util.m"
                                  hlds__goal_util__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2144 "goal_util.m"
                                  MR_hl_field(MR_mktag(0), hlds__goal_util__V_89_89, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_124));
#line 2144 "goal_util.m"
                                  MR_hl_field(MR_mktag(0), hlds__goal_util__V_89_89, 1) = ((MR_Box) (hlds__goal_util__V_153_153));
#line 2144 "goal_util.m"
                                }
#line 2144 "goal_util.m"
                                {
#line 2144 "goal_util.m"
                                  MR_Word base;
#line 2144 "goal_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2144 "goal_util.m"
                                  *hlds__goal_util__MaybeGoal_8 = base;
#line 2144 "goal_util.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_89_89));
#line 2144 "goal_util.m"
                                }
#line 2142 "goal_util.m"
                              }
#line 2145 "goal_util.m"
                              break;
#line 2145 "goal_util.m"
                            case (MR_Integer) 2:
#line 2149 "goal_util.m"
                              *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeThen_78;
#line 2145 "goal_util.m"
                              break;
#line 2145 "goal_util.m"
                          }
#line 2140 "goal_util.m"
                        }
#line 2151 "goal_util.m"
                      else
#line 2164 "goal_util.m"
                        {
#line 2151 "goal_util.m"
                          hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 2164 "goal_util.m"
                          if (hlds__goal_util__succeeded)
#line 2153 "goal_util.m"
                            {
#line 2153 "goal_util.m"
                              MR_Word hlds__goal_util__MaybeElse_81;

#line 2152 "goal_util.m"
                              {
#line 2152 "goal_util.m"
                                hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__Else0_74, &hlds__goal_util__MaybeElse_81);
                              }
#line 2158 "goal_util.m"
#line 2158 "goal_util.m"
                              switch (MR_tag((MR_Word) hlds__goal_util__MaybeElse_81)) {
#line 2158 "goal_util.m"
                                default: /*NOTREACHED*/ MR_assert(0);
#line 2158 "goal_util.m"
                                case (MR_Integer) 0:
#line 2162 "goal_util.m"
                                  *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeElse_81;
#line 2158 "goal_util.m"
                                  break;
#line 2158 "goal_util.m"
                                case (MR_Integer) 1:
#line 2155 "goal_util.m"
                                  {
#line 2155 "goal_util.m"
                                    MR_Word hlds__goal_util__Else_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeElse_81, (MR_Integer) 0)));
#line 2155 "goal_util.m"
                                    MR_Word hlds__goal_util__V_90_90;
#line 2155 "goal_util.m"
                                    MR_Word hlds__goal_util__GoalExpr_127;
#line 2157 "goal_util.m"
                                    MR_Word hlds__goal_util__V_155_155;
#line 2157 "goal_util.m"
                                    MR_Word hlds__goal_util__V_154_154;

#line 2156 "goal_util.m"
                                    {
#line 2156 "goal_util.m"
                                      hlds__goal_util__GoalExpr_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 2156 "goal_util.m"
                                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2156 "goal_util.m"
                                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_127, 1) = ((MR_Box) (hlds__goal_util__ExistVars_71));
#line 2156 "goal_util.m"
                                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_127, 2) = ((MR_Box) (hlds__goal_util__Cond0_72));
#line 2156 "goal_util.m"
                                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_127, 3) = ((MR_Box) (hlds__goal_util__Then0_73));
#line 2156 "goal_util.m"
                                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_127, 4) = ((MR_Box) (hlds__goal_util__Else_82));
#line 2156 "goal_util.m"
                                    }
#line 2157 "goal_util.m"
                                    hlds__goal_util__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
#line 2157 "goal_util.m"
                                    hlds__goal_util__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
#line 2157 "goal_util.m"
                                    {
#line 2157 "goal_util.m"
                                      hlds__goal_util__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2157 "goal_util.m"
                                      MR_hl_field(MR_mktag(0), hlds__goal_util__V_90_90, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_127));
#line 2157 "goal_util.m"
                                      MR_hl_field(MR_mktag(0), hlds__goal_util__V_90_90, 1) = ((MR_Box) (hlds__goal_util__V_155_155));
#line 2157 "goal_util.m"
                                    }
#line 2157 "goal_util.m"
                                    {
#line 2157 "goal_util.m"
                                      MR_Word base;
#line 2157 "goal_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2157 "goal_util.m"
                                      *hlds__goal_util__MaybeGoal_8 = base;
#line 2157 "goal_util.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__V_90_90));
#line 2157 "goal_util.m"
                                    }
#line 2155 "goal_util.m"
                                  }
#line 2158 "goal_util.m"
                                  break;
#line 2158 "goal_util.m"
                                case (MR_Integer) 2:
#line 2162 "goal_util.m"
                                  *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeElse_81;
#line 2158 "goal_util.m"
                                  break;
#line 2158 "goal_util.m"
                              }
#line 2153 "goal_util.m"
                            }
#line 2164 "goal_util.m"
                          else
#line 2165 "goal_util.m"
                            *hlds__goal_util__MaybeGoal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2164 "goal_util.m"
                        }
#line 2151 "goal_util.m"
                    }
#line 2124 "goal_util.m"
                }
#line 2020 "goal_util.m"
                break;
#line 2020 "goal_util.m"
              case (MR_Integer) 7:
#line 2168 "goal_util.m"
                {
#line 2169 "goal_util.m"
                  {
#line 2169 "goal_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "predicate \140hlds.goal_util.maybe_transform_goal_at_goal_path\'/4", (MR_String) "shorthand");
#line 2169 "goal_util.m"
                    return;
                  }
#line 2168 "goal_util.m"
                }
#line 2020 "goal_util.m"
                break;
#line 2020 "goal_util.m"
            }
#line 2020 "goal_util.m"
            break;
#line 2020 "goal_util.m"
        }
#line 2010 "goal_util.m"
      }
#line 2006 "goal_util.m"
  }
#line 418 "goal_util.m"
}

#line 1938 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_4(
#line 1938 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1938 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1)
#line 1938 "goal_util.m"
{
#line 1938 "goal_util.m"
  {
#line 1938 "goal_util.m"
    MR_Box hlds__goal_util__wrapper_arg_2;
#line 1938 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 1938 "goal_util.m"
    MR_Word hlds__goal_util__conv3_Case_4;

#line 1938 "goal_util.m"
    {
#line 1938 "goal_util.m"
      hlds__goal_util__conv3_Case_4 = hlds__goal_util__maybe_strip_equality_pretest_case_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    }
#line 1938 "goal_util.m"
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv3_Case_4));
#line 1938 "goal_util.m"
    return hlds__goal_util__wrapper_arg_2;
#line 1938 "goal_util.m"
  }
#line 1938 "goal_util.m"
}

#line 1977 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_3(
#line 1977 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1977 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1)
#line 1977 "goal_util.m"
{
#line 1977 "goal_util.m"
  {
#line 1977 "goal_util.m"
    MR_Box hlds__goal_util__wrapper_arg_2;
#line 1977 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 1977 "goal_util.m"
    MR_Word hlds__goal_util__conv2_Goal_4;

#line 1977 "goal_util.m"
    {
#line 1977 "goal_util.m"
      hlds__goal_util__conv2_Goal_4 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    }
#line 1977 "goal_util.m"
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv2_Goal_4));
#line 1977 "goal_util.m"
    return hlds__goal_util__wrapper_arg_2;
#line 1977 "goal_util.m"
  }
#line 1977 "goal_util.m"
}

#line 1933 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_2(
#line 1933 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1933 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1)
#line 1933 "goal_util.m"
{
#line 1933 "goal_util.m"
  {
#line 1933 "goal_util.m"
    MR_Box hlds__goal_util__wrapper_arg_2;
#line 1933 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 1933 "goal_util.m"
    MR_Word hlds__goal_util__conv1_Goal_4;

#line 1933 "goal_util.m"
    {
#line 1933 "goal_util.m"
      hlds__goal_util__conv1_Goal_4 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    }
#line 1933 "goal_util.m"
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv1_Goal_4));
#line 1933 "goal_util.m"
    return hlds__goal_util__wrapper_arg_2;
#line 1933 "goal_util.m"
  }
#line 1933 "goal_util.m"
}

#line 1928 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_1(
#line 1928 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1928 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1)
#line 1928 "goal_util.m"
{
#line 1928 "goal_util.m"
  {
#line 1928 "goal_util.m"
    MR_Box hlds__goal_util__wrapper_arg_2;
#line 1928 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 1928 "goal_util.m"
    MR_Word hlds__goal_util__conv0_Goal_4;

#line 1928 "goal_util.m"
    {
#line 1928 "goal_util.m"
      hlds__goal_util__conv0_Goal_4 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    }
#line 1928 "goal_util.m"
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv0_Goal_4));
#line 1928 "goal_util.m"
    return hlds__goal_util__wrapper_arg_2;
#line 1928 "goal_util.m"
  }
#line 1928 "goal_util.m"
}

#line 404 "goal_util.m"
MR_Word MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0(
#line 404 "goal_util.m"
  MR_Word hlds__goal_util__Goal0_3)
#line 404 "goal_util.m"
{
#line 1915 "goal_util.m"
  {
#line 1915 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1915 "goal_util.m"
    MR_Word hlds__goal_util__Goal_4;
#line 1915 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_3, (MR_Integer) 0)));
#line 1915 "goal_util.m"
    MR_Word hlds__goal_util__GoalInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_3, (MR_Integer) 1)));

#line 1926 "goal_util.m"
#line 1926 "goal_util.m"
    switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr0_5)) {
#line 1926 "goal_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1926 "goal_util.m"
      case (MR_Integer) 0:
#line 1953 "goal_util.m"
        {
#line 1953 "goal_util.m"
          MR_Word hlds__goal_util__SubGoal0_47 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr0_5), (MR_Integer) 0);
#line 1953 "goal_util.m"
          MR_Word hlds__goal_util__SubGoal_48;
#line 1953 "goal_util.m"
          MR_Word hlds__goal_util__GoalExpr_80;

#line 1954 "goal_util.m"
          {
#line 1954 "goal_util.m"
            hlds__goal_util__SubGoal_48 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__SubGoal0_47);
          }
#line 1955 "goal_util.m"
          hlds__goal_util__GoalExpr_80 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_util__SubGoal_48);
#line 1956 "goal_util.m"
          {
#line 1956 "goal_util.m"
            hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1956 "goal_util.m"
            MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_80));
#line 1956 "goal_util.m"
            MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
#line 1956 "goal_util.m"
          }
#line 1953 "goal_util.m"
        }
#line 1926 "goal_util.m"
        break;
#line 1926 "goal_util.m"
      case (MR_Integer) 1:
#line 1926 "goal_util.m"
      case (MR_Integer) 2:
#line 1925 "goal_util.m"
        hlds__goal_util__Goal_4 = hlds__goal_util__Goal0_3;
#line 1926 "goal_util.m"
        break;
#line 1926 "goal_util.m"
      case (MR_Integer) 3:
#line 1926 "goal_util.m"
#line 1926 "goal_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 0)))) {
#line 1926 "goal_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1926 "goal_util.m"
          case (MR_Integer) 0:
#line 1926 "goal_util.m"
          case (MR_Integer) 1:
#line 1925 "goal_util.m"
            hlds__goal_util__Goal_4 = hlds__goal_util__Goal0_3;
#line 1926 "goal_util.m"
            break;
#line 1926 "goal_util.m"
          case (MR_Integer) 2:
#line 1927 "goal_util.m"
            {
#line 1927 "goal_util.m"
              MR_Word hlds__goal_util__TypeCtorInfo_99_99 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1927 "goal_util.m"
              MR_Word hlds__goal_util__ConjType_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 1)));
#line 1927 "goal_util.m"
              MR_Word hlds__goal_util__Goals0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 2)));
#line 1927 "goal_util.m"
              MR_Word hlds__goal_util__Goals_32;
#line 1927 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_33;

#line 1928 "goal_util.m"
              {
#line 1928 "goal_util.m"
                hlds__goal_util__Goals_32 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_99_99, hlds__goal_util__TypeCtorInfo_99_99, (MR_Word) &hlds__goal_util_scalar_common_3[8], hlds__goal_util__Goals0_31);
              }
#line 1929 "goal_util.m"
              {
#line 1929 "goal_util.m"
                hlds__goal_util__GoalExpr_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1929 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1929 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_33, 1) = ((MR_Box) (hlds__goal_util__ConjType_30));
#line 1929 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_33, 2) = ((MR_Box) (hlds__goal_util__Goals_32));
#line 1929 "goal_util.m"
              }
#line 1930 "goal_util.m"
              {
#line 1930 "goal_util.m"
                hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1930 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_33));
#line 1930 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
#line 1930 "goal_util.m"
              }
#line 1927 "goal_util.m"
            }
#line 1926 "goal_util.m"
            break;
#line 1926 "goal_util.m"
          case (MR_Integer) 3:
#line 1932 "goal_util.m"
            {
#line 1932 "goal_util.m"
              MR_Word hlds__goal_util__TypeCtorInfo_102_102 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1932 "goal_util.m"
              MR_Word hlds__goal_util__SubGoals0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 1)));
#line 1932 "goal_util.m"
              MR_Word hlds__goal_util__SubGoals_35;
#line 1932 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_75;

#line 1933 "goal_util.m"
              {
#line 1933 "goal_util.m"
                hlds__goal_util__SubGoals_35 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_102_102, hlds__goal_util__TypeCtorInfo_102_102, (MR_Word) &hlds__goal_util_scalar_common_3[9], hlds__goal_util__SubGoals0_34);
              }
#line 1934 "goal_util.m"
              {
#line 1934 "goal_util.m"
                hlds__goal_util__GoalExpr_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1934 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1934 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_75, 1) = ((MR_Box) (hlds__goal_util__SubGoals_35));
#line 1934 "goal_util.m"
              }
#line 1935 "goal_util.m"
              {
#line 1935 "goal_util.m"
                hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1935 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_75));
#line 1935 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
#line 1935 "goal_util.m"
              }
#line 1932 "goal_util.m"
            }
#line 1926 "goal_util.m"
            break;
#line 1926 "goal_util.m"
          case (MR_Integer) 4:
#line 1937 "goal_util.m"
            {
#line 1937 "goal_util.m"
              MR_Word hlds__goal_util__TypeCtorInfo_105_105 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 1937 "goal_util.m"
              MR_Word hlds__goal_util__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 1)));
#line 1937 "goal_util.m"
              MR_Word hlds__goal_util__CanFail_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 2)));
#line 1937 "goal_util.m"
              MR_Word hlds__goal_util__Cases0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 3)));
#line 1937 "goal_util.m"
              MR_Word hlds__goal_util__Cases_39;
#line 1937 "goal_util.m"
              MR_Word hlds__goal_util__GoalExpr_76;

#line 1938 "goal_util.m"
              {
#line 1938 "goal_util.m"
                hlds__goal_util__Cases_39 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_105_105, hlds__goal_util__TypeCtorInfo_105_105, (MR_Word) &hlds__goal_util_scalar_common_3[11], hlds__goal_util__Cases0_38);
              }
#line 1939 "goal_util.m"
              {
#line 1939 "goal_util.m"
                hlds__goal_util__GoalExpr_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1939 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1939 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_76, 1) = ((MR_Box) (hlds__goal_util__Var_36));
#line 1939 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_76, 2) = ((MR_Box) (hlds__goal_util__CanFail_37));
#line 1939 "goal_util.m"
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_76, 3) = ((MR_Box) (hlds__goal_util__Cases_39));
#line 1939 "goal_util.m"
              }
#line 1940 "goal_util.m"
              {
#line 1940 "goal_util.m"
                hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1940 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_76));
#line 1940 "goal_util.m"
                MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
#line 1940 "goal_util.m"
              }
#line 1937 "goal_util.m"
            }
#line 1926 "goal_util.m"
            break;
#line 1926 "goal_util.m"
          case (MR_Integer) 5:
#line 1958 "goal_util.m"
            {
#line 1958 "goal_util.m"
              MR_Word hlds__goal_util__Reason_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 1)));
#line 1958 "goal_util.m"
              MR_Word hlds__goal_util__SubGoal0_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 2)));
#line 1960 "goal_util.m"
              MR_Word hlds__goal_util__FGT_51;
#line 1960 "goal_util.m"
              MR_Word hlds__goal_util__V_50_50;

#line 1960 "goal_util.m"
              hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_49)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_49, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1960 "goal_util.m"
              if (hlds__goal_util__succeeded)
#line 1960 "goal_util.m"
                {
#line 1960 "goal_util.m"
                  hlds__goal_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_49, (MR_Integer) 1)));
#line 1960 "goal_util.m"
                  hlds__goal_util__FGT_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_49, (MR_Integer) 2)));
#line 1962 "goal_util.m"
#line 1962 "goal_util.m"
                  switch (hlds__goal_util__FGT_51) {
#line 1962 "goal_util.m"
                    default:
#line 1962 "goal_util.m"
                      hlds__goal_util__succeeded = MR_FALSE;
#line 1962 "goal_util.m"
                      break;
#line 1962 "goal_util.m"
                    case (MR_Integer) 1:
#line 1961 "goal_util.m"
                      hlds__goal_util__succeeded = MR_TRUE;
#line 1962 "goal_util.m"
                      break;
#line 1962 "goal_util.m"
                    case (MR_Integer) 2:
#line 1962 "goal_util.m"
                      hlds__goal_util__succeeded = MR_TRUE;
#line 1962 "goal_util.m"
                      break;
#line 1962 "goal_util.m"
                  }
#line 1960 "goal_util.m"
                }
#line 1966 "goal_util.m"
              if (hlds__goal_util__succeeded)
#line 1965 "goal_util.m"
                hlds__goal_util__Goal_4 = hlds__goal_util__Goal0_3;
#line 1966 "goal_util.m"
              else
#line 1967 "goal_util.m"
                {
#line 1967 "goal_util.m"
                  MR_Word hlds__goal_util__GoalExpr_81;
#line 1967 "goal_util.m"
                  MR_Word hlds__goal_util__SubGoal_82;

#line 1967 "goal_util.m"
                  {
#line 1967 "goal_util.m"
                    hlds__goal_util__SubGoal_82 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__SubGoal0_86);
                  }
#line 1968 "goal_util.m"
                  {
#line 1968 "goal_util.m"
                    hlds__goal_util__GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1968 "goal_util.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1968 "goal_util.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_81, 1) = ((MR_Box) (hlds__goal_util__Reason_49));
#line 1968 "goal_util.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_81, 2) = ((MR_Box) (hlds__goal_util__SubGoal_82));
#line 1968 "goal_util.m"
                  }
#line 1969 "goal_util.m"
                  {
#line 1969 "goal_util.m"
                    hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1969 "goal_util.m"
                    MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_81));
#line 1969 "goal_util.m"
                    MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
#line 1969 "goal_util.m"
                  }
#line 1967 "goal_util.m"
                }
#line 1958 "goal_util.m"
            }
#line 1926 "goal_util.m"
            break;
#line 1926 "goal_util.m"
          case (MR_Integer) 6:
#line 1942 "goal_util.m"
            {
#line 1942 "goal_util.m"
              MR_Word hlds__goal_util__Vars_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 1)));
#line 1942 "goal_util.m"
              MR_Word hlds__goal_util__Cond0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 2)));
#line 1942 "goal_util.m"
              MR_Word hlds__goal_util__Then0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 3)));
#line 1942 "goal_util.m"
              MR_Word hlds__goal_util__Else0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 4)));

#line 1943 "goal_util.m"
              {
#line 1943 "goal_util.m"
                hlds__goal_util__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__goal_util__GoalInfo0_6, (MR_Integer) 18);
              }
#line 1945 "goal_util.m"
              if (hlds__goal_util__succeeded)
#line 1944 "goal_util.m"
                hlds__goal_util__Goal_4 = hlds__goal_util__Else0_43;
#line 1945 "goal_util.m"
              else
#line 1946 "goal_util.m"
                {
#line 1946 "goal_util.m"
                  MR_Word hlds__goal_util__Cond_44;
#line 1946 "goal_util.m"
                  MR_Word hlds__goal_util__Then_45;
#line 1946 "goal_util.m"
                  MR_Word hlds__goal_util__Else_46;
#line 1946 "goal_util.m"
                  MR_Word hlds__goal_util__GoalExpr_77;

#line 1946 "goal_util.m"
                  {
#line 1946 "goal_util.m"
                    hlds__goal_util__Cond_44 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__Cond0_41);
                  }
#line 1947 "goal_util.m"
                  {
#line 1947 "goal_util.m"
                    hlds__goal_util__Then_45 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__Then0_42);
                  }
#line 1948 "goal_util.m"
                  {
#line 1948 "goal_util.m"
                    hlds__goal_util__Else_46 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__Else0_43);
                  }
#line 1949 "goal_util.m"
                  {
#line 1949 "goal_util.m"
                    hlds__goal_util__GoalExpr_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1949 "goal_util.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1949 "goal_util.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_77, 1) = ((MR_Box) (hlds__goal_util__Vars_40));
#line 1949 "goal_util.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_77, 2) = ((MR_Box) (hlds__goal_util__Cond_44));
#line 1949 "goal_util.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_77, 3) = ((MR_Box) (hlds__goal_util__Then_45));
#line 1949 "goal_util.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_77, 4) = ((MR_Box) (hlds__goal_util__Else_46));
#line 1949 "goal_util.m"
                  }
#line 1950 "goal_util.m"
                  {
#line 1950 "goal_util.m"
                    hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1950 "goal_util.m"
                    MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_77));
#line 1950 "goal_util.m"
                    MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
#line 1950 "goal_util.m"
                  }
#line 1946 "goal_util.m"
                }
#line 1942 "goal_util.m"
            }
#line 1926 "goal_util.m"
            break;
#line 1926 "goal_util.m"
          case (MR_Integer) 7:
#line 1972 "goal_util.m"
            {
#line 1972 "goal_util.m"
              MR_Word hlds__goal_util__ShortHand0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 1)));

#line 1982 "goal_util.m"
#line 1982 "goal_util.m"
              switch (MR_tag((MR_Word) hlds__goal_util__ShortHand0_52)) {
#line 1982 "goal_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1982 "goal_util.m"
                case (MR_Integer) 0:
#line 1989 "goal_util.m"
                  {
#line 1990 "goal_util.m"
                    {
#line 1990 "goal_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "function \140hlds.goal_util.maybe_strip_equality_pretest\'/1", (MR_String) "bi_implication");
                    }
#line 1989 "goal_util.m"
                  }
#line 1982 "goal_util.m"
                  break;
#line 1982 "goal_util.m"
                case (MR_Integer) 1:
#line 1975 "goal_util.m"
                  {
#line 1975 "goal_util.m"
                    MR_Word hlds__goal_util__TypeCtorInfo_108_108;
#line 1975 "goal_util.m"
                    MR_Word hlds__goal_util__GoalType_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_52, (MR_Integer) 0)));
#line 1975 "goal_util.m"
                    MR_Word hlds__goal_util__Outer_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_52, (MR_Integer) 1)));
#line 1975 "goal_util.m"
                    MR_Word hlds__goal_util__Inner_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_52, (MR_Integer) 2)));
#line 1975 "goal_util.m"
                    MR_Word hlds__goal_util__MaybeOutputVars_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_52, (MR_Integer) 3)));
#line 1975 "goal_util.m"
                    MR_Word hlds__goal_util__MainGoal0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_52, (MR_Integer) 4)));
#line 1975 "goal_util.m"
                    MR_Word hlds__goal_util__OrElseGoals0_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_52, (MR_Integer) 5)));
#line 1975 "goal_util.m"
                    MR_Word hlds__goal_util__OrElseInners_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_52, (MR_Integer) 6)));
#line 1975 "goal_util.m"
                    MR_Word hlds__goal_util__MainGoal_60;
#line 1975 "goal_util.m"
                    MR_Word hlds__goal_util__OrElseGoals_61;
#line 1975 "goal_util.m"
                    MR_Word hlds__goal_util__ShortHand_62;
#line 1975 "goal_util.m"
                    MR_Word hlds__goal_util__GoalExpr_88;

#line 1976 "goal_util.m"
                    {
#line 1976 "goal_util.m"
                      hlds__goal_util__MainGoal_60 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__MainGoal0_57);
                    }
#line 13455 "hlds.goal_util.c"
                    hlds__goal_util__TypeCtorInfo_108_108 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1977 "goal_util.m"
                    {
#line 1977 "goal_util.m"
                      hlds__goal_util__OrElseGoals_61 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_108_108, hlds__goal_util__TypeCtorInfo_108_108, (MR_Word) &hlds__goal_util_scalar_common_3[10], hlds__goal_util__OrElseGoals0_58);
                    }
#line 1978 "goal_util.m"
                    {
#line 1978 "goal_util.m"
                      hlds__goal_util__ShortHand_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1978 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_62, 0) = ((MR_Box) (hlds__goal_util__GoalType_53));
#line 1978 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_62, 1) = ((MR_Box) (hlds__goal_util__Outer_54));
#line 1978 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_62, 2) = ((MR_Box) (hlds__goal_util__Inner_55));
#line 1978 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_62, 3) = ((MR_Box) (hlds__goal_util__MaybeOutputVars_56));
#line 1978 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_62, 4) = ((MR_Box) (hlds__goal_util__MainGoal_60));
#line 1978 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_62, 5) = ((MR_Box) (hlds__goal_util__OrElseGoals_61));
#line 1978 "goal_util.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_62, 6) = ((MR_Box) (hlds__goal_util__OrElseInners_59));
#line 1978 "goal_util.m"
                    }
#line 1980 "goal_util.m"
                    {
#line 1980 "goal_util.m"
                      hlds__goal_util__GoalExpr_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1980 "goal_util.m"
                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1980 "goal_util.m"
                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_88, 1) = ((MR_Box) (hlds__goal_util__ShortHand_62));
#line 1980 "goal_util.m"
                    }
#line 1981 "goal_util.m"
                    {
#line 1981 "goal_util.m"
                      hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1981 "goal_util.m"
                      MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_88));
#line 1981 "goal_util.m"
                      MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
#line 1981 "goal_util.m"
                    }
#line 1975 "goal_util.m"
                  }
#line 1982 "goal_util.m"
                  break;
#line 1982 "goal_util.m"
                case (MR_Integer) 2:
#line 1983 "goal_util.m"
                  {
#line 1983 "goal_util.m"
                    MR_Word hlds__goal_util__MaybeIO_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_52, (MR_Integer) 0)));
#line 1983 "goal_util.m"
                    MR_Word hlds__goal_util__ResultVar_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_52, (MR_Integer) 1)));
#line 1983 "goal_util.m"
                    MR_Word hlds__goal_util__GoalExpr_89;
#line 1983 "goal_util.m"
                    MR_Word hlds__goal_util__SubGoal0_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_52, (MR_Integer) 2)));
#line 1983 "goal_util.m"
                    MR_Word hlds__goal_util__SubGoal_91;
#line 1983 "goal_util.m"
                    MR_Word hlds__goal_util__ShortHand_92;

#line 1984 "goal_util.m"
                    {
#line 1984 "goal_util.m"
                      hlds__goal_util__SubGoal_91 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__SubGoal0_90);
                    }
#line 1985 "goal_util.m"
                    {
#line 1985 "goal_util.m"
                      hlds__goal_util__ShortHand_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1985 "goal_util.m"
                      MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_92, 0) = ((MR_Box) (hlds__goal_util__MaybeIO_63));
#line 1985 "goal_util.m"
                      MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_92, 1) = ((MR_Box) (hlds__goal_util__ResultVar_64));
#line 1985 "goal_util.m"
                      MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_92, 2) = ((MR_Box) (hlds__goal_util__SubGoal_91));
#line 1985 "goal_util.m"
                    }
#line 1986 "goal_util.m"
                    {
#line 1986 "goal_util.m"
                      hlds__goal_util__GoalExpr_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1986 "goal_util.m"
                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1986 "goal_util.m"
                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_89, 1) = ((MR_Box) (hlds__goal_util__ShortHand_92));
#line 1986 "goal_util.m"
                    }
#line 1987 "goal_util.m"
                    {
#line 1987 "goal_util.m"
                      hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1987 "goal_util.m"
                      MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_89));
#line 1987 "goal_util.m"
                      MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
#line 1987 "goal_util.m"
                    }
#line 1983 "goal_util.m"
                  }
#line 1982 "goal_util.m"
                  break;
#line 1982 "goal_util.m"
              }
#line 1972 "goal_util.m"
            }
#line 1926 "goal_util.m"
            break;
#line 1926 "goal_util.m"
        }
#line 1926 "goal_util.m"
        break;
#line 1926 "goal_util.m"
    }
#line 1915 "goal_util.m"
    return hlds__goal_util__Goal_4;
#line 1915 "goal_util.m"
  }
#line 404 "goal_util.m"
}

#line 399 "goal_util.m"
MR_bool MR_CALL 
hlds__goal_util__foreign_proc_uses_variable_2_p_0(
#line 399 "goal_util.m"
  MR_Word hlds__goal_util__Impl_3,
#line 399 "goal_util.m"
  MR_String hlds__goal_util__VarName_4)
#line 399 "goal_util.m"
{
#line 1909 "goal_util.m"
  {
#line 1909 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1909 "goal_util.m"
    MR_String hlds__goal_util__ForeignBody_5 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__goal_util__Impl_3, (MR_Integer) 0)));
#line 1910 "goal_util.m"
    MR_Word hlds__goal_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Impl_3, (MR_Integer) 1)));
#line 1911 "goal_util.m"
    MR_Integer hlds__goal_util__V_7_7;

#line 1911 "goal_util.m"
    {
#line 1911 "goal_util.m"
      hlds__goal_util__succeeded = mercury__string__sub_string_search_3_p_0(hlds__goal_util__ForeignBody_5, hlds__goal_util__VarName_4, &hlds__goal_util__V_7_7);
    }
#line 1909 "goal_util.m"
    return hlds__goal_util__succeeded;
#line 1909 "goal_util.m"
  }
#line 399 "goal_util.m"
}

#line 394 "goal_util.m"
void MR_CALL 
hlds__goal_util__generate_cast_with_insts_7_p_0(
#line 394 "goal_util.m"
  MR_Word hlds__goal_util__CastType_8,
#line 394 "goal_util.m"
  MR_Word hlds__goal_util__InArg_9,
#line 394 "goal_util.m"
  MR_Word hlds__goal_util__OutArg_10,
#line 394 "goal_util.m"
  MR_Word hlds__goal_util__InInst_11,
#line 394 "goal_util.m"
  MR_Word hlds__goal_util__OutInst_12,
#line 394 "goal_util.m"
  MR_Word hlds__goal_util__Context_13,
#line 394 "goal_util.m"
  MR_Word * hlds__goal_util__Goal_14)
#line 394 "goal_util.m"
{
#line 1845 "goal_util.m"
  {
#line 1845 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1845 "goal_util.m"
    MR_Word hlds__goal_util__NonLocals_15;
#line 1845 "goal_util.m"
    MR_Word hlds__goal_util__InstMapDelta_16;
#line 1845 "goal_util.m"
    MR_Word hlds__goal_util__GoalInfo_17;
#line 1845 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_18;
#line 1845 "goal_util.m"
    MR_Word hlds__goal_util__V_19_19;
#line 1845 "goal_util.m"
    MR_Word hlds__goal_util__V_20_20;
#line 1845 "goal_util.m"
    MR_Word hlds__goal_util__V_22_22;
#line 1845 "goal_util.m"
    MR_Word hlds__goal_util__V_23_23;
#line 1845 "goal_util.m"
    MR_Word hlds__goal_util__V_27_27;
#line 1845 "goal_util.m"
    MR_Word hlds__goal_util__V_31_31;
#line 1845 "goal_util.m"
    MR_Word hlds__goal_util__V_32_32;
#line 1845 "goal_util.m"
    MR_Word hlds__goal_util__V_33_33;
#line 1845 "goal_util.m"
    MR_Word hlds__goal_util__V_34_34;

#line 1846 "goal_util.m"
    {
#line 1846 "goal_util.m"
      hlds__goal_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1846 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_20_20, 0) = ((MR_Box) (hlds__goal_util__OutArg_10));
#line 1846 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1846 "goal_util.m"
    }
#line 1846 "goal_util.m"
    {
#line 1846 "goal_util.m"
      hlds__goal_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1846 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_19_19, 0) = ((MR_Box) (hlds__goal_util__InArg_9));
#line 1846 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_19_19, 1) = ((MR_Box) (hlds__goal_util__V_20_20));
#line 1846 "goal_util.m"
    }
#line 1846 "goal_util.m"
    {
#line 1846 "goal_util.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__V_19_19, &hlds__goal_util__NonLocals_15);
    }
#line 1847 "goal_util.m"
    {
#line 1847 "goal_util.m"
      hlds__goal_util__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1847 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_23_23, 0) = ((MR_Box) (hlds__goal_util__OutArg_10));
#line 1847 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_23_23, 1) = ((MR_Box) (hlds__goal_util__OutInst_12));
#line 1847 "goal_util.m"
    }
#line 1847 "goal_util.m"
    {
#line 1847 "goal_util.m"
      hlds__goal_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1847 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_22_22, 0) = ((MR_Box) (hlds__goal_util__V_23_23));
#line 1847 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1847 "goal_util.m"
    }
#line 1847 "goal_util.m"
    {
#line 1847 "goal_util.m"
      hlds__goal_util__InstMapDelta_16 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(hlds__goal_util__V_22_22);
    }
#line 1848 "goal_util.m"
    {
#line 1848 "goal_util.m"
      hlds__hlds_goal__goal_info_init_6_p_0(hlds__goal_util__NonLocals_15, hlds__goal_util__InstMapDelta_16, (MR_Integer) 0, (MR_Integer) 0, hlds__goal_util__Context_13, &hlds__goal_util__GoalInfo_17);
    }
#line 1850 "goal_util.m"
    {
#line 1850 "goal_util.m"
      hlds__goal_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1850 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__V_27_27, 0) = ((MR_Box) (hlds__goal_util__CastType_8));
#line 1850 "goal_util.m"
    }
#line 1851 "goal_util.m"
    {
#line 1851 "goal_util.m"
      hlds__goal_util__V_32_32 = parse_tree__prog_mode__in_mode_1_f_0(hlds__goal_util__InInst_11);
    }
#line 1851 "goal_util.m"
    {
#line 1851 "goal_util.m"
      hlds__goal_util__V_34_34 = parse_tree__prog_mode__out_mode_1_f_0(hlds__goal_util__OutInst_12);
    }
#line 1851 "goal_util.m"
    {
#line 1851 "goal_util.m"
      hlds__goal_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1851 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_33_33, 0) = ((MR_Box) (hlds__goal_util__V_34_34));
#line 1851 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1851 "goal_util.m"
    }
#line 1851 "goal_util.m"
    {
#line 1851 "goal_util.m"
      hlds__goal_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1851 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_31_31, 0) = ((MR_Box) (hlds__goal_util__V_32_32));
#line 1851 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_31_31, 1) = ((MR_Box) (hlds__goal_util__V_33_33));
#line 1851 "goal_util.m"
    }
#line 1850 "goal_util.m"
    {
#line 1850 "goal_util.m"
      hlds__goal_util__GoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1850 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1850 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_18, 1) = ((MR_Box) (hlds__goal_util__V_27_27));
#line 1850 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_18, 2) = ((MR_Box) (hlds__goal_util__V_19_19));
#line 1850 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_18, 3) = ((MR_Box) (hlds__goal_util__V_31_31));
#line 1850 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_18, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1850 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_18, 5) = ((MR_Box) ((MR_Integer) 0));
#line 1850 "goal_util.m"
    }
#line 1852 "goal_util.m"
    {
#line 1852 "goal_util.m"
      MR_Word base;
#line 1852 "goal_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1852 "goal_util.m"
      *hlds__goal_util__Goal_14 = base;
#line 1852 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_18));
#line 1852 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_17));
#line 1852 "goal_util.m"
    }
#line 1845 "goal_util.m"
  }
#line 394 "goal_util.m"
}

#line 387 "goal_util.m"
void MR_CALL 
hlds__goal_util__generate_cast_5_p_0(
#line 387 "goal_util.m"
  MR_Word hlds__goal_util__CastType_6,
#line 387 "goal_util.m"
  MR_Word hlds__goal_util__InArg_7,
#line 387 "goal_util.m"
  MR_Word hlds__goal_util__OutArg_8,
#line 387 "goal_util.m"
  MR_Word hlds__goal_util__Context_9,
#line 387 "goal_util.m"
  MR_Word * hlds__goal_util__Goal_10)
#line 387 "goal_util.m"
{
#line 1839 "goal_util.m"
  {
#line 1839 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1839 "goal_util.m"
    MR_Word hlds__goal_util__Ground_11;

#line 1840 "goal_util.m"
    {
#line 1840 "goal_util.m"
      hlds__goal_util__Ground_11 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 1841 "goal_util.m"
    {
#line 1841 "goal_util.m"
      hlds__goal_util__generate_cast_with_insts_7_p_0(hlds__goal_util__CastType_6, hlds__goal_util__InArg_7, hlds__goal_util__OutArg_8, hlds__goal_util__Ground_11, hlds__goal_util__Ground_11, hlds__goal_util__Context_9, hlds__goal_util__Goal_10);
    }
#line 1839 "goal_util.m"
  }
#line 387 "goal_util.m"
}

#line 1836 "goal_util.m"
static void MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_4(
#line 1836 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1836 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1836 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 1836 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 1836 "goal_util.m"
{
#line 1836 "goal_util.m"
  {
#line 1836 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 1836 "goal_util.m"
    MR_Word hlds__goal_util__conv2_HeadVar__3_3;

#line 1836 "goal_util.m"
    {
#line 1836 "goal_util.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv2_HeadVar__3_3);
    }
#line 1836 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv2_HeadVar__3_3));
#line 1836 "goal_util.m"
  }
#line 1836 "goal_util.m"
}

#line 1832 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_3(
#line 1832 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg)
#line 1832 "goal_util.m"
{
#line 1832 "goal_util.m"
  {
#line 1832 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1832 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;

#line 1832 "goal_util.m"
    {
#line 1832 "goal_util.m"
      hlds__goal_util__succeeded = hlds__goal_util__IntroducedFrom__pred__generate_foreign_proc__1832__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 4))));
    }
#line 1832 "goal_util.m"
    return hlds__goal_util__succeeded;
#line 1832 "goal_util.m"
  }
#line 1832 "goal_util.m"
}

#line 1816 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_2(
#line 1816 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1816 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1)
#line 1816 "goal_util.m"
{
#line 1816 "goal_util.m"
  {
#line 1816 "goal_util.m"
    MR_Box hlds__goal_util__wrapper_arg_2;
#line 1816 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 1816 "goal_util.m"
    MR_Word hlds__goal_util__conv1_HeadVar__2_2;

#line 1816 "goal_util.m"
    {
#line 1816 "goal_util.m"
      hlds__goal_util__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    }
#line 1816 "goal_util.m"
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv1_HeadVar__2_2));
#line 1816 "goal_util.m"
    return hlds__goal_util__wrapper_arg_2;
#line 1816 "goal_util.m"
  }
#line 1816 "goal_util.m"
}

#line 1815 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_1(
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
    MR_Word hlds__goal_util__conv0_HeadVar__2_2;

#line 1815 "goal_util.m"
    {
#line 1815 "goal_util.m"
      hlds__goal_util__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    }
#line 1815 "goal_util.m"
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__2_2));
#line 1815 "goal_util.m"
    return hlds__goal_util__wrapper_arg_2;
#line 1815 "goal_util.m"
  }
#line 1815 "goal_util.m"
}

#line 377 "goal_util.m"
void MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0(
#line 377 "goal_util.m"
  MR_Word hlds__goal_util__ModuleName_17,
#line 377 "goal_util.m"
  MR_String hlds__goal_util__ProcName_18,
#line 377 "goal_util.m"
  MR_Word hlds__goal_util__PredOrFunc_19,
#line 377 "goal_util.m"
  MR_Word hlds__goal_util__ModeNo_20,
#line 377 "goal_util.m"
  MR_Word hlds__goal_util__Detism_21,
#line 377 "goal_util.m"
  MR_Word hlds__goal_util__Purity_22,
#line 377 "goal_util.m"
  MR_Word hlds__goal_util__Attributes_23,
#line 377 "goal_util.m"
  MR_Word hlds__goal_util__Args_24,
#line 377 "goal_util.m"
  MR_Word hlds__goal_util__ExtraArgs_25,
#line 377 "goal_util.m"
  MR_Word hlds__goal_util__MaybeTraceRuntimeCond_26,
#line 377 "goal_util.m"
  MR_String hlds__goal_util__Code_27,
#line 377 "goal_util.m"
  MR_Word hlds__goal_util__Features_28,
#line 377 "goal_util.m"
  MR_Word hlds__goal_util__InstMapDelta0_29,
#line 377 "goal_util.m"
  MR_Word hlds__goal_util__ModuleInfo_30,
#line 377 "goal_util.m"
  MR_Word hlds__goal_util__Context_31,
#line 377 "goal_util.m"
  MR_Word * hlds__goal_util__Goal_32)
#line 377 "goal_util.m"
{
#line 1808 "goal_util.m"
  {
#line 1808 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1808 "goal_util.m"
    MR_Word hlds__goal_util__TypeCtorInfo_56_56 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 1808 "goal_util.m"
    MR_Word hlds__goal_util__TypeInfo_57_57;
#line 1808 "goal_util.m"
    MR_Integer hlds__goal_util__Arity_33;
#line 1808 "goal_util.m"
    MR_Word hlds__goal_util__PredId_34;
#line 1808 "goal_util.m"
    MR_Integer hlds__goal_util__ProcId_35;
#line 1808 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_36;
#line 1808 "goal_util.m"
    MR_Word hlds__goal_util__ArgVars_37;
#line 1808 "goal_util.m"
    MR_Word hlds__goal_util__ExtraArgVars_38;
#line 1808 "goal_util.m"
    MR_Word hlds__goal_util__Vars_39;
#line 1808 "goal_util.m"
    MR_Word hlds__goal_util__NonLocals_40;
#line 1808 "goal_util.m"
    MR_Word hlds__goal_util__NumSolns_42;
#line 1808 "goal_util.m"
    MR_Word hlds__goal_util__InstMapDelta_43;
#line 1808 "goal_util.m"
    MR_Word hlds__goal_util__PredInfo_44;
#line 1808 "goal_util.m"
    MR_Word hlds__goal_util__PredPurity_45;
#line 1808 "goal_util.m"
    MR_Word hlds__goal_util__GoalInfo0_46;
#line 1808 "goal_util.m"
    MR_Word hlds__goal_util__GoalInfo_47;
#line 1808 "goal_util.m"
    MR_Word hlds__goal_util__V_48_48;
#line 1808 "goal_util.m"
    MR_Word hlds__goal_util__V_52_52;
#line 1819 "goal_util.m"
    MR_Word hlds__goal_util___CanFail_41;
#line 1836 "goal_util.m"
    MR_Box hlds__goal_util__conv3_GoalInfo_47;

#line 1809 "goal_util.m"
    {
#line 1809 "goal_util.m"
      mercury__list__length_2_p_0(hlds__goal_util__TypeCtorInfo_56_56, hlds__goal_util__Args_24, &hlds__goal_util__Arity_33);
    }
#line 1810 "goal_util.m"
    {
#line 1810 "goal_util.m"
      hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(hlds__goal_util__ModuleInfo_30, hlds__goal_util__ModuleName_17, hlds__goal_util__ProcName_18, hlds__goal_util__PredOrFunc_19, hlds__goal_util__Arity_33, hlds__goal_util__ModeNo_20, &hlds__goal_util__PredId_34, &hlds__goal_util__ProcId_35);
    }
#line 1814 "goal_util.m"
    {
#line 1814 "goal_util.m"
      hlds__goal_util__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1814 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_48_48, 0) = ((MR_Box) (hlds__goal_util__Code_27));
#line 1814 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1814 "goal_util.m"
    }
#line 1813 "goal_util.m"
    {
#line 1813 "goal_util.m"
      hlds__goal_util__GoalExpr_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1813 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1813 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 1) = ((MR_Box) (hlds__goal_util__Attributes_23));
#line 1813 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 2) = ((MR_Box) (hlds__goal_util__PredId_34));
#line 1813 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 3) = ((MR_Box) (hlds__goal_util__ProcId_35));
#line 1813 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 4) = ((MR_Box) (hlds__goal_util__Args_24));
#line 1813 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 5) = ((MR_Box) (hlds__goal_util__ExtraArgs_25));
#line 1813 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 6) = ((MR_Box) (hlds__goal_util__MaybeTraceRuntimeCond_26));
#line 1813 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 7) = ((MR_Box) (hlds__goal_util__V_48_48));
#line 1813 "goal_util.m"
    }
#line 14078 "hlds.goal_util.c"
    hlds__goal_util__TypeInfo_57_57 = (MR_Word) &hlds__goal_util_scalar_common_1[0];
#line 1815 "goal_util.m"
    {
#line 1815 "goal_util.m"
      hlds__goal_util__ArgVars_37 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_56_56, hlds__goal_util__TypeInfo_57_57, (MR_Word) &hlds__goal_util_scalar_common_3[5], hlds__goal_util__Args_24);
    }
#line 1816 "goal_util.m"
    {
#line 1816 "goal_util.m"
      hlds__goal_util__ExtraArgVars_38 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_56_56, hlds__goal_util__TypeInfo_57_57, (MR_Word) &hlds__goal_util_scalar_common_3[6], hlds__goal_util__ExtraArgs_25);
    }
#line 1817 "goal_util.m"
    {
#line 1817 "goal_util.m"
      hlds__goal_util__Vars_39 = mercury__list__f_43_43_2_f_0(hlds__goal_util__TypeInfo_57_57, hlds__goal_util__ArgVars_37, hlds__goal_util__ExtraArgVars_38);
    }
#line 1818 "goal_util.m"
    {
#line 1818 "goal_util.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Vars_39, &hlds__goal_util__NonLocals_40);
    }
#line 1819 "goal_util.m"
    {
#line 1819 "goal_util.m"
      parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_util__Detism_21, &hlds__goal_util___CanFail_41, &hlds__goal_util__NumSolns_42);
    }
#line 1823 "goal_util.m"
#line 1823 "goal_util.m"
    switch (hlds__goal_util__NumSolns_42) {
#line 1823 "goal_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1823 "goal_util.m"
      case (MR_Integer) 3:
#line 1823 "goal_util.m"
      case (MR_Integer) 2:
#line 1823 "goal_util.m"
      case (MR_Integer) 1:
#line 1828 "goal_util.m"
        hlds__goal_util__InstMapDelta_43 = hlds__goal_util__InstMapDelta0_29;
#line 1823 "goal_util.m"
        break;
#line 1823 "goal_util.m"
      case (MR_Integer) 0:
#line 1822 "goal_util.m"
        {
#line 1822 "goal_util.m"
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(&hlds__goal_util__InstMapDelta_43);
        }
#line 1823 "goal_util.m"
        break;
#line 1823 "goal_util.m"
    }
#line 1830 "goal_util.m"
    {
#line 1830 "goal_util.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__goal_util__ModuleInfo_30, hlds__goal_util__PredId_34, &hlds__goal_util__PredInfo_44);
    }
#line 1831 "goal_util.m"
    {
#line 1831 "goal_util.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(hlds__goal_util__PredInfo_44, &hlds__goal_util__PredPurity_45);
    }
#line 1832 "goal_util.m"
    {
#line 1832 "goal_util.m"
      hlds__goal_util__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1832 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_52_52, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[4]));
#line 1832 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_52_52, 1) = ((MR_Box) (hlds__goal_util__generate_foreign_proc_16_p_0_3));
#line 1832 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1832 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_52_52, 3) = ((MR_Box) (hlds__goal_util__Purity_22));
#line 1832 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_52_52, 4) = ((MR_Box) (hlds__goal_util__PredPurity_45));
#line 1832 "goal_util.m"
    }
#line 1832 "goal_util.m"
    {
#line 1832 "goal_util.m"
      mercury__require__expect_3_p_0(hlds__goal_util__V_52_52, (MR_String) "hlds.goal_util", (MR_String) "generate_simple_call: purity disagreement");
    }
#line 1834 "goal_util.m"
    {
#line 1834 "goal_util.m"
      hlds__hlds_goal__goal_info_init_6_p_0(hlds__goal_util__NonLocals_40, hlds__goal_util__InstMapDelta_43, hlds__goal_util__Detism_21, hlds__goal_util__Purity_22, hlds__goal_util__Context_31, &hlds__goal_util__GoalInfo0_46);
    }
#line 1836 "goal_util.m"
    {
#line 1836 "goal_util.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_3[7], hlds__goal_util__Features_28, ((MR_Box) (hlds__goal_util__GoalInfo0_46)), &hlds__goal_util__conv3_GoalInfo_47);
    }
#line 1836 "goal_util.m"
    hlds__goal_util__GoalInfo_47 = ((MR_Word) hlds__goal_util__conv3_GoalInfo_47);
#line 1837 "goal_util.m"
    {
#line 1837 "goal_util.m"
      MR_Word base;
#line 1837 "goal_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1837 "goal_util.m"
      *hlds__goal_util__Goal_32 = base;
#line 1837 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_36));
#line 1837 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_47));
#line 1837 "goal_util.m"
    }
#line 1808 "goal_util.m"
  }
#line 377 "goal_util.m"
}

#line 1803 "goal_util.m"
static void MR_CALL 
hlds__goal_util__generate_simple_call_12_p_0_2(
#line 1803 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1803 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1803 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 1803 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 1803 "goal_util.m"
{
#line 1803 "goal_util.m"
  {
#line 1803 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 1803 "goal_util.m"
    MR_Word hlds__goal_util__conv0_HeadVar__3_3;

#line 1803 "goal_util.m"
    {
#line 1803 "goal_util.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_HeadVar__3_3);
    }
#line 1803 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__3_3));
#line 1803 "goal_util.m"
  }
#line 1803 "goal_util.m"
}

#line 1799 "goal_util.m"
static MR_bool MR_CALL 
hlds__goal_util__generate_simple_call_12_p_0_1(
#line 1799 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg)
#line 1799 "goal_util.m"
{
#line 1799 "goal_util.m"
  {
#line 1799 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1799 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;

#line 1799 "goal_util.m"
    {
#line 1799 "goal_util.m"
      hlds__goal_util__succeeded = hlds__goal_util__IntroducedFrom__pred__generate_simple_call__1799__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 4))));
    }
#line 1799 "goal_util.m"
    return hlds__goal_util__succeeded;
#line 1799 "goal_util.m"
  }
#line 1799 "goal_util.m"
}

#line 360 "goal_util.m"
void MR_CALL 
hlds__goal_util__generate_simple_call_12_p_0(
#line 360 "goal_util.m"
  MR_Word hlds__goal_util__ModuleName_13,
#line 360 "goal_util.m"
  MR_String hlds__goal_util__ProcName_14,
#line 360 "goal_util.m"
  MR_Word hlds__goal_util__PredOrFunc_15,
#line 360 "goal_util.m"
  MR_Word hlds__goal_util__ModeNo_16,
#line 360 "goal_util.m"
  MR_Word hlds__goal_util__Detism_17,
#line 360 "goal_util.m"
  MR_Word hlds__goal_util__Purity_18,
#line 360 "goal_util.m"
  MR_Word hlds__goal_util__Args_19,
#line 360 "goal_util.m"
  MR_Word hlds__goal_util__Features_20,
#line 360 "goal_util.m"
  MR_Word hlds__goal_util__InstMapDelta0_21,
#line 360 "goal_util.m"
  MR_Word hlds__goal_util__ModuleInfo_22,
#line 360 "goal_util.m"
  MR_Word hlds__goal_util__Context_23,
#line 360 "goal_util.m"
  MR_Word * hlds__goal_util__Goal_24)
#line 360 "goal_util.m"
{
#line 1772 "goal_util.m"
  {
#line 1772 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1772 "goal_util.m"
    MR_Integer hlds__goal_util__Arity_25;
#line 1772 "goal_util.m"
    MR_Word hlds__goal_util__PredId_26;
#line 1772 "goal_util.m"
    MR_Integer hlds__goal_util__ProcId_27;
#line 1772 "goal_util.m"
    MR_Word hlds__goal_util__InvalidPredId_28;
#line 1772 "goal_util.m"
    MR_Word hlds__goal_util__BuiltinState_29;
#line 1772 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_30;
#line 1772 "goal_util.m"
    MR_Word hlds__goal_util__NonLocals_31;
#line 1772 "goal_util.m"
    MR_Word hlds__goal_util__NumSolns_33;
#line 1772 "goal_util.m"
    MR_Word hlds__goal_util__InstMapDelta_34;
#line 1772 "goal_util.m"
    MR_Word hlds__goal_util__PredInfo_35;
#line 1772 "goal_util.m"
    MR_Word hlds__goal_util__PredPurity_36;
#line 1772 "goal_util.m"
    MR_Word hlds__goal_util__GoalInfo0_37;
#line 1772 "goal_util.m"
    MR_Word hlds__goal_util__GoalInfo_38;
#line 1772 "goal_util.m"
    MR_Word hlds__goal_util__V_40_40;
#line 1772 "goal_util.m"
    MR_Word hlds__goal_util__V_41_41;
#line 1786 "goal_util.m"
    MR_Word hlds__goal_util___CanFail_32;
#line 1803 "goal_util.m"
    MR_Box hlds__goal_util__conv1_GoalInfo_38;

#line 1773 "goal_util.m"
    {
#line 1773 "goal_util.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__goal_util_scalar_common_1[0], hlds__goal_util__Args_19, &hlds__goal_util__Arity_25);
    }
#line 1774 "goal_util.m"
    {
#line 1774 "goal_util.m"
      hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(hlds__goal_util__ModuleInfo_22, hlds__goal_util__ModuleName_13, hlds__goal_util__ProcName_14, hlds__goal_util__PredOrFunc_15, hlds__goal_util__Arity_25, hlds__goal_util__ModeNo_16, &hlds__goal_util__PredId_26, &hlds__goal_util__ProcId_27);
    }
#line 1780 "goal_util.m"
    {
#line 1780 "goal_util.m"
      hlds__goal_util__InvalidPredId_28 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
#line 1781 "goal_util.m"
    {
#line 1781 "goal_util.m"
      hlds__goal_util__BuiltinState_29 = hlds__hlds_pred__builtin_state_4_f_0(hlds__goal_util__ModuleInfo_22, hlds__goal_util__InvalidPredId_28, hlds__goal_util__PredId_26, hlds__goal_util__ProcId_27);
    }
#line 1784 "goal_util.m"
    {
#line 1784 "goal_util.m"
      hlds__goal_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1784 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_40_40, 0) = ((MR_Box) (hlds__goal_util__ModuleName_13));
#line 1784 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_40_40, 1) = ((MR_Box) (hlds__goal_util__ProcName_14));
#line 1784 "goal_util.m"
    }
#line 1783 "goal_util.m"
    {
#line 1783 "goal_util.m"
      hlds__goal_util__GoalExpr_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1783 "goal_util.m"
      MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_30, 0) = ((MR_Box) (hlds__goal_util__PredId_26));
#line 1783 "goal_util.m"
      MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_30, 1) = ((MR_Box) (hlds__goal_util__ProcId_27));
#line 1783 "goal_util.m"
      MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_30, 2) = ((MR_Box) (hlds__goal_util__Args_19));
#line 1783 "goal_util.m"
      MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_30, 3) = ((MR_Box) (hlds__goal_util__BuiltinState_29));
#line 1783 "goal_util.m"
      MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_30, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1783 "goal_util.m"
      MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_30, 5) = ((MR_Box) (hlds__goal_util__V_40_40));
#line 1783 "goal_util.m"
    }
#line 1785 "goal_util.m"
    {
#line 1785 "goal_util.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Args_19, &hlds__goal_util__NonLocals_31);
    }
#line 1786 "goal_util.m"
    {
#line 1786 "goal_util.m"
      parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_util__Detism_17, &hlds__goal_util___CanFail_32, &hlds__goal_util__NumSolns_33);
    }
#line 1790 "goal_util.m"
#line 1790 "goal_util.m"
    switch (hlds__goal_util__NumSolns_33) {
#line 1790 "goal_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1790 "goal_util.m"
      case (MR_Integer) 3:
#line 1790 "goal_util.m"
      case (MR_Integer) 2:
#line 1790 "goal_util.m"
      case (MR_Integer) 1:
#line 1795 "goal_util.m"
        hlds__goal_util__InstMapDelta_34 = hlds__goal_util__InstMapDelta0_21;
#line 1790 "goal_util.m"
        break;
#line 1790 "goal_util.m"
      case (MR_Integer) 0:
#line 1789 "goal_util.m"
        {
#line 1789 "goal_util.m"
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(&hlds__goal_util__InstMapDelta_34);
        }
#line 1790 "goal_util.m"
        break;
#line 1790 "goal_util.m"
    }
#line 1797 "goal_util.m"
    {
#line 1797 "goal_util.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__goal_util__ModuleInfo_22, hlds__goal_util__PredId_26, &hlds__goal_util__PredInfo_35);
    }
#line 1798 "goal_util.m"
    {
#line 1798 "goal_util.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(hlds__goal_util__PredInfo_35, &hlds__goal_util__PredPurity_36);
    }
#line 1799 "goal_util.m"
    {
#line 1799 "goal_util.m"
      hlds__goal_util__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1799 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_41_41, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[4]));
#line 1799 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_41_41, 1) = ((MR_Box) (hlds__goal_util__generate_simple_call_12_p_0_1));
#line 1799 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1799 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_41_41, 3) = ((MR_Box) (hlds__goal_util__Purity_18));
#line 1799 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_41_41, 4) = ((MR_Box) (hlds__goal_util__PredPurity_36));
#line 1799 "goal_util.m"
    }
#line 1799 "goal_util.m"
    {
#line 1799 "goal_util.m"
      mercury__require__expect_3_p_0(hlds__goal_util__V_41_41, (MR_String) "hlds.goal_util", (MR_String) "generate_simple_call: purity disagreement");
    }
#line 1801 "goal_util.m"
    {
#line 1801 "goal_util.m"
      hlds__hlds_goal__goal_info_init_6_p_0(hlds__goal_util__NonLocals_31, hlds__goal_util__InstMapDelta_34, hlds__goal_util__Detism_17, hlds__goal_util__Purity_18, hlds__goal_util__Context_23, &hlds__goal_util__GoalInfo0_37);
    }
#line 1803 "goal_util.m"
    {
#line 1803 "goal_util.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_3[4], hlds__goal_util__Features_20, ((MR_Box) (hlds__goal_util__GoalInfo0_37)), &hlds__goal_util__conv1_GoalInfo_38);
    }
#line 1803 "goal_util.m"
    hlds__goal_util__GoalInfo_38 = ((MR_Word) hlds__goal_util__conv1_GoalInfo_38);
#line 1804 "goal_util.m"
    {
#line 1804 "goal_util.m"
      MR_Word base;
#line 1804 "goal_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1804 "goal_util.m"
      *hlds__goal_util__Goal_24 = base;
#line 1804 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_30));
#line 1804 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_38));
#line 1804 "goal_util.m"
    }
#line 1772 "goal_util.m"
  }
#line 360 "goal_util.m"
}

#line 345 "goal_util.m"
void MR_CALL 
hlds__goal_util__reordering_maintains_termination_6_p_0(
#line 345 "goal_util.m"
  MR_Word hlds__goal_util__FullyStrict_7,
#line 345 "goal_util.m"
  MR_Word hlds__goal_util__EarlierGoal_8,
#line 345 "goal_util.m"
  MR_Word hlds__goal_util__LaterGoal_9,
#line 345 "goal_util.m"
  MR_Word * hlds__goal_util__MaintainsTermination_10,
#line 345 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_24,
#line 345 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_ModuleInfo_25)
#line 345 "goal_util.m"
{
#line 1711 "goal_util.m"
  {
#line 1711 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1711 "goal_util.m"
    MR_Word hlds__goal_util__EarlierGoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_8, (MR_Integer) 1)));
#line 1711 "goal_util.m"
    MR_Word hlds__goal_util__LaterGoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_9, (MR_Integer) 1)));
#line 1711 "goal_util.m"
    MR_Word hlds__goal_util__EarlierDetism_16;
#line 1711 "goal_util.m"
    MR_Word hlds__goal_util__EarlierCanFail_17;
#line 1711 "goal_util.m"
    MR_Word hlds__goal_util__LaterDetism_19;
#line 1711 "goal_util.m"
    MR_Word hlds__goal_util__LaterCanFail_20;
#line 1711 "goal_util.m"
    MR_Word hlds__goal_util__EarlierCanLoopOrThrow_22;
#line 1711 "goal_util.m"
    MR_Word hlds__goal_util__STATE_VARIABLE_ModuleInfo_26_26;
#line 1712 "goal_util.m"
    MR_Word hlds__goal_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_8, (MR_Integer) 0)));
#line 1713 "goal_util.m"
    MR_Word hlds__goal_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_9, (MR_Integer) 0)));
#line 1716 "goal_util.m"
    MR_Word hlds__goal_util__V_18_18;
#line 1718 "goal_util.m"
    MR_Word hlds__goal_util__V_21_21;

#line 1715 "goal_util.m"
    {
#line 1715 "goal_util.m"
      hlds__goal_util__EarlierDetism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_util__EarlierGoalInfo_13);
    }
#line 1716 "goal_util.m"
    {
#line 1716 "goal_util.m"
      parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_util__EarlierDetism_16, &hlds__goal_util__EarlierCanFail_17, &hlds__goal_util__V_18_18);
    }
#line 1717 "goal_util.m"
    {
#line 1717 "goal_util.m"
      hlds__goal_util__LaterDetism_19 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_util__LaterGoalInfo_15);
    }
#line 1718 "goal_util.m"
    {
#line 1718 "goal_util.m"
      parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_util__LaterDetism_19, &hlds__goal_util__LaterCanFail_20, &hlds__goal_util__V_21_21);
    }
#line 1722 "goal_util.m"
    {
#line 1722 "goal_util.m"
      hlds__goal_form__goal_can_loop_or_throw_4_p_0(hlds__goal_util__EarlierGoal_8, &hlds__goal_util__EarlierCanLoopOrThrow_22, hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_24, &hlds__goal_util__STATE_VARIABLE_ModuleInfo_26_26);
    }
#line 1724 "goal_util.m"
    hlds__goal_util__succeeded = (hlds__goal_util__FullyStrict_7 == (MR_Integer) 1);
#line 1724 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 1724 "goal_util.m"
      {
#line 1725 "goal_util.m"
        hlds__goal_util__succeeded = (hlds__goal_util__EarlierCanLoopOrThrow_22 == (MR_Integer) 0);
#line 1724 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1726 "goal_util.m"
          hlds__goal_util__succeeded = (hlds__goal_util__LaterCanFail_20 == (MR_Integer) 0);
#line 1724 "goal_util.m"
      }
#line 1729 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 1728 "goal_util.m"
      {
#line 1728 "goal_util.m"
        *hlds__goal_util__MaintainsTermination_10 = (MR_Integer) 0;
#line 1728 "goal_util.m"
        *hlds__goal_util__STATE_VARIABLE_ModuleInfo_25 = hlds__goal_util__STATE_VARIABLE_ModuleInfo_26_26;
#line 1728 "goal_util.m"
      }
#line 1729 "goal_util.m"
    else
#line 1734 "goal_util.m"
      {
#line 1734 "goal_util.m"
        MR_Word hlds__goal_util__LaterCanLoopOrThrow_23;

#line 1733 "goal_util.m"
        {
#line 1733 "goal_util.m"
          hlds__goal_form__goal_can_loop_or_throw_4_p_0(hlds__goal_util__LaterGoal_9, &hlds__goal_util__LaterCanLoopOrThrow_23, hlds__goal_util__STATE_VARIABLE_ModuleInfo_26_26, hlds__goal_util__STATE_VARIABLE_ModuleInfo_25);
        }
#line 1736 "goal_util.m"
        hlds__goal_util__succeeded = (hlds__goal_util__EarlierCanFail_17 == (MR_Integer) 0);
#line 1736 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1737 "goal_util.m"
          hlds__goal_util__succeeded = (hlds__goal_util__LaterCanLoopOrThrow_23 == (MR_Integer) 0);
#line 1740 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1739 "goal_util.m"
          *hlds__goal_util__MaintainsTermination_10 = (MR_Integer) 0;
#line 1740 "goal_util.m"
        else
#line 1741 "goal_util.m"
          *hlds__goal_util__MaintainsTermination_10 = (MR_Integer) 1;
#line 1734 "goal_util.m"
      }
#line 1711 "goal_util.m"
  }
#line 345 "goal_util.m"
}

#line 331 "goal_util.m"
MR_bool MR_CALL 
hlds__goal_util__reordering_maintains_termination_old_4_p_0(
#line 331 "goal_util.m"
  MR_Word hlds__goal_util__ModuleInfo_5,
#line 331 "goal_util.m"
  MR_Word hlds__goal_util__FullyStrict_6,
#line 331 "goal_util.m"
  MR_Word hlds__goal_util__EarlierGoal_7,
#line 331 "goal_util.m"
  MR_Word hlds__goal_util__LaterGoal_8)
#line 331 "goal_util.m"
{
#line 1682 "goal_util.m"
  {
#line 1682 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1682 "goal_util.m"
    MR_Word hlds__goal_util__EarlierGoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_7, (MR_Integer) 1)));
#line 1682 "goal_util.m"
    MR_Word hlds__goal_util__LaterGoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_8, (MR_Integer) 1)));
#line 1682 "goal_util.m"
    MR_Word hlds__goal_util__EarlierDetism_13;
#line 1682 "goal_util.m"
    MR_Word hlds__goal_util__EarlierCanFail_14;
#line 1682 "goal_util.m"
    MR_Word hlds__goal_util__LaterDetism_16;
#line 1682 "goal_util.m"
    MR_Word hlds__goal_util__LaterCanFail_17;
#line 1683 "goal_util.m"
    MR_Word hlds__goal_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_7, (MR_Integer) 0)));
#line 1684 "goal_util.m"
    MR_Word hlds__goal_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_8, (MR_Integer) 0)));
#line 1687 "goal_util.m"
    MR_Word hlds__goal_util__V_15_15;
#line 1689 "goal_util.m"
    MR_Word hlds__goal_util__V_18_18;

#line 1686 "goal_util.m"
    {
#line 1686 "goal_util.m"
      hlds__goal_util__EarlierDetism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_util__EarlierGoalInfo_10);
    }
#line 1687 "goal_util.m"
    {
#line 1687 "goal_util.m"
      parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_util__EarlierDetism_13, &hlds__goal_util__EarlierCanFail_14, &hlds__goal_util__V_15_15);
    }
#line 1688 "goal_util.m"
    {
#line 1688 "goal_util.m"
      hlds__goal_util__LaterDetism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_util__LaterGoalInfo_12);
    }
#line 1689 "goal_util.m"
    {
#line 1689 "goal_util.m"
      parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_util__LaterDetism_16, &hlds__goal_util__LaterCanFail_17, &hlds__goal_util__V_18_18);
    }
#line 1694 "goal_util.m"
    hlds__goal_util__succeeded = (hlds__goal_util__FullyStrict_6 == (MR_Integer) 1);
#line 1694 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 1694 "goal_util.m"
      {
#line 1695 "goal_util.m"
        {
#line 1695 "goal_util.m"
          hlds__goal_util__succeeded = hlds__goal_form__goal_cannot_loop_or_throw_1_p_0(hlds__goal_util__EarlierGoal_7);
        }
#line 1695 "goal_util.m"
        hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
#line 1694 "goal_util.m"
      }
#line 1698 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 1697 "goal_util.m"
      hlds__goal_util__succeeded = (hlds__goal_util__LaterCanFail_17 == (MR_Integer) 1);
#line 1698 "goal_util.m"
    else
#line 1699 "goal_util.m"
      hlds__goal_util__succeeded = MR_TRUE;
#line 1682 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 1706 "goal_util.m"
#line 1706 "goal_util.m"
      switch (hlds__goal_util__EarlierCanFail_14) {
#line 1706 "goal_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1706 "goal_util.m"
        case (MR_Integer) 0:
#line 1705 "goal_util.m"
          {
#line 1705 "goal_util.m"
            hlds__goal_util__succeeded = hlds__goal_form__goal_cannot_loop_or_throw_2_p_0(hlds__goal_util__ModuleInfo_5, hlds__goal_util__LaterGoal_8);
          }
#line 1706 "goal_util.m"
          break;
#line 1706 "goal_util.m"
        case (MR_Integer) 1:
#line 1707 "goal_util.m"
          hlds__goal_util__succeeded = MR_TRUE;
#line 1706 "goal_util.m"
          break;
#line 1706 "goal_util.m"
      }
#line 1682 "goal_util.m"
    return hlds__goal_util__succeeded;
#line 1682 "goal_util.m"
  }
#line 331 "goal_util.m"
}

#line 316 "goal_util.m"
void MR_CALL 
hlds__goal_util__can_reorder_goals_9_p_0(
#line 316 "goal_util.m"
  MR_Word hlds__goal_util__VarTypes_10,
#line 316 "goal_util.m"
  MR_Word hlds__goal_util__FullyStrict_11,
#line 316 "goal_util.m"
  MR_Word hlds__goal_util__InstmapBeforeEarlierGoal_12,
#line 316 "goal_util.m"
  MR_Word hlds__goal_util__EarlierGoal_13,
#line 316 "goal_util.m"
  MR_Word hlds__goal_util__InstmapBeforeLaterGoal_14,
#line 316 "goal_util.m"
  MR_Word hlds__goal_util__LaterGoal_15,
#line 316 "goal_util.m"
  MR_Word * hlds__goal_util__CanReorder_16,
#line 316 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_27,
#line 316 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_ModuleInfo_28)
#line 316 "goal_util.m"
{
#line 1630 "goal_util.m"
  {
#line 1630 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1630 "goal_util.m"
    MR_Word hlds__goal_util__EarlierGoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_13, (MR_Integer) 1)));
#line 1630 "goal_util.m"
    MR_Word hlds__goal_util__LaterGoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_15, (MR_Integer) 1)));
#line 1630 "goal_util.m"
    MR_Word hlds__goal_util__EarlierPurity_22;
#line 1630 "goal_util.m"
    MR_Word hlds__goal_util__EarlierTrace_23;
#line 1630 "goal_util.m"
    MR_Word hlds__goal_util__LaterPurity_24;
#line 1630 "goal_util.m"
    MR_Word hlds__goal_util__LaterTrace_25;
#line 1634 "goal_util.m"
    MR_Word hlds__goal_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_13, (MR_Integer) 0)));
#line 1635 "goal_util.m"
    MR_Word hlds__goal_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_15, (MR_Integer) 0)));

#line 1638 "goal_util.m"
    {
#line 1638 "goal_util.m"
      hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(hlds__goal_util__EarlierGoalInfo_19, &hlds__goal_util__EarlierPurity_22, &hlds__goal_util__EarlierTrace_23);
    }
#line 1639 "goal_util.m"
    {
#line 1639 "goal_util.m"
      hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(hlds__goal_util__LaterGoalInfo_21, &hlds__goal_util__LaterPurity_24, &hlds__goal_util__LaterTrace_25);
    }
#line 1641 "goal_util.m"
    hlds__goal_util__succeeded = (hlds__goal_util__EarlierPurity_22 == (MR_Integer) 2);
#line 1642 "goal_util.m"
    if (!(hlds__goal_util__succeeded))
#line 1642 "goal_util.m"
      {
#line 1642 "goal_util.m"
        hlds__goal_util__succeeded = (hlds__goal_util__LaterPurity_24 == (MR_Integer) 2);
#line 1642 "goal_util.m"
        if (!(hlds__goal_util__succeeded))
#line 1642 "goal_util.m"
          {
#line 1643 "goal_util.m"
            hlds__goal_util__succeeded = (hlds__goal_util__EarlierTrace_23 == (MR_Integer) 0);
#line 1642 "goal_util.m"
            if (!(hlds__goal_util__succeeded))
#line 1644 "goal_util.m"
              hlds__goal_util__succeeded = (hlds__goal_util__LaterTrace_25 == (MR_Integer) 0);
#line 1642 "goal_util.m"
          }
#line 1642 "goal_util.m"
      }
#line 1648 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 1647 "goal_util.m"
      {
#line 1647 "goal_util.m"
        *hlds__goal_util__CanReorder_16 = (MR_Integer) 0;
#line 1647 "goal_util.m"
        *hlds__goal_util__STATE_VARIABLE_ModuleInfo_28 = hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_27;
#line 1647 "goal_util.m"
      }
#line 1648 "goal_util.m"
    else
#line 1650 "goal_util.m"
      {
#line 1650 "goal_util.m"
        MR_Word hlds__goal_util__MaintainsTermination_26;

#line 1649 "goal_util.m"
        {
#line 1649 "goal_util.m"
          hlds__goal_util__reordering_maintains_termination_6_p_0(hlds__goal_util__FullyStrict_11, hlds__goal_util__EarlierGoal_13, hlds__goal_util__LaterGoal_15, &hlds__goal_util__MaintainsTermination_26, hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_27, hlds__goal_util__STATE_VARIABLE_ModuleInfo_28);
        }
#line 1654 "goal_util.m"
#line 1654 "goal_util.m"
        switch (hlds__goal_util__MaintainsTermination_26) {
#line 1654 "goal_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1654 "goal_util.m"
          case (MR_Integer) 0:
#line 1653 "goal_util.m"
            *hlds__goal_util__CanReorder_16 = (MR_Integer) 0;
#line 1654 "goal_util.m"
            break;
#line 1654 "goal_util.m"
          case (MR_Integer) 1:
#line 1664 "goal_util.m"
            {
#line 1755 "goal_util.m"
              MR_Word hlds__goal_util__TypeCtorInfo_20_44;
#line 1755 "goal_util.m"
              MR_Word hlds__goal_util__LaterGoalInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_15, (MR_Integer) 1)));
#line 1755 "goal_util.m"
              MR_Word hlds__goal_util__EarlierGoalInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_13, (MR_Integer) 1)));
#line 1755 "goal_util.m"
              MR_Word hlds__goal_util__EarlierInstMapDelta_39;
#line 1755 "goal_util.m"
              MR_Word hlds__goal_util__InstMapAfterEarlierGoal_40;
#line 1755 "goal_util.m"
              MR_Word hlds__goal_util__EarlierChangedVars_41;
#line 1755 "goal_util.m"
              MR_Word hlds__goal_util__LaterGoalNonLocals_42;
#line 1755 "goal_util.m"
              MR_Word hlds__goal_util__Intersection_43;
#line 1756 "goal_util.m"
              MR_Word hlds__goal_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_15, (MR_Integer) 0)));
#line 1757 "goal_util.m"
              MR_Word hlds__goal_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_13, (MR_Integer) 0)));

#line 1758 "goal_util.m"
              {
#line 1758 "goal_util.m"
                hlds__goal_util__EarlierInstMapDelta_39 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__EarlierGoalInfo_38);
              }
#line 1759 "goal_util.m"
              {
#line 1759 "goal_util.m"
                hlds__instmap__apply_instmap_delta_3_p_0(hlds__goal_util__InstmapBeforeEarlierGoal_12, hlds__goal_util__EarlierInstMapDelta_39, &hlds__goal_util__InstMapAfterEarlierGoal_40);
              }
#line 1762 "goal_util.m"
              {
#line 1762 "goal_util.m"
                hlds__instmap__instmap_changed_vars_5_p_0(hlds__goal_util__InstmapBeforeEarlierGoal_12, hlds__goal_util__InstMapAfterEarlierGoal_40, hlds__goal_util__VarTypes_10, *hlds__goal_util__STATE_VARIABLE_ModuleInfo_28, &hlds__goal_util__EarlierChangedVars_41);
              }
#line 1765 "goal_util.m"
              {
#line 1765 "goal_util.m"
                hlds__goal_util__LaterGoalNonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__goal_util__LaterGoalInfo_36);
              }
#line 14859 "hlds.goal_util.c"
              hlds__goal_util__TypeCtorInfo_20_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1766 "goal_util.m"
              {
#line 1766 "goal_util.m"
                parse_tree__set_of_var__intersect_3_p_0(hlds__goal_util__TypeCtorInfo_20_44, hlds__goal_util__EarlierChangedVars_41, hlds__goal_util__LaterGoalNonLocals_42, &hlds__goal_util__Intersection_43);
              }
#line 1767 "goal_util.m"
              {
#line 1767 "goal_util.m"
                hlds__goal_util__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_util__TypeCtorInfo_20_44, hlds__goal_util__Intersection_43);
              }
#line 1767 "goal_util.m"
              hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
#line 1664 "goal_util.m"
              if (hlds__goal_util__succeeded)
#line 1663 "goal_util.m"
                *hlds__goal_util__CanReorder_16 = (MR_Integer) 0;
#line 1664 "goal_util.m"
              else
#line 1675 "goal_util.m"
                {
#line 1755 "goal_util.m"
                  MR_Word hlds__goal_util__TypeCtorInfo_20_59;
#line 1755 "goal_util.m"
                  MR_Word hlds__goal_util__LaterGoalInfo_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_13, (MR_Integer) 1)));
#line 1755 "goal_util.m"
                  MR_Word hlds__goal_util__EarlierGoalInfo_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_15, (MR_Integer) 1)));
#line 1755 "goal_util.m"
                  MR_Word hlds__goal_util__EarlierInstMapDelta_54;
#line 1755 "goal_util.m"
                  MR_Word hlds__goal_util__InstMapAfterEarlierGoal_55;
#line 1755 "goal_util.m"
                  MR_Word hlds__goal_util__EarlierChangedVars_56;
#line 1755 "goal_util.m"
                  MR_Word hlds__goal_util__LaterGoalNonLocals_57;
#line 1755 "goal_util.m"
                  MR_Word hlds__goal_util__Intersection_58;
#line 1756 "goal_util.m"
                  MR_Word hlds__goal_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_13, (MR_Integer) 0)));
#line 1757 "goal_util.m"
                  MR_Word hlds__goal_util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_15, (MR_Integer) 0)));

#line 1758 "goal_util.m"
                  {
#line 1758 "goal_util.m"
                    hlds__goal_util__EarlierInstMapDelta_54 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__EarlierGoalInfo_53);
                  }
#line 1759 "goal_util.m"
                  {
#line 1759 "goal_util.m"
                    hlds__instmap__apply_instmap_delta_3_p_0(hlds__goal_util__InstmapBeforeLaterGoal_14, hlds__goal_util__EarlierInstMapDelta_54, &hlds__goal_util__InstMapAfterEarlierGoal_55);
                  }
#line 1762 "goal_util.m"
                  {
#line 1762 "goal_util.m"
                    hlds__instmap__instmap_changed_vars_5_p_0(hlds__goal_util__InstmapBeforeLaterGoal_14, hlds__goal_util__InstMapAfterEarlierGoal_55, hlds__goal_util__VarTypes_10, *hlds__goal_util__STATE_VARIABLE_ModuleInfo_28, &hlds__goal_util__EarlierChangedVars_56);
                  }
#line 1765 "goal_util.m"
                  {
#line 1765 "goal_util.m"
                    hlds__goal_util__LaterGoalNonLocals_57 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__goal_util__LaterGoalInfo_51);
                  }
#line 14922 "hlds.goal_util.c"
                  hlds__goal_util__TypeCtorInfo_20_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1766 "goal_util.m"
                  {
#line 1766 "goal_util.m"
                    parse_tree__set_of_var__intersect_3_p_0(hlds__goal_util__TypeCtorInfo_20_59, hlds__goal_util__EarlierChangedVars_56, hlds__goal_util__LaterGoalNonLocals_57, &hlds__goal_util__Intersection_58);
                  }
#line 1767 "goal_util.m"
                  {
#line 1767 "goal_util.m"
                    hlds__goal_util__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_util__TypeCtorInfo_20_59, hlds__goal_util__Intersection_58);
                  }
#line 1767 "goal_util.m"
                  hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
#line 1675 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 1674 "goal_util.m"
                    *hlds__goal_util__CanReorder_16 = (MR_Integer) 0;
#line 1675 "goal_util.m"
                  else
#line 1676 "goal_util.m"
                    *hlds__goal_util__CanReorder_16 = (MR_Integer) 1;
#line 1675 "goal_util.m"
                }
#line 1664 "goal_util.m"
            }
#line 1654 "goal_util.m"
            break;
#line 1654 "goal_util.m"
        }
#line 1650 "goal_util.m"
      }
#line 1630 "goal_util.m"
  }
#line 316 "goal_util.m"
}

#line 299 "goal_util.m"
MR_bool MR_CALL 
hlds__goal_util__can_reorder_goals_old_7_p_0(
#line 299 "goal_util.m"
  MR_Word hlds__goal_util__ModuleInfo_8,
#line 299 "goal_util.m"
  MR_Word hlds__goal_util__VarTypes_9,
#line 299 "goal_util.m"
  MR_Word hlds__goal_util__FullyStrict_10,
#line 299 "goal_util.m"
  MR_Word hlds__goal_util__InstmapBeforeEarlierGoal_11,
#line 299 "goal_util.m"
  MR_Word hlds__goal_util__EarlierGoal_12,
#line 299 "goal_util.m"
  MR_Word hlds__goal_util__InstmapBeforeLaterGoal_13,
#line 299 "goal_util.m"
  MR_Word hlds__goal_util__LaterGoal_14)
#line 299 "goal_util.m"
{
#line 1598 "goal_util.m"
  {
#line 1598 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1598 "goal_util.m"
    MR_Word hlds__goal_util__EarlierGoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_12, (MR_Integer) 1)));
#line 1598 "goal_util.m"
    MR_Word hlds__goal_util__LaterGoalInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_14, (MR_Integer) 1)));
#line 1598 "goal_util.m"
    MR_Word hlds__goal_util__EarlierPurity_19;
#line 1598 "goal_util.m"
    MR_Word hlds__goal_util__EarlierTrace_20;
#line 1598 "goal_util.m"
    MR_Word hlds__goal_util__LaterPurity_21;
#line 1598 "goal_util.m"
    MR_Word hlds__goal_util__LaterTrace_22;
#line 1602 "goal_util.m"
    MR_Word hlds__goal_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_12, (MR_Integer) 0)));
#line 1603 "goal_util.m"
    MR_Word hlds__goal_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_14, (MR_Integer) 0)));
#line 1755 "goal_util.m"
    MR_Word hlds__goal_util__TypeCtorInfo_20_37;
#line 1755 "goal_util.m"
    MR_Word hlds__goal_util__LaterGoalInfo_29;
#line 1755 "goal_util.m"
    MR_Word hlds__goal_util__EarlierGoalInfo_31;
#line 1755 "goal_util.m"
    MR_Word hlds__goal_util__EarlierInstMapDelta_32;
#line 1755 "goal_util.m"
    MR_Word hlds__goal_util__InstMapAfterEarlierGoal_33;
#line 1755 "goal_util.m"
    MR_Word hlds__goal_util__EarlierChangedVars_34;
#line 1755 "goal_util.m"
    MR_Word hlds__goal_util__LaterGoalNonLocals_35;
#line 1755 "goal_util.m"
    MR_Word hlds__goal_util__Intersection_36;
#line 1756 "goal_util.m"
    MR_Word hlds__goal_util__V_28_28;
#line 1757 "goal_util.m"
    MR_Word hlds__goal_util__V_30_30;
#line 1755 "goal_util.m"
    MR_Word hlds__goal_util__TypeCtorInfo_20_52;
#line 1755 "goal_util.m"
    MR_Word hlds__goal_util__LaterGoalInfo_44;
#line 1755 "goal_util.m"
    MR_Word hlds__goal_util__EarlierGoalInfo_46;
#line 1755 "goal_util.m"
    MR_Word hlds__goal_util__EarlierInstMapDelta_47;
#line 1755 "goal_util.m"
    MR_Word hlds__goal_util__InstMapAfterEarlierGoal_48;
#line 1755 "goal_util.m"
    MR_Word hlds__goal_util__EarlierChangedVars_49;
#line 1755 "goal_util.m"
    MR_Word hlds__goal_util__LaterGoalNonLocals_50;
#line 1755 "goal_util.m"
    MR_Word hlds__goal_util__Intersection_51;
#line 1756 "goal_util.m"
    MR_Word hlds__goal_util__V_43_43;
#line 1757 "goal_util.m"
    MR_Word hlds__goal_util__V_45_45;

#line 1606 "goal_util.m"
    {
#line 1606 "goal_util.m"
      hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(hlds__goal_util__EarlierGoalInfo_16, &hlds__goal_util__EarlierPurity_19, &hlds__goal_util__EarlierTrace_20);
    }
#line 1607 "goal_util.m"
    {
#line 1607 "goal_util.m"
      hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(hlds__goal_util__LaterGoalInfo_18, &hlds__goal_util__LaterPurity_21, &hlds__goal_util__LaterTrace_22);
    }
#line 1609 "goal_util.m"
    hlds__goal_util__succeeded = (hlds__goal_util__LaterPurity_21 == (MR_Integer) 2);
#line 1609 "goal_util.m"
    hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
#line 1598 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 1598 "goal_util.m"
      {
#line 1611 "goal_util.m"
        hlds__goal_util__succeeded = (hlds__goal_util__LaterTrace_22 == (MR_Integer) 1);
#line 1598 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1598 "goal_util.m"
          {
#line 1608 "goal_util.m"
            hlds__goal_util__succeeded = (hlds__goal_util__EarlierPurity_19 == (MR_Integer) 2);
#line 1608 "goal_util.m"
            hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
#line 1598 "goal_util.m"
            if (hlds__goal_util__succeeded)
#line 1598 "goal_util.m"
              {
#line 1610 "goal_util.m"
                hlds__goal_util__succeeded = (hlds__goal_util__EarlierTrace_20 == (MR_Integer) 1);
#line 1598 "goal_util.m"
                if (hlds__goal_util__succeeded)
#line 1598 "goal_util.m"
                  {
#line 1613 "goal_util.m"
                    {
#line 1613 "goal_util.m"
                      hlds__goal_util__succeeded = hlds__goal_util__reordering_maintains_termination_old_4_p_0(hlds__goal_util__ModuleInfo_8, hlds__goal_util__FullyStrict_10, hlds__goal_util__EarlierGoal_12, hlds__goal_util__LaterGoal_14);
                    }
#line 1598 "goal_util.m"
                    if (hlds__goal_util__succeeded)
#line 1598 "goal_util.m"
                      {
#line 1756 "goal_util.m"
                        hlds__goal_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_14, (MR_Integer) 0)));
#line 1756 "goal_util.m"
                        hlds__goal_util__LaterGoalInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_14, (MR_Integer) 1)));
#line 1757 "goal_util.m"
                        hlds__goal_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_12, (MR_Integer) 0)));
#line 1757 "goal_util.m"
                        hlds__goal_util__EarlierGoalInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_12, (MR_Integer) 1)));
#line 1758 "goal_util.m"
                        {
#line 1758 "goal_util.m"
                          hlds__goal_util__EarlierInstMapDelta_32 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__EarlierGoalInfo_31);
                        }
#line 1759 "goal_util.m"
                        {
#line 1759 "goal_util.m"
                          hlds__instmap__apply_instmap_delta_3_p_0(hlds__goal_util__InstmapBeforeEarlierGoal_11, hlds__goal_util__EarlierInstMapDelta_32, &hlds__goal_util__InstMapAfterEarlierGoal_33);
                        }
#line 1762 "goal_util.m"
                        {
#line 1762 "goal_util.m"
                          hlds__instmap__instmap_changed_vars_5_p_0(hlds__goal_util__InstmapBeforeEarlierGoal_11, hlds__goal_util__InstMapAfterEarlierGoal_33, hlds__goal_util__VarTypes_9, hlds__goal_util__ModuleInfo_8, &hlds__goal_util__EarlierChangedVars_34);
                        }
#line 1765 "goal_util.m"
                        {
#line 1765 "goal_util.m"
                          hlds__goal_util__LaterGoalNonLocals_35 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__goal_util__LaterGoalInfo_29);
                        }
#line 15114 "hlds.goal_util.c"
                        hlds__goal_util__TypeCtorInfo_20_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1766 "goal_util.m"
                        {
#line 1766 "goal_util.m"
                          parse_tree__set_of_var__intersect_3_p_0(hlds__goal_util__TypeCtorInfo_20_37, hlds__goal_util__EarlierChangedVars_34, hlds__goal_util__LaterGoalNonLocals_35, &hlds__goal_util__Intersection_36);
                        }
#line 1767 "goal_util.m"
                        {
#line 1767 "goal_util.m"
                          hlds__goal_util__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_util__TypeCtorInfo_20_37, hlds__goal_util__Intersection_36);
                        }
#line 1767 "goal_util.m"
                        hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
#line 1618 "goal_util.m"
                        hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
#line 1598 "goal_util.m"
                        if (hlds__goal_util__succeeded)
#line 1598 "goal_util.m"
                          {
#line 1756 "goal_util.m"
                            hlds__goal_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_12, (MR_Integer) 0)));
#line 1756 "goal_util.m"
                            hlds__goal_util__LaterGoalInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_12, (MR_Integer) 1)));
#line 1757 "goal_util.m"
                            hlds__goal_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_14, (MR_Integer) 0)));
#line 1757 "goal_util.m"
                            hlds__goal_util__EarlierGoalInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_14, (MR_Integer) 1)));
#line 1758 "goal_util.m"
                            {
#line 1758 "goal_util.m"
                              hlds__goal_util__EarlierInstMapDelta_47 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__EarlierGoalInfo_46);
                            }
#line 1759 "goal_util.m"
                            {
#line 1759 "goal_util.m"
                              hlds__instmap__apply_instmap_delta_3_p_0(hlds__goal_util__InstmapBeforeLaterGoal_13, hlds__goal_util__EarlierInstMapDelta_47, &hlds__goal_util__InstMapAfterEarlierGoal_48);
                            }
#line 1762 "goal_util.m"
                            {
#line 1762 "goal_util.m"
                              hlds__instmap__instmap_changed_vars_5_p_0(hlds__goal_util__InstmapBeforeLaterGoal_13, hlds__goal_util__InstMapAfterEarlierGoal_48, hlds__goal_util__VarTypes_9, hlds__goal_util__ModuleInfo_8, &hlds__goal_util__EarlierChangedVars_49);
                            }
#line 1765 "goal_util.m"
                            {
#line 1765 "goal_util.m"
                              hlds__goal_util__LaterGoalNonLocals_50 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__goal_util__LaterGoalInfo_44);
                            }
#line 15162 "hlds.goal_util.c"
                            hlds__goal_util__TypeCtorInfo_20_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1766 "goal_util.m"
                            {
#line 1766 "goal_util.m"
                              parse_tree__set_of_var__intersect_3_p_0(hlds__goal_util__TypeCtorInfo_20_52, hlds__goal_util__EarlierChangedVars_49, hlds__goal_util__LaterGoalNonLocals_50, &hlds__goal_util__Intersection_51);
                            }
#line 1767 "goal_util.m"
                            {
#line 1767 "goal_util.m"
                              hlds__goal_util__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_util__TypeCtorInfo_20_52, hlds__goal_util__Intersection_51);
                            }
#line 1767 "goal_util.m"
                            hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
#line 1625 "goal_util.m"
                            hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
#line 1598 "goal_util.m"
                          }
#line 1598 "goal_util.m"
                      }
#line 1598 "goal_util.m"
                  }
#line 1598 "goal_util.m"
              }
#line 1598 "goal_util.m"
          }
#line 1598 "goal_util.m"
      }
#line 1598 "goal_util.m"
    return hlds__goal_util__succeeded;
#line 1598 "goal_util.m"
  }
#line 299 "goal_util.m"
}

#line 284 "goal_util.m"
void MR_CALL 
hlds__goal_util__create_conj_4_p_0(
#line 284 "goal_util.m"
  MR_Word hlds__goal_util__GoalA_5,
#line 284 "goal_util.m"
  MR_Word hlds__goal_util__GoalB_6,
#line 284 "goal_util.m"
  MR_Word hlds__goal_util__Type_7,
#line 284 "goal_util.m"
  MR_Word * hlds__goal_util__ConjGoal_8)
#line 284 "goal_util.m"
{
#line 1567 "goal_util.m"
  {
#line 1567 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1567 "goal_util.m"
    MR_Word hlds__goal_util__V_9_9;
#line 1567 "goal_util.m"
    MR_Word hlds__goal_util__V_10_10;

#line 1568 "goal_util.m"
    {
#line 1568 "goal_util.m"
      hlds__goal_util__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1568 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_10_10, 0) = ((MR_Box) (hlds__goal_util__GoalB_6));
#line 1568 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1568 "goal_util.m"
    }
#line 1568 "goal_util.m"
    {
#line 1568 "goal_util.m"
      hlds__goal_util__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1568 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_9_9, 0) = ((MR_Box) (hlds__goal_util__GoalA_5));
#line 1568 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__V_9_9, 1) = ((MR_Box) (hlds__goal_util__V_10_10));
#line 1568 "goal_util.m"
    }
#line 1568 "goal_util.m"
    {
#line 1568 "goal_util.m"
      hlds__goal_util__create_conj_from_list_3_p_0(hlds__goal_util__V_9_9, hlds__goal_util__Type_7, hlds__goal_util__ConjGoal_8);
    }
#line 1567 "goal_util.m"
  }
#line 284 "goal_util.m"
}

#line 278 "goal_util.m"
void MR_CALL 
hlds__goal_util__create_conj_from_list_3_p_0(
#line 278 "goal_util.m"
  MR_Word hlds__goal_util__Conjuncts_4,
#line 278 "goal_util.m"
  MR_Word hlds__goal_util__ConjType_5,
#line 278 "goal_util.m"
  MR_Word * hlds__goal_util__ConjGoal_6)
#line 278 "goal_util.m"
{
#line 1572 "goal_util.m"
  {
#line 1572 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 1572 "goal_util.m"
    if ((hlds__goal_util__Conjuncts_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1590 "goal_util.m"
      {
#line 1591 "goal_util.m"
        {
#line 1591 "goal_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "predicate \140hlds.goal_util.create_conj_from_list\'/3", (MR_String) "empty conjunction");
#line 1591 "goal_util.m"
          return;
        }
#line 1590 "goal_util.m"
      }
#line 1572 "goal_util.m"
    else
#line 1572 "goal_util.m"
      {
#line 1572 "goal_util.m"
        MR_Word hlds__goal_util__HeadGoal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Conjuncts_4, (MR_Integer) 0)));
#line 1572 "goal_util.m"
        MR_Word hlds__goal_util__TailGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Conjuncts_4, (MR_Integer) 1)));

#line 1585 "goal_util.m"
        if ((hlds__goal_util__TailGoals_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1587 "goal_util.m"
          *hlds__goal_util__ConjGoal_6 = hlds__goal_util__HeadGoal_7;
#line 1585 "goal_util.m"
        else
#line 1574 "goal_util.m"
          {
#line 1574 "goal_util.m"
            MR_Word hlds__goal_util__ConjGoalExpr_11;
#line 1574 "goal_util.m"
            MR_Word hlds__goal_util__NonLocals_12;
#line 1574 "goal_util.m"
            MR_Word hlds__goal_util__InstMapDelta_13;
#line 1574 "goal_util.m"
            MR_Word hlds__goal_util__Detism_14;
#line 1574 "goal_util.m"
            MR_Word hlds__goal_util__Purity_15;
#line 1574 "goal_util.m"
            MR_Word hlds__goal_util__HeadGoalInfo_17;
#line 1574 "goal_util.m"
            MR_Word hlds__goal_util__Context_18;
#line 1574 "goal_util.m"
            MR_Word hlds__goal_util__ConjGoalInfo_19;
#line 1580 "goal_util.m"
            MR_Word hlds__goal_util__V_16_16;

#line 1575 "goal_util.m"
            {
#line 1575 "goal_util.m"
              hlds__goal_util__ConjGoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1575 "goal_util.m"
              MR_hl_field(MR_mktag(3), hlds__goal_util__ConjGoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1575 "goal_util.m"
              MR_hl_field(MR_mktag(3), hlds__goal_util__ConjGoalExpr_11, 1) = ((MR_Box) (hlds__goal_util__ConjType_5));
#line 1575 "goal_util.m"
              MR_hl_field(MR_mktag(3), hlds__goal_util__ConjGoalExpr_11, 2) = ((MR_Box) (hlds__goal_util__Conjuncts_4));
#line 1575 "goal_util.m"
            }
#line 1576 "goal_util.m"
            {
#line 1576 "goal_util.m"
              hlds__hlds_goal__goal_list_nonlocals_2_p_0(hlds__goal_util__Conjuncts_4, &hlds__goal_util__NonLocals_12);
            }
#line 1577 "goal_util.m"
            {
#line 1577 "goal_util.m"
              hlds__hlds_goal__goal_list_instmap_delta_2_p_0(hlds__goal_util__Conjuncts_4, &hlds__goal_util__InstMapDelta_13);
            }
#line 1578 "goal_util.m"
            {
#line 1578 "goal_util.m"
              hlds__hlds_goal__goal_list_determinism_2_p_0(hlds__goal_util__Conjuncts_4, &hlds__goal_util__Detism_14);
            }
#line 1579 "goal_util.m"
            {
#line 1579 "goal_util.m"
              hlds__hlds_goal__goal_list_purity_2_p_0(hlds__goal_util__Conjuncts_4, &hlds__goal_util__Purity_15);
            }
#line 1580 "goal_util.m"
            hlds__goal_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadGoal_7, (MR_Integer) 0)));
#line 1580 "goal_util.m"
            hlds__goal_util__HeadGoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadGoal_7, (MR_Integer) 1)));
#line 1581 "goal_util.m"
            {
#line 1581 "goal_util.m"
              hlds__goal_util__Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__goal_util__HeadGoalInfo_17);
            }
#line 1582 "goal_util.m"
            {
#line 1582 "goal_util.m"
              hlds__hlds_goal__goal_info_init_6_p_0(hlds__goal_util__NonLocals_12, hlds__goal_util__InstMapDelta_13, hlds__goal_util__Detism_14, hlds__goal_util__Purity_15, hlds__goal_util__Context_18, &hlds__goal_util__ConjGoalInfo_19);
            }
#line 1584 "goal_util.m"
            {
#line 1584 "goal_util.m"
              MR_Word base;
#line 1584 "goal_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1584 "goal_util.m"
              *hlds__goal_util__ConjGoal_6 = base;
#line 1584 "goal_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__ConjGoalExpr_11));
#line 1584 "goal_util.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__ConjGoalInfo_19));
#line 1584 "goal_util.m"
            }
#line 1574 "goal_util.m"
          }
#line 1572 "goal_util.m"
      }
#line 1572 "goal_util.m"
  }
#line 278 "goal_util.m"
}

#line 1553 "goal_util.m"
static void MR_CALL 
hlds__goal_util__flatten_disj_2_p_0_1(
#line 1553 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1553 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1553 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 1553 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 1553 "goal_util.m"
{
#line 1553 "goal_util.m"
  {
#line 1553 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 1553 "goal_util.m"
    MR_Word hlds__goal_util__conv0_STATE_VARIABLE_FlatDisjuncts_9;

#line 1553 "goal_util.m"
    {
#line 1553 "goal_util.m"
      hlds__goal_util__flatten_disj_acc_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_STATE_VARIABLE_FlatDisjuncts_9);
    }
#line 1553 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_STATE_VARIABLE_FlatDisjuncts_9));
#line 1553 "goal_util.m"
  }
#line 1553 "goal_util.m"
}

#line 273 "goal_util.m"
void MR_CALL 
hlds__goal_util__flatten_disj_2_p_0(
#line 273 "goal_util.m"
  MR_Word hlds__goal_util__Disjuncts_3,
#line 273 "goal_util.m"
  MR_Word * hlds__goal_util__FlatDisjuncts_4)
#line 273 "goal_util.m"
{
#line 1552 "goal_util.m"
  {
#line 1552 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1553 "goal_util.m"
    MR_Box hlds__goal_util__conv1_FlatDisjuncts_4;

#line 1553 "goal_util.m"
    {
#line 1553 "goal_util.m"
      mercury__list__foldr_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__goal_util_scalar_common_1[4], (MR_Word) &hlds__goal_util_scalar_common_3[3], hlds__goal_util__Disjuncts_3, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__goal_util__conv1_FlatDisjuncts_4);
    }
#line 1553 "goal_util.m"
    *hlds__goal_util__FlatDisjuncts_4 = ((MR_Word) hlds__goal_util__conv1_FlatDisjuncts_4);
#line 1552 "goal_util.m"
  }
#line 273 "goal_util.m"
}

#line 268 "goal_util.m"
void MR_CALL 
hlds__goal_util__flatten_conj_2_p_0(
#line 268 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 268 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__2_2)
#line 268 "goal_util.m"
{
#line 1543 "goal_util.m"
  {
#line 1543 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 1543 "goal_util.m"
    if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1543 "goal_util.m"
      *hlds__goal_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1543 "goal_util.m"
    else
#line 1544 "goal_util.m"
      {
#line 1544 "goal_util.m"
        MR_Word hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1544 "goal_util.m"
        MR_Word hlds__goal_util__Goals0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1544 "goal_util.m"
        MR_Word hlds__goal_util__FlatConjTail_6;
#line 1548 "goal_util.m"
        MR_Word hlds__goal_util__SubGoals_7;
#line 1546 "goal_util.m"
        MR_Word hlds__goal_util__V_9_9;
#line 1546 "goal_util.m"
        MR_Word hlds__goal_util__V_10_10;
#line 1546 "goal_util.m"
        MR_Word hlds__goal_util__V_8_8;

#line 1545 "goal_util.m"
        {
#line 1545 "goal_util.m"
          hlds__goal_util__flatten_conj_2_p_0(hlds__goal_util__Goals0_4, &hlds__goal_util__FlatConjTail_6);
        }
#line 1546 "goal_util.m"
        hlds__goal_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 0)));
#line 1546 "goal_util.m"
        hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 1)));
#line 1546 "goal_util.m"
        hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__V_9_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__V_9_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1546 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1546 "goal_util.m"
          {
#line 1546 "goal_util.m"
            hlds__goal_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__V_9_9, (MR_Integer) 1)));
#line 1546 "goal_util.m"
            hlds__goal_util__SubGoals_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__V_9_9, (MR_Integer) 2)));
#line 1546 "goal_util.m"
            hlds__goal_util__succeeded = (hlds__goal_util__V_10_10 == (MR_Integer) 0);
#line 1546 "goal_util.m"
          }
#line 1548 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 1547 "goal_util.m"
          {
#line 1547 "goal_util.m"
            {
#line 1547 "goal_util.m"
              *hlds__goal_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__goal_util__SubGoals_7, hlds__goal_util__FlatConjTail_6);
            }
#line 1547 "goal_util.m"
          }
#line 1548 "goal_util.m"
        else
#line 1549 "goal_util.m"
          {
#line 1549 "goal_util.m"
            MR_Word base;
#line 1549 "goal_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1549 "goal_util.m"
            *hlds__goal_util__HeadVar__2_2 = base;
#line 1549 "goal_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Goal_3));
#line 1549 "goal_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_util__FlatConjTail_6));
#line 1549 "goal_util.m"
          }
#line 1544 "goal_util.m"
      }
#line 1543 "goal_util.m"
  }
#line 268 "goal_util.m"
}

#line 1505 "goal_util.m"
static void MR_CALL 
hlds__goal_util__case_to_disjunct_11_p_0_1(
#line 1505 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1505 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1505 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_2)
#line 1505 "goal_util.m"
{
#line 1505 "goal_util.m"
  {
#line 1505 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 1505 "goal_util.m"
    MR_Word hlds__goal_util__conv0_LambdaHeadVar__2_65;

#line 1505 "goal_util.m"
    {
#line 1505 "goal_util.m"
      hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1505__1_2_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), &hlds__goal_util__conv0_LambdaHeadVar__2_65);
    }
#line 1505 "goal_util.m"
    *hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv0_LambdaHeadVar__2_65));
#line 1505 "goal_util.m"
  }
#line 1505 "goal_util.m"
}

#line 258 "goal_util.m"
void MR_CALL 
hlds__goal_util__case_to_disjunct_11_p_0(
#line 258 "goal_util.m"
  MR_Word hlds__goal_util__Var_12,
#line 258 "goal_util.m"
  MR_Word hlds__goal_util__CaseGoal_13,
#line 258 "goal_util.m"
  MR_Word hlds__goal_util__InstMap_14,
#line 258 "goal_util.m"
  MR_Word hlds__goal_util__ConsId_15,
#line 258 "goal_util.m"
  MR_Word * hlds__goal_util__Disjunct_16,
#line 258 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0_53,
#line 258 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarSet_54,
#line 258 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0_55,
#line 258 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarTypes_56,
#line 258 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_57,
#line 258 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_ModuleInfo_58)
#line 258 "goal_util.m"
{
#line 1490 "goal_util.m"
  {
#line 1490 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__TypeCtorInfo_89_89;
#line 1490 "goal_util.m"
    MR_Integer hlds__goal_util__ConsArity_20;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__ArgVars_21;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__VarType_22;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__ArgTypes_23;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__Inst0_24;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__ArgInsts_27;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__UniModes_31;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__UniMode_32;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__Unification_34;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__RHS_35;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__ExtraGoalExpr_36;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__NonLocals_37;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__ExtraInstMapDelta0_38;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__ExtraInstMapDelta_39;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__ExtraGoalInfo_40;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__CaseGoalConj_41;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__GoalList_42;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__CaseGoalInfo_44;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__CaseNonLocals0_45;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__CaseNonLocals_46;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__CaseInstMapDelta_47;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__InstMapDelta_48;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__CaseDetism0_49;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__Detism_50;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__CasePurity_51;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__CombinedGoalInfo_52;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__V_70_70;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__V_82_82;
#line 1490 "goal_util.m"
    MR_Word hlds__goal_util__V_85_85;
#line 1502 "goal_util.m"
    MR_Word hlds__goal_util__ArgInsts1_26;
#line 1498 "goal_util.m"
    MR_Word hlds__goal_util__Inst1_25;
#line 1528 "goal_util.m"
    MR_Word hlds__goal_util__V_43_43;

#line 1491 "goal_util.m"
    {
#line 1491 "goal_util.m"
      hlds__goal_util__ConsArity_20 = parse_tree__prog_util__cons_id_arity_1_f_0(hlds__goal_util__ConsId_15);
    }
#line 15670 "hlds.goal_util.c"
    hlds__goal_util__TypeCtorInfo_89_89 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1492 "goal_util.m"
    {
#line 1492 "goal_util.m"
      mercury__varset__new_vars_4_p_0(hlds__goal_util__TypeCtorInfo_89_89, hlds__goal_util__ConsArity_20, &hlds__goal_util__ArgVars_21, hlds__goal_util__STATE_VARIABLE_VarSet_0_53, hlds__goal_util__STATE_VARIABLE_VarSet_54);
    }
#line 1493 "goal_util.m"
    {
#line 1493 "goal_util.m"
      hlds__vartypes__lookup_var_type_3_p_0(hlds__goal_util__STATE_VARIABLE_VarTypes_0_55, hlds__goal_util__Var_12, &hlds__goal_util__VarType_22);
    }
#line 1494 "goal_util.m"
    {
#line 1494 "goal_util.m"
      check_hlds__type_util__get_cons_id_arg_types_4_p_0(hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_57, hlds__goal_util__VarType_22, hlds__goal_util__ConsId_15, &hlds__goal_util__ArgTypes_23);
    }
#line 1495 "goal_util.m"
    {
#line 1495 "goal_util.m"
      hlds__vartypes__vartypes_add_corresponding_lists_4_p_0(hlds__goal_util__ArgVars_21, hlds__goal_util__ArgTypes_23, hlds__goal_util__STATE_VARIABLE_VarTypes_0_55, hlds__goal_util__STATE_VARIABLE_VarTypes_56);
    }
#line 1496 "goal_util.m"
    {
#line 1496 "goal_util.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__goal_util__InstMap_14, hlds__goal_util__Var_12, &hlds__goal_util__Inst0_24);
    }
#line 1498 "goal_util.m"
    {
#line 1498 "goal_util.m"
      check_hlds__inst_util__inst_expand_3_p_0(hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_57, hlds__goal_util__Inst0_24, &hlds__goal_util__Inst1_25);
    }
#line 1499 "goal_util.m"
    {
#line 1499 "goal_util.m"
      hlds__goal_util__succeeded = parse_tree__prog_mode__get_arg_insts_4_p_0(hlds__goal_util__Inst1_25, hlds__goal_util__ConsId_15, hlds__goal_util__ConsArity_20, &hlds__goal_util__ArgInsts1_26);
    }
#line 1502 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 1501 "goal_util.m"
      hlds__goal_util__ArgInsts_27 = hlds__goal_util__ArgInsts1_26;
#line 1502 "goal_util.m"
    else
#line 1503 "goal_util.m"
      {
#line 1503 "goal_util.m"
        {
#line 1503 "goal_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "predicate \140hlds.goal_util.case_to_disjunct\'/11", (MR_String) "get_arg_insts failed");
#line 1503 "goal_util.m"
          return;
        }
#line 1503 "goal_util.m"
      }
#line 1508 "goal_util.m"
    {
#line 1508 "goal_util.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, (MR_Word) &hlds__goal_util_scalar_common_3[2], hlds__goal_util__ArgInsts_27, &hlds__goal_util__UniModes_31);
    }
#line 1509 "goal_util.m"
    {
#line 1509 "goal_util.m"
      hlds__goal_util__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1509 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_70_70, 0) = ((MR_Box) (hlds__goal_util__Inst0_24));
#line 1509 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_70_70, 1) = ((MR_Box) (hlds__goal_util__Inst0_24));
#line 1509 "goal_util.m"
    }
#line 1509 "goal_util.m"
    {
#line 1509 "goal_util.m"
      hlds__goal_util__UniMode_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1509 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__UniMode_32, 0) = ((MR_Box) (hlds__goal_util__V_70_70));
#line 1509 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__UniMode_32, 1) = ((MR_Box) (hlds__goal_util__V_70_70));
#line 1509 "goal_util.m"
    }
#line 1511 "goal_util.m"
    {
#line 1511 "goal_util.m"
      hlds__goal_util__Unification_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1511 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__Unification_34, 0) = ((MR_Box) (hlds__goal_util__Var_12));
#line 1511 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__Unification_34, 1) = ((MR_Box) (hlds__goal_util__ConsId_15));
#line 1511 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__Unification_34, 2) = ((MR_Box) (hlds__goal_util__ArgVars_21));
#line 1511 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__Unification_34, 3) = ((MR_Box) (hlds__goal_util__UniModes_31));
#line 1511 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__Unification_34, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1511 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__Unification_34, 5) = ((MR_Box) ((MR_Integer) 1));
#line 1511 "goal_util.m"
    }
#line 1513 "goal_util.m"
    {
#line 1513 "goal_util.m"
      hlds__goal_util__RHS_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1513 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__RHS_35, 0) = ((MR_Box) (hlds__goal_util__ConsId_15));
#line 1513 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__RHS_35, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1513 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__RHS_35, 2) = ((MR_Box) (hlds__goal_util__ArgVars_21));
#line 1513 "goal_util.m"
    }
#line 1514 "goal_util.m"
    {
#line 1514 "goal_util.m"
      hlds__goal_util__ExtraGoalExpr_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1514 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__ExtraGoalExpr_36, 0) = ((MR_Box) (hlds__goal_util__Var_12));
#line 1514 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__ExtraGoalExpr_36, 1) = ((MR_Box) (hlds__goal_util__RHS_35));
#line 1514 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__ExtraGoalExpr_36, 2) = ((MR_Box) (hlds__goal_util__UniMode_32));
#line 1514 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__ExtraGoalExpr_36, 3) = ((MR_Box) (hlds__goal_util__Unification_34));
#line 1514 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__ExtraGoalExpr_36, 4) = ((MR_Box) (&hlds__goal_util_scalar_common_1[5]));
#line 1514 "goal_util.m"
    }
#line 1515 "goal_util.m"
    {
#line 1515 "goal_util.m"
      hlds__goal_util__NonLocals_37 = parse_tree__set_of_var__make_singleton_1_f_0(hlds__goal_util__TypeCtorInfo_89_89, hlds__goal_util__Var_12);
    }
#line 1516 "goal_util.m"
    {
#line 1516 "goal_util.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&hlds__goal_util__ExtraInstMapDelta0_38);
    }
#line 1517 "goal_util.m"
    {
#line 1517 "goal_util.m"
      hlds__instmap__instmap_delta_bind_var_to_functor_8_p_0(hlds__goal_util__Var_12, hlds__goal_util__VarType_22, hlds__goal_util__ConsId_15, hlds__goal_util__InstMap_14, hlds__goal_util__ExtraInstMapDelta0_38, &hlds__goal_util__ExtraInstMapDelta_39, hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_57, hlds__goal_util__STATE_VARIABLE_ModuleInfo_58);
    }
#line 1519 "goal_util.m"
    {
#line 1519 "goal_util.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__goal_util__NonLocals_37, hlds__goal_util__ExtraInstMapDelta_39, (MR_Integer) 1, (MR_Integer) 0, &hlds__goal_util__ExtraGoalInfo_40);
    }
#line 1523 "goal_util.m"
    {
#line 1523 "goal_util.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__goal_util__CaseGoal_13, &hlds__goal_util__CaseGoalConj_41);
    }
#line 1524 "goal_util.m"
    {
#line 1524 "goal_util.m"
      hlds__goal_util__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1524 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_82_82, 0) = ((MR_Box) (hlds__goal_util__ExtraGoalExpr_36));
#line 1524 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_82_82, 1) = ((MR_Box) (hlds__goal_util__ExtraGoalInfo_40));
#line 1524 "goal_util.m"
    }
#line 1524 "goal_util.m"
    {
#line 1524 "goal_util.m"
      hlds__goal_util__GoalList_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__GoalList_42, 0) = ((MR_Box) (hlds__goal_util__V_82_82));
#line 1524 "goal_util.m"
      MR_hl_field(MR_mktag(1), hlds__goal_util__GoalList_42, 1) = ((MR_Box) (hlds__goal_util__CaseGoalConj_41));
#line 1524 "goal_util.m"
    }
#line 1528 "goal_util.m"
    hlds__goal_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__CaseGoal_13, (MR_Integer) 0)));
#line 1528 "goal_util.m"
    hlds__goal_util__CaseGoalInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__CaseGoal_13, (MR_Integer) 1)));
#line 1529 "goal_util.m"
    {
#line 1529 "goal_util.m"
      hlds__goal_util__CaseNonLocals0_45 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__goal_util__CaseGoalInfo_44);
    }
#line 1530 "goal_util.m"
    {
#line 1530 "goal_util.m"
      parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_89_89, hlds__goal_util__Var_12, hlds__goal_util__CaseNonLocals0_45, &hlds__goal_util__CaseNonLocals_46);
    }
#line 1531 "goal_util.m"
    {
#line 1531 "goal_util.m"
      hlds__goal_util__CaseInstMapDelta_47 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__CaseGoalInfo_44);
    }
#line 1532 "goal_util.m"
    {
#line 1532 "goal_util.m"
      hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(hlds__goal_util__ExtraInstMapDelta_39, hlds__goal_util__CaseInstMapDelta_47, (MR_Integer) 2, &hlds__goal_util__InstMapDelta_48);
    }
#line 1534 "goal_util.m"
    {
#line 1534 "goal_util.m"
      hlds__goal_util__CaseDetism0_49 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_util__CaseGoalInfo_44);
    }
#line 1535 "goal_util.m"
    {
#line 1535 "goal_util.m"
      parse_tree__prog_detism__det_conjunction_detism_3_p_0((MR_Integer) 1, hlds__goal_util__CaseDetism0_49, &hlds__goal_util__Detism_50);
    }
#line 1536 "goal_util.m"
    {
#line 1536 "goal_util.m"
      hlds__goal_util__CasePurity_51 = hlds__hlds_goal__goal_info_get_purity_1_f_0(hlds__goal_util__CaseGoalInfo_44);
    }
#line 1537 "goal_util.m"
    {
#line 1537 "goal_util.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__goal_util__CaseNonLocals_46, hlds__goal_util__InstMapDelta_48, hlds__goal_util__Detism_50, hlds__goal_util__CasePurity_51, &hlds__goal_util__CombinedGoalInfo_52);
    }
#line 1539 "goal_util.m"
    {
#line 1539 "goal_util.m"
      hlds__goal_util__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1539 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1539 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__V_85_85, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1539 "goal_util.m"
      MR_hl_field(MR_mktag(3), hlds__goal_util__V_85_85, 2) = ((MR_Box) (hlds__goal_util__GoalList_42));
#line 1539 "goal_util.m"
    }
#line 1539 "goal_util.m"
    {
#line 1539 "goal_util.m"
      MR_Word base;
#line 1539 "goal_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1539 "goal_util.m"
      *hlds__goal_util__Disjunct_16 = base;
#line 1539 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__V_85_85));
#line 1539 "goal_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__CombinedGoalInfo_52));
#line 1539 "goal_util.m"
    }
#line 1490 "goal_util.m"
  }
#line 258 "goal_util.m"
}

#line 1483 "goal_util.m"
static void MR_CALL 
hlds__goal_util__switch_to_disjunction_10_p_0_1(
#line 1483 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1483 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 1483 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_2,
#line 1483 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_3,
#line 1483 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_4,
#line 1483 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_5,
#line 1483 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_6,
#line 1483 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_7,
#line 1483 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_8)
#line 1483 "goal_util.m"
{
#line 1483 "goal_util.m"
  {
#line 1483 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 1483 "goal_util.m"
    MR_Word hlds__goal_util__conv3_Disjunct_16;
#line 1483 "goal_util.m"
    MR_Word hlds__goal_util__conv2_STATE_VARIABLE_VarSet_54;
#line 1483 "goal_util.m"
    MR_Word hlds__goal_util__conv1_STATE_VARIABLE_VarTypes_56;
#line 1483 "goal_util.m"
    MR_Word hlds__goal_util__conv0_STATE_VARIABLE_ModuleInfo_58;

#line 1483 "goal_util.m"
    {
#line 1483 "goal_util.m"
      hlds__goal_util__case_to_disjunct_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 5))), ((MR_Word) hlds__goal_util__wrapper_arg_1), &hlds__goal_util__conv3_Disjunct_16, ((MR_Word) hlds__goal_util__wrapper_arg_3), &hlds__goal_util__conv2_STATE_VARIABLE_VarSet_54, ((MR_Word) hlds__goal_util__wrapper_arg_5), &hlds__goal_util__conv1_STATE_VARIABLE_VarTypes_56, ((MR_Word) hlds__goal_util__wrapper_arg_7), &hlds__goal_util__conv0_STATE_VARIABLE_ModuleInfo_58);
    }
#line 1483 "goal_util.m"
    *hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv3_Disjunct_16));
#line 1483 "goal_util.m"
    *hlds__goal_util__wrapper_arg_4 = ((MR_Box) (hlds__goal_util__conv2_STATE_VARIABLE_VarSet_54));
#line 1483 "goal_util.m"
    *hlds__goal_util__wrapper_arg_6 = ((MR_Box) (hlds__goal_util__conv1_STATE_VARIABLE_VarTypes_56));
#line 1483 "goal_util.m"
    *hlds__goal_util__wrapper_arg_8 = ((MR_Box) (hlds__goal_util__conv0_STATE_VARIABLE_ModuleInfo_58));
#line 1483 "goal_util.m"
  }
#line 1483 "goal_util.m"
}

#line 250 "goal_util.m"
void MR_CALL 
hlds__goal_util__switch_to_disjunction_10_p_0(
#line 250 "goal_util.m"
  MR_Word hlds__goal_util__Var_1,
#line 250 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__2_2,
#line 250 "goal_util.m"
  MR_Word hlds__goal_util__InstMap_3,
#line 250 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__4_4,
#line 250 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0_5,
#line 250 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarSet_6,
#line 250 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0_7,
#line 250 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarTypes_8,
#line 250 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_9,
#line 250 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_ModuleInfo_10)
#line 250 "goal_util.m"
{
#line 1477 "goal_util.m"
  {
#line 1477 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 1477 "goal_util.m"
    if ((hlds__goal_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1477 "goal_util.m"
      {
#line 1477 "goal_util.m"
        *hlds__goal_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1477 "goal_util.m"
        *hlds__goal_util__STATE_VARIABLE_ModuleInfo_10 = hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_9;
#line 1477 "goal_util.m"
        *hlds__goal_util__STATE_VARIABLE_VarTypes_8 = hlds__goal_util__STATE_VARIABLE_VarTypes_0_7;
#line 1477 "goal_util.m"
        *hlds__goal_util__STATE_VARIABLE_VarSet_6 = hlds__goal_util__STATE_VARIABLE_VarSet_0_5;
#line 1477 "goal_util.m"
      }
#line 1477 "goal_util.m"
    else
#line 1479 "goal_util.m"
      {
#line 1479 "goal_util.m"
        MR_Word hlds__goal_util__TypeCtorInfo_62_62;
#line 1479 "goal_util.m"
        MR_Word hlds__goal_util__Case_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1479 "goal_util.m"
        MR_Word hlds__goal_util__Cases_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1479 "goal_util.m"
        MR_Word hlds__goal_util__MainConsId_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_23, (MR_Integer) 0)));
#line 1479 "goal_util.m"
        MR_Word hlds__goal_util__OtherConsIds_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_23, (MR_Integer) 1)));
#line 1479 "goal_util.m"
        MR_Word hlds__goal_util__CaseGoal_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_23, (MR_Integer) 2)));
#line 1479 "goal_util.m"
        MR_Word hlds__goal_util__MainDisjunctGoal_33;
#line 1479 "goal_util.m"
        MR_Word hlds__goal_util__OtherDisjunctGoals_34;
#line 1479 "goal_util.m"
        MR_Word hlds__goal_util__CasesGoals_35;
#line 1479 "goal_util.m"
        MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_42_42;
#line 1479 "goal_util.m"
        MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_43_43;
#line 1479 "goal_util.m"
        MR_Word hlds__goal_util__STATE_VARIABLE_ModuleInfo_44_44;
#line 1479 "goal_util.m"
        MR_Word hlds__goal_util__V_45_45;
#line 1479 "goal_util.m"
        MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_46_46;
#line 1479 "goal_util.m"
        MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_47_47;
#line 1479 "goal_util.m"
        MR_Word hlds__goal_util__STATE_VARIABLE_ModuleInfo_48_48;
#line 1479 "goal_util.m"
        MR_Word hlds__goal_util__V_52_52;
#line 1483 "goal_util.m"
        MR_Box hlds__goal_util__conv6_STATE_VARIABLE_VarSet_46_46;
#line 1483 "goal_util.m"
        MR_Box hlds__goal_util__conv5_STATE_VARIABLE_VarTypes_47_47;
#line 1483 "goal_util.m"
        MR_Box hlds__goal_util__conv4_STATE_VARIABLE_ModuleInfo_48_48;

#line 1481 "goal_util.m"
        {
#line 1481 "goal_util.m"
          hlds__goal_util__case_to_disjunct_11_p_0(hlds__goal_util__Var_1, hlds__goal_util__CaseGoal_32, hlds__goal_util__InstMap_3, hlds__goal_util__MainConsId_30, &hlds__goal_util__MainDisjunctGoal_33, hlds__goal_util__STATE_VARIABLE_VarSet_0_5, &hlds__goal_util__STATE_VARIABLE_VarSet_42_42, hlds__goal_util__STATE_VARIABLE_VarTypes_0_7, &hlds__goal_util__STATE_VARIABLE_VarTypes_43_43, hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_9, &hlds__goal_util__STATE_VARIABLE_ModuleInfo_44_44);
        }
#line 1483 "goal_util.m"
        {
#line 1483 "goal_util.m"
          hlds__goal_util__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1483 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__V_45_45, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_6[0]));
#line 1483 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__V_45_45, 1) = ((MR_Box) (hlds__goal_util__switch_to_disjunction_10_p_0_1));
#line 1483 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1483 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__V_45_45, 3) = ((MR_Box) (hlds__goal_util__Var_1));
#line 1483 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__V_45_45, 4) = ((MR_Box) (hlds__goal_util__CaseGoal_32));
#line 1483 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__V_45_45, 5) = ((MR_Box) (hlds__goal_util__InstMap_3));
#line 1483 "goal_util.m"
        }
#line 16081 "hlds.goal_util.c"
        hlds__goal_util__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1483 "goal_util.m"
        {
#line 1483 "goal_util.m"
          mercury__list__map_foldl3_9_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, hlds__goal_util__TypeCtorInfo_62_62, (MR_Word) &hlds__goal_util_scalar_common_1[3], (MR_Word) &hlds__goal_util_scalar_common_3[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, hlds__goal_util__V_45_45, hlds__goal_util__OtherConsIds_31, &hlds__goal_util__OtherDisjunctGoals_34, ((MR_Box) (hlds__goal_util__STATE_VARIABLE_VarSet_42_42)), &hlds__goal_util__conv6_STATE_VARIABLE_VarSet_46_46, ((MR_Box) (hlds__goal_util__STATE_VARIABLE_VarTypes_43_43)), &hlds__goal_util__conv5_STATE_VARIABLE_VarTypes_47_47, ((MR_Box) (hlds__goal_util__STATE_VARIABLE_ModuleInfo_44_44)), &hlds__goal_util__conv4_STATE_VARIABLE_ModuleInfo_48_48);
        }
#line 1483 "goal_util.m"
        hlds__goal_util__STATE_VARIABLE_VarSet_46_46 = ((MR_Word) hlds__goal_util__conv6_STATE_VARIABLE_VarSet_46_46);
#line 1483 "goal_util.m"
        hlds__goal_util__STATE_VARIABLE_VarTypes_47_47 = ((MR_Word) hlds__goal_util__conv5_STATE_VARIABLE_VarTypes_47_47);
#line 1483 "goal_util.m"
        hlds__goal_util__STATE_VARIABLE_ModuleInfo_48_48 = ((MR_Word) hlds__goal_util__conv4_STATE_VARIABLE_ModuleInfo_48_48);
#line 1485 "goal_util.m"
        {
#line 1485 "goal_util.m"
          hlds__goal_util__switch_to_disjunction_10_p_0(hlds__goal_util__Var_1, hlds__goal_util__Cases_24, hlds__goal_util__InstMap_3, &hlds__goal_util__CasesGoals_35, hlds__goal_util__STATE_VARIABLE_VarSet_46_46, hlds__goal_util__STATE_VARIABLE_VarSet_6, hlds__goal_util__STATE_VARIABLE_VarTypes_47_47, hlds__goal_util__STATE_VARIABLE_VarTypes_8, hlds__goal_util__STATE_VARIABLE_ModuleInfo_48_48, hlds__goal_util__STATE_VARIABLE_ModuleInfo_10);
        }
#line 1487 "goal_util.m"
        {
#line 1487 "goal_util.m"
          hlds__goal_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1487 "goal_util.m"
          MR_hl_field(MR_mktag(1), hlds__goal_util__V_52_52, 0) = ((MR_Box) (hlds__goal_util__MainDisjunctGoal_33));
#line 1487 "goal_util.m"
          MR_hl_field(MR_mktag(1), hlds__goal_util__V_52_52, 1) = ((MR_Box) (hlds__goal_util__OtherDisjunctGoals_34));
#line 1487 "goal_util.m"
        }
#line 1487 "goal_util.m"
        {
#line 1487 "goal_util.m"
          *hlds__goal_util__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(hlds__goal_util__TypeCtorInfo_62_62, hlds__goal_util__V_52_52, hlds__goal_util__CasesGoals_35);
        }
#line 1479 "goal_util.m"
      }
#line 1477 "goal_util.m"
  }
#line 250 "goal_util.m"
}

#line 242 "goal_util.m"
void MR_CALL 
hlds__goal_util__goal_is_atomic_2_p_0(
#line 242 "goal_util.m"
  MR_Word hlds__goal_util__Goal_3,
#line 242 "goal_util.m"
  MR_Word * hlds__goal_util__GoalIsAtomic_4)
#line 242 "goal_util.m"
{
#line 1884 "goal_util.m"
  {
#line 1884 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1884 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 0)));
#line 1885 "goal_util.m"
    MR_Word hlds__goal_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 1)));

#line 1893 "goal_util.m"
#line 1893 "goal_util.m"
    switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_5)) {
#line 1893 "goal_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1893 "goal_util.m"
      case (MR_Integer) 0:
#line 1901 "goal_util.m"
        *hlds__goal_util__GoalIsAtomic_4 = (MR_Integer) 1;
#line 1893 "goal_util.m"
        break;
#line 1893 "goal_util.m"
      case (MR_Integer) 1:
#line 1893 "goal_util.m"
      case (MR_Integer) 2:
#line 1892 "goal_util.m"
        *hlds__goal_util__GoalIsAtomic_4 = (MR_Integer) 0;
#line 1893 "goal_util.m"
        break;
#line 1893 "goal_util.m"
      case (MR_Integer) 3:
#line 1893 "goal_util.m"
#line 1893 "goal_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 0)))) {
#line 1893 "goal_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1893 "goal_util.m"
          case (MR_Integer) 0:
#line 1893 "goal_util.m"
          case (MR_Integer) 1:
#line 1892 "goal_util.m"
            *hlds__goal_util__GoalIsAtomic_4 = (MR_Integer) 0;
#line 1893 "goal_util.m"
            break;
#line 1893 "goal_util.m"
          case (MR_Integer) 2:
#line 1893 "goal_util.m"
          case (MR_Integer) 3:
#line 1893 "goal_util.m"
          case (MR_Integer) 4:
#line 1893 "goal_util.m"
          case (MR_Integer) 5:
#line 1893 "goal_util.m"
          case (MR_Integer) 6:
#line 1901 "goal_util.m"
            *hlds__goal_util__GoalIsAtomic_4 = (MR_Integer) 1;
#line 1893 "goal_util.m"
            break;
#line 1893 "goal_util.m"
          case (MR_Integer) 7:
#line 1903 "goal_util.m"
            {
#line 1904 "goal_util.m"
              {
#line 1904 "goal_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "predicate \140hlds.goal_util.goal_is_atomic\'/2", (MR_String) "shorthand");
#line 1904 "goal_util.m"
                return;
              }
#line 1903 "goal_util.m"
            }
#line 1893 "goal_util.m"
            break;
#line 1893 "goal_util.m"
        }
#line 1893 "goal_util.m"
        break;
#line 1893 "goal_util.m"
    }
#line 1884 "goal_util.m"
  }
#line 242 "goal_util.m"
}

#line 1881 "goal_util.m"
static void MR_CALL 
hlds__goal_util__pred_proc_ids_from_goal_2_p_0_1(
#line 1881 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1881 "goal_util.m"
{
#line 1881 "goal_util.m"
  {
#line 1881 "goal_util.m"
    struct hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1881 "goal_util.m"
    *((hlds__goal_util__env_ptr)->hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((hlds__goal_util__env_ptr)->hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__conv0_PredProcId_5));
#line 1881 "goal_util.m"
    {
#line 1881 "goal_util.m"
      ((hlds__goal_util__env_ptr)->hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__cont_env_ptr);
    }
#line 1881 "goal_util.m"
  }
#line 1881 "goal_util.m"
}

#line 1881 "goal_util.m"
static void MR_CALL 
hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2(
#line 1881 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1881 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 1881 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1881 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 1881 "goal_util.m"
{
#line 1881 "goal_util.m"
  {
#line 1881 "goal_util.m"
    struct hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0_s hlds__goal_util__env;

#line 1881 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__wrapper_arg_1 = hlds__goal_util__wrapper_arg_1;
#line 1881 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__cont = hlds__goal_util__cont;
#line 1881 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
#line 1881 "goal_util.m"
    {
#line 1881 "goal_util.m"
      MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;

#line 1881 "goal_util.m"
      {
#line 1881 "goal_util.m"
        hlds__goal_util__goal_calls_2_p_1(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), &(hlds__goal_util__env).hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__conv0_PredProcId_5, hlds__goal_util__pred_proc_ids_from_goal_2_p_0_1, &hlds__goal_util__env);
      }
#line 1881 "goal_util.m"
    }
#line 1881 "goal_util.m"
  }
#line 1881 "goal_util.m"
}

#line 234 "goal_util.m"
void MR_CALL 
hlds__goal_util__pred_proc_ids_from_goal_2_p_0(
#line 234 "goal_util.m"
  MR_Word hlds__goal_util__Goal_3,
#line 234 "goal_util.m"
  MR_Word * hlds__goal_util__PredProcIds_4)
#line 234 "goal_util.m"
{
#line 1880 "goal_util.m"
  {
#line 1880 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1880 "goal_util.m"
    MR_Word hlds__goal_util__P_5;

#line 1881 "goal_util.m"
    {
#line 1881 "goal_util.m"
      hlds__goal_util__P_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1881 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[2]));
#line 1881 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 1) = ((MR_Box) (hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2));
#line 1881 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1881 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 3) = ((MR_Box) (hlds__goal_util__Goal_3));
#line 1881 "goal_util.m"
    }
#line 1882 "goal_util.m"
    {
#line 1882 "goal_util.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, hlds__goal_util__P_5, hlds__goal_util__PredProcIds_4);
    }
#line 1880 "goal_util.m"
  }
#line 234 "goal_util.m"
}

#line 1870 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_from_goals_2_p_0_1(
#line 1870 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1870 "goal_util.m"
{
#line 1870 "goal_util.m"
  {
#line 1870 "goal_util.m"
    struct hlds__goal_util__predids_from_goals_2_p_0_2_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__predids_from_goals_2_p_0_2_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1870 "goal_util.m"
    *((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goals_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goals_2_p_0_2_env_0__conv0_PredId_5));
#line 1870 "goal_util.m"
    {
#line 1870 "goal_util.m"
      ((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goals_2_p_0_2_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goals_2_p_0_2_env_0__cont_env_ptr);
    }
#line 1870 "goal_util.m"
  }
#line 1870 "goal_util.m"
}

#line 1870 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_from_goals_2_p_0_2(
#line 1870 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1870 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 1870 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1870 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 1870 "goal_util.m"
{
#line 1870 "goal_util.m"
  {
#line 1870 "goal_util.m"
    struct hlds__goal_util__predids_from_goals_2_p_0_2_env_0_s hlds__goal_util__env;

#line 1870 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__predids_from_goals_2_p_0_2_env_0__wrapper_arg_1 = hlds__goal_util__wrapper_arg_1;
#line 1870 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__predids_from_goals_2_p_0_2_env_0__cont = hlds__goal_util__cont;
#line 1870 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__predids_from_goals_2_p_0_2_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
#line 1870 "goal_util.m"
    {
#line 1870 "goal_util.m"
      MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;

#line 1870 "goal_util.m"
      {
#line 1870 "goal_util.m"
        hlds__goal_util__goal_calls_pred_id_2_p_1(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), &(hlds__goal_util__env).hlds__goal_util__predids_from_goals_2_p_0_2_env_0__conv0_PredId_5, hlds__goal_util__predids_from_goals_2_p_0_1, &hlds__goal_util__env);
      }
#line 1870 "goal_util.m"
    }
#line 1870 "goal_util.m"
  }
#line 1870 "goal_util.m"
}

#line 230 "goal_util.m"
void MR_CALL 
hlds__goal_util__predids_from_goals_2_p_0(
#line 230 "goal_util.m"
  MR_Word hlds__goal_util__Goals_3,
#line 230 "goal_util.m"
  MR_Word * hlds__goal_util__PredIds_4)
#line 230 "goal_util.m"
{
#line 1858 "goal_util.m"
  {
#line 1858 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 1858 "goal_util.m"
    if ((hlds__goal_util__Goals_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1859 "goal_util.m"
      *hlds__goal_util__PredIds_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1858 "goal_util.m"
    else
#line 1861 "goal_util.m"
      {
#line 1861 "goal_util.m"
        MR_Word hlds__goal_util__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Goals_3, (MR_Integer) 0)));
#line 1861 "goal_util.m"
        MR_Word hlds__goal_util__Rest_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Goals_3, (MR_Integer) 1)));
#line 1861 "goal_util.m"
        MR_Word hlds__goal_util__PredIds0_7;
#line 1861 "goal_util.m"
        MR_Word hlds__goal_util__PredIds1_8;
#line 1861 "goal_util.m"
        MR_Word hlds__goal_util__P_12;

#line 1870 "goal_util.m"
        {
#line 1870 "goal_util.m"
          hlds__goal_util__P_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1870 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__P_12, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[0]));
#line 1870 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__P_12, 1) = ((MR_Box) (hlds__goal_util__predids_from_goals_2_p_0_2));
#line 1870 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__P_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1870 "goal_util.m"
          MR_hl_field(MR_mktag(0), hlds__goal_util__P_12, 3) = ((MR_Box) (hlds__goal_util__Goal_5));
#line 1870 "goal_util.m"
        }
#line 1871 "goal_util.m"
        {
#line 1871 "goal_util.m"
          mercury__solutions__solutions_2_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__goal_util__P_12, &hlds__goal_util__PredIds0_7);
        }
#line 1863 "goal_util.m"
        {
#line 1863 "goal_util.m"
          hlds__goal_util__predids_from_goals_2_p_0(hlds__goal_util__Rest_6, &hlds__goal_util__PredIds1_8);
        }
#line 1864 "goal_util.m"
        {
#line 1864 "goal_util.m"
          *hlds__goal_util__PredIds_4 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__goal_util__PredIds0_7, hlds__goal_util__PredIds1_8);
        }
#line 1861 "goal_util.m"
      }
#line 1858 "goal_util.m"
  }
#line 230 "goal_util.m"
}

#line 1874 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_with_args_from_goal_2_p_0_1(
#line 1874 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1874 "goal_util.m"
{
#line 1874 "goal_util.m"
  {
#line 1874 "goal_util.m"
    struct hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1874 "goal_util.m"
    *((hlds__goal_util__env_ptr)->hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((hlds__goal_util__env_ptr)->hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__conv0_LambdaHeadVar__1_14));
#line 1874 "goal_util.m"
    {
#line 1874 "goal_util.m"
      ((hlds__goal_util__env_ptr)->hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__cont_env_ptr);
    }
#line 1874 "goal_util.m"
  }
#line 1874 "goal_util.m"
}

#line 1874 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_with_args_from_goal_2_p_0_2(
#line 1874 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1874 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 1874 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1874 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 1874 "goal_util.m"
{
#line 1874 "goal_util.m"
  {
#line 1874 "goal_util.m"
    struct hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0_s hlds__goal_util__env;

#line 1874 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__wrapper_arg_1 = hlds__goal_util__wrapper_arg_1;
#line 1874 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__cont = hlds__goal_util__cont;
#line 1874 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
#line 1874 "goal_util.m"
    {
#line 1874 "goal_util.m"
      MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;

#line 1874 "goal_util.m"
      {
#line 1874 "goal_util.m"
        hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1874__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), &(hlds__goal_util__env).hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__conv0_LambdaHeadVar__1_14, hlds__goal_util__predids_with_args_from_goal_2_p_0_1, &hlds__goal_util__env);
      }
#line 1874 "goal_util.m"
    }
#line 1874 "goal_util.m"
  }
#line 1874 "goal_util.m"
}

#line 225 "goal_util.m"
void MR_CALL 
hlds__goal_util__predids_with_args_from_goal_2_p_0(
#line 225 "goal_util.m"
  MR_Word hlds__goal_util__Goal_3,
#line 225 "goal_util.m"
  MR_Word * hlds__goal_util__List_4)
#line 225 "goal_util.m"
{
#line 1873 "goal_util.m"
  {
#line 1873 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1873 "goal_util.m"
    MR_Word hlds__goal_util__V_13_13;

#line 1874 "goal_util.m"
    {
#line 1874 "goal_util.m"
      hlds__goal_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1874 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_13_13, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[1]));
#line 1874 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_13_13, 1) = ((MR_Box) (hlds__goal_util__predids_with_args_from_goal_2_p_0_2));
#line 1874 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1874 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_13_13, 3) = ((MR_Box) (hlds__goal_util__Goal_3));
#line 1874 "goal_util.m"
    }
#line 1874 "goal_util.m"
    {
#line 1874 "goal_util.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &hlds__goal_util_scalar_common_2[0], hlds__goal_util__V_13_13, hlds__goal_util__List_4);
    }
#line 1873 "goal_util.m"
  }
#line 225 "goal_util.m"
}

#line 1870 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_from_goal_2_p_0_1(
#line 1870 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1870 "goal_util.m"
{
#line 1870 "goal_util.m"
  {
#line 1870 "goal_util.m"
    struct hlds__goal_util__predids_from_goal_2_p_0_2_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__predids_from_goal_2_p_0_2_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1870 "goal_util.m"
    *((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goal_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goal_2_p_0_2_env_0__conv0_PredId_5));
#line 1870 "goal_util.m"
    {
#line 1870 "goal_util.m"
      ((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goal_2_p_0_2_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goal_2_p_0_2_env_0__cont_env_ptr);
    }
#line 1870 "goal_util.m"
  }
#line 1870 "goal_util.m"
}

#line 1870 "goal_util.m"
static void MR_CALL 
hlds__goal_util__predids_from_goal_2_p_0_2(
#line 1870 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 1870 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 1870 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 1870 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 1870 "goal_util.m"
{
#line 1870 "goal_util.m"
  {
#line 1870 "goal_util.m"
    struct hlds__goal_util__predids_from_goal_2_p_0_2_env_0_s hlds__goal_util__env;

#line 1870 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__predids_from_goal_2_p_0_2_env_0__wrapper_arg_1 = hlds__goal_util__wrapper_arg_1;
#line 1870 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__predids_from_goal_2_p_0_2_env_0__cont = hlds__goal_util__cont;
#line 1870 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__predids_from_goal_2_p_0_2_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
#line 1870 "goal_util.m"
    {
#line 1870 "goal_util.m"
      MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;

#line 1870 "goal_util.m"
      {
#line 1870 "goal_util.m"
        hlds__goal_util__goal_calls_pred_id_2_p_1(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), &(hlds__goal_util__env).hlds__goal_util__predids_from_goal_2_p_0_2_env_0__conv0_PredId_5, hlds__goal_util__predids_from_goal_2_p_0_1, &hlds__goal_util__env);
      }
#line 1870 "goal_util.m"
    }
#line 1870 "goal_util.m"
  }
#line 1870 "goal_util.m"
}

#line 221 "goal_util.m"
void MR_CALL 
hlds__goal_util__predids_from_goal_2_p_0(
#line 221 "goal_util.m"
  MR_Word hlds__goal_util__Goal_3,
#line 221 "goal_util.m"
  MR_Word * hlds__goal_util__PredIds_4)
#line 221 "goal_util.m"
{
#line 1867 "goal_util.m"
  {
#line 1867 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1867 "goal_util.m"
    MR_Word hlds__goal_util__P_5;

#line 1870 "goal_util.m"
    {
#line 1870 "goal_util.m"
      hlds__goal_util__P_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1870 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[0]));
#line 1870 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 1) = ((MR_Box) (hlds__goal_util__predids_from_goal_2_p_0_2));
#line 1870 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1870 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 3) = ((MR_Box) (hlds__goal_util__Goal_3));
#line 1870 "goal_util.m"
    }
#line 1871 "goal_util.m"
    {
#line 1871 "goal_util.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__goal_util__P_5, hlds__goal_util__PredIds_4);
    }
#line 1867 "goal_util.m"
  }
#line 221 "goal_util.m"
}

#line 1468 "goal_util.m"
static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_1(
#line 1468 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1468 "goal_util.m"
{
#line 1468 "goal_util.m"
  {
#line 1468 "goal_util.m"
    struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1468 "goal_util.m"
    *((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = ((MR_Word) (hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__conv0_Goal_2);
#line 1468 "goal_util.m"
    {
#line 1468 "goal_util.m"
      ((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
    }
#line 1468 "goal_util.m"
  }
#line 1468 "goal_util.m"
}

#line 1470 "goal_util.m"
static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_2(
#line 1470 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1470 "goal_util.m"
{
#line 1470 "goal_util.m"
  {
#line 1470 "goal_util.m"
    struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1470 "goal_util.m"
    *((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = ((MR_Word) (hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__conv1_Goal_2);
#line 1470 "goal_util.m"
    {
#line 1470 "goal_util.m"
      ((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
    }
#line 1470 "goal_util.m"
  }
#line 1470 "goal_util.m"
}

#line 1472 "goal_util.m"
static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_4(
#line 1472 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1472 "goal_util.m"
{
#line 1472 "goal_util.m"
  {
#line 1472 "goal_util.m"
    struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1472 "goal_util.m"
    (hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Case_20 = ((MR_Word) (hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__conv2_Case_20);
#line 1472 "goal_util.m"
    {
#line 1472 "goal_util.m"
      hlds__goal_util__direct_subgoal_2_p_0_3(hlds__goal_util__env_ptr);
    }
#line 1472 "goal_util.m"
  }
#line 1472 "goal_util.m"
}

#line 1471 "goal_util.m"
static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_3(
#line 1471 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1471 "goal_util.m"
{
#line 1471 "goal_util.m"
  {
#line 1471 "goal_util.m"
    struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1471 "goal_util.m"
    {
#line 1473 "goal_util.m"
      MR_Word hlds__goal_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Case_20, (MR_Integer) 0)));
#line 1473 "goal_util.m"
      MR_Word hlds__goal_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Case_20, (MR_Integer) 1)));

#line 1473 "goal_util.m"
      *((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Case_20, (MR_Integer) 2)));
#line 1473 "goal_util.m"
      {
#line 1473 "goal_util.m"
        ((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
      }
#line 1471 "goal_util.m"
    }
#line 1471 "goal_util.m"
  }
#line 1471 "goal_util.m"
}

#line 217 "goal_util.m"
void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0(
#line 217 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 217 "goal_util.m"
  MR_Word * hlds__goal_util__Goal_2,
#line 217 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 217 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 217 "goal_util.m"
{
#line 217 "goal_util.m"
  {
#line 217 "goal_util.m"
    struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s hlds__goal_util__env;

#line 217 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2 = hlds__goal_util__Goal_2;
#line 217 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont = hlds__goal_util__cont;
#line 217 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
#line 1460 "goal_util.m"
    {
#line 1460 "goal_util.m"
      MR_bool hlds__goal_util__succeeded;

#line 1460 "goal_util.m"
#line 1460 "goal_util.m"
      switch (MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) {
#line 1460 "goal_util.m"
        case (MR_Integer) 0:
#line 1461 "goal_util.m"
          {
#line 1461 "goal_util.m"
            *((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = (MR_Word) MR_body(((MR_Word) hlds__goal_util__HeadVar__1_1), (MR_Integer) 0);
#line 1461 "goal_util.m"
            {
#line 1461 "goal_util.m"
              ((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
            }
#line 1461 "goal_util.m"
          }
#line 1460 "goal_util.m"
          break;
#line 1460 "goal_util.m"
        case (MR_Integer) 3:
#line 1460 "goal_util.m"
#line 1460 "goal_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 1460 "goal_util.m"
            case (MR_Integer) 2:
#line 1467 "goal_util.m"
              {
#line 1467 "goal_util.m"
                MR_Word hlds__goal_util__ConjList_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1467 "goal_util.m"
                MR_Word hlds__goal_util___ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1468 "goal_util.m"
                {
#line 1468 "goal_util.m"
                  mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__conv0_Goal_2, hlds__goal_util__ConjList_12, hlds__goal_util__direct_subgoal_2_p_0_1, &hlds__goal_util__env);
                }
#line 1467 "goal_util.m"
              }
#line 1460 "goal_util.m"
              break;
#line 1460 "goal_util.m"
            case (MR_Integer) 3:
#line 1469 "goal_util.m"
              {
#line 1469 "goal_util.m"
                MR_Word hlds__goal_util__DisjList_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1470 "goal_util.m"
                {
#line 1470 "goal_util.m"
                  mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__conv1_Goal_2, hlds__goal_util__DisjList_14, hlds__goal_util__direct_subgoal_2_p_0_2, &hlds__goal_util__env);
                }
#line 1469 "goal_util.m"
              }
#line 1460 "goal_util.m"
              break;
#line 1460 "goal_util.m"
            case (MR_Integer) 4:
#line 1471 "goal_util.m"
              {
#line 1471 "goal_util.m"
                MR_Word hlds__goal_util__CaseList_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1471 "goal_util.m"
                MR_Word hlds__goal_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1471 "goal_util.m"
                MR_Word hlds__goal_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));

#line 1472 "goal_util.m"
                {
#line 1472 "goal_util.m"
                  mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, &(hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__conv2_Case_20, hlds__goal_util__CaseList_18, hlds__goal_util__direct_subgoal_2_p_0_4, &hlds__goal_util__env);
                }
#line 1471 "goal_util.m"
              }
#line 1460 "goal_util.m"
              break;
#line 1460 "goal_util.m"
            case (MR_Integer) 5:
#line 1460 "goal_util.m"
              {
#line 1460 "goal_util.m"
                MR_Word hlds__goal_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1460 "goal_util.m"
                *((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1460 "goal_util.m"
                {
#line 1460 "goal_util.m"
                  ((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
                }
#line 1460 "goal_util.m"
              }
#line 1460 "goal_util.m"
              break;
#line 1460 "goal_util.m"
            case (MR_Integer) 6:
#line 1462 "goal_util.m"
              {
#line 1462 "goal_util.m"
                MR_Word hlds__goal_util__Cond_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1462 "goal_util.m"
                MR_Word hlds__goal_util__Then_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1462 "goal_util.m"
                MR_Word hlds__goal_util__Else_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 4)));
#line 1462 "goal_util.m"
                MR_Word hlds__goal_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1463 "goal_util.m"
                *((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = hlds__goal_util__Cond_7;
#line 1463 "goal_util.m"
                {
#line 1463 "goal_util.m"
                  ((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
                }
#line 1464 "goal_util.m"
                *((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = hlds__goal_util__Then_8;
#line 1464 "goal_util.m"
                {
#line 1464 "goal_util.m"
                  ((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
                }
#line 1465 "goal_util.m"
                *((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = hlds__goal_util__Else_9;
#line 1465 "goal_util.m"
                {
#line 1465 "goal_util.m"
                  ((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
                }
#line 1462 "goal_util.m"
              }
#line 1460 "goal_util.m"
              break;
#line 1460 "goal_util.m"
          }
#line 1460 "goal_util.m"
          break;
#line 1460 "goal_util.m"
      }
#line 1460 "goal_util.m"
    }
#line 217 "goal_util.m"
  }
#line 217 "goal_util.m"
}

#line 1456 "goal_util.m"
static void MR_CALL 
hlds__goal_util__goal_contains_goal_2_p_0_1(
#line 1456 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 1456 "goal_util.m"
{
#line 1456 "goal_util.m"
  {
#line 1456 "goal_util.m"
    struct hlds__goal_util__goal_contains_goal_2_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__goal_contains_goal_2_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 1458 "goal_util.m"
    {
#line 1458 "goal_util.m"
      hlds__goal_util__goal_contains_goal_2_p_0((hlds__goal_util__env_ptr)->hlds__goal_util__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7, (hlds__goal_util__env_ptr)->hlds__goal_util__goal_contains_goal_2_p_0_env_0__HeadVar__2_2, (hlds__goal_util__env_ptr)->hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont, (hlds__goal_util__env_ptr)->hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont_env_ptr);
    }
#line 1456 "goal_util.m"
  }
#line 1456 "goal_util.m"
}

#line 212 "goal_util.m"
void MR_CALL 
hlds__goal_util__goal_contains_goal_2_p_0(
#line 212 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 212 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__2_2,
#line 212 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 212 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 212 "goal_util.m"
{
#line 212 "goal_util.m"
  {
#line 212 "goal_util.m"
    struct hlds__goal_util__goal_contains_goal_2_p_0_env_0_s hlds__goal_util__env;

#line 212 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__HeadVar__2_2 = hlds__goal_util__HeadVar__2_2;
#line 212 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont = hlds__goal_util__cont;
#line 212 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
#line 1455 "goal_util.m"
    {
#line 1455 "goal_util.m"
      MR_bool hlds__goal_util__succeeded;

#line 1455 "goal_util.m"
      *((hlds__goal_util__env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__HeadVar__2_2) = hlds__goal_util__HeadVar__1_1;
#line 1455 "goal_util.m"
      {
#line 1455 "goal_util.m"
        ((hlds__goal_util__env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont)((hlds__goal_util__env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont_env_ptr);
      }
#line 1456 "goal_util.m"
      {
#line 1456 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1456 "goal_util.m"
        MR_Word hlds__goal_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1457 "goal_util.m"
        {
#line 1457 "goal_util.m"
          hlds__goal_util__direct_subgoal_2_p_0(hlds__goal_util__GoalExpr_4, &(hlds__goal_util__env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7, hlds__goal_util__goal_contains_goal_2_p_0_1, &hlds__goal_util__env);
        }
#line 1456 "goal_util.m"
      }
#line 1455 "goal_util.m"
    }
#line 212 "goal_util.m"
  }
#line 212 "goal_util.m"
}

#line 206 "goal_util.m"
void MR_CALL 
hlds__goal_util__goal_contains_reconstruction_2_p_0(
#line 206 "goal_util.m"
  MR_Word hlds__goal_util__Goal_3,
#line 206 "goal_util.m"
  MR_Word * hlds__goal_util__ContainsReconstruction_4)
#line 206 "goal_util.m"
{
#line 1340 "goal_util.m"
  while (MR_TRUE)
#line 1340 "goal_util.m"
    {
#line 1340 "goal_util.m"
      /* tailcall optimized into a loop */
#line 1340 "goal_util.m"
      {
#line 1340 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;
#line 1340 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 0)));
#line 1341 "goal_util.m"
        MR_Word hlds__goal_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 1)));

#line 1345 "goal_util.m"
#line 1345 "goal_util.m"
        switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_5)) {
#line 1345 "goal_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1345 "goal_util.m"
          case (MR_Integer) 0:
#line 1364 "goal_util.m"
            {
#line 1364 "goal_util.m"
              MR_Word hlds__goal_util__SubGoal_17 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_5), (MR_Integer) 0);

#line 1365 "goal_util.m"
              /* direct tailcall eliminated */
#line 1365 "goal_util.m"
              {
#line 1365 "goal_util.m"
                MR_Word hlds__goal_util__Goal__tmp_copy_3 = hlds__goal_util__SubGoal_17;

#line 1365 "goal_util.m"
                hlds__goal_util__Goal_3 = hlds__goal_util__Goal__tmp_copy_3;
#line 1365 "goal_util.m"
              }
#line 1365 "goal_util.m"
              continue;
#line 1364 "goal_util.m"
            }
#line 1345 "goal_util.m"
            break;
#line 1345 "goal_util.m"
          case (MR_Integer) 1:
#line 1382 "goal_util.m"
            {
#line 1382 "goal_util.m"
              MR_Word hlds__goal_util__Unify_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_5, (MR_Integer) 3)));
#line 1382 "goal_util.m"
              MR_Word hlds__goal_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_5, (MR_Integer) 0)));
#line 1382 "goal_util.m"
              MR_Word hlds__goal_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));
#line 1382 "goal_util.m"
              MR_Word hlds__goal_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));
#line 1382 "goal_util.m"
              MR_Word hlds__goal_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_5, (MR_Integer) 4)));
#line 1384 "goal_util.m"
              MR_Word hlds__goal_util__HowToConstruct_30;
#line 1384 "goal_util.m"
              MR_Word hlds__goal_util__V_26_26;
#line 1384 "goal_util.m"
              MR_Word hlds__goal_util__V_27_27;
#line 1384 "goal_util.m"
              MR_Word hlds__goal_util__V_28_28;
#line 1384 "goal_util.m"
              MR_Word hlds__goal_util__V_29_29;
#line 1384 "goal_util.m"
              MR_Word hlds__goal_util__V_31_31;
#line 1384 "goal_util.m"
              MR_Word hlds__goal_util__V_32_32;
#line 1385 "goal_util.m"
              MR_Word hlds__goal_util__V_33_33;

#line 1384 "goal_util.m"
              hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__Unify_24)) == (MR_mktag((MR_Integer) 0)));
#line 1384 "goal_util.m"
              if (hlds__goal_util__succeeded)
#line 1384 "goal_util.m"
                {
#line 1384 "goal_util.m"
                  hlds__goal_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unify_24, (MR_Integer) 0)));
#line 1384 "goal_util.m"
                  hlds__goal_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unify_24, (MR_Integer) 1)));
#line 1384 "goal_util.m"
                  hlds__goal_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unify_24, (MR_Integer) 2)));
#line 1384 "goal_util.m"
                  hlds__goal_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unify_24, (MR_Integer) 3)));
#line 1384 "goal_util.m"
                  hlds__goal_util__HowToConstruct_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unify_24, (MR_Integer) 4)));
#line 1384 "goal_util.m"
                  hlds__goal_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unify_24, (MR_Integer) 5)));
#line 1384 "goal_util.m"
                  hlds__goal_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unify_24, (MR_Integer) 6)));
#line 1385 "goal_util.m"
                  hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HowToConstruct_30)) == (MR_mktag((MR_Integer) 1)));
#line 1385 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 1385 "goal_util.m"
                    hlds__goal_util__V_33_33 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__HowToConstruct_30), (MR_Integer) 1);
#line 1384 "goal_util.m"
                }
#line 1388 "goal_util.m"
              if (hlds__goal_util__succeeded)
#line 1387 "goal_util.m"
                *hlds__goal_util__ContainsReconstruction_4 = (MR_Integer) 1;
#line 1388 "goal_util.m"
              else
#line 1389 "goal_util.m"
                *hlds__goal_util__ContainsReconstruction_4 = (MR_Integer) 0;
#line 1382 "goal_util.m"
            }
#line 1345 "goal_util.m"
            break;
#line 1345 "goal_util.m"
          case (MR_Integer) 2:
#line 1396 "goal_util.m"
            *hlds__goal_util__ContainsReconstruction_4 = (MR_Integer) 0;
#line 1345 "goal_util.m"
            break;
#line 1345 "goal_util.m"
          case (MR_Integer) 3:
#line 1345 "goal_util.m"
#line 1345 "goal_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 0)))) {
#line 1345 "goal_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1345 "goal_util.m"
              case (MR_Integer) 0:
#line 1345 "goal_util.m"
              case (MR_Integer) 1:
#line 1396 "goal_util.m"
                *hlds__goal_util__ContainsReconstruction_4 = (MR_Integer) 0;
#line 1345 "goal_util.m"
                break;
#line 1345 "goal_util.m"
              case (MR_Integer) 2:
#line 1343 "goal_util.m"
                {
#line 1343 "goal_util.m"
                  MR_Word hlds__goal_util__Conjuncts_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));
#line 1343 "goal_util.m"
                  MR_Word hlds__goal_util___ConjType_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));

#line 1344 "goal_util.m"
                  {
#line 1344 "goal_util.m"
                    hlds__goal_util__goals_contain_reconstruction_2_p_0(hlds__goal_util__Conjuncts_8, hlds__goal_util__ContainsReconstruction_4);
                  }
#line 1343 "goal_util.m"
                }
#line 1345 "goal_util.m"
                break;
#line 1345 "goal_util.m"
              case (MR_Integer) 3:
#line 1346 "goal_util.m"
                {
#line 1346 "goal_util.m"
                  MR_Word hlds__goal_util__Disjuncts_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));

#line 1347 "goal_util.m"
                  {
#line 1347 "goal_util.m"
                    hlds__goal_util__goals_contain_reconstruction_2_p_0(hlds__goal_util__Disjuncts_9, hlds__goal_util__ContainsReconstruction_4);
                  }
#line 1346 "goal_util.m"
                }
#line 1345 "goal_util.m"
                break;
#line 1345 "goal_util.m"
              case (MR_Integer) 4:
#line 1349 "goal_util.m"
                {
#line 1349 "goal_util.m"
                  MR_Word hlds__goal_util__Cases_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 3)));
#line 1349 "goal_util.m"
                  MR_Word hlds__goal_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));
#line 1349 "goal_util.m"
                  MR_Word hlds__goal_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));

#line 1350 "goal_util.m"
                  {
#line 1350 "goal_util.m"
                    hlds__goal_util__cases_contain_reconstruction_2_p_0(hlds__goal_util__Cases_12, hlds__goal_util__ContainsReconstruction_4);
                  }
#line 1349 "goal_util.m"
                }
#line 1345 "goal_util.m"
                break;
#line 1345 "goal_util.m"
              case (MR_Integer) 5:
#line 1367 "goal_util.m"
                {
#line 1367 "goal_util.m"
                  MR_Word hlds__goal_util__Reason_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));
#line 1367 "goal_util.m"
                  MR_Word hlds__goal_util__SubGoal_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));
#line 1369 "goal_util.m"
                  MR_Word hlds__goal_util__FGT_20;
#line 1369 "goal_util.m"
                  MR_Word hlds__goal_util__V_19_19;

#line 1369 "goal_util.m"
                  hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_18, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1369 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 1369 "goal_util.m"
                    {
#line 1369 "goal_util.m"
                      hlds__goal_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_18, (MR_Integer) 1)));
#line 1369 "goal_util.m"
                      hlds__goal_util__FGT_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_18, (MR_Integer) 2)));
#line 1371 "goal_util.m"
#line 1371 "goal_util.m"
                      switch (hlds__goal_util__FGT_20) {
#line 1371 "goal_util.m"
                        default:
#line 1371 "goal_util.m"
                          hlds__goal_util__succeeded = MR_FALSE;
#line 1371 "goal_util.m"
                          break;
#line 1371 "goal_util.m"
                        case (MR_Integer) 1:
#line 1370 "goal_util.m"
                          hlds__goal_util__succeeded = MR_TRUE;
#line 1371 "goal_util.m"
                          break;
#line 1371 "goal_util.m"
                        case (MR_Integer) 2:
#line 1371 "goal_util.m"
                          hlds__goal_util__succeeded = MR_TRUE;
#line 1371 "goal_util.m"
                          break;
#line 1371 "goal_util.m"
                      }
#line 1369 "goal_util.m"
                    }
#line 1378 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 1377 "goal_util.m"
                    *hlds__goal_util__ContainsReconstruction_4 = (MR_Integer) 0;
#line 1378 "goal_util.m"
                  else
#line 1379 "goal_util.m"
                    {
#line 1379 "goal_util.m"
                      /* direct tailcall eliminated */
#line 1379 "goal_util.m"
                      {
#line 1379 "goal_util.m"
                        MR_Word hlds__goal_util__Goal__tmp_copy_3 = hlds__goal_util__SubGoal_71;

#line 1379 "goal_util.m"
                        hlds__goal_util__Goal_3 = hlds__goal_util__Goal__tmp_copy_3;
#line 1379 "goal_util.m"
                      }
#line 1379 "goal_util.m"
                      continue;
#line 1379 "goal_util.m"
                    }
#line 1367 "goal_util.m"
                }
#line 1345 "goal_util.m"
                break;
#line 1345 "goal_util.m"
              case (MR_Integer) 6:
#line 1352 "goal_util.m"
                {
#line 1352 "goal_util.m"
                  MR_Word hlds__goal_util__Cond_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));
#line 1352 "goal_util.m"
                  MR_Word hlds__goal_util__Then_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 3)));
#line 1352 "goal_util.m"
                  MR_Word hlds__goal_util__Else_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 4)));
#line 1352 "goal_util.m"
                  MR_Word hlds__goal_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));

#line 1354 "goal_util.m"
                  {
#line 1354 "goal_util.m"
                    MR_Word hlds__goal_util__V_75_75;

#line 1354 "goal_util.m"
                    {
#line 1354 "goal_util.m"
                      hlds__goal_util__goal_contains_reconstruction_2_p_0(hlds__goal_util__Cond_14, &hlds__goal_util__V_75_75);
                    }
#line 1354 "goal_util.m"
                    hlds__goal_util__succeeded = ((MR_Integer) 1 == hlds__goal_util__V_75_75);
#line 1354 "goal_util.m"
                  }
#line 1355 "goal_util.m"
                  if (!(hlds__goal_util__succeeded))
#line 1355 "goal_util.m"
                    {
#line 1355 "goal_util.m"
                      {
#line 1355 "goal_util.m"
                        MR_Word hlds__goal_util__V_76_76;

#line 1355 "goal_util.m"
                        {
#line 1355 "goal_util.m"
                          hlds__goal_util__goal_contains_reconstruction_2_p_0(hlds__goal_util__Then_15, &hlds__goal_util__V_76_76);
                        }
#line 1355 "goal_util.m"
                        hlds__goal_util__succeeded = ((MR_Integer) 1 == hlds__goal_util__V_76_76);
#line 1355 "goal_util.m"
                      }
#line 1355 "goal_util.m"
                      if (!(hlds__goal_util__succeeded))
#line 1356 "goal_util.m"
                        {
#line 1356 "goal_util.m"
                          MR_Word hlds__goal_util__V_77_77;

#line 1356 "goal_util.m"
                          {
#line 1356 "goal_util.m"
                            hlds__goal_util__goal_contains_reconstruction_2_p_0(hlds__goal_util__Else_16, &hlds__goal_util__V_77_77);
                          }
#line 1356 "goal_util.m"
                          hlds__goal_util__succeeded = ((MR_Integer) 1 == hlds__goal_util__V_77_77);
#line 1356 "goal_util.m"
                        }
#line 1355 "goal_util.m"
                    }
#line 1360 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 1359 "goal_util.m"
                    *hlds__goal_util__ContainsReconstruction_4 = (MR_Integer) 1;
#line 1360 "goal_util.m"
                  else
#line 1361 "goal_util.m"
                    *hlds__goal_util__ContainsReconstruction_4 = (MR_Integer) 0;
#line 1352 "goal_util.m"
                }
#line 1345 "goal_util.m"
                break;
#line 1345 "goal_util.m"
              case (MR_Integer) 7:
#line 1398 "goal_util.m"
                {
#line 1398 "goal_util.m"
                  MR_Word hlds__goal_util__Shorthand_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));

#line 1409 "goal_util.m"
#line 1409 "goal_util.m"
                  switch (MR_tag((MR_Word) hlds__goal_util__Shorthand_52)) {
#line 1409 "goal_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1409 "goal_util.m"
                    case (MR_Integer) 0:
#line 1400 "goal_util.m"
                      {
#line 1400 "goal_util.m"
                        MR_Word hlds__goal_util__GoalA_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Shorthand_52, (MR_Integer) 0)));
#line 1400 "goal_util.m"
                        MR_Word hlds__goal_util__GoalB_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Shorthand_52, (MR_Integer) 1)));
#line 1402 "goal_util.m"
                        MR_Word hlds__goal_util__V_67_67;
#line 1402 "goal_util.m"
                        MR_Word hlds__goal_util__V_78_78;
#line 1402 "goal_util.m"
                        MR_Word hlds__goal_util__V_79_79;

#line 1402 "goal_util.m"
                        {
#line 1402 "goal_util.m"
                          hlds__goal_util__goal_contains_reconstruction_2_p_0(hlds__goal_util__GoalA_53, &hlds__goal_util__V_78_78);
                        }
#line 1402 "goal_util.m"
                        hlds__goal_util__succeeded = ((MR_Integer) 1 == hlds__goal_util__V_78_78);
#line 1402 "goal_util.m"
                        if (hlds__goal_util__succeeded)
#line 1402 "goal_util.m"
                          {
#line 1403 "goal_util.m"
                            hlds__goal_util__V_67_67 = (MR_Integer) 1;
#line 1403 "goal_util.m"
                            {
#line 1403 "goal_util.m"
                              hlds__goal_util__goal_contains_reconstruction_2_p_0(hlds__goal_util__GoalB_54, &hlds__goal_util__V_79_79);
                            }
#line 1403 "goal_util.m"
                            hlds__goal_util__succeeded = (hlds__goal_util__V_67_67 == hlds__goal_util__V_79_79);
#line 1402 "goal_util.m"
                          }
#line 1406 "goal_util.m"
                        if (hlds__goal_util__succeeded)
#line 1405 "goal_util.m"
                          *hlds__goal_util__ContainsReconstruction_4 = (MR_Integer) 1;
#line 1406 "goal_util.m"
                        else
#line 1407 "goal_util.m"
                          *hlds__goal_util__ContainsReconstruction_4 = (MR_Integer) 0;
#line 1400 "goal_util.m"
                      }
#line 1409 "goal_util.m"
                      break;
#line 1409 "goal_util.m"
                    case (MR_Integer) 1:
#line 1411 "goal_util.m"
                      {
#line 1411 "goal_util.m"
                        MR_Word hlds__goal_util__MainGoal_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_52, (MR_Integer) 4)));
#line 1411 "goal_util.m"
                        MR_Word hlds__goal_util__OrElseGoals_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_52, (MR_Integer) 5)));
#line 1410 "goal_util.m"
                        MR_Word hlds__goal_util___AtomicGoalType_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_52, (MR_Integer) 0)));
#line 1410 "goal_util.m"
                        MR_Word hlds__goal_util___OuterVars_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_52, (MR_Integer) 1)));
#line 1410 "goal_util.m"
                        MR_Word hlds__goal_util___InnerVars_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_52, (MR_Integer) 2)));
#line 1410 "goal_util.m"
                        MR_Word hlds__goal_util___OutputVars_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_52, (MR_Integer) 3)));
#line 1410 "goal_util.m"
                        MR_Word hlds__goal_util___Inners_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_52, (MR_Integer) 6)));
#line 1413 "goal_util.m"
                        MR_Word hlds__goal_util__V_65_65;
#line 1413 "goal_util.m"
                        MR_Word hlds__goal_util__V_80_80;
#line 1413 "goal_util.m"
                        MR_Word hlds__goal_util__V_81_81;

#line 1413 "goal_util.m"
                        {
#line 1413 "goal_util.m"
                          hlds__goal_util__goal_contains_reconstruction_2_p_0(hlds__goal_util__MainGoal_59, &hlds__goal_util__V_80_80);
                        }
#line 1413 "goal_util.m"
                        hlds__goal_util__succeeded = ((MR_Integer) 1 == hlds__goal_util__V_80_80);
#line 1413 "goal_util.m"
                        if (hlds__goal_util__succeeded)
#line 1413 "goal_util.m"
                          {
#line 1414 "goal_util.m"
                            hlds__goal_util__V_65_65 = (MR_Integer) 1;
#line 1414 "goal_util.m"
                            {
#line 1414 "goal_util.m"
                              hlds__goal_util__goals_contain_reconstruction_2_p_0(hlds__goal_util__OrElseGoals_60, &hlds__goal_util__V_81_81);
                            }
#line 1414 "goal_util.m"
                            hlds__goal_util__succeeded = (hlds__goal_util__V_65_65 == hlds__goal_util__V_81_81);
#line 1413 "goal_util.m"
                          }
#line 1417 "goal_util.m"
                        if (hlds__goal_util__succeeded)
#line 1416 "goal_util.m"
                          *hlds__goal_util__ContainsReconstruction_4 = (MR_Integer) 1;
#line 1417 "goal_util.m"
                        else
#line 1418 "goal_util.m"
                          *hlds__goal_util__ContainsReconstruction_4 = (MR_Integer) 0;
#line 1411 "goal_util.m"
                      }
#line 1409 "goal_util.m"
                      break;
#line 1409 "goal_util.m"
                    case (MR_Integer) 2:
#line 1421 "goal_util.m"
                      {
#line 1421 "goal_util.m"
                        MR_Word hlds__goal_util__SubGoal_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__Shorthand_52, (MR_Integer) 2)));
#line 1421 "goal_util.m"
                        MR_Word hlds__goal_util___MaybeTryIOStateVars_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__Shorthand_52, (MR_Integer) 0)));
#line 1421 "goal_util.m"
                        MR_Word hlds__goal_util___ResultVar_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__Shorthand_52, (MR_Integer) 1)));

#line 1422 "goal_util.m"
                        /* direct tailcall eliminated */
#line 1422 "goal_util.m"
                        {
#line 1422 "goal_util.m"
                          MR_Word hlds__goal_util__Goal__tmp_copy_3 = hlds__goal_util__SubGoal_72;

#line 1422 "goal_util.m"
                          hlds__goal_util__Goal_3 = hlds__goal_util__Goal__tmp_copy_3;
#line 1422 "goal_util.m"
                        }
#line 1422 "goal_util.m"
                        continue;
#line 1421 "goal_util.m"
                      }
#line 1409 "goal_util.m"
                      break;
#line 1409 "goal_util.m"
                  }
#line 1398 "goal_util.m"
                }
#line 1345 "goal_util.m"
                break;
#line 1345 "goal_util.m"
            }
#line 1345 "goal_util.m"
            break;
#line 1345 "goal_util.m"
        }
#line 1340 "goal_util.m"
      }
#line 1340 "goal_util.m"
      break;
#line 1340 "goal_util.m"
    }
#line 206 "goal_util.m"
}

#line 200 "goal_util.m"
MR_Word MR_CALL 
hlds__goal_util__goal_list_calls_proc_in_list_2_f_0(
#line 200 "goal_util.m"
  MR_Word hlds__goal_util__Goals_4,
#line 200 "goal_util.m"
  MR_Word hlds__goal_util__PredProcIds_5)
#line 200 "goal_util.m"
{
#line 1252 "goal_util.m"
  {
#line 1252 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1252 "goal_util.m"
    MR_Word hlds__goal_util__CalledPredProcIds_6;
#line 1252 "goal_util.m"
    MR_Word hlds__goal_util__TypeCtorInfo_9_9 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 1252 "goal_util.m"
    MR_Word hlds__goal_util__CalledSet_7;
#line 1252 "goal_util.m"
    MR_Word hlds__goal_util__V_8_8;

#line 1253 "goal_util.m"
    {
#line 1253 "goal_util.m"
      hlds__goal_util__V_8_8 = mercury__set__init_0_f_0(hlds__goal_util__TypeCtorInfo_9_9);
    }
#line 1253 "goal_util.m"
    {
#line 1253 "goal_util.m"
      hlds__goal_util__goal_list_calls_proc_in_list_2_4_p_0(hlds__goal_util__Goals_4, hlds__goal_util__PredProcIds_5, hlds__goal_util__V_8_8, &hlds__goal_util__CalledSet_7);
    }
#line 1254 "goal_util.m"
    {
#line 1254 "goal_util.m"
      mercury__set__to_sorted_list_2_p_0(hlds__goal_util__TypeCtorInfo_9_9, hlds__goal_util__CalledSet_7, &hlds__goal_util__CalledPredProcIds_6);
    }
#line 1252 "goal_util.m"
    return hlds__goal_util__CalledPredProcIds_6;
#line 1252 "goal_util.m"
  }
#line 200 "goal_util.m"
}

#line 192 "goal_util.m"
MR_Word MR_CALL 
hlds__goal_util__goal_calls_proc_in_list_2_f_0(
#line 192 "goal_util.m"
  MR_Word hlds__goal_util__Goal_4,
#line 192 "goal_util.m"
  MR_Word hlds__goal_util__PredProcIds_5)
#line 192 "goal_util.m"
{
#line 1248 "goal_util.m"
  {
#line 1248 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1248 "goal_util.m"
    MR_Word hlds__goal_util__CalledPredProcIds_6;
#line 1248 "goal_util.m"
    MR_Word hlds__goal_util__TypeCtorInfo_9_9 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 1248 "goal_util.m"
    MR_Word hlds__goal_util__CalledSet_7;
#line 1248 "goal_util.m"
    MR_Word hlds__goal_util__V_8_8;

#line 1249 "goal_util.m"
    {
#line 1249 "goal_util.m"
      hlds__goal_util__V_8_8 = mercury__set__init_0_f_0(hlds__goal_util__TypeCtorInfo_9_9);
    }
#line 1249 "goal_util.m"
    {
#line 1249 "goal_util.m"
      hlds__goal_util__goal_calls_proc_in_list_2_4_p_0(hlds__goal_util__Goal_4, hlds__goal_util__PredProcIds_5, hlds__goal_util__V_8_8, &hlds__goal_util__CalledSet_7);
    }
#line 1250 "goal_util.m"
    {
#line 1250 "goal_util.m"
      mercury__set__to_sorted_list_2_p_0(hlds__goal_util__TypeCtorInfo_9_9, hlds__goal_util__CalledSet_7, &hlds__goal_util__CalledPredProcIds_6);
    }
#line 1248 "goal_util.m"
    return hlds__goal_util__CalledPredProcIds_6;
#line 1248 "goal_util.m"
  }
#line 192 "goal_util.m"
}

#line 185 "goal_util.m"
void MR_CALL 
hlds__goal_util__goal_calls_pred_id_2_p_1(
#line 185 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 185 "goal_util.m"
  MR_Word * hlds__goal_util__PredId_5,
#line 185 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 185 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 185 "goal_util.m"
{
#line 1172 "goal_util.m"
  {
#line 1172 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1172 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1172 "goal_util.m"
    MR_Word hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1173 "goal_util.m"
    {
#line 1173 "goal_util.m"
      hlds__goal_util__goal_expr_calls_pred_id_2_p_1(hlds__goal_util__GoalExpr_3, hlds__goal_util__PredId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
    }
#line 1172 "goal_util.m"
  }
#line 185 "goal_util.m"
}

#line 184 "goal_util.m"
MR_bool MR_CALL 
hlds__goal_util__goal_calls_pred_id_2_p_0(
#line 184 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 184 "goal_util.m"
  MR_Word hlds__goal_util__PredId_5)
#line 184 "goal_util.m"
{
#line 1172 "goal_util.m"
  {
#line 1172 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1172 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1172 "goal_util.m"
    MR_Word hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1173 "goal_util.m"
    {
#line 1173 "goal_util.m"
      hlds__goal_util__succeeded = hlds__goal_util__goal_expr_calls_pred_id_2_p_0(hlds__goal_util__GoalExpr_3, hlds__goal_util__PredId_5);
    }
#line 1172 "goal_util.m"
    return hlds__goal_util__succeeded;
#line 1172 "goal_util.m"
  }
#line 184 "goal_util.m"
}

#line 177 "goal_util.m"
void MR_CALL 
hlds__goal_util__goal_calls_2_p_1(
#line 177 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 177 "goal_util.m"
  MR_Word * hlds__goal_util__PredProcId_5,
#line 177 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 177 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 177 "goal_util.m"
{
#line 1088 "goal_util.m"
  {
#line 1088 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1088 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1088 "goal_util.m"
    MR_Word hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1089 "goal_util.m"
    {
#line 1089 "goal_util.m"
      hlds__goal_util__goal_expr_calls_2_p_1(hlds__goal_util__GoalExpr_3, hlds__goal_util__PredProcId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
    }
#line 1088 "goal_util.m"
  }
#line 177 "goal_util.m"
}

#line 176 "goal_util.m"
MR_bool MR_CALL 
hlds__goal_util__goal_calls_2_p_0(
#line 176 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 176 "goal_util.m"
  MR_Word hlds__goal_util__PredProcId_5)
#line 176 "goal_util.m"
{
#line 1088 "goal_util.m"
  {
#line 1088 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 1088 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1088 "goal_util.m"
    MR_Word hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1089 "goal_util.m"
    {
#line 1089 "goal_util.m"
      hlds__goal_util__succeeded = hlds__goal_util__goal_expr_calls_2_p_0(hlds__goal_util__GoalExpr_3, hlds__goal_util__PredProcId_5);
    }
#line 1088 "goal_util.m"
    return hlds__goal_util__succeeded;
#line 1088 "goal_util.m"
  }
#line 176 "goal_util.m"
}

#line 985 "goal_util.m"
static void MR_CALL 
hlds__goal_util__clause_list_size_2_p_0_1(
#line 985 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 985 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1,
#line 985 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_2,
#line 985 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_3)
#line 985 "goal_util.m"
{
#line 985 "goal_util.m"
  {
#line 985 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 985 "goal_util.m"
    MR_Integer hlds__goal_util__conv0_Size_6;

#line 985 "goal_util.m"
    {
#line 985 "goal_util.m"
      hlds__goal_util__clause_size_increment_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Integer) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_Size_6);
    }
#line 985 "goal_util.m"
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_Size_6));
#line 985 "goal_util.m"
  }
#line 985 "goal_util.m"
}

#line 171 "goal_util.m"
void MR_CALL 
hlds__goal_util__clause_list_size_2_p_0(
#line 171 "goal_util.m"
  MR_Word hlds__goal_util__Clauses_3,
#line 171 "goal_util.m"
  MR_Integer * hlds__goal_util__GoalSize_4)
#line 171 "goal_util.m"
{
#line 984 "goal_util.m"
  {
#line 984 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 984 "goal_util.m"
    MR_Integer hlds__goal_util__GoalSize0_5;
#line 985 "goal_util.m"
    MR_Box hlds__goal_util__conv1_GoalSize0_5;
#line 986 "goal_util.m"
    MR_Word hlds__goal_util__V_9_9;
#line 986 "goal_util.m"
    MR_Word hlds__goal_util__V_6_6;

#line 985 "goal_util.m"
    {
#line 985 "goal_util.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__goal_util_scalar_common_3[1], hlds__goal_util__Clauses_3, ((MR_Box) ((MR_Integer) 0)), &hlds__goal_util__conv1_GoalSize0_5);
    }
#line 985 "goal_util.m"
    hlds__goal_util__GoalSize0_5 = ((MR_Integer) hlds__goal_util__conv1_GoalSize0_5);
#line 986 "goal_util.m"
    hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__Clauses_3)) == (MR_mktag((MR_Integer) 1)));
#line 986 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 986 "goal_util.m"
      {
#line 986 "goal_util.m"
        hlds__goal_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Clauses_3, (MR_Integer) 0)));
#line 986 "goal_util.m"
        hlds__goal_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Clauses_3, (MR_Integer) 1)));
#line 986 "goal_util.m"
        hlds__goal_util__succeeded = (hlds__goal_util__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 986 "goal_util.m"
      }
#line 988 "goal_util.m"
    if (hlds__goal_util__succeeded)
#line 987 "goal_util.m"
      *hlds__goal_util__GoalSize_4 = hlds__goal_util__GoalSize0_5;
#line 988 "goal_util.m"
    else
#line 990 "goal_util.m"
      {
#line 990 "goal_util.m"
        *hlds__goal_util__GoalSize_4 = (hlds__goal_util__GoalSize0_5 + (MR_Integer) 1);
#line 990 "goal_util.m"
      }
#line 984 "goal_util.m"
  }
#line 171 "goal_util.m"
}

#line 167 "goal_util.m"
void MR_CALL 
hlds__goal_util__goals_size_2_p_0(
#line 167 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 167 "goal_util.m"
  MR_Integer * hlds__goal_util__HeadVar__2_2)
#line 167 "goal_util.m"
{
#line 978 "goal_util.m"
  {
#line 978 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 978 "goal_util.m"
    if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 978 "goal_util.m"
      *hlds__goal_util__HeadVar__2_2 = (MR_Integer) 0;
#line 978 "goal_util.m"
    else
#line 979 "goal_util.m"
      {
#line 979 "goal_util.m"
        MR_Word hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 979 "goal_util.m"
        MR_Word hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 979 "goal_util.m"
        MR_Integer hlds__goal_util__Size1_6;
#line 979 "goal_util.m"
        MR_Integer hlds__goal_util__Size2_7;
#line 979 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 0)));
#line 975 "goal_util.m"
        MR_Word hlds__goal_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 1)));

#line 976 "goal_util.m"
        {
#line 976 "goal_util.m"
          hlds__goal_util__goal_expr_size_2_p_0(hlds__goal_util__GoalExpr_9, &hlds__goal_util__Size1_6);
        }
#line 981 "goal_util.m"
        {
#line 981 "goal_util.m"
          hlds__goal_util__goals_size_2_p_0(hlds__goal_util__Goals_4, &hlds__goal_util__Size2_7);
        }
#line 982 "goal_util.m"
        *hlds__goal_util__HeadVar__2_2 = (hlds__goal_util__Size1_6 + hlds__goal_util__Size2_7);
#line 979 "goal_util.m"
      }
#line 978 "goal_util.m"
  }
#line 167 "goal_util.m"
}

#line 163 "goal_util.m"
void MR_CALL 
hlds__goal_util__goal_size_2_p_0(
#line 163 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 163 "goal_util.m"
  MR_Integer * hlds__goal_util__Size_5)
#line 163 "goal_util.m"
{
#line 975 "goal_util.m"
  {
#line 975 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 975 "goal_util.m"
    MR_Word hlds__goal_util__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 975 "goal_util.m"
    MR_Word hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 976 "goal_util.m"
    {
#line 976 "goal_util.m"
      hlds__goal_util__goal_expr_size_2_p_0(hlds__goal_util__GoalExpr_3, hlds__goal_util__Size_5);
    }
#line 975 "goal_util.m"
  }
#line 163 "goal_util.m"
}

#line 159 "goal_util.m"
MR_bool MR_CALL 
hlds__goal_util__goal_is_branched_1_p_0(
#line 159 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1)
#line 159 "goal_util.m"
{
#line 969 "goal_util.m"
  {
#line 969 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 969 "goal_util.m"
#line 969 "goal_util.m"
    switch (MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) {
#line 969 "goal_util.m"
      default:
#line 969 "goal_util.m"
        hlds__goal_util__succeeded = MR_FALSE;
#line 969 "goal_util.m"
        break;
#line 969 "goal_util.m"
      case (MR_Integer) 3:
#line 969 "goal_util.m"
#line 969 "goal_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 969 "goal_util.m"
          default:
#line 969 "goal_util.m"
            hlds__goal_util__succeeded = MR_FALSE;
#line 969 "goal_util.m"
            break;
#line 969 "goal_util.m"
          case (MR_Integer) 3:
#line 971 "goal_util.m"
            hlds__goal_util__succeeded = MR_TRUE;
#line 969 "goal_util.m"
            break;
#line 969 "goal_util.m"
          case (MR_Integer) 4:
#line 970 "goal_util.m"
            hlds__goal_util__succeeded = MR_TRUE;
#line 969 "goal_util.m"
            break;
#line 969 "goal_util.m"
          case (MR_Integer) 6:
#line 969 "goal_util.m"
            hlds__goal_util__succeeded = MR_TRUE;
#line 969 "goal_util.m"
            break;
#line 969 "goal_util.m"
        }
#line 969 "goal_util.m"
        break;
#line 969 "goal_util.m"
    }
#line 969 "goal_util.m"
    return hlds__goal_util__succeeded;
#line 969 "goal_util.m"
  }
#line 159 "goal_util.m"
}

#line 155 "goal_util.m"
MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_1_f_0(
#line 155 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1)
#line 155 "goal_util.m"
{
#line 866 "goal_util.m"
  while (MR_TRUE)
#line 866 "goal_util.m"
    {
#line 866 "goal_util.m"
      /* tailcall optimized into a loop */
#line 866 "goal_util.m"
      {
#line 866 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;
#line 866 "goal_util.m"
        MR_Word hlds__goal_util__IsLeaf_5;
#line 866 "goal_util.m"
        MR_Word hlds__goal_util__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 866 "goal_util.m"
        MR_Word hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

#line 880 "goal_util.m"
#line 880 "goal_util.m"
        switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) {
#line 880 "goal_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 880 "goal_util.m"
          case (MR_Integer) 0:
#line 892 "goal_util.m"
            {
#line 892 "goal_util.m"
              MR_Word hlds__goal_util__SubGoal_51 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_3), (MR_Integer) 0);

#line 893 "goal_util.m"
              /* direct tailcall eliminated */
#line 893 "goal_util.m"
              {
#line 893 "goal_util.m"
                MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__SubGoal_51;

#line 893 "goal_util.m"
                hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 893 "goal_util.m"
              }
#line 893 "goal_util.m"
              continue;
#line 892 "goal_util.m"
            }
#line 880 "goal_util.m"
            break;
#line 880 "goal_util.m"
          case (MR_Integer) 1:
#line 868 "goal_util.m"
            {
#line 868 "goal_util.m"
              MR_Word hlds__goal_util__UnifyKind_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
#line 868 "goal_util.m"
              MR_Word hlds__goal_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)));
#line 868 "goal_util.m"
              MR_Word hlds__goal_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 868 "goal_util.m"
              MR_Word hlds__goal_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 868 "goal_util.m"
              MR_Word hlds__goal_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));

#line 872 "goal_util.m"
#line 872 "goal_util.m"
              switch (MR_tag((MR_Word) hlds__goal_util__UnifyKind_9)) {
#line 872 "goal_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 872 "goal_util.m"
                case (MR_Integer) 0:
#line 872 "goal_util.m"
                case (MR_Integer) 1:
#line 872 "goal_util.m"
                case (MR_Integer) 2:
#line 878 "goal_util.m"
                  hlds__goal_util__IsLeaf_5 = (MR_Integer) 0;
#line 872 "goal_util.m"
                  break;
#line 872 "goal_util.m"
                case (MR_Integer) 3:
#line 872 "goal_util.m"
#line 872 "goal_util.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__UnifyKind_9, (MR_Integer) 0)))) {
#line 872 "goal_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 872 "goal_util.m"
                    case (MR_Integer) 0:
#line 878 "goal_util.m"
                      hlds__goal_util__IsLeaf_5 = (MR_Integer) 0;
#line 872 "goal_util.m"
                      break;
#line 872 "goal_util.m"
                    case (MR_Integer) 1:
#line 871 "goal_util.m"
                      hlds__goal_util__IsLeaf_5 = (MR_Integer) 1;
#line 872 "goal_util.m"
                      break;
#line 872 "goal_util.m"
                  }
#line 872 "goal_util.m"
                  break;
#line 872 "goal_util.m"
              }
#line 868 "goal_util.m"
            }
#line 880 "goal_util.m"
            break;
#line 880 "goal_util.m"
          case (MR_Integer) 2:
#line 885 "goal_util.m"
            hlds__goal_util__IsLeaf_5 = (MR_Integer) 1;
#line 880 "goal_util.m"
            break;
#line 880 "goal_util.m"
          case (MR_Integer) 3:
#line 880 "goal_util.m"
#line 880 "goal_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) {
#line 880 "goal_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 880 "goal_util.m"
              case (MR_Integer) 0:
#line 880 "goal_util.m"
              case (MR_Integer) 1:
#line 885 "goal_util.m"
                hlds__goal_util__IsLeaf_5 = (MR_Integer) 1;
#line 880 "goal_util.m"
                break;
#line 880 "goal_util.m"
              case (MR_Integer) 2:
#line 889 "goal_util.m"
                {
#line 889 "goal_util.m"
                  MR_Word hlds__goal_util__Goals_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 887 "goal_util.m"
                  MR_Word hlds__goal_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

#line 890 "goal_util.m"
                  {
#line 890 "goal_util.m"
                    hlds__goal_util__IsLeaf_5 = hlds__goal_util__proc_body_is_leaf_goals_1_f_0(hlds__goal_util__Goals_50);
                  }
#line 889 "goal_util.m"
                }
#line 880 "goal_util.m"
                break;
#line 880 "goal_util.m"
              case (MR_Integer) 3:
#line 889 "goal_util.m"
                {
#line 889 "goal_util.m"
                  MR_Word hlds__goal_util__Goals_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

#line 890 "goal_util.m"
                  {
#line 890 "goal_util.m"
                    hlds__goal_util__IsLeaf_5 = hlds__goal_util__proc_body_is_leaf_goals_1_f_0(hlds__goal_util__Goals_81);
                  }
#line 889 "goal_util.m"
                }
#line 880 "goal_util.m"
                break;
#line 880 "goal_util.m"
              case (MR_Integer) 4:
#line 907 "goal_util.m"
                {
#line 907 "goal_util.m"
                  MR_Word hlds__goal_util__Cases_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
#line 907 "goal_util.m"
                  MR_Word hlds__goal_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 907 "goal_util.m"
                  MR_Word hlds__goal_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));

#line 908 "goal_util.m"
                  {
#line 908 "goal_util.m"
                    hlds__goal_util__IsLeaf_5 = hlds__goal_util__proc_body_is_leaf_cases_1_f_0(hlds__goal_util__Cases_57);
                  }
#line 907 "goal_util.m"
                }
#line 880 "goal_util.m"
                break;
#line 880 "goal_util.m"
              case (MR_Integer) 5:
#line 895 "goal_util.m"
                {
#line 895 "goal_util.m"
                  MR_Word hlds__goal_util__Reason_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 895 "goal_util.m"
                  MR_Word hlds__goal_util__SubGoal_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 897 "goal_util.m"
                  MR_Word hlds__goal_util__FGT_54;
#line 897 "goal_util.m"
                  MR_Word hlds__goal_util__V_53_53;

#line 897 "goal_util.m"
                  hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_52, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 897 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 897 "goal_util.m"
                    {
#line 897 "goal_util.m"
                      hlds__goal_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_52, (MR_Integer) 1)));
#line 897 "goal_util.m"
                      hlds__goal_util__FGT_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_52, (MR_Integer) 2)));
#line 899 "goal_util.m"
#line 899 "goal_util.m"
                      switch (hlds__goal_util__FGT_54) {
#line 899 "goal_util.m"
                        default:
#line 899 "goal_util.m"
                          hlds__goal_util__succeeded = MR_FALSE;
#line 899 "goal_util.m"
                          break;
#line 899 "goal_util.m"
                        case (MR_Integer) 1:
#line 898 "goal_util.m"
                          hlds__goal_util__succeeded = MR_TRUE;
#line 899 "goal_util.m"
                          break;
#line 899 "goal_util.m"
                        case (MR_Integer) 2:
#line 899 "goal_util.m"
                          hlds__goal_util__succeeded = MR_TRUE;
#line 899 "goal_util.m"
                          break;
#line 899 "goal_util.m"
                      }
#line 897 "goal_util.m"
                    }
#line 903 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 902 "goal_util.m"
                    hlds__goal_util__IsLeaf_5 = (MR_Integer) 0;
#line 903 "goal_util.m"
                  else
#line 904 "goal_util.m"
                    {
#line 904 "goal_util.m"
                      /* direct tailcall eliminated */
#line 904 "goal_util.m"
                      {
#line 904 "goal_util.m"
                        MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__SubGoal_80;

#line 904 "goal_util.m"
                        hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 904 "goal_util.m"
                      }
#line 904 "goal_util.m"
                      continue;
#line 904 "goal_util.m"
                    }
#line 895 "goal_util.m"
                }
#line 880 "goal_util.m"
                break;
#line 880 "goal_util.m"
              case (MR_Integer) 6:
#line 910 "goal_util.m"
                {
#line 910 "goal_util.m"
                  MR_Word hlds__goal_util__Cond_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
#line 910 "goal_util.m"
                  MR_Word hlds__goal_util__Then_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
#line 910 "goal_util.m"
                  MR_Word hlds__goal_util__Else_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));
#line 910 "goal_util.m"
                  MR_Word hlds__goal_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
#line 912 "goal_util.m"
                  MR_Word hlds__goal_util__V_77_77;
#line 912 "goal_util.m"
                  MR_Word hlds__goal_util__V_78_78;
#line 912 "goal_util.m"
                  MR_Word hlds__goal_util__V_79_79;

#line 912 "goal_util.m"
                  {
#line 912 "goal_util.m"
                    hlds__goal_util__V_77_77 = hlds__goal_util__proc_body_is_leaf_1_f_0(hlds__goal_util__Cond_59);
                  }
#line 912 "goal_util.m"
                  hlds__goal_util__succeeded = (hlds__goal_util__V_77_77 == (MR_Integer) 0);
#line 912 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 912 "goal_util.m"
                    {
#line 913 "goal_util.m"
                      {
#line 913 "goal_util.m"
                        hlds__goal_util__V_78_78 = hlds__goal_util__proc_body_is_leaf_1_f_0(hlds__goal_util__Then_60);
                      }
#line 913 "goal_util.m"
                      hlds__goal_util__succeeded = (hlds__goal_util__V_78_78 == (MR_Integer) 0);
#line 912 "goal_util.m"
                      if (hlds__goal_util__succeeded)
#line 912 "goal_util.m"
                        {
#line 914 "goal_util.m"
                          {
#line 914 "goal_util.m"
                            hlds__goal_util__V_79_79 = hlds__goal_util__proc_body_is_leaf_1_f_0(hlds__goal_util__Else_61);
                          }
#line 914 "goal_util.m"
                          hlds__goal_util__succeeded = (hlds__goal_util__V_79_79 == (MR_Integer) 0);
#line 912 "goal_util.m"
                        }
#line 912 "goal_util.m"
                    }
#line 917 "goal_util.m"
                  if (hlds__goal_util__succeeded)
#line 916 "goal_util.m"
                    hlds__goal_util__IsLeaf_5 = (MR_Integer) 0;
#line 917 "goal_util.m"
                  else
#line 918 "goal_util.m"
                    hlds__goal_util__IsLeaf_5 = (MR_Integer) 1;
#line 910 "goal_util.m"
                }
#line 880 "goal_util.m"
                break;
#line 880 "goal_util.m"
              case (MR_Integer) 7:
#line 921 "goal_util.m"
                {
#line 921 "goal_util.m"
                  MR_Word hlds__goal_util__ShortHand_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

#line 927 "goal_util.m"
#line 927 "goal_util.m"
                  switch (MR_tag((MR_Word) hlds__goal_util__ShortHand_62)) {
#line 927 "goal_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 927 "goal_util.m"
                    case (MR_Integer) 0:
#line 928 "goal_util.m"
                      {
#line 928 "goal_util.m"
                        MR_Word hlds__goal_util__GoalA_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_62, (MR_Integer) 0)));
#line 928 "goal_util.m"
                        MR_Word hlds__goal_util__GoalB_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_62, (MR_Integer) 1)));
#line 930 "goal_util.m"
                        MR_Word hlds__goal_util__V_75_75;
#line 930 "goal_util.m"
                        MR_Word hlds__goal_util__V_76_76;

#line 930 "goal_util.m"
                        {
#line 930 "goal_util.m"
                          hlds__goal_util__V_75_75 = hlds__goal_util__proc_body_is_leaf_1_f_0(hlds__goal_util__GoalA_73);
                        }
#line 930 "goal_util.m"
                        hlds__goal_util__succeeded = (hlds__goal_util__V_75_75 == (MR_Integer) 0);
#line 930 "goal_util.m"
                        if (hlds__goal_util__succeeded)
#line 930 "goal_util.m"
                          {
#line 931 "goal_util.m"
                            {
#line 931 "goal_util.m"
                              hlds__goal_util__V_76_76 = hlds__goal_util__proc_body_is_leaf_1_f_0(hlds__goal_util__GoalB_74);
                            }
#line 931 "goal_util.m"
                            hlds__goal_util__succeeded = (hlds__goal_util__V_76_76 == (MR_Integer) 0);
#line 930 "goal_util.m"
                          }
#line 934 "goal_util.m"
                        if (hlds__goal_util__succeeded)
#line 933 "goal_util.m"
                          hlds__goal_util__IsLeaf_5 = (MR_Integer) 0;
#line 934 "goal_util.m"
                        else
#line 935 "goal_util.m"
                          hlds__goal_util__IsLeaf_5 = (MR_Integer) 1;
#line 928 "goal_util.m"
                      }
#line 927 "goal_util.m"
                      break;
#line 927 "goal_util.m"
                    case (MR_Integer) 1:
#line 927 "goal_util.m"
                    case (MR_Integer) 2:
#line 926 "goal_util.m"
                      hlds__goal_util__IsLeaf_5 = (MR_Integer) 1;
#line 927 "goal_util.m"
                      break;
#line 927 "goal_util.m"
                  }
#line 921 "goal_util.m"
                }
#line 880 "goal_util.m"
                break;
#line 880 "goal_util.m"
            }
#line 880 "goal_util.m"
            break;
#line 880 "goal_util.m"
        }
#line 866 "goal_util.m"
        return hlds__goal_util__IsLeaf_5;
#line 866 "goal_util.m"
      }
#line 866 "goal_util.m"
      break;
#line 866 "goal_util.m"
    }
#line 155 "goal_util.m"
}

#line 845 "goal_util.m"
static void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_2(
#line 845 "goal_util.m"
  void * hlds__goal_util__env_ptr_arg)
#line 845 "goal_util.m"
{
#line 845 "goal_util.m"
  {
#line 845 "goal_util.m"
    struct hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0_s *) hlds__goal_util__env_ptr_arg;

#line 845 "goal_util.m"
    *((hlds__goal_util__env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__wrapper_arg_1) = ((MR_Box) ((hlds__goal_util__env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__conv1_LambdaHeadVar__1_32));
#line 845 "goal_util.m"
    {
#line 845 "goal_util.m"
      ((hlds__goal_util__env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__cont_env_ptr);
    }
#line 845 "goal_util.m"
  }
#line 845 "goal_util.m"
}

#line 845 "goal_util.m"
static void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3(
#line 845 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 845 "goal_util.m"
  MR_Box * hlds__goal_util__wrapper_arg_1,
#line 845 "goal_util.m"
  MR_Cont hlds__goal_util__cont,
#line 845 "goal_util.m"
  void * hlds__goal_util__cont_env_ptr)
#line 845 "goal_util.m"
{
#line 845 "goal_util.m"
  {
#line 845 "goal_util.m"
    struct hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0_s hlds__goal_util__env;

#line 845 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__wrapper_arg_1 = hlds__goal_util__wrapper_arg_1;
#line 845 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__cont = hlds__goal_util__cont;
#line 845 "goal_util.m"
    (hlds__goal_util__env).hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
#line 845 "goal_util.m"
    {
#line 845 "goal_util.m"
      MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;

#line 845 "goal_util.m"
      {
#line 845 "goal_util.m"
        hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__845__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 4))), &(hlds__goal_util__env).hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__conv1_LambdaHeadVar__1_32, hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_2, &hlds__goal_util__env);
      }
#line 845 "goal_util.m"
    }
#line 845 "goal_util.m"
  }
#line 845 "goal_util.m"
}

#line 834 "goal_util.m"
static MR_Box MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_1(
#line 834 "goal_util.m"
  MR_Box hlds__goal_util__closure_arg,
#line 834 "goal_util.m"
  MR_Box hlds__goal_util__wrapper_arg_1)
#line 834 "goal_util.m"
{
#line 834 "goal_util.m"
  {
#line 834 "goal_util.m"
    MR_Box hlds__goal_util__wrapper_arg_2;
#line 834 "goal_util.m"
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
#line 834 "goal_util.m"
    MR_Word hlds__goal_util__conv0_LambdaHeadVar__2_29;

#line 834 "goal_util.m"
    {
#line 834 "goal_util.m"
      hlds__goal_util__conv0_LambdaHeadVar__2_29 = hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__834__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) hlds__goal_util__wrapper_arg_1));
    }
#line 834 "goal_util.m"
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv0_LambdaHeadVar__2_29));
#line 834 "goal_util.m"
    return hlds__goal_util__wrapper_arg_2;
#line 834 "goal_util.m"
  }
#line 834 "goal_util.m"
}

#line 146 "goal_util.m"
void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0(
#line 146 "goal_util.m"
  MR_Word hlds__goal_util__RttiVarMaps_6,
#line 146 "goal_util.m"
  MR_Word hlds__goal_util__VarTypes_7,
#line 146 "goal_util.m"
  MR_Word hlds__goal_util__ExistQVars_8,
#line 146 "goal_util.m"
  MR_Word hlds__goal_util__NonLocals_9,
#line 146 "goal_util.m"
  MR_Word * hlds__goal_util__NonLocalTypeInfos_10)
#line 146 "goal_util.m"
{
#line 821 "goal_util.m"
  {
#line 821 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 821 "goal_util.m"
    MR_Word hlds__goal_util__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 821 "goal_util.m"
    MR_Word hlds__goal_util__TypeInfo_39_39;
#line 821 "goal_util.m"
    MR_Word hlds__goal_util__TypeInfo_41_41;
#line 821 "goal_util.m"
    MR_Word hlds__goal_util__NonLocalsList_11;
#line 821 "goal_util.m"
    MR_Word hlds__goal_util__NonLocalsTypes_12;
#line 821 "goal_util.m"
    MR_Word hlds__goal_util__NonLocalTypeVarsList0_13;
#line 821 "goal_util.m"
    MR_Word hlds__goal_util__NonLocalTypeVarsList_14;
#line 821 "goal_util.m"
    MR_Word hlds__goal_util__NonLocalTypeVars_15;
#line 821 "goal_util.m"
    MR_Word hlds__goal_util__TypeVarToProgVar_16;
#line 821 "goal_util.m"
    MR_Word hlds__goal_util__NonLocalTypeInfoVars_20;
#line 821 "goal_util.m"
    MR_Word hlds__goal_util__NonLocalTypeClassInfoVarsList_26;
#line 821 "goal_util.m"
    MR_Word hlds__goal_util__NonLocalTypeClassInfoVars_27;
#line 821 "goal_util.m"
    MR_Word hlds__goal_util__V_30_30;
#line 821 "goal_util.m"
    MR_Word hlds__goal_util__V_31_31;

#line 825 "goal_util.m"
    {
#line 825 "goal_util.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__goal_util__TypeCtorInfo_38_38, hlds__goal_util__NonLocals_9, &hlds__goal_util__NonLocalsList_11);
    }
#line 826 "goal_util.m"
    {
#line 826 "goal_util.m"
      hlds__vartypes__lookup_var_types_3_p_0(hlds__goal_util__VarTypes_7, hlds__goal_util__NonLocalsList_11, &hlds__goal_util__NonLocalsTypes_12);
    }
#line 827 "goal_util.m"
    {
#line 827 "goal_util.m"
      parse_tree__prog_type__type_vars_list_2_p_0(hlds__goal_util__NonLocalsTypes_12, &hlds__goal_util__NonLocalTypeVarsList0_13);
    }
#line 18562 "hlds.goal_util.c"
    hlds__goal_util__TypeInfo_39_39 = (MR_Word) &hlds__goal_util_scalar_common_1[1];
#line 828 "goal_util.m"
    {
#line 828 "goal_util.m"
      hlds__goal_util__NonLocalTypeVarsList_14 = mercury__list__f_43_43_2_f_0(hlds__goal_util__TypeInfo_39_39, hlds__goal_util__ExistQVars_8, hlds__goal_util__NonLocalTypeVarsList0_13);
    }
#line 829 "goal_util.m"
    {
#line 829 "goal_util.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__goal_util__NonLocalTypeVarsList_14, &hlds__goal_util__NonLocalTypeVars_15);
    }
#line 834 "goal_util.m"
    {
#line 834 "goal_util.m"
      hlds__goal_util__TypeVarToProgVar_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 834 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__TypeVarToProgVar_16, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_4[0]));
#line 834 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__TypeVarToProgVar_16, 1) = ((MR_Box) (hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_1));
#line 834 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__TypeVarToProgVar_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 834 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__TypeVarToProgVar_16, 3) = ((MR_Box) (hlds__goal_util__RttiVarMaps_6));
#line 834 "goal_util.m"
    }
#line 18588 "hlds.goal_util.c"
    hlds__goal_util__TypeInfo_41_41 = (MR_Word) &hlds__goal_util_scalar_common_1[0];
#line 839 "goal_util.m"
    {
#line 839 "goal_util.m"
      hlds__goal_util__V_30_30 = mercury__list__map_2_f_0(hlds__goal_util__TypeInfo_39_39, hlds__goal_util__TypeInfo_41_41, hlds__goal_util__TypeVarToProgVar_16, hlds__goal_util__NonLocalTypeVarsList_14);
    }
#line 838 "goal_util.m"
    {
#line 838 "goal_util.m"
      hlds__goal_util__NonLocalTypeInfoVars_20 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__goal_util__TypeCtorInfo_38_38, hlds__goal_util__V_30_30);
    }
#line 845 "goal_util.m"
    {
#line 845 "goal_util.m"
      hlds__goal_util__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 845 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_31_31, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_4[1]));
#line 845 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_31_31, 1) = ((MR_Box) (hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3));
#line 845 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 845 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_31_31, 3) = ((MR_Box) (hlds__goal_util__RttiVarMaps_6));
#line 845 "goal_util.m"
      MR_hl_field(MR_mktag(0), hlds__goal_util__V_31_31, 4) = ((MR_Box) (hlds__goal_util__NonLocalTypeVars_15));
#line 845 "goal_util.m"
    }
#line 845 "goal_util.m"
    {
#line 845 "goal_util.m"
      mercury__solutions__solutions_2_p_1(hlds__goal_util__TypeInfo_41_41, hlds__goal_util__V_31_31, &hlds__goal_util__NonLocalTypeClassInfoVarsList_26);
    }
#line 859 "goal_util.m"
    {
#line 859 "goal_util.m"
      parse_tree__set_of_var__sorted_list_to_set_2_p_0(hlds__goal_util__TypeCtorInfo_38_38, hlds__goal_util__NonLocalTypeClassInfoVarsList_26, &hlds__goal_util__NonLocalTypeClassInfoVars_27);
    }
#line 861 "goal_util.m"
    {
#line 861 "goal_util.m"
      *hlds__goal_util__NonLocalTypeInfos_10 = parse_tree__set_of_var__union_2_f_0(hlds__goal_util__TypeCtorInfo_38_38, hlds__goal_util__NonLocalTypeInfoVars_20, hlds__goal_util__NonLocalTypeClassInfoVars_27);
    }
#line 821 "goal_util.m"
  }
#line 146 "goal_util.m"
}

#line 125 "goal_util.m"
void MR_CALL 
hlds__goal_util__attach_features_to_all_goals_4_p_1(
#line 125 "goal_util.m"
  MR_Word hlds__goal_util__Features_5,
#line 125 "goal_util.m"
  MR_Word hlds__goal_util__InFromGroundTerm_6,
#line 125 "goal_util.m"
  MR_Word hlds__goal_util__Goal0_7,
#line 125 "goal_util.m"
  MR_Word * hlds__goal_util__Goal_8)
#line 125 "goal_util.m"
{
#line 701 "goal_util.m"
  {
#line 701 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 701 "goal_util.m"
    {
#line 701 "goal_util.m"
      hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__Goal0_7, hlds__goal_util__Goal_8);
    }
#line 701 "goal_util.m"
  }
#line 125 "goal_util.m"
}

#line 122 "goal_util.m"
void MR_CALL 
hlds__goal_util__attach_features_to_all_goals_4_p_0(
#line 122 "goal_util.m"
  MR_Word hlds__goal_util__Features_5,
#line 122 "goal_util.m"
  MR_Word hlds__goal_util__InFromGroundTerm_6,
#line 122 "goal_util.m"
  MR_Word hlds__goal_util__Goal0_7,
#line 122 "goal_util.m"
  MR_Word * hlds__goal_util__Goal_8)
#line 122 "goal_util.m"
{
#line 701 "goal_util.m"
  {
#line 701 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 701 "goal_util.m"
    {
#line 701 "goal_util.m"
      hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__Goal0_7, hlds__goal_util__Goal_8);
    }
#line 701 "goal_util.m"
  }
#line 122 "goal_util.m"
}

#line 111 "goal_util.m"
void MR_CALL 
hlds__goal_util__generic_call_vars_2_p_0(
#line 111 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 111 "goal_util.m"
  MR_Word * hlds__goal_util__HeadVar__2_2)
#line 111 "goal_util.m"
{
#line 694 "goal_util.m"
  {
#line 694 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;

#line 694 "goal_util.m"
#line 694 "goal_util.m"
    switch (MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) {
#line 694 "goal_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 694 "goal_util.m"
      case (MR_Integer) 0:
#line 694 "goal_util.m"
        {
#line 694 "goal_util.m"
          MR_Word hlds__goal_util__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 694 "goal_util.m"
          MR_Word hlds__goal_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 694 "goal_util.m"
          MR_Word hlds__goal_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 694 "goal_util.m"
          MR_Integer hlds__goal_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));

#line 694 "goal_util.m"
          {
#line 694 "goal_util.m"
            MR_Word base;
#line 694 "goal_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "goal_util.m"
            *hlds__goal_util__HeadVar__2_2 = base;
#line 694 "goal_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Var_3));
#line 694 "goal_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 694 "goal_util.m"
          }
#line 694 "goal_util.m"
        }
#line 694 "goal_util.m"
        break;
#line 694 "goal_util.m"
      case (MR_Integer) 1:
#line 695 "goal_util.m"
        {
#line 695 "goal_util.m"
          MR_Word hlds__goal_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 695 "goal_util.m"
          MR_Integer hlds__goal_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 695 "goal_util.m"
          MR_Word hlds__goal_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
#line 695 "goal_util.m"
          MR_Word hlds__goal_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));

#line 695 "goal_util.m"
          {
#line 695 "goal_util.m"
            MR_Word base;
#line 695 "goal_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "goal_util.m"
            *hlds__goal_util__HeadVar__2_2 = base;
#line 695 "goal_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Var_8));
#line 695 "goal_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 695 "goal_util.m"
          }
#line 695 "goal_util.m"
        }
#line 694 "goal_util.m"
        break;
#line 694 "goal_util.m"
      case (MR_Integer) 2:
#line 696 "goal_util.m"
        *hlds__goal_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 694 "goal_util.m"
        break;
#line 694 "goal_util.m"
      case (MR_Integer) 3:
#line 697 "goal_util.m"
        *hlds__goal_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 694 "goal_util.m"
        break;
#line 694 "goal_util.m"
    }
#line 694 "goal_util.m"
  }
#line 111 "goal_util.m"
}

#line 107 "goal_util.m"
void MR_CALL 
hlds__goal_util__goals_goal_vars_2_p_0(
#line 107 "goal_util.m"
  MR_Word hlds__goal_util__Goals_3,
#line 107 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_5)
#line 107 "goal_util.m"
{
#line 543 "goal_util.m"
  {
#line 543 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 543 "goal_util.m"
    MR_Word hlds__goal_util__STATE_VARIABLE_Set_6_6;

#line 544 "goal_util.m"
    {
#line 544 "goal_util.m"
      hlds__goal_util__STATE_VARIABLE_Set_6_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 545 "goal_util.m"
    {
#line 545 "goal_util.m"
      hlds__goal_util__goals_goal_vars_acc_3_p_0(hlds__goal_util__Goals_3, hlds__goal_util__STATE_VARIABLE_Set_6_6, hlds__goal_util__STATE_VARIABLE_Set_5);
    }
#line 543 "goal_util.m"
  }
#line 107 "goal_util.m"
}

#line 103 "goal_util.m"
void MR_CALL 
hlds__goal_util__goal_vars_2_p_0(
#line 103 "goal_util.m"
  MR_Word hlds__goal_util__Goal_3,
#line 103 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_5)
#line 103 "goal_util.m"
{
#line 539 "goal_util.m"
  {
#line 539 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 539 "goal_util.m"
    MR_Word hlds__goal_util__STATE_VARIABLE_Set_6_6;

#line 540 "goal_util.m"
    {
#line 540 "goal_util.m"
      hlds__goal_util__STATE_VARIABLE_Set_6_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 541 "goal_util.m"
    {
#line 541 "goal_util.m"
      hlds__goal_util__goal_vars_acc_3_p_0(hlds__goal_util__Goal_3, hlds__goal_util__STATE_VARIABLE_Set_6_6, hlds__goal_util__STATE_VARIABLE_Set_5);
    }
#line 539 "goal_util.m"
  }
#line 103 "goal_util.m"
}

#line 90 "goal_util.m"
void MR_CALL 
hlds__goal_util__clone_variables_9_p_0(
#line 90 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 90 "goal_util.m"
  MR_Word hlds__goal_util__OldVarNames_2,
#line 90 "goal_util.m"
  MR_Word hlds__goal_util__OldVarTypes_3,
#line 90 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0_4,
#line 90 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarSet_5,
#line 90 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0_6,
#line 90 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarTypes_7,
#line 90 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_Renaming_0_8,
#line 90 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Renaming_9)
#line 90 "goal_util.m"
{
#line 529 "goal_util.m"
  while (MR_TRUE)
#line 529 "goal_util.m"
    {
#line 529 "goal_util.m"
      /* tailcall optimized into a loop */
#line 529 "goal_util.m"
      {
#line 529 "goal_util.m"
        MR_bool hlds__goal_util__succeeded;

#line 529 "goal_util.m"
        if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 529 "goal_util.m"
          {
#line 529 "goal_util.m"
            *hlds__goal_util__STATE_VARIABLE_Renaming_9 = hlds__goal_util__STATE_VARIABLE_Renaming_0_8;
#line 529 "goal_util.m"
            *hlds__goal_util__STATE_VARIABLE_VarTypes_7 = hlds__goal_util__STATE_VARIABLE_VarTypes_0_6;
#line 529 "goal_util.m"
            *hlds__goal_util__STATE_VARIABLE_VarSet_5 = hlds__goal_util__STATE_VARIABLE_VarSet_0_4;
#line 529 "goal_util.m"
          }
#line 529 "goal_util.m"
        else
#line 531 "goal_util.m"
          {
#line 531 "goal_util.m"
            MR_Word hlds__goal_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
#line 531 "goal_util.m"
            MR_Word hlds__goal_util__Vars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 531 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_35_35;
#line 531 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_36_36;
#line 531 "goal_util.m"
            MR_Word hlds__goal_util__STATE_VARIABLE_Renaming_37_37;
#line 532 "goal_util.m"
            MR_Word hlds__goal_util___CloneVar_28;

#line 532 "goal_util.m"
            {
#line 532 "goal_util.m"
              hlds__goal_util__clone_variable_10_p_0(hlds__goal_util__Var_21, hlds__goal_util__OldVarNames_2, hlds__goal_util__OldVarTypes_3, hlds__goal_util__STATE_VARIABLE_VarSet_0_4, &hlds__goal_util__STATE_VARIABLE_VarSet_35_35, hlds__goal_util__STATE_VARIABLE_VarTypes_0_6, &hlds__goal_util__STATE_VARIABLE_VarTypes_36_36, hlds__goal_util__STATE_VARIABLE_Renaming_0_8, &hlds__goal_util__STATE_VARIABLE_Renaming_37_37, &hlds__goal_util___CloneVar_28);
            }
#line 534 "goal_util.m"
            /* direct tailcall eliminated */
#line 534 "goal_util.m"
            {
#line 534 "goal_util.m"
              MR_Word hlds__goal_util__HeadVar__1__tmp_copy_1 = hlds__goal_util__Vars_22;
#line 534 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0__tmp_copy_4 = hlds__goal_util__STATE_VARIABLE_VarSet_35_35;
#line 534 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0__tmp_copy_6 = hlds__goal_util__STATE_VARIABLE_VarTypes_36_36;
#line 534 "goal_util.m"
              MR_Word hlds__goal_util__STATE_VARIABLE_Renaming_0__tmp_copy_8 = hlds__goal_util__STATE_VARIABLE_Renaming_37_37;

#line 534 "goal_util.m"
              hlds__goal_util__STATE_VARIABLE_Renaming_0_8 = hlds__goal_util__STATE_VARIABLE_Renaming_0__tmp_copy_8;
#line 534 "goal_util.m"
              hlds__goal_util__STATE_VARIABLE_VarTypes_0_6 = hlds__goal_util__STATE_VARIABLE_VarTypes_0__tmp_copy_6;
#line 534 "goal_util.m"
              hlds__goal_util__STATE_VARIABLE_VarSet_0_4 = hlds__goal_util__STATE_VARIABLE_VarSet_0__tmp_copy_4;
#line 534 "goal_util.m"
              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__HeadVar__1__tmp_copy_1;
#line 534 "goal_util.m"
            }
#line 534 "goal_util.m"
            continue;
#line 531 "goal_util.m"
          }
#line 529 "goal_util.m"
      }
#line 529 "goal_util.m"
      break;
#line 529 "goal_util.m"
    }
#line 90 "goal_util.m"
}

#line 78 "goal_util.m"
void MR_CALL 
hlds__goal_util__clone_variable_10_p_0(
#line 78 "goal_util.m"
  MR_Word hlds__goal_util__Var_11,
#line 78 "goal_util.m"
  MR_Word hlds__goal_util__OldVarNames_12,
#line 78 "goal_util.m"
  MR_Word hlds__goal_util__OldVarTypes_13,
#line 78 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0_21,
#line 78 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarSet_22,
#line 78 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0_23,
#line 78 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarTypes_24,
#line 78 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_Renaming_0_25,
#line 78 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_Renaming_26,
#line 78 "goal_util.m"
  MR_Word * hlds__goal_util__CloneVar_17)
#line 78 "goal_util.m"
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
#line 518 "goal_util.m"
      {
#line 518 "goal_util.m"
        MR_Word hlds__goal_util__TypeInfo_35_35;
#line 516 "goal_util.m"
        MR_String hlds__goal_util__Name_19;
#line 522 "goal_util.m"
        MR_Word hlds__goal_util__VarType_20;

#line 514 "goal_util.m"
        {
#line 514 "goal_util.m"
          hlds__goal_util__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__OldVarNames_12, hlds__goal_util__Var_11, &hlds__goal_util__Name_19);
        }
#line 516 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 515 "goal_util.m"
          {
#line 515 "goal_util.m"
            {
#line 515 "goal_util.m"
              mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Name_19, hlds__goal_util__CloneVar_17, hlds__goal_util__STATE_VARIABLE_VarSet_0_21, hlds__goal_util__STATE_VARIABLE_VarSet_22);
            }
#line 515 "goal_util.m"
          }
#line 516 "goal_util.m"
        else
#line 517 "goal_util.m"
          {
#line 517 "goal_util.m"
            {
#line 517 "goal_util.m"
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__CloneVar_17, hlds__goal_util__STATE_VARIABLE_VarSet_0_21, hlds__goal_util__STATE_VARIABLE_VarSet_22);
            }
#line 517 "goal_util.m"
          }
#line 19061 "hlds.goal_util.c"
        hlds__goal_util__TypeInfo_35_35 = (MR_Word) &hlds__goal_util_scalar_common_1[0];
#line 519 "goal_util.m"
        {
#line 519 "goal_util.m"
          mercury__map__det_insert_4_p_0(hlds__goal_util__TypeInfo_35_35, hlds__goal_util__TypeInfo_35_35, ((MR_Box) (hlds__goal_util__Var_11)), ((MR_Box) (*hlds__goal_util__CloneVar_17)), hlds__goal_util__STATE_VARIABLE_Renaming_0_25, hlds__goal_util__STATE_VARIABLE_Renaming_26);
        }
#line 520 "goal_util.m"
        {
#line 520 "goal_util.m"
          hlds__goal_util__succeeded = hlds__vartypes__search_var_type_3_p_0(hlds__goal_util__OldVarTypes_13, hlds__goal_util__Var_11, &hlds__goal_util__VarType_20);
        }
#line 522 "goal_util.m"
        if (hlds__goal_util__succeeded)
#line 521 "goal_util.m"
          {
#line 521 "goal_util.m"
            hlds__vartypes__add_var_type_4_p_0(*hlds__goal_util__CloneVar_17, hlds__goal_util__VarType_20, hlds__goal_util__STATE_VARIABLE_VarTypes_0_23, hlds__goal_util__STATE_VARIABLE_VarTypes_24);
          }
#line 522 "goal_util.m"
        else
#line 522 "goal_util.m"
          *hlds__goal_util__STATE_VARIABLE_VarTypes_24 = hlds__goal_util__STATE_VARIABLE_VarTypes_0_23;
#line 518 "goal_util.m"
      }
#line 513 "goal_util.m"
  }
#line 78 "goal_util.m"
}

#line 60 "goal_util.m"
void MR_CALL 
hlds__goal_util__create_renaming_9_p_0(
#line 60 "goal_util.m"
  MR_Word hlds__goal_util__OrigVars_10,
#line 60 "goal_util.m"
  MR_Word hlds__goal_util__InstMapDelta_11,
#line 60 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0_19,
#line 60 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarSet_20,
#line 60 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0_21,
#line 60 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarTypes_22,
#line 60 "goal_util.m"
  MR_Word * hlds__goal_util__Unifies_14,
#line 60 "goal_util.m"
  MR_Word * hlds__goal_util__NewVars_15,
#line 60 "goal_util.m"
  MR_Word * hlds__goal_util__Renaming_16)
#line 60 "goal_util.m"
{
#line 472 "goal_util.m"
  {
#line 472 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 472 "goal_util.m"
    MR_Word hlds__goal_util__TypeInfo_28_28 = (MR_Word) &hlds__goal_util_scalar_common_1[0];
#line 472 "goal_util.m"
    MR_Word hlds__goal_util__RevUnifies_17;
#line 472 "goal_util.m"
    MR_Word hlds__goal_util__RevNewVars_18;
#line 472 "goal_util.m"
    MR_Word hlds__goal_util__V_27_27;

#line 474 "goal_util.m"
    {
#line 474 "goal_util.m"
      hlds__goal_util__V_27_27 = mercury__map__init_0_f_0(hlds__goal_util__TypeInfo_28_28, hlds__goal_util__TypeInfo_28_28);
    }
#line 473 "goal_util.m"
    {
#line 473 "goal_util.m"
      hlds__goal_util__create_renaming_2_12_p_0(hlds__goal_util__OrigVars_10, hlds__goal_util__InstMapDelta_11, hlds__goal_util__STATE_VARIABLE_VarSet_0_19, hlds__goal_util__STATE_VARIABLE_VarSet_20, hlds__goal_util__STATE_VARIABLE_VarTypes_0_21, hlds__goal_util__STATE_VARIABLE_VarTypes_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__goal_util__RevUnifies_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__goal_util__RevNewVars_18, hlds__goal_util__V_27_27, hlds__goal_util__Renaming_16);
    }
#line 475 "goal_util.m"
    {
#line 475 "goal_util.m"
      mercury__list__reverse_2_p_0(hlds__goal_util__TypeInfo_28_28, hlds__goal_util__RevNewVars_18, hlds__goal_util__NewVars_15);
    }
#line 476 "goal_util.m"
    {
#line 476 "goal_util.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__goal_util__RevUnifies_17, hlds__goal_util__Unifies_14);
    }
#line 472 "goal_util.m"
  }
#line 60 "goal_util.m"
}

#line 46 "goal_util.m"
void MR_CALL 
hlds__goal_util__update_instmap_3_p_0(
#line 46 "goal_util.m"
  MR_Word hlds__goal_util__HeadVar__1_1,
#line 46 "goal_util.m"
  MR_Word hlds__goal_util__STATE_VARIABLE_InstMap_0_8,
#line 46 "goal_util.m"
  MR_Word * hlds__goal_util__STATE_VARIABLE_InstMap_9)
#line 46 "goal_util.m"
{
#line 465 "goal_util.m"
  {
#line 465 "goal_util.m"
    MR_bool hlds__goal_util__succeeded;
#line 465 "goal_util.m"
    MR_Word hlds__goal_util__GoalInfo0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
#line 465 "goal_util.m"
    MR_Word hlds__goal_util__DeltaInstMap_7;
#line 465 "goal_util.m"
    MR_Word hlds__goal_util___GoalExpr0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));

#line 466 "goal_util.m"
    {
#line 466 "goal_util.m"
      hlds__goal_util__DeltaInstMap_7 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__GoalInfo0_5);
    }
#line 467 "goal_util.m"
    {
#line 467 "goal_util.m"
      hlds__instmap__apply_instmap_delta_3_p_0(hlds__goal_util__STATE_VARIABLE_InstMap_0_8, hlds__goal_util__DeltaInstMap_7, hlds__goal_util__STATE_VARIABLE_InstMap_9);
    }
#line 465 "goal_util.m"
  }
#line 46 "goal_util.m"
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
