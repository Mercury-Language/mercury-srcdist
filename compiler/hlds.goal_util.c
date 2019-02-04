/*
** Automatically generated from `goal_util.m'
** by the Mercury compiler,
** version rotd-2018-05-23
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


// :- module hlds.goal_util.
// :- implementation.

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
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2538__1_3_p_0(
  MR_Word TransformP_4,
  MR_Word LambdaHeadVar__1_61,
  MR_Word * LambdaHeadVar__2_62);

static MR_Word MR_CALL 
hlds__goal_util__IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap__2357__1_1_f_0(
  MR_Word LambdaHeadVar__1_106);

static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_foreign_proc__1988__1_2_p_0(
  MR_Word Purity_22,
  MR_Word PredPurity_45);

static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_simple_call__1956__1_2_p_0(
  MR_Word Purity_18,
  MR_Word PredPurity_36);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1657__1_2_p_0(
  MR_Word LambdaHeadVar__1_63,
  MR_Word * LambdaHeadVar__2_64);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0(
  MR_Word Goal_3,
  MR_Tuple * LambdaHeadVar__1_14,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0(
  MR_Word RttiVarMaps_6,
  MR_Word NonLocalTypeVars_15,
  MR_Word * LambdaHeadVar__1_32,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_Word MR_CALL 
hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__851__1_2_f_0(
  MR_Word RttiVarMaps_6,
  MR_Word LambdaHeadVar__1_28);

static MR_Word MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_case_1_f_0(
  MR_Word Case0_3);

static void MR_CALL 
hlds__goal_util__flatten_disj_acc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__goal_util__flatten_disj_acc_3_p_0(
  MR_Word Disjunct_4,
  MR_Word STATE_VARIABLE_FlatDisjuncts_0_8,
  MR_Word * STATE_VARIABLE_FlatDisjuncts_9);

static void MR_CALL 
hlds__goal_util__case_proc_refs_acc_3_p_0(
  MR_Word Case_4,
  MR_Word STATE_VARIABLE_ReferredToProcs_0_9,
  MR_Word * STATE_VARIABLE_ReferredToProcs_10);

static void MR_CALL 
hlds__goal_util__clause_size_increment_3_p_0(
  MR_Word Clause_4,
  MR_Integer Size0_5,
  MR_Integer * Size_6);

static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_3(
  MR_Box closure_arg);

static MR_Box MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__goal_util__generate_simple_call_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_util__generate_simple_call_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__goal_util__flatten_disj_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__goal_util__switch_to_disjunction_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
hlds__goal_util__case_to_disjunct_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__goal_util__pred_proc_ids_from_goal_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
hlds__goal_util__predids_from_goals_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__predids_from_goals_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
hlds__goal_util__predids_with_args_from_goal_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__predids_with_args_from_goal_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
hlds__goal_util__predids_from_goal_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__predids_from_goal_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
hlds__goal_util__goal_contains_goal_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__cases_contain_reconstruction_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
hlds__goal_util__goals_contain_reconstruction_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
hlds__goal_util__goal_calls_proc_in_set_acc_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredProcIds_7,
  MR_Word STATE_VARIABLE_CalledSet_0_58,
  MR_Word * STATE_VARIABLE_CalledSet_59);

static void MR_CALL 
hlds__goal_util__case_list_calls_proc_in_list_acc_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredProcIds_2,
  MR_Word STATE_VARIABLE_CalledSet_0_3,
  MR_Word * STATE_VARIABLE_CalledSet_4);

static void MR_CALL 
hlds__goal_util__goal_list_calls_proc_in_set_acc_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredProcIds_2,
  MR_Word STATE_VARIABLE_CalledSet_0_3,
  MR_Word * STATE_VARIABLE_CalledSet_4);

static void MR_CALL 
hlds__goal_util__cases_calls_pred_id_2_p_1(
  MR_Word HeadVar__1_1,
  MR_Word * PredId_7,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
hlds__goal_util__goals_calls_pred_id_2_p_1(
  MR_Word HeadVar__1_1,
  MR_Word * PredId_5,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
hlds__goal_util__cases_calls_pred_id_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredId_7);

static MR_bool MR_CALL 
hlds__goal_util__goals_calls_pred_id_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredId_5);

static void MR_CALL 
hlds__goal_util__cases_calls_2_p_1(
  MR_Word HeadVar__1_1,
  MR_Word * PredProcId_7,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
hlds__goal_util__goals_calls_2_p_1(
  MR_Word HeadVar__1_1,
  MR_Word * PredProcId_5,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
hlds__goal_util__cases_calls_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredProcId_7);

static MR_bool MR_CALL 
hlds__goal_util__goals_calls_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredProcId_5);

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_ReferredToProcs_0_88,
  MR_Word * STATE_VARIABLE_ReferredToProcs_89);

static void MR_CALL 
hlds__goal_util__cons_id_proc_refs_acc_3_p_0(
  MR_Word ConsId_4,
  MR_Word STATE_VARIABLE_ReferredToProcs_0_42,
  MR_Word * STATE_VARIABLE_ReferredToProcs_43);

static void MR_CALL 
hlds__goal_util__goals_proc_refs_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__goal_util__clause_list_size_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__goal_util__cases_size_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2);

static MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_cases_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_goals_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_Box MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
hlds__goal_util__goal_vars_acc_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__goal_util__goal_vars_acc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__goal_util__goal_vars_acc_3_p_0(
  MR_Word tscc_proc_1_input_1_Goal_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Set_99);

static void MR_CALL 
hlds__goal_util__rhs_goal_vars_acc_3_p_0(
  MR_Word tscc_proc_2_input_1_RHS_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Set_0_19,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Set_99);

static void MR_CALL 
hlds__goal_util__cases_goal_vars_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Set_0_2,
  MR_Word * STATE_VARIABLE_Set_3);

static void MR_CALL 
hlds__goal_util__goals_goal_vars_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Set_0_2,
  MR_Word * STATE_VARIABLE_Set_3);

static void MR_CALL 
hlds__goal_util__create_renaming_2_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMapDelta_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_VarTypes_0_5,
  MR_Word * STATE_VARIABLE_VarTypes_6,
  MR_Word STATE_VARIABLE_RevUnifies_0_7,
  MR_Word * STATE_VARIABLE_RevUnifies_8,
  MR_Word STATE_VARIABLE_RevNewVars_0_9,
  MR_Word * STATE_VARIABLE_RevNewVars_10,
  MR_Word STATE_VARIABLE_Renaming_0_11,
  MR_Word * STATE_VARIABLE_Renaming_12);

static MR_bool MR_CALL 
hlds__goal_util____Unify____attach_in_from_ground_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__goal_util____Compare____attach_in_from_ground_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_util____Unify____goal_is_atomic_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__goal_util____Compare____goal_is_atomic_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_util____Unify____is_leaf_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__goal_util____Compare____is_leaf_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_util____Unify____maybe_transformed_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__goal_util____Compare____maybe_transformed_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__goal_util_scalar_common_1[7][2];

static /* final */ const MR_Box hlds__goal_util_scalar_common_2[1][4];

static /* final */ const MR_Box hlds__goal_util_scalar_common_3[9][5];

static /* final */ const MR_Box hlds__goal_util_scalar_common_4[23][3];

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

static /* final */ const MR_Box hlds__goal_util_scalar_common_3[9][5] = {
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

static /* final */ const MR_Box hlds__goal_util_scalar_common_4[23][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[0])),
    ((MR_Box) (hlds__goal_util__goal_vars_acc_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[0])),
    ((MR_Box) (hlds__goal_util__goal_vars_acc_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[0])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[0])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[3])),
    ((MR_Box) (hlds__goal_util__clause_list_size_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[4])),
    ((MR_Box) (hlds__goal_util__goals_proc_refs_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[4])),
    ((MR_Box) (hlds__goal_util__goal_proc_refs_acc_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[4])),
    ((MR_Box) (hlds__goal_util__goal_proc_refs_acc_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[4])),
    ((MR_Box) (hlds__goal_util__goal_proc_refs_acc_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[5])),
    ((MR_Box) (hlds__goal_util__goal_proc_refs_acc_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[4])),
    ((MR_Box) (hlds__goal_util__case_to_disjunct_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[6])),
    ((MR_Box) (hlds__goal_util__flatten_disj_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[0])),
    ((MR_Box) (hlds__goal_util__generate_simple_call_12_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[0])),
    ((MR_Box) (hlds__goal_util__generate_foreign_proc_16_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[0])),
    ((MR_Box) (hlds__goal_util__generate_foreign_proc_16_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[0])),
    ((MR_Box) (hlds__goal_util__generate_foreign_proc_16_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[6])),
    ((MR_Box) (hlds__goal_util__maybe_strip_equality_pretest_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[6])),
    ((MR_Box) (hlds__goal_util__maybe_strip_equality_pretest_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[6])),
    ((MR_Box) (hlds__goal_util__maybe_strip_equality_pretest_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[7])),
    ((MR_Box) (hlds__goal_util__maybe_strip_equality_pretest_1_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[8])),
    ((MR_Box) (hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[7])),
    ((MR_Box) (hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[6])),
    ((MR_Box) (hlds__goal_util__flatten_disj_acc_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
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
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__goal_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 hlds__goal_util____vpti_tuple_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__goal_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__goal_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 hlds__goal_util____vpti_pred_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
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
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
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
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
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
hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2538__1_3_p_0(
  MR_Word TransformP_4,
  MR_Word LambdaHeadVar__1_61,
  MR_Word * LambdaHeadVar__2_62)
{
  {
    MR_Word GoalI0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_61, (MR_Integer) 2))));
    MR_Word GoalI_44;
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_61, (MR_Integer) 0))));
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_61, (MR_Integer) 1))));
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;

    hlds__goal_util__transform_all_goals_3_p_0(TransformP_4, GoalI0_43, &GoalI_44);
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_61, (MR_Integer) 0))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_61, (MR_Integer) 1))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_61, (MR_Integer) 2))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__2_62 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (GoalI_44));
    }
  }
}

static MR_Word MR_CALL 
hlds__goal_util__IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap__2357__1_1_f_0(
  MR_Word LambdaHeadVar__1_106)
{
  {
    MR_Word LambdaHeadVar__2_107;
    MR_Word Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_106, (MR_Integer) 1))));
    MR_Word Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_106, (MR_Integer) 0))));

    LambdaHeadVar__2_107 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_108);
    return LambdaHeadVar__2_107;
  }
}

static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_foreign_proc__1988__1_2_p_0(
  MR_Word Purity_22,
  MR_Word PredPurity_45)
{
  {
    MR_bool succeeded = (Purity_22 == PredPurity_45);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_simple_call__1956__1_2_p_0(
  MR_Word Purity_18,
  MR_Word PredPurity_36)
{
  {
    MR_bool succeeded = (Purity_18 == PredPurity_36);

    return succeeded;
  }
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1657__1_2_p_0(
  MR_Word LambdaHeadVar__1_63,
  MR_Word * LambdaHeadVar__2_64)
{
  {
    MR_Word Var_65;
    MR_Word Var_67;

    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (LambdaHeadVar__1_63));
      MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (LambdaHeadVar__1_63));
    }
    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (LambdaHeadVar__1_63));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__2_64 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_67));
    }
  }
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0_s * env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_8;
      MR_Integer Var_9;
      MR_Word Var_10;
      MR_Word Var_11;
      MR_Word Var_12;

      (env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__SubGoal_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__Var_15, (MR_Integer) 0))));
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__Var_15, (MR_Integer) 1))));
      (env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__SubGoal_7)) == (MR_mktag((MR_Integer) 2)));
      if ((env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__succeeded)
      {
        (env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__PredId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 0))));
        Var_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), (env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 1))));
        (env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__Args_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 2))));
        Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 3))));
        Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 4))));
        Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 5))));
        {
          MR_Tuple base;
          base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *((env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__LambdaHeadVar__1_14) = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__PredId_16));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__Args_17));
        }
        ((env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__cont)((env_ptr)->hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__cont_env_ptr);
      }
    }
  }
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0(
  MR_Word Goal_3,
  MR_Tuple * LambdaHeadVar__1_14,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0_s env;

    (env).hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__LambdaHeadVar__1_14 = LambdaHeadVar__1_14;
    (env).hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__cont = cont;
    (env).hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
    hlds__goal_util__goal_contains_goal_2_p_0(Goal_3, &(env).hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_env_0__Var_15, hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0_1, &env);
  }
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0_s * env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__Constraint_23 = ((MR_Word) ((env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__conv0_Constraint_23));
    hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_3(
  void * env_ptr_arg)
{
  {
    struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0_s * env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__TypeCtorInfo_43_43 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    (env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__TypeCtorInfo_43_43, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__NonLocalTypeVars_15, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__TypeVar_34);
    if ((env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__succeeded)
    {
      hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_p_0((env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__RttiVarMaps_6, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__Constraint_23, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__LambdaHeadVar__1_32);
      ((env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__cont)((env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0_s * env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word _ClassName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__Constraint_23, (MR_Integer) 0))));

      (env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__ArgTypes_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__Constraint_23, (MR_Integer) 1))));
      parse_tree__prog_type__type_list_contains_var_2_p_0((env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__ArgTypes_25, &(env_ptr)->hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__TypeVar_34, hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_3, env_ptr);
    }
  }
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0(
  MR_Word RttiVarMaps_6,
  MR_Word NonLocalTypeVars_15,
  MR_Word * LambdaHeadVar__1_32,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0_s env;

    (env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__RttiVarMaps_6 = RttiVarMaps_6;
    (env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__NonLocalTypeVars_15 = NonLocalTypeVars_15;
    (env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__LambdaHeadVar__1_32 = LambdaHeadVar__1_32;
    (env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__cont = cont;
    (env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Word Constraints_22;

      hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0((env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__RttiVarMaps_6, &Constraints_22);
      mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &(env).hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_env_0__conv0_Constraint_23, Constraints_22, hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0_2, &env);
    }
  }
}

static MR_Word MR_CALL 
hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__851__1_2_f_0(
  MR_Word RttiVarMaps_6,
  MR_Word LambdaHeadVar__1_28)
{
  {
    MR_Word LambdaHeadVar__2_29;
    MR_Word Locn_19;

    hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(RttiVarMaps_6, LambdaHeadVar__1_28, &Locn_19);
    hlds__hlds_rtti__type_info_locn_var_2_p_0(Locn_19, &LambdaHeadVar__2_29);
    return LambdaHeadVar__2_29;
  }
}

void MR_CALL 
hlds__goal_util____Compare____maybe_transformed_goal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_16 == CastY_17);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  hlds__hlds_goal____Compare____hlds_goal_0_0(HeadVar__1_1, Var_21, ArgY1_5);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_20 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String ArgY1_12 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_20, ArgY1_12);
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
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_8 == CastX_7);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_6 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
hlds__goal_util____Compare____is_leaf_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__goal_util____Unify____is_leaf_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__goal_util____Compare____goal_is_atomic_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__goal_util____Unify____goal_is_atomic_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__goal_util____Compare____attach_in_from_ground_term_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__goal_util____Unify____attach_in_from_ground_term_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_Word MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_case_1_f_0(
  MR_Word Case0_3)
{
  {
    MR_Word Case_4;
    MR_Word MainConsId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_3, (MR_Integer) 0))));
    MR_Word OtherConsIds_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_3, (MR_Integer) 1))));
    MR_Word Goal0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_3, (MR_Integer) 2))));
    MR_Word Goal_8;

    Goal_8 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(Goal0_7);
    {
      Case_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_4, 0) = ((MR_Box) (MainConsId_5));
      MR_hl_field(MR_mktag(0), Case_4, 1) = ((MR_Box) (OtherConsIds_6));
      MR_hl_field(MR_mktag(0), Case_4, 2) = ((MR_Box) (Goal_8));
    }
    return Case_4;
  }
}

static void MR_CALL 
hlds__goal_util__flatten_disj_acc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_FlatDisjuncts_9;

    hlds__goal_util__flatten_disj_acc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FlatDisjuncts_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FlatDisjuncts_9));
  }
}

static void MR_CALL 
hlds__goal_util__flatten_disj_acc_3_p_0(
  MR_Word Disjunct_4,
  MR_Word STATE_VARIABLE_FlatDisjuncts_0_8,
  MR_Word * STATE_VARIABLE_FlatDisjuncts_9)
{
  {
    MR_bool succeeded;
    MR_Word SubDisjs_6;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Disjunct_4, (MR_Integer) 0))));
    MR_Word _GoalInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Disjunct_4, (MR_Integer) 1))));

    succeeded = ((((MR_tag((MR_Word) Var_10)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_10, (MR_Integer) 0))) == (MR_Integer) 3)));
    if (succeeded)
    {
      SubDisjs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_10, (MR_Integer) 1))));
      {
        MR_Box conv1_STATE_VARIABLE_FlatDisjuncts_9;

        mercury__list__foldr_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_util_scalar_common_1[5]), (MR_Word) (&hlds__goal_util_scalar_common_4[22]), SubDisjs_6, ((MR_Box) (STATE_VARIABLE_FlatDisjuncts_0_8)), &conv1_STATE_VARIABLE_FlatDisjuncts_9);
        *STATE_VARIABLE_FlatDisjuncts_9 = ((MR_Word) (conv1_STATE_VARIABLE_FlatDisjuncts_9));
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_FlatDisjuncts_9 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Disjunct_4));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_FlatDisjuncts_0_8));
      }
  }
}

static void MR_CALL 
hlds__goal_util__case_proc_refs_acc_3_p_0(
  MR_Word Case_4,
  MR_Word STATE_VARIABLE_ReferredToProcs_0_9,
  MR_Word * STATE_VARIABLE_ReferredToProcs_10)
{
  {
    MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_4, (MR_Integer) 2))));
    MR_Word _MainConsId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_4, (MR_Integer) 0))));
    MR_Word _OtherConsIds_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_4, (MR_Integer) 1))));

    hlds__goal_util__goal_proc_refs_acc_3_p_0(Goal_8, STATE_VARIABLE_ReferredToProcs_0_9, STATE_VARIABLE_ReferredToProcs_10);
  }
}

static void MR_CALL 
hlds__goal_util__clause_size_increment_3_p_0(
  MR_Word Clause_4,
  MR_Integer Size0_5,
  MR_Integer * Size_6)
{
  {
    MR_bool succeeded;
    MR_Integer ClauseSize_7;
    MR_Word Var_8;
    MR_Word GoalExpr_10;
    MR_Word Var_11;

    Var_8 = hlds__hlds_clauses__clause_body_1_f_0(Clause_4);
    GoalExpr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
    Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1))));
    switch (MR_tag((MR_Word) GoalExpr_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_50 = (MR_Word) (MR_body((MR_Word) (GoalExpr_10), (MR_Integer) 0));
          MR_Integer Size1_81;

          hlds__goal_util__goal_size_2_p_0(SubGoal_50, &Size1_81);
          ClauseSize_7 = (MR_Integer) ((MR_Unsigned) Size1_81 + (MR_Unsigned) (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        ClauseSize_7 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            ClauseSize_7 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
              MR_Word Goals_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
              MR_Integer InnerSize_39;

              hlds__goal_util__goals_size_2_p_0(Goals_38, &InnerSize_39);
              switch (ConjType_37) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    ClauseSize_7 = (MR_Integer) ((MR_Unsigned) InnerSize_39 + (MR_Unsigned) (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 0:
                  ClauseSize_7 = InnerSize_39;
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Size1_40;
              MR_Word Goals_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

              hlds__goal_util__goals_size_2_p_0(Goals_78, &Size1_40);
              ClauseSize_7 = (MR_Integer) ((MR_Unsigned) Size1_40 + (MR_Unsigned) (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3))));
              MR_Integer Size1_79;
              MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
              MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));

              hlds__goal_util__cases_size_2_p_0(Cases_43, &Size1_79);
              ClauseSize_7 = (MR_Integer) ((MR_Unsigned) Size1_79 + (MR_Unsigned) (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
              MR_Word SubGoal_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
              MR_Word Var_69;
              MR_Word Var_52;

              succeeded = ((((MR_tag((MR_Word) Reason_51)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_51, (MR_Integer) 0))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_51, (MR_Integer) 1))));
                Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_51, (MR_Integer) 2))));
                succeeded = (Var_69 == (MR_Integer) 1);
              }
              if (succeeded)
                ClauseSize_7 = (MR_Integer) 1;
              else
              {
                MR_Integer Size1_82;

                hlds__goal_util__goal_size_2_p_0(SubGoal_85, &Size1_82);
                ClauseSize_7 = (MR_Integer) ((MR_Unsigned) Size1_82 + (MR_Unsigned) (MR_Integer) 1);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
              MR_Word Then_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3))));
              MR_Word Else_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4))));
              MR_Integer Size2_48;
              MR_Integer Size3_49;
              MR_Integer Var_72;
              MR_Integer Var_73;
              MR_Integer Size1_80;
              MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

              hlds__goal_util__goal_size_2_p_0(Cond_45, &Size1_80);
              hlds__goal_util__goal_size_2_p_0(Then_46, &Size2_48);
              hlds__goal_util__goal_size_2_p_0(Else_47, &Size3_49);
              Var_73 = (MR_Integer) ((MR_Unsigned) Size1_80 + (MR_Unsigned) Size2_48);
              Var_72 = (MR_Integer) ((MR_Unsigned) Var_73 + (MR_Unsigned) Size3_49);
              ClauseSize_7 = (MR_Integer) ((MR_Unsigned) Var_72 + (MR_Unsigned) (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_53)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_53, (MR_Integer) 0))));
                    MR_Word GoalB_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_53, (MR_Integer) 1))));
                    MR_Integer Var_65;
                    MR_Integer Size1_89;
                    MR_Integer Size2_90;

                    hlds__goal_util__goal_size_2_p_0(GoalA_63, &Size1_89);
                    hlds__goal_util__goal_size_2_p_0(GoalB_64, &Size2_90);
                    Var_65 = (MR_Integer) ((MR_Unsigned) Size1_89 + (MR_Unsigned) Size2_90);
                    ClauseSize_7 = (MR_Integer) ((MR_Unsigned) Var_65 + (MR_Unsigned) (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_53, (MR_Integer) 4))));
                    MR_Word OrElseGoals_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_53, (MR_Integer) 5))));
                    MR_Integer Var_67;
                    MR_Integer Size1_86;
                    MR_Integer Size2_87;
                    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_53, (MR_Integer) 0))));
                    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_53, (MR_Integer) 1))));
                    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_53, (MR_Integer) 2))));
                    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_53, (MR_Integer) 3))));
                    MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_53, (MR_Integer) 6))));

                    hlds__goal_util__goal_size_2_p_0(MainGoal_58, &Size1_86);
                    hlds__goal_util__goals_size_2_p_0(OrElseGoals_59, &Size2_87);
                    Var_67 = (MR_Integer) ((MR_Unsigned) Size1_86 + (MR_Unsigned) Size2_87);
                    ClauseSize_7 = (MR_Integer) ((MR_Unsigned) Var_67 + (MR_Unsigned) (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_88 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_53, (MR_Integer) 2))));
                    MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_53, (MR_Integer) 0))));
                    MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_53, (MR_Integer) 1))));

                    hlds__goal_util__goal_size_2_p_0(SubGoal_88, &ClauseSize_7);
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    *Size_6 = (MR_Integer) ((MR_Unsigned) Size0_5 + (MR_Unsigned) ClauseSize_7);
  }
}

static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_62;

    hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2538__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_62);
    *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_62));
  }
}

static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Goal_6;

    hlds__goal_util__transform_all_goals_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Goal_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_Goal_6));
  }
}

static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Goal_6;

    hlds__goal_util__transform_all_goals_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Goal_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Goal_6));
  }
}

void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0(
  MR_Word TransformP_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6)
{
  {
    MR_Word GoalExpr0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0))));
    MR_Word GoalInfo0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));
    MR_Word GoalExpr_32;
    MR_Word Goal1_57;
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv4_Goal_6;

    switch (MR_tag((MR_Word) GoalExpr0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_46 = (MR_Word) (MR_body((MR_Word) (GoalExpr0_7), (MR_Integer) 0));
          MR_Word SubGoal_47;

          hlds__goal_util__transform_all_goals_3_p_0(TransformP_4, SubGoal0_46, &SubGoal_47);
          GoalExpr_32 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (SubGoal_47)));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        GoalExpr_32 = GoalExpr0_7;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            GoalExpr_32 = GoalExpr0_7;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1))));
              MR_Word Conjs0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 2))));
              MR_Word Conjs_35;
              MR_Word Var_64;

              {
                Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[8]));
                MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (hlds__goal_util__transform_all_goals_3_p_0_1));
                MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (TransformP_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_64, Conjs0_34, &Conjs_35);
              {
                GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (ConjType_33));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 2) = ((MR_Box) (Conjs_35));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjs0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1))));
              MR_Word Disjs_37;
              MR_Word Var_63;

              {
                Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[8]));
                MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (hlds__goal_util__transform_all_goals_3_p_0_2));
                MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (TransformP_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_63, Disjs0_36, &Disjs_37);
              {
                GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (Disjs_37));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1))));
              MR_Word CanFail_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 2))));
              MR_Word Cases0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 3))));
              MR_Word Cases_45;
              MR_Word Var_60;

              {
                Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[9]));
                MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (hlds__goal_util__transform_all_goals_3_p_0_3));
                MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (TransformP_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Var_60, Cases0_40, &Cases_45);
              {
                GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (Var_38));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 2) = ((MR_Box) (CanFail_39));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 3) = ((MR_Box) (Cases_45));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1))));
              MR_Word SubGoal0_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 2))));
              MR_Word SubGoal_68;

              hlds__goal_util__transform_all_goals_3_p_0(TransformP_4, SubGoal0_67, &SubGoal_68);
              {
                GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (Reason_48));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 2) = ((MR_Box) (SubGoal_68));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ExistVars_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1))));
              MR_Word Cond0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 2))));
              MR_Word Then0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 3))));
              MR_Word Else0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 4))));
              MR_Word Cond_53;
              MR_Word Then_54;
              MR_Word Else_55;

              hlds__goal_util__transform_all_goals_3_p_0(TransformP_4, Cond0_50, &Cond_53);
              hlds__goal_util__transform_all_goals_3_p_0(TransformP_4, Then0_51, &Then_54);
              hlds__goal_util__transform_all_goals_3_p_0(TransformP_4, Else0_52, &Else_55);
              {
                GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (ExistVars_49));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 2) = ((MR_Box) (Cond_53));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 3) = ((MR_Box) (Then_54));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 4) = ((MR_Box) (Else_55));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_util.transform_all_goals\'/3", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
    {
      Goal1_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal1_57, 0) = ((MR_Box) (GoalExpr_32));
      MR_hl_field(MR_mktag(0), Goal1_57, 1) = ((MR_Box) (GoalInfo0_8));
    }
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), TransformP_4, (MR_Integer) 1))));
    func_3(((MR_Box) (TransformP_4)), ((MR_Box) (Goal1_57)), &conv4_Goal_6);
    *Goal_6 = ((MR_Word) (conv4_Goal_6));
  }
}

static void MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__3_3;

    hlds__instmap__apply_instmap_delta_sv_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_LambdaHeadVar__2_107;

    conv3_LambdaHeadVar__2_107 = hlds__goal_util__IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap__2357__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_107));
    return wrapper_arg_2;
  }
}

void MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(
  MR_Word TransformP_6,
  MR_Word TargetGoalPath_7,
  MR_Word Instmap0_8,
  MR_Word Goal0_9,
  MR_Word * MaybeGoal_10)
{
  {
    MR_bool succeeded;

    if ((TargetGoalPath_7 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word MaybeGoal0_11;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), TransformP_6, (MR_Integer) 1))));
      MR_Box conv1_MaybeGoal0_11;

      func_0(((MR_Box) (TransformP_6)), ((MR_Box) (Instmap0_8)), ((MR_Box) (Goal0_9)), &conv1_MaybeGoal0_11);
      MaybeGoal0_11 = ((MR_Word) (conv1_MaybeGoal0_11));
      hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_p_0(MaybeGoal0_11, MaybeGoal_10);
    }
    else
    {
      MR_Word FirstStep_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetGoalPath_7, (MR_Integer) 0))));
      MR_Word LaterPath_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetGoalPath_7, (MR_Integer) 1))));
      MR_Word GoalExpr0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 0))));
      MR_Word GoalInfo0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) GoalExpr0_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal0_71 = (MR_Word) (MR_body((MR_Word) (GoalExpr0_14), (MR_Integer) 0));

            succeeded = (FirstStep_12 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            if (succeeded)
            {
              MR_Word MaybeSubGoal_72;

              hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(TransformP_6, LaterPath_13, Instmap0_8, SubGoal0_71, &MaybeSubGoal_72);
              switch (MR_tag((MR_Word) MaybeSubGoal_72)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *MaybeGoal_10 = MaybeSubGoal_72;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word SubGoal_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_72, (MR_Integer) 0))));
                    MR_Word Var_100;
                    MR_Word GoalExpr_122 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (SubGoal_73)));

                    {
                      Var_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (GoalExpr_122));
                      MR_hl_field(MR_mktag(0), Var_100, 1) = ((MR_Box) (GoalInfo0_15));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_10 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_100));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  *MaybeGoal_10 = MaybeSubGoal_72;
                  break;
              }
            }
            else
              *MaybeGoal_10 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *MaybeGoal_10 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              *MaybeGoal_10 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 1))));
                MR_Word Conjs0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 2))));
                MR_Integer ConjNum_41;
                MR_Word Conj0_42;
                MR_Word TypeCtorInfo_165_165;
                MR_Box conv2_Conj0_42;

                succeeded = ((MR_tag((MR_Word) FirstStep_12)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  ConjNum_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), FirstStep_12, (MR_Integer) 0))));
                  TypeCtorInfo_165_165 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                  succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_165_165, Conjs0_40, ConjNum_41, &conv2_Conj0_42);
                  if (succeeded)
                  {
                    Conj0_42 = ((MR_Word) (conv2_Conj0_42));
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                {
                  MR_Word HeadConjs_43;
                  MR_Word HeadInstdeltas_44;
                  MR_Word Instmap_46;
                  MR_Word MaybeConj_47;
                  MR_Integer Var_103 = (MR_Integer) ((MR_Unsigned) ConjNum_41 - (MR_Unsigned) (MR_Integer) 1);
                  MR_Box conv5_Instmap_46;

                  mercury__list__take_upto_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_103, Conjs0_40, &HeadConjs_43);
                  HeadInstdeltas_44 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), (MR_Word) (&hlds__goal_util_scalar_common_4[20]), HeadConjs_43);
                  mercury__list__foldl_4_p_0((MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&hlds__goal_util_scalar_common_4[21]), HeadInstdeltas_44, ((MR_Box) (Instmap0_8)), &conv5_Instmap_46);
                  Instmap_46 = ((MR_Word) (conv5_Instmap_46));
                  hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(TransformP_6, LaterPath_13, Instmap_46, Conj0_42, &MaybeConj_47);
                  switch (MR_tag((MR_Word) MaybeConj_47)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *MaybeGoal_10 = MaybeConj_47;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Conj_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeConj_47, (MR_Integer) 0))));
                        MR_Word Conjs_49;
                        MR_Word GoalExpr_50;
                        MR_Word Var_110;

                        mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_40, ConjNum_41, ((MR_Box) (Conj_48)), &Conjs_49);
                        {
                          GoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), GoalExpr_50, 1) = ((MR_Box) (ConjType_39));
                          MR_hl_field(MR_mktag(3), GoalExpr_50, 2) = ((MR_Box) (Conjs_49));
                        }
                        {
                          Var_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (GoalExpr_50));
                          MR_hl_field(MR_mktag(0), Var_110, 1) = ((MR_Box) (GoalInfo0_15));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *MaybeGoal_10 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_110));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      *MaybeGoal_10 = MaybeConj_47;
                      break;
                  }
                }
                else
                  *MaybeGoal_10 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Disjs0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 1))));
                MR_Integer DisjNum_53;
                MR_Word Disj0_54;
                MR_Word TypeCtorInfo_172_172;
                MR_Box conv6_Disj0_54;

                succeeded = ((MR_tag((MR_Word) FirstStep_12)) == (MR_mktag((MR_Integer) 2)));
                if (succeeded)
                {
                  DisjNum_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), FirstStep_12, (MR_Integer) 0))));
                  TypeCtorInfo_172_172 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                  succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_172_172, Disjs0_52, DisjNum_53, &conv6_Disj0_54);
                  if (succeeded)
                  {
                    Disj0_54 = ((MR_Word) (conv6_Disj0_54));
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                {
                  MR_Word MaybeDisj_55;

                  hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(TransformP_6, LaterPath_13, Instmap0_8, Disj0_54, &MaybeDisj_55);
                  switch (MR_tag((MR_Word) MaybeDisj_55)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *MaybeGoal_10 = MaybeDisj_55;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Disj_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDisj_55, (MR_Integer) 0))));
                        MR_Word Disjs_57;
                        MR_Word Var_102;
                        MR_Word GoalExpr_112;

                        mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Disjs0_52, DisjNum_53, ((MR_Box) (Disj_56)), &Disjs_57);
                        {
                          GoalExpr_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(3), GoalExpr_112, 1) = ((MR_Box) (Disjs_57));
                        }
                        {
                          Var_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (GoalExpr_112));
                          MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) (GoalInfo0_15));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *MaybeGoal_10 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_102));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      *MaybeGoal_10 = MaybeDisj_55;
                      break;
                  }
                }
                else
                  *MaybeGoal_10 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 1))));
                MR_Word CanFail_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 2))));
                MR_Word Cases0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 3))));
                MR_Integer CaseNum_62;
                MR_Word Case0_64;
                MR_Word TypeCtorInfo_174_174;
                MR_Word _MaybeNumConstructors_63;
                MR_Box conv7_Case0_64;

                succeeded = ((((MR_tag((MR_Word) FirstStep_12)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FirstStep_12, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  CaseNum_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), FirstStep_12, (MR_Integer) 1))));
                  _MaybeNumConstructors_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FirstStep_12, (MR_Integer) 2))));
                  TypeCtorInfo_174_174 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0);
                  succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_174_174, Cases0_61, CaseNum_62, &conv7_Case0_64);
                  if (succeeded)
                  {
                    Case0_64 = ((MR_Word) (conv7_Case0_64));
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                {
                  MR_Word CaseGoal0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_64, (MR_Integer) 2))));
                  MR_Word MaybeCaseGoal_66;
                  MR_Word Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_64, (MR_Integer) 0))));
                  MR_Word Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_64, (MR_Integer) 1))));

                  hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(TransformP_6, LaterPath_13, Instmap0_8, CaseGoal0_65, &MaybeCaseGoal_66);
                  switch (MR_tag((MR_Word) MaybeCaseGoal_66)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *MaybeGoal_10 = MaybeCaseGoal_66;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word CaseGoal_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCaseGoal_66, (MR_Integer) 0))));
                        MR_Word Case_68;
                        MR_Word Cases_69;
                        MR_Word Var_101;
                        MR_Word GoalExpr_117;
                        MR_Word Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_64, (MR_Integer) 0))));
                        MR_Word Var_162 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_64, (MR_Integer) 1))));
                        MR_Word Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_64, (MR_Integer) 2))));

                        {
                          Case_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Case_68, 0) = ((MR_Box) (Var_161));
                          MR_hl_field(MR_mktag(0), Case_68, 1) = ((MR_Box) (Var_162));
                          MR_hl_field(MR_mktag(0), Case_68, 2) = ((MR_Box) (CaseGoal_67));
                        }
                        mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Cases0_61, CaseNum_62, ((MR_Box) (Case_68)), &Cases_69);
                        {
                          GoalExpr_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), GoalExpr_117, 1) = ((MR_Box) (Var_59));
                          MR_hl_field(MR_mktag(3), GoalExpr_117, 2) = ((MR_Box) (CanFail_60));
                          MR_hl_field(MR_mktag(3), GoalExpr_117, 3) = ((MR_Box) (Cases_69));
                        }
                        {
                          Var_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (GoalExpr_117));
                          MR_hl_field(MR_mktag(0), Var_101, 1) = ((MR_Box) (GoalInfo0_15));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *MaybeGoal_10 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_101));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      *MaybeGoal_10 = MaybeCaseGoal_66;
                      break;
                  }
                }
                else
                  *MaybeGoal_10 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 1))));
                MR_Word SubGoal0_138 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 2))));
                MR_Word _MaybeCut_76;

                succeeded = ((((MR_tag((MR_Word) FirstStep_12)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FirstStep_12, (MR_Integer) 0))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  _MaybeCut_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FirstStep_12, (MR_Integer) 1))));
                  {
                    MR_Word MaybeSubGoal_132;

                    hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(TransformP_6, LaterPath_13, Instmap0_8, SubGoal0_138, &MaybeSubGoal_132);
                    switch (MR_tag((MR_Word) MaybeSubGoal_132)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *MaybeGoal_10 = MaybeSubGoal_132;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Var_99;
                          MR_Word GoalExpr_127;
                          MR_Word SubGoal_128 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_132, (MR_Integer) 0))));

                          {
                            GoalExpr_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), GoalExpr_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                            MR_hl_field(MR_mktag(3), GoalExpr_127, 1) = ((MR_Box) (Reason_75));
                            MR_hl_field(MR_mktag(3), GoalExpr_127, 2) = ((MR_Box) (SubGoal_128));
                          }
                          {
                            Var_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (GoalExpr_127));
                            MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (GoalInfo0_15));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *MaybeGoal_10 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_99));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *MaybeGoal_10 = MaybeSubGoal_132;
                        break;
                    }
                  }
                }
                else
                  *MaybeGoal_10 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ExistVars_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 1))));
                MR_Word Cond0_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 2))));
                MR_Word Then0_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 3))));
                MR_Word Else0_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 4))));

                succeeded = (FirstStep_12 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  MR_Word MaybeCond_82;

                  hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(TransformP_6, LaterPath_13, Instmap0_8, Cond0_79, &MaybeCond_82);
                  switch (MR_tag((MR_Word) MaybeCond_82)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *MaybeGoal_10 = MaybeCond_82;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Cond_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCond_82, (MR_Integer) 0))));
                        MR_Word Var_94;
                        MR_Word GoalExpr_141;

                        {
                          GoalExpr_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                          MR_hl_field(MR_mktag(3), GoalExpr_141, 1) = ((MR_Box) (ExistVars_78));
                          MR_hl_field(MR_mktag(3), GoalExpr_141, 2) = ((MR_Box) (Cond_83));
                          MR_hl_field(MR_mktag(3), GoalExpr_141, 3) = ((MR_Box) (Then0_80));
                          MR_hl_field(MR_mktag(3), GoalExpr_141, 4) = ((MR_Box) (Else0_81));
                        }
                        {
                          Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (GoalExpr_141));
                          MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (GoalInfo0_15));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *MaybeGoal_10 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_94));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      *MaybeGoal_10 = MaybeCond_82;
                      break;
                  }
                }
                else
                {
                  succeeded = (FirstStep_12 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                  if (succeeded)
                  {
                    MR_Word MaybeThen_85;
                    MR_Word Var_95;
                    MR_Word Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_79, (MR_Integer) 1))));
                    MR_Word Instmap_146;
                    MR_Word Var_164 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_79, (MR_Integer) 0))));

                    Var_95 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_96);
                    hlds__instmap__apply_instmap_delta_sv_3_p_0(Var_95, Instmap0_8, &Instmap_146);
                    hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(TransformP_6, LaterPath_13, Instmap_146, Then0_80, &MaybeThen_85);
                    switch (MR_tag((MR_Word) MaybeThen_85)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *MaybeGoal_10 = MaybeThen_85;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Then_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThen_85, (MR_Integer) 0))));
                          MR_Word Var_97;
                          MR_Word GoalExpr_144;

                          {
                            GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), GoalExpr_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                            MR_hl_field(MR_mktag(3), GoalExpr_144, 1) = ((MR_Box) (ExistVars_78));
                            MR_hl_field(MR_mktag(3), GoalExpr_144, 2) = ((MR_Box) (Cond0_79));
                            MR_hl_field(MR_mktag(3), GoalExpr_144, 3) = ((MR_Box) (Then_86));
                            MR_hl_field(MR_mktag(3), GoalExpr_144, 4) = ((MR_Box) (Else0_81));
                          }
                          {
                            Var_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (GoalExpr_144));
                            MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) (GoalInfo0_15));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *MaybeGoal_10 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_97));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *MaybeGoal_10 = MaybeThen_85;
                        break;
                    }
                  }
                  else
                  {
                    succeeded = (FirstStep_12 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                    if (succeeded)
                    {
                      MR_Word MaybeElse_88;

                      hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(TransformP_6, LaterPath_13, Instmap0_8, Else0_81, &MaybeElse_88);
                      switch (MR_tag((MR_Word) MaybeElse_88)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *MaybeGoal_10 = MaybeElse_88;
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word Else_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse_88, (MR_Integer) 0))));
                            MR_Word Var_98;
                            MR_Word GoalExpr_148;

                            {
                              GoalExpr_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), GoalExpr_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                              MR_hl_field(MR_mktag(3), GoalExpr_148, 1) = ((MR_Box) (ExistVars_78));
                              MR_hl_field(MR_mktag(3), GoalExpr_148, 2) = ((MR_Box) (Cond0_79));
                              MR_hl_field(MR_mktag(3), GoalExpr_148, 3) = ((MR_Box) (Then0_80));
                              MR_hl_field(MR_mktag(3), GoalExpr_148, 4) = ((MR_Box) (Else_89));
                            }
                            {
                              Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (GoalExpr_148));
                              MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) (GoalInfo0_15));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              *MaybeGoal_10 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_98));
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          *MaybeGoal_10 = MaybeElse_88;
                          break;
                      }
                    }
                    else
                      *MaybeGoal_10 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
                }
              }
              break;
            case (MR_Integer) 7:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_util.maybe_transform_goal_at_goal_path_with_instmap\'/5", (MR_String) "shorthand");
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
  MR_Word TransformP_5,
  MR_Word TargetGoalPath_6,
  MR_Word Goal0_7,
  MR_Word * MaybeGoal_8)
{
  {
    MR_bool succeeded;

    if ((TargetGoalPath_6 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word MaybeGoal0_9;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), TransformP_5, (MR_Integer) 1))));
      MR_Box conv1_MaybeGoal0_9;

      func_0(((MR_Box) (TransformP_5)), ((MR_Box) (Goal0_7)), &conv1_MaybeGoal0_9);
      MaybeGoal0_9 = ((MR_Word) (conv1_MaybeGoal0_9));
      hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_p_0(MaybeGoal0_9, MaybeGoal_8);
    }
    else
    {
      MR_Word FirstStep_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetGoalPath_6, (MR_Integer) 0))));
      MR_Word LaterPath_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetGoalPath_6, (MR_Integer) 1))));
      MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
      MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) GoalExpr0_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal0_65 = (MR_Word) (MR_body((MR_Word) (GoalExpr0_12), (MR_Integer) 0));

            succeeded = (FirstStep_10 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            if (succeeded)
            {
              MR_Word MaybeSubGoal_66;

              hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(TransformP_5, LaterPath_11, SubGoal0_65, &MaybeSubGoal_66);
              switch (MR_tag((MR_Word) MaybeSubGoal_66)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *MaybeGoal_8 = MaybeSubGoal_66;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word SubGoal_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_66, (MR_Integer) 0))));
                    MR_Word Var_92;
                    MR_Word GoalExpr_106 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (SubGoal_67)));

                    {
                      Var_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (GoalExpr_106));
                      MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) (GoalInfo0_13));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_8 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_92));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  *MaybeGoal_8 = MaybeSubGoal_66;
                  break;
              }
            }
            else
              *MaybeGoal_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *MaybeGoal_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              *MaybeGoal_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
                MR_Word Conjs0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
                MR_Integer ConjNum_39;
                MR_Word Conj0_40;
                MR_Word TypeCtorInfo_143_143;
                MR_Box conv2_Conj0_40;

                succeeded = ((MR_tag((MR_Word) FirstStep_10)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  ConjNum_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), FirstStep_10, (MR_Integer) 0))));
                  TypeCtorInfo_143_143 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                  succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_143_143, Conjs0_38, ConjNum_39, &conv2_Conj0_40);
                  if (succeeded)
                  {
                    Conj0_40 = ((MR_Word) (conv2_Conj0_40));
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                {
                  MR_Word MaybeConj_41;

                  hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(TransformP_5, LaterPath_11, Conj0_40, &MaybeConj_41);
                  switch (MR_tag((MR_Word) MaybeConj_41)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *MaybeGoal_8 = MaybeConj_41;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Conj_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeConj_41, (MR_Integer) 0))));
                        MR_Word Conjs_43;
                        MR_Word GoalExpr_44;
                        MR_Word Var_95;

                        mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_38, ConjNum_39, ((MR_Box) (Conj_42)), &Conjs_43);
                        {
                          GoalExpr_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), GoalExpr_44, 1) = ((MR_Box) (ConjType_37));
                          MR_hl_field(MR_mktag(3), GoalExpr_44, 2) = ((MR_Box) (Conjs_43));
                        }
                        {
                          Var_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (GoalExpr_44));
                          MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (GoalInfo0_13));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *MaybeGoal_8 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_95));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      *MaybeGoal_8 = MaybeConj_41;
                      break;
                  }
                }
                else
                  *MaybeGoal_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Disjs0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
                MR_Integer DisjNum_47;
                MR_Word Disj0_48;
                MR_Word TypeCtorInfo_145_145;
                MR_Box conv3_Disj0_48;

                succeeded = ((MR_tag((MR_Word) FirstStep_10)) == (MR_mktag((MR_Integer) 2)));
                if (succeeded)
                {
                  DisjNum_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), FirstStep_10, (MR_Integer) 0))));
                  TypeCtorInfo_145_145 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                  succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_145_145, Disjs0_46, DisjNum_47, &conv3_Disj0_48);
                  if (succeeded)
                  {
                    Disj0_48 = ((MR_Word) (conv3_Disj0_48));
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                {
                  MR_Word MaybeDisj_49;

                  hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(TransformP_5, LaterPath_11, Disj0_48, &MaybeDisj_49);
                  switch (MR_tag((MR_Word) MaybeDisj_49)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *MaybeGoal_8 = MaybeDisj_49;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Disj_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDisj_49, (MR_Integer) 0))));
                        MR_Word Disjs_51;
                        MR_Word Var_94;
                        MR_Word GoalExpr_96;

                        mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Disjs0_46, DisjNum_47, ((MR_Box) (Disj_50)), &Disjs_51);
                        {
                          GoalExpr_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(3), GoalExpr_96, 1) = ((MR_Box) (Disjs_51));
                        }
                        {
                          Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (GoalExpr_96));
                          MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (GoalInfo0_13));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *MaybeGoal_8 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_94));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      *MaybeGoal_8 = MaybeDisj_49;
                      break;
                  }
                }
                else
                  *MaybeGoal_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
                MR_Word CanFail_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
                MR_Word Cases0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
                MR_Integer CaseNum_56;
                MR_Word Case0_58;
                MR_Word TypeCtorInfo_147_147;
                MR_Word _MaybeNumConstructors_57;
                MR_Box conv4_Case0_58;

                succeeded = ((((MR_tag((MR_Word) FirstStep_10)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FirstStep_10, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  CaseNum_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), FirstStep_10, (MR_Integer) 1))));
                  _MaybeNumConstructors_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FirstStep_10, (MR_Integer) 2))));
                  TypeCtorInfo_147_147 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0);
                  succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_147_147, Cases0_55, CaseNum_56, &conv4_Case0_58);
                  if (succeeded)
                  {
                    Case0_58 = ((MR_Word) (conv4_Case0_58));
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                {
                  MR_Word CaseGoal0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_58, (MR_Integer) 2))));
                  MR_Word MaybeCaseGoal_60;
                  MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_58, (MR_Integer) 0))));
                  MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_58, (MR_Integer) 1))));

                  hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(TransformP_5, LaterPath_11, CaseGoal0_59, &MaybeCaseGoal_60);
                  switch (MR_tag((MR_Word) MaybeCaseGoal_60)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *MaybeGoal_8 = MaybeCaseGoal_60;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word CaseGoal_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCaseGoal_60, (MR_Integer) 0))));
                        MR_Word Case_62;
                        MR_Word Cases_63;
                        MR_Word Var_93;
                        MR_Word GoalExpr_101;
                        MR_Word Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_58, (MR_Integer) 0))));
                        MR_Word Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_58, (MR_Integer) 1))));
                        MR_Word Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_58, (MR_Integer) 2))));

                        {
                          Case_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Case_62, 0) = ((MR_Box) (Var_140));
                          MR_hl_field(MR_mktag(0), Case_62, 1) = ((MR_Box) (Var_141));
                          MR_hl_field(MR_mktag(0), Case_62, 2) = ((MR_Box) (CaseGoal_61));
                        }
                        mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Cases0_55, CaseNum_56, ((MR_Box) (Case_62)), &Cases_63);
                        {
                          GoalExpr_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), GoalExpr_101, 1) = ((MR_Box) (Var_53));
                          MR_hl_field(MR_mktag(3), GoalExpr_101, 2) = ((MR_Box) (CanFail_54));
                          MR_hl_field(MR_mktag(3), GoalExpr_101, 3) = ((MR_Box) (Cases_63));
                        }
                        {
                          Var_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (GoalExpr_101));
                          MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (GoalInfo0_13));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *MaybeGoal_8 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_93));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      *MaybeGoal_8 = MaybeCaseGoal_60;
                      break;
                  }
                }
                else
                  *MaybeGoal_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
                MR_Word SubGoal0_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
                MR_Word _MaybeCut_70;

                succeeded = ((((MR_tag((MR_Word) FirstStep_10)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FirstStep_10, (MR_Integer) 0))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  _MaybeCut_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FirstStep_10, (MR_Integer) 1))));
                  {
                    MR_Word MaybeSubGoal_116;

                    hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(TransformP_5, LaterPath_11, SubGoal0_122, &MaybeSubGoal_116);
                    switch (MR_tag((MR_Word) MaybeSubGoal_116)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *MaybeGoal_8 = MaybeSubGoal_116;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Var_91;
                          MR_Word GoalExpr_111;
                          MR_Word SubGoal_112 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_116, (MR_Integer) 0))));

                          {
                            GoalExpr_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), GoalExpr_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                            MR_hl_field(MR_mktag(3), GoalExpr_111, 1) = ((MR_Box) (Reason_69));
                            MR_hl_field(MR_mktag(3), GoalExpr_111, 2) = ((MR_Box) (SubGoal_112));
                          }
                          {
                            Var_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (GoalExpr_111));
                            MR_hl_field(MR_mktag(0), Var_91, 1) = ((MR_Box) (GoalInfo0_13));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *MaybeGoal_8 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_91));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *MaybeGoal_8 = MaybeSubGoal_116;
                        break;
                    }
                  }
                }
                else
                  *MaybeGoal_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ExistVars_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
                MR_Word Cond0_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
                MR_Word Then0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
                MR_Word Else0_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 4))));

                succeeded = (FirstStep_10 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  MR_Word MaybeCond_76;

                  hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(TransformP_5, LaterPath_11, Cond0_73, &MaybeCond_76);
                  switch (MR_tag((MR_Word) MaybeCond_76)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *MaybeGoal_8 = MaybeCond_76;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Cond_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCond_76, (MR_Integer) 0))));
                        MR_Word Var_88;
                        MR_Word GoalExpr_125;

                        {
                          GoalExpr_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                          MR_hl_field(MR_mktag(3), GoalExpr_125, 1) = ((MR_Box) (ExistVars_72));
                          MR_hl_field(MR_mktag(3), GoalExpr_125, 2) = ((MR_Box) (Cond_77));
                          MR_hl_field(MR_mktag(3), GoalExpr_125, 3) = ((MR_Box) (Then0_74));
                          MR_hl_field(MR_mktag(3), GoalExpr_125, 4) = ((MR_Box) (Else0_75));
                        }
                        {
                          Var_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (GoalExpr_125));
                          MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (GoalInfo0_13));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *MaybeGoal_8 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_88));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      *MaybeGoal_8 = MaybeCond_76;
                      break;
                  }
                }
                else
                {
                  succeeded = (FirstStep_10 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                  if (succeeded)
                  {
                    MR_Word MaybeThen_79;

                    hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(TransformP_5, LaterPath_11, Then0_74, &MaybeThen_79);
                    switch (MR_tag((MR_Word) MaybeThen_79)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *MaybeGoal_8 = MaybeThen_79;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Then_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThen_79, (MR_Integer) 0))));
                          MR_Word Var_89;
                          MR_Word GoalExpr_128;

                          {
                            GoalExpr_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), GoalExpr_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                            MR_hl_field(MR_mktag(3), GoalExpr_128, 1) = ((MR_Box) (ExistVars_72));
                            MR_hl_field(MR_mktag(3), GoalExpr_128, 2) = ((MR_Box) (Cond0_73));
                            MR_hl_field(MR_mktag(3), GoalExpr_128, 3) = ((MR_Box) (Then_80));
                            MR_hl_field(MR_mktag(3), GoalExpr_128, 4) = ((MR_Box) (Else0_75));
                          }
                          {
                            Var_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (GoalExpr_128));
                            MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (GoalInfo0_13));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *MaybeGoal_8 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_89));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *MaybeGoal_8 = MaybeThen_79;
                        break;
                    }
                  }
                  else
                  {
                    succeeded = (FirstStep_10 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                    if (succeeded)
                    {
                      MR_Word MaybeElse_82;

                      hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(TransformP_5, LaterPath_11, Else0_75, &MaybeElse_82);
                      switch (MR_tag((MR_Word) MaybeElse_82)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *MaybeGoal_8 = MaybeElse_82;
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word Else_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse_82, (MR_Integer) 0))));
                            MR_Word Var_90;
                            MR_Word GoalExpr_131;

                            {
                              GoalExpr_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), GoalExpr_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                              MR_hl_field(MR_mktag(3), GoalExpr_131, 1) = ((MR_Box) (ExistVars_72));
                              MR_hl_field(MR_mktag(3), GoalExpr_131, 2) = ((MR_Box) (Cond0_73));
                              MR_hl_field(MR_mktag(3), GoalExpr_131, 3) = ((MR_Box) (Then0_74));
                              MR_hl_field(MR_mktag(3), GoalExpr_131, 4) = ((MR_Box) (Else_83));
                            }
                            {
                              Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (GoalExpr_131));
                              MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (GoalInfo0_13));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              *MaybeGoal_8 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_90));
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          *MaybeGoal_8 = MaybeElse_82;
                          break;
                      }
                    }
                    else
                      *MaybeGoal_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
                }
              }
              break;
            case (MR_Integer) 7:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_util.maybe_transform_goal_at_goal_path\'/4", (MR_String) "shorthand");
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
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_String Error_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Error_4));
    }
  }
  else
  {
    MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_3));
    }
  }
}

static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_Case_4;

    conv3_Case_4 = hlds__goal_util__maybe_strip_equality_pretest_case_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_Case_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_Goal_4;

    conv2_Goal_4 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_Goal_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Goal_4;

    conv1_Goal_4 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Goal_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Goal_4;

    conv0_Goal_4 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Goal_4));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0(
  MR_Word Goal0_3)
{
  {
    MR_bool succeeded;
    MR_Word Goal_4;
    MR_Word GoalExpr0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_3, (MR_Integer) 0))));
    MR_Word GoalInfo0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_3, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_47 = (MR_Word) (MR_body((MR_Word) (GoalExpr0_5), (MR_Integer) 0));
          MR_Word SubGoal_48;
          MR_Word GoalExpr_79;

          SubGoal_48 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(SubGoal0_47);
          GoalExpr_79 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (SubGoal_48)));
          {
            Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Goal_4, 0) = ((MR_Box) (GoalExpr_79));
            MR_hl_field(MR_mktag(0), Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Goal_4 = Goal0_3;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            Goal_4 = Goal0_3;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 1))));
              MR_Word Goals0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 2))));
              MR_Word Goals_32;
              MR_Word GoalExpr_33;

              Goals_32 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_util_scalar_common_4[16]), Goals0_31);
              {
                GoalExpr_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), GoalExpr_33, 1) = ((MR_Box) (ConjType_30));
                MR_hl_field(MR_mktag(3), GoalExpr_33, 2) = ((MR_Box) (Goals_32));
              }
              {
                Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Goal_4, 0) = ((MR_Box) (GoalExpr_33));
                MR_hl_field(MR_mktag(0), Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubGoals0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 1))));
              MR_Word SubGoals_35;
              MR_Word GoalExpr_74;

              SubGoals_35 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_util_scalar_common_4[17]), SubGoals0_34);
              {
                GoalExpr_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), GoalExpr_74, 1) = ((MR_Box) (SubGoals_35));
              }
              {
                Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Goal_4, 0) = ((MR_Box) (GoalExpr_74));
                MR_hl_field(MR_mktag(0), Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 1))));
              MR_Word CanFail_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 2))));
              MR_Word Cases0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 3))));
              MR_Word Cases_39;
              MR_Word GoalExpr_75;

              Cases_39 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__goal_util_scalar_common_4[19]), Cases0_38);
              {
                GoalExpr_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), GoalExpr_75, 1) = ((MR_Box) (Var_36));
                MR_hl_field(MR_mktag(3), GoalExpr_75, 2) = ((MR_Box) (CanFail_37));
                MR_hl_field(MR_mktag(3), GoalExpr_75, 3) = ((MR_Box) (Cases_39));
              }
              {
                Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Goal_4, 0) = ((MR_Box) (GoalExpr_75));
                MR_hl_field(MR_mktag(0), Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 1))));
              MR_Word SubGoal0_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 2))));
              MR_Word FGT_51;
              MR_Word Var_50;

              succeeded = ((((MR_tag((MR_Word) Reason_49)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_49, (MR_Integer) 0))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_49, (MR_Integer) 1))));
                FGT_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_49, (MR_Integer) 2))));
                switch (FGT_51) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
                Goal_4 = Goal0_3;
              else
              {
                MR_Word GoalExpr_80;
                MR_Word SubGoal_81;

                SubGoal_81 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(SubGoal0_85);
                {
                  GoalExpr_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), GoalExpr_80, 1) = ((MR_Box) (Reason_49));
                  MR_hl_field(MR_mktag(3), GoalExpr_80, 2) = ((MR_Box) (SubGoal_81));
                }
                {
                  Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Goal_4, 0) = ((MR_Box) (GoalExpr_80));
                  MR_hl_field(MR_mktag(0), Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 1))));
              MR_Word Cond0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 2))));
              MR_Word Then0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 3))));
              MR_Word Else0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 4))));

              succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_6, (MR_Integer) 21);
              if (succeeded)
                Goal_4 = Else0_43;
              else
              {
                MR_Word Cond_44;
                MR_Word Then_45;
                MR_Word Else_46;
                MR_Word GoalExpr_76;

                Cond_44 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(Cond0_41);
                Then_45 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(Then0_42);
                Else_46 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(Else0_43);
                {
                  GoalExpr_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), GoalExpr_76, 1) = ((MR_Box) (Vars_40));
                  MR_hl_field(MR_mktag(3), GoalExpr_76, 2) = ((MR_Box) (Cond_44));
                  MR_hl_field(MR_mktag(3), GoalExpr_76, 3) = ((MR_Box) (Then_45));
                  MR_hl_field(MR_mktag(3), GoalExpr_76, 4) = ((MR_Box) (Else_46));
                }
                {
                  Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Goal_4, 0) = ((MR_Box) (GoalExpr_76));
                  MR_hl_field(MR_mktag(0), Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand0_52)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.goal_util.maybe_strip_equality_pretest\'/1", (MR_String) "bi_implication");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_52, (MR_Integer) 0))));
                    MR_Word Outer_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_52, (MR_Integer) 1))));
                    MR_Word Inner_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_52, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_52, (MR_Integer) 3))));
                    MR_Word MainGoal0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_52, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_52, (MR_Integer) 5))));
                    MR_Word OrElseInners_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_52, (MR_Integer) 6))));
                    MR_Word MainGoal_60;
                    MR_Word OrElseGoals_61;
                    MR_Word ShortHand_62;
                    MR_Word GoalExpr_87;

                    MainGoal_60 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(MainGoal0_57);
                    OrElseGoals_61 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_util_scalar_common_4[18]), OrElseGoals0_58);
                    {
                      ShortHand_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ShortHand_62, 0) = ((MR_Box) (GoalType_53));
                      MR_hl_field(MR_mktag(1), ShortHand_62, 1) = ((MR_Box) (Outer_54));
                      MR_hl_field(MR_mktag(1), ShortHand_62, 2) = ((MR_Box) (Inner_55));
                      MR_hl_field(MR_mktag(1), ShortHand_62, 3) = ((MR_Box) (MaybeOutputVars_56));
                      MR_hl_field(MR_mktag(1), ShortHand_62, 4) = ((MR_Box) (MainGoal_60));
                      MR_hl_field(MR_mktag(1), ShortHand_62, 5) = ((MR_Box) (OrElseGoals_61));
                      MR_hl_field(MR_mktag(1), ShortHand_62, 6) = ((MR_Box) (OrElseInners_59));
                    }
                    {
                      GoalExpr_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), GoalExpr_87, 1) = ((MR_Box) (ShortHand_62));
                    }
                    {
                      Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Goal_4, 0) = ((MR_Box) (GoalExpr_87));
                      MR_hl_field(MR_mktag(0), Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_63 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_52, (MR_Integer) 0))));
                    MR_Word ResultVar_64 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_52, (MR_Integer) 1))));
                    MR_Word GoalExpr_88;
                    MR_Word SubGoal0_89 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_52, (MR_Integer) 2))));
                    MR_Word SubGoal_90;
                    MR_Word ShortHand_91;

                    SubGoal_90 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(SubGoal0_89);
                    {
                      ShortHand_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ShortHand_91, 0) = ((MR_Box) (MaybeIO_63));
                      MR_hl_field(MR_mktag(2), ShortHand_91, 1) = ((MR_Box) (ResultVar_64));
                      MR_hl_field(MR_mktag(2), ShortHand_91, 2) = ((MR_Box) (SubGoal_90));
                    }
                    {
                      GoalExpr_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), GoalExpr_88, 1) = ((MR_Box) (ShortHand_91));
                    }
                    {
                      Goal_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Goal_4, 0) = ((MR_Box) (GoalExpr_88));
                      MR_hl_field(MR_mktag(0), Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
                    }
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    return Goal_4;
  }
}

