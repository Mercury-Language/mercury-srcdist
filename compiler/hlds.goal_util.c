/*
** Automatically generated from `goal_util.m'
** by the Mercury compiler,
** version rotd-2023-09-15
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
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
#include "solutions.mih"
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
#include "check_hlds.inst_lookup.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
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
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0_s {
  MR_Word hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__RttiVarMaps_5;
  MR_Word hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__NonLocalTypeVars_11;
  MR_Word * hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__LambdaHeadVar__1_28;
  MR_Cont hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__cont;
  void * hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__cont_env_ptr;
  MR_bool hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__succeeded;
  MR_Word hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__TypeCtorInfo_37_37;
  MR_Word hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__Constraint_19;
  MR_Word hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__ArgTypes_21;
  MR_Word hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__TypeVar_30;
  MR_Box hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__conv0_Constraint_19;
};

struct hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0_s {
  MR_Word * hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__LambdaHeadVar__1_16;
  MR_Cont hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__cont;
  void * hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__cont_env_ptr;
  MR_bool hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__succeeded;
  MR_Word hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__SubGoal_7;
  MR_Word hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__SubGoalExpr_8;
  MR_Word hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__PredId_10;
  MR_Integer hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__ProcId_11;
};

struct hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0_s {
  MR_Tuple * hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__LambdaHeadVar__1_15;
  MR_Cont hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__cont;
  void * hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__cont_env_ptr;
  MR_bool hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__succeeded;
  MR_Word hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__SubGoal_8;
  MR_Word hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__SubGoalExpr_9;
  MR_Word hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__PredId_16;
  MR_Word hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__Args_17;
};

struct hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0_s {
  MR_Word * hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__LambdaHeadVar__1_15;
  MR_Cont hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__cont;
  void * hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__cont_env_ptr;
  MR_bool hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__succeeded;
  MR_Word hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__SubGoal_7;
  MR_Word hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__SubGoalExpr_8;
};

struct hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0_2_env_0_s {
  MR_Box * hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0_2_env_0__wrapper_arg_1;
  MR_Cont hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0_2_env_0__cont;
  void * hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0_2_env_0__cont_env_ptr;
  MR_Word hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0_2_env_0__conv0_LambdaHeadVar__1_16;
};

struct hlds__goal_util__pred_ids_args_called_from_goal_2_p_0_2_env_0_s {
  MR_Box * hlds__goal_util__pred_ids_args_called_from_goal_2_p_0_2_env_0__wrapper_arg_1;
  MR_Cont hlds__goal_util__pred_ids_args_called_from_goal_2_p_0_2_env_0__cont;
  void * hlds__goal_util__pred_ids_args_called_from_goal_2_p_0_2_env_0__cont_env_ptr;
  MR_Tuple hlds__goal_util__pred_ids_args_called_from_goal_2_p_0_2_env_0__conv0_LambdaHeadVar__1_15;
};

struct hlds__goal_util__pred_ids_called_from_goal_2_p_0_2_env_0_s {
  MR_Box * hlds__goal_util__pred_ids_called_from_goal_2_p_0_2_env_0__wrapper_arg_1;
  MR_Cont hlds__goal_util__pred_ids_called_from_goal_2_p_0_2_env_0__cont;
  void * hlds__goal_util__pred_ids_called_from_goal_2_p_0_2_env_0__cont_env_ptr;
  MR_Word hlds__goal_util__pred_ids_called_from_goal_2_p_0_2_env_0__conv0_LambdaHeadVar__1_15;
};

struct hlds__goal_util__pred_ids_called_from_goals_2_p_0_2_env_0_s {
  MR_Box * hlds__goal_util__pred_ids_called_from_goals_2_p_0_2_env_0__wrapper_arg_1;
  MR_Cont hlds__goal_util__pred_ids_called_from_goals_2_p_0_2_env_0__cont;
  void * hlds__goal_util__pred_ids_called_from_goals_2_p_0_2_env_0__cont_env_ptr;
  MR_Word hlds__goal_util__pred_ids_called_from_goals_2_p_0_2_env_0__conv0_LambdaHeadVar__1_15;
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

struct hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0_s {
  MR_Box * hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__wrapper_arg_1;
  MR_Cont hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__cont;
  void * hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__cont_env_ptr;
  MR_Word hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__conv1_LambdaHeadVar__1_28;
};


static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__goal_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_VA_PseudoTypeInfo_Struct2 hlds__goal_util____vpti_tuple_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_VA_PseudoTypeInfo_Struct2 hlds__goal_util____vpti_pred_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_0;

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_1;

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_ordinal_ordered_attach_in_from_ground_term_0[2];

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_attach_in_from_ground_term_0[2];

static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_attach_in_from_ground_term_0[2];

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_can_reorder_goals_0_0;

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_can_reorder_goals_0_1;

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_ordinal_ordered_can_reorder_goals_0[2];

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_can_reorder_goals_0[2];

static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_can_reorder_goals_0[2];

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_0;

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_1;

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_ordinal_ordered_goal_is_atomic_0[2];

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_goal_is_atomic_0[2];

static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_goal_is_atomic_0[2];

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_0;

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_1;

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_ordinal_ordered_is_leaf_0[2];

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

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_reorder_maintains_termination_0_0;

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_reorder_maintains_termination_0_1;

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_ordinal_ordered_reorder_maintains_termination_0[2];

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_reorder_maintains_termination_0[2];

static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_reorder_maintains_termination_0[2];

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0(
  MR_Word RttiVarMaps_5,
  MR_Word NonLocalTypeVars_11,
  MR_Word * LambdaHeadVar__1_28,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_Word MR_CALL 
hlds__goal_util__IntroducedFrom__func__do_extra_nonlocal_typeinfos_typeclass_infos__910__1_2_f_0(
  MR_Word RttiVarMaps_5,
  MR_Word LambdaHeadVar__1_24);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2600__1_3_p_0(
  MR_Word TransformP_4,
  MR_Word LambdaHeadVar__1_61,
  MR_Word * LambdaHeadVar__2_62);

static MR_Word MR_CALL 
hlds__goal_util__IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap__2419__1_1_f_0(
  MR_Word LambdaHeadVar__1_95);

static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_call_foreign_proc__2107__1_2_p_0(
  MR_Word Purity_28,
  MR_Word PredPurity_49);

static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_plain_call__2073__1_2_p_0(
  MR_Word Purity_23,
  MR_Word PredPurity_40);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1775__1_2_p_0(
  MR_Word LambdaHeadVar__1_65,
  MR_Word * LambdaHeadVar__2_66);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1759__1_3_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_56,
  MR_Word LambdaHeadVar__1_58,
  MR_Word * LambdaHeadVar__2_59);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0(
  MR_Word Goal_3,
  MR_Word * LambdaHeadVar__1_16,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0(
  MR_Word Goal_3,
  MR_Tuple * LambdaHeadVar__1_15,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0(
  MR_Word Goal_3,
  MR_Word * LambdaHeadVar__1_15,
  MR_Cont cont,
  void * cont_env_ptr);

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
hlds__goal_util__generate_call_foreign_proc_17_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_util__generate_call_foreign_proc_17_p_0_3(
  MR_Box closure_arg);

static MR_Box MR_CALL 
hlds__goal_util__generate_call_foreign_proc_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__goal_util__generate_call_foreign_proc_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__goal_util__generate_plain_call_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_util__generate_plain_call_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__goal_util__flatten_disj_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__goal_util__switch_to_disjunction_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__goal_util__case_to_disjunct_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__goal_util__case_to_disjunct_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__goal_util__case_to_disjunct_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
hlds__goal_util__pred_ids_args_called_from_goal_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__pred_ids_args_called_from_goal_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
hlds__goal_util__pred_ids_called_from_goal_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__pred_ids_called_from_goal_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
hlds__goal_util__pred_ids_called_from_goals_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__pred_ids_called_from_goals_2_p_0_2(
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
  MR_Word STATE_VARIABLE_ReferredToProcs_0_87,
  MR_Word * STATE_VARIABLE_ReferredToProcs_88);

static void MR_CALL 
hlds__goal_util__cons_id_proc_refs_acc_3_p_0(
  MR_Word ConsId_4,
  MR_Word STATE_VARIABLE_ReferredToProcs_0_33,
  MR_Word * STATE_VARIABLE_ReferredToProcs_34);

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
hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_Box MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0_1(
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
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Set_100);

static void MR_CALL 
hlds__goal_util__rhs_goal_vars_acc_3_p_0(
  MR_Word tscc_proc_2_input_1_RHS_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Set_0_18,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Set_100);

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
hlds__goal_util__create_renaming_2_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMapDelta_2,
  MR_Word STATE_VARIABLE_VarTable_0_3,
  MR_Word * STATE_VARIABLE_VarTable_4,
  MR_Word STATE_VARIABLE_RevUnifies_0_5,
  MR_Word * STATE_VARIABLE_RevUnifies_6,
  MR_Word STATE_VARIABLE_RevNewVars_0_7,
  MR_Word * STATE_VARIABLE_RevNewVars_8,
  MR_Word STATE_VARIABLE_Renaming_0_9,
  MR_Word * STATE_VARIABLE_Renaming_10);

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
hlds__goal_util____Unify____can_reorder_goals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__goal_util____Compare____can_reorder_goals_0_0_10001(
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

static MR_bool MR_CALL 
hlds__goal_util____Unify____reorder_maintains_termination_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__goal_util____Compare____reorder_maintains_termination_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__goal_util_scalar_common_1[6][2];

static /* final */ const MR_Box hlds__goal_util_scalar_common_2[1][4];

static /* final */ const MR_Box hlds__goal_util_scalar_common_3[9][5];

static /* final */ const MR_Box hlds__goal_util_scalar_common_4[28][3];

static /* final */ const MR_Box hlds__goal_util_scalar_common_5[11][6];

static /* final */ const MR_Box hlds__goal_util_scalar_common_6[1][7];

static /* final */ const MR_Box hlds__goal_util_scalar_common_7[1][12];




static /* final */ const MR_Box hlds__goal_util_scalar_common_1[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__goal_util_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__goal_util_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__goal_util_scalar_common_1[2]))
  },
};

static /* final */ const MR_Box hlds__goal_util_scalar_common_3[9][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__goal_util____vpti_tuple_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
};

static /* final */ const MR_Box hlds__goal_util_scalar_common_4[28][3] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[0])),
    ((MR_Box) (hlds__goal_util__goal_vars_acc_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[0])),
    ((MR_Box) (hlds__goal_util__goal_vars_acc_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[0])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[0])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[0])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[0])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[0])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[0])),
    ((MR_Box) (hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[3])),
    ((MR_Box) (hlds__goal_util__clause_list_size_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[4])),
    ((MR_Box) (hlds__goal_util__goals_proc_refs_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[4])),
    ((MR_Box) (hlds__goal_util__goal_proc_refs_acc_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[4])),
    ((MR_Box) (hlds__goal_util__goal_proc_refs_acc_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[4])),
    ((MR_Box) (hlds__goal_util__goal_proc_refs_acc_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[5])),
    ((MR_Box) (hlds__goal_util__goal_proc_refs_acc_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_6[0])),
    ((MR_Box) (hlds__goal_util__case_to_disjunct_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[4])),
    ((MR_Box) (hlds__goal_util__case_to_disjunct_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[7])),
    ((MR_Box) (hlds__goal_util__flatten_disj_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[0])),
    ((MR_Box) (hlds__goal_util__generate_plain_call_13_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[0])),
    ((MR_Box) (hlds__goal_util__generate_call_foreign_proc_17_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[0])),
    ((MR_Box) (hlds__goal_util__generate_call_foreign_proc_17_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[0])),
    ((MR_Box) (hlds__goal_util__generate_call_foreign_proc_17_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[6])),
    ((MR_Box) (hlds__goal_util__maybe_strip_equality_pretest_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[6])),
    ((MR_Box) (hlds__goal_util__maybe_strip_equality_pretest_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[6])),
    ((MR_Box) (hlds__goal_util__maybe_strip_equality_pretest_1_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[7])),
    ((MR_Box) (hlds__goal_util__maybe_strip_equality_pretest_1_f_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_3[8])),
    ((MR_Box) (hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  26 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[8])),
    ((MR_Box) (hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  27 */
  {
    ((MR_Box) (&hlds__goal_util_scalar_common_5[7])),
    ((MR_Box) (hlds__goal_util__flatten_disj_acc_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__goal_util_scalar_common_5[11][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__goal_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__goal_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__goal_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__goal_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__goal_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__goal_util__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__goal_util__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__goal_util____vpti_pred_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__goal_util____vpti_pred_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
};

static /* final */ const MR_Box hlds__goal_util_scalar_common_6[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0)),
    ((MR_Box) (&hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0))
  },
};

static /* final */ const MR_Box hlds__goal_util_scalar_common_7[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__goal_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__goal_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_VA_PseudoTypeInfo_Struct2 hlds__goal_util____vpti_tuple_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__goal_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_util__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
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
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_1 = {
  (MR_String) "do_not_attach_in_from_ground_term",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_ordinal_ordered_attach_in_from_ground_term_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_util____Unify____attach_in_from_ground_term_0_0_10001)),
  ((MR_Box) (hlds__goal_util____Compare____attach_in_from_ground_term_0_0_10001)),
  (MR_String) "hlds.goal_util",
  (MR_String) "attach_in_from_ground_term",
  { hlds__goal_util__hlds__goal_util__enum_name_ordered_attach_in_from_ground_term_0 },
  { hlds__goal_util__hlds__goal_util__enum_ordinal_ordered_attach_in_from_ground_term_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__goal_util__hlds__goal_util__functor_number_map_attach_in_from_ground_term_0,

};

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_can_reorder_goals_0_0 = {
  (MR_String) "cannot_reorder_goals",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_can_reorder_goals_0_1 = {
  (MR_String) "can_reorder_goals",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_ordinal_ordered_can_reorder_goals_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_can_reorder_goals_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_can_reorder_goals_0_1
};

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_can_reorder_goals_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_can_reorder_goals_0_1,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_can_reorder_goals_0_0
};

static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_can_reorder_goals_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__goal_util__hlds__goal_util__type_ctor_info_can_reorder_goals_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_util____Unify____can_reorder_goals_0_0_10001)),
  ((MR_Box) (hlds__goal_util____Compare____can_reorder_goals_0_0_10001)),
  (MR_String) "hlds.goal_util",
  (MR_String) "can_reorder_goals",
  { hlds__goal_util__hlds__goal_util__enum_name_ordered_can_reorder_goals_0 },
  { hlds__goal_util__hlds__goal_util__enum_ordinal_ordered_can_reorder_goals_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__goal_util__hlds__goal_util__functor_number_map_can_reorder_goals_0,

};

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_0 = {
  (MR_String) "goal_is_atomic",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_goal_is_atomic_0_1 = {
  (MR_String) "goal_is_nonatomic",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_ordinal_ordered_goal_is_atomic_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_util____Unify____goal_is_atomic_0_0_10001)),
  ((MR_Box) (hlds__goal_util____Compare____goal_is_atomic_0_0_10001)),
  (MR_String) "hlds.goal_util",
  (MR_String) "goal_is_atomic",
  { hlds__goal_util__hlds__goal_util__enum_name_ordered_goal_is_atomic_0 },
  { hlds__goal_util__hlds__goal_util__enum_ordinal_ordered_goal_is_atomic_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__goal_util__hlds__goal_util__functor_number_map_goal_is_atomic_0,

};

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_0 = {
  (MR_String) "is_leaf",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_is_leaf_0_1 = {
  (MR_String) "is_not_leaf",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_ordinal_ordered_is_leaf_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_util____Unify____is_leaf_0_0_10001)),
  ((MR_Box) (hlds__goal_util____Compare____is_leaf_0_0_10001)),
  (MR_String) "hlds.goal_util",
  (MR_String) "is_leaf",
  { hlds__goal_util__hlds__goal_util__enum_name_ordered_is_leaf_0 },
  { hlds__goal_util__hlds__goal_util__enum_ordinal_ordered_is_leaf_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__goal_util__hlds__goal_util__functor_number_map_is_leaf_0,

};

static const MR_PseudoTypeInfo hlds__goal_util__hlds__goal_util__field_types_maybe_transformed_goal_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) };

static const MR_DuFunctorDesc hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__goal_util__hlds__goal_util__field_types_maybe_transformed_goal_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__goal_util__hlds__goal_util__field_types_maybe_transformed_goal_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_1 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__goal_util__hlds__goal_util__field_types_maybe_transformed_goal_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_2 = {
  (MR_String) "goal_not_found",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_0[1] = { &hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_2 };

static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_1[1] = { &hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_0 };

static const MR_DuFunctorDescPtr hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_2[1] = { &hlds__goal_util__hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_1 };

static const MR_DuPtagLayout hlds__goal_util__hlds__goal_util__du_ptag_ordered_maybe_transformed_goal_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__goal_util__hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__goal_util____Unify____maybe_transformed_goal_0_0_10001)),
  ((MR_Box) (hlds__goal_util____Compare____maybe_transformed_goal_0_0_10001)),
  (MR_String) "hlds.goal_util",
  (MR_String) "maybe_transformed_goal",
  { hlds__goal_util__hlds__goal_util__du_name_ordered_maybe_transformed_goal_0 },
  { hlds__goal_util__hlds__goal_util__du_ptag_ordered_maybe_transformed_goal_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  hlds__goal_util__hlds__goal_util__functor_number_map_maybe_transformed_goal_0,

};

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_reorder_maintains_termination_0_0 = {
  (MR_String) "reorder_maintains_termination",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__goal_util__hlds__goal_util__enum_functor_desc_reorder_maintains_termination_0_1 = {
  (MR_String) "reorder_does_not_maintain_termination",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_ordinal_ordered_reorder_maintains_termination_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_reorder_maintains_termination_0_0,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_reorder_maintains_termination_0_1
};

static const MR_EnumFunctorDescPtr hlds__goal_util__hlds__goal_util__enum_name_ordered_reorder_maintains_termination_0[2] = {
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_reorder_maintains_termination_0_1,
  &hlds__goal_util__hlds__goal_util__enum_functor_desc_reorder_maintains_termination_0_0
};

static const MR_Integer hlds__goal_util__hlds__goal_util__functor_number_map_reorder_maintains_termination_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__goal_util__hlds__goal_util__type_ctor_info_reorder_maintains_termination_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_util____Unify____reorder_maintains_termination_0_0_10001)),
  ((MR_Box) (hlds__goal_util____Compare____reorder_maintains_termination_0_0_10001)),
  (MR_String) "hlds.goal_util",
  (MR_String) "reorder_maintains_termination",
  { hlds__goal_util__hlds__goal_util__enum_name_ordered_reorder_maintains_termination_0 },
  { hlds__goal_util__hlds__goal_util__enum_ordinal_ordered_reorder_maintains_termination_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__goal_util__hlds__goal_util__functor_number_map_reorder_maintains_termination_0,

};

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0_s * env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__Constraint_19 = ((MR_Word) ((env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__conv0_Constraint_19));
  hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_1(env_ptr);
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_3(
  void * env_ptr_arg)
{
  struct hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0_s * env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__TypeCtorInfo_37_37 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
  (env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__TypeCtorInfo_37_37, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__NonLocalTypeVars_11, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__TypeVar_30);
  if ((env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__succeeded)
  {
    hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_p_0((env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__RttiVarMaps_5, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__Constraint_19, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__LambdaHeadVar__1_28);
    ((env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__cont)((env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0_s * env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word _ClassName_20 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__Constraint_19, (MR_Integer) 0))));

    (env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__ArgTypes_21 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__Constraint_19, (MR_Integer) 1))));
    parse_tree__prog_type__type_list_contains_var_2_p_0((env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__ArgTypes_21, &(env_ptr)->hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__TypeVar_30, hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_3, env_ptr);
  }
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0(
  MR_Word RttiVarMaps_5,
  MR_Word NonLocalTypeVars_11,
  MR_Word * LambdaHeadVar__1_28,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0_s env;

  (env).hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__RttiVarMaps_5 = RttiVarMaps_5;
  (env).hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__NonLocalTypeVars_11 = NonLocalTypeVars_11;
  (env).hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__LambdaHeadVar__1_28 = LambdaHeadVar__1_28;
  (env).hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__cont = cont;
  (env).hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Word Constraints_18;

    hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0((env).hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__RttiVarMaps_5, &Constraints_18);
    mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &(env).hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_env_0__conv0_Constraint_19, Constraints_18, hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0_2, &env);
  }
}

static MR_Word MR_CALL 
hlds__goal_util__IntroducedFrom__func__do_extra_nonlocal_typeinfos_typeclass_infos__910__1_2_f_0(
  MR_Word RttiVarMaps_5,
  MR_Word LambdaHeadVar__1_24)
{
  MR_Word LambdaHeadVar__2_25;
  MR_Word Locn_15;

  hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(RttiVarMaps_5, LambdaHeadVar__1_24, &Locn_15);
  hlds__hlds_rtti__type_info_locn_var_2_p_0(Locn_15, &LambdaHeadVar__2_25);
  return LambdaHeadVar__2_25;
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2600__1_3_p_0(
  MR_Word TransformP_4,
  MR_Word LambdaHeadVar__1_61,
  MR_Word * LambdaHeadVar__2_62)
{
  MR_Word GoalI0_43 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_61, (MR_Integer) 2))));
  MR_Word GoalI_44;
  MR_Word Var_71;
  MR_Word Var_72;

  hlds__goal_util__transform_all_goals_3_p_0(TransformP_4, GoalI0_43, &GoalI_44);
  Var_71 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_61, (MR_Integer) 0))));
  Var_72 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_61, (MR_Integer) 1))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_62 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_71));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_72));
    MR_hl_field(0, base, 2) = ((MR_Box) (GoalI_44));
  }
}

static MR_Word MR_CALL 
hlds__goal_util__IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap__2419__1_1_f_0(
  MR_Word LambdaHeadVar__1_95)
{
  MR_Word LambdaHeadVar__2_96;
  MR_Word Var_97 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_95, (MR_Integer) 1))));

  LambdaHeadVar__2_96 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_97);
  return LambdaHeadVar__2_96;
}

static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_call_foreign_proc__2107__1_2_p_0(
  MR_Word Purity_28,
  MR_Word PredPurity_49)
{
  MR_bool succeeded = (Purity_28 == PredPurity_49);

  return succeeded;
}

static MR_bool MR_CALL 
hlds__goal_util__IntroducedFrom__pred__generate_plain_call__2073__1_2_p_0(
  MR_Word Purity_23,
  MR_Word PredPurity_40)
{
  MR_bool succeeded = (Purity_23 == PredPurity_40);

  return succeeded;
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1775__1_2_p_0(
  MR_Word LambdaHeadVar__1_65,
  MR_Word * LambdaHeadVar__2_66)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_66 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (LambdaHeadVar__1_65));
    MR_hl_field(0, base, 1) = ((MR_Box) (LambdaHeadVar__1_65));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 3) = ((MR_Box) (LambdaHeadVar__1_65));
  }
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1759__1_3_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_56,
  MR_Word LambdaHeadVar__1_58,
  MR_Word * LambdaHeadVar__2_59)
{
  MR_Word IsDummy_87;

  IsDummy_87 = check_hlds__type_util__is_type_a_dummy_2_f_0(STATE_VARIABLE_ModuleInfo_0_56, LambdaHeadVar__1_58);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_59 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, base, 1) = ((MR_Box) (LambdaHeadVar__1_58));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_87));
  }
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0_s * env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_9;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Unsigned packed_word_0;

    (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__SubGoalExpr_8 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 0))));
    Var_9 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 1))));
    (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__SubGoalExpr_8)) == (MR_Integer) 2);
    if ((env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__succeeded)
    {
      (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__PredId_10 = ((MR_Word) ((MR_hl_field(2, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__SubGoalExpr_8, (MR_Integer) 0))));
      (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__ProcId_11 = ((MR_Integer) ((MR_hl_field(2, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__SubGoalExpr_8, (MR_Integer) 1))));
      Var_12 = ((MR_Word) ((MR_hl_field(2, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__SubGoalExpr_8, (MR_Integer) 2))));
      packed_word_0 = (MR_Unsigned) ((MR_hl_field(2, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__SubGoalExpr_8, (MR_Integer) 3)));
      Var_13 = ((MR_Unsigned) ((MR_hl_field(2, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__SubGoalExpr_8, (MR_Integer) 3))) & (MR_Integer) 1);
      Var_14 = ((MR_Word) ((MR_hl_field(2, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__SubGoalExpr_8, (MR_Integer) 4))));
      Var_15 = ((MR_Word) ((MR_hl_field(2, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__SubGoalExpr_8, (MR_Integer) 5))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *((env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__LambdaHeadVar__1_16) = base;
        MR_hl_field(0, base, 0) = ((MR_Box) ((env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__PredId_10));
        MR_hl_field(0, base, 1) = ((MR_Box) ((env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__ProcId_11));
      }
      ((env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__cont)((env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0(
  MR_Word Goal_3,
  MR_Word * LambdaHeadVar__1_16,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0_s env;

  (env).hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__LambdaHeadVar__1_16 = LambdaHeadVar__1_16;
  (env).hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__cont = cont;
  (env).hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
  hlds__goal_util__goal_contains_goal_2_p_0(Goal_3, &(env).hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_env_0__SubGoal_7, hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0_1, &env);
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0_s * env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_10;
    MR_Integer Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Unsigned packed_word_0;

    (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__SubGoalExpr_9 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__SubGoal_8, (MR_Integer) 0))));
    Var_10 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__SubGoal_8, (MR_Integer) 1))));
    (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__SubGoalExpr_9)) == (MR_Integer) 2);
    if ((env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__succeeded)
    {
      (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__PredId_16 = ((MR_Word) ((MR_hl_field(2, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__SubGoalExpr_9, (MR_Integer) 0))));
      Var_11 = ((MR_Integer) ((MR_hl_field(2, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__SubGoalExpr_9, (MR_Integer) 1))));
      (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__Args_17 = ((MR_Word) ((MR_hl_field(2, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__SubGoalExpr_9, (MR_Integer) 2))));
      packed_word_0 = (MR_Unsigned) ((MR_hl_field(2, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__SubGoalExpr_9, (MR_Integer) 3)));
      Var_12 = ((MR_Unsigned) ((MR_hl_field(2, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__SubGoalExpr_9, (MR_Integer) 3))) & (MR_Integer) 1);
      Var_13 = ((MR_Word) ((MR_hl_field(2, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__SubGoalExpr_9, (MR_Integer) 4))));
      Var_14 = ((MR_Word) ((MR_hl_field(2, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__SubGoalExpr_9, (MR_Integer) 5))));
      {
        MR_Tuple base;
        base = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        *((env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__LambdaHeadVar__1_15) = base;
        MR_hl_field(0, base, 0) = ((MR_Box) ((env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__PredId_16));
        MR_hl_field(0, base, 1) = ((MR_Box) ((env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__Args_17));
      }
      ((env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__cont)((env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0(
  MR_Word Goal_3,
  MR_Tuple * LambdaHeadVar__1_15,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0_s env;

  (env).hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__LambdaHeadVar__1_15 = LambdaHeadVar__1_15;
  (env).hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__cont = cont;
  (env).hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
  hlds__goal_util__goal_contains_goal_2_p_0(Goal_3, &(env).hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_env_0__SubGoal_8, hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0_1, &env);
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0_s * env_ptr = (struct hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_9;
    MR_Integer Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Unsigned packed_word_0;

    (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__SubGoalExpr_8 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 0))));
    Var_9 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__SubGoal_7, (MR_Integer) 1))));
    (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__SubGoalExpr_8)) == (MR_Integer) 2);
    if ((env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__succeeded)
    {
      *((env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__LambdaHeadVar__1_15) = ((MR_Word) ((MR_hl_field(2, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__SubGoalExpr_8, (MR_Integer) 0))));
      Var_10 = ((MR_Integer) ((MR_hl_field(2, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__SubGoalExpr_8, (MR_Integer) 1))));
      Var_11 = ((MR_Word) ((MR_hl_field(2, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__SubGoalExpr_8, (MR_Integer) 2))));
      packed_word_0 = (MR_Unsigned) ((MR_hl_field(2, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__SubGoalExpr_8, (MR_Integer) 3)));
      Var_12 = ((MR_Unsigned) ((MR_hl_field(2, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__SubGoalExpr_8, (MR_Integer) 3))) & (MR_Integer) 1);
      Var_13 = ((MR_Word) ((MR_hl_field(2, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__SubGoalExpr_8, (MR_Integer) 4))));
      Var_14 = ((MR_Word) ((MR_hl_field(2, (env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__SubGoalExpr_8, (MR_Integer) 5))));
      ((env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__cont)((env_ptr)->hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0(
  MR_Word Goal_3,
  MR_Word * LambdaHeadVar__1_15,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0_s env;

  (env).hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__LambdaHeadVar__1_15 = LambdaHeadVar__1_15;
  (env).hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__cont = cont;
  (env).hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
  hlds__goal_util__goal_contains_goal_2_p_0(Goal_3, &(env).hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_env_0__SubGoal_7, hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0_1, &env);
}

void MR_CALL 
hlds__goal_util____Compare____reorder_maintains_termination_0_0(
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

MR_bool MR_CALL 
hlds__goal_util____Unify____reorder_maintains_termination_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__goal_util____Compare____maybe_transformed_goal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
          MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

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
          MR_String Var_20 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_String ArgY1_12 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_20, ArgY1_12);
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
hlds__goal_util____Unify____maybe_transformed_goal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
hlds__goal_util____Compare____is_leaf_0_0(
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

MR_bool MR_CALL 
hlds__goal_util____Unify____is_leaf_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__goal_util____Compare____goal_is_atomic_0_0(
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

MR_bool MR_CALL 
hlds__goal_util____Unify____goal_is_atomic_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__goal_util____Compare____can_reorder_goals_0_0(
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

MR_bool MR_CALL 
hlds__goal_util____Unify____can_reorder_goals_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__goal_util____Compare____attach_in_from_ground_term_0_0(
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

MR_bool MR_CALL 
hlds__goal_util____Unify____attach_in_from_ground_term_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_Word MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_case_1_f_0(
  MR_Word Case0_3)
{
  MR_Word Case_4;
  MR_Word MainConsId_5 = ((MR_Word) ((MR_hl_field(0, Case0_3, (MR_Integer) 0))));
  MR_Word OtherConsIds_6 = ((MR_Word) ((MR_hl_field(0, Case0_3, (MR_Integer) 1))));
  MR_Word Goal0_7 = ((MR_Word) ((MR_hl_field(0, Case0_3, (MR_Integer) 2))));
  MR_Word Goal_8;

  Goal_8 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(Goal0_7);
  {
    Case_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Case_4, 0) = ((MR_Box) (MainConsId_5));
    MR_hl_field(0, Case_4, 1) = ((MR_Box) (OtherConsIds_6));
    MR_hl_field(0, Case_4, 2) = ((MR_Box) (Goal_8));
  }
  return Case_4;
}

static void MR_CALL 
hlds__goal_util__flatten_disj_acc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_FlatDisjuncts_9;

  hlds__goal_util__flatten_disj_acc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FlatDisjuncts_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FlatDisjuncts_9));
}

static void MR_CALL 
hlds__goal_util__flatten_disj_acc_3_p_0(
  MR_Word Disjunct_4,
  MR_Word STATE_VARIABLE_FlatDisjuncts_0_8,
  MR_Word * STATE_VARIABLE_FlatDisjuncts_9)
{
  MR_bool succeeded;
  MR_Word SubDisjs_6;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, Disjunct_4, (MR_Integer) 0))));

  succeeded = ((((MR_tag((MR_Word) Var_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
  if (succeeded)
  {
    SubDisjs_6 = ((MR_Word) ((MR_hl_field(3, Var_10, (MR_Integer) 1))));
    {
      MR_Box conv1_STATE_VARIABLE_FlatDisjuncts_9;

      mercury__list__foldr_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_util_scalar_common_1[3]), (MR_Word) (&hlds__goal_util_scalar_common_4[27]), SubDisjs_6, ((MR_Box) (STATE_VARIABLE_FlatDisjuncts_0_8)), &conv1_STATE_VARIABLE_FlatDisjuncts_9);
      *STATE_VARIABLE_FlatDisjuncts_9 = ((MR_Word) (conv1_STATE_VARIABLE_FlatDisjuncts_9));
    }
  }
  else
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_FlatDisjuncts_9 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Disjunct_4));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_FlatDisjuncts_0_8));
    }
}

static void MR_CALL 
hlds__goal_util__case_proc_refs_acc_3_p_0(
  MR_Word Case_4,
  MR_Word STATE_VARIABLE_ReferredToProcs_0_9,
  MR_Word * STATE_VARIABLE_ReferredToProcs_10)
{
  MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(0, Case_4, (MR_Integer) 2))));

  hlds__goal_util__goal_proc_refs_acc_3_p_0(Goal_8, STATE_VARIABLE_ReferredToProcs_0_9, STATE_VARIABLE_ReferredToProcs_10);
}

static void MR_CALL 
hlds__goal_util__clause_size_increment_3_p_0(
  MR_Word Clause_4,
  MR_Integer Size0_5,
  MR_Integer * Size_6)
{
  MR_bool succeeded;
  MR_Integer ClauseSize_7;
  MR_Word Var_8;
  MR_Word GoalExpr_9;

  Var_8 = hlds__hlds_clauses__clause_body_1_f_0(Clause_4);
  GoalExpr_9 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 0))));
  switch (MR_tag((MR_Word) GoalExpr_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal_47 = (MR_Word) ((MR_Word) (GoalExpr_9));
        MR_Integer Size1_78;

        hlds__goal_util__goal_size_2_p_0(SubGoal_47, &Size1_78);
        ClauseSize_7 = (MR_Integer) ((MR_Unsigned) Size1_78 + (MR_Unsigned) 1);
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      ClauseSize_7 = (MR_Integer) 1;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          ClauseSize_7 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_34 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));
            MR_Integer InnerSize_36;

            hlds__goal_util__goals_size_2_p_0(Goals_35, &InnerSize_36);
            switch (ConjType_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                ClauseSize_7 = (MR_Integer) ((MR_Unsigned) InnerSize_36 + (MR_Unsigned) 1);
                break;
              case (MR_Integer) 0:
                ClauseSize_7 = InnerSize_36;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer Size1_37;
            MR_Word Goals_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));

            hlds__goal_util__goals_size_2_p_0(Goals_75, &Size1_37);
            ClauseSize_7 = (MR_Integer) ((MR_Unsigned) Size1_37 + (MR_Unsigned) 1);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Cases_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 3))));
            MR_Integer Size1_76;

            hlds__goal_util__cases_size_2_p_0(Cases_40, &Size1_76);
            ClauseSize_7 = (MR_Integer) ((MR_Unsigned) Size1_76 + (MR_Unsigned) 1);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));
            MR_Word SubGoal_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));
            MR_Word Var_69;

            succeeded = ((((MR_tag((MR_Word) Reason_48)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_48, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_69 = ((MR_Unsigned) ((MR_hl_field(3, Reason_48, (MR_Integer) 2))) & (MR_Integer) 3);
              succeeded = (Var_69 == (MR_Integer) 1);
            }
            if (succeeded)
              ClauseSize_7 = (MR_Integer) 1;
            else
            {
              MR_Integer Size1_79;

              hlds__goal_util__goal_size_2_p_0(SubGoal_80, &Size1_79);
              ClauseSize_7 = (MR_Integer) ((MR_Unsigned) Size1_79 + (MR_Unsigned) 1);
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Cond_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));
            MR_Word Then_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 3))));
            MR_Word Else_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 4))));
            MR_Integer Size2_45;
            MR_Integer Size3_46;
            MR_Integer Var_65;
            MR_Integer Var_66;
            MR_Integer Size1_77;

            hlds__goal_util__goal_size_2_p_0(Cond_42, &Size1_77);
            hlds__goal_util__goal_size_2_p_0(Then_43, &Size2_45);
            hlds__goal_util__goal_size_2_p_0(Else_44, &Size3_46);
            Var_66 = (MR_Integer) ((MR_Unsigned) Size1_77 + (MR_Unsigned) Size2_45);
            Var_65 = (MR_Integer) ((MR_Unsigned) Var_66 + (MR_Unsigned) Size3_46);
            ClauseSize_7 = (MR_Integer) ((MR_Unsigned) Var_65 + (MR_Unsigned) 1);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ShortHand_50)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word GoalA_60 = ((MR_Word) ((MR_hl_field(0, ShortHand_50, (MR_Integer) 0))));
                  MR_Word GoalB_61 = ((MR_Word) ((MR_hl_field(0, ShortHand_50, (MR_Integer) 1))));
                  MR_Integer Var_73;
                  MR_Integer Size1_84;
                  MR_Integer Size2_85;

                  hlds__goal_util__goal_size_2_p_0(GoalA_60, &Size1_84);
                  hlds__goal_util__goal_size_2_p_0(GoalB_61, &Size2_85);
                  Var_73 = (MR_Integer) ((MR_Unsigned) Size1_84 + (MR_Unsigned) Size2_85);
                  ClauseSize_7 = (MR_Integer) ((MR_Unsigned) Var_73 + (MR_Unsigned) 1);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word MainGoal_55 = ((MR_Word) ((MR_hl_field(1, ShortHand_50, (MR_Integer) 4))));
                  MR_Word OrElseGoals_56 = ((MR_Word) ((MR_hl_field(1, ShortHand_50, (MR_Integer) 5))));
                  MR_Integer Var_71;
                  MR_Integer Size1_81;
                  MR_Integer Size2_82;

                  hlds__goal_util__goal_size_2_p_0(MainGoal_55, &Size1_81);
                  hlds__goal_util__goals_size_2_p_0(OrElseGoals_56, &Size2_82);
                  Var_71 = (MR_Integer) ((MR_Unsigned) Size1_81 + (MR_Unsigned) Size2_82);
                  ClauseSize_7 = (MR_Integer) ((MR_Unsigned) Var_71 + (MR_Unsigned) 1);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word SubGoal_83 = ((MR_Word) ((MR_hl_field(2, ShortHand_50, (MR_Integer) 2))));

                  hlds__goal_util__goal_size_2_p_0(SubGoal_83, &ClauseSize_7);
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

