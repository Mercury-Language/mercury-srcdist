/*
** Automatically generated from `goal_util.m'
** by the Mercury compiler,
** version rotd-2017-08-02
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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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



struct hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0_s {
  MR_Tuple * hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__LambdaHeadVar__1_14;
  MR_Cont hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__cont;
  void * hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__cont_env_ptr;
  MR_bool hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__succeeded;
  MR_Word hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__SubGoal_7;
  MR_Word hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__Var_15;
  MR_Word hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__PredId_16;
  MR_Word hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__Args_17;
};

struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0_s {
  MR_Word hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__RttiVarMaps_6;
  MR_Word hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__NonLocalTypeVars_15;
  MR_Word * hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__LambdaHeadVar__1_32;
  MR_Cont hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__cont;
  void * hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__cont_env_ptr;
  MR_bool hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__succeeded;
  MR_Word hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__TypeCtorInfo_43_43;
  MR_Word hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__Constraint_23;
  MR_Word hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__ArgTypes_25;
  MR_Word hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__TypeVar_34;
  MR_Box hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__conv0_Constraint_23;
};

struct hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0_s {
  MR_Box * hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__wrapper_arg_1;
  MR_Cont hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__cont;
  void * hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__cont_env_ptr;
  MR_Word hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__conv0_PredProcId_5;
};

struct hlds__goal_util__predids_from_goals_2_p_0_2_env_0_s {
  MR_Box * hlds__goal_util__predids_from_goals_2_p_0_2_env_0__wrapper_arg_1;
  MR_Cont hlds__goal_util__predids_from_goals_2_p_0_2_env_0__cont;
  void * hlds__goal_util__predids_from_goals_2_p_0_2_env_0__cont_env_ptr;
  MR_Word hlds__goal_util__predids_from_goals_2_p_0_2_env_0__conv0_PredId_5;
};

struct hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0_s {
  MR_Box * hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__wrapper_arg_1;
  MR_Cont hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__cont;
  void * hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__cont_env_ptr;
  MR_Tuple hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__conv0_LambdaHeadVar__1_14;
};

struct hlds__goal_util__predids_from_goal_2_p_0_2_env_0_s {
  MR_Box * hlds__goal_util__predids_from_goal_2_p_0_2_env_0__wrapper_arg_1;
  MR_Cont hlds__goal_util__predids_from_goal_2_p_0_2_env_0__cont;
  void * hlds__goal_util__predids_from_goal_2_p_0_2_env_0__cont_env_ptr;
  MR_Word hlds__goal_util__predids_from_goal_2_p_0_2_env_0__conv0_PredId_5;
};

struct hlds__goal_util__goal_contains_goal_2_p_0_env_0_s {
  MR_Word * hlds__goal_util__goal_contains_goal_2_p_0_env_0__HeadVar__2_2;
  MR_Cont hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont;
  void * hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont_env_ptr;
  MR_Word hlds__goal_util__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7;
};

struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s {
  MR_Word * hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2;
  MR_Cont hlds__goal_util__direct_subgoal_2_p_0_env_0__cont;
  void * hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr;
  MR_Box hlds__goal_util__direct_subgoal_2_p_0_env_0__conv0_Goal_2;
  MR_Box hlds__goal_util__direct_subgoal_2_p_0_env_0__conv1_Goal_2;
  MR_Word hlds__goal_util__direct_subgoal_2_p_0_env_0__Case_20;
  MR_Box hlds__goal_util__direct_subgoal_2_p_0_env_0__conv2_Case_20;
};

struct hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0_s {
  MR_Box * hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__wrapper_arg_1;
  MR_Cont hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__cont;
  void * hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__cont_env_ptr;
  MR_Word hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__conv1_LambdaHeadVar__1_32;
};


static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__goal_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_VA_PseudoTypeInfo_Struct2 hlds__goal_util____vpti_tuple_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__goal_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_VA_PseudoTypeInfo_Struct2 hlds__goal_util____vpti_pred_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_0;

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_1;

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_value_ordered_attach_in_from_ground_term_0[2];

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_attach_in_from_ground_term_0[2];

static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_attach_in_from_ground_term_0[2];

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_0;

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_1;

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_value_ordered_goal_is_atomic_0[2];

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_goal_is_atomic_0[2];

static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_goal_is_atomic_0[2];

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_0;

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_1;

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_value_ordered_is_leaf_0[2];

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_is_leaf_0[2];

static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_is_leaf_0[2];

static const MR_PseudoTypeInfo hlds__goal_util__hlds__goal_util__field_types_maybe_transformed_goal_0_0[1];

static const MR_DuFunctorDesc hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_0;

static const MR_PseudoTypeInfo hlds__goal_util__hlds__goal_util__field_types_maybe_transformed_goal_0_1[1];

static const MR_DuFunctorDesc hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_1;

static const MR_DuFunctorDesc hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_2;

static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_0[1];

static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_1[1];

static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_2[1];

static const MR_DuPtagLayout hlds__goal_util__hlds__goal_util__du_ptag_ordered_maybe_transformed_goal_0[3];

static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_name_ordered_maybe_transformed_goal_0[3];

static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_maybe_transformed_goal_0[3];

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2537__1_3_p_0(
  MR_Word hlds__goal_util__TransformP_4,
  MR_Word hlds__goal_util__LambdaHeadVar__1_61,
  MR_Word * hlds__goal_util__LambdaHeadVar__2_62);

static MR_Word MR_CALL 
hlds__goal_util__IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap__2356__1_1_f_0(
  MR_Word hlds__goal_util__LambdaHeadVar__1_107);

static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_foreign_proc__1987__1_2_p_0(
  MR_Word hlds__goal_util__Purity_22,
  MR_Word hlds__goal_util__PredPurity_45);

static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_simple_call__1954__1_2_p_0(
  MR_Word hlds__goal_util__Purity_18,
  MR_Word hlds__goal_util__PredPurity_36);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1655__1_2_p_0(
  MR_Word hlds__goal_util__LambdaHeadVar__1_64,
  MR_Word * hlds__goal_util__LambdaHeadVar__2_65);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_1(
  void * hlds__goal_util__env_ptr_arg);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0(
  MR_Word hlds__goal_util__Goal_3,
  MR_Tuple * hlds__goal_util__LambdaHeadVar__1_14,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_2(
  void * hlds__goal_util__env_ptr_arg);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_3(
  void * hlds__goal_util__env_ptr_arg);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_1(
  void * hlds__goal_util__env_ptr_arg);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0(
  MR_Word hlds__goal_util__RttiVarMaps_6,
  MR_Word hlds__goal_util__NonLocalTypeVars_15,
  MR_Word * hlds__goal_util__LambdaHeadVar__1_32,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr);

static MR_Word MR_CALL 
hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__851__1_2_f_0(
  MR_Word hlds__goal_util__RttiVarMaps_6,
  MR_Word hlds__goal_util__LambdaHeadVar__1_28);

static MR_Word MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_case_1_f_0(
  MR_Word hlds__goal_util__Case0_3);

static void MR_CALL 
hlds__goal_util__flatten_disj_acc_3_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3);

static void MR_CALL 
hlds__goal_util__flatten_disj_acc_3_p_0(
  MR_Word hlds__goal_util__Disjunct_4,
  MR_Word hlds__goal_util__STATE_VARIABLE_FlatDisjuncts_0_8,
  MR_Word * hlds__goal_util__STATE_VARIABLE_FlatDisjuncts_9);

static void MR_CALL 
hlds__goal_util__case_proc_refs_acc_3_p_0(
  MR_Word hlds__goal_util__Case_4,
  MR_Word hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_9,
  MR_Word * hlds__goal_util__STATE_VARIABLE_ReferredToProcs_10);

static void MR_CALL 
hlds__goal_util__clause_size_increment_3_p_0(
  MR_Word hlds__goal_util__Clause_4,
  MR_Integer hlds__goal_util__Size0_5,
  MR_Integer * hlds__goal_util__Size_6);

static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_3(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box * hlds__goal_util__wrapper_arg_2);

static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_2(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box * hlds__goal_util__wrapper_arg_2);

static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box * hlds__goal_util__wrapper_arg_2);

static void MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_2(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3);

static MR_Box MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1);

static void MR_CALL 
hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word * hlds__goal_util__HeadVar__2_2);

static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_4(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1);

static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_3(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1);

static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_2(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1);

static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1);

static void MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_4(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_3(
  MR_Box hlds__goal_util__closure_arg);

static MR_Box MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_2(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1);

static MR_Box MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1);

static void MR_CALL 
hlds__goal_util__generate_simple_call_12_p_0_2(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_util__generate_simple_call_12_p_0_1(
  MR_Box hlds__goal_util__closure_arg);

static void MR_CALL 
hlds__goal_util__flatten_disj_2_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3);

static void MR_CALL 
hlds__goal_util__switch_to_disjunction_10_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box * hlds__goal_util__wrapper_arg_2,
  MR_Box hlds__goal_util__wrapper_arg_3,
  MR_Box * hlds__goal_util__wrapper_arg_4,
  MR_Box hlds__goal_util__wrapper_arg_5,
  MR_Box * hlds__goal_util__wrapper_arg_6,
  MR_Box hlds__goal_util__wrapper_arg_7,
  MR_Box * hlds__goal_util__wrapper_arg_8);

static void MR_CALL 
hlds__goal_util__case_to_disjunct_11_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box * hlds__goal_util__wrapper_arg_2);

static void MR_CALL 
hlds__goal_util__pred_proc_ids_from_goal_2_p_0_1(
  void * hlds__goal_util__env_ptr_arg);

static void MR_CALL 
hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box * hlds__goal_util__wrapper_arg_1,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr);

static void MR_CALL 
hlds__goal_util__predids_from_goals_2_p_0_1(
  void * hlds__goal_util__env_ptr_arg);

static void MR_CALL 
hlds__goal_util__predids_from_goals_2_p_0_2(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box * hlds__goal_util__wrapper_arg_1,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr);

static void MR_CALL 
hlds__goal_util__predids_with_args_from_goal_2_p_0_1(
  void * hlds__goal_util__env_ptr_arg);

static void MR_CALL 
hlds__goal_util__predids_with_args_from_goal_2_p_0_2(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box * hlds__goal_util__wrapper_arg_1,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr);

static void MR_CALL 
hlds__goal_util__predids_from_goal_2_p_0_1(
  void * hlds__goal_util__env_ptr_arg);

static void MR_CALL 
hlds__goal_util__predids_from_goal_2_p_0_2(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box * hlds__goal_util__wrapper_arg_1,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr);

static void MR_CALL 
hlds__goal_util__goal_contains_goal_2_p_0_1(
  void * hlds__goal_util__env_ptr_arg);

static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_1(
  void * hlds__goal_util__env_ptr_arg);

static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_2(
  void * hlds__goal_util__env_ptr_arg);

static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_4(
  void * hlds__goal_util__env_ptr_arg);

static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_3(
  void * hlds__goal_util__env_ptr_arg);

static void MR_CALL 
hlds__goal_util__cases_contain_reconstruction_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word * hlds__goal_util__HeadVar__2_2);

static void MR_CALL 
hlds__goal_util__goals_contain_reconstruction_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word * hlds__goal_util__HeadVar__2_2);

static void MR_CALL 
hlds__goal_util__case_list_calls_proc_in_list_acc_4_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__PredProcIds_2,
  MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0_3,
  MR_Word * hlds__goal_util__STATE_VARIABLE_CalledSet_4);

static void MR_CALL 
hlds__goal_util__goal_list_calls_proc_in_set_acc_4_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__PredProcIds_2,
  MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0_3,
  MR_Word * hlds__goal_util__STATE_VARIABLE_CalledSet_4);

static void MR_CALL 
hlds__goal_util__goal_calls_proc_in_set_acc_4_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__PredProcIds_7,
  MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0_58,
  MR_Word * hlds__goal_util__STATE_VARIABLE_CalledSet_59);

static void MR_CALL 
hlds__goal_util__cases_calls_pred_id_2_p_1(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word * hlds__goal_util__PredId_7,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr);

static void MR_CALL 
hlds__goal_util__goals_calls_pred_id_2_p_1(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word * hlds__goal_util__PredId_5,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr);

static MR_bool MR_CALL 
hlds__goal_util__cases_calls_pred_id_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__PredId_7);

static MR_bool MR_CALL 
hlds__goal_util__goals_calls_pred_id_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__PredId_5);

static void MR_CALL 
hlds__goal_util__cases_calls_2_p_1(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word * hlds__goal_util__PredProcId_7,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr);

static void MR_CALL 
hlds__goal_util__goals_calls_2_p_1(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word * hlds__goal_util__PredProcId_5,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr);

static MR_bool MR_CALL 
hlds__goal_util__cases_calls_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__PredProcId_7);

static MR_bool MR_CALL 
hlds__goal_util__goals_calls_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__PredProcId_5);

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0_4(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3);

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0_3(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3);

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0_2(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3);

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3);

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0(
  MR_Word hlds__goal_util__Goal_4,
  MR_Word hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_88,
  MR_Word * hlds__goal_util__STATE_VARIABLE_ReferredToProcs_89);

static void MR_CALL 
hlds__goal_util__cons_id_proc_refs_acc_3_p_0(
  MR_Word hlds__goal_util__ConsId_4,
  MR_Word hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40,
  MR_Word * hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41);

static void MR_CALL 
hlds__goal_util__goals_proc_refs_1_f_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3);

static void MR_CALL 
hlds__goal_util__clause_list_size_2_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3);

static void MR_CALL 
hlds__goal_util__cases_size_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Integer * hlds__goal_util__HeadVar__2_2);

static MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_cases_1_f_0(
  MR_Word hlds__goal_util__HeadVar__1_1);

static MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_goals_1_f_0(
  MR_Word hlds__goal_util__HeadVar__1_1);

static void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_2(
  void * hlds__goal_util__env_ptr_arg);

static void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box * hlds__goal_util__wrapper_arg_1,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr);

static MR_Box MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1);

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__HeadVar__3_3,
  MR_Word * hlds__goal_util__HeadVar__4_4);

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__HeadVar__3_3,
  MR_Word * hlds__goal_util__HeadVar__4_4);

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3);

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__HeadVar__3_3,
  MR_Word * hlds__goal_util__HeadVar__4_4);

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__HeadVar__3_3,
  MR_Word * hlds__goal_util__HeadVar__4_4);

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3);

static void MR_CALL 
hlds__goal_util__rhs_goal_vars_acc_3_p_0(
  MR_Word hlds__goal_util__RHS_4,
  MR_Word hlds__goal_util__STATE_VARIABLE_Set_0_19,
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_20);

static void MR_CALL 
hlds__goal_util__cases_goal_vars_acc_3_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__STATE_VARIABLE_Set_0_2,
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_3);

static void MR_CALL 
hlds__goal_util__goals_goal_vars_acc_3_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__STATE_VARIABLE_Set_0_2,
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_3);

static MR_Box MR_CALL 
hlds__goal_util__goal_vars_acc_3_p_0_2(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1);

static MR_Box MR_CALL 
hlds__goal_util__goal_vars_acc_3_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1);

static void MR_CALL 
hlds__goal_util__goal_vars_acc_3_p_0(
  MR_Word hlds__goal_util__Goal_4,
  MR_Word hlds__goal_util__STATE_VARIABLE_Set_0_98,
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_99);

static void MR_CALL 
hlds__goal_util__create_renaming_2_12_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__InstMapDelta_2,
  MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0_3,
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarSet_4,
  MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0_5,
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarTypes_6,
  MR_Word hlds__goal_util__STATE_VARIABLE_RevUnifies_0_7,
  MR_Word * hlds__goal_util__STATE_VARIABLE_RevUnifies_8,
  MR_Word hlds__goal_util__STATE_VARIABLE_RevNewVars_0_9,
  MR_Word * hlds__goal_util__STATE_VARIABLE_RevNewVars_10,
  MR_Word hlds__goal_util__STATE_VARIABLE_Renaming_0_11,
  MR_Word * hlds__goal_util__STATE_VARIABLE_Renaming_12);

static MR_bool MR_CALL 
hlds__goal_util____Unify____attach_in_from_ground_term_0_0_10001(
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2);

static void MR_CALL 
hlds__goal_util____Compare____attach_in_from_ground_term_0_0_10001(
  MR_Box * hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box hlds__goal_util__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_util____Unify____goal_is_atomic_0_0_10001(
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2);

static void MR_CALL 
hlds__goal_util____Compare____goal_is_atomic_0_0_10001(
  MR_Box * hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box hlds__goal_util__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_util____Unify____is_leaf_0_0_10001(
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2);

static void MR_CALL 
hlds__goal_util____Compare____is_leaf_0_0_10001(
  MR_Box * hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box hlds__goal_util__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_util____Unify____maybe_transformed_goal_0_0_10001(
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2);

static void MR_CALL 
hlds__goal_util____Compare____maybe_transformed_goal_0_0_10001(
  MR_Box * hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box hlds__goal_util__wrapper_arg_3);


static /* final */ const MR_Box hlds__goal_util_scalar_common_1[7][2];

static /* final */ const MR_Box hlds__goal_util_scalar_common_2[1][4];

static /* final */ const MR_Box hlds__goal_util_scalar_common_3[24][3];

static /* final */ const MR_Box hlds__goal_util_scalar_common_4[9][5];

static /* final */ const MR_Box hlds__goal_util_scalar_common_5[10][6];

static /* final */ const MR_Box hlds__goal_util_scalar_common_6[1][14];




static /* final */ const MR_Box hlds__goal_util_scalar_common_1[7][2] = {
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
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__goal_util_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 6 */
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
    ((MR_Box) (&hlds__goal_util_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box hlds__goal_util_scalar_common_3[24][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__goal_util_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[0])),
    ((MR_Box) (hlds__goal_util__goal_vars_acc_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[0])),
    ((MR_Box) (hlds__goal_util__goal_vars_acc_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[0])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[0])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[3])),
    ((MR_Box) (hlds__goal_util__clause_list_size_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[4])),
    ((MR_Box) (hlds__goal_util__goals_proc_refs_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[4])),
    ((MR_Box) (hlds__goal_util__goal_proc_refs_acc_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[4])),
    ((MR_Box) (hlds__goal_util__goal_proc_refs_acc_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[4])),
    ((MR_Box) (hlds__goal_util__goal_proc_refs_acc_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[5])),
    ((MR_Box) (hlds__goal_util__goal_proc_refs_acc_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[4])),
    ((MR_Box) (hlds__goal_util__case_to_disjunct_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[6])),
    ((MR_Box) (hlds__goal_util__flatten_disj_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[0])),
    ((MR_Box) (hlds__goal_util__generate_simple_call_12_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[0])),
    ((MR_Box) (hlds__goal_util__generate_foreign_proc_16_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[0])),
    ((MR_Box) (hlds__goal_util__generate_foreign_proc_16_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[0])),
    ((MR_Box) (hlds__goal_util__generate_foreign_proc_16_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[6])),
    ((MR_Box) (hlds__goal_util__maybe_strip_equality_pretest_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[6])),
    ((MR_Box) (hlds__goal_util__maybe_strip_equality_pretest_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[6])),
    ((MR_Box) (hlds__goal_util__maybe_strip_equality_pretest_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[7])),
    ((MR_Box) (hlds__goal_util__maybe_strip_equality_pretest_1_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_4[8])),
    ((MR_Box) (hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[7])),
    ((MR_Box) (hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[6])),
    ((MR_Box) (hlds__goal_util__flatten_disj_acc_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__goal_util_scalar_common_4[9][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__goal_util____vpti_tuple_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0))
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

static /* final */ const MR_Box hlds__goal_util_scalar_common_5[10][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__goal_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__goal_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__goal_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__goal_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__goal_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__goal_util__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__goal_util__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__goal_util____vpti_pred_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__goal_util____vpti_pred_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
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



static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__goal_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 hlds__goal_util____vpti_tuple_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__goal_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__goal_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 hlds__goal_util____vpti_pred_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_0 = {
  (MR_String) "attach_in_from_ground_term",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_1 = {
  (MR_String) "do_not_attach_in_from_ground_term",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_value_ordered_attach_in_from_ground_term_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_1
};

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_attach_in_from_ground_term_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_1
};

static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_attach_in_from_ground_term_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__goal_util__hlds__goal_util__type_ctor_info_attach_in_from_ground_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_0 = {
  (MR_String) "goal_is_atomic",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_1 = {
  (MR_String) "goal_is_nonatomic",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_value_ordered_goal_is_atomic_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_1
};

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_goal_is_atomic_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_1
};

static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_goal_is_atomic_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__goal_util__hlds__goal_util__type_ctor_info_goal_is_atomic_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_0 = {
  (MR_String) "is_leaf",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_1 = {
  (MR_String) "is_not_leaf",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_value_ordered_is_leaf_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_1
};

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_is_leaf_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_1
};

static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_is_leaf_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__goal_util__hlds__goal_util__type_ctor_info_is_leaf_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_PseudoTypeInfo hlds__goal_util__hlds__goal_util__field_types_maybe_transformed_goal_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__goal_util__hlds__goal_util__field_types_maybe_transformed_goal_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__goal_util__hlds__goal_util__field_types_maybe_transformed_goal_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__goal_util__hlds__goal_util__field_types_maybe_transformed_goal_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_2 = {
  (MR_String) "goal_not_found",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_0[1] = {
  &hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_2
};

static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_1[1] = {
  &hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_0
};

static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_2[1] = {
  &hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_1
};

static const MR_DuPtagLayout hlds__goal_util__hlds__goal_util__du_ptag_ordered_maybe_transformed_goal_0[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_2
  }
};

static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_name_ordered_maybe_transformed_goal_0[3] = {
  &hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_1,
  &hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_2,
  &hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_0
};

static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_maybe_transformed_goal_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__goal_util__hlds__goal_util__type_ctor_info_maybe_transformed_goal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
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

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2537__1_3_p_0(
  MR_Word hlds__goal_util__TransformP_4,
  MR_Word hlds__goal_util__LambdaHeadVar__1_61,
  MR_Word * hlds__goal_util__LambdaHeadVar__2_62)
{
  {
    MR_Word hlds__goal_util__GoalI0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LambdaHeadVar__1_61, (MR_Integer) 2)));
    MR_Word hlds__goal_util__GoalI_43;
    MR_Word hlds__goal_util__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LambdaHeadVar__1_61, (MR_Integer) 0)));
    MR_Word hlds__goal_util__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LambdaHeadVar__1_61, (MR_Integer) 1)));
    MR_Word hlds__goal_util__Var_72;
    MR_Word hlds__goal_util__Var_73;
    MR_Word hlds__goal_util__Var_74;

    hlds__goal_util__transform_all_goals_3_p_0(hlds__goal_util__TransformP_4, hlds__goal_util__GoalI0_42, &hlds__goal_util__GoalI_43);
    hlds__goal_util__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LambdaHeadVar__1_61, (MR_Integer) 0)));
    hlds__goal_util__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LambdaHeadVar__1_61, (MR_Integer) 1)));
    hlds__goal_util__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LambdaHeadVar__1_61, (MR_Integer) 2)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *hlds__goal_util__LambdaHeadVar__2_62 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__Var_72));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__Var_73));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__goal_util__GoalI_43));
    }
  }
}

static MR_Word MR_CALL 
hlds__goal_util__IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap__2356__1_1_f_0(
  MR_Word hlds__goal_util__LambdaHeadVar__1_107)
{
  {
    MR_Word hlds__goal_util__LambdaHeadVar__2_108;
    MR_Word hlds__goal_util__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LambdaHeadVar__1_107, (MR_Integer) 1)));
    MR_Word hlds__goal_util__Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LambdaHeadVar__1_107, (MR_Integer) 0)));

    hlds__goal_util__LambdaHeadVar__2_108 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__Var_109);
    return hlds__goal_util__LambdaHeadVar__2_108;
  }
}

static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_foreign_proc__1987__1_2_p_0(
  MR_Word hlds__goal_util__Purity_22,
  MR_Word hlds__goal_util__PredPurity_45)
{
  {
    MR_bool hlds__goal_util__succeeded = (hlds__goal_util__Purity_22 == hlds__goal_util__PredPurity_45);

    return hlds__goal_util__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_simple_call__1954__1_2_p_0(
  MR_Word hlds__goal_util__Purity_18,
  MR_Word hlds__goal_util__PredPurity_36)
{
  {
    MR_bool hlds__goal_util__succeeded = (hlds__goal_util__Purity_18 == hlds__goal_util__PredPurity_36);

    return hlds__goal_util__succeeded;
  }
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1655__1_2_p_0(
  MR_Word hlds__goal_util__LambdaHeadVar__1_64,
  MR_Word * hlds__goal_util__LambdaHeadVar__2_65)
{
  {
    MR_Word hlds__goal_util__Var_66;
    MR_Word hlds__goal_util__Var_68;

    {
      hlds__goal_util__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_66, 0) = ((MR_Box) (hlds__goal_util__LambdaHeadVar__1_64));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_66, 1) = ((MR_Box) (hlds__goal_util__LambdaHeadVar__1_64));
    }
    {
      hlds__goal_util__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_68, 1) = ((MR_Box) (hlds__goal_util__LambdaHeadVar__1_64));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__goal_util__LambdaHeadVar__2_65 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__Var_66));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__Var_68));
    }
  }
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_1(
  void * hlds__goal_util__env_ptr_arg)
{
  {
    struct hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

    {
      MR_Word hlds__goal_util__Var_8;
      MR_Integer hlds__goal_util__Var_9;
      MR_Word hlds__goal_util__Var_10;
      MR_Word hlds__goal_util__Var_11;
      MR_Word hlds__goal_util__Var_12;

      (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__SubGoal_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__Var_15, (MR_Integer) 0)));
      hlds__goal_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__Var_15, (MR_Integer) 1)));
      (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__SubGoal_7)) == (MR_mktag((MR_Integer) 2)));
      if ((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__succeeded)
      {
        (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 0)));
        hlds__goal_util__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 1)));
        (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 2)));
        hlds__goal_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 3)));
        hlds__goal_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 4)));
        hlds__goal_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 5)));
        {
          MR_Tuple base;
          base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__LambdaHeadVar__1_14) = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__PredId_16));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__Args_17));
        }
        ((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__cont_env_ptr);
      }
    }
  }
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0(
  MR_Word hlds__goal_util__Goal_3,
  MR_Tuple * hlds__goal_util__LambdaHeadVar__1_14,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr)
{
  {
    struct hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0_s hlds__goal_util__env;

    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__LambdaHeadVar__1_14 = hlds__goal_util__LambdaHeadVar__1_14;
    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__cont = hlds__goal_util__cont;
    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
    hlds__goal_util__goal_contains_goal_2_p_0(hlds__goal_util__Goal_3, &(hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__Var_15, hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_1, &hlds__goal_util__env);
  }
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_2(
  void * hlds__goal_util__env_ptr_arg)
{
  {
    struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

    (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__Constraint_23 = ((MR_Word) (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__conv0_Constraint_23);
    hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_1(hlds__goal_util__env_ptr);
  }
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_3(
  void * hlds__goal_util__env_ptr_arg)
{
  {
    struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

    (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
    (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__TypeCtorInfo_43_43, (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__NonLocalTypeVars_15, (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__TypeVar_34);
    if ((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__succeeded)
    {
      hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_p_0((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__RttiVarMaps_6, (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__Constraint_23, (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__LambdaHeadVar__1_32);
      ((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_1(
  void * hlds__goal_util__env_ptr_arg)
{
  {
    struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

    {
      MR_Word hlds__goal_util___ClassName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__Constraint_23, (MR_Integer) 0)));

      (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__ArgTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__Constraint_23, (MR_Integer) 1)));
      parse_tree__prog_type__type_list_contains_var_2_p_0((hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__ArgTypes_25, &(hlds__goal_util__env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__TypeVar_34, hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_3, hlds__goal_util__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0(
  MR_Word hlds__goal_util__RttiVarMaps_6,
  MR_Word hlds__goal_util__NonLocalTypeVars_15,
  MR_Word * hlds__goal_util__LambdaHeadVar__1_32,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr)
{
  {
    struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0_s hlds__goal_util__env;

    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__RttiVarMaps_6 = hlds__goal_util__RttiVarMaps_6;
    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__NonLocalTypeVars_15 = hlds__goal_util__NonLocalTypeVars_15;
    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__LambdaHeadVar__1_32 = hlds__goal_util__LambdaHeadVar__1_32;
    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__cont = hlds__goal_util__cont;
    (hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
    {
      MR_Word hlds__goal_util__Constraints_22;

      hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0((hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__RttiVarMaps_6, &hlds__goal_util__Constraints_22);
      mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, &(hlds__goal_util__env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__conv0_Constraint_23, hlds__goal_util__Constraints_22, hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_2, &hlds__goal_util__env);
    }
  }
}

static MR_Word MR_CALL 
hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__851__1_2_f_0(
  MR_Word hlds__goal_util__RttiVarMaps_6,
  MR_Word hlds__goal_util__LambdaHeadVar__1_28)
{
  {
    MR_Word hlds__goal_util__LambdaHeadVar__2_29;
    MR_Word hlds__goal_util__Locn_19;

    hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(hlds__goal_util__RttiVarMaps_6, hlds__goal_util__LambdaHeadVar__1_28, &hlds__goal_util__Locn_19);
    hlds__hlds_rtti__type_info_locn_var_2_p_0(hlds__goal_util__Locn_19, &hlds__goal_util__LambdaHeadVar__2_29);
    return hlds__goal_util__LambdaHeadVar__2_29;
  }
}

void MR_CALL 
hlds__goal_util____Compare____maybe_transformed_goal_0_0(
  MR_Word * hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__HeadVar__2_2,
  MR_Word hlds__goal_util__HeadVar__3_3)
{
  {
    MR_bool hlds__goal_util__succeeded;
    MR_Integer hlds__goal_util__CastX_16 = (MR_Integer) hlds__goal_util__HeadVar__2_2;
    MR_Integer hlds__goal_util__CastY_17 = (MR_Integer) hlds__goal_util__HeadVar__3_3;

    hlds__goal_util__succeeded = (hlds__goal_util__CastX_16 == hlds__goal_util__CastY_17);
    if (hlds__goal_util__succeeded)
      *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) hlds__goal_util__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) hlds__goal_util__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__goal_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__goal_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__goal_util__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 0)));

                  hlds__hlds_goal____Compare____hlds_goal_0_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Var_21, hlds__goal_util__ArgY1_5);
                }
                break;
              case (MR_Integer) 2:
                *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String hlds__goal_util__Var_20 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__goal_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *hlds__goal_util__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String hlds__goal_util__ArgY1_12 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_string_3_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Var_20, hlds__goal_util__ArgY1_12);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
hlds__goal_util____Unify____maybe_transformed_goal_0_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__HeadVar__2_2)
{
  {
    MR_bool hlds__goal_util__succeeded;
    MR_Integer hlds__goal_util__CastX_9 = (MR_Integer) hlds__goal_util__HeadVar__1_1;
    MR_Integer hlds__goal_util__CastY_10 = (MR_Integer) hlds__goal_util__HeadVar__2_2;

    hlds__goal_util__succeeded = (hlds__goal_util__CastX_9 == hlds__goal_util__CastY_10);
    if (hlds__goal_util__succeeded)
      hlds__goal_util__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer hlds__goal_util__CastX_7 = (MR_Integer) hlds__goal_util__HeadVar__1_1;
            MR_Integer hlds__goal_util__CastY_8 = (MR_Integer) hlds__goal_util__HeadVar__2_2;

            hlds__goal_util__succeeded = (hlds__goal_util__CastY_8 == hlds__goal_util__CastX_7);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__goal_util__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__goal_util__ArgY1_4;

            hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__goal_util__succeeded)
            {
              hlds__goal_util__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__2_2, (MR_Integer) 0)));
              hlds__goal_util__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(hlds__goal_util__ArgX1_3, hlds__goal_util__ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String hlds__goal_util__ArgX1_5 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_String hlds__goal_util__ArgY1_6;

            hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (hlds__goal_util__succeeded)
            {
              hlds__goal_util__ArgY1_6 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__goal_util__HeadVar__2_2, (MR_Integer) 0)));
              hlds__goal_util__succeeded = (strcmp(hlds__goal_util__ArgX1_5, hlds__goal_util__ArgY1_6) == 0);
            }
          }
          break;
      }
    return hlds__goal_util__succeeded;
  }
}

void MR_CALL 
hlds__goal_util____Compare____is_leaf_0_0(
  MR_Word * hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__HeadVar__2_2,
  MR_Word hlds__goal_util__HeadVar__3_3)
{
  {
    MR_Integer hlds__goal_util__Cast_HeadVar1_4 = (MR_Integer) hlds__goal_util__HeadVar__2_2;
    MR_Integer hlds__goal_util__Cast_HeadVar2_5 = (MR_Integer) hlds__goal_util__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Cast_HeadVar1_4, hlds__goal_util__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__goal_util____Unify____is_leaf_0_0(
  MR_Word hlds__goal_util__HeadVar__2_1,
  MR_Word hlds__goal_util__HeadVar__2_2)
{
  {
    MR_bool hlds__goal_util__succeeded = (hlds__goal_util__HeadVar__2_1 == hlds__goal_util__HeadVar__2_2);

    return hlds__goal_util__succeeded;
  }
}

void MR_CALL 
hlds__goal_util____Compare____goal_is_atomic_0_0(
  MR_Word * hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__HeadVar__2_2,
  MR_Word hlds__goal_util__HeadVar__3_3)
{
  {
    MR_Integer hlds__goal_util__Cast_HeadVar1_4 = (MR_Integer) hlds__goal_util__HeadVar__2_2;
    MR_Integer hlds__goal_util__Cast_HeadVar2_5 = (MR_Integer) hlds__goal_util__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Cast_HeadVar1_4, hlds__goal_util__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__goal_util____Unify____goal_is_atomic_0_0(
  MR_Word hlds__goal_util__HeadVar__2_1,
  MR_Word hlds__goal_util__HeadVar__2_2)
{
  {
    MR_bool hlds__goal_util__succeeded = (hlds__goal_util__HeadVar__2_1 == hlds__goal_util__HeadVar__2_2);

    return hlds__goal_util__succeeded;
  }
}

void MR_CALL 
hlds__goal_util____Compare____attach_in_from_ground_term_0_0(
  MR_Word * hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__HeadVar__2_2,
  MR_Word hlds__goal_util__HeadVar__3_3)
{
  {
    MR_Integer hlds__goal_util__Cast_HeadVar1_4 = (MR_Integer) hlds__goal_util__HeadVar__2_2;
    MR_Integer hlds__goal_util__Cast_HeadVar2_5 = (MR_Integer) hlds__goal_util__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Cast_HeadVar1_4, hlds__goal_util__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__goal_util____Unify____attach_in_from_ground_term_0_0(
  MR_Word hlds__goal_util__HeadVar__2_1,
  MR_Word hlds__goal_util__HeadVar__2_2)
{
  {
    MR_bool hlds__goal_util__succeeded = (hlds__goal_util__HeadVar__2_1 == hlds__goal_util__HeadVar__2_2);

    return hlds__goal_util__succeeded;
  }
}

static MR_Word MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_case_1_f_0(
  MR_Word hlds__goal_util__Case0_3)
{
  {
    MR_Word hlds__goal_util__Case_4;
    MR_Word hlds__goal_util__MainConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_3, (MR_Integer) 0)));
    MR_Word hlds__goal_util__OtherConsIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_3, (MR_Integer) 1)));
    MR_Word hlds__goal_util__Goal0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_3, (MR_Integer) 2)));
    MR_Word hlds__goal_util__Goal_8;

    hlds__goal_util__Goal_8 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__Goal0_7);
    {
      hlds__goal_util__Case_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__goal_util__Case_4, 0) = ((MR_Box) (hlds__goal_util__MainConsId_5));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Case_4, 1) = ((MR_Box) (hlds__goal_util__OtherConsIds_6));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Case_4, 2) = ((MR_Box) (hlds__goal_util__Goal_8));
    }
    return hlds__goal_util__Case_4;
  }
}

static void MR_CALL 
hlds__goal_util__flatten_disj_acc_3_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3)
{
  {
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv0_STATE_VARIABLE_FlatDisjuncts_9;

    hlds__goal_util__flatten_disj_acc_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_STATE_VARIABLE_FlatDisjuncts_9);
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_STATE_VARIABLE_FlatDisjuncts_9));
  }
}

static void MR_CALL 
hlds__goal_util__flatten_disj_acc_3_p_0(
  MR_Word hlds__goal_util__Disjunct_4,
  MR_Word hlds__goal_util__STATE_VARIABLE_FlatDisjuncts_0_8,
  MR_Word * hlds__goal_util__STATE_VARIABLE_FlatDisjuncts_9)
{
  {
    MR_bool hlds__goal_util__succeeded;
    MR_Word hlds__goal_util__SubDisjs_6;
    MR_Word hlds__goal_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Disjunct_4, (MR_Integer) 0)));
    MR_Word hlds__goal_util___GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Disjunct_4, (MR_Integer) 1)));

    hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Var_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Var_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (hlds__goal_util__succeeded)
    {
      hlds__goal_util__SubDisjs_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Var_10, (MR_Integer) 1)));
      {
        MR_Box hlds__goal_util__conv1_STATE_VARIABLE_FlatDisjuncts_9;

        mercury__list__foldr_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__goal_util_scalar_common_1[5], (MR_Word) &hlds__goal_util_scalar_common_3[23], hlds__goal_util__SubDisjs_6, ((MR_Box) (hlds__goal_util__STATE_VARIABLE_FlatDisjuncts_0_8)), &hlds__goal_util__conv1_STATE_VARIABLE_FlatDisjuncts_9);
        *hlds__goal_util__STATE_VARIABLE_FlatDisjuncts_9 = ((MR_Word) hlds__goal_util__conv1_STATE_VARIABLE_FlatDisjuncts_9);
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *hlds__goal_util__STATE_VARIABLE_FlatDisjuncts_9 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Disjunct_4));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_util__STATE_VARIABLE_FlatDisjuncts_0_8));
      }
  }
}

static void MR_CALL 
hlds__goal_util__case_proc_refs_acc_3_p_0(
  MR_Word hlds__goal_util__Case_4,
  MR_Word hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_9,
  MR_Word * hlds__goal_util__STATE_VARIABLE_ReferredToProcs_10)
{
  {
    MR_Word hlds__goal_util__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_4, (MR_Integer) 2)));
    MR_Word hlds__goal_util___MainConsId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_4, (MR_Integer) 0)));
    MR_Word hlds__goal_util___OtherConsIds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_4, (MR_Integer) 1)));

    hlds__goal_util__goal_proc_refs_acc_3_p_0(hlds__goal_util__Goal_8, hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_9, hlds__goal_util__STATE_VARIABLE_ReferredToProcs_10);
  }
}

static void MR_CALL 
hlds__goal_util__clause_size_increment_3_p_0(
  MR_Word hlds__goal_util__Clause_4,
  MR_Integer hlds__goal_util__Size0_5,
  MR_Integer * hlds__goal_util__Size_6)
{
  {
    MR_bool hlds__goal_util__succeeded;
    MR_Integer hlds__goal_util__ClauseSize_7;
    MR_Word hlds__goal_util__Var_8;
    MR_Word hlds__goal_util__GoalExpr_10;
    MR_Word hlds__goal_util__Var_11;

    hlds__goal_util__Var_8 = hlds__hlds_clauses__clause_body_1_f_0(hlds__goal_util__Clause_4);
    hlds__goal_util__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Var_8, (MR_Integer) 0)));
    hlds__goal_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Var_8, (MR_Integer) 1)));
    switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__goal_util__SubGoal_50 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_10), (MR_Integer) 0);
          MR_Integer hlds__goal_util__Size1_81;

          hlds__goal_util__goal_size_2_p_0(hlds__goal_util__SubGoal_50, &hlds__goal_util__Size1_81);
          hlds__goal_util__ClauseSize_7 = (hlds__goal_util__Size1_81 + (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        hlds__goal_util__ClauseSize_7 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            hlds__goal_util__ClauseSize_7 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__goal_util__ConjType_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));
              MR_Word hlds__goal_util__Goals_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));
              MR_Integer hlds__goal_util__InnerSize_39;

              hlds__goal_util__goals_size_2_p_0(hlds__goal_util__Goals_38, &hlds__goal_util__InnerSize_39);
              switch (hlds__goal_util__ConjType_37) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    hlds__goal_util__ClauseSize_7 = (hlds__goal_util__InnerSize_39 + (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 0:
                  hlds__goal_util__ClauseSize_7 = hlds__goal_util__InnerSize_39;
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer hlds__goal_util__Size1_40;
              MR_Word hlds__goal_util__Goals_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));

              hlds__goal_util__goals_size_2_p_0(hlds__goal_util__Goals_78, &hlds__goal_util__Size1_40);
              hlds__goal_util__ClauseSize_7 = (hlds__goal_util__Size1_40 + (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__goal_util__Cases_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 3)));
              MR_Integer hlds__goal_util__Size1_79;
              MR_Word hlds__goal_util__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));
              MR_Word hlds__goal_util__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));

              hlds__goal_util__cases_size_2_p_0(hlds__goal_util__Cases_43, &hlds__goal_util__Size1_79);
              hlds__goal_util__ClauseSize_7 = (hlds__goal_util__Size1_79 + (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__goal_util__Reason_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));
              MR_Word hlds__goal_util__SubGoal_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));
              MR_Word hlds__goal_util__Var_69;
              MR_Word hlds__goal_util__Var_52;

              hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_51, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (hlds__goal_util__succeeded)
              {
                hlds__goal_util__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_51, (MR_Integer) 1)));
                hlds__goal_util__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_51, (MR_Integer) 2)));
                hlds__goal_util__succeeded = (hlds__goal_util__Var_69 == (MR_Integer) 1);
              }
              if (hlds__goal_util__succeeded)
                hlds__goal_util__ClauseSize_7 = (MR_Integer) 1;
              else
              {
                MR_Integer hlds__goal_util__Size1_82;

                hlds__goal_util__goal_size_2_p_0(hlds__goal_util__SubGoal_85, &hlds__goal_util__Size1_82);
                hlds__goal_util__ClauseSize_7 = (hlds__goal_util__Size1_82 + (MR_Integer) 1);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word hlds__goal_util__Cond_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));
              MR_Word hlds__goal_util__Then_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 3)));
              MR_Word hlds__goal_util__Else_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 4)));
              MR_Integer hlds__goal_util__Size2_48;
              MR_Integer hlds__goal_util__Size3_49;
              MR_Integer hlds__goal_util__Var_72;
              MR_Integer hlds__goal_util__Var_73;
              MR_Integer hlds__goal_util__Size1_80;
              MR_Word hlds__goal_util__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));

              hlds__goal_util__goal_size_2_p_0(hlds__goal_util__Cond_45, &hlds__goal_util__Size1_80);
              hlds__goal_util__goal_size_2_p_0(hlds__goal_util__Then_46, &hlds__goal_util__Size2_48);
              hlds__goal_util__goal_size_2_p_0(hlds__goal_util__Else_47, &hlds__goal_util__Size3_49);
              hlds__goal_util__Var_73 = (hlds__goal_util__Size1_80 + hlds__goal_util__Size2_48);
              hlds__goal_util__Var_72 = (hlds__goal_util__Var_73 + hlds__goal_util__Size3_49);
              hlds__goal_util__ClauseSize_7 = (hlds__goal_util__Var_72 + (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word hlds__goal_util__ShortHand_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) hlds__goal_util__ShortHand_53)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word hlds__goal_util__GoalA_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_53, (MR_Integer) 0)));
                    MR_Word hlds__goal_util__GoalB_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_53, (MR_Integer) 1)));
                    MR_Integer hlds__goal_util__Var_65;
                    MR_Integer hlds__goal_util__Size1_89;
                    MR_Integer hlds__goal_util__Size2_90;

                    hlds__goal_util__goal_size_2_p_0(hlds__goal_util__GoalA_63, &hlds__goal_util__Size1_89);
                    hlds__goal_util__goal_size_2_p_0(hlds__goal_util__GoalB_64, &hlds__goal_util__Size2_90);
                    hlds__goal_util__Var_65 = (hlds__goal_util__Size1_89 + hlds__goal_util__Size2_90);
                    hlds__goal_util__ClauseSize_7 = (hlds__goal_util__Var_65 + (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__goal_util__MainGoal_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_53, (MR_Integer) 4)));
                    MR_Word hlds__goal_util__OrElseGoals_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_53, (MR_Integer) 5)));
                    MR_Integer hlds__goal_util__Var_67;
                    MR_Integer hlds__goal_util__Size1_86;
                    MR_Integer hlds__goal_util__Size2_87;
                    MR_Word hlds__goal_util__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_53, (MR_Integer) 0)));
                    MR_Word hlds__goal_util__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_53, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_53, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_53, (MR_Integer) 3)));
                    MR_Word hlds__goal_util__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_53, (MR_Integer) 6)));

                    hlds__goal_util__goal_size_2_p_0(hlds__goal_util__MainGoal_58, &hlds__goal_util__Size1_86);
                    hlds__goal_util__goals_size_2_p_0(hlds__goal_util__OrElseGoals_59, &hlds__goal_util__Size2_87);
                    hlds__goal_util__Var_67 = (hlds__goal_util__Size1_86 + hlds__goal_util__Size2_87);
                    hlds__goal_util__ClauseSize_7 = (hlds__goal_util__Var_67 + (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__goal_util__SubGoal_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_53, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_53, (MR_Integer) 0)));
                    MR_Word hlds__goal_util__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_53, (MR_Integer) 1)));

                    hlds__goal_util__goal_size_2_p_0(hlds__goal_util__SubGoal_88, &hlds__goal_util__ClauseSize_7);
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    *hlds__goal_util__Size_6 = (hlds__goal_util__Size0_5 + hlds__goal_util__ClauseSize_7);
  }
}

static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_3(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box * hlds__goal_util__wrapper_arg_2)
{
  {
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv2_LambdaHeadVar__2_62;

    hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2537__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) hlds__goal_util__wrapper_arg_1), &hlds__goal_util__conv2_LambdaHeadVar__2_62);
    *hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv2_LambdaHeadVar__2_62));
  }
}

static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_2(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box * hlds__goal_util__wrapper_arg_2)
{
  {
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv1_Goal_6;

    hlds__goal_util__transform_all_goals_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) hlds__goal_util__wrapper_arg_1), &hlds__goal_util__conv1_Goal_6);
    *hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv1_Goal_6));
  }
}

static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box * hlds__goal_util__wrapper_arg_2)
{
  {
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv0_Goal_6;

    hlds__goal_util__transform_all_goals_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) hlds__goal_util__wrapper_arg_1), &hlds__goal_util__conv0_Goal_6);
    *hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv0_Goal_6));
  }
}

void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0(
  MR_Word hlds__goal_util__TransformP_4,
  MR_Word hlds__goal_util__Goal0_5,
  MR_Word * hlds__goal_util__Goal_6)
{
  {
    MR_Word hlds__goal_util__GoalExpr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_5, (MR_Integer) 0)));
    MR_Word hlds__goal_util__GoalExpr_31;
    MR_Word hlds__goal_util__Goal1_56;
    MR_Word hlds__goal_util__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_5, (MR_Integer) 1)));
    void MR_CALL (* hlds__goal_util__func_3)(MR_Box, MR_Box, MR_Box *);
    MR_Box hlds__goal_util__conv4_Goal_6;

    switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__goal_util__SubGoal0_45 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr0_7), (MR_Integer) 0);
          MR_Word hlds__goal_util__SubGoal_46;

          hlds__goal_util__transform_all_goals_3_p_0(hlds__goal_util__TransformP_4, hlds__goal_util__SubGoal0_45, &hlds__goal_util__SubGoal_46);
          hlds__goal_util__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_util__SubGoal_46);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        hlds__goal_util__GoalExpr_31 = hlds__goal_util__GoalExpr0_7;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            hlds__goal_util__GoalExpr_31 = hlds__goal_util__GoalExpr0_7;
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__goal_util__TypeCtorInfo_79_79;
              MR_Word hlds__goal_util__ConjType_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word hlds__goal_util__Conjs0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
              MR_Word hlds__goal_util__Conjs_34;
              MR_Word hlds__goal_util__Var_64;

              {
                hlds__goal_util__Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__goal_util__Var_64, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[8]));
                MR_hl_field(MR_mktag(0), hlds__goal_util__Var_64, 1) = ((MR_Box) (hlds__goal_util__transform_all_goals_3_p_0_1));
                MR_hl_field(MR_mktag(0), hlds__goal_util__Var_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), hlds__goal_util__Var_64, 3) = ((MR_Box) (hlds__goal_util__TransformP_4));
              }
              hlds__goal_util__TypeCtorInfo_79_79 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              mercury__list__map_3_p_0(hlds__goal_util__TypeCtorInfo_79_79, hlds__goal_util__TypeCtorInfo_79_79, hlds__goal_util__Var_64, hlds__goal_util__Conjs0_33, &hlds__goal_util__Conjs_34);
              {
                hlds__goal_util__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 1) = ((MR_Box) (hlds__goal_util__ConjType_32));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 2) = ((MR_Box) (hlds__goal_util__Conjs_34));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__goal_util__TypeCtorInfo_82_82;
              MR_Word hlds__goal_util__Disjs0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word hlds__goal_util__Disjs_36;
              MR_Word hlds__goal_util__Var_63;

              {
                hlds__goal_util__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__goal_util__Var_63, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[8]));
                MR_hl_field(MR_mktag(0), hlds__goal_util__Var_63, 1) = ((MR_Box) (hlds__goal_util__transform_all_goals_3_p_0_2));
                MR_hl_field(MR_mktag(0), hlds__goal_util__Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), hlds__goal_util__Var_63, 3) = ((MR_Box) (hlds__goal_util__TransformP_4));
              }
              hlds__goal_util__TypeCtorInfo_82_82 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              mercury__list__map_3_p_0(hlds__goal_util__TypeCtorInfo_82_82, hlds__goal_util__TypeCtorInfo_82_82, hlds__goal_util__Var_63, hlds__goal_util__Disjs0_35, &hlds__goal_util__Disjs_36);
              {
                hlds__goal_util__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 1) = ((MR_Box) (hlds__goal_util__Disjs_36));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__goal_util__TypeCtorInfo_83_83;
              MR_Word hlds__goal_util__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word hlds__goal_util__CanFail_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
              MR_Word hlds__goal_util__Cases0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 3)));
              MR_Word hlds__goal_util__Cases_44;
              MR_Word hlds__goal_util__Var_60;

              {
                hlds__goal_util__Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__goal_util__Var_60, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[9]));
                MR_hl_field(MR_mktag(0), hlds__goal_util__Var_60, 1) = ((MR_Box) (hlds__goal_util__transform_all_goals_3_p_0_3));
                MR_hl_field(MR_mktag(0), hlds__goal_util__Var_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), hlds__goal_util__Var_60, 3) = ((MR_Box) (hlds__goal_util__TransformP_4));
              }
              hlds__goal_util__TypeCtorInfo_83_83 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
              mercury__list__map_3_p_0(hlds__goal_util__TypeCtorInfo_83_83, hlds__goal_util__TypeCtorInfo_83_83, hlds__goal_util__Var_60, hlds__goal_util__Cases0_39, &hlds__goal_util__Cases_44);
              {
                hlds__goal_util__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 1) = ((MR_Box) (hlds__goal_util__Var_37));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 2) = ((MR_Box) (hlds__goal_util__CanFail_38));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 3) = ((MR_Box) (hlds__goal_util__Cases_44));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__goal_util__Reason_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word hlds__goal_util__SubGoal0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
              MR_Word hlds__goal_util__SubGoal_68;

              hlds__goal_util__transform_all_goals_3_p_0(hlds__goal_util__TransformP_4, hlds__goal_util__SubGoal0_67, &hlds__goal_util__SubGoal_68);
              {
                hlds__goal_util__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 1) = ((MR_Box) (hlds__goal_util__Reason_47));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 2) = ((MR_Box) (hlds__goal_util__SubGoal_68));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word hlds__goal_util__ExistVars_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word hlds__goal_util__Cond0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 2)));
              MR_Word hlds__goal_util__Then0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 3)));
              MR_Word hlds__goal_util__Else0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_7, (MR_Integer) 4)));
              MR_Word hlds__goal_util__Cond_52;
              MR_Word hlds__goal_util__Then_53;
              MR_Word hlds__goal_util__Else_54;

              hlds__goal_util__transform_all_goals_3_p_0(hlds__goal_util__TransformP_4, hlds__goal_util__Cond0_49, &hlds__goal_util__Cond_52);
              hlds__goal_util__transform_all_goals_3_p_0(hlds__goal_util__TransformP_4, hlds__goal_util__Then0_50, &hlds__goal_util__Then_53);
              hlds__goal_util__transform_all_goals_3_p_0(hlds__goal_util__TransformP_4, hlds__goal_util__Else0_51, &hlds__goal_util__Else_54);
              {
                hlds__goal_util__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 1) = ((MR_Box) (hlds__goal_util__ExistVars_48));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 2) = ((MR_Box) (hlds__goal_util__Cond_52));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 3) = ((MR_Box) (hlds__goal_util__Then_53));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_31, 4) = ((MR_Box) (hlds__goal_util__Else_54));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "predicate \140hlds.goal_util.transform_all_goals\'/3", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
    {
      hlds__goal_util__Goal1_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__goal_util__Goal1_56, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_31));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Goal1_56, 1) = ((MR_Box) (hlds__goal_util__Var_69));
    }
    hlds__goal_util__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__goal_util__TransformP_4, (MR_Integer) 1)));
    hlds__goal_util__func_3(((MR_Box) hlds__goal_util__TransformP_4), ((MR_Box) (hlds__goal_util__Goal1_56)), &hlds__goal_util__conv4_Goal_6);
    *hlds__goal_util__Goal_6 = ((MR_Word) hlds__goal_util__conv4_Goal_6);
  }
}

static void MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_2(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3)
{
  {
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv4_HeadVar__3_3;

    hlds__instmap__apply_instmap_delta_sv_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv4_HeadVar__3_3);
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv4_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1)
{
  {
    MR_Box hlds__goal_util__wrapper_arg_2;
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv3_LambdaHeadVar__2_108;

    hlds__goal_util__conv3_LambdaHeadVar__2_108 = hlds__goal_util__IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap__2356__1_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv3_LambdaHeadVar__2_108));
    return hlds__goal_util__wrapper_arg_2;
  }
}

void MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(
  MR_Word hlds__goal_util__TransformP_6,
  MR_Word hlds__goal_util__TargetGoalPath_7,
  MR_Word hlds__goal_util__Instmap0_8,
  MR_Word hlds__goal_util__Goal0_9,
  MR_Word * hlds__goal_util__MaybeGoal_10)
{
  {
    MR_bool hlds__goal_util__succeeded;

    if ((hlds__goal_util__TargetGoalPath_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word hlds__goal_util__MaybeGoal0_11;
      void MR_CALL (* hlds__goal_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__goal_util__TransformP_6, (MR_Integer) 1)));
      MR_Box hlds__goal_util__conv1_MaybeGoal0_11;

      hlds__goal_util__func_0(((MR_Box) hlds__goal_util__TransformP_6), ((MR_Box) (hlds__goal_util__Instmap0_8)), ((MR_Box) (hlds__goal_util__Goal0_9)), &hlds__goal_util__conv1_MaybeGoal0_11);
      hlds__goal_util__MaybeGoal0_11 = ((MR_Word) hlds__goal_util__conv1_MaybeGoal0_11);
      hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_p_0(hlds__goal_util__MaybeGoal0_11, hlds__goal_util__MaybeGoal_10);
    }
    else
    {
      MR_Word hlds__goal_util__FirstStep_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__TargetGoalPath_7, (MR_Integer) 0)));
      MR_Word hlds__goal_util__LaterPath_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__TargetGoalPath_7, (MR_Integer) 1)));
      MR_Word hlds__goal_util__GoalExpr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr0_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word hlds__goal_util__SubGoal0_70 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr0_14), (MR_Integer) 0);

            hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            if (hlds__goal_util__succeeded)
            {
              MR_Word hlds__goal_util__MaybeSubGoal_71;

              hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap0_8, hlds__goal_util__SubGoal0_70, &hlds__goal_util__MaybeSubGoal_71);
              switch (MR_tag((MR_Word) hlds__goal_util__MaybeSubGoal_71)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeSubGoal_71;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__goal_util__SubGoal_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeSubGoal_71, (MR_Integer) 0)));
                    MR_Word hlds__goal_util__Var_100;
                    MR_Word hlds__goal_util__GoalExpr_118 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_util__SubGoal_72);
                    MR_Word hlds__goal_util__Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));

                    {
                      hlds__goal_util__Var_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_100, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_118));
                      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_100, 1) = ((MR_Box) (hlds__goal_util__Var_168));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__goal_util__MaybeGoal_10 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Var_100));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeSubGoal_71;
                  break;
              }
            }
            else
              *hlds__goal_util__MaybeGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *hlds__goal_util__MaybeGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              *hlds__goal_util__MaybeGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__goal_util__ConjType_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Conjs0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 2)));
                MR_Integer hlds__goal_util__ConjNum_40;
                MR_Word hlds__goal_util__Conj0_41;
                MR_Word hlds__goal_util__TypeCtorInfo_178_178;
                MR_Box hlds__goal_util__conv2_Conj0_41;

                hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__FirstStep_12)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__goal_util__succeeded)
                {
                  hlds__goal_util__ConjNum_40 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__goal_util__FirstStep_12, (MR_Integer) 0)));
                  hlds__goal_util__TypeCtorInfo_178_178 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                  hlds__goal_util__succeeded = mercury__list__index1_3_p_0(hlds__goal_util__TypeCtorInfo_178_178, hlds__goal_util__Conjs0_39, hlds__goal_util__ConjNum_40, &hlds__goal_util__conv2_Conj0_41);
                  if (hlds__goal_util__succeeded)
                  {
                    hlds__goal_util__Conj0_41 = ((MR_Word) hlds__goal_util__conv2_Conj0_41);
                    hlds__goal_util__succeeded = MR_TRUE;
                  }
                }
                if (hlds__goal_util__succeeded)
                {
                  MR_Word hlds__goal_util__TypeCtorInfo_179_179 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                  MR_Word hlds__goal_util__TypeCtorInfo_180_180;
                  MR_Word hlds__goal_util__HeadConjs_42;
                  MR_Word hlds__goal_util__HeadInstdeltas_43;
                  MR_Word hlds__goal_util__Instmap_45;
                  MR_Word hlds__goal_util__MaybeConj_46;
                  MR_Integer hlds__goal_util__Var_104 = (hlds__goal_util__ConjNum_40 - (MR_Integer) 1);
                  MR_Box hlds__goal_util__conv5_Instmap_45;

                  mercury__list__take_upto_3_p_0(hlds__goal_util__TypeCtorInfo_179_179, hlds__goal_util__Var_104, hlds__goal_util__Conjs0_39, &hlds__goal_util__HeadConjs_42);
                  hlds__goal_util__TypeCtorInfo_180_180 = (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0;
                  hlds__goal_util__HeadInstdeltas_43 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_179_179, hlds__goal_util__TypeCtorInfo_180_180, (MR_Word) &hlds__goal_util_scalar_common_3[21], hlds__goal_util__HeadConjs_42);
                  mercury__list__foldl_4_p_0(hlds__goal_util__TypeCtorInfo_180_180, hlds__goal_util__TypeCtorInfo_180_180, (MR_Word) &hlds__goal_util_scalar_common_3[22], hlds__goal_util__HeadInstdeltas_43, ((MR_Box) (hlds__goal_util__Instmap0_8)), &hlds__goal_util__conv5_Instmap_45);
                  hlds__goal_util__Instmap_45 = ((MR_Word) hlds__goal_util__conv5_Instmap_45);
                  hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap_45, hlds__goal_util__Conj0_41, &hlds__goal_util__MaybeConj_46);
                  switch (MR_tag((MR_Word) hlds__goal_util__MaybeConj_46)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeConj_46;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__goal_util__Conj_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeConj_46, (MR_Integer) 0)));
                        MR_Word hlds__goal_util__Conjs_48;
                        MR_Word hlds__goal_util__GoalExpr_49;
                        MR_Word hlds__goal_util__Var_111;
                        MR_Word hlds__goal_util__Var_157;
                        MR_Word hlds__goal_util__Var_156;

                        mercury__list__det_replace_nth_4_p_0(hlds__goal_util__TypeCtorInfo_179_179, hlds__goal_util__Conjs0_39, hlds__goal_util__ConjNum_40, ((MR_Box) (hlds__goal_util__Conj_47)), &hlds__goal_util__Conjs_48);
                        {
                          hlds__goal_util__GoalExpr_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_49, 1) = ((MR_Box) (hlds__goal_util__ConjType_38));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_49, 2) = ((MR_Box) (hlds__goal_util__Conjs_48));
                        }
                        hlds__goal_util__Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
                        hlds__goal_util__Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
                        {
                          hlds__goal_util__Var_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Var_111, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_49));
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Var_111, 1) = ((MR_Box) (hlds__goal_util__Var_157));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__goal_util__MaybeGoal_10 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Var_111));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeConj_46;
                      break;
                  }
                }
                else
                  *hlds__goal_util__MaybeGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word hlds__goal_util__Disjs0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 1)));
                MR_Integer hlds__goal_util__DisjNum_52;
                MR_Word hlds__goal_util__Disj0_53;
                MR_Word hlds__goal_util__TypeCtorInfo_184_184;
                MR_Box hlds__goal_util__conv6_Disj0_53;

                hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__FirstStep_12)) == (MR_mktag((MR_Integer) 2)));
                if (hlds__goal_util__succeeded)
                {
                  hlds__goal_util__DisjNum_52 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__FirstStep_12, (MR_Integer) 0)));
                  hlds__goal_util__TypeCtorInfo_184_184 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                  hlds__goal_util__succeeded = mercury__list__index1_3_p_0(hlds__goal_util__TypeCtorInfo_184_184, hlds__goal_util__Disjs0_51, hlds__goal_util__DisjNum_52, &hlds__goal_util__conv6_Disj0_53);
                  if (hlds__goal_util__succeeded)
                  {
                    hlds__goal_util__Disj0_53 = ((MR_Word) hlds__goal_util__conv6_Disj0_53);
                    hlds__goal_util__succeeded = MR_TRUE;
                  }
                }
                if (hlds__goal_util__succeeded)
                {
                  MR_Word hlds__goal_util__MaybeDisj_54;

                  hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap0_8, hlds__goal_util__Disj0_53, &hlds__goal_util__MaybeDisj_54);
                  switch (MR_tag((MR_Word) hlds__goal_util__MaybeDisj_54)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeDisj_54;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__goal_util__Disj_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeDisj_54, (MR_Integer) 0)));
                        MR_Word hlds__goal_util__Disjs_56;
                        MR_Word hlds__goal_util__Var_102;
                        MR_Word hlds__goal_util__Var_103;
                        MR_Word hlds__goal_util__Var_159;
                        MR_Word hlds__goal_util__Var_158;

                        mercury__list__det_replace_nth_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__goal_util__Disjs0_51, hlds__goal_util__DisjNum_52, ((MR_Box) (hlds__goal_util__Disj_55)), &hlds__goal_util__Disjs_56);
                        {
                          hlds__goal_util__Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__Var_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__Var_103, 1) = ((MR_Box) (hlds__goal_util__Disjs_56));
                        }
                        hlds__goal_util__Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
                        hlds__goal_util__Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
                        {
                          hlds__goal_util__Var_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Var_102, 0) = ((MR_Box) (hlds__goal_util__Var_103));
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Var_102, 1) = ((MR_Box) (hlds__goal_util__Var_159));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__goal_util__MaybeGoal_10 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Var_102));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeDisj_54;
                      break;
                  }
                }
                else
                  *hlds__goal_util__MaybeGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word hlds__goal_util__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 1)));
                MR_Word hlds__goal_util__CanFail_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Cases0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 3)));
                MR_Integer hlds__goal_util__CaseNum_61;
                MR_Word hlds__goal_util__Case0_63;
                MR_Word hlds__goal_util__TypeCtorInfo_186_186;
                MR_Word hlds__goal_util___MaybeNumConstructors_62;
                MR_Box hlds__goal_util__conv7_Case0_63;

                hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__FirstStep_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (hlds__goal_util__succeeded)
                {
                  hlds__goal_util__CaseNum_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_12, (MR_Integer) 1)));
                  hlds__goal_util___MaybeNumConstructors_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_12, (MR_Integer) 2)));
                  hlds__goal_util__TypeCtorInfo_186_186 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
                  hlds__goal_util__succeeded = mercury__list__index1_3_p_0(hlds__goal_util__TypeCtorInfo_186_186, hlds__goal_util__Cases0_60, hlds__goal_util__CaseNum_61, &hlds__goal_util__conv7_Case0_63);
                  if (hlds__goal_util__succeeded)
                  {
                    hlds__goal_util__Case0_63 = ((MR_Word) hlds__goal_util__conv7_Case0_63);
                    hlds__goal_util__succeeded = MR_TRUE;
                  }
                }
                if (hlds__goal_util__succeeded)
                {
                  MR_Word hlds__goal_util__CaseGoal0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_63, (MR_Integer) 2)));
                  MR_Word hlds__goal_util__MaybeCaseGoal_65;
                  MR_Word hlds__goal_util__Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_63, (MR_Integer) 0)));
                  MR_Word hlds__goal_util__Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_63, (MR_Integer) 1)));

                  hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap0_8, hlds__goal_util__CaseGoal0_64, &hlds__goal_util__MaybeCaseGoal_65);
                  switch (MR_tag((MR_Word) hlds__goal_util__MaybeCaseGoal_65)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeCaseGoal_65;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__goal_util__CaseGoal_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeCaseGoal_65, (MR_Integer) 0)));
                        MR_Word hlds__goal_util__Case_67;
                        MR_Word hlds__goal_util__Cases_68;
                        MR_Word hlds__goal_util__Var_101;
                        MR_Word hlds__goal_util__GoalExpr_113;
                        MR_Word hlds__goal_util__Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_63, (MR_Integer) 0)));
                        MR_Word hlds__goal_util__Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_63, (MR_Integer) 1)));
                        MR_Word hlds__goal_util__Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_63, (MR_Integer) 2)));
                        MR_Word hlds__goal_util__Var_166;
                        MR_Word hlds__goal_util__Var_165;

                        {
                          hlds__goal_util__Case_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Case_67, 0) = ((MR_Box) (hlds__goal_util__Var_162));
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Case_67, 1) = ((MR_Box) (hlds__goal_util__Var_163));
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Case_67, 2) = ((MR_Box) (hlds__goal_util__CaseGoal_66));
                        }
                        mercury__list__det_replace_nth_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, hlds__goal_util__Cases0_60, hlds__goal_util__CaseNum_61, ((MR_Box) (hlds__goal_util__Case_67)), &hlds__goal_util__Cases_68);
                        {
                          hlds__goal_util__GoalExpr_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_113, 1) = ((MR_Box) (hlds__goal_util__Var_58));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_113, 2) = ((MR_Box) (hlds__goal_util__CanFail_59));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_113, 3) = ((MR_Box) (hlds__goal_util__Cases_68));
                        }
                        hlds__goal_util__Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
                        hlds__goal_util__Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
                        {
                          hlds__goal_util__Var_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Var_101, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_113));
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Var_101, 1) = ((MR_Box) (hlds__goal_util__Var_166));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__goal_util__MaybeGoal_10 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Var_101));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeCaseGoal_65;
                      break;
                  }
                }
                else
                  *hlds__goal_util__MaybeGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word hlds__goal_util__Reason_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 1)));
                MR_Word hlds__goal_util__SubGoal0_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 2)));
                MR_Word hlds__goal_util___MaybeCut_75;

                hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__FirstStep_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (hlds__goal_util__succeeded)
                {
                  hlds__goal_util___MaybeCut_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_12, (MR_Integer) 1)));
                  {
                    MR_Word hlds__goal_util__MaybeSubGoal_128;

                    hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap0_8, hlds__goal_util__SubGoal0_134, &hlds__goal_util__MaybeSubGoal_128);
                    switch (MR_tag((MR_Word) hlds__goal_util__MaybeSubGoal_128)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeSubGoal_128;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word hlds__goal_util__Var_99;
                          MR_Word hlds__goal_util__GoalExpr_123;
                          MR_Word hlds__goal_util__SubGoal_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeSubGoal_128, (MR_Integer) 0)));
                          MR_Word hlds__goal_util__Var_170;
                          MR_Word hlds__goal_util__Var_169;

                          {
                            hlds__goal_util__GoalExpr_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_123, 1) = ((MR_Box) (hlds__goal_util__Reason_74));
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_123, 2) = ((MR_Box) (hlds__goal_util__SubGoal_124));
                          }
                          hlds__goal_util__Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
                          hlds__goal_util__Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
                          {
                            hlds__goal_util__Var_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), hlds__goal_util__Var_99, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_123));
                            MR_hl_field(MR_mktag(0), hlds__goal_util__Var_99, 1) = ((MR_Box) (hlds__goal_util__Var_170));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *hlds__goal_util__MaybeGoal_10 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Var_99));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeSubGoal_128;
                        break;
                    }
                  }
                }
                else
                  *hlds__goal_util__MaybeGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word hlds__goal_util__ExistVars_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Cond0_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Then0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Else0_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_14, (MR_Integer) 4)));

                hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (hlds__goal_util__succeeded)
                {
                  MR_Word hlds__goal_util__MaybeCond_81;

                  hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap0_8, hlds__goal_util__Cond0_78, &hlds__goal_util__MaybeCond_81);
                  switch (MR_tag((MR_Word) hlds__goal_util__MaybeCond_81)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeCond_81;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__goal_util__Cond_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeCond_81, (MR_Integer) 0)));
                        MR_Word hlds__goal_util__Var_94;
                        MR_Word hlds__goal_util__GoalExpr_137;
                        MR_Word hlds__goal_util__Var_172;
                        MR_Word hlds__goal_util__Var_171;

                        {
                          hlds__goal_util__GoalExpr_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_137, 1) = ((MR_Box) (hlds__goal_util__ExistVars_77));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_137, 2) = ((MR_Box) (hlds__goal_util__Cond_82));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_137, 3) = ((MR_Box) (hlds__goal_util__Then0_79));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_137, 4) = ((MR_Box) (hlds__goal_util__Else0_80));
                        }
                        hlds__goal_util__Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
                        hlds__goal_util__Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
                        {
                          hlds__goal_util__Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Var_94, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_137));
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Var_94, 1) = ((MR_Box) (hlds__goal_util__Var_172));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__goal_util__MaybeGoal_10 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Var_94));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeCond_81;
                      break;
                  }
                }
                else
                {
                  hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                  if (hlds__goal_util__succeeded)
                  {
                    MR_Word hlds__goal_util__MaybeThen_84;
                    MR_Word hlds__goal_util__Var_95;
                    MR_Word hlds__goal_util__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond0_78, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__Instmap_142;
                    MR_Word hlds__goal_util__Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Cond0_78, (MR_Integer) 0)));

                    hlds__goal_util__Var_95 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__Var_96);
                    hlds__instmap__apply_instmap_delta_sv_3_p_0(hlds__goal_util__Var_95, hlds__goal_util__Instmap0_8, &hlds__goal_util__Instmap_142);
                    hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap_142, hlds__goal_util__Then0_79, &hlds__goal_util__MaybeThen_84);
                    switch (MR_tag((MR_Word) hlds__goal_util__MaybeThen_84)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeThen_84;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word hlds__goal_util__Then_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeThen_84, (MR_Integer) 0)));
                          MR_Word hlds__goal_util__Var_97;
                          MR_Word hlds__goal_util__GoalExpr_140;
                          MR_Word hlds__goal_util__Var_175;
                          MR_Word hlds__goal_util__Var_174;

                          {
                            hlds__goal_util__GoalExpr_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_140, 1) = ((MR_Box) (hlds__goal_util__ExistVars_77));
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_140, 2) = ((MR_Box) (hlds__goal_util__Cond0_78));
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_140, 3) = ((MR_Box) (hlds__goal_util__Then_85));
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_140, 4) = ((MR_Box) (hlds__goal_util__Else0_80));
                          }
                          hlds__goal_util__Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
                          hlds__goal_util__Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
                          {
                            hlds__goal_util__Var_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), hlds__goal_util__Var_97, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_140));
                            MR_hl_field(MR_mktag(0), hlds__goal_util__Var_97, 1) = ((MR_Box) (hlds__goal_util__Var_175));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *hlds__goal_util__MaybeGoal_10 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Var_97));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeThen_84;
                        break;
                    }
                  }
                  else
                  {
                    hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                    if (hlds__goal_util__succeeded)
                    {
                      MR_Word hlds__goal_util__MaybeElse_87;

                      hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(hlds__goal_util__TransformP_6, hlds__goal_util__LaterPath_13, hlds__goal_util__Instmap0_8, hlds__goal_util__Else0_80, &hlds__goal_util__MaybeElse_87);
                      switch (MR_tag((MR_Word) hlds__goal_util__MaybeElse_87)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeElse_87;
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word hlds__goal_util__Else_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeElse_87, (MR_Integer) 0)));
                            MR_Word hlds__goal_util__Var_98;
                            MR_Word hlds__goal_util__GoalExpr_144;
                            MR_Word hlds__goal_util__Var_177;
                            MR_Word hlds__goal_util__Var_176;

                            {
                              hlds__goal_util__GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_144, 1) = ((MR_Box) (hlds__goal_util__ExistVars_77));
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_144, 2) = ((MR_Box) (hlds__goal_util__Cond0_78));
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_144, 3) = ((MR_Box) (hlds__goal_util__Then0_79));
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_144, 4) = ((MR_Box) (hlds__goal_util__Else_88));
                            }
                            hlds__goal_util__Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 0)));
                            hlds__goal_util__Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_9, (MR_Integer) 1)));
                            {
                              hlds__goal_util__Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), hlds__goal_util__Var_98, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_144));
                              MR_hl_field(MR_mktag(0), hlds__goal_util__Var_98, 1) = ((MR_Box) (hlds__goal_util__Var_177));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              *hlds__goal_util__MaybeGoal_10 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Var_98));
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          *hlds__goal_util__MaybeGoal_10 = hlds__goal_util__MaybeElse_87;
                          break;
                      }
                    }
                    else
                      *hlds__goal_util__MaybeGoal_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                }
              }
              break;
            case (MR_Integer) 7:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "predicate \140hlds.goal_util.maybe_transform_goal_at_goal_path_with_instmap\'/5", (MR_String) "shorthand");
                  return;
                }
              }
              break;
          }
          break;
      }
    }
  }
}

void MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(
  MR_Word hlds__goal_util__TransformP_5,
  MR_Word hlds__goal_util__TargetGoalPath_6,
  MR_Word hlds__goal_util__Goal0_7,
  MR_Word * hlds__goal_util__MaybeGoal_8)
{
  {
    MR_bool hlds__goal_util__succeeded;

    if ((hlds__goal_util__TargetGoalPath_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word hlds__goal_util__MaybeGoal0_9;
      void MR_CALL (* hlds__goal_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__goal_util__TransformP_5, (MR_Integer) 1)));
      MR_Box hlds__goal_util__conv1_MaybeGoal0_9;

      hlds__goal_util__func_0(((MR_Box) hlds__goal_util__TransformP_5), ((MR_Box) (hlds__goal_util__Goal0_7)), &hlds__goal_util__conv1_MaybeGoal0_9);
      hlds__goal_util__MaybeGoal0_9 = ((MR_Word) hlds__goal_util__conv1_MaybeGoal0_9);
      hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_p_0(hlds__goal_util__MaybeGoal0_9, hlds__goal_util__MaybeGoal_8);
    }
    else
    {
      MR_Word hlds__goal_util__FirstStep_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__TargetGoalPath_6, (MR_Integer) 0)));
      MR_Word hlds__goal_util__LaterPath_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__TargetGoalPath_6, (MR_Integer) 1)));
      MR_Word hlds__goal_util__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr0_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word hlds__goal_util__SubGoal0_64 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr0_12), (MR_Integer) 0);

            hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            if (hlds__goal_util__succeeded)
            {
              MR_Word hlds__goal_util__MaybeSubGoal_65;

              hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__SubGoal0_64, &hlds__goal_util__MaybeSubGoal_65);
              switch (MR_tag((MR_Word) hlds__goal_util__MaybeSubGoal_65)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeSubGoal_65;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__goal_util__SubGoal_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeSubGoal_65, (MR_Integer) 0)));
                    MR_Word hlds__goal_util__Var_92;
                    MR_Word hlds__goal_util__Var_93 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_util__SubGoal_66);
                    MR_Word hlds__goal_util__Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));

                    {
                      hlds__goal_util__Var_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_92, 0) = ((MR_Box) (hlds__goal_util__Var_93));
                      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_92, 1) = ((MR_Box) (hlds__goal_util__Var_147));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__goal_util__MaybeGoal_8 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Var_92));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeSubGoal_65;
                  break;
              }
            }
            else
              *hlds__goal_util__MaybeGoal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *hlds__goal_util__MaybeGoal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              *hlds__goal_util__MaybeGoal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__goal_util__ConjType_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Conjs0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 2)));
                MR_Integer hlds__goal_util__ConjNum_38;
                MR_Word hlds__goal_util__Conj0_39;
                MR_Word hlds__goal_util__TypeCtorInfo_156_156;
                MR_Box hlds__goal_util__conv2_Conj0_39;

                hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__FirstStep_10)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__goal_util__succeeded)
                {
                  hlds__goal_util__ConjNum_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__goal_util__FirstStep_10, (MR_Integer) 0)));
                  hlds__goal_util__TypeCtorInfo_156_156 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                  hlds__goal_util__succeeded = mercury__list__index1_3_p_0(hlds__goal_util__TypeCtorInfo_156_156, hlds__goal_util__Conjs0_37, hlds__goal_util__ConjNum_38, &hlds__goal_util__conv2_Conj0_39);
                  if (hlds__goal_util__succeeded)
                  {
                    hlds__goal_util__Conj0_39 = ((MR_Word) hlds__goal_util__conv2_Conj0_39);
                    hlds__goal_util__succeeded = MR_TRUE;
                  }
                }
                if (hlds__goal_util__succeeded)
                {
                  MR_Word hlds__goal_util__MaybeConj_40;

                  hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__Conj0_39, &hlds__goal_util__MaybeConj_40);
                  switch (MR_tag((MR_Word) hlds__goal_util__MaybeConj_40)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeConj_40;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__goal_util__Conj_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeConj_40, (MR_Integer) 0)));
                        MR_Word hlds__goal_util__Conjs_42;
                        MR_Word hlds__goal_util__GoalExpr_43;
                        MR_Word hlds__goal_util__Var_96;
                        MR_Word hlds__goal_util__Var_136;
                        MR_Word hlds__goal_util__Var_135;

                        mercury__list__det_replace_nth_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__goal_util__Conjs0_37, hlds__goal_util__ConjNum_38, ((MR_Box) (hlds__goal_util__Conj_41)), &hlds__goal_util__Conjs_42);
                        {
                          hlds__goal_util__GoalExpr_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_43, 1) = ((MR_Box) (hlds__goal_util__ConjType_36));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_43, 2) = ((MR_Box) (hlds__goal_util__Conjs_42));
                        }
                        hlds__goal_util__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
                        hlds__goal_util__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
                        {
                          hlds__goal_util__Var_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Var_96, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_43));
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Var_96, 1) = ((MR_Box) (hlds__goal_util__Var_136));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__goal_util__MaybeGoal_8 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Var_96));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeConj_40;
                      break;
                  }
                }
                else
                  *hlds__goal_util__MaybeGoal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word hlds__goal_util__Disjs0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 1)));
                MR_Integer hlds__goal_util__DisjNum_46;
                MR_Word hlds__goal_util__Disj0_47;
                MR_Word hlds__goal_util__TypeCtorInfo_158_158;
                MR_Box hlds__goal_util__conv3_Disj0_47;

                hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__FirstStep_10)) == (MR_mktag((MR_Integer) 2)));
                if (hlds__goal_util__succeeded)
                {
                  hlds__goal_util__DisjNum_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__FirstStep_10, (MR_Integer) 0)));
                  hlds__goal_util__TypeCtorInfo_158_158 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                  hlds__goal_util__succeeded = mercury__list__index1_3_p_0(hlds__goal_util__TypeCtorInfo_158_158, hlds__goal_util__Disjs0_45, hlds__goal_util__DisjNum_46, &hlds__goal_util__conv3_Disj0_47);
                  if (hlds__goal_util__succeeded)
                  {
                    hlds__goal_util__Disj0_47 = ((MR_Word) hlds__goal_util__conv3_Disj0_47);
                    hlds__goal_util__succeeded = MR_TRUE;
                  }
                }
                if (hlds__goal_util__succeeded)
                {
                  MR_Word hlds__goal_util__MaybeDisj_48;

                  hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__Disj0_47, &hlds__goal_util__MaybeDisj_48);
                  switch (MR_tag((MR_Word) hlds__goal_util__MaybeDisj_48)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeDisj_48;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__goal_util__Disj_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeDisj_48, (MR_Integer) 0)));
                        MR_Word hlds__goal_util__Disjs_50;
                        MR_Word hlds__goal_util__Var_95;
                        MR_Word hlds__goal_util__GoalExpr_97;
                        MR_Word hlds__goal_util__Var_138;
                        MR_Word hlds__goal_util__Var_137;

                        mercury__list__det_replace_nth_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__goal_util__Disjs0_45, hlds__goal_util__DisjNum_46, ((MR_Box) (hlds__goal_util__Disj_49)), &hlds__goal_util__Disjs_50);
                        {
                          hlds__goal_util__GoalExpr_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_97, 1) = ((MR_Box) (hlds__goal_util__Disjs_50));
                        }
                        hlds__goal_util__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
                        hlds__goal_util__Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
                        {
                          hlds__goal_util__Var_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Var_95, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_97));
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Var_95, 1) = ((MR_Box) (hlds__goal_util__Var_138));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__goal_util__MaybeGoal_8 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Var_95));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeDisj_48;
                      break;
                  }
                }
                else
                  *hlds__goal_util__MaybeGoal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word hlds__goal_util__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 1)));
                MR_Word hlds__goal_util__CanFail_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Cases0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 3)));
                MR_Integer hlds__goal_util__CaseNum_55;
                MR_Word hlds__goal_util__Case0_57;
                MR_Word hlds__goal_util__TypeCtorInfo_160_160;
                MR_Word hlds__goal_util___MaybeNumConstructors_56;
                MR_Box hlds__goal_util__conv4_Case0_57;

                hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__FirstStep_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (hlds__goal_util__succeeded)
                {
                  hlds__goal_util__CaseNum_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_10, (MR_Integer) 1)));
                  hlds__goal_util___MaybeNumConstructors_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_10, (MR_Integer) 2)));
                  hlds__goal_util__TypeCtorInfo_160_160 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
                  hlds__goal_util__succeeded = mercury__list__index1_3_p_0(hlds__goal_util__TypeCtorInfo_160_160, hlds__goal_util__Cases0_54, hlds__goal_util__CaseNum_55, &hlds__goal_util__conv4_Case0_57);
                  if (hlds__goal_util__succeeded)
                  {
                    hlds__goal_util__Case0_57 = ((MR_Word) hlds__goal_util__conv4_Case0_57);
                    hlds__goal_util__succeeded = MR_TRUE;
                  }
                }
                if (hlds__goal_util__succeeded)
                {
                  MR_Word hlds__goal_util__CaseGoal0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_57, (MR_Integer) 2)));
                  MR_Word hlds__goal_util__MaybeCaseGoal_59;
                  MR_Word hlds__goal_util__Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_57, (MR_Integer) 0)));
                  MR_Word hlds__goal_util__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_57, (MR_Integer) 1)));

                  hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__CaseGoal0_58, &hlds__goal_util__MaybeCaseGoal_59);
                  switch (MR_tag((MR_Word) hlds__goal_util__MaybeCaseGoal_59)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeCaseGoal_59;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__goal_util__CaseGoal_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeCaseGoal_59, (MR_Integer) 0)));
                        MR_Word hlds__goal_util__Case_61;
                        MR_Word hlds__goal_util__Cases_62;
                        MR_Word hlds__goal_util__Var_94;
                        MR_Word hlds__goal_util__GoalExpr_102;
                        MR_Word hlds__goal_util__Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_57, (MR_Integer) 0)));
                        MR_Word hlds__goal_util__Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_57, (MR_Integer) 1)));
                        MR_Word hlds__goal_util__Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_57, (MR_Integer) 2)));
                        MR_Word hlds__goal_util__Var_145;
                        MR_Word hlds__goal_util__Var_144;

                        {
                          hlds__goal_util__Case_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Case_61, 0) = ((MR_Box) (hlds__goal_util__Var_141));
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Case_61, 1) = ((MR_Box) (hlds__goal_util__Var_142));
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Case_61, 2) = ((MR_Box) (hlds__goal_util__CaseGoal_60));
                        }
                        mercury__list__det_replace_nth_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, hlds__goal_util__Cases0_54, hlds__goal_util__CaseNum_55, ((MR_Box) (hlds__goal_util__Case_61)), &hlds__goal_util__Cases_62);
                        {
                          hlds__goal_util__GoalExpr_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_102, 1) = ((MR_Box) (hlds__goal_util__Var_52));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_102, 2) = ((MR_Box) (hlds__goal_util__CanFail_53));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_102, 3) = ((MR_Box) (hlds__goal_util__Cases_62));
                        }
                        hlds__goal_util__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
                        hlds__goal_util__Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
                        {
                          hlds__goal_util__Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Var_94, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_102));
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Var_94, 1) = ((MR_Box) (hlds__goal_util__Var_145));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__goal_util__MaybeGoal_8 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Var_94));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeCaseGoal_59;
                      break;
                  }
                }
                else
                  *hlds__goal_util__MaybeGoal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word hlds__goal_util__Reason_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 1)));
                MR_Word hlds__goal_util__SubGoal0_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 2)));
                MR_Word hlds__goal_util___MaybeCut_69;

                hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__FirstStep_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (hlds__goal_util__succeeded)
                {
                  hlds__goal_util___MaybeCut_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__FirstStep_10, (MR_Integer) 1)));
                  {
                    MR_Word hlds__goal_util__MaybeSubGoal_112;

                    hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__SubGoal0_118, &hlds__goal_util__MaybeSubGoal_112);
                    switch (MR_tag((MR_Word) hlds__goal_util__MaybeSubGoal_112)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeSubGoal_112;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word hlds__goal_util__Var_91;
                          MR_Word hlds__goal_util__GoalExpr_107;
                          MR_Word hlds__goal_util__SubGoal_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeSubGoal_112, (MR_Integer) 0)));
                          MR_Word hlds__goal_util__Var_149;
                          MR_Word hlds__goal_util__Var_148;

                          {
                            hlds__goal_util__GoalExpr_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_107, 1) = ((MR_Box) (hlds__goal_util__Reason_68));
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_107, 2) = ((MR_Box) (hlds__goal_util__SubGoal_108));
                          }
                          hlds__goal_util__Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
                          hlds__goal_util__Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
                          {
                            hlds__goal_util__Var_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), hlds__goal_util__Var_91, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_107));
                            MR_hl_field(MR_mktag(0), hlds__goal_util__Var_91, 1) = ((MR_Box) (hlds__goal_util__Var_149));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *hlds__goal_util__MaybeGoal_8 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Var_91));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeSubGoal_112;
                        break;
                    }
                  }
                }
                else
                  *hlds__goal_util__MaybeGoal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word hlds__goal_util__ExistVars_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Cond0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Then0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Else0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_12, (MR_Integer) 4)));

                hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (hlds__goal_util__succeeded)
                {
                  MR_Word hlds__goal_util__MaybeCond_75;

                  hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__Cond0_72, &hlds__goal_util__MaybeCond_75);
                  switch (MR_tag((MR_Word) hlds__goal_util__MaybeCond_75)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeCond_75;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__goal_util__Cond_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeCond_75, (MR_Integer) 0)));
                        MR_Word hlds__goal_util__Var_88;
                        MR_Word hlds__goal_util__GoalExpr_121;
                        MR_Word hlds__goal_util__Var_151;
                        MR_Word hlds__goal_util__Var_150;

                        {
                          hlds__goal_util__GoalExpr_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_121, 1) = ((MR_Box) (hlds__goal_util__ExistVars_71));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_121, 2) = ((MR_Box) (hlds__goal_util__Cond_76));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_121, 3) = ((MR_Box) (hlds__goal_util__Then0_73));
                          MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_121, 4) = ((MR_Box) (hlds__goal_util__Else0_74));
                        }
                        hlds__goal_util__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
                        hlds__goal_util__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
                        {
                          hlds__goal_util__Var_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Var_88, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_121));
                          MR_hl_field(MR_mktag(0), hlds__goal_util__Var_88, 1) = ((MR_Box) (hlds__goal_util__Var_151));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__goal_util__MaybeGoal_8 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Var_88));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeCond_75;
                      break;
                  }
                }
                else
                {
                  hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                  if (hlds__goal_util__succeeded)
                  {
                    MR_Word hlds__goal_util__MaybeThen_78;

                    hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__Then0_73, &hlds__goal_util__MaybeThen_78);
                    switch (MR_tag((MR_Word) hlds__goal_util__MaybeThen_78)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeThen_78;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word hlds__goal_util__Then_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeThen_78, (MR_Integer) 0)));
                          MR_Word hlds__goal_util__Var_89;
                          MR_Word hlds__goal_util__GoalExpr_124;
                          MR_Word hlds__goal_util__Var_153;
                          MR_Word hlds__goal_util__Var_152;

                          {
                            hlds__goal_util__GoalExpr_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_124, 1) = ((MR_Box) (hlds__goal_util__ExistVars_71));
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_124, 2) = ((MR_Box) (hlds__goal_util__Cond0_72));
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_124, 3) = ((MR_Box) (hlds__goal_util__Then_79));
                            MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_124, 4) = ((MR_Box) (hlds__goal_util__Else0_74));
                          }
                          hlds__goal_util__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
                          hlds__goal_util__Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
                          {
                            hlds__goal_util__Var_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), hlds__goal_util__Var_89, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_124));
                            MR_hl_field(MR_mktag(0), hlds__goal_util__Var_89, 1) = ((MR_Box) (hlds__goal_util__Var_153));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *hlds__goal_util__MaybeGoal_8 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Var_89));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeThen_78;
                        break;
                    }
                  }
                  else
                  {
                    hlds__goal_util__succeeded = (hlds__goal_util__FirstStep_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                    if (hlds__goal_util__succeeded)
                    {
                      MR_Word hlds__goal_util__MaybeElse_81;

                      hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(hlds__goal_util__TransformP_5, hlds__goal_util__LaterPath_11, hlds__goal_util__Else0_74, &hlds__goal_util__MaybeElse_81);
                      switch (MR_tag((MR_Word) hlds__goal_util__MaybeElse_81)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeElse_81;
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word hlds__goal_util__Else_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeElse_81, (MR_Integer) 0)));
                            MR_Word hlds__goal_util__Var_90;
                            MR_Word hlds__goal_util__GoalExpr_127;
                            MR_Word hlds__goal_util__Var_155;
                            MR_Word hlds__goal_util__Var_154;

                            {
                              hlds__goal_util__GoalExpr_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_127, 1) = ((MR_Box) (hlds__goal_util__ExistVars_71));
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_127, 2) = ((MR_Box) (hlds__goal_util__Cond0_72));
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_127, 3) = ((MR_Box) (hlds__goal_util__Then0_73));
                              MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_127, 4) = ((MR_Box) (hlds__goal_util__Else_82));
                            }
                            hlds__goal_util__Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
                            hlds__goal_util__Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
                            {
                              hlds__goal_util__Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), hlds__goal_util__Var_90, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_127));
                              MR_hl_field(MR_mktag(0), hlds__goal_util__Var_90, 1) = ((MR_Box) (hlds__goal_util__Var_155));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              *hlds__goal_util__MaybeGoal_8 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Var_90));
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          *hlds__goal_util__MaybeGoal_8 = hlds__goal_util__MaybeElse_81;
                          break;
                      }
                    }
                    else
                      *hlds__goal_util__MaybeGoal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                }
              }
              break;
            case (MR_Integer) 7:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "predicate \140hlds.goal_util.maybe_transform_goal_at_goal_path\'/4", (MR_String) "shorthand");
                  return;
                }
              }
              break;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word * hlds__goal_util__HeadVar__2_2)
{
  if (((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_String hlds__goal_util__Error_4 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *hlds__goal_util__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__goal_util__Error_4));
    }
  }
  else
  {
    MR_Word hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *hlds__goal_util__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Goal_3));
    }
  }
}

static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_4(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1)
{
  {
    MR_Box hlds__goal_util__wrapper_arg_2;
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv3_Case_4;

    hlds__goal_util__conv3_Case_4 = hlds__goal_util__maybe_strip_equality_pretest_case_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv3_Case_4));
    return hlds__goal_util__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_3(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1)
{
  {
    MR_Box hlds__goal_util__wrapper_arg_2;
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv2_Goal_4;

    hlds__goal_util__conv2_Goal_4 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv2_Goal_4));
    return hlds__goal_util__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_2(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1)
{
  {
    MR_Box hlds__goal_util__wrapper_arg_2;
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv1_Goal_4;

    hlds__goal_util__conv1_Goal_4 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv1_Goal_4));
    return hlds__goal_util__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1)
{
  {
    MR_Box hlds__goal_util__wrapper_arg_2;
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv0_Goal_4;

    hlds__goal_util__conv0_Goal_4 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv0_Goal_4));
    return hlds__goal_util__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0(
  MR_Word hlds__goal_util__Goal0_3)
{
  {
    MR_bool hlds__goal_util__succeeded;
    MR_Word hlds__goal_util__Goal_4;
    MR_Word hlds__goal_util__GoalExpr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_3, (MR_Integer) 0)));
    MR_Word hlds__goal_util__GoalInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_3, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__goal_util__SubGoal0_47 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr0_5), (MR_Integer) 0);
          MR_Word hlds__goal_util__SubGoal_48;
          MR_Word hlds__goal_util__GoalExpr_80;

          hlds__goal_util__SubGoal_48 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__SubGoal0_47);
          hlds__goal_util__GoalExpr_80 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_util__SubGoal_48);
          {
            hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_80));
            MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        hlds__goal_util__Goal_4 = hlds__goal_util__Goal0_3;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            hlds__goal_util__Goal_4 = hlds__goal_util__Goal0_3;
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__goal_util__TypeCtorInfo_99_99 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              MR_Word hlds__goal_util__ConjType_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 1)));
              MR_Word hlds__goal_util__Goals0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 2)));
              MR_Word hlds__goal_util__Goals_32;
              MR_Word hlds__goal_util__GoalExpr_33;

              hlds__goal_util__Goals_32 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_99_99, hlds__goal_util__TypeCtorInfo_99_99, (MR_Word) &hlds__goal_util_scalar_common_3[17], hlds__goal_util__Goals0_31);
              {
                hlds__goal_util__GoalExpr_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_33, 1) = ((MR_Box) (hlds__goal_util__ConjType_30));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_33, 2) = ((MR_Box) (hlds__goal_util__Goals_32));
              }
              {
                hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_33));
                MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__goal_util__TypeCtorInfo_102_102 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              MR_Word hlds__goal_util__SubGoals0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 1)));
              MR_Word hlds__goal_util__SubGoals_35;
              MR_Word hlds__goal_util__GoalExpr_75;

              hlds__goal_util__SubGoals_35 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_102_102, hlds__goal_util__TypeCtorInfo_102_102, (MR_Word) &hlds__goal_util_scalar_common_3[18], hlds__goal_util__SubGoals0_34);
              {
                hlds__goal_util__GoalExpr_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_75, 1) = ((MR_Box) (hlds__goal_util__SubGoals_35));
              }
              {
                hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_75));
                MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__goal_util__TypeCtorInfo_105_105 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
              MR_Word hlds__goal_util__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 1)));
              MR_Word hlds__goal_util__CanFail_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 2)));
              MR_Word hlds__goal_util__Cases0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 3)));
              MR_Word hlds__goal_util__Cases_39;
              MR_Word hlds__goal_util__GoalExpr_76;

              hlds__goal_util__Cases_39 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_105_105, hlds__goal_util__TypeCtorInfo_105_105, (MR_Word) &hlds__goal_util_scalar_common_3[20], hlds__goal_util__Cases0_38);
              {
                hlds__goal_util__GoalExpr_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_76, 1) = ((MR_Box) (hlds__goal_util__Var_36));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_76, 2) = ((MR_Box) (hlds__goal_util__CanFail_37));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_76, 3) = ((MR_Box) (hlds__goal_util__Cases_39));
              }
              {
                hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_76));
                MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__goal_util__Reason_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 1)));
              MR_Word hlds__goal_util__SubGoal0_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 2)));
              MR_Word hlds__goal_util__FGT_51;
              MR_Word hlds__goal_util__Var_50;

              hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_49)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_49, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (hlds__goal_util__succeeded)
              {
                hlds__goal_util__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_49, (MR_Integer) 1)));
                hlds__goal_util__FGT_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_49, (MR_Integer) 2)));
                switch (hlds__goal_util__FGT_51) {
                  default:
                    hlds__goal_util__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    hlds__goal_util__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    hlds__goal_util__succeeded = MR_TRUE;
                    break;
                }
              }
              if (hlds__goal_util__succeeded)
                hlds__goal_util__Goal_4 = hlds__goal_util__Goal0_3;
              else
              {
                MR_Word hlds__goal_util__GoalExpr_81;
                MR_Word hlds__goal_util__SubGoal_82;

                hlds__goal_util__SubGoal_82 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__SubGoal0_86);
                {
                  hlds__goal_util__GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_81, 1) = ((MR_Box) (hlds__goal_util__Reason_49));
                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_81, 2) = ((MR_Box) (hlds__goal_util__SubGoal_82));
                }
                {
                  hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_81));
                  MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word hlds__goal_util__Vars_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 1)));
              MR_Word hlds__goal_util__Cond0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 2)));
              MR_Word hlds__goal_util__Then0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 3)));
              MR_Word hlds__goal_util__Else0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 4)));

              hlds__goal_util__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__goal_util__GoalInfo0_6, (MR_Integer) 19);
              if (hlds__goal_util__succeeded)
                hlds__goal_util__Goal_4 = hlds__goal_util__Else0_43;
              else
              {
                MR_Word hlds__goal_util__Cond_44;
                MR_Word hlds__goal_util__Then_45;
                MR_Word hlds__goal_util__Else_46;
                MR_Word hlds__goal_util__GoalExpr_77;

                hlds__goal_util__Cond_44 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__Cond0_41);
                hlds__goal_util__Then_45 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__Then0_42);
                hlds__goal_util__Else_46 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__Else0_43);
                {
                  hlds__goal_util__GoalExpr_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_77, 1) = ((MR_Box) (hlds__goal_util__Vars_40));
                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_77, 2) = ((MR_Box) (hlds__goal_util__Cond_44));
                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_77, 3) = ((MR_Box) (hlds__goal_util__Then_45));
                  MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_77, 4) = ((MR_Box) (hlds__goal_util__Else_46));
                }
                {
                  hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_77));
                  MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word hlds__goal_util__ShortHand0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_5, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) hlds__goal_util__ShortHand0_52)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "function \140hlds.goal_util.maybe_strip_equality_pretest\'/1", (MR_String) "bi_implication");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__goal_util__TypeCtorInfo_108_108;
                    MR_Word hlds__goal_util__GoalType_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_52, (MR_Integer) 0)));
                    MR_Word hlds__goal_util__Outer_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_52, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__Inner_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_52, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__MaybeOutputVars_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_52, (MR_Integer) 3)));
                    MR_Word hlds__goal_util__MainGoal0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_52, (MR_Integer) 4)));
                    MR_Word hlds__goal_util__OrElseGoals0_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_52, (MR_Integer) 5)));
                    MR_Word hlds__goal_util__OrElseInners_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_52, (MR_Integer) 6)));
                    MR_Word hlds__goal_util__MainGoal_60;
                    MR_Word hlds__goal_util__OrElseGoals_61;
                    MR_Word hlds__goal_util__ShortHand_62;
                    MR_Word hlds__goal_util__GoalExpr_88;

                    hlds__goal_util__MainGoal_60 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__MainGoal0_57);
                    hlds__goal_util__TypeCtorInfo_108_108 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                    hlds__goal_util__OrElseGoals_61 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_108_108, hlds__goal_util__TypeCtorInfo_108_108, (MR_Word) &hlds__goal_util_scalar_common_3[19], hlds__goal_util__OrElseGoals0_58);
                    {
                      hlds__goal_util__ShortHand_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_62, 0) = ((MR_Box) (hlds__goal_util__GoalType_53));
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_62, 1) = ((MR_Box) (hlds__goal_util__Outer_54));
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_62, 2) = ((MR_Box) (hlds__goal_util__Inner_55));
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_62, 3) = ((MR_Box) (hlds__goal_util__MaybeOutputVars_56));
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_62, 4) = ((MR_Box) (hlds__goal_util__MainGoal_60));
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_62, 5) = ((MR_Box) (hlds__goal_util__OrElseGoals_61));
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_62, 6) = ((MR_Box) (hlds__goal_util__OrElseInners_59));
                    }
                    {
                      hlds__goal_util__GoalExpr_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_88, 1) = ((MR_Box) (hlds__goal_util__ShortHand_62));
                    }
                    {
                      hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_88));
                      MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__goal_util__MaybeIO_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_52, (MR_Integer) 0)));
                    MR_Word hlds__goal_util__ResultVar_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_52, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__GoalExpr_89;
                    MR_Word hlds__goal_util__SubGoal0_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_52, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__SubGoal_91;
                    MR_Word hlds__goal_util__ShortHand_92;

                    hlds__goal_util__SubGoal_91 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(hlds__goal_util__SubGoal0_90);
                    {
                      hlds__goal_util__ShortHand_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_92, 0) = ((MR_Box) (hlds__goal_util__MaybeIO_63));
                      MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_92, 1) = ((MR_Box) (hlds__goal_util__ResultVar_64));
                      MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_92, 2) = ((MR_Box) (hlds__goal_util__SubGoal_91));
                    }
                    {
                      hlds__goal_util__GoalExpr_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_89, 1) = ((MR_Box) (hlds__goal_util__ShortHand_92));
                    }
                    {
                      hlds__goal_util__Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_89));
                      MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, 1) = ((MR_Box) (hlds__goal_util__GoalInfo0_6));
                    }
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    return hlds__goal_util__Goal_4;
  }
}

MR_bool MR_CALL 
hlds__goal_util__foreign_proc_uses_variable_2_p_0(
  MR_Word hlds__goal_util__Impl_3,
  MR_String hlds__goal_util__VarName_4)
{
  {
    MR_bool hlds__goal_util__succeeded;
    MR_String hlds__goal_util__ForeignBody_5 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__goal_util__Impl_3, (MR_Integer) 0)));
    MR_Word hlds__goal_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Impl_3, (MR_Integer) 1)));
    MR_Integer hlds__goal_util__Var_7;

    hlds__goal_util__succeeded = mercury__string__sub_string_search_3_p_0(hlds__goal_util__ForeignBody_5, hlds__goal_util__VarName_4, &hlds__goal_util__Var_7);
    return hlds__goal_util__succeeded;
  }
}

void MR_CALL 
hlds__goal_util__generate_cast_5_p_0(
  MR_Word hlds__goal_util__CastType_6,
  MR_Word hlds__goal_util__InArg_7,
  MR_Word hlds__goal_util__OutArg_8,
  MR_Word hlds__goal_util__Context_9,
  MR_Word * hlds__goal_util__Goal_10)
{
  {
    MR_Word hlds__goal_util__Ground_11;

    hlds__goal_util__Ground_11 = parse_tree__prog_mode__ground_inst_0_f_0();
    hlds__goal_util__generate_cast_with_insts_7_p_0(hlds__goal_util__CastType_6, hlds__goal_util__InArg_7, hlds__goal_util__OutArg_8, hlds__goal_util__Ground_11, hlds__goal_util__Ground_11, hlds__goal_util__Context_9, hlds__goal_util__Goal_10);
  }
}

void MR_CALL 
hlds__goal_util__generate_cast_with_insts_7_p_0(
  MR_Word hlds__goal_util__CastType_8,
  MR_Word hlds__goal_util__InArg_9,
  MR_Word hlds__goal_util__OutArg_10,
  MR_Word hlds__goal_util__InInst_11,
  MR_Word hlds__goal_util__OutInst_12,
  MR_Word hlds__goal_util__Context_13,
  MR_Word * hlds__goal_util__Goal_14)
{
  {
    MR_Word hlds__goal_util__NonLocals_15;
    MR_Word hlds__goal_util__InstMapDelta_16;
    MR_Word hlds__goal_util__GoalInfo_17;
    MR_Word hlds__goal_util__GoalExpr_18;
    MR_Word hlds__goal_util__Var_19;
    MR_Word hlds__goal_util__Var_20;
    MR_Word hlds__goal_util__Var_22;
    MR_Word hlds__goal_util__Var_23;
    MR_Word hlds__goal_util__Var_27;
    MR_Word hlds__goal_util__Var_31;
    MR_Word hlds__goal_util__Var_32;
    MR_Word hlds__goal_util__Var_33;
    MR_Word hlds__goal_util__Var_34;

    {
      hlds__goal_util__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Var_20, 0) = ((MR_Box) (hlds__goal_util__OutArg_10));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__goal_util__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Var_19, 0) = ((MR_Box) (hlds__goal_util__InArg_9));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Var_19, 1) = ((MR_Box) (hlds__goal_util__Var_20));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Var_19, &hlds__goal_util__NonLocals_15);
    {
      hlds__goal_util__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_23, 0) = ((MR_Box) (hlds__goal_util__OutArg_10));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_23, 1) = ((MR_Box) (hlds__goal_util__OutInst_12));
    }
    {
      hlds__goal_util__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Var_22, 0) = ((MR_Box) (hlds__goal_util__Var_23));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    hlds__goal_util__InstMapDelta_16 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(hlds__goal_util__Var_22);
    hlds__hlds_goal__goal_info_init_6_p_0(hlds__goal_util__NonLocals_15, hlds__goal_util__InstMapDelta_16, (MR_Integer) 0, (MR_Integer) 0, hlds__goal_util__Context_13, &hlds__goal_util__GoalInfo_17);
    {
      hlds__goal_util__Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__goal_util__Var_27, 0) = ((MR_Box) (hlds__goal_util__CastType_8));
    }
    hlds__goal_util__Var_32 = parse_tree__prog_mode__in_mode_1_f_0(hlds__goal_util__InInst_11);
    hlds__goal_util__Var_34 = parse_tree__prog_mode__out_mode_1_f_0(hlds__goal_util__OutInst_12);
    {
      hlds__goal_util__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Var_33, 0) = ((MR_Box) (hlds__goal_util__Var_34));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__goal_util__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Var_31, 0) = ((MR_Box) (hlds__goal_util__Var_32));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Var_31, 1) = ((MR_Box) (hlds__goal_util__Var_33));
    }
    {
      hlds__goal_util__GoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_18, 1) = ((MR_Box) (hlds__goal_util__Var_27));
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_18, 2) = ((MR_Box) (hlds__goal_util__Var_19));
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_18, 3) = ((MR_Box) (hlds__goal_util__Var_31));
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_18, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_18, 5) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__goal_util__Goal_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_17));
    }
  }
}

static void MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_4(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3)
{
  {
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv2_HeadVar__3_3;

    hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv2_HeadVar__3_3);
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv2_HeadVar__3_3));
  }
}

static MR_bool MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_3(
  MR_Box hlds__goal_util__closure_arg)
{
  {
    MR_bool hlds__goal_util__succeeded;
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;

    hlds__goal_util__succeeded = hlds__goal_util__IntroducedFrom__pred__generate_foreign_proc__1987__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 4))));
    return hlds__goal_util__succeeded;
  }
}

static MR_Box MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_2(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1)
{
  {
    MR_Box hlds__goal_util__wrapper_arg_2;
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv1_HeadVar__2_2;

    hlds__goal_util__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv1_HeadVar__2_2));
    return hlds__goal_util__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1)
{
  {
    MR_Box hlds__goal_util__wrapper_arg_2;
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv0_HeadVar__2_2;

    hlds__goal_util__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__2_2));
    return hlds__goal_util__wrapper_arg_2;
  }
}

void MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0(
  MR_Word hlds__goal_util__ModuleName_17,
  MR_String hlds__goal_util__ProcName_18,
  MR_Word hlds__goal_util__PredOrFunc_19,
  MR_Word hlds__goal_util__ModeNo_20,
  MR_Word hlds__goal_util__Detism_21,
  MR_Word hlds__goal_util__Purity_22,
  MR_Word hlds__goal_util__Attributes_23,
  MR_Word hlds__goal_util__Args_24,
  MR_Word hlds__goal_util__ExtraArgs_25,
  MR_Word hlds__goal_util__MaybeTraceRuntimeCond_26,
  MR_String hlds__goal_util__Code_27,
  MR_Word hlds__goal_util__Features_28,
  MR_Word hlds__goal_util__InstMapDelta0_29,
  MR_Word hlds__goal_util__ModuleInfo_30,
  MR_Word hlds__goal_util__Context_31,
  MR_Word * hlds__goal_util__Goal_32)
{
  {
    MR_bool hlds__goal_util__succeeded;
    MR_Word hlds__goal_util__TypeCtorInfo_56_56 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
    MR_Word hlds__goal_util__TypeInfo_57_57;
    MR_Integer hlds__goal_util__Arity_33;
    MR_Word hlds__goal_util__PredId_34;
    MR_Integer hlds__goal_util__ProcId_35;
    MR_Word hlds__goal_util__GoalExpr_36;
    MR_Word hlds__goal_util__ArgVars_37;
    MR_Word hlds__goal_util__ExtraArgVars_38;
    MR_Word hlds__goal_util__Vars_39;
    MR_Word hlds__goal_util__NonLocals_40;
    MR_Word hlds__goal_util__NumSolns_42;
    MR_Word hlds__goal_util__InstMapDelta_43;
    MR_Word hlds__goal_util__PredInfo_44;
    MR_Word hlds__goal_util__PredPurity_45;
    MR_Word hlds__goal_util__GoalInfo0_46;
    MR_Word hlds__goal_util__GoalInfo_47;
    MR_Word hlds__goal_util__Var_48;
    MR_Word hlds__goal_util__Var_52;
    MR_Word hlds__goal_util___CanFail_41;
    MR_Box hlds__goal_util__conv3_GoalInfo_47;

    mercury__list__length_2_p_0(hlds__goal_util__TypeCtorInfo_56_56, hlds__goal_util__Args_24, &hlds__goal_util__Arity_33);
    hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(hlds__goal_util__ModuleInfo_30, hlds__goal_util__ModuleName_17, hlds__goal_util__ProcName_18, hlds__goal_util__PredOrFunc_19, hlds__goal_util__Arity_33, hlds__goal_util__ModeNo_20, &hlds__goal_util__PredId_34, &hlds__goal_util__ProcId_35);
    {
      hlds__goal_util__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_48, 0) = ((MR_Box) (hlds__goal_util__Code_27));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__goal_util__GoalExpr_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 1) = ((MR_Box) (hlds__goal_util__Attributes_23));
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 2) = ((MR_Box) (hlds__goal_util__PredId_34));
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 3) = ((MR_Box) (hlds__goal_util__ProcId_35));
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 4) = ((MR_Box) (hlds__goal_util__Args_24));
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 5) = ((MR_Box) (hlds__goal_util__ExtraArgs_25));
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 6) = ((MR_Box) (hlds__goal_util__MaybeTraceRuntimeCond_26));
      MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_36, 7) = ((MR_Box) (hlds__goal_util__Var_48));
    }
    hlds__goal_util__TypeInfo_57_57 = (MR_Word) &hlds__goal_util_scalar_common_1[0];
    hlds__goal_util__ArgVars_37 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_56_56, hlds__goal_util__TypeInfo_57_57, (MR_Word) &hlds__goal_util_scalar_common_3[14], hlds__goal_util__Args_24);
    hlds__goal_util__ExtraArgVars_38 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_56_56, hlds__goal_util__TypeInfo_57_57, (MR_Word) &hlds__goal_util_scalar_common_3[15], hlds__goal_util__ExtraArgs_25);
    hlds__goal_util__Vars_39 = mercury__list__f_43_43_2_f_0(hlds__goal_util__TypeInfo_57_57, hlds__goal_util__ArgVars_37, hlds__goal_util__ExtraArgVars_38);
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Vars_39, &hlds__goal_util__NonLocals_40);
    parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_util__Detism_21, &hlds__goal_util___CanFail_41, &hlds__goal_util__NumSolns_42);
    switch (hlds__goal_util__NumSolns_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        hlds__goal_util__InstMapDelta_43 = hlds__goal_util__InstMapDelta0_29;
        break;
      case (MR_Integer) 0:
        hlds__instmap__instmap_delta_init_unreachable_1_p_0(&hlds__goal_util__InstMapDelta_43);
        break;
    }
    hlds__hlds_module__module_info_pred_info_3_p_0(hlds__goal_util__ModuleInfo_30, hlds__goal_util__PredId_34, &hlds__goal_util__PredInfo_44);
    hlds__hlds_pred__pred_info_get_purity_2_p_0(hlds__goal_util__PredInfo_44, &hlds__goal_util__PredPurity_45);
    {
      hlds__goal_util__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_52, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_52, 1) = ((MR_Box) (hlds__goal_util__generate_foreign_proc_16_p_0_3));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_52, 3) = ((MR_Box) (hlds__goal_util__Purity_22));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_52, 4) = ((MR_Box) (hlds__goal_util__PredPurity_45));
    }
    mercury__require__expect_3_p_0(hlds__goal_util__Var_52, (MR_String) "hlds.goal_util", (MR_String) "generate_simple_call: purity disagreement");
    hlds__hlds_goal__goal_info_init_6_p_0(hlds__goal_util__NonLocals_40, hlds__goal_util__InstMapDelta_43, hlds__goal_util__Detism_21, hlds__goal_util__Purity_22, hlds__goal_util__Context_31, &hlds__goal_util__GoalInfo0_46);
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_3[16], hlds__goal_util__Features_28, ((MR_Box) (hlds__goal_util__GoalInfo0_46)), &hlds__goal_util__conv3_GoalInfo_47);
    hlds__goal_util__GoalInfo_47 = ((MR_Word) hlds__goal_util__conv3_GoalInfo_47);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__goal_util__Goal_32 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_47));
    }
  }
}

static void MR_CALL 
hlds__goal_util__generate_simple_call_12_p_0_2(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3)
{
  {
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv0_HeadVar__3_3;

    hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_HeadVar__3_3);
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__3_3));
  }
}

static MR_bool MR_CALL 
hlds__goal_util__generate_simple_call_12_p_0_1(
  MR_Box hlds__goal_util__closure_arg)
{
  {
    MR_bool hlds__goal_util__succeeded;
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;

    hlds__goal_util__succeeded = hlds__goal_util__IntroducedFrom__pred__generate_simple_call__1954__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 4))));
    return hlds__goal_util__succeeded;
  }
}

void MR_CALL 
hlds__goal_util__generate_simple_call_12_p_0(
  MR_Word hlds__goal_util__ModuleName_13,
  MR_String hlds__goal_util__ProcName_14,
  MR_Word hlds__goal_util__PredOrFunc_15,
  MR_Word hlds__goal_util__ModeNo_16,
  MR_Word hlds__goal_util__Detism_17,
  MR_Word hlds__goal_util__Purity_18,
  MR_Word hlds__goal_util__Args_19,
  MR_Word hlds__goal_util__Features_20,
  MR_Word hlds__goal_util__InstMapDelta0_21,
  MR_Word hlds__goal_util__ModuleInfo_22,
  MR_Word hlds__goal_util__Context_23,
  MR_Word * hlds__goal_util__Goal_24)
{
  {
    MR_bool hlds__goal_util__succeeded;
    MR_Integer hlds__goal_util__Arity_25;
    MR_Word hlds__goal_util__PredId_26;
    MR_Integer hlds__goal_util__ProcId_27;
    MR_Word hlds__goal_util__InvalidPredId_28;
    MR_Word hlds__goal_util__BuiltinState_29;
    MR_Word hlds__goal_util__GoalExpr_30;
    MR_Word hlds__goal_util__NonLocals_31;
    MR_Word hlds__goal_util__NumSolns_33;
    MR_Word hlds__goal_util__InstMapDelta_34;
    MR_Word hlds__goal_util__PredInfo_35;
    MR_Word hlds__goal_util__PredPurity_36;
    MR_Word hlds__goal_util__GoalInfo0_37;
    MR_Word hlds__goal_util__GoalInfo_38;
    MR_Word hlds__goal_util__Var_40;
    MR_Word hlds__goal_util__Var_41;
    MR_Word hlds__goal_util___CanFail_32;
    MR_Box hlds__goal_util__conv1_GoalInfo_38;

    mercury__list__length_2_p_0((MR_Word) &hlds__goal_util_scalar_common_1[0], hlds__goal_util__Args_19, &hlds__goal_util__Arity_25);
    hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(hlds__goal_util__ModuleInfo_22, hlds__goal_util__ModuleName_13, hlds__goal_util__ProcName_14, hlds__goal_util__PredOrFunc_15, hlds__goal_util__Arity_25, hlds__goal_util__ModeNo_16, &hlds__goal_util__PredId_26, &hlds__goal_util__ProcId_27);
    hlds__goal_util__InvalidPredId_28 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    hlds__goal_util__BuiltinState_29 = hlds__hlds_pred__builtin_state_4_f_0(hlds__goal_util__ModuleInfo_22, hlds__goal_util__InvalidPredId_28, hlds__goal_util__PredId_26, hlds__goal_util__ProcId_27);
    {
      hlds__goal_util__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Var_40, 0) = ((MR_Box) (hlds__goal_util__ModuleName_13));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Var_40, 1) = ((MR_Box) (hlds__goal_util__ProcName_14));
    }
    {
      hlds__goal_util__GoalExpr_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_30, 0) = ((MR_Box) (hlds__goal_util__PredId_26));
      MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_30, 1) = ((MR_Box) (hlds__goal_util__ProcId_27));
      MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_30, 2) = ((MR_Box) (hlds__goal_util__Args_19));
      MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_30, 3) = ((MR_Box) (hlds__goal_util__BuiltinState_29));
      MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_30, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_30, 5) = ((MR_Box) (hlds__goal_util__Var_40));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Args_19, &hlds__goal_util__NonLocals_31);
    parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_util__Detism_17, &hlds__goal_util___CanFail_32, &hlds__goal_util__NumSolns_33);
    switch (hlds__goal_util__NumSolns_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        hlds__goal_util__InstMapDelta_34 = hlds__goal_util__InstMapDelta0_21;
        break;
      case (MR_Integer) 0:
        hlds__instmap__instmap_delta_init_unreachable_1_p_0(&hlds__goal_util__InstMapDelta_34);
        break;
    }
    hlds__hlds_module__module_info_pred_info_3_p_0(hlds__goal_util__ModuleInfo_22, hlds__goal_util__PredId_26, &hlds__goal_util__PredInfo_35);
    hlds__hlds_pred__pred_info_get_purity_2_p_0(hlds__goal_util__PredInfo_35, &hlds__goal_util__PredPurity_36);
    {
      hlds__goal_util__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_41, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_41, 1) = ((MR_Box) (hlds__goal_util__generate_simple_call_12_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_41, 3) = ((MR_Box) (hlds__goal_util__Purity_18));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_41, 4) = ((MR_Box) (hlds__goal_util__PredPurity_36));
    }
    mercury__require__expect_3_p_0(hlds__goal_util__Var_41, (MR_String) "hlds.goal_util", (MR_String) "generate_simple_call: purity disagreement");
    hlds__hlds_goal__goal_info_init_6_p_0(hlds__goal_util__NonLocals_31, hlds__goal_util__InstMapDelta_34, hlds__goal_util__Detism_17, hlds__goal_util__Purity_18, hlds__goal_util__Context_23, &hlds__goal_util__GoalInfo0_37);
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_3[13], hlds__goal_util__Features_20, ((MR_Box) (hlds__goal_util__GoalInfo0_37)), &hlds__goal_util__conv1_GoalInfo_38);
    hlds__goal_util__GoalInfo_38 = ((MR_Word) hlds__goal_util__conv1_GoalInfo_38);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__goal_util__Goal_24 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_30));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_38));
    }
  }
}

void MR_CALL 
hlds__goal_util__can_reorder_goals_9_p_0(
  MR_Word hlds__goal_util__VarTypes_10,
  MR_Word hlds__goal_util__FullyStrict_11,
  MR_Word hlds__goal_util__InstmapBeforeEarlierGoal_12,
  MR_Word hlds__goal_util__EarlierGoal_13,
  MR_Word hlds__goal_util__InstmapBeforeLaterGoal_14,
  MR_Word hlds__goal_util__LaterGoal_15,
  MR_Word * hlds__goal_util__CanReorder_16,
  MR_Word hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * hlds__goal_util__STATE_VARIABLE_ModuleInfo_28)
{
  {
    MR_bool hlds__goal_util__succeeded;
    MR_Word hlds__goal_util__EarlierGoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_13, (MR_Integer) 1)));
    MR_Word hlds__goal_util__LaterGoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_15, (MR_Integer) 1)));
    MR_Word hlds__goal_util__EarlierPurity_22;
    MR_Word hlds__goal_util__EarlierTrace_23;
    MR_Word hlds__goal_util__LaterPurity_24;
    MR_Word hlds__goal_util__LaterTrace_25;
    MR_Word hlds__goal_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_13, (MR_Integer) 0)));
    MR_Word hlds__goal_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_15, (MR_Integer) 0)));

    hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(hlds__goal_util__EarlierGoalInfo_19, &hlds__goal_util__EarlierPurity_22, &hlds__goal_util__EarlierTrace_23);
    hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(hlds__goal_util__LaterGoalInfo_21, &hlds__goal_util__LaterPurity_24, &hlds__goal_util__LaterTrace_25);
    hlds__goal_util__succeeded = (hlds__goal_util__EarlierPurity_22 == (MR_Integer) 2);
    if (!(hlds__goal_util__succeeded))
    {
      hlds__goal_util__succeeded = (hlds__goal_util__LaterPurity_24 == (MR_Integer) 2);
      if (!(hlds__goal_util__succeeded))
      {
        hlds__goal_util__succeeded = (hlds__goal_util__EarlierTrace_23 == (MR_Integer) 0);
        if (!(hlds__goal_util__succeeded))
          hlds__goal_util__succeeded = (hlds__goal_util__LaterTrace_25 == (MR_Integer) 0);
      }
    }
    if (hlds__goal_util__succeeded)
    {
      *hlds__goal_util__CanReorder_16 = (MR_Integer) 0;
      *hlds__goal_util__STATE_VARIABLE_ModuleInfo_28 = hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_27;
    }
    else
    {
      MR_Word hlds__goal_util__MaintainsTermination_26;

      hlds__goal_util__reordering_maintains_termination_6_p_0(hlds__goal_util__FullyStrict_11, hlds__goal_util__EarlierGoal_13, hlds__goal_util__LaterGoal_15, &hlds__goal_util__MaintainsTermination_26, hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_27, hlds__goal_util__STATE_VARIABLE_ModuleInfo_28);
      switch (hlds__goal_util__MaintainsTermination_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *hlds__goal_util__CanReorder_16 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__goal_util__TypeCtorInfo_20_44;
            MR_Word hlds__goal_util__LaterGoalInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_15, (MR_Integer) 1)));
            MR_Word hlds__goal_util__EarlierGoalInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_13, (MR_Integer) 1)));
            MR_Word hlds__goal_util__EarlierInstMapDelta_39;
            MR_Word hlds__goal_util__InstMapAfterEarlierGoal_40;
            MR_Word hlds__goal_util__EarlierChangedVars_41;
            MR_Word hlds__goal_util__LaterGoalNonLocals_42;
            MR_Word hlds__goal_util__Intersection_43;
            MR_Word hlds__goal_util__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_15, (MR_Integer) 0)));
            MR_Word hlds__goal_util__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_13, (MR_Integer) 0)));

            hlds__goal_util__EarlierInstMapDelta_39 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__EarlierGoalInfo_38);
            hlds__instmap__apply_instmap_delta_3_p_0(hlds__goal_util__InstmapBeforeEarlierGoal_12, hlds__goal_util__EarlierInstMapDelta_39, &hlds__goal_util__InstMapAfterEarlierGoal_40);
            hlds__instmap__instmap_changed_vars_5_p_0(hlds__goal_util__InstmapBeforeEarlierGoal_12, hlds__goal_util__InstMapAfterEarlierGoal_40, hlds__goal_util__VarTypes_10, *hlds__goal_util__STATE_VARIABLE_ModuleInfo_28, &hlds__goal_util__EarlierChangedVars_41);
            hlds__goal_util__LaterGoalNonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__goal_util__LaterGoalInfo_36);
            hlds__goal_util__TypeCtorInfo_20_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            parse_tree__set_of_var__intersect_3_p_0(hlds__goal_util__TypeCtorInfo_20_44, hlds__goal_util__EarlierChangedVars_41, hlds__goal_util__LaterGoalNonLocals_42, &hlds__goal_util__Intersection_43);
            hlds__goal_util__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_util__TypeCtorInfo_20_44, hlds__goal_util__Intersection_43);
            hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
            if (hlds__goal_util__succeeded)
              *hlds__goal_util__CanReorder_16 = (MR_Integer) 0;
            else
            {
              MR_Word hlds__goal_util__TypeCtorInfo_20_59;
              MR_Word hlds__goal_util__LaterGoalInfo_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_13, (MR_Integer) 1)));
              MR_Word hlds__goal_util__EarlierGoalInfo_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_15, (MR_Integer) 1)));
              MR_Word hlds__goal_util__EarlierInstMapDelta_54;
              MR_Word hlds__goal_util__InstMapAfterEarlierGoal_55;
              MR_Word hlds__goal_util__EarlierChangedVars_56;
              MR_Word hlds__goal_util__LaterGoalNonLocals_57;
              MR_Word hlds__goal_util__Intersection_58;
              MR_Word hlds__goal_util__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_13, (MR_Integer) 0)));
              MR_Word hlds__goal_util__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_15, (MR_Integer) 0)));

              hlds__goal_util__EarlierInstMapDelta_54 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__EarlierGoalInfo_53);
              hlds__instmap__apply_instmap_delta_3_p_0(hlds__goal_util__InstmapBeforeLaterGoal_14, hlds__goal_util__EarlierInstMapDelta_54, &hlds__goal_util__InstMapAfterEarlierGoal_55);
              hlds__instmap__instmap_changed_vars_5_p_0(hlds__goal_util__InstmapBeforeLaterGoal_14, hlds__goal_util__InstMapAfterEarlierGoal_55, hlds__goal_util__VarTypes_10, *hlds__goal_util__STATE_VARIABLE_ModuleInfo_28, &hlds__goal_util__EarlierChangedVars_56);
              hlds__goal_util__LaterGoalNonLocals_57 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__goal_util__LaterGoalInfo_51);
              hlds__goal_util__TypeCtorInfo_20_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
              parse_tree__set_of_var__intersect_3_p_0(hlds__goal_util__TypeCtorInfo_20_59, hlds__goal_util__EarlierChangedVars_56, hlds__goal_util__LaterGoalNonLocals_57, &hlds__goal_util__Intersection_58);
              hlds__goal_util__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_util__TypeCtorInfo_20_59, hlds__goal_util__Intersection_58);
              hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
              if (hlds__goal_util__succeeded)
                *hlds__goal_util__CanReorder_16 = (MR_Integer) 0;
              else
                *hlds__goal_util__CanReorder_16 = (MR_Integer) 1;
            }
          }
          break;
      }
    }
  }
}

void MR_CALL 
hlds__goal_util__reordering_maintains_termination_6_p_0(
  MR_Word hlds__goal_util__FullyStrict_7,
  MR_Word hlds__goal_util__EarlierGoal_8,
  MR_Word hlds__goal_util__LaterGoal_9,
  MR_Word * hlds__goal_util__MaintainsTermination_10,
  MR_Word hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * hlds__goal_util__STATE_VARIABLE_ModuleInfo_25)
{
  {
    MR_bool hlds__goal_util__succeeded;
    MR_Word hlds__goal_util__EarlierGoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_8, (MR_Integer) 1)));
    MR_Word hlds__goal_util__LaterGoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_9, (MR_Integer) 1)));
    MR_Word hlds__goal_util__EarlierDetism_16;
    MR_Word hlds__goal_util__EarlierCanFail_17;
    MR_Word hlds__goal_util__LaterDetism_19;
    MR_Word hlds__goal_util__LaterCanFail_20;
    MR_Word hlds__goal_util__EarlierCanLoopOrThrow_22;
    MR_Word hlds__goal_util__STATE_VARIABLE_ModuleInfo_26_26;
    MR_Word hlds__goal_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_8, (MR_Integer) 0)));
    MR_Word hlds__goal_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_9, (MR_Integer) 0)));
    MR_Word hlds__goal_util__Var_18;
    MR_Word hlds__goal_util__Var_21;

    hlds__goal_util__EarlierDetism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_util__EarlierGoalInfo_13);
    parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_util__EarlierDetism_16, &hlds__goal_util__EarlierCanFail_17, &hlds__goal_util__Var_18);
    hlds__goal_util__LaterDetism_19 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_util__LaterGoalInfo_15);
    parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_util__LaterDetism_19, &hlds__goal_util__LaterCanFail_20, &hlds__goal_util__Var_21);
    hlds__goal_form__goal_can_loop_or_throw_4_p_0(hlds__goal_util__EarlierGoal_8, &hlds__goal_util__EarlierCanLoopOrThrow_22, hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_24, &hlds__goal_util__STATE_VARIABLE_ModuleInfo_26_26);
    hlds__goal_util__succeeded = (hlds__goal_util__FullyStrict_7 == (MR_Integer) 1);
    if (hlds__goal_util__succeeded)
    {
      hlds__goal_util__succeeded = (hlds__goal_util__EarlierCanLoopOrThrow_22 == (MR_Integer) 0);
      if (hlds__goal_util__succeeded)
        hlds__goal_util__succeeded = (hlds__goal_util__LaterCanFail_20 == (MR_Integer) 0);
    }
    if (hlds__goal_util__succeeded)
    {
      *hlds__goal_util__MaintainsTermination_10 = (MR_Integer) 0;
      *hlds__goal_util__STATE_VARIABLE_ModuleInfo_25 = hlds__goal_util__STATE_VARIABLE_ModuleInfo_26_26;
    }
    else
    {
      MR_Word hlds__goal_util__LaterCanLoopOrThrow_23;

      hlds__goal_form__goal_can_loop_or_throw_4_p_0(hlds__goal_util__LaterGoal_9, &hlds__goal_util__LaterCanLoopOrThrow_23, hlds__goal_util__STATE_VARIABLE_ModuleInfo_26_26, hlds__goal_util__STATE_VARIABLE_ModuleInfo_25);
      hlds__goal_util__succeeded = (hlds__goal_util__EarlierCanFail_17 == (MR_Integer) 0);
      if (hlds__goal_util__succeeded)
        hlds__goal_util__succeeded = (hlds__goal_util__LaterCanLoopOrThrow_23 == (MR_Integer) 0);
      if (hlds__goal_util__succeeded)
        *hlds__goal_util__MaintainsTermination_10 = (MR_Integer) 0;
      else
        *hlds__goal_util__MaintainsTermination_10 = (MR_Integer) 1;
    }
  }
}

MR_bool MR_CALL 
hlds__goal_util__can_reorder_goals_old_7_p_0(
  MR_Word hlds__goal_util__ModuleInfo_8,
  MR_Word hlds__goal_util__VarTypes_9,
  MR_Word hlds__goal_util__FullyStrict_10,
  MR_Word hlds__goal_util__InstmapBeforeEarlierGoal_11,
  MR_Word hlds__goal_util__EarlierGoal_12,
  MR_Word hlds__goal_util__InstmapBeforeLaterGoal_13,
  MR_Word hlds__goal_util__LaterGoal_14)
{
  {
    MR_bool hlds__goal_util__succeeded;
    MR_Word hlds__goal_util__EarlierGoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_12, (MR_Integer) 1)));
    MR_Word hlds__goal_util__LaterGoalInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_14, (MR_Integer) 1)));
    MR_Word hlds__goal_util__EarlierPurity_19;
    MR_Word hlds__goal_util__EarlierTrace_20;
    MR_Word hlds__goal_util__LaterPurity_21;
    MR_Word hlds__goal_util__LaterTrace_22;
    MR_Word hlds__goal_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_12, (MR_Integer) 0)));
    MR_Word hlds__goal_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_14, (MR_Integer) 0)));
    MR_Word hlds__goal_util__TypeCtorInfo_20_37;
    MR_Word hlds__goal_util__LaterGoalInfo_29;
    MR_Word hlds__goal_util__EarlierGoalInfo_31;
    MR_Word hlds__goal_util__EarlierInstMapDelta_32;
    MR_Word hlds__goal_util__InstMapAfterEarlierGoal_33;
    MR_Word hlds__goal_util__EarlierChangedVars_34;
    MR_Word hlds__goal_util__LaterGoalNonLocals_35;
    MR_Word hlds__goal_util__Intersection_36;
    MR_Word hlds__goal_util__Var_28;
    MR_Word hlds__goal_util__Var_30;
    MR_Word hlds__goal_util__TypeCtorInfo_20_52;
    MR_Word hlds__goal_util__LaterGoalInfo_44;
    MR_Word hlds__goal_util__EarlierGoalInfo_46;
    MR_Word hlds__goal_util__EarlierInstMapDelta_47;
    MR_Word hlds__goal_util__InstMapAfterEarlierGoal_48;
    MR_Word hlds__goal_util__EarlierChangedVars_49;
    MR_Word hlds__goal_util__LaterGoalNonLocals_50;
    MR_Word hlds__goal_util__Intersection_51;
    MR_Word hlds__goal_util__Var_43;
    MR_Word hlds__goal_util__Var_45;

    hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(hlds__goal_util__EarlierGoalInfo_16, &hlds__goal_util__EarlierPurity_19, &hlds__goal_util__EarlierTrace_20);
    hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(hlds__goal_util__LaterGoalInfo_18, &hlds__goal_util__LaterPurity_21, &hlds__goal_util__LaterTrace_22);
    hlds__goal_util__succeeded = (hlds__goal_util__LaterPurity_21 == (MR_Integer) 2);
    hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
    if (hlds__goal_util__succeeded)
    {
      hlds__goal_util__succeeded = (hlds__goal_util__LaterTrace_22 == (MR_Integer) 1);
      if (hlds__goal_util__succeeded)
      {
        hlds__goal_util__succeeded = (hlds__goal_util__EarlierPurity_19 == (MR_Integer) 2);
        hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
        if (hlds__goal_util__succeeded)
        {
          hlds__goal_util__succeeded = (hlds__goal_util__EarlierTrace_20 == (MR_Integer) 1);
          if (hlds__goal_util__succeeded)
          {
            hlds__goal_util__succeeded = hlds__goal_util__reordering_maintains_termination_old_4_p_0(hlds__goal_util__ModuleInfo_8, hlds__goal_util__FullyStrict_10, hlds__goal_util__EarlierGoal_12, hlds__goal_util__LaterGoal_14);
            if (hlds__goal_util__succeeded)
            {
              hlds__goal_util__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_14, (MR_Integer) 0)));
              hlds__goal_util__LaterGoalInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_14, (MR_Integer) 1)));
              hlds__goal_util__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_12, (MR_Integer) 0)));
              hlds__goal_util__EarlierGoalInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_12, (MR_Integer) 1)));
              hlds__goal_util__EarlierInstMapDelta_32 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__EarlierGoalInfo_31);
              hlds__instmap__apply_instmap_delta_3_p_0(hlds__goal_util__InstmapBeforeEarlierGoal_11, hlds__goal_util__EarlierInstMapDelta_32, &hlds__goal_util__InstMapAfterEarlierGoal_33);
              hlds__instmap__instmap_changed_vars_5_p_0(hlds__goal_util__InstmapBeforeEarlierGoal_11, hlds__goal_util__InstMapAfterEarlierGoal_33, hlds__goal_util__VarTypes_9, hlds__goal_util__ModuleInfo_8, &hlds__goal_util__EarlierChangedVars_34);
              hlds__goal_util__LaterGoalNonLocals_35 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__goal_util__LaterGoalInfo_29);
              hlds__goal_util__TypeCtorInfo_20_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
              parse_tree__set_of_var__intersect_3_p_0(hlds__goal_util__TypeCtorInfo_20_37, hlds__goal_util__EarlierChangedVars_34, hlds__goal_util__LaterGoalNonLocals_35, &hlds__goal_util__Intersection_36);
              hlds__goal_util__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_util__TypeCtorInfo_20_37, hlds__goal_util__Intersection_36);
              hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
              hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
              if (hlds__goal_util__succeeded)
              {
                hlds__goal_util__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_12, (MR_Integer) 0)));
                hlds__goal_util__LaterGoalInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_12, (MR_Integer) 1)));
                hlds__goal_util__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_14, (MR_Integer) 0)));
                hlds__goal_util__EarlierGoalInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_14, (MR_Integer) 1)));
                hlds__goal_util__EarlierInstMapDelta_47 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__EarlierGoalInfo_46);
                hlds__instmap__apply_instmap_delta_3_p_0(hlds__goal_util__InstmapBeforeLaterGoal_13, hlds__goal_util__EarlierInstMapDelta_47, &hlds__goal_util__InstMapAfterEarlierGoal_48);
                hlds__instmap__instmap_changed_vars_5_p_0(hlds__goal_util__InstmapBeforeLaterGoal_13, hlds__goal_util__InstMapAfterEarlierGoal_48, hlds__goal_util__VarTypes_9, hlds__goal_util__ModuleInfo_8, &hlds__goal_util__EarlierChangedVars_49);
                hlds__goal_util__LaterGoalNonLocals_50 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__goal_util__LaterGoalInfo_44);
                hlds__goal_util__TypeCtorInfo_20_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                parse_tree__set_of_var__intersect_3_p_0(hlds__goal_util__TypeCtorInfo_20_52, hlds__goal_util__EarlierChangedVars_49, hlds__goal_util__LaterGoalNonLocals_50, &hlds__goal_util__Intersection_51);
                hlds__goal_util__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_util__TypeCtorInfo_20_52, hlds__goal_util__Intersection_51);
                hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
                hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
              }
            }
          }
        }
      }
    }
    return hlds__goal_util__succeeded;
  }
}

MR_bool MR_CALL 
hlds__goal_util__reordering_maintains_termination_old_4_p_0(
  MR_Word hlds__goal_util__ModuleInfo_5,
  MR_Word hlds__goal_util__FullyStrict_6,
  MR_Word hlds__goal_util__EarlierGoal_7,
  MR_Word hlds__goal_util__LaterGoal_8)
{
  {
    MR_bool hlds__goal_util__succeeded;
    MR_Word hlds__goal_util__EarlierGoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_7, (MR_Integer) 1)));
    MR_Word hlds__goal_util__LaterGoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_8, (MR_Integer) 1)));
    MR_Word hlds__goal_util__EarlierDetism_13;
    MR_Word hlds__goal_util__EarlierCanFail_14;
    MR_Word hlds__goal_util__LaterDetism_16;
    MR_Word hlds__goal_util__LaterCanFail_17;
    MR_Word hlds__goal_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__EarlierGoal_7, (MR_Integer) 0)));
    MR_Word hlds__goal_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__LaterGoal_8, (MR_Integer) 0)));
    MR_Word hlds__goal_util__Var_15;
    MR_Word hlds__goal_util__Var_18;

    hlds__goal_util__EarlierDetism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_util__EarlierGoalInfo_10);
    parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_util__EarlierDetism_13, &hlds__goal_util__EarlierCanFail_14, &hlds__goal_util__Var_15);
    hlds__goal_util__LaterDetism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_util__LaterGoalInfo_12);
    parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_util__LaterDetism_16, &hlds__goal_util__LaterCanFail_17, &hlds__goal_util__Var_18);
    hlds__goal_util__succeeded = (hlds__goal_util__FullyStrict_6 == (MR_Integer) 1);
    if (hlds__goal_util__succeeded)
    {
      hlds__goal_util__succeeded = hlds__goal_form__goal_cannot_loop_or_throw_1_p_0(hlds__goal_util__EarlierGoal_7);
      hlds__goal_util__succeeded = !(hlds__goal_util__succeeded);
    }
    if (hlds__goal_util__succeeded)
      hlds__goal_util__succeeded = (hlds__goal_util__LaterCanFail_17 == (MR_Integer) 1);
    else
      hlds__goal_util__succeeded = MR_TRUE;
    if (hlds__goal_util__succeeded)
      switch (hlds__goal_util__EarlierCanFail_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          hlds__goal_util__succeeded = hlds__goal_form__goal_cannot_loop_or_throw_2_p_0(hlds__goal_util__ModuleInfo_5, hlds__goal_util__LaterGoal_8);
          break;
        case (MR_Integer) 1:
          hlds__goal_util__succeeded = MR_TRUE;
          break;
      }
    return hlds__goal_util__succeeded;
  }
}

void MR_CALL 
hlds__goal_util__create_conj_4_p_0(
  MR_Word hlds__goal_util__GoalA_5,
  MR_Word hlds__goal_util__GoalB_6,
  MR_Word hlds__goal_util__Type_7,
  MR_Word * hlds__goal_util__ConjGoal_8)
{
  {
    MR_Word hlds__goal_util__Var_9;
    MR_Word hlds__goal_util__Var_10;

    {
      hlds__goal_util__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Var_10, 0) = ((MR_Box) (hlds__goal_util__GoalB_6));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__goal_util__Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Var_9, 0) = ((MR_Box) (hlds__goal_util__GoalA_5));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Var_9, 1) = ((MR_Box) (hlds__goal_util__Var_10));
    }
    hlds__goal_util__create_conj_from_list_3_p_0(hlds__goal_util__Var_9, hlds__goal_util__Type_7, hlds__goal_util__ConjGoal_8);
  }
}

void MR_CALL 
hlds__goal_util__create_conj_from_list_3_p_0(
  MR_Word hlds__goal_util__Conjuncts_4,
  MR_Word hlds__goal_util__ConjType_5,
  MR_Word * hlds__goal_util__ConjGoal_6)
{
  if ((hlds__goal_util__Conjuncts_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    {
      mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "predicate \140hlds.goal_util.create_conj_from_list\'/3", (MR_String) "empty conjunction");
      return;
    }
  }
  else
  {
    MR_Word hlds__goal_util__HeadGoal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Conjuncts_4, (MR_Integer) 0)));
    MR_Word hlds__goal_util__TailGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Conjuncts_4, (MR_Integer) 1)));

    if ((hlds__goal_util__TailGoals_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__goal_util__ConjGoal_6 = hlds__goal_util__HeadGoal_7;
    else
    {
      MR_Word hlds__goal_util__ConjGoalExpr_11;
      MR_Word hlds__goal_util__NonLocals_12;
      MR_Word hlds__goal_util__InstMapDelta_13;
      MR_Word hlds__goal_util__Detism_14;
      MR_Word hlds__goal_util__Purity_15;
      MR_Word hlds__goal_util__HeadGoalInfo_17;
      MR_Word hlds__goal_util__Context_18;
      MR_Word hlds__goal_util__ConjGoalInfo_19;
      MR_Word hlds__goal_util__Var_16;

      {
        hlds__goal_util__ConjGoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), hlds__goal_util__ConjGoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), hlds__goal_util__ConjGoalExpr_11, 1) = ((MR_Box) (hlds__goal_util__ConjType_5));
        MR_hl_field(MR_mktag(3), hlds__goal_util__ConjGoalExpr_11, 2) = ((MR_Box) (hlds__goal_util__Conjuncts_4));
      }
      hlds__hlds_goal__goal_list_nonlocals_2_p_0(hlds__goal_util__Conjuncts_4, &hlds__goal_util__NonLocals_12);
      hlds__hlds_goal__goal_list_instmap_delta_2_p_0(hlds__goal_util__Conjuncts_4, &hlds__goal_util__InstMapDelta_13);
      hlds__hlds_goal__goal_list_determinism_2_p_0(hlds__goal_util__Conjuncts_4, &hlds__goal_util__Detism_14);
      hlds__hlds_goal__goal_list_purity_2_p_0(hlds__goal_util__Conjuncts_4, &hlds__goal_util__Purity_15);
      hlds__goal_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadGoal_7, (MR_Integer) 0)));
      hlds__goal_util__HeadGoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadGoal_7, (MR_Integer) 1)));
      hlds__goal_util__Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__goal_util__HeadGoalInfo_17);
      hlds__hlds_goal__goal_info_init_6_p_0(hlds__goal_util__NonLocals_12, hlds__goal_util__InstMapDelta_13, hlds__goal_util__Detism_14, hlds__goal_util__Purity_15, hlds__goal_util__Context_18, &hlds__goal_util__ConjGoalInfo_19);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *hlds__goal_util__ConjGoal_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__ConjGoalExpr_11));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__ConjGoalInfo_19));
      }
    }
  }
}

static void MR_CALL 
hlds__goal_util__flatten_disj_2_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3)
{
  {
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv0_STATE_VARIABLE_FlatDisjuncts_9;

    hlds__goal_util__flatten_disj_acc_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_STATE_VARIABLE_FlatDisjuncts_9);
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_STATE_VARIABLE_FlatDisjuncts_9));
  }
}

void MR_CALL 
hlds__goal_util__flatten_disj_2_p_0(
  MR_Word hlds__goal_util__Disjuncts_3,
  MR_Word * hlds__goal_util__FlatDisjuncts_4)
{
  {
    MR_Box hlds__goal_util__conv1_FlatDisjuncts_4;

    mercury__list__foldr_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__goal_util_scalar_common_1[5], (MR_Word) &hlds__goal_util_scalar_common_3[12], hlds__goal_util__Disjuncts_3, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__goal_util__conv1_FlatDisjuncts_4);
    *hlds__goal_util__FlatDisjuncts_4 = ((MR_Word) hlds__goal_util__conv1_FlatDisjuncts_4);
  }
}

void MR_CALL 
hlds__goal_util__flatten_conj_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word * hlds__goal_util__HeadVar__2_2)
{
  {
    MR_bool hlds__goal_util__succeeded;

    if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__goal_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Goals0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__goal_util__FlatConjTail_6;
      MR_Word hlds__goal_util__SubGoals_7;
      MR_Word hlds__goal_util__Var_9;
      MR_Word hlds__goal_util__Var_10;
      MR_Word hlds__goal_util__Var_8;

      hlds__goal_util__flatten_conj_2_p_0(hlds__goal_util__Goals0_4, &hlds__goal_util__FlatConjTail_6);
      hlds__goal_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 0)));
      hlds__goal_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 1)));
      hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Var_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Var_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (hlds__goal_util__succeeded)
      {
        hlds__goal_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Var_9, (MR_Integer) 1)));
        hlds__goal_util__SubGoals_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Var_9, (MR_Integer) 2)));
        hlds__goal_util__succeeded = (hlds__goal_util__Var_10 == (MR_Integer) 0);
      }
      if (hlds__goal_util__succeeded)
      {
        *hlds__goal_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__goal_util__SubGoals_7, hlds__goal_util__FlatConjTail_6);
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__goal_util__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Goal_3));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_util__FlatConjTail_6));
        }
    }
  }
}

static void MR_CALL 
hlds__goal_util__switch_to_disjunction_10_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box * hlds__goal_util__wrapper_arg_2,
  MR_Box hlds__goal_util__wrapper_arg_3,
  MR_Box * hlds__goal_util__wrapper_arg_4,
  MR_Box hlds__goal_util__wrapper_arg_5,
  MR_Box * hlds__goal_util__wrapper_arg_6,
  MR_Box hlds__goal_util__wrapper_arg_7,
  MR_Box * hlds__goal_util__wrapper_arg_8)
{
  {
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv3_Disjunct_16;
    MR_Word hlds__goal_util__conv2_STATE_VARIABLE_VarSet_54;
    MR_Word hlds__goal_util__conv1_STATE_VARIABLE_VarTypes_56;
    MR_Word hlds__goal_util__conv0_STATE_VARIABLE_ModuleInfo_58;

    hlds__goal_util__case_to_disjunct_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 5))), ((MR_Word) hlds__goal_util__wrapper_arg_1), &hlds__goal_util__conv3_Disjunct_16, ((MR_Word) hlds__goal_util__wrapper_arg_3), &hlds__goal_util__conv2_STATE_VARIABLE_VarSet_54, ((MR_Word) hlds__goal_util__wrapper_arg_5), &hlds__goal_util__conv1_STATE_VARIABLE_VarTypes_56, ((MR_Word) hlds__goal_util__wrapper_arg_7), &hlds__goal_util__conv0_STATE_VARIABLE_ModuleInfo_58);
    *hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv3_Disjunct_16));
    *hlds__goal_util__wrapper_arg_4 = ((MR_Box) (hlds__goal_util__conv2_STATE_VARIABLE_VarSet_54));
    *hlds__goal_util__wrapper_arg_6 = ((MR_Box) (hlds__goal_util__conv1_STATE_VARIABLE_VarTypes_56));
    *hlds__goal_util__wrapper_arg_8 = ((MR_Box) (hlds__goal_util__conv0_STATE_VARIABLE_ModuleInfo_58));
  }
}

void MR_CALL 
hlds__goal_util__switch_to_disjunction_10_p_0(
  MR_Word hlds__goal_util__Var_1,
  MR_Word hlds__goal_util__HeadVar__2_2,
  MR_Word hlds__goal_util__InstMap_3,
  MR_Word * hlds__goal_util__HeadVar__4_4,
  MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0_5,
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarSet_6,
  MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0_7,
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarTypes_8,
  MR_Word hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * hlds__goal_util__STATE_VARIABLE_ModuleInfo_10)
{
  if ((hlds__goal_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *hlds__goal_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *hlds__goal_util__STATE_VARIABLE_ModuleInfo_10 = hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_9;
    *hlds__goal_util__STATE_VARIABLE_VarTypes_8 = hlds__goal_util__STATE_VARIABLE_VarTypes_0_7;
    *hlds__goal_util__STATE_VARIABLE_VarSet_6 = hlds__goal_util__STATE_VARIABLE_VarSet_0_5;
  }
  else
  {
    MR_Word hlds__goal_util__TypeCtorInfo_62_62;
    MR_Word hlds__goal_util__Case_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word hlds__goal_util__Cases_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word hlds__goal_util__MainConsId_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_23, (MR_Integer) 0)));
    MR_Word hlds__goal_util__OtherConsIds_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_23, (MR_Integer) 1)));
    MR_Word hlds__goal_util__CaseGoal_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_23, (MR_Integer) 2)));
    MR_Word hlds__goal_util__MainDisjunctGoal_33;
    MR_Word hlds__goal_util__OtherDisjunctGoals_34;
    MR_Word hlds__goal_util__CasesGoals_35;
    MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_42_42;
    MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_43_43;
    MR_Word hlds__goal_util__STATE_VARIABLE_ModuleInfo_44_44;
    MR_Word hlds__goal_util__Var_45;
    MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_46_46;
    MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_47_47;
    MR_Word hlds__goal_util__STATE_VARIABLE_ModuleInfo_48_48;
    MR_Word hlds__goal_util__Var_52;
    MR_Box hlds__goal_util__conv6_STATE_VARIABLE_VarSet_46_46;
    MR_Box hlds__goal_util__conv5_STATE_VARIABLE_VarTypes_47_47;
    MR_Box hlds__goal_util__conv4_STATE_VARIABLE_ModuleInfo_48_48;

    hlds__goal_util__case_to_disjunct_11_p_0(hlds__goal_util__Var_1, hlds__goal_util__CaseGoal_32, hlds__goal_util__InstMap_3, hlds__goal_util__MainConsId_30, &hlds__goal_util__MainDisjunctGoal_33, hlds__goal_util__STATE_VARIABLE_VarSet_0_5, &hlds__goal_util__STATE_VARIABLE_VarSet_42_42, hlds__goal_util__STATE_VARIABLE_VarTypes_0_7, &hlds__goal_util__STATE_VARIABLE_VarTypes_43_43, hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_9, &hlds__goal_util__STATE_VARIABLE_ModuleInfo_44_44);
    {
      hlds__goal_util__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_45, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_45, 1) = ((MR_Box) (hlds__goal_util__switch_to_disjunction_10_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_45, 3) = ((MR_Box) (hlds__goal_util__Var_1));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_45, 4) = ((MR_Box) (hlds__goal_util__CaseGoal_32));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_45, 5) = ((MR_Box) (hlds__goal_util__InstMap_3));
    }
    hlds__goal_util__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    mercury__list__map_foldl3_9_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, hlds__goal_util__TypeCtorInfo_62_62, (MR_Word) &hlds__goal_util_scalar_common_1[4], (MR_Word) &hlds__goal_util_scalar_common_3[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, hlds__goal_util__Var_45, hlds__goal_util__OtherConsIds_31, &hlds__goal_util__OtherDisjunctGoals_34, ((MR_Box) (hlds__goal_util__STATE_VARIABLE_VarSet_42_42)), &hlds__goal_util__conv6_STATE_VARIABLE_VarSet_46_46, ((MR_Box) (hlds__goal_util__STATE_VARIABLE_VarTypes_43_43)), &hlds__goal_util__conv5_STATE_VARIABLE_VarTypes_47_47, ((MR_Box) (hlds__goal_util__STATE_VARIABLE_ModuleInfo_44_44)), &hlds__goal_util__conv4_STATE_VARIABLE_ModuleInfo_48_48);
    hlds__goal_util__STATE_VARIABLE_VarSet_46_46 = ((MR_Word) hlds__goal_util__conv6_STATE_VARIABLE_VarSet_46_46);
    hlds__goal_util__STATE_VARIABLE_VarTypes_47_47 = ((MR_Word) hlds__goal_util__conv5_STATE_VARIABLE_VarTypes_47_47);
    hlds__goal_util__STATE_VARIABLE_ModuleInfo_48_48 = ((MR_Word) hlds__goal_util__conv4_STATE_VARIABLE_ModuleInfo_48_48);
    hlds__goal_util__switch_to_disjunction_10_p_0(hlds__goal_util__Var_1, hlds__goal_util__Cases_24, hlds__goal_util__InstMap_3, &hlds__goal_util__CasesGoals_35, hlds__goal_util__STATE_VARIABLE_VarSet_46_46, hlds__goal_util__STATE_VARIABLE_VarSet_6, hlds__goal_util__STATE_VARIABLE_VarTypes_47_47, hlds__goal_util__STATE_VARIABLE_VarTypes_8, hlds__goal_util__STATE_VARIABLE_ModuleInfo_48_48, hlds__goal_util__STATE_VARIABLE_ModuleInfo_10);
    {
      hlds__goal_util__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Var_52, 0) = ((MR_Box) (hlds__goal_util__MainDisjunctGoal_33));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Var_52, 1) = ((MR_Box) (hlds__goal_util__OtherDisjunctGoals_34));
    }
    *hlds__goal_util__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(hlds__goal_util__TypeCtorInfo_62_62, hlds__goal_util__Var_52, hlds__goal_util__CasesGoals_35);
  }
}

static void MR_CALL 
hlds__goal_util__case_to_disjunct_11_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box * hlds__goal_util__wrapper_arg_2)
{
  {
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv0_LambdaHeadVar__2_65;

    hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1655__1_2_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), &hlds__goal_util__conv0_LambdaHeadVar__2_65);
    *hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv0_LambdaHeadVar__2_65));
  }
}

void MR_CALL 
hlds__goal_util__case_to_disjunct_11_p_0(
  MR_Word hlds__goal_util__Var_12,
  MR_Word hlds__goal_util__CaseGoal_13,
  MR_Word hlds__goal_util__InstMap_14,
  MR_Word hlds__goal_util__ConsId_15,
  MR_Word * hlds__goal_util__Disjunct_16,
  MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0_53,
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarSet_54,
  MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0_55,
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarTypes_56,
  MR_Word hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_57,
  MR_Word * hlds__goal_util__STATE_VARIABLE_ModuleInfo_58)
{
  {
    MR_bool hlds__goal_util__succeeded;
    MR_Word hlds__goal_util__TypeCtorInfo_89_89;
    MR_Integer hlds__goal_util__ConsArity_20;
    MR_Word hlds__goal_util__ArgVars_21;
    MR_Word hlds__goal_util__VarType_22;
    MR_Word hlds__goal_util__ArgTypes_23;
    MR_Word hlds__goal_util__Inst0_24;
    MR_Word hlds__goal_util__ArgInsts_27;
    MR_Word hlds__goal_util__UniModes_31;
    MR_Word hlds__goal_util__UnifyMode_32;
    MR_Word hlds__goal_util__Unification_34;
    MR_Word hlds__goal_util__RHS_35;
    MR_Word hlds__goal_util__ExtraGoalExpr_36;
    MR_Word hlds__goal_util__NonLocals_37;
    MR_Word hlds__goal_util__ExtraInstMapDelta0_38;
    MR_Word hlds__goal_util__ExtraInstMapDelta_39;
    MR_Word hlds__goal_util__ExtraGoalInfo_40;
    MR_Word hlds__goal_util__CaseGoalConj_41;
    MR_Word hlds__goal_util__GoalList_42;
    MR_Word hlds__goal_util__CaseGoalInfo_44;
    MR_Word hlds__goal_util__CaseNonLocals0_45;
    MR_Word hlds__goal_util__CaseNonLocals_46;
    MR_Word hlds__goal_util__CaseInstMapDelta_47;
    MR_Word hlds__goal_util__InstMapDelta_48;
    MR_Word hlds__goal_util__CaseDetism0_49;
    MR_Word hlds__goal_util__Detism_50;
    MR_Word hlds__goal_util__CasePurity_51;
    MR_Word hlds__goal_util__CombinedGoalInfo_52;
    MR_Word hlds__goal_util__Var_70;
    MR_Word hlds__goal_util__Var_82;
    MR_Word hlds__goal_util__Var_85;
    MR_Word hlds__goal_util__ArgInsts1_26;
    MR_Word hlds__goal_util__Inst1_25;
    MR_Word hlds__goal_util__Var_43;

    hlds__goal_util__ConsArity_20 = parse_tree__prog_util__cons_id_arity_1_f_0(hlds__goal_util__ConsId_15);
    hlds__goal_util__TypeCtorInfo_89_89 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    mercury__varset__new_vars_4_p_0(hlds__goal_util__TypeCtorInfo_89_89, hlds__goal_util__ConsArity_20, &hlds__goal_util__ArgVars_21, hlds__goal_util__STATE_VARIABLE_VarSet_0_53, hlds__goal_util__STATE_VARIABLE_VarSet_54);
    hlds__vartypes__lookup_var_type_3_p_0(hlds__goal_util__STATE_VARIABLE_VarTypes_0_55, hlds__goal_util__Var_12, &hlds__goal_util__VarType_22);
    check_hlds__type_util__get_cons_id_arg_types_4_p_0(hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_57, hlds__goal_util__VarType_22, hlds__goal_util__ConsId_15, &hlds__goal_util__ArgTypes_23);
    hlds__vartypes__vartypes_add_corresponding_lists_4_p_0(hlds__goal_util__ArgVars_21, hlds__goal_util__ArgTypes_23, hlds__goal_util__STATE_VARIABLE_VarTypes_0_55, hlds__goal_util__STATE_VARIABLE_VarTypes_56);
    hlds__instmap__instmap_lookup_var_3_p_0(hlds__goal_util__InstMap_14, hlds__goal_util__Var_12, &hlds__goal_util__Inst0_24);
    check_hlds__inst_util__inst_expand_3_p_0(hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_57, hlds__goal_util__Inst0_24, &hlds__goal_util__Inst1_25);
    hlds__goal_util__succeeded = parse_tree__prog_mode__get_arg_insts_4_p_0(hlds__goal_util__Inst1_25, hlds__goal_util__ConsId_15, hlds__goal_util__ConsArity_20, &hlds__goal_util__ArgInsts1_26);
    if (hlds__goal_util__succeeded)
      hlds__goal_util__ArgInsts_27 = hlds__goal_util__ArgInsts1_26;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "predicate \140hlds.goal_util.case_to_disjunct\'/11", (MR_String) "get_arg_insts failed");
        return;
      }
    }
    mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0, (MR_Word) &hlds__goal_util_scalar_common_3[11], hlds__goal_util__ArgInsts_27, &hlds__goal_util__UniModes_31);
    {
      hlds__goal_util__Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_70, 0) = ((MR_Box) (hlds__goal_util__Inst0_24));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_70, 1) = ((MR_Box) (hlds__goal_util__Inst0_24));
    }
    {
      hlds__goal_util__UnifyMode_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__goal_util__UnifyMode_32, 0) = ((MR_Box) (hlds__goal_util__Var_70));
      MR_hl_field(MR_mktag(0), hlds__goal_util__UnifyMode_32, 1) = ((MR_Box) (hlds__goal_util__Var_70));
    }
    {
      hlds__goal_util__Unification_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Unification_34, 0) = ((MR_Box) (hlds__goal_util__Var_12));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Unification_34, 1) = ((MR_Box) (hlds__goal_util__ConsId_15));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Unification_34, 2) = ((MR_Box) (hlds__goal_util__ArgVars_21));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Unification_34, 3) = ((MR_Box) (hlds__goal_util__UniModes_31));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Unification_34, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), hlds__goal_util__Unification_34, 5) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      hlds__goal_util__RHS_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_util__RHS_35, 0) = ((MR_Box) (hlds__goal_util__ConsId_15));
      MR_hl_field(MR_mktag(1), hlds__goal_util__RHS_35, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), hlds__goal_util__RHS_35, 2) = ((MR_Box) (hlds__goal_util__ArgVars_21));
    }
    {
      hlds__goal_util__ExtraGoalExpr_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_util__ExtraGoalExpr_36, 0) = ((MR_Box) (hlds__goal_util__Var_12));
      MR_hl_field(MR_mktag(1), hlds__goal_util__ExtraGoalExpr_36, 1) = ((MR_Box) (hlds__goal_util__RHS_35));
      MR_hl_field(MR_mktag(1), hlds__goal_util__ExtraGoalExpr_36, 2) = ((MR_Box) (hlds__goal_util__UnifyMode_32));
      MR_hl_field(MR_mktag(1), hlds__goal_util__ExtraGoalExpr_36, 3) = ((MR_Box) (hlds__goal_util__Unification_34));
      MR_hl_field(MR_mktag(1), hlds__goal_util__ExtraGoalExpr_36, 4) = ((MR_Box) (&hlds__goal_util_scalar_common_1[6]));
    }
    hlds__goal_util__NonLocals_37 = parse_tree__set_of_var__make_singleton_1_f_0(hlds__goal_util__TypeCtorInfo_89_89, hlds__goal_util__Var_12);
    hlds__instmap__instmap_delta_init_reachable_1_p_0(&hlds__goal_util__ExtraInstMapDelta0_38);
    hlds__instmap__instmap_delta_bind_var_to_functor_8_p_0(hlds__goal_util__Var_12, hlds__goal_util__VarType_22, hlds__goal_util__ConsId_15, hlds__goal_util__InstMap_14, hlds__goal_util__ExtraInstMapDelta0_38, &hlds__goal_util__ExtraInstMapDelta_39, hlds__goal_util__STATE_VARIABLE_ModuleInfo_0_57, hlds__goal_util__STATE_VARIABLE_ModuleInfo_58);
    hlds__hlds_goal__goal_info_init_5_p_0(hlds__goal_util__NonLocals_37, hlds__goal_util__ExtraInstMapDelta_39, (MR_Integer) 1, (MR_Integer) 0, &hlds__goal_util__ExtraGoalInfo_40);
    hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__goal_util__CaseGoal_13, &hlds__goal_util__CaseGoalConj_41);
    {
      hlds__goal_util__Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_82, 0) = ((MR_Box) (hlds__goal_util__ExtraGoalExpr_36));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_82, 1) = ((MR_Box) (hlds__goal_util__ExtraGoalInfo_40));
    }
    {
      hlds__goal_util__GoalList_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_util__GoalList_42, 0) = ((MR_Box) (hlds__goal_util__Var_82));
      MR_hl_field(MR_mktag(1), hlds__goal_util__GoalList_42, 1) = ((MR_Box) (hlds__goal_util__CaseGoalConj_41));
    }
    hlds__goal_util__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__CaseGoal_13, (MR_Integer) 0)));
    hlds__goal_util__CaseGoalInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__CaseGoal_13, (MR_Integer) 1)));
    hlds__goal_util__CaseNonLocals0_45 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__goal_util__CaseGoalInfo_44);
    parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_89_89, hlds__goal_util__Var_12, hlds__goal_util__CaseNonLocals0_45, &hlds__goal_util__CaseNonLocals_46);
    hlds__goal_util__CaseInstMapDelta_47 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__CaseGoalInfo_44);
    hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(hlds__goal_util__ExtraInstMapDelta_39, hlds__goal_util__CaseInstMapDelta_47, (MR_Integer) 2, &hlds__goal_util__InstMapDelta_48);
    hlds__goal_util__CaseDetism0_49 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_util__CaseGoalInfo_44);
    parse_tree__prog_detism__det_conjunction_detism_3_p_0((MR_Integer) 1, hlds__goal_util__CaseDetism0_49, &hlds__goal_util__Detism_50);
    hlds__goal_util__CasePurity_51 = hlds__hlds_goal__goal_info_get_purity_1_f_0(hlds__goal_util__CaseGoalInfo_44);
    hlds__hlds_goal__goal_info_init_5_p_0(hlds__goal_util__CaseNonLocals_46, hlds__goal_util__InstMapDelta_48, hlds__goal_util__Detism_50, hlds__goal_util__CasePurity_51, &hlds__goal_util__CombinedGoalInfo_52);
    {
      hlds__goal_util__Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__goal_util__Var_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), hlds__goal_util__Var_85, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), hlds__goal_util__Var_85, 2) = ((MR_Box) (hlds__goal_util__GoalList_42));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__goal_util__Disjunct_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__Var_85));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__CombinedGoalInfo_52));
    }
  }
}

void MR_CALL 
hlds__goal_util__goal_is_atomic_2_p_0(
  MR_Word hlds__goal_util__Goal_3,
  MR_Word * hlds__goal_util__GoalIsAtomic_4)
{
  {
    MR_Word hlds__goal_util__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 0)));
    MR_Word hlds__goal_util__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *hlds__goal_util__GoalIsAtomic_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *hlds__goal_util__GoalIsAtomic_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *hlds__goal_util__GoalIsAtomic_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
            *hlds__goal_util__GoalIsAtomic_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "predicate \140hlds.goal_util.goal_is_atomic\'/2", (MR_String) "shorthand");
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
hlds__goal_util__pred_proc_ids_from_goal_2_p_0_1(
  void * hlds__goal_util__env_ptr_arg)
{
  {
    struct hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0_s *) hlds__goal_util__env_ptr_arg;

    *((hlds__goal_util__env_ptr)->hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((hlds__goal_util__env_ptr)->hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__conv0_PredProcId_5));
    ((hlds__goal_util__env_ptr)->hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box * hlds__goal_util__wrapper_arg_1,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr)
{
  {
    struct hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0_s hlds__goal_util__env;

    (hlds__goal_util__env).hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__wrapper_arg_1 = hlds__goal_util__wrapper_arg_1;
    (hlds__goal_util__env).hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__cont = hlds__goal_util__cont;
    (hlds__goal_util__env).hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
    {
      MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;

      hlds__goal_util__goal_calls_2_p_1(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), &(hlds__goal_util__env).hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__conv0_PredProcId_5, hlds__goal_util__pred_proc_ids_from_goal_2_p_0_1, &hlds__goal_util__env);
    }
  }
}

void MR_CALL 
hlds__goal_util__pred_proc_ids_from_goal_2_p_0(
  MR_Word hlds__goal_util__Goal_3,
  MR_Word * hlds__goal_util__PredProcIds_4)
{
  {
    MR_Word hlds__goal_util__P_5;

    {
      hlds__goal_util__P_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 1) = ((MR_Box) (hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2));
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 3) = ((MR_Box) (hlds__goal_util__Goal_3));
    }
    mercury__solutions__solutions_2_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, hlds__goal_util__P_5, hlds__goal_util__PredProcIds_4);
  }
}

static void MR_CALL 
hlds__goal_util__predids_from_goals_2_p_0_1(
  void * hlds__goal_util__env_ptr_arg)
{
  {
    struct hlds__goal_util__predids_from_goals_2_p_0_2_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__predids_from_goals_2_p_0_2_env_0_s *) hlds__goal_util__env_ptr_arg;

    *((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goals_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goals_2_p_0_2_env_0__conv0_PredId_5));
    ((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goals_2_p_0_2_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goals_2_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__goal_util__predids_from_goals_2_p_0_2(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box * hlds__goal_util__wrapper_arg_1,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr)
{
  {
    struct hlds__goal_util__predids_from_goals_2_p_0_2_env_0_s hlds__goal_util__env;

    (hlds__goal_util__env).hlds__goal_util__predids_from_goals_2_p_0_2_env_0__wrapper_arg_1 = hlds__goal_util__wrapper_arg_1;
    (hlds__goal_util__env).hlds__goal_util__predids_from_goals_2_p_0_2_env_0__cont = hlds__goal_util__cont;
    (hlds__goal_util__env).hlds__goal_util__predids_from_goals_2_p_0_2_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
    {
      MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;

      hlds__goal_util__goal_calls_pred_id_2_p_1(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), &(hlds__goal_util__env).hlds__goal_util__predids_from_goals_2_p_0_2_env_0__conv0_PredId_5, hlds__goal_util__predids_from_goals_2_p_0_1, &hlds__goal_util__env);
    }
  }
}

void MR_CALL 
hlds__goal_util__predids_from_goals_2_p_0(
  MR_Word hlds__goal_util__Goals_3,
  MR_Word * hlds__goal_util__PredIds_4)
{
  if ((hlds__goal_util__Goals_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *hlds__goal_util__PredIds_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word hlds__goal_util__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Goals_3, (MR_Integer) 0)));
    MR_Word hlds__goal_util__Rest_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Goals_3, (MR_Integer) 1)));
    MR_Word hlds__goal_util__PredIds0_7;
    MR_Word hlds__goal_util__PredIds1_8;
    MR_Word hlds__goal_util__P_12;

    {
      hlds__goal_util__P_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_12, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_12, 1) = ((MR_Box) (hlds__goal_util__predids_from_goals_2_p_0_2));
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_12, 3) = ((MR_Box) (hlds__goal_util__Goal_5));
    }
    mercury__solutions__solutions_2_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__goal_util__P_12, &hlds__goal_util__PredIds0_7);
    hlds__goal_util__predids_from_goals_2_p_0(hlds__goal_util__Rest_6, &hlds__goal_util__PredIds1_8);
    *hlds__goal_util__PredIds_4 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__goal_util__PredIds0_7, hlds__goal_util__PredIds1_8);
  }
}

static void MR_CALL 
hlds__goal_util__predids_with_args_from_goal_2_p_0_1(
  void * hlds__goal_util__env_ptr_arg)
{
  {
    struct hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0_s *) hlds__goal_util__env_ptr_arg;

    *((hlds__goal_util__env_ptr)->hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((hlds__goal_util__env_ptr)->hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__conv0_LambdaHeadVar__1_14));
    ((hlds__goal_util__env_ptr)->hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__goal_util__predids_with_args_from_goal_2_p_0_2(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box * hlds__goal_util__wrapper_arg_1,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr)
{
  {
    struct hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0_s hlds__goal_util__env;

    (hlds__goal_util__env).hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__wrapper_arg_1 = hlds__goal_util__wrapper_arg_1;
    (hlds__goal_util__env).hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__cont = hlds__goal_util__cont;
    (hlds__goal_util__env).hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
    {
      MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;

      hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), &(hlds__goal_util__env).hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__conv0_LambdaHeadVar__1_14, hlds__goal_util__predids_with_args_from_goal_2_p_0_1, &hlds__goal_util__env);
    }
  }
}

void MR_CALL 
hlds__goal_util__predids_with_args_from_goal_2_p_0(
  MR_Word hlds__goal_util__Goal_3,
  MR_Word * hlds__goal_util__List_4)
{
  {
    MR_Word hlds__goal_util__Var_13;

    {
      hlds__goal_util__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_13, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_13, 1) = ((MR_Box) (hlds__goal_util__predids_with_args_from_goal_2_p_0_2));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_13, 3) = ((MR_Box) (hlds__goal_util__Goal_3));
    }
    mercury__solutions__solutions_2_p_1((MR_Word) &hlds__goal_util_scalar_common_2[0], hlds__goal_util__Var_13, hlds__goal_util__List_4);
  }
}

static void MR_CALL 
hlds__goal_util__predids_from_goal_2_p_0_1(
  void * hlds__goal_util__env_ptr_arg)
{
  {
    struct hlds__goal_util__predids_from_goal_2_p_0_2_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__predids_from_goal_2_p_0_2_env_0_s *) hlds__goal_util__env_ptr_arg;

    *((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goal_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goal_2_p_0_2_env_0__conv0_PredId_5));
    ((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goal_2_p_0_2_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__predids_from_goal_2_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__goal_util__predids_from_goal_2_p_0_2(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box * hlds__goal_util__wrapper_arg_1,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr)
{
  {
    struct hlds__goal_util__predids_from_goal_2_p_0_2_env_0_s hlds__goal_util__env;

    (hlds__goal_util__env).hlds__goal_util__predids_from_goal_2_p_0_2_env_0__wrapper_arg_1 = hlds__goal_util__wrapper_arg_1;
    (hlds__goal_util__env).hlds__goal_util__predids_from_goal_2_p_0_2_env_0__cont = hlds__goal_util__cont;
    (hlds__goal_util__env).hlds__goal_util__predids_from_goal_2_p_0_2_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
    {
      MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;

      hlds__goal_util__goal_calls_pred_id_2_p_1(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), &(hlds__goal_util__env).hlds__goal_util__predids_from_goal_2_p_0_2_env_0__conv0_PredId_5, hlds__goal_util__predids_from_goal_2_p_0_1, &hlds__goal_util__env);
    }
  }
}

void MR_CALL 
hlds__goal_util__predids_from_goal_2_p_0(
  MR_Word hlds__goal_util__Goal_3,
  MR_Word * hlds__goal_util__PredIds_4)
{
  {
    MR_Word hlds__goal_util__P_5;

    {
      hlds__goal_util__P_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 1) = ((MR_Box) (hlds__goal_util__predids_from_goal_2_p_0_2));
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__goal_util__P_5, 3) = ((MR_Box) (hlds__goal_util__Goal_3));
    }
    mercury__solutions__solutions_2_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__goal_util__P_5, hlds__goal_util__PredIds_4);
  }
}

static void MR_CALL 
hlds__goal_util__goal_contains_goal_2_p_0_1(
  void * hlds__goal_util__env_ptr_arg)
{
  {
    struct hlds__goal_util__goal_contains_goal_2_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__goal_contains_goal_2_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

    hlds__goal_util__goal_contains_goal_2_p_0((hlds__goal_util__env_ptr)->hlds__goal_util__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7, (hlds__goal_util__env_ptr)->hlds__goal_util__goal_contains_goal_2_p_0_env_0__HeadVar__2_2, (hlds__goal_util__env_ptr)->hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont, (hlds__goal_util__env_ptr)->hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont_env_ptr);
  }
}

void MR_CALL 
hlds__goal_util__goal_contains_goal_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word * hlds__goal_util__HeadVar__2_2,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr)
{
  {
    struct hlds__goal_util__goal_contains_goal_2_p_0_env_0_s hlds__goal_util__env;

    (hlds__goal_util__env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__HeadVar__2_2 = hlds__goal_util__HeadVar__2_2;
    (hlds__goal_util__env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont = hlds__goal_util__cont;
    (hlds__goal_util__env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
    *((hlds__goal_util__env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__HeadVar__2_2) = hlds__goal_util__HeadVar__1_1;
    ((hlds__goal_util__env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont)((hlds__goal_util__env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont_env_ptr);
    {
      MR_Word hlds__goal_util__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

      hlds__goal_util__direct_subgoal_2_p_0(hlds__goal_util__GoalExpr_4, &(hlds__goal_util__env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7, hlds__goal_util__goal_contains_goal_2_p_0_1, &hlds__goal_util__env);
    }
  }
}

static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_1(
  void * hlds__goal_util__env_ptr_arg)
{
  {
    struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

    *((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = ((MR_Word) (hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__conv0_Goal_2);
    ((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_2(
  void * hlds__goal_util__env_ptr_arg)
{
  {
    struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

    *((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = ((MR_Word) (hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__conv1_Goal_2);
    ((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_4(
  void * hlds__goal_util__env_ptr_arg)
{
  {
    struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

    (hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Case_20 = ((MR_Word) (hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__conv2_Case_20);
    hlds__goal_util__direct_subgoal_2_p_0_3(hlds__goal_util__env_ptr);
  }
}

static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_3(
  void * hlds__goal_util__env_ptr_arg)
{
  {
    struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s *) hlds__goal_util__env_ptr_arg;

    {
      MR_Word hlds__goal_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Case_20, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Case_20, (MR_Integer) 1)));

      *((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Case_20, (MR_Integer) 2)));
      ((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word * hlds__goal_util__Goal_2,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr)
{
  {
    struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s hlds__goal_util__env;

    (hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2 = hlds__goal_util__Goal_2;
    (hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont = hlds__goal_util__cont;
    (hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
    switch (MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) {
      case (MR_Integer) 0:
        {
          *((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = (MR_Word) MR_body(((MR_Word) hlds__goal_util__HeadVar__1_1), (MR_Integer) 0);
          ((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) {
          case (MR_Integer) 2:
            {
              MR_Word hlds__goal_util__ConjList_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word hlds__goal_util___ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

              mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__conv0_Goal_2, hlds__goal_util__ConjList_12, hlds__goal_util__direct_subgoal_2_p_0_1, &hlds__goal_util__env);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__goal_util__DisjList_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

              mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__conv1_Goal_2, hlds__goal_util__DisjList_14, hlds__goal_util__direct_subgoal_2_p_0_2, &hlds__goal_util__env);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__goal_util__CaseList_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word hlds__goal_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word hlds__goal_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));

              mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, &(hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__conv2_Case_20, hlds__goal_util__CaseList_18, hlds__goal_util__direct_subgoal_2_p_0_4, &hlds__goal_util__env);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__goal_util__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

              *((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
              ((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word hlds__goal_util__Cond_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word hlds__goal_util__Then_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word hlds__goal_util__Else_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 4)));
              MR_Word hlds__goal_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

              *((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = hlds__goal_util__Cond_7;
              ((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
              *((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = hlds__goal_util__Then_8;
              ((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
              *((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = hlds__goal_util__Else_9;
              ((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((hlds__goal_util__env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__goal_util__cases_contain_reconstruction_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word * hlds__goal_util__HeadVar__2_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__goal_util__HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__goal_util__Case_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Cases_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__goal_util__CaseGoal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_3, (MR_Integer) 2)));
      MR_Word hlds__goal_util__HeadContainsReconstruction_9;
      MR_Word hlds__goal_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_3, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_3, (MR_Integer) 1)));

      hlds__goal_util__goal_contains_reconstruction_2_p_0(hlds__goal_util__CaseGoal_8, &hlds__goal_util__HeadContainsReconstruction_9);
      switch (hlds__goal_util__HeadContainsReconstruction_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            /* direct tailcall eliminated */
            {
              MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__Cases_4;

              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
          break;
        case (MR_Integer) 1:
          *hlds__goal_util__HeadVar__2_2 = (MR_Integer) 1;
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_util__goals_contain_reconstruction_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word * hlds__goal_util__HeadVar__2_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__goal_util__HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__goal_util__HeadContainsReconstruction_6;

      hlds__goal_util__goal_contains_reconstruction_2_p_0(hlds__goal_util__Goal_3, &hlds__goal_util__HeadContainsReconstruction_6);
      switch (hlds__goal_util__HeadContainsReconstruction_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            /* direct tailcall eliminated */
            {
              MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__Goals_4;

              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
          break;
        case (MR_Integer) 1:
          *hlds__goal_util__HeadVar__2_2 = (MR_Integer) 1;
          break;
      }
    }
    break;
  }
}

void MR_CALL 
hlds__goal_util__goal_contains_reconstruction_2_p_0(
  MR_Word hlds__goal_util__Goal_3,
  MR_Word * hlds__goal_util__ContainsReconstruction_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__goal_util__succeeded;
      MR_Word hlds__goal_util__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word hlds__goal_util__SubGoal_17 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_5), (MR_Integer) 0);

            /* direct tailcall eliminated */
            {
              MR_Word hlds__goal_util__next_value_of_Goal_3 = hlds__goal_util__SubGoal_17;

              hlds__goal_util__Goal_3 = hlds__goal_util__next_value_of_Goal_3;
            }
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__goal_util__Unify_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_5, (MR_Integer) 3)));
            MR_Word hlds__goal_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_5, (MR_Integer) 0)));
            MR_Word hlds__goal_util__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));
            MR_Word hlds__goal_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));
            MR_Word hlds__goal_util__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_5, (MR_Integer) 4)));
            MR_Word hlds__goal_util__HowToConstruct_30;
            MR_Word hlds__goal_util__Var_26;
            MR_Word hlds__goal_util__Var_27;
            MR_Word hlds__goal_util__Var_28;
            MR_Word hlds__goal_util__Var_29;
            MR_Word hlds__goal_util__Var_31;
            MR_Word hlds__goal_util__Var_32;
            MR_Word hlds__goal_util__Var_33;

            hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__Unify_24)) == (MR_mktag((MR_Integer) 0)));
            if (hlds__goal_util__succeeded)
            {
              hlds__goal_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unify_24, (MR_Integer) 0)));
              hlds__goal_util__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unify_24, (MR_Integer) 1)));
              hlds__goal_util__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unify_24, (MR_Integer) 2)));
              hlds__goal_util__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unify_24, (MR_Integer) 3)));
              hlds__goal_util__HowToConstruct_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unify_24, (MR_Integer) 4)));
              hlds__goal_util__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unify_24, (MR_Integer) 5)));
              hlds__goal_util__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unify_24, (MR_Integer) 6)));
              hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HowToConstruct_30)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__goal_util__succeeded)
                hlds__goal_util__Var_33 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__HowToConstruct_30), (MR_Integer) 1);
            }
            if (hlds__goal_util__succeeded)
              *hlds__goal_util__ContainsReconstruction_4 = (MR_Integer) 1;
            else
              *hlds__goal_util__ContainsReconstruction_4 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 2:
          *hlds__goal_util__ContainsReconstruction_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              *hlds__goal_util__ContainsReconstruction_4 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__goal_util__Conjuncts_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));
                MR_Word hlds__goal_util___ConjType_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));

                hlds__goal_util__goals_contain_reconstruction_2_p_0(hlds__goal_util__Conjuncts_8, hlds__goal_util__ContainsReconstruction_4);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word hlds__goal_util__Disjuncts_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));

                hlds__goal_util__goals_contain_reconstruction_2_p_0(hlds__goal_util__Disjuncts_9, hlds__goal_util__ContainsReconstruction_4);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word hlds__goal_util__Cases_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));

                hlds__goal_util__cases_contain_reconstruction_2_p_0(hlds__goal_util__Cases_12, hlds__goal_util__ContainsReconstruction_4);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word hlds__goal_util__Reason_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));
                MR_Word hlds__goal_util__SubGoal_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));
                MR_Word hlds__goal_util__FGT_20;
                MR_Word hlds__goal_util__Var_19;

                hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_18, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (hlds__goal_util__succeeded)
                {
                  hlds__goal_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_18, (MR_Integer) 1)));
                  hlds__goal_util__FGT_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_18, (MR_Integer) 2)));
                  switch (hlds__goal_util__FGT_20) {
                    default:
                      hlds__goal_util__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      hlds__goal_util__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      hlds__goal_util__succeeded = MR_TRUE;
                      break;
                  }
                }
                if (hlds__goal_util__succeeded)
                  *hlds__goal_util__ContainsReconstruction_4 = (MR_Integer) 0;
                else
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word hlds__goal_util__next_value_of_Goal_3 = hlds__goal_util__SubGoal_71;

                    hlds__goal_util__Goal_3 = hlds__goal_util__next_value_of_Goal_3;
                  }
                  continue;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word hlds__goal_util__Cond_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Then_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Else_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 4)));
                MR_Word hlds__goal_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));

                {
                  MR_Word hlds__goal_util__Var_75;

                  hlds__goal_util__goal_contains_reconstruction_2_p_0(hlds__goal_util__Cond_14, &hlds__goal_util__Var_75);
                  hlds__goal_util__succeeded = ((MR_Integer) 1 == hlds__goal_util__Var_75);
                }
                if (!(hlds__goal_util__succeeded))
                {
                  {
                    MR_Word hlds__goal_util__Var_76;

                    hlds__goal_util__goal_contains_reconstruction_2_p_0(hlds__goal_util__Then_15, &hlds__goal_util__Var_76);
                    hlds__goal_util__succeeded = ((MR_Integer) 1 == hlds__goal_util__Var_76);
                  }
                  if (!(hlds__goal_util__succeeded))
                  {
                    MR_Word hlds__goal_util__Var_77;

                    hlds__goal_util__goal_contains_reconstruction_2_p_0(hlds__goal_util__Else_16, &hlds__goal_util__Var_77);
                    hlds__goal_util__succeeded = ((MR_Integer) 1 == hlds__goal_util__Var_77);
                  }
                }
                if (hlds__goal_util__succeeded)
                  *hlds__goal_util__ContainsReconstruction_4 = (MR_Integer) 1;
                else
                  *hlds__goal_util__ContainsReconstruction_4 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word hlds__goal_util__Shorthand_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) hlds__goal_util__Shorthand_52)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word hlds__goal_util__GoalA_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Shorthand_52, (MR_Integer) 0)));
                      MR_Word hlds__goal_util__GoalB_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Shorthand_52, (MR_Integer) 1)));
                      MR_Word hlds__goal_util__Var_67;
                      MR_Word hlds__goal_util__Var_78;
                      MR_Word hlds__goal_util__Var_79;

                      hlds__goal_util__goal_contains_reconstruction_2_p_0(hlds__goal_util__GoalA_53, &hlds__goal_util__Var_78);
                      hlds__goal_util__succeeded = ((MR_Integer) 1 == hlds__goal_util__Var_78);
                      if (hlds__goal_util__succeeded)
                      {
                        hlds__goal_util__Var_67 = (MR_Integer) 1;
                        hlds__goal_util__goal_contains_reconstruction_2_p_0(hlds__goal_util__GoalB_54, &hlds__goal_util__Var_79);
                        hlds__goal_util__succeeded = (hlds__goal_util__Var_67 == hlds__goal_util__Var_79);
                      }
                      if (hlds__goal_util__succeeded)
                        *hlds__goal_util__ContainsReconstruction_4 = (MR_Integer) 1;
                      else
                        *hlds__goal_util__ContainsReconstruction_4 = (MR_Integer) 0;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word hlds__goal_util__MainGoal_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_52, (MR_Integer) 4)));
                      MR_Word hlds__goal_util__OrElseGoals_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_52, (MR_Integer) 5)));
                      MR_Word hlds__goal_util___AtomicGoalType_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_52, (MR_Integer) 0)));
                      MR_Word hlds__goal_util___OuterVars_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_52, (MR_Integer) 1)));
                      MR_Word hlds__goal_util___InnerVars_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_52, (MR_Integer) 2)));
                      MR_Word hlds__goal_util___OutputVars_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_52, (MR_Integer) 3)));
                      MR_Word hlds__goal_util___Inners_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_52, (MR_Integer) 6)));
                      MR_Word hlds__goal_util__Var_65;
                      MR_Word hlds__goal_util__Var_80;
                      MR_Word hlds__goal_util__Var_81;

                      hlds__goal_util__goal_contains_reconstruction_2_p_0(hlds__goal_util__MainGoal_59, &hlds__goal_util__Var_80);
                      hlds__goal_util__succeeded = ((MR_Integer) 1 == hlds__goal_util__Var_80);
                      if (hlds__goal_util__succeeded)
                      {
                        hlds__goal_util__Var_65 = (MR_Integer) 1;
                        hlds__goal_util__goals_contain_reconstruction_2_p_0(hlds__goal_util__OrElseGoals_60, &hlds__goal_util__Var_81);
                        hlds__goal_util__succeeded = (hlds__goal_util__Var_65 == hlds__goal_util__Var_81);
                      }
                      if (hlds__goal_util__succeeded)
                        *hlds__goal_util__ContainsReconstruction_4 = (MR_Integer) 1;
                      else
                        *hlds__goal_util__ContainsReconstruction_4 = (MR_Integer) 0;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word hlds__goal_util__SubGoal_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__Shorthand_52, (MR_Integer) 2)));
                      MR_Word hlds__goal_util___MaybeTryIOStateVars_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__Shorthand_52, (MR_Integer) 0)));
                      MR_Word hlds__goal_util___ResultVar_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__Shorthand_52, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word hlds__goal_util__next_value_of_Goal_3 = hlds__goal_util__SubGoal_72;

                        hlds__goal_util__Goal_3 = hlds__goal_util__next_value_of_Goal_3;
                      }
                      continue;
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
}

MR_Word MR_CALL 
hlds__goal_util__goal_list_calls_proc_in_set_2_f_0(
  MR_Word hlds__goal_util__Goals_4,
  MR_Word hlds__goal_util__PredProcIds_5)
{
  {
    MR_Word hlds__goal_util__CalledPredProcIds_6;
    MR_Word hlds__goal_util__Var_7;

    hlds__goal_util__Var_7 = mercury__set__init_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
    hlds__goal_util__goal_list_calls_proc_in_set_acc_4_p_0(hlds__goal_util__Goals_4, hlds__goal_util__PredProcIds_5, hlds__goal_util__Var_7, &hlds__goal_util__CalledPredProcIds_6);
    return hlds__goal_util__CalledPredProcIds_6;
  }
}

MR_Word MR_CALL 
hlds__goal_util__goal_calls_proc_in_set_2_f_0(
  MR_Word hlds__goal_util__Goal_4,
  MR_Word hlds__goal_util__PredProcIds_5)
{
  {
    MR_Word hlds__goal_util__CalledPredProcIds_6;
    MR_Word hlds__goal_util__Var_7;

    hlds__goal_util__Var_7 = mercury__set__init_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
    hlds__goal_util__goal_calls_proc_in_set_acc_4_p_0(hlds__goal_util__Goal_4, hlds__goal_util__PredProcIds_5, hlds__goal_util__Var_7, &hlds__goal_util__CalledPredProcIds_6);
    return hlds__goal_util__CalledPredProcIds_6;
  }
}

static void MR_CALL 
hlds__goal_util__case_list_calls_proc_in_list_acc_4_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__PredProcIds_2,
  MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0_3,
  MR_Word * hlds__goal_util__STATE_VARIABLE_CalledSet_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__goal_util__STATE_VARIABLE_CalledSet_4 = hlds__goal_util__STATE_VARIABLE_CalledSet_0_3;
    else
    {
      MR_Word hlds__goal_util__Case_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Cases_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__goal_util__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_9, (MR_Integer) 2)));
      MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_18_18;
      MR_Word hlds__goal_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_9, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_9, (MR_Integer) 1)));

      hlds__goal_util__goal_calls_proc_in_set_acc_4_p_0(hlds__goal_util__Goal_15, hlds__goal_util__PredProcIds_2, hlds__goal_util__STATE_VARIABLE_CalledSet_0_3, &hlds__goal_util__STATE_VARIABLE_CalledSet_18_18);
      /* direct tailcall eliminated */
      {
        MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__Cases_10;
        MR_Word hlds__goal_util__next_value_of_STATE_VARIABLE_CalledSet_0_3 = hlds__goal_util__STATE_VARIABLE_CalledSet_18_18;

        hlds__goal_util__STATE_VARIABLE_CalledSet_0_3 = hlds__goal_util__next_value_of_STATE_VARIABLE_CalledSet_0_3;
        hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_util__goal_list_calls_proc_in_set_acc_4_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__PredProcIds_2,
  MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0_3,
  MR_Word * hlds__goal_util__STATE_VARIABLE_CalledSet_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__goal_util__STATE_VARIABLE_CalledSet_4 = hlds__goal_util__STATE_VARIABLE_CalledSet_0_3;
    else
    {
      MR_Word hlds__goal_util__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_15_15;

      hlds__goal_util__goal_calls_proc_in_set_acc_4_p_0(hlds__goal_util__Goal_9, hlds__goal_util__PredProcIds_2, hlds__goal_util__STATE_VARIABLE_CalledSet_0_3, &hlds__goal_util__STATE_VARIABLE_CalledSet_15_15);
      /* direct tailcall eliminated */
      {
        MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__Goals_10;
        MR_Word hlds__goal_util__next_value_of_STATE_VARIABLE_CalledSet_0_3 = hlds__goal_util__STATE_VARIABLE_CalledSet_15_15;

        hlds__goal_util__STATE_VARIABLE_CalledSet_0_3 = hlds__goal_util__next_value_of_STATE_VARIABLE_CalledSet_0_3;
        hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_util__goal_calls_proc_in_set_acc_4_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__PredProcIds_7,
  MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_0_58,
  MR_Word * hlds__goal_util__STATE_VARIABLE_CalledSet_59)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__goal_util__succeeded;
      MR_Word hlds__goal_util__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__goal_util___GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word hlds__goal_util__Goal_41 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_5), (MR_Integer) 0);

            /* direct tailcall eliminated */
            {
              MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__Goal_41;

              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
          break;
        case (MR_Integer) 1:
          *hlds__goal_util__STATE_VARIABLE_CalledSet_59 = hlds__goal_util__STATE_VARIABLE_CalledSet_0_58;
          break;
        case (MR_Integer) 2:
          {
            MR_Word hlds__goal_util__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_5, (MR_Integer) 0)));
            MR_Integer hlds__goal_util__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));
            MR_Word hlds__goal_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));
            MR_Word hlds__goal_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_5, (MR_Integer) 3)));
            MR_Word hlds__goal_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_5, (MR_Integer) 4)));
            MR_Word hlds__goal_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_5, (MR_Integer) 5)));
            MR_Word hlds__goal_util__Var_74;

            {
              hlds__goal_util__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__goal_util__Var_74, 0) = ((MR_Box) (hlds__goal_util__PredId_14));
              MR_hl_field(MR_mktag(0), hlds__goal_util__Var_74, 1) = ((MR_Box) (hlds__goal_util__ProcId_15));
            }
            hlds__goal_util__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (hlds__goal_util__Var_74)), hlds__goal_util__PredProcIds_7);
            if (hlds__goal_util__succeeded)
            {
              mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (hlds__goal_util__Var_74)), hlds__goal_util__STATE_VARIABLE_CalledSet_0_58, hlds__goal_util__STATE_VARIABLE_CalledSet_59);
            }
            else
              *hlds__goal_util__STATE_VARIABLE_CalledSet_59 = hlds__goal_util__STATE_VARIABLE_CalledSet_0_58;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *hlds__goal_util__STATE_VARIABLE_CalledSet_59 = hlds__goal_util__STATE_VARIABLE_CalledSet_0_58;
              break;
            case (MR_Integer) 1:
              *hlds__goal_util__STATE_VARIABLE_CalledSet_59 = hlds__goal_util__STATE_VARIABLE_CalledSet_0_58;
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__goal_util__Goals_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));

                hlds__goal_util__goal_list_calls_proc_in_set_acc_4_p_0(hlds__goal_util__Goals_33, hlds__goal_util__PredProcIds_7, hlds__goal_util__STATE_VARIABLE_CalledSet_0_58, hlds__goal_util__STATE_VARIABLE_CalledSet_59);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word hlds__goal_util__Goals_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));

                hlds__goal_util__goal_list_calls_proc_in_set_acc_4_p_0(hlds__goal_util__Goals_77, hlds__goal_util__PredProcIds_7, hlds__goal_util__STATE_VARIABLE_CalledSet_0_58, hlds__goal_util__STATE_VARIABLE_CalledSet_59);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word hlds__goal_util__Cases_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));

                hlds__goal_util__case_list_calls_proc_in_list_acc_4_p_0(hlds__goal_util__Cases_36, hlds__goal_util__PredProcIds_7, hlds__goal_util__STATE_VARIABLE_CalledSet_0_58, hlds__goal_util__STATE_VARIABLE_CalledSet_59);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word hlds__goal_util__Reason_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Goal_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));
                MR_Word hlds__goal_util__FGT_44;
                MR_Word hlds__goal_util__Var_43;

                hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_42, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (hlds__goal_util__succeeded)
                {
                  hlds__goal_util__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_42, (MR_Integer) 1)));
                  hlds__goal_util__FGT_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_42, (MR_Integer) 2)));
                  switch (hlds__goal_util__FGT_44) {
                    default:
                      hlds__goal_util__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      hlds__goal_util__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      hlds__goal_util__succeeded = MR_TRUE;
                      break;
                  }
                }
                if (hlds__goal_util__succeeded)
                  *hlds__goal_util__STATE_VARIABLE_CalledSet_59 = hlds__goal_util__STATE_VARIABLE_CalledSet_0_58;
                else
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__Goal_78;

                    hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word hlds__goal_util__Cond_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Then_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Else_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 4)));
                MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_68_68;
                MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_69_69;
                MR_Word hlds__goal_util__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));

                hlds__goal_util__goal_calls_proc_in_set_acc_4_p_0(hlds__goal_util__Cond_38, hlds__goal_util__PredProcIds_7, hlds__goal_util__STATE_VARIABLE_CalledSet_0_58, &hlds__goal_util__STATE_VARIABLE_CalledSet_68_68);
                hlds__goal_util__goal_calls_proc_in_set_acc_4_p_0(hlds__goal_util__Then_39, hlds__goal_util__PredProcIds_7, hlds__goal_util__STATE_VARIABLE_CalledSet_68_68, &hlds__goal_util__STATE_VARIABLE_CalledSet_69_69);
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__Else_40;
                  MR_Word hlds__goal_util__next_value_of_STATE_VARIABLE_CalledSet_0_58 = hlds__goal_util__STATE_VARIABLE_CalledSet_69_69;

                  hlds__goal_util__STATE_VARIABLE_CalledSet_0_58 = hlds__goal_util__next_value_of_STATE_VARIABLE_CalledSet_0_58;
                  hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
                }
                continue;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word hlds__goal_util__ShortHand_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_5, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) hlds__goal_util__ShortHand_45)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_util", (MR_String) "predicate \140hlds.goal_util.goal_calls_proc_in_set_acc\'/4", (MR_String) "bi_implication");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word hlds__goal_util__MainGoal_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_45, (MR_Integer) 4)));
                      MR_Word hlds__goal_util__OrElseGoals_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_45, (MR_Integer) 5)));
                      MR_Word hlds__goal_util__STATE_VARIABLE_CalledSet_64_64;
                      MR_Word hlds__goal_util__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_45, (MR_Integer) 0)));
                      MR_Word hlds__goal_util__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_45, (MR_Integer) 1)));
                      MR_Word hlds__goal_util__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_45, (MR_Integer) 2)));
                      MR_Word hlds__goal_util__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_45, (MR_Integer) 3)));
                      MR_Word hlds__goal_util__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_45, (MR_Integer) 6)));

                      hlds__goal_util__goal_calls_proc_in_set_acc_4_p_0(hlds__goal_util__MainGoal_50, hlds__goal_util__PredProcIds_7, hlds__goal_util__STATE_VARIABLE_CalledSet_0_58, &hlds__goal_util__STATE_VARIABLE_CalledSet_64_64);
                      hlds__goal_util__goal_list_calls_proc_in_set_acc_4_p_0(hlds__goal_util__OrElseGoals_51, hlds__goal_util__PredProcIds_7, hlds__goal_util__STATE_VARIABLE_CalledSet_64_64, hlds__goal_util__STATE_VARIABLE_CalledSet_59);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word hlds__goal_util__SubGoal_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_45, (MR_Integer) 2)));
                      MR_Word hlds__goal_util__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_45, (MR_Integer) 0)));
                      MR_Word hlds__goal_util__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_45, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__SubGoal_55;

                        hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
                      }
                      continue;
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
}

static void MR_CALL 
hlds__goal_util__cases_calls_pred_id_2_p_1(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word * hlds__goal_util__PredId_7,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
      MR_Word hlds__goal_util__Goal_5;
      MR_Word hlds__goal_util__Cases_6;
      MR_Word hlds__goal_util__Var_8;
      MR_Word hlds__goal_util__Var_3;
      MR_Word hlds__goal_util__Var_4;

      if (hlds__goal_util__succeeded)
      {
        hlds__goal_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
        hlds__goal_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
        hlds__goal_util__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Var_8, (MR_Integer) 0)));
        hlds__goal_util__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Var_8, (MR_Integer) 1)));
        hlds__goal_util__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Var_8, (MR_Integer) 2)));
        {
          MR_Word hlds__goal_util__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 0)));
          MR_Word hlds__goal_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 1)));

          switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_10)) {
            case (MR_Integer) 0:
              {
                MR_Word hlds__goal_util__SubGoal_24 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_10), (MR_Integer) 0);

                hlds__goal_util__goal_calls_pred_id_2_p_1(hlds__goal_util__SubGoal_24, hlds__goal_util__PredId_7, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer hlds__goal_util__Var_28;
                MR_Word hlds__goal_util__Var_29;
                MR_Word hlds__goal_util__Var_30;
                MR_Word hlds__goal_util__Var_31;
                MR_Word hlds__goal_util__Var_32;

                *hlds__goal_util__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 0)));
                hlds__goal_util__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));
                hlds__goal_util__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));
                hlds__goal_util__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 3)));
                hlds__goal_util__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 4)));
                hlds__goal_util__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 5)));
                hlds__goal_util__cont(hlds__goal_util__cont_env_ptr);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 0)))) {
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__goal_util__Conjuncts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));
                    MR_Word hlds__goal_util___ConjType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));

                    hlds__goal_util__goals_calls_pred_id_2_p_1(hlds__goal_util__Conjuncts_15, hlds__goal_util__PredId_7, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word hlds__goal_util__Disjuncts_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));

                    hlds__goal_util__goals_calls_pred_id_2_p_1(hlds__goal_util__Disjuncts_16, hlds__goal_util__PredId_7, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word hlds__goal_util__Cases_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 3)));
                    MR_Word hlds__goal_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));

                    hlds__goal_util__cases_calls_pred_id_2_p_1(hlds__goal_util__Cases_19, hlds__goal_util__PredId_7, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word hlds__goal_util__Reason_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__SubGoal_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__FGT_27;
                    MR_Word hlds__goal_util__Var_26;

                    hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_25, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (hlds__goal_util__succeeded)
                    {
                      hlds__goal_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_25, (MR_Integer) 1)));
                      hlds__goal_util__FGT_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_25, (MR_Integer) 2)));
                      switch (hlds__goal_util__FGT_27) {
                        default:
                          hlds__goal_util__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          hlds__goal_util__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          hlds__goal_util__succeeded = MR_TRUE;
                          break;
                      }
                    }
                    if (hlds__goal_util__succeeded)
                    {
                      hlds__goal_util__succeeded = MR_FALSE;
                      if (hlds__goal_util__succeeded)
                        hlds__goal_util__cont(hlds__goal_util__cont_env_ptr);
                    }
                    else
                      hlds__goal_util__goal_calls_pred_id_2_p_1(hlds__goal_util__SubGoal_51, hlds__goal_util__PredId_7, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word hlds__goal_util__Cond_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__Then_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 3)));
                    MR_Word hlds__goal_util__Else_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 4)));
                    MR_Word hlds__goal_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));

                    hlds__goal_util__goal_calls_pred_id_2_p_1(hlds__goal_util__Cond_21, hlds__goal_util__PredId_7, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                    hlds__goal_util__goal_calls_pred_id_2_p_1(hlds__goal_util__Then_22, hlds__goal_util__PredId_7, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                    hlds__goal_util__goal_calls_pred_id_2_p_1(hlds__goal_util__Else_23, hlds__goal_util__PredId_7, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
                  break;
              }
              break;
          }
        }
        /* direct tailcall eliminated */
        {
          MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__Cases_6;

          hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_util__goals_calls_pred_id_2_p_1(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word * hlds__goal_util__PredId_5,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
      MR_Word hlds__goal_util__Goal_3;
      MR_Word hlds__goal_util__Goals_4;

      if (hlds__goal_util__succeeded)
      {
        hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
        hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
        {
          MR_Word hlds__goal_util__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 0)));
          MR_Word hlds__goal_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 1)));

          switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_7)) {
            case (MR_Integer) 0:
              {
                MR_Word hlds__goal_util__SubGoal_21 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_7), (MR_Integer) 0);

                hlds__goal_util__goal_calls_pred_id_2_p_1(hlds__goal_util__SubGoal_21, hlds__goal_util__PredId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer hlds__goal_util__Var_25;
                MR_Word hlds__goal_util__Var_26;
                MR_Word hlds__goal_util__Var_27;
                MR_Word hlds__goal_util__Var_28;
                MR_Word hlds__goal_util__Var_29;

                *hlds__goal_util__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 0)));
                hlds__goal_util__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));
                hlds__goal_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 2)));
                hlds__goal_util__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 3)));
                hlds__goal_util__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 4)));
                hlds__goal_util__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 5)));
                hlds__goal_util__cont(hlds__goal_util__cont_env_ptr);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 0)))) {
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__goal_util__Conjuncts_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 2)));
                    MR_Word hlds__goal_util___ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));

                    hlds__goal_util__goals_calls_pred_id_2_p_1(hlds__goal_util__Conjuncts_12, hlds__goal_util__PredId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word hlds__goal_util__Disjuncts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));

                    hlds__goal_util__goals_calls_pred_id_2_p_1(hlds__goal_util__Disjuncts_13, hlds__goal_util__PredId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word hlds__goal_util__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 3)));
                    MR_Word hlds__goal_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 2)));

                    hlds__goal_util__cases_calls_pred_id_2_p_1(hlds__goal_util__Cases_16, hlds__goal_util__PredId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word hlds__goal_util__Reason_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__SubGoal_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__FGT_24;
                    MR_Word hlds__goal_util__Var_23;

                    hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (hlds__goal_util__succeeded)
                    {
                      hlds__goal_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_22, (MR_Integer) 1)));
                      hlds__goal_util__FGT_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_22, (MR_Integer) 2)));
                      switch (hlds__goal_util__FGT_24) {
                        default:
                          hlds__goal_util__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          hlds__goal_util__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          hlds__goal_util__succeeded = MR_TRUE;
                          break;
                      }
                    }
                    if (hlds__goal_util__succeeded)
                    {
                      hlds__goal_util__succeeded = MR_FALSE;
                      if (hlds__goal_util__succeeded)
                        hlds__goal_util__cont(hlds__goal_util__cont_env_ptr);
                    }
                    else
                      hlds__goal_util__goal_calls_pred_id_2_p_1(hlds__goal_util__SubGoal_48, hlds__goal_util__PredId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word hlds__goal_util__Cond_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__Then_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 3)));
                    MR_Word hlds__goal_util__Else_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 4)));
                    MR_Word hlds__goal_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));

                    hlds__goal_util__goal_calls_pred_id_2_p_1(hlds__goal_util__Cond_18, hlds__goal_util__PredId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                    hlds__goal_util__goal_calls_pred_id_2_p_1(hlds__goal_util__Then_19, hlds__goal_util__PredId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                    hlds__goal_util__goal_calls_pred_id_2_p_1(hlds__goal_util__Else_20, hlds__goal_util__PredId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
                  break;
              }
              break;
          }
        }
        /* direct tailcall eliminated */
        {
          MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__Goals_4;

          hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
hlds__goal_util__goal_calls_pred_id_2_p_1(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word * hlds__goal_util__PredId_5,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__goal_util__succeeded;
      MR_Word hlds__goal_util__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) {
        case (MR_Integer) 0:
          {
            MR_Word hlds__goal_util__SubGoal_18 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_3), (MR_Integer) 0);

            /* direct tailcall eliminated */
            {
              MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__SubGoal_18;

              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer hlds__goal_util__Var_22;
            MR_Word hlds__goal_util__Var_23;
            MR_Word hlds__goal_util__Var_24;
            MR_Word hlds__goal_util__Var_25;
            MR_Word hlds__goal_util__Var_26;

            *hlds__goal_util__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)));
            hlds__goal_util__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
            hlds__goal_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
            hlds__goal_util__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
            hlds__goal_util__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));
            hlds__goal_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 5)));
            hlds__goal_util__cont(hlds__goal_util__cont_env_ptr);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) {
            case (MR_Integer) 2:
              {
                MR_Word hlds__goal_util__Conjuncts_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
                MR_Word hlds__goal_util___ConjType_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

                hlds__goal_util__goals_calls_pred_id_2_p_1(hlds__goal_util__Conjuncts_9, hlds__goal_util__PredId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word hlds__goal_util__Disjuncts_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

                hlds__goal_util__goals_calls_pred_id_2_p_1(hlds__goal_util__Disjuncts_10, hlds__goal_util__PredId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word hlds__goal_util__Cases_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));

                hlds__goal_util__cases_calls_pred_id_2_p_1(hlds__goal_util__Cases_13, hlds__goal_util__PredId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word hlds__goal_util__Reason_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
                MR_Word hlds__goal_util__SubGoal_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
                MR_Word hlds__goal_util__FGT_21;
                MR_Word hlds__goal_util__Var_20;

                hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (hlds__goal_util__succeeded)
                {
                  hlds__goal_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 1)));
                  hlds__goal_util__FGT_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 2)));
                  switch (hlds__goal_util__FGT_21) {
                    default:
                      hlds__goal_util__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      hlds__goal_util__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      hlds__goal_util__succeeded = MR_TRUE;
                      break;
                  }
                }
                if (hlds__goal_util__succeeded)
                {
                  hlds__goal_util__succeeded = MR_FALSE;
                  if (hlds__goal_util__succeeded)
                    hlds__goal_util__cont(hlds__goal_util__cont_env_ptr);
                }
                else
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__SubGoal_45;

                    hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word hlds__goal_util__Cond_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Then_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Else_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));
                MR_Word hlds__goal_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

                hlds__goal_util__goal_calls_pred_id_2_p_1(hlds__goal_util__Cond_15, hlds__goal_util__PredId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                hlds__goal_util__goal_calls_pred_id_2_p_1(hlds__goal_util__Then_16, hlds__goal_util__PredId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__Else_17;

                  hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
                }
                continue;
              }
              break;
          }
          break;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__goal_util__cases_calls_pred_id_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__PredId_7)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
      MR_Word hlds__goal_util__Goal_5;
      MR_Word hlds__goal_util__Cases_6;
      MR_Word hlds__goal_util__Var_8;
      MR_Word hlds__goal_util__Var_3;
      MR_Word hlds__goal_util__Var_4;

      if (hlds__goal_util__succeeded)
      {
        hlds__goal_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
        hlds__goal_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
        hlds__goal_util__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Var_8, (MR_Integer) 0)));
        hlds__goal_util__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Var_8, (MR_Integer) 1)));
        hlds__goal_util__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Var_8, (MR_Integer) 2)));
        {
          MR_Word hlds__goal_util__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 0)));
          MR_Word hlds__goal_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 1)));

          switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_10)) {
            default:
              hlds__goal_util__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word hlds__goal_util__SubGoal_24 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_10), (MR_Integer) 0);

                hlds__goal_util__succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(hlds__goal_util__SubGoal_24, hlds__goal_util__PredId_7);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__goal_util__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 0)));
                MR_Integer hlds__goal_util__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 4)));
                MR_Word hlds__goal_util__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 5)));

                hlds__goal_util__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__goal_util__PredId_7, hlds__goal_util__Var_52);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 0)))) {
                default:
                  hlds__goal_util__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__goal_util__Conjuncts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));
                    MR_Word hlds__goal_util___ConjType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));

                    hlds__goal_util__succeeded = hlds__goal_util__goals_calls_pred_id_2_p_0(hlds__goal_util__Conjuncts_15, hlds__goal_util__PredId_7);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word hlds__goal_util__Disjuncts_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));

                    hlds__goal_util__succeeded = hlds__goal_util__goals_calls_pred_id_2_p_0(hlds__goal_util__Disjuncts_16, hlds__goal_util__PredId_7);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word hlds__goal_util__Cases_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 3)));
                    MR_Word hlds__goal_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));

                    hlds__goal_util__succeeded = hlds__goal_util__cases_calls_pred_id_2_p_0(hlds__goal_util__Cases_19, hlds__goal_util__PredId_7);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word hlds__goal_util__Reason_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__SubGoal_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__FGT_27;
                    MR_Word hlds__goal_util__Var_26;

                    hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_25, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (hlds__goal_util__succeeded)
                    {
                      hlds__goal_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_25, (MR_Integer) 1)));
                      hlds__goal_util__FGT_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_25, (MR_Integer) 2)));
                      switch (hlds__goal_util__FGT_27) {
                        default:
                          hlds__goal_util__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          hlds__goal_util__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          hlds__goal_util__succeeded = MR_TRUE;
                          break;
                      }
                    }
                    if (hlds__goal_util__succeeded)
                      hlds__goal_util__succeeded = MR_FALSE;
                    else
                      hlds__goal_util__succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(hlds__goal_util__SubGoal_51, hlds__goal_util__PredId_7);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word hlds__goal_util__Cond_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__Then_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 3)));
                    MR_Word hlds__goal_util__Else_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 4)));
                    MR_Word hlds__goal_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));

                    hlds__goal_util__succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(hlds__goal_util__Cond_21, hlds__goal_util__PredId_7);
                    if (!(hlds__goal_util__succeeded))
                    {
                      hlds__goal_util__succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(hlds__goal_util__Then_22, hlds__goal_util__PredId_7);
                      if (!(hlds__goal_util__succeeded))
                        hlds__goal_util__succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(hlds__goal_util__Else_23, hlds__goal_util__PredId_7);
                    }
                  }
                  break;
              }
              break;
          }
        }
        if (!(hlds__goal_util__succeeded))
        {
          /* direct tailcall eliminated */
          {
            MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__Cases_6;

            hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      }
      return hlds__goal_util__succeeded;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__goal_util__goals_calls_pred_id_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__PredId_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
      MR_Word hlds__goal_util__Goal_3;
      MR_Word hlds__goal_util__Goals_4;

      if (hlds__goal_util__succeeded)
      {
        hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
        hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
        {
          MR_Word hlds__goal_util__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 0)));
          MR_Word hlds__goal_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 1)));

          switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_7)) {
            default:
              hlds__goal_util__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word hlds__goal_util__SubGoal_21 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_7), (MR_Integer) 0);

                hlds__goal_util__succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(hlds__goal_util__SubGoal_21, hlds__goal_util__PredId_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__goal_util__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 0)));
                MR_Integer hlds__goal_util__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 4)));
                MR_Word hlds__goal_util__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 5)));

                hlds__goal_util__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__goal_util__PredId_5, hlds__goal_util__Var_49);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 0)))) {
                default:
                  hlds__goal_util__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__goal_util__Conjuncts_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 2)));
                    MR_Word hlds__goal_util___ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));

                    hlds__goal_util__succeeded = hlds__goal_util__goals_calls_pred_id_2_p_0(hlds__goal_util__Conjuncts_12, hlds__goal_util__PredId_5);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word hlds__goal_util__Disjuncts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));

                    hlds__goal_util__succeeded = hlds__goal_util__goals_calls_pred_id_2_p_0(hlds__goal_util__Disjuncts_13, hlds__goal_util__PredId_5);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word hlds__goal_util__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 3)));
                    MR_Word hlds__goal_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 2)));

                    hlds__goal_util__succeeded = hlds__goal_util__cases_calls_pred_id_2_p_0(hlds__goal_util__Cases_16, hlds__goal_util__PredId_5);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word hlds__goal_util__Reason_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__SubGoal_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__FGT_24;
                    MR_Word hlds__goal_util__Var_23;

                    hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (hlds__goal_util__succeeded)
                    {
                      hlds__goal_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_22, (MR_Integer) 1)));
                      hlds__goal_util__FGT_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_22, (MR_Integer) 2)));
                      switch (hlds__goal_util__FGT_24) {
                        default:
                          hlds__goal_util__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          hlds__goal_util__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          hlds__goal_util__succeeded = MR_TRUE;
                          break;
                      }
                    }
                    if (hlds__goal_util__succeeded)
                      hlds__goal_util__succeeded = MR_FALSE;
                    else
                      hlds__goal_util__succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(hlds__goal_util__SubGoal_48, hlds__goal_util__PredId_5);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word hlds__goal_util__Cond_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__Then_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 3)));
                    MR_Word hlds__goal_util__Else_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 4)));
                    MR_Word hlds__goal_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));

                    hlds__goal_util__succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(hlds__goal_util__Cond_18, hlds__goal_util__PredId_5);
                    if (!(hlds__goal_util__succeeded))
                    {
                      hlds__goal_util__succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(hlds__goal_util__Then_19, hlds__goal_util__PredId_5);
                      if (!(hlds__goal_util__succeeded))
                        hlds__goal_util__succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(hlds__goal_util__Else_20, hlds__goal_util__PredId_5);
                    }
                  }
                  break;
              }
              break;
          }
        }
        if (!(hlds__goal_util__succeeded))
        {
          /* direct tailcall eliminated */
          {
            MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__Goals_4;

            hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      }
      return hlds__goal_util__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
hlds__goal_util__goal_calls_pred_id_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__PredId_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__goal_util__succeeded;
      MR_Word hlds__goal_util__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) {
        default:
          hlds__goal_util__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word hlds__goal_util__SubGoal_18 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_3), (MR_Integer) 0);

            /* direct tailcall eliminated */
            {
              MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__SubGoal_18;

              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word hlds__goal_util__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)));
            MR_Integer hlds__goal_util__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
            MR_Word hlds__goal_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
            MR_Word hlds__goal_util__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
            MR_Word hlds__goal_util__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));
            MR_Word hlds__goal_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 5)));

            hlds__goal_util__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__goal_util__PredId_5, hlds__goal_util__Var_46);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) {
            default:
              hlds__goal_util__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__goal_util__Conjuncts_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
                MR_Word hlds__goal_util___ConjType_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

                hlds__goal_util__succeeded = hlds__goal_util__goals_calls_pred_id_2_p_0(hlds__goal_util__Conjuncts_9, hlds__goal_util__PredId_5);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word hlds__goal_util__Disjuncts_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

                hlds__goal_util__succeeded = hlds__goal_util__goals_calls_pred_id_2_p_0(hlds__goal_util__Disjuncts_10, hlds__goal_util__PredId_5);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word hlds__goal_util__Cases_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));

                hlds__goal_util__succeeded = hlds__goal_util__cases_calls_pred_id_2_p_0(hlds__goal_util__Cases_13, hlds__goal_util__PredId_5);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word hlds__goal_util__Reason_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
                MR_Word hlds__goal_util__SubGoal_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
                MR_Word hlds__goal_util__FGT_21;
                MR_Word hlds__goal_util__Var_20;

                hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (hlds__goal_util__succeeded)
                {
                  hlds__goal_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 1)));
                  hlds__goal_util__FGT_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 2)));
                  switch (hlds__goal_util__FGT_21) {
                    default:
                      hlds__goal_util__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      hlds__goal_util__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      hlds__goal_util__succeeded = MR_TRUE;
                      break;
                  }
                }
                if (hlds__goal_util__succeeded)
                  hlds__goal_util__succeeded = MR_FALSE;
                else
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__SubGoal_45;

                    hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word hlds__goal_util__Cond_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Then_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Else_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));
                MR_Word hlds__goal_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

                hlds__goal_util__succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(hlds__goal_util__Cond_15, hlds__goal_util__PredId_5);
                if (!(hlds__goal_util__succeeded))
                {
                  hlds__goal_util__succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(hlds__goal_util__Then_16, hlds__goal_util__PredId_5);
                  if (!(hlds__goal_util__succeeded))
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__Else_17;

                      hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
                    }
                    continue;
                  }
                }
              }
              break;
          }
          break;
      }
      return hlds__goal_util__succeeded;
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_util__cases_calls_2_p_1(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word * hlds__goal_util__PredProcId_7,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
      MR_Word hlds__goal_util__Goal_5;
      MR_Word hlds__goal_util__Cases_6;
      MR_Word hlds__goal_util__Var_8;
      MR_Word hlds__goal_util__Var_3;
      MR_Word hlds__goal_util__Var_4;

      if (hlds__goal_util__succeeded)
      {
        hlds__goal_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
        hlds__goal_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
        hlds__goal_util__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Var_8, (MR_Integer) 0)));
        hlds__goal_util__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Var_8, (MR_Integer) 1)));
        hlds__goal_util__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Var_8, (MR_Integer) 2)));
        {
          MR_Word hlds__goal_util__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 0)));
          MR_Word hlds__goal_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 1)));

          switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_10)) {
            case (MR_Integer) 0:
              {
                MR_Word hlds__goal_util__SubGoal_24 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_10), (MR_Integer) 0);

                hlds__goal_util__goal_calls_2_p_1(hlds__goal_util__SubGoal_24, hlds__goal_util__PredProcId_7, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__goal_util__PredId_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 0)));
                MR_Integer hlds__goal_util__ProcId_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 4)));
                MR_Word hlds__goal_util__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 5)));

                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__goal_util__PredProcId_7 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__PredId_28));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__ProcId_29));
                }
                hlds__goal_util__cont(hlds__goal_util__cont_env_ptr);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 0)))) {
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__goal_util__Conjuncts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));
                    MR_Word hlds__goal_util___ConjType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));

                    hlds__goal_util__goals_calls_2_p_1(hlds__goal_util__Conjuncts_15, hlds__goal_util__PredProcId_7, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word hlds__goal_util__Disjuncts_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));

                    hlds__goal_util__goals_calls_2_p_1(hlds__goal_util__Disjuncts_16, hlds__goal_util__PredProcId_7, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word hlds__goal_util__Cases_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 3)));
                    MR_Word hlds__goal_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));

                    hlds__goal_util__cases_calls_2_p_1(hlds__goal_util__Cases_19, hlds__goal_util__PredProcId_7, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word hlds__goal_util__Reason_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__SubGoal_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__FGT_27;
                    MR_Word hlds__goal_util__Var_26;

                    hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_25, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (hlds__goal_util__succeeded)
                    {
                      hlds__goal_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_25, (MR_Integer) 1)));
                      hlds__goal_util__FGT_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_25, (MR_Integer) 2)));
                      switch (hlds__goal_util__FGT_27) {
                        default:
                          hlds__goal_util__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          hlds__goal_util__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          hlds__goal_util__succeeded = MR_TRUE;
                          break;
                      }
                    }
                    if (hlds__goal_util__succeeded)
                    {
                      hlds__goal_util__succeeded = MR_FALSE;
                      if (hlds__goal_util__succeeded)
                        hlds__goal_util__cont(hlds__goal_util__cont_env_ptr);
                    }
                    else
                      hlds__goal_util__goal_calls_2_p_1(hlds__goal_util__SubGoal_52, hlds__goal_util__PredProcId_7, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word hlds__goal_util__Cond_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__Then_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 3)));
                    MR_Word hlds__goal_util__Else_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 4)));
                    MR_Word hlds__goal_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));

                    hlds__goal_util__goal_calls_2_p_1(hlds__goal_util__Cond_21, hlds__goal_util__PredProcId_7, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                    hlds__goal_util__goal_calls_2_p_1(hlds__goal_util__Then_22, hlds__goal_util__PredProcId_7, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                    hlds__goal_util__goal_calls_2_p_1(hlds__goal_util__Else_23, hlds__goal_util__PredProcId_7, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
                  break;
              }
              break;
          }
        }
        /* direct tailcall eliminated */
        {
          MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__Cases_6;

          hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_util__goals_calls_2_p_1(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word * hlds__goal_util__PredProcId_5,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
      MR_Word hlds__goal_util__Goal_3;
      MR_Word hlds__goal_util__Goals_4;

      if (hlds__goal_util__succeeded)
      {
        hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
        hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
        {
          MR_Word hlds__goal_util__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 0)));
          MR_Word hlds__goal_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 1)));

          switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_7)) {
            case (MR_Integer) 0:
              {
                MR_Word hlds__goal_util__SubGoal_21 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_7), (MR_Integer) 0);

                hlds__goal_util__goal_calls_2_p_1(hlds__goal_util__SubGoal_21, hlds__goal_util__PredProcId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__goal_util__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 0)));
                MR_Integer hlds__goal_util__ProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 4)));
                MR_Word hlds__goal_util__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 5)));

                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__goal_util__PredProcId_5 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__PredId_25));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__ProcId_26));
                }
                hlds__goal_util__cont(hlds__goal_util__cont_env_ptr);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 0)))) {
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__goal_util__Conjuncts_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 2)));
                    MR_Word hlds__goal_util___ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));

                    hlds__goal_util__goals_calls_2_p_1(hlds__goal_util__Conjuncts_12, hlds__goal_util__PredProcId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word hlds__goal_util__Disjuncts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));

                    hlds__goal_util__goals_calls_2_p_1(hlds__goal_util__Disjuncts_13, hlds__goal_util__PredProcId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word hlds__goal_util__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 3)));
                    MR_Word hlds__goal_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 2)));

                    hlds__goal_util__cases_calls_2_p_1(hlds__goal_util__Cases_16, hlds__goal_util__PredProcId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word hlds__goal_util__Reason_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__SubGoal_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__FGT_24;
                    MR_Word hlds__goal_util__Var_23;

                    hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (hlds__goal_util__succeeded)
                    {
                      hlds__goal_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_22, (MR_Integer) 1)));
                      hlds__goal_util__FGT_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_22, (MR_Integer) 2)));
                      switch (hlds__goal_util__FGT_24) {
                        default:
                          hlds__goal_util__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          hlds__goal_util__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          hlds__goal_util__succeeded = MR_TRUE;
                          break;
                      }
                    }
                    if (hlds__goal_util__succeeded)
                    {
                      hlds__goal_util__succeeded = MR_FALSE;
                      if (hlds__goal_util__succeeded)
                        hlds__goal_util__cont(hlds__goal_util__cont_env_ptr);
                    }
                    else
                      hlds__goal_util__goal_calls_2_p_1(hlds__goal_util__SubGoal_49, hlds__goal_util__PredProcId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word hlds__goal_util__Cond_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__Then_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 3)));
                    MR_Word hlds__goal_util__Else_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 4)));
                    MR_Word hlds__goal_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));

                    hlds__goal_util__goal_calls_2_p_1(hlds__goal_util__Cond_18, hlds__goal_util__PredProcId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                    hlds__goal_util__goal_calls_2_p_1(hlds__goal_util__Then_19, hlds__goal_util__PredProcId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                    hlds__goal_util__goal_calls_2_p_1(hlds__goal_util__Else_20, hlds__goal_util__PredProcId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                  }
                  break;
              }
              break;
          }
        }
        /* direct tailcall eliminated */
        {
          MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__Goals_4;

          hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
hlds__goal_util__goal_calls_2_p_1(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word * hlds__goal_util__PredProcId_5,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__goal_util__succeeded;
      MR_Word hlds__goal_util__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) {
        case (MR_Integer) 0:
          {
            MR_Word hlds__goal_util__SubGoal_18 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_3), (MR_Integer) 0);

            /* direct tailcall eliminated */
            {
              MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__SubGoal_18;

              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word hlds__goal_util__PredId_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)));
            MR_Integer hlds__goal_util__ProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
            MR_Word hlds__goal_util__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
            MR_Word hlds__goal_util__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
            MR_Word hlds__goal_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));
            MR_Word hlds__goal_util__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 5)));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *hlds__goal_util__PredProcId_5 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__PredId_22));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__ProcId_23));
            }
            hlds__goal_util__cont(hlds__goal_util__cont_env_ptr);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) {
            case (MR_Integer) 2:
              {
                MR_Word hlds__goal_util__Conjuncts_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
                MR_Word hlds__goal_util___ConjType_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

                hlds__goal_util__goals_calls_2_p_1(hlds__goal_util__Conjuncts_9, hlds__goal_util__PredProcId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word hlds__goal_util__Disjuncts_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

                hlds__goal_util__goals_calls_2_p_1(hlds__goal_util__Disjuncts_10, hlds__goal_util__PredProcId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word hlds__goal_util__Cases_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));

                hlds__goal_util__cases_calls_2_p_1(hlds__goal_util__Cases_13, hlds__goal_util__PredProcId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word hlds__goal_util__Reason_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
                MR_Word hlds__goal_util__SubGoal_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
                MR_Word hlds__goal_util__FGT_21;
                MR_Word hlds__goal_util__Var_20;

                hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (hlds__goal_util__succeeded)
                {
                  hlds__goal_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 1)));
                  hlds__goal_util__FGT_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 2)));
                  switch (hlds__goal_util__FGT_21) {
                    default:
                      hlds__goal_util__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      hlds__goal_util__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      hlds__goal_util__succeeded = MR_TRUE;
                      break;
                  }
                }
                if (hlds__goal_util__succeeded)
                {
                  hlds__goal_util__succeeded = MR_FALSE;
                  if (hlds__goal_util__succeeded)
                    hlds__goal_util__cont(hlds__goal_util__cont_env_ptr);
                }
                else
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__SubGoal_46;

                    hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word hlds__goal_util__Cond_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Then_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Else_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));
                MR_Word hlds__goal_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

                hlds__goal_util__goal_calls_2_p_1(hlds__goal_util__Cond_15, hlds__goal_util__PredProcId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                hlds__goal_util__goal_calls_2_p_1(hlds__goal_util__Then_16, hlds__goal_util__PredProcId_5, hlds__goal_util__cont, hlds__goal_util__cont_env_ptr);
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__Else_17;

                  hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
                }
                continue;
              }
              break;
          }
          break;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__goal_util__cases_calls_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__PredProcId_7)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
      MR_Word hlds__goal_util__Goal_5;
      MR_Word hlds__goal_util__Cases_6;
      MR_Word hlds__goal_util__Var_8;
      MR_Word hlds__goal_util__Var_3;
      MR_Word hlds__goal_util__Var_4;

      if (hlds__goal_util__succeeded)
      {
        hlds__goal_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
        hlds__goal_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
        hlds__goal_util__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Var_8, (MR_Integer) 0)));
        hlds__goal_util__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Var_8, (MR_Integer) 1)));
        hlds__goal_util__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Var_8, (MR_Integer) 2)));
        {
          MR_Word hlds__goal_util__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 0)));
          MR_Word hlds__goal_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 1)));

          switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_10)) {
            default:
              hlds__goal_util__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word hlds__goal_util__SubGoal_24 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_10), (MR_Integer) 0);

                hlds__goal_util__succeeded = hlds__goal_util__goal_calls_2_p_0(hlds__goal_util__SubGoal_24, hlds__goal_util__PredProcId_7);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__goal_util__PredId_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 0)));
                MR_Integer hlds__goal_util__ProcId_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__PredProcId_7, (MR_Integer) 0)));
                MR_Integer hlds__goal_util__Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__goal_util__PredProcId_7, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 4)));
                MR_Word hlds__goal_util__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_10, (MR_Integer) 5)));

                hlds__goal_util__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__goal_util__PredId_28, hlds__goal_util__Var_53);
                if (hlds__goal_util__succeeded)
                  hlds__goal_util__succeeded = (hlds__goal_util__ProcId_29 == hlds__goal_util__Var_54);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 0)))) {
                default:
                  hlds__goal_util__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__goal_util__Conjuncts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));
                    MR_Word hlds__goal_util___ConjType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));

                    hlds__goal_util__succeeded = hlds__goal_util__goals_calls_2_p_0(hlds__goal_util__Conjuncts_15, hlds__goal_util__PredProcId_7);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word hlds__goal_util__Disjuncts_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));

                    hlds__goal_util__succeeded = hlds__goal_util__goals_calls_2_p_0(hlds__goal_util__Disjuncts_16, hlds__goal_util__PredProcId_7);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word hlds__goal_util__Cases_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 3)));
                    MR_Word hlds__goal_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));

                    hlds__goal_util__succeeded = hlds__goal_util__cases_calls_2_p_0(hlds__goal_util__Cases_19, hlds__goal_util__PredProcId_7);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word hlds__goal_util__Reason_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__SubGoal_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__FGT_27;
                    MR_Word hlds__goal_util__Var_26;

                    hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_25, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (hlds__goal_util__succeeded)
                    {
                      hlds__goal_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_25, (MR_Integer) 1)));
                      hlds__goal_util__FGT_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_25, (MR_Integer) 2)));
                      switch (hlds__goal_util__FGT_27) {
                        default:
                          hlds__goal_util__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          hlds__goal_util__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          hlds__goal_util__succeeded = MR_TRUE;
                          break;
                      }
                    }
                    if (hlds__goal_util__succeeded)
                      hlds__goal_util__succeeded = MR_FALSE;
                    else
                      hlds__goal_util__succeeded = hlds__goal_util__goal_calls_2_p_0(hlds__goal_util__SubGoal_52, hlds__goal_util__PredProcId_7);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word hlds__goal_util__Cond_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__Then_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 3)));
                    MR_Word hlds__goal_util__Else_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 4)));
                    MR_Word hlds__goal_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_10, (MR_Integer) 1)));

                    hlds__goal_util__succeeded = hlds__goal_util__goal_calls_2_p_0(hlds__goal_util__Cond_21, hlds__goal_util__PredProcId_7);
                    if (!(hlds__goal_util__succeeded))
                    {
                      hlds__goal_util__succeeded = hlds__goal_util__goal_calls_2_p_0(hlds__goal_util__Then_22, hlds__goal_util__PredProcId_7);
                      if (!(hlds__goal_util__succeeded))
                        hlds__goal_util__succeeded = hlds__goal_util__goal_calls_2_p_0(hlds__goal_util__Else_23, hlds__goal_util__PredProcId_7);
                    }
                  }
                  break;
              }
              break;
          }
        }
        if (!(hlds__goal_util__succeeded))
        {
          /* direct tailcall eliminated */
          {
            MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__Cases_6;

            hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      }
      return hlds__goal_util__succeeded;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__goal_util__goals_calls_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__PredProcId_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
      MR_Word hlds__goal_util__Goal_3;
      MR_Word hlds__goal_util__Goals_4;

      if (hlds__goal_util__succeeded)
      {
        hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
        hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
        {
          MR_Word hlds__goal_util__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 0)));
          MR_Word hlds__goal_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 1)));

          switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_7)) {
            default:
              hlds__goal_util__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word hlds__goal_util__SubGoal_21 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_7), (MR_Integer) 0);

                hlds__goal_util__succeeded = hlds__goal_util__goal_calls_2_p_0(hlds__goal_util__SubGoal_21, hlds__goal_util__PredProcId_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__goal_util__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 0)));
                MR_Integer hlds__goal_util__ProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__PredProcId_5, (MR_Integer) 0)));
                MR_Integer hlds__goal_util__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__goal_util__PredProcId_5, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 4)));
                MR_Word hlds__goal_util__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_7, (MR_Integer) 5)));

                hlds__goal_util__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__goal_util__PredId_25, hlds__goal_util__Var_50);
                if (hlds__goal_util__succeeded)
                  hlds__goal_util__succeeded = (hlds__goal_util__ProcId_26 == hlds__goal_util__Var_51);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 0)))) {
                default:
                  hlds__goal_util__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__goal_util__Conjuncts_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 2)));
                    MR_Word hlds__goal_util___ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));

                    hlds__goal_util__succeeded = hlds__goal_util__goals_calls_2_p_0(hlds__goal_util__Conjuncts_12, hlds__goal_util__PredProcId_5);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word hlds__goal_util__Disjuncts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));

                    hlds__goal_util__succeeded = hlds__goal_util__goals_calls_2_p_0(hlds__goal_util__Disjuncts_13, hlds__goal_util__PredProcId_5);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word hlds__goal_util__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 3)));
                    MR_Word hlds__goal_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 2)));

                    hlds__goal_util__succeeded = hlds__goal_util__cases_calls_2_p_0(hlds__goal_util__Cases_16, hlds__goal_util__PredProcId_5);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word hlds__goal_util__Reason_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__SubGoal_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__FGT_24;
                    MR_Word hlds__goal_util__Var_23;

                    hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (hlds__goal_util__succeeded)
                    {
                      hlds__goal_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_22, (MR_Integer) 1)));
                      hlds__goal_util__FGT_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_22, (MR_Integer) 2)));
                      switch (hlds__goal_util__FGT_24) {
                        default:
                          hlds__goal_util__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          hlds__goal_util__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          hlds__goal_util__succeeded = MR_TRUE;
                          break;
                      }
                    }
                    if (hlds__goal_util__succeeded)
                      hlds__goal_util__succeeded = MR_FALSE;
                    else
                      hlds__goal_util__succeeded = hlds__goal_util__goal_calls_2_p_0(hlds__goal_util__SubGoal_49, hlds__goal_util__PredProcId_5);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word hlds__goal_util__Cond_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__Then_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 3)));
                    MR_Word hlds__goal_util__Else_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 4)));
                    MR_Word hlds__goal_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_7, (MR_Integer) 1)));

                    hlds__goal_util__succeeded = hlds__goal_util__goal_calls_2_p_0(hlds__goal_util__Cond_18, hlds__goal_util__PredProcId_5);
                    if (!(hlds__goal_util__succeeded))
                    {
                      hlds__goal_util__succeeded = hlds__goal_util__goal_calls_2_p_0(hlds__goal_util__Then_19, hlds__goal_util__PredProcId_5);
                      if (!(hlds__goal_util__succeeded))
                        hlds__goal_util__succeeded = hlds__goal_util__goal_calls_2_p_0(hlds__goal_util__Else_20, hlds__goal_util__PredProcId_5);
                    }
                  }
                  break;
              }
              break;
          }
        }
        if (!(hlds__goal_util__succeeded))
        {
          /* direct tailcall eliminated */
          {
            MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__Goals_4;

            hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      }
      return hlds__goal_util__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
hlds__goal_util__goal_calls_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__PredProcId_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__goal_util__succeeded;
      MR_Word hlds__goal_util__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) {
        default:
          hlds__goal_util__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word hlds__goal_util__SubGoal_18 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_3), (MR_Integer) 0);

            /* direct tailcall eliminated */
            {
              MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__SubGoal_18;

              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word hlds__goal_util__PredId_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)));
            MR_Integer hlds__goal_util__ProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
            MR_Word hlds__goal_util__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__PredProcId_5, (MR_Integer) 0)));
            MR_Integer hlds__goal_util__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__goal_util__PredProcId_5, (MR_Integer) 1)));
            MR_Word hlds__goal_util__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
            MR_Word hlds__goal_util__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
            MR_Word hlds__goal_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));
            MR_Word hlds__goal_util__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_3, (MR_Integer) 5)));

            hlds__goal_util__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__goal_util__PredId_22, hlds__goal_util__Var_47);
            if (hlds__goal_util__succeeded)
              hlds__goal_util__succeeded = (hlds__goal_util__ProcId_23 == hlds__goal_util__Var_48);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) {
            default:
              hlds__goal_util__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__goal_util__Conjuncts_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
                MR_Word hlds__goal_util___ConjType_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

                hlds__goal_util__succeeded = hlds__goal_util__goals_calls_2_p_0(hlds__goal_util__Conjuncts_9, hlds__goal_util__PredProcId_5);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word hlds__goal_util__Disjuncts_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

                hlds__goal_util__succeeded = hlds__goal_util__goals_calls_2_p_0(hlds__goal_util__Disjuncts_10, hlds__goal_util__PredProcId_5);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word hlds__goal_util__Cases_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));

                hlds__goal_util__succeeded = hlds__goal_util__cases_calls_2_p_0(hlds__goal_util__Cases_13, hlds__goal_util__PredProcId_5);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word hlds__goal_util__Reason_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
                MR_Word hlds__goal_util__SubGoal_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
                MR_Word hlds__goal_util__FGT_21;
                MR_Word hlds__goal_util__Var_20;

                hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (hlds__goal_util__succeeded)
                {
                  hlds__goal_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 1)));
                  hlds__goal_util__FGT_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 2)));
                  switch (hlds__goal_util__FGT_21) {
                    default:
                      hlds__goal_util__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      hlds__goal_util__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      hlds__goal_util__succeeded = MR_TRUE;
                      break;
                  }
                }
                if (hlds__goal_util__succeeded)
                  hlds__goal_util__succeeded = MR_FALSE;
                else
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__SubGoal_46;

                    hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word hlds__goal_util__Cond_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Then_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Else_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));
                MR_Word hlds__goal_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

                hlds__goal_util__succeeded = hlds__goal_util__goal_calls_2_p_0(hlds__goal_util__Cond_15, hlds__goal_util__PredProcId_5);
                if (!(hlds__goal_util__succeeded))
                {
                  hlds__goal_util__succeeded = hlds__goal_util__goal_calls_2_p_0(hlds__goal_util__Then_16, hlds__goal_util__PredProcId_5);
                  if (!(hlds__goal_util__succeeded))
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__Else_17;

                      hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
                    }
                    continue;
                  }
                }
              }
              break;
          }
          break;
      }
      return hlds__goal_util__succeeded;
    }
    break;
  }
}

MR_Word MR_CALL 
hlds__goal_util__goal_proc_refs_1_f_0(
  MR_Word hlds__goal_util__Goal_3)
{
  {
    MR_Word hlds__goal_util__ReferredToProcs_4;
    MR_Word hlds__goal_util__Var_5;

    hlds__goal_util__Var_5 = mercury__set__init_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
    hlds__goal_util__goal_proc_refs_acc_3_p_0(hlds__goal_util__Goal_3, hlds__goal_util__Var_5, &hlds__goal_util__ReferredToProcs_4);
    return hlds__goal_util__ReferredToProcs_4;
  }
}

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0_4(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3)
{
  {
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv6_STATE_VARIABLE_ReferredToProcs_10;

    hlds__goal_util__case_proc_refs_acc_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv6_STATE_VARIABLE_ReferredToProcs_10);
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv6_STATE_VARIABLE_ReferredToProcs_10));
  }
}

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0_3(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3)
{
  {
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv4_STATE_VARIABLE_ReferredToProcs_89;

    hlds__goal_util__goal_proc_refs_acc_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv4_STATE_VARIABLE_ReferredToProcs_89);
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv4_STATE_VARIABLE_ReferredToProcs_89));
  }
}

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0_2(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3)
{
  {
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv2_STATE_VARIABLE_ReferredToProcs_89;

    hlds__goal_util__goal_proc_refs_acc_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv2_STATE_VARIABLE_ReferredToProcs_89);
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv2_STATE_VARIABLE_ReferredToProcs_89));
  }
}

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3)
{
  {
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv0_STATE_VARIABLE_ReferredToProcs_89;

    hlds__goal_util__goal_proc_refs_acc_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_STATE_VARIABLE_ReferredToProcs_89);
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_STATE_VARIABLE_ReferredToProcs_89));
  }
}

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0(
  MR_Word hlds__goal_util__Goal_4,
  MR_Word hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_88,
  MR_Word * hlds__goal_util__STATE_VARIABLE_ReferredToProcs_89)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__goal_util__succeeded;
      MR_Word hlds__goal_util__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, (MR_Integer) 0)));
      MR_Word hlds__goal_util___GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word hlds__goal_util__SubGoal_18 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_6), (MR_Integer) 0);

            /* direct tailcall eliminated */
            {
              MR_Word hlds__goal_util__next_value_of_Goal_4 = hlds__goal_util__SubGoal_18;

              hlds__goal_util__Goal_4 = hlds__goal_util__next_value_of_Goal_4;
            }
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__goal_util__RHS_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
            MR_Word hlds__goal_util__Unification_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_6, (MR_Integer) 3)));
            MR_Word hlds__goal_util__STATE_VARIABLE_ReferredToProcs_91_91;
            MR_Word hlds__goal_util___LHS_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_6, (MR_Integer) 0)));
            MR_Word hlds__goal_util__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
            MR_Word hlds__goal_util__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_6, (MR_Integer) 4)));

            switch (MR_tag((MR_Word) hlds__goal_util__RHS_47)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                hlds__goal_util__STATE_VARIABLE_ReferredToProcs_91_91 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_88;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__goal_util__RHSConsId_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__RHS_47, (MR_Integer) 0)));
                  MR_Word hlds__goal_util___IsExistConstruct_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__RHS_47, (MR_Integer) 1)));
                  MR_Word hlds__goal_util___ArgVars_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__RHS_47, (MR_Integer) 2)));

                  hlds__goal_util__cons_id_proc_refs_acc_3_p_0(hlds__goal_util__RHSConsId_52, hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_88, &hlds__goal_util__STATE_VARIABLE_ReferredToProcs_91_91);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__goal_util__SubGoal_115 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_47, (MR_Integer) 6)));
                  MR_Word hlds__goal_util__Var_55 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_47, (MR_Integer) 0)))) & (MR_Integer) 3);
                  MR_Word hlds__goal_util__Var_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_47, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  MR_Word hlds__goal_util__Var_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_47, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  MR_Word hlds__goal_util__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_47, (MR_Integer) 2)));
                  MR_Word hlds__goal_util__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_47, (MR_Integer) 3)));
                  MR_Word hlds__goal_util__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_47, (MR_Integer) 4)));
                  MR_Word hlds__goal_util__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_47, (MR_Integer) 5)));

                  hlds__goal_util__goal_proc_refs_acc_3_p_0(hlds__goal_util__SubGoal_115, hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_88, &hlds__goal_util__STATE_VARIABLE_ReferredToProcs_91_91);
                }
                break;
            }
            switch (MR_tag((MR_Word) hlds__goal_util__Unification_49)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__goal_util__ConstructConsId_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unification_49, (MR_Integer) 1)));
                  MR_Word hlds__goal_util___LHSVar_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unification_49, (MR_Integer) 0)));
                  MR_Word hlds__goal_util___RHSVars_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unification_49, (MR_Integer) 2)));
                  MR_Word hlds__goal_util___ArgModes_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unification_49, (MR_Integer) 3)));
                  MR_Word hlds__goal_util___How_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unification_49, (MR_Integer) 4)));
                  MR_Word hlds__goal_util___IsUnique_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unification_49, (MR_Integer) 5)));
                  MR_Word hlds__goal_util___SubInfo_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unification_49, (MR_Integer) 6)));

                  hlds__goal_util__cons_id_proc_refs_acc_3_p_0(hlds__goal_util__ConstructConsId_64, hlds__goal_util__STATE_VARIABLE_ReferredToProcs_91_91, hlds__goal_util__STATE_VARIABLE_ReferredToProcs_89);
                }
                break;
              case (MR_Integer) 1:
                *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_89 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_91_91;
                break;
              case (MR_Integer) 2:
                *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_89 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_91_91;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Unification_49, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_89 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_91_91;
                    break;
                  case (MR_Integer) 1:
                    *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_89 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_91_91;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word hlds__goal_util__PredId_139 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 0)));
            MR_Integer hlds__goal_util__ProcId_140 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
            MR_Word hlds__goal_util__PredProcId_141;
            MR_Word hlds__goal_util__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
            MR_Word hlds__goal_util__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 3)));
            MR_Word hlds__goal_util__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 4)));
            MR_Word hlds__goal_util__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 5)));

            {
              hlds__goal_util__PredProcId_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__goal_util__PredProcId_141, 0) = ((MR_Box) (hlds__goal_util__PredId_139));
              MR_hl_field(MR_mktag(0), hlds__goal_util__PredProcId_141, 1) = ((MR_Box) (hlds__goal_util__ProcId_140));
            }
            mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (hlds__goal_util__PredProcId_141)), hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_88, hlds__goal_util__STATE_VARIABLE_ReferredToProcs_89);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_89 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_88;
              break;
            case (MR_Integer) 1:
              {
                MR_Word hlds__goal_util__PredId_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
                MR_Integer hlds__goal_util__ProcId_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 3)));
                MR_Word hlds__goal_util__PredProcId_45;
                MR_Word hlds__goal_util__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 4)));
                MR_Word hlds__goal_util__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 5)));
                MR_Word hlds__goal_util__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 6)));
                MR_Word hlds__goal_util__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 7)));

                {
                  hlds__goal_util__PredProcId_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__goal_util__PredProcId_45, 0) = ((MR_Box) (hlds__goal_util__PredId_34));
                  MR_hl_field(MR_mktag(0), hlds__goal_util__PredProcId_45, 1) = ((MR_Box) (hlds__goal_util__ProcId_35));
                }
                mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (hlds__goal_util__PredProcId_45)), hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_88, hlds__goal_util__STATE_VARIABLE_ReferredToProcs_89);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__goal_util__Conjuncts_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
                MR_Word hlds__goal_util___ConjType_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
                MR_Box hlds__goal_util__conv1_STATE_VARIABLE_ReferredToProcs_89;

                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__goal_util_scalar_common_1[2], (MR_Word) &hlds__goal_util_scalar_common_3[7], hlds__goal_util__Conjuncts_9, ((MR_Box) (hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_88)), &hlds__goal_util__conv1_STATE_VARIABLE_ReferredToProcs_89);
                *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_89 = ((MR_Word) hlds__goal_util__conv1_STATE_VARIABLE_ReferredToProcs_89);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word hlds__goal_util__Disjuncts_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
                MR_Box hlds__goal_util__conv3_STATE_VARIABLE_ReferredToProcs_89;

                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__goal_util_scalar_common_1[2], (MR_Word) &hlds__goal_util_scalar_common_3[8], hlds__goal_util__Disjuncts_10, ((MR_Box) (hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_88)), &hlds__goal_util__conv3_STATE_VARIABLE_ReferredToProcs_89);
                *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_89 = ((MR_Word) hlds__goal_util__conv3_STATE_VARIABLE_ReferredToProcs_89);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word hlds__goal_util__Cases_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
                MR_Box hlds__goal_util__conv7_STATE_VARIABLE_ReferredToProcs_89;

                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__goal_util_scalar_common_1[2], (MR_Word) &hlds__goal_util_scalar_common_3[10], hlds__goal_util__Cases_13, ((MR_Box) (hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_88)), &hlds__goal_util__conv7_STATE_VARIABLE_ReferredToProcs_89);
                *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_89 = ((MR_Word) hlds__goal_util__conv7_STATE_VARIABLE_ReferredToProcs_89);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word hlds__goal_util__Reason_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
                MR_Word hlds__goal_util__SubGoal_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
                MR_Word hlds__goal_util__FGT_21;
                MR_Word hlds__goal_util__Var_20;

                hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (hlds__goal_util__succeeded)
                {
                  hlds__goal_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 1)));
                  hlds__goal_util__FGT_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_19, (MR_Integer) 2)));
                  switch (hlds__goal_util__FGT_21) {
                    default:
                      hlds__goal_util__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      hlds__goal_util__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      hlds__goal_util__succeeded = MR_TRUE;
                      break;
                  }
                }
                if (hlds__goal_util__succeeded)
                  *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_89 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_88;
                else
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word hlds__goal_util__next_value_of_Goal_4 = hlds__goal_util__SubGoal_111;

                    hlds__goal_util__Goal_4 = hlds__goal_util__next_value_of_Goal_4;
                  }
                  continue;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word hlds__goal_util__Cond_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Then_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Else_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 4)));
                MR_Word hlds__goal_util__STATE_VARIABLE_ReferredToProcs_102_102;
                MR_Word hlds__goal_util__STATE_VARIABLE_ReferredToProcs_103_103;
                MR_Word hlds__goal_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));

                hlds__goal_util__goal_proc_refs_acc_3_p_0(hlds__goal_util__Cond_15, hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_88, &hlds__goal_util__STATE_VARIABLE_ReferredToProcs_102_102);
                hlds__goal_util__goal_proc_refs_acc_3_p_0(hlds__goal_util__Then_16, hlds__goal_util__STATE_VARIABLE_ReferredToProcs_102_102, &hlds__goal_util__STATE_VARIABLE_ReferredToProcs_103_103);
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_util__next_value_of_Goal_4 = hlds__goal_util__Else_17;
                  MR_Word hlds__goal_util__next_value_of_STATE_VARIABLE_ReferredToProcs_0_88 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_103_103;

                  hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_88 = hlds__goal_util__next_value_of_STATE_VARIABLE_ReferredToProcs_0_88;
                  hlds__goal_util__Goal_4 = hlds__goal_util__next_value_of_Goal_4;
                }
                continue;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word hlds__goal_util__Shorthand_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) hlds__goal_util__Shorthand_22)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word hlds__goal_util__SubGoalA_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Shorthand_22, (MR_Integer) 0)));
                      MR_Word hlds__goal_util__SubGoalB_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Shorthand_22, (MR_Integer) 1)));
                      MR_Word hlds__goal_util__STATE_VARIABLE_ReferredToProcs_98_98;

                      hlds__goal_util__goal_proc_refs_acc_3_p_0(hlds__goal_util__SubGoalA_23, hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_88, &hlds__goal_util__STATE_VARIABLE_ReferredToProcs_98_98);
                      /* direct tailcall eliminated */
                      {
                        MR_Word hlds__goal_util__next_value_of_Goal_4 = hlds__goal_util__SubGoalB_24;
                        MR_Word hlds__goal_util__next_value_of_STATE_VARIABLE_ReferredToProcs_0_88 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_98_98;

                        hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_88 = hlds__goal_util__next_value_of_STATE_VARIABLE_ReferredToProcs_0_88;
                        hlds__goal_util__Goal_4 = hlds__goal_util__next_value_of_Goal_4;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word hlds__goal_util__MainGoal_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_22, (MR_Integer) 4)));
                      MR_Word hlds__goal_util__OrElseGoals_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_22, (MR_Integer) 5)));
                      MR_Word hlds__goal_util__STATE_VARIABLE_ReferredToProcs_95_95;
                      MR_Word hlds__goal_util__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_22, (MR_Integer) 0)));
                      MR_Word hlds__goal_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_22, (MR_Integer) 1)));
                      MR_Word hlds__goal_util__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_22, (MR_Integer) 2)));
                      MR_Word hlds__goal_util__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_22, (MR_Integer) 3)));
                      MR_Word hlds__goal_util__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_22, (MR_Integer) 6)));
                      MR_Box hlds__goal_util__conv5_STATE_VARIABLE_ReferredToProcs_89;

                      hlds__goal_util__goal_proc_refs_acc_3_p_0(hlds__goal_util__MainGoal_29, hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_88, &hlds__goal_util__STATE_VARIABLE_ReferredToProcs_95_95);
                      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__goal_util_scalar_common_1[2], (MR_Word) &hlds__goal_util_scalar_common_3[9], hlds__goal_util__OrElseGoals_30, ((MR_Box) (hlds__goal_util__STATE_VARIABLE_ReferredToProcs_95_95)), &hlds__goal_util__conv5_STATE_VARIABLE_ReferredToProcs_89);
                      *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_89 = ((MR_Word) hlds__goal_util__conv5_STATE_VARIABLE_ReferredToProcs_89);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word hlds__goal_util__SubGoal_112 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__Shorthand_22, (MR_Integer) 2)));
                      MR_Word hlds__goal_util__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__Shorthand_22, (MR_Integer) 0)));
                      MR_Word hlds__goal_util__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__Shorthand_22, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word hlds__goal_util__next_value_of_Goal_4 = hlds__goal_util__SubGoal_112;

                        hlds__goal_util__Goal_4 = hlds__goal_util__next_value_of_Goal_4;
                      }
                      continue;
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
}

static void MR_CALL 
hlds__goal_util__cons_id_proc_refs_acc_3_p_0(
  MR_Word hlds__goal_util__ConsId_4,
  MR_Word hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40,
  MR_Word * hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41)
{
  switch (MR_tag((MR_Word) hlds__goal_util__ConsId_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
      break;
    case (MR_Integer) 1:
      *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
      break;
    case (MR_Integer) 2:
      *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__ConsId_4, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
          break;
        case (MR_Integer) 1:
          *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
          break;
        case (MR_Integer) 2:
          *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
          break;
        case (MR_Integer) 3:
          *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
          break;
        case (MR_Integer) 4:
          {
            MR_Word hlds__goal_util__ShroudedPredProcId_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__ConsId_4, (MR_Integer) 1)));
            MR_Word hlds__goal_util__PredProcId_39;

            hlds__goal_util__PredProcId_39 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__goal_util__ShroudedPredProcId_37);
            mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (hlds__goal_util__PredProcId_39)), hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40, hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41);
          }
          break;
        case (MR_Integer) 5:
          *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
          break;
        case (MR_Integer) 6:
          *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
          break;
        case (MR_Integer) 7:
          *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
          break;
        case (MR_Integer) 8:
          *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
          break;
        case (MR_Integer) 9:
          *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
          break;
        case (MR_Integer) 10:
          *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
          break;
        case (MR_Integer) 11:
          *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
          break;
        case (MR_Integer) 12:
          *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
          break;
        case (MR_Integer) 13:
          *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
          break;
        case (MR_Integer) 14:
          *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
          break;
        case (MR_Integer) 15:
          *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
          break;
        case (MR_Integer) 16:
          *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
          break;
        case (MR_Integer) 17:
          *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
          break;
        case (MR_Integer) 18:
          *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
          break;
        case (MR_Integer) 19:
          *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
          break;
        case (MR_Integer) 20:
          *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
          break;
        case (MR_Integer) 21:
          *hlds__goal_util__STATE_VARIABLE_ReferredToProcs_41 = hlds__goal_util__STATE_VARIABLE_ReferredToProcs_0_40;
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__goal_util__goals_proc_refs_1_f_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3)
{
  {
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv0_STATE_VARIABLE_ReferredToProcs_89;

    hlds__goal_util__goal_proc_refs_acc_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_STATE_VARIABLE_ReferredToProcs_89);
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_STATE_VARIABLE_ReferredToProcs_89));
  }
}

MR_Word MR_CALL 
hlds__goal_util__goals_proc_refs_1_f_0(
  MR_Word hlds__goal_util__Goals_3)
{
  {
    MR_Word hlds__goal_util__ReferredToProcs_4;
    MR_Word hlds__goal_util__Var_6;
    MR_Box hlds__goal_util__conv1_ReferredToProcs_4;

    hlds__goal_util__Var_6 = mercury__set__init_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__goal_util_scalar_common_1[2], (MR_Word) &hlds__goal_util_scalar_common_3[6], hlds__goal_util__Goals_3, ((MR_Box) (hlds__goal_util__Var_6)), &hlds__goal_util__conv1_ReferredToProcs_4);
    hlds__goal_util__ReferredToProcs_4 = ((MR_Word) hlds__goal_util__conv1_ReferredToProcs_4);
    return hlds__goal_util__ReferredToProcs_4;
  }
}

static void MR_CALL 
hlds__goal_util__clause_list_size_2_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3)
{
  {
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Integer hlds__goal_util__conv0_Size_6;

    hlds__goal_util__clause_size_increment_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Integer) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_Size_6);
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_Size_6));
  }
}

void MR_CALL 
hlds__goal_util__clause_list_size_2_p_0(
  MR_Word hlds__goal_util__Clauses_3,
  MR_Integer * hlds__goal_util__GoalSize_4)
{
  {
    MR_bool hlds__goal_util__succeeded;
    MR_Integer hlds__goal_util__GoalSize0_5;
    MR_Box hlds__goal_util__conv1_GoalSize0_5;
    MR_Word hlds__goal_util__Var_9;
    MR_Word hlds__goal_util__Var_6;

    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__goal_util_scalar_common_3[5], hlds__goal_util__Clauses_3, ((MR_Box) ((MR_Integer) 0)), &hlds__goal_util__conv1_GoalSize0_5);
    hlds__goal_util__GoalSize0_5 = ((MR_Integer) hlds__goal_util__conv1_GoalSize0_5);
    hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__Clauses_3)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__goal_util__succeeded)
    {
      hlds__goal_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Clauses_3, (MR_Integer) 0)));
      hlds__goal_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Clauses_3, (MR_Integer) 1)));
      hlds__goal_util__succeeded = (hlds__goal_util__Var_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (hlds__goal_util__succeeded)
      *hlds__goal_util__GoalSize_4 = hlds__goal_util__GoalSize0_5;
    else
    {
      *hlds__goal_util__GoalSize_4 = (hlds__goal_util__GoalSize0_5 + (MR_Integer) 1);
    }
  }
}

static void MR_CALL 
hlds__goal_util__cases_size_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Integer * hlds__goal_util__HeadVar__2_2)
{
  {
    MR_bool hlds__goal_util__succeeded;

    if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__goal_util__HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__goal_util__Goal_5;
      MR_Word hlds__goal_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer hlds__goal_util__Size1_8;
      MR_Integer hlds__goal_util__Size2_9;
      MR_Word hlds__goal_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__goal_util__GoalExpr_12;
      MR_Word hlds__goal_util__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Var_10, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Var_10, (MR_Integer) 1)));
      MR_Word hlds__goal_util__Var_13;

      hlds__goal_util__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Var_10, (MR_Integer) 2)));
      hlds__goal_util__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 0)));
      hlds__goal_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_5, (MR_Integer) 1)));
      switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word hlds__goal_util__SubGoal_52 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_12), (MR_Integer) 0);
            MR_Integer hlds__goal_util__Size1_83;

            hlds__goal_util__goal_size_2_p_0(hlds__goal_util__SubGoal_52, &hlds__goal_util__Size1_83);
            hlds__goal_util__Size1_8 = (hlds__goal_util__Size1_83 + (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          hlds__goal_util__Size1_8 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_12, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              hlds__goal_util__Size1_8 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__goal_util__ConjType_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_12, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Goals_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_12, (MR_Integer) 2)));
                MR_Integer hlds__goal_util__InnerSize_41;

                hlds__goal_util__goals_size_2_p_0(hlds__goal_util__Goals_40, &hlds__goal_util__InnerSize_41);
                switch (hlds__goal_util__ConjType_39) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      hlds__goal_util__Size1_8 = (hlds__goal_util__InnerSize_41 + (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 0:
                    hlds__goal_util__Size1_8 = hlds__goal_util__InnerSize_41;
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer hlds__goal_util__Size1_42;
                MR_Word hlds__goal_util__Goals_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_12, (MR_Integer) 1)));

                hlds__goal_util__goals_size_2_p_0(hlds__goal_util__Goals_80, &hlds__goal_util__Size1_42);
                hlds__goal_util__Size1_8 = (hlds__goal_util__Size1_42 + (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word hlds__goal_util__Cases_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_12, (MR_Integer) 3)));
                MR_Integer hlds__goal_util__Size1_81;
                MR_Word hlds__goal_util__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_12, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_12, (MR_Integer) 2)));

                hlds__goal_util__cases_size_2_p_0(hlds__goal_util__Cases_45, &hlds__goal_util__Size1_81);
                hlds__goal_util__Size1_8 = (hlds__goal_util__Size1_81 + (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word hlds__goal_util__Reason_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_12, (MR_Integer) 1)));
                MR_Word hlds__goal_util__SubGoal_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_12, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Var_71;
                MR_Word hlds__goal_util__Var_54;

                hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_53, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (hlds__goal_util__succeeded)
                {
                  hlds__goal_util__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_53, (MR_Integer) 1)));
                  hlds__goal_util__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_53, (MR_Integer) 2)));
                  hlds__goal_util__succeeded = (hlds__goal_util__Var_71 == (MR_Integer) 1);
                }
                if (hlds__goal_util__succeeded)
                  hlds__goal_util__Size1_8 = (MR_Integer) 1;
                else
                {
                  MR_Integer hlds__goal_util__Size1_84;

                  hlds__goal_util__goal_size_2_p_0(hlds__goal_util__SubGoal_87, &hlds__goal_util__Size1_84);
                  hlds__goal_util__Size1_8 = (hlds__goal_util__Size1_84 + (MR_Integer) 1);
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word hlds__goal_util__Cond_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_12, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Then_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_12, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Else_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_12, (MR_Integer) 4)));
                MR_Integer hlds__goal_util__Size2_50;
                MR_Integer hlds__goal_util__Size3_51;
                MR_Integer hlds__goal_util__Var_74;
                MR_Integer hlds__goal_util__Var_75;
                MR_Integer hlds__goal_util__Size1_82;
                MR_Word hlds__goal_util__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_12, (MR_Integer) 1)));

                hlds__goal_util__goal_size_2_p_0(hlds__goal_util__Cond_47, &hlds__goal_util__Size1_82);
                hlds__goal_util__goal_size_2_p_0(hlds__goal_util__Then_48, &hlds__goal_util__Size2_50);
                hlds__goal_util__goal_size_2_p_0(hlds__goal_util__Else_49, &hlds__goal_util__Size3_51);
                hlds__goal_util__Var_75 = (hlds__goal_util__Size1_82 + hlds__goal_util__Size2_50);
                hlds__goal_util__Var_74 = (hlds__goal_util__Var_75 + hlds__goal_util__Size3_51);
                hlds__goal_util__Size1_8 = (hlds__goal_util__Var_74 + (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word hlds__goal_util__ShortHand_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_12, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) hlds__goal_util__ShortHand_55)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word hlds__goal_util__GoalA_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_55, (MR_Integer) 0)));
                      MR_Word hlds__goal_util__GoalB_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_55, (MR_Integer) 1)));
                      MR_Integer hlds__goal_util__Var_67;
                      MR_Integer hlds__goal_util__Size1_91;
                      MR_Integer hlds__goal_util__Size2_92;

                      hlds__goal_util__goal_size_2_p_0(hlds__goal_util__GoalA_65, &hlds__goal_util__Size1_91);
                      hlds__goal_util__goal_size_2_p_0(hlds__goal_util__GoalB_66, &hlds__goal_util__Size2_92);
                      hlds__goal_util__Var_67 = (hlds__goal_util__Size1_91 + hlds__goal_util__Size2_92);
                      hlds__goal_util__Size1_8 = (hlds__goal_util__Var_67 + (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word hlds__goal_util__MainGoal_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_55, (MR_Integer) 4)));
                      MR_Word hlds__goal_util__OrElseGoals_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_55, (MR_Integer) 5)));
                      MR_Integer hlds__goal_util__Var_69;
                      MR_Integer hlds__goal_util__Size1_88;
                      MR_Integer hlds__goal_util__Size2_89;
                      MR_Word hlds__goal_util__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_55, (MR_Integer) 0)));
                      MR_Word hlds__goal_util__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_55, (MR_Integer) 1)));
                      MR_Word hlds__goal_util__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_55, (MR_Integer) 2)));
                      MR_Word hlds__goal_util__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_55, (MR_Integer) 3)));
                      MR_Word hlds__goal_util__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_55, (MR_Integer) 6)));

                      hlds__goal_util__goal_size_2_p_0(hlds__goal_util__MainGoal_60, &hlds__goal_util__Size1_88);
                      hlds__goal_util__goals_size_2_p_0(hlds__goal_util__OrElseGoals_61, &hlds__goal_util__Size2_89);
                      hlds__goal_util__Var_69 = (hlds__goal_util__Size1_88 + hlds__goal_util__Size2_89);
                      hlds__goal_util__Size1_8 = (hlds__goal_util__Var_69 + (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word hlds__goal_util__SubGoal_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_55, (MR_Integer) 2)));
                      MR_Word hlds__goal_util__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_55, (MR_Integer) 0)));
                      MR_Word hlds__goal_util__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_55, (MR_Integer) 1)));

                      hlds__goal_util__goal_size_2_p_0(hlds__goal_util__SubGoal_90, &hlds__goal_util__Size1_8);
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      hlds__goal_util__cases_size_2_p_0(hlds__goal_util__Cases_6, &hlds__goal_util__Size2_9);
      *hlds__goal_util__HeadVar__2_2 = (hlds__goal_util__Size1_8 + hlds__goal_util__Size2_9);
    }
  }
}

void MR_CALL 
hlds__goal_util__goals_size_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Integer * hlds__goal_util__HeadVar__2_2)
{
  {
    MR_bool hlds__goal_util__succeeded;

    if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__goal_util__HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer hlds__goal_util__Size1_6;
      MR_Integer hlds__goal_util__Size2_7;
      MR_Word hlds__goal_util__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_3, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word hlds__goal_util__SubGoal_49 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_9), (MR_Integer) 0);
            MR_Integer hlds__goal_util__Size1_80;

            hlds__goal_util__goal_size_2_p_0(hlds__goal_util__SubGoal_49, &hlds__goal_util__Size1_80);
            hlds__goal_util__Size1_6 = (hlds__goal_util__Size1_80 + (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          hlds__goal_util__Size1_6 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_9, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              hlds__goal_util__Size1_6 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__goal_util__ConjType_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_9, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Goals_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_9, (MR_Integer) 2)));
                MR_Integer hlds__goal_util__InnerSize_38;

                hlds__goal_util__goals_size_2_p_0(hlds__goal_util__Goals_37, &hlds__goal_util__InnerSize_38);
                switch (hlds__goal_util__ConjType_36) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      hlds__goal_util__Size1_6 = (hlds__goal_util__InnerSize_38 + (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 0:
                    hlds__goal_util__Size1_6 = hlds__goal_util__InnerSize_38;
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer hlds__goal_util__Size1_39;
                MR_Word hlds__goal_util__Goals_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_9, (MR_Integer) 1)));

                hlds__goal_util__goals_size_2_p_0(hlds__goal_util__Goals_77, &hlds__goal_util__Size1_39);
                hlds__goal_util__Size1_6 = (hlds__goal_util__Size1_39 + (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word hlds__goal_util__Cases_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_9, (MR_Integer) 3)));
                MR_Integer hlds__goal_util__Size1_78;
                MR_Word hlds__goal_util__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_9, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_9, (MR_Integer) 2)));

                hlds__goal_util__cases_size_2_p_0(hlds__goal_util__Cases_42, &hlds__goal_util__Size1_78);
                hlds__goal_util__Size1_6 = (hlds__goal_util__Size1_78 + (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word hlds__goal_util__Reason_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_9, (MR_Integer) 1)));
                MR_Word hlds__goal_util__SubGoal_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_9, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Var_68;
                MR_Word hlds__goal_util__Var_51;

                hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (hlds__goal_util__succeeded)
                {
                  hlds__goal_util__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 1)));
                  hlds__goal_util__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 2)));
                  hlds__goal_util__succeeded = (hlds__goal_util__Var_68 == (MR_Integer) 1);
                }
                if (hlds__goal_util__succeeded)
                  hlds__goal_util__Size1_6 = (MR_Integer) 1;
                else
                {
                  MR_Integer hlds__goal_util__Size1_81;

                  hlds__goal_util__goal_size_2_p_0(hlds__goal_util__SubGoal_84, &hlds__goal_util__Size1_81);
                  hlds__goal_util__Size1_6 = (hlds__goal_util__Size1_81 + (MR_Integer) 1);
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word hlds__goal_util__Cond_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_9, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Then_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_9, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Else_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_9, (MR_Integer) 4)));
                MR_Integer hlds__goal_util__Size2_47;
                MR_Integer hlds__goal_util__Size3_48;
                MR_Integer hlds__goal_util__Var_71;
                MR_Integer hlds__goal_util__Var_72;
                MR_Integer hlds__goal_util__Size1_79;
                MR_Word hlds__goal_util__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_9, (MR_Integer) 1)));

                hlds__goal_util__goal_size_2_p_0(hlds__goal_util__Cond_44, &hlds__goal_util__Size1_79);
                hlds__goal_util__goal_size_2_p_0(hlds__goal_util__Then_45, &hlds__goal_util__Size2_47);
                hlds__goal_util__goal_size_2_p_0(hlds__goal_util__Else_46, &hlds__goal_util__Size3_48);
                hlds__goal_util__Var_72 = (hlds__goal_util__Size1_79 + hlds__goal_util__Size2_47);
                hlds__goal_util__Var_71 = (hlds__goal_util__Var_72 + hlds__goal_util__Size3_48);
                hlds__goal_util__Size1_6 = (hlds__goal_util__Var_71 + (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word hlds__goal_util__ShortHand_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_9, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) hlds__goal_util__ShortHand_52)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word hlds__goal_util__GoalA_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_52, (MR_Integer) 0)));
                      MR_Word hlds__goal_util__GoalB_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_52, (MR_Integer) 1)));
                      MR_Integer hlds__goal_util__Var_64;
                      MR_Integer hlds__goal_util__Size1_88;
                      MR_Integer hlds__goal_util__Size2_89;

                      hlds__goal_util__goal_size_2_p_0(hlds__goal_util__GoalA_62, &hlds__goal_util__Size1_88);
                      hlds__goal_util__goal_size_2_p_0(hlds__goal_util__GoalB_63, &hlds__goal_util__Size2_89);
                      hlds__goal_util__Var_64 = (hlds__goal_util__Size1_88 + hlds__goal_util__Size2_89);
                      hlds__goal_util__Size1_6 = (hlds__goal_util__Var_64 + (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word hlds__goal_util__MainGoal_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_52, (MR_Integer) 4)));
                      MR_Word hlds__goal_util__OrElseGoals_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_52, (MR_Integer) 5)));
                      MR_Integer hlds__goal_util__Var_66;
                      MR_Integer hlds__goal_util__Size1_85;
                      MR_Integer hlds__goal_util__Size2_86;
                      MR_Word hlds__goal_util__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_52, (MR_Integer) 0)));
                      MR_Word hlds__goal_util__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_52, (MR_Integer) 1)));
                      MR_Word hlds__goal_util__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_52, (MR_Integer) 2)));
                      MR_Word hlds__goal_util__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_52, (MR_Integer) 3)));
                      MR_Word hlds__goal_util__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_52, (MR_Integer) 6)));

                      hlds__goal_util__goal_size_2_p_0(hlds__goal_util__MainGoal_57, &hlds__goal_util__Size1_85);
                      hlds__goal_util__goals_size_2_p_0(hlds__goal_util__OrElseGoals_58, &hlds__goal_util__Size2_86);
                      hlds__goal_util__Var_66 = (hlds__goal_util__Size1_85 + hlds__goal_util__Size2_86);
                      hlds__goal_util__Size1_6 = (hlds__goal_util__Var_66 + (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word hlds__goal_util__SubGoal_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_52, (MR_Integer) 2)));
                      MR_Word hlds__goal_util__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_52, (MR_Integer) 0)));
                      MR_Word hlds__goal_util__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_52, (MR_Integer) 1)));

                      hlds__goal_util__goal_size_2_p_0(hlds__goal_util__SubGoal_87, &hlds__goal_util__Size1_6);
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      hlds__goal_util__goals_size_2_p_0(hlds__goal_util__Goals_4, &hlds__goal_util__Size2_7);
      *hlds__goal_util__HeadVar__2_2 = (hlds__goal_util__Size1_6 + hlds__goal_util__Size2_7);
    }
  }
}

void MR_CALL 
hlds__goal_util__goal_size_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Integer * hlds__goal_util__Size_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__goal_util__succeeded;
      MR_Word hlds__goal_util__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word hlds__goal_util__SubGoal_44 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_3), (MR_Integer) 0);
            MR_Integer hlds__goal_util__Size1_75;

            hlds__goal_util__goal_size_2_p_0(hlds__goal_util__SubGoal_44, &hlds__goal_util__Size1_75);
            *hlds__goal_util__Size_5 = (hlds__goal_util__Size1_75 + (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *hlds__goal_util__Size_5 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              *hlds__goal_util__Size_5 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__goal_util__ConjType_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Goals_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
                MR_Integer hlds__goal_util__InnerSize_33;

                hlds__goal_util__goals_size_2_p_0(hlds__goal_util__Goals_32, &hlds__goal_util__InnerSize_33);
                switch (hlds__goal_util__ConjType_31) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      *hlds__goal_util__Size_5 = (hlds__goal_util__InnerSize_33 + (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 0:
                    *hlds__goal_util__Size_5 = hlds__goal_util__InnerSize_33;
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer hlds__goal_util__Size1_34;
                MR_Word hlds__goal_util__Goals_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

                hlds__goal_util__goals_size_2_p_0(hlds__goal_util__Goals_72, &hlds__goal_util__Size1_34);
                *hlds__goal_util__Size_5 = (hlds__goal_util__Size1_34 + (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word hlds__goal_util__Cases_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
                MR_Integer hlds__goal_util__Size1_73;
                MR_Word hlds__goal_util__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));

                hlds__goal_util__cases_size_2_p_0(hlds__goal_util__Cases_37, &hlds__goal_util__Size1_73);
                *hlds__goal_util__Size_5 = (hlds__goal_util__Size1_73 + (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word hlds__goal_util__Reason_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
                MR_Word hlds__goal_util__SubGoal_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Var_63;
                MR_Word hlds__goal_util__Var_46;

                hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_45, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (hlds__goal_util__succeeded)
                {
                  hlds__goal_util__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_45, (MR_Integer) 1)));
                  hlds__goal_util__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_45, (MR_Integer) 2)));
                  hlds__goal_util__succeeded = (hlds__goal_util__Var_63 == (MR_Integer) 1);
                }
                if (hlds__goal_util__succeeded)
                  *hlds__goal_util__Size_5 = (MR_Integer) 1;
                else
                {
                  MR_Integer hlds__goal_util__Size1_76;

                  hlds__goal_util__goal_size_2_p_0(hlds__goal_util__SubGoal_79, &hlds__goal_util__Size1_76);
                  *hlds__goal_util__Size_5 = (hlds__goal_util__Size1_76 + (MR_Integer) 1);
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word hlds__goal_util__Cond_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Then_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Else_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));
                MR_Integer hlds__goal_util__Size2_42;
                MR_Integer hlds__goal_util__Size3_43;
                MR_Integer hlds__goal_util__Var_66;
                MR_Integer hlds__goal_util__Var_67;
                MR_Integer hlds__goal_util__Size1_74;
                MR_Word hlds__goal_util__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

                hlds__goal_util__goal_size_2_p_0(hlds__goal_util__Cond_39, &hlds__goal_util__Size1_74);
                hlds__goal_util__goal_size_2_p_0(hlds__goal_util__Then_40, &hlds__goal_util__Size2_42);
                hlds__goal_util__goal_size_2_p_0(hlds__goal_util__Else_41, &hlds__goal_util__Size3_43);
                hlds__goal_util__Var_67 = (hlds__goal_util__Size1_74 + hlds__goal_util__Size2_42);
                hlds__goal_util__Var_66 = (hlds__goal_util__Var_67 + hlds__goal_util__Size3_43);
                *hlds__goal_util__Size_5 = (hlds__goal_util__Var_66 + (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word hlds__goal_util__ShortHand_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) hlds__goal_util__ShortHand_47)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word hlds__goal_util__GoalA_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_47, (MR_Integer) 0)));
                      MR_Word hlds__goal_util__GoalB_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_47, (MR_Integer) 1)));
                      MR_Integer hlds__goal_util__Var_59;
                      MR_Integer hlds__goal_util__Size1_83;
                      MR_Integer hlds__goal_util__Size2_84;

                      hlds__goal_util__goal_size_2_p_0(hlds__goal_util__GoalA_57, &hlds__goal_util__Size1_83);
                      hlds__goal_util__goal_size_2_p_0(hlds__goal_util__GoalB_58, &hlds__goal_util__Size2_84);
                      hlds__goal_util__Var_59 = (hlds__goal_util__Size1_83 + hlds__goal_util__Size2_84);
                      *hlds__goal_util__Size_5 = (hlds__goal_util__Var_59 + (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word hlds__goal_util__MainGoal_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_47, (MR_Integer) 4)));
                      MR_Word hlds__goal_util__OrElseGoals_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_47, (MR_Integer) 5)));
                      MR_Integer hlds__goal_util__Var_61;
                      MR_Integer hlds__goal_util__Size1_80;
                      MR_Integer hlds__goal_util__Size2_81;
                      MR_Word hlds__goal_util__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_47, (MR_Integer) 0)));
                      MR_Word hlds__goal_util__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_47, (MR_Integer) 1)));
                      MR_Word hlds__goal_util__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_47, (MR_Integer) 2)));
                      MR_Word hlds__goal_util__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_47, (MR_Integer) 3)));
                      MR_Word hlds__goal_util__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_47, (MR_Integer) 6)));

                      hlds__goal_util__goal_size_2_p_0(hlds__goal_util__MainGoal_52, &hlds__goal_util__Size1_80);
                      hlds__goal_util__goals_size_2_p_0(hlds__goal_util__OrElseGoals_53, &hlds__goal_util__Size2_81);
                      hlds__goal_util__Var_61 = (hlds__goal_util__Size1_80 + hlds__goal_util__Size2_81);
                      *hlds__goal_util__Size_5 = (hlds__goal_util__Var_61 + (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word hlds__goal_util__SubGoal_82 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_47, (MR_Integer) 2)));
                      MR_Word hlds__goal_util__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_47, (MR_Integer) 0)));
                      MR_Word hlds__goal_util__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_47, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__SubGoal_82;

                        hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
                      }
                      continue;
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
}

MR_bool MR_CALL 
hlds__goal_util__goal_is_branched_1_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1)
{
  {
    MR_bool hlds__goal_util__succeeded;

    switch (MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) {
      default:
        hlds__goal_util__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)))) {
          default:
            hlds__goal_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            hlds__goal_util__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 4:
            hlds__goal_util__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 6:
            hlds__goal_util__succeeded = MR_TRUE;
            break;
        }
        break;
    }
    return hlds__goal_util__succeeded;
  }
}

static MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_cases_1_f_0(
  MR_Word hlds__goal_util__HeadVar__1_1)
{
  {
    MR_bool hlds__goal_util__succeeded;
    MR_Word hlds__goal_util__HeadVar__2_2;

    if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__goal_util__HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__goal_util__Case_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Cases_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__goal_util__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_3, (MR_Integer) 2)));
      MR_Word hlds__goal_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_3, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case_3, (MR_Integer) 1)));
      MR_Word hlds__goal_util__Var_9;
      MR_Word hlds__goal_util__Var_10;

      hlds__goal_util__Var_9 = hlds__goal_util__proc_body_is_leaf_1_f_0(hlds__goal_util__Goal_8);
      hlds__goal_util__succeeded = (hlds__goal_util__Var_9 == (MR_Integer) 0);
      if (hlds__goal_util__succeeded)
      {
        hlds__goal_util__Var_10 = hlds__goal_util__proc_body_is_leaf_cases_1_f_0(hlds__goal_util__Cases_4);
        hlds__goal_util__succeeded = (hlds__goal_util__Var_10 == (MR_Integer) 0);
      }
      if (hlds__goal_util__succeeded)
        hlds__goal_util__HeadVar__2_2 = (MR_Integer) 0;
      else
        hlds__goal_util__HeadVar__2_2 = (MR_Integer) 1;
    }
    return hlds__goal_util__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_goals_1_f_0(
  MR_Word hlds__goal_util__HeadVar__1_1)
{
  {
    MR_bool hlds__goal_util__succeeded;
    MR_Word hlds__goal_util__HeadVar__2_2;

    if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__goal_util__HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__goal_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__goal_util__Var_6;
      MR_Word hlds__goal_util__Var_7;

      hlds__goal_util__Var_6 = hlds__goal_util__proc_body_is_leaf_1_f_0(hlds__goal_util__Goal_3);
      hlds__goal_util__succeeded = (hlds__goal_util__Var_6 == (MR_Integer) 0);
      if (hlds__goal_util__succeeded)
      {
        hlds__goal_util__Var_7 = hlds__goal_util__proc_body_is_leaf_goals_1_f_0(hlds__goal_util__Goals_4);
        hlds__goal_util__succeeded = (hlds__goal_util__Var_7 == (MR_Integer) 0);
      }
      if (hlds__goal_util__succeeded)
        hlds__goal_util__HeadVar__2_2 = (MR_Integer) 0;
      else
        hlds__goal_util__HeadVar__2_2 = (MR_Integer) 1;
    }
    return hlds__goal_util__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_1_f_0(
  MR_Word hlds__goal_util__HeadVar__1_1)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__goal_util__succeeded;
      MR_Word hlds__goal_util__IsLeaf_5;
      MR_Word hlds__goal_util__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word hlds__goal_util__SubGoal_51 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_3), (MR_Integer) 0);

            /* direct tailcall eliminated */
            {
              MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__SubGoal_51;

              hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__goal_util__UnifyKind_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
            MR_Word hlds__goal_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)));
            MR_Word hlds__goal_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
            MR_Word hlds__goal_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
            MR_Word hlds__goal_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));

            switch (MR_tag((MR_Word) hlds__goal_util__UnifyKind_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                hlds__goal_util__IsLeaf_5 = (MR_Integer) 0;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__UnifyKind_9, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    hlds__goal_util__IsLeaf_5 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    hlds__goal_util__IsLeaf_5 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          hlds__goal_util__IsLeaf_5 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              hlds__goal_util__IsLeaf_5 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__goal_util__Goals_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

                hlds__goal_util__IsLeaf_5 = hlds__goal_util__proc_body_is_leaf_goals_1_f_0(hlds__goal_util__Goals_50);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word hlds__goal_util__Goals_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

                hlds__goal_util__IsLeaf_5 = hlds__goal_util__proc_body_is_leaf_goals_1_f_0(hlds__goal_util__Goals_81);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word hlds__goal_util__Cases_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));

                hlds__goal_util__IsLeaf_5 = hlds__goal_util__proc_body_is_leaf_cases_1_f_0(hlds__goal_util__Cases_57);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word hlds__goal_util__Reason_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
                MR_Word hlds__goal_util__SubGoal_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
                MR_Word hlds__goal_util__FGT_54;
                MR_Word hlds__goal_util__Var_53;

                hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_52, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (hlds__goal_util__succeeded)
                {
                  hlds__goal_util__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_52, (MR_Integer) 1)));
                  hlds__goal_util__FGT_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_52, (MR_Integer) 2)));
                  switch (hlds__goal_util__FGT_54) {
                    default:
                      hlds__goal_util__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      hlds__goal_util__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      hlds__goal_util__succeeded = MR_TRUE;
                      break;
                  }
                }
                if (hlds__goal_util__succeeded)
                  hlds__goal_util__IsLeaf_5 = (MR_Integer) 0;
                else
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__SubGoal_80;

                    hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word hlds__goal_util__Cond_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Then_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Else_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 4)));
                MR_Word hlds__goal_util__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Var_77;
                MR_Word hlds__goal_util__Var_78;
                MR_Word hlds__goal_util__Var_79;

                hlds__goal_util__Var_77 = hlds__goal_util__proc_body_is_leaf_1_f_0(hlds__goal_util__Cond_59);
                hlds__goal_util__succeeded = (hlds__goal_util__Var_77 == (MR_Integer) 0);
                if (hlds__goal_util__succeeded)
                {
                  hlds__goal_util__Var_78 = hlds__goal_util__proc_body_is_leaf_1_f_0(hlds__goal_util__Then_60);
                  hlds__goal_util__succeeded = (hlds__goal_util__Var_78 == (MR_Integer) 0);
                  if (hlds__goal_util__succeeded)
                  {
                    hlds__goal_util__Var_79 = hlds__goal_util__proc_body_is_leaf_1_f_0(hlds__goal_util__Else_61);
                    hlds__goal_util__succeeded = (hlds__goal_util__Var_79 == (MR_Integer) 0);
                  }
                }
                if (hlds__goal_util__succeeded)
                  hlds__goal_util__IsLeaf_5 = (MR_Integer) 0;
                else
                  hlds__goal_util__IsLeaf_5 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word hlds__goal_util__ShortHand_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_3, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) hlds__goal_util__ShortHand_62)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word hlds__goal_util__GoalA_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_62, (MR_Integer) 0)));
                      MR_Word hlds__goal_util__GoalB_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_62, (MR_Integer) 1)));
                      MR_Word hlds__goal_util__Var_75;
                      MR_Word hlds__goal_util__Var_76;

                      hlds__goal_util__Var_75 = hlds__goal_util__proc_body_is_leaf_1_f_0(hlds__goal_util__GoalA_73);
                      hlds__goal_util__succeeded = (hlds__goal_util__Var_75 == (MR_Integer) 0);
                      if (hlds__goal_util__succeeded)
                      {
                        hlds__goal_util__Var_76 = hlds__goal_util__proc_body_is_leaf_1_f_0(hlds__goal_util__GoalB_74);
                        hlds__goal_util__succeeded = (hlds__goal_util__Var_76 == (MR_Integer) 0);
                      }
                      if (hlds__goal_util__succeeded)
                        hlds__goal_util__IsLeaf_5 = (MR_Integer) 0;
                      else
                        hlds__goal_util__IsLeaf_5 = (MR_Integer) 1;
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    hlds__goal_util__IsLeaf_5 = (MR_Integer) 1;
                    break;
                }
              }
              break;
          }
          break;
      }
      return hlds__goal_util__IsLeaf_5;
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_2(
  void * hlds__goal_util__env_ptr_arg)
{
  {
    struct hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0_s * hlds__goal_util__env_ptr = (struct hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0_s *) hlds__goal_util__env_ptr_arg;

    *((hlds__goal_util__env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__wrapper_arg_1) = ((MR_Box) ((hlds__goal_util__env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__conv1_LambdaHeadVar__1_32));
    ((hlds__goal_util__env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__cont)((hlds__goal_util__env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box * hlds__goal_util__wrapper_arg_1,
  MR_Cont hlds__goal_util__cont,
  void * hlds__goal_util__cont_env_ptr)
{
  {
    struct hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0_s hlds__goal_util__env;

    (hlds__goal_util__env).hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__wrapper_arg_1 = hlds__goal_util__wrapper_arg_1;
    (hlds__goal_util__env).hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__cont = hlds__goal_util__cont;
    (hlds__goal_util__env).hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__cont_env_ptr = hlds__goal_util__cont_env_ptr;
    {
      MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;

      hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 4))), &(hlds__goal_util__env).hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__conv1_LambdaHeadVar__1_32, hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_2, &hlds__goal_util__env);
    }
  }
}

static MR_Box MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1)
{
  {
    MR_Box hlds__goal_util__wrapper_arg_2;
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv0_LambdaHeadVar__2_29;

    hlds__goal_util__conv0_LambdaHeadVar__2_29 = hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__851__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__closure, (MR_Integer) 3))), ((MR_Word) hlds__goal_util__wrapper_arg_1));
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv0_LambdaHeadVar__2_29));
    return hlds__goal_util__wrapper_arg_2;
  }
}

void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0(
  MR_Word hlds__goal_util__RttiVarMaps_6,
  MR_Word hlds__goal_util__VarTypes_7,
  MR_Word hlds__goal_util__ExistQVars_8,
  MR_Word hlds__goal_util__NonLocals_9,
  MR_Word * hlds__goal_util__NonLocalTypeInfos_10)
{
  {
    MR_Word hlds__goal_util__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word hlds__goal_util__TypeInfo_39_39;
    MR_Word hlds__goal_util__TypeInfo_41_41;
    MR_Word hlds__goal_util__NonLocalsList_11;
    MR_Word hlds__goal_util__NonLocalsTypes_12;
    MR_Word hlds__goal_util__NonLocalTypeVarsList0_13;
    MR_Word hlds__goal_util__NonLocalTypeVarsList_14;
    MR_Word hlds__goal_util__NonLocalTypeVars_15;
    MR_Word hlds__goal_util__TypeVarToProgVar_16;
    MR_Word hlds__goal_util__NonLocalTypeInfoVars_20;
    MR_Word hlds__goal_util__NonLocalTypeClassInfoVarsList_26;
    MR_Word hlds__goal_util__NonLocalTypeClassInfoVars_27;
    MR_Word hlds__goal_util__Var_30;
    MR_Word hlds__goal_util__Var_31;

    parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__goal_util__TypeCtorInfo_38_38, hlds__goal_util__NonLocals_9, &hlds__goal_util__NonLocalsList_11);
    hlds__vartypes__lookup_var_types_3_p_0(hlds__goal_util__VarTypes_7, hlds__goal_util__NonLocalsList_11, &hlds__goal_util__NonLocalsTypes_12);
    parse_tree__prog_type__type_vars_list_2_p_0(hlds__goal_util__NonLocalsTypes_12, &hlds__goal_util__NonLocalTypeVarsList0_13);
    hlds__goal_util__TypeInfo_39_39 = (MR_Word) &hlds__goal_util_scalar_common_1[1];
    hlds__goal_util__NonLocalTypeVarsList_14 = mercury__list__f_43_43_2_f_0(hlds__goal_util__TypeInfo_39_39, hlds__goal_util__ExistQVars_8, hlds__goal_util__NonLocalTypeVarsList0_13);
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__goal_util__NonLocalTypeVarsList_14, &hlds__goal_util__NonLocalTypeVars_15);
    {
      hlds__goal_util__TypeVarToProgVar_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__goal_util__TypeVarToProgVar_16, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), hlds__goal_util__TypeVarToProgVar_16, 1) = ((MR_Box) (hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__goal_util__TypeVarToProgVar_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__goal_util__TypeVarToProgVar_16, 3) = ((MR_Box) (hlds__goal_util__RttiVarMaps_6));
    }
    hlds__goal_util__TypeInfo_41_41 = (MR_Word) &hlds__goal_util_scalar_common_1[0];
    hlds__goal_util__Var_30 = mercury__list__map_2_f_0(hlds__goal_util__TypeInfo_39_39, hlds__goal_util__TypeInfo_41_41, hlds__goal_util__TypeVarToProgVar_16, hlds__goal_util__NonLocalTypeVarsList_14);
    hlds__goal_util__NonLocalTypeInfoVars_20 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__goal_util__TypeCtorInfo_38_38, hlds__goal_util__Var_30);
    {
      hlds__goal_util__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_31, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_31, 1) = ((MR_Box) (hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_31, 3) = ((MR_Box) (hlds__goal_util__RttiVarMaps_6));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Var_31, 4) = ((MR_Box) (hlds__goal_util__NonLocalTypeVars_15));
    }
    mercury__solutions__solutions_2_p_1(hlds__goal_util__TypeInfo_41_41, hlds__goal_util__Var_31, &hlds__goal_util__NonLocalTypeClassInfoVarsList_26);
    parse_tree__set_of_var__sorted_list_to_set_2_p_0(hlds__goal_util__TypeCtorInfo_38_38, hlds__goal_util__NonLocalTypeClassInfoVarsList_26, &hlds__goal_util__NonLocalTypeClassInfoVars_27);
    *hlds__goal_util__NonLocalTypeInfos_10 = parse_tree__set_of_var__union_2_f_0(hlds__goal_util__TypeCtorInfo_38_38, hlds__goal_util__NonLocalTypeInfoVars_20, hlds__goal_util__NonLocalTypeClassInfoVars_27);
  }
}

void MR_CALL 
hlds__goal_util__attach_features_to_all_goals_4_p_1(
  MR_Word hlds__goal_util__Features_5,
  MR_Word hlds__goal_util__InFromGroundTerm_6,
  MR_Word hlds__goal_util__Goal0_7,
  MR_Word * hlds__goal_util__Goal_8)
{
  hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__Goal0_7, hlds__goal_util__Goal_8);
}

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__HeadVar__3_3,
  MR_Word * hlds__goal_util__HeadVar__4_4)
{
  if ((hlds__goal_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *hlds__goal_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word hlds__goal_util__Case0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word hlds__goal_util__Cases0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word hlds__goal_util__Case_11;
    MR_Word hlds__goal_util__Cases_12;
    MR_Word hlds__goal_util__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_9, (MR_Integer) 0)));
    MR_Word hlds__goal_util__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_9, (MR_Integer) 1)));
    MR_Word hlds__goal_util__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_9, (MR_Integer) 2)));
    MR_Word hlds__goal_util__Goal_16;

    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Goal0_15, &hlds__goal_util__Goal_16);
    {
      hlds__goal_util__Case_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__goal_util__Case_11, 0) = ((MR_Box) (hlds__goal_util__MainConsId_13));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Case_11, 1) = ((MR_Box) (hlds__goal_util__OtherConsIds_14));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Case_11, 2) = ((MR_Box) (hlds__goal_util__Goal_16));
    }
    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Cases0_10, &hlds__goal_util__Cases_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__goal_util__HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Case_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_util__Cases_12));
    }
  }
}

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__HeadVar__3_3,
  MR_Word * hlds__goal_util__HeadVar__4_4)
{
  if ((hlds__goal_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *hlds__goal_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word hlds__goal_util__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word hlds__goal_util__Goals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word hlds__goal_util__Goal_11;
    MR_Word hlds__goal_util__Goals_12;

    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Goal0_9, &hlds__goal_util__Goal_11);
    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Goals0_10, &hlds__goal_util__Goals_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__goal_util__HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Goal_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_util__Goals_12));
    }
  }
}

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3)
{
  {
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv0_HeadVar__3_3;

    hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_HeadVar__3_3);
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__3_3));
  }
}

void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(
  MR_Word hlds__goal_util__Features_5,
  MR_Word hlds__goal_util__Goal0_7,
  MR_Word * hlds__goal_util__Goal_8)
{
  {
    MR_bool hlds__goal_util__succeeded;
    MR_Word hlds__goal_util__GoalExpr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
    MR_Word hlds__goal_util__GoalInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
    MR_Word hlds__goal_util__GoalExpr_11;
    MR_Word hlds__goal_util__GoalInfo_12;
    MR_Box hlds__goal_util__conv1_GoalInfo_12;

    switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__goal_util__SubGoal0_60 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr0_9), (MR_Integer) 0);
          MR_Word hlds__goal_util__SubGoal_61;

          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__SubGoal0_60, &hlds__goal_util__SubGoal_61);
          hlds__goal_util__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_util__SubGoal_61);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        hlds__goal_util__GoalExpr_11 = hlds__goal_util__GoalExpr0_9;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            hlds__goal_util__GoalExpr_11 = hlds__goal_util__GoalExpr0_9;
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__goal_util__ConjType_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word hlds__goal_util__Goals0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 2)));
              MR_Word hlds__goal_util__Goals_48;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__Goals0_47, &hlds__goal_util__Goals_48);
              {
                hlds__goal_util__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 1) = ((MR_Box) (hlds__goal_util__ConjType_46));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 2) = ((MR_Box) (hlds__goal_util__Goals_48));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__goal_util__Goals0_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word hlds__goal_util__Goals_83;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__Goals0_82, &hlds__goal_util__Goals_83);
              {
                hlds__goal_util__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 1) = ((MR_Box) (hlds__goal_util__Goals_83));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__goal_util__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word hlds__goal_util__CanFail_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 2)));
              MR_Word hlds__goal_util__Cases0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 3)));
              MR_Word hlds__goal_util__Cases_52;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__Cases0_51, &hlds__goal_util__Cases_52);
              {
                hlds__goal_util__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 1) = ((MR_Box) (hlds__goal_util__Var_49));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 2) = ((MR_Box) (hlds__goal_util__CanFail_50));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 3) = ((MR_Box) (hlds__goal_util__Cases_52));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__goal_util__Reason_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word hlds__goal_util__SubGoal0_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 2)));
              MR_Word hlds__goal_util__SubGoal_85;
              MR_Word hlds__goal_util__Var_63;
              MR_Word hlds__goal_util__Var_64;

              hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_62, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (hlds__goal_util__succeeded)
              {
                hlds__goal_util__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_62, (MR_Integer) 1)));
                hlds__goal_util__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_62, (MR_Integer) 2)));
                hlds__goal_util__SubGoal_85 = hlds__goal_util__SubGoal0_84;
              }
              else
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__SubGoal0_84, &hlds__goal_util__SubGoal_85);
              {
                hlds__goal_util__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 1) = ((MR_Box) (hlds__goal_util__Reason_62));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 2) = ((MR_Box) (hlds__goal_util__SubGoal_85));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word hlds__goal_util__Vars_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word hlds__goal_util__Cond0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 2)));
              MR_Word hlds__goal_util__Then0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 3)));
              MR_Word hlds__goal_util__Else0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 4)));
              MR_Word hlds__goal_util__Cond_57;
              MR_Word hlds__goal_util__Then_58;
              MR_Word hlds__goal_util__Else_59;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__Cond0_54, &hlds__goal_util__Cond_57);
              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__Then0_55, &hlds__goal_util__Then_58);
              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__Else0_56, &hlds__goal_util__Else_59);
              {
                hlds__goal_util__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 1) = ((MR_Box) (hlds__goal_util__Vars_53));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 2) = ((MR_Box) (hlds__goal_util__Cond_57));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 3) = ((MR_Box) (hlds__goal_util__Then_58));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 4) = ((MR_Box) (hlds__goal_util__Else_59));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word hlds__goal_util__ShortHand0_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word hlds__goal_util__ShortHand_75;

              switch (MR_tag((MR_Word) hlds__goal_util__ShortHand0_65)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word hlds__goal_util__GoalA0_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand0_65, (MR_Integer) 0)));
                    MR_Word hlds__goal_util__GoalB0_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand0_65, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__GoalA_80;
                    MR_Word hlds__goal_util__GoalB_81;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__GoalA0_78, &hlds__goal_util__GoalA_80);
                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__GoalB0_79, &hlds__goal_util__GoalB_81);
                    {
                      hlds__goal_util__ShortHand_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_75, 0) = ((MR_Box) (hlds__goal_util__GoalA_80));
                      MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_75, 1) = ((MR_Box) (hlds__goal_util__GoalB_81));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__goal_util__GoalType_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_65, (MR_Integer) 0)));
                    MR_Word hlds__goal_util__Outer_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_65, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__Inner_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_65, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__MaybeOutputVars_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_65, (MR_Integer) 3)));
                    MR_Word hlds__goal_util__MainGoal0_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_65, (MR_Integer) 4)));
                    MR_Word hlds__goal_util__OrElseGoals0_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_65, (MR_Integer) 5)));
                    MR_Word hlds__goal_util__OrElseInners_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_65, (MR_Integer) 6)));
                    MR_Word hlds__goal_util__MainGoal_73;
                    MR_Word hlds__goal_util__OrElseGoals_74;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__MainGoal0_70, &hlds__goal_util__MainGoal_73);
                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__OrElseGoals0_71, &hlds__goal_util__OrElseGoals_74);
                    {
                      hlds__goal_util__ShortHand_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_75, 0) = ((MR_Box) (hlds__goal_util__GoalType_66));
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_75, 1) = ((MR_Box) (hlds__goal_util__Outer_67));
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_75, 2) = ((MR_Box) (hlds__goal_util__Inner_68));
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_75, 3) = ((MR_Box) (hlds__goal_util__MaybeOutputVars_69));
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_75, 4) = ((MR_Box) (hlds__goal_util__MainGoal_73));
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_75, 5) = ((MR_Box) (hlds__goal_util__OrElseGoals_74));
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_75, 6) = ((MR_Box) (hlds__goal_util__OrElseInners_72));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__goal_util__MaybeIO_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_65, (MR_Integer) 0)));
                    MR_Word hlds__goal_util__ResultVar_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_65, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__SubGoal0_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_65, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__SubGoal_87;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(hlds__goal_util__Features_5, hlds__goal_util__SubGoal0_86, &hlds__goal_util__SubGoal_87);
                    {
                      hlds__goal_util__ShortHand_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_75, 0) = ((MR_Box) (hlds__goal_util__MaybeIO_76));
                      MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_75, 1) = ((MR_Box) (hlds__goal_util__ResultVar_77));
                      MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_75, 2) = ((MR_Box) (hlds__goal_util__SubGoal_87));
                    }
                  }
                  break;
              }
              {
                hlds__goal_util__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 1) = ((MR_Box) (hlds__goal_util__ShortHand_75));
              }
            }
            break;
        }
        break;
    }
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_3[4], hlds__goal_util__Features_5, ((MR_Box) (hlds__goal_util__GoalInfo0_10)), &hlds__goal_util__conv1_GoalInfo_12);
    hlds__goal_util__GoalInfo_12 = ((MR_Word) hlds__goal_util__conv1_GoalInfo_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__goal_util__Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_12));
    }
  }
}

void MR_CALL 
hlds__goal_util__attach_features_to_all_goals_4_p_0(
  MR_Word hlds__goal_util__Features_5,
  MR_Word hlds__goal_util__InFromGroundTerm_6,
  MR_Word hlds__goal_util__Goal0_7,
  MR_Word * hlds__goal_util__Goal_8)
{
  hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__Goal0_7, hlds__goal_util__Goal_8);
}

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__HeadVar__3_3,
  MR_Word * hlds__goal_util__HeadVar__4_4)
{
  if ((hlds__goal_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *hlds__goal_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word hlds__goal_util__Case0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word hlds__goal_util__Cases0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word hlds__goal_util__Case_11;
    MR_Word hlds__goal_util__Cases_12;
    MR_Word hlds__goal_util__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_9, (MR_Integer) 0)));
    MR_Word hlds__goal_util__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_9, (MR_Integer) 1)));
    MR_Word hlds__goal_util__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Case0_9, (MR_Integer) 2)));
    MR_Word hlds__goal_util__Goal_16;

    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Goal0_15, &hlds__goal_util__Goal_16);
    {
      hlds__goal_util__Case_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__goal_util__Case_11, 0) = ((MR_Box) (hlds__goal_util__MainConsId_13));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Case_11, 1) = ((MR_Box) (hlds__goal_util__OtherConsIds_14));
      MR_hl_field(MR_mktag(0), hlds__goal_util__Case_11, 2) = ((MR_Box) (hlds__goal_util__Goal_16));
    }
    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Cases0_10, &hlds__goal_util__Cases_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__goal_util__HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Case_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_util__Cases_12));
    }
  }
}

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__HeadVar__3_3,
  MR_Word * hlds__goal_util__HeadVar__4_4)
{
  if ((hlds__goal_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *hlds__goal_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word hlds__goal_util__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word hlds__goal_util__Goals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word hlds__goal_util__Goal_11;
    MR_Word hlds__goal_util__Goals_12;

    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Goal0_9, &hlds__goal_util__Goal_11);
    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__HeadVar__1_1, hlds__goal_util__Goals0_10, &hlds__goal_util__Goals_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__goal_util__HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Goal_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_util__Goals_12));
    }
  }
}

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box * hlds__goal_util__wrapper_arg_3)
{
  {
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv0_HeadVar__3_3;

    hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2), &hlds__goal_util__conv0_HeadVar__3_3);
    *hlds__goal_util__wrapper_arg_3 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__3_3));
  }
}

void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(
  MR_Word hlds__goal_util__Features_5,
  MR_Word hlds__goal_util__Goal0_7,
  MR_Word * hlds__goal_util__Goal_8)
{
  {
    MR_bool hlds__goal_util__succeeded;
    MR_Word hlds__goal_util__GoalExpr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 0)));
    MR_Word hlds__goal_util__GoalInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal0_7, (MR_Integer) 1)));
    MR_Word hlds__goal_util__GoalExpr_11;
    MR_Word hlds__goal_util__GoalInfo_12;
    MR_Box hlds__goal_util__conv1_GoalInfo_12;

    switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__goal_util__SubGoal0_60 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr0_9), (MR_Integer) 0);
          MR_Word hlds__goal_util__SubGoal_61;

          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__SubGoal0_60, &hlds__goal_util__SubGoal_61);
          hlds__goal_util__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_util__SubGoal_61);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        hlds__goal_util__GoalExpr_11 = hlds__goal_util__GoalExpr0_9;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            hlds__goal_util__GoalExpr_11 = hlds__goal_util__GoalExpr0_9;
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__goal_util__ConjType_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word hlds__goal_util__Goals0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 2)));
              MR_Word hlds__goal_util__Goals_48;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__Goals0_47, &hlds__goal_util__Goals_48);
              {
                hlds__goal_util__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 1) = ((MR_Box) (hlds__goal_util__ConjType_46));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 2) = ((MR_Box) (hlds__goal_util__Goals_48));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__goal_util__Goals0_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word hlds__goal_util__Goals_83;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__Goals0_82, &hlds__goal_util__Goals_83);
              {
                hlds__goal_util__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 1) = ((MR_Box) (hlds__goal_util__Goals_83));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__goal_util__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word hlds__goal_util__CanFail_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 2)));
              MR_Word hlds__goal_util__Cases0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 3)));
              MR_Word hlds__goal_util__Cases_52;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__Cases0_51, &hlds__goal_util__Cases_52);
              {
                hlds__goal_util__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 1) = ((MR_Box) (hlds__goal_util__Var_49));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 2) = ((MR_Box) (hlds__goal_util__CanFail_50));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 3) = ((MR_Box) (hlds__goal_util__Cases_52));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__goal_util__Reason_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word hlds__goal_util__SubGoal0_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 2)));
              MR_Word hlds__goal_util__SubGoal_85;
              MR_Word hlds__goal_util__Var_63;
              MR_Word hlds__goal_util__Var_64;

              hlds__goal_util__succeeded = ((((MR_tag((MR_Word) hlds__goal_util__Reason_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_62, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (hlds__goal_util__succeeded)
              {
                hlds__goal_util__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_62, (MR_Integer) 1)));
                hlds__goal_util__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_62, (MR_Integer) 2)));
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__SubGoal0_84, &hlds__goal_util__SubGoal_85);
              }
              else
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__SubGoal0_84, &hlds__goal_util__SubGoal_85);
              {
                hlds__goal_util__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 1) = ((MR_Box) (hlds__goal_util__Reason_62));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 2) = ((MR_Box) (hlds__goal_util__SubGoal_85));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word hlds__goal_util__Vars_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word hlds__goal_util__Cond0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 2)));
              MR_Word hlds__goal_util__Then0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 3)));
              MR_Word hlds__goal_util__Else0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 4)));
              MR_Word hlds__goal_util__Cond_57;
              MR_Word hlds__goal_util__Then_58;
              MR_Word hlds__goal_util__Else_59;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__Cond0_54, &hlds__goal_util__Cond_57);
              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__Then0_55, &hlds__goal_util__Then_58);
              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__Else0_56, &hlds__goal_util__Else_59);
              {
                hlds__goal_util__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 1) = ((MR_Box) (hlds__goal_util__Vars_53));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 2) = ((MR_Box) (hlds__goal_util__Cond_57));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 3) = ((MR_Box) (hlds__goal_util__Then_58));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 4) = ((MR_Box) (hlds__goal_util__Else_59));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word hlds__goal_util__ShortHand0_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word hlds__goal_util__ShortHand_75;

              switch (MR_tag((MR_Word) hlds__goal_util__ShortHand0_65)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word hlds__goal_util__GoalA0_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand0_65, (MR_Integer) 0)));
                    MR_Word hlds__goal_util__GoalB0_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand0_65, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__GoalA_80;
                    MR_Word hlds__goal_util__GoalB_81;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__GoalA0_78, &hlds__goal_util__GoalA_80);
                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__GoalB0_79, &hlds__goal_util__GoalB_81);
                    {
                      hlds__goal_util__ShortHand_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_75, 0) = ((MR_Box) (hlds__goal_util__GoalA_80));
                      MR_hl_field(MR_mktag(0), hlds__goal_util__ShortHand_75, 1) = ((MR_Box) (hlds__goal_util__GoalB_81));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__goal_util__GoalType_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_65, (MR_Integer) 0)));
                    MR_Word hlds__goal_util__Outer_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_65, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__Inner_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_65, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__MaybeOutputVars_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_65, (MR_Integer) 3)));
                    MR_Word hlds__goal_util__MainGoal0_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_65, (MR_Integer) 4)));
                    MR_Word hlds__goal_util__OrElseGoals0_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_65, (MR_Integer) 5)));
                    MR_Word hlds__goal_util__OrElseInners_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand0_65, (MR_Integer) 6)));
                    MR_Word hlds__goal_util__MainGoal_73;
                    MR_Word hlds__goal_util__OrElseGoals_74;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__MainGoal0_70, &hlds__goal_util__MainGoal_73);
                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__OrElseGoals0_71, &hlds__goal_util__OrElseGoals_74);
                    {
                      hlds__goal_util__ShortHand_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_75, 0) = ((MR_Box) (hlds__goal_util__GoalType_66));
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_75, 1) = ((MR_Box) (hlds__goal_util__Outer_67));
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_75, 2) = ((MR_Box) (hlds__goal_util__Inner_68));
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_75, 3) = ((MR_Box) (hlds__goal_util__MaybeOutputVars_69));
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_75, 4) = ((MR_Box) (hlds__goal_util__MainGoal_73));
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_75, 5) = ((MR_Box) (hlds__goal_util__OrElseGoals_74));
                      MR_hl_field(MR_mktag(1), hlds__goal_util__ShortHand_75, 6) = ((MR_Box) (hlds__goal_util__OrElseInners_72));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__goal_util__MaybeIO_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_65, (MR_Integer) 0)));
                    MR_Word hlds__goal_util__ResultVar_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_65, (MR_Integer) 1)));
                    MR_Word hlds__goal_util__SubGoal0_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand0_65, (MR_Integer) 2)));
                    MR_Word hlds__goal_util__SubGoal_87;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(hlds__goal_util__Features_5, hlds__goal_util__SubGoal0_86, &hlds__goal_util__SubGoal_87);
                    {
                      hlds__goal_util__ShortHand_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_75, 0) = ((MR_Box) (hlds__goal_util__MaybeIO_76));
                      MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_75, 1) = ((MR_Box) (hlds__goal_util__ResultVar_77));
                      MR_hl_field(MR_mktag(2), hlds__goal_util__ShortHand_75, 2) = ((MR_Box) (hlds__goal_util__SubGoal_87));
                    }
                  }
                  break;
              }
              {
                hlds__goal_util__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_11, 1) = ((MR_Box) (hlds__goal_util__ShortHand_75));
              }
            }
            break;
        }
        break;
    }
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &hlds__goal_util_scalar_common_3[3], hlds__goal_util__Features_5, ((MR_Box) (hlds__goal_util__GoalInfo0_10)), &hlds__goal_util__conv1_GoalInfo_12);
    hlds__goal_util__GoalInfo_12 = ((MR_Word) hlds__goal_util__conv1_GoalInfo_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__goal_util__Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_12));
    }
  }
}

void MR_CALL 
hlds__goal_util__goals_goal_vars_2_p_0(
  MR_Word hlds__goal_util__Goals_3,
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_5)
{
  {
    MR_Word hlds__goal_util__STATE_VARIABLE_Set_6_6;

    hlds__goal_util__STATE_VARIABLE_Set_6_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    hlds__goal_util__goals_goal_vars_acc_3_p_0(hlds__goal_util__Goals_3, hlds__goal_util__STATE_VARIABLE_Set_6_6, hlds__goal_util__STATE_VARIABLE_Set_5);
  }
}

void MR_CALL 
hlds__goal_util__goal_vars_2_p_0(
  MR_Word hlds__goal_util__Goal_3,
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_5)
{
  {
    MR_Word hlds__goal_util__STATE_VARIABLE_Set_6_6;

    hlds__goal_util__STATE_VARIABLE_Set_6_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    hlds__goal_util__goal_vars_acc_3_p_0(hlds__goal_util__Goal_3, hlds__goal_util__STATE_VARIABLE_Set_6_6, hlds__goal_util__STATE_VARIABLE_Set_5);
  }
}

static void MR_CALL 
hlds__goal_util__rhs_goal_vars_acc_3_p_0(
  MR_Word hlds__goal_util__RHS_4,
  MR_Word hlds__goal_util__STATE_VARIABLE_Set_0_19,
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_20)
{
  switch (MR_tag((MR_Word) hlds__goal_util__RHS_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word hlds__goal_util__X_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__RHS_4, (MR_Integer) 0)));

        parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__X_6, hlds__goal_util__STATE_VARIABLE_Set_0_19, hlds__goal_util__STATE_VARIABLE_Set_20);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word hlds__goal_util__ArgVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__RHS_4, (MR_Integer) 2)));
        MR_Word hlds__goal_util___Functor_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__RHS_4, (MR_Integer) 0)));
        MR_Word hlds__goal_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__RHS_4, (MR_Integer) 1)));

        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__ArgVars_9, hlds__goal_util__STATE_VARIABLE_Set_0_19, hlds__goal_util__STATE_VARIABLE_Set_20);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word hlds__goal_util__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        MR_Word hlds__goal_util__NonLocals_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_4, (MR_Integer) 2)));
        MR_Word hlds__goal_util__LambdaVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_4, (MR_Integer) 3)));
        MR_Word hlds__goal_util__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_4, (MR_Integer) 6)));
        MR_Word hlds__goal_util__STATE_VARIABLE_Set_21_21;
        MR_Word hlds__goal_util__STATE_VARIABLE_Set_22_22;
        MR_Word hlds__goal_util__Var_10 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_4, (MR_Integer) 0)))) & (MR_Integer) 3);
        MR_Word hlds__goal_util__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word hlds__goal_util__Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_4, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word hlds__goal_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_4, (MR_Integer) 4)));
        MR_Word hlds__goal_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__RHS_4, (MR_Integer) 5)));

        parse_tree__set_of_var__insert_list_3_p_0(hlds__goal_util__TypeCtorInfo_28_28, hlds__goal_util__NonLocals_14, hlds__goal_util__STATE_VARIABLE_Set_0_19, &hlds__goal_util__STATE_VARIABLE_Set_21_21);
        parse_tree__set_of_var__insert_list_3_p_0(hlds__goal_util__TypeCtorInfo_28_28, hlds__goal_util__LambdaVars_15, hlds__goal_util__STATE_VARIABLE_Set_21_21, &hlds__goal_util__STATE_VARIABLE_Set_22_22);
        hlds__goal_util__goal_vars_acc_3_p_0(hlds__goal_util__Goal_18, hlds__goal_util__STATE_VARIABLE_Set_22_22, hlds__goal_util__STATE_VARIABLE_Set_20);
      }
      break;
  }
}

static void MR_CALL 
hlds__goal_util__cases_goal_vars_acc_3_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__STATE_VARIABLE_Set_0_2,
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__goal_util__STATE_VARIABLE_Set_3 = hlds__goal_util__STATE_VARIABLE_Set_0_2;
    else
    {
      MR_Word hlds__goal_util__Goal_9;
      MR_Word hlds__goal_util__Cases_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__goal_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__goal_util__STATE_VARIABLE_Set_15_15;
      MR_Word hlds__goal_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Var_14, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Var_14, (MR_Integer) 1)));

      hlds__goal_util__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Var_14, (MR_Integer) 2)));
      hlds__goal_util__goal_vars_acc_3_p_0(hlds__goal_util__Goal_9, hlds__goal_util__STATE_VARIABLE_Set_0_2, &hlds__goal_util__STATE_VARIABLE_Set_15_15);
      /* direct tailcall eliminated */
      {
        MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__Cases_10;
        MR_Word hlds__goal_util__next_value_of_STATE_VARIABLE_Set_0_2 = hlds__goal_util__STATE_VARIABLE_Set_15_15;

        hlds__goal_util__STATE_VARIABLE_Set_0_2 = hlds__goal_util__next_value_of_STATE_VARIABLE_Set_0_2;
        hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_util__goals_goal_vars_acc_3_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__STATE_VARIABLE_Set_0_2,
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__goal_util__STATE_VARIABLE_Set_3 = hlds__goal_util__STATE_VARIABLE_Set_0_2;
    else
    {
      MR_Word hlds__goal_util__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__goal_util__STATE_VARIABLE_Set_12_12;

      hlds__goal_util__goal_vars_acc_3_p_0(hlds__goal_util__Goal_7, hlds__goal_util__STATE_VARIABLE_Set_0_2, &hlds__goal_util__STATE_VARIABLE_Set_12_12);
      /* direct tailcall eliminated */
      {
        MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__Goals_8;
        MR_Word hlds__goal_util__next_value_of_STATE_VARIABLE_Set_0_2 = hlds__goal_util__STATE_VARIABLE_Set_12_12;

        hlds__goal_util__STATE_VARIABLE_Set_0_2 = hlds__goal_util__next_value_of_STATE_VARIABLE_Set_0_2;
        hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
      }
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
hlds__goal_util__goal_vars_acc_3_p_0_2(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1)
{
  {
    MR_Box hlds__goal_util__wrapper_arg_2;
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv1_HeadVar__2_2;

    hlds__goal_util__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv1_HeadVar__2_2));
    return hlds__goal_util__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__goal_util__goal_vars_acc_3_p_0_1(
  MR_Box hlds__goal_util__closure_arg,
  MR_Box hlds__goal_util__wrapper_arg_1)
{
  {
    MR_Box hlds__goal_util__wrapper_arg_2;
    MR_Box hlds__goal_util__closure = hlds__goal_util__closure_arg;
    MR_Word hlds__goal_util__conv0_HeadVar__2_2;

    hlds__goal_util__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__goal_util__wrapper_arg_1));
    hlds__goal_util__wrapper_arg_2 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__2_2));
    return hlds__goal_util__wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__goal_util__goal_vars_acc_3_p_0(
  MR_Word hlds__goal_util__Goal_4,
  MR_Word hlds__goal_util__STATE_VARIABLE_Set_0_98,
  MR_Word * hlds__goal_util__STATE_VARIABLE_Set_99)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__goal_util__succeeded;
      MR_Word hlds__goal_util__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, (MR_Integer) 0)));
      MR_Word hlds__goal_util___GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_4, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) hlds__goal_util__GoalExpr_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word hlds__goal_util__SubGoal_143 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__GoalExpr_6), (MR_Integer) 0);

            /* direct tailcall eliminated */
            {
              MR_Word hlds__goal_util__next_value_of_Goal_4 = hlds__goal_util__SubGoal_143;

              hlds__goal_util__Goal_4 = hlds__goal_util__next_value_of_Goal_4;
            }
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__goal_util__TypeCtorInfo_149_149 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            MR_Word hlds__goal_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_6, (MR_Integer) 0)));
            MR_Word hlds__goal_util__RHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
            MR_Word hlds__goal_util__Unif_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_6, (MR_Integer) 3)));
            MR_Word hlds__goal_util__STATE_VARIABLE_Set_132_132;
            MR_Word hlds__goal_util__STATE_VARIABLE_Set_134_134;
            MR_Word hlds__goal_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
            MR_Word hlds__goal_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_6, (MR_Integer) 4)));

            parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_149_149, hlds__goal_util__Var_8, hlds__goal_util__STATE_VARIABLE_Set_0_98, &hlds__goal_util__STATE_VARIABLE_Set_132_132);
            switch (MR_tag((MR_Word) hlds__goal_util__Unif_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__goal_util__CellToReuse_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unif_11, (MR_Integer) 4)));
                  MR_Word hlds__goal_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unif_11, (MR_Integer) 0)));
                  MR_Word hlds__goal_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unif_11, (MR_Integer) 1)));
                  MR_Word hlds__goal_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unif_11, (MR_Integer) 2)));
                  MR_Word hlds__goal_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unif_11, (MR_Integer) 3)));
                  MR_Word hlds__goal_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unif_11, (MR_Integer) 5)));
                  MR_Word hlds__goal_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Unif_11, (MR_Integer) 6)));
                  MR_Word hlds__goal_util__TypeInfo_171_171;
                  MR_Word hlds__goal_util__Var_133;
                  MR_Word hlds__goal_util__Var_167;
                  MR_Word hlds__goal_util__Var_20;
                  MR_Word hlds__goal_util__Var_21;

                  hlds__goal_util__succeeded = ((MR_tag((MR_Word) hlds__goal_util__CellToReuse_17)) == (MR_mktag((MR_Integer) 1)));
                  if (hlds__goal_util__succeeded)
                  {
                    hlds__goal_util__Var_133 = (MR_Word) MR_body(((MR_Word) hlds__goal_util__CellToReuse_17), (MR_Integer) 1);
                    hlds__goal_util__Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Var_133, (MR_Integer) 0)));
                    hlds__goal_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Var_133, (MR_Integer) 1)));
                    hlds__goal_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Var_133, (MR_Integer) 2)));
                    hlds__goal_util__TypeInfo_171_171 = (MR_Word) &hlds__goal_util_scalar_common_1[0];
                    hlds__goal_util__succeeded = mercury__builtin__unify_2_p_0(hlds__goal_util__TypeInfo_171_171, ((MR_Box) (hlds__goal_util__Var_8)), ((MR_Box) (hlds__goal_util__Var_167)));
                  }
                  if (hlds__goal_util__succeeded)
                    parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_149_149, hlds__goal_util__Var_8, hlds__goal_util__STATE_VARIABLE_Set_132_132, &hlds__goal_util__STATE_VARIABLE_Set_134_134);
                  else
                    hlds__goal_util__STATE_VARIABLE_Set_134_134 = hlds__goal_util__STATE_VARIABLE_Set_132_132;
                }
                break;
              case (MR_Integer) 1:
                hlds__goal_util__STATE_VARIABLE_Set_134_134 = hlds__goal_util__STATE_VARIABLE_Set_132_132;
                break;
              case (MR_Integer) 2:
                hlds__goal_util__STATE_VARIABLE_Set_134_134 = hlds__goal_util__STATE_VARIABLE_Set_132_132;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Unif_11, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    hlds__goal_util__STATE_VARIABLE_Set_134_134 = hlds__goal_util__STATE_VARIABLE_Set_132_132;
                    break;
                  case (MR_Integer) 1:
                    hlds__goal_util__STATE_VARIABLE_Set_134_134 = hlds__goal_util__STATE_VARIABLE_Set_132_132;
                    break;
                }
                break;
            }
            hlds__goal_util__rhs_goal_vars_acc_3_p_0(hlds__goal_util__RHS_9, hlds__goal_util__STATE_VARIABLE_Set_134_134, hlds__goal_util__STATE_VARIABLE_Set_99);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word hlds__goal_util__ArgVars_136 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
            MR_Word hlds__goal_util__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 0)));
            MR_Integer hlds__goal_util__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
            MR_Word hlds__goal_util__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 3)));
            MR_Word hlds__goal_util__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 4)));
            MR_Word hlds__goal_util__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__GoalExpr_6, (MR_Integer) 5)));

            parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__ArgVars_136, hlds__goal_util__STATE_VARIABLE_Set_0_98, hlds__goal_util__STATE_VARIABLE_Set_99);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word hlds__goal_util__TypeCtorInfo_150_150;
                MR_Word hlds__goal_util__GenericCall_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
                MR_Word hlds__goal_util__ArgVars_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
                MR_Word hlds__goal_util__GenericCallVars_40;
                MR_Word hlds__goal_util__STATE_VARIABLE_Set_130_130;
                MR_Word hlds__goal_util__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 4)));
                MR_Word hlds__goal_util__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 5)));

                hlds__goal_util__generic_call_vars_2_p_0(hlds__goal_util__GenericCall_35, &hlds__goal_util__GenericCallVars_40);
                hlds__goal_util__TypeCtorInfo_150_150 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                parse_tree__set_of_var__insert_list_3_p_0(hlds__goal_util__TypeCtorInfo_150_150, hlds__goal_util__GenericCallVars_40, hlds__goal_util__STATE_VARIABLE_Set_0_98, &hlds__goal_util__STATE_VARIABLE_Set_130_130);
                parse_tree__set_of_var__insert_list_3_p_0(hlds__goal_util__TypeCtorInfo_150_150, hlds__goal_util__ArgVars_36, hlds__goal_util__STATE_VARIABLE_Set_130_130, hlds__goal_util__STATE_VARIABLE_Set_99);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word hlds__goal_util__TypeCtorInfo_159_159 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
                MR_Word hlds__goal_util__TypeInfo_160_160 = (MR_Word) &hlds__goal_util_scalar_common_1[0];
                MR_Word hlds__goal_util__TypeCtorInfo_165_165;
                MR_Word hlds__goal_util__Args_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 4)));
                MR_Word hlds__goal_util__ExtraArgs_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 5)));
                MR_Word hlds__goal_util__ExtraVars_80;
                MR_Word hlds__goal_util__STATE_VARIABLE_Set_112_112;
                MR_Word hlds__goal_util__ArgVars_145;
                MR_Word hlds__goal_util__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
                MR_Word hlds__goal_util__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
                MR_Integer hlds__goal_util__Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 6)));
                MR_Word hlds__goal_util__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 7)));

                hlds__goal_util__ArgVars_145 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_159_159, hlds__goal_util__TypeInfo_160_160, (MR_Word) &hlds__goal_util_scalar_common_3[1], hlds__goal_util__Args_76);
                hlds__goal_util__ExtraVars_80 = mercury__list__map_2_f_0(hlds__goal_util__TypeCtorInfo_159_159, hlds__goal_util__TypeInfo_160_160, (MR_Word) &hlds__goal_util_scalar_common_3[2], hlds__goal_util__ExtraArgs_77);
                hlds__goal_util__TypeCtorInfo_165_165 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                parse_tree__set_of_var__insert_list_3_p_0(hlds__goal_util__TypeCtorInfo_165_165, hlds__goal_util__ArgVars_145, hlds__goal_util__STATE_VARIABLE_Set_0_98, &hlds__goal_util__STATE_VARIABLE_Set_112_112);
                parse_tree__set_of_var__insert_list_3_p_0(hlds__goal_util__TypeCtorInfo_165_165, hlds__goal_util__ExtraVars_80, hlds__goal_util__STATE_VARIABLE_Set_112_112, hlds__goal_util__STATE_VARIABLE_Set_99);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__goal_util__Goals_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));

                hlds__goal_util__goals_goal_vars_acc_3_p_0(hlds__goal_util__Goals_47, hlds__goal_util__STATE_VARIABLE_Set_0_98, hlds__goal_util__STATE_VARIABLE_Set_99);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word hlds__goal_util__Goals_168 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));

                hlds__goal_util__goals_goal_vars_acc_3_p_0(hlds__goal_util__Goals_168, hlds__goal_util__STATE_VARIABLE_Set_0_98, hlds__goal_util__STATE_VARIABLE_Set_99);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word hlds__goal_util__Cases_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 3)));
                MR_Word hlds__goal_util__STATE_VARIABLE_Set_126_126;
                MR_Word hlds__goal_util__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
                MR_Word hlds__goal_util___Det_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));

                parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Var_137, hlds__goal_util__STATE_VARIABLE_Set_0_98, &hlds__goal_util__STATE_VARIABLE_Set_126_126);
                hlds__goal_util__cases_goal_vars_acc_3_p_0(hlds__goal_util__Cases_49, hlds__goal_util__STATE_VARIABLE_Set_126_126, hlds__goal_util__STATE_VARIABLE_Set_99);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word hlds__goal_util__Reason_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));
                MR_Word hlds__goal_util__SubGoal_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
                MR_Word hlds__goal_util__STATE_VARIABLE_Set_124_124;

                switch (MR_tag((MR_Word) hlds__goal_util__Reason_50)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word hlds__goal_util__Vars_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Reason_50, (MR_Integer) 0)));

                      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Vars_52, hlds__goal_util__STATE_VARIABLE_Set_0_98, &hlds__goal_util__STATE_VARIABLE_Set_124_124);
                    }
                    break;
                  case (MR_Integer) 1:
                    hlds__goal_util__STATE_VARIABLE_Set_124_124 = hlds__goal_util__STATE_VARIABLE_Set_0_98;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word hlds__goal_util__Vars_138 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__Reason_50, (MR_Integer) 0)));
                      MR_Word hlds__goal_util__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__Reason_50, (MR_Integer) 1)));

                      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Vars_138, hlds__goal_util__STATE_VARIABLE_Set_0_98, &hlds__goal_util__STATE_VARIABLE_Set_124_124);
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        hlds__goal_util__STATE_VARIABLE_Set_124_124 = hlds__goal_util__STATE_VARIABLE_Set_0_98;
                        break;
                      case (MR_Integer) 1:
                        hlds__goal_util__STATE_VARIABLE_Set_124_124 = hlds__goal_util__STATE_VARIABLE_Set_0_98;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word hlds__goal_util__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 1)));

                          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Var_140, hlds__goal_util__STATE_VARIABLE_Set_0_98, &hlds__goal_util__STATE_VARIABLE_Set_124_124);
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word hlds__goal_util__Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 1)));
                          MR_Word hlds__goal_util__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 2)));

                          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Var_169, hlds__goal_util__STATE_VARIABLE_Set_0_98, &hlds__goal_util__STATE_VARIABLE_Set_124_124);
                        }
                        break;
                      case (MR_Integer) 4:
                        hlds__goal_util__STATE_VARIABLE_Set_124_124 = hlds__goal_util__STATE_VARIABLE_Set_0_98;
                        break;
                      case (MR_Integer) 5:
                        hlds__goal_util__STATE_VARIABLE_Set_124_124 = hlds__goal_util__STATE_VARIABLE_Set_0_98;
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word hlds__goal_util__Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 1)));
                          MR_Word hlds__goal_util__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 2)));

                          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Var_139, hlds__goal_util__STATE_VARIABLE_Set_0_98, &hlds__goal_util__STATE_VARIABLE_Set_124_124);
                        }
                        break;
                      case (MR_Integer) 7:
                        hlds__goal_util__STATE_VARIABLE_Set_124_124 = hlds__goal_util__STATE_VARIABLE_Set_0_98;
                        break;
                      case (MR_Integer) 8:
                        {
                          MR_Word hlds__goal_util__TypeCtorInfo_157_157 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                          MR_Word hlds__goal_util__LCVar_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 1)));
                          MR_Word hlds__goal_util__LCSVar_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 2)));
                          MR_Word hlds__goal_util__STATE_VARIABLE_Set_119_119;
                          MR_Word hlds__goal_util__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__Reason_50, (MR_Integer) 3)));

                          parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_157_157, hlds__goal_util__LCVar_56, hlds__goal_util__STATE_VARIABLE_Set_0_98, &hlds__goal_util__STATE_VARIABLE_Set_119_119);
                          parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_157_157, hlds__goal_util__LCSVar_57, hlds__goal_util__STATE_VARIABLE_Set_119_119, &hlds__goal_util__STATE_VARIABLE_Set_124_124);
                        }
                        break;
                    }
                    break;
                }
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_util__next_value_of_Goal_4 = hlds__goal_util__SubGoal_51;
                  MR_Word hlds__goal_util__next_value_of_STATE_VARIABLE_Set_0_98 = hlds__goal_util__STATE_VARIABLE_Set_124_124;

                  hlds__goal_util__STATE_VARIABLE_Set_0_98 = hlds__goal_util__next_value_of_STATE_VARIABLE_Set_0_98;
                  hlds__goal_util__Goal_4 = hlds__goal_util__next_value_of_Goal_4;
                }
                continue;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word hlds__goal_util__Cond_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 2)));
                MR_Word hlds__goal_util__Then_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 3)));
                MR_Word hlds__goal_util__Else_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 4)));
                MR_Word hlds__goal_util__STATE_VARIABLE_Set_114_114;
                MR_Word hlds__goal_util__STATE_VARIABLE_Set_115_115;
                MR_Word hlds__goal_util__STATE_VARIABLE_Set_116_116;
                MR_Word hlds__goal_util__Vars_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));

                parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Vars_144, hlds__goal_util__STATE_VARIABLE_Set_0_98, &hlds__goal_util__STATE_VARIABLE_Set_114_114);
                hlds__goal_util__goal_vars_acc_3_p_0(hlds__goal_util__Cond_70, hlds__goal_util__STATE_VARIABLE_Set_114_114, &hlds__goal_util__STATE_VARIABLE_Set_115_115);
                hlds__goal_util__goal_vars_acc_3_p_0(hlds__goal_util__Then_71, hlds__goal_util__STATE_VARIABLE_Set_115_115, &hlds__goal_util__STATE_VARIABLE_Set_116_116);
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_util__next_value_of_Goal_4 = hlds__goal_util__Else_72;
                  MR_Word hlds__goal_util__next_value_of_STATE_VARIABLE_Set_0_98 = hlds__goal_util__STATE_VARIABLE_Set_116_116;

                  hlds__goal_util__STATE_VARIABLE_Set_0_98 = hlds__goal_util__next_value_of_STATE_VARIABLE_Set_0_98;
                  hlds__goal_util__Goal_4 = hlds__goal_util__next_value_of_Goal_4;
                }
                continue;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word hlds__goal_util__Shorthand_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_util__GoalExpr_6, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) hlds__goal_util__Shorthand_81)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word hlds__goal_util__LeftGoal_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Shorthand_81, (MR_Integer) 0)));
                      MR_Word hlds__goal_util__RightGoal_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Shorthand_81, (MR_Integer) 1)));
                      MR_Word hlds__goal_util__STATE_VARIABLE_Set_100_100;

                      hlds__goal_util__goal_vars_acc_3_p_0(hlds__goal_util__LeftGoal_96, hlds__goal_util__STATE_VARIABLE_Set_0_98, &hlds__goal_util__STATE_VARIABLE_Set_100_100);
                      /* direct tailcall eliminated */
                      {
                        MR_Word hlds__goal_util__next_value_of_Goal_4 = hlds__goal_util__RightGoal_97;
                        MR_Word hlds__goal_util__next_value_of_STATE_VARIABLE_Set_0_98 = hlds__goal_util__STATE_VARIABLE_Set_100_100;

                        hlds__goal_util__STATE_VARIABLE_Set_0_98 = hlds__goal_util__next_value_of_STATE_VARIABLE_Set_0_98;
                        hlds__goal_util__Goal_4 = hlds__goal_util__next_value_of_Goal_4;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word hlds__goal_util__TypeCtorInfo_166_166 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                      MR_Word hlds__goal_util__Outer_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_81, (MR_Integer) 1)));
                      MR_Word hlds__goal_util__Inner_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_81, (MR_Integer) 2)));
                      MR_Word hlds__goal_util__MaybeOutputVars_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_81, (MR_Integer) 3)));
                      MR_Word hlds__goal_util__MainGoal_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_81, (MR_Integer) 4)));
                      MR_Word hlds__goal_util__OrElseGoals_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_81, (MR_Integer) 5)));
                      MR_Word hlds__goal_util__OuterDI_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Outer_83, (MR_Integer) 0)));
                      MR_Word hlds__goal_util__OuterUO_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Outer_83, (MR_Integer) 1)));
                      MR_Word hlds__goal_util__InnerDI_91;
                      MR_Word hlds__goal_util__InnerUO_92;
                      MR_Word hlds__goal_util__STATE_VARIABLE_Set_103_103;
                      MR_Word hlds__goal_util__STATE_VARIABLE_Set_104_104;
                      MR_Word hlds__goal_util__STATE_VARIABLE_Set_105_105;
                      MR_Word hlds__goal_util__STATE_VARIABLE_Set_106_106;
                      MR_Word hlds__goal_util__STATE_VARIABLE_Set_107_107;
                      MR_Word hlds__goal_util__STATE_VARIABLE_Set_108_108;
                      MR_Word hlds__goal_util__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_81, (MR_Integer) 0)));
                      MR_Word hlds__goal_util__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__Shorthand_81, (MR_Integer) 6)));

                      parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_166_166, hlds__goal_util__OuterDI_89, hlds__goal_util__STATE_VARIABLE_Set_0_98, &hlds__goal_util__STATE_VARIABLE_Set_103_103);
                      parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_166_166, hlds__goal_util__OuterUO_90, hlds__goal_util__STATE_VARIABLE_Set_103_103, &hlds__goal_util__STATE_VARIABLE_Set_104_104);
                      hlds__goal_util__InnerDI_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Inner_84, (MR_Integer) 0)));
                      hlds__goal_util__InnerUO_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__Inner_84, (MR_Integer) 1)));
                      parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_166_166, hlds__goal_util__InnerDI_91, hlds__goal_util__STATE_VARIABLE_Set_104_104, &hlds__goal_util__STATE_VARIABLE_Set_105_105);
                      parse_tree__set_of_var__insert_3_p_0(hlds__goal_util__TypeCtorInfo_166_166, hlds__goal_util__InnerUO_92, hlds__goal_util__STATE_VARIABLE_Set_105_105, &hlds__goal_util__STATE_VARIABLE_Set_106_106);
                      if ((hlds__goal_util__MaybeOutputVars_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        hlds__goal_util__STATE_VARIABLE_Set_107_107 = hlds__goal_util__STATE_VARIABLE_Set_106_106;
                      else
                      {
                        MR_Word hlds__goal_util__OutputVars_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__MaybeOutputVars_85, (MR_Integer) 0)));

                        parse_tree__set_of_var__insert_list_3_p_0(hlds__goal_util__TypeCtorInfo_166_166, hlds__goal_util__OutputVars_93, hlds__goal_util__STATE_VARIABLE_Set_106_106, &hlds__goal_util__STATE_VARIABLE_Set_107_107);
                      }
                      hlds__goal_util__goal_vars_acc_3_p_0(hlds__goal_util__MainGoal_86, hlds__goal_util__STATE_VARIABLE_Set_107_107, &hlds__goal_util__STATE_VARIABLE_Set_108_108);
                      hlds__goal_util__goals_goal_vars_acc_3_p_0(hlds__goal_util__OrElseGoals_87, hlds__goal_util__STATE_VARIABLE_Set_108_108, hlds__goal_util__STATE_VARIABLE_Set_99);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word hlds__goal_util__SubGoal_146 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__Shorthand_81, (MR_Integer) 2)));
                      MR_Word hlds__goal_util__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__Shorthand_81, (MR_Integer) 0)));
                      MR_Word hlds__goal_util__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_util__Shorthand_81, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word hlds__goal_util__next_value_of_Goal_4 = hlds__goal_util__SubGoal_146;

                        hlds__goal_util__Goal_4 = hlds__goal_util__next_value_of_Goal_4;
                      }
                      continue;
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
}

void MR_CALL 
hlds__goal_util__generic_call_vars_2_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word * hlds__goal_util__HeadVar__2_2)
{
  switch (MR_tag((MR_Word) hlds__goal_util__HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word hlds__goal_util__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__goal_util__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__goal_util__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer hlds__goal_util__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__goal_util__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Var_3));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word hlds__goal_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer hlds__goal_util__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__goal_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__goal_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 3)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__goal_util__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_util__Var_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      break;
    case (MR_Integer) 2:
      *hlds__goal_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      break;
    case (MR_Integer) 3:
      *hlds__goal_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      break;
  }
}

void MR_CALL 
hlds__goal_util__clone_variables_9_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__OldVarNames_2,
  MR_Word hlds__goal_util__OldVarTypes_3,
  MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0_4,
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarSet_5,
  MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0_6,
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarTypes_7,
  MR_Word hlds__goal_util__STATE_VARIABLE_Renaming_0_8,
  MR_Word * hlds__goal_util__STATE_VARIABLE_Renaming_9)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *hlds__goal_util__STATE_VARIABLE_Renaming_9 = hlds__goal_util__STATE_VARIABLE_Renaming_0_8;
      *hlds__goal_util__STATE_VARIABLE_VarTypes_7 = hlds__goal_util__STATE_VARIABLE_VarTypes_0_6;
      *hlds__goal_util__STATE_VARIABLE_VarSet_5 = hlds__goal_util__STATE_VARIABLE_VarSet_0_4;
    }
    else
    {
      MR_Word hlds__goal_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__goal_util__Vars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_35_35;
      MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_36_36;
      MR_Word hlds__goal_util__STATE_VARIABLE_Renaming_37_37;
      MR_Word hlds__goal_util___CloneVar_28;

      hlds__goal_util__clone_variable_10_p_0(hlds__goal_util__Var_21, hlds__goal_util__OldVarNames_2, hlds__goal_util__OldVarTypes_3, hlds__goal_util__STATE_VARIABLE_VarSet_0_4, &hlds__goal_util__STATE_VARIABLE_VarSet_35_35, hlds__goal_util__STATE_VARIABLE_VarTypes_0_6, &hlds__goal_util__STATE_VARIABLE_VarTypes_36_36, hlds__goal_util__STATE_VARIABLE_Renaming_0_8, &hlds__goal_util__STATE_VARIABLE_Renaming_37_37, &hlds__goal_util___CloneVar_28);
      /* direct tailcall eliminated */
      {
        MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__Vars_22;
        MR_Word hlds__goal_util__next_value_of_STATE_VARIABLE_VarSet_0_4 = hlds__goal_util__STATE_VARIABLE_VarSet_35_35;
        MR_Word hlds__goal_util__next_value_of_STATE_VARIABLE_VarTypes_0_6 = hlds__goal_util__STATE_VARIABLE_VarTypes_36_36;
        MR_Word hlds__goal_util__next_value_of_STATE_VARIABLE_Renaming_0_8 = hlds__goal_util__STATE_VARIABLE_Renaming_37_37;

        hlds__goal_util__STATE_VARIABLE_Renaming_0_8 = hlds__goal_util__next_value_of_STATE_VARIABLE_Renaming_0_8;
        hlds__goal_util__STATE_VARIABLE_VarTypes_0_6 = hlds__goal_util__next_value_of_STATE_VARIABLE_VarTypes_0_6;
        hlds__goal_util__STATE_VARIABLE_VarSet_0_4 = hlds__goal_util__next_value_of_STATE_VARIABLE_VarSet_0_4;
        hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__goal_util__clone_variable_10_p_0(
  MR_Word hlds__goal_util__Var_11,
  MR_Word hlds__goal_util__OldVarNames_12,
  MR_Word hlds__goal_util__OldVarTypes_13,
  MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0_21,
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarSet_22,
  MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0_23,
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarTypes_24,
  MR_Word hlds__goal_util__STATE_VARIABLE_Renaming_0_25,
  MR_Word * hlds__goal_util__STATE_VARIABLE_Renaming_26,
  MR_Word * hlds__goal_util__CloneVar_17)
{
  {
    MR_bool hlds__goal_util__succeeded;
    MR_Word hlds__goal_util__CloneVarPrime_18;
    MR_Word hlds__goal_util__TypeInfo_31_31 = (MR_Word) &hlds__goal_util_scalar_common_1[0];
    MR_Box hlds__goal_util__conv0_CloneVarPrime_18;

    hlds__goal_util__succeeded = mercury__map__search_3_p_0(hlds__goal_util__TypeInfo_31_31, hlds__goal_util__TypeInfo_31_31, hlds__goal_util__STATE_VARIABLE_Renaming_0_25, ((MR_Box) (hlds__goal_util__Var_11)), &hlds__goal_util__conv0_CloneVarPrime_18);
    if (hlds__goal_util__succeeded)
    {
      hlds__goal_util__CloneVarPrime_18 = ((MR_Word) hlds__goal_util__conv0_CloneVarPrime_18);
      hlds__goal_util__succeeded = MR_TRUE;
    }
    if (hlds__goal_util__succeeded)
    {
      *hlds__goal_util__CloneVar_17 = hlds__goal_util__CloneVarPrime_18;
      *hlds__goal_util__STATE_VARIABLE_Renaming_26 = hlds__goal_util__STATE_VARIABLE_Renaming_0_25;
      *hlds__goal_util__STATE_VARIABLE_VarTypes_24 = hlds__goal_util__STATE_VARIABLE_VarTypes_0_23;
      *hlds__goal_util__STATE_VARIABLE_VarSet_22 = hlds__goal_util__STATE_VARIABLE_VarSet_0_21;
    }
    else
    {
      MR_Word hlds__goal_util__TypeInfo_35_35;
      MR_String hlds__goal_util__Name_19;
      MR_Word hlds__goal_util__VarType_20;

      hlds__goal_util__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__OldVarNames_12, hlds__goal_util__Var_11, &hlds__goal_util__Name_19);
      if (hlds__goal_util__succeeded)
      {
        mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__Name_19, hlds__goal_util__CloneVar_17, hlds__goal_util__STATE_VARIABLE_VarSet_0_21, hlds__goal_util__STATE_VARIABLE_VarSet_22);
      }
      else
      {
        mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__goal_util__CloneVar_17, hlds__goal_util__STATE_VARIABLE_VarSet_0_21, hlds__goal_util__STATE_VARIABLE_VarSet_22);
      }
      hlds__goal_util__TypeInfo_35_35 = (MR_Word) &hlds__goal_util_scalar_common_1[0];
      mercury__map__det_insert_4_p_0(hlds__goal_util__TypeInfo_35_35, hlds__goal_util__TypeInfo_35_35, ((MR_Box) (hlds__goal_util__Var_11)), ((MR_Box) (*hlds__goal_util__CloneVar_17)), hlds__goal_util__STATE_VARIABLE_Renaming_0_25, hlds__goal_util__STATE_VARIABLE_Renaming_26);
      hlds__goal_util__succeeded = hlds__vartypes__search_var_type_3_p_0(hlds__goal_util__OldVarTypes_13, hlds__goal_util__Var_11, &hlds__goal_util__VarType_20);
      if (hlds__goal_util__succeeded)
        hlds__vartypes__add_var_type_4_p_0(*hlds__goal_util__CloneVar_17, hlds__goal_util__VarType_20, hlds__goal_util__STATE_VARIABLE_VarTypes_0_23, hlds__goal_util__STATE_VARIABLE_VarTypes_24);
      else
        *hlds__goal_util__STATE_VARIABLE_VarTypes_24 = hlds__goal_util__STATE_VARIABLE_VarTypes_0_23;
    }
  }
}

void MR_CALL 
hlds__goal_util__create_renaming_9_p_0(
  MR_Word hlds__goal_util__OrigVars_10,
  MR_Word hlds__goal_util__InstMapDelta_11,
  MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0_19,
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarSet_20,
  MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0_21,
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarTypes_22,
  MR_Word * hlds__goal_util__Unifies_14,
  MR_Word * hlds__goal_util__NewVars_15,
  MR_Word * hlds__goal_util__Renaming_16)
{
  {
    MR_Word hlds__goal_util__TypeInfo_28_28 = (MR_Word) &hlds__goal_util_scalar_common_1[0];
    MR_Word hlds__goal_util__RevUnifies_17;
    MR_Word hlds__goal_util__RevNewVars_18;
    MR_Word hlds__goal_util__Var_27;

    hlds__goal_util__Var_27 = mercury__map__init_0_f_0(hlds__goal_util__TypeInfo_28_28, hlds__goal_util__TypeInfo_28_28);
    hlds__goal_util__create_renaming_2_12_p_0(hlds__goal_util__OrigVars_10, hlds__goal_util__InstMapDelta_11, hlds__goal_util__STATE_VARIABLE_VarSet_0_19, hlds__goal_util__STATE_VARIABLE_VarSet_20, hlds__goal_util__STATE_VARIABLE_VarTypes_0_21, hlds__goal_util__STATE_VARIABLE_VarTypes_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__goal_util__RevUnifies_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__goal_util__RevNewVars_18, hlds__goal_util__Var_27, hlds__goal_util__Renaming_16);
    mercury__list__reverse_2_p_0(hlds__goal_util__TypeInfo_28_28, hlds__goal_util__RevNewVars_18, hlds__goal_util__NewVars_15);
    mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__goal_util__RevUnifies_17, hlds__goal_util__Unifies_14);
  }
}

static void MR_CALL 
hlds__goal_util__create_renaming_2_12_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__InstMapDelta_2,
  MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_0_3,
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarSet_4,
  MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_0_5,
  MR_Word * hlds__goal_util__STATE_VARIABLE_VarTypes_6,
  MR_Word hlds__goal_util__STATE_VARIABLE_RevUnifies_0_7,
  MR_Word * hlds__goal_util__STATE_VARIABLE_RevUnifies_8,
  MR_Word hlds__goal_util__STATE_VARIABLE_RevNewVars_0_9,
  MR_Word * hlds__goal_util__STATE_VARIABLE_RevNewVars_10,
  MR_Word hlds__goal_util__STATE_VARIABLE_Renaming_0_11,
  MR_Word * hlds__goal_util__STATE_VARIABLE_Renaming_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((hlds__goal_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *hlds__goal_util__STATE_VARIABLE_Renaming_12 = hlds__goal_util__STATE_VARIABLE_Renaming_0_11;
      *hlds__goal_util__STATE_VARIABLE_RevNewVars_10 = hlds__goal_util__STATE_VARIABLE_RevNewVars_0_9;
      *hlds__goal_util__STATE_VARIABLE_RevUnifies_8 = hlds__goal_util__STATE_VARIABLE_RevUnifies_0_7;
      *hlds__goal_util__STATE_VARIABLE_VarTypes_6 = hlds__goal_util__STATE_VARIABLE_VarTypes_0_5;
      *hlds__goal_util__STATE_VARIABLE_VarSet_4 = hlds__goal_util__STATE_VARIABLE_VarSet_0_3;
    }
    else
    {
      MR_Word hlds__goal_util__TypeCtorInfo_84_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
      MR_Word hlds__goal_util__TypeInfo_85_85;
      MR_Word hlds__goal_util__OrigVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__goal_util__OrigVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__goal_util__NewVar_37;
      MR_Word hlds__goal_util__Type_38;
      MR_Word hlds__goal_util__NewInst_39;
      MR_Word hlds__goal_util__UnifyMode_40;
      MR_Word hlds__goal_util__Unification_41;
      MR_Word hlds__goal_util__GoalExpr_43;
      MR_Word hlds__goal_util__NonLocals_44;
      MR_Word hlds__goal_util__UnifyInstMapDelta_45;
      MR_Word hlds__goal_util__GoalInfo_46;
      MR_Word hlds__goal_util__Goal_47;
      MR_Word hlds__goal_util__STATE_VARIABLE_VarSet_58_58;
      MR_Word hlds__goal_util__STATE_VARIABLE_VarTypes_59_59;
      MR_Word hlds__goal_util__Var_60;
      MR_Word hlds__goal_util__Var_62;
      MR_Word hlds__goal_util__Var_66;
      MR_Word hlds__goal_util__Var_67;
      MR_Word hlds__goal_util__Var_68;
      MR_Word hlds__goal_util__Var_70;
      MR_Word hlds__goal_util__Var_71;
      MR_Word hlds__goal_util__Var_75;
      MR_Word hlds__goal_util__STATE_VARIABLE_RevUnifies_76_76;
      MR_Word hlds__goal_util__STATE_VARIABLE_Renaming_77_77;
      MR_Word hlds__goal_util__STATE_VARIABLE_RevNewVars_78_78;

      mercury__varset__new_var_3_p_0(hlds__goal_util__TypeCtorInfo_84_84, &hlds__goal_util__NewVar_37, hlds__goal_util__STATE_VARIABLE_VarSet_0_3, &hlds__goal_util__STATE_VARIABLE_VarSet_58_58);
      hlds__vartypes__lookup_var_type_3_p_0(hlds__goal_util__STATE_VARIABLE_VarTypes_0_5, hlds__goal_util__OrigVar_29, &hlds__goal_util__Type_38);
      hlds__vartypes__add_var_type_4_p_0(hlds__goal_util__NewVar_37, hlds__goal_util__Type_38, hlds__goal_util__STATE_VARIABLE_VarTypes_0_5, &hlds__goal_util__STATE_VARIABLE_VarTypes_59_59);
      hlds__instmap__instmap_delta_lookup_var_3_p_0(hlds__goal_util__InstMapDelta_2, hlds__goal_util__OrigVar_29, &hlds__goal_util__NewInst_39);
      {
        hlds__goal_util__Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__goal_util__Var_60, 0) = ((MR_Box) (hlds__goal_util__NewInst_39));
        MR_hl_field(MR_mktag(0), hlds__goal_util__Var_60, 1) = ((MR_Box) (hlds__goal_util__NewInst_39));
      }
      {
        hlds__goal_util__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__goal_util__Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), hlds__goal_util__Var_62, 1) = ((MR_Box) (hlds__goal_util__NewInst_39));
      }
      {
        hlds__goal_util__UnifyMode_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__goal_util__UnifyMode_40, 0) = ((MR_Box) (hlds__goal_util__Var_60));
        MR_hl_field(MR_mktag(0), hlds__goal_util__UnifyMode_40, 1) = ((MR_Box) (hlds__goal_util__Var_62));
      }
      {
        hlds__goal_util__Unification_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), hlds__goal_util__Unification_41, 0) = ((MR_Box) (hlds__goal_util__OrigVar_29));
        MR_hl_field(MR_mktag(2), hlds__goal_util__Unification_41, 1) = ((MR_Box) (hlds__goal_util__NewVar_37));
      }
      {
        hlds__goal_util__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__goal_util__Var_66, 0) = ((MR_Box) (hlds__goal_util__NewVar_37));
      }
      {
        hlds__goal_util__GoalExpr_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_43, 0) = ((MR_Box) (hlds__goal_util__OrigVar_29));
        MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_43, 1) = ((MR_Box) (hlds__goal_util__Var_66));
        MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_43, 2) = ((MR_Box) (hlds__goal_util__UnifyMode_40));
        MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_43, 3) = ((MR_Box) (hlds__goal_util__Unification_41));
        MR_hl_field(MR_mktag(1), hlds__goal_util__GoalExpr_43, 4) = ((MR_Box) (&hlds__goal_util_scalar_common_1[6]));
      }
      {
        hlds__goal_util__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__goal_util__Var_68, 0) = ((MR_Box) (hlds__goal_util__NewVar_37));
        MR_hl_field(MR_mktag(1), hlds__goal_util__Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        hlds__goal_util__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__goal_util__Var_67, 0) = ((MR_Box) (hlds__goal_util__OrigVar_29));
        MR_hl_field(MR_mktag(1), hlds__goal_util__Var_67, 1) = ((MR_Box) (hlds__goal_util__Var_68));
      }
      parse_tree__set_of_var__list_to_set_2_p_0(hlds__goal_util__TypeCtorInfo_84_84, hlds__goal_util__Var_67, &hlds__goal_util__NonLocals_44);
      {
        hlds__goal_util__Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__goal_util__Var_71, 0) = ((MR_Box) (hlds__goal_util__OrigVar_29));
        MR_hl_field(MR_mktag(0), hlds__goal_util__Var_71, 1) = ((MR_Box) (hlds__goal_util__NewInst_39));
      }
      {
        hlds__goal_util__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__goal_util__Var_70, 0) = ((MR_Box) (hlds__goal_util__Var_71));
        MR_hl_field(MR_mktag(1), hlds__goal_util__Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      hlds__goal_util__UnifyInstMapDelta_45 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(hlds__goal_util__Var_70);
      hlds__goal_util__Var_75 = mercury__term__context_init_0_f_0();
      hlds__hlds_goal__goal_info_init_6_p_0(hlds__goal_util__NonLocals_44, hlds__goal_util__UnifyInstMapDelta_45, (MR_Integer) 0, (MR_Integer) 0, hlds__goal_util__Var_75, &hlds__goal_util__GoalInfo_46);
      {
        hlds__goal_util__Goal_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_47, 0) = ((MR_Box) (hlds__goal_util__GoalExpr_43));
        MR_hl_field(MR_mktag(0), hlds__goal_util__Goal_47, 1) = ((MR_Box) (hlds__goal_util__GoalInfo_46));
      }
      {
        hlds__goal_util__STATE_VARIABLE_RevUnifies_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__goal_util__STATE_VARIABLE_RevUnifies_76_76, 0) = ((MR_Box) (hlds__goal_util__Goal_47));
        MR_hl_field(MR_mktag(1), hlds__goal_util__STATE_VARIABLE_RevUnifies_76_76, 1) = ((MR_Box) (hlds__goal_util__STATE_VARIABLE_RevUnifies_0_7));
      }
      hlds__goal_util__TypeInfo_85_85 = (MR_Word) &hlds__goal_util_scalar_common_1[0];
      mercury__map__det_insert_4_p_0(hlds__goal_util__TypeInfo_85_85, hlds__goal_util__TypeInfo_85_85, ((MR_Box) (hlds__goal_util__OrigVar_29)), ((MR_Box) (hlds__goal_util__NewVar_37)), hlds__goal_util__STATE_VARIABLE_Renaming_0_11, &hlds__goal_util__STATE_VARIABLE_Renaming_77_77);
      {
        hlds__goal_util__STATE_VARIABLE_RevNewVars_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__goal_util__STATE_VARIABLE_RevNewVars_78_78, 0) = ((MR_Box) (hlds__goal_util__NewVar_37));
        MR_hl_field(MR_mktag(1), hlds__goal_util__STATE_VARIABLE_RevNewVars_78_78, 1) = ((MR_Box) (hlds__goal_util__STATE_VARIABLE_RevNewVars_0_9));
      }
      /* direct tailcall eliminated */
      {
        MR_Word hlds__goal_util__next_value_of_HeadVar__1_1 = hlds__goal_util__OrigVars_30;
        MR_Word hlds__goal_util__next_value_of_STATE_VARIABLE_VarSet_0_3 = hlds__goal_util__STATE_VARIABLE_VarSet_58_58;
        MR_Word hlds__goal_util__next_value_of_STATE_VARIABLE_VarTypes_0_5 = hlds__goal_util__STATE_VARIABLE_VarTypes_59_59;
        MR_Word hlds__goal_util__next_value_of_STATE_VARIABLE_RevUnifies_0_7 = hlds__goal_util__STATE_VARIABLE_RevUnifies_76_76;
        MR_Word hlds__goal_util__next_value_of_STATE_VARIABLE_RevNewVars_0_9 = hlds__goal_util__STATE_VARIABLE_RevNewVars_78_78;
        MR_Word hlds__goal_util__next_value_of_STATE_VARIABLE_Renaming_0_11 = hlds__goal_util__STATE_VARIABLE_Renaming_77_77;

        hlds__goal_util__STATE_VARIABLE_Renaming_0_11 = hlds__goal_util__next_value_of_STATE_VARIABLE_Renaming_0_11;
        hlds__goal_util__STATE_VARIABLE_RevNewVars_0_9 = hlds__goal_util__next_value_of_STATE_VARIABLE_RevNewVars_0_9;
        hlds__goal_util__STATE_VARIABLE_RevUnifies_0_7 = hlds__goal_util__next_value_of_STATE_VARIABLE_RevUnifies_0_7;
        hlds__goal_util__STATE_VARIABLE_VarTypes_0_5 = hlds__goal_util__next_value_of_STATE_VARIABLE_VarTypes_0_5;
        hlds__goal_util__STATE_VARIABLE_VarSet_0_3 = hlds__goal_util__next_value_of_STATE_VARIABLE_VarSet_0_3;
        hlds__goal_util__HeadVar__1_1 = hlds__goal_util__next_value_of_HeadVar__1_1;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__goal_util__update_instmap_3_p_0(
  MR_Word hlds__goal_util__HeadVar__1_1,
  MR_Word hlds__goal_util__STATE_VARIABLE_InstMap_0_8,
  MR_Word * hlds__goal_util__STATE_VARIABLE_InstMap_9)
{
  {
    MR_Word hlds__goal_util__GoalInfo0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word hlds__goal_util__DeltaInstMap_7;
    MR_Word hlds__goal_util___GoalExpr0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_util__HeadVar__1_1, (MR_Integer) 0)));

    hlds__goal_util__DeltaInstMap_7 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__goal_util__GoalInfo0_5);
    hlds__instmap__apply_instmap_delta_3_p_0(hlds__goal_util__STATE_VARIABLE_InstMap_0_8, hlds__goal_util__DeltaInstMap_7, hlds__goal_util__STATE_VARIABLE_InstMap_9);
  }
}

static MR_bool MR_CALL 
hlds__goal_util____Unify____attach_in_from_ground_term_0_0_10001(
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2)
{
  {
    MR_bool hlds__goal_util__succeeded;

    hlds__goal_util__succeeded = hlds__goal_util____Unify____attach_in_from_ground_term_0_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2));
    return hlds__goal_util__succeeded;
  }
}

static void MR_CALL 
hlds__goal_util____Compare____attach_in_from_ground_term_0_0_10001(
  MR_Box * hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box hlds__goal_util__wrapper_arg_3)
{
  {
    MR_Word hlds__goal_util__conv0_HeadVar__1_1;

    hlds__goal_util____Compare____attach_in_from_ground_term_0_0(&hlds__goal_util__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_util__wrapper_arg_2), ((MR_Word) hlds__goal_util__wrapper_arg_3));
    *hlds__goal_util__wrapper_arg_1 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__goal_util____Unify____goal_is_atomic_0_0_10001(
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2)
{
  {
    MR_bool hlds__goal_util__succeeded;

    hlds__goal_util__succeeded = hlds__goal_util____Unify____goal_is_atomic_0_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2));
    return hlds__goal_util__succeeded;
  }
}

static void MR_CALL 
hlds__goal_util____Compare____goal_is_atomic_0_0_10001(
  MR_Box * hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box hlds__goal_util__wrapper_arg_3)
{
  {
    MR_Word hlds__goal_util__conv0_HeadVar__1_1;

    hlds__goal_util____Compare____goal_is_atomic_0_0(&hlds__goal_util__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_util__wrapper_arg_2), ((MR_Word) hlds__goal_util__wrapper_arg_3));
    *hlds__goal_util__wrapper_arg_1 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__goal_util____Unify____is_leaf_0_0_10001(
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2)
{
  {
    MR_bool hlds__goal_util__succeeded;

    hlds__goal_util__succeeded = hlds__goal_util____Unify____is_leaf_0_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2));
    return hlds__goal_util__succeeded;
  }
}

static void MR_CALL 
hlds__goal_util____Compare____is_leaf_0_0_10001(
  MR_Box * hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box hlds__goal_util__wrapper_arg_3)
{
  {
    MR_Word hlds__goal_util__conv0_HeadVar__1_1;

    hlds__goal_util____Compare____is_leaf_0_0(&hlds__goal_util__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_util__wrapper_arg_2), ((MR_Word) hlds__goal_util__wrapper_arg_3));
    *hlds__goal_util__wrapper_arg_1 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__goal_util____Unify____maybe_transformed_goal_0_0_10001(
  MR_Box hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2)
{
  {
    MR_bool hlds__goal_util__succeeded;

    hlds__goal_util__succeeded = hlds__goal_util____Unify____maybe_transformed_goal_0_0(((MR_Word) hlds__goal_util__wrapper_arg_1), ((MR_Word) hlds__goal_util__wrapper_arg_2));
    return hlds__goal_util__succeeded;
  }
}

static void MR_CALL 
hlds__goal_util____Compare____maybe_transformed_goal_0_0_10001(
  MR_Box * hlds__goal_util__wrapper_arg_1,
  MR_Box hlds__goal_util__wrapper_arg_2,
  MR_Box hlds__goal_util__wrapper_arg_3)
{
  {
    MR_Word hlds__goal_util__conv0_HeadVar__1_1;

    hlds__goal_util____Compare____maybe_transformed_goal_0_0(&hlds__goal_util__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_util__wrapper_arg_2), ((MR_Word) hlds__goal_util__wrapper_arg_3));
    *hlds__goal_util__wrapper_arg_1 = ((MR_Box) (hlds__goal_util__conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__goal_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.goal_util. */