MR_bool MR_CALL 
hlds__goal_util__foreign_proc_uses_variable_2_p_0(
  MR_Word Impl_3,
  MR_String VarName_4)
{
  {
    MR_bool succeeded;
    MR_String ForeignBody_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), Impl_3, (MR_Integer) 0))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Impl_3, (MR_Integer) 1))));
    MR_Integer Var_7;

    succeeded = mercury__string__sub_string_search_3_p_0(ForeignBody_5, VarName_4, &Var_7);
    return succeeded;
  }
}

void MR_CALL 
hlds__goal_util__generate_cast_5_p_0(
  MR_Word CastType_6,
  MR_Word InArg_7,
  MR_Word OutArg_8,
  MR_Word Context_9,
  MR_Word * Goal_10)
{
  {
    MR_Word Ground_11;

    Ground_11 = parse_tree__prog_mode__ground_inst_0_f_0();
    hlds__goal_util__generate_cast_with_insts_7_p_0(CastType_6, InArg_7, OutArg_8, Ground_11, Ground_11, Context_9, Goal_10);
  }
}

void MR_CALL 
hlds__goal_util__generate_cast_with_insts_7_p_0(
  MR_Word CastType_8,
  MR_Word InArg_9,
  MR_Word OutArg_10,
  MR_Word InInst_11,
  MR_Word OutInst_12,
  MR_Word Context_13,
  MR_Word * Goal_14)
{
  {
    MR_Word NonLocals_15;
    MR_Word InstMapDelta_16;
    MR_Word GoalInfo_17;
    MR_Word GoalExpr_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_27;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (OutArg_10));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (InArg_9));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_20));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_19, &NonLocals_15);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (OutArg_10));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (OutInst_12));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    InstMapDelta_16 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_22);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_15, InstMapDelta_16, (MR_Integer) 0, (MR_Integer) 0, Context_13, &GoalInfo_17);
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) (CastType_8));
    }
    Var_32 = parse_tree__prog_mode__in_mode_1_f_0(InInst_11);
    Var_34 = parse_tree__prog_mode__out_mode_1_f_0(OutInst_12);
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
    }
    {
      GoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), GoalExpr_18, 1) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(3), GoalExpr_18, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(3), GoalExpr_18, 3) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(3), GoalExpr_18, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), GoalExpr_18, 5) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_17));
    }
  }
}

static void MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;

    hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
  }
}

static MR_bool MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__goal_util__IntroducedFrom__pred__generate_foreign_proc__1988__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_2(
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

static MR_Box MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
hlds__goal_util__generate_foreign_proc_16_p_0(
  MR_Word ModuleName_17,
  MR_String ProcName_18,
  MR_Word PredOrFunc_19,
  MR_Word ModeNo_20,
  MR_Word Detism_21,
  MR_Word Purity_22,
  MR_Word Attributes_23,
  MR_Word Args_24,
  MR_Word ExtraArgs_25,
  MR_Word MaybeTraceRuntimeCond_26,
  MR_String Code_27,
  MR_Word Features_28,
  MR_Word InstMapDelta0_29,
  MR_Word ModuleInfo_30,
  MR_Word Context_31,
  MR_Word * Goal_32)
{
  {
    MR_bool succeeded;
    MR_Integer Arity_33;
    MR_Word PredId_34;
    MR_Integer ProcId_35;
    MR_Word GoalExpr_36;
    MR_Word ArgVars_37;
    MR_Word ExtraArgVars_38;
    MR_Word Vars_39;
    MR_Word NonLocals_40;
    MR_Word NumSolns_42;
    MR_Word InstMapDelta_43;
    MR_Word PredInfo_44;
    MR_Word PredPurity_45;
    MR_Word GoalInfo0_46;
    MR_Word GoalInfo_47;
    MR_Word Var_48;
    MR_Word Var_52;
    MR_Word _CanFail_41;
    MR_Box conv3_GoalInfo_47;

    mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), Args_24, &Arity_33);
    hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ModuleInfo_30, ModuleName_17, ProcName_18, PredOrFunc_19, Arity_33, ModeNo_20, &PredId_34, &ProcId_35);
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (Code_27));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      GoalExpr_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), GoalExpr_36, 1) = ((MR_Box) (Attributes_23));
      MR_hl_field(MR_mktag(3), GoalExpr_36, 2) = ((MR_Box) (PredId_34));
      MR_hl_field(MR_mktag(3), GoalExpr_36, 3) = ((MR_Box) (ProcId_35));
      MR_hl_field(MR_mktag(3), GoalExpr_36, 4) = ((MR_Box) (Args_24));
      MR_hl_field(MR_mktag(3), GoalExpr_36, 5) = ((MR_Box) (ExtraArgs_25));
      MR_hl_field(MR_mktag(3), GoalExpr_36, 6) = ((MR_Box) (MaybeTraceRuntimeCond_26));
      MR_hl_field(MR_mktag(3), GoalExpr_36, 7) = ((MR_Box) (Var_48));
    }
    ArgVars_37 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_4[13]), Args_24);
    ExtraArgVars_38 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_4[14]), ExtraArgs_25);
    Vars_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), ArgVars_37, ExtraArgVars_38);
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_39, &NonLocals_40);
    parse_tree__prog_data__determinism_components_3_p_0(Detism_21, &_CanFail_41, &NumSolns_42);
    switch (NumSolns_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        InstMapDelta_43 = InstMapDelta0_29;
        break;
      case (MR_Integer) 0:
        hlds__instmap__instmap_delta_init_unreachable_1_p_0(&InstMapDelta_43);
        break;
    }
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_30, PredId_34, &PredInfo_44);
    hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_44, &PredPurity_45);
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_3[5]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (hlds__goal_util__generate_foreign_proc_16_p_0_3));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (Purity_22));
      MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (PredPurity_45));
    }
    mercury__require__expect_3_p_0(Var_52, (MR_String) "predicate \140hlds.goal_util.generate_foreign_proc\'/16", (MR_String) "purity disagreement");
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_40, InstMapDelta_43, Detism_21, Purity_22, Context_31, &GoalInfo0_46);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0), (MR_Word) (&hlds__goal_util_scalar_common_4[15]), Features_28, ((MR_Box) (GoalInfo0_46)), &conv3_GoalInfo_47);
    GoalInfo_47 = ((MR_Word) (conv3_GoalInfo_47));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_32 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_47));
    }
  }
}

static void MR_CALL 
hlds__goal_util__generate_simple_call_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static MR_bool MR_CALL 
hlds__goal_util__generate_simple_call_12_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__goal_util__IntroducedFrom__pred__generate_simple_call__1956__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
hlds__goal_util__generate_simple_call_12_p_0(
  MR_Word ModuleName_13,
  MR_String ProcName_14,
  MR_Word PredOrFunc_15,
  MR_Word ModeNo_16,
  MR_Word Detism_17,
  MR_Word Purity_18,
  MR_Word Args_19,
  MR_Word Features_20,
  MR_Word InstMapDelta0_21,
  MR_Word ModuleInfo_22,
  MR_Word Context_23,
  MR_Word * Goal_24)
{
  {
    MR_bool succeeded;
    MR_Integer Arity_25;
    MR_Word PredId_26;
    MR_Integer ProcId_27;
    MR_Word InvalidPredId_28;
    MR_Word BuiltinState_29;
    MR_Word GoalExpr_30;
    MR_Word NonLocals_31;
    MR_Word NumSolns_33;
    MR_Word InstMapDelta_34;
    MR_Word PredInfo_35;
    MR_Word PredPurity_36;
    MR_Word GoalInfo0_37;
    MR_Word GoalInfo_38;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word _CanFail_32;
    MR_Box conv1_GoalInfo_38;

    mercury__list__length_2_p_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), Args_19, &Arity_25);
    hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ModuleInfo_22, ModuleName_13, ProcName_14, PredOrFunc_15, Arity_25, ModeNo_16, &PredId_26, &ProcId_27);
    InvalidPredId_28 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    BuiltinState_29 = hlds__hlds_pred__builtin_state_4_f_0(ModuleInfo_22, InvalidPredId_28, PredId_26, ProcId_27);
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (ModuleName_13));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (ProcName_14));
    }
    {
      GoalExpr_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), GoalExpr_30, 0) = ((MR_Box) (PredId_26));
      MR_hl_field(MR_mktag(2), GoalExpr_30, 1) = ((MR_Box) (ProcId_27));
      MR_hl_field(MR_mktag(2), GoalExpr_30, 2) = ((MR_Box) (Args_19));
      MR_hl_field(MR_mktag(2), GoalExpr_30, 3) = ((MR_Box) (BuiltinState_29));
      MR_hl_field(MR_mktag(2), GoalExpr_30, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(2), GoalExpr_30, 5) = ((MR_Box) (Var_40));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Args_19, &NonLocals_31);
    parse_tree__prog_data__determinism_components_3_p_0(Detism_17, &_CanFail_32, &NumSolns_33);
    switch (NumSolns_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        InstMapDelta_34 = InstMapDelta0_21;
        break;
      case (MR_Integer) 0:
        hlds__instmap__instmap_delta_init_unreachable_1_p_0(&InstMapDelta_34);
        break;
    }
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_22, PredId_26, &PredInfo_35);
    hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_35, &PredPurity_36);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_3[5]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (hlds__goal_util__generate_simple_call_12_p_0_1));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (Purity_18));
      MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (PredPurity_36));
    }
    mercury__require__expect_3_p_0(Var_41, (MR_String) "predicate \140hlds.goal_util.generate_simple_call\'/12", (MR_String) "purity disagreement");
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_31, InstMapDelta_34, Detism_17, Purity_18, Context_23, &GoalInfo0_37);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0), (MR_Word) (&hlds__goal_util_scalar_common_4[12]), Features_20, ((MR_Box) (GoalInfo0_37)), &conv1_GoalInfo_38);
    GoalInfo_38 = ((MR_Word) (conv1_GoalInfo_38));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_24 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_30));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_38));
    }
  }
}

void MR_CALL 
hlds__goal_util__can_reorder_goals_9_p_0(
  MR_Word VarTypes_10,
  MR_Word FullyStrict_11,
  MR_Word InstmapBeforeEarlierGoal_12,
  MR_Word EarlierGoal_13,
  MR_Word InstmapBeforeLaterGoal_14,
  MR_Word LaterGoal_15,
  MR_Word * CanReorder_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28)
{
  {
    MR_bool succeeded;
    MR_Word EarlierGoalInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EarlierGoal_13, (MR_Integer) 1))));
    MR_Word LaterGoalInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LaterGoal_15, (MR_Integer) 1))));
    MR_Word EarlierPurity_22;
    MR_Word EarlierTrace_23;
    MR_Word LaterPurity_24;
    MR_Word LaterTrace_25;
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EarlierGoal_13, (MR_Integer) 0))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LaterGoal_15, (MR_Integer) 0))));

    hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(EarlierGoalInfo_19, &EarlierPurity_22, &EarlierTrace_23);
    hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(LaterGoalInfo_21, &LaterPurity_24, &LaterTrace_25);
    succeeded = (EarlierPurity_22 == (MR_Integer) 2);
    if (!(succeeded))
    {
      succeeded = (LaterPurity_24 == (MR_Integer) 2);
      if (!(succeeded))
      {
        succeeded = (EarlierTrace_23 == (MR_Integer) 0);
        if (!(succeeded))
          succeeded = (LaterTrace_25 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
      *CanReorder_16 = (MR_Integer) 0;
      *STATE_VARIABLE_ModuleInfo_28 = STATE_VARIABLE_ModuleInfo_0_27;
    }
    else
    {
      MR_Word MaintainsTermination_26;

      hlds__goal_util__reordering_maintains_termination_6_p_0(FullyStrict_11, EarlierGoal_13, LaterGoal_15, &MaintainsTermination_26, STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28);
      switch (MaintainsTermination_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *CanReorder_16 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          {
            MR_Word LaterGoalInfo_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LaterGoal_15, (MR_Integer) 1))));
            MR_Word EarlierGoalInfo_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EarlierGoal_13, (MR_Integer) 1))));
            MR_Word EarlierInstMapDelta_39;
            MR_Word InstMapAfterEarlierGoal_40;
            MR_Word EarlierChangedVars_41;
            MR_Word LaterGoalNonLocals_42;
            MR_Word Intersection_43;
            MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LaterGoal_15, (MR_Integer) 0))));
            MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EarlierGoal_13, (MR_Integer) 0))));

            EarlierInstMapDelta_39 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(EarlierGoalInfo_38);
            hlds__instmap__apply_instmap_delta_3_p_0(InstmapBeforeEarlierGoal_12, EarlierInstMapDelta_39, &InstMapAfterEarlierGoal_40);
            hlds__instmap__instmap_changed_vars_5_p_0(InstmapBeforeEarlierGoal_12, InstMapAfterEarlierGoal_40, VarTypes_10, *STATE_VARIABLE_ModuleInfo_28, &EarlierChangedVars_41);
            LaterGoalNonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LaterGoalInfo_36);
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), EarlierChangedVars_41, LaterGoalNonLocals_42, &Intersection_43);
            succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Intersection_43);
            succeeded = !(succeeded);
            if (succeeded)
              *CanReorder_16 = (MR_Integer) 0;
            else
            {
              MR_Word LaterGoalInfo_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EarlierGoal_13, (MR_Integer) 1))));
              MR_Word EarlierGoalInfo_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LaterGoal_15, (MR_Integer) 1))));
              MR_Word EarlierInstMapDelta_54;
              MR_Word InstMapAfterEarlierGoal_55;
              MR_Word EarlierChangedVars_56;
              MR_Word LaterGoalNonLocals_57;
              MR_Word Intersection_58;
              MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EarlierGoal_13, (MR_Integer) 0))));
              MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LaterGoal_15, (MR_Integer) 0))));

              EarlierInstMapDelta_54 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(EarlierGoalInfo_53);
              hlds__instmap__apply_instmap_delta_3_p_0(InstmapBeforeLaterGoal_14, EarlierInstMapDelta_54, &InstMapAfterEarlierGoal_55);
              hlds__instmap__instmap_changed_vars_5_p_0(InstmapBeforeLaterGoal_14, InstMapAfterEarlierGoal_55, VarTypes_10, *STATE_VARIABLE_ModuleInfo_28, &EarlierChangedVars_56);
              LaterGoalNonLocals_57 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LaterGoalInfo_51);
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), EarlierChangedVars_56, LaterGoalNonLocals_57, &Intersection_58);
              succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Intersection_58);
              succeeded = !(succeeded);
              if (succeeded)
                *CanReorder_16 = (MR_Integer) 0;
              else
                *CanReorder_16 = (MR_Integer) 1;
            }
          }
          break;
      }
    }
  }
}

void MR_CALL 
hlds__goal_util__reordering_maintains_termination_6_p_0(
  MR_Word FullyStrict_7,
  MR_Word EarlierGoal_8,
  MR_Word LaterGoal_9,
  MR_Word * MaintainsTermination_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25)
{
  {
    MR_bool succeeded;
    MR_Word EarlierGoalInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EarlierGoal_8, (MR_Integer) 1))));
    MR_Word LaterGoalInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LaterGoal_9, (MR_Integer) 1))));
    MR_Word EarlierDetism_16;
    MR_Word EarlierCanFail_17;
    MR_Word LaterDetism_19;
    MR_Word LaterCanFail_20;
    MR_Word EarlierCanLoopOrThrow_22;
    MR_Word STATE_VARIABLE_ModuleInfo_26_26;
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EarlierGoal_8, (MR_Integer) 0))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LaterGoal_9, (MR_Integer) 0))));
    MR_Word Var_18;
    MR_Word Var_21;

    EarlierDetism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(EarlierGoalInfo_13);
    parse_tree__prog_data__determinism_components_3_p_0(EarlierDetism_16, &EarlierCanFail_17, &Var_18);
    LaterDetism_19 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(LaterGoalInfo_15);
    parse_tree__prog_data__determinism_components_3_p_0(LaterDetism_19, &LaterCanFail_20, &Var_21);
    hlds__goal_form__goal_can_loop_or_throw_4_p_0(EarlierGoal_8, &EarlierCanLoopOrThrow_22, STATE_VARIABLE_ModuleInfo_0_24, &STATE_VARIABLE_ModuleInfo_26_26);
    succeeded = (FullyStrict_7 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (EarlierCanLoopOrThrow_22 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (LaterCanFail_20 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      *MaintainsTermination_10 = (MR_Integer) 0;
      *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_26_26;
    }
    else
    {
      MR_Word LaterCanLoopOrThrow_23;

      hlds__goal_form__goal_can_loop_or_throw_4_p_0(LaterGoal_9, &LaterCanLoopOrThrow_23, STATE_VARIABLE_ModuleInfo_26_26, STATE_VARIABLE_ModuleInfo_25);
      succeeded = (EarlierCanFail_17 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (LaterCanLoopOrThrow_23 == (MR_Integer) 0);
      if (succeeded)
        *MaintainsTermination_10 = (MR_Integer) 0;
      else
        *MaintainsTermination_10 = (MR_Integer) 1;
    }
  }
}

MR_bool MR_CALL 
hlds__goal_util__can_reorder_goals_old_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word VarTypes_9,
  MR_Word FullyStrict_10,
  MR_Word InstmapBeforeEarlierGoal_11,
  MR_Word EarlierGoal_12,
  MR_Word InstmapBeforeLaterGoal_13,
  MR_Word LaterGoal_14)
{
  {
    MR_bool succeeded;
    MR_Word EarlierGoalInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EarlierGoal_12, (MR_Integer) 1))));
    MR_Word LaterGoalInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LaterGoal_14, (MR_Integer) 1))));
    MR_Word EarlierPurity_19;
    MR_Word EarlierTrace_20;
    MR_Word LaterPurity_21;
    MR_Word LaterTrace_22;
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EarlierGoal_12, (MR_Integer) 0))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LaterGoal_14, (MR_Integer) 0))));
    MR_Word TypeCtorInfo_20_37;
    MR_Word LaterGoalInfo_29;
    MR_Word EarlierGoalInfo_31;
    MR_Word EarlierInstMapDelta_32;
    MR_Word InstMapAfterEarlierGoal_33;
    MR_Word EarlierChangedVars_34;
    MR_Word LaterGoalNonLocals_35;
    MR_Word Intersection_36;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Word TypeCtorInfo_20_52;
    MR_Word LaterGoalInfo_44;
    MR_Word EarlierGoalInfo_46;
    MR_Word EarlierInstMapDelta_47;
    MR_Word InstMapAfterEarlierGoal_48;
    MR_Word EarlierChangedVars_49;
    MR_Word LaterGoalNonLocals_50;
    MR_Word Intersection_51;
    MR_Word Var_43;
    MR_Word Var_45;

    hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(EarlierGoalInfo_16, &EarlierPurity_19, &EarlierTrace_20);
    hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(LaterGoalInfo_18, &LaterPurity_21, &LaterTrace_22);
    succeeded = (LaterPurity_21 == (MR_Integer) 2);
    succeeded = !(succeeded);
    if (succeeded)
    {
      succeeded = (LaterTrace_22 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (EarlierPurity_19 == (MR_Integer) 2);
        succeeded = !(succeeded);
        if (succeeded)
        {
          succeeded = (EarlierTrace_20 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = hlds__goal_util__reordering_maintains_termination_old_4_p_0(ModuleInfo_8, FullyStrict_10, EarlierGoal_12, LaterGoal_14);
            if (succeeded)
            {
              Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LaterGoal_14, (MR_Integer) 0))));
              LaterGoalInfo_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LaterGoal_14, (MR_Integer) 1))));
              Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EarlierGoal_12, (MR_Integer) 0))));
              EarlierGoalInfo_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EarlierGoal_12, (MR_Integer) 1))));
              EarlierInstMapDelta_32 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(EarlierGoalInfo_31);
              hlds__instmap__apply_instmap_delta_3_p_0(InstmapBeforeEarlierGoal_11, EarlierInstMapDelta_32, &InstMapAfterEarlierGoal_33);
              hlds__instmap__instmap_changed_vars_5_p_0(InstmapBeforeEarlierGoal_11, InstMapAfterEarlierGoal_33, VarTypes_9, ModuleInfo_8, &EarlierChangedVars_34);
              LaterGoalNonLocals_35 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LaterGoalInfo_29);
              TypeCtorInfo_20_37 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              parse_tree__set_of_var__intersect_3_p_0(TypeCtorInfo_20_37, EarlierChangedVars_34, LaterGoalNonLocals_35, &Intersection_36);
              succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_20_37, Intersection_36);
              succeeded = !(succeeded);
              succeeded = !(succeeded);
              if (succeeded)
              {
                Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EarlierGoal_12, (MR_Integer) 0))));
                LaterGoalInfo_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EarlierGoal_12, (MR_Integer) 1))));
                Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LaterGoal_14, (MR_Integer) 0))));
                EarlierGoalInfo_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LaterGoal_14, (MR_Integer) 1))));
                EarlierInstMapDelta_47 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(EarlierGoalInfo_46);
                hlds__instmap__apply_instmap_delta_3_p_0(InstmapBeforeLaterGoal_13, EarlierInstMapDelta_47, &InstMapAfterEarlierGoal_48);
                hlds__instmap__instmap_changed_vars_5_p_0(InstmapBeforeLaterGoal_13, InstMapAfterEarlierGoal_48, VarTypes_9, ModuleInfo_8, &EarlierChangedVars_49);
                LaterGoalNonLocals_50 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LaterGoalInfo_44);
                TypeCtorInfo_20_52 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                parse_tree__set_of_var__intersect_3_p_0(TypeCtorInfo_20_52, EarlierChangedVars_49, LaterGoalNonLocals_50, &Intersection_51);
                succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_20_52, Intersection_51);
                succeeded = !(succeeded);
                succeeded = !(succeeded);
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__goal_util__reordering_maintains_termination_old_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word FullyStrict_6,
  MR_Word EarlierGoal_7,
  MR_Word LaterGoal_8)
{
  {
    MR_bool succeeded;
    MR_Word EarlierGoalInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EarlierGoal_7, (MR_Integer) 1))));
    MR_Word LaterGoalInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LaterGoal_8, (MR_Integer) 1))));
    MR_Word EarlierDetism_13;
    MR_Word EarlierCanFail_14;
    MR_Word LaterDetism_16;
    MR_Word LaterCanFail_17;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EarlierGoal_7, (MR_Integer) 0))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LaterGoal_8, (MR_Integer) 0))));
    MR_Word Var_15;
    MR_Word Var_18;

    EarlierDetism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(EarlierGoalInfo_10);
    parse_tree__prog_data__determinism_components_3_p_0(EarlierDetism_13, &EarlierCanFail_14, &Var_15);
    LaterDetism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(LaterGoalInfo_12);
    parse_tree__prog_data__determinism_components_3_p_0(LaterDetism_16, &LaterCanFail_17, &Var_18);
    succeeded = (FullyStrict_6 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = hlds__goal_form__goal_cannot_loop_or_throw_1_p_0(EarlierGoal_7);
      succeeded = !(succeeded);
    }
    if (succeeded)
      succeeded = (LaterCanFail_17 == (MR_Integer) 1);
    else
      succeeded = MR_TRUE;
    if (succeeded)
      switch (EarlierCanFail_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          succeeded = hlds__goal_form__goal_cannot_loop_or_throw_2_p_0(ModuleInfo_5, LaterGoal_8);
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
hlds__goal_util__create_conj_4_p_0(
  MR_Word GoalA_5,
  MR_Word GoalB_6,
  MR_Word Type_7,
  MR_Word * ConjGoal_8)
{
  {
    MR_Word Var_9;
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (GoalB_6));
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (GoalA_5));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (Var_10));
    }
    hlds__goal_util__create_conj_from_list_3_p_0(Var_9, Type_7, ConjGoal_8);
  }
}

void MR_CALL 
hlds__goal_util__create_conj_from_list_3_p_0(
  MR_Word Conjuncts_4,
  MR_Word ConjType_5,
  MR_Word * ConjGoal_6)
{
  if ((Conjuncts_4 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_util.create_conj_from_list\'/3", (MR_String) "empty conjunction");
      return;
    }
  }
  else
  {
    MR_Word HeadGoal_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts_4, (MR_Integer) 0))));
    MR_Word TailGoals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts_4, (MR_Integer) 1))));

    if ((TailGoals_8 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ConjGoal_6 = HeadGoal_7;
    else
    {
      MR_Word ConjGoalExpr_11;
      MR_Word NonLocals_12;
      MR_Word InstMapDelta_13;
      MR_Word Detism_14;
      MR_Word Purity_15;
      MR_Word HeadGoalInfo_17;
      MR_Word Context_18;
      MR_Word ConjGoalInfo_19;
      MR_Word Var_16;

      {
        ConjGoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConjGoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConjGoalExpr_11, 1) = ((MR_Box) (ConjType_5));
        MR_hl_field(MR_mktag(3), ConjGoalExpr_11, 2) = ((MR_Box) (Conjuncts_4));
      }
      hlds__hlds_goal__goal_list_nonlocals_2_p_0(Conjuncts_4, &NonLocals_12);
      hlds__hlds_goal__goal_list_instmap_delta_2_p_0(Conjuncts_4, &InstMapDelta_13);
      hlds__hlds_goal__goal_list_determinism_2_p_0(Conjuncts_4, &Detism_14);
      hlds__hlds_goal__goal_list_purity_2_p_0(Conjuncts_4, &Purity_15);
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadGoal_7, (MR_Integer) 0))));
      HeadGoalInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadGoal_7, (MR_Integer) 1))));
      Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(HeadGoalInfo_17);
      hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_12, InstMapDelta_13, Detism_14, Purity_15, Context_18, &ConjGoalInfo_19);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *ConjGoal_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ConjGoalExpr_11));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ConjGoalInfo_19));
      }
    }
  }
}

static void MR_CALL 
hlds__goal_util__flatten_disj_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_FlatDisjuncts_9;

    hlds__goal_util__flatten_disj_acc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FlatDisjuncts_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FlatDisjuncts_9));
  }
}

void MR_CALL 
hlds__goal_util__flatten_disj_2_p_0(
  MR_Word Disjuncts_3,
  MR_Word * FlatDisjuncts_4)
{
  {
    MR_Box conv1_FlatDisjuncts_4;

    mercury__list__foldr_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_util_scalar_common_1[5]), (MR_Word) (&hlds__goal_util_scalar_common_4[11]), Disjuncts_3, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv1_FlatDisjuncts_4);
    *FlatDisjuncts_4 = ((MR_Word) (conv1_FlatDisjuncts_4));
  }
}

void MR_CALL 
hlds__goal_util__flatten_conj_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    else
    {
      MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word FlatConjTail_6;
      MR_Word SubGoals_7;
      MR_Word Var_9;
      MR_Word Var_10;
      MR_Word Var_8;

      hlds__goal_util__flatten_conj_2_p_0(Goals0_4, &FlatConjTail_6);
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0))));
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) Var_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_9, (MR_Integer) 0))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_9, (MR_Integer) 1))));
        SubGoals_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_9, (MR_Integer) 2))));
        succeeded = (Var_10 == (MR_Integer) 0);
      }
      if (succeeded)
      {
        *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SubGoals_7, FlatConjTail_6);
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_3));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FlatConjTail_6));
        }
    }
  }
}

static void MR_CALL 
hlds__goal_util__switch_to_disjunction_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Disjunct_16;
    MR_Word conv2_STATE_VARIABLE_VarSet_54;
    MR_Word conv1_STATE_VARIABLE_VarTypes_56;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_58;

    hlds__goal_util__case_to_disjunct_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_Disjunct_16, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_VarSet_54, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_VarTypes_56, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_ModuleInfo_58);
    *wrapper_arg_2 = ((MR_Box) (conv3_Disjunct_16));
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_VarSet_54));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_VarTypes_56));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_58));
  }
}