static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_62;

  hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2600__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_62);
  *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_62));
}

static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Goal_6;

  hlds__goal_util__transform_all_goals_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Goal_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_Goal_6));
}

static void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Goal_6;

  hlds__goal_util__transform_all_goals_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Goal_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Goal_6));
}

void MR_CALL 
hlds__goal_util__transform_all_goals_3_p_0(
  MR_Word TransformP_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6)
{
  MR_Word GoalExpr0_7 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 0))));
  MR_Word GoalInfo0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 1))));
  MR_Word GoalExpr_32;
  MR_Word Goal1_57;
  void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box *);
  MR_Box conv4_Goal_6;

  switch (MR_tag((MR_Word) GoalExpr0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_46 = (MR_Word) ((MR_Word) (GoalExpr0_7));
        MR_Word SubGoal_47;

        hlds__goal_util__transform_all_goals_3_p_0(TransformP_4, SubGoal0_46, &SubGoal_47);
        GoalExpr_32 = (MR_Word) ((MR_Word) (SubGoal_47));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      GoalExpr_32 = GoalExpr0_7;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          GoalExpr_32 = GoalExpr0_7;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_33 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Conjs0_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))));
            MR_Word Conjs_35;
            MR_Word Var_58;

            {
              Var_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_58, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[9]));
              MR_hl_field(0, Var_58, 1) = ((MR_Box) (hlds__goal_util__transform_all_goals_3_p_0_1));
              MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_58, 3) = ((MR_Box) (TransformP_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_58, Conjs0_34, &Conjs_35);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_32, 1) = (MR_Box) ((MR_Unsigned) (ConjType_33));
              MR_hl_field(3, GoalExpr_32, 2) = ((MR_Box) (Conjs_35));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjs0_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word Disjs_37;
            MR_Word Var_59;

            {
              Var_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_59, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[9]));
              MR_hl_field(0, Var_59, 1) = ((MR_Box) (hlds__goal_util__transform_all_goals_3_p_0_2));
              MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_59, 3) = ((MR_Box) (TransformP_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_59, Disjs0_36, &Disjs_37);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (Disjs_37));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word CanFail_39 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 3))));
            MR_Word Cases_45;
            MR_Word Var_60;

            {
              Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_60, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[10]));
              MR_hl_field(0, Var_60, 1) = ((MR_Box) (hlds__goal_util__transform_all_goals_3_p_0_3));
              MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_60, 3) = ((MR_Box) (TransformP_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Var_60, Cases0_40, &Cases_45);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (Var_38));
              MR_hl_field(3, GoalExpr_32, 2) = (MR_Box) ((MR_Unsigned) (CanFail_39));
              MR_hl_field(3, GoalExpr_32, 3) = ((MR_Box) (Cases_45));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word SubGoal0_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))));
            MR_Word SubGoal_68;

            hlds__goal_util__transform_all_goals_3_p_0(TransformP_4, SubGoal0_67, &SubGoal_68);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (Reason_48));
              MR_hl_field(3, GoalExpr_32, 2) = ((MR_Box) (SubGoal_68));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ExistVars_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word Cond0_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))));
            MR_Word Then0_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 3))));
            MR_Word Else0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 4))));
            MR_Word Cond_53;
            MR_Word Then_54;
            MR_Word Else_55;

            hlds__goal_util__transform_all_goals_3_p_0(TransformP_4, Cond0_50, &Cond_53);
            hlds__goal_util__transform_all_goals_3_p_0(TransformP_4, Then0_51, &Then_54);
            hlds__goal_util__transform_all_goals_3_p_0(TransformP_4, Else0_52, &Else_55);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (ExistVars_49));
              MR_hl_field(3, GoalExpr_32, 2) = ((MR_Box) (Cond_53));
              MR_hl_field(3, GoalExpr_32, 3) = ((MR_Box) (Then_54));
              MR_hl_field(3, GoalExpr_32, 4) = ((MR_Box) (Else_55));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_util.transform_all_goals\'/3", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
  {
    Goal1_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal1_57, 0) = ((MR_Box) (GoalExpr_32));
    MR_hl_field(0, Goal1_57, 1) = ((MR_Box) (GoalInfo0_8));
  }
  func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, TransformP_4, (MR_Integer) 1))));
  func_3(((MR_Box) (TransformP_4)), ((MR_Box) (Goal1_57)), &conv4_Goal_6);
  *Goal_6 = ((MR_Word) (conv4_Goal_6));
}

static void MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__3_3;

  hlds__instmap__apply_instmap_delta_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__3_3));
}

static MR_Box MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_LambdaHeadVar__2_96;

  conv3_LambdaHeadVar__2_96 = hlds__goal_util__IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap__2419__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_96));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(
  MR_Word TransformP_6,
  MR_Word TargetGoalPath_7,
  MR_Word Instmap0_8,
  MR_Word Goal0_9,
  MR_Word * MaybeGoal_10)
{
  MR_bool succeeded;

  if ((TargetGoalPath_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MaybeGoal0_11;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, TransformP_6, (MR_Integer) 1))));
    MR_Box conv1_MaybeGoal0_11;

    func_0(((MR_Box) (TransformP_6)), ((MR_Box) (Instmap0_8)), ((MR_Box) (Goal0_9)), &conv1_MaybeGoal0_11);
    MaybeGoal0_11 = ((MR_Word) (conv1_MaybeGoal0_11));
    if (((MR_tag((MR_Word) MaybeGoal0_11)) == (MR_Integer) 1))
    {
      MR_String Error_168 = ((MR_String) ((MR_hl_field(1, MaybeGoal0_11, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_10 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) (Error_168));
      }
    }
    else
    {
      MR_Word Goal_167 = ((MR_Word) ((MR_hl_field(0, MaybeGoal0_11, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_167));
      }
    }
  }
  else
  {
    MR_Word FirstStep_12 = ((MR_Word) ((MR_hl_field(1, TargetGoalPath_7, (MR_Integer) 0))));
    MR_Word LaterPath_13 = ((MR_Word) ((MR_hl_field(1, TargetGoalPath_7, (MR_Integer) 1))));
    MR_Word GoalExpr0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 0))));
    MR_Word GoalInfo0_15 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_71 = (MR_Word) ((MR_Word) (GoalExpr0_14));

          succeeded = (FirstStep_12 == (MR_Word) ((MR_Unsigned) 12U));
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
                  MR_Word SubGoal_73 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_72, (MR_Integer) 0))));
                  MR_Word Var_102;
                  MR_Word GoalExpr_122 = (MR_Word) ((MR_Word) (SubGoal_73));

                  {
                    Var_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_102, 0) = ((MR_Box) (GoalExpr_122));
                    MR_hl_field(0, Var_102, 1) = ((MR_Box) (GoalInfo0_15));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_10 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_102));
                  }
                }
                break;
              case (MR_Integer) 2:
                *MaybeGoal_10 = MaybeSubGoal_72;
                break;
            }
          }
          else
            *MaybeGoal_10 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *MaybeGoal_10 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *MaybeGoal_10 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_39 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Conjs0_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 2))));
              MR_Integer ConjNum_41;
              MR_Word Conj0_42;
              MR_Word TypeCtorInfo_156_156;
              MR_Box conv2_Conj0_42;

              succeeded = ((MR_tag((MR_Word) FirstStep_12)) == (MR_Integer) 1);
              if (succeeded)
              {
                ConjNum_41 = ((MR_Integer) ((MR_hl_field(1, FirstStep_12, (MR_Integer) 0))));
                TypeCtorInfo_156_156 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_156_156, Conjs0_40, ConjNum_41, &conv2_Conj0_42);
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
                MR_Integer Var_92 = (MR_Integer) ((MR_Unsigned) ConjNum_41 - (MR_Unsigned) 1);
                MR_Box conv5_Instmap_46;

                mercury__list__take_upto_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_92, Conjs0_40, &HeadConjs_43);
                HeadInstdeltas_44 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), (MR_Word) (&hlds__goal_util_scalar_common_4[25]), HeadConjs_43);
                mercury__list__foldl_4_p_0((MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&hlds__goal_util_scalar_common_4[26]), HeadInstdeltas_44, ((MR_Box) (Instmap0_8)), &conv5_Instmap_46);
                Instmap_46 = ((MR_Word) (conv5_Instmap_46));
                hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(TransformP_6, LaterPath_13, Instmap_46, Conj0_42, &MaybeConj_47);
                switch (MR_tag((MR_Word) MaybeConj_47)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *MaybeGoal_10 = MaybeConj_47;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Conj_48 = ((MR_Word) ((MR_hl_field(1, MaybeConj_47, (MR_Integer) 0))));
                      MR_Word Conjs_49;
                      MR_Word GoalExpr_50;
                      MR_Word Var_99;

                      mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_40, ConjNum_41, ((MR_Box) (Conj_48)), &Conjs_49);
                      {
                        GoalExpr_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_50, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(3, GoalExpr_50, 1) = (MR_Box) ((MR_Unsigned) (ConjType_39));
                        MR_hl_field(3, GoalExpr_50, 2) = ((MR_Box) (Conjs_49));
                      }
                      {
                        Var_99 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_99, 0) = ((MR_Box) (GoalExpr_50));
                        MR_hl_field(0, Var_99, 1) = ((MR_Box) (GoalInfo0_15));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeGoal_10 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_99));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    *MaybeGoal_10 = MaybeConj_47;
                    break;
                }
              }
              else
                *MaybeGoal_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjs0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 1))));
              MR_Integer DisjNum_53;
              MR_Word Disj0_54;
              MR_Word TypeCtorInfo_163_163;
              MR_Box conv6_Disj0_54;

              succeeded = ((MR_tag((MR_Word) FirstStep_12)) == (MR_Integer) 2);
              if (succeeded)
              {
                DisjNum_53 = ((MR_Integer) ((MR_hl_field(2, FirstStep_12, (MR_Integer) 0))));
                TypeCtorInfo_163_163 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_163_163, Disjs0_52, DisjNum_53, &conv6_Disj0_54);
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
                      MR_Word Disj_56 = ((MR_Word) ((MR_hl_field(1, MaybeDisj_55, (MR_Integer) 0))));
                      MR_Word Disjs_57;
                      MR_Word Var_100;
                      MR_Word GoalExpr_112;

                      mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Disjs0_52, DisjNum_53, ((MR_Box) (Disj_56)), &Disjs_57);
                      {
                        GoalExpr_112 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_112, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                        MR_hl_field(3, GoalExpr_112, 1) = ((MR_Box) (Disjs_57));
                      }
                      {
                        Var_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_100, 0) = ((MR_Box) (GoalExpr_112));
                        MR_hl_field(0, Var_100, 1) = ((MR_Box) (GoalInfo0_15));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeGoal_10 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_100));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    *MaybeGoal_10 = MaybeDisj_55;
                    break;
                }
              }
              else
                *MaybeGoal_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 1))));
              MR_Word CanFail_60 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 3))));
              MR_Integer CaseNum_62;
              MR_Word Case0_64;
              MR_Word TypeCtorInfo_165_165;
              MR_Box conv7_Case0_64;

              succeeded = ((((MR_tag((MR_Word) FirstStep_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FirstStep_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                CaseNum_62 = ((MR_Integer) ((MR_hl_field(3, FirstStep_12, (MR_Integer) 1))));
                TypeCtorInfo_165_165 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0);
                succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_165_165, Cases0_61, CaseNum_62, &conv7_Case0_64);
                if (succeeded)
                {
                  Case0_64 = ((MR_Word) (conv7_Case0_64));
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                MR_Word CaseGoal0_65 = ((MR_Word) ((MR_hl_field(0, Case0_64, (MR_Integer) 2))));
                MR_Word MaybeCaseGoal_66;

                hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(TransformP_6, LaterPath_13, Instmap0_8, CaseGoal0_65, &MaybeCaseGoal_66);
                switch (MR_tag((MR_Word) MaybeCaseGoal_66)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *MaybeGoal_10 = MaybeCaseGoal_66;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word CaseGoal_67 = ((MR_Word) ((MR_hl_field(1, MaybeCaseGoal_66, (MR_Integer) 0))));
                      MR_Word Case_68;
                      MR_Word Cases_69;
                      MR_Word Var_101;
                      MR_Word GoalExpr_117;
                      MR_Word Var_152 = ((MR_Word) ((MR_hl_field(0, Case0_64, (MR_Integer) 0))));
                      MR_Word Var_153 = ((MR_Word) ((MR_hl_field(0, Case0_64, (MR_Integer) 1))));

                      {
                        Case_68 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Case_68, 0) = ((MR_Box) (Var_152));
                        MR_hl_field(0, Case_68, 1) = ((MR_Box) (Var_153));
                        MR_hl_field(0, Case_68, 2) = ((MR_Box) (CaseGoal_67));
                      }
                      mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Cases0_61, CaseNum_62, ((MR_Box) (Case_68)), &Cases_69);
                      {
                        GoalExpr_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_117, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(3, GoalExpr_117, 1) = ((MR_Box) (Var_59));
                        MR_hl_field(3, GoalExpr_117, 2) = (MR_Box) ((MR_Unsigned) (CanFail_60));
                        MR_hl_field(3, GoalExpr_117, 3) = ((MR_Box) (Cases_69));
                      }
                      {
                        Var_101 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_101, 0) = ((MR_Box) (GoalExpr_117));
                        MR_hl_field(0, Var_101, 1) = ((MR_Box) (GoalInfo0_15));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeGoal_10 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_101));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    *MaybeGoal_10 = MaybeCaseGoal_66;
                    break;
                }
              }
              else
                *MaybeGoal_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 1))));
              MR_Word SubGoal0_138 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 2))));

              succeeded = ((((MR_tag((MR_Word) FirstStep_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FirstStep_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
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
                      MR_Word Var_103;
                      MR_Word GoalExpr_127;
                      MR_Word SubGoal_128 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_132, (MR_Integer) 0))));

                      {
                        GoalExpr_127 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_127, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, GoalExpr_127, 1) = ((MR_Box) (Reason_75));
                        MR_hl_field(3, GoalExpr_127, 2) = ((MR_Box) (SubGoal_128));
                      }
                      {
                        Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_103, 0) = ((MR_Box) (GoalExpr_127));
                        MR_hl_field(0, Var_103, 1) = ((MR_Box) (GoalInfo0_15));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeGoal_10 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_103));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    *MaybeGoal_10 = MaybeSubGoal_132;
                    break;
                }
              }
              else
                *MaybeGoal_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ExistVars_78 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 1))));
              MR_Word Cond0_79 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 2))));
              MR_Word Then0_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 3))));
              MR_Word Else0_81 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 4))));

              succeeded = (FirstStep_12 == (MR_Word) ((MR_Unsigned) 0U));
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
                      MR_Word Cond_83 = ((MR_Word) ((MR_hl_field(1, MaybeCond_82, (MR_Integer) 0))));
                      MR_Word Var_104;
                      MR_Word GoalExpr_141;

                      {
                        GoalExpr_141 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_141, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                        MR_hl_field(3, GoalExpr_141, 1) = ((MR_Box) (ExistVars_78));
                        MR_hl_field(3, GoalExpr_141, 2) = ((MR_Box) (Cond_83));
                        MR_hl_field(3, GoalExpr_141, 3) = ((MR_Box) (Then0_80));
                        MR_hl_field(3, GoalExpr_141, 4) = ((MR_Box) (Else0_81));
                      }
                      {
                        Var_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_104, 0) = ((MR_Box) (GoalExpr_141));
                        MR_hl_field(0, Var_104, 1) = ((MR_Box) (GoalInfo0_15));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeGoal_10 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_104));
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
                succeeded = (FirstStep_12 == (MR_Word) ((MR_Unsigned) 4U));
                if (succeeded)
                {
                  MR_Word MaybeThen_85;
                  MR_Word Var_105;
                  MR_Word Var_106 = ((MR_Word) ((MR_hl_field(0, Cond0_79, (MR_Integer) 1))));
                  MR_Word Instmap_146;

                  Var_105 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_106);
                  hlds__instmap__apply_instmap_delta_3_p_0(Var_105, Instmap0_8, &Instmap_146);
                  hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(TransformP_6, LaterPath_13, Instmap_146, Then0_80, &MaybeThen_85);
                  switch (MR_tag((MR_Word) MaybeThen_85)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *MaybeGoal_10 = MaybeThen_85;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Then_86 = ((MR_Word) ((MR_hl_field(1, MaybeThen_85, (MR_Integer) 0))));
                        MR_Word Var_107;
                        MR_Word GoalExpr_144;

                        {
                          GoalExpr_144 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, GoalExpr_144, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                          MR_hl_field(3, GoalExpr_144, 1) = ((MR_Box) (ExistVars_78));
                          MR_hl_field(3, GoalExpr_144, 2) = ((MR_Box) (Cond0_79));
                          MR_hl_field(3, GoalExpr_144, 3) = ((MR_Box) (Then_86));
                          MR_hl_field(3, GoalExpr_144, 4) = ((MR_Box) (Else0_81));
                        }
                        {
                          Var_107 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_107, 0) = ((MR_Box) (GoalExpr_144));
                          MR_hl_field(0, Var_107, 1) = ((MR_Box) (GoalInfo0_15));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          *MaybeGoal_10 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (Var_107));
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
                  succeeded = (FirstStep_12 == (MR_Word) ((MR_Unsigned) 8U));
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
                          MR_Word Else_89 = ((MR_Word) ((MR_hl_field(1, MaybeElse_88, (MR_Integer) 0))));
                          MR_Word Var_108;
                          MR_Word GoalExpr_148;

                          {
                            GoalExpr_148 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, GoalExpr_148, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(3, GoalExpr_148, 1) = ((MR_Box) (ExistVars_78));
                            MR_hl_field(3, GoalExpr_148, 2) = ((MR_Box) (Cond0_79));
                            MR_hl_field(3, GoalExpr_148, 3) = ((MR_Box) (Then0_80));
                            MR_hl_field(3, GoalExpr_148, 4) = ((MR_Box) (Else_89));
                          }
                          {
                            Var_108 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Var_108, 0) = ((MR_Box) (GoalExpr_148));
                            MR_hl_field(0, Var_108, 1) = ((MR_Box) (GoalInfo0_15));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            *MaybeGoal_10 = base;
                            MR_hl_field(1, base, 0) = ((MR_Box) (Var_108));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *MaybeGoal_10 = MaybeElse_88;
                        break;
                    }
                  }
                  else
                    *MaybeGoal_10 = (MR_Word) ((MR_Unsigned) 0U);
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_util.maybe_transform_goal_at_goal_path_with_instmap\'/5", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
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
  MR_bool succeeded;

  if ((TargetGoalPath_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MaybeGoal0_9;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, TransformP_5, (MR_Integer) 1))));
    MR_Box conv1_MaybeGoal0_9;

    func_0(((MR_Box) (TransformP_5)), ((MR_Box) (Goal0_7)), &conv1_MaybeGoal0_9);
    MaybeGoal0_9 = ((MR_Word) (conv1_MaybeGoal0_9));
    hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_p_0(MaybeGoal0_9, MaybeGoal_8);
  }
  else
  {
    MR_Word FirstStep_10 = ((MR_Word) ((MR_hl_field(1, TargetGoalPath_6, (MR_Integer) 0))));
    MR_Word LaterPath_11 = ((MR_Word) ((MR_hl_field(1, TargetGoalPath_6, (MR_Integer) 1))));
    MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 0))));
    MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_65 = (MR_Word) ((MR_Word) (GoalExpr0_12));

          succeeded = (FirstStep_10 == (MR_Word) ((MR_Unsigned) 12U));
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
                  MR_Word SubGoal_67 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_66, (MR_Integer) 0))));
                  MR_Word Var_89;
                  MR_Word GoalExpr_106 = (MR_Word) ((MR_Word) (SubGoal_67));

                  {
                    Var_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_89, 0) = ((MR_Box) (GoalExpr_106));
                    MR_hl_field(0, Var_89, 1) = ((MR_Box) (GoalInfo0_13));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_8 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_89));
                  }
                }
                break;
              case (MR_Integer) 2:
                *MaybeGoal_8 = MaybeSubGoal_66;
                break;
            }
          }
          else
            *MaybeGoal_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *MaybeGoal_8 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *MaybeGoal_8 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_37 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Conjs0_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
              MR_Integer ConjNum_39;
              MR_Word Conj0_40;
              MR_Word TypeCtorInfo_137_137;
              MR_Box conv2_Conj0_40;

              succeeded = ((MR_tag((MR_Word) FirstStep_10)) == (MR_Integer) 1);
              if (succeeded)
              {
                ConjNum_39 = ((MR_Integer) ((MR_hl_field(1, FirstStep_10, (MR_Integer) 0))));
                TypeCtorInfo_137_137 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_137_137, Conjs0_38, ConjNum_39, &conv2_Conj0_40);
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
                      MR_Word Conj_42 = ((MR_Word) ((MR_hl_field(1, MaybeConj_41, (MR_Integer) 0))));
                      MR_Word Conjs_43;
                      MR_Word GoalExpr_44;
                      MR_Word Var_86;

                      mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_38, ConjNum_39, ((MR_Box) (Conj_42)), &Conjs_43);
                      {
                        GoalExpr_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_44, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(3, GoalExpr_44, 1) = (MR_Box) ((MR_Unsigned) (ConjType_37));
                        MR_hl_field(3, GoalExpr_44, 2) = ((MR_Box) (Conjs_43));
                      }
                      {
                        Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_86, 0) = ((MR_Box) (GoalExpr_44));
                        MR_hl_field(0, Var_86, 1) = ((MR_Box) (GoalInfo0_13));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeGoal_8 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_86));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    *MaybeGoal_8 = MaybeConj_41;
                    break;
                }
              }
              else
                *MaybeGoal_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjs0_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
              MR_Integer DisjNum_47;
              MR_Word Disj0_48;
              MR_Word TypeCtorInfo_139_139;
              MR_Box conv3_Disj0_48;

              succeeded = ((MR_tag((MR_Word) FirstStep_10)) == (MR_Integer) 2);
              if (succeeded)
              {
                DisjNum_47 = ((MR_Integer) ((MR_hl_field(2, FirstStep_10, (MR_Integer) 0))));
                TypeCtorInfo_139_139 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_139_139, Disjs0_46, DisjNum_47, &conv3_Disj0_48);
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
                      MR_Word Disj_50 = ((MR_Word) ((MR_hl_field(1, MaybeDisj_49, (MR_Integer) 0))));
                      MR_Word Disjs_51;
                      MR_Word Var_87;
                      MR_Word GoalExpr_96;

                      mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Disjs0_46, DisjNum_47, ((MR_Box) (Disj_50)), &Disjs_51);
                      {
                        GoalExpr_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_96, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                        MR_hl_field(3, GoalExpr_96, 1) = ((MR_Box) (Disjs_51));
                      }
                      {
                        Var_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_87, 0) = ((MR_Box) (GoalExpr_96));
                        MR_hl_field(0, Var_87, 1) = ((MR_Box) (GoalInfo0_13));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeGoal_8 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_87));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    *MaybeGoal_8 = MaybeDisj_49;
                    break;
                }
              }
              else
                *MaybeGoal_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
              MR_Word CanFail_54 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 3))));
              MR_Integer CaseNum_56;
              MR_Word Case0_58;
              MR_Word TypeCtorInfo_141_141;
              MR_Box conv4_Case0_58;

              succeeded = ((((MR_tag((MR_Word) FirstStep_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FirstStep_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                CaseNum_56 = ((MR_Integer) ((MR_hl_field(3, FirstStep_10, (MR_Integer) 1))));
                TypeCtorInfo_141_141 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0);
                succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_141_141, Cases0_55, CaseNum_56, &conv4_Case0_58);
                if (succeeded)
                {
                  Case0_58 = ((MR_Word) (conv4_Case0_58));
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                MR_Word CaseGoal0_59 = ((MR_Word) ((MR_hl_field(0, Case0_58, (MR_Integer) 2))));
                MR_Word MaybeCaseGoal_60;

                hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(TransformP_5, LaterPath_11, CaseGoal0_59, &MaybeCaseGoal_60);
                switch (MR_tag((MR_Word) MaybeCaseGoal_60)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *MaybeGoal_8 = MaybeCaseGoal_60;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word CaseGoal_61 = ((MR_Word) ((MR_hl_field(1, MaybeCaseGoal_60, (MR_Integer) 0))));
                      MR_Word Case_62;
                      MR_Word Cases_63;
                      MR_Word Var_88;
                      MR_Word GoalExpr_101;
                      MR_Word Var_134 = ((MR_Word) ((MR_hl_field(0, Case0_58, (MR_Integer) 0))));
                      MR_Word Var_135 = ((MR_Word) ((MR_hl_field(0, Case0_58, (MR_Integer) 1))));

                      {
                        Case_62 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Case_62, 0) = ((MR_Box) (Var_134));
                        MR_hl_field(0, Case_62, 1) = ((MR_Box) (Var_135));
                        MR_hl_field(0, Case_62, 2) = ((MR_Box) (CaseGoal_61));
                      }
                      mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Cases0_55, CaseNum_56, ((MR_Box) (Case_62)), &Cases_63);
                      {
                        GoalExpr_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_101, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(3, GoalExpr_101, 1) = ((MR_Box) (Var_53));
                        MR_hl_field(3, GoalExpr_101, 2) = (MR_Box) ((MR_Unsigned) (CanFail_54));
                        MR_hl_field(3, GoalExpr_101, 3) = ((MR_Box) (Cases_63));
                      }
                      {
                        Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_88, 0) = ((MR_Box) (GoalExpr_101));
                        MR_hl_field(0, Var_88, 1) = ((MR_Box) (GoalInfo0_13));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeGoal_8 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_88));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    *MaybeGoal_8 = MaybeCaseGoal_60;
                    break;
                }
              }
              else
                *MaybeGoal_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
              MR_Word SubGoal0_122 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));

              succeeded = ((((MR_tag((MR_Word) FirstStep_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FirstStep_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
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
                      MR_Word Var_90;
                      MR_Word GoalExpr_111;
                      MR_Word SubGoal_112 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_116, (MR_Integer) 0))));

                      {
                        GoalExpr_111 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_111, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, GoalExpr_111, 1) = ((MR_Box) (Reason_69));
                        MR_hl_field(3, GoalExpr_111, 2) = ((MR_Box) (SubGoal_112));
                      }
                      {
                        Var_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_90, 0) = ((MR_Box) (GoalExpr_111));
                        MR_hl_field(0, Var_90, 1) = ((MR_Box) (GoalInfo0_13));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeGoal_8 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_90));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    *MaybeGoal_8 = MaybeSubGoal_116;
                    break;
                }
              }
              else
                *MaybeGoal_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ExistVars_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
              MR_Word Cond0_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
              MR_Word Then0_74 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 3))));
              MR_Word Else0_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 4))));

              succeeded = (FirstStep_10 == (MR_Word) ((MR_Unsigned) 0U));
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
                      MR_Word Cond_77 = ((MR_Word) ((MR_hl_field(1, MaybeCond_76, (MR_Integer) 0))));
                      MR_Word Var_91;
                      MR_Word GoalExpr_125;

                      {
                        GoalExpr_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_125, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                        MR_hl_field(3, GoalExpr_125, 1) = ((MR_Box) (ExistVars_72));
                        MR_hl_field(3, GoalExpr_125, 2) = ((MR_Box) (Cond_77));
                        MR_hl_field(3, GoalExpr_125, 3) = ((MR_Box) (Then0_74));
                        MR_hl_field(3, GoalExpr_125, 4) = ((MR_Box) (Else0_75));
                      }
                      {
                        Var_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_91, 0) = ((MR_Box) (GoalExpr_125));
                        MR_hl_field(0, Var_91, 1) = ((MR_Box) (GoalInfo0_13));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeGoal_8 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_91));
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
                succeeded = (FirstStep_10 == (MR_Word) ((MR_Unsigned) 4U));
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
                        MR_Word Then_80 = ((MR_Word) ((MR_hl_field(1, MaybeThen_79, (MR_Integer) 0))));
                        MR_Word Var_92;
                        MR_Word GoalExpr_128;

                        {
                          GoalExpr_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, GoalExpr_128, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                          MR_hl_field(3, GoalExpr_128, 1) = ((MR_Box) (ExistVars_72));
                          MR_hl_field(3, GoalExpr_128, 2) = ((MR_Box) (Cond0_73));
                          MR_hl_field(3, GoalExpr_128, 3) = ((MR_Box) (Then_80));
                          MR_hl_field(3, GoalExpr_128, 4) = ((MR_Box) (Else0_75));
                        }
                        {
                          Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_92, 0) = ((MR_Box) (GoalExpr_128));
                          MR_hl_field(0, Var_92, 1) = ((MR_Box) (GoalInfo0_13));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          *MaybeGoal_8 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (Var_92));
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
                  succeeded = (FirstStep_10 == (MR_Word) ((MR_Unsigned) 8U));
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
                          MR_Word Else_83 = ((MR_Word) ((MR_hl_field(1, MaybeElse_82, (MR_Integer) 0))));
                          MR_Word Var_93;
                          MR_Word GoalExpr_131;

                          {
                            GoalExpr_131 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, GoalExpr_131, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(3, GoalExpr_131, 1) = ((MR_Box) (ExistVars_72));
                            MR_hl_field(3, GoalExpr_131, 2) = ((MR_Box) (Cond0_73));
                            MR_hl_field(3, GoalExpr_131, 3) = ((MR_Box) (Then0_74));
                            MR_hl_field(3, GoalExpr_131, 4) = ((MR_Box) (Else_83));
                          }
                          {
                            Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Var_93, 0) = ((MR_Box) (GoalExpr_131));
                            MR_hl_field(0, Var_93, 1) = ((MR_Box) (GoalInfo0_13));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            *MaybeGoal_8 = base;
                            MR_hl_field(1, base, 0) = ((MR_Box) (Var_93));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *MaybeGoal_8 = MaybeElse_82;
                        break;
                    }
                  }
                  else
                    *MaybeGoal_8 = (MR_Word) ((MR_Unsigned) 0U);
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_util.maybe_transform_goal_at_goal_path\'/4", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_String Error_4 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(2, base, 0) = ((MR_Box) (Error_4));
    }
  }
  else
  {
    MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_3));
    }
  }
}

static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_Case_4;

  conv3_Case_4 = hlds__goal_util__maybe_strip_equality_pretest_case_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_Case_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_Goal_4;

  conv2_Goal_4 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_Goal_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Goal_4;

  conv1_Goal_4 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Goal_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Goal_4;

  conv0_Goal_4 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Goal_4));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
hlds__goal_util__maybe_strip_equality_pretest_1_f_0(
  MR_Word Goal0_3)
{
  MR_bool succeeded;
  MR_Word Goal_4;
  MR_Word GoalExpr0_5 = ((MR_Word) ((MR_hl_field(0, Goal0_3, (MR_Integer) 0))));
  MR_Word GoalInfo0_6 = ((MR_Word) ((MR_hl_field(0, Goal0_3, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) GoalExpr0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_47 = (MR_Word) ((MR_Word) (GoalExpr0_5));
        MR_Word SubGoal_48;
        MR_Word GoalExpr_79;

        SubGoal_48 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(SubGoal0_47);
        GoalExpr_79 = (MR_Word) ((MR_Word) (SubGoal_48));
        {
          Goal_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Goal_4, 0) = ((MR_Box) (GoalExpr_79));
          MR_hl_field(0, Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      Goal_4 = Goal0_3;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          Goal_4 = Goal0_3;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_30 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_31 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 2))));
            MR_Word Goals_32;
            MR_Word GoalExpr_33;

            Goals_32 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_util_scalar_common_4[21]), Goals0_31);
            {
              GoalExpr_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_33, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_33, 1) = (MR_Box) ((MR_Unsigned) (ConjType_30));
              MR_hl_field(3, GoalExpr_33, 2) = ((MR_Box) (Goals_32));
            }
            {
              Goal_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Goal_4, 0) = ((MR_Box) (GoalExpr_33));
              MR_hl_field(0, Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubGoals0_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 1))));
            MR_Word SubGoals_35;
            MR_Word GoalExpr_74;

            SubGoals_35 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_util_scalar_common_4[22]), SubGoals0_34);
            {
              GoalExpr_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_74, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_74, 1) = ((MR_Box) (SubGoals_35));
            }
            {
              Goal_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Goal_4, 0) = ((MR_Box) (GoalExpr_74));
              MR_hl_field(0, Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 1))));
            MR_Word CanFail_37 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 3))));
            MR_Word Cases_39;
            MR_Word GoalExpr_75;

            Cases_39 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__goal_util_scalar_common_4[24]), Cases0_38);
            {
              GoalExpr_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_75, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_75, 1) = ((MR_Box) (Var_36));
              MR_hl_field(3, GoalExpr_75, 2) = (MR_Box) ((MR_Unsigned) (CanFail_37));
              MR_hl_field(3, GoalExpr_75, 3) = ((MR_Box) (Cases_39));
            }
            {
              Goal_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Goal_4, 0) = ((MR_Box) (GoalExpr_75));
              MR_hl_field(0, Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 1))));
            MR_Word SubGoal0_85 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 2))));
            MR_Word FGT_51;

            succeeded = ((((MR_tag((MR_Word) Reason_49)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_49, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              FGT_51 = ((MR_Unsigned) ((MR_hl_field(3, Reason_49, (MR_Integer) 2))) & (MR_Integer) 3);
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
                GoalExpr_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_80, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_80, 1) = ((MR_Box) (Reason_49));
                MR_hl_field(3, GoalExpr_80, 2) = ((MR_Box) (SubGoal_81));
              }
              {
                Goal_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Goal_4, 0) = ((MR_Box) (GoalExpr_80));
                MR_hl_field(0, Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 1))));
            MR_Word Cond0_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 2))));
            MR_Word Then0_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 3))));
            MR_Word Else0_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 4))));

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
                GoalExpr_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_76, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, GoalExpr_76, 1) = ((MR_Box) (Vars_40));
                MR_hl_field(3, GoalExpr_76, 2) = ((MR_Box) (Cond_44));
                MR_hl_field(3, GoalExpr_76, 3) = ((MR_Box) (Then_45));
                MR_hl_field(3, GoalExpr_76, 4) = ((MR_Box) (Else_46));
              }
              {
                Goal_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Goal_4, 0) = ((MR_Box) (GoalExpr_76));
                MR_hl_field(0, Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
              }
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ShortHand0_52)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.goal_util.maybe_strip_equality_pretest\'/1", (MR_String) "bi_implication");
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_53 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_52, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_54 = ((MR_Word) ((MR_hl_field(1, ShortHand0_52, (MR_Integer) 1))));
                  MR_Word Inner_55 = ((MR_Word) ((MR_hl_field(1, ShortHand0_52, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_56 = ((MR_Word) ((MR_hl_field(1, ShortHand0_52, (MR_Integer) 3))));
                  MR_Word MainGoal0_57 = ((MR_Word) ((MR_hl_field(1, ShortHand0_52, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_58 = ((MR_Word) ((MR_hl_field(1, ShortHand0_52, (MR_Integer) 5))));
                  MR_Word OrElseInners_59 = ((MR_Word) ((MR_hl_field(1, ShortHand0_52, (MR_Integer) 6))));
                  MR_Word MainGoal_60;
                  MR_Word OrElseGoals_61;
                  MR_Word ShortHand_62;
                  MR_Word GoalExpr_87;

                  MainGoal_60 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(MainGoal0_57);
                  OrElseGoals_61 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_util_scalar_common_4[23]), OrElseGoals0_58);
                  {
                    ShortHand_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_62, 0) = (MR_Box) ((MR_Unsigned) (GoalType_53));
                    MR_hl_field(1, ShortHand_62, 1) = ((MR_Box) (Outer_54));
                    MR_hl_field(1, ShortHand_62, 2) = ((MR_Box) (Inner_55));
                    MR_hl_field(1, ShortHand_62, 3) = ((MR_Box) (MaybeOutputVars_56));
                    MR_hl_field(1, ShortHand_62, 4) = ((MR_Box) (MainGoal_60));
                    MR_hl_field(1, ShortHand_62, 5) = ((MR_Box) (OrElseGoals_61));
                    MR_hl_field(1, ShortHand_62, 6) = ((MR_Box) (OrElseInners_59));
                  }
                  {
                    GoalExpr_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_87, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(3, GoalExpr_87, 1) = ((MR_Box) (ShortHand_62));
                  }
                  {
                    Goal_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Goal_4, 0) = ((MR_Box) (GoalExpr_87));
                    MR_hl_field(0, Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_63 = ((MR_Word) ((MR_hl_field(2, ShortHand0_52, (MR_Integer) 0))));
                  MR_Word ResultVar_64 = ((MR_Word) ((MR_hl_field(2, ShortHand0_52, (MR_Integer) 1))));
                  MR_Word GoalExpr_88;
                  MR_Word SubGoal0_89 = ((MR_Word) ((MR_hl_field(2, ShortHand0_52, (MR_Integer) 2))));
                  MR_Word SubGoal_90;
                  MR_Word ShortHand_91;

                  SubGoal_90 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(SubGoal0_89);
                  {
                    ShortHand_91 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_91, 0) = ((MR_Box) (MaybeIO_63));
                    MR_hl_field(2, ShortHand_91, 1) = ((MR_Box) (ResultVar_64));
                    MR_hl_field(2, ShortHand_91, 2) = ((MR_Box) (SubGoal_90));
                  }
                  {
                    GoalExpr_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_88, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(3, GoalExpr_88, 1) = ((MR_Box) (ShortHand_91));
                  }
                  {
                    Goal_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Goal_4, 0) = ((MR_Box) (GoalExpr_88));
                    MR_hl_field(0, Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
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

MR_bool MR_CALL 
hlds__goal_util__foreign_proc_uses_variable_2_p_0(
  MR_Word Impl_3,
  MR_String VarName_4)
{
  MR_bool succeeded;
  MR_String ForeignBody_5 = ((MR_String) ((MR_hl_field(0, Impl_3, (MR_Integer) 0))));
  MR_Integer Var_7;

  succeeded = mercury__string__sub_string_search_3_p_0(ForeignBody_5, VarName_4, &Var_7);
  return succeeded;
}

void MR_CALL 
hlds__goal_util__generate_cast_5_p_0(
  MR_Word CastType_6,
  MR_Word InArg_7,
  MR_Word OutArg_8,
  MR_Word Context_9,
  MR_Word * Goal_10)
{
  MR_Word Ground_11;

  Ground_11 = parse_tree__prog_mode__ground_inst_0_f_0();
  hlds__goal_util__generate_cast_with_insts_7_p_0(CastType_6, InArg_7, OutArg_8, Ground_11, Ground_11, Context_9, Goal_10);
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
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (OutArg_10));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (InArg_9));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_20));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_19, &NonLocals_15);
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (OutArg_10));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (OutInst_12));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  InstMapDelta_16 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_22);
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_15, InstMapDelta_16, (MR_Integer) 0, (MR_Integer) 0, Context_13, &GoalInfo_17);
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = (MR_Box) ((MR_Unsigned) (CastType_8));
  }
  Var_32 = parse_tree__prog_mode__in_mode_1_f_0(InInst_11);
  Var_34 = parse_tree__prog_mode__out_mode_1_f_0(OutInst_12);
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_33));
  }
  {
    GoalExpr_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, GoalExpr_18, 1) = ((MR_Box) (Var_27));
    MR_hl_field(3, GoalExpr_18, 2) = ((MR_Box) (Var_19));
    MR_hl_field(3, GoalExpr_18, 3) = ((MR_Box) (Var_31));
    MR_hl_field(3, GoalExpr_18, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, GoalExpr_18, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_17));
  }
}

static void MR_CALL 
hlds__goal_util__generate_call_foreign_proc_17_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
}

static MR_bool MR_CALL 
hlds__goal_util__generate_call_foreign_proc_17_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__goal_util__IntroducedFrom__pred__generate_call_foreign_proc__2107__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_Box MR_CALL 
hlds__goal_util__generate_call_foreign_proc_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__goal_util__generate_call_foreign_proc_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__goal_util__generate_call_foreign_proc_17_p_0(
  MR_Word ModuleInfo_18,
  MR_Word PredOrFunc_19,
  MR_Word ModuleName_20,
  MR_String ProcName_21,
  MR_Word TIArgs_22,
  MR_Word NonTIArgs_23,
  MR_Word ExtraArgs_24,
  MR_Word InstMapDelta0_25,
  MR_Word ModeNo_26,
  MR_Word Detism_27,
  MR_Word Purity_28,
  MR_Word Features_29,
  MR_Word Attributes_30,
  MR_Word MaybeTraceRuntimeCond_31,
  MR_String Code_32,
  MR_Word Context_33,
  MR_Word * Goal_34)
{
  MR_bool succeeded;
  MR_Word PredFormArity_35;
  MR_Word UserArity_36;
  MR_Word PredId_37;
  MR_Integer ProcId_38;
  MR_Word Args_39;
  MR_Word GoalExpr_40;
  MR_Word ArgVars_41;
  MR_Word ExtraArgVars_42;
  MR_Word Vars_43;
  MR_Word NonLocals_44;
  MR_Word NumSolns_46;
  MR_Word InstMapDelta_47;
  MR_Word PredInfo_48;
  MR_Word PredPurity_49;
  MR_Word GoalInfo0_50;
  MR_Word GoalInfo_51;
  MR_Word Var_52;
  MR_Word Var_56;
  MR_Word _CanFail_45;
  MR_Box conv3_GoalInfo_51;

  PredFormArity_35 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), NonTIArgs_23);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_19, &UserArity_36, PredFormArity_35);
  hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ModuleInfo_18, ModuleName_20, ProcName_21, PredOrFunc_19, UserArity_36, ModeNo_26, &PredId_37, &ProcId_38);
  Args_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), TIArgs_22, NonTIArgs_23);
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (Code_32));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    GoalExpr_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_40, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, GoalExpr_40, 1) = ((MR_Box) (Attributes_30));
    MR_hl_field(3, GoalExpr_40, 2) = ((MR_Box) (PredId_37));
    MR_hl_field(3, GoalExpr_40, 3) = ((MR_Box) (ProcId_38));
    MR_hl_field(3, GoalExpr_40, 4) = ((MR_Box) (Args_39));
    MR_hl_field(3, GoalExpr_40, 5) = ((MR_Box) (ExtraArgs_24));
    MR_hl_field(3, GoalExpr_40, 6) = ((MR_Box) (MaybeTraceRuntimeCond_31));
    MR_hl_field(3, GoalExpr_40, 7) = ((MR_Box) (Var_52));
  }
  ArgVars_41 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_4[18]), Args_39);
  ExtraArgVars_42 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_4[19]), ExtraArgs_24);
  Vars_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), ArgVars_41, ExtraArgVars_42);
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_43, &NonLocals_44);
  parse_tree__prog_data__determinism_components_3_p_0(Detism_27, &_CanFail_45, &NumSolns_46);
  switch (NumSolns_46) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      InstMapDelta_47 = InstMapDelta0_25;
      break;
    case (MR_Integer) 0:
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(&InstMapDelta_47);
      break;
  }
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_18, PredId_37, &PredInfo_48);
  hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_48, &PredPurity_49);
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_3[5]));
    MR_hl_field(0, Var_56, 1) = ((MR_Box) (hlds__goal_util__generate_call_foreign_proc_17_p_0_3));
    MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_56, 3) = ((MR_Box) (Purity_28));
    MR_hl_field(0, Var_56, 4) = ((MR_Box) (PredPurity_49));
  }
  mercury__require__expect_3_p_0(Var_56, (MR_String) "predicate \140hlds.goal_util.generate_call_foreign_proc\'/17", (MR_String) "purity disagreement");
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_44, InstMapDelta_47, Detism_27, Purity_28, Context_33, &GoalInfo0_50);
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0), (MR_Word) (&hlds__goal_util_scalar_common_4[20]), Features_29, ((MR_Box) (GoalInfo0_50)), &conv3_GoalInfo_51);
  GoalInfo_51 = ((MR_Word) (conv3_GoalInfo_51));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_34 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_40));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_51));
  }
}

static void MR_CALL 
hlds__goal_util__generate_plain_call_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static MR_bool MR_CALL 
hlds__goal_util__generate_plain_call_13_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__goal_util__IntroducedFrom__pred__generate_plain_call__2073__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
hlds__goal_util__generate_plain_call_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word PredOrFunc_15,
  MR_Word ModuleName_16,
  MR_String ProcName_17,
  MR_Word TIArgVars_18,
  MR_Word NonTIArgVars_19,
  MR_Word InstMapDelta0_20,
  MR_Word ModeNo_21,
  MR_Word Detism_22,
  MR_Word Purity_23,
  MR_Word Features_24,
  MR_Word Context_25,
  MR_Word * Goal_26)
{
  MR_bool succeeded;
  MR_Word PredFormArity_27;
  MR_Word UserArity_28;
  MR_Word PredId_29;
  MR_Integer ProcId_30;
  MR_Word InvalidPredId_31;
  MR_Word BuiltinState_32;
  MR_Word ArgVars_33;
  MR_Word GoalExpr_34;
  MR_Word NonLocals_35;
  MR_Word NumSolns_37;
  MR_Word InstMapDelta_38;
  MR_Word PredInfo_39;
  MR_Word PredPurity_40;
  MR_Word GoalInfo0_41;
  MR_Word GoalInfo_42;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word _CanFail_36;
  MR_Box conv1_GoalInfo_42;

  PredFormArity_27 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), NonTIArgVars_19);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_15, &UserArity_28, PredFormArity_27);
  hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ModuleInfo_14, ModuleName_16, ProcName_17, PredOrFunc_15, UserArity_28, ModeNo_21, &PredId_29, &ProcId_30);
  InvalidPredId_31 = hlds__hlds_pred__invalid_pred_id_0_f_0();
  BuiltinState_32 = hlds__hlds_pred__builtin_state_4_f_0(ModuleInfo_14, InvalidPredId_31, PredId_29, ProcId_30);
  ArgVars_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), TIArgVars_18, NonTIArgVars_19);
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (ModuleName_16));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (ProcName_17));
  }
  {
    GoalExpr_34 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, GoalExpr_34, 0) = ((MR_Box) (PredId_29));
    MR_hl_field(2, GoalExpr_34, 1) = ((MR_Box) (ProcId_30));
    MR_hl_field(2, GoalExpr_34, 2) = ((MR_Box) (ArgVars_33));
    MR_hl_field(2, GoalExpr_34, 3) = (MR_Box) ((MR_Unsigned) (BuiltinState_32));
    MR_hl_field(2, GoalExpr_34, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, GoalExpr_34, 5) = ((MR_Box) (Var_44));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_33, &NonLocals_35);
  parse_tree__prog_data__determinism_components_3_p_0(Detism_22, &_CanFail_36, &NumSolns_37);
  switch (NumSolns_37) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      InstMapDelta_38 = InstMapDelta0_20;
      break;
    case (MR_Integer) 0:
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(&InstMapDelta_38);
      break;
  }
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_14, PredId_29, &PredInfo_39);
  hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_39, &PredPurity_40);
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_3[5]));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (hlds__goal_util__generate_plain_call_13_p_0_1));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_45, 3) = ((MR_Box) (Purity_23));
    MR_hl_field(0, Var_45, 4) = ((MR_Box) (PredPurity_40));
  }
  mercury__require__expect_3_p_0(Var_45, (MR_String) "predicate \140hlds.goal_util.generate_plain_call\'/13", (MR_String) "purity disagreement");
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_35, InstMapDelta_38, Detism_22, Purity_23, Context_25, &GoalInfo0_41);
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0), (MR_Word) (&hlds__goal_util_scalar_common_4[17]), Features_24, ((MR_Box) (GoalInfo0_41)), &conv1_GoalInfo_42);
  GoalInfo_42 = ((MR_Word) (conv1_GoalInfo_42));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_26 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_34));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_42));
  }
}

void MR_CALL 
hlds__goal_util__can_reorder_goals_9_p_0(
  MR_Word VarTable_10,
  MR_Word FullyStrict_11,
  MR_Word InstmapBeforeEarlierGoal_12,
  MR_Word EarlierGoal_13,
  MR_Word InstmapBeforeLaterGoal_14,
  MR_Word LaterGoal_15,
  MR_Word * CanReorder_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28)
{
  MR_bool succeeded;
  MR_Word EarlierGoalInfo_19 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_13, (MR_Integer) 1))));
  MR_Word LaterGoalInfo_21 = ((MR_Word) ((MR_hl_field(0, LaterGoal_15, (MR_Integer) 1))));
  MR_Word EarlierPurity_22;
  MR_Word EarlierTrace_23;
  MR_Word LaterPurity_24;
  MR_Word LaterTrace_25;

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
      case (MR_Integer) 1:
        *CanReorder_16 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
        {
          MR_Word LaterGoalInfo_30 = ((MR_Word) ((MR_hl_field(0, LaterGoal_15, (MR_Integer) 1))));
          MR_Word EarlierGoalInfo_32 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_13, (MR_Integer) 1))));
          MR_Word EarlierInstMapDelta_33;
          MR_Word InstMapAfterEarlierGoal_34;
          MR_Word EarlierChangedVars_35;
          MR_Word LaterGoalNonLocals_36;
          MR_Word Intersection_37;

          EarlierInstMapDelta_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(EarlierGoalInfo_32);
          hlds__instmap__apply_instmap_delta_3_p_0(EarlierInstMapDelta_33, InstmapBeforeEarlierGoal_12, &InstMapAfterEarlierGoal_34);
          hlds__instmap__instmap_changed_vars_5_p_0(*STATE_VARIABLE_ModuleInfo_28, VarTable_10, InstmapBeforeEarlierGoal_12, InstMapAfterEarlierGoal_34, &EarlierChangedVars_35);
          LaterGoalNonLocals_36 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LaterGoalInfo_30);
          parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), EarlierChangedVars_35, LaterGoalNonLocals_36, &Intersection_37);
          succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Intersection_37);
          succeeded = !(succeeded);
          if (succeeded)
            *CanReorder_16 = (MR_Integer) 0;
          else
          {
            MR_Word LaterGoalInfo_40 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_13, (MR_Integer) 1))));
            MR_Word EarlierGoalInfo_42 = ((MR_Word) ((MR_hl_field(0, LaterGoal_15, (MR_Integer) 1))));
            MR_Word EarlierInstMapDelta_43;
            MR_Word InstMapAfterEarlierGoal_44;
            MR_Word EarlierChangedVars_45;
            MR_Word LaterGoalNonLocals_46;
            MR_Word Intersection_47;

            EarlierInstMapDelta_43 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(EarlierGoalInfo_42);
            hlds__instmap__apply_instmap_delta_3_p_0(EarlierInstMapDelta_43, InstmapBeforeLaterGoal_14, &InstMapAfterEarlierGoal_44);
            hlds__instmap__instmap_changed_vars_5_p_0(*STATE_VARIABLE_ModuleInfo_28, VarTable_10, InstmapBeforeLaterGoal_14, InstMapAfterEarlierGoal_44, &EarlierChangedVars_45);
            LaterGoalNonLocals_46 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LaterGoalInfo_40);
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), EarlierChangedVars_45, LaterGoalNonLocals_46, &Intersection_47);
            succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Intersection_47);
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

void MR_CALL 
hlds__goal_util__reordering_maintains_termination_6_p_0(
  MR_Word FullyStrict_7,
  MR_Word EarlierGoal_8,
  MR_Word LaterGoal_9,
  MR_Word * MaintainsTermination_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25)
{
  MR_bool succeeded;
  MR_Word EarlierGoalInfo_13 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_8, (MR_Integer) 1))));
  MR_Word LaterGoalInfo_15 = ((MR_Word) ((MR_hl_field(0, LaterGoal_9, (MR_Integer) 1))));
  MR_Word EarlierDetism_16;
  MR_Word EarlierCanFail_17;
  MR_Word LaterDetism_19;
  MR_Word LaterCanFail_20;
  MR_Word EarlierCanLoopOrThrow_22;
  MR_Word STATE_VARIABLE_ModuleInfo_26_26;
  MR_Word Var_18;
  MR_Word Var_21;

  EarlierDetism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(EarlierGoalInfo_13);
  parse_tree__prog_data__determinism_components_3_p_0(EarlierDetism_16, &EarlierCanFail_17, &Var_18);
  LaterDetism_19 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(LaterGoalInfo_15);
  parse_tree__prog_data__determinism_components_3_p_0(LaterDetism_19, &LaterCanFail_20, &Var_21);
  hlds__goal_form__goal_can_loop_or_throw_imaf_4_p_0(EarlierGoal_8, &EarlierCanLoopOrThrow_22, STATE_VARIABLE_ModuleInfo_0_24, &STATE_VARIABLE_ModuleInfo_26_26);
  succeeded = (FullyStrict_7 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (EarlierCanLoopOrThrow_22 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (LaterCanFail_20 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    *MaintainsTermination_10 = (MR_Integer) 1;
    *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_26_26;
  }
  else
  {
    MR_Word LaterCanLoopOrThrow_23;

    hlds__goal_form__goal_can_loop_or_throw_imaf_4_p_0(LaterGoal_9, &LaterCanLoopOrThrow_23, STATE_VARIABLE_ModuleInfo_26_26, STATE_VARIABLE_ModuleInfo_25);
    succeeded = (EarlierCanFail_17 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (LaterCanLoopOrThrow_23 == (MR_Integer) 0);
    if (succeeded)
      *MaintainsTermination_10 = (MR_Integer) 1;
    else
      *MaintainsTermination_10 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
hlds__goal_util__can_reorder_goals_old_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word VarTable_9,
  MR_Word FullyStrict_10,
  MR_Word InstmapBeforeEarlierGoal_11,
  MR_Word EarlierGoal_12,
  MR_Word InstmapBeforeLaterGoal_13,
  MR_Word LaterGoal_14)
{
  MR_bool succeeded;
  MR_Word EarlierGoalInfo_16 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_12, (MR_Integer) 1))));
  MR_Word LaterGoalInfo_18 = ((MR_Word) ((MR_hl_field(0, LaterGoal_14, (MR_Integer) 1))));
  MR_Word EarlierPurity_19;
  MR_Word EarlierTrace_20;
  MR_Word LaterPurity_21;
  MR_Word LaterTrace_22;
  MR_Word TypeCtorInfo_20_32;
  MR_Word LaterGoalInfo_24;
  MR_Word EarlierGoalInfo_26;
  MR_Word EarlierInstMapDelta_27;
  MR_Word InstMapAfterEarlierGoal_28;
  MR_Word EarlierChangedVars_29;
  MR_Word LaterGoalNonLocals_30;
  MR_Word Intersection_31;
  MR_Word TypeCtorInfo_20_42;
  MR_Word LaterGoalInfo_34;
  MR_Word EarlierGoalInfo_36;
  MR_Word EarlierInstMapDelta_37;
  MR_Word InstMapAfterEarlierGoal_38;
  MR_Word EarlierChangedVars_39;
  MR_Word LaterGoalNonLocals_40;
  MR_Word Intersection_41;

  hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(EarlierGoalInfo_16, &EarlierPurity_19, &EarlierTrace_20);
  hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(LaterGoalInfo_18, &LaterPurity_21, &LaterTrace_22);
  succeeded = (LaterPurity_21 != (MR_Integer) 2);
  if (succeeded)
  {
    succeeded = (LaterTrace_22 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (EarlierPurity_19 != (MR_Integer) 2);
      if (succeeded)
      {
        succeeded = (EarlierTrace_20 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = hlds__goal_util__reordering_maintains_termination_old_4_p_0(ModuleInfo_8, FullyStrict_10, EarlierGoal_12, LaterGoal_14);
          if (succeeded)
          {
            LaterGoalInfo_24 = ((MR_Word) ((MR_hl_field(0, LaterGoal_14, (MR_Integer) 1))));
            EarlierGoalInfo_26 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_12, (MR_Integer) 1))));
            EarlierInstMapDelta_27 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(EarlierGoalInfo_26);
            hlds__instmap__apply_instmap_delta_3_p_0(EarlierInstMapDelta_27, InstmapBeforeEarlierGoal_11, &InstMapAfterEarlierGoal_28);
            hlds__instmap__instmap_changed_vars_5_p_0(ModuleInfo_8, VarTable_9, InstmapBeforeEarlierGoal_11, InstMapAfterEarlierGoal_28, &EarlierChangedVars_29);
            LaterGoalNonLocals_30 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LaterGoalInfo_24);
            TypeCtorInfo_20_32 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            parse_tree__set_of_var__intersect_3_p_0(TypeCtorInfo_20_32, EarlierChangedVars_29, LaterGoalNonLocals_30, &Intersection_31);
            succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_20_32, Intersection_31);
            succeeded = !(succeeded);
            succeeded = !(succeeded);
            if (succeeded)
            {
              LaterGoalInfo_34 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_12, (MR_Integer) 1))));
              EarlierGoalInfo_36 = ((MR_Word) ((MR_hl_field(0, LaterGoal_14, (MR_Integer) 1))));
              EarlierInstMapDelta_37 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(EarlierGoalInfo_36);
              hlds__instmap__apply_instmap_delta_3_p_0(EarlierInstMapDelta_37, InstmapBeforeLaterGoal_13, &InstMapAfterEarlierGoal_38);
              hlds__instmap__instmap_changed_vars_5_p_0(ModuleInfo_8, VarTable_9, InstmapBeforeLaterGoal_13, InstMapAfterEarlierGoal_38, &EarlierChangedVars_39);
              LaterGoalNonLocals_40 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LaterGoalInfo_34);
              TypeCtorInfo_20_42 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              parse_tree__set_of_var__intersect_3_p_0(TypeCtorInfo_20_42, EarlierChangedVars_39, LaterGoalNonLocals_40, &Intersection_41);
              succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_20_42, Intersection_41);
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

MR_bool MR_CALL 
hlds__goal_util__reordering_maintains_termination_old_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word FullyStrict_6,
  MR_Word EarlierGoal_7,
  MR_Word LaterGoal_8)
{
  MR_bool succeeded;
  MR_Word EarlierGoalInfo_10 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_7, (MR_Integer) 1))));
  MR_Word LaterGoalInfo_12 = ((MR_Word) ((MR_hl_field(0, LaterGoal_8, (MR_Integer) 1))));
  MR_Word EarlierDetism_13;
  MR_Word EarlierCanFail_14;
  MR_Word LaterDetism_16;
  MR_Word LaterCanFail_17;
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
        succeeded = hlds__goal_form__goal_cannot_loop_or_throw_term_info_2_p_0(ModuleInfo_5, LaterGoal_8);
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
    }
  return succeeded;
}

void MR_CALL 
hlds__goal_util__create_conj_4_p_0(
  MR_Word GoalA_5,
  MR_Word GoalB_6,
  MR_Word Type_7,
  MR_Word * ConjGoal_8)
{
  MR_Word Var_9;
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (GoalB_6));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (GoalA_5));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_10));
  }
  hlds__goal_util__create_conj_from_list_3_p_0(Var_9, Type_7, ConjGoal_8);
}

void MR_CALL 
hlds__goal_util__create_conj_from_list_3_p_0(
  MR_Word Conjuncts_4,
  MR_Word ConjType_5,
  MR_Word * ConjGoal_6)
{
  if ((Conjuncts_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_util.create_conj_from_list\'/3", (MR_String) "empty conjunction");
      return;
    }
  else
  {
    MR_Word HeadGoal_7 = ((MR_Word) ((MR_hl_field(1, Conjuncts_4, (MR_Integer) 0))));
    MR_Word TailGoals_8 = ((MR_Word) ((MR_hl_field(1, Conjuncts_4, (MR_Integer) 1))));

    if ((TailGoals_8 == (MR_Word) ((MR_Unsigned) 0U)))
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

      {
        ConjGoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ConjGoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, ConjGoalExpr_11, 1) = (MR_Box) ((MR_Unsigned) (ConjType_5));
        MR_hl_field(3, ConjGoalExpr_11, 2) = ((MR_Box) (Conjuncts_4));
      }
      hlds__hlds_goal__goal_list_nonlocals_2_p_0(Conjuncts_4, &NonLocals_12);
      hlds__hlds_goal__goal_list_instmap_delta_2_p_0(Conjuncts_4, &InstMapDelta_13);
      hlds__hlds_goal__goal_list_determinism_2_p_0(Conjuncts_4, &Detism_14);
      hlds__hlds_goal__goal_list_purity_2_p_0(Conjuncts_4, &Purity_15);
      HeadGoalInfo_17 = ((MR_Word) ((MR_hl_field(0, HeadGoal_7, (MR_Integer) 1))));
      Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(HeadGoalInfo_17);
      hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_12, InstMapDelta_13, Detism_14, Purity_15, Context_18, &ConjGoalInfo_19);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *ConjGoal_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (ConjGoalExpr_11));
        MR_hl_field(0, base, 1) = ((MR_Box) (ConjGoalInfo_19));
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
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_FlatDisjuncts_9;

  hlds__goal_util__flatten_disj_acc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FlatDisjuncts_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FlatDisjuncts_9));
}

void MR_CALL 
hlds__goal_util__flatten_disj_2_p_0(
  MR_Word Disjuncts_3,
  MR_Word * FlatDisjuncts_4)
{
  MR_Box conv1_FlatDisjuncts_4;

  mercury__list__foldr_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_util_scalar_common_1[3]), (MR_Word) (&hlds__goal_util_scalar_common_4[16]), Disjuncts_3, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_FlatDisjuncts_4);
  *FlatDisjuncts_4 = ((MR_Word) (conv1_FlatDisjuncts_4));
}

void MR_CALL 
hlds__goal_util__flatten_conj_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word FlatConjTail_6;
    MR_Word SubGoals_7;
    MR_Word Var_9;
    MR_Word Var_10;

    hlds__goal_util__flatten_conj_2_p_0(Goals0_4, &FlatConjTail_6);
    Var_9 = ((MR_Word) ((MR_hl_field(0, Goal_3, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) Var_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_10 = ((MR_Unsigned) ((MR_hl_field(3, Var_9, (MR_Integer) 1))) & (MR_Integer) 1);
      SubGoals_7 = ((MR_Word) ((MR_hl_field(3, Var_9, (MR_Integer) 2))));
      succeeded = (Var_10 == (MR_Integer) 0);
    }
    if (succeeded)
      *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SubGoals_7, FlatConjTail_6);
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_3));
        MR_hl_field(1, base, 1) = ((MR_Box) (FlatConjTail_6));
      }
  }
}

static void MR_CALL 
hlds__goal_util__switch_to_disjunction_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Disjunct_14;
  MR_Word conv1_STATE_VARIABLE_VarTable_55;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_57;

  hlds__goal_util__case_to_disjunct_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_Disjunct_14, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_VarTable_55, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_ModuleInfo_57);
  *wrapper_arg_2 = ((MR_Box) (conv2_Disjunct_14));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_VarTable_55));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_57));
}