void MR_CALL 
hlds__goal_util__switch_to_disjunction_10_p_0(
  MR_Word Var_1,
  MR_Word HeadVar__2_2,
  MR_Word InstMap_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarSet_0_5,
  MR_Word * STATE_VARIABLE_VarSet_6,
  MR_Word STATE_VARIABLE_VarTypes_0_7,
  MR_Word * STATE_VARIABLE_VarTypes_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_0_9;
    *STATE_VARIABLE_VarTypes_8 = STATE_VARIABLE_VarTypes_0_7;
    *STATE_VARIABLE_VarSet_6 = STATE_VARIABLE_VarSet_0_5;
  }
  else
  {
    MR_Word Case_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cases_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word MainConsId_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_23, (MR_Integer) 0))));
    MR_Word OtherConsIds_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_23, (MR_Integer) 1))));
    MR_Word CaseGoal_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_23, (MR_Integer) 2))));
    MR_Word MainDisjunctGoal_33;
    MR_Word OtherDisjunctGoals_34;
    MR_Word CasesGoals_35;
    MR_Word STATE_VARIABLE_VarSet_42_42;
    MR_Word STATE_VARIABLE_VarTypes_43_43;
    MR_Word STATE_VARIABLE_ModuleInfo_44_44;
    MR_Word Var_45;
    MR_Word STATE_VARIABLE_VarSet_46_46;
    MR_Word STATE_VARIABLE_VarTypes_47_47;
    MR_Word STATE_VARIABLE_ModuleInfo_48_48;
    MR_Word Var_52;
    MR_Box conv6_STATE_VARIABLE_VarSet_46_46;
    MR_Box conv5_STATE_VARIABLE_VarTypes_47_47;
    MR_Box conv4_STATE_VARIABLE_ModuleInfo_48_48;

    hlds__goal_util__case_to_disjunct_11_p_0(Var_1, CaseGoal_32, InstMap_3, MainConsId_30, &MainDisjunctGoal_33, STATE_VARIABLE_VarSet_0_5, &STATE_VARIABLE_VarSet_42_42, STATE_VARIABLE_VarTypes_0_7, &STATE_VARIABLE_VarTypes_43_43, STATE_VARIABLE_ModuleInfo_0_9, &STATE_VARIABLE_ModuleInfo_44_44);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (hlds__goal_util__switch_to_disjunction_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (Var_1));
      MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (CaseGoal_32));
      MR_hl_field(MR_mktag(0), Var_45, 5) = ((MR_Box) (InstMap_3));
    }
    mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_util_scalar_common_1[4]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_45, OtherConsIds_31, &OtherDisjunctGoals_34, ((MR_Box) (STATE_VARIABLE_VarSet_42_42)), &conv6_STATE_VARIABLE_VarSet_46_46, ((MR_Box) (STATE_VARIABLE_VarTypes_43_43)), &conv5_STATE_VARIABLE_VarTypes_47_47, ((MR_Box) (STATE_VARIABLE_ModuleInfo_44_44)), &conv4_STATE_VARIABLE_ModuleInfo_48_48);
    STATE_VARIABLE_VarSet_46_46 = ((MR_Word) (conv6_STATE_VARIABLE_VarSet_46_46));
    STATE_VARIABLE_VarTypes_47_47 = ((MR_Word) (conv5_STATE_VARIABLE_VarTypes_47_47));
    STATE_VARIABLE_ModuleInfo_48_48 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_48_48));
    hlds__goal_util__switch_to_disjunction_10_p_0(Var_1, Cases_24, InstMap_3, &CasesGoals_35, STATE_VARIABLE_VarSet_46_46, STATE_VARIABLE_VarSet_6, STATE_VARIABLE_VarTypes_47_47, STATE_VARIABLE_VarTypes_8, STATE_VARIABLE_ModuleInfo_48_48, STATE_VARIABLE_ModuleInfo_10);
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MainDisjunctGoal_33));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (OtherDisjunctGoals_34));
    }
    *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_52, CasesGoals_35);
  }
}

static void MR_CALL 
hlds__goal_util__case_to_disjunct_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_64;

    hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1657__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_64);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_64));
  }
}

void MR_CALL 
hlds__goal_util__case_to_disjunct_11_p_0(
  MR_Word Var_12,
  MR_Word CaseGoal_13,
  MR_Word InstMap_14,
  MR_Word ConsId_15,
  MR_Word * Disjunct_16,
  MR_Word STATE_VARIABLE_VarSet_0_53,
  MR_Word * STATE_VARIABLE_VarSet_54,
  MR_Word STATE_VARIABLE_VarTypes_0_55,
  MR_Word * STATE_VARIABLE_VarTypes_56,
  MR_Word STATE_VARIABLE_ModuleInfo_0_57,
  MR_Word * STATE_VARIABLE_ModuleInfo_58)
{
  {
    MR_bool succeeded;
    MR_Integer ConsArity_20;
    MR_Word ArgVars_21;
    MR_Word VarType_22;
    MR_Word ArgTypes_23;
    MR_Word Inst0_24;
    MR_Word ArgInsts_27;
    MR_Word UniModes_31;
    MR_Word UnifyMode_32;
    MR_Word Unification_34;
    MR_Word RHS_35;
    MR_Word ExtraGoalExpr_36;
    MR_Word NonLocals_37;
    MR_Word ExtraInstMapDelta0_38;
    MR_Word ExtraInstMapDelta_39;
    MR_Word ExtraGoalInfo_40;
    MR_Word CaseGoalConj_41;
    MR_Word GoalList_42;
    MR_Word CaseGoalInfo_44;
    MR_Word CaseNonLocals0_45;
    MR_Word CaseNonLocals_46;
    MR_Word CaseInstMapDelta_47;
    MR_Word InstMapDelta_48;
    MR_Word CaseDetism0_49;
    MR_Word Detism_50;
    MR_Word CasePurity_51;
    MR_Word CombinedGoalInfo_52;
    MR_Word Var_69;
    MR_Word Var_81;
    MR_Word Var_84;
    MR_Word ArgInsts1_26;
    MR_Word Inst1_25;
    MR_Word Var_43;

    ConsArity_20 = parse_tree__prog_util__cons_id_arity_1_f_0(ConsId_15);
    mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsArity_20, &ArgVars_21, STATE_VARIABLE_VarSet_0_53, STATE_VARIABLE_VarSet_54);
    hlds__vartypes__lookup_var_type_3_p_0(STATE_VARIABLE_VarTypes_0_55, Var_12, &VarType_22);
    check_hlds__type_util__get_cons_id_arg_types_4_p_0(STATE_VARIABLE_ModuleInfo_0_57, VarType_22, ConsId_15, &ArgTypes_23);
    hlds__vartypes__vartypes_add_corresponding_lists_4_p_0(ArgVars_21, ArgTypes_23, STATE_VARIABLE_VarTypes_0_55, STATE_VARIABLE_VarTypes_56);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_14, Var_12, &Inst0_24);
    check_hlds__inst_util__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_57, Inst0_24, &Inst1_25);
    succeeded = parse_tree__prog_mode__get_arg_insts_4_p_0(Inst1_25, ConsId_15, ConsArity_20, &ArgInsts1_26);
    if (succeeded)
      ArgInsts_27 = ArgInsts1_26;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_util.case_to_disjunct\'/11", (MR_String) "get_arg_insts failed");
        return;
      }
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), (MR_Word) (&hlds__goal_util_scalar_common_4[10]), ArgInsts_27, &UniModes_31);
    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (Inst0_24));
      MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (Inst0_24));
    }
    {
      UnifyMode_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyMode_32, 0) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), UnifyMode_32, 1) = ((MR_Box) (Var_69));
    }
    {
      Unification_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Unification_34, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(1), Unification_34, 1) = ((MR_Box) (ConsId_15));
      MR_hl_field(MR_mktag(1), Unification_34, 2) = ((MR_Box) (ArgVars_21));
      MR_hl_field(MR_mktag(1), Unification_34, 3) = ((MR_Box) (UniModes_31));
      MR_hl_field(MR_mktag(1), Unification_34, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), Unification_34, 5) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      RHS_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RHS_35, 0) = ((MR_Box) (ConsId_15));
      MR_hl_field(MR_mktag(1), RHS_35, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), RHS_35, 2) = ((MR_Box) (ArgVars_21));
    }
    {
      ExtraGoalExpr_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ExtraGoalExpr_36, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(1), ExtraGoalExpr_36, 1) = ((MR_Box) (RHS_35));
      MR_hl_field(MR_mktag(1), ExtraGoalExpr_36, 2) = ((MR_Box) (UnifyMode_32));
      MR_hl_field(MR_mktag(1), ExtraGoalExpr_36, 3) = ((MR_Box) (Unification_34));
      MR_hl_field(MR_mktag(1), ExtraGoalExpr_36, 4) = ((MR_Box) (&hlds__goal_util_scalar_common_1[6]));
    }
    NonLocals_37 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_12);
    hlds__instmap__instmap_delta_init_reachable_1_p_0(&ExtraInstMapDelta0_38);
    hlds__instmap__instmap_delta_bind_var_to_functor_8_p_0(Var_12, VarType_22, ConsId_15, InstMap_14, ExtraInstMapDelta0_38, &ExtraInstMapDelta_39, STATE_VARIABLE_ModuleInfo_0_57, STATE_VARIABLE_ModuleInfo_58);
    hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_37, ExtraInstMapDelta_39, (MR_Integer) 1, (MR_Integer) 0, &ExtraGoalInfo_40);
    hlds__hlds_goal__goal_to_conj_list_2_p_0(CaseGoal_13, &CaseGoalConj_41);
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (ExtraGoalExpr_36));
      MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (ExtraGoalInfo_40));
    }
    {
      GoalList_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalList_42, 0) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(1), GoalList_42, 1) = ((MR_Box) (CaseGoalConj_41));
    }
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseGoal_13, (MR_Integer) 0))));
    CaseGoalInfo_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseGoal_13, (MR_Integer) 1))));
    CaseNonLocals0_45 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(CaseGoalInfo_44);
    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_12, CaseNonLocals0_45, &CaseNonLocals_46);
    CaseInstMapDelta_47 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CaseGoalInfo_44);
    hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(ExtraInstMapDelta_39, CaseInstMapDelta_47, (MR_Integer) 2, &InstMapDelta_48);
    CaseDetism0_49 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(CaseGoalInfo_44);
    parse_tree__prog_detism__det_conjunction_detism_3_p_0((MR_Integer) 1, CaseDetism0_49, &Detism_50);
    CasePurity_51 = hlds__hlds_goal__goal_info_get_purity_1_f_0(CaseGoalInfo_44);
    hlds__hlds_goal__goal_info_init_5_p_0(CaseNonLocals_46, InstMapDelta_48, Detism_50, CasePurity_51, &CombinedGoalInfo_52);
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_84, 2) = ((MR_Box) (GoalList_42));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Disjunct_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CombinedGoalInfo_52));
    }
  }
}

void MR_CALL 
hlds__goal_util__goal_is_atomic_2_p_0(
  MR_Word Goal_3,
  MR_Word * GoalIsAtomic_4)
{
  {
    MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *GoalIsAtomic_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *GoalIsAtomic_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *GoalIsAtomic_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
            *GoalIsAtomic_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_util.goal_is_atomic\'/2", (MR_String) "shorthand");
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
  void * env_ptr_arg)
{
  {
    struct hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0_s * env_ptr = (struct hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0_s *) (env_ptr_arg);

    *((env_ptr)->hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__conv0_PredProcId_5));
    ((env_ptr)->hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__cont)((env_ptr)->hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0_s env;

    (env).hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__cont = cont;
    (env).hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      hlds__goal_util__goal_calls_2_p_1(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &(env).hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2_env_0__conv0_PredProcId_5, hlds__goal_util__pred_proc_ids_from_goal_2_p_0_1, &env);
    }
  }
}

void MR_CALL 
hlds__goal_util__pred_proc_ids_from_goal_2_p_0(
  MR_Word Goal_3,
  MR_Word * PredProcIds_4)
{
  {
    MR_Word P_5;

    {
      P_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), P_5, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), P_5, 1) = ((MR_Box) (hlds__goal_util__pred_proc_ids_from_goal_2_p_0_2));
      MR_hl_field(MR_mktag(0), P_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), P_5, 3) = ((MR_Box) (Goal_3));
    }
    mercury__solutions__solutions_2_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), P_5, PredProcIds_4);
  }
}

static void MR_CALL 
hlds__goal_util__predids_from_goals_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct hlds__goal_util__predids_from_goals_2_p_0_2_env_0_s * env_ptr = (struct hlds__goal_util__predids_from_goals_2_p_0_2_env_0_s *) (env_ptr_arg);

    *((env_ptr)->hlds__goal_util__predids_from_goals_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->hlds__goal_util__predids_from_goals_2_p_0_2_env_0__conv0_PredId_5));
    ((env_ptr)->hlds__goal_util__predids_from_goals_2_p_0_2_env_0__cont)((env_ptr)->hlds__goal_util__predids_from_goals_2_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__goal_util__predids_from_goals_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct hlds__goal_util__predids_from_goals_2_p_0_2_env_0_s env;

    (env).hlds__goal_util__predids_from_goals_2_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).hlds__goal_util__predids_from_goals_2_p_0_2_env_0__cont = cont;
    (env).hlds__goal_util__predids_from_goals_2_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      hlds__goal_util__goal_calls_pred_id_2_p_1(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &(env).hlds__goal_util__predids_from_goals_2_p_0_2_env_0__conv0_PredId_5, hlds__goal_util__predids_from_goals_2_p_0_1, &env);
    }
  }
}

void MR_CALL 
hlds__goal_util__predids_from_goals_2_p_0(
  MR_Word Goals_3,
  MR_Word * PredIds_4)
{
  if ((Goals_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *PredIds_4 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
  else
  {
    MR_Word Goal_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_3, (MR_Integer) 0))));
    MR_Word Rest_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_3, (MR_Integer) 1))));
    MR_Word PredIds0_7;
    MR_Word PredIds1_8;
    MR_Word P_12;

    {
      P_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), P_12, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), P_12, 1) = ((MR_Box) (hlds__goal_util__predids_from_goals_2_p_0_2));
      MR_hl_field(MR_mktag(0), P_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), P_12, 3) = ((MR_Box) (Goal_5));
    }
    mercury__solutions__solutions_2_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), P_12, &PredIds0_7);
    hlds__goal_util__predids_from_goals_2_p_0(Rest_6, &PredIds1_8);
    *PredIds_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIds0_7, PredIds1_8);
  }
}

static void MR_CALL 
hlds__goal_util__predids_with_args_from_goal_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0_s * env_ptr = (struct hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0_s *) (env_ptr_arg);

    *((env_ptr)->hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__conv0_LambdaHeadVar__1_14));
    ((env_ptr)->hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__cont)((env_ptr)->hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__goal_util__predids_with_args_from_goal_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0_s env;

    (env).hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__cont = cont;
    (env).hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__2031__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &(env).hlds__goal_util__predids_with_args_from_goal_2_p_0_2_env_0__conv0_LambdaHeadVar__1_14, hlds__goal_util__predids_with_args_from_goal_2_p_0_1, &env);
    }
  }
}

void MR_CALL 
hlds__goal_util__predids_with_args_from_goal_2_p_0(
  MR_Word Goal_3,
  MR_Word * List_4)
{
  {
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (hlds__goal_util__predids_with_args_from_goal_2_p_0_2));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Goal_3));
    }
    mercury__solutions__solutions_2_p_1((MR_Word) (&hlds__goal_util_scalar_common_2[0]), Var_13, List_4);
  }
}

static void MR_CALL 
hlds__goal_util__predids_from_goal_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct hlds__goal_util__predids_from_goal_2_p_0_2_env_0_s * env_ptr = (struct hlds__goal_util__predids_from_goal_2_p_0_2_env_0_s *) (env_ptr_arg);

    *((env_ptr)->hlds__goal_util__predids_from_goal_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->hlds__goal_util__predids_from_goal_2_p_0_2_env_0__conv0_PredId_5));
    ((env_ptr)->hlds__goal_util__predids_from_goal_2_p_0_2_env_0__cont)((env_ptr)->hlds__goal_util__predids_from_goal_2_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__goal_util__predids_from_goal_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct hlds__goal_util__predids_from_goal_2_p_0_2_env_0_s env;

    (env).hlds__goal_util__predids_from_goal_2_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).hlds__goal_util__predids_from_goal_2_p_0_2_env_0__cont = cont;
    (env).hlds__goal_util__predids_from_goal_2_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      hlds__goal_util__goal_calls_pred_id_2_p_1(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &(env).hlds__goal_util__predids_from_goal_2_p_0_2_env_0__conv0_PredId_5, hlds__goal_util__predids_from_goal_2_p_0_1, &env);
    }
  }
}

void MR_CALL 
hlds__goal_util__predids_from_goal_2_p_0(
  MR_Word Goal_3,
  MR_Word * PredIds_4)
{
  {
    MR_Word P_5;

    {
      P_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), P_5, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), P_5, 1) = ((MR_Box) (hlds__goal_util__predids_from_goal_2_p_0_2));
      MR_hl_field(MR_mktag(0), P_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), P_5, 3) = ((MR_Box) (Goal_3));
    }
    mercury__solutions__solutions_2_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), P_5, PredIds_4);
  }
}

static void MR_CALL 
hlds__goal_util__goal_contains_goal_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct hlds__goal_util__goal_contains_goal_2_p_0_env_0_s * env_ptr = (struct hlds__goal_util__goal_contains_goal_2_p_0_env_0_s *) (env_ptr_arg);

    hlds__goal_util__goal_contains_goal_2_p_0((env_ptr)->hlds__goal_util__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7, (env_ptr)->hlds__goal_util__goal_contains_goal_2_p_0_env_0__HeadVar__2_2, (env_ptr)->hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont, (env_ptr)->hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont_env_ptr);
  }
}

void MR_CALL 
hlds__goal_util__goal_contains_goal_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct hlds__goal_util__goal_contains_goal_2_p_0_env_0_s env;

    (env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__HeadVar__2_2 = HeadVar__2_2;
    (env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont = cont;
    (env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
    *((env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__HeadVar__2_2) = HeadVar__1_1;
    ((env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont)((env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont_env_ptr);
    {
      MR_Word GoalExpr_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

      hlds__goal_util__direct_subgoal_2_p_0(GoalExpr_4, &(env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7, hlds__goal_util__goal_contains_goal_2_p_0_1, &env);
    }
  }
}

static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s * env_ptr = (struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s *) (env_ptr_arg);

    *((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = ((MR_Word) ((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__conv0_Goal_2));
    ((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_2(
  void * env_ptr_arg)
{
  {
    struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s * env_ptr = (struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s *) (env_ptr_arg);

    *((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = ((MR_Word) ((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__conv1_Goal_2));
    ((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_4(
  void * env_ptr_arg)
{
  {
    struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s * env_ptr = (struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Case_20 = ((MR_Word) ((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__conv2_Case_20));
    hlds__goal_util__direct_subgoal_2_p_0_3(env_ptr);
  }
}

static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s * env_ptr = (struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Case_20, (MR_Integer) 0))));
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Case_20, (MR_Integer) 1))));

      *((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Case_20, (MR_Integer) 2))));
      ((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Goal_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s env;

    (env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2 = Goal_2;
    (env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont = cont;
    (env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      case (MR_Integer) 0:
        {
          *((env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 0));
          ((env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
          case (MR_Integer) 2:
            {
              MR_Word ConjList_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word _ConjType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), &(env).hlds__goal_util__direct_subgoal_2_p_0_env_0__conv0_Goal_2, ConjList_12, hlds__goal_util__direct_subgoal_2_p_0_1, &env);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word DisjList_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), &(env).hlds__goal_util__direct_subgoal_2_p_0_env_0__conv1_Goal_2, DisjList_14, hlds__goal_util__direct_subgoal_2_p_0_2, &env);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word CaseList_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));

              mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), &(env).hlds__goal_util__direct_subgoal_2_p_0_env_0__conv2_Case_20, CaseList_18, hlds__goal_util__direct_subgoal_2_p_0_4, &env);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              *((env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              ((env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word Then_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word Else_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
              MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              *((env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = Cond_7;
              ((env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
              *((env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = Then_8;
              ((env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
              *((env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = Else_9;
              ((env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
hlds__goal_util__goal_contains_reconstruction_2_p_0(
  MR_Word Goal_3,
  MR_Word * ContainsReconstruction_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) GoalExpr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_17 = (MR_Word) (MR_body((MR_Word) (GoalExpr_5), (MR_Integer) 0));
          MR_Word next_value_of_Goal_3 = SubGoal_17;

          // direct tailcall eliminated
          Goal_3 = next_value_of_Goal_3;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unify_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_5, (MR_Integer) 3))));
          MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_5, (MR_Integer) 0))));
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_5, (MR_Integer) 1))));
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_5, (MR_Integer) 2))));
          MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_5, (MR_Integer) 4))));
          MR_Word HowToConstruct_30;
          MR_Word Var_26;
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Var_33;

          succeeded = ((MR_tag((MR_Word) Unify_24)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_24, (MR_Integer) 0))));
            Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_24, (MR_Integer) 1))));
            Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_24, (MR_Integer) 2))));
            Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_24, (MR_Integer) 3))));
            HowToConstruct_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_24, (MR_Integer) 4))));
            Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_24, (MR_Integer) 5))));
            Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_24, (MR_Integer) 6))));
            succeeded = ((MR_tag((MR_Word) HowToConstruct_30)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
              Var_33 = (MR_Word) (MR_body((MR_Word) (HowToConstruct_30), (MR_Integer) 1));
          }
          if (succeeded)
            *ContainsReconstruction_4 = (MR_Integer) 1;
          else
            *ContainsReconstruction_4 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        *ContainsReconstruction_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *ContainsReconstruction_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Conjuncts_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
              MR_Word _ConjType_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

              hlds__goal_util__goals_contain_reconstruction_2_p_0(Conjuncts_8, ContainsReconstruction_4);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

              hlds__goal_util__goals_contain_reconstruction_2_p_0(Disjuncts_9, ContainsReconstruction_4);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));
              MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));
              MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));

              hlds__goal_util__cases_contain_reconstruction_2_p_0(Cases_12, ContainsReconstruction_4);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));
              MR_Word SubGoal_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
              MR_Word FGT_20;
              MR_Word Var_19;

              succeeded = ((((MR_tag((MR_Word) Reason_18)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_18, (MR_Integer) 0))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_18, (MR_Integer) 1))));
                FGT_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_18, (MR_Integer) 2))));
                switch (FGT_20) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
                *ContainsReconstruction_4 = (MR_Integer) 0;
              else
              {
                MR_Word next_value_of_Goal_3 = SubGoal_71;

                // direct tailcall eliminated
                Goal_3 = next_value_of_Goal_3;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
              MR_Word Then_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));
              MR_Word Else_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 4))));
              MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

              {
                MR_Word Var_75;

                hlds__goal_util__goal_contains_reconstruction_2_p_0(Cond_14, &Var_75);
                succeeded = ((MR_Integer) 1 == Var_75);
              }
              if (!(succeeded))
              {
                {
                  MR_Word Var_76;

                  hlds__goal_util__goal_contains_reconstruction_2_p_0(Then_15, &Var_76);
                  succeeded = ((MR_Integer) 1 == Var_76);
                }
                if (!(succeeded))
                {
                  MR_Word Var_77;

                  hlds__goal_util__goal_contains_reconstruction_2_p_0(Else_16, &Var_77);
                  succeeded = ((MR_Integer) 1 == Var_77);
                }
              }
              if (succeeded)
                *ContainsReconstruction_4 = (MR_Integer) 1;
              else
                *ContainsReconstruction_4 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Shorthand_52)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand_52, (MR_Integer) 0))));
                    MR_Word GoalB_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand_52, (MR_Integer) 1))));
                    MR_Word Var_67;
                    MR_Word Var_78;
                    MR_Word Var_79;

                    hlds__goal_util__goal_contains_reconstruction_2_p_0(GoalA_53, &Var_78);
                    succeeded = ((MR_Integer) 1 == Var_78);
                    if (succeeded)
                    {
                      Var_67 = (MR_Integer) 1;
                      hlds__goal_util__goal_contains_reconstruction_2_p_0(GoalB_54, &Var_79);
                      succeeded = (Var_67 == Var_79);
                    }
                    if (succeeded)
                      *ContainsReconstruction_4 = (MR_Integer) 1;
                    else
                      *ContainsReconstruction_4 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_52, (MR_Integer) 4))));
                    MR_Word OrElseGoals_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_52, (MR_Integer) 5))));
                    MR_Word _AtomicGoalType_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_52, (MR_Integer) 0))));
                    MR_Word _OuterVars_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_52, (MR_Integer) 1))));
                    MR_Word _InnerVars_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_52, (MR_Integer) 2))));
                    MR_Word _OutputVars_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_52, (MR_Integer) 3))));
                    MR_Word _Inners_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_52, (MR_Integer) 6))));
                    MR_Word Var_65;
                    MR_Word Var_80;
                    MR_Word Var_81;

                    hlds__goal_util__goal_contains_reconstruction_2_p_0(MainGoal_59, &Var_80);
                    succeeded = ((MR_Integer) 1 == Var_80);
                    if (succeeded)
                    {
                      Var_65 = (MR_Integer) 1;
                      hlds__goal_util__goals_contain_reconstruction_2_p_0(OrElseGoals_60, &Var_81);
                      succeeded = (Var_65 == Var_81);
                    }
                    if (succeeded)
                      *ContainsReconstruction_4 = (MR_Integer) 1;
                    else
                      *ContainsReconstruction_4 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_72 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Shorthand_52, (MR_Integer) 2))));
                    MR_Word _MaybeTryIOStateVars_62 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Shorthand_52, (MR_Integer) 0))));
                    MR_Word _ResultVar_63 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Shorthand_52, (MR_Integer) 1))));
                    MR_Word next_value_of_Goal_3 = SubGoal_72;

                    // direct tailcall eliminated
                    Goal_3 = next_value_of_Goal_3;
                    continue;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_util__cases_contain_reconstruction_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Case_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word CaseGoal_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_3, (MR_Integer) 2))));
      MR_Word HeadContainsReconstruction_9;
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_3, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_3, (MR_Integer) 1))));

      hlds__goal_util__goal_contains_reconstruction_2_p_0(CaseGoal_8, &HeadContainsReconstruction_9);
      switch (HeadContainsReconstruction_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Cases_4;

            // direct tailcall eliminated
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_util__goals_contain_reconstruction_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word HeadContainsReconstruction_6;

      hlds__goal_util__goal_contains_reconstruction_2_p_0(Goal_3, &HeadContainsReconstruction_6);
      switch (HeadContainsReconstruction_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Goals_4;

            // direct tailcall eliminated
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
hlds__goal_util__goal_list_calls_proc_in_set_2_f_0(
  MR_Word Goals_4,
  MR_Word PredProcIds_5)
{
  {
    MR_Word CalledPredProcIds_6;
    MR_Word Var_7;

    Var_7 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
    hlds__goal_util__goal_list_calls_proc_in_set_acc_4_p_0(Goals_4, PredProcIds_5, Var_7, &CalledPredProcIds_6);
    return CalledPredProcIds_6;
  }
}

MR_Word MR_CALL 
hlds__goal_util__goal_calls_proc_in_set_2_f_0(
  MR_Word Goal_4,
  MR_Word PredProcIds_5)
{
  {
    MR_Word CalledPredProcIds_6;
    MR_Word Var_7;

    Var_7 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
    hlds__goal_util__goal_calls_proc_in_set_acc_4_p_0(Goal_4, PredProcIds_5, Var_7, &CalledPredProcIds_6);
    return CalledPredProcIds_6;
  }
}

static void MR_CALL 
hlds__goal_util__goal_calls_proc_in_set_acc_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredProcIds_7,
  MR_Word STATE_VARIABLE_CalledSet_0_58,
  MR_Word * STATE_VARIABLE_CalledSet_59)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word _GoalInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) GoalExpr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goal_41 = (MR_Word) (MR_body((MR_Word) (GoalExpr_5), (MR_Integer) 0));
          MR_Word next_value_of_HeadVar__1_1 = Goal_41;

          // direct tailcall eliminated
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_CalledSet_59 = STATE_VARIABLE_CalledSet_0_58;
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_5, (MR_Integer) 0))));
          MR_Integer ProcId_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_5, (MR_Integer) 1))));
          MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_5, (MR_Integer) 2))));
          MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_5, (MR_Integer) 3))));
          MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_5, (MR_Integer) 4))));
          MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_5, (MR_Integer) 5))));
          MR_Word Var_73;

          {
            Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (PredId_14));
            MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (ProcId_15));
          }
          succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (Var_73)), PredProcIds_7);
          if (succeeded)
          {
            mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (Var_73)), STATE_VARIABLE_CalledSet_0_58, STATE_VARIABLE_CalledSet_59);
          }
          else
            *STATE_VARIABLE_CalledSet_59 = STATE_VARIABLE_CalledSet_0_58;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_CalledSet_59 = STATE_VARIABLE_CalledSet_0_58;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_CalledSet_59 = STATE_VARIABLE_CalledSet_0_58;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
              MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

              hlds__goal_util__goal_list_calls_proc_in_set_acc_4_p_0(Goals_33, PredProcIds_7, STATE_VARIABLE_CalledSet_0_58, STATE_VARIABLE_CalledSet_59);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

              hlds__goal_util__goal_list_calls_proc_in_set_acc_4_p_0(Goals_76, PredProcIds_7, STATE_VARIABLE_CalledSet_0_58, STATE_VARIABLE_CalledSet_59);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));
              MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));
              MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));

              hlds__goal_util__case_list_calls_proc_in_list_acc_4_p_0(Cases_36, PredProcIds_7, STATE_VARIABLE_CalledSet_0_58, STATE_VARIABLE_CalledSet_59);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));
              MR_Word Goal_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
              MR_Word FGT_44;
              MR_Word Var_43;

              succeeded = ((((MR_tag((MR_Word) Reason_42)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_42, (MR_Integer) 0))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_42, (MR_Integer) 1))));
                FGT_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_42, (MR_Integer) 2))));
                switch (FGT_44) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
                *STATE_VARIABLE_CalledSet_59 = STATE_VARIABLE_CalledSet_0_58;
              else
              {
                MR_Word next_value_of_HeadVar__1_1 = Goal_77;

                // direct tailcall eliminated
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
              MR_Word Then_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));
              MR_Word Else_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_CalledSet_67_67;
              MR_Word STATE_VARIABLE_CalledSet_68_68;
              MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__1_1;
              MR_Word next_value_of_STATE_VARIABLE_CalledSet_0_58;

              hlds__goal_util__goal_calls_proc_in_set_acc_4_p_0(Cond_38, PredProcIds_7, STATE_VARIABLE_CalledSet_0_58, &STATE_VARIABLE_CalledSet_67_67);
              hlds__goal_util__goal_calls_proc_in_set_acc_4_p_0(Then_39, PredProcIds_7, STATE_VARIABLE_CalledSet_67_67, &STATE_VARIABLE_CalledSet_68_68);
              // direct tailcall eliminated
              next_value_of_HeadVar__1_1 = Else_40;
              next_value_of_STATE_VARIABLE_CalledSet_0_58 = STATE_VARIABLE_CalledSet_68_68;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              STATE_VARIABLE_CalledSet_0_58 = next_value_of_STATE_VARIABLE_CalledSet_0_58;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_45)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_util.goal_calls_proc_in_set_acc\'/4", (MR_String) "bi_implication");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_45, (MR_Integer) 4))));
                    MR_Word OrElseGoals_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_45, (MR_Integer) 5))));
                    MR_Word STATE_VARIABLE_CalledSet_63_63;
                    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_45, (MR_Integer) 0))));
                    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_45, (MR_Integer) 1))));
                    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_45, (MR_Integer) 2))));
                    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_45, (MR_Integer) 3))));
                    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_45, (MR_Integer) 6))));

                    hlds__goal_util__goal_calls_proc_in_set_acc_4_p_0(MainGoal_50, PredProcIds_7, STATE_VARIABLE_CalledSet_0_58, &STATE_VARIABLE_CalledSet_63_63);
                    hlds__goal_util__goal_list_calls_proc_in_set_acc_4_p_0(OrElseGoals_51, PredProcIds_7, STATE_VARIABLE_CalledSet_63_63, STATE_VARIABLE_CalledSet_59);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_55 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_45, (MR_Integer) 2))));
                    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_45, (MR_Integer) 0))));
                    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_45, (MR_Integer) 1))));
                    MR_Word next_value_of_HeadVar__1_1 = SubGoal_55;

                    // direct tailcall eliminated
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    continue;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_util__case_list_calls_proc_in_list_acc_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredProcIds_2,
  MR_Word STATE_VARIABLE_CalledSet_0_3,
  MR_Word * STATE_VARIABLE_CalledSet_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CalledSet_4 = STATE_VARIABLE_CalledSet_0_3;
    else
    {
      MR_Word Case_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_9, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_CalledSet_18_18;
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_9, (MR_Integer) 0))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_9, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CalledSet_0_3;

      hlds__goal_util__goal_calls_proc_in_set_acc_4_p_0(Goal_15, PredProcIds_2, STATE_VARIABLE_CalledSet_0_3, &STATE_VARIABLE_CalledSet_18_18);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Cases_10;
      next_value_of_STATE_VARIABLE_CalledSet_0_3 = STATE_VARIABLE_CalledSet_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CalledSet_0_3 = next_value_of_STATE_VARIABLE_CalledSet_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_util__goal_list_calls_proc_in_set_acc_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredProcIds_2,
  MR_Word STATE_VARIABLE_CalledSet_0_3,
  MR_Word * STATE_VARIABLE_CalledSet_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CalledSet_4 = STATE_VARIABLE_CalledSet_0_3;
    else
    {
      MR_Word Goal_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_CalledSet_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CalledSet_0_3;

      hlds__goal_util__goal_calls_proc_in_set_acc_4_p_0(Goal_9, PredProcIds_2, STATE_VARIABLE_CalledSet_0_3, &STATE_VARIABLE_CalledSet_15_15);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Goals_10;
      next_value_of_STATE_VARIABLE_CalledSet_0_3 = STATE_VARIABLE_CalledSet_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CalledSet_0_3 = next_value_of_STATE_VARIABLE_CalledSet_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_util__cases_calls_pred_id_2_p_1(
  MR_Word HeadVar__1_1,
  MR_Word * PredId_7,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Goal_5;
    MR_Word Cases_6;
    MR_Word Var_8;
    MR_Word Var_3;
    MR_Word Var_4;

    // setup for model_non tailcalls optimized into a loop
    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Cases_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
      Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1))));
      Goal_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2))));
      {
        MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
        MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) GoalExpr_10)) {
          case (MR_Integer) 0:
            {
              MR_Word SubGoal_24 = (MR_Word) (MR_body((MR_Word) (GoalExpr_10), (MR_Integer) 0));

              hlds__goal_util__goal_calls_pred_id_2_p_1(SubGoal_24, PredId_7, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer Var_28;
              MR_Word Var_29;
              MR_Word Var_30;
              MR_Word Var_31;
              MR_Word Var_32;

              *PredId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 0))));
              Var_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 1))));
              Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 2))));
              Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 3))));
              Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 4))));
              Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 5))));
              cont(cont_env_ptr);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0)))) {
              case (MR_Integer) 2:
                {
                  MR_Word Conjuncts_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                  MR_Word _ConjType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

                  hlds__goal_util__goals_calls_pred_id_2_p_1(Conjuncts_15, PredId_7, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Disjuncts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

                  hlds__goal_util__goals_calls_pred_id_2_p_1(Disjuncts_16, PredId_7, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Cases_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3))));
                  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
                  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));

                  hlds__goal_util__cases_calls_pred_id_2_p_1(Cases_19, PredId_7, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Reason_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
                  MR_Word SubGoal_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                  MR_Word FGT_27;
                  MR_Word Var_26;

                  succeeded = ((((MR_tag((MR_Word) Reason_25)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_25, (MR_Integer) 0))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_25, (MR_Integer) 1))));
                    FGT_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_25, (MR_Integer) 2))));
                    switch (FGT_27) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 1:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 2:
                        succeeded = MR_TRUE;
                        break;
                    }
                  }
                  if (succeeded)
                  {
                    succeeded = MR_FALSE;
                    if (succeeded)
                      cont(cont_env_ptr);
                  }
                  else
                    hlds__goal_util__goal_calls_pred_id_2_p_1(SubGoal_51, PredId_7, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Cond_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                  MR_Word Then_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3))));
                  MR_Word Else_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4))));
                  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

                  hlds__goal_util__goal_calls_pred_id_2_p_1(Cond_21, PredId_7, cont, cont_env_ptr);
                  hlds__goal_util__goal_calls_pred_id_2_p_1(Then_22, PredId_7, cont, cont_env_ptr);
                  hlds__goal_util__goal_calls_pred_id_2_p_1(Else_23, PredId_7, cont, cont_env_ptr);
                }
                break;
            }
            break;
        }
      }
      {
        MR_Word next_value_of_HeadVar__1_1 = Cases_6;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_util__goals_calls_pred_id_2_p_1(
  MR_Word HeadVar__1_1,
  MR_Word * PredId_5,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Goal_3;
    MR_Word Goals_4;

    // setup for model_non tailcalls optimized into a loop
    if (succeeded)
    {
      Goal_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Goals_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      {
        MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0))));
        MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) GoalExpr_7)) {
          case (MR_Integer) 0:
            {
              MR_Word SubGoal_21 = (MR_Word) (MR_body((MR_Word) (GoalExpr_7), (MR_Integer) 0));

              hlds__goal_util__goal_calls_pred_id_2_p_1(SubGoal_21, PredId_5, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer Var_25;
              MR_Word Var_26;
              MR_Word Var_27;
              MR_Word Var_28;
              MR_Word Var_29;

              *PredId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 0))));
              Var_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 1))));
              Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 2))));
              Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 3))));
              Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 4))));
              Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 5))));
              cont(cont_env_ptr);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 0)))) {
              case (MR_Integer) 2:
                {
                  MR_Word Conjuncts_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
                  MR_Word _ConjType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));

                  hlds__goal_util__goals_calls_pred_id_2_p_1(Conjuncts_12, PredId_5, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Disjuncts_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));

                  hlds__goal_util__goals_calls_pred_id_2_p_1(Disjuncts_13, PredId_5, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Cases_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
                  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
                  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));

                  hlds__goal_util__cases_calls_pred_id_2_p_1(Cases_16, PredId_5, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Reason_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
                  MR_Word SubGoal_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
                  MR_Word FGT_24;
                  MR_Word Var_23;

                  succeeded = ((((MR_tag((MR_Word) Reason_22)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_22, (MR_Integer) 0))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_22, (MR_Integer) 1))));
                    FGT_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_22, (MR_Integer) 2))));
                    switch (FGT_24) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 1:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 2:
                        succeeded = MR_TRUE;
                        break;
                    }
                  }
                  if (succeeded)
                  {
                    succeeded = MR_FALSE;
                    if (succeeded)
                      cont(cont_env_ptr);
                  }
                  else
                    hlds__goal_util__goal_calls_pred_id_2_p_1(SubGoal_48, PredId_5, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Cond_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
                  MR_Word Then_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
                  MR_Word Else_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 4))));
                  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));

                  hlds__goal_util__goal_calls_pred_id_2_p_1(Cond_18, PredId_5, cont, cont_env_ptr);
                  hlds__goal_util__goal_calls_pred_id_2_p_1(Then_19, PredId_5, cont, cont_env_ptr);
                  hlds__goal_util__goal_calls_pred_id_2_p_1(Else_20, PredId_5, cont, cont_env_ptr);
                }
                break;
            }
            break;
        }
      }
      {
        MR_Word next_value_of_HeadVar__1_1 = Goals_4;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
hlds__goal_util__goal_calls_pred_id_2_p_1(
  MR_Word HeadVar__1_1,
  MR_Word * PredId_5,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    // setup for model_non tailcalls optimized into a loop
    switch (MR_tag((MR_Word) GoalExpr_3)) {
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_18 = (MR_Word) (MR_body((MR_Word) (GoalExpr_3), (MR_Integer) 0));
          MR_Word next_value_of_HeadVar__1_1 = SubGoal_18;

          // direct tailcall eliminated
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Var_22;
          MR_Word Var_23;
          MR_Word Var_24;
          MR_Word Var_25;
          MR_Word Var_26;

          *PredId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 0))));
          Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 1))));
          Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 2))));
          Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 3))));
          Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 4))));
          Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 5))));
          cont(cont_env_ptr);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 0)))) {
          case (MR_Integer) 2:
            {
              MR_Word Conjuncts_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));
              MR_Word _ConjType_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));

              hlds__goal_util__goals_calls_pred_id_2_p_1(Conjuncts_9, PredId_5, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));

              hlds__goal_util__goals_calls_pred_id_2_p_1(Disjuncts_10, PredId_5, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3))));
              MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));
              MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));

              hlds__goal_util__cases_calls_pred_id_2_p_1(Cases_13, PredId_5, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));
              MR_Word SubGoal_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));
              MR_Word FGT_21;
              MR_Word Var_20;

              succeeded = ((((MR_tag((MR_Word) Reason_19)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_19, (MR_Integer) 0))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_19, (MR_Integer) 1))));
                FGT_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_19, (MR_Integer) 2))));
                switch (FGT_21) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
              {
                succeeded = MR_FALSE;
                if (succeeded)
                  cont(cont_env_ptr);
              }
              else
              {
                MR_Word next_value_of_HeadVar__1_1 = SubGoal_45;

                // direct tailcall eliminated
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));
              MR_Word Then_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3))));
              MR_Word Else_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 4))));
              MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));

              hlds__goal_util__goal_calls_pred_id_2_p_1(Cond_15, PredId_5, cont, cont_env_ptr);
              hlds__goal_util__goal_calls_pred_id_2_p_1(Then_16, PredId_5, cont, cont_env_ptr);
              {
                MR_Word next_value_of_HeadVar__1_1 = Else_17;

                // direct tailcall eliminated
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
hlds__goal_util__goal_calls_pred_id_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredId_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    // setup for model_semi tailcalls optimized into a loop
    switch (MR_tag((MR_Word) GoalExpr_3)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_18 = (MR_Word) (MR_body((MR_Word) (GoalExpr_3), (MR_Integer) 0));
          MR_Word next_value_of_HeadVar__1_1 = SubGoal_18;

          // direct tailcall eliminated
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 0))));
          MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 1))));
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 2))));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 3))));
          MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 4))));
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 5))));

          succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_5, Var_46);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 0)))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Conjuncts_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));
              MR_Word _ConjType_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));

              succeeded = hlds__goal_util__goals_calls_pred_id_2_p_0(Conjuncts_9, PredId_5);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));

              succeeded = hlds__goal_util__goals_calls_pred_id_2_p_0(Disjuncts_10, PredId_5);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3))));
              MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));
              MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));

              succeeded = hlds__goal_util__cases_calls_pred_id_2_p_0(Cases_13, PredId_5);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));
              MR_Word SubGoal_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));
              MR_Word FGT_21;
              MR_Word Var_20;

              succeeded = ((((MR_tag((MR_Word) Reason_19)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_19, (MR_Integer) 0))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_19, (MR_Integer) 1))));
                FGT_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_19, (MR_Integer) 2))));
                switch (FGT_21) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
                succeeded = MR_FALSE;
              else
              {
                MR_Word next_value_of_HeadVar__1_1 = SubGoal_45;

                // direct tailcall eliminated
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));
              MR_Word Then_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3))));
              MR_Word Else_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 4))));
              MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));

              succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(Cond_15, PredId_5);
              if (!(succeeded))
              {
                succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(Then_16, PredId_5);
                if (!(succeeded))
                {
                  MR_Word next_value_of_HeadVar__1_1 = Else_17;

                  // direct tailcall eliminated
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
              }
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__goal_util__cases_calls_pred_id_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredId_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Goal_5;
    MR_Word Cases_6;
    MR_Word Var_8;
    MR_Word Var_3;
    MR_Word Var_4;

    // setup for model_semi tailcalls optimized into a loop
    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Cases_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
      Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1))));
      Goal_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2))));
      {
        MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
        MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) GoalExpr_10)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word SubGoal_24 = (MR_Word) (MR_body((MR_Word) (GoalExpr_10), (MR_Integer) 0));

              succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(SubGoal_24, PredId_7);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 0))));
              MR_Integer Var_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 1))));
              MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 2))));
              MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 3))));
              MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 4))));
              MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 5))));

              succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_7, Var_52);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0)))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Conjuncts_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                  MR_Word _ConjType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

                  succeeded = hlds__goal_util__goals_calls_pred_id_2_p_0(Conjuncts_15, PredId_7);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Disjuncts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

                  succeeded = hlds__goal_util__goals_calls_pred_id_2_p_0(Disjuncts_16, PredId_7);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Cases_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3))));
                  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
                  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));

                  succeeded = hlds__goal_util__cases_calls_pred_id_2_p_0(Cases_19, PredId_7);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Reason_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
                  MR_Word SubGoal_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                  MR_Word FGT_27;
                  MR_Word Var_26;

                  succeeded = ((((MR_tag((MR_Word) Reason_25)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_25, (MR_Integer) 0))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_25, (MR_Integer) 1))));
                    FGT_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_25, (MR_Integer) 2))));
                    switch (FGT_27) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 1:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 2:
                        succeeded = MR_TRUE;
                        break;
                    }
                  }
                  if (succeeded)
                    succeeded = MR_FALSE;
                  else
                    succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(SubGoal_51, PredId_7);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Cond_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                  MR_Word Then_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3))));
                  MR_Word Else_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4))));
                  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

                  succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(Cond_21, PredId_7);
                  if (!(succeeded))
                  {
                    succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(Then_22, PredId_7);
                    if (!(succeeded))
                      succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(Else_23, PredId_7);
                  }
                }
                break;
            }
            break;
        }
      }
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__1_1 = Cases_6;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__goal_util__goals_calls_pred_id_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredId_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Goal_3;
    MR_Word Goals_4;

    // setup for model_semi tailcalls optimized into a loop
    if (succeeded)
    {
      Goal_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Goals_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      {
        MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0))));
        MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) GoalExpr_7)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word SubGoal_21 = (MR_Word) (MR_body((MR_Word) (GoalExpr_7), (MR_Integer) 0));

              succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(SubGoal_21, PredId_5);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 0))));
              MR_Integer Var_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 1))));
              MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 2))));
              MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 3))));
              MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 4))));
              MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 5))));

              succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_5, Var_49);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 0)))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Conjuncts_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
                  MR_Word _ConjType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));

                  succeeded = hlds__goal_util__goals_calls_pred_id_2_p_0(Conjuncts_12, PredId_5);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Disjuncts_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));

                  succeeded = hlds__goal_util__goals_calls_pred_id_2_p_0(Disjuncts_13, PredId_5);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Cases_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
                  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
                  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));

                  succeeded = hlds__goal_util__cases_calls_pred_id_2_p_0(Cases_16, PredId_5);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Reason_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
                  MR_Word SubGoal_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
                  MR_Word FGT_24;
                  MR_Word Var_23;

                  succeeded = ((((MR_tag((MR_Word) Reason_22)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_22, (MR_Integer) 0))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_22, (MR_Integer) 1))));
                    FGT_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_22, (MR_Integer) 2))));
                    switch (FGT_24) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 1:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 2:
                        succeeded = MR_TRUE;
                        break;
                    }
                  }
                  if (succeeded)
                    succeeded = MR_FALSE;
                  else
                    succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(SubGoal_48, PredId_5);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Cond_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
                  MR_Word Then_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
                  MR_Word Else_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 4))));
                  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));

                  succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(Cond_18, PredId_5);
                  if (!(succeeded))
                  {
                    succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(Then_19, PredId_5);
                    if (!(succeeded))
                      succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(Else_20, PredId_5);
                  }
                }
                break;
            }
            break;
        }
      }
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__1_1 = Goals_4;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
hlds__goal_util__cases_calls_2_p_1(
  MR_Word HeadVar__1_1,
  MR_Word * PredProcId_7,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Goal_5;
    MR_Word Cases_6;
    MR_Word Var_8;
    MR_Word Var_3;
    MR_Word Var_4;

    // setup for model_non tailcalls optimized into a loop
    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Cases_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
      Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1))));
      Goal_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2))));
      {
        MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
        MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) GoalExpr_10)) {
          case (MR_Integer) 0:
            {
              MR_Word SubGoal_24 = (MR_Word) (MR_body((MR_Word) (GoalExpr_10), (MR_Integer) 0));

              hlds__goal_util__goal_calls_2_p_1(SubGoal_24, PredProcId_7, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word PredId_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 0))));
              MR_Integer ProcId_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 1))));
              MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 2))));
              MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 3))));
              MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 4))));
              MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 5))));

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *PredProcId_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredId_28));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcId_29));
              }
              cont(cont_env_ptr);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0)))) {
              case (MR_Integer) 2:
                {
                  MR_Word Conjuncts_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                  MR_Word _ConjType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

                  hlds__goal_util__goals_calls_2_p_1(Conjuncts_15, PredProcId_7, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Disjuncts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

                  hlds__goal_util__goals_calls_2_p_1(Disjuncts_16, PredProcId_7, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Cases_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3))));
                  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
                  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));

                  hlds__goal_util__cases_calls_2_p_1(Cases_19, PredProcId_7, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Reason_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
                  MR_Word SubGoal_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                  MR_Word FGT_27;
                  MR_Word Var_26;

                  succeeded = ((((MR_tag((MR_Word) Reason_25)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_25, (MR_Integer) 0))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_25, (MR_Integer) 1))));
                    FGT_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_25, (MR_Integer) 2))));
                    switch (FGT_27) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 1:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 2:
                        succeeded = MR_TRUE;
                        break;
                    }
                  }
                  if (succeeded)
                  {
                    succeeded = MR_FALSE;
                    if (succeeded)
                      cont(cont_env_ptr);
                  }
                  else
                    hlds__goal_util__goal_calls_2_p_1(SubGoal_52, PredProcId_7, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Cond_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                  MR_Word Then_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3))));
                  MR_Word Else_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4))));
                  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

                  hlds__goal_util__goal_calls_2_p_1(Cond_21, PredProcId_7, cont, cont_env_ptr);
                  hlds__goal_util__goal_calls_2_p_1(Then_22, PredProcId_7, cont, cont_env_ptr);
                  hlds__goal_util__goal_calls_2_p_1(Else_23, PredProcId_7, cont, cont_env_ptr);
                }
                break;
            }
            break;
        }
      }
      {
        MR_Word next_value_of_HeadVar__1_1 = Cases_6;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_util__goals_calls_2_p_1(
  MR_Word HeadVar__1_1,
  MR_Word * PredProcId_5,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Goal_3;
    MR_Word Goals_4;

    // setup for model_non tailcalls optimized into a loop
    if (succeeded)
    {
      Goal_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Goals_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      {
        MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0))));
        MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) GoalExpr_7)) {
          case (MR_Integer) 0:
            {
              MR_Word SubGoal_21 = (MR_Word) (MR_body((MR_Word) (GoalExpr_7), (MR_Integer) 0));

              hlds__goal_util__goal_calls_2_p_1(SubGoal_21, PredProcId_5, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word PredId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 0))));
              MR_Integer ProcId_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 1))));
              MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 2))));
              MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 3))));
              MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 4))));
              MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 5))));

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *PredProcId_5 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredId_25));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcId_26));
              }
              cont(cont_env_ptr);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 0)))) {
              case (MR_Integer) 2:
                {
                  MR_Word Conjuncts_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
                  MR_Word _ConjType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));

                  hlds__goal_util__goals_calls_2_p_1(Conjuncts_12, PredProcId_5, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Disjuncts_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));

                  hlds__goal_util__goals_calls_2_p_1(Disjuncts_13, PredProcId_5, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Cases_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
                  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
                  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));

                  hlds__goal_util__cases_calls_2_p_1(Cases_16, PredProcId_5, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Reason_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
                  MR_Word SubGoal_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
                  MR_Word FGT_24;
                  MR_Word Var_23;

                  succeeded = ((((MR_tag((MR_Word) Reason_22)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_22, (MR_Integer) 0))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_22, (MR_Integer) 1))));
                    FGT_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_22, (MR_Integer) 2))));
                    switch (FGT_24) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 1:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 2:
                        succeeded = MR_TRUE;
                        break;
                    }
                  }
                  if (succeeded)
                  {
                    succeeded = MR_FALSE;
                    if (succeeded)
                      cont(cont_env_ptr);
                  }
                  else
                    hlds__goal_util__goal_calls_2_p_1(SubGoal_49, PredProcId_5, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Cond_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
                  MR_Word Then_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
                  MR_Word Else_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 4))));
                  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));

                  hlds__goal_util__goal_calls_2_p_1(Cond_18, PredProcId_5, cont, cont_env_ptr);
                  hlds__goal_util__goal_calls_2_p_1(Then_19, PredProcId_5, cont, cont_env_ptr);
                  hlds__goal_util__goal_calls_2_p_1(Else_20, PredProcId_5, cont, cont_env_ptr);
                }
                break;
            }
            break;
        }
      }
      {
        MR_Word next_value_of_HeadVar__1_1 = Goals_4;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
hlds__goal_util__goal_calls_2_p_1(
  MR_Word HeadVar__1_1,
  MR_Word * PredProcId_5,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    // setup for model_non tailcalls optimized into a loop
    switch (MR_tag((MR_Word) GoalExpr_3)) {
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_18 = (MR_Word) (MR_body((MR_Word) (GoalExpr_3), (MR_Integer) 0));
          MR_Word next_value_of_HeadVar__1_1 = SubGoal_18;

          // direct tailcall eliminated
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 0))));
          MR_Integer ProcId_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 1))));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 2))));
          MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 3))));
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 4))));
          MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 5))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *PredProcId_5 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredId_22));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcId_23));
          }
          cont(cont_env_ptr);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 0)))) {
          case (MR_Integer) 2:
            {
              MR_Word Conjuncts_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));
              MR_Word _ConjType_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));

              hlds__goal_util__goals_calls_2_p_1(Conjuncts_9, PredProcId_5, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));

              hlds__goal_util__goals_calls_2_p_1(Disjuncts_10, PredProcId_5, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3))));
              MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));
              MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));

              hlds__goal_util__cases_calls_2_p_1(Cases_13, PredProcId_5, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));
              MR_Word SubGoal_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));
              MR_Word FGT_21;
              MR_Word Var_20;

              succeeded = ((((MR_tag((MR_Word) Reason_19)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_19, (MR_Integer) 0))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_19, (MR_Integer) 1))));
                FGT_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_19, (MR_Integer) 2))));
                switch (FGT_21) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
              {
                succeeded = MR_FALSE;
                if (succeeded)
                  cont(cont_env_ptr);
              }
              else
              {
                MR_Word next_value_of_HeadVar__1_1 = SubGoal_46;

                // direct tailcall eliminated
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));
              MR_Word Then_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3))));
              MR_Word Else_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 4))));
              MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));

              hlds__goal_util__goal_calls_2_p_1(Cond_15, PredProcId_5, cont, cont_env_ptr);
              hlds__goal_util__goal_calls_2_p_1(Then_16, PredProcId_5, cont, cont_env_ptr);
              {
                MR_Word next_value_of_HeadVar__1_1 = Else_17;

                // direct tailcall eliminated
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
hlds__goal_util__goal_calls_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredProcId_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    // setup for model_semi tailcalls optimized into a loop
    switch (MR_tag((MR_Word) GoalExpr_3)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_18 = (MR_Word) (MR_body((MR_Word) (GoalExpr_3), (MR_Integer) 0));
          MR_Word next_value_of_HeadVar__1_1 = SubGoal_18;

          // direct tailcall eliminated
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 0))));
          MR_Integer ProcId_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 1))));
          MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_5, (MR_Integer) 0))));
          MR_Integer Var_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_5, (MR_Integer) 1))));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 2))));
          MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 3))));
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 4))));
          MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 5))));

          succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_22, Var_47);
          if (succeeded)
            succeeded = (ProcId_23 == Var_48);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 0)))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Conjuncts_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));
              MR_Word _ConjType_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));

              succeeded = hlds__goal_util__goals_calls_2_p_0(Conjuncts_9, PredProcId_5);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));

              succeeded = hlds__goal_util__goals_calls_2_p_0(Disjuncts_10, PredProcId_5);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3))));
              MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));
              MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));

              succeeded = hlds__goal_util__cases_calls_2_p_0(Cases_13, PredProcId_5);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));
              MR_Word SubGoal_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));
              MR_Word FGT_21;
              MR_Word Var_20;

              succeeded = ((((MR_tag((MR_Word) Reason_19)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_19, (MR_Integer) 0))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_19, (MR_Integer) 1))));
                FGT_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_19, (MR_Integer) 2))));
                switch (FGT_21) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
                succeeded = MR_FALSE;
              else
              {
                MR_Word next_value_of_HeadVar__1_1 = SubGoal_46;

                // direct tailcall eliminated
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));
              MR_Word Then_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3))));
              MR_Word Else_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 4))));
              MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));

              succeeded = hlds__goal_util__goal_calls_2_p_0(Cond_15, PredProcId_5);
              if (!(succeeded))
              {
                succeeded = hlds__goal_util__goal_calls_2_p_0(Then_16, PredProcId_5);
                if (!(succeeded))
                {
                  MR_Word next_value_of_HeadVar__1_1 = Else_17;

                  // direct tailcall eliminated
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
              }
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__goal_util__cases_calls_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredProcId_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Goal_5;
    MR_Word Cases_6;
    MR_Word Var_8;
    MR_Word Var_3;
    MR_Word Var_4;

    // setup for model_semi tailcalls optimized into a loop
    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Cases_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
      Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1))));
      Goal_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2))));
      {
        MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
        MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) GoalExpr_10)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word SubGoal_24 = (MR_Word) (MR_body((MR_Word) (GoalExpr_10), (MR_Integer) 0));

              succeeded = hlds__goal_util__goal_calls_2_p_0(SubGoal_24, PredProcId_7);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word PredId_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 0))));
              MR_Integer ProcId_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 1))));
              MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_7, (MR_Integer) 0))));
              MR_Integer Var_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_7, (MR_Integer) 1))));
              MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 2))));
              MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 3))));
              MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 4))));
              MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 5))));

              succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_28, Var_53);
              if (succeeded)
                succeeded = (ProcId_29 == Var_54);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0)))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Conjuncts_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                  MR_Word _ConjType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

                  succeeded = hlds__goal_util__goals_calls_2_p_0(Conjuncts_15, PredProcId_7);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Disjuncts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

                  succeeded = hlds__goal_util__goals_calls_2_p_0(Disjuncts_16, PredProcId_7);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Cases_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3))));
                  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
                  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));

                  succeeded = hlds__goal_util__cases_calls_2_p_0(Cases_19, PredProcId_7);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Reason_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
                  MR_Word SubGoal_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                  MR_Word FGT_27;
                  MR_Word Var_26;

                  succeeded = ((((MR_tag((MR_Word) Reason_25)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_25, (MR_Integer) 0))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_25, (MR_Integer) 1))));
                    FGT_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_25, (MR_Integer) 2))));
                    switch (FGT_27) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 1:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 2:
                        succeeded = MR_TRUE;
                        break;
                    }
                  }
                  if (succeeded)
                    succeeded = MR_FALSE;
                  else
                    succeeded = hlds__goal_util__goal_calls_2_p_0(SubGoal_52, PredProcId_7);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Cond_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                  MR_Word Then_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3))));
                  MR_Word Else_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4))));
                  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

                  succeeded = hlds__goal_util__goal_calls_2_p_0(Cond_21, PredProcId_7);
                  if (!(succeeded))
                  {
                    succeeded = hlds__goal_util__goal_calls_2_p_0(Then_22, PredProcId_7);
                    if (!(succeeded))
                      succeeded = hlds__goal_util__goal_calls_2_p_0(Else_23, PredProcId_7);
                  }
                }
                break;
            }
            break;
        }
      }
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__1_1 = Cases_6;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__goal_util__goals_calls_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredProcId_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Goal_3;
    MR_Word Goals_4;

    // setup for model_semi tailcalls optimized into a loop
    if (succeeded)
    {
      Goal_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Goals_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      {
        MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0))));
        MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) GoalExpr_7)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word SubGoal_21 = (MR_Word) (MR_body((MR_Word) (GoalExpr_7), (MR_Integer) 0));

              succeeded = hlds__goal_util__goal_calls_2_p_0(SubGoal_21, PredProcId_5);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word PredId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 0))));
              MR_Integer ProcId_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 1))));
              MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_5, (MR_Integer) 0))));
              MR_Integer Var_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_5, (MR_Integer) 1))));
              MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 2))));
              MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 3))));
              MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 4))));
              MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 5))));

              succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_25, Var_50);
              if (succeeded)
                succeeded = (ProcId_26 == Var_51);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 0)))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Conjuncts_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
                  MR_Word _ConjType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));

                  succeeded = hlds__goal_util__goals_calls_2_p_0(Conjuncts_12, PredProcId_5);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Disjuncts_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));

                  succeeded = hlds__goal_util__goals_calls_2_p_0(Disjuncts_13, PredProcId_5);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Cases_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
                  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
                  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));

                  succeeded = hlds__goal_util__cases_calls_2_p_0(Cases_16, PredProcId_5);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Reason_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
                  MR_Word SubGoal_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
                  MR_Word FGT_24;
                  MR_Word Var_23;

                  succeeded = ((((MR_tag((MR_Word) Reason_22)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_22, (MR_Integer) 0))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_22, (MR_Integer) 1))));
                    FGT_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_22, (MR_Integer) 2))));
                    switch (FGT_24) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 1:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 2:
                        succeeded = MR_TRUE;
                        break;
                    }
                  }
                  if (succeeded)
                    succeeded = MR_FALSE;
                  else
                    succeeded = hlds__goal_util__goal_calls_2_p_0(SubGoal_49, PredProcId_5);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Cond_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
                  MR_Word Then_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
                  MR_Word Else_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 4))));
                  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));

                  succeeded = hlds__goal_util__goal_calls_2_p_0(Cond_18, PredProcId_5);
                  if (!(succeeded))
                  {
                    succeeded = hlds__goal_util__goal_calls_2_p_0(Then_19, PredProcId_5);
                    if (!(succeeded))
                      succeeded = hlds__goal_util__goal_calls_2_p_0(Else_20, PredProcId_5);
                  }
                }
                break;
            }
            break;
        }
      }
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__1_1 = Goals_4;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_Word MR_CALL 
hlds__goal_util__goal_proc_refs_1_f_0(
  MR_Word Goal_3)
{
  {
    MR_Word ReferredToProcs_4;
    MR_Word Var_5;

    Var_5 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
    hlds__goal_util__goal_proc_refs_acc_3_p_0(Goal_3, Var_5, &ReferredToProcs_4);
    return ReferredToProcs_4;
  }
}

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_ReferredToProcs_10;

    hlds__goal_util__case_proc_refs_acc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ReferredToProcs_10);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ReferredToProcs_10));
  }
}

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ReferredToProcs_89;

    hlds__goal_util__goal_proc_refs_acc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ReferredToProcs_89);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ReferredToProcs_89));
  }
}

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ReferredToProcs_89;

    hlds__goal_util__goal_proc_refs_acc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ReferredToProcs_89);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ReferredToProcs_89));
  }
}

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ReferredToProcs_89;

    hlds__goal_util__goal_proc_refs_acc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ReferredToProcs_89);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ReferredToProcs_89));
  }
}

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_ReferredToProcs_0_88,
  MR_Word * STATE_VARIABLE_ReferredToProcs_89)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 0))));
    MR_Word _GoalInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_18 = (MR_Word) (MR_body((MR_Word) (GoalExpr_6), (MR_Integer) 0));
          MR_Word next_value_of_Goal_4 = SubGoal_18;

          // direct tailcall eliminated
          Goal_4 = next_value_of_Goal_4;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RHS_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 1))));
          MR_Word Unification_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_ReferredToProcs_91_91;
          MR_Word _LHS_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 0))));
          MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 2))));
          MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 4))));

          switch (MR_tag((MR_Word) RHS_47)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_ReferredToProcs_91_91 = STATE_VARIABLE_ReferredToProcs_0_88;
              break;
            case (MR_Integer) 1:
              {
                MR_Word RHSConsId_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_47, (MR_Integer) 0))));
                MR_Word _IsExistConstruct_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_47, (MR_Integer) 1))));
                MR_Word _ArgVars_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_47, (MR_Integer) 2))));

                hlds__goal_util__cons_id_proc_refs_acc_3_p_0(RHSConsId_52, STATE_VARIABLE_ReferredToProcs_0_88, &STATE_VARIABLE_ReferredToProcs_91_91);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubGoal_115 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_47, (MR_Integer) 6))));
                MR_Word Var_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_47, (MR_Integer) 0))) & (MR_Integer) 3);
                MR_Word Var_56 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_47, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                MR_Word Var_57 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_47, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_47, (MR_Integer) 2))));
                MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_47, (MR_Integer) 3))));
                MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_47, (MR_Integer) 4))));
                MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_47, (MR_Integer) 5))));

                hlds__goal_util__goal_proc_refs_acc_3_p_0(SubGoal_115, STATE_VARIABLE_ReferredToProcs_0_88, &STATE_VARIABLE_ReferredToProcs_91_91);
              }
              break;
          }
          switch (MR_tag((MR_Word) Unification_49)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ConstructConsId_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_49, (MR_Integer) 1))));
                MR_Word _LHSVar_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_49, (MR_Integer) 0))));
                MR_Word _RHSVars_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_49, (MR_Integer) 2))));
                MR_Word _ArgModes_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_49, (MR_Integer) 3))));
                MR_Word _How_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_49, (MR_Integer) 4))));
                MR_Word _IsUnique_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_49, (MR_Integer) 5))));
                MR_Word _SubInfo_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_49, (MR_Integer) 6))));

                hlds__goal_util__cons_id_proc_refs_acc_3_p_0(ConstructConsId_64, STATE_VARIABLE_ReferredToProcs_91_91, STATE_VARIABLE_ReferredToProcs_89);
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_ReferredToProcs_89 = STATE_VARIABLE_ReferredToProcs_91_91;
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_ReferredToProcs_89 = STATE_VARIABLE_ReferredToProcs_91_91;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Unification_49, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_ReferredToProcs_89 = STATE_VARIABLE_ReferredToProcs_91_91;
                  break;
                case (MR_Integer) 1:
                  *STATE_VARIABLE_ReferredToProcs_89 = STATE_VARIABLE_ReferredToProcs_91_91;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_139 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 0))));
          MR_Integer ProcId_140 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 1))));
          MR_Word PredProcId_141;
          MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 2))));
          MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 3))));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 4))));
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 5))));

          {
            PredProcId_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), PredProcId_141, 0) = ((MR_Box) (PredId_139));
            MR_hl_field(MR_mktag(0), PredProcId_141, 1) = ((MR_Box) (ProcId_140));
          }
          mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_141)), STATE_VARIABLE_ReferredToProcs_0_88, STATE_VARIABLE_ReferredToProcs_89);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_ReferredToProcs_89 = STATE_VARIABLE_ReferredToProcs_0_88;
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredId_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_Integer ProcId_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
              MR_Word PredProcId_45;
              MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
              MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 5))));
              MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 6))));
              MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 7))));

              {
                PredProcId_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), PredProcId_45, 0) = ((MR_Box) (PredId_34));
                MR_hl_field(MR_mktag(0), PredProcId_45, 1) = ((MR_Box) (ProcId_35));
              }
              mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_45)), STATE_VARIABLE_ReferredToProcs_0_88, STATE_VARIABLE_ReferredToProcs_89);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Conjuncts_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_Word _ConjType_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Box conv1_STATE_VARIABLE_ReferredToProcs_89;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_util_scalar_common_1[2]), (MR_Word) (&hlds__goal_util_scalar_common_4[6]), Conjuncts_9, ((MR_Box) (STATE_VARIABLE_ReferredToProcs_0_88)), &conv1_STATE_VARIABLE_ReferredToProcs_89);
              *STATE_VARIABLE_ReferredToProcs_89 = ((MR_Word) (conv1_STATE_VARIABLE_ReferredToProcs_89));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Box conv3_STATE_VARIABLE_ReferredToProcs_89;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_util_scalar_common_1[2]), (MR_Word) (&hlds__goal_util_scalar_common_4[7]), Disjuncts_10, ((MR_Box) (STATE_VARIABLE_ReferredToProcs_0_88)), &conv3_STATE_VARIABLE_ReferredToProcs_89);
              *STATE_VARIABLE_ReferredToProcs_89 = ((MR_Word) (conv3_STATE_VARIABLE_ReferredToProcs_89));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
              MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_Box conv7_STATE_VARIABLE_ReferredToProcs_89;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__goal_util_scalar_common_1[2]), (MR_Word) (&hlds__goal_util_scalar_common_4[9]), Cases_13, ((MR_Box) (STATE_VARIABLE_ReferredToProcs_0_88)), &conv7_STATE_VARIABLE_ReferredToProcs_89);
              *STATE_VARIABLE_ReferredToProcs_89 = ((MR_Word) (conv7_STATE_VARIABLE_ReferredToProcs_89));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word SubGoal_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_Word FGT_21;
              MR_Word Var_20;

              succeeded = ((((MR_tag((MR_Word) Reason_19)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_19, (MR_Integer) 0))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_19, (MR_Integer) 1))));
                FGT_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_19, (MR_Integer) 2))));
                switch (FGT_21) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
                *STATE_VARIABLE_ReferredToProcs_89 = STATE_VARIABLE_ReferredToProcs_0_88;
              else
              {
                MR_Word next_value_of_Goal_4 = SubGoal_111;

                // direct tailcall eliminated
                Goal_4 = next_value_of_Goal_4;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_Word Then_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
              MR_Word Else_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_ReferredToProcs_102_102;
              MR_Word STATE_VARIABLE_ReferredToProcs_103_103;
              MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_ReferredToProcs_0_88;

              hlds__goal_util__goal_proc_refs_acc_3_p_0(Cond_15, STATE_VARIABLE_ReferredToProcs_0_88, &STATE_VARIABLE_ReferredToProcs_102_102);
              hlds__goal_util__goal_proc_refs_acc_3_p_0(Then_16, STATE_VARIABLE_ReferredToProcs_102_102, &STATE_VARIABLE_ReferredToProcs_103_103);
              // direct tailcall eliminated
              next_value_of_Goal_4 = Else_17;
              next_value_of_STATE_VARIABLE_ReferredToProcs_0_88 = STATE_VARIABLE_ReferredToProcs_103_103;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_ReferredToProcs_0_88 = next_value_of_STATE_VARIABLE_ReferredToProcs_0_88;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Shorthand_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word SubGoalA_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand_22, (MR_Integer) 0))));
                    MR_Word SubGoalB_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand_22, (MR_Integer) 1))));
                    MR_Word STATE_VARIABLE_ReferredToProcs_98_98;
                    MR_Word next_value_of_Goal_4;
                    MR_Word next_value_of_STATE_VARIABLE_ReferredToProcs_0_88;

                    hlds__goal_util__goal_proc_refs_acc_3_p_0(SubGoalA_23, STATE_VARIABLE_ReferredToProcs_0_88, &STATE_VARIABLE_ReferredToProcs_98_98);
                    // direct tailcall eliminated
                    next_value_of_Goal_4 = SubGoalB_24;
                    next_value_of_STATE_VARIABLE_ReferredToProcs_0_88 = STATE_VARIABLE_ReferredToProcs_98_98;
                    Goal_4 = next_value_of_Goal_4;
                    STATE_VARIABLE_ReferredToProcs_0_88 = next_value_of_STATE_VARIABLE_ReferredToProcs_0_88;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_22, (MR_Integer) 4))));
                    MR_Word OrElseGoals_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_22, (MR_Integer) 5))));
                    MR_Word STATE_VARIABLE_ReferredToProcs_95_95;
                    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_22, (MR_Integer) 0))));
                    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_22, (MR_Integer) 1))));
                    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_22, (MR_Integer) 2))));
                    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_22, (MR_Integer) 3))));
                    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_22, (MR_Integer) 6))));
                    MR_Box conv5_STATE_VARIABLE_ReferredToProcs_89;

                    hlds__goal_util__goal_proc_refs_acc_3_p_0(MainGoal_29, STATE_VARIABLE_ReferredToProcs_0_88, &STATE_VARIABLE_ReferredToProcs_95_95);
                    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_util_scalar_common_1[2]), (MR_Word) (&hlds__goal_util_scalar_common_4[8]), OrElseGoals_30, ((MR_Box) (STATE_VARIABLE_ReferredToProcs_95_95)), &conv5_STATE_VARIABLE_ReferredToProcs_89);
                    *STATE_VARIABLE_ReferredToProcs_89 = ((MR_Word) (conv5_STATE_VARIABLE_ReferredToProcs_89));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_112 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Shorthand_22, (MR_Integer) 2))));
                    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Shorthand_22, (MR_Integer) 0))));
                    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Shorthand_22, (MR_Integer) 1))));
                    MR_Word next_value_of_Goal_4 = SubGoal_112;

                    // direct tailcall eliminated
                    Goal_4 = next_value_of_Goal_4;
                    continue;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_util__cons_id_proc_refs_acc_3_p_0(
  MR_Word ConsId_4,
  MR_Word STATE_VARIABLE_ReferredToProcs_0_42,
  MR_Word * STATE_VARIABLE_ReferredToProcs_43)
{
  switch (MR_tag((MR_Word) ConsId_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
          break;
        case (MR_Integer) 4:
          {
            MR_Word ShroudedPredProcId_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1))));
            MR_Word PredProcId_41;

            PredProcId_41 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_39);
            mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_41)), STATE_VARIABLE_ReferredToProcs_0_42, STATE_VARIABLE_ReferredToProcs_43);
          }
          break;
        case (MR_Integer) 5:
          *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
          break;
        case (MR_Integer) 6:
          *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
          break;
        case (MR_Integer) 7:
          *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
          break;
        case (MR_Integer) 8:
          *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
          break;
        case (MR_Integer) 9:
          *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
          break;
        case (MR_Integer) 10:
          *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
          break;
        case (MR_Integer) 11:
          *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
          break;
        case (MR_Integer) 12:
          *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
          break;
        case (MR_Integer) 13:
          *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
          break;
        case (MR_Integer) 14:
          *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
          break;
        case (MR_Integer) 15:
          *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
          break;
        case (MR_Integer) 16:
          *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
          break;
        case (MR_Integer) 17:
          *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
          break;
        case (MR_Integer) 18:
          *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
          break;
        case (MR_Integer) 19:
          *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
          break;
        case (MR_Integer) 20:
          *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
          break;
        case (MR_Integer) 21:
          *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
          break;
        case (MR_Integer) 22:
          *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
          break;
        case (MR_Integer) 23:
          *STATE_VARIABLE_ReferredToProcs_43 = STATE_VARIABLE_ReferredToProcs_0_42;
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__goal_util__goals_proc_refs_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ReferredToProcs_89;

    hlds__goal_util__goal_proc_refs_acc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ReferredToProcs_89);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ReferredToProcs_89));
  }
}