void MR_CALL 
hlds__goal_util__switch_to_disjunction_8_p_0(
  MR_Word Var_1,
  MR_Word HeadVar__2_2,
  MR_Word InstMap_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarTable_0_5,
  MR_Word * STATE_VARIABLE_VarTable_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
    *STATE_VARIABLE_VarTable_6 = STATE_VARIABLE_VarTable_0_5;
  }
  else
  {
    MR_Word Case_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cases_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word MainConsId_24 = ((MR_Word) ((MR_hl_field(0, Case_18, (MR_Integer) 0))));
    MR_Word OtherConsIds_25 = ((MR_Word) ((MR_hl_field(0, Case_18, (MR_Integer) 1))));
    MR_Word CaseGoal_26 = ((MR_Word) ((MR_hl_field(0, Case_18, (MR_Integer) 2))));
    MR_Word MainDisjunctGoal_27;
    MR_Word OtherDisjunctGoals_28;
    MR_Word CasesGoals_29;
    MR_Word STATE_VARIABLE_VarTable_34_34;
    MR_Word STATE_VARIABLE_ModuleInfo_35_35;
    MR_Word Var_36;
    MR_Word STATE_VARIABLE_VarTable_37_37;
    MR_Word STATE_VARIABLE_ModuleInfo_38_38;
    MR_Word Var_41;
    MR_Box conv4_STATE_VARIABLE_VarTable_37_37;
    MR_Box conv3_STATE_VARIABLE_ModuleInfo_38_38;

    hlds__goal_util__case_to_disjunct_9_p_0(Var_1, CaseGoal_26, InstMap_3, MainConsId_24, &MainDisjunctGoal_27, STATE_VARIABLE_VarTable_0_5, &STATE_VARIABLE_VarTable_34_34, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_35_35);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_7[0]));
      MR_hl_field(0, Var_36, 1) = ((MR_Box) (hlds__goal_util__switch_to_disjunction_8_p_0_1));
      MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_36, 3) = ((MR_Box) (Var_1));
      MR_hl_field(0, Var_36, 4) = ((MR_Box) (CaseGoal_26));
      MR_hl_field(0, Var_36, 5) = ((MR_Box) (InstMap_3));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_36, OtherConsIds_25, &OtherDisjunctGoals_28, ((MR_Box) (STATE_VARIABLE_VarTable_34_34)), &conv4_STATE_VARIABLE_VarTable_37_37, ((MR_Box) (STATE_VARIABLE_ModuleInfo_35_35)), &conv3_STATE_VARIABLE_ModuleInfo_38_38);
    STATE_VARIABLE_VarTable_37_37 = ((MR_Word) (conv4_STATE_VARIABLE_VarTable_37_37));
    STATE_VARIABLE_ModuleInfo_38_38 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_38_38));
    hlds__goal_util__switch_to_disjunction_8_p_0(Var_1, Cases_19, InstMap_3, &CasesGoals_29, STATE_VARIABLE_VarTable_37_37, STATE_VARIABLE_VarTable_6, STATE_VARIABLE_ModuleInfo_38_38, STATE_VARIABLE_ModuleInfo_8);
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (MainDisjunctGoal_27));
      MR_hl_field(1, Var_41, 1) = ((MR_Box) (OtherDisjunctGoals_28));
    }
    *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_41, CasesGoals_29);
  }
}

static void MR_CALL 
hlds__goal_util__case_to_disjunct_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__2_66;

  hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1775__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_LambdaHeadVar__2_66);
  *wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_66));
}

static void MR_CALL 
hlds__goal_util__case_to_disjunct_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;
  MR_Word conv1_HeadVar__4_4;

  parse_tree__var_table__add_var_entry_4_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2, ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
}

static void MR_CALL 
hlds__goal_util__case_to_disjunct_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_59;

  hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1759__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_59);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_59));
}

void MR_CALL 
hlds__goal_util__case_to_disjunct_9_p_0(
  MR_Word Var_10,
  MR_Word CaseGoal_11,
  MR_Word InstMap_12,
  MR_Word ConsId_13,
  MR_Word * Disjunct_14,
  MR_Word STATE_VARIABLE_VarTable_0_54,
  MR_Word * STATE_VARIABLE_VarTable_55,
  MR_Word STATE_VARIABLE_ModuleInfo_0_56,
  MR_Word * STATE_VARIABLE_ModuleInfo_57)
{
  MR_bool succeeded;
  MR_Integer ConsArity_17;
  MR_Word VarType_18;
  MR_Word ArgTypes_19;
  MR_Word MakeArgEntry_20;
  MR_Word ArgEntries_23;
  MR_Word ArgVars_24;
  MR_Word Inst0_25;
  MR_Word ArgInsts_28;
  MR_Word UniModes_32;
  MR_Word UnifyMode_33;
  MR_Word Unification_35;
  MR_Word RHS_36;
  MR_Word ExtraGoalExpr_37;
  MR_Word NonLocals_38;
  MR_Word ExtraInstMapDelta0_39;
  MR_Word ExtraInstMapDelta_40;
  MR_Word ExtraGoalInfo_41;
  MR_Word CaseGoalConj_42;
  MR_Word GoalList_43;
  MR_Word CaseGoalInfo_45;
  MR_Word CaseNonLocals0_46;
  MR_Word CaseNonLocals_47;
  MR_Word CaseInstMapDelta_48;
  MR_Word InstMapDelta_49;
  MR_Word CaseDetism0_50;
  MR_Word Detism_51;
  MR_Word CasePurity_52;
  MR_Word CombinedGoalInfo_53;
  MR_Word Var_81;
  MR_Word Var_84;
  MR_Box conv3_STATE_VARIABLE_VarTable_55;
  MR_Word ArgInsts1_27;
  MR_Word Inst1_26;

  ConsArity_17 = parse_tree__prog_util__cons_id_arity_1_f_0(ConsId_13);
  parse_tree__var_table__lookup_var_type_3_p_0(STATE_VARIABLE_VarTable_0_54, Var_10, &VarType_18);
  check_hlds__type_util__get_cons_id_arg_types_4_p_0(STATE_VARIABLE_ModuleInfo_0_56, VarType_18, ConsId_13, &ArgTypes_19);
  {
    MakeArgEntry_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MakeArgEntry_20, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[6]));
    MR_hl_field(0, MakeArgEntry_20, 1) = ((MR_Box) (hlds__goal_util__case_to_disjunct_9_p_0_1));
    MR_hl_field(0, MakeArgEntry_20, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, MakeArgEntry_20, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_56));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), MakeArgEntry_20, ArgTypes_19, &ArgEntries_23);
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), (MR_Word) (&hlds__goal_util_scalar_common_4[14]), ArgEntries_23, &ArgVars_24, ((MR_Box) (STATE_VARIABLE_VarTable_0_54)), &conv3_STATE_VARIABLE_VarTable_55);
  *STATE_VARIABLE_VarTable_55 = ((MR_Word) (conv3_STATE_VARIABLE_VarTable_55));
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap_12, Var_10, &Inst0_25);
  check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_56, Inst0_25, &Inst1_26);
  succeeded = parse_tree__prog_mode__get_arg_insts_4_p_0(Inst1_26, ConsId_13, ConsArity_17, &ArgInsts1_27);
  if (succeeded)
    ArgInsts_28 = ArgInsts1_27;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_util.case_to_disjunct\'/9", (MR_String) "get_arg_insts failed");
      return;
    }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), (MR_Word) (&hlds__goal_util_scalar_common_4[15]), ArgInsts_28, &UniModes_32);
  {
    UnifyMode_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnifyMode_33, 0) = ((MR_Box) (Inst0_25));
    MR_hl_field(0, UnifyMode_33, 1) = ((MR_Box) (Inst0_25));
    MR_hl_field(0, UnifyMode_33, 2) = ((MR_Box) (Inst0_25));
    MR_hl_field(0, UnifyMode_33, 3) = ((MR_Box) (Inst0_25));
  }
  {
    Unification_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Unification_35, 0) = ((MR_Box) (Var_10));
    MR_hl_field(1, Unification_35, 1) = ((MR_Box) (ConsId_13));
    MR_hl_field(1, Unification_35, 2) = ((MR_Box) (ArgVars_24));
    MR_hl_field(1, Unification_35, 3) = ((MR_Box) (UniModes_32));
    MR_hl_field(1, Unification_35, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
  }
  {
    RHS_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RHS_36, 0) = ((MR_Box) (ConsId_13));
    MR_hl_field(1, RHS_36, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, RHS_36, 2) = ((MR_Box) (ArgVars_24));
  }
  {
    ExtraGoalExpr_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ExtraGoalExpr_37, 0) = ((MR_Box) (Var_10));
    MR_hl_field(1, ExtraGoalExpr_37, 1) = ((MR_Box) (RHS_36));
    MR_hl_field(1, ExtraGoalExpr_37, 2) = ((MR_Box) (UnifyMode_33));
    MR_hl_field(1, ExtraGoalExpr_37, 3) = ((MR_Box) (Unification_35));
    MR_hl_field(1, ExtraGoalExpr_37, 4) = ((MR_Box) (&hlds__goal_util_scalar_common_1[5]));
  }
  NonLocals_38 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_10);
  hlds__instmap__instmap_delta_init_reachable_1_p_0(&ExtraInstMapDelta0_39);
  hlds__instmap__instmap_delta_bind_var_to_functor_8_p_0(Var_10, VarType_18, ConsId_13, InstMap_12, ExtraInstMapDelta0_39, &ExtraInstMapDelta_40, STATE_VARIABLE_ModuleInfo_0_56, STATE_VARIABLE_ModuleInfo_57);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_38, ExtraInstMapDelta_40, (MR_Integer) 1, (MR_Integer) 0, &ExtraGoalInfo_41);
  hlds__hlds_goal__goal_to_conj_list_2_p_0(CaseGoal_11, &CaseGoalConj_42);
  {
    Var_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_81, 0) = ((MR_Box) (ExtraGoalExpr_37));
    MR_hl_field(0, Var_81, 1) = ((MR_Box) (ExtraGoalInfo_41));
  }
  {
    GoalList_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GoalList_43, 0) = ((MR_Box) (Var_81));
    MR_hl_field(1, GoalList_43, 1) = ((MR_Box) (CaseGoalConj_42));
  }
  CaseGoalInfo_45 = ((MR_Word) ((MR_hl_field(0, CaseGoal_11, (MR_Integer) 1))));
  CaseNonLocals0_46 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(CaseGoalInfo_45);
  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_10, CaseNonLocals0_46, &CaseNonLocals_47);
  CaseInstMapDelta_48 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CaseGoalInfo_45);
  hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(ExtraInstMapDelta_40, CaseInstMapDelta_48, (MR_Integer) 2, &InstMapDelta_49);
  CaseDetism0_50 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(CaseGoalInfo_45);
  parse_tree__prog_detism__det_conjunction_detism_3_p_0((MR_Integer) 1, CaseDetism0_50, &Detism_51);
  CasePurity_52 = hlds__hlds_goal__goal_info_get_purity_1_f_0(CaseGoalInfo_45);
  hlds__hlds_goal__goal_info_init_5_p_0(CaseNonLocals_47, InstMapDelta_49, Detism_51, CasePurity_52, &CombinedGoalInfo_53);
  {
    Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_84, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_84, 2) = ((MR_Box) (GoalList_43));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Disjunct_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_84));
    MR_hl_field(0, base, 1) = ((MR_Box) (CombinedGoalInfo_53));
  }
}

void MR_CALL 
hlds__goal_util__goal_is_atomic_2_p_0(
  MR_Word Goal_3,
  MR_Word * GoalIsAtomic_4)
{
  MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(0, Goal_3, (MR_Integer) 0))));

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
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 0))))) {
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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_util.goal_is_atomic\'/2", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0_2_env_0_s * env_ptr = (struct hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0_2_env_0__conv0_LambdaHeadVar__1_16));
  ((env_ptr)->hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0_2_env_0__cont)((env_ptr)->hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0_2_env_0_s env;

  (env).hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0_2_env_0__cont = cont;
  (env).hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    hlds__goal_util__IntroducedFrom__pred__pred_proc_ids_called_from_goal__1709__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), &(env).hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0_2_env_0__conv0_LambdaHeadVar__1_16, hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0_1, &env);
  }
}

void MR_CALL 
hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0(
  MR_Word Goal_3,
  MR_Word * PredProcIds_4)
{
  MR_Word P_5;

  {
    P_5 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, P_5, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_3[3]));
    MR_hl_field(0, P_5, 1) = ((MR_Box) (hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0_2));
    MR_hl_field(0, P_5, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, P_5, 3) = ((MR_Box) (Goal_3));
  }
  mercury__solutions__solutions_2_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), P_5, PredProcIds_4);
}

static void MR_CALL 
hlds__goal_util__pred_ids_args_called_from_goal_2_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__goal_util__pred_ids_args_called_from_goal_2_p_0_2_env_0_s * env_ptr = (struct hlds__goal_util__pred_ids_args_called_from_goal_2_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->hlds__goal_util__pred_ids_args_called_from_goal_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->hlds__goal_util__pred_ids_args_called_from_goal_2_p_0_2_env_0__conv0_LambdaHeadVar__1_15));
  ((env_ptr)->hlds__goal_util__pred_ids_args_called_from_goal_2_p_0_2_env_0__cont)((env_ptr)->hlds__goal_util__pred_ids_args_called_from_goal_2_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
hlds__goal_util__pred_ids_args_called_from_goal_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct hlds__goal_util__pred_ids_args_called_from_goal_2_p_0_2_env_0_s env;

  (env).hlds__goal_util__pred_ids_args_called_from_goal_2_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).hlds__goal_util__pred_ids_args_called_from_goal_2_p_0_2_env_0__cont = cont;
  (env).hlds__goal_util__pred_ids_args_called_from_goal_2_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    hlds__goal_util__IntroducedFrom__pred__pred_ids_args_called_from_goal__1701__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), &(env).hlds__goal_util__pred_ids_args_called_from_goal_2_p_0_2_env_0__conv0_LambdaHeadVar__1_15, hlds__goal_util__pred_ids_args_called_from_goal_2_p_0_1, &env);
  }
}

void MR_CALL 
hlds__goal_util__pred_ids_args_called_from_goal_2_p_0(
  MR_Word Goal_3,
  MR_Word * List_4)
{
  MR_Word P_5;

  {
    P_5 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, P_5, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_3[2]));
    MR_hl_field(0, P_5, 1) = ((MR_Box) (hlds__goal_util__pred_ids_args_called_from_goal_2_p_0_2));
    MR_hl_field(0, P_5, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, P_5, 3) = ((MR_Box) (Goal_3));
  }
  mercury__solutions__solutions_2_p_1((MR_Word) (&hlds__goal_util_scalar_common_2[0]), P_5, List_4);
}

static void MR_CALL 
hlds__goal_util__pred_ids_called_from_goal_2_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__goal_util__pred_ids_called_from_goal_2_p_0_2_env_0_s * env_ptr = (struct hlds__goal_util__pred_ids_called_from_goal_2_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->hlds__goal_util__pred_ids_called_from_goal_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->hlds__goal_util__pred_ids_called_from_goal_2_p_0_2_env_0__conv0_LambdaHeadVar__1_15));
  ((env_ptr)->hlds__goal_util__pred_ids_called_from_goal_2_p_0_2_env_0__cont)((env_ptr)->hlds__goal_util__pred_ids_called_from_goal_2_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
hlds__goal_util__pred_ids_called_from_goal_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct hlds__goal_util__pred_ids_called_from_goal_2_p_0_2_env_0_s env;

  (env).hlds__goal_util__pred_ids_called_from_goal_2_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).hlds__goal_util__pred_ids_called_from_goal_2_p_0_2_env_0__cont = cont;
  (env).hlds__goal_util__pred_ids_called_from_goal_2_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), &(env).hlds__goal_util__pred_ids_called_from_goal_2_p_0_2_env_0__conv0_LambdaHeadVar__1_15, hlds__goal_util__pred_ids_called_from_goal_2_p_0_1, &env);
  }
}

void MR_CALL 
hlds__goal_util__pred_ids_called_from_goal_2_p_0(
  MR_Word Goal_3,
  MR_Word * PredIds_4)
{
  MR_Word P_5;

  {
    P_5 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, P_5, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_3[1]));
    MR_hl_field(0, P_5, 1) = ((MR_Box) (hlds__goal_util__pred_ids_called_from_goal_2_p_0_2));
    MR_hl_field(0, P_5, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, P_5, 3) = ((MR_Box) (Goal_3));
  }
  mercury__solutions__solutions_2_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), P_5, PredIds_4);
}

static void MR_CALL 
hlds__goal_util__pred_ids_called_from_goals_2_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__goal_util__pred_ids_called_from_goals_2_p_0_2_env_0_s * env_ptr = (struct hlds__goal_util__pred_ids_called_from_goals_2_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->hlds__goal_util__pred_ids_called_from_goals_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->hlds__goal_util__pred_ids_called_from_goals_2_p_0_2_env_0__conv0_LambdaHeadVar__1_15));
  ((env_ptr)->hlds__goal_util__pred_ids_called_from_goals_2_p_0_2_env_0__cont)((env_ptr)->hlds__goal_util__pred_ids_called_from_goals_2_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
hlds__goal_util__pred_ids_called_from_goals_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct hlds__goal_util__pred_ids_called_from_goals_2_p_0_2_env_0_s env;

  (env).hlds__goal_util__pred_ids_called_from_goals_2_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).hlds__goal_util__pred_ids_called_from_goals_2_p_0_2_env_0__cont = cont;
  (env).hlds__goal_util__pred_ids_called_from_goals_2_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    hlds__goal_util__IntroducedFrom__pred__pred_ids_called_from_goal__1693__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), &(env).hlds__goal_util__pred_ids_called_from_goals_2_p_0_2_env_0__conv0_LambdaHeadVar__1_15, hlds__goal_util__pred_ids_called_from_goals_2_p_0_1, &env);
  }
}

void MR_CALL 
hlds__goal_util__pred_ids_called_from_goals_2_p_0(
  MR_Word Goals_3,
  MR_Word * PredIds_4)
{
  if ((Goals_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *PredIds_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadGoal_5 = ((MR_Word) ((MR_hl_field(1, Goals_3, (MR_Integer) 0))));
    MR_Word TailGoals_6 = ((MR_Word) ((MR_hl_field(1, Goals_3, (MR_Integer) 1))));
    MR_Word HeadPredIds_7;
    MR_Word TailPredIds_8;
    MR_Word P_10;

    {
      P_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, P_10, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_3[1]));
      MR_hl_field(0, P_10, 1) = ((MR_Box) (hlds__goal_util__pred_ids_called_from_goals_2_p_0_2));
      MR_hl_field(0, P_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, P_10, 3) = ((MR_Box) (HeadGoal_5));
    }
    mercury__solutions__solutions_2_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), P_10, &HeadPredIds_7);
    hlds__goal_util__pred_ids_called_from_goals_2_p_0(TailGoals_6, &TailPredIds_8);
    *PredIds_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), HeadPredIds_7, TailPredIds_8);
  }
}

static void MR_CALL 
hlds__goal_util__goal_contains_goal_2_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__goal_util__goal_contains_goal_2_p_0_env_0_s * env_ptr = (struct hlds__goal_util__goal_contains_goal_2_p_0_env_0_s *) (env_ptr_arg);

  hlds__goal_util__goal_contains_goal_2_p_0((env_ptr)->hlds__goal_util__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7, (env_ptr)->hlds__goal_util__goal_contains_goal_2_p_0_env_0__HeadVar__2_2, (env_ptr)->hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont, (env_ptr)->hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont_env_ptr);
}

void MR_CALL 
hlds__goal_util__goal_contains_goal_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct hlds__goal_util__goal_contains_goal_2_p_0_env_0_s env;

  (env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__HeadVar__2_2 = HeadVar__2_2;
  (env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont = cont;
  (env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
  *((env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__HeadVar__2_2) = HeadVar__1_1;
  ((env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont)((env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__cont_env_ptr);
  {
    MR_Word GoalExpr_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

    hlds__goal_util__direct_subgoal_2_p_0(GoalExpr_4, &(env).hlds__goal_util__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7, hlds__goal_util__goal_contains_goal_2_p_0_1, &env);
  }
}

static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s * env_ptr = (struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s *) (env_ptr_arg);

  *((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = ((MR_Word) ((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__conv0_Goal_2));
  ((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s * env_ptr = (struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s *) (env_ptr_arg);

  *((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = ((MR_Word) ((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__conv1_Goal_2));
  ((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_4(
  void * env_ptr_arg)
{
  struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s * env_ptr = (struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Case_20 = ((MR_Word) ((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__conv2_Case_20));
  hlds__goal_util__direct_subgoal_2_p_0_3(env_ptr);
}

static void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0_3(
  void * env_ptr_arg)
{
  struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s * env_ptr = (struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Case_20, (MR_Integer) 0))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Case_20, (MR_Integer) 1))));

    *((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__Case_20, (MR_Integer) 2))));
    ((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((env_ptr)->hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
  }
}

void MR_CALL 
hlds__goal_util__direct_subgoal_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Goal_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct hlds__goal_util__direct_subgoal_2_p_0_env_0_s env;

  (env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2 = Goal_2;
  (env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont = cont;
  (env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    case (MR_Integer) 0:
      {
        *((env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = (MR_Word) ((MR_Word) (HeadVar__1_1));
        ((env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        case (MR_Integer) 2:
          {
            MR_Word ConjList_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
            MR_Word _ConjType_11 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));

            mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), &(env).hlds__goal_util__direct_subgoal_2_p_0_env_0__conv0_Goal_2, ConjList_12, hlds__goal_util__direct_subgoal_2_p_0_1, &env);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word DisjList_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));

            mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), &(env).hlds__goal_util__direct_subgoal_2_p_0_env_0__conv1_Goal_2, DisjList_14, hlds__goal_util__direct_subgoal_2_p_0_2, &env);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word CaseList_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
            MR_Word Var_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
            MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2)));

            mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), &(env).hlds__goal_util__direct_subgoal_2_p_0_env_0__conv2_Case_20, CaseList_18, hlds__goal_util__direct_subgoal_2_p_0_4, &env);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Var_3 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));

            *((env).hlds__goal_util__direct_subgoal_2_p_0_env_0__Goal_2) = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
            ((env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont)((env).hlds__goal_util__direct_subgoal_2_p_0_env_0__cont_env_ptr);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Cond_7 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
            MR_Word Then_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
            MR_Word Else_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 4))));
            MR_Word Var_6 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));

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

void MR_CALL 
hlds__goal_util__goal_contains_reconstruction_2_p_0(
  MR_Word Goal_3,
  MR_Word * ContainsReconstruction_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(0, Goal_3, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_17 = (MR_Word) ((MR_Word) (GoalExpr_5));
          MR_Word next_value_of_Goal_3 = SubGoal_17;

          // direct tailcall eliminated
          ;
          Goal_3 = next_value_of_Goal_3;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unify_24 = ((MR_Word) ((MR_hl_field(1, GoalExpr_5, (MR_Integer) 3))));
          MR_Word HowToConstruct_30;

          succeeded = ((MR_tag((MR_Word) Unify_24)) == (MR_Integer) 0);
          if (succeeded)
          {
            HowToConstruct_30 = ((MR_Word) ((MR_hl_field(0, Unify_24, (MR_Integer) 4))));
            succeeded = ((MR_tag((MR_Word) HowToConstruct_30)) == (MR_Integer) 1);
            if (succeeded)
            {
            }
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
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *ContainsReconstruction_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Conjuncts_8 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 2))));

              hlds__goal_util__goals_contain_reconstruction_2_p_0(Conjuncts_8, ContainsReconstruction_4);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts_9 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 1))));

              hlds__goal_util__goals_contain_reconstruction_2_p_0(Disjuncts_9, ContainsReconstruction_4);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 3))));

              hlds__goal_util__cases_contain_reconstruction_2_p_0(Cases_12, ContainsReconstruction_4);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 1))));
              MR_Word SubGoal_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 2))));
              MR_Word FGT_20;

              succeeded = ((((MR_tag((MR_Word) Reason_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_18, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_20 = ((MR_Unsigned) ((MR_hl_field(3, Reason_18, (MR_Integer) 2))) & (MR_Integer) 3);
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
                ;
                Goal_3 = next_value_of_Goal_3;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 2))));
              MR_Word Then_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 3))));
              MR_Word Else_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 4))));

              {
                MR_Word Var_73;

                hlds__goal_util__goal_contains_reconstruction_2_p_0(Cond_14, &Var_73);
                succeeded = ((MR_Integer) 1 == Var_73);
              }
              if (!(succeeded))
              {
                {
                  MR_Word Var_74;

                  hlds__goal_util__goal_contains_reconstruction_2_p_0(Then_15, &Var_74);
                  succeeded = ((MR_Integer) 1 == Var_74);
                }
                if (!(succeeded))
                {
                  MR_Word Var_75;

                  hlds__goal_util__goal_contains_reconstruction_2_p_0(Else_16, &Var_75);
                  succeeded = ((MR_Integer) 1 == Var_75);
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
              MR_Word Shorthand_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Shorthand_52)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA_53 = ((MR_Word) ((MR_hl_field(0, Shorthand_52, (MR_Integer) 0))));
                    MR_Word GoalB_54 = ((MR_Word) ((MR_hl_field(0, Shorthand_52, (MR_Integer) 1))));
                    MR_Word Var_68;
                    MR_Word Var_76;
                    MR_Word Var_77;

                    hlds__goal_util__goal_contains_reconstruction_2_p_0(GoalA_53, &Var_76);
                    succeeded = ((MR_Integer) 1 == Var_76);
                    if (succeeded)
                    {
                      Var_68 = (MR_Integer) 1;
                      hlds__goal_util__goal_contains_reconstruction_2_p_0(GoalB_54, &Var_77);
                      succeeded = (Var_68 == Var_77);
                    }
                    if (succeeded)
                      *ContainsReconstruction_4 = (MR_Integer) 1;
                    else
                      *ContainsReconstruction_4 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_59 = ((MR_Word) ((MR_hl_field(1, Shorthand_52, (MR_Integer) 4))));
                    MR_Word OrElseGoals_60 = ((MR_Word) ((MR_hl_field(1, Shorthand_52, (MR_Integer) 5))));
                    MR_Word Var_70;
                    MR_Word Var_78;
                    MR_Word Var_79;

                    hlds__goal_util__goal_contains_reconstruction_2_p_0(MainGoal_59, &Var_78);
                    succeeded = ((MR_Integer) 1 == Var_78);
                    if (succeeded)
                    {
                      Var_70 = (MR_Integer) 1;
                      hlds__goal_util__goals_contain_reconstruction_2_p_0(OrElseGoals_60, &Var_79);
                      succeeded = (Var_70 == Var_79);
                    }
                    if (succeeded)
                      *ContainsReconstruction_4 = (MR_Integer) 1;
                    else
                      *ContainsReconstruction_4 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_72 = ((MR_Word) ((MR_hl_field(2, Shorthand_52, (MR_Integer) 2))));
                    MR_Word next_value_of_Goal_3 = SubGoal_72;

                    // direct tailcall eliminated
                    ;
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Case_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word CaseGoal_8 = ((MR_Word) ((MR_hl_field(0, Case_3, (MR_Integer) 2))));
      MR_Word HeadContainsReconstruction_9;

      hlds__goal_util__goal_contains_reconstruction_2_p_0(CaseGoal_8, &HeadContainsReconstruction_9);
      switch (HeadContainsReconstruction_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Cases_4;

            // direct tailcall eliminated
            ;
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word HeadContainsReconstruction_6;

      hlds__goal_util__goal_contains_reconstruction_2_p_0(Goal_3, &HeadContainsReconstruction_6);
      switch (HeadContainsReconstruction_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Goals_4;

            // direct tailcall eliminated
            ;
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
  MR_Word CalledPredProcIds_6;
  MR_Word Var_7;

  Var_7 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
  hlds__goal_util__goal_list_calls_proc_in_set_acc_4_p_0(Goals_4, PredProcIds_5, Var_7, &CalledPredProcIds_6);
  return CalledPredProcIds_6;
}

MR_Word MR_CALL 
hlds__goal_util__goal_calls_proc_in_set_2_f_0(
  MR_Word Goal_4,
  MR_Word PredProcIds_5)
{
  MR_Word CalledPredProcIds_6;
  MR_Word Var_7;

  Var_7 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
  hlds__goal_util__goal_calls_proc_in_set_acc_4_p_0(Goal_4, PredProcIds_5, Var_7, &CalledPredProcIds_6);
  return CalledPredProcIds_6;
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
    MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goal_41 = (MR_Word) ((MR_Word) (GoalExpr_5));
          MR_Word next_value_of_HeadVar__1_1 = Goal_41;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_CalledSet_59 = STATE_VARIABLE_CalledSet_0_58;
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_14 = ((MR_Word) ((MR_hl_field(2, GoalExpr_5, (MR_Integer) 0))));
          MR_Integer ProcId_15 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_5, (MR_Integer) 1))));
          MR_Word Var_60;

          {
            Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_60, 0) = ((MR_Box) (PredId_14));
            MR_hl_field(0, Var_60, 1) = ((MR_Box) (ProcId_15));
          }
          succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (Var_60)), PredProcIds_7);
          if (succeeded)
            mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (Var_60)), STATE_VARIABLE_CalledSet_0_58, STATE_VARIABLE_CalledSet_59);
          else
            *STATE_VARIABLE_CalledSet_59 = STATE_VARIABLE_CalledSet_0_58;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_CalledSet_59 = STATE_VARIABLE_CalledSet_0_58;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_CalledSet_59 = STATE_VARIABLE_CalledSet_0_58;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 2))));

              hlds__goal_util__goal_list_calls_proc_in_set_acc_4_p_0(Goals_33, PredProcIds_7, STATE_VARIABLE_CalledSet_0_58, STATE_VARIABLE_CalledSet_59);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_76 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 1))));

              hlds__goal_util__goal_list_calls_proc_in_set_acc_4_p_0(Goals_76, PredProcIds_7, STATE_VARIABLE_CalledSet_0_58, STATE_VARIABLE_CalledSet_59);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 3))));

              hlds__goal_util__case_list_calls_proc_in_list_acc_4_p_0(Cases_36, PredProcIds_7, STATE_VARIABLE_CalledSet_0_58, STATE_VARIABLE_CalledSet_59);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 1))));
              MR_Word Goal_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 2))));
              MR_Word FGT_44;

              succeeded = ((((MR_tag((MR_Word) Reason_42)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_42, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_44 = ((MR_Unsigned) ((MR_hl_field(3, Reason_42, (MR_Integer) 2))) & (MR_Integer) 3);
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
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 2))));
              MR_Word Then_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 3))));
              MR_Word Else_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_CalledSet_66_66;
              MR_Word STATE_VARIABLE_CalledSet_67_67;
              MR_Word next_value_of_HeadVar__1_1;
              MR_Word next_value_of_STATE_VARIABLE_CalledSet_0_58;

              hlds__goal_util__goal_calls_proc_in_set_acc_4_p_0(Cond_38, PredProcIds_7, STATE_VARIABLE_CalledSet_0_58, &STATE_VARIABLE_CalledSet_66_66);
              hlds__goal_util__goal_calls_proc_in_set_acc_4_p_0(Then_39, PredProcIds_7, STATE_VARIABLE_CalledSet_66_66, &STATE_VARIABLE_CalledSet_67_67);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Else_40;
              next_value_of_STATE_VARIABLE_CalledSet_0_58 = STATE_VARIABLE_CalledSet_67_67;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              STATE_VARIABLE_CalledSet_0_58 = next_value_of_STATE_VARIABLE_CalledSet_0_58;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_45)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_util.goal_calls_proc_in_set_acc\'/4", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_50 = ((MR_Word) ((MR_hl_field(1, ShortHand_45, (MR_Integer) 4))));
                    MR_Word OrElseGoals_51 = ((MR_Word) ((MR_hl_field(1, ShortHand_45, (MR_Integer) 5))));
                    MR_Word STATE_VARIABLE_CalledSet_71_71;

                    hlds__goal_util__goal_calls_proc_in_set_acc_4_p_0(MainGoal_50, PredProcIds_7, STATE_VARIABLE_CalledSet_0_58, &STATE_VARIABLE_CalledSet_71_71);
                    hlds__goal_util__goal_list_calls_proc_in_set_acc_4_p_0(OrElseGoals_51, PredProcIds_7, STATE_VARIABLE_CalledSet_71_71, STATE_VARIABLE_CalledSet_59);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_55 = ((MR_Word) ((MR_hl_field(2, ShortHand_45, (MR_Integer) 2))));
                    MR_Word next_value_of_HeadVar__1_1 = SubGoal_55;

                    // direct tailcall eliminated
                    ;
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CalledSet_4 = STATE_VARIABLE_CalledSet_0_3;
    else
    {
      MR_Word Case_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(0, Case_9, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_CalledSet_18_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CalledSet_0_3;

      hlds__goal_util__goal_calls_proc_in_set_acc_4_p_0(Goal_15, PredProcIds_2, STATE_VARIABLE_CalledSet_0_3, &STATE_VARIABLE_CalledSet_18_18);
      // direct tailcall eliminated
      ;
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CalledSet_4 = STATE_VARIABLE_CalledSet_0_3;
    else
    {
      MR_Word Goal_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_CalledSet_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CalledSet_0_3;

      hlds__goal_util__goal_calls_proc_in_set_acc_4_p_0(Goal_9, PredProcIds_2, STATE_VARIABLE_CalledSet_0_3, &STATE_VARIABLE_CalledSet_15_15);
      // direct tailcall eliminated
      ;
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
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Goal_5;
    MR_Word Cases_6;
    MR_Word Var_8;

    // setup for model_non tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Cases_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      Goal_5 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 2))));
      {
        MR_Word GoalExpr_9 = ((MR_Word) ((MR_hl_field(0, Goal_5, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) GoalExpr_9)) {
          case (MR_Integer) 0:
            {
              MR_Word SubGoal_21 = (MR_Word) ((MR_Word) (GoalExpr_9));

              hlds__goal_util__goal_calls_pred_id_2_p_1(SubGoal_21, PredId_7, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 2:
            {
              *PredId_7 = ((MR_Word) ((MR_hl_field(2, GoalExpr_9, (MR_Integer) 0))));
              cont(cont_env_ptr);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 0))))) {
              case (MR_Integer) 2:
                {
                  MR_Word Conjuncts_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));

                  hlds__goal_util__goals_calls_pred_id_2_p_1(Conjuncts_12, PredId_7, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Disjuncts_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));

                  hlds__goal_util__goals_calls_pred_id_2_p_1(Disjuncts_13, PredId_7, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Cases_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 3))));

                  hlds__goal_util__cases_calls_pred_id_2_p_1(Cases_16, PredId_7, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Reason_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));
                  MR_Word SubGoal_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));
                  MR_Word FGT_24;

                  succeeded = ((((MR_tag((MR_Word) Reason_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    FGT_24 = ((MR_Unsigned) ((MR_hl_field(3, Reason_22, (MR_Integer) 2))) & (MR_Integer) 3);
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
                    hlds__goal_util__goal_calls_pred_id_2_p_1(SubGoal_48, PredId_7, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Cond_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));
                  MR_Word Then_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 3))));
                  MR_Word Else_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 4))));

                  hlds__goal_util__goal_calls_pred_id_2_p_1(Cond_18, PredId_7, cont, cont_env_ptr);
                  hlds__goal_util__goal_calls_pred_id_2_p_1(Then_19, PredId_7, cont, cont_env_ptr);
                  hlds__goal_util__goal_calls_pred_id_2_p_1(Else_20, PredId_7, cont, cont_env_ptr);
                }
                break;
            }
            break;
        }
      }
      {
        MR_Word next_value_of_HeadVar__1_1 = Cases_6;

        // direct tailcall eliminated
        ;
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
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Goal_3;
    MR_Word Goals_4;

    // setup for model_non tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Goal_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Goals_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      {
        MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(0, Goal_3, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) GoalExpr_6)) {
          case (MR_Integer) 0:
            {
              MR_Word SubGoal_18 = (MR_Word) ((MR_Word) (GoalExpr_6));

              hlds__goal_util__goal_calls_pred_id_2_p_1(SubGoal_18, PredId_5, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 2:
            {
              *PredId_5 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 0))));
              cont(cont_env_ptr);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 0))))) {
              case (MR_Integer) 2:
                {
                  MR_Word Conjuncts_9 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));

                  hlds__goal_util__goals_calls_pred_id_2_p_1(Conjuncts_9, PredId_5, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Disjuncts_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

                  hlds__goal_util__goals_calls_pred_id_2_p_1(Disjuncts_10, PredId_5, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Cases_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));

                  hlds__goal_util__cases_calls_pred_id_2_p_1(Cases_13, PredId_5, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Reason_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
                  MR_Word SubGoal_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
                  MR_Word FGT_21;

                  succeeded = ((((MR_tag((MR_Word) Reason_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_19, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    FGT_21 = ((MR_Unsigned) ((MR_hl_field(3, Reason_19, (MR_Integer) 2))) & (MR_Integer) 3);
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
                    hlds__goal_util__goal_calls_pred_id_2_p_1(SubGoal_45, PredId_5, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Cond_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
                  MR_Word Then_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
                  MR_Word Else_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));

                  hlds__goal_util__goal_calls_pred_id_2_p_1(Cond_15, PredId_5, cont, cont_env_ptr);
                  hlds__goal_util__goal_calls_pred_id_2_p_1(Then_16, PredId_5, cont, cont_env_ptr);
                  hlds__goal_util__goal_calls_pred_id_2_p_1(Else_17, PredId_5, cont, cont_env_ptr);
                }
                break;
            }
            break;
        }
      }
      {
        MR_Word next_value_of_HeadVar__1_1 = Goals_4;

        // direct tailcall eliminated
        ;
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
    MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

    // setup for model_non tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_3)) {
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_16 = (MR_Word) ((MR_Word) (GoalExpr_3));
          MR_Word next_value_of_HeadVar__1_1 = SubGoal_16;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          *PredId_5 = ((MR_Word) ((MR_hl_field(2, GoalExpr_3, (MR_Integer) 0))));
          cont(cont_env_ptr);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 0))))) {
          case (MR_Integer) 2:
            {
              MR_Word Conjuncts_7 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));

              hlds__goal_util__goals_calls_pred_id_2_p_1(Conjuncts_7, PredId_5, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts_8 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 1))));

              hlds__goal_util__goals_calls_pred_id_2_p_1(Disjuncts_8, PredId_5, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 3))));

              hlds__goal_util__cases_calls_pred_id_2_p_1(Cases_11, PredId_5, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 1))));
              MR_Word SubGoal_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));
              MR_Word FGT_19;

              succeeded = ((((MR_tag((MR_Word) Reason_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_17, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_19 = ((MR_Unsigned) ((MR_hl_field(3, Reason_17, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_19) {
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
                MR_Word next_value_of_HeadVar__1_1 = SubGoal_43;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));
              MR_Word Then_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 3))));
              MR_Word Else_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 4))));

              hlds__goal_util__goal_calls_pred_id_2_p_1(Cond_13, PredId_5, cont, cont_env_ptr);
              hlds__goal_util__goal_calls_pred_id_2_p_1(Then_14, PredId_5, cont, cont_env_ptr);
              {
                MR_Word next_value_of_HeadVar__1_1 = Else_15;

                // direct tailcall eliminated
                ;
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
    MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_3)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_16 = (MR_Word) ((MR_Word) (GoalExpr_3));
          MR_Word next_value_of_HeadVar__1_1 = SubGoal_16;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_44 = ((MR_Word) ((MR_hl_field(2, GoalExpr_3, (MR_Integer) 0))));

          succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_5, Var_44);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Conjuncts_7 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));

              succeeded = hlds__goal_util__goals_calls_pred_id_2_p_0(Conjuncts_7, PredId_5);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts_8 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 1))));

              succeeded = hlds__goal_util__goals_calls_pred_id_2_p_0(Disjuncts_8, PredId_5);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 3))));

              succeeded = hlds__goal_util__cases_calls_pred_id_2_p_0(Cases_11, PredId_5);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 1))));
              MR_Word SubGoal_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));
              MR_Word FGT_19;

              succeeded = ((((MR_tag((MR_Word) Reason_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_17, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_19 = ((MR_Unsigned) ((MR_hl_field(3, Reason_17, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_19) {
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
                MR_Word next_value_of_HeadVar__1_1 = SubGoal_43;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));
              MR_Word Then_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 3))));
              MR_Word Else_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 4))));

              succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(Cond_13, PredId_5);
              if (!(succeeded))
              {
                succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(Then_14, PredId_5);
                if (!(succeeded))
                {
                  MR_Word next_value_of_HeadVar__1_1 = Else_15;

                  // direct tailcall eliminated
                  ;
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
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Goal_5;
    MR_Word Cases_6;
    MR_Word Var_8;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Cases_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      Goal_5 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 2))));
      {
        MR_Word GoalExpr_9 = ((MR_Word) ((MR_hl_field(0, Goal_5, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) GoalExpr_9)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word SubGoal_21 = (MR_Word) ((MR_Word) (GoalExpr_9));

              succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(SubGoal_21, PredId_7);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_49 = ((MR_Word) ((MR_hl_field(2, GoalExpr_9, (MR_Integer) 0))));

              succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_7, Var_49);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Conjuncts_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));

                  succeeded = hlds__goal_util__goals_calls_pred_id_2_p_0(Conjuncts_12, PredId_7);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Disjuncts_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));

                  succeeded = hlds__goal_util__goals_calls_pred_id_2_p_0(Disjuncts_13, PredId_7);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Cases_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 3))));

                  succeeded = hlds__goal_util__cases_calls_pred_id_2_p_0(Cases_16, PredId_7);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Reason_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));
                  MR_Word SubGoal_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));
                  MR_Word FGT_24;

                  succeeded = ((((MR_tag((MR_Word) Reason_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    FGT_24 = ((MR_Unsigned) ((MR_hl_field(3, Reason_22, (MR_Integer) 2))) & (MR_Integer) 3);
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
                    succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(SubGoal_48, PredId_7);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Cond_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));
                  MR_Word Then_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 3))));
                  MR_Word Else_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 4))));

                  succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(Cond_18, PredId_7);
                  if (!(succeeded))
                  {
                    succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(Then_19, PredId_7);
                    if (!(succeeded))
                      succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(Else_20, PredId_7);
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
        ;
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
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Goal_3;
    MR_Word Goals_4;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Goal_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Goals_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      {
        MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(0, Goal_3, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) GoalExpr_6)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word SubGoal_18 = (MR_Word) ((MR_Word) (GoalExpr_6));

              succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(SubGoal_18, PredId_5);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_46 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 0))));

              succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_5, Var_46);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Conjuncts_9 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));

                  succeeded = hlds__goal_util__goals_calls_pred_id_2_p_0(Conjuncts_9, PredId_5);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Disjuncts_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

                  succeeded = hlds__goal_util__goals_calls_pred_id_2_p_0(Disjuncts_10, PredId_5);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Cases_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));

                  succeeded = hlds__goal_util__cases_calls_pred_id_2_p_0(Cases_13, PredId_5);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Reason_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
                  MR_Word SubGoal_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
                  MR_Word FGT_21;

                  succeeded = ((((MR_tag((MR_Word) Reason_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_19, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    FGT_21 = ((MR_Unsigned) ((MR_hl_field(3, Reason_19, (MR_Integer) 2))) & (MR_Integer) 3);
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
                    succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(SubGoal_45, PredId_5);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Cond_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
                  MR_Word Then_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
                  MR_Word Else_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));

                  succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(Cond_15, PredId_5);
                  if (!(succeeded))
                  {
                    succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(Then_16, PredId_5);
                    if (!(succeeded))
                      succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0(Else_17, PredId_5);
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
        ;
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
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Goal_5;
    MR_Word Cases_6;
    MR_Word Var_8;

    // setup for model_non tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Cases_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      Goal_5 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 2))));
      {
        MR_Word GoalExpr_9 = ((MR_Word) ((MR_hl_field(0, Goal_5, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) GoalExpr_9)) {
          case (MR_Integer) 0:
            {
              MR_Word SubGoal_21 = (MR_Word) ((MR_Word) (GoalExpr_9));

              hlds__goal_util__goal_calls_2_p_1(SubGoal_21, PredProcId_7, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word PredId_25 = ((MR_Word) ((MR_hl_field(2, GoalExpr_9, (MR_Integer) 0))));
              MR_Integer ProcId_26 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_9, (MR_Integer) 1))));

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *PredProcId_7 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (PredId_25));
                MR_hl_field(0, base, 1) = ((MR_Box) (ProcId_26));
              }
              cont(cont_env_ptr);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 0))))) {
              case (MR_Integer) 2:
                {
                  MR_Word Conjuncts_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));

                  hlds__goal_util__goals_calls_2_p_1(Conjuncts_12, PredProcId_7, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Disjuncts_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));

                  hlds__goal_util__goals_calls_2_p_1(Disjuncts_13, PredProcId_7, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Cases_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 3))));

                  hlds__goal_util__cases_calls_2_p_1(Cases_16, PredProcId_7, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Reason_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));
                  MR_Word SubGoal_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));
                  MR_Word FGT_24;

                  succeeded = ((((MR_tag((MR_Word) Reason_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    FGT_24 = ((MR_Unsigned) ((MR_hl_field(3, Reason_22, (MR_Integer) 2))) & (MR_Integer) 3);
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
                    hlds__goal_util__goal_calls_2_p_1(SubGoal_49, PredProcId_7, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Cond_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));
                  MR_Word Then_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 3))));
                  MR_Word Else_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 4))));

                  hlds__goal_util__goal_calls_2_p_1(Cond_18, PredProcId_7, cont, cont_env_ptr);
                  hlds__goal_util__goal_calls_2_p_1(Then_19, PredProcId_7, cont, cont_env_ptr);
                  hlds__goal_util__goal_calls_2_p_1(Else_20, PredProcId_7, cont, cont_env_ptr);
                }
                break;
            }
            break;
        }
      }
      {
        MR_Word next_value_of_HeadVar__1_1 = Cases_6;

        // direct tailcall eliminated
        ;
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
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Goal_3;
    MR_Word Goals_4;

    // setup for model_non tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Goal_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Goals_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      {
        MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(0, Goal_3, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) GoalExpr_6)) {
          case (MR_Integer) 0:
            {
              MR_Word SubGoal_18 = (MR_Word) ((MR_Word) (GoalExpr_6));

              hlds__goal_util__goal_calls_2_p_1(SubGoal_18, PredProcId_5, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word PredId_22 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 0))));
              MR_Integer ProcId_23 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 1))));

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *PredProcId_5 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (PredId_22));
                MR_hl_field(0, base, 1) = ((MR_Box) (ProcId_23));
              }
              cont(cont_env_ptr);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 0))))) {
              case (MR_Integer) 2:
                {
                  MR_Word Conjuncts_9 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));

                  hlds__goal_util__goals_calls_2_p_1(Conjuncts_9, PredProcId_5, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Disjuncts_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

                  hlds__goal_util__goals_calls_2_p_1(Disjuncts_10, PredProcId_5, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Cases_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));

                  hlds__goal_util__cases_calls_2_p_1(Cases_13, PredProcId_5, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Reason_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
                  MR_Word SubGoal_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
                  MR_Word FGT_21;

                  succeeded = ((((MR_tag((MR_Word) Reason_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_19, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    FGT_21 = ((MR_Unsigned) ((MR_hl_field(3, Reason_19, (MR_Integer) 2))) & (MR_Integer) 3);
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
                    hlds__goal_util__goal_calls_2_p_1(SubGoal_46, PredProcId_5, cont, cont_env_ptr);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Cond_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
                  MR_Word Then_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
                  MR_Word Else_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));

                  hlds__goal_util__goal_calls_2_p_1(Cond_15, PredProcId_5, cont, cont_env_ptr);
                  hlds__goal_util__goal_calls_2_p_1(Then_16, PredProcId_5, cont, cont_env_ptr);
                  hlds__goal_util__goal_calls_2_p_1(Else_17, PredProcId_5, cont, cont_env_ptr);
                }
                break;
            }
            break;
        }
      }
      {
        MR_Word next_value_of_HeadVar__1_1 = Goals_4;

        // direct tailcall eliminated
        ;
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
    MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

    // setup for model_non tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_3)) {
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_16 = (MR_Word) ((MR_Word) (GoalExpr_3));
          MR_Word next_value_of_HeadVar__1_1 = SubGoal_16;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_20 = ((MR_Word) ((MR_hl_field(2, GoalExpr_3, (MR_Integer) 0))));
          MR_Integer ProcId_21 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_3, (MR_Integer) 1))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *PredProcId_5 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (PredId_20));
            MR_hl_field(0, base, 1) = ((MR_Box) (ProcId_21));
          }
          cont(cont_env_ptr);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 0))))) {
          case (MR_Integer) 2:
            {
              MR_Word Conjuncts_7 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));

              hlds__goal_util__goals_calls_2_p_1(Conjuncts_7, PredProcId_5, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts_8 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 1))));

              hlds__goal_util__goals_calls_2_p_1(Disjuncts_8, PredProcId_5, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 3))));

              hlds__goal_util__cases_calls_2_p_1(Cases_11, PredProcId_5, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 1))));
              MR_Word SubGoal_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));
              MR_Word FGT_19;

              succeeded = ((((MR_tag((MR_Word) Reason_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_17, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_19 = ((MR_Unsigned) ((MR_hl_field(3, Reason_17, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_19) {
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
                MR_Word next_value_of_HeadVar__1_1 = SubGoal_44;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));
              MR_Word Then_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 3))));
              MR_Word Else_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 4))));

              hlds__goal_util__goal_calls_2_p_1(Cond_13, PredProcId_5, cont, cont_env_ptr);
              hlds__goal_util__goal_calls_2_p_1(Then_14, PredProcId_5, cont, cont_env_ptr);
              {
                MR_Word next_value_of_HeadVar__1_1 = Else_15;

                // direct tailcall eliminated
                ;
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
    MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_3)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_16 = (MR_Word) ((MR_Word) (GoalExpr_3));
          MR_Word next_value_of_HeadVar__1_1 = SubGoal_16;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_20 = ((MR_Word) ((MR_hl_field(2, GoalExpr_3, (MR_Integer) 0))));
          MR_Integer ProcId_21 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_3, (MR_Integer) 1))));
          MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, PredProcId_5, (MR_Integer) 0))));
          MR_Integer Var_46 = ((MR_Integer) ((MR_hl_field(0, PredProcId_5, (MR_Integer) 1))));

          succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_20, Var_45);
          if (succeeded)
            succeeded = (ProcId_21 == Var_46);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Conjuncts_7 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));

              succeeded = hlds__goal_util__goals_calls_2_p_0(Conjuncts_7, PredProcId_5);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts_8 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 1))));

              succeeded = hlds__goal_util__goals_calls_2_p_0(Disjuncts_8, PredProcId_5);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 3))));

              succeeded = hlds__goal_util__cases_calls_2_p_0(Cases_11, PredProcId_5);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 1))));
              MR_Word SubGoal_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));
              MR_Word FGT_19;

              succeeded = ((((MR_tag((MR_Word) Reason_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_17, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_19 = ((MR_Unsigned) ((MR_hl_field(3, Reason_17, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_19) {
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
                MR_Word next_value_of_HeadVar__1_1 = SubGoal_44;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));
              MR_Word Then_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 3))));
              MR_Word Else_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 4))));

              succeeded = hlds__goal_util__goal_calls_2_p_0(Cond_13, PredProcId_5);
              if (!(succeeded))
              {
                succeeded = hlds__goal_util__goal_calls_2_p_0(Then_14, PredProcId_5);
                if (!(succeeded))
                {
                  MR_Word next_value_of_HeadVar__1_1 = Else_15;

                  // direct tailcall eliminated
                  ;
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
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Goal_5;
    MR_Word Cases_6;
    MR_Word Var_8;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Cases_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      Goal_5 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 2))));
      {
        MR_Word GoalExpr_9 = ((MR_Word) ((MR_hl_field(0, Goal_5, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) GoalExpr_9)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word SubGoal_21 = (MR_Word) ((MR_Word) (GoalExpr_9));

              succeeded = hlds__goal_util__goal_calls_2_p_0(SubGoal_21, PredProcId_7);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word PredId_25 = ((MR_Word) ((MR_hl_field(2, GoalExpr_9, (MR_Integer) 0))));
              MR_Integer ProcId_26 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_9, (MR_Integer) 1))));
              MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, PredProcId_7, (MR_Integer) 0))));
              MR_Integer Var_51 = ((MR_Integer) ((MR_hl_field(0, PredProcId_7, (MR_Integer) 1))));

              succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_25, Var_50);
              if (succeeded)
                succeeded = (ProcId_26 == Var_51);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Conjuncts_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));

                  succeeded = hlds__goal_util__goals_calls_2_p_0(Conjuncts_12, PredProcId_7);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Disjuncts_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));

                  succeeded = hlds__goal_util__goals_calls_2_p_0(Disjuncts_13, PredProcId_7);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Cases_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 3))));

                  succeeded = hlds__goal_util__cases_calls_2_p_0(Cases_16, PredProcId_7);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Reason_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));
                  MR_Word SubGoal_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));
                  MR_Word FGT_24;

                  succeeded = ((((MR_tag((MR_Word) Reason_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    FGT_24 = ((MR_Unsigned) ((MR_hl_field(3, Reason_22, (MR_Integer) 2))) & (MR_Integer) 3);
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
                    succeeded = hlds__goal_util__goal_calls_2_p_0(SubGoal_49, PredProcId_7);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Cond_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));
                  MR_Word Then_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 3))));
                  MR_Word Else_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 4))));

                  succeeded = hlds__goal_util__goal_calls_2_p_0(Cond_18, PredProcId_7);
                  if (!(succeeded))
                  {
                    succeeded = hlds__goal_util__goal_calls_2_p_0(Then_19, PredProcId_7);
                    if (!(succeeded))
                      succeeded = hlds__goal_util__goal_calls_2_p_0(Else_20, PredProcId_7);
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
        ;
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
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Goal_3;
    MR_Word Goals_4;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Goal_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Goals_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      {
        MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(0, Goal_3, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) GoalExpr_6)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word SubGoal_18 = (MR_Word) ((MR_Word) (GoalExpr_6));

              succeeded = hlds__goal_util__goal_calls_2_p_0(SubGoal_18, PredProcId_5);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word PredId_22 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 0))));
              MR_Integer ProcId_23 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 1))));
              MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, PredProcId_5, (MR_Integer) 0))));
              MR_Integer Var_48 = ((MR_Integer) ((MR_hl_field(0, PredProcId_5, (MR_Integer) 1))));

              succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_22, Var_47);
              if (succeeded)
                succeeded = (ProcId_23 == Var_48);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Conjuncts_9 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));

                  succeeded = hlds__goal_util__goals_calls_2_p_0(Conjuncts_9, PredProcId_5);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Disjuncts_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

                  succeeded = hlds__goal_util__goals_calls_2_p_0(Disjuncts_10, PredProcId_5);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Cases_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));

                  succeeded = hlds__goal_util__cases_calls_2_p_0(Cases_13, PredProcId_5);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Reason_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
                  MR_Word SubGoal_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
                  MR_Word FGT_21;

                  succeeded = ((((MR_tag((MR_Word) Reason_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_19, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    FGT_21 = ((MR_Unsigned) ((MR_hl_field(3, Reason_19, (MR_Integer) 2))) & (MR_Integer) 3);
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
                    succeeded = hlds__goal_util__goal_calls_2_p_0(SubGoal_46, PredProcId_5);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Cond_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
                  MR_Word Then_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
                  MR_Word Else_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));

                  succeeded = hlds__goal_util__goal_calls_2_p_0(Cond_15, PredProcId_5);
                  if (!(succeeded))
                  {
                    succeeded = hlds__goal_util__goal_calls_2_p_0(Then_16, PredProcId_5);
                    if (!(succeeded))
                      succeeded = hlds__goal_util__goal_calls_2_p_0(Else_17, PredProcId_5);
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
        ;
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
  MR_Word ReferredToProcs_4;
  MR_Word Var_5;

  Var_5 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
  hlds__goal_util__goal_proc_refs_acc_3_p_0(Goal_3, Var_5, &ReferredToProcs_4);
  return ReferredToProcs_4;
}

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_ReferredToProcs_10;

  hlds__goal_util__case_proc_refs_acc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ReferredToProcs_10);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ReferredToProcs_10));
}

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_ReferredToProcs_88;

  hlds__goal_util__goal_proc_refs_acc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ReferredToProcs_88);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ReferredToProcs_88));
}

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ReferredToProcs_88;

  hlds__goal_util__goal_proc_refs_acc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ReferredToProcs_88);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ReferredToProcs_88));
}

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ReferredToProcs_88;

  hlds__goal_util__goal_proc_refs_acc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ReferredToProcs_88);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ReferredToProcs_88));
}

static void MR_CALL 
hlds__goal_util__goal_proc_refs_acc_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_ReferredToProcs_0_87,
  MR_Word * STATE_VARIABLE_ReferredToProcs_88)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_18 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word next_value_of_Goal_4 = SubGoal_18;

          // direct tailcall eliminated
          ;
          Goal_4 = next_value_of_Goal_4;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RHS_47 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 1))));
          MR_Word Unification_49 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_ReferredToProcs_107_107;

          switch (MR_tag((MR_Word) RHS_47)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_ReferredToProcs_107_107 = STATE_VARIABLE_ReferredToProcs_0_87;
              break;
            case (MR_Integer) 1:
              {
                MR_Word RHSConsId_52 = ((MR_Word) ((MR_hl_field(1, RHS_47, (MR_Integer) 0))));

                hlds__goal_util__cons_id_proc_refs_acc_3_p_0(RHSConsId_52, STATE_VARIABLE_ReferredToProcs_0_87, &STATE_VARIABLE_ReferredToProcs_107_107);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubGoal_114 = ((MR_Word) ((MR_hl_field(2, RHS_47, (MR_Integer) 5))));

                hlds__goal_util__goal_proc_refs_acc_3_p_0(SubGoal_114, STATE_VARIABLE_ReferredToProcs_0_87, &STATE_VARIABLE_ReferredToProcs_107_107);
              }
              break;
          }
          switch (MR_tag((MR_Word) Unification_49)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ConstructConsId_63 = ((MR_Word) ((MR_hl_field(0, Unification_49, (MR_Integer) 1))));

                hlds__goal_util__cons_id_proc_refs_acc_3_p_0(ConstructConsId_63, STATE_VARIABLE_ReferredToProcs_107_107, STATE_VARIABLE_ReferredToProcs_88);
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_ReferredToProcs_88 = STATE_VARIABLE_ReferredToProcs_107_107;
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_ReferredToProcs_88 = STATE_VARIABLE_ReferredToProcs_107_107;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unification_49, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_ReferredToProcs_88 = STATE_VARIABLE_ReferredToProcs_107_107;
                  break;
                case (MR_Integer) 1:
                  *STATE_VARIABLE_ReferredToProcs_88 = STATE_VARIABLE_ReferredToProcs_107_107;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_136 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 0))));
          MR_Integer ProcId_137 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 1))));
          MR_Word PredProcId_138;

          {
            PredProcId_138 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PredProcId_138, 0) = ((MR_Box) (PredId_136));
            MR_hl_field(0, PredProcId_138, 1) = ((MR_Box) (ProcId_137));
          }
          mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_138)), STATE_VARIABLE_ReferredToProcs_0_87, STATE_VARIABLE_ReferredToProcs_88);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_ReferredToProcs_88 = STATE_VARIABLE_ReferredToProcs_0_87;
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredId_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Integer ProcId_35 = ((MR_Integer) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word PredProcId_45;

              {
                PredProcId_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, PredProcId_45, 0) = ((MR_Box) (PredId_34));
                MR_hl_field(0, PredProcId_45, 1) = ((MR_Box) (ProcId_35));
              }
              mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_45)), STATE_VARIABLE_ReferredToProcs_0_87, STATE_VARIABLE_ReferredToProcs_88);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Conjuncts_9 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Box conv1_STATE_VARIABLE_ReferredToProcs_88;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_util_scalar_common_1[1]), (MR_Word) (&hlds__goal_util_scalar_common_4[10]), Conjuncts_9, ((MR_Box) (STATE_VARIABLE_ReferredToProcs_0_87)), &conv1_STATE_VARIABLE_ReferredToProcs_88);
              *STATE_VARIABLE_ReferredToProcs_88 = ((MR_Word) (conv1_STATE_VARIABLE_ReferredToProcs_88));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Box conv3_STATE_VARIABLE_ReferredToProcs_88;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_util_scalar_common_1[1]), (MR_Word) (&hlds__goal_util_scalar_common_4[11]), Disjuncts_10, ((MR_Box) (STATE_VARIABLE_ReferredToProcs_0_87)), &conv3_STATE_VARIABLE_ReferredToProcs_88);
              *STATE_VARIABLE_ReferredToProcs_88 = ((MR_Word) (conv3_STATE_VARIABLE_ReferredToProcs_88));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Box conv7_STATE_VARIABLE_ReferredToProcs_88;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__goal_util_scalar_common_1[1]), (MR_Word) (&hlds__goal_util_scalar_common_4[13]), Cases_13, ((MR_Box) (STATE_VARIABLE_ReferredToProcs_0_87)), &conv7_STATE_VARIABLE_ReferredToProcs_88);
              *STATE_VARIABLE_ReferredToProcs_88 = ((MR_Word) (conv7_STATE_VARIABLE_ReferredToProcs_88));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Word SubGoal_110 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word FGT_21;

              succeeded = ((((MR_tag((MR_Word) Reason_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_19, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_21 = ((MR_Unsigned) ((MR_hl_field(3, Reason_19, (MR_Integer) 2))) & (MR_Integer) 3);
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
                *STATE_VARIABLE_ReferredToProcs_88 = STATE_VARIABLE_ReferredToProcs_0_87;
              else
              {
                MR_Word next_value_of_Goal_4 = SubGoal_110;

                // direct tailcall eliminated
                ;
                Goal_4 = next_value_of_Goal_4;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word Then_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word Else_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_ReferredToProcs_95_95;
              MR_Word STATE_VARIABLE_ReferredToProcs_96_96;
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_ReferredToProcs_0_87;

              hlds__goal_util__goal_proc_refs_acc_3_p_0(Cond_15, STATE_VARIABLE_ReferredToProcs_0_87, &STATE_VARIABLE_ReferredToProcs_95_95);
              hlds__goal_util__goal_proc_refs_acc_3_p_0(Then_16, STATE_VARIABLE_ReferredToProcs_95_95, &STATE_VARIABLE_ReferredToProcs_96_96);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = Else_17;
              next_value_of_STATE_VARIABLE_ReferredToProcs_0_87 = STATE_VARIABLE_ReferredToProcs_96_96;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_ReferredToProcs_0_87 = next_value_of_STATE_VARIABLE_ReferredToProcs_0_87;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Shorthand_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word SubGoalA_23 = ((MR_Word) ((MR_hl_field(0, Shorthand_22, (MR_Integer) 0))));
                    MR_Word SubGoalB_24 = ((MR_Word) ((MR_hl_field(0, Shorthand_22, (MR_Integer) 1))));
                    MR_Word STATE_VARIABLE_ReferredToProcs_100_100;
                    MR_Word next_value_of_Goal_4;
                    MR_Word next_value_of_STATE_VARIABLE_ReferredToProcs_0_87;

                    hlds__goal_util__goal_proc_refs_acc_3_p_0(SubGoalA_23, STATE_VARIABLE_ReferredToProcs_0_87, &STATE_VARIABLE_ReferredToProcs_100_100);
                    // direct tailcall eliminated
                    ;
                    next_value_of_Goal_4 = SubGoalB_24;
                    next_value_of_STATE_VARIABLE_ReferredToProcs_0_87 = STATE_VARIABLE_ReferredToProcs_100_100;
                    Goal_4 = next_value_of_Goal_4;
                    STATE_VARIABLE_ReferredToProcs_0_87 = next_value_of_STATE_VARIABLE_ReferredToProcs_0_87;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_29 = ((MR_Word) ((MR_hl_field(1, Shorthand_22, (MR_Integer) 4))));
                    MR_Word OrElseGoals_30 = ((MR_Word) ((MR_hl_field(1, Shorthand_22, (MR_Integer) 5))));
                    MR_Word STATE_VARIABLE_ReferredToProcs_102_102;
                    MR_Box conv5_STATE_VARIABLE_ReferredToProcs_88;

                    hlds__goal_util__goal_proc_refs_acc_3_p_0(MainGoal_29, STATE_VARIABLE_ReferredToProcs_0_87, &STATE_VARIABLE_ReferredToProcs_102_102);
                    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_util_scalar_common_1[1]), (MR_Word) (&hlds__goal_util_scalar_common_4[12]), OrElseGoals_30, ((MR_Box) (STATE_VARIABLE_ReferredToProcs_102_102)), &conv5_STATE_VARIABLE_ReferredToProcs_88);
                    *STATE_VARIABLE_ReferredToProcs_88 = ((MR_Word) (conv5_STATE_VARIABLE_ReferredToProcs_88));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_111 = ((MR_Word) ((MR_hl_field(2, Shorthand_22, (MR_Integer) 2))));
                    MR_Word next_value_of_Goal_4 = SubGoal_111;

                    // direct tailcall eliminated
                    ;
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
  MR_Word STATE_VARIABLE_ReferredToProcs_0_33,
  MR_Word * STATE_VARIABLE_ReferredToProcs_34)
{
  switch (MR_tag((MR_Word) ConsId_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_ReferredToProcs_34 = STATE_VARIABLE_ReferredToProcs_0_33;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_ReferredToProcs_34 = STATE_VARIABLE_ReferredToProcs_0_33;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_ReferredToProcs_34 = STATE_VARIABLE_ReferredToProcs_0_33;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_ReferredToProcs_34 = STATE_VARIABLE_ReferredToProcs_0_33;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_ReferredToProcs_34 = STATE_VARIABLE_ReferredToProcs_0_33;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_ReferredToProcs_34 = STATE_VARIABLE_ReferredToProcs_0_33;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_ReferredToProcs_34 = STATE_VARIABLE_ReferredToProcs_0_33;
          break;
        case (MR_Integer) 4:
          {
            MR_Word ShroudedPredProcId_30 = ((MR_Word) ((MR_hl_field(3, ConsId_4, (MR_Integer) 1))));
            MR_Word PredProcId_32;

            PredProcId_32 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_30);
            mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_32)), STATE_VARIABLE_ReferredToProcs_0_33, STATE_VARIABLE_ReferredToProcs_34);
          }
          break;
        case (MR_Integer) 5:
          *STATE_VARIABLE_ReferredToProcs_34 = STATE_VARIABLE_ReferredToProcs_0_33;
          break;
        case (MR_Integer) 6:
          *STATE_VARIABLE_ReferredToProcs_34 = STATE_VARIABLE_ReferredToProcs_0_33;
          break;
        case (MR_Integer) 7:
          *STATE_VARIABLE_ReferredToProcs_34 = STATE_VARIABLE_ReferredToProcs_0_33;
          break;
        case (MR_Integer) 8:
          *STATE_VARIABLE_ReferredToProcs_34 = STATE_VARIABLE_ReferredToProcs_0_33;
          break;
        case (MR_Integer) 9:
          *STATE_VARIABLE_ReferredToProcs_34 = STATE_VARIABLE_ReferredToProcs_0_33;
          break;
        case (MR_Integer) 10:
          *STATE_VARIABLE_ReferredToProcs_34 = STATE_VARIABLE_ReferredToProcs_0_33;
          break;
        case (MR_Integer) 11:
          *STATE_VARIABLE_ReferredToProcs_34 = STATE_VARIABLE_ReferredToProcs_0_33;
          break;
        case (MR_Integer) 12:
          *STATE_VARIABLE_ReferredToProcs_34 = STATE_VARIABLE_ReferredToProcs_0_33;
          break;
        case (MR_Integer) 13:
          *STATE_VARIABLE_ReferredToProcs_34 = STATE_VARIABLE_ReferredToProcs_0_33;
          break;
        case (MR_Integer) 14:
          *STATE_VARIABLE_ReferredToProcs_34 = STATE_VARIABLE_ReferredToProcs_0_33;
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
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ReferredToProcs_88;

  hlds__goal_util__goal_proc_refs_acc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ReferredToProcs_88);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ReferredToProcs_88));
}