MR_Word MR_CALL 
hlds__goal_util__goals_proc_refs_1_f_0(
  MR_Word Goals_3)
{
  {
    MR_Word ReferredToProcs_4;
    MR_Word Var_6;
    MR_Box conv1_ReferredToProcs_4;

    Var_6 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_util_scalar_common_1[2]), (MR_Word) (&hlds__goal_util_scalar_common_4[5]), Goals_3, ((MR_Box) (Var_6)), &conv1_ReferredToProcs_4);
    ReferredToProcs_4 = ((MR_Word) (conv1_ReferredToProcs_4));
    return ReferredToProcs_4;
  }
}

static void MR_CALL 
hlds__goal_util__clause_list_size_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_Size_6;

    hlds__goal_util__clause_size_increment_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_Size_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_Size_6));
  }
}

void MR_CALL 
hlds__goal_util__clause_list_size_2_p_0(
  MR_Word Clauses_3,
  MR_Integer * GoalSize_4)
{
  {
    MR_bool succeeded;
    MR_Integer GoalSize0_5;
    MR_Box conv1_GoalSize0_5;
    MR_Word Var_9;
    MR_Word Var_6;

    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__goal_util_scalar_common_4[4]), Clauses_3, ((MR_Box) ((MR_Integer) 0)), &conv1_GoalSize0_5);
    GoalSize0_5 = ((MR_Integer) (conv1_GoalSize0_5));
    succeeded = ((MR_tag((MR_Word) Clauses_3)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses_3, (MR_Integer) 0))));
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses_3, (MR_Integer) 1))));
      succeeded = (Var_9 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
      *GoalSize_4 = GoalSize0_5;
    else
    {
      *GoalSize_4 = (MR_Integer) ((MR_Unsigned) GoalSize0_5 + (MR_Unsigned) (MR_Integer) 1);
    }
  }
}

void MR_CALL 
hlds__goal_util__goal_size_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Size_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) GoalExpr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_44 = (MR_Word) (MR_body((MR_Word) (GoalExpr_3), (MR_Integer) 0));
          MR_Integer Size1_75;

          hlds__goal_util__goal_size_2_p_0(SubGoal_44, &Size1_75);
          *Size_5 = (MR_Integer) ((MR_Unsigned) Size1_75 + (MR_Unsigned) (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *Size_5 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *Size_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));
              MR_Word Goals_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));
              MR_Integer InnerSize_33;

              hlds__goal_util__goals_size_2_p_0(Goals_32, &InnerSize_33);
              switch (ConjType_31) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    *Size_5 = (MR_Integer) ((MR_Unsigned) InnerSize_33 + (MR_Unsigned) (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 0:
                  *Size_5 = InnerSize_33;
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Size1_34;
              MR_Word Goals_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));

              hlds__goal_util__goals_size_2_p_0(Goals_72, &Size1_34);
              *Size_5 = (MR_Integer) ((MR_Unsigned) Size1_34 + (MR_Unsigned) (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3))));
              MR_Integer Size1_73;
              MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));
              MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));

              hlds__goal_util__cases_size_2_p_0(Cases_37, &Size1_73);
              *Size_5 = (MR_Integer) ((MR_Unsigned) Size1_73 + (MR_Unsigned) (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));
              MR_Word SubGoal_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));
              MR_Word Var_63;
              MR_Word Var_46;

              succeeded = ((((MR_tag((MR_Word) Reason_45)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_45, (MR_Integer) 0))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_45, (MR_Integer) 1))));
                Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_45, (MR_Integer) 2))));
                succeeded = (Var_63 == (MR_Integer) 1);
              }
              if (succeeded)
                *Size_5 = (MR_Integer) 1;
              else
              {
                MR_Integer Size1_76;

                hlds__goal_util__goal_size_2_p_0(SubGoal_79, &Size1_76);
                *Size_5 = (MR_Integer) ((MR_Unsigned) Size1_76 + (MR_Unsigned) (MR_Integer) 1);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));
              MR_Word Then_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3))));
              MR_Word Else_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 4))));
              MR_Integer Size2_42;
              MR_Integer Size3_43;
              MR_Integer Var_66;
              MR_Integer Var_67;
              MR_Integer Size1_74;
              MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));

              hlds__goal_util__goal_size_2_p_0(Cond_39, &Size1_74);
              hlds__goal_util__goal_size_2_p_0(Then_40, &Size2_42);
              hlds__goal_util__goal_size_2_p_0(Else_41, &Size3_43);
              Var_67 = (MR_Integer) ((MR_Unsigned) Size1_74 + (MR_Unsigned) Size2_42);
              Var_66 = (MR_Integer) ((MR_Unsigned) Var_67 + (MR_Unsigned) Size3_43);
              *Size_5 = (MR_Integer) ((MR_Unsigned) Var_66 + (MR_Unsigned) (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_47)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_47, (MR_Integer) 0))));
                    MR_Word GoalB_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_47, (MR_Integer) 1))));
                    MR_Integer Var_59;
                    MR_Integer Size1_83;
                    MR_Integer Size2_84;

                    hlds__goal_util__goal_size_2_p_0(GoalA_57, &Size1_83);
                    hlds__goal_util__goal_size_2_p_0(GoalB_58, &Size2_84);
                    Var_59 = (MR_Integer) ((MR_Unsigned) Size1_83 + (MR_Unsigned) Size2_84);
                    *Size_5 = (MR_Integer) ((MR_Unsigned) Var_59 + (MR_Unsigned) (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_47, (MR_Integer) 4))));
                    MR_Word OrElseGoals_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_47, (MR_Integer) 5))));
                    MR_Integer Var_61;
                    MR_Integer Size1_80;
                    MR_Integer Size2_81;
                    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_47, (MR_Integer) 0))));
                    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_47, (MR_Integer) 1))));
                    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_47, (MR_Integer) 2))));
                    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_47, (MR_Integer) 3))));
                    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_47, (MR_Integer) 6))));

                    hlds__goal_util__goal_size_2_p_0(MainGoal_52, &Size1_80);
                    hlds__goal_util__goals_size_2_p_0(OrElseGoals_53, &Size2_81);
                    Var_61 = (MR_Integer) ((MR_Unsigned) Size1_80 + (MR_Unsigned) Size2_81);
                    *Size_5 = (MR_Integer) ((MR_Unsigned) Var_61 + (MR_Unsigned) (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_82 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_47, (MR_Integer) 2))));
                    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_47, (MR_Integer) 0))));
                    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_47, (MR_Integer) 1))));
                    MR_Word next_value_of_HeadVar__1_1 = SubGoal_82;

                    // direct tailcall eliminated
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    continue;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_util__cases_size_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Goal_5;
      MR_Word Cases_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Size1_8;
      MR_Integer Size2_9;
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word GoalExpr_12;
      MR_Word Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
      MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1))));
      MR_Word Var_13;

      Goal_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 2))));
      GoalExpr_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) GoalExpr_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_52 = (MR_Word) (MR_body((MR_Word) (GoalExpr_12), (MR_Integer) 0));
            MR_Integer Size1_83;

            hlds__goal_util__goal_size_2_p_0(SubGoal_52, &Size1_83);
            Size1_8 = (MR_Integer) ((MR_Unsigned) Size1_83 + (MR_Unsigned) (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          Size1_8 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              Size1_8 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1))));
                MR_Word Goals_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2))));
                MR_Integer InnerSize_41;

                hlds__goal_util__goals_size_2_p_0(Goals_40, &InnerSize_41);
                switch (ConjType_39) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      Size1_8 = (MR_Integer) ((MR_Unsigned) InnerSize_41 + (MR_Unsigned) (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 0:
                    Size1_8 = InnerSize_41;
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer Size1_42;
                MR_Word Goals_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1))));

                hlds__goal_util__goals_size_2_p_0(Goals_80, &Size1_42);
                Size1_8 = (MR_Integer) ((MR_Unsigned) Size1_42 + (MR_Unsigned) (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 3))));
                MR_Integer Size1_81;
                MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1))));
                MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2))));

                hlds__goal_util__cases_size_2_p_0(Cases_45, &Size1_81);
                Size1_8 = (MR_Integer) ((MR_Unsigned) Size1_81 + (MR_Unsigned) (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1))));
                MR_Word SubGoal_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2))));
                MR_Word Var_71;
                MR_Word Var_54;

                succeeded = ((((MR_tag((MR_Word) Reason_53)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_53, (MR_Integer) 0))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_53, (MR_Integer) 1))));
                  Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_53, (MR_Integer) 2))));
                  succeeded = (Var_71 == (MR_Integer) 1);
                }
                if (succeeded)
                  Size1_8 = (MR_Integer) 1;
                else
                {
                  MR_Integer Size1_84;

                  hlds__goal_util__goal_size_2_p_0(SubGoal_87, &Size1_84);
                  Size1_8 = (MR_Integer) ((MR_Unsigned) Size1_84 + (MR_Unsigned) (MR_Integer) 1);
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2))));
                MR_Word Then_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 3))));
                MR_Word Else_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 4))));
                MR_Integer Size2_50;
                MR_Integer Size3_51;
                MR_Integer Var_74;
                MR_Integer Var_75;
                MR_Integer Size1_82;
                MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1))));

                hlds__goal_util__goal_size_2_p_0(Cond_47, &Size1_82);
                hlds__goal_util__goal_size_2_p_0(Then_48, &Size2_50);
                hlds__goal_util__goal_size_2_p_0(Else_49, &Size3_51);
                Var_75 = (MR_Integer) ((MR_Unsigned) Size1_82 + (MR_Unsigned) Size2_50);
                Var_74 = (MR_Integer) ((MR_Unsigned) Var_75 + (MR_Unsigned) Size3_51);
                Size1_8 = (MR_Integer) ((MR_Unsigned) Var_74 + (MR_Unsigned) (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_55)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word GoalA_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_55, (MR_Integer) 0))));
                      MR_Word GoalB_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_55, (MR_Integer) 1))));
                      MR_Integer Var_67;
                      MR_Integer Size1_91;
                      MR_Integer Size2_92;

                      hlds__goal_util__goal_size_2_p_0(GoalA_65, &Size1_91);
                      hlds__goal_util__goal_size_2_p_0(GoalB_66, &Size2_92);
                      Var_67 = (MR_Integer) ((MR_Unsigned) Size1_91 + (MR_Unsigned) Size2_92);
                      Size1_8 = (MR_Integer) ((MR_Unsigned) Var_67 + (MR_Unsigned) (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MainGoal_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_55, (MR_Integer) 4))));
                      MR_Word OrElseGoals_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_55, (MR_Integer) 5))));
                      MR_Integer Var_69;
                      MR_Integer Size1_88;
                      MR_Integer Size2_89;
                      MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_55, (MR_Integer) 0))));
                      MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_55, (MR_Integer) 1))));
                      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_55, (MR_Integer) 2))));
                      MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_55, (MR_Integer) 3))));
                      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_55, (MR_Integer) 6))));

                      hlds__goal_util__goal_size_2_p_0(MainGoal_60, &Size1_88);
                      hlds__goal_util__goals_size_2_p_0(OrElseGoals_61, &Size2_89);
                      Var_69 = (MR_Integer) ((MR_Unsigned) Size1_88 + (MR_Unsigned) Size2_89);
                      Size1_8 = (MR_Integer) ((MR_Unsigned) Var_69 + (MR_Unsigned) (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_90 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_55, (MR_Integer) 2))));
                      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_55, (MR_Integer) 0))));
                      MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_55, (MR_Integer) 1))));

                      hlds__goal_util__goal_size_2_p_0(SubGoal_90, &Size1_8);
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      hlds__goal_util__cases_size_2_p_0(Cases_6, &Size2_9);
      *HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) Size1_8 + (MR_Unsigned) Size2_9);
    }
  }
}

void MR_CALL 
hlds__goal_util__goals_size_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Size1_6;
      MR_Integer Size2_7;
      MR_Word GoalExpr_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) GoalExpr_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_49 = (MR_Word) (MR_body((MR_Word) (GoalExpr_9), (MR_Integer) 0));
            MR_Integer Size1_80;

            hlds__goal_util__goal_size_2_p_0(SubGoal_49, &Size1_80);
            Size1_6 = (MR_Integer) ((MR_Unsigned) Size1_80 + (MR_Unsigned) (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          Size1_6 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              Size1_6 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));
                MR_Word Goals_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))));
                MR_Integer InnerSize_38;

                hlds__goal_util__goals_size_2_p_0(Goals_37, &InnerSize_38);
                switch (ConjType_36) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      Size1_6 = (MR_Integer) ((MR_Unsigned) InnerSize_38 + (MR_Unsigned) (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 0:
                    Size1_6 = InnerSize_38;
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer Size1_39;
                MR_Word Goals_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));

                hlds__goal_util__goals_size_2_p_0(Goals_77, &Size1_39);
                Size1_6 = (MR_Integer) ((MR_Unsigned) Size1_39 + (MR_Unsigned) (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 3))));
                MR_Integer Size1_78;
                MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));
                MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))));

                hlds__goal_util__cases_size_2_p_0(Cases_42, &Size1_78);
                Size1_6 = (MR_Integer) ((MR_Unsigned) Size1_78 + (MR_Unsigned) (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));
                MR_Word SubGoal_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))));
                MR_Word Var_68;
                MR_Word Var_51;

                succeeded = ((((MR_tag((MR_Word) Reason_50)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 0))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 1))));
                  Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 2))));
                  succeeded = (Var_68 == (MR_Integer) 1);
                }
                if (succeeded)
                  Size1_6 = (MR_Integer) 1;
                else
                {
                  MR_Integer Size1_81;

                  hlds__goal_util__goal_size_2_p_0(SubGoal_84, &Size1_81);
                  Size1_6 = (MR_Integer) ((MR_Unsigned) Size1_81 + (MR_Unsigned) (MR_Integer) 1);
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))));
                MR_Word Then_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 3))));
                MR_Word Else_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 4))));
                MR_Integer Size2_47;
                MR_Integer Size3_48;
                MR_Integer Var_71;
                MR_Integer Var_72;
                MR_Integer Size1_79;
                MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));

                hlds__goal_util__goal_size_2_p_0(Cond_44, &Size1_79);
                hlds__goal_util__goal_size_2_p_0(Then_45, &Size2_47);
                hlds__goal_util__goal_size_2_p_0(Else_46, &Size3_48);
                Var_72 = (MR_Integer) ((MR_Unsigned) Size1_79 + (MR_Unsigned) Size2_47);
                Var_71 = (MR_Integer) ((MR_Unsigned) Var_72 + (MR_Unsigned) Size3_48);
                Size1_6 = (MR_Integer) ((MR_Unsigned) Var_71 + (MR_Unsigned) (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_52)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word GoalA_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_52, (MR_Integer) 0))));
                      MR_Word GoalB_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_52, (MR_Integer) 1))));
                      MR_Integer Var_64;
                      MR_Integer Size1_88;
                      MR_Integer Size2_89;

                      hlds__goal_util__goal_size_2_p_0(GoalA_62, &Size1_88);
                      hlds__goal_util__goal_size_2_p_0(GoalB_63, &Size2_89);
                      Var_64 = (MR_Integer) ((MR_Unsigned) Size1_88 + (MR_Unsigned) Size2_89);
                      Size1_6 = (MR_Integer) ((MR_Unsigned) Var_64 + (MR_Unsigned) (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MainGoal_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_52, (MR_Integer) 4))));
                      MR_Word OrElseGoals_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_52, (MR_Integer) 5))));
                      MR_Integer Var_66;
                      MR_Integer Size1_85;
                      MR_Integer Size2_86;
                      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_52, (MR_Integer) 0))));
                      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_52, (MR_Integer) 1))));
                      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_52, (MR_Integer) 2))));
                      MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_52, (MR_Integer) 3))));
                      MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_52, (MR_Integer) 6))));

                      hlds__goal_util__goal_size_2_p_0(MainGoal_57, &Size1_85);
                      hlds__goal_util__goals_size_2_p_0(OrElseGoals_58, &Size2_86);
                      Var_66 = (MR_Integer) ((MR_Unsigned) Size1_85 + (MR_Unsigned) Size2_86);
                      Size1_6 = (MR_Integer) ((MR_Unsigned) Var_66 + (MR_Unsigned) (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_87 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_52, (MR_Integer) 2))));
                      MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_52, (MR_Integer) 0))));
                      MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_52, (MR_Integer) 1))));

                      hlds__goal_util__goal_size_2_p_0(SubGoal_87, &Size1_6);
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      hlds__goal_util__goals_size_2_p_0(Goals_4, &Size2_7);
      *HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) Size1_6 + (MR_Unsigned) Size2_7);
    }
  }
}

MR_bool MR_CALL 
hlds__goal_util__goal_is_branched_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 4:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 6:
            succeeded = MR_TRUE;
            break;
        }
        break;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word IsLeaf_5;
    MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) GoalExpr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_51 = (MR_Word) (MR_body((MR_Word) (GoalExpr_3), (MR_Integer) 0));
          MR_Word next_value_of_HeadVar__1_1 = SubGoal_51;

          // direct tailcall eliminated
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word UnifyKind_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_3, (MR_Integer) 3))));
          MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_3, (MR_Integer) 0))));
          MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_3, (MR_Integer) 1))));
          MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_3, (MR_Integer) 2))));
          MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_3, (MR_Integer) 4))));

          switch (MR_tag((MR_Word) UnifyKind_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              IsLeaf_5 = (MR_Integer) 0;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), UnifyKind_9, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  IsLeaf_5 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  IsLeaf_5 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        IsLeaf_5 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            IsLeaf_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));
              MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));

              IsLeaf_5 = hlds__goal_util__proc_body_is_leaf_goals_1_f_0(Goals_50);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));

              IsLeaf_5 = hlds__goal_util__proc_body_is_leaf_goals_1_f_0(Goals_81);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3))));
              MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));
              MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));

              IsLeaf_5 = hlds__goal_util__proc_body_is_leaf_cases_1_f_0(Cases_57);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));
              MR_Word SubGoal_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));
              MR_Word FGT_54;
              MR_Word Var_53;

              succeeded = ((((MR_tag((MR_Word) Reason_52)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_52, (MR_Integer) 0))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_52, (MR_Integer) 1))));
                FGT_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_52, (MR_Integer) 2))));
                switch (FGT_54) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
                IsLeaf_5 = (MR_Integer) 0;
              else
              {
                MR_Word next_value_of_HeadVar__1_1 = SubGoal_80;

                // direct tailcall eliminated
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));
              MR_Word Then_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3))));
              MR_Word Else_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 4))));
              MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_79;

              Var_77 = hlds__goal_util__proc_body_is_leaf_1_f_0(Cond_59);
              succeeded = (Var_77 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_78 = hlds__goal_util__proc_body_is_leaf_1_f_0(Then_60);
                succeeded = (Var_78 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_79 = hlds__goal_util__proc_body_is_leaf_1_f_0(Else_61);
                  succeeded = (Var_79 == (MR_Integer) 0);
                }
              }
              if (succeeded)
                IsLeaf_5 = (MR_Integer) 0;
              else
                IsLeaf_5 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_62)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_62, (MR_Integer) 0))));
                    MR_Word GoalB_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_62, (MR_Integer) 1))));
                    MR_Word Var_75;
                    MR_Word Var_76;

                    Var_75 = hlds__goal_util__proc_body_is_leaf_1_f_0(GoalA_73);
                    succeeded = (Var_75 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_76 = hlds__goal_util__proc_body_is_leaf_1_f_0(GoalB_74);
                      succeeded = (Var_76 == (MR_Integer) 0);
                    }
                    if (succeeded)
                      IsLeaf_5 = (MR_Integer) 0;
                    else
                      IsLeaf_5 = (MR_Integer) 1;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  IsLeaf_5 = (MR_Integer) 1;
                  break;
              }
            }
            break;
        }
        break;
    }
    return IsLeaf_5;
    break;
  }
}

static MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_cases_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Case_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_3, (MR_Integer) 2))));
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_3, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_3, (MR_Integer) 1))));
      MR_Word Var_9;
      MR_Word Var_10;

      Var_9 = hlds__goal_util__proc_body_is_leaf_1_f_0(Goal_8);
      succeeded = (Var_9 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_10 = hlds__goal_util__proc_body_is_leaf_cases_1_f_0(Cases_4);
        succeeded = (Var_10 == (MR_Integer) 0);
      }
      if (succeeded)
        HeadVar__2_2 = (MR_Integer) 0;
      else
        HeadVar__2_2 = (MR_Integer) 1;
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_goals_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_6;
      MR_Word Var_7;

      Var_6 = hlds__goal_util__proc_body_is_leaf_1_f_0(Goal_3);
      succeeded = (Var_6 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_7 = hlds__goal_util__proc_body_is_leaf_goals_1_f_0(Goals_4);
        succeeded = (Var_7 == (MR_Integer) 0);
      }
      if (succeeded)
        HeadVar__2_2 = (MR_Integer) 0;
      else
        HeadVar__2_2 = (MR_Integer) 1;
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0_s * env_ptr = (struct hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0_s *) (env_ptr_arg);

    *((env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__conv1_LambdaHeadVar__1_32));
    ((env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__cont)((env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0_s env;

    (env).hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__cont = cont;
    (env).hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__862__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &(env).hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3_env_0__conv1_LambdaHeadVar__1_32, hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_2, &env);
    }
  }
}

static MR_Box MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_29;

    conv0_LambdaHeadVar__2_29 = hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__851__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_29));
    return wrapper_arg_2;
  }
}

void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_5_p_0(
  MR_Word RttiVarMaps_6,
  MR_Word VarTypes_7,
  MR_Word ExistQVars_8,
  MR_Word NonLocals_9,
  MR_Word * NonLocalTypeInfos_10)
{
  {
    MR_Word NonLocalsList_11;
    MR_Word NonLocalsTypes_12;
    MR_Word NonLocalTypeVarsList0_13;
    MR_Word NonLocalTypeVarsList_14;
    MR_Word NonLocalTypeVars_15;
    MR_Word TypeVarToProgVar_16;
    MR_Word NonLocalTypeInfoVars_20;
    MR_Word NonLocalTypeClassInfoVarsList_26;
    MR_Word NonLocalTypeClassInfoVars_27;
    MR_Word Var_30;
    MR_Word Var_31;

    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_9, &NonLocalsList_11);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_7, NonLocalsList_11, &NonLocalsTypes_12);
    parse_tree__prog_type__type_vars_list_2_p_0(NonLocalsTypes_12, &NonLocalTypeVarsList0_13);
    NonLocalTypeVarsList_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__goal_util_scalar_common_1[1]), ExistQVars_8, NonLocalTypeVarsList0_13);
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), NonLocalTypeVarsList_14, &NonLocalTypeVars_15);
    {
      TypeVarToProgVar_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeVarToProgVar_16, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), TypeVarToProgVar_16, 1) = ((MR_Box) (hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_1));
      MR_hl_field(MR_mktag(0), TypeVarToProgVar_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), TypeVarToProgVar_16, 3) = ((MR_Box) (RttiVarMaps_6));
    }
    Var_30 = mercury__list__map_2_f_0((MR_Word) (&hlds__goal_util_scalar_common_1[1]), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), TypeVarToProgVar_16, NonLocalTypeVarsList_14);
    NonLocalTypeInfoVars_20 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_30);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (hlds__goal_util__extra_nonlocal_typeinfos_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (RttiVarMaps_6));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (NonLocalTypeVars_15));
    }
    mercury__solutions__solutions_2_p_1((MR_Word) (&hlds__goal_util_scalar_common_1[0]), Var_31, &NonLocalTypeClassInfoVarsList_26);
    parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalTypeClassInfoVarsList_26, &NonLocalTypeClassInfoVars_27);
    *NonLocalTypeInfos_10 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalTypeInfoVars_20, NonLocalTypeClassInfoVars_27);
  }
}

void MR_CALL 
hlds__goal_util__attach_features_to_all_goals_4_p_1(
  MR_Word Features_5,
  MR_Word InFromGroundTerm_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8)
{
  hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, Goal0_7, Goal_8);
}

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
  else
  {
    MR_Word Case0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Cases0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Case_11;
    MR_Word Cases_12;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_9, (MR_Integer) 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_9, (MR_Integer) 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_9, (MR_Integer) 2))));
    MR_Word Goal_16;

    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Goal0_15, &Goal_16);
    {
      Case_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_11, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(MR_mktag(0), Case_11, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(MR_mktag(0), Case_11, 2) = ((MR_Box) (Goal_16));
    }
    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Cases0_10, &Cases_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_12));
    }
  }
}

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
  else
  {
    MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Goals0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Goal_11;
    MR_Word Goals_12;

    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Goal0_9, &Goal_11);
    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Goals0_10, &Goals_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_12));
    }
  }
}

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(
  MR_Word Features_5,
  MR_Word Goal0_7,
  MR_Word * Goal_8)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
    MR_Word GoalInfo0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));
    MR_Word GoalExpr_11;
    MR_Word GoalInfo_12;
    MR_Box conv1_GoalInfo_12;

    switch (MR_tag((MR_Word) GoalExpr0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_60 = (MR_Word) (MR_body((MR_Word) (GoalExpr0_9), (MR_Integer) 0));
          MR_Word SubGoal_61;

          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, SubGoal0_60, &SubGoal_61);
          GoalExpr_11 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (SubGoal_61)));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        GoalExpr_11 = GoalExpr0_9;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            GoalExpr_11 = GoalExpr0_9;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
              MR_Word Goals0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
              MR_Word Goals_48;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, Goals0_47, &Goals_48);
              {
                GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 1) = ((MR_Box) (ConjType_46));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 2) = ((MR_Box) (Goals_48));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
              MR_Word Goals_83;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, Goals0_82, &Goals_83);
              {
                GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 1) = ((MR_Box) (Goals_83));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
              MR_Word CanFail_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
              MR_Word Cases0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 3))));
              MR_Word Cases_52;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(Features_5, Cases0_51, &Cases_52);
              {
                GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 1) = ((MR_Box) (Var_49));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 2) = ((MR_Box) (CanFail_50));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 3) = ((MR_Box) (Cases_52));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
              MR_Word SubGoal0_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
              MR_Word SubGoal_85;
              MR_Word Var_63;
              MR_Word Var_64;

              succeeded = ((((MR_tag((MR_Word) Reason_62)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_62, (MR_Integer) 0))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_62, (MR_Integer) 1))));
                Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_62, (MR_Integer) 2))));
                SubGoal_85 = SubGoal0_84;
              }
              else
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, SubGoal0_84, &SubGoal_85);
              {
                GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 1) = ((MR_Box) (Reason_62));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 2) = ((MR_Box) (SubGoal_85));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
              MR_Word Cond0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
              MR_Word Then0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 3))));
              MR_Word Else0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 4))));
              MR_Word Cond_57;
              MR_Word Then_58;
              MR_Word Else_59;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, Cond0_54, &Cond_57);
              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, Then0_55, &Then_58);
              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, Else0_56, &Else_59);
              {
                GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 1) = ((MR_Box) (Vars_53));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 2) = ((MR_Box) (Cond_57));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 3) = ((MR_Box) (Then_58));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 4) = ((MR_Box) (Else_59));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
              MR_Word ShortHand_75;

              switch (MR_tag((MR_Word) ShortHand0_65)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA0_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand0_65, (MR_Integer) 0))));
                    MR_Word GoalB0_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand0_65, (MR_Integer) 1))));
                    MR_Word GoalA_80;
                    MR_Word GoalB_81;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, GoalA0_78, &GoalA_80);
                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, GoalB0_79, &GoalB_81);
                    {
                      ShortHand_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ShortHand_75, 0) = ((MR_Box) (GoalA_80));
                      MR_hl_field(MR_mktag(0), ShortHand_75, 1) = ((MR_Box) (GoalB_81));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_65, (MR_Integer) 0))));
                    MR_Word Outer_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_65, (MR_Integer) 1))));
                    MR_Word Inner_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_65, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_65, (MR_Integer) 3))));
                    MR_Word MainGoal0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_65, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_65, (MR_Integer) 5))));
                    MR_Word OrElseInners_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_65, (MR_Integer) 6))));
                    MR_Word MainGoal_73;
                    MR_Word OrElseGoals_74;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, MainGoal0_70, &MainGoal_73);
                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, OrElseGoals0_71, &OrElseGoals_74);
                    {
                      ShortHand_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ShortHand_75, 0) = ((MR_Box) (GoalType_66));
                      MR_hl_field(MR_mktag(1), ShortHand_75, 1) = ((MR_Box) (Outer_67));
                      MR_hl_field(MR_mktag(1), ShortHand_75, 2) = ((MR_Box) (Inner_68));
                      MR_hl_field(MR_mktag(1), ShortHand_75, 3) = ((MR_Box) (MaybeOutputVars_69));
                      MR_hl_field(MR_mktag(1), ShortHand_75, 4) = ((MR_Box) (MainGoal_73));
                      MR_hl_field(MR_mktag(1), ShortHand_75, 5) = ((MR_Box) (OrElseGoals_74));
                      MR_hl_field(MR_mktag(1), ShortHand_75, 6) = ((MR_Box) (OrElseInners_72));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_76 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_65, (MR_Integer) 0))));
                    MR_Word ResultVar_77 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_65, (MR_Integer) 1))));
                    MR_Word SubGoal0_86 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_65, (MR_Integer) 2))));
                    MR_Word SubGoal_87;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, SubGoal0_86, &SubGoal_87);
                    {
                      ShortHand_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ShortHand_75, 0) = ((MR_Box) (MaybeIO_76));
                      MR_hl_field(MR_mktag(2), ShortHand_75, 1) = ((MR_Box) (ResultVar_77));
                      MR_hl_field(MR_mktag(2), ShortHand_75, 2) = ((MR_Box) (SubGoal_87));
                    }
                  }
                  break;
              }
              {
                GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 1) = ((MR_Box) (ShortHand_75));
              }
            }
            break;
        }
        break;
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0), (MR_Word) (&hlds__goal_util_scalar_common_4[3]), Features_5, ((MR_Box) (GoalInfo0_10)), &conv1_GoalInfo_12);
    GoalInfo_12 = ((MR_Word) (conv1_GoalInfo_12));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_12));
    }
  }
}

void MR_CALL 
hlds__goal_util__attach_features_to_all_goals_4_p_0(
  MR_Word Features_5,
  MR_Word InFromGroundTerm_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8)
{
  hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, Goal0_7, Goal_8);
}

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
  else
  {
    MR_Word Case0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Cases0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Case_11;
    MR_Word Cases_12;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_9, (MR_Integer) 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_9, (MR_Integer) 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_9, (MR_Integer) 2))));
    MR_Word Goal_16;

    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Goal0_15, &Goal_16);
    {
      Case_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_11, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(MR_mktag(0), Case_11, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(MR_mktag(0), Case_11, 2) = ((MR_Box) (Goal_16));
    }
    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Cases0_10, &Cases_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_12));
    }
  }
}

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
  else
  {
    MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Goals0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Goal_11;
    MR_Word Goals_12;

    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Goal0_9, &Goal_11);
    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Goals0_10, &Goals_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_12));
    }
  }
}

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(
  MR_Word Features_5,
  MR_Word Goal0_7,
  MR_Word * Goal_8)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
    MR_Word GoalInfo0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));
    MR_Word GoalExpr_11;
    MR_Word GoalInfo_12;
    MR_Box conv1_GoalInfo_12;

    switch (MR_tag((MR_Word) GoalExpr0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_60 = (MR_Word) (MR_body((MR_Word) (GoalExpr0_9), (MR_Integer) 0));
          MR_Word SubGoal_61;

          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, SubGoal0_60, &SubGoal_61);
          GoalExpr_11 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (SubGoal_61)));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        GoalExpr_11 = GoalExpr0_9;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            GoalExpr_11 = GoalExpr0_9;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
              MR_Word Goals0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
              MR_Word Goals_48;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, Goals0_47, &Goals_48);
              {
                GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 1) = ((MR_Box) (ConjType_46));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 2) = ((MR_Box) (Goals_48));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
              MR_Word Goals_83;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, Goals0_82, &Goals_83);
              {
                GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 1) = ((MR_Box) (Goals_83));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
              MR_Word CanFail_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
              MR_Word Cases0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 3))));
              MR_Word Cases_52;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(Features_5, Cases0_51, &Cases_52);
              {
                GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 1) = ((MR_Box) (Var_49));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 2) = ((MR_Box) (CanFail_50));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 3) = ((MR_Box) (Cases_52));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
              MR_Word SubGoal0_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
              MR_Word SubGoal_85;
              MR_Word Var_63;
              MR_Word Var_64;

              succeeded = ((((MR_tag((MR_Word) Reason_62)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_62, (MR_Integer) 0))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_62, (MR_Integer) 1))));
                Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_62, (MR_Integer) 2))));
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, SubGoal0_84, &SubGoal_85);
              }
              else
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, SubGoal0_84, &SubGoal_85);
              {
                GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 1) = ((MR_Box) (Reason_62));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 2) = ((MR_Box) (SubGoal_85));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
              MR_Word Cond0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
              MR_Word Then0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 3))));
              MR_Word Else0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 4))));
              MR_Word Cond_57;
              MR_Word Then_58;
              MR_Word Else_59;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, Cond0_54, &Cond_57);
              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, Then0_55, &Then_58);
              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, Else0_56, &Else_59);
              {
                GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 1) = ((MR_Box) (Vars_53));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 2) = ((MR_Box) (Cond_57));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 3) = ((MR_Box) (Then_58));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 4) = ((MR_Box) (Else_59));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
              MR_Word ShortHand_75;

              switch (MR_tag((MR_Word) ShortHand0_65)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA0_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand0_65, (MR_Integer) 0))));
                    MR_Word GoalB0_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand0_65, (MR_Integer) 1))));
                    MR_Word GoalA_80;
                    MR_Word GoalB_81;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, GoalA0_78, &GoalA_80);
                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, GoalB0_79, &GoalB_81);
                    {
                      ShortHand_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ShortHand_75, 0) = ((MR_Box) (GoalA_80));
                      MR_hl_field(MR_mktag(0), ShortHand_75, 1) = ((MR_Box) (GoalB_81));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_65, (MR_Integer) 0))));
                    MR_Word Outer_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_65, (MR_Integer) 1))));
                    MR_Word Inner_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_65, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_65, (MR_Integer) 3))));
                    MR_Word MainGoal0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_65, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_65, (MR_Integer) 5))));
                    MR_Word OrElseInners_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_65, (MR_Integer) 6))));
                    MR_Word MainGoal_73;
                    MR_Word OrElseGoals_74;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, MainGoal0_70, &MainGoal_73);
                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, OrElseGoals0_71, &OrElseGoals_74);
                    {
                      ShortHand_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ShortHand_75, 0) = ((MR_Box) (GoalType_66));
                      MR_hl_field(MR_mktag(1), ShortHand_75, 1) = ((MR_Box) (Outer_67));
                      MR_hl_field(MR_mktag(1), ShortHand_75, 2) = ((MR_Box) (Inner_68));
                      MR_hl_field(MR_mktag(1), ShortHand_75, 3) = ((MR_Box) (MaybeOutputVars_69));
                      MR_hl_field(MR_mktag(1), ShortHand_75, 4) = ((MR_Box) (MainGoal_73));
                      MR_hl_field(MR_mktag(1), ShortHand_75, 5) = ((MR_Box) (OrElseGoals_74));
                      MR_hl_field(MR_mktag(1), ShortHand_75, 6) = ((MR_Box) (OrElseInners_72));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_76 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_65, (MR_Integer) 0))));
                    MR_Word ResultVar_77 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_65, (MR_Integer) 1))));
                    MR_Word SubGoal0_86 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_65, (MR_Integer) 2))));
                    MR_Word SubGoal_87;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, SubGoal0_86, &SubGoal_87);
                    {
                      ShortHand_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ShortHand_75, 0) = ((MR_Box) (MaybeIO_76));
                      MR_hl_field(MR_mktag(2), ShortHand_75, 1) = ((MR_Box) (ResultVar_77));
                      MR_hl_field(MR_mktag(2), ShortHand_75, 2) = ((MR_Box) (SubGoal_87));
                    }
                  }
                  break;
              }
              {
                GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), GoalExpr_11, 1) = ((MR_Box) (ShortHand_75));
              }
            }
            break;
        }
        break;
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0), (MR_Word) (&hlds__goal_util_scalar_common_4[2]), Features_5, ((MR_Box) (GoalInfo0_10)), &conv1_GoalInfo_12);
    GoalInfo_12 = ((MR_Word) (conv1_GoalInfo_12));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_12));
    }
  }
}

void MR_CALL 
hlds__goal_util__goals_goal_vars_2_p_0(
  MR_Word Goals_3,
  MR_Word * STATE_VARIABLE_Set_5)
{
  {
    MR_Word STATE_VARIABLE_Set_6_6;

    STATE_VARIABLE_Set_6_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    hlds__goal_util__goals_goal_vars_acc_3_p_0(Goals_3, STATE_VARIABLE_Set_6_6, STATE_VARIABLE_Set_5);
  }
}

void MR_CALL 
hlds__goal_util__goal_vars_2_p_0(
  MR_Word Goal_3,
  MR_Word * STATE_VARIABLE_Set_5)
{
  {
    MR_Word STATE_VARIABLE_Set_6_6;

    STATE_VARIABLE_Set_6_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    hlds__goal_util__goal_vars_acc_3_p_0(Goal_3, STATE_VARIABLE_Set_6_6, STATE_VARIABLE_Set_5);
  }
}

static MR_Box MR_CALL 
hlds__goal_util__goal_vars_acc_3_p_0_2(
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

static MR_Box MR_CALL 
hlds__goal_util__goal_vars_acc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__goal_util__goal_vars_acc_3_p_0(
  MR_Word tscc_proc_1_input_1_Goal_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Set_99)
{
  {
    MR_Word tscc_proc_2_input_1_RHS_4;
    MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Set_0_19;
    MR_Word tscc_output_1_STATE_VARIABLE_Set_99;

    // The code for TSCC PROC 1: pred hlds.goal_util.goal_vars_acc/3-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred hlds.goal_util.goal_vars_acc/3-0
    // proc 2 in TSCC: pred hlds.goal_util.rhs_goal_vars_acc/3-0

    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Goal_4 = tscc_proc_1_input_1_Goal_4;
      MR_Word STATE_VARIABLE_Set_0_98 = tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98;
      MR_Word STATE_VARIABLE_Set_99;
      MR_bool succeeded;
      MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 0))));
      MR_Word _GoalInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) GoalExpr_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_143 = (MR_Word) (MR_body((MR_Word) (GoalExpr_6), (MR_Integer) 0));
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_143;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = STATE_VARIABLE_Set_0_98;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
            tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 0))));
            MR_Word RHS_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 1))));
            MR_Word Unif_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 3))));
            MR_Word STATE_VARIABLE_Set_132_132;
            MR_Word STATE_VARIABLE_Set_134_134;
            MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 2))));
            MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 4))));
            MR_Word next_value_of_tscc_proc_2_input_1_RHS_4;
            MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Set_0_19;

            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_8, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_132_132);
            switch (MR_tag((MR_Word) Unif_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word CellToReuse_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unif_11, (MR_Integer) 4))));
                  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unif_11, (MR_Integer) 0))));
                  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unif_11, (MR_Integer) 1))));
                  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unif_11, (MR_Integer) 2))));
                  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unif_11, (MR_Integer) 3))));
                  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unif_11, (MR_Integer) 5))));
                  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unif_11, (MR_Integer) 6))));
                  MR_Word TypeInfo_171_171;
                  MR_Word Var_133;
                  MR_Word Var_167;
                  MR_Word Var_20;
                  MR_Word Var_21;

                  succeeded = ((MR_tag((MR_Word) CellToReuse_17)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_133 = (MR_Word) (MR_body((MR_Word) (CellToReuse_17), (MR_Integer) 1));
                    Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_133, (MR_Integer) 0))));
                    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_133, (MR_Integer) 1))));
                    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_133, (MR_Integer) 2))));
                    TypeInfo_171_171 = (MR_Word) (&hlds__goal_util_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_171_171, ((MR_Box) (Var_8)), ((MR_Box) (Var_167)));
                  }
                  if (succeeded)
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_8, STATE_VARIABLE_Set_132_132, &STATE_VARIABLE_Set_134_134);
                  else
                    STATE_VARIABLE_Set_134_134 = STATE_VARIABLE_Set_132_132;
                }
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_Set_134_134 = STATE_VARIABLE_Set_132_132;
                break;
              case (MR_Integer) 2:
                STATE_VARIABLE_Set_134_134 = STATE_VARIABLE_Set_132_132;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Unif_11, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_Set_134_134 = STATE_VARIABLE_Set_132_132;
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_Set_134_134 = STATE_VARIABLE_Set_132_132;
                    break;
                }
                break;
            }
            // direct tailcall eliminated
            next_value_of_tscc_proc_2_input_1_RHS_4 = RHS_9;
            next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Set_0_19 = STATE_VARIABLE_Set_134_134;
            tscc_proc_2_input_1_RHS_4 = next_value_of_tscc_proc_2_input_1_RHS_4;
            tscc_proc_2_input_2_STATE_VARIABLE_Set_0_19 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Set_0_19;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgVars_136 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 2))));
            MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 0))));
            MR_Integer Var_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 1))));
            MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 3))));
            MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 4))));
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 5))));

            parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_136, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_99);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word GenericCall_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
                MR_Word ArgVars_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Word GenericCallVars_40;
                MR_Word STATE_VARIABLE_Set_130_130;
                MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
                MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
                MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 5))));

                hlds__goal_util__generic_call_vars_2_p_0(GenericCall_35, &GenericCallVars_40);
                parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GenericCallVars_40, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_130_130);
                parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_36, STATE_VARIABLE_Set_130_130, &STATE_VARIABLE_Set_99);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Args_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
                MR_Word ExtraArgs_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 5))));
                MR_Word ExtraVars_80;
                MR_Word STATE_VARIABLE_Set_112_112;
                MR_Word ArgVars_145;
                MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
                MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Integer Var_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
                MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 6))));
                MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 7))));

                ArgVars_145 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_4[0]), Args_76);
                ExtraVars_80 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_4[1]), ExtraArgs_77);
                parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_145, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_112_112);
                parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraVars_80, STATE_VARIABLE_Set_112_112, &STATE_VARIABLE_Set_99);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

                hlds__goal_util__goals_goal_vars_acc_3_p_0(Goals_47, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_99);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_168 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

                hlds__goal_util__goals_goal_vars_acc_3_p_0(Goals_168, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_99);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_Set_126_126;
                MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
                MR_Word _Det_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));

                parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_137, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_126_126);
                hlds__goal_util__cases_goal_vars_acc_3_p_0(Cases_49, STATE_VARIABLE_Set_126_126, &STATE_VARIABLE_Set_99);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
                MR_Word SubGoal_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Word STATE_VARIABLE_Set_124_124;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98;

                switch (MR_tag((MR_Word) Reason_50)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Vars_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Reason_50, (MR_Integer) 0))));

                      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_52, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_124_124);
                    }
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_Set_124_124 = STATE_VARIABLE_Set_0_98;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Vars_138 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Reason_50, (MR_Integer) 0))));
                      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Reason_50, (MR_Integer) 1))));

                      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_138, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_124_124);
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        STATE_VARIABLE_Set_124_124 = STATE_VARIABLE_Set_0_98;
                        break;
                      case (MR_Integer) 1:
                        STATE_VARIABLE_Set_124_124 = STATE_VARIABLE_Set_0_98;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 1))));

                          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_140, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_124_124);
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 1))));
                          MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 2))));

                          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_169, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_124_124);
                        }
                        break;
                      case (MR_Integer) 4:
                        STATE_VARIABLE_Set_124_124 = STATE_VARIABLE_Set_0_98;
                        break;
                      case (MR_Integer) 5:
                        STATE_VARIABLE_Set_124_124 = STATE_VARIABLE_Set_0_98;
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 1))));
                          MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 2))));

                          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_139, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_124_124);
                        }
                        break;
                      case (MR_Integer) 7:
                        STATE_VARIABLE_Set_124_124 = STATE_VARIABLE_Set_0_98;
                        break;
                      case (MR_Integer) 8:
                        {
                          MR_Word LCVar_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 1))));
                          MR_Word LCSVar_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 2))));
                          MR_Word STATE_VARIABLE_Set_119_119;
                          MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 3))));

                          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_56, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_119_119);
                          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCSVar_57, STATE_VARIABLE_Set_119_119, &STATE_VARIABLE_Set_124_124);
                        }
                        break;
                    }
                    break;
                }
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_51;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = STATE_VARIABLE_Set_124_124;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Word Then_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
                MR_Word Else_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_Set_114_114;
                MR_Word STATE_VARIABLE_Set_115_115;
                MR_Word STATE_VARIABLE_Set_116_116;
                MR_Word Vars_144 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98;

                parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_144, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_114_114);
                hlds__goal_util__goal_vars_acc_3_p_0(Cond_70, STATE_VARIABLE_Set_114_114, &STATE_VARIABLE_Set_115_115);
                hlds__goal_util__goal_vars_acc_3_p_0(Then_71, STATE_VARIABLE_Set_115_115, &STATE_VARIABLE_Set_116_116);
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_Goal_4 = Else_72;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = STATE_VARIABLE_Set_116_116;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Shorthand_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) Shorthand_81)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word LeftGoal_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand_81, (MR_Integer) 0))));
                      MR_Word RightGoal_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand_81, (MR_Integer) 1))));
                      MR_Word STATE_VARIABLE_Set_100_100;
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                      MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98;

                      hlds__goal_util__goal_vars_acc_3_p_0(LeftGoal_96, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_100_100);
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_1_input_1_Goal_4 = RightGoal_97;
                      next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = STATE_VARIABLE_Set_100_100;
                      tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                      tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98;
                      goto top_of_proc_1;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Outer_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_81, (MR_Integer) 1))));
                      MR_Word Inner_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_81, (MR_Integer) 2))));
                      MR_Word MaybeOutputVars_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_81, (MR_Integer) 3))));
                      MR_Word MainGoal_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_81, (MR_Integer) 4))));
                      MR_Word OrElseGoals_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_81, (MR_Integer) 5))));
                      MR_Word OuterDI_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_83, (MR_Integer) 0))));
                      MR_Word OuterUO_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_83, (MR_Integer) 1))));
                      MR_Word InnerDI_91;
                      MR_Word InnerUO_92;
                      MR_Word STATE_VARIABLE_Set_103_103;
                      MR_Word STATE_VARIABLE_Set_104_104;
                      MR_Word STATE_VARIABLE_Set_105_105;
                      MR_Word STATE_VARIABLE_Set_106_106;
                      MR_Word STATE_VARIABLE_Set_107_107;
                      MR_Word STATE_VARIABLE_Set_108_108;
                      MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_81, (MR_Integer) 0))));
                      MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_81, (MR_Integer) 6))));

                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterDI_89, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_103_103);
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterUO_90, STATE_VARIABLE_Set_103_103, &STATE_VARIABLE_Set_104_104);
                      InnerDI_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_84, (MR_Integer) 0))));
                      InnerUO_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_84, (MR_Integer) 1))));
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerDI_91, STATE_VARIABLE_Set_104_104, &STATE_VARIABLE_Set_105_105);
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerUO_92, STATE_VARIABLE_Set_105_105, &STATE_VARIABLE_Set_106_106);
                      if ((MaybeOutputVars_85 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        STATE_VARIABLE_Set_107_107 = STATE_VARIABLE_Set_106_106;
                      else
                      {
                        MR_Word OutputVars_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOutputVars_85, (MR_Integer) 0))));

                        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputVars_93, STATE_VARIABLE_Set_106_106, &STATE_VARIABLE_Set_107_107);
                      }
                      hlds__goal_util__goal_vars_acc_3_p_0(MainGoal_86, STATE_VARIABLE_Set_107_107, &STATE_VARIABLE_Set_108_108);
                      hlds__goal_util__goals_goal_vars_acc_3_p_0(OrElseGoals_87, STATE_VARIABLE_Set_108_108, &STATE_VARIABLE_Set_99);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_146 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Shorthand_81, (MR_Integer) 2))));
                      MR_Word Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Shorthand_81, (MR_Integer) 0))));
                      MR_Word Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Shorthand_81, (MR_Integer) 1))));
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_146;
                      MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = STATE_VARIABLE_Set_0_98;

                      // direct tailcall eliminated
                      tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                      tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98;
                      goto top_of_proc_1;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Set_99 = STATE_VARIABLE_Set_99;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word RHS_4 = tscc_proc_2_input_1_RHS_4;
      MR_Word STATE_VARIABLE_Set_0_19 = tscc_proc_2_input_2_STATE_VARIABLE_Set_0_19;
      MR_Word STATE_VARIABLE_Set_20;

      switch (MR_tag((MR_Word) RHS_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word X_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS_4, (MR_Integer) 0))));

            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_6, STATE_VARIABLE_Set_0_19, &STATE_VARIABLE_Set_20);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgVars_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_4, (MR_Integer) 2))));
            MR_Word _Functor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_4, (MR_Integer) 0))));
            MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_4, (MR_Integer) 1))));

            parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_9, STATE_VARIABLE_Set_0_19, &STATE_VARIABLE_Set_20);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word NonLocals_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_4, (MR_Integer) 2))));
            MR_Word LambdaVars_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_4, (MR_Integer) 3))));
            MR_Word Goal_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_4, (MR_Integer) 6))));
            MR_Word STATE_VARIABLE_Set_21_21;
            MR_Word STATE_VARIABLE_Set_22_22;
            MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_4, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_4, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_4, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_4, (MR_Integer) 4))));
            MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_4, (MR_Integer) 5))));
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98;

            parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_14, STATE_VARIABLE_Set_0_19, &STATE_VARIABLE_Set_21_21);
            parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaVars_15, STATE_VARIABLE_Set_21_21, &STATE_VARIABLE_Set_22_22);
            // direct tailcall eliminated
            next_value_of_tscc_proc_1_input_1_Goal_4 = Goal_18;
            next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = STATE_VARIABLE_Set_22_22;
            tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
            tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98;
            goto top_of_proc_1;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Set_99 = STATE_VARIABLE_Set_20;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Set_99 = tscc_output_1_STATE_VARIABLE_Set_99;
    return;
  }
}