MR_Word MR_CALL 
hlds__goal_util__goals_proc_refs_1_f_0(
  MR_Word Goals_3)
{
  MR_Word ReferredToProcs_4;
  MR_Word Var_6;
  MR_Box conv1_ReferredToProcs_4;

  Var_6 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_util_scalar_common_1[1]), (MR_Word) (&hlds__goal_util_scalar_common_4[9]), Goals_3, ((MR_Box) (Var_6)), &conv1_ReferredToProcs_4);
  ReferredToProcs_4 = ((MR_Word) (conv1_ReferredToProcs_4));
  return ReferredToProcs_4;
}

static void MR_CALL 
hlds__goal_util__clause_list_size_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_Size_6;

  hlds__goal_util__clause_size_increment_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_Size_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_Size_6));
}

void MR_CALL 
hlds__goal_util__clause_list_size_2_p_0(
  MR_Word Clauses_3,
  MR_Integer * GoalSize_4)
{
  MR_bool succeeded;
  MR_Integer GoalSize0_5;
  MR_Box conv1_GoalSize0_5;
  MR_Word Var_9;

  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__goal_util_scalar_common_4[8]), Clauses_3, ((MR_Box) ((MR_Integer) 0)), &conv1_GoalSize0_5);
  GoalSize0_5 = ((MR_Integer) (conv1_GoalSize0_5));
  succeeded = (Clauses_3 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_9 = ((MR_Word) ((MR_hl_field(1, Clauses_3, (MR_Integer) 1))));
    succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    *GoalSize_4 = GoalSize0_5;
  else
    *GoalSize_4 = (MR_Integer) ((MR_Unsigned) GoalSize0_5 + (MR_Unsigned) 1);
}

void MR_CALL 
hlds__goal_util__goal_size_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Size_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_42 = (MR_Word) ((MR_Word) (GoalExpr_3));
          MR_Integer Size1_73;

          hlds__goal_util__goal_size_2_p_0(SubGoal_42, &Size1_73);
          *Size_5 = (MR_Integer) ((MR_Unsigned) Size1_73 + (MR_Unsigned) 1);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *Size_5 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *Size_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_29 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals_30 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));
              MR_Integer InnerSize_31;

              hlds__goal_util__goals_size_2_p_0(Goals_30, &InnerSize_31);
              switch (ConjType_29) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *Size_5 = (MR_Integer) ((MR_Unsigned) InnerSize_31 + (MR_Unsigned) 1);
                  break;
                case (MR_Integer) 0:
                  *Size_5 = InnerSize_31;
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Size1_32;
              MR_Word Goals_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 1))));

              hlds__goal_util__goals_size_2_p_0(Goals_70, &Size1_32);
              *Size_5 = (MR_Integer) ((MR_Unsigned) Size1_32 + (MR_Unsigned) 1);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 3))));
              MR_Integer Size1_71;

              hlds__goal_util__cases_size_2_p_0(Cases_35, &Size1_71);
              *Size_5 = (MR_Integer) ((MR_Unsigned) Size1_71 + (MR_Unsigned) 1);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 1))));
              MR_Word SubGoal_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));
              MR_Word Var_64;

              succeeded = ((((MR_tag((MR_Word) Reason_43)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_43, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_64 = ((MR_Unsigned) ((MR_hl_field(3, Reason_43, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_64 == (MR_Integer) 1);
              }
              if (succeeded)
                *Size_5 = (MR_Integer) 1;
              else
              {
                MR_Integer Size1_74;

                hlds__goal_util__goal_size_2_p_0(SubGoal_75, &Size1_74);
                *Size_5 = (MR_Integer) ((MR_Unsigned) Size1_74 + (MR_Unsigned) 1);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));
              MR_Word Then_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 3))));
              MR_Word Else_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 4))));
              MR_Integer Size2_40;
              MR_Integer Size3_41;
              MR_Integer Var_60;
              MR_Integer Var_61;
              MR_Integer Size1_72;

              hlds__goal_util__goal_size_2_p_0(Cond_37, &Size1_72);
              hlds__goal_util__goal_size_2_p_0(Then_38, &Size2_40);
              hlds__goal_util__goal_size_2_p_0(Else_39, &Size3_41);
              Var_61 = (MR_Integer) ((MR_Unsigned) Size1_72 + (MR_Unsigned) Size2_40);
              Var_60 = (MR_Integer) ((MR_Unsigned) Var_61 + (MR_Unsigned) Size3_41);
              *Size_5 = (MR_Integer) ((MR_Unsigned) Var_60 + (MR_Unsigned) 1);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_45)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA_55 = ((MR_Word) ((MR_hl_field(0, ShortHand_45, (MR_Integer) 0))));
                    MR_Word GoalB_56 = ((MR_Word) ((MR_hl_field(0, ShortHand_45, (MR_Integer) 1))));
                    MR_Integer Var_68;
                    MR_Integer Size1_79;
                    MR_Integer Size2_80;

                    hlds__goal_util__goal_size_2_p_0(GoalA_55, &Size1_79);
                    hlds__goal_util__goal_size_2_p_0(GoalB_56, &Size2_80);
                    Var_68 = (MR_Integer) ((MR_Unsigned) Size1_79 + (MR_Unsigned) Size2_80);
                    *Size_5 = (MR_Integer) ((MR_Unsigned) Var_68 + (MR_Unsigned) 1);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_50 = ((MR_Word) ((MR_hl_field(1, ShortHand_45, (MR_Integer) 4))));
                    MR_Word OrElseGoals_51 = ((MR_Word) ((MR_hl_field(1, ShortHand_45, (MR_Integer) 5))));
                    MR_Integer Var_66;
                    MR_Integer Size1_76;
                    MR_Integer Size2_77;

                    hlds__goal_util__goal_size_2_p_0(MainGoal_50, &Size1_76);
                    hlds__goal_util__goals_size_2_p_0(OrElseGoals_51, &Size2_77);
                    Var_66 = (MR_Integer) ((MR_Unsigned) Size1_76 + (MR_Unsigned) Size2_77);
                    *Size_5 = (MR_Integer) ((MR_Unsigned) Var_66 + (MR_Unsigned) 1);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_78 = ((MR_Word) ((MR_hl_field(2, ShortHand_45, (MR_Integer) 2))));
                    MR_Word next_value_of_HeadVar__1_1 = SubGoal_78;

                    // direct tailcall eliminated
                    ;
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
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Integer) 0;
  else
  {
    MR_Word Goal_5;
    MR_Word Cases_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer Size1_8;
    MR_Integer Size2_9;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word GoalExpr_11;

    Goal_5 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 2))));
    GoalExpr_11 = ((MR_Word) ((MR_hl_field(0, Goal_5, (MR_Integer) 0))));
    switch (MR_tag((MR_Word) GoalExpr_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_49 = (MR_Word) ((MR_Word) (GoalExpr_11));
          MR_Integer Size1_80;

          hlds__goal_util__goal_size_2_p_0(SubGoal_49, &Size1_80);
          Size1_8 = (MR_Integer) ((MR_Unsigned) Size1_80 + (MR_Unsigned) 1);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Size1_8 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            Size1_8 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_36 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 2))));
              MR_Integer InnerSize_38;

              hlds__goal_util__goals_size_2_p_0(Goals_37, &InnerSize_38);
              switch (ConjType_36) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  Size1_8 = (MR_Integer) ((MR_Unsigned) InnerSize_38 + (MR_Unsigned) 1);
                  break;
                case (MR_Integer) 0:
                  Size1_8 = InnerSize_38;
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Size1_39;
              MR_Word Goals_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))));

              hlds__goal_util__goals_size_2_p_0(Goals_77, &Size1_39);
              Size1_8 = (MR_Integer) ((MR_Unsigned) Size1_39 + (MR_Unsigned) 1);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 3))));
              MR_Integer Size1_78;

              hlds__goal_util__cases_size_2_p_0(Cases_42, &Size1_78);
              Size1_8 = (MR_Integer) ((MR_Unsigned) Size1_78 + (MR_Unsigned) 1);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))));
              MR_Word SubGoal_82 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 2))));
              MR_Word Var_71;

              succeeded = ((((MR_tag((MR_Word) Reason_50)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_50, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_71 = ((MR_Unsigned) ((MR_hl_field(3, Reason_50, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_71 == (MR_Integer) 1);
              }
              if (succeeded)
                Size1_8 = (MR_Integer) 1;
              else
              {
                MR_Integer Size1_81;

                hlds__goal_util__goal_size_2_p_0(SubGoal_82, &Size1_81);
                Size1_8 = (MR_Integer) ((MR_Unsigned) Size1_81 + (MR_Unsigned) 1);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 2))));
              MR_Word Then_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 3))));
              MR_Word Else_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 4))));
              MR_Integer Size2_47;
              MR_Integer Size3_48;
              MR_Integer Var_67;
              MR_Integer Var_68;
              MR_Integer Size1_79;

              hlds__goal_util__goal_size_2_p_0(Cond_44, &Size1_79);
              hlds__goal_util__goal_size_2_p_0(Then_45, &Size2_47);
              hlds__goal_util__goal_size_2_p_0(Else_46, &Size3_48);
              Var_68 = (MR_Integer) ((MR_Unsigned) Size1_79 + (MR_Unsigned) Size2_47);
              Var_67 = (MR_Integer) ((MR_Unsigned) Var_68 + (MR_Unsigned) Size3_48);
              Size1_8 = (MR_Integer) ((MR_Unsigned) Var_67 + (MR_Unsigned) 1);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_52)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA_62 = ((MR_Word) ((MR_hl_field(0, ShortHand_52, (MR_Integer) 0))));
                    MR_Word GoalB_63 = ((MR_Word) ((MR_hl_field(0, ShortHand_52, (MR_Integer) 1))));
                    MR_Integer Var_75;
                    MR_Integer Size1_86;
                    MR_Integer Size2_87;

                    hlds__goal_util__goal_size_2_p_0(GoalA_62, &Size1_86);
                    hlds__goal_util__goal_size_2_p_0(GoalB_63, &Size2_87);
                    Var_75 = (MR_Integer) ((MR_Unsigned) Size1_86 + (MR_Unsigned) Size2_87);
                    Size1_8 = (MR_Integer) ((MR_Unsigned) Var_75 + (MR_Unsigned) 1);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_57 = ((MR_Word) ((MR_hl_field(1, ShortHand_52, (MR_Integer) 4))));
                    MR_Word OrElseGoals_58 = ((MR_Word) ((MR_hl_field(1, ShortHand_52, (MR_Integer) 5))));
                    MR_Integer Var_73;
                    MR_Integer Size1_83;
                    MR_Integer Size2_84;

                    hlds__goal_util__goal_size_2_p_0(MainGoal_57, &Size1_83);
                    hlds__goal_util__goals_size_2_p_0(OrElseGoals_58, &Size2_84);
                    Var_73 = (MR_Integer) ((MR_Unsigned) Size1_83 + (MR_Unsigned) Size2_84);
                    Size1_8 = (MR_Integer) ((MR_Unsigned) Var_73 + (MR_Unsigned) 1);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_85 = ((MR_Word) ((MR_hl_field(2, ShortHand_52, (MR_Integer) 2))));

                    hlds__goal_util__goal_size_2_p_0(SubGoal_85, &Size1_8);
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

void MR_CALL 
hlds__goal_util__goals_size_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Integer) 0;
  else
  {
    MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer Size1_6;
    MR_Integer Size2_7;
    MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Goal_3, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) GoalExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_46 = (MR_Word) ((MR_Word) (GoalExpr_8));
          MR_Integer Size1_77;

          hlds__goal_util__goal_size_2_p_0(SubGoal_46, &Size1_77);
          Size1_6 = (MR_Integer) ((MR_Unsigned) Size1_77 + (MR_Unsigned) 1);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Size1_6 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            Size1_6 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_33 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));
              MR_Integer InnerSize_35;

              hlds__goal_util__goals_size_2_p_0(Goals_34, &InnerSize_35);
              switch (ConjType_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  Size1_6 = (MR_Integer) ((MR_Unsigned) InnerSize_35 + (MR_Unsigned) 1);
                  break;
                case (MR_Integer) 0:
                  Size1_6 = InnerSize_35;
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Size1_36;
              MR_Word Goals_74 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));

              hlds__goal_util__goals_size_2_p_0(Goals_74, &Size1_36);
              Size1_6 = (MR_Integer) ((MR_Unsigned) Size1_36 + (MR_Unsigned) 1);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 3))));
              MR_Integer Size1_75;

              hlds__goal_util__cases_size_2_p_0(Cases_39, &Size1_75);
              Size1_6 = (MR_Integer) ((MR_Unsigned) Size1_75 + (MR_Unsigned) 1);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));
              MR_Word SubGoal_79 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));
              MR_Word Var_68;

              succeeded = ((((MR_tag((MR_Word) Reason_47)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_47, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_68 = ((MR_Unsigned) ((MR_hl_field(3, Reason_47, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_68 == (MR_Integer) 1);
              }
              if (succeeded)
                Size1_6 = (MR_Integer) 1;
              else
              {
                MR_Integer Size1_78;

                hlds__goal_util__goal_size_2_p_0(SubGoal_79, &Size1_78);
                Size1_6 = (MR_Integer) ((MR_Unsigned) Size1_78 + (MR_Unsigned) 1);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));
              MR_Word Then_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 3))));
              MR_Word Else_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 4))));
              MR_Integer Size2_44;
              MR_Integer Size3_45;
              MR_Integer Var_64;
              MR_Integer Var_65;
              MR_Integer Size1_76;

              hlds__goal_util__goal_size_2_p_0(Cond_41, &Size1_76);
              hlds__goal_util__goal_size_2_p_0(Then_42, &Size2_44);
              hlds__goal_util__goal_size_2_p_0(Else_43, &Size3_45);
              Var_65 = (MR_Integer) ((MR_Unsigned) Size1_76 + (MR_Unsigned) Size2_44);
              Var_64 = (MR_Integer) ((MR_Unsigned) Var_65 + (MR_Unsigned) Size3_45);
              Size1_6 = (MR_Integer) ((MR_Unsigned) Var_64 + (MR_Unsigned) 1);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_49)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA_59 = ((MR_Word) ((MR_hl_field(0, ShortHand_49, (MR_Integer) 0))));
                    MR_Word GoalB_60 = ((MR_Word) ((MR_hl_field(0, ShortHand_49, (MR_Integer) 1))));
                    MR_Integer Var_72;
                    MR_Integer Size1_83;
                    MR_Integer Size2_84;

                    hlds__goal_util__goal_size_2_p_0(GoalA_59, &Size1_83);
                    hlds__goal_util__goal_size_2_p_0(GoalB_60, &Size2_84);
                    Var_72 = (MR_Integer) ((MR_Unsigned) Size1_83 + (MR_Unsigned) Size2_84);
                    Size1_6 = (MR_Integer) ((MR_Unsigned) Var_72 + (MR_Unsigned) 1);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_54 = ((MR_Word) ((MR_hl_field(1, ShortHand_49, (MR_Integer) 4))));
                    MR_Word OrElseGoals_55 = ((MR_Word) ((MR_hl_field(1, ShortHand_49, (MR_Integer) 5))));
                    MR_Integer Var_70;
                    MR_Integer Size1_80;
                    MR_Integer Size2_81;

                    hlds__goal_util__goal_size_2_p_0(MainGoal_54, &Size1_80);
                    hlds__goal_util__goals_size_2_p_0(OrElseGoals_55, &Size2_81);
                    Var_70 = (MR_Integer) ((MR_Unsigned) Size1_80 + (MR_Unsigned) Size2_81);
                    Size1_6 = (MR_Integer) ((MR_Unsigned) Var_70 + (MR_Unsigned) 1);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_82 = ((MR_Word) ((MR_hl_field(2, ShortHand_49, (MR_Integer) 2))));

                    hlds__goal_util__goal_size_2_p_0(SubGoal_82, &Size1_6);
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

MR_bool MR_CALL 
hlds__goal_util__goal_is_branched_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
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

MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word IsLeaf_5;
    MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_51 = (MR_Word) ((MR_Word) (GoalExpr_3));
          MR_Word next_value_of_HeadVar__1_1 = SubGoal_51;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word UnifyKind_9 = ((MR_Word) ((MR_hl_field(1, GoalExpr_3, (MR_Integer) 3))));

          switch (MR_tag((MR_Word) UnifyKind_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              IsLeaf_5 = (MR_Integer) 0;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, UnifyKind_9, (MR_Integer) 0))))) {
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
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            IsLeaf_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));

              IsLeaf_5 = hlds__goal_util__proc_body_is_leaf_goals_1_f_0(Goals_50);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_81 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 1))));

              IsLeaf_5 = hlds__goal_util__proc_body_is_leaf_goals_1_f_0(Goals_81);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 3))));

              IsLeaf_5 = hlds__goal_util__proc_body_is_leaf_cases_1_f_0(Cases_57);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 1))));
              MR_Word SubGoal_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));
              MR_Word FGT_54;

              succeeded = ((((MR_tag((MR_Word) Reason_52)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_52, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_54 = ((MR_Unsigned) ((MR_hl_field(3, Reason_52, (MR_Integer) 2))) & (MR_Integer) 3);
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
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));
              MR_Word Then_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 3))));
              MR_Word Else_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 4))));
              MR_Word Var_75;
              MR_Word Var_76;
              MR_Word Var_77;

              Var_75 = hlds__goal_util__proc_body_is_leaf_1_f_0(Cond_59);
              succeeded = (Var_75 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_76 = hlds__goal_util__proc_body_is_leaf_1_f_0(Then_60);
                succeeded = (Var_76 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_77 = hlds__goal_util__proc_body_is_leaf_1_f_0(Else_61);
                  succeeded = (Var_77 == (MR_Integer) 0);
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
              MR_Word ShortHand_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_62)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA_73 = ((MR_Word) ((MR_hl_field(0, ShortHand_62, (MR_Integer) 0))));
                    MR_Word GoalB_74 = ((MR_Word) ((MR_hl_field(0, ShortHand_62, (MR_Integer) 1))));
                    MR_Word Var_78;
                    MR_Word Var_79;

                    Var_78 = hlds__goal_util__proc_body_is_leaf_1_f_0(GoalA_73);
                    succeeded = (Var_78 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_79 = hlds__goal_util__proc_body_is_leaf_1_f_0(GoalB_74);
                      succeeded = (Var_79 == (MR_Integer) 0);
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
  MR_bool succeeded;
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Integer) 0;
  else
  {
    MR_Word Case_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(0, Case_3, (MR_Integer) 2))));
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

static MR_Word MR_CALL 
hlds__goal_util__proc_body_is_leaf_goals_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Integer) 0;
  else
  {
    MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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

static void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0_s * env_ptr = (struct hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0_s *) (env_ptr_arg);

  *((env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__conv1_LambdaHeadVar__1_28));
  ((env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__cont)((env_ptr)->hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__cont_env_ptr);
}

static void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0_s env;

  (env).hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__cont = cont;
  (env).hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    hlds__goal_util__IntroducedFrom__pred__do_extra_nonlocal_typeinfos_typeclass_infos__921__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &(env).hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3_env_0__conv1_LambdaHeadVar__1_28, hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_2, &env);
  }
}

static MR_Box MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_25;

  conv0_LambdaHeadVar__2_25 = hlds__goal_util__IntroducedFrom__func__do_extra_nonlocal_typeinfos_typeclass_infos__910__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_25));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0(
  MR_Word RttiVarMaps_6,
  MR_Word VarTable_7,
  MR_Word ExistQVars_8,
  MR_Word NonLocals_9,
  MR_Word * NonLocalTiTciVars_10)
{
  MR_Word NonLocalsList_11;
  MR_Word NonLocalsTypes_12;
  MR_Word NonLocalTypeVarsList0_14;
  MR_Word NonLocalTypeVarsList_15;
  MR_Word NonLocalTypeVars_16;
  MR_Word TypeVarToProgVar_17;
  MR_Word NonLocalTypeInfoVars_18;
  MR_Word NonLocalTypeClassInfoVarsList_19;
  MR_Word NonLocalTypeClassInfoVars_20;
  MR_Word Var_21;
  MR_Word Var_22;

  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_9, &NonLocalsList_11);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_7, NonLocalsList_11, &NonLocalsTypes_12);
  parse_tree__prog_type__type_vars_in_types_2_p_0(NonLocalsTypes_12, &NonLocalTypeVarsList0_14);
  NonLocalTypeVarsList_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__goal_util_scalar_common_1[4]), ExistQVars_8, NonLocalTypeVarsList0_14);
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), NonLocalTypeVarsList_15, &NonLocalTypeVars_16);
  {
    TypeVarToProgVar_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeVarToProgVar_17, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[1]));
    MR_hl_field(0, TypeVarToProgVar_17, 1) = ((MR_Box) (hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_1));
    MR_hl_field(0, TypeVarToProgVar_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, TypeVarToProgVar_17, 3) = ((MR_Box) (RttiVarMaps_6));
  }
  Var_21 = mercury__list__map_2_f_0((MR_Word) (&hlds__goal_util_scalar_common_1[4]), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), TypeVarToProgVar_17, NonLocalTypeVarsList_15);
  NonLocalTypeInfoVars_18 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_21);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&hlds__goal_util_scalar_common_5[2]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0_3));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (RttiVarMaps_6));
    MR_hl_field(0, Var_22, 4) = ((MR_Box) (NonLocalTypeVars_16));
  }
  mercury__solutions__solutions_2_p_1((MR_Word) (&hlds__goal_util_scalar_common_1[0]), Var_22, &NonLocalTypeClassInfoVarsList_19);
  parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalTypeClassInfoVarsList_19, &NonLocalTypeClassInfoVars_20);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalTypeInfoVars_18, NonLocalTypeClassInfoVars_20, NonLocalTiTciVars_10);
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
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Case0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Cases0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Case_11;
    MR_Word Cases_12;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(0, Case0_9, (MR_Integer) 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(0, Case0_9, (MR_Integer) 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(0, Case0_9, (MR_Integer) 2))));
    MR_Word Goal_16;
    MR_Word GoalExpr0_17 = ((MR_Word) ((MR_hl_field(0, Goal0_15, (MR_Integer) 0))));
    MR_Word GoalInfo0_18 = ((MR_Word) ((MR_hl_field(0, Goal0_15, (MR_Integer) 1))));
    MR_Word GoalExpr_19;
    MR_Word GoalInfo_20;
    MR_Box conv1_GoalInfo_20;

    switch (MR_tag((MR_Word) GoalExpr0_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_61 = (MR_Word) ((MR_Word) (GoalExpr0_17));
          MR_Word SubGoal_62;

          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, SubGoal0_61, &SubGoal_62);
          GoalExpr_19 = (MR_Word) ((MR_Word) (SubGoal_62));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        GoalExpr_19 = GoalExpr0_17;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            GoalExpr_19 = GoalExpr0_17;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_47 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 2))));
              MR_Word Goals_49;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Goals0_48, &Goals_49);
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, GoalExpr_19, 1) = (MR_Box) ((MR_Unsigned) (ConjType_47));
                MR_hl_field(3, GoalExpr_19, 2) = ((MR_Box) (Goals_49));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_83 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
              MR_Word Goals_84;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Goals0_83, &Goals_84);
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, GoalExpr_19, 1) = ((MR_Box) (Goals_84));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
              MR_Word CanFail_51 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 3))));
              MR_Word Cases_53;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Cases0_52, &Cases_53);
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, GoalExpr_19, 1) = ((MR_Box) (Var_50));
                MR_hl_field(3, GoalExpr_19, 2) = (MR_Box) ((MR_Unsigned) (CanFail_51));
                MR_hl_field(3, GoalExpr_19, 3) = ((MR_Box) (Cases_53));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
              MR_Word SubGoal0_85 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 2))));
              MR_Word SubGoal_86;

              succeeded = ((((MR_tag((MR_Word) Reason_63)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_63, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
                SubGoal_86 = SubGoal0_85;
              else
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, SubGoal0_85, &SubGoal_86);
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_19, 1) = ((MR_Box) (Reason_63));
                MR_hl_field(3, GoalExpr_19, 2) = ((MR_Box) (SubGoal_86));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
              MR_Word Cond0_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 2))));
              MR_Word Then0_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 3))));
              MR_Word Else0_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 4))));
              MR_Word Cond_58;
              MR_Word Then_59;
              MR_Word Else_60;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Cond0_55, &Cond_58);
              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Then0_56, &Then_59);
              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Else0_57, &Else_60);
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, GoalExpr_19, 1) = ((MR_Box) (Vars_54));
                MR_hl_field(3, GoalExpr_19, 2) = ((MR_Box) (Cond_58));
                MR_hl_field(3, GoalExpr_19, 3) = ((MR_Box) (Then_59));
                MR_hl_field(3, GoalExpr_19, 4) = ((MR_Box) (Else_60));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
              MR_Word ShortHand_76;

              switch (MR_tag((MR_Word) ShortHand0_66)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA0_79 = ((MR_Word) ((MR_hl_field(0, ShortHand0_66, (MR_Integer) 0))));
                    MR_Word GoalB0_80 = ((MR_Word) ((MR_hl_field(0, ShortHand0_66, (MR_Integer) 1))));
                    MR_Word GoalA_81;
                    MR_Word GoalB_82;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, GoalA0_79, &GoalA_81);
                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, GoalB0_80, &GoalB_82);
                    {
                      ShortHand_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ShortHand_76, 0) = ((MR_Box) (GoalA_81));
                      MR_hl_field(0, ShortHand_76, 1) = ((MR_Box) (GoalB_82));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_67 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_66, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word Outer_68 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, (MR_Integer) 1))));
                    MR_Word Inner_69 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_70 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, (MR_Integer) 3))));
                    MR_Word MainGoal0_71 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_72 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, (MR_Integer) 5))));
                    MR_Word OrElseInners_73 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, (MR_Integer) 6))));
                    MR_Word MainGoal_74;
                    MR_Word OrElseGoals_75;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, MainGoal0_71, &MainGoal_74);
                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, OrElseGoals0_72, &OrElseGoals_75);
                    {
                      ShortHand_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ShortHand_76, 0) = (MR_Box) ((MR_Unsigned) (GoalType_67));
                      MR_hl_field(1, ShortHand_76, 1) = ((MR_Box) (Outer_68));
                      MR_hl_field(1, ShortHand_76, 2) = ((MR_Box) (Inner_69));
                      MR_hl_field(1, ShortHand_76, 3) = ((MR_Box) (MaybeOutputVars_70));
                      MR_hl_field(1, ShortHand_76, 4) = ((MR_Box) (MainGoal_74));
                      MR_hl_field(1, ShortHand_76, 5) = ((MR_Box) (OrElseGoals_75));
                      MR_hl_field(1, ShortHand_76, 6) = ((MR_Box) (OrElseInners_73));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_77 = ((MR_Word) ((MR_hl_field(2, ShortHand0_66, (MR_Integer) 0))));
                    MR_Word ResultVar_78 = ((MR_Word) ((MR_hl_field(2, ShortHand0_66, (MR_Integer) 1))));
                    MR_Word SubGoal0_87 = ((MR_Word) ((MR_hl_field(2, ShortHand0_66, (MR_Integer) 2))));
                    MR_Word SubGoal_88;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, SubGoal0_87, &SubGoal_88);
                    {
                      ShortHand_76 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, ShortHand_76, 0) = ((MR_Box) (MaybeIO_77));
                      MR_hl_field(2, ShortHand_76, 1) = ((MR_Box) (ResultVar_78));
                      MR_hl_field(2, ShortHand_76, 2) = ((MR_Box) (SubGoal_88));
                    }
                  }
                  break;
              }
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, GoalExpr_19, 1) = ((MR_Box) (ShortHand_76));
              }
            }
            break;
        }
        break;
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0), (MR_Word) (&hlds__goal_util_scalar_common_4[7]), HeadVar__1_1, ((MR_Box) (GoalInfo0_18)), &conv1_GoalInfo_20);
    GoalInfo_20 = ((MR_Word) (conv1_GoalInfo_20));
    {
      Goal_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_16, 0) = ((MR_Box) (GoalExpr_19));
      MR_hl_field(0, Goal_16, 1) = ((MR_Box) (GoalInfo_20));
    }
    {
      Case_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_11, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(0, Case_11, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(0, Case_11, 2) = ((MR_Box) (Goal_16));
    }
    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Cases0_10, &Cases_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_12));
    }
  }
}

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Goals0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Goal_11;
    MR_Word Goals_12;
    MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 0))));
    MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 1))));
    MR_Word GoalExpr_15;
    MR_Word GoalInfo_16;
    MR_Box conv1_GoalInfo_16;

    switch (MR_tag((MR_Word) GoalExpr0_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_57 = (MR_Word) ((MR_Word) (GoalExpr0_13));
          MR_Word SubGoal_58;

          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, SubGoal0_57, &SubGoal_58);
          GoalExpr_15 = (MR_Word) ((MR_Word) (SubGoal_58));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        GoalExpr_15 = GoalExpr0_13;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            GoalExpr_15 = GoalExpr0_13;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_43 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 2))));
              MR_Word Goals_45;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Goals0_44, &Goals_45);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, GoalExpr_15, 1) = (MR_Box) ((MR_Unsigned) (ConjType_43));
                MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (Goals_45));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_79 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))));
              MR_Word Goals_80;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Goals0_79, &Goals_80);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Goals_80));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))));
              MR_Word CanFail_47 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 3))));
              MR_Word Cases_49;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Cases0_48, &Cases_49);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Var_46));
                MR_hl_field(3, GoalExpr_15, 2) = (MR_Box) ((MR_Unsigned) (CanFail_47));
                MR_hl_field(3, GoalExpr_15, 3) = ((MR_Box) (Cases_49));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))));
              MR_Word SubGoal0_81 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 2))));
              MR_Word SubGoal_82;

              succeeded = ((((MR_tag((MR_Word) Reason_59)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_59, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
                SubGoal_82 = SubGoal0_81;
              else
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, SubGoal0_81, &SubGoal_82);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Reason_59));
                MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (SubGoal_82));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))));
              MR_Word Cond0_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 2))));
              MR_Word Then0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 3))));
              MR_Word Else0_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 4))));
              MR_Word Cond_54;
              MR_Word Then_55;
              MR_Word Else_56;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Cond0_51, &Cond_54);
              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Then0_52, &Then_55);
              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Else0_53, &Else_56);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Vars_50));
                MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (Cond_54));
                MR_hl_field(3, GoalExpr_15, 3) = ((MR_Box) (Then_55));
                MR_hl_field(3, GoalExpr_15, 4) = ((MR_Box) (Else_56));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))));
              MR_Word ShortHand_72;

              switch (MR_tag((MR_Word) ShortHand0_62)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA0_75 = ((MR_Word) ((MR_hl_field(0, ShortHand0_62, (MR_Integer) 0))));
                    MR_Word GoalB0_76 = ((MR_Word) ((MR_hl_field(0, ShortHand0_62, (MR_Integer) 1))));
                    MR_Word GoalA_77;
                    MR_Word GoalB_78;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, GoalA0_75, &GoalA_77);
                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, GoalB0_76, &GoalB_78);
                    {
                      ShortHand_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ShortHand_72, 0) = ((MR_Box) (GoalA_77));
                      MR_hl_field(0, ShortHand_72, 1) = ((MR_Box) (GoalB_78));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_63 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_62, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word Outer_64 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, (MR_Integer) 1))));
                    MR_Word Inner_65 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_66 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, (MR_Integer) 3))));
                    MR_Word MainGoal0_67 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_68 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, (MR_Integer) 5))));
                    MR_Word OrElseInners_69 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, (MR_Integer) 6))));
                    MR_Word MainGoal_70;
                    MR_Word OrElseGoals_71;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, MainGoal0_67, &MainGoal_70);
                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, OrElseGoals0_68, &OrElseGoals_71);
                    {
                      ShortHand_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ShortHand_72, 0) = (MR_Box) ((MR_Unsigned) (GoalType_63));
                      MR_hl_field(1, ShortHand_72, 1) = ((MR_Box) (Outer_64));
                      MR_hl_field(1, ShortHand_72, 2) = ((MR_Box) (Inner_65));
                      MR_hl_field(1, ShortHand_72, 3) = ((MR_Box) (MaybeOutputVars_66));
                      MR_hl_field(1, ShortHand_72, 4) = ((MR_Box) (MainGoal_70));
                      MR_hl_field(1, ShortHand_72, 5) = ((MR_Box) (OrElseGoals_71));
                      MR_hl_field(1, ShortHand_72, 6) = ((MR_Box) (OrElseInners_69));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_73 = ((MR_Word) ((MR_hl_field(2, ShortHand0_62, (MR_Integer) 0))));
                    MR_Word ResultVar_74 = ((MR_Word) ((MR_hl_field(2, ShortHand0_62, (MR_Integer) 1))));
                    MR_Word SubGoal0_83 = ((MR_Word) ((MR_hl_field(2, ShortHand0_62, (MR_Integer) 2))));
                    MR_Word SubGoal_84;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, SubGoal0_83, &SubGoal_84);
                    {
                      ShortHand_72 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, ShortHand_72, 0) = ((MR_Box) (MaybeIO_73));
                      MR_hl_field(2, ShortHand_72, 1) = ((MR_Box) (ResultVar_74));
                      MR_hl_field(2, ShortHand_72, 2) = ((MR_Box) (SubGoal_84));
                    }
                  }
                  break;
              }
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (ShortHand_72));
              }
            }
            break;
        }
        break;
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0), (MR_Word) (&hlds__goal_util_scalar_common_4[6]), HeadVar__1_1, ((MR_Box) (GoalInfo0_14)), &conv1_GoalInfo_16);
    GoalInfo_16 = ((MR_Word) (conv1_GoalInfo_16));
    {
      Goal_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_11, 0) = ((MR_Box) (GoalExpr_15));
      MR_hl_field(0, Goal_11, 1) = ((MR_Box) (GoalInfo_16));
    }
    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Goals0_10, &Goals_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_12));
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
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(
  MR_Word Features_5,
  MR_Word Goal0_7,
  MR_Word * Goal_8)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 0))));
  MR_Word GoalInfo0_10 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 1))));
  MR_Word GoalExpr_11;
  MR_Word GoalInfo_12;
  MR_Box conv1_GoalInfo_12;

  switch (MR_tag((MR_Word) GoalExpr0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_56 = (MR_Word) ((MR_Word) (GoalExpr0_9));
        MR_Word SubGoal_57;

        hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, SubGoal0_56, &SubGoal_57);
        GoalExpr_11 = (MR_Word) ((MR_Word) (SubGoal_57));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      GoalExpr_11 = GoalExpr0_9;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          GoalExpr_11 = GoalExpr0_9;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_42 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Goals_44;

            hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, Goals0_43, &Goals_44);
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_11, 1) = (MR_Box) ((MR_Unsigned) (ConjType_42));
              MR_hl_field(3, GoalExpr_11, 2) = ((MR_Box) (Goals_44));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_78 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Goals_79;

            hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, Goals0_78, &Goals_79);
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_11, 1) = ((MR_Box) (Goals_79));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word CanFail_46 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Cases_48;

            hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(Features_5, Cases0_47, &Cases_48);
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_11, 1) = ((MR_Box) (Var_45));
              MR_hl_field(3, GoalExpr_11, 2) = (MR_Box) ((MR_Unsigned) (CanFail_46));
              MR_hl_field(3, GoalExpr_11, 3) = ((MR_Box) (Cases_48));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word SubGoal0_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word SubGoal_81;

            succeeded = ((((MR_tag((MR_Word) Reason_58)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_58, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
              SubGoal_81 = SubGoal0_80;
            else
              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, SubGoal0_80, &SubGoal_81);
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_11, 1) = ((MR_Box) (Reason_58));
              MR_hl_field(3, GoalExpr_11, 2) = ((MR_Box) (SubGoal_81));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Cond0_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Then0_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Else0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 4))));
            MR_Word Cond_53;
            MR_Word Then_54;
            MR_Word Else_55;

            hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, Cond0_50, &Cond_53);
            hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, Then0_51, &Then_54);
            hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, Else0_52, &Else_55);
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_11, 1) = ((MR_Box) (Vars_49));
              MR_hl_field(3, GoalExpr_11, 2) = ((MR_Box) (Cond_53));
              MR_hl_field(3, GoalExpr_11, 3) = ((MR_Box) (Then_54));
              MR_hl_field(3, GoalExpr_11, 4) = ((MR_Box) (Else_55));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word ShortHand_71;

            switch (MR_tag((MR_Word) ShortHand0_61)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word GoalA0_74 = ((MR_Word) ((MR_hl_field(0, ShortHand0_61, (MR_Integer) 0))));
                  MR_Word GoalB0_75 = ((MR_Word) ((MR_hl_field(0, ShortHand0_61, (MR_Integer) 1))));
                  MR_Word GoalA_76;
                  MR_Word GoalB_77;

                  hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, GoalA0_74, &GoalA_76);
                  hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, GoalB0_75, &GoalB_77);
                  {
                    ShortHand_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ShortHand_71, 0) = ((MR_Box) (GoalA_76));
                    MR_hl_field(0, ShortHand_71, 1) = ((MR_Box) (GoalB_77));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_62 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_61, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_63 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, (MR_Integer) 1))));
                  MR_Word Inner_64 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_65 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, (MR_Integer) 3))));
                  MR_Word MainGoal0_66 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_67 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, (MR_Integer) 5))));
                  MR_Word OrElseInners_68 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, (MR_Integer) 6))));
                  MR_Word MainGoal_69;
                  MR_Word OrElseGoals_70;

                  hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, MainGoal0_66, &MainGoal_69);
                  hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, OrElseGoals0_67, &OrElseGoals_70);
                  {
                    ShortHand_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_71, 0) = (MR_Box) ((MR_Unsigned) (GoalType_62));
                    MR_hl_field(1, ShortHand_71, 1) = ((MR_Box) (Outer_63));
                    MR_hl_field(1, ShortHand_71, 2) = ((MR_Box) (Inner_64));
                    MR_hl_field(1, ShortHand_71, 3) = ((MR_Box) (MaybeOutputVars_65));
                    MR_hl_field(1, ShortHand_71, 4) = ((MR_Box) (MainGoal_69));
                    MR_hl_field(1, ShortHand_71, 5) = ((MR_Box) (OrElseGoals_70));
                    MR_hl_field(1, ShortHand_71, 6) = ((MR_Box) (OrElseInners_68));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_72 = ((MR_Word) ((MR_hl_field(2, ShortHand0_61, (MR_Integer) 0))));
                  MR_Word ResultVar_73 = ((MR_Word) ((MR_hl_field(2, ShortHand0_61, (MR_Integer) 1))));
                  MR_Word SubGoal0_82 = ((MR_Word) ((MR_hl_field(2, ShortHand0_61, (MR_Integer) 2))));
                  MR_Word SubGoal_83;

                  hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, SubGoal0_82, &SubGoal_83);
                  {
                    ShortHand_71 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_71, 0) = ((MR_Box) (MaybeIO_72));
                    MR_hl_field(2, ShortHand_71, 1) = ((MR_Box) (ResultVar_73));
                    MR_hl_field(2, ShortHand_71, 2) = ((MR_Box) (SubGoal_83));
                  }
                }
                break;
            }
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, GoalExpr_11, 1) = ((MR_Box) (ShortHand_71));
            }
          }
          break;
      }
      break;
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0), (MR_Word) (&hlds__goal_util_scalar_common_4[5]), Features_5, ((MR_Box) (GoalInfo0_10)), &conv1_GoalInfo_12);
  GoalInfo_12 = ((MR_Word) (conv1_GoalInfo_12));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_12));
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
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Case0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Cases0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Case_11;
    MR_Word Cases_12;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(0, Case0_9, (MR_Integer) 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(0, Case0_9, (MR_Integer) 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(0, Case0_9, (MR_Integer) 2))));
    MR_Word Goal_16;
    MR_Word GoalExpr0_17 = ((MR_Word) ((MR_hl_field(0, Goal0_15, (MR_Integer) 0))));
    MR_Word GoalInfo0_18 = ((MR_Word) ((MR_hl_field(0, Goal0_15, (MR_Integer) 1))));
    MR_Word GoalExpr_19;
    MR_Word GoalInfo_20;
    MR_Box conv1_GoalInfo_20;

    switch (MR_tag((MR_Word) GoalExpr0_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_61 = (MR_Word) ((MR_Word) (GoalExpr0_17));
          MR_Word SubGoal_62;

          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, SubGoal0_61, &SubGoal_62);
          GoalExpr_19 = (MR_Word) ((MR_Word) (SubGoal_62));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        GoalExpr_19 = GoalExpr0_17;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            GoalExpr_19 = GoalExpr0_17;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_47 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 2))));
              MR_Word Goals_49;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Goals0_48, &Goals_49);
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, GoalExpr_19, 1) = (MR_Box) ((MR_Unsigned) (ConjType_47));
                MR_hl_field(3, GoalExpr_19, 2) = ((MR_Box) (Goals_49));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_83 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
              MR_Word Goals_84;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Goals0_83, &Goals_84);
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, GoalExpr_19, 1) = ((MR_Box) (Goals_84));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
              MR_Word CanFail_51 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 3))));
              MR_Word Cases_53;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Cases0_52, &Cases_53);
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, GoalExpr_19, 1) = ((MR_Box) (Var_50));
                MR_hl_field(3, GoalExpr_19, 2) = (MR_Box) ((MR_Unsigned) (CanFail_51));
                MR_hl_field(3, GoalExpr_19, 3) = ((MR_Box) (Cases_53));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
              MR_Word SubGoal0_85 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 2))));
              MR_Word SubGoal_86;

              succeeded = ((((MR_tag((MR_Word) Reason_63)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_63, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, SubGoal0_85, &SubGoal_86);
              else
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, SubGoal0_85, &SubGoal_86);
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_19, 1) = ((MR_Box) (Reason_63));
                MR_hl_field(3, GoalExpr_19, 2) = ((MR_Box) (SubGoal_86));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
              MR_Word Cond0_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 2))));
              MR_Word Then0_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 3))));
              MR_Word Else0_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 4))));
              MR_Word Cond_58;
              MR_Word Then_59;
              MR_Word Else_60;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Cond0_55, &Cond_58);
              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Then0_56, &Then_59);
              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Else0_57, &Else_60);
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, GoalExpr_19, 1) = ((MR_Box) (Vars_54));
                MR_hl_field(3, GoalExpr_19, 2) = ((MR_Box) (Cond_58));
                MR_hl_field(3, GoalExpr_19, 3) = ((MR_Box) (Then_59));
                MR_hl_field(3, GoalExpr_19, 4) = ((MR_Box) (Else_60));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
              MR_Word ShortHand_76;

              switch (MR_tag((MR_Word) ShortHand0_66)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA0_79 = ((MR_Word) ((MR_hl_field(0, ShortHand0_66, (MR_Integer) 0))));
                    MR_Word GoalB0_80 = ((MR_Word) ((MR_hl_field(0, ShortHand0_66, (MR_Integer) 1))));
                    MR_Word GoalA_81;
                    MR_Word GoalB_82;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, GoalA0_79, &GoalA_81);
                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, GoalB0_80, &GoalB_82);
                    {
                      ShortHand_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ShortHand_76, 0) = ((MR_Box) (GoalA_81));
                      MR_hl_field(0, ShortHand_76, 1) = ((MR_Box) (GoalB_82));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_67 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_66, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word Outer_68 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, (MR_Integer) 1))));
                    MR_Word Inner_69 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_70 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, (MR_Integer) 3))));
                    MR_Word MainGoal0_71 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_72 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, (MR_Integer) 5))));
                    MR_Word OrElseInners_73 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, (MR_Integer) 6))));
                    MR_Word MainGoal_74;
                    MR_Word OrElseGoals_75;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, MainGoal0_71, &MainGoal_74);
                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, OrElseGoals0_72, &OrElseGoals_75);
                    {
                      ShortHand_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ShortHand_76, 0) = (MR_Box) ((MR_Unsigned) (GoalType_67));
                      MR_hl_field(1, ShortHand_76, 1) = ((MR_Box) (Outer_68));
                      MR_hl_field(1, ShortHand_76, 2) = ((MR_Box) (Inner_69));
                      MR_hl_field(1, ShortHand_76, 3) = ((MR_Box) (MaybeOutputVars_70));
                      MR_hl_field(1, ShortHand_76, 4) = ((MR_Box) (MainGoal_74));
                      MR_hl_field(1, ShortHand_76, 5) = ((MR_Box) (OrElseGoals_75));
                      MR_hl_field(1, ShortHand_76, 6) = ((MR_Box) (OrElseInners_73));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_77 = ((MR_Word) ((MR_hl_field(2, ShortHand0_66, (MR_Integer) 0))));
                    MR_Word ResultVar_78 = ((MR_Word) ((MR_hl_field(2, ShortHand0_66, (MR_Integer) 1))));
                    MR_Word SubGoal0_87 = ((MR_Word) ((MR_hl_field(2, ShortHand0_66, (MR_Integer) 2))));
                    MR_Word SubGoal_88;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, SubGoal0_87, &SubGoal_88);
                    {
                      ShortHand_76 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, ShortHand_76, 0) = ((MR_Box) (MaybeIO_77));
                      MR_hl_field(2, ShortHand_76, 1) = ((MR_Box) (ResultVar_78));
                      MR_hl_field(2, ShortHand_76, 2) = ((MR_Box) (SubGoal_88));
                    }
                  }
                  break;
              }
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, GoalExpr_19, 1) = ((MR_Box) (ShortHand_76));
              }
            }
            break;
        }
        break;
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0), (MR_Word) (&hlds__goal_util_scalar_common_4[4]), HeadVar__1_1, ((MR_Box) (GoalInfo0_18)), &conv1_GoalInfo_20);
    GoalInfo_20 = ((MR_Word) (conv1_GoalInfo_20));
    {
      Goal_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_16, 0) = ((MR_Box) (GoalExpr_19));
      MR_hl_field(0, Goal_16, 1) = ((MR_Box) (GoalInfo_20));
    }
    {
      Case_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_11, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(0, Case_11, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(0, Case_11, 2) = ((MR_Box) (Goal_16));
    }
    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Cases0_10, &Cases_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_12));
    }
  }
}

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Goals0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Goal_11;
    MR_Word Goals_12;
    MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 0))));
    MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 1))));
    MR_Word GoalExpr_15;
    MR_Word GoalInfo_16;
    MR_Box conv1_GoalInfo_16;

    switch (MR_tag((MR_Word) GoalExpr0_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_57 = (MR_Word) ((MR_Word) (GoalExpr0_13));
          MR_Word SubGoal_58;

          hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, SubGoal0_57, &SubGoal_58);
          GoalExpr_15 = (MR_Word) ((MR_Word) (SubGoal_58));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        GoalExpr_15 = GoalExpr0_13;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            GoalExpr_15 = GoalExpr0_13;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_43 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 2))));
              MR_Word Goals_45;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Goals0_44, &Goals_45);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, GoalExpr_15, 1) = (MR_Box) ((MR_Unsigned) (ConjType_43));
                MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (Goals_45));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_79 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))));
              MR_Word Goals_80;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Goals0_79, &Goals_80);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Goals_80));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))));
              MR_Word CanFail_47 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 3))));
              MR_Word Cases_49;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Cases0_48, &Cases_49);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Var_46));
                MR_hl_field(3, GoalExpr_15, 2) = (MR_Box) ((MR_Unsigned) (CanFail_47));
                MR_hl_field(3, GoalExpr_15, 3) = ((MR_Box) (Cases_49));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))));
              MR_Word SubGoal0_81 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 2))));
              MR_Word SubGoal_82;

              succeeded = ((((MR_tag((MR_Word) Reason_59)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_59, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, SubGoal0_81, &SubGoal_82);
              else
                hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, SubGoal0_81, &SubGoal_82);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Reason_59));
                MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (SubGoal_82));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))));
              MR_Word Cond0_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 2))));
              MR_Word Then0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 3))));
              MR_Word Else0_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 4))));
              MR_Word Cond_54;
              MR_Word Then_55;
              MR_Word Else_56;

              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Cond0_51, &Cond_54);
              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Then0_52, &Then_55);
              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Else0_53, &Else_56);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Vars_50));
                MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (Cond_54));
                MR_hl_field(3, GoalExpr_15, 3) = ((MR_Box) (Then_55));
                MR_hl_field(3, GoalExpr_15, 4) = ((MR_Box) (Else_56));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))));
              MR_Word ShortHand_72;

              switch (MR_tag((MR_Word) ShortHand0_62)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA0_75 = ((MR_Word) ((MR_hl_field(0, ShortHand0_62, (MR_Integer) 0))));
                    MR_Word GoalB0_76 = ((MR_Word) ((MR_hl_field(0, ShortHand0_62, (MR_Integer) 1))));
                    MR_Word GoalA_77;
                    MR_Word GoalB_78;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, GoalA0_75, &GoalA_77);
                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, GoalB0_76, &GoalB_78);
                    {
                      ShortHand_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ShortHand_72, 0) = ((MR_Box) (GoalA_77));
                      MR_hl_field(0, ShortHand_72, 1) = ((MR_Box) (GoalB_78));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_63 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_62, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word Outer_64 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, (MR_Integer) 1))));
                    MR_Word Inner_65 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_66 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, (MR_Integer) 3))));
                    MR_Word MainGoal0_67 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_68 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, (MR_Integer) 5))));
                    MR_Word OrElseInners_69 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, (MR_Integer) 6))));
                    MR_Word MainGoal_70;
                    MR_Word OrElseGoals_71;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, MainGoal0_67, &MainGoal_70);
                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, OrElseGoals0_68, &OrElseGoals_71);
                    {
                      ShortHand_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ShortHand_72, 0) = (MR_Box) ((MR_Unsigned) (GoalType_63));
                      MR_hl_field(1, ShortHand_72, 1) = ((MR_Box) (Outer_64));
                      MR_hl_field(1, ShortHand_72, 2) = ((MR_Box) (Inner_65));
                      MR_hl_field(1, ShortHand_72, 3) = ((MR_Box) (MaybeOutputVars_66));
                      MR_hl_field(1, ShortHand_72, 4) = ((MR_Box) (MainGoal_70));
                      MR_hl_field(1, ShortHand_72, 5) = ((MR_Box) (OrElseGoals_71));
                      MR_hl_field(1, ShortHand_72, 6) = ((MR_Box) (OrElseInners_69));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_73 = ((MR_Word) ((MR_hl_field(2, ShortHand0_62, (MR_Integer) 0))));
                    MR_Word ResultVar_74 = ((MR_Word) ((MR_hl_field(2, ShortHand0_62, (MR_Integer) 1))));
                    MR_Word SubGoal0_83 = ((MR_Word) ((MR_hl_field(2, ShortHand0_62, (MR_Integer) 2))));
                    MR_Word SubGoal_84;

                    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, SubGoal0_83, &SubGoal_84);
                    {
                      ShortHand_72 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, ShortHand_72, 0) = ((MR_Box) (MaybeIO_73));
                      MR_hl_field(2, ShortHand_72, 1) = ((MR_Box) (ResultVar_74));
                      MR_hl_field(2, ShortHand_72, 2) = ((MR_Box) (SubGoal_84));
                    }
                  }
                  break;
              }
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (ShortHand_72));
              }
            }
            break;
        }
        break;
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0), (MR_Word) (&hlds__goal_util_scalar_common_4[3]), HeadVar__1_1, ((MR_Box) (GoalInfo0_14)), &conv1_GoalInfo_16);
    GoalInfo_16 = ((MR_Word) (conv1_GoalInfo_16));
    {
      Goal_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_11, 0) = ((MR_Box) (GoalExpr_15));
      MR_hl_field(0, Goal_11, 1) = ((MR_Box) (GoalInfo_16));
    }
    hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Goals0_10, &Goals_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_12));
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
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(
  MR_Word Features_5,
  MR_Word Goal0_7,
  MR_Word * Goal_8)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 0))));
  MR_Word GoalInfo0_10 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 1))));
  MR_Word GoalExpr_11;
  MR_Word GoalInfo_12;
  MR_Box conv1_GoalInfo_12;

  switch (MR_tag((MR_Word) GoalExpr0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_56 = (MR_Word) ((MR_Word) (GoalExpr0_9));
        MR_Word SubGoal_57;

        hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, SubGoal0_56, &SubGoal_57);
        GoalExpr_11 = (MR_Word) ((MR_Word) (SubGoal_57));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      GoalExpr_11 = GoalExpr0_9;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          GoalExpr_11 = GoalExpr0_9;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_42 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Goals_44;

            hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, Goals0_43, &Goals_44);
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_11, 1) = (MR_Box) ((MR_Unsigned) (ConjType_42));
              MR_hl_field(3, GoalExpr_11, 2) = ((MR_Box) (Goals_44));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_78 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Goals_79;

            hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, Goals0_78, &Goals_79);
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_11, 1) = ((MR_Box) (Goals_79));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word CanFail_46 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Cases_48;

            hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(Features_5, Cases0_47, &Cases_48);
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_11, 1) = ((MR_Box) (Var_45));
              MR_hl_field(3, GoalExpr_11, 2) = (MR_Box) ((MR_Unsigned) (CanFail_46));
              MR_hl_field(3, GoalExpr_11, 3) = ((MR_Box) (Cases_48));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word SubGoal0_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word SubGoal_81;

            succeeded = ((((MR_tag((MR_Word) Reason_58)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_58, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, SubGoal0_80, &SubGoal_81);
            else
              hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, SubGoal0_80, &SubGoal_81);
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_11, 1) = ((MR_Box) (Reason_58));
              MR_hl_field(3, GoalExpr_11, 2) = ((MR_Box) (SubGoal_81));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Cond0_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Then0_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Else0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 4))));
            MR_Word Cond_53;
            MR_Word Then_54;
            MR_Word Else_55;

            hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, Cond0_50, &Cond_53);
            hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, Then0_51, &Then_54);
            hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, Else0_52, &Else_55);
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_11, 1) = ((MR_Box) (Vars_49));
              MR_hl_field(3, GoalExpr_11, 2) = ((MR_Box) (Cond_53));
              MR_hl_field(3, GoalExpr_11, 3) = ((MR_Box) (Then_54));
              MR_hl_field(3, GoalExpr_11, 4) = ((MR_Box) (Else_55));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word ShortHand_71;

            switch (MR_tag((MR_Word) ShortHand0_61)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word GoalA0_74 = ((MR_Word) ((MR_hl_field(0, ShortHand0_61, (MR_Integer) 0))));
                  MR_Word GoalB0_75 = ((MR_Word) ((MR_hl_field(0, ShortHand0_61, (MR_Integer) 1))));
                  MR_Word GoalA_76;
                  MR_Word GoalB_77;

                  hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, GoalA0_74, &GoalA_76);
                  hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, GoalB0_75, &GoalB_77);
                  {
                    ShortHand_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ShortHand_71, 0) = ((MR_Box) (GoalA_76));
                    MR_hl_field(0, ShortHand_71, 1) = ((MR_Box) (GoalB_77));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_62 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_61, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_63 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, (MR_Integer) 1))));
                  MR_Word Inner_64 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_65 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, (MR_Integer) 3))));
                  MR_Word MainGoal0_66 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_67 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, (MR_Integer) 5))));
                  MR_Word OrElseInners_68 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, (MR_Integer) 6))));
                  MR_Word MainGoal_69;
                  MR_Word OrElseGoals_70;

                  hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, MainGoal0_66, &MainGoal_69);
                  hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, OrElseGoals0_67, &OrElseGoals_70);
                  {
                    ShortHand_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_71, 0) = (MR_Box) ((MR_Unsigned) (GoalType_62));
                    MR_hl_field(1, ShortHand_71, 1) = ((MR_Box) (Outer_63));
                    MR_hl_field(1, ShortHand_71, 2) = ((MR_Box) (Inner_64));
                    MR_hl_field(1, ShortHand_71, 3) = ((MR_Box) (MaybeOutputVars_65));
                    MR_hl_field(1, ShortHand_71, 4) = ((MR_Box) (MainGoal_69));
                    MR_hl_field(1, ShortHand_71, 5) = ((MR_Box) (OrElseGoals_70));
                    MR_hl_field(1, ShortHand_71, 6) = ((MR_Box) (OrElseInners_68));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_72 = ((MR_Word) ((MR_hl_field(2, ShortHand0_61, (MR_Integer) 0))));
                  MR_Word ResultVar_73 = ((MR_Word) ((MR_hl_field(2, ShortHand0_61, (MR_Integer) 1))));
                  MR_Word SubGoal0_82 = ((MR_Word) ((MR_hl_field(2, ShortHand0_61, (MR_Integer) 2))));
                  MR_Word SubGoal_83;

                  hlds__goal_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, SubGoal0_82, &SubGoal_83);
                  {
                    ShortHand_71 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_71, 0) = ((MR_Box) (MaybeIO_72));
                    MR_hl_field(2, ShortHand_71, 1) = ((MR_Box) (ResultVar_73));
                    MR_hl_field(2, ShortHand_71, 2) = ((MR_Box) (SubGoal_83));
                  }
                }
                break;
            }
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, GoalExpr_11, 1) = ((MR_Box) (ShortHand_71));
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
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_12));
  }
}

void MR_CALL 
hlds__goal_util__goals_goal_vars_2_p_0(
  MR_Word Goals_3,
  MR_Word * STATE_VARIABLE_Set_5)
{
  MR_Word STATE_VARIABLE_Set_6_6;

  STATE_VARIABLE_Set_6_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__goal_util__goals_goal_vars_acc_3_p_0(Goals_3, STATE_VARIABLE_Set_6_6, STATE_VARIABLE_Set_5);
}

void MR_CALL 
hlds__goal_util__goal_vars_2_p_0(
  MR_Word Goal_3,
  MR_Word * STATE_VARIABLE_Set_5)
{
  MR_Word STATE_VARIABLE_Set_6_6;

  STATE_VARIABLE_Set_6_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__goal_util__goal_vars_acc_3_p_0(Goal_3, STATE_VARIABLE_Set_6_6, STATE_VARIABLE_Set_5);
}

static MR_Box MR_CALL 
hlds__goal_util__goal_vars_acc_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__goal_util__goal_vars_acc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__goal_util__goal_vars_acc_3_p_0(
  MR_Word tscc_proc_1_input_1_Goal_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Set_100)
{
  MR_Word tscc_proc_2_input_1_RHS_4;
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Set_0_18;
  MR_Word tscc_output_1_STATE_VARIABLE_Set_100;

  // The code for TSCC PROC 1: pred hlds.goal_util.goal_vars_acc/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred hlds.goal_util.goal_vars_acc/3-0
  ;
  // proc 2 in TSCC: pred hlds.goal_util.rhs_goal_vars_acc/3-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Goal_4 = tscc_proc_1_input_1_Goal_4;
    MR_Word STATE_VARIABLE_Set_0_99 = tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
    MR_Word STATE_VARIABLE_Set_100;
    MR_bool succeeded;
    MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_144 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_144;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_0_99;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
          tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 0))));
          MR_Word RHS_9 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 1))));
          MR_Word Unif_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_Set_101_101;
          MR_Word STATE_VARIABLE_Set_103_103;
          MR_Word next_value_of_tscc_proc_2_input_1_RHS_4;
          MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Set_0_18;

          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_8, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_101_101);
          switch (MR_tag((MR_Word) Unif_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CellToReuse_17 = ((MR_Word) ((MR_hl_field(0, Unif_11, (MR_Integer) 4))));
                MR_Word TypeInfo_170_170;
                MR_Word Var_102;
                MR_Word Var_166;

                succeeded = ((MR_tag((MR_Word) CellToReuse_17)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_102 = (MR_Word) (MR_body((MR_Word) (CellToReuse_17), (MR_Integer) 1));
                  Var_166 = ((MR_Word) ((MR_hl_field(0, Var_102, (MR_Integer) 0))));
                  TypeInfo_170_170 = (MR_Word) (&hlds__goal_util_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_170_170, ((MR_Box) (Var_8)), ((MR_Box) (Var_166)));
                }
                if (succeeded)
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_8, STATE_VARIABLE_Set_101_101, &STATE_VARIABLE_Set_103_103);
                else
                  STATE_VARIABLE_Set_103_103 = STATE_VARIABLE_Set_101_101;
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Set_103_103 = STATE_VARIABLE_Set_101_101;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Set_103_103 = STATE_VARIABLE_Set_101_101;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unif_11, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_Set_103_103 = STATE_VARIABLE_Set_101_101;
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_Set_103_103 = STATE_VARIABLE_Set_101_101;
                  break;
              }
              break;
          }
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_RHS_4 = RHS_9;
          next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Set_0_18 = STATE_VARIABLE_Set_103_103;
          tscc_proc_2_input_1_RHS_4 = next_value_of_tscc_proc_2_input_1_RHS_4;
          tscc_proc_2_input_2_STATE_VARIABLE_Set_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Set_0_18;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgVars_137 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 2))));

          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_137, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_100);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Word ArgVars_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word GenericCallVars_40;
              MR_Word STATE_VARIABLE_Set_105_105;

              hlds__goal_util__generic_call_vars_2_p_0(GenericCall_35, &GenericCallVars_40);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GenericCallVars_40, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_105_105);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_36, STATE_VARIABLE_Set_105_105, &STATE_VARIABLE_Set_100);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));
              MR_Word ExtraArgs_78 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 5))));
              MR_Word ExtraVars_81;
              MR_Word STATE_VARIABLE_Set_125_125;
              MR_Word ArgVars_146;

              ArgVars_146 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_4[0]), Args_77);
              ExtraVars_81 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_4[1]), ExtraArgs_78);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_146, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_125_125);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraVars_81, STATE_VARIABLE_Set_125_125, &STATE_VARIABLE_Set_100);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));

              hlds__goal_util__goals_goal_vars_acc_3_p_0(Goals_47, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_100);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_167 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              hlds__goal_util__goals_goal_vars_acc_3_p_0(Goals_167, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_100);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_Set_109_109;
              MR_Word Var_138 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_138, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_109_109);
              hlds__goal_util__cases_goal_vars_acc_3_p_0(Cases_49, STATE_VARIABLE_Set_109_109, &STATE_VARIABLE_Set_100);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Word SubGoal_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word STATE_VARIABLE_Set_111_111;
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;

              switch (MR_tag((MR_Word) Reason_50)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Vars_52 = ((MR_Word) ((MR_hl_field(0, Reason_50, (MR_Integer) 0))));

                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_52, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_111_111);
                  }
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_Set_111_111 = STATE_VARIABLE_Set_0_99;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Vars_139 = ((MR_Word) ((MR_hl_field(2, Reason_50, (MR_Integer) 0))));

                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_139, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_111_111);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Reason_50, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      STATE_VARIABLE_Set_111_111 = STATE_VARIABLE_Set_0_99;
                      break;
                    case (MR_Integer) 1:
                      STATE_VARIABLE_Set_111_111 = STATE_VARIABLE_Set_0_99;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Var_141 = ((MR_Word) ((MR_hl_field(3, Reason_50, (MR_Integer) 1))));

                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_141, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_111_111);
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word Var_168 = ((MR_Word) ((MR_hl_field(3, Reason_50, (MR_Integer) 1))));

                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_168, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_111_111);
                      }
                      break;
                    case (MR_Integer) 4:
                      STATE_VARIABLE_Set_111_111 = STATE_VARIABLE_Set_0_99;
                      break;
                    case (MR_Integer) 5:
                      STATE_VARIABLE_Set_111_111 = STATE_VARIABLE_Set_0_99;
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word Var_140 = ((MR_Word) ((MR_hl_field(3, Reason_50, (MR_Integer) 1))));

                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_140, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_111_111);
                      }
                      break;
                    case (MR_Integer) 7:
                      STATE_VARIABLE_Set_111_111 = STATE_VARIABLE_Set_0_99;
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word LCVar_57 = ((MR_Word) ((MR_hl_field(3, Reason_50, (MR_Integer) 1))));
                        MR_Word LCSVar_58 = ((MR_Word) ((MR_hl_field(3, Reason_50, (MR_Integer) 2))));
                        MR_Word STATE_VARIABLE_Set_115_115;

                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_57, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_115_115);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCSVar_58, STATE_VARIABLE_Set_115_115, &STATE_VARIABLE_Set_111_111);
                      }
                      break;
                  }
                  break;
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_51;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_111_111;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word Then_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word Else_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_Set_119_119;
              MR_Word STATE_VARIABLE_Set_120_120;
              MR_Word STATE_VARIABLE_Set_121_121;
              MR_Word Vars_145 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;

              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_145, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_119_119);
              hlds__goal_util__goal_vars_acc_3_p_0(Cond_71, STATE_VARIABLE_Set_119_119, &STATE_VARIABLE_Set_120_120);
              hlds__goal_util__goal_vars_acc_3_p_0(Then_72, STATE_VARIABLE_Set_120_120, &STATE_VARIABLE_Set_121_121);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_4 = Else_73;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_121_121;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand_82 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Shorthand_82)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word LeftGoal_97 = ((MR_Word) ((MR_hl_field(0, Shorthand_82, (MR_Integer) 0))));
                    MR_Word RightGoal_98 = ((MR_Word) ((MR_hl_field(0, Shorthand_82, (MR_Integer) 1))));
                    MR_Word STATE_VARIABLE_Set_135_135;
                    MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                    MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;

                    hlds__goal_util__goal_vars_acc_3_p_0(LeftGoal_97, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_135_135);
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_Goal_4 = RightGoal_98;
                    next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_135_135;
                    tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                    tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Outer_84 = ((MR_Word) ((MR_hl_field(1, Shorthand_82, (MR_Integer) 1))));
                    MR_Word Inner_85 = ((MR_Word) ((MR_hl_field(1, Shorthand_82, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_86 = ((MR_Word) ((MR_hl_field(1, Shorthand_82, (MR_Integer) 3))));
                    MR_Word MainGoal_87 = ((MR_Word) ((MR_hl_field(1, Shorthand_82, (MR_Integer) 4))));
                    MR_Word OrElseGoals_88 = ((MR_Word) ((MR_hl_field(1, Shorthand_82, (MR_Integer) 5))));
                    MR_Word OuterDI_90 = ((MR_Word) ((MR_hl_field(0, Outer_84, (MR_Integer) 0))));
                    MR_Word OuterUO_91 = ((MR_Word) ((MR_hl_field(0, Outer_84, (MR_Integer) 1))));
                    MR_Word InnerDI_92;
                    MR_Word InnerUO_93;
                    MR_Word STATE_VARIABLE_Set_127_127;
                    MR_Word STATE_VARIABLE_Set_128_128;
                    MR_Word STATE_VARIABLE_Set_129_129;
                    MR_Word STATE_VARIABLE_Set_130_130;
                    MR_Word STATE_VARIABLE_Set_131_131;
                    MR_Word STATE_VARIABLE_Set_132_132;

                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterDI_90, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_127_127);
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterUO_91, STATE_VARIABLE_Set_127_127, &STATE_VARIABLE_Set_128_128);
                    InnerDI_92 = ((MR_Word) ((MR_hl_field(0, Inner_85, (MR_Integer) 0))));
                    InnerUO_93 = ((MR_Word) ((MR_hl_field(0, Inner_85, (MR_Integer) 1))));
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerDI_92, STATE_VARIABLE_Set_128_128, &STATE_VARIABLE_Set_129_129);
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerUO_93, STATE_VARIABLE_Set_129_129, &STATE_VARIABLE_Set_130_130);
                    if ((MaybeOutputVars_86 == (MR_Word) ((MR_Unsigned) 0U)))
                      STATE_VARIABLE_Set_131_131 = STATE_VARIABLE_Set_130_130;
                    else
                    {
                      MR_Word OutputVars_94 = ((MR_Word) ((MR_hl_field(1, MaybeOutputVars_86, (MR_Integer) 0))));

                      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputVars_94, STATE_VARIABLE_Set_130_130, &STATE_VARIABLE_Set_131_131);
                    }
                    hlds__goal_util__goal_vars_acc_3_p_0(MainGoal_87, STATE_VARIABLE_Set_131_131, &STATE_VARIABLE_Set_132_132);
                    hlds__goal_util__goals_goal_vars_acc_3_p_0(OrElseGoals_88, STATE_VARIABLE_Set_132_132, &STATE_VARIABLE_Set_100);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_147 = ((MR_Word) ((MR_hl_field(2, Shorthand_82, (MR_Integer) 2))));
                    MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_147;
                    MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_0_99;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                    tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Set_100 = STATE_VARIABLE_Set_100;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word RHS_4 = tscc_proc_2_input_1_RHS_4;
    MR_Word STATE_VARIABLE_Set_0_18 = tscc_proc_2_input_2_STATE_VARIABLE_Set_0_18;
    MR_Word STATE_VARIABLE_Set_19;

    switch (MR_tag((MR_Word) RHS_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word X_6 = ((MR_Word) ((MR_hl_field(0, RHS_4, (MR_Integer) 0))));

          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_6, STATE_VARIABLE_Set_0_18, &STATE_VARIABLE_Set_19);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgVars_9 = ((MR_Word) ((MR_hl_field(1, RHS_4, (MR_Integer) 2))));

          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_9, STATE_VARIABLE_Set_0_18, &STATE_VARIABLE_Set_19);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word NonLocals_14 = ((MR_Word) ((MR_hl_field(2, RHS_4, (MR_Integer) 2))));
          MR_Word ArgVarsModes_15 = ((MR_Word) ((MR_hl_field(2, RHS_4, (MR_Integer) 3))));
          MR_Word Goal_17 = ((MR_Word) ((MR_hl_field(2, RHS_4, (MR_Integer) 5))));
          MR_Word STATE_VARIABLE_Set_22_22;
          MR_Word STATE_VARIABLE_Set_23_23;
          MR_Word ArgVars_25;
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;

          mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes_15, &ArgVars_25);
          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_14, STATE_VARIABLE_Set_0_18, &STATE_VARIABLE_Set_22_22);
          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_25, STATE_VARIABLE_Set_22_22, &STATE_VARIABLE_Set_23_23);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Goal_4 = Goal_17;
          next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_23_23;
          tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
          tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
          goto top_of_proc_1;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Set_100 = STATE_VARIABLE_Set_19;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Set_100 = tscc_output_1_STATE_VARIABLE_Set_100;
  return;
}