static void MR_CALL 
hlds__goal_util__rhs_goal_vars_acc_3_p_0(
  MR_Word tscc_proc_2_input_1_RHS_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Set_0_19,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Set_99)
{
  {
    MR_Word tscc_proc_1_input_1_Goal_4;
    MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98;
    MR_Word tscc_output_1_STATE_VARIABLE_Set_99;

    // The code for TSCC PROC 2: pred hlds.goal_util.rhs_goal_vars_acc/3-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred hlds.goal_util.goal_vars_acc/3-0
    // proc 2 in TSCC: pred hlds.goal_util.rhs_goal_vars_acc/3-0

    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Goal_4 = tscc_proc_1_input_1_Goal_4;
      MR_Word STATE_VARIABLE_Set_0_98 = tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98;
      MR_Word STATE_VARIABLE_Set_99;
      MR_bool succeeded;
      MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 0))));
      MR_Word _GoalInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) GoalExpr_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_143 = (MR_Word) (MR_body((MR_Word) (GoalExpr_6), (MR_Integer) 0));
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_143;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = STATE_VARIABLE_Set_0_98;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
            tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 0))));
            MR_Word RHS_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 1))));
            MR_Word Unif_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 3))));
            MR_Word STATE_VARIABLE_Set_132_132;
            MR_Word STATE_VARIABLE_Set_134_134;
            MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 2))));
            MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 4))));
            MR_Word next_value_of_tscc_proc_2_input_1_RHS_4;
            MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Set_0_19;

            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_8, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_132_132);
            switch (MR_tag((MR_Word) Unif_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word CellToReuse_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unif_11, (MR_Integer) 4))));
                  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unif_11, (MR_Integer) 0))));
                  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unif_11, (MR_Integer) 1))));
                  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unif_11, (MR_Integer) 2))));
                  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unif_11, (MR_Integer) 3))));
                  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unif_11, (MR_Integer) 5))));
                  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unif_11, (MR_Integer) 6))));
                  MR_Word TypeInfo_171_171;
                  MR_Word Var_133;
                  MR_Word Var_167;
                  MR_Word Var_20;
                  MR_Word Var_21;

                  succeeded = ((MR_tag((MR_Word) CellToReuse_17)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_133 = (MR_Word) (MR_body((MR_Word) (CellToReuse_17), (MR_Integer) 1));
                    Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_133, (MR_Integer) 0))));
                    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_133, (MR_Integer) 1))));
                    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_133, (MR_Integer) 2))));
                    TypeInfo_171_171 = (MR_Word) (&hlds__goal_util_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_171_171, ((MR_Box) (Var_8)), ((MR_Box) (Var_167)));
                  }
                  if (succeeded)
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_8, STATE_VARIABLE_Set_132_132, &STATE_VARIABLE_Set_134_134);
                  else
                    STATE_VARIABLE_Set_134_134 = STATE_VARIABLE_Set_132_132;
                }
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_Set_134_134 = STATE_VARIABLE_Set_132_132;
                break;
              case (MR_Integer) 2:
                STATE_VARIABLE_Set_134_134 = STATE_VARIABLE_Set_132_132;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Unif_11, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_Set_134_134 = STATE_VARIABLE_Set_132_132;
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_Set_134_134 = STATE_VARIABLE_Set_132_132;
                    break;
                }
                break;
            }
            // direct tailcall eliminated
            next_value_of_tscc_proc_2_input_1_RHS_4 = RHS_9;
            next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Set_0_19 = STATE_VARIABLE_Set_134_134;
            tscc_proc_2_input_1_RHS_4 = next_value_of_tscc_proc_2_input_1_RHS_4;
            tscc_proc_2_input_2_STATE_VARIABLE_Set_0_19 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Set_0_19;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgVars_136 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 2))));
            MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 0))));
            MR_Integer Var_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 1))));
            MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 3))));
            MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 4))));
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 5))));

            parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_136, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_99);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word GenericCall_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
                MR_Word ArgVars_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Word GenericCallVars_40;
                MR_Word STATE_VARIABLE_Set_130_130;
                MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
                MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
                MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 5))));

                hlds__goal_util__generic_call_vars_2_p_0(GenericCall_35, &GenericCallVars_40);
                parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GenericCallVars_40, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_130_130);
                parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_36, STATE_VARIABLE_Set_130_130, &STATE_VARIABLE_Set_99);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Args_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
                MR_Word ExtraArgs_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 5))));
                MR_Word ExtraVars_80;
                MR_Word STATE_VARIABLE_Set_112_112;
                MR_Word ArgVars_145;
                MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
                MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Integer Var_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
                MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 6))));
                MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 7))));

                ArgVars_145 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_4[0]), Args_76);
                ExtraVars_80 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_4[1]), ExtraArgs_77);
                parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_145, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_112_112);
                parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraVars_80, STATE_VARIABLE_Set_112_112, &STATE_VARIABLE_Set_99);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

                hlds__goal_util__goals_goal_vars_acc_3_p_0(Goals_47, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_99);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_168 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

                hlds__goal_util__goals_goal_vars_acc_3_p_0(Goals_168, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_99);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_Set_126_126;
                MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
                MR_Word _Det_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));

                parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_137, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_126_126);
                hlds__goal_util__cases_goal_vars_acc_3_p_0(Cases_49, STATE_VARIABLE_Set_126_126, &STATE_VARIABLE_Set_99);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
                MR_Word SubGoal_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Word STATE_VARIABLE_Set_124_124;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98;

                switch (MR_tag((MR_Word) Reason_50)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Vars_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Reason_50, (MR_Integer) 0))));

                      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_52, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_124_124);
                    }
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_Set_124_124 = STATE_VARIABLE_Set_0_98;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Vars_138 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Reason_50, (MR_Integer) 0))));
                      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Reason_50, (MR_Integer) 1))));

                      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_138, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_124_124);
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        STATE_VARIABLE_Set_124_124 = STATE_VARIABLE_Set_0_98;
                        break;
                      case (MR_Integer) 1:
                        STATE_VARIABLE_Set_124_124 = STATE_VARIABLE_Set_0_98;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 1))));

                          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_140, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_124_124);
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 1))));
                          MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 2))));

                          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_169, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_124_124);
                        }
                        break;
                      case (MR_Integer) 4:
                        STATE_VARIABLE_Set_124_124 = STATE_VARIABLE_Set_0_98;
                        break;
                      case (MR_Integer) 5:
                        STATE_VARIABLE_Set_124_124 = STATE_VARIABLE_Set_0_98;
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 1))));
                          MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 2))));

                          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_139, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_124_124);
                        }
                        break;
                      case (MR_Integer) 7:
                        STATE_VARIABLE_Set_124_124 = STATE_VARIABLE_Set_0_98;
                        break;
                      case (MR_Integer) 8:
                        {
                          MR_Word LCVar_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 1))));
                          MR_Word LCSVar_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 2))));
                          MR_Word STATE_VARIABLE_Set_119_119;
                          MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 3))));

                          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_56, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_119_119);
                          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCSVar_57, STATE_VARIABLE_Set_119_119, &STATE_VARIABLE_Set_124_124);
                        }
                        break;
                    }
                    break;
                }
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_51;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = STATE_VARIABLE_Set_124_124;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Word Then_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
                MR_Word Else_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_Set_114_114;
                MR_Word STATE_VARIABLE_Set_115_115;
                MR_Word STATE_VARIABLE_Set_116_116;
                MR_Word Vars_144 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98;

                parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_144, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_114_114);
                hlds__goal_util__goal_vars_acc_3_p_0(Cond_70, STATE_VARIABLE_Set_114_114, &STATE_VARIABLE_Set_115_115);
                hlds__goal_util__goal_vars_acc_3_p_0(Then_71, STATE_VARIABLE_Set_115_115, &STATE_VARIABLE_Set_116_116);
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_Goal_4 = Else_72;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = STATE_VARIABLE_Set_116_116;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Shorthand_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) Shorthand_81)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word LeftGoal_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand_81, (MR_Integer) 0))));
                      MR_Word RightGoal_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand_81, (MR_Integer) 1))));
                      MR_Word STATE_VARIABLE_Set_100_100;
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                      MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98;

                      hlds__goal_util__goal_vars_acc_3_p_0(LeftGoal_96, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_100_100);
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_1_input_1_Goal_4 = RightGoal_97;
                      next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = STATE_VARIABLE_Set_100_100;
                      tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                      tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98;
                      goto top_of_proc_1;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Outer_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_81, (MR_Integer) 1))));
                      MR_Word Inner_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_81, (MR_Integer) 2))));
                      MR_Word MaybeOutputVars_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_81, (MR_Integer) 3))));
                      MR_Word MainGoal_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_81, (MR_Integer) 4))));
                      MR_Word OrElseGoals_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_81, (MR_Integer) 5))));
                      MR_Word OuterDI_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_83, (MR_Integer) 0))));
                      MR_Word OuterUO_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_83, (MR_Integer) 1))));
                      MR_Word InnerDI_91;
                      MR_Word InnerUO_92;
                      MR_Word STATE_VARIABLE_Set_103_103;
                      MR_Word STATE_VARIABLE_Set_104_104;
                      MR_Word STATE_VARIABLE_Set_105_105;
                      MR_Word STATE_VARIABLE_Set_106_106;
                      MR_Word STATE_VARIABLE_Set_107_107;
                      MR_Word STATE_VARIABLE_Set_108_108;
                      MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_81, (MR_Integer) 0))));
                      MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_81, (MR_Integer) 6))));

                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterDI_89, STATE_VARIABLE_Set_0_98, &STATE_VARIABLE_Set_103_103);
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterUO_90, STATE_VARIABLE_Set_103_103, &STATE_VARIABLE_Set_104_104);
                      InnerDI_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_84, (MR_Integer) 0))));
                      InnerUO_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_84, (MR_Integer) 1))));
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerDI_91, STATE_VARIABLE_Set_104_104, &STATE_VARIABLE_Set_105_105);
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerUO_92, STATE_VARIABLE_Set_105_105, &STATE_VARIABLE_Set_106_106);
                      if ((MaybeOutputVars_85 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        STATE_VARIABLE_Set_107_107 = STATE_VARIABLE_Set_106_106;
                      else
                      {
                        MR_Word OutputVars_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOutputVars_85, (MR_Integer) 0))));

                        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputVars_93, STATE_VARIABLE_Set_106_106, &STATE_VARIABLE_Set_107_107);
                      }
                      hlds__goal_util__goal_vars_acc_3_p_0(MainGoal_86, STATE_VARIABLE_Set_107_107, &STATE_VARIABLE_Set_108_108);
                      hlds__goal_util__goals_goal_vars_acc_3_p_0(OrElseGoals_87, STATE_VARIABLE_Set_108_108, &STATE_VARIABLE_Set_99);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_146 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Shorthand_81, (MR_Integer) 2))));
                      MR_Word Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Shorthand_81, (MR_Integer) 0))));
                      MR_Word Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Shorthand_81, (MR_Integer) 1))));
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_146;
                      MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = STATE_VARIABLE_Set_0_98;

                      // direct tailcall eliminated
                      tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                      tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98;
                      goto top_of_proc_1;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Set_99 = STATE_VARIABLE_Set_99;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word RHS_4 = tscc_proc_2_input_1_RHS_4;
      MR_Word STATE_VARIABLE_Set_0_19 = tscc_proc_2_input_2_STATE_VARIABLE_Set_0_19;
      MR_Word STATE_VARIABLE_Set_20;

      switch (MR_tag((MR_Word) RHS_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word X_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS_4, (MR_Integer) 0))));

            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_6, STATE_VARIABLE_Set_0_19, &STATE_VARIABLE_Set_20);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgVars_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_4, (MR_Integer) 2))));
            MR_Word _Functor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_4, (MR_Integer) 0))));
            MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_4, (MR_Integer) 1))));

            parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_9, STATE_VARIABLE_Set_0_19, &STATE_VARIABLE_Set_20);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word NonLocals_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_4, (MR_Integer) 2))));
            MR_Word LambdaVars_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_4, (MR_Integer) 3))));
            MR_Word Goal_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_4, (MR_Integer) 6))));
            MR_Word STATE_VARIABLE_Set_21_21;
            MR_Word STATE_VARIABLE_Set_22_22;
            MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_4, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_4, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_4, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_4, (MR_Integer) 4))));
            MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_4, (MR_Integer) 5))));
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98;

            parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_14, STATE_VARIABLE_Set_0_19, &STATE_VARIABLE_Set_21_21);
            parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaVars_15, STATE_VARIABLE_Set_21_21, &STATE_VARIABLE_Set_22_22);
            // direct tailcall eliminated
            next_value_of_tscc_proc_1_input_1_Goal_4 = Goal_18;
            next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = STATE_VARIABLE_Set_22_22;
            tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
            tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_98;
            goto top_of_proc_1;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Set_99 = STATE_VARIABLE_Set_20;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Set_99 = tscc_output_1_STATE_VARIABLE_Set_99;
    return;
  }
}

static void MR_CALL 
hlds__goal_util__cases_goal_vars_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Set_0_2,
  MR_Word * STATE_VARIABLE_Set_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Set_3 = STATE_VARIABLE_Set_0_2;
    else
    {
      MR_Word Goal_9;
      MR_Word Cases_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Set_15_15;
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
      MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Set_0_2;

      Goal_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 2))));
      hlds__goal_util__goal_vars_acc_3_p_0(Goal_9, STATE_VARIABLE_Set_0_2, &STATE_VARIABLE_Set_15_15);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Cases_10;
      next_value_of_STATE_VARIABLE_Set_0_2 = STATE_VARIABLE_Set_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Set_0_2 = next_value_of_STATE_VARIABLE_Set_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_util__goals_goal_vars_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Set_0_2,
  MR_Word * STATE_VARIABLE_Set_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Set_3 = STATE_VARIABLE_Set_0_2;
    else
    {
      MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Set_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Set_0_2;

      hlds__goal_util__goal_vars_acc_3_p_0(Goal_7, STATE_VARIABLE_Set_0_2, &STATE_VARIABLE_Set_12_12);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Goals_8;
      next_value_of_STATE_VARIABLE_Set_0_2 = STATE_VARIABLE_Set_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Set_0_2 = next_value_of_STATE_VARIABLE_Set_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__goal_util__generic_call_vars_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
        MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
        MR_Integer Var_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_3));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_Integer Var_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
        MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      break;
    case (MR_Integer) 3:
      *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      break;
  }
}

void MR_CALL 
hlds__goal_util__clone_variables_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word OldVarNames_2,
  MR_Word OldVarTypes_3,
  MR_Word STATE_VARIABLE_VarSet_0_4,
  MR_Word * STATE_VARIABLE_VarSet_5,
  MR_Word STATE_VARIABLE_VarTypes_0_6,
  MR_Word * STATE_VARIABLE_VarTypes_7,
  MR_Word STATE_VARIABLE_Renaming_0_8,
  MR_Word * STATE_VARIABLE_Renaming_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Renaming_9 = STATE_VARIABLE_Renaming_0_8;
      *STATE_VARIABLE_VarTypes_7 = STATE_VARIABLE_VarTypes_0_6;
      *STATE_VARIABLE_VarSet_5 = STATE_VARIABLE_VarSet_0_4;
    }
    else
    {
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_VarSet_35_35;
      MR_Word STATE_VARIABLE_VarTypes_36_36;
      MR_Word STATE_VARIABLE_Renaming_37_37;
      MR_Word _CloneVar_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VarSet_0_4;
      MR_Word next_value_of_STATE_VARIABLE_VarTypes_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Renaming_0_8;

      hlds__goal_util__clone_variable_10_p_0(Var_21, OldVarNames_2, OldVarTypes_3, STATE_VARIABLE_VarSet_0_4, &STATE_VARIABLE_VarSet_35_35, STATE_VARIABLE_VarTypes_0_6, &STATE_VARIABLE_VarTypes_36_36, STATE_VARIABLE_Renaming_0_8, &STATE_VARIABLE_Renaming_37_37, &_CloneVar_28);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Vars_22;
      next_value_of_STATE_VARIABLE_VarSet_0_4 = STATE_VARIABLE_VarSet_35_35;
      next_value_of_STATE_VARIABLE_VarTypes_0_6 = STATE_VARIABLE_VarTypes_36_36;
      next_value_of_STATE_VARIABLE_Renaming_0_8 = STATE_VARIABLE_Renaming_37_37;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarSet_0_4 = next_value_of_STATE_VARIABLE_VarSet_0_4;
      STATE_VARIABLE_VarTypes_0_6 = next_value_of_STATE_VARIABLE_VarTypes_0_6;
      STATE_VARIABLE_Renaming_0_8 = next_value_of_STATE_VARIABLE_Renaming_0_8;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__goal_util__clone_variable_10_p_0(
  MR_Word Var_11,
  MR_Word OldVarNames_12,
  MR_Word OldVarTypes_13,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22,
  MR_Word STATE_VARIABLE_VarTypes_0_23,
  MR_Word * STATE_VARIABLE_VarTypes_24,
  MR_Word STATE_VARIABLE_Renaming_0_25,
  MR_Word * STATE_VARIABLE_Renaming_26,
  MR_Word * CloneVar_17)
{
  {
    MR_bool succeeded;
    MR_Word CloneVarPrime_18;
    MR_Box conv0_CloneVarPrime_18;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), STATE_VARIABLE_Renaming_0_25, ((MR_Box) (Var_11)), &conv0_CloneVarPrime_18);
    if (succeeded)
    {
      CloneVarPrime_18 = ((MR_Word) (conv0_CloneVarPrime_18));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *CloneVar_17 = CloneVarPrime_18;
      *STATE_VARIABLE_Renaming_26 = STATE_VARIABLE_Renaming_0_25;
      *STATE_VARIABLE_VarTypes_24 = STATE_VARIABLE_VarTypes_0_23;
      *STATE_VARIABLE_VarSet_22 = STATE_VARIABLE_VarSet_0_21;
    }
    else
    {
      MR_String Name_19;
      MR_Word VarType_20;

      succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OldVarNames_12, Var_11, &Name_19);
      if (succeeded)
      {
        mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_19, CloneVar_17, STATE_VARIABLE_VarSet_0_21, STATE_VARIABLE_VarSet_22);
      }
      else
      {
        mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CloneVar_17, STATE_VARIABLE_VarSet_0_21, STATE_VARIABLE_VarSet_22);
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), ((MR_Box) (Var_11)), ((MR_Box) (*CloneVar_17)), STATE_VARIABLE_Renaming_0_25, STATE_VARIABLE_Renaming_26);
      succeeded = hlds__vartypes__search_var_type_3_p_0(OldVarTypes_13, Var_11, &VarType_20);
      if (succeeded)
        hlds__vartypes__add_var_type_4_p_0(*CloneVar_17, VarType_20, STATE_VARIABLE_VarTypes_0_23, STATE_VARIABLE_VarTypes_24);
      else
        *STATE_VARIABLE_VarTypes_24 = STATE_VARIABLE_VarTypes_0_23;
    }
  }
}

void MR_CALL 
hlds__goal_util__create_renaming_9_p_0(
  MR_Word OrigVars_10,
  MR_Word InstMapDelta_11,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_VarTypes_0_21,
  MR_Word * STATE_VARIABLE_VarTypes_22,
  MR_Word * Unifies_14,
  MR_Word * NewVars_15,
  MR_Word * Renaming_16)
{
  {
    MR_Word RevUnifies_17;
    MR_Word RevNewVars_18;
    MR_Word Var_27;

    Var_27 = mercury__map__init_0_f_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_1[0]));
    hlds__goal_util__create_renaming_2_12_p_0(OrigVars_10, InstMapDelta_11, STATE_VARIABLE_VarSet_0_19, STATE_VARIABLE_VarSet_20, STATE_VARIABLE_VarTypes_0_21, STATE_VARIABLE_VarTypes_22, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), &RevUnifies_17, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), &RevNewVars_18, Var_27, Renaming_16);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), RevNewVars_18, NewVars_15);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevUnifies_17, Unifies_14);
  }
}

static void MR_CALL 
hlds__goal_util__create_renaming_2_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMapDelta_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_VarTypes_0_5,
  MR_Word * STATE_VARIABLE_VarTypes_6,
  MR_Word STATE_VARIABLE_RevUnifies_0_7,
  MR_Word * STATE_VARIABLE_RevUnifies_8,
  MR_Word STATE_VARIABLE_RevNewVars_0_9,
  MR_Word * STATE_VARIABLE_RevNewVars_10,
  MR_Word STATE_VARIABLE_Renaming_0_11,
  MR_Word * STATE_VARIABLE_Renaming_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Renaming_12 = STATE_VARIABLE_Renaming_0_11;
      *STATE_VARIABLE_RevNewVars_10 = STATE_VARIABLE_RevNewVars_0_9;
      *STATE_VARIABLE_RevUnifies_8 = STATE_VARIABLE_RevUnifies_0_7;
      *STATE_VARIABLE_VarTypes_6 = STATE_VARIABLE_VarTypes_0_5;
      *STATE_VARIABLE_VarSet_4 = STATE_VARIABLE_VarSet_0_3;
    }
    else
    {
      MR_Word OrigVar_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word OrigVars_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word NewVar_37;
      MR_Word Type_38;
      MR_Word NewInst_39;
      MR_Word UnifyMode_40;
      MR_Word Unification_41;
      MR_Word GoalExpr_43;
      MR_Word NonLocals_44;
      MR_Word UnifyInstMapDelta_45;
      MR_Word GoalInfo_46;
      MR_Word Goal_47;
      MR_Word STATE_VARIABLE_VarSet_58_58;
      MR_Word STATE_VARIABLE_VarTypes_59_59;
      MR_Word Var_60;
      MR_Word Var_62;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_75;
      MR_Word STATE_VARIABLE_RevUnifies_76_76;
      MR_Word STATE_VARIABLE_Renaming_77_77;
      MR_Word STATE_VARIABLE_RevNewVars_78_78;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VarSet_0_3;
      MR_Word next_value_of_STATE_VARIABLE_VarTypes_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RevUnifies_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RevNewVars_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Renaming_0_11;

      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &NewVar_37, STATE_VARIABLE_VarSet_0_3, &STATE_VARIABLE_VarSet_58_58);
      hlds__vartypes__lookup_var_type_3_p_0(STATE_VARIABLE_VarTypes_0_5, OrigVar_29, &Type_38);
      hlds__vartypes__add_var_type_4_p_0(NewVar_37, Type_38, STATE_VARIABLE_VarTypes_0_5, &STATE_VARIABLE_VarTypes_59_59);
      hlds__instmap__instmap_delta_lookup_var_3_p_0(InstMapDelta_2, OrigVar_29, &NewInst_39);
      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (NewInst_39));
        MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (NewInst_39));
      }
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (NewInst_39));
      }
      {
        UnifyMode_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), UnifyMode_40, 0) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(0), UnifyMode_40, 1) = ((MR_Box) (Var_62));
      }
      {
        Unification_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Unification_41, 0) = ((MR_Box) (OrigVar_29));
        MR_hl_field(MR_mktag(2), Unification_41, 1) = ((MR_Box) (NewVar_37));
      }
      {
        Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (NewVar_37));
      }
      {
        GoalExpr_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalExpr_43, 0) = ((MR_Box) (OrigVar_29));
        MR_hl_field(MR_mktag(1), GoalExpr_43, 1) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(1), GoalExpr_43, 2) = ((MR_Box) (UnifyMode_40));
        MR_hl_field(MR_mktag(1), GoalExpr_43, 3) = ((MR_Box) (Unification_41));
        MR_hl_field(MR_mktag(1), GoalExpr_43, 4) = ((MR_Box) (&hlds__goal_util_scalar_common_1[6]));
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (NewVar_37));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (OrigVar_29));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_68));
      }
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_67, &NonLocals_44);
      {
        Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (OrigVar_29));
        MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (NewInst_39));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      UnifyInstMapDelta_45 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_70);
      Var_75 = mercury__term__context_init_0_f_0();
      hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_44, UnifyInstMapDelta_45, (MR_Integer) 0, (MR_Integer) 0, Var_75, &GoalInfo_46);
      {
        Goal_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal_47, 0) = ((MR_Box) (GoalExpr_43));
        MR_hl_field(MR_mktag(0), Goal_47, 1) = ((MR_Box) (GoalInfo_46));
      }
      {
        STATE_VARIABLE_RevUnifies_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevUnifies_76_76, 0) = ((MR_Box) (Goal_47));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevUnifies_76_76, 1) = ((MR_Box) (STATE_VARIABLE_RevUnifies_0_7));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), ((MR_Box) (OrigVar_29)), ((MR_Box) (NewVar_37)), STATE_VARIABLE_Renaming_0_11, &STATE_VARIABLE_Renaming_77_77);
      {
        STATE_VARIABLE_RevNewVars_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevNewVars_78_78, 0) = ((MR_Box) (NewVar_37));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevNewVars_78_78, 1) = ((MR_Box) (STATE_VARIABLE_RevNewVars_0_9));
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = OrigVars_30;
      next_value_of_STATE_VARIABLE_VarSet_0_3 = STATE_VARIABLE_VarSet_58_58;
      next_value_of_STATE_VARIABLE_VarTypes_0_5 = STATE_VARIABLE_VarTypes_59_59;
      next_value_of_STATE_VARIABLE_RevUnifies_0_7 = STATE_VARIABLE_RevUnifies_76_76;
      next_value_of_STATE_VARIABLE_RevNewVars_0_9 = STATE_VARIABLE_RevNewVars_78_78;
      next_value_of_STATE_VARIABLE_Renaming_0_11 = STATE_VARIABLE_Renaming_77_77;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarSet_0_3 = next_value_of_STATE_VARIABLE_VarSet_0_3;
      STATE_VARIABLE_VarTypes_0_5 = next_value_of_STATE_VARIABLE_VarTypes_0_5;
      STATE_VARIABLE_RevUnifies_0_7 = next_value_of_STATE_VARIABLE_RevUnifies_0_7;
      STATE_VARIABLE_RevNewVars_0_9 = next_value_of_STATE_VARIABLE_RevNewVars_0_9;
      STATE_VARIABLE_Renaming_0_11 = next_value_of_STATE_VARIABLE_Renaming_0_11;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__goal_util__update_instmap_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InstMap_0_8,
  MR_Word * STATE_VARIABLE_InstMap_9)
{
  {
    MR_Word GoalInfo0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word DeltaInstMap_7;
    MR_Word _GoalExpr0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    DeltaInstMap_7 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_5);
    hlds__instmap__apply_instmap_delta_3_p_0(STATE_VARIABLE_InstMap_0_8, DeltaInstMap_7, STATE_VARIABLE_InstMap_9);
  }
}

static MR_bool MR_CALL 
hlds__goal_util____Unify____attach_in_from_ground_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__goal_util____Unify____attach_in_from_ground_term_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__goal_util____Compare____attach_in_from_ground_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__goal_util____Compare____attach_in_from_ground_term_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__goal_util____Unify____goal_is_atomic_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__goal_util____Unify____goal_is_atomic_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__goal_util____Compare____goal_is_atomic_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__goal_util____Compare____goal_is_atomic_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__goal_util____Unify____is_leaf_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__goal_util____Unify____is_leaf_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__goal_util____Compare____is_leaf_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__goal_util____Compare____is_leaf_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__goal_util____Unify____maybe_transformed_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__goal_util____Unify____maybe_transformed_goal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__goal_util____Compare____maybe_transformed_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__goal_util____Compare____maybe_transformed_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module hlds.goal_util.