static void MR_CALL 
hlds__goal_util__rhs_goal_vars_acc_3_p_0(
  MR_Word tscc_proc_2_input_1_RHS_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Set_0_18,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Set_100)
{
  MR_Word tscc_proc_1_input_1_Goal_4;
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
  MR_Word tscc_output_1_STATE_VARIABLE_Set_100;

  // The code for TSCC PROC 2: pred hlds.goal_util.rhs_goal_vars_acc/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred hlds.goal_util.goal_vars_acc/3-0
  ;
  // proc 2 in TSCC: pred hlds.goal_util.rhs_goal_vars_acc/3-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Goal_4 = tscc_proc_1_input_1_Goal_4;
    MR_Word STATE_VARIABLE_Set_0_99 = tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
    MR_Word STATE_VARIABLE_Set_100;
    MR_bool succeeded;
    MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_144 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_144;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_0_99;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
          tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 0))));
          MR_Word RHS_9 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 1))));
          MR_Word Unif_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_Set_101_101;
          MR_Word STATE_VARIABLE_Set_103_103;
          MR_Word next_value_of_tscc_proc_2_input_1_RHS_4;
          MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Set_0_18;

          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_8, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_101_101);
          switch (MR_tag((MR_Word) Unif_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CellToReuse_17 = ((MR_Word) ((MR_hl_field(0, Unif_11, (MR_Integer) 4))));
                MR_Word TypeInfo_170_170;
                MR_Word Var_102;
                MR_Word Var_166;

                succeeded = ((MR_tag((MR_Word) CellToReuse_17)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_102 = (MR_Word) (MR_body((MR_Word) (CellToReuse_17), (MR_Integer) 1));
                  Var_166 = ((MR_Word) ((MR_hl_field(0, Var_102, (MR_Integer) 0))));
                  TypeInfo_170_170 = (MR_Word) (&hlds__goal_util_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_170_170, ((MR_Box) (Var_8)), ((MR_Box) (Var_166)));
                }
                if (succeeded)
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_8, STATE_VARIABLE_Set_101_101, &STATE_VARIABLE_Set_103_103);
                else
                  STATE_VARIABLE_Set_103_103 = STATE_VARIABLE_Set_101_101;
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Set_103_103 = STATE_VARIABLE_Set_101_101;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Set_103_103 = STATE_VARIABLE_Set_101_101;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unif_11, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_Set_103_103 = STATE_VARIABLE_Set_101_101;
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_Set_103_103 = STATE_VARIABLE_Set_101_101;
                  break;
              }
              break;
          }
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_RHS_4 = RHS_9;
          next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Set_0_18 = STATE_VARIABLE_Set_103_103;
          tscc_proc_2_input_1_RHS_4 = next_value_of_tscc_proc_2_input_1_RHS_4;
          tscc_proc_2_input_2_STATE_VARIABLE_Set_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Set_0_18;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgVars_137 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 2))));

          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_137, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_100);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Word ArgVars_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word GenericCallVars_40;
              MR_Word STATE_VARIABLE_Set_105_105;

              hlds__goal_util__generic_call_vars_2_p_0(GenericCall_35, &GenericCallVars_40);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GenericCallVars_40, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_105_105);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_36, STATE_VARIABLE_Set_105_105, &STATE_VARIABLE_Set_100);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));
              MR_Word ExtraArgs_78 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 5))));
              MR_Word ExtraVars_81;
              MR_Word STATE_VARIABLE_Set_125_125;
              MR_Word ArgVars_146;

              ArgVars_146 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_4[0]), Args_77);
              ExtraVars_81 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_4[1]), ExtraArgs_78);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_146, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_125_125);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraVars_81, STATE_VARIABLE_Set_125_125, &STATE_VARIABLE_Set_100);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));

              hlds__goal_util__goals_goal_vars_acc_3_p_0(Goals_47, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_100);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_167 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              hlds__goal_util__goals_goal_vars_acc_3_p_0(Goals_167, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_100);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_Set_109_109;
              MR_Word Var_138 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_138, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_109_109);
              hlds__goal_util__cases_goal_vars_acc_3_p_0(Cases_49, STATE_VARIABLE_Set_109_109, &STATE_VARIABLE_Set_100);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Word SubGoal_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word STATE_VARIABLE_Set_111_111;
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;

              switch (MR_tag((MR_Word) Reason_50)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Vars_52 = ((MR_Word) ((MR_hl_field(0, Reason_50, (MR_Integer) 0))));

                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_52, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_111_111);
                  }
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_Set_111_111 = STATE_VARIABLE_Set_0_99;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Vars_139 = ((MR_Word) ((MR_hl_field(2, Reason_50, (MR_Integer) 0))));

                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_139, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_111_111);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Reason_50, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      STATE_VARIABLE_Set_111_111 = STATE_VARIABLE_Set_0_99;
                      break;
                    case (MR_Integer) 1:
                      STATE_VARIABLE_Set_111_111 = STATE_VARIABLE_Set_0_99;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Var_141 = ((MR_Word) ((MR_hl_field(3, Reason_50, (MR_Integer) 1))));

                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_141, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_111_111);
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word Var_168 = ((MR_Word) ((MR_hl_field(3, Reason_50, (MR_Integer) 1))));

                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_168, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_111_111);
                      }
                      break;
                    case (MR_Integer) 4:
                      STATE_VARIABLE_Set_111_111 = STATE_VARIABLE_Set_0_99;
                      break;
                    case (MR_Integer) 5:
                      STATE_VARIABLE_Set_111_111 = STATE_VARIABLE_Set_0_99;
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word Var_140 = ((MR_Word) ((MR_hl_field(3, Reason_50, (MR_Integer) 1))));

                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_140, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_111_111);
                      }
                      break;
                    case (MR_Integer) 7:
                      STATE_VARIABLE_Set_111_111 = STATE_VARIABLE_Set_0_99;
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word LCVar_57 = ((MR_Word) ((MR_hl_field(3, Reason_50, (MR_Integer) 1))));
                        MR_Word LCSVar_58 = ((MR_Word) ((MR_hl_field(3, Reason_50, (MR_Integer) 2))));
                        MR_Word STATE_VARIABLE_Set_115_115;

                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_57, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_115_115);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCSVar_58, STATE_VARIABLE_Set_115_115, &STATE_VARIABLE_Set_111_111);
                      }
                      break;
                  }
                  break;
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_51;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_111_111;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word Then_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word Else_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_Set_119_119;
              MR_Word STATE_VARIABLE_Set_120_120;
              MR_Word STATE_VARIABLE_Set_121_121;
              MR_Word Vars_145 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;

              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_145, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_119_119);
              hlds__goal_util__goal_vars_acc_3_p_0(Cond_71, STATE_VARIABLE_Set_119_119, &STATE_VARIABLE_Set_120_120);
              hlds__goal_util__goal_vars_acc_3_p_0(Then_72, STATE_VARIABLE_Set_120_120, &STATE_VARIABLE_Set_121_121);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_4 = Else_73;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_121_121;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand_82 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Shorthand_82)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word LeftGoal_97 = ((MR_Word) ((MR_hl_field(0, Shorthand_82, (MR_Integer) 0))));
                    MR_Word RightGoal_98 = ((MR_Word) ((MR_hl_field(0, Shorthand_82, (MR_Integer) 1))));
                    MR_Word STATE_VARIABLE_Set_135_135;
                    MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                    MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;

                    hlds__goal_util__goal_vars_acc_3_p_0(LeftGoal_97, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_135_135);
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_Goal_4 = RightGoal_98;
                    next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_135_135;
                    tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                    tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Outer_84 = ((MR_Word) ((MR_hl_field(1, Shorthand_82, (MR_Integer) 1))));
                    MR_Word Inner_85 = ((MR_Word) ((MR_hl_field(1, Shorthand_82, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_86 = ((MR_Word) ((MR_hl_field(1, Shorthand_82, (MR_Integer) 3))));
                    MR_Word MainGoal_87 = ((MR_Word) ((MR_hl_field(1, Shorthand_82, (MR_Integer) 4))));
                    MR_Word OrElseGoals_88 = ((MR_Word) ((MR_hl_field(1, Shorthand_82, (MR_Integer) 5))));
                    MR_Word OuterDI_90 = ((MR_Word) ((MR_hl_field(0, Outer_84, (MR_Integer) 0))));
                    MR_Word OuterUO_91 = ((MR_Word) ((MR_hl_field(0, Outer_84, (MR_Integer) 1))));
                    MR_Word InnerDI_92;
                    MR_Word InnerUO_93;
                    MR_Word STATE_VARIABLE_Set_127_127;
                    MR_Word STATE_VARIABLE_Set_128_128;
                    MR_Word STATE_VARIABLE_Set_129_129;
                    MR_Word STATE_VARIABLE_Set_130_130;
                    MR_Word STATE_VARIABLE_Set_131_131;
                    MR_Word STATE_VARIABLE_Set_132_132;

                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterDI_90, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_127_127);
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterUO_91, STATE_VARIABLE_Set_127_127, &STATE_VARIABLE_Set_128_128);
                    InnerDI_92 = ((MR_Word) ((MR_hl_field(0, Inner_85, (MR_Integer) 0))));
                    InnerUO_93 = ((MR_Word) ((MR_hl_field(0, Inner_85, (MR_Integer) 1))));
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerDI_92, STATE_VARIABLE_Set_128_128, &STATE_VARIABLE_Set_129_129);
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerUO_93, STATE_VARIABLE_Set_129_129, &STATE_VARIABLE_Set_130_130);
                    if ((MaybeOutputVars_86 == (MR_Word) ((MR_Unsigned) 0U)))
                      STATE_VARIABLE_Set_131_131 = STATE_VARIABLE_Set_130_130;
                    else
                    {
                      MR_Word OutputVars_94 = ((MR_Word) ((MR_hl_field(1, MaybeOutputVars_86, (MR_Integer) 0))));

                      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputVars_94, STATE_VARIABLE_Set_130_130, &STATE_VARIABLE_Set_131_131);
                    }
                    hlds__goal_util__goal_vars_acc_3_p_0(MainGoal_87, STATE_VARIABLE_Set_131_131, &STATE_VARIABLE_Set_132_132);
                    hlds__goal_util__goals_goal_vars_acc_3_p_0(OrElseGoals_88, STATE_VARIABLE_Set_132_132, &STATE_VARIABLE_Set_100);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_147 = ((MR_Word) ((MR_hl_field(2, Shorthand_82, (MR_Integer) 2))));
                    MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_147;
                    MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_0_99;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                    tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Set_100 = STATE_VARIABLE_Set_100;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word RHS_4 = tscc_proc_2_input_1_RHS_4;
    MR_Word STATE_VARIABLE_Set_0_18 = tscc_proc_2_input_2_STATE_VARIABLE_Set_0_18;
    MR_Word STATE_VARIABLE_Set_19;

    switch (MR_tag((MR_Word) RHS_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word X_6 = ((MR_Word) ((MR_hl_field(0, RHS_4, (MR_Integer) 0))));

          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_6, STATE_VARIABLE_Set_0_18, &STATE_VARIABLE_Set_19);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgVars_9 = ((MR_Word) ((MR_hl_field(1, RHS_4, (MR_Integer) 2))));

          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_9, STATE_VARIABLE_Set_0_18, &STATE_VARIABLE_Set_19);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word NonLocals_14 = ((MR_Word) ((MR_hl_field(2, RHS_4, (MR_Integer) 2))));
          MR_Word ArgVarsModes_15 = ((MR_Word) ((MR_hl_field(2, RHS_4, (MR_Integer) 3))));
          MR_Word Goal_17 = ((MR_Word) ((MR_hl_field(2, RHS_4, (MR_Integer) 5))));
          MR_Word STATE_VARIABLE_Set_22_22;
          MR_Word STATE_VARIABLE_Set_23_23;
          MR_Word ArgVars_25;
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;

          mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes_15, &ArgVars_25);
          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_14, STATE_VARIABLE_Set_0_18, &STATE_VARIABLE_Set_22_22);
          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_25, STATE_VARIABLE_Set_22_22, &STATE_VARIABLE_Set_23_23);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Goal_4 = Goal_17;
          next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_23_23;
          tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
          tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
          goto top_of_proc_1;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Set_100 = STATE_VARIABLE_Set_19;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Set_100 = tscc_output_1_STATE_VARIABLE_Set_100;
  return;
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Set_3 = STATE_VARIABLE_Set_0_2;
    else
    {
      MR_Word Goal_9;
      MR_Word Cases_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Set_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Set_0_2;

      Goal_9 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 2))));
      hlds__goal_util__goal_vars_acc_3_p_0(Goal_9, STATE_VARIABLE_Set_0_2, &STATE_VARIABLE_Set_15_15);
      // direct tailcall eliminated
      ;
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Set_3 = STATE_VARIABLE_Set_0_2;
    else
    {
      MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Set_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Set_0_2;

      hlds__goal_util__goal_vars_acc_3_p_0(Goal_7, STATE_VARIABLE_Set_0_2, &STATE_VARIABLE_Set_12_12);
      // direct tailcall eliminated
      ;
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
        MR_Word Var_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_3));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_8));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

void MR_CALL 
hlds__goal_util__clone_variables_vs_9_p_0(
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Renaming_9 = STATE_VARIABLE_Renaming_0_8;
      *STATE_VARIABLE_VarTypes_7 = STATE_VARIABLE_VarTypes_0_6;
      *STATE_VARIABLE_VarSet_5 = STATE_VARIABLE_VarSet_0_4;
    }
    else
    {
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_VarSet_35_35;
      MR_Word STATE_VARIABLE_VarTypes_36_36;
      MR_Word STATE_VARIABLE_Renaming_37_37;
      MR_Word _CloneVar_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VarSet_0_4;
      MR_Word next_value_of_STATE_VARIABLE_VarTypes_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Renaming_0_8;

      hlds__goal_util__clone_variable_vs_10_p_0(Var_21, OldVarNames_2, OldVarTypes_3, STATE_VARIABLE_VarSet_0_4, &STATE_VARIABLE_VarSet_35_35, STATE_VARIABLE_VarTypes_0_6, &STATE_VARIABLE_VarTypes_36_36, STATE_VARIABLE_Renaming_0_8, &STATE_VARIABLE_Renaming_37_37, &_CloneVar_28);
      // direct tailcall eliminated
      ;
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
hlds__goal_util__clone_variables_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word OldVarTable_2,
  MR_Word STATE_VARIABLE_VarTable_0_3,
  MR_Word * STATE_VARIABLE_VarTable_4,
  MR_Word STATE_VARIABLE_Renaming_0_5,
  MR_Word * STATE_VARIABLE_Renaming_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Renaming_6 = STATE_VARIABLE_Renaming_0_5;
      *STATE_VARIABLE_VarTable_4 = STATE_VARIABLE_VarTable_0_3;
    }
    else
    {
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_VarTable_24_24;
      MR_Word STATE_VARIABLE_Renaming_25_25;
      MR_Word _Clone_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VarTable_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Renaming_0_5;

      hlds__goal_util__clone_variable_7_p_0(Var_14, OldVarTable_2, STATE_VARIABLE_VarTable_0_3, &STATE_VARIABLE_VarTable_24_24, STATE_VARIABLE_Renaming_0_5, &STATE_VARIABLE_Renaming_25_25, &_Clone_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_15;
      next_value_of_STATE_VARIABLE_VarTable_0_3 = STATE_VARIABLE_VarTable_24_24;
      next_value_of_STATE_VARIABLE_Renaming_0_5 = STATE_VARIABLE_Renaming_25_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarTable_0_3 = next_value_of_STATE_VARIABLE_VarTable_0_3;
      STATE_VARIABLE_Renaming_0_5 = next_value_of_STATE_VARIABLE_Renaming_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__goal_util__clone_variable_vs_10_p_0(
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
      mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_19, CloneVar_17, STATE_VARIABLE_VarSet_0_21, STATE_VARIABLE_VarSet_22);
    else
      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CloneVar_17, STATE_VARIABLE_VarSet_0_21, STATE_VARIABLE_VarSet_22);
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), ((MR_Box) (Var_11)), ((MR_Box) (*CloneVar_17)), STATE_VARIABLE_Renaming_0_25, STATE_VARIABLE_Renaming_26);
    succeeded = parse_tree__vartypes__search_var_type_3_p_0(OldVarTypes_13, Var_11, &VarType_20);
    if (succeeded)
      parse_tree__vartypes__add_var_type_4_p_0(*CloneVar_17, VarType_20, STATE_VARIABLE_VarTypes_0_23, STATE_VARIABLE_VarTypes_24);
    else
      *STATE_VARIABLE_VarTypes_24 = STATE_VARIABLE_VarTypes_0_23;
  }
}

void MR_CALL 
hlds__goal_util__clone_variable_7_p_0(
  MR_Word Var_8,
  MR_Word OldVarTable_9,
  MR_Word STATE_VARIABLE_VarTable_0_15,
  MR_Word * STATE_VARIABLE_VarTable_16,
  MR_Word STATE_VARIABLE_Renaming_0_17,
  MR_Word * STATE_VARIABLE_Renaming_18,
  MR_Word * CloneVar_12)
{
  MR_bool succeeded;
  MR_Word CloneVarPrime_13;
  MR_Box conv0_CloneVarPrime_13;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), STATE_VARIABLE_Renaming_0_17, ((MR_Box) (Var_8)), &conv0_CloneVarPrime_13);
  if (succeeded)
  {
    CloneVarPrime_13 = ((MR_Word) (conv0_CloneVarPrime_13));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *CloneVar_12 = CloneVarPrime_13;
    *STATE_VARIABLE_Renaming_18 = STATE_VARIABLE_Renaming_0_17;
    *STATE_VARIABLE_VarTable_16 = STATE_VARIABLE_VarTable_0_15;
  }
  else
  {
    MR_Word Entry_14;

    parse_tree__var_table__lookup_var_entry_3_p_0(OldVarTable_9, Var_8, &Entry_14);
    parse_tree__var_table__add_var_entry_4_p_0(Entry_14, CloneVar_12, STATE_VARIABLE_VarTable_0_15, STATE_VARIABLE_VarTable_16);
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), ((MR_Box) (Var_8)), ((MR_Box) (*CloneVar_12)), STATE_VARIABLE_Renaming_0_17, STATE_VARIABLE_Renaming_18);
  }
}

void MR_CALL 
hlds__goal_util__create_renaming_7_p_0(
  MR_Word OrigVars_8,
  MR_Word InstMapDelta_9,
  MR_Word STATE_VARIABLE_VarTable_0_16,
  MR_Word * STATE_VARIABLE_VarTable_17,
  MR_Word * Unifies_11,
  MR_Word * NewVars_12,
  MR_Word * Renaming_13)
{
  MR_Word RevUnifies_14;
  MR_Word RevNewVars_15;
  MR_Word Var_21;

  Var_21 = mercury__map__init_0_f_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_1[0]));
  hlds__goal_util__create_renaming_2_10_p_0(OrigVars_8, InstMapDelta_9, STATE_VARIABLE_VarTable_0_16, STATE_VARIABLE_VarTable_17, (MR_Word) ((MR_Unsigned) 0U), &RevUnifies_14, (MR_Word) ((MR_Unsigned) 0U), &RevNewVars_15, Var_21, Renaming_13);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), RevNewVars_15, NewVars_12);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevUnifies_14, Unifies_11);
}

static void MR_CALL 
hlds__goal_util__create_renaming_2_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMapDelta_2,
  MR_Word STATE_VARIABLE_VarTable_0_3,
  MR_Word * STATE_VARIABLE_VarTable_4,
  MR_Word STATE_VARIABLE_RevUnifies_0_5,
  MR_Word * STATE_VARIABLE_RevUnifies_6,
  MR_Word STATE_VARIABLE_RevNewVars_0_7,
  MR_Word * STATE_VARIABLE_RevNewVars_8,
  MR_Word STATE_VARIABLE_Renaming_0_9,
  MR_Word * STATE_VARIABLE_Renaming_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Renaming_10 = STATE_VARIABLE_Renaming_0_9;
      *STATE_VARIABLE_RevNewVars_8 = STATE_VARIABLE_RevNewVars_0_7;
      *STATE_VARIABLE_RevUnifies_6 = STATE_VARIABLE_RevUnifies_0_5;
      *STATE_VARIABLE_VarTable_4 = STATE_VARIABLE_VarTable_0_3;
    }
    else
    {
      MR_Word OrigVar_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word OrigVars_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word OrigEntry_31;
      MR_Word OrigType_33;
      MR_Word OrigTypeIsDummy_34;
      MR_Word NewEntry_35;
      MR_Word NewVar_36;
      MR_Word NewInst_37;
      MR_Word UnifyMode_38;
      MR_Word Unification_39;
      MR_Word GoalExpr_41;
      MR_Word NonLocals_42;
      MR_Word UnifyInstMapDelta_43;
      MR_Word GoalInfo_44;
      MR_Word Goal_45;
      MR_Word STATE_VARIABLE_VarTable_55_55;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_70;
      MR_Word STATE_VARIABLE_RevUnifies_71_71;
      MR_Word STATE_VARIABLE_Renaming_72_72;
      MR_Word STATE_VARIABLE_RevNewVars_73_73;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VarTable_0_3;
      MR_Word next_value_of_STATE_VARIABLE_RevUnifies_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RevNewVars_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Renaming_0_9;

      parse_tree__var_table__lookup_var_entry_3_p_0(STATE_VARIABLE_VarTable_0_3, OrigVar_24, &OrigEntry_31);
      OrigType_33 = ((MR_Word) ((MR_hl_field(0, OrigEntry_31, (MR_Integer) 1))));
      OrigTypeIsDummy_34 = ((MR_Unsigned) ((MR_hl_field(0, OrigEntry_31, (MR_Integer) 2))) & (MR_Integer) 1);
      {
        NewEntry_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NewEntry_35, 0) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(0, NewEntry_35, 1) = ((MR_Box) (OrigType_33));
        MR_hl_field(0, NewEntry_35, 2) = (MR_Box) ((MR_Unsigned) (OrigTypeIsDummy_34));
      }
      parse_tree__var_table__add_var_entry_4_p_0(NewEntry_35, &NewVar_36, STATE_VARIABLE_VarTable_0_3, &STATE_VARIABLE_VarTable_55_55);
      hlds__instmap__instmap_delta_lookup_var_3_p_0(InstMapDelta_2, OrigVar_24, &NewInst_37);
      {
        UnifyMode_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, UnifyMode_38, 0) = ((MR_Box) (NewInst_37));
        MR_hl_field(0, UnifyMode_38, 1) = ((MR_Box) (NewInst_37));
        MR_hl_field(0, UnifyMode_38, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, UnifyMode_38, 3) = ((MR_Box) (NewInst_37));
      }
      {
        Unification_39 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Unification_39, 0) = ((MR_Box) (OrigVar_24));
        MR_hl_field(2, Unification_39, 1) = ((MR_Box) (NewVar_36));
      }
      {
        Var_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_61, 0) = ((MR_Box) (NewVar_36));
      }
      {
        GoalExpr_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, GoalExpr_41, 0) = ((MR_Box) (OrigVar_24));
        MR_hl_field(1, GoalExpr_41, 1) = ((MR_Box) (Var_61));
        MR_hl_field(1, GoalExpr_41, 2) = ((MR_Box) (UnifyMode_38));
        MR_hl_field(1, GoalExpr_41, 3) = ((MR_Box) (Unification_39));
        MR_hl_field(1, GoalExpr_41, 4) = ((MR_Box) (&hlds__goal_util_scalar_common_1[5]));
      }
      {
        Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_63, 0) = ((MR_Box) (NewVar_36));
        MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_62, 0) = ((MR_Box) (OrigVar_24));
        MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
      }
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_62, &NonLocals_42);
      {
        Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_66, 0) = ((MR_Box) (OrigVar_24));
        MR_hl_field(0, Var_66, 1) = ((MR_Box) (NewInst_37));
      }
      {
        Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
        MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      UnifyInstMapDelta_43 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_65);
      Var_70 = mercury__term_context__dummy_context_0_f_0();
      hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_42, UnifyInstMapDelta_43, (MR_Integer) 0, (MR_Integer) 0, Var_70, &GoalInfo_44);
      {
        Goal_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Goal_45, 0) = ((MR_Box) (GoalExpr_41));
        MR_hl_field(0, Goal_45, 1) = ((MR_Box) (GoalInfo_44));
      }
      {
        STATE_VARIABLE_RevUnifies_71_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevUnifies_71_71, 0) = ((MR_Box) (Goal_45));
        MR_hl_field(1, STATE_VARIABLE_RevUnifies_71_71, 1) = ((MR_Box) (STATE_VARIABLE_RevUnifies_0_5));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__goal_util_scalar_common_1[0]), (MR_Word) (&hlds__goal_util_scalar_common_1[0]), ((MR_Box) (OrigVar_24)), ((MR_Box) (NewVar_36)), STATE_VARIABLE_Renaming_0_9, &STATE_VARIABLE_Renaming_72_72);
      {
        STATE_VARIABLE_RevNewVars_73_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevNewVars_73_73, 0) = ((MR_Box) (NewVar_36));
        MR_hl_field(1, STATE_VARIABLE_RevNewVars_73_73, 1) = ((MR_Box) (STATE_VARIABLE_RevNewVars_0_7));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = OrigVars_25;
      next_value_of_STATE_VARIABLE_VarTable_0_3 = STATE_VARIABLE_VarTable_55_55;
      next_value_of_STATE_VARIABLE_RevUnifies_0_5 = STATE_VARIABLE_RevUnifies_71_71;
      next_value_of_STATE_VARIABLE_RevNewVars_0_7 = STATE_VARIABLE_RevNewVars_73_73;
      next_value_of_STATE_VARIABLE_Renaming_0_9 = STATE_VARIABLE_Renaming_72_72;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarTable_0_3 = next_value_of_STATE_VARIABLE_VarTable_0_3;
      STATE_VARIABLE_RevUnifies_0_5 = next_value_of_STATE_VARIABLE_RevUnifies_0_5;
      STATE_VARIABLE_RevNewVars_0_7 = next_value_of_STATE_VARIABLE_RevNewVars_0_7;
      STATE_VARIABLE_Renaming_0_9 = next_value_of_STATE_VARIABLE_Renaming_0_9;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__goal_util__update_instmap_goal_info_3_p_0(
  MR_Word GoalInfo0_4,
  MR_Word STATE_VARIABLE_InstMap_0_7,
  MR_Word * STATE_VARIABLE_InstMap_8)
{
  MR_Word DeltaInstMap_6;

  DeltaInstMap_6 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_4);
  hlds__instmap__apply_instmap_delta_3_p_0(DeltaInstMap_6, STATE_VARIABLE_InstMap_0_7, STATE_VARIABLE_InstMap_8);
}

void MR_CALL 
hlds__goal_util__update_instmap_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InstMap_0_8,
  MR_Word * STATE_VARIABLE_InstMap_9)
{
  MR_Word GoalInfo0_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word DeltaInstMap_7;

  DeltaInstMap_7 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_5);
  hlds__instmap__apply_instmap_delta_3_p_0(DeltaInstMap_7, STATE_VARIABLE_InstMap_0_8, STATE_VARIABLE_InstMap_9);
}

static MR_bool MR_CALL 
hlds__goal_util____Unify____attach_in_from_ground_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__goal_util____Unify____attach_in_from_ground_term_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__goal_util____Compare____attach_in_from_ground_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__goal_util____Compare____attach_in_from_ground_term_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__goal_util____Unify____can_reorder_goals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__goal_util____Unify____can_reorder_goals_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__goal_util____Compare____can_reorder_goals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__goal_util____Compare____can_reorder_goals_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__goal_util____Unify____goal_is_atomic_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__goal_util____Unify____goal_is_atomic_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__goal_util____Compare____goal_is_atomic_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__goal_util____Compare____goal_is_atomic_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__goal_util____Unify____is_leaf_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__goal_util____Unify____is_leaf_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__goal_util____Compare____is_leaf_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__goal_util____Compare____is_leaf_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__goal_util____Unify____maybe_transformed_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__goal_util____Unify____maybe_transformed_goal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__goal_util____Compare____maybe_transformed_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__goal_util____Compare____maybe_transformed_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__goal_util____Unify____reorder_maintains_termination_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__goal_util____Unify____reorder_maintains_termination_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__goal_util____Compare____reorder_maintains_termination_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__goal_util____Compare____reorder_maintains_termination_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&hlds__goal_util__hlds__goal_util__type_ctor_info_can_reorder_goals_0);
	MR_register_type_ctor_info(&hlds__goal_util__hlds__goal_util__type_ctor_info_goal_is_atomic_0);
	MR_register_type_ctor_info(&hlds__goal_util__hlds__goal_util__type_ctor_info_is_leaf_0);
	MR_register_type_ctor_info(&hlds__goal_util__hlds__goal_util__type_ctor_info_maybe_transformed_goal_0);
	MR_register_type_ctor_info(&hlds__goal_util__hlds__goal_util__type_ctor_info_reorder_maintains_termination_0);
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
