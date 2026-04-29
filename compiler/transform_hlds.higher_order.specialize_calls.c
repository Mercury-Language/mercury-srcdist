/*
** Automatically generated from `higher_order.specialize_calls.m'
** by the Mercury compiler,
** version rotd-2026-04-29
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


// :- module transform_hlds.higher_order.specialize_calls.
// :- implementation.

/*
INIT mercury__transform_hlds__higher_order__specialize_calls__init
ENDINIT
*/

#include "transform_hlds.higher_order.specialize_calls.mih"


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
#include "getopt.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.polymorphism_info.mih"
#include "check_hlds.polymorphism_type_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_type_unify.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.higher_order.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "transform_hlds.higher_order.higher_order_global_info.mih"
#include "transform_hlds.higher_order.higher_order_info.mih"
#include "transform_hlds.higher_order.specialize_unify_compare.mih"



struct transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0_s {
  MR_Word transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__HigherOrderArgs_11;
  MR_bool transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded;
  jmp_buf transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__commit_0;
  MR_Word transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__Var_47;
  MR_Word transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__HOArg_50;
  MR_Box transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__conv4_HOArg_50;
};

struct transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0_s {
  MR_Word transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__TVarSet_2;
  MR_bool transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded;
  MR_Word transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__ArgTypes0_26;
  MR_Word transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__ArgTypes_28;
  MR_Word transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instances_32;
  jmp_buf transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__commit_0;
  MR_Word transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__TypeInfo_31_67;
  MR_Word transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__TypeCtorInfo_32_68;
  MR_Word transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40;
  MR_Word transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__InstanceTVarSet_51;
  MR_Word transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__InstanceTypes0_53;
  MR_Word transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Constraints0_54;
  MR_Word transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Renaming_60;
  MR_Word transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__InstanceTypes_61;
  MR_Word transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Constraints1_62;
  MR_Word transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__InstanceTVars_63;
  MR_Word transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__UnconstrainedTVars0_64;
  MR_Word transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Subst_65;
  MR_Word transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__KindMap_66;
  MR_Box transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__conv1_Instance_40;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__higher_order__specialize_calls__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__higher_order__specialize_calls__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__specialize_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__higher_order__specialize_calls__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__specialize_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__higher_order__specialize_calls__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__higher_order__specialize_calls__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__higher_order__specialize_calls__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_EnumFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_can_request_0_0;

static const MR_EnumFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_can_request_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_ordinal_ordered_can_request_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_name_ordered_can_request_0[2];

static const MR_Integer transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_can_request_0[2];

static const MR_PseudoTypeInfo transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_types_find_result_0_0[1];

static const MR_DuFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_find_result_0_0;

static const MR_PseudoTypeInfo transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_types_find_result_0_1[1];

static const MR_DuFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_find_result_0_1;

static const MR_DuFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_find_result_0_2;

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_find_result_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_find_result_0_1[1];

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_find_result_0_2[1];

static const MR_DuPtagLayout transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_ptag_ordered_find_result_0[3];

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_name_ordered_find_result_0[3];

static const MR_Integer transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_find_result_0[3];

static const MR_FA_TypeInfo_Struct2 transform_hlds__higher_order__specialize_calls__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0;

static const MR_PseudoTypeInfo transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_types_post_branch_info_0_0[2];

static const MR_DuArgLocn transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_locns_post_branch_info_0_0[2];

static const MR_DuFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_post_branch_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_post_branch_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_ptag_ordered_post_branch_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_name_ordered_post_branch_info_0[1];

static const MR_Integer transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_post_branch_info_0[1];

static const MR_Integer transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_pre_branch_info_0[1];

static const MR_NotagFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__notag_functor_desc_pre_branch_info_0;

static const MR_EnumFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_reachability_0_0;

static const MR_EnumFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_reachability_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_ordinal_ordered_reachability_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_name_ordered_reachability_0[2];

static const MR_Integer transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_reachability_0[2];

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__specialize_calls__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_types_specialization_result_0_0[2];

static const MR_DuFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_specialization_result_0_0;

static const MR_DuFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_specialization_result_0_1;

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_specialization_result_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_specialization_result_0_1[1];

static const MR_DuPtagLayout transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_ptag_ordered_specialization_result_0[2];

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_name_ordered_specialization_result_0[2];

static const MR_Integer transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_specialization_result_0[2];

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__specialize_calls__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_types_type_class_info_args_0_0[1];

static const MR_DuFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_type_class_info_args_0_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__specialize_calls__list__ti_list_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_PseudoTypeInfo transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_types_type_class_info_args_0_1[1];

static const MR_DuFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_type_class_info_args_0_1;

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_type_class_info_args_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_type_class_info_args_0_1[1];

static const MR_DuPtagLayout transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_ptag_ordered_type_class_info_args_0[2];

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_name_ordered_type_class_info_args_0[2];

static const MR_Integer transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_type_class_info_args_0[2];

static const MR_EnumFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_typeclass_info_manipulator_0_0;

static const MR_EnumFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_typeclass_info_manipulator_0_1;

static const MR_EnumFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_typeclass_info_manipulator_0_2;

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_ordinal_ordered_typeclass_info_manipulator_0[3];

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_name_ordered_typeclass_info_manipulator_0[3];

static const MR_Integer transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_typeclass_info_manipulator_0[3];

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__find_typeclass_info_components__1857__1_2_p_0(
  MR_Word TCIConstConsId_27,
  MR_Word HeadVar__2_38);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__arg_contains_type_info_for_tvar__1595__1_2_p_0(
  MR_Word LambdaHeadVar__1_23,
  MR_Word * LambdaHeadVar__2_24);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__find_matching_version__1488__1_3_p_0(
  MR_Word VarTable_24,
  MR_Word LambdaHeadVar__1_43,
  MR_Word * LambdaHeadVar__2_44);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__merge_common_var_const_list__599__1_2_p_0(
  MR_Word VarA_22,
  MR_Word VarB_25);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__merge_post_branch_infos_into_one__506__1_2_p_0(
  MR_Word LambdaHeadVar__1_12,
  MR_Word * LambdaHeadVar__2_13);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____typeclass_info_manipulator_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____typeclass_info_manipulator_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____type_class_info_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____type_class_info_args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____specialization_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____specialization_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____reachability_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____reachability_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____pre_branch_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____pre_branch_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____post_branch_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____post_branch_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____find_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____find_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____can_request_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____can_request_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__arg_contains_type_info_for_tvar_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__arg_contains_type_info_for_tvar_4_p_0(
  MR_Word RttiVarMaps_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_TVars_0_19,
  MR_Word * STATE_VARIABLE_TVars_20);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_cases_9_p_0(
  MR_Word PreInfo_10,
  MR_Word HeadCase0_11,
  MR_Word TailCases0_12,
  MR_Word * HeadCase_13,
  MR_Word * TailCases_14,
  MR_Word STATE_VARIABLE_PostInfos_0_22,
  MR_Word * STATE_VARIABLE_PostInfos_23,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_disjunct_6_p_0(
  MR_Word PreInfo_7,
  MR_Word Goal0_8,
  MR_Word * Goal_9,
  MR_Word * PostInfo_10,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_disjuncts_9_p_0(
  MR_Word PreInfo_10,
  MR_Word HeadGoal0_11,
  MR_Word TailGoals0_12,
  MR_Word * HeadGoal_13,
  MR_Word * TailGoals_14,
  MR_Word STATE_VARIABLE_PostInfos_0_22,
  MR_Word * STATE_VARIABLE_PostInfos_23,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_parallel_conj_loop_7_p_0(
  MR_Word PreInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_PostInfos_0_4,
  MR_Word * STATE_VARIABLE_PostInfos_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_parallel_conj_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_parallel_conj_4_p_0(
  MR_Word Goals0_5,
  MR_Word * Goals_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_91,
  MR_Word * STATE_VARIABLE_Info_92);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__maybe_specialize_pred_const_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
transform_hlds__higher_order__specialize_calls__maybe_specialize_pred_const_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__maybe_specialize_pred_const_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_71,
  MR_Word * STATE_VARIABLE_Info_72);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__maybe_specialize_call_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__maybe_specialize_method_call_7_p_0(
  MR_Word TypeClassInfoVar_8,
  MR_Word MethodProcNum_9,
  MR_Word Args_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_Info_0_72,
  MR_Word * STATE_VARIABLE_Info_73);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__get_unconstrained_instance_type_infos_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word TypeClassInfoVar_10,
  MR_Word UnconstrainedTVarTypes_11,
  MR_Integer Index_12,
  MR_Word * Goals_13,
  MR_Word * Vars_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_17,
  MR_Word * STATE_VARIABLE_ProcInfo_18);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__get_typeclass_info_args_loop__ho4_12_p_0(
  MR_Word ModuleInfo_1,
  MR_Word TypeClassInfoVar_2,
  MR_Word PredId_3,
  MR_Integer ProcId_4,
  MR_Word SymName_5,
  MR_Word HeadVar__7_7,
  MR_Integer Index_8,
  MR_Word * HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_11,
  MR_Word * STATE_VARIABLE_ProcInfo_12);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__get_arg_typeclass_infos_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word TypeClassInfoVar_10,
  MR_Word InstanceConstraints_11,
  MR_Integer Index_12,
  MR_Word * Goals_13,
  MR_Word * Vars_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_18,
  MR_Word * STATE_VARIABLE_ProcInfo_19);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__get_typeclass_info_args_loop__ho3_12_p_0(
  MR_Word ModuleInfo_1,
  MR_Word TypeClassInfoVar_2,
  MR_Word PredId_3,
  MR_Integer ProcId_4,
  MR_Word SymName_5,
  MR_Word HeadVar__7_7,
  MR_Integer Index_8,
  MR_Word * HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_11,
  MR_Word * STATE_VARIABLE_ProcInfo_12);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_instance_method_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer MethodNum_12,
  MR_Word ClassTypes_13,
  MR_Word * PredId_14,
  MR_Integer * ProcId_15,
  MR_Word * Constraints_16,
  MR_Word * UnconstrainedTVarTypes_17,
  MR_Word STATE_VARIABLE_TVarSet_0_23,
  MR_Word * STATE_VARIABLE_TVarSet_24);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__maybe_specialize_higher_order_call_6_p_0(
  MR_Word PredVar_7,
  MR_Word Args_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__construct_specialized_higher_order_call_7_p_0(
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word AllArgs_10,
  MR_Word GoalInfo_11,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__interpret_typeclass_info_manipulator_6_p_0(
  MR_Word Manipulator_7,
  MR_Word Args_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Info_0_59,
  MR_Word * STATE_VARIABLE_Info_60);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__find_typeclass_info_components_9_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__find_typeclass_info_components_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word KnownVarMap_11,
  MR_Word TypeClassInfoConsId_12,
  MR_Word TypeClassInfoArgs_13,
  MR_Word * ModuleName_14,
  MR_Word * ClassId_15,
  MR_Integer * InstanceNum_16,
  MR_String * Instance_17,
  MR_Word * Args_18);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__maybe_add_alias_4_p_0(
  MR_Word LVar_5,
  MR_Word RVar_6,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__maybe_specialize_ordinary_call_11_p_0(
  MR_Word CanRequest_12,
  MR_Word CalleePredProcId_13,
  MR_Word CalleePredInfo_14,
  MR_Word CalleeProcInfo_15,
  MR_Word Args0_16,
  MR_Word IsBuiltin_17,
  MR_Word MaybeContext_18,
  MR_Word GoalInfo_19,
  MR_Word * Result_20,
  MR_Word STATE_VARIABLE_Info_0_75,
  MR_Word * STATE_VARIABLE_Info_76);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__construct_extra_type_infos_5_p_0(
  MR_Word Types_6,
  MR_Word * TypeInfoVars_7,
  MR_Word * TypeInfoGoals_8,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0(
  MR_Word Info_8,
  MR_Word CalleePredProcId_9,
  MR_Word Args0_10,
  MR_Word HigherOrderArgs_11,
  MR_Word RequestKind_12,
  MR_Word Context_13,
  MR_Word * Result_14);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_102_111_114_95_118_101_114_115_105_111_110_95_108_111_111_112_95_95_91_49_93_95_48_7_p_0(
  MR_Word Params_2,
  MR_Word ModuleInfo_3,
  MR_Word Request_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * Match_7);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word TVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word CalleeStatus_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word VarTable_5,
  MR_Word RttiVarMaps_6,
  MR_Word KnownVarMap_7,
  MR_Integer ArgNo_8,
  MR_Word STATE_VARIABLE_HOArgsCord_0_9,
  MR_Word * STATE_VARIABLE_HOArgsCord_10);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__record_interesting_consts_3_p_0(
  MR_Word Unification_4,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__merge_post_branch_infos_into_one_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__merge_post_branch_infos_into_one_2_p_0(
  MR_Word PostInfos_3,
  MR_Word * MergedPostInfo_4);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__merge_post_branch_infos_3_p_0(
  MR_Word PostA_4,
  MR_Word PostB_5,
  MR_Word * Post_6);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__set_post_branch_info_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__get_pre_branch_info_2_p_0(
  MR_Word Info_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__get_post_branch_info_for_goal_3_p_0(
  MR_Word Info_4,
  MR_Word Goal_5,
  MR_Word * PostBranchInfo_6);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__set_pre_branch_info_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__merge_post_branch_var_maps_passes_3_p_0(
  MR_Word VarMap1_4,
  MR_Word VarMaps2Plus_5,
  MR_Word * MergedVarMap_6);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__merge_post_branch_var_maps_pass_4_p_0(
  MR_Word VarMap1_5,
  MR_Word VarMaps2Plus_6,
  MR_Word * HeadMergedVarMap_7,
  MR_Word * TailMergedVarMaps_8);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__merge_common_var_const_list_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__merge_common_var_const_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__acc_specialization_requests_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____can_request_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____can_request_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____find_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____find_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____post_branch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____post_branch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____pre_branch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____pre_branch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____reachability_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____reachability_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____specialization_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____specialization_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____type_class_info_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____type_class_info_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____typeclass_info_manipulator_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____typeclass_info_manipulator_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_1[11][2];

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_2[7][3];

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_3[1][9];

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_4[4][5];

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_5[3][6];

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_6[2][7];




static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_1[11][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[3]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]))
  },
  /* row   9 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__higher_order__specialize_calls__merge_post_branch_infos_into_one_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__higher_order__specialize_calls__maybe_specialize_pred_const_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__higher_order__specialize_calls__ho_traverse_parallel_conj_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__higher_order__specialize_calls__arg_contains_type_info_for_tvar_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_3[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_must_recompute_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_4[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_post_branch_info_0)),
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_5[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_6[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__type_ctor_info_higher_order_info_0)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__type_ctor_info_higher_order_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__higher_order__specialize_calls__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__higher_order__specialize_calls__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__specialize_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__higher_order__specialize_calls__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__higher_order__specialize_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__specialize_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__higher_order__specialize_calls__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__higher_order__specialize_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__higher_order__specialize_calls__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__higher_order__specialize_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__higher_order__specialize_calls__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_EnumFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_can_request_0_0 = {
  (MR_String) "can_request",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_can_request_0_1 = {
  (MR_String) "can_not_request",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_ordinal_ordered_can_request_0[2] = {
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_can_request_0_0,
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_can_request_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_name_ordered_can_request_0[2] = {
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_can_request_0_1,
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_can_request_0_0
};

static const MR_Integer transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_can_request_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_can_request_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__higher_order__specialize_calls____Unify____can_request_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__specialize_calls____Compare____can_request_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.specialize_calls",
  (MR_String) "can_request",
  { transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_name_ordered_can_request_0 },
  { transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_ordinal_ordered_can_request_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_can_request_0,

};

static const MR_PseudoTypeInfo transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_types_find_result_0_0[1] = { (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_match_0) };

static const MR_DuFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_find_result_0_0 = {
  (MR_String) "find_result_match",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_types_find_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_types_find_result_0_1[1] = { (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0) };

static const MR_DuFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_find_result_0_1 = {
  (MR_String) "find_result_request",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_types_find_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_find_result_0_2 = {
  (MR_String) "find_result_no_request",
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

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_find_result_0_0[1] = { &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_find_result_0_2 };

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_find_result_0_1[1] = { &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_find_result_0_0 };

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_find_result_0_2[1] = { &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_find_result_0_1 };

static const MR_DuPtagLayout transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_ptag_ordered_find_result_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_find_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_find_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_find_result_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_name_ordered_find_result_0[3] = {
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_find_result_0_0,
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_find_result_0_2,
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_find_result_0_1
};

static const MR_Integer transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_find_result_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_find_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__higher_order__specialize_calls____Unify____find_result_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__specialize_calls____Compare____find_result_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.specialize_calls",
  (MR_String) "find_result",
  { transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_name_ordered_find_result_0 },
  { transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_ptag_ordered_find_result_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_find_result_0,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__higher_order__specialize_calls__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__higher_order__specialize_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_types_post_branch_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__specialize_calls__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_reachability_0)
};

static const MR_DuArgLocn transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_locns_post_branch_info_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_post_branch_info_0_0 = {
  (MR_String) "post_branch_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_types_post_branch_info_0_0,
  NULL,
  transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_locns_post_branch_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_post_branch_info_0_0[1] = { &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_post_branch_info_0_0 };

static const MR_DuPtagLayout transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_ptag_ordered_post_branch_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_post_branch_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_name_ordered_post_branch_info_0[1] = { &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_post_branch_info_0_0 };

static const MR_Integer transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_post_branch_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_post_branch_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__higher_order__specialize_calls____Unify____post_branch_info_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__specialize_calls____Compare____post_branch_info_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.specialize_calls",
  (MR_String) "post_branch_info",
  { transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_name_ordered_post_branch_info_0 },
  { transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_ptag_ordered_post_branch_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_post_branch_info_0,

};

static const MR_Integer transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_pre_branch_info_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__notag_functor_desc_pre_branch_info_0 = {
  (MR_String) "pre_branch_info",
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__specialize_calls__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_pre_branch_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__higher_order__specialize_calls____Unify____pre_branch_info_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__specialize_calls____Compare____pre_branch_info_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.specialize_calls",
  (MR_String) "pre_branch_info",
  { &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__notag_functor_desc_pre_branch_info_0 },
  { &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__notag_functor_desc_pre_branch_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_pre_branch_info_0,

};

static const MR_EnumFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_reachability_0_0 = {
  (MR_String) "reachable",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_reachability_0_1 = {
  (MR_String) "unreachable",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_ordinal_ordered_reachability_0[2] = {
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_reachability_0_0,
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_reachability_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_name_ordered_reachability_0[2] = {
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_reachability_0_0,
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_reachability_0_1
};

static const MR_Integer transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_reachability_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_reachability_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__higher_order__specialize_calls____Unify____reachability_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__specialize_calls____Compare____reachability_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.specialize_calls",
  (MR_String) "reachability",
  { transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_name_ordered_reachability_0 },
  { transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_ordinal_ordered_reachability_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_reachability_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__specialize_calls__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_PseudoTypeInfo transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_types_specialization_result_0_0[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__specialize_calls__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_expr_0)
};

static const MR_DuFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_specialization_result_0_0 = {
  (MR_String) "specialized",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_types_specialization_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_specialization_result_0_1 = {
  (MR_String) "not_specialized",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_specialization_result_0_0[1] = { &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_specialization_result_0_1 };

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_specialization_result_0_1[1] = { &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_specialization_result_0_0 };

static const MR_DuPtagLayout transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_ptag_ordered_specialization_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_specialization_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_specialization_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_name_ordered_specialization_result_0[2] = {
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_specialization_result_0_1,
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_specialization_result_0_0
};

static const MR_Integer transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_specialization_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_specialization_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__higher_order__specialize_calls____Unify____specialization_result_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__specialize_calls____Compare____specialization_result_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.specialize_calls",
  (MR_String) "specialization_result",
  { transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_name_ordered_specialization_result_0 },
  { transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_ptag_ordered_specialization_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_specialization_result_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__specialize_calls__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__higher_order__specialize_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_types_type_class_info_args_0_0[1] = { (MR_PseudoTypeInfo) (&transform_hlds__higher_order__specialize_calls__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_type_class_info_args_0_0 = {
  (MR_String) "tci_arg_vars",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_types_type_class_info_args_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__specialize_calls__list__ti_list_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0) }
};

static const MR_PseudoTypeInfo transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_types_type_class_info_args_0_1[1] = { (MR_PseudoTypeInfo) (&transform_hlds__higher_order__specialize_calls__list__ti_list_1hlds__const_struct__type_ctor_info_const_struct_arg_0) };

static const MR_DuFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_type_class_info_args_0_1 = {
  (MR_String) "tci_arg_consts",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_types_type_class_info_args_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_type_class_info_args_0_0[1] = { &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_type_class_info_args_0_0 };

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_type_class_info_args_0_1[1] = { &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_type_class_info_args_0_1 };

static const MR_DuPtagLayout transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_ptag_ordered_type_class_info_args_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_type_class_info_args_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_type_class_info_args_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_name_ordered_type_class_info_args_0[2] = {
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_type_class_info_args_0_1,
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_type_class_info_args_0_0
};

static const MR_Integer transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_type_class_info_args_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_type_class_info_args_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__higher_order__specialize_calls____Unify____type_class_info_args_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__specialize_calls____Compare____type_class_info_args_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.specialize_calls",
  (MR_String) "type_class_info_args",
  { transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_name_ordered_type_class_info_args_0 },
  { transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_ptag_ordered_type_class_info_args_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_type_class_info_args_0,

};

static const MR_EnumFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_typeclass_info_manipulator_0_0 = {
  (MR_String) "type_info_from_typeclass_info",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_typeclass_info_manipulator_0_1 = {
  (MR_String) "superclass_from_typeclass_info",
  INT32_C(1)
};

static const MR_EnumFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_typeclass_info_manipulator_0_2 = {
  (MR_String) "instance_constraint_from_typeclass_info",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_ordinal_ordered_typeclass_info_manipulator_0[3] = {
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_typeclass_info_manipulator_0_0,
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_typeclass_info_manipulator_0_1,
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_typeclass_info_manipulator_0_2
};

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_name_ordered_typeclass_info_manipulator_0[3] = {
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_typeclass_info_manipulator_0_2,
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_typeclass_info_manipulator_0_1,
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_typeclass_info_manipulator_0_0
};

static const MR_Integer transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_typeclass_info_manipulator_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_typeclass_info_manipulator_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__higher_order__specialize_calls____Unify____typeclass_info_manipulator_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__specialize_calls____Compare____typeclass_info_manipulator_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.specialize_calls",
  (MR_String) "typeclass_info_manipulator",
  { transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_name_ordered_typeclass_info_manipulator_0 },
  { transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_ordinal_ordered_typeclass_info_manipulator_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_typeclass_info_manipulator_0,

};

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__find_typeclass_info_components__1857__1_2_p_0(
  MR_Word TCIConstConsId_27,
  MR_Word HeadVar__2_38)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____cons_id_0_0(TCIConstConsId_27, HeadVar__2_38);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__arg_contains_type_info_for_tvar__1595__1_2_p_0(
  MR_Word LambdaHeadVar__1_23,
  MR_Word * LambdaHeadVar__2_24)
{
  MR_bool succeeded = ((MR_tag((MR_Word) LambdaHeadVar__1_23)) == (MR_Integer) 0);

  if (succeeded)
    *LambdaHeadVar__2_24 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_23, 0))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__find_matching_version__1488__1_3_p_0(
  MR_Word VarTable_24,
  MR_Word LambdaHeadVar__1_43,
  MR_Word * LambdaHeadVar__2_44)
{
  MR_Word T_49;

  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_24, LambdaHeadVar__1_43, &T_49);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_44 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (LambdaHeadVar__1_43));
    MR_hl_field(0, base, 1) = ((MR_Box) (T_49));
  }
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__merge_common_var_const_list__599__1_2_p_0(
  MR_Word VarA_22,
  MR_Word VarB_25)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), ((MR_Box) (VarA_22)), ((MR_Box) (VarB_25)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__merge_post_branch_infos_into_one__506__1_2_p_0(
  MR_Word LambdaHeadVar__1_12,
  MR_Word * LambdaHeadVar__2_13)
{
  MR_bool succeeded;
  MR_Word Var_14;

  *LambdaHeadVar__2_13 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_12, 0))));
  Var_14 = ((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_12, 1))) & (MR_Integer) 1);
  succeeded = (Var_14 == (MR_Integer) 0);
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____typeclass_info_manipulator_0_0(
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

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____typeclass_info_manipulator_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____type_class_info_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____type_class_info_args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[7]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      TypeInfo_10_10 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[8]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____specialization_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[6]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      hlds__hlds_goal____Compare____hlds_goal_expr_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____specialization_result_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      TypeInfo_11_11 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
        succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0(ArgX2_5, ArgY2_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____reachability_0_0(
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

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____reachability_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____pre_branch_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____pre_branch_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____post_branch_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Integer Var_13 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_14 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_13 < Var_14);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_13 > Var_14);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____post_branch_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____find_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
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
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
              MR_Word ArgY1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

              transform_hlds__higher_order__higher_order_global_info____Compare____match_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
      case (MR_Integer) 2:
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
              MR_Word ArgX1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 2));
              MR_Word ArgY1_7 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 2));

              transform_hlds__higher_order__higher_order_global_info____Compare____ho_request_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____find_result_0_0(
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
          MR_Word ArgX1_3 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
            succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____match_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 2));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 2));
            succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____ho_request_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____can_request_0_0(
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

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____can_request_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__arg_contains_type_info_for_tvar_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_24;

  succeeded = transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__arg_contains_type_info_for_tvar__1595__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_24);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_24));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__arg_contains_type_info_for_tvar_4_p_0(
  MR_Word RttiVarMaps_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_TVars_0_19,
  MR_Word * STATE_VARIABLE_TVars_20)
{
  MR_bool succeeded;
  MR_Word VarInfo_8;

  hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(RttiVarMaps_5, Var_6, &VarInfo_8);
  switch (MR_tag((MR_Word) VarInfo_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_TVars_20 = STATE_VARIABLE_TVars_0_19;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Type_9 = ((MR_Word) ((MR_hl_field(1, VarInfo_8, 0))));
        MR_Word TVar_10;

        succeeded = ((MR_tag((MR_Word) Type_9)) == (MR_Integer) 0);
        if (succeeded)
        {
          TVar_10 = ((MR_Word) ((MR_hl_field(0, Type_9, 0))));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_TVars_20 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (TVar_10));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TVars_0_19));
          }
        }
        else
          *STATE_VARIABLE_TVars_20 = STATE_VARIABLE_TVars_0_19;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Constraint_12 = ((MR_Word) ((MR_hl_field(2, VarInfo_8, 0))));
        MR_Word ClassArgTypes_14 = ((MR_Word) ((MR_hl_field(0, Constraint_12, 1))));
        MR_Word ClassTVars_18;

        mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[3]), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[6]), ClassArgTypes_14, &ClassTVars_18);
        *STATE_VARIABLE_TVars_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[3]), ClassTVars_18, STATE_VARIABLE_TVars_0_19);
      }
      break;
  }
}

void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_proc_6_p_0(
  MR_Word MustRecompute_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word * Requests_10,
  MR_Word STATE_VARIABLE_GlobalInfo_0_18,
  MR_Word * STATE_VARIABLE_GlobalInfo_19)
{
  MR_bool succeeded;
  MR_Word Info0_12;
  MR_Word Info_13;
  MR_Word PredInfo_14;
  MR_Word ProcInfo_15;
  MR_Word ModuleInfo1_16;
  MR_Word ModuleInfo_17;
  MR_Word STATE_VARIABLE_GlobalInfo_1_20;
  MR_Word VersionInfoMap_21;
  MR_Word Goal0_27;
  MR_Word Goal_28;
  MR_Word Var_29;
  MR_Word STATE_VARIABLE_Info_1_31;
  MR_Word Var_32;
  MR_Word STATE_VARIABLE_Info_2_33;
  MR_Word KnownVarMap_25;
  MR_Word VersionInfo_22;
  MR_Word Var_30;
  MR_Box conv0_VersionInfo_22;

  Info0_12 = transform_hlds__higher_order__higher_order_info__hoi_init_3_f_0(STATE_VARIABLE_GlobalInfo_0_18, PredId_8, ProcId_9);
  Var_29 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(Info0_12);
  VersionInfoMap_21 = transform_hlds__higher_order__higher_order_global_info__hogi_get_version_info_map_1_f_0(Var_29);
  Var_30 = transform_hlds__higher_order__higher_order_info__hoi_get_pred_proc_id_1_f_0(Info0_12);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0), VersionInfoMap_21, ((MR_Box) (Var_30)), &conv0_VersionInfo_22);
  if (succeeded)
  {
    VersionInfo_22 = ((MR_Word) (conv0_VersionInfo_22));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    KnownVarMap_25 = ((MR_Word) ((MR_hl_field(0, VersionInfo_22, 2))));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_25, Info0_12, &STATE_VARIABLE_Info_1_31);
  else
    STATE_VARIABLE_Info_1_31 = Info0_12;
  Var_32 = transform_hlds__higher_order__higher_order_info__hoi_get_proc_info_1_f_0(STATE_VARIABLE_Info_1_31);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(Var_32, &Goal0_27);
  transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(Goal0_27, &Goal_28, STATE_VARIABLE_Info_1_31, &STATE_VARIABLE_Info_2_33);
  {
    MR_Word Var_43;

    Var_43 = transform_hlds__higher_order__higher_order_info__hoi_get_changed_1_f_0(STATE_VARIABLE_Info_2_33);
    succeeded = (Var_43 == (MR_Integer) 0);
  }
  if (!(succeeded))
    succeeded = (MustRecompute_7 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word ModuleInfo0_36;
    MR_Word InstMap_37;
    MR_Word VarTable_38;
    MR_Word InstVarSet_39;
    MR_Word ModuleInfo_40;
    MR_Word GlobalInfo1_41;
    MR_Word GlobalInfo_42;
    MR_Word Var_44;
    MR_Word STATE_VARIABLE_ProcInfo_1_45;
    MR_Word STATE_VARIABLE_ProcInfo_2_46;
    MR_Word STATE_VARIABLE_ProcInfo_3_48;
    MR_Word STATE_VARIABLE_Goal_1_49;
    MR_Word STATE_VARIABLE_Goal_2_51;
    MR_Word STATE_VARIABLE_ProcInfo_4_52;
    MR_Word STATE_VARIABLE_Info_1_53;

    Var_44 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_2_33);
    ModuleInfo0_36 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_44);
    STATE_VARIABLE_ProcInfo_1_45 = transform_hlds__higher_order__higher_order_info__hoi_get_proc_info_1_f_0(STATE_VARIABLE_Info_2_33);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_28, STATE_VARIABLE_ProcInfo_1_45, &STATE_VARIABLE_ProcInfo_2_46);
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_2_46, &STATE_VARIABLE_ProcInfo_3_48);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_3_48, &STATE_VARIABLE_Goal_1_49);
    hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(ModuleInfo0_36, STATE_VARIABLE_ProcInfo_3_48, &InstMap_37);
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_3_48, &VarTable_38);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(STATE_VARIABLE_ProcInfo_3_48, &InstVarSet_39);
    check_hlds__recompute_instmap_deltas__recompute_instmap_delta_8_p_0((MR_Integer) 1, VarTable_38, InstVarSet_39, InstMap_37, STATE_VARIABLE_Goal_1_49, &STATE_VARIABLE_Goal_2_51, ModuleInfo0_36, &ModuleInfo_40);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(STATE_VARIABLE_Goal_2_51, STATE_VARIABLE_ProcInfo_3_48, &STATE_VARIABLE_ProcInfo_4_52);
    transform_hlds__higher_order__higher_order_info__hoi_set_proc_info_3_p_0(STATE_VARIABLE_ProcInfo_4_52, STATE_VARIABLE_Info_2_33, &STATE_VARIABLE_Info_1_53);
    GlobalInfo1_41 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_1_53);
    transform_hlds__higher_order__higher_order_global_info__hogi_set_module_info_3_p_0(ModuleInfo_40, GlobalInfo1_41, &GlobalInfo_42);
    transform_hlds__higher_order__higher_order_info__hoi_set_global_info_3_p_0(GlobalInfo_42, STATE_VARIABLE_Info_1_53, &Info_13);
  }
  else
    Info_13 = STATE_VARIABLE_Info_2_33;
  transform_hlds__higher_order__higher_order_info__hoi_results_5_p_0(Info_13, &STATE_VARIABLE_GlobalInfo_1_20, &PredInfo_14, &ProcInfo_15, Requests_10);
  ModuleInfo1_16 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(STATE_VARIABLE_GlobalInfo_1_20);
  hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_8, ProcId_9, PredInfo_14, ProcInfo_15, ModuleInfo1_16, &ModuleInfo_17);
  transform_hlds__higher_order__higher_order_global_info__hogi_set_module_info_3_p_0(ModuleInfo_17, STATE_VARIABLE_GlobalInfo_1_20, STATE_VARIABLE_GlobalInfo_19);
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_cases_9_p_0(
  MR_Word PreInfo_10,
  MR_Word HeadCase0_11,
  MR_Word TailCases0_12,
  MR_Word * HeadCase_13,
  MR_Word * TailCases_14,
  MR_Word STATE_VARIABLE_PostInfos_0_22,
  MR_Word * STATE_VARIABLE_PostInfos_23,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_Word HeadPostInfo_17;
  MR_Word STATE_VARIABLE_Info_1_26;
  MR_Word STATE_VARIABLE_PostInfos_1_27;
  MR_Word MainConsId_28 = ((MR_Word) ((MR_hl_field(0, HeadCase0_11, 0))));
  MR_Word OtherConsIds_29 = ((MR_Word) ((MR_hl_field(0, HeadCase0_11, 1))));
  MR_Word Goal0_30 = ((MR_Word) ((MR_hl_field(0, HeadCase0_11, 2))));
  MR_Word Goal_31;

  transform_hlds__higher_order__specialize_calls__ho_traverse_disjunct_6_p_0(PreInfo_10, Goal0_30, &Goal_31, &HeadPostInfo_17, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_1_26);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *HeadCase_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MainConsId_28));
    MR_hl_field(0, base, 1) = ((MR_Box) (OtherConsIds_29));
    MR_hl_field(0, base, 2) = ((MR_Box) (Goal_31));
  }
  {
    STATE_VARIABLE_PostInfos_1_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, STATE_VARIABLE_PostInfos_1_27, 0) = ((MR_Box) (HeadPostInfo_17));
    MR_hl_field(1, STATE_VARIABLE_PostInfos_1_27, 1) = ((MR_Box) (STATE_VARIABLE_PostInfos_0_22));
  }
  if ((TailCases0_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *TailCases_14 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_PostInfos_23 = STATE_VARIABLE_PostInfos_1_27;
    *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_1_26;
  }
  else
  {
    MR_Word HeadTailCase0_18 = ((MR_Word) ((MR_hl_field(1, TailCases0_12, 0))));
    MR_Word TailTailCases0_19 = ((MR_Word) ((MR_hl_field(1, TailCases0_12, 1))));
    MR_Word HeadTailCase_20;
    MR_Word TailTailCases_21;

    transform_hlds__higher_order__specialize_calls__ho_traverse_cases_9_p_0(PreInfo_10, HeadTailCase0_18, TailTailCases0_19, &HeadTailCase_20, &TailTailCases_21, STATE_VARIABLE_PostInfos_1_27, STATE_VARIABLE_PostInfos_23, STATE_VARIABLE_Info_1_26, STATE_VARIABLE_Info_25);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *TailCases_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadTailCase_20));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailTailCases_21));
    }
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_disjunct_6_p_0(
  MR_Word PreInfo_7,
  MR_Word Goal0_8,
  MR_Word * Goal_9,
  MR_Word * PostInfo_10,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Info_1_14;
  MR_Word KnownVarMap_15 = (MR_Word) (PreInfo_7);
  MR_Word InstMapDelta_16;
  MR_Word Reachability_17;
  MR_Word Var_18;
  MR_Word Var_19;

  transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_15, STATE_VARIABLE_Info_0_12, &STATE_VARIABLE_Info_1_14);
  transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(Goal0_8, Goal_9, STATE_VARIABLE_Info_1_14, STATE_VARIABLE_Info_13);
  Var_18 = ((MR_Word) ((MR_hl_field(0, *Goal_9, 1))));
  InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_18);
  succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_16);
  if (succeeded)
    Reachability_17 = (MR_Integer) 0;
  else
    Reachability_17 = (MR_Integer) 1;
  Var_19 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(*STATE_VARIABLE_Info_13);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *PostInfo_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Reachability_17));
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_disjuncts_9_p_0(
  MR_Word PreInfo_10,
  MR_Word HeadGoal0_11,
  MR_Word TailGoals0_12,
  MR_Word * HeadGoal_13,
  MR_Word * TailGoals_14,
  MR_Word STATE_VARIABLE_PostInfos_0_22,
  MR_Word * STATE_VARIABLE_PostInfos_23,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_Word HeadPostInfo_17;
  MR_Word STATE_VARIABLE_Info_1_26;
  MR_Word STATE_VARIABLE_PostInfos_1_27;
  MR_Word STATE_VARIABLE_Info_1_28;

  transform_hlds__higher_order__specialize_calls__set_pre_branch_info_3_p_0(PreInfo_10, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_1_28);
  transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(HeadGoal0_11, HeadGoal_13, STATE_VARIABLE_Info_1_28, &STATE_VARIABLE_Info_1_26);
  transform_hlds__higher_order__specialize_calls__get_post_branch_info_for_goal_3_p_0(STATE_VARIABLE_Info_1_26, *HeadGoal_13, &HeadPostInfo_17);
  {
    STATE_VARIABLE_PostInfos_1_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, STATE_VARIABLE_PostInfos_1_27, 0) = ((MR_Box) (HeadPostInfo_17));
    MR_hl_field(1, STATE_VARIABLE_PostInfos_1_27, 1) = ((MR_Box) (STATE_VARIABLE_PostInfos_0_22));
  }
  if ((TailGoals0_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *TailGoals_14 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_PostInfos_23 = STATE_VARIABLE_PostInfos_1_27;
    *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_1_26;
  }
  else
  {
    MR_Word HeadTailGoal0_18 = ((MR_Word) ((MR_hl_field(1, TailGoals0_12, 0))));
    MR_Word TailTailGoals0_19 = ((MR_Word) ((MR_hl_field(1, TailGoals0_12, 1))));
    MR_Word HeadTailGoal_20;
    MR_Word TailTailGoals_21;

    transform_hlds__higher_order__specialize_calls__ho_traverse_disjuncts_9_p_0(PreInfo_10, HeadTailGoal0_18, TailTailGoals0_19, &HeadTailGoal_20, &TailTailGoals_21, STATE_VARIABLE_PostInfos_1_27, STATE_VARIABLE_PostInfos_23, STATE_VARIABLE_Info_1_26, STATE_VARIABLE_Info_25);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *TailGoals_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadTailGoal_20));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailTailGoals_21));
    }
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_parallel_conj_loop_7_p_0(
  MR_Word PreInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_PostInfos_0_4,
  MR_Word * STATE_VARIABLE_PostInfos_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    *STATE_VARIABLE_PostInfos_5 = STATE_VARIABLE_PostInfos_0_4;
  }
  else
  {
    MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Goal_18;
    MR_Word Goals_19;
    MR_Word GoalPostInfo_22;
    MR_Word STATE_VARIABLE_Info_1_27;
    MR_Word STATE_VARIABLE_Info_2_28;
    MR_Word STATE_VARIABLE_PostInfos_1_29;
    MR_Word KnownVarMap_30 = (MR_Word) (PreInfo_1);
    MR_Word InstMapDelta_31;
    MR_Word Reachability_32;
    MR_Word Var_33;
    MR_Word Var_34;

    transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_30, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_1_27);
    transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(Goal0_16, &Goal_18, STATE_VARIABLE_Info_1_27, &STATE_VARIABLE_Info_2_28);
    Var_33 = ((MR_Word) ((MR_hl_field(0, Goal_18, 1))));
    InstMapDelta_31 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_33);
    succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_31);
    if (succeeded)
      Reachability_32 = (MR_Integer) 0;
    else
      Reachability_32 = (MR_Integer) 1;
    Var_34 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_2_28);
    {
      GoalPostInfo_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, GoalPostInfo_22, 0) = ((MR_Box) (Var_34));
      MR_hl_field(0, GoalPostInfo_22, 1) = (MR_Box) ((MR_Unsigned) (Reachability_32));
    }
    {
      STATE_VARIABLE_PostInfos_1_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_PostInfos_1_29, 0) = ((MR_Box) (GoalPostInfo_22));
      MR_hl_field(1, STATE_VARIABLE_PostInfos_1_29, 1) = ((MR_Box) (STATE_VARIABLE_PostInfos_0_4));
    }
    transform_hlds__higher_order__specialize_calls__ho_traverse_parallel_conj_loop_7_p_0(PreInfo_1, Goals0_17, &Goals_19, STATE_VARIABLE_PostInfos_1_29, STATE_VARIABLE_PostInfos_5, STATE_VARIABLE_Info_2_28, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_19));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_parallel_conj_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_13;

  succeeded = transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__merge_post_branch_infos_into_one__506__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_13);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_13));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_parallel_conj_4_p_0(
  MR_Word Goals0_5,
  MR_Word * Goals_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_bool succeeded;

  if ((Goals0_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.ho_traverse_parallel_conj\'/4", (MR_String) "empty list");
      return;
    }
  else
  {
    MR_Word PreInfo_10;
    MR_Word PostInfos_11;
    MR_Word PostInfo_12;
    MR_Word STATE_VARIABLE_Info_1_18;
    MR_Word Var_19;
    MR_Word ReachableVarMaps_21;
    MR_Word KnownVarMap_32;

    Var_19 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_0_13);
    PreInfo_10 = (MR_Word) (Var_19);
    transform_hlds__higher_order__specialize_calls__ho_traverse_parallel_conj_loop_7_p_0(PreInfo_10, Goals0_5, Goals_6, (MR_Word) ((MR_Unsigned) 0U), &PostInfos_11, STATE_VARIABLE_Info_0_13, &STATE_VARIABLE_Info_1_18);
    mercury__list__filter_map_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_post_branch_info_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[0]), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[5]), PostInfos_11, &ReachableVarMaps_21);
    if ((ReachableVarMaps_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_25;

      Var_25 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0));
      {
        PostInfo_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PostInfo_12, 0) = ((MR_Box) (Var_25));
        MR_hl_field(0, PostInfo_12, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      }
    }
    else
    {
      MR_Word HeadVarMap_22 = ((MR_Word) ((MR_hl_field(1, ReachableVarMaps_21, 0))));
      MR_Word TailVarMaps_23 = ((MR_Word) ((MR_hl_field(1, ReachableVarMaps_21, 1))));
      MR_Word MergedVarMap_24;

      transform_hlds__higher_order__specialize_calls__merge_post_branch_var_maps_passes_3_p_0(HeadVarMap_22, TailVarMaps_23, &MergedVarMap_24);
      {
        PostInfo_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PostInfo_12, 0) = ((MR_Box) (MergedVarMap_24));
        MR_hl_field(0, PostInfo_12, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
    KnownVarMap_32 = ((MR_Word) ((MR_hl_field(0, PostInfo_12, 0))));
    transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_32, STATE_VARIABLE_Info_1_18, STATE_VARIABLE_Info_14);
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Goal_6;
  MR_Word conv0_STATE_VARIABLE_Info_92;

  transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Goal_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_92);
  *wrapper_arg_2 = ((MR_Box) (conv1_Goal_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_92));
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_91,
  MR_Word * STATE_VARIABLE_Info_92)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 0))));
  MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 1))));

  switch (MR_tag((MR_Word) GoalExpr0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_59 = (MR_Word) ((MR_Word) (GoalExpr0_8));
        MR_Word SubGoal_60;
        MR_Word GoalExpr_139;

        transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(SubGoal0_59, &SubGoal_60, STATE_VARIABLE_Info_0_91, STATE_VARIABLE_Info_92);
        GoalExpr_139 = (MR_Word) ((MR_Word) (SubGoal_60));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_139));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unification0_74 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, 3))));
        MR_Word STATE_VARIABLE_Info_17_114;
        MR_Word ConsId_77;
        MR_Word Unification_87;
        MR_Word Var_115;

        succeeded = ((MR_tag((MR_Word) Unification0_74)) == (MR_Integer) 0);
        if (succeeded)
        {
          ConsId_77 = ((MR_Word) ((MR_hl_field(0, Unification0_74, 1))));
          succeeded = ((MR_tag((MR_Word) ConsId_77)) == (MR_Integer) 2);
        }
        if (succeeded)
          transform_hlds__higher_order__specialize_calls__maybe_specialize_pred_const_4_p_0(Goal0_5, Goal_6, STATE_VARIABLE_Info_0_91, &STATE_VARIABLE_Info_17_114);
        else
        {
          *Goal_6 = Goal0_5;
          STATE_VARIABLE_Info_17_114 = STATE_VARIABLE_Info_0_91;
        }
        Var_115 = ((MR_Word) ((MR_hl_field(0, *Goal_6, 0))));
        succeeded = ((MR_tag((MR_Word) Var_115)) == (MR_Integer) 1);
        if (succeeded)
        {
          Unification_87 = ((MR_Word) ((MR_hl_field(1, Var_115, 3))));
          transform_hlds__higher_order__specialize_calls__record_interesting_consts_3_p_0(Unification_87, STATE_VARIABLE_Info_17_114, STATE_VARIABLE_Info_92);
        }
        else
          *STATE_VARIABLE_Info_92 = STATE_VARIABLE_Info_17_114;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word GoalExpr_136;

        transform_hlds__higher_order__specialize_calls__maybe_specialize_call_5_p_0(GoalExpr0_8, GoalInfo0_9, &GoalExpr_136, STATE_VARIABLE_Info_0_91, STATE_VARIABLE_Info_92);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_136));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_8, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_29 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
            MR_Word Args_30 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));

            switch (MR_tag((MR_Word) GenericCall_29)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_132 = ((MR_Word) ((MR_hl_field(0, GenericCall_29, 0))));

                  transform_hlds__higher_order__specialize_calls__maybe_specialize_higher_order_call_6_p_0(Var_132, Args_30, Goal0_5, Goal_6, STATE_VARIABLE_Info_0_91, STATE_VARIABLE_Info_92);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Method_38 = ((MR_Word) ((MR_hl_field(1, GenericCall_29, 1))));
                  MR_Word Var_133 = ((MR_Word) ((MR_hl_field(1, GenericCall_29, 0))));

                  transform_hlds__higher_order__specialize_calls__maybe_specialize_method_call_7_p_0(Var_133, Method_38, Args_30, Goal0_5, Goal_6, STATE_VARIABLE_Info_0_91, STATE_VARIABLE_Info_92);
                }
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                {
                  *Goal_6 = Goal0_5;
                  *STATE_VARIABLE_Info_92 = STATE_VARIABLE_Info_0_91;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            *Goal_6 = Goal0_5;
            *STATE_VARIABLE_Info_92 = STATE_VARIABLE_Info_0_91;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_10 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, 1))) & (MR_Integer) 1);
            MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));
            MR_Word Goals_12;
            MR_Word GoalExpr_13;

            switch (ConjType_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                transform_hlds__higher_order__specialize_calls__ho_traverse_parallel_conj_4_p_0(Goals0_11, &Goals_12, STATE_VARIABLE_Info_0_91, STATE_VARIABLE_Info_92);
                break;
              case (MR_Integer) 0:
                {
                  MR_Box conv2_STATE_VARIABLE_Info_92;

                  mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__type_ctor_info_higher_order_info_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[4]), Goals0_11, &Goals_12, ((MR_Box) (STATE_VARIABLE_Info_0_91)), &conv2_STATE_VARIABLE_Info_92);
                  *STATE_VARIABLE_Info_92 = ((MR_Word) (conv2_STATE_VARIABLE_Info_92));
                }
                break;
            }
            {
              GoalExpr_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_13, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_13, 1) = (MR_Box) ((MR_Unsigned) (ConjType_10));
              MR_hl_field(3, GoalExpr_13, 2) = ((MR_Box) (Goals_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_13));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_119 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
            MR_Word Goals_120;
            MR_Word GoalExpr_121;

            if ((Goals0_119 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              Goals_120 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_92 = STATE_VARIABLE_Info_0_91;
            }
            else
            {
              MR_Word HeadGoal0_14 = ((MR_Word) ((MR_hl_field(1, Goals0_119, 0))));
              MR_Word TailGoals0_15 = ((MR_Word) ((MR_hl_field(1, Goals0_119, 1))));
              MR_Word PreInfo_16;
              MR_Word HeadGoal_17;
              MR_Word TailGoals_18;
              MR_Word PostInfos_19;
              MR_Word MergedPostInfo_20;
              MR_Word STATE_VARIABLE_Info_3_97;

              transform_hlds__higher_order__specialize_calls__get_pre_branch_info_2_p_0(STATE_VARIABLE_Info_0_91, &PreInfo_16);
              transform_hlds__higher_order__specialize_calls__ho_traverse_disjuncts_9_p_0(PreInfo_16, HeadGoal0_14, TailGoals0_15, &HeadGoal_17, &TailGoals_18, (MR_Word) ((MR_Unsigned) 0U), &PostInfos_19, STATE_VARIABLE_Info_0_91, &STATE_VARIABLE_Info_3_97);
              {
                Goals_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Goals_120, 0) = ((MR_Box) (HeadGoal_17));
                MR_hl_field(1, Goals_120, 1) = ((MR_Box) (TailGoals_18));
              }
              transform_hlds__higher_order__specialize_calls__merge_post_branch_infos_into_one_2_p_0(PostInfos_19, &MergedPostInfo_20);
              transform_hlds__higher_order__specialize_calls__set_post_branch_info_3_p_0(MergedPostInfo_20, STATE_VARIABLE_Info_3_97, STATE_VARIABLE_Info_92);
            }
            {
              GoalExpr_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_121, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_121, 1) = ((MR_Box) (Goals_120));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_121));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
            MR_Word CanFail_22 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, 2))) & (MR_Integer) 1);
            MR_Word Cases0_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 3))));
            MR_Word Cases_28;
            MR_Word GoalExpr_128;

            if ((Cases0_23 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.ho_traverse_goal\'/4", (MR_String) "switch with no cases");
                return;
              }
            else
            {
              MR_Word HeadCase0_24 = ((MR_Word) ((MR_hl_field(1, Cases0_23, 0))));
              MR_Word TailCases0_25 = ((MR_Word) ((MR_hl_field(1, Cases0_23, 1))));
              MR_Word HeadCase_26;
              MR_Word TailCases_27;
              MR_Word STATE_VARIABLE_Info_5_102;
              MR_Word PreInfo_122;
              MR_Word PostInfos_123;
              MR_Word MergedPostInfo_124;

              transform_hlds__higher_order__specialize_calls__get_pre_branch_info_2_p_0(STATE_VARIABLE_Info_0_91, &PreInfo_122);
              transform_hlds__higher_order__specialize_calls__ho_traverse_cases_9_p_0(PreInfo_122, HeadCase0_24, TailCases0_25, &HeadCase_26, &TailCases_27, (MR_Word) ((MR_Unsigned) 0U), &PostInfos_123, STATE_VARIABLE_Info_0_91, &STATE_VARIABLE_Info_5_102);
              {
                Cases_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Cases_28, 0) = ((MR_Box) (HeadCase_26));
                MR_hl_field(1, Cases_28, 1) = ((MR_Box) (TailCases_27));
              }
              transform_hlds__higher_order__specialize_calls__merge_post_branch_infos_into_one_2_p_0(PostInfos_123, &MergedPostInfo_124);
              transform_hlds__higher_order__specialize_calls__set_post_branch_info_3_p_0(MergedPostInfo_124, STATE_VARIABLE_Info_5_102, STATE_VARIABLE_Info_92);
            }
            {
              GoalExpr_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_128, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_128, 1) = ((MR_Box) (Var_21));
              MR_hl_field(3, GoalExpr_128, 2) = (MR_Box) ((MR_Unsigned) (CanFail_22));
              MR_hl_field(3, GoalExpr_128, 3) = ((MR_Box) (Cases_28));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_128));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
            MR_Word SubGoal0_145 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));
            MR_Word FGT_63;

            succeeded = ((((MR_tag((MR_Word) Reason_61)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_61, 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              FGT_63 = ((MR_Unsigned) ((MR_hl_field(3, Reason_61, 2))) & (MR_Integer) 3);
              switch (FGT_63) {
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
              *Goal_6 = Goal0_5;
              *STATE_VARIABLE_Info_92 = STATE_VARIABLE_Info_0_91;
            }
            else
            {
              MR_Word GoalExpr_140;
              MR_Word SubGoal_141;

              transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(SubGoal0_145, &SubGoal_141, STATE_VARIABLE_Info_0_91, STATE_VARIABLE_Info_92);
              {
                GoalExpr_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_140, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_140, 1) = ((MR_Box) (Reason_61));
                MR_hl_field(3, GoalExpr_140, 2) = ((MR_Box) (SubGoal_141));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_140));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
            MR_Word Cond0_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));
            MR_Word Then0_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 3))));
            MR_Word Else0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 4))));
            MR_Word Cond_53;
            MR_Word Then_54;
            MR_Word PostThenInfo_55;
            MR_Word Else_56;
            MR_Word PostElseInfo_57;
            MR_Word PostInfo_58;
            MR_Word STATE_VARIABLE_Info_10_107;
            MR_Word STATE_VARIABLE_Info_11_108;
            MR_Word STATE_VARIABLE_Info_12_109;
            MR_Word STATE_VARIABLE_Info_13_110;
            MR_Word GoalExpr_137;
            MR_Word PreInfo_138;

            transform_hlds__higher_order__specialize_calls__get_pre_branch_info_2_p_0(STATE_VARIABLE_Info_0_91, &PreInfo_138);
            transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(Cond0_50, &Cond_53, STATE_VARIABLE_Info_0_91, &STATE_VARIABLE_Info_10_107);
            transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(Then0_51, &Then_54, STATE_VARIABLE_Info_10_107, &STATE_VARIABLE_Info_11_108);
            transform_hlds__higher_order__specialize_calls__get_post_branch_info_for_goal_3_p_0(STATE_VARIABLE_Info_11_108, Then_54, &PostThenInfo_55);
            transform_hlds__higher_order__specialize_calls__set_pre_branch_info_3_p_0(PreInfo_138, STATE_VARIABLE_Info_11_108, &STATE_VARIABLE_Info_12_109);
            transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(Else0_52, &Else_56, STATE_VARIABLE_Info_12_109, &STATE_VARIABLE_Info_13_110);
            transform_hlds__higher_order__specialize_calls__get_post_branch_info_for_goal_3_p_0(STATE_VARIABLE_Info_13_110, Else_56, &PostElseInfo_57);
            transform_hlds__higher_order__specialize_calls__merge_post_branch_infos_3_p_0(PostThenInfo_55, PostElseInfo_57, &PostInfo_58);
            transform_hlds__higher_order__specialize_calls__set_post_branch_info_3_p_0(PostInfo_58, STATE_VARIABLE_Info_13_110, STATE_VARIABLE_Info_92);
            {
              GoalExpr_137 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_137, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_137, 1) = ((MR_Box) (Vars_49));
              MR_hl_field(3, GoalExpr_137, 2) = ((MR_Box) (Cond_53));
              MR_hl_field(3, GoalExpr_137, 3) = ((MR_Box) (Then_54));
              MR_hl_field(3, GoalExpr_137, 4) = ((MR_Box) (Else_56));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_137));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.ho_traverse_goal\'/4", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__maybe_specialize_pred_const_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Goal_6;
  MR_Word conv1_STATE_VARIABLE_Info_92;

  transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(((MR_Word) (wrapper_arg_1)), &conv2_Goal_6, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Info_92);
  *wrapper_arg_2 = ((MR_Box) (conv2_Goal_6));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Info_92));
}

static MR_Box MR_CALL 
transform_hlds__higher_order__specialize_calls__maybe_specialize_pred_const_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__higher_order__higher_order_global_info__mode_to_unify_mode_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__maybe_specialize_pred_const_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_71,
  MR_Word * STATE_VARIABLE_Info_72)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 0))));
  MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 1))));
  MR_Word GlobalInfo0_10;
  MR_Word ModuleInfo_11;
  MR_Word NewPredMap_12;
  MR_Word ProcInfo0_13;
  MR_Word UniMode_16;
  MR_Word Context_18;
  MR_Word LVar_19;
  MR_Word Args0_21;
  MR_Word HowToConstruct_23;
  MR_Word CellIsUnique_24;
  MR_Word CalleePredProcId_27;
  MR_Word ArgTypes_32;
  MR_Word TypeCtorInfo_95_95;
  MR_Word TypeInfo_96_96;
  MR_Word Unify0_17;
  MR_Word ConsId0_20;
  MR_Word SubInfo_25;
  MR_Word ShroudedPredProcId_26;
  MR_Word VarTable0_28;
  MR_Word LVarType_29;
  MR_Word Var_30;
  MR_Word Var_31;

  GlobalInfo0_10 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_0_71);
  ModuleInfo_11 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(GlobalInfo0_10);
  NewPredMap_12 = transform_hlds__higher_order__higher_order_global_info__hogi_get_new_pred_map_1_f_0(GlobalInfo0_10);
  ProcInfo0_13 = transform_hlds__higher_order__higher_order_info__hoi_get_proc_info_1_f_0(STATE_VARIABLE_Info_0_71);
  succeeded = ((MR_tag((MR_Word) GoalExpr0_8)) == (MR_Integer) 1);
  if (succeeded)
  {
    UniMode_16 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, 2))));
    Unify0_17 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, 3))));
    Context_18 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, 4))));
    succeeded = ((MR_tag((MR_Word) Unify0_17)) == (MR_Integer) 0);
    if (succeeded)
    {
      LVar_19 = ((MR_Word) ((MR_hl_field(0, Unify0_17, 0))));
      ConsId0_20 = ((MR_Word) ((MR_hl_field(0, Unify0_17, 1))));
      Args0_21 = ((MR_Word) ((MR_hl_field(0, Unify0_17, 2))));
      HowToConstruct_23 = ((MR_Word) ((MR_hl_field(0, Unify0_17, 4))));
      CellIsUnique_24 = ((MR_Unsigned) ((MR_hl_field(0, Unify0_17, 5))) & (MR_Integer) 1);
      SubInfo_25 = ((MR_Word) ((MR_hl_field(0, Unify0_17, 6))));
      if ((SubInfo_25 == (MR_Word) ((MR_Unsigned) 0U)))
        succeeded = MR_TRUE;
      else
      {
        MR_Word Var_73 = ((MR_Word) ((MR_hl_field(1, SubInfo_25, 0))));
        MR_Word Var_74 = ((MR_Word) ((MR_hl_field(1, SubInfo_25, 1))));

        succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (Var_74 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) ConsId0_20)) == (MR_Integer) 2);
        if (succeeded)
        {
          ShroudedPredProcId_26 = (MR_Word) (MR_body((MR_Word) (ConsId0_20), (MR_Integer) 2));
          CalleePredProcId_27 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_26);
          TypeCtorInfo_95_95 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
          TypeInfo_96_96 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[4]);
          succeeded = mercury__map__contains_2_p_0(TypeCtorInfo_95_95, TypeInfo_96_96, NewPredMap_12, ((MR_Box) (CalleePredProcId_27)));
          if (succeeded)
          {
            hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_13, &VarTable0_28);
            parse_tree__var_table__lookup_var_type_3_p_0(VarTable0_28, LVar_19, &LVarType_29);
            succeeded = parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(LVarType_29, &Var_30, &Var_31, &ArgTypes_32);
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word UncurriedArgs_33;
    MR_Word ProcInfo1_34;
    MR_Word Args1_35;
    MR_Word CalleePredInfo_36;
    MR_Word CalleeProcInfo_37;
    MR_Word Result_40;
    MR_Word STATE_VARIABLE_Info_1_75;
    MR_Word STATE_VARIABLE_Info_2_77;

    hlds__hlds_proc_util__proc_info_create_vars_from_types_5_p_0(ModuleInfo_11, ArgTypes_32, &UncurriedArgs_33, ProcInfo0_13, &ProcInfo1_34);
    Args1_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), Args0_21, UncurriedArgs_33);
    transform_hlds__higher_order__higher_order_info__hoi_set_proc_info_3_p_0(ProcInfo1_34, STATE_VARIABLE_Info_0_71, &STATE_VARIABLE_Info_1_75);
    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_11, CalleePredProcId_27, &CalleePredInfo_36, &CalleeProcInfo_37);
    transform_hlds__higher_order__specialize_calls__maybe_specialize_ordinary_call_11_p_0((MR_Integer) 1, CalleePredProcId_27, CalleePredInfo_36, CalleeProcInfo_37, Args1_35, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), GoalInfo_9, &Result_40, STATE_VARIABLE_Info_1_75, &STATE_VARIABLE_Info_2_77);
    if ((Result_40 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      transform_hlds__higher_order__higher_order_info__hoi_set_proc_info_3_p_0(ProcInfo0_13, STATE_VARIABLE_Info_2_77, STATE_VARIABLE_Info_72);
      *Goal_6 = Goal0_5;
    }
    else
    {
      MR_Word ExtraTypeInfoGoals0_41 = ((MR_Word) ((MR_hl_field(1, Result_40, 0))));
      MR_Word GoalExpr1_42 = ((MR_Word) ((MR_hl_field(1, Result_40, 1))));
      MR_Word NewPredId_50;
      MR_Integer NewProcId_51;
      MR_Word NewArgs_52;
      MR_Word NewCalleeProcInfo_53;
      MR_Word NewCalleeArgModes_54;
      MR_Word CurriedArgModes_56;
      MR_Word ArgModes_57;
      MR_Word ProcInfo2_58;
      MR_Word VarTable2_59;
      MR_Word VarTable_60;
      MR_Word ProcInfo_61;
      MR_Word NewPredProcId_62;
      MR_Word NewShroudedPredProcId_63;
      MR_Word NewConsId_64;
      MR_Word Unify_65;
      MR_Word GoalExpr2_66;
      MR_Word ExtraTypeInfoGoals_67;
      MR_Word GoalExpr_68;
      MR_Word Var_83;
      MR_Word STATE_VARIABLE_Info_3_84;
      MR_Word Var_86;
      MR_Word NewPredId0_43;
      MR_Integer NewProcId0_44;
      MR_Word NewArgs1_49;
      MR_Word NewArgs0_45;
      MR_Word CurriedArgModesPrime_55;
      MR_Integer Var_80;
      MR_Box conv3_STATE_VARIABLE_Info_72;

      succeeded = ((MR_tag((MR_Word) GoalExpr1_42)) == (MR_Integer) 2);
      if (succeeded)
      {
        NewPredId0_43 = ((MR_Word) ((MR_hl_field(2, GoalExpr1_42, 0))));
        NewProcId0_44 = ((MR_Integer) ((MR_hl_field(2, GoalExpr1_42, 1))));
        NewArgs0_45 = ((MR_Word) ((MR_hl_field(2, GoalExpr1_42, 2))));
        succeeded = mercury__list__remove_suffix_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), NewArgs0_45, UncurriedArgs_33, &NewArgs1_49);
      }
      if (succeeded)
      {
        NewPredId_50 = NewPredId0_43;
        NewProcId_51 = NewProcId0_44;
        NewArgs_52 = NewArgs1_49;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.maybe_specialize_pred_const\'/4", (MR_String) "cannot get NewArgs");
          return;
        }
      hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_11, NewPredId_50, NewProcId_51, &NewCalleeProcInfo_53);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(NewCalleeProcInfo_53, &NewCalleeArgModes_54);
      Var_80 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), NewArgs_52);
      succeeded = mercury__list__take_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_80, NewCalleeArgModes_54, &CurriedArgModesPrime_55);
      if (succeeded)
        CurriedArgModes_56 = CurriedArgModesPrime_55;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.maybe_specialize_pred_const\'/4", (MR_String) "cannot get CurriedArgModes");
          return;
        }
      {
        Var_83 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_83, 0) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_5[2]));
        MR_hl_field(0, Var_83, 1) = ((MR_Box) (transform_hlds__higher_order__specialize_calls__maybe_specialize_pred_const_4_p_0_1));
        MR_hl_field(0, Var_83, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_83, 3) = ((MR_Box) (ModuleInfo_11));
      }
      ArgModes_57 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), Var_83, CurriedArgModes_56);
      ProcInfo2_58 = transform_hlds__higher_order__higher_order_info__hoi_get_proc_info_1_f_0(STATE_VARIABLE_Info_2_77);
      hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo2_58, &VarTable2_59);
      parse_tree__var_table__delete_var_entries_3_p_0(UncurriedArgs_33, VarTable2_59, &VarTable_60);
      hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_60, ProcInfo2_58, &ProcInfo_61);
      transform_hlds__higher_order__higher_order_info__hoi_set_proc_info_3_p_0(ProcInfo_61, STATE_VARIABLE_Info_2_77, &STATE_VARIABLE_Info_3_84);
      {
        NewPredProcId_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NewPredProcId_62, 0) = ((MR_Box) (NewPredId_50));
        MR_hl_field(0, NewPredProcId_62, 1) = ((MR_Box) (NewProcId_51));
      }
      NewShroudedPredProcId_63 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(NewPredProcId_62);
      NewConsId_64 = (MR_Word) (MR_mkword(2, (MR_Word) (NewShroudedPredProcId_63)));
      {
        Unify_65 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Unify_65, 0) = ((MR_Box) (LVar_19));
        MR_hl_field(0, Unify_65, 1) = ((MR_Box) (NewConsId_64));
        MR_hl_field(0, Unify_65, 2) = ((MR_Box) (NewArgs_52));
        MR_hl_field(0, Unify_65, 3) = ((MR_Box) (ArgModes_57));
        MR_hl_field(0, Unify_65, 4) = ((MR_Box) (HowToConstruct_23));
        MR_hl_field(0, Unify_65, 5) = (MR_Box) ((MR_Unsigned) (CellIsUnique_24));
        MR_hl_field(0, Unify_65, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_86, 0) = ((MR_Box) (NewConsId_64));
        MR_hl_field(1, Var_86, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(1, Var_86, 2) = ((MR_Box) (NewArgs_52));
      }
      {
        GoalExpr2_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, GoalExpr2_66, 0) = ((MR_Box) (LVar_19));
        MR_hl_field(1, GoalExpr2_66, 1) = ((MR_Box) (Var_86));
        MR_hl_field(1, GoalExpr2_66, 2) = ((MR_Box) (UniMode_16));
        MR_hl_field(1, GoalExpr2_66, 3) = ((MR_Box) (Unify_65));
        MR_hl_field(1, GoalExpr2_66, 4) = ((MR_Box) (Context_18));
      }
      mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__type_ctor_info_higher_order_info_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[3]), ExtraTypeInfoGoals0_41, &ExtraTypeInfoGoals_67, ((MR_Box) (STATE_VARIABLE_Info_3_84)), &conv3_STATE_VARIABLE_Info_72);
      *STATE_VARIABLE_Info_72 = ((MR_Word) (conv3_STATE_VARIABLE_Info_72));
      if ((ExtraTypeInfoGoals_67 == (MR_Word) ((MR_Unsigned) 0U)))
        GoalExpr_68 = GoalExpr2_66;
      else
      {
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Word Var_93;

        {
          Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_93, 0) = ((MR_Box) (GoalExpr2_66));
          MR_hl_field(0, Var_93, 1) = ((MR_Box) (GoalInfo_9));
        }
        {
          Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
          MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraTypeInfoGoals_67, Var_92);
        {
          GoalExpr_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, GoalExpr_68, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, GoalExpr_68, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, GoalExpr_68, 2) = ((MR_Box) (Var_91));
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Goal_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_68));
        MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_9));
      }
    }
  }
  else
  {
    *Goal_6 = Goal0_5;
    *STATE_VARIABLE_Info_72 = STATE_VARIABLE_Info_0_71;
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__maybe_specialize_call_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32)
{
  MR_bool succeeded;
  MR_Word ModuleInfo0_10;
  MR_Word CalleePredId_11;
  MR_Integer CalleeProcId_12;
  MR_Word Args0_13;
  MR_Word IsBuiltin_14;
  MR_Word MaybeContext_15;
  MR_Word CalleePredInfo_17;
  MR_Word CalleeProcInfo_18;
  MR_Word Var_33;
  MR_Word GoalExpr1_19;
  MR_Word STATE_VARIABLE_Info_1_34;

  Var_33 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_0_31);
  ModuleInfo0_10 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_33);
  CalleePredId_11 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_6, 0))));
  CalleeProcId_12 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_6, 1))));
  Args0_13 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_6, 2))));
  IsBuiltin_14 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_6, 3))) & (MR_Integer) 1);
  MaybeContext_15 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_6, 4))));
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo0_10, CalleePredId_11, CalleeProcId_12, &CalleePredInfo_17, &CalleeProcInfo_18);
  succeeded = transform_hlds__higher_order__specialize_unify_compare__specialize_call_to_unify_or_compare_8_p_0(CalleePredInfo_17, CalleeProcId_12, Args0_13, MaybeContext_15, GoalInfo_7, &GoalExpr1_19, STATE_VARIABLE_Info_0_31, &STATE_VARIABLE_Info_1_34);
  if (succeeded)
  {
    *GoalExpr_8 = GoalExpr1_19;
    transform_hlds__higher_order__higher_order_info__hoi_set_changed_3_p_0((MR_Integer) 0, STATE_VARIABLE_Info_1_34, STATE_VARIABLE_Info_32);
  }
  else
  {
    MR_Word Manipulator_20;
    MR_String PredName_48;
    MR_Word Var_49;
    MR_Word Var_50;

    Var_49 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    Var_50 = hlds__hlds_pred__pred_info_module_1_f_0(CalleePredInfo_17);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_49, Var_50);
    if (succeeded)
    {
      PredName_48 = hlds__hlds_pred__pred_info_name_1_f_0(CalleePredInfo_17);
      if ((strcmp(PredName_48, (MR_String) "type_info_from_typeclass_info") == 0))
      {
        Manipulator_20 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(PredName_48, (MR_String) "superclass_from_typeclass_info") == 0))
      {
        Manipulator_20 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(PredName_48, (MR_String) "instance_constraint_from_typeclass_info") == 0))
      {
        Manipulator_20 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
    }
    if (succeeded)
      transform_hlds__higher_order__specialize_calls__interpret_typeclass_info_manipulator_6_p_0(Manipulator_20, Args0_13, GoalExpr0_6, GoalExpr_8, STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
    else
    {
      {
        MR_Word TypeSpecTables_21;
        MR_Word TypeSpecProcs_22;
        MR_Word TypeCtorInfo_44_44;
        MR_Word Var_38;

        succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(CalleePredInfo_17);
        if (succeeded)
        {
          hlds__hlds_module__module_info_get_type_spec_tables_2_p_0(ModuleInfo0_10, &TypeSpecTables_21);
          TypeSpecProcs_22 = ((MR_Word) ((MR_hl_field(0, TypeSpecTables_21, 0))));
          TypeCtorInfo_44_44 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
          {
            Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_38, 0) = ((MR_Box) (CalleePredId_11));
            MR_hl_field(0, Var_38, 1) = ((MR_Box) (CalleeProcId_12));
          }
          succeeded = mercury__set__member_2_p_0(TypeCtorInfo_44_44, ((MR_Box) (Var_38)), TypeSpecProcs_22);
          succeeded = !(succeeded);
        }
      }
      if (!(succeeded))
      {
        {
          MR_Integer Var_46;

          succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(CalleePredInfo_17);
          if (succeeded)
          {
            hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_46);
            succeeded = (CalleeProcId_12 == Var_46);
          }
        }
        if (!(succeeded))
          succeeded = hlds__hlds_pred__pred_info_defn_has_foreign_proc_1_p_0(CalleePredInfo_17);
      }
      if (succeeded)
      {
        *GoalExpr_8 = GoalExpr0_6;
        *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
      }
      else
      {
        MR_Word CalleePredProcId_26;
        MR_Word Result_27;

        {
          CalleePredProcId_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CalleePredProcId_26, 0) = ((MR_Box) (CalleePredId_11));
          MR_hl_field(0, CalleePredProcId_26, 1) = ((MR_Box) (CalleeProcId_12));
        }
        transform_hlds__higher_order__specialize_calls__maybe_specialize_ordinary_call_11_p_0((MR_Integer) 0, CalleePredProcId_26, CalleePredInfo_17, CalleeProcInfo_18, Args0_13, IsBuiltin_14, MaybeContext_15, GoalInfo_7, &Result_27, STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
        if ((Result_27 == (MR_Word) ((MR_Unsigned) 0U)))
          *GoalExpr_8 = GoalExpr0_6;
        else
        {
          MR_Word ExtraTypeInfoGoals_28 = ((MR_Word) ((MR_hl_field(1, Result_27, 0))));
          MR_Word GoalList1_29;
          MR_Word GoalList_30;
          MR_Word Var_41;
          MR_Word GoalExpr1_43 = ((MR_Word) ((MR_hl_field(1, Result_27, 1))));

          {
            Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_41, 0) = ((MR_Box) (GoalExpr1_43));
            MR_hl_field(0, Var_41, 1) = ((MR_Box) (GoalInfo_7));
          }
          hlds__hlds_goal__goal_to_conj_list_2_p_0(Var_41, &GoalList1_29);
          GoalList_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraTypeInfoGoals_28, GoalList1_29);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_8 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, base, 2) = ((MR_Box) (GoalList_30));
          }
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__maybe_specialize_method_call_7_p_0(
  MR_Word TypeClassInfoVar_8,
  MR_Word MethodProcNum_9,
  MR_Word Args_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_Info_0_72,
  MR_Word * STATE_VARIABLE_Info_73)
{
  MR_bool succeeded;
  MR_Integer MethodNum_14 = (MR_Integer) (MethodProcNum_9);
  MR_Word GoalInfo0_16 = ((MR_Word) ((MR_hl_field(0, Goal0_11, 1))));
  MR_Word ModuleInfo_17;
  MR_Word KnownVarMap0_18;
  MR_Word Var_74;
  MR_Word MethodInfos_41;
  MR_Word InstanceConstraintArgs_46;
  MR_Word TypeCtorInfo_108_108;
  MR_Word TypeInfo_109_109;
  MR_Word TypeCtorInfo_110_110;
  MR_Word TypeCtorInfo_111_111;
  MR_Word TypeInfo_112_112;
  MR_Word ConsId_19;
  MR_Word TCIArgs_20;
  MR_Word BaseTypeClassInfo_21;
  MR_Word OtherTypeClassInfoArgs_22;
  MR_Word BaseConsId_23;
  MR_Word ClassId_26;
  MR_Integer Instance_27;
  MR_Word InstanceTable_29;
  MR_Word InstanceList_30;
  MR_Word InstanceDefn_31;
  MR_Word InstanceTypes0_36;
  MR_Word InstanceConstraints_37;
  MR_Word InstanceTvars_43;
  MR_Word UnconstrainedTVars_44;
  MR_Integer NumArgsToExtract_45;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Integer Var_78;
  MR_Integer Var_79;
  MR_Box conv0_Var_75;
  MR_Box conv1_Var_76;
  MR_Box conv2_InstanceList_30;
  MR_Box conv3_InstanceDefn_31;

  Var_74 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_0_72);
  ModuleInfo_17 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_74);
  KnownVarMap0_18 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_0_72);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), KnownVarMap0_18, ((MR_Box) (TypeClassInfoVar_8)), &conv0_Var_75);
  if (succeeded)
  {
    Var_75 = ((MR_Word) (conv0_Var_75));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    ConsId_19 = ((MR_Word) ((MR_hl_field(0, Var_75, 0))));
    TCIArgs_20 = ((MR_Word) ((MR_hl_field(0, Var_75, 1))));
    succeeded = (ConsId_19 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (TCIArgs_20 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        BaseTypeClassInfo_21 = ((MR_Word) ((MR_hl_field(1, TCIArgs_20, 0))));
        OtherTypeClassInfoArgs_22 = ((MR_Word) ((MR_hl_field(1, TCIArgs_20, 1))));
        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), KnownVarMap0_18, ((MR_Box) (BaseTypeClassInfo_21)), &conv1_Var_76);
        if (succeeded)
        {
          Var_76 = ((MR_Word) (conv1_Var_76));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          BaseConsId_23 = ((MR_Word) ((MR_hl_field(0, Var_76, 0))));
          succeeded = ((((MR_tag((MR_Word) BaseConsId_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BaseConsId_23, 0)))) == (MR_Integer) 11)));
          if (succeeded)
          {
            ClassId_26 = ((MR_Word) ((MR_hl_field(3, BaseConsId_23, 2))));
            Instance_27 = ((MR_Integer) ((MR_hl_field(3, BaseConsId_23, 3))));
            hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_17, &InstanceTable_29);
            TypeCtorInfo_108_108 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0);
            TypeInfo_109_109 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[2]);
            mercury__map__lookup_3_p_0(TypeCtorInfo_108_108, TypeInfo_109_109, InstanceTable_29, ((MR_Box) (ClassId_26)), &conv2_InstanceList_30);
            InstanceList_30 = ((MR_Word) (conv2_InstanceList_30));
            TypeCtorInfo_110_110 = (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0);
            mercury__list__det_index1_3_p_0(TypeCtorInfo_110_110, InstanceList_30, Instance_27, &conv3_InstanceDefn_31);
            InstanceDefn_31 = ((MR_Word) (conv3_InstanceDefn_31));
            InstanceTypes0_36 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_31, 4))));
            InstanceConstraints_37 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_31, 5))));
            Var_77 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_31, 9))));
            succeeded = (Var_77 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MethodInfos_41 = ((MR_Word) ((MR_hl_field(1, Var_77, 0))));
              parse_tree__prog_type_scan__type_vars_in_types_2_p_0(InstanceTypes0_36, &InstanceTvars_43);
              parse_tree__prog_type_scan__get_unconstrained_tvars_3_p_0(InstanceTvars_43, InstanceConstraints_37, &UnconstrainedTVars_44);
              TypeCtorInfo_111_111 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0);
              Var_78 = mercury__list__length_1_f_0(TypeCtorInfo_111_111, InstanceConstraints_37);
              TypeInfo_112_112 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[3]);
              Var_79 = mercury__list__length_1_f_0(TypeInfo_112_112, UnconstrainedTVars_44);
              NumArgsToExtract_45 = (MR_Integer) ((MR_Unsigned) Var_78 + (MR_Unsigned) Var_79);
              succeeded = mercury__list__take_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), NumArgsToExtract_45, OtherTypeClassInfoArgs_22, &InstanceConstraintArgs_46);
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word MethodInfo_47;
    MR_Word PredId_48;
    MR_Integer ProcId_49;
    MR_Word AllArgs_50;
    MR_Word Var_80;
    MR_Box conv4_MethodInfo_47;

    mercury__list__det_index1_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0), MethodInfos_41, MethodNum_14, &conv4_MethodInfo_47);
    MethodInfo_47 = ((MR_Word) (conv4_MethodInfo_47));
    Var_80 = ((MR_Word) ((MR_hl_field(0, MethodInfo_47, 3))));
    PredId_48 = ((MR_Word) ((MR_hl_field(0, Var_80, 0))));
    ProcId_49 = ((MR_Integer) ((MR_hl_field(0, Var_80, 1))));
    AllArgs_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), InstanceConstraintArgs_46, Args_10);
    transform_hlds__higher_order__specialize_calls__construct_specialized_higher_order_call_7_p_0(PredId_48, ProcId_49, AllArgs_50, GoalInfo0_16, Goal_12, STATE_VARIABLE_Info_0_72, STATE_VARIABLE_Info_73);
  }
  else
  {
    MR_Word CallerPredInfo0_51;
    MR_Word CallerProcInfo0_52;
    MR_Word UnconstrainedTVarTypes_60;
    MR_Word TVarSet_61;
    MR_Word InstanceConstraints_100;
    MR_Word PredId_101;
    MR_Integer ProcId_102;
    MR_Word TypeCtorInfo_115_115;
    MR_Word TypeCtorInfo_116_116;
    MR_Word TypeInfo_117_117;
    MR_Word CallerRttiVarMaps_53;
    MR_Word ClassConstraint_54;
    MR_Word ClassName_55;
    MR_Word ClassArgTypes_56;
    MR_Integer ClassArity_57;
    MR_Word Instances_58;
    MR_Word TVarSet0_59;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word InstanceTable_97;
    MR_Box conv5_Instances_58;

    CallerPredInfo0_51 = transform_hlds__higher_order__higher_order_info__hoi_get_pred_info_1_f_0(STATE_VARIABLE_Info_0_72);
    CallerProcInfo0_52 = transform_hlds__higher_order__higher_order_info__hoi_get_proc_info_1_f_0(STATE_VARIABLE_Info_0_72);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(CallerProcInfo0_52, &CallerRttiVarMaps_53);
    hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(CallerRttiVarMaps_53, TypeClassInfoVar_8, &Var_82);
    succeeded = ((MR_tag((MR_Word) Var_82)) == (MR_Integer) 2);
    if (succeeded)
    {
      ClassConstraint_54 = ((MR_Word) ((MR_hl_field(2, Var_82, 0))));
      ClassName_55 = ((MR_Word) ((MR_hl_field(0, ClassConstraint_54, 0))));
      ClassArgTypes_56 = ((MR_Word) ((MR_hl_field(0, ClassConstraint_54, 1))));
      TypeCtorInfo_115_115 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      mercury__list__length_2_p_0(TypeCtorInfo_115_115, ClassArgTypes_56, &ClassArity_57);
      hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_17, &InstanceTable_97);
      TypeCtorInfo_116_116 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0);
      TypeInfo_117_117 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[2]);
      {
        Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_83, 0) = ((MR_Box) (ClassName_55));
        MR_hl_field(0, Var_83, 1) = ((MR_Box) (ClassArity_57));
      }
      mercury__map__lookup_3_p_0(TypeCtorInfo_116_116, TypeInfo_117_117, InstanceTable_97, ((MR_Box) (Var_83)), &conv5_Instances_58);
      Instances_58 = ((MR_Word) (conv5_Instances_58));
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(CallerPredInfo0_51, &TVarSet0_59);
      succeeded = transform_hlds__higher_order__specialize_calls__find_matching_instance_method_9_p_0(Instances_58, MethodNum_14, ClassArgTypes_56, &PredId_101, &ProcId_102, &InstanceConstraints_100, &UnconstrainedTVarTypes_60, TVarSet0_59, &TVarSet_61);
    }
    if (succeeded)
    {
      MR_Word CallerPredInfo_62;
      MR_Word ExtraGoals_63;
      MR_Word CallerProcInfo_64;
      MR_Word SpecGoal_71;
      MR_Word STATE_VARIABLE_Info_2_91;
      MR_Word STATE_VARIABLE_Info_3_92;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word AllArgs_98;

      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TVarSet_61, CallerPredInfo0_51, &CallerPredInfo_62);
      succeeded = (InstanceConstraints_100 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (UnconstrainedTVarTypes_60 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ExtraGoals_63 = (MR_Word) ((MR_Unsigned) 0U);
        CallerProcInfo_64 = CallerProcInfo0_52;
        AllArgs_98 = Args_10;
      }
      else
      {
        MR_Word ArgTypeInfoGoals_65;
        MR_Word ArgTypeInfoVars_66;
        MR_Word CallerProcInfo1_67;
        MR_Integer FirstArgTypeclassInfo_68;
        MR_Word ArgTypeClassInfoGoals_69;
        MR_Word ArgTypeClassInfoVars_70;
        MR_Integer Var_85;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Word Var_89;

        transform_hlds__higher_order__specialize_calls__get_unconstrained_instance_type_infos_8_p_0(ModuleInfo_17, TypeClassInfoVar_8, UnconstrainedTVarTypes_60, (MR_Integer) 1, &ArgTypeInfoGoals_65, &ArgTypeInfoVars_66, CallerProcInfo0_52, &CallerProcInfo1_67);
        Var_85 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), UnconstrainedTVarTypes_60);
        FirstArgTypeclassInfo_68 = (MR_Integer) ((MR_Unsigned) Var_85 + (MR_Unsigned) 1);
        transform_hlds__higher_order__specialize_calls__get_arg_typeclass_infos_8_p_0(ModuleInfo_17, TypeClassInfoVar_8, InstanceConstraints_100, FirstArgTypeclassInfo_68, &ArgTypeClassInfoGoals_69, &ArgTypeClassInfoVars_70, CallerProcInfo1_67, &CallerProcInfo_64);
        {
          Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_89, 0) = ((MR_Box) (Args_10));
          MR_hl_field(1, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_88, 0) = ((MR_Box) (ArgTypeClassInfoVars_70));
          MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_89));
        }
        {
          Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_87, 0) = ((MR_Box) (ArgTypeInfoVars_66));
          MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_88));
        }
        mercury__list__condense_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), Var_87, &AllArgs_98);
        ExtraGoals_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgTypeInfoGoals_65, ArgTypeClassInfoGoals_69);
      }
      transform_hlds__higher_order__higher_order_info__hoi_set_pred_info_3_p_0(CallerPredInfo_62, STATE_VARIABLE_Info_0_72, &STATE_VARIABLE_Info_2_91);
      transform_hlds__higher_order__higher_order_info__hoi_set_proc_info_3_p_0(CallerProcInfo_64, STATE_VARIABLE_Info_2_91, &STATE_VARIABLE_Info_3_92);
      transform_hlds__higher_order__specialize_calls__construct_specialized_higher_order_call_7_p_0(PredId_101, ProcId_102, AllArgs_98, GoalInfo0_16, &SpecGoal_71, STATE_VARIABLE_Info_3_92, STATE_VARIABLE_Info_73);
      {
        Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_95, 0) = ((MR_Box) (SpecGoal_71));
        MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraGoals_63, Var_95);
      hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_94, GoalInfo0_16, Goal_12);
    }
    else
    {
      *Goal_12 = Goal0_11;
      *STATE_VARIABLE_Info_73 = STATE_VARIABLE_Info_0_72;
    }
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__get_unconstrained_instance_type_infos_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word TypeClassInfoVar_10,
  MR_Word UnconstrainedTVarTypes_11,
  MR_Integer Index_12,
  MR_Word * Goals_13,
  MR_Word * Vars_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_17,
  MR_Word * STATE_VARIABLE_ProcInfo_18)
{
  MR_Word ExtractArgPredId_24;
  MR_Integer ExtractArgProcId_25;
  MR_Word Var_26;
  MR_Word Var_31;
  MR_Word Var_32;

  Var_26 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ModuleInfo_9, Var_26, (MR_String) "unconstrained_type_info_from_typeclass_info", (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_Integer) 3))), (MR_Word) ((MR_Unsigned) 0U), &ExtractArgPredId_24, &ExtractArgProcId_25);
  Var_32 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_String) "unconstrained_type_info_from_typeclass_info"));
  }
  transform_hlds__higher_order__specialize_calls__get_typeclass_info_args_loop__ho4_12_p_0(ModuleInfo_9, TypeClassInfoVar_10, ExtractArgPredId_24, ExtractArgProcId_25, Var_31, UnconstrainedTVarTypes_11, Index_12, Goals_13, Vars_14, STATE_VARIABLE_ProcInfo_0_17, STATE_VARIABLE_ProcInfo_18);
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__get_typeclass_info_args_loop__ho4_12_p_0(
  MR_Word ModuleInfo_1,
  MR_Word TypeClassInfoVar_2,
  MR_Word PredId_3,
  MR_Integer ProcId_4,
  MR_Word SymName_5,
  MR_Word HeadVar__7_7,
  MR_Integer Index_8,
  MR_Word * HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_11,
  MR_Word * STATE_VARIABLE_ProcInfo_12)
{
  if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__10_10 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ProcInfo_12 = STATE_VARIABLE_ProcInfo_0_11;
  }
  else
  {
    MR_Word Arg_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 0))));
    MR_Word Args_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 1))));
    MR_Word IndexGoal_32;
    MR_Word CallGoal_33;
    MR_Word Goals_34;
    MR_Word ResultVar_35;
    MR_Word Vars_36;
    MR_Word ResultType_38;
    MR_Word IsDummy_39;
    MR_Word IndexVar_41;
    MR_Word CallArgs_42;
    MR_Word NonLocals_43;
    MR_Word InstMapDelta0_44;
    MR_Word InstMapDelta_45;
    MR_Word GoalInfo_46;
    MR_Word CallGoalExpr_47;
    MR_Word Var_50;
    MR_Word STATE_VARIABLE_ProcInfo_1_52;
    MR_Word STATE_VARIABLE_ProcInfo_2_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Integer Var_64;

    ResultType_38 = parse_tree__builtin_lib_types__build_type_info_type_1_f_0(Arg_29);
    IsDummy_39 = hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_1, ResultType_38);
    hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0((MR_String) "", ResultType_38, IsDummy_39, &ResultVar_35, STATE_VARIABLE_ProcInfo_0_11, &STATE_VARIABLE_ProcInfo_1_52);
    hlds__make_goal__make_int_const_construction_alloc_in_proc_6_p_0(Index_8, (MR_String) "", &IndexGoal_32, &IndexVar_41, STATE_VARIABLE_ProcInfo_1_52, &STATE_VARIABLE_ProcInfo_2_54);
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (ResultVar_35));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (IndexVar_41));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_56));
    }
    {
      CallArgs_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, CallArgs_42, 0) = ((MR_Box) (TypeClassInfoVar_2));
      MR_hl_field(1, CallArgs_42, 1) = ((MR_Box) (Var_55));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CallArgs_42, &NonLocals_43);
    hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstMapDelta0_44);
    hlds__instmap__instmap_delta_insert_var_4_p_0(ResultVar_35, (MR_Word) (MR_mkword(1, &transform_hlds__higher_order__specialize_calls_scalar_common_1[9])), InstMapDelta0_44, &InstMapDelta_45);
    hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_43, InstMapDelta_45, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_46);
    {
      CallGoalExpr_47 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, CallGoalExpr_47, 0) = ((MR_Box) (PredId_3));
      MR_hl_field(2, CallGoalExpr_47, 1) = ((MR_Box) (ProcId_4));
      MR_hl_field(2, CallGoalExpr_47, 2) = ((MR_Box) (CallArgs_42));
      MR_hl_field(2, CallGoalExpr_47, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(2, CallGoalExpr_47, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, CallGoalExpr_47, 5) = ((MR_Box) (SymName_5));
    }
    {
      CallGoal_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CallGoal_33, 0) = ((MR_Box) (CallGoalExpr_47));
      MR_hl_field(0, CallGoal_33, 1) = ((MR_Box) (GoalInfo_46));
    }
    Var_64 = (MR_Integer) ((MR_Unsigned) Index_8 + (MR_Unsigned) 1);
    transform_hlds__higher_order__specialize_calls__get_typeclass_info_args_loop__ho4_12_p_0(ModuleInfo_1, TypeClassInfoVar_2, PredId_3, ProcId_4, SymName_5, Args_30, Var_64, &Goals_34, &Vars_36, STATE_VARIABLE_ProcInfo_2_54, STATE_VARIABLE_ProcInfo_12);
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (CallGoal_33));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) (Goals_34));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__9_9 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (IndexGoal_32));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_50));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__10_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ResultVar_35));
      MR_hl_field(1, base, 1) = ((MR_Box) (Vars_36));
    }
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__get_arg_typeclass_infos_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word TypeClassInfoVar_10,
  MR_Word InstanceConstraints_11,
  MR_Integer Index_12,
  MR_Word * Goals_13,
  MR_Word * Vars_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_18,
  MR_Word * STATE_VARIABLE_ProcInfo_19)
{
  MR_Word ExtractArgPredId_27;
  MR_Integer ExtractArgProcId_28;
  MR_Word Var_29;
  MR_Word Var_34;
  MR_Word Var_35;

  Var_29 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ModuleInfo_9, Var_29, (MR_String) "instance_constraint_from_typeclass_info", (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_Integer) 3))), (MR_Word) ((MR_Unsigned) 0U), &ExtractArgPredId_27, &ExtractArgProcId_28);
  Var_35 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_String) "instance_constraint_from_typeclass_info"));
  }
  transform_hlds__higher_order__specialize_calls__get_typeclass_info_args_loop__ho3_12_p_0(ModuleInfo_9, TypeClassInfoVar_10, ExtractArgPredId_27, ExtractArgProcId_28, Var_34, InstanceConstraints_11, Index_12, Goals_13, Vars_14, STATE_VARIABLE_ProcInfo_0_18, STATE_VARIABLE_ProcInfo_19);
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__get_typeclass_info_args_loop__ho3_12_p_0(
  MR_Word ModuleInfo_1,
  MR_Word TypeClassInfoVar_2,
  MR_Word PredId_3,
  MR_Integer ProcId_4,
  MR_Word SymName_5,
  MR_Word HeadVar__7_7,
  MR_Integer Index_8,
  MR_Word * HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_11,
  MR_Word * STATE_VARIABLE_ProcInfo_12)
{
  if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__10_10 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ProcInfo_12 = STATE_VARIABLE_ProcInfo_0_11;
  }
  else
  {
    MR_Word Args_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 1))));
    MR_Word IndexGoal_32;
    MR_Word CallGoal_33;
    MR_Word Goals_34;
    MR_Word ResultVar_35;
    MR_Word Vars_36;
    MR_Word ResultType_38;
    MR_Word IsDummy_39;
    MR_Word IndexVar_41;
    MR_Word CallArgs_42;
    MR_Word NonLocals_43;
    MR_Word InstMapDelta0_44;
    MR_Word InstMapDelta_45;
    MR_Word GoalInfo_46;
    MR_Word CallGoalExpr_47;
    MR_Word Var_50;
    MR_Word STATE_VARIABLE_ProcInfo_1_52;
    MR_Word STATE_VARIABLE_ProcInfo_2_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Integer Var_64;

    ResultType_38 = parse_tree__builtin_lib_types__typeclass_info_type_0_f_0();
    IsDummy_39 = hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_1, ResultType_38);
    hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0((MR_String) "", ResultType_38, IsDummy_39, &ResultVar_35, STATE_VARIABLE_ProcInfo_0_11, &STATE_VARIABLE_ProcInfo_1_52);
    hlds__make_goal__make_int_const_construction_alloc_in_proc_6_p_0(Index_8, (MR_String) "", &IndexGoal_32, &IndexVar_41, STATE_VARIABLE_ProcInfo_1_52, &STATE_VARIABLE_ProcInfo_2_54);
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (ResultVar_35));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (IndexVar_41));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_56));
    }
    {
      CallArgs_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, CallArgs_42, 0) = ((MR_Box) (TypeClassInfoVar_2));
      MR_hl_field(1, CallArgs_42, 1) = ((MR_Box) (Var_55));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CallArgs_42, &NonLocals_43);
    hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstMapDelta0_44);
    hlds__instmap__instmap_delta_insert_var_4_p_0(ResultVar_35, (MR_Word) (MR_mkword(1, &transform_hlds__higher_order__specialize_calls_scalar_common_1[9])), InstMapDelta0_44, &InstMapDelta_45);
    hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_43, InstMapDelta_45, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_46);
    {
      CallGoalExpr_47 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, CallGoalExpr_47, 0) = ((MR_Box) (PredId_3));
      MR_hl_field(2, CallGoalExpr_47, 1) = ((MR_Box) (ProcId_4));
      MR_hl_field(2, CallGoalExpr_47, 2) = ((MR_Box) (CallArgs_42));
      MR_hl_field(2, CallGoalExpr_47, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(2, CallGoalExpr_47, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, CallGoalExpr_47, 5) = ((MR_Box) (SymName_5));
    }
    {
      CallGoal_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CallGoal_33, 0) = ((MR_Box) (CallGoalExpr_47));
      MR_hl_field(0, CallGoal_33, 1) = ((MR_Box) (GoalInfo_46));
    }
    Var_64 = (MR_Integer) ((MR_Unsigned) Index_8 + (MR_Unsigned) 1);
    transform_hlds__higher_order__specialize_calls__get_typeclass_info_args_loop__ho3_12_p_0(ModuleInfo_1, TypeClassInfoVar_2, PredId_3, ProcId_4, SymName_5, Args_30, Var_64, &Goals_34, &Vars_36, STATE_VARIABLE_ProcInfo_2_54, STATE_VARIABLE_ProcInfo_12);
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (CallGoal_33));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) (Goals_34));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__9_9 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (IndexGoal_32));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_50));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__10_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ResultVar_35));
      MR_hl_field(1, base, 1) = ((MR_Box) (Vars_36));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_instance_method_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer MethodNum_12,
  MR_Word ClassTypes_13,
  MR_Word * PredId_14,
  MR_Integer * ProcId_15,
  MR_Word * Constraints_16,
  MR_Word * UnconstrainedTVarTypes_17,
  MR_Word STATE_VARIABLE_TVarSet_0_23,
  MR_Word * STATE_VARIABLE_TVarSet_24)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Instance_10;
    MR_Word Instances_11;
    MR_Word Constraints0_19;
    MR_Word UnconstrainedTVarTypes0_20;
    MR_Word STATE_VARIABLE_TVarSet_1_25;
    MR_Word TypeInfo_31_60;
    MR_Word TypeCtorInfo_32_61;
    MR_Word InstanceTVarSet_44;
    MR_Word InstanceTypes0_46;
    MR_Word Constraints0_47;
    MR_Word Renaming_53;
    MR_Word InstanceTypes_54;
    MR_Word Constraints1_55;
    MR_Word InstanceTVars_56;
    MR_Word UnconstrainedTVars0_57;
    MR_Word Subst_58;
    MR_Word KindMap_59;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Instance_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      Instances_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      InstanceTVarSet_44 = ((MR_Word) ((MR_hl_field(0, Instance_10, 2))));
      InstanceTypes0_46 = ((MR_Word) ((MR_hl_field(0, Instance_10, 4))));
      Constraints0_47 = ((MR_Word) ((MR_hl_field(0, Instance_10, 5))));
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(STATE_VARIABLE_TVarSet_0_23, InstanceTVarSet_44, &STATE_VARIABLE_TVarSet_1_25, &Renaming_53);
      parse_tree__prog_type_subst__apply_renaming_to_types_3_p_0(Renaming_53, InstanceTypes0_46, &InstanceTypes_54);
      parse_tree__prog_type_subst__apply_renaming_to_prog_constraints_3_p_0(Renaming_53, Constraints0_47, &Constraints1_55);
      parse_tree__prog_type_scan__type_vars_in_types_2_p_0(InstanceTypes_54, &InstanceTVars_56);
      parse_tree__prog_type_scan__get_unconstrained_tvars_3_p_0(InstanceTVars_56, Constraints1_55, &UnconstrainedTVars0_57);
      succeeded = parse_tree__prog_type_unify__type_list_subsumes_3_p_0(InstanceTypes_54, ClassTypes_13, &Subst_58);
      if (succeeded)
      {
        parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0(Subst_58, Constraints1_55, &Constraints0_19);
        TypeInfo_31_60 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[3]);
        TypeCtorInfo_32_61 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        mercury__map__init_1_p_0(TypeInfo_31_60, TypeCtorInfo_32_61, &KindMap_59);
        parse_tree__prog_type_subst__apply_rec_subst_to_tvars_4_p_0(KindMap_59, Subst_58, UnconstrainedTVars0_57, &UnconstrainedTVarTypes0_20);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word TypeCtorInfo_41_41;
        MR_Word MethodInfos_21;
        MR_Word MethodInfo_22;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Box conv0_MethodInfo_22;

        *STATE_VARIABLE_TVarSet_24 = STATE_VARIABLE_TVarSet_1_25;
        *Constraints_16 = Constraints0_19;
        *UnconstrainedTVarTypes_17 = UnconstrainedTVarTypes0_20;
        Var_26 = ((MR_Word) ((MR_hl_field(0, Instance_10, 9))));
        succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MethodInfos_21 = ((MR_Word) ((MR_hl_field(1, Var_26, 0))));
          TypeCtorInfo_41_41 = (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0);
          mercury__list__det_index1_3_p_0(TypeCtorInfo_41_41, MethodInfos_21, MethodNum_12, &conv0_MethodInfo_22);
          MethodInfo_22 = ((MR_Word) (conv0_MethodInfo_22));
          Var_27 = ((MR_Word) ((MR_hl_field(0, MethodInfo_22, 3))));
          *PredId_14 = ((MR_Word) ((MR_hl_field(0, Var_27, 0))));
          *ProcId_15 = ((MR_Integer) ((MR_hl_field(0, Var_27, 1))));
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Instances_11;

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
transform_hlds__higher_order__specialize_calls__maybe_specialize_higher_order_call_6_p_0(
  MR_Word PredVar_7,
  MR_Word Args_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word KnownVarMap0_12;
  MR_Word CurriedArgs_14;
  MR_Word ShroudedPredProcId_15;
  MR_Word ConsId_13;
  MR_Word Var_23;
  MR_Box conv0_Var_23;

  KnownVarMap0_12 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_0_21);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), KnownVarMap0_12, ((MR_Box) (PredVar_7)), &conv0_Var_23);
  if (succeeded)
  {
    Var_23 = ((MR_Word) (conv0_Var_23));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    ConsId_13 = ((MR_Word) ((MR_hl_field(0, Var_23, 0))));
    CurriedArgs_14 = ((MR_Word) ((MR_hl_field(0, Var_23, 1))));
    succeeded = ((MR_tag((MR_Word) ConsId_13)) == (MR_Integer) 2);
    if (succeeded)
      ShroudedPredProcId_15 = (MR_Word) (MR_body((MR_Word) (ConsId_13), (MR_Integer) 2));
  }
  if (succeeded)
  {
    MR_Word PredId_16;
    MR_Integer ProcId_17;
    MR_Word AllArgs_18;
    MR_Word GoalInfo_20;
    MR_Word Var_24;

    Var_24 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_15);
    PredId_16 = ((MR_Word) ((MR_hl_field(0, Var_24, 0))));
    ProcId_17 = ((MR_Integer) ((MR_hl_field(0, Var_24, 1))));
    AllArgs_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), CurriedArgs_14, Args_8);
    GoalInfo_20 = ((MR_Word) ((MR_hl_field(0, Goal0_9, 1))));
    transform_hlds__higher_order__specialize_calls__construct_specialized_higher_order_call_7_p_0(PredId_16, ProcId_17, AllArgs_18, GoalInfo_20, Goal_10, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
  }
  else
  {
    *Goal_10 = Goal0_9;
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__construct_specialized_higher_order_call_7_p_0(
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word AllArgs_10,
  MR_Word GoalInfo_11,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_bool succeeded;
  MR_Word GoalExpr_12;
  MR_Word ModuleInfo_14;
  MR_Word PredInfo_15;
  MR_Word ModuleName_16;
  MR_String PredName_17;
  MR_Word SymName_18;
  MR_Word CallerPredId_19;
  MR_Word Builtin_21;
  MR_Word GoalExpr1_23;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word STATE_VARIABLE_Info_1_29;
  MR_Word ModuleInfo0_30;
  MR_Word CalleePredId_31;
  MR_Integer CalleeProcId_32;
  MR_Word Args0_33;
  MR_Word IsBuiltin_34;
  MR_Word MaybeContext_35;
  MR_Word CalleePredInfo_37;
  MR_Word CalleeProcInfo_38;
  MR_Word Var_51;
  MR_Word GoalExpr1_39;
  MR_Word STATE_VARIABLE_Info_1_52;

  Var_26 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_0_24);
  ModuleInfo_14 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_26);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_14, PredId_8, &PredInfo_15);
  ModuleName_16 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_15);
  PredName_17 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_15);
  {
    SymName_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_18, 0) = ((MR_Box) (ModuleName_16));
    MR_hl_field(1, SymName_18, 1) = ((MR_Box) (PredName_17));
  }
  Var_27 = transform_hlds__higher_order__higher_order_info__hoi_get_pred_proc_id_1_f_0(STATE_VARIABLE_Info_0_24);
  CallerPredId_19 = ((MR_Word) ((MR_hl_field(0, Var_27, 0))));
  Builtin_21 = hlds__hlds_pred__builtin_state_4_f_0(ModuleInfo_14, CallerPredId_19, PredId_8, ProcId_9);
  {
    GoalExpr1_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, GoalExpr1_23, 0) = ((MR_Box) (PredId_8));
    MR_hl_field(2, GoalExpr1_23, 1) = ((MR_Box) (ProcId_9));
    MR_hl_field(2, GoalExpr1_23, 2) = ((MR_Box) (AllArgs_10));
    MR_hl_field(2, GoalExpr1_23, 3) = (MR_Box) ((MR_Unsigned) (Builtin_21));
    MR_hl_field(2, GoalExpr1_23, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, GoalExpr1_23, 5) = ((MR_Box) (SymName_18));
  }
  transform_hlds__higher_order__higher_order_info__hoi_set_changed_3_p_0((MR_Integer) 0, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_1_29);
  Var_51 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_1_29);
  ModuleInfo0_30 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_51);
  CalleePredId_31 = ((MR_Word) ((MR_hl_field(2, GoalExpr1_23, 0))));
  CalleeProcId_32 = ((MR_Integer) ((MR_hl_field(2, GoalExpr1_23, 1))));
  Args0_33 = ((MR_Word) ((MR_hl_field(2, GoalExpr1_23, 2))));
  IsBuiltin_34 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr1_23, 3))) & (MR_Integer) 1);
  MaybeContext_35 = ((MR_Word) ((MR_hl_field(2, GoalExpr1_23, 4))));
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo0_30, CalleePredId_31, CalleeProcId_32, &CalleePredInfo_37, &CalleeProcInfo_38);
  succeeded = transform_hlds__higher_order__specialize_unify_compare__specialize_call_to_unify_or_compare_8_p_0(CalleePredInfo_37, CalleeProcId_32, Args0_33, MaybeContext_35, GoalInfo_11, &GoalExpr1_39, STATE_VARIABLE_Info_1_29, &STATE_VARIABLE_Info_1_52);
  if (succeeded)
  {
    GoalExpr_12 = GoalExpr1_39;
    transform_hlds__higher_order__higher_order_info__hoi_set_changed_3_p_0((MR_Integer) 0, STATE_VARIABLE_Info_1_52, STATE_VARIABLE_Info_25);
  }
  else
  {
    MR_Word Manipulator_40;
    MR_String PredName_63;
    MR_Word Var_64;
    MR_Word Var_65;

    Var_64 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    Var_65 = hlds__hlds_pred__pred_info_module_1_f_0(CalleePredInfo_37);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_64, Var_65);
    if (succeeded)
    {
      PredName_63 = hlds__hlds_pred__pred_info_name_1_f_0(CalleePredInfo_37);
      if ((strcmp(PredName_63, (MR_String) "type_info_from_typeclass_info") == 0))
      {
        Manipulator_40 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(PredName_63, (MR_String) "superclass_from_typeclass_info") == 0))
      {
        Manipulator_40 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(PredName_63, (MR_String) "instance_constraint_from_typeclass_info") == 0))
      {
        Manipulator_40 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
    }
    if (succeeded)
      transform_hlds__higher_order__specialize_calls__interpret_typeclass_info_manipulator_6_p_0(Manipulator_40, Args0_33, GoalExpr1_23, &GoalExpr_12, STATE_VARIABLE_Info_1_29, STATE_VARIABLE_Info_25);
    else
    {
      {
        MR_Word TypeSpecTables_41;
        MR_Word TypeSpecProcs_42;
        MR_Word TypeCtorInfo_44_59;
        MR_Word Var_54;

        succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(CalleePredInfo_37);
        if (succeeded)
        {
          hlds__hlds_module__module_info_get_type_spec_tables_2_p_0(ModuleInfo0_30, &TypeSpecTables_41);
          TypeSpecProcs_42 = ((MR_Word) ((MR_hl_field(0, TypeSpecTables_41, 0))));
          TypeCtorInfo_44_59 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
          {
            Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_54, 0) = ((MR_Box) (CalleePredId_31));
            MR_hl_field(0, Var_54, 1) = ((MR_Box) (CalleeProcId_32));
          }
          succeeded = mercury__set__member_2_p_0(TypeCtorInfo_44_59, ((MR_Box) (Var_54)), TypeSpecProcs_42);
          succeeded = !(succeeded);
        }
      }
      if (!(succeeded))
      {
        {
          MR_Integer Var_61;

          succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(CalleePredInfo_37);
          if (succeeded)
          {
            hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_61);
            succeeded = (CalleeProcId_32 == Var_61);
          }
        }
        if (!(succeeded))
          succeeded = hlds__hlds_pred__pred_info_defn_has_foreign_proc_1_p_0(CalleePredInfo_37);
      }
      if (succeeded)
      {
        GoalExpr_12 = GoalExpr1_23;
        *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_1_29;
      }
      else
      {
        MR_Word CalleePredProcId_46;
        MR_Word Result_47;

        {
          CalleePredProcId_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CalleePredProcId_46, 0) = ((MR_Box) (CalleePredId_31));
          MR_hl_field(0, CalleePredProcId_46, 1) = ((MR_Box) (CalleeProcId_32));
        }
        transform_hlds__higher_order__specialize_calls__maybe_specialize_ordinary_call_11_p_0((MR_Integer) 0, CalleePredProcId_46, CalleePredInfo_37, CalleeProcInfo_38, Args0_33, IsBuiltin_34, MaybeContext_35, GoalInfo_11, &Result_47, STATE_VARIABLE_Info_1_29, STATE_VARIABLE_Info_25);
        if ((Result_47 == (MR_Word) ((MR_Unsigned) 0U)))
          GoalExpr_12 = GoalExpr1_23;
        else
        {
          MR_Word ExtraTypeInfoGoals_48 = ((MR_Word) ((MR_hl_field(1, Result_47, 0))));
          MR_Word GoalList1_49;
          MR_Word GoalList_50;
          MR_Word Var_56;
          MR_Word GoalExpr1_58 = ((MR_Word) ((MR_hl_field(1, Result_47, 1))));

          {
            Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_56, 0) = ((MR_Box) (GoalExpr1_58));
            MR_hl_field(0, Var_56, 1) = ((MR_Box) (GoalInfo_11));
          }
          hlds__hlds_goal__goal_to_conj_list_2_p_0(Var_56, &GoalList1_49);
          GoalList_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraTypeInfoGoals_48, GoalList1_49);
          {
            GoalExpr_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, GoalExpr_12, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, GoalExpr_12, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, GoalExpr_12, 2) = ((MR_Box) (GoalList_50));
          }
        }
      }
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__5_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_11));
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__interpret_typeclass_info_manipulator_6_p_0(
  MR_Word Manipulator_7,
  MR_Word Args_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Info_0_59,
  MR_Word * STATE_VARIABLE_Info_60)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_12;
  MR_Word KnownVarMap0_13;
  MR_Word Var_61;
  MR_Word OutputVar_16;
  MR_Word ClassId_20;
  MR_Integer InstanceNum_21;
  MR_Word OtherArgs_23;
  MR_Integer Index0_25;
  MR_Word TypeInfo_109_109;
  MR_Word TypeCtorInfo_110_110;
  MR_Word TypeClassInfoVar_14;
  MR_Word IndexVar_15;
  MR_Word TypeClassInfoConsId_17;
  MR_Word TypeClassInfoArgs_18;
  MR_Word IndexMaybeConst_24;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Box conv0_Var_65;
  MR_Word _ModuleName_19;
  MR_String _Instance_22;
  MR_Box conv1_IndexMaybeConst_24;

  Var_61 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_0_59);
  ModuleInfo_12 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_61);
  KnownVarMap0_13 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_0_59);
  succeeded = (Args_8 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    TypeClassInfoVar_14 = ((MR_Word) ((MR_hl_field(1, Args_8, 0))));
    Var_62 = ((MR_Word) ((MR_hl_field(1, Args_8, 1))));
    succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      IndexVar_15 = ((MR_Word) ((MR_hl_field(1, Var_62, 0))));
      Var_63 = ((MR_Word) ((MR_hl_field(1, Var_62, 1))));
      succeeded = (Var_63 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        OutputVar_16 = ((MR_Word) ((MR_hl_field(1, Var_63, 0))));
        Var_64 = ((MR_Word) ((MR_hl_field(1, Var_63, 1))));
        succeeded = (Var_64 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TypeInfo_109_109 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]);
          TypeCtorInfo_110_110 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0);
          succeeded = mercury__map__search_3_p_0(TypeInfo_109_109, TypeCtorInfo_110_110, KnownVarMap0_13, ((MR_Box) (TypeClassInfoVar_14)), &conv0_Var_65);
          if (succeeded)
          {
            Var_65 = ((MR_Word) (conv0_Var_65));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            TypeClassInfoConsId_17 = ((MR_Word) ((MR_hl_field(0, Var_65, 0))));
            TypeClassInfoArgs_18 = ((MR_Word) ((MR_hl_field(0, Var_65, 1))));
            succeeded = transform_hlds__higher_order__specialize_calls__find_typeclass_info_components_9_p_0(ModuleInfo_12, KnownVarMap0_13, TypeClassInfoConsId_17, TypeClassInfoArgs_18, &_ModuleName_19, &ClassId_20, &InstanceNum_21, &_Instance_22, &OtherArgs_23);
            if (succeeded)
            {
              succeeded = mercury__map__search_3_p_0(TypeInfo_109_109, TypeCtorInfo_110_110, KnownVarMap0_13, ((MR_Box) (IndexVar_15)), &conv1_IndexMaybeConst_24);
              if (succeeded)
              {
                IndexMaybeConst_24 = ((MR_Word) (conv1_IndexMaybeConst_24));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                Var_66 = ((MR_Word) ((MR_hl_field(0, IndexMaybeConst_24, 0))));
                Var_68 = ((MR_Word) ((MR_hl_field(0, IndexMaybeConst_24, 1))));
                succeeded = (Var_68 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((((MR_tag((MR_Word) Var_66)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_66, 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    Var_67 = ((MR_Word) ((MR_hl_field(3, Var_66, 1))));
                    succeeded = ((MR_tag((MR_Word) Var_67)) == (MR_Integer) 0);
                    if (succeeded)
                      Index0_25 = ((MR_Integer) ((MR_hl_field(0, Var_67, 0))));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Integer Index_30;
    MR_Word STATE_VARIABLE_Info_2_78;

    switch (Manipulator_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        Index_30 = Index0_25;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Word InstanceTable_26;
          MR_Word InstanceDefns_27;
          MR_Word InstanceDefn_28;
          MR_Integer NumExtra_29;
          MR_Box conv2_InstanceDefns_27;
          MR_Box conv3_InstanceDefn_28;

          hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_12, &InstanceTable_26);
          mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[2]), InstanceTable_26, ((MR_Box) (ClassId_20)), &conv2_InstanceDefns_27);
          InstanceDefns_27 = ((MR_Word) (conv2_InstanceDefns_27));
          mercury__list__det_index1_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), InstanceDefns_27, InstanceNum_21, &conv3_InstanceDefn_28);
          InstanceDefn_28 = ((MR_Word) (conv3_InstanceDefn_28));
          hlds__hlds_class__num_extra_instance_args_2_p_0(InstanceDefn_28, &NumExtra_29);
          Index_30 = (MR_Integer) ((MR_Unsigned) Index0_25 + (MR_Unsigned) NumExtra_29);
        }
        break;
    }
    if (((MR_tag((MR_Word) OtherArgs_23)) == (MR_Integer) 1))
    {
      MR_Word OtherConstArgs_42 = ((MR_Word) ((MR_hl_field(1, OtherArgs_23, 0))));
      MR_Word SelectedConstArg_43;
      MR_Word SelectedConsId_44;
      MR_Word SelectedConstInst_46;
      MR_Word KnownVarMap_57;
      MR_Word SelectedConsIdRHS_58;
      MR_Word Var_89;
      MR_Word UnifyMode_107;
      MR_Word Unification_108;
      MR_Box conv4_SelectedConstArg_43;

      mercury__list__det_index1_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), OtherConstArgs_42, Index_30, &conv4_SelectedConstArg_43);
      SelectedConstArg_43 = ((MR_Word) (conv4_SelectedConstArg_43));
      if (((MR_tag((MR_Word) SelectedConstArg_43)) == (MR_Integer) 0))
      {
        MR_Integer SelectedConstNum_47 = ((MR_Integer) ((MR_hl_field(0, SelectedConstArg_43, 0))));
        MR_Word ConstStructDb_48;
        MR_Word SelectedConstStruct_49;
        MR_Word SelectedConstConsId_50;

        hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_12, &ConstStructDb_48);
        hlds__const_struct__lookup_const_struct_num_3_p_0(ConstStructDb_48, SelectedConstNum_47, &SelectedConstStruct_49);
        SelectedConstConsId_50 = ((MR_Word) ((MR_hl_field(0, SelectedConstStruct_49, 0))));
        SelectedConstInst_46 = ((MR_Word) ((MR_hl_field(0, SelectedConstStruct_49, 3))));
        if (((((MR_tag((MR_Word) SelectedConstConsId_50)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SelectedConstConsId_50, 0)))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) SelectedConstConsId_50)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SelectedConstConsId_50, 0)))) == (MR_Integer) 12))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
        if (succeeded)
          {
            SelectedConsId_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, SelectedConsId_44, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(3, SelectedConsId_44, 1) = ((MR_Box) (SelectedConstNum_47));
          }
        else
        {
          if ((SelectedConstConsId_50 == (MR_Word) ((MR_Unsigned) 0U)))
            succeeded = MR_TRUE;
          else
          if (((((MR_tag((MR_Word) SelectedConstConsId_50)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SelectedConstConsId_50, 0)))) == (MR_Integer) 13))))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
          if (succeeded)
            {
              SelectedConsId_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, SelectedConsId_44, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(3, SelectedConsId_44, 1) = ((MR_Box) (SelectedConstNum_47));
            }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.interpret_typeclass_info_manipulator\'/6", (MR_String) "bad SelectedConstStructConsId");
              return;
            }
        }
      }
      else
      {
        MR_Word Var_83;
        MR_Word Var_84;

        SelectedConsId_44 = ((MR_Word) ((MR_hl_field(1, SelectedConstArg_43, 0))));
        {
          Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_84, 0) = ((MR_Box) (SelectedConsId_44));
          MR_hl_field(0, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
          MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          SelectedConstInst_46 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, SelectedConstInst_46, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(2, SelectedConstInst_46, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(2, SelectedConstInst_46, 2) = ((MR_Box) (Var_83));
        }
      }
      {
        Var_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_89, 0) = ((MR_Box) (SelectedConsId_44));
        MR_hl_field(0, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), ((MR_Box) (OutputVar_16)), ((MR_Box) (Var_89)), KnownVarMap0_13, &KnownVarMap_57);
      transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_57, STATE_VARIABLE_Info_0_59, &STATE_VARIABLE_Info_2_78);
      {
        SelectedConsIdRHS_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SelectedConsIdRHS_58, 0) = ((MR_Box) (SelectedConsId_44));
        MR_hl_field(1, SelectedConsIdRHS_58, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(1, SelectedConsIdRHS_58, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        UnifyMode_107 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, UnifyMode_107, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, UnifyMode_107, 1) = ((MR_Box) (SelectedConstInst_46));
        MR_hl_field(0, UnifyMode_107, 2) = ((MR_Box) (SelectedConstInst_46));
        MR_hl_field(0, UnifyMode_107, 3) = ((MR_Box) (SelectedConstInst_46));
      }
      {
        Unification_108 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Unification_108, 0) = ((MR_Box) (OutputVar_16));
        MR_hl_field(0, Unification_108, 1) = ((MR_Box) (SelectedConsId_44));
        MR_hl_field(0, Unification_108, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Unification_108, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Unification_108, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Unification_108, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(0, Unification_108, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        *Goal_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (OutputVar_16));
        MR_hl_field(1, base, 1) = ((MR_Box) (SelectedConsIdRHS_58));
        MR_hl_field(1, base, 2) = ((MR_Box) (UnifyMode_107));
        MR_hl_field(1, base, 3) = ((MR_Box) (Unification_108));
        MR_hl_field(1, base, 4) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[10]));
      }
    }
    else
    {
      MR_Word OtherVars_31 = ((MR_Word) ((MR_hl_field(0, OtherArgs_23, 0))));
      MR_Word SelectedArg_32;
      MR_Word UnifyMode_33;
      MR_Word Unification_34;
      MR_Word ProcInfo0_35;
      MR_Word RttiVarMaps0_36;
      MR_Word RttiVarMaps_37;
      MR_Word ProcInfo_38;
      MR_Word VarTable_39;
      MR_Word OutputVarType_40;
      MR_Word SelectedArgType_41;
      MR_Word STATE_VARIABLE_Info_1_69;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Box conv5_SelectedArg_32;

      mercury__list__det_index1_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), OtherVars_31, Index_30, &conv5_SelectedArg_32);
      SelectedArg_32 = ((MR_Word) (conv5_SelectedArg_32));
      transform_hlds__higher_order__specialize_calls__maybe_add_alias_4_p_0(OutputVar_16, SelectedArg_32, STATE_VARIABLE_Info_0_59, &STATE_VARIABLE_Info_1_69);
      Var_71 = parse_tree__prog_mode__ground_inst_0_f_0();
      Var_72 = parse_tree__prog_mode__ground_inst_0_f_0();
      Var_73 = parse_tree__prog_mode__ground_inst_0_f_0();
      {
        UnifyMode_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, UnifyMode_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, UnifyMode_33, 1) = ((MR_Box) (Var_71));
        MR_hl_field(0, UnifyMode_33, 2) = ((MR_Box) (Var_72));
        MR_hl_field(0, UnifyMode_33, 3) = ((MR_Box) (Var_73));
      }
      {
        Unification_34 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Unification_34, 0) = ((MR_Box) (OutputVar_16));
        MR_hl_field(2, Unification_34, 1) = ((MR_Box) (SelectedArg_32));
      }
      {
        Var_74 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_74, 0) = ((MR_Box) (SelectedArg_32));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        *Goal_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (OutputVar_16));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_74));
        MR_hl_field(1, base, 2) = ((MR_Box) (UnifyMode_33));
        MR_hl_field(1, base, 3) = ((MR_Box) (Unification_34));
        MR_hl_field(1, base, 4) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[10]));
      }
      ProcInfo0_35 = transform_hlds__higher_order__higher_order_info__hoi_get_proc_info_1_f_0(STATE_VARIABLE_Info_1_69);
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo0_35, &RttiVarMaps0_36);
      hlds__hlds_rtti__rtti_var_info_duplicate_replace_4_p_0(SelectedArg_32, OutputVar_16, RttiVarMaps0_36, &RttiVarMaps_37);
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_37, ProcInfo0_35, &ProcInfo_38);
      transform_hlds__higher_order__higher_order_info__hoi_set_proc_info_3_p_0(ProcInfo_38, STATE_VARIABLE_Info_1_69, &STATE_VARIABLE_Info_2_78);
      hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_38, &VarTable_39);
      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_39, OutputVar_16, &OutputVarType_40);
      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_39, SelectedArg_32, &SelectedArgType_41);
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(OutputVarType_40, SelectedArgType_41);
      if (!(succeeded))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.interpret_typeclass_info_manipulator\'/6", (MR_String) "type mismatch");
          return;
        }
    }
    transform_hlds__higher_order__higher_order_info__hoi_set_changed_3_p_0((MR_Integer) 0, STATE_VARIABLE_Info_2_78, STATE_VARIABLE_Info_60);
  }
  else
  {
    *Goal_10 = Goal0_9;
    *STATE_VARIABLE_Info_60 = STATE_VARIABLE_Info_0_59;
  }
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__find_typeclass_info_components_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__find_typeclass_info_components__1857__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__find_typeclass_info_components_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word KnownVarMap_11,
  MR_Word TypeClassInfoConsId_12,
  MR_Word TypeClassInfoArgs_13,
  MR_Word * ModuleName_14,
  MR_Word * ClassId_15,
  MR_Integer * InstanceNum_16,
  MR_String * Instance_17,
  MR_Word * Args_18)
{
  MR_bool succeeded;
  MR_Word BaseTypeClassInfoConsId_22;

  if ((TypeClassInfoArgs_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer TCIConstNum_24;
    MR_Word ConstStructDb_25;
    MR_Word TCIConstStruct_26;
    MR_Word TCIConstConsId_27;
    MR_Word TCIConstArgs_28;
    MR_Word BaseTypeClassInfoConstArg_32;
    MR_Word OtherConstArgs_33;
    MR_Word Var_35;
    MR_String Var_36;
    MR_String Var_37;
    MR_Word Var_38;

    succeeded = ((((MR_tag((MR_Word) TypeClassInfoConsId_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeClassInfoConsId_12, 0)))) == (MR_Integer) 13)));
    if (succeeded)
    {
      TCIConstNum_24 = ((MR_Integer) ((MR_hl_field(3, TypeClassInfoConsId_12, 1))));
      hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_10, &ConstStructDb_25);
      hlds__const_struct__lookup_const_struct_num_3_p_0(ConstStructDb_25, TCIConstNum_24, &TCIConstStruct_26);
      TCIConstConsId_27 = ((MR_Word) ((MR_hl_field(0, TCIConstStruct_26, 0))));
      TCIConstArgs_28 = ((MR_Word) ((MR_hl_field(0, TCIConstStruct_26, 1))));
      Var_38 = (MR_Word) ((MR_Unsigned) 0U);
      Var_36 = (MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.find_typeclass_info_components\'/9";
      Var_37 = (MR_String) "TCIConstConsId != typeclass_info_cell_constructor";
      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_35, 0) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_4[2]));
        MR_hl_field(0, Var_35, 1) = ((MR_Box) (transform_hlds__higher_order__specialize_calls__find_typeclass_info_components_9_p_0_1));
        MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_35, 3) = ((MR_Box) (TCIConstConsId_27));
        MR_hl_field(0, Var_35, 4) = ((MR_Box) (Var_38));
      }
      mercury__require__expect_3_p_0(Var_35, Var_36, Var_37);
      succeeded = (TCIConstArgs_28 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        BaseTypeClassInfoConstArg_32 = ((MR_Word) ((MR_hl_field(1, TCIConstArgs_28, 0))));
        OtherConstArgs_33 = ((MR_Word) ((MR_hl_field(1, TCIConstArgs_28, 1))));
        succeeded = ((MR_tag((MR_Word) BaseTypeClassInfoConstArg_32)) == (MR_Integer) 1);
        if (succeeded)
        {
          BaseTypeClassInfoConsId_22 = ((MR_Word) ((MR_hl_field(1, BaseTypeClassInfoConstArg_32, 0))));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Args_18 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (OtherConstArgs_33));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  else
  {
    MR_Word TypeInfo_39_39;
    MR_Word TypeCtorInfo_40_40;
    MR_Word BaseTypeClassInfoVar_19;
    MR_Word OtherVars_20;
    MR_Word BaseTypeClassInfoMaybeConst_21;
    MR_Box conv0_BaseTypeClassInfoMaybeConst_21;

    succeeded = (TypeClassInfoConsId_12 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      BaseTypeClassInfoVar_19 = ((MR_Word) ((MR_hl_field(1, TypeClassInfoArgs_13, 0))));
      OtherVars_20 = ((MR_Word) ((MR_hl_field(1, TypeClassInfoArgs_13, 1))));
      TypeInfo_39_39 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]);
      TypeCtorInfo_40_40 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0);
      succeeded = mercury__map__search_3_p_0(TypeInfo_39_39, TypeCtorInfo_40_40, KnownVarMap_11, ((MR_Box) (BaseTypeClassInfoVar_19)), &conv0_BaseTypeClassInfoMaybeConst_21);
      if (succeeded)
      {
        BaseTypeClassInfoMaybeConst_21 = ((MR_Word) (conv0_BaseTypeClassInfoMaybeConst_21));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        BaseTypeClassInfoConsId_22 = ((MR_Word) ((MR_hl_field(0, BaseTypeClassInfoMaybeConst_21, 0))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Args_18 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (OtherVars_20));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    succeeded = ((((MR_tag((MR_Word) BaseTypeClassInfoConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BaseTypeClassInfoConsId_22, 0)))) == (MR_Integer) 11)));
    if (succeeded)
    {
      *ModuleName_14 = ((MR_Word) ((MR_hl_field(3, BaseTypeClassInfoConsId_22, 1))));
      *ClassId_15 = ((MR_Word) ((MR_hl_field(3, BaseTypeClassInfoConsId_22, 2))));
      *InstanceNum_16 = ((MR_Integer) ((MR_hl_field(3, BaseTypeClassInfoConsId_22, 3))));
      *Instance_17 = ((MR_String) ((MR_hl_field(3, BaseTypeClassInfoConsId_22, 4))));
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__maybe_add_alias_4_p_0(
  MR_Word LVar_5,
  MR_Word RVar_6,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  MR_bool succeeded;
  MR_Word KnownVarMap0_8;
  MR_Word KnownConst_9;
  MR_Box conv0_KnownConst_9;

  KnownVarMap0_8 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_0_11);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), KnownVarMap0_8, ((MR_Box) (RVar_6)), &conv0_KnownConst_9);
  if (succeeded)
  {
    KnownConst_9 = ((MR_Word) (conv0_KnownConst_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word KnownVarMap_10;

    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), ((MR_Box) (LVar_5)), ((MR_Box) (KnownConst_9)), KnownVarMap0_8, &KnownVarMap_10);
    transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_10, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
  }
  else
    *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_0_11;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__maybe_specialize_ordinary_call_11_p_0(
  MR_Word CanRequest_12,
  MR_Word CalleePredProcId_13,
  MR_Word CalleePredInfo_14,
  MR_Word CalleeProcInfo_15,
  MR_Word Args0_16,
  MR_Word IsBuiltin_17,
  MR_Word MaybeContext_18,
  MR_Word GoalInfo_19,
  MR_Word * Result_20,
  MR_Word STATE_VARIABLE_Info_0_75,
  MR_Word * STATE_VARIABLE_Info_76)
{
  MR_bool succeeded;
  MR_Word ModuleInfo0_22;
  MR_Word CalleeStatus_23;
  MR_Word CalleeVarTable_24;
  MR_Word CalleeHeadVars_25;
  MR_Word CalleeArgTypes_26;
  MR_Word CallerProcInfo0_27;
  MR_Word VarTable_28;
  MR_Word RttiVarMaps_29;
  MR_Word HigherOrderArgsCord_30;
  MR_Word HigherOrderArgs_31;
  MR_Word CallerPredId_32;
  MR_Word TypeSpecTables_34;
  MR_Word ForceVersions_36;
  MR_Word RequestKind_39;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_80;
  MR_Word Var_81;

  Var_77 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_0_75);
  ModuleInfo0_22 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_77);
  hlds__hlds_pred__pred_info_get_status_2_p_0(CalleePredInfo_14, &CalleeStatus_23);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(CalleeProcInfo_15, &CalleeVarTable_24);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(CalleeProcInfo_15, &CalleeHeadVars_25);
  parse_tree__var_table__lookup_var_types_3_p_0(CalleeVarTable_24, CalleeHeadVars_25, &CalleeArgTypes_26);
  CallerProcInfo0_27 = transform_hlds__higher_order__higher_order_info__hoi_get_proc_info_1_f_0(STATE_VARIABLE_Info_0_75);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(CallerProcInfo0_27, &VarTable_28);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(CallerProcInfo0_27, &RttiVarMaps_29);
  Var_78 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_0_75);
  Var_80 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0));
  transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0(ModuleInfo0_22, CalleeStatus_23, Args0_16, CalleeArgTypes_26, VarTable_28, RttiVarMaps_29, Var_78, (MR_Integer) 1, Var_80, &HigherOrderArgsCord_30);
  HigherOrderArgs_31 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), HigherOrderArgsCord_30);
  Var_81 = transform_hlds__higher_order__higher_order_info__hoi_get_pred_proc_id_1_f_0(STATE_VARIABLE_Info_0_75);
  CallerPredId_32 = ((MR_Word) ((MR_hl_field(0, Var_81, 0))));
  hlds__hlds_module__module_info_get_type_spec_tables_2_p_0(ModuleInfo0_22, &TypeSpecTables_34);
  ForceVersions_36 = ((MR_Word) ((MR_hl_field(0, TypeSpecTables_34, 1))));
  succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ForceVersions_36, ((MR_Box) (CallerPredId_32)));
  if (succeeded)
    RequestKind_39 = (MR_Integer) 1;
  else
    RequestKind_39 = (MR_Integer) 0;
  succeeded = (HigherOrderArgs_31 != (MR_Word) ((MR_Unsigned) 0U));
  if (!(succeeded))
  {
    succeeded = (RequestKind_39 == (MR_Integer) 1);
    if (!(succeeded))
    {
      MR_Word Params_42;
      MR_Word ArgTypes_43;
      MR_Word CalleeClassContext_44;
      MR_Word CalleeUnivConstraints0_45;
      MR_Word CalleeTVarSet_47;
      MR_Word CalleeExistQTVars_48;
      MR_Word CallerPredInfo0_49;
      MR_Word TVarSet_50;
      MR_Word CallerUnivQTVars_51;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word TVarSet_95;
      MR_Word TypeRenaming_96;
      MR_Word CalleeArgTypes1_97;
      MR_Word TypeSubn_98;
      MR_Word CalleeUnivConstraints1_99;
      MR_Word CalleeUnivConstraints_100;

      Var_82 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_0_75);
      Params_42 = transform_hlds__higher_order__higher_order_global_info__hogi_get_params_1_f_0(Var_82);
      Var_83 = ((MR_Unsigned) ((MR_hl_field(0, Params_42, 0))) & (MR_Integer) 1);
      succeeded = (Var_83 == (MR_Integer) 0);
      if (succeeded)
      {
        parse_tree__var_table__lookup_var_types_3_p_0(VarTable_28, Args0_16, &ArgTypes_43);
        hlds__hlds_pred__pred_info_get_class_context_2_p_0(CalleePredInfo_14, &CalleeClassContext_44);
        CalleeUnivConstraints0_45 = ((MR_Word) ((MR_hl_field(0, CalleeClassContext_44, 0))));
        hlds__hlds_pred__pred_info_get_typevarset_2_p_0(CalleePredInfo_14, &CalleeTVarSet_47);
        hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(CalleePredInfo_14, &CalleeExistQTVars_48);
        CallerPredInfo0_49 = transform_hlds__higher_order__higher_order_info__hoi_get_pred_info_1_f_0(STATE_VARIABLE_Info_0_75);
        hlds__hlds_pred__pred_info_get_typevarset_2_p_0(CallerPredInfo0_49, &TVarSet_50);
        hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(CallerPredInfo0_49, &CallerUnivQTVars_51);
        succeeded = (CalleeUnivConstraints0_45 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet_50, CalleeTVarSet_47, &TVarSet_95, &TypeRenaming_96);
          parse_tree__prog_type_subst__apply_renaming_to_types_3_p_0(TypeRenaming_96, CalleeArgTypes_26, &CalleeArgTypes1_97);
          parse_tree__prog_type_unify__compute_caller_callee_type_substitution_5_p_0(CalleeArgTypes1_97, ArgTypes_43, CallerUnivQTVars_51, CalleeExistQTVars_48, &TypeSubn_98);
          parse_tree__prog_type_subst__apply_renaming_to_prog_constraints_3_p_0(TypeRenaming_96, CalleeUnivConstraints0_45, &CalleeUnivConstraints1_99);
          parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0(TypeSubn_98, CalleeUnivConstraints1_99, &CalleeUnivConstraints_100);
          succeeded = transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0(ModuleInfo0_22, TVarSet_95, CalleeUnivConstraints0_45, CalleeUnivConstraints_100);
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Context_52;
    MR_Word FindResult_53;

    Context_52 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_19);
    transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0(STATE_VARIABLE_Info_0_75, CalleePredProcId_13, Args0_16, HigherOrderArgs_31, RequestKind_39, Context_52, &FindResult_53);
    switch (MR_tag((MR_Word) FindResult_53)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Result_20 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_76 = STATE_VARIABLE_Info_0_75;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Match_54 = (MR_Word) (MR_body((MR_Word) (FindResult_53), (MR_Integer) 1));
          MR_Word MatchedNewPred_55 = ((MR_Word) ((MR_hl_field(0, Match_54, 0))));
          MR_Word Args1_57 = ((MR_Word) ((MR_hl_field(0, Match_54, 2))));
          MR_Word ExtraTypeInfoTypes_58 = ((MR_Word) ((MR_hl_field(0, Match_54, 3))));
          MR_Word NewPredProcId_59 = ((MR_Word) ((MR_hl_field(0, MatchedNewPred_55, 0))));
          MR_Word NewName_62 = ((MR_Word) ((MR_hl_field(0, MatchedNewPred_55, 3))));
          MR_Word ExtraTypeInfoVars_68;
          MR_Word ExtraTypeInfoGoals_69;
          MR_Word NewCalleePred_70;
          MR_Integer NewCalleeProc_71;
          MR_Word Args_72;
          MR_Word CallGoal_73;
          MR_Word STATE_VARIABLE_Info_1_84;

          transform_hlds__higher_order__specialize_calls__construct_extra_type_infos_5_p_0(ExtraTypeInfoTypes_58, &ExtraTypeInfoVars_68, &ExtraTypeInfoGoals_69, STATE_VARIABLE_Info_0_75, &STATE_VARIABLE_Info_1_84);
          NewCalleePred_70 = ((MR_Word) ((MR_hl_field(0, NewPredProcId_59, 0))));
          NewCalleeProc_71 = ((MR_Integer) ((MR_hl_field(0, NewPredProcId_59, 1))));
          Args_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), ExtraTypeInfoVars_68, Args1_57);
          {
            CallGoal_73 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, CallGoal_73, 0) = ((MR_Box) (NewCalleePred_70));
            MR_hl_field(2, CallGoal_73, 1) = ((MR_Box) (NewCalleeProc_71));
            MR_hl_field(2, CallGoal_73, 2) = ((MR_Box) (Args_72));
            MR_hl_field(2, CallGoal_73, 3) = (MR_Box) ((MR_Unsigned) (IsBuiltin_17));
            MR_hl_field(2, CallGoal_73, 4) = ((MR_Box) (MaybeContext_18));
            MR_hl_field(2, CallGoal_73, 5) = ((MR_Box) (NewName_62));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Result_20 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ExtraTypeInfoGoals_69));
            MR_hl_field(1, base, 1) = ((MR_Box) (CallGoal_73));
          }
          transform_hlds__higher_order__higher_order_info__hoi_set_changed_3_p_0((MR_Integer) 0, STATE_VARIABLE_Info_1_84, STATE_VARIABLE_Info_76);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Request_74 = (MR_Word) (MR_body((MR_Word) (FindResult_53), (MR_Integer) 2));

          *Result_20 = (MR_Word) ((MR_Unsigned) 0U);
          switch (CanRequest_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *STATE_VARIABLE_Info_76 = STATE_VARIABLE_Info_0_75;
              break;
            case (MR_Integer) 0:
              transform_hlds__higher_order__higher_order_info__hoi_add_request_3_p_0(Request_74, STATE_VARIABLE_Info_0_75, STATE_VARIABLE_Info_76);
              break;
          }
        }
        break;
    }
  }
  else
  {
    *Result_20 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_76 = STATE_VARIABLE_Info_0_75;
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__construct_extra_type_infos_5_p_0(
  MR_Word Types_6,
  MR_Word * TypeInfoVars_7,
  MR_Word * TypeInfoGoals_8,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_Word GlobalInfo0_10;
  MR_Word ModuleInfo0_11;
  MR_Word PredInfo0_12;
  MR_Word ProcInfo0_13;
  MR_Word ModuleInfo_14;
  MR_Word PredInfo_15;
  MR_Word ProcInfo_16;
  MR_Word GlobalInfo1_17;
  MR_Word GlobalInfo_18;
  MR_Word Var_21;
  MR_Word STATE_VARIABLE_Info_1_22;
  MR_Word STATE_VARIABLE_Info_2_23;

  GlobalInfo0_10 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_0_19);
  ModuleInfo0_11 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(GlobalInfo0_10);
  PredInfo0_12 = transform_hlds__higher_order__higher_order_info__hoi_get_pred_info_1_f_0(STATE_VARIABLE_Info_0_19);
  ProcInfo0_13 = transform_hlds__higher_order__higher_order_info__hoi_get_proc_info_1_f_0(STATE_VARIABLE_Info_0_19);
  Var_21 = mercury__term_context__dummy_context_0_f_0();
  check_hlds__polymorphism_type_info__polymorphism_make_type_info_vars_mi_10_p_0(Types_6, Var_21, TypeInfoVars_7, TypeInfoGoals_8, ModuleInfo0_11, &ModuleInfo_14, PredInfo0_12, &PredInfo_15, ProcInfo0_13, &ProcInfo_16);
  transform_hlds__higher_order__higher_order_info__hoi_set_pred_info_3_p_0(PredInfo_15, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_1_22);
  transform_hlds__higher_order__higher_order_info__hoi_set_proc_info_3_p_0(ProcInfo_16, STATE_VARIABLE_Info_1_22, &STATE_VARIABLE_Info_2_23);
  GlobalInfo1_17 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_2_23);
  transform_hlds__higher_order__higher_order_global_info__hogi_set_module_info_3_p_0(ModuleInfo_14, GlobalInfo1_17, &GlobalInfo_18);
  transform_hlds__higher_order__higher_order_info__hoi_set_global_info_3_p_0(GlobalInfo_18, STATE_VARIABLE_Info_2_23, STATE_VARIABLE_Info_20);
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_44;

  transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__find_matching_version__1488__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_44);
  *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_44));
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TVars_20;

  transform_hlds__higher_order__specialize_calls__arg_contains_type_info_for_tvar_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TVars_20);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TVars_20));
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_5(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__HOArg_50 = ((MR_Word) ((env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__conv4_HOArg_50));
  transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_4(env_ptr);
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Integer Var_63;
    MR_Integer Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_42;

    (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__Var_47 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__HOArg_50, 0))));
    (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__Var_47)) == (MR_Integer) 2);
    if ((env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded)
      transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_3(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_6(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), &(env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__conv4_HOArg_50, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__HigherOrderArgs_11, transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_5, env_ptr);
      (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0(
  MR_Word Info_8,
  MR_Word CalleePredProcId_9,
  MR_Word Args0_10,
  MR_Word HigherOrderArgs_11,
  MR_Word RequestKind_12,
  MR_Word Context_13,
  MR_Word * Result_14)
{
  struct transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0_s env;

  (env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__HigherOrderArgs_11 = HigherOrderArgs_11;
  {
    MR_Word GlobalInfo0_15;
    MR_Word ModuleInfo_16;
    MR_Word Params_17;
    MR_Word NewPredMap_18;
    MR_Word CallerPredProcId_19;
    MR_Word PredInfo_20;
    MR_Word ProcInfo_21;
    MR_Word Args_22;
    MR_Word ExtraTypeInfoTVars_23;
    MR_Word VarTable_24;
    MR_Word PairWithType_25;
    MR_Word ArgsTypes0_28;
    MR_Word TVarSet_29;
    MR_Word Request_30;
    MR_Word ProcInfo_76;
    MR_Word VarTable_77;
    MR_Word ArgTypes_78;
    MR_Word AllTVars_79;
    MR_Word Match_33;
    MR_Word TypeCtorInfo_74_74;
    MR_Word VersionSet_31;
    MR_Word Versions_32;
    MR_Word MaybeBestPartialSoFar0_88;
    MR_Box conv3_VersionSet_31;

    GlobalInfo0_15 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(Info_8);
    ModuleInfo_16 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(GlobalInfo0_15);
    Params_17 = transform_hlds__higher_order__higher_order_global_info__hogi_get_params_1_f_0(GlobalInfo0_15);
    NewPredMap_18 = transform_hlds__higher_order__higher_order_global_info__hogi_get_new_pred_map_1_f_0(GlobalInfo0_15);
    CallerPredProcId_19 = transform_hlds__higher_order__higher_order_info__hoi_get_pred_proc_id_1_f_0(Info_8);
    PredInfo_20 = transform_hlds__higher_order__higher_order_info__hoi_get_pred_info_1_f_0(Info_8);
    ProcInfo_21 = transform_hlds__higher_order__higher_order_info__hoi_get_proc_info_1_f_0(Info_8);
    transform_hlds__higher_order__higher_order_global_info__get_extra_arguments_3_p_0((env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__HigherOrderArgs_11, Args0_10, &Args_22);
    ProcInfo_76 = transform_hlds__higher_order__higher_order_info__hoi_get_proc_info_1_f_0(Info_8);
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_76, &VarTable_77);
    parse_tree__var_table__lookup_var_types_3_p_0(VarTable_77, Args_22, &ArgTypes_78);
    parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_78, &AllTVars_79);
    if ((AllTVars_79 == (MR_Word) ((MR_Unsigned) 0U)))
      ExtraTypeInfoTVars_23 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word RttiVarMaps_80;
      MR_Word TypeInfoTVars_81;
      MR_Word ExtraTypeInfoTVars0_82;
      MR_Word Var_83;
      MR_Box conv1_TypeInfoTVars_81;

      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_76, &RttiVarMaps_80);
      {
        Var_83 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_83, 0) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_6[0]));
        MR_hl_field(0, Var_83, 1) = ((MR_Box) (transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_1));
        MR_hl_field(0, Var_83, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_83, 3) = ((MR_Box) (RttiVarMaps_80));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[5]), Var_83, Args_22, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_TypeInfoTVars_81);
      TypeInfoTVars_81 = ((MR_Word) (conv1_TypeInfoTVars_81));
      mercury__list__delete_elems_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[3]), AllTVars_79, TypeInfoTVars_81, &ExtraTypeInfoTVars0_82);
      mercury__list__remove_dups_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[3]), ExtraTypeInfoTVars0_82, &ExtraTypeInfoTVars_23);
    }
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_21, &VarTable_24);
    {
      PairWithType_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PairWithType_25, 0) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_5[1]));
      MR_hl_field(0, PairWithType_25, 1) = ((MR_Box) (transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_2));
      MR_hl_field(0, PairWithType_25, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, PairWithType_25, 3) = ((MR_Box) (VarTable_24));
    }
    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[1]), PairWithType_25, Args0_10, &ArgsTypes0_28);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_20, &TVarSet_29);
    {
      Request_30 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Request_30, 0) = ((MR_Box) (CallerPredProcId_19));
      MR_hl_field(0, Request_30, 1) = ((MR_Box) (CalleePredProcId_9));
      MR_hl_field(0, Request_30, 2) = ((MR_Box) (ArgsTypes0_28));
      MR_hl_field(0, Request_30, 3) = ((MR_Box) (ExtraTypeInfoTVars_23));
      MR_hl_field(0, Request_30, 4) = ((MR_Box) ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__HigherOrderArgs_11));
      MR_hl_field(0, Request_30, 5) = ((MR_Box) (TVarSet_29));
      MR_hl_field(0, Request_30, 6) = (MR_Box) ((MR_Unsigned) (RequestKind_12));
      MR_hl_field(0, Request_30, 7) = ((MR_Box) (Context_13));
    }
    (env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[4]), NewPredMap_18, ((MR_Box) (CalleePredProcId_9)), &conv3_VersionSet_31);
    if ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded)
    {
      VersionSet_31 = ((MR_Word) (conv3_VersionSet_31));
      (env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded = MR_TRUE;
    }
    if ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded)
    {
      TypeCtorInfo_74_74 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0);
      mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_74_74, VersionSet_31, &Versions_32);
      MaybeBestPartialSoFar0_88 = (MR_Word) ((MR_Unsigned) 0U);
      (env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded = transform_hlds__higher_order__specialize_calls__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_102_111_114_95_118_101_114_115_105_111_110_95_108_111_111_112_95_95_91_49_93_95_48_7_p_0(Params_17, ModuleInfo_16, Request_30, Versions_32, MaybeBestPartialSoFar0_88, &Match_33);
    }
    if ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded)
      *Result_14 = (MR_Word) (MR_mkword(1, (MR_Word) (Match_33)));
    else
    {
      MR_Word HigherOrder_34 = ((((MR_Unsigned) ((MR_hl_field(0, Params_17, 0))) >> 2)) & (MR_Integer) 1);
      MR_Word TypeSpec_35 = ((((MR_Unsigned) ((MR_hl_field(0, Params_17, 0))) >> 1)) & (MR_Integer) 1);
      MR_Word UserTypeSpec_36 = ((MR_Unsigned) ((MR_hl_field(0, Params_17, 0))) & (MR_Integer) 1);
      MR_Integer Var_53;
      MR_Integer Var_54;
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Params_17, 0)));

      (env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded = (UserTypeSpec_36 == (MR_Integer) 0);
      if ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded)
        (env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded = (RequestKind_12 == (MR_Integer) 1);
      if (!((env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded))
      {
        MR_Word CalleePredId_37 = ((MR_Word) ((MR_hl_field(0, CalleePredProcId_9, 0))));
        MR_Word CalleePredInfo_39;
        MR_Integer Var_38;

        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_16, CalleePredId_37, &CalleePredInfo_39);
        (env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(CalleePredInfo_39);
        (env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded = !((env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded);
        if ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded)
        {
          {
            MR_Word Markers_40;

            (env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded = (UserTypeSpec_36 == (MR_Integer) 0);
            if ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded)
            {
              hlds__hlds_pred__pred_info_get_markers_2_p_0(CalleePredInfo_39, &Markers_40);
              (env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_40, (MR_Integer) 12);
              if (!((env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded))
                (env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_40, (MR_Integer) 13);
            }
          }
          if (!((env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded))
          {
            (env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded = (HigherOrder_34 == (MR_Integer) 0);
            if ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded)
              transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_6(&env);
            if (!((env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded))
              (env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded = (TypeSpec_35 == (MR_Integer) 0);
          }
        }
      }
      if ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_7_p_0_env_0__succeeded)
        *Result_14 = (MR_Word) (MR_mkword(2, (MR_Word) (Request_30)));
      else
        *Result_14 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_102_111_114_95_118_101_114_115_105_111_110_95_108_111_111_112_95_95_91_49_93_95_48_7_p_0(
  MR_Word Params_2,
  MR_Word ModuleInfo_3,
  MR_Word Request_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * Match_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__6_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        *Match_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
    }
    else
    {
      MR_Word Version_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word Versions_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word Match1_21;

      succeeded = transform_hlds__higher_order__higher_order_global_info__version_matches_5_p_0(Params_2, ModuleInfo_3, Request_4, Version_17, &Match1_21);
      if (succeeded)
      {
        MR_Word MatchCompleteness1_23 = ((MR_Word) ((MR_hl_field(0, Match1_21, 1))));

        if ((MatchCompleteness1_23 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *Match_7 = Match1_21;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Integer NumMatches1_26 = ((MR_Integer) ((MR_hl_field(1, MatchCompleteness1_23, 0))));
          MR_Word MaybeBestPartialSoFar1_27;
          MR_Word next_value_of_HeadVar__5_5;
          MR_Word next_value_of_HeadVar__6_6;

          if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MaybeBestPartialSoFar1_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeBestPartialSoFar1_27, 0) = ((MR_Box) (Match1_21));
            }
          else
          {
            MR_Word BestPartialSoFar0_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
            MR_Word BestPartialCompleteness0_30 = ((MR_Word) ((MR_hl_field(0, BestPartialSoFar0_28, 1))));

            if ((BestPartialCompleteness0_30 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.search_for_version_loop\'/7", (MR_String) "complete_match");
            else
            {
              MR_Integer NumMatches0_33 = ((MR_Integer) ((MR_hl_field(1, BestPartialCompleteness0_30, 0))));

              succeeded = (NumMatches0_33 > NumMatches1_26);
              if (succeeded)
                MaybeBestPartialSoFar1_27 = HeadVar__6_6;
              else
                {
                  MaybeBestPartialSoFar1_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeBestPartialSoFar1_27, 0) = ((MR_Box) (Match1_21));
                }
            }
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__5_5 = Versions_18;
          next_value_of_HeadVar__6_6 = MaybeBestPartialSoFar1_27;
          HeadVar__5_5 = next_value_of_HeadVar__5_5;
          HeadVar__6_6 = next_value_of_HeadVar__6_6;
          continue;
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__5_5 = Versions_18;

        // direct tailcall eliminated
        ;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40 = ((MR_Word) ((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__conv1_Instance_40));
  transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_52;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_36;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word TypeInfo_31_87;
    MR_Word TypeCtorInfo_32_88;
    MR_Word InstanceTVarSet_71;
    MR_Word InstanceTypes0_73;
    MR_Word Constraints0_74;
    MR_Word Renaming_80;
    MR_Word InstanceTypes_81;
    MR_Word Constraints1_82;
    MR_Word InstanceTVars_83;
    MR_Word UnconstrainedTVars0_84;
    MR_Word Subst_85;
    MR_Word KindMap_86;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_72;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_39;
    MR_Word Var_37;
    MR_Word Var_38;

    (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__InstanceTVarSet_51 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, 2))));
    (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__InstanceTypes0_53 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, 4))));
    (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Constraints0_54 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, 5))));
    parse_tree__prog_data__tvarset_merge_renaming_4_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__TVarSet_2, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__InstanceTVarSet_51, &Var_36, &(env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Renaming_60);
    parse_tree__prog_type_subst__apply_renaming_to_types_3_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Renaming_60, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__InstanceTypes0_53, &(env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__InstanceTypes_61);
    parse_tree__prog_type_subst__apply_renaming_to_prog_constraints_3_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Renaming_60, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Constraints0_54, &(env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Constraints1_62);
    parse_tree__prog_type_scan__type_vars_in_types_2_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__InstanceTypes_61, &(env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__InstanceTVars_63);
    parse_tree__prog_type_scan__get_unconstrained_tvars_3_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__InstanceTVars_63, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Constraints1_62, &(env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__UnconstrainedTVars0_64);
    (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded = parse_tree__prog_type_unify__type_list_subsumes_3_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__InstanceTypes_61, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__ArgTypes_28, &(env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Subst_65);
    if ((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded)
    {
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Subst_65, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Constraints1_62, &Var_34);
      (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__TypeInfo_31_67 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[3]);
      (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__TypeCtorInfo_32_68 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
      mercury__map__init_1_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__TypeInfo_31_67, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__TypeCtorInfo_32_68, &(env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__KindMap_66);
      parse_tree__prog_type_subst__apply_rec_subst_to_tvars_4_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__KindMap_66, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Subst_65, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__UnconstrainedTVars0_64, &Var_35);
      InstanceTVarSet_71 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, 2))));
      InstanceTypes0_73 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, 4))));
      Constraints0_74 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, 5))));
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__TVarSet_2, InstanceTVarSet_71, &Var_39, &Renaming_80);
      parse_tree__prog_type_subst__apply_renaming_to_types_3_p_0(Renaming_80, InstanceTypes0_73, &InstanceTypes_81);
      parse_tree__prog_type_subst__apply_renaming_to_prog_constraints_3_p_0(Renaming_80, Constraints0_74, &Constraints1_82);
      parse_tree__prog_type_scan__type_vars_in_types_2_p_0(InstanceTypes_81, &InstanceTVars_83);
      parse_tree__prog_type_scan__get_unconstrained_tvars_3_p_0(InstanceTVars_83, Constraints1_82, &UnconstrainedTVars0_84);
      (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded = parse_tree__prog_type_unify__type_list_subsumes_3_p_0(InstanceTypes_81, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__ArgTypes0_26, &Subst_85);
      if ((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded)
      {
        parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0(Subst_85, Constraints1_82, &Var_37);
        TypeInfo_31_87 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[3]);
        TypeCtorInfo_32_88 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        mercury__map__init_1_p_0(TypeInfo_31_87, TypeCtorInfo_32_88, &KindMap_86);
        parse_tree__prog_type_subst__apply_rec_subst_to_tvars_4_p_0(KindMap_86, Subst_85, UnconstrainedTVars0_84, &Var_38);
        (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded = MR_TRUE;
      }
      (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded);
      if ((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded)
        transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), &(env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__conv1_Instance_40, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instances_32, transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_3, env_ptr);
      (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word TVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  struct transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0_s env;

  (env).transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__TVarSet_2 = TVarSet_2;
  while (MR_TRUE)
  {
    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_11;
      MR_String Var_12;
      MR_Word Var_47;
      MR_Word Var_48;

      (env).transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env).transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded)
      {
        Var_11 = (MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.some_updated_constraint_makes_an_instance_known_loop\'/4";
        Var_12 = (MR_String) "length mismatch";
        mercury__require__unexpected_2_p_0(Var_11, Var_12);
        (env).transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.some_updated_constraint_makes_an_instance_known_loop\'/4", (MR_String) "length mismatch");
        (env).transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded = MR_TRUE;
      }
      else
      {
        MR_Word CalleeUnivConstraint_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
        MR_Word CalleeUnivConstraints_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
        MR_Word ClassName_25 = ((MR_Word) ((MR_hl_field(0, Var_46, 0))));
        MR_Integer ClassArity_29;
        MR_Word ClassId_30;
        MR_Word InstanceTable_31;
        MR_Word _ClassName_27;
        MR_Box conv0_Instances_32;

        (env).transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__ArgTypes0_26 = ((MR_Word) ((MR_hl_field(0, Var_46, 1))));
        (env).transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__ArgTypes_28 = ((MR_Word) ((MR_hl_field(0, CalleeUnivConstraint_23, 1))));
        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (env).transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__ArgTypes0_26, &ClassArity_29);
        {
          ClassId_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ClassId_30, 0) = ((MR_Box) (ClassName_25));
          MR_hl_field(0, ClassId_30, 1) = ((MR_Box) (ClassArity_29));
        }
        hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_1, &InstanceTable_31);
        (env).transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[2]), InstanceTable_31, ((MR_Box) (ClassId_30)), &conv0_Instances_32);
        if ((env).transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded)
        {
          (env).transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instances_32 = ((MR_Word) (conv0_Instances_32));
          (env).transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded = MR_TRUE;
        }
        if ((env).transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded)
          transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_4(&env);
        if ((env).transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded)
          (env).transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded = MR_TRUE;
        else
        {
          MR_Word next_value_of_HeadVar__3_3 = Var_45;
          MR_Word next_value_of_HeadVar__4_4 = CalleeUnivConstraints_24;

          // direct tailcall eliminated
          ;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          continue;
        }
      }
    }
    return (env).transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word CalleeStatus_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word VarTable_5,
  MR_Word RttiVarMaps_6,
  MR_Word KnownVarMap_7,
  MR_Integer ArgNo_8,
  MR_Word STATE_VARIABLE_HOArgsCord_0_9,
  MR_Word * STATE_VARIABLE_HOArgsCord_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_HOArgsCord_10 = STATE_VARIABLE_HOArgsCord_0_9;
    else
    {
      MR_Word Var_83 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Var_84 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.find_higher_order_args\'/10", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word CalleeArgType_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
        MR_Word CalleeArgTypes_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
        MR_Integer NextArg_44 = (MR_Integer) ((MR_Unsigned) ArgNo_8 + (MR_Unsigned) 1);
        MR_Word STATE_VARIABLE_HOArgsCord_1_75;
        MR_Word ConsId_45;
        MR_Word CurriedArgs_46;
        MR_Word Var_67;
        MR_Box conv0_Var_67;
        MR_Word Var_68;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Integer next_value_of_ArgNo_8;
        MR_Word next_value_of_STATE_VARIABLE_HOArgsCord_0_9;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), KnownVarMap_7, ((MR_Box) (Var_84)), &conv0_Var_67);
        if (succeeded)
        {
          Var_67 = ((MR_Word) (conv0_Var_67));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          ConsId_45 = ((MR_Word) ((MR_hl_field(0, Var_67, 0))));
          CurriedArgs_46 = ((MR_Word) ((MR_hl_field(0, Var_67, 1))));
          succeeded = ((((MR_tag((MR_Word) ConsId_45)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_45, 0)))) == (MR_Integer) 5)));
          if (succeeded)
          {
            Var_68 = ((MR_Word) ((MR_hl_field(3, ConsId_45, 1))));
            succeeded = ((MR_tag((MR_Word) Var_68)) == (MR_Integer) 0);
          }
          succeeded = !(succeeded);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) ConsId_45)) == (MR_Integer) 2);
            if (succeeded)
            {
              MR_Word Var_69 = (MR_Word) (CalleeStatus_2);
              MR_Word Var_70;

              succeeded = ((MR_tag((MR_Word) Var_69)) != (MR_Integer) 2);
              if (succeeded)
              {
                Var_70 = (MR_Word) (CalleeStatus_2);
                succeeded = ((MR_tag((MR_Word) Var_70)) != (MR_Integer) 1);
                if (succeeded)
                  succeeded = parse_tree__prog_type_test__type_is_higher_order_1_p_0(CalleeArgType_37);
              }
            }
            else
              succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Word CurriedArgTypes_51;
          MR_Word CurriedArgRttiInfo_52;
          MR_Word CurriedCalleeArgTypes_57;
          MR_Word HOCurriedArgsCord_58;
          MR_Word HOCurriedArgs_59;
          MR_Integer NumCurriedArgs_60;
          MR_Integer NumHOCurriedArgs_61;
          MR_Word IsConst_62;
          MR_Word HOArg_63;
          MR_Word Var_71;
          MR_Word Var_74;
          MR_Word ShroudedPredProcId_53;

          parse_tree__var_table__lookup_var_types_3_p_0(VarTable_5, CurriedArgs_46, &CurriedArgTypes_51);
          {
            Var_71 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_71, 0) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_5[0]));
            MR_hl_field(0, Var_71, 1) = ((MR_Box) (transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_1));
            MR_hl_field(0, Var_71, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_71, 3) = ((MR_Box) (RttiVarMaps_6));
          }
          mercury__list__map_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0), Var_71, CurriedArgs_46, &CurriedArgRttiInfo_52);
          succeeded = ((MR_tag((MR_Word) ConsId_45)) == (MR_Integer) 2);
          if (succeeded)
          {
            ShroudedPredProcId_53 = (MR_Word) (MR_body((MR_Word) (ConsId_45), (MR_Integer) 2));
            {
              MR_Word PredId_54;
              MR_Word PredInfo_56;
              MR_Word Var_72;

              Var_72 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_53);
              PredId_54 = ((MR_Word) ((MR_hl_field(0, Var_72, 0))));
              hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_1, PredId_54, &PredInfo_56);
              hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_56, &CurriedCalleeArgTypes_57);
            }
          }
          else
            CurriedCalleeArgTypes_57 = CurriedArgTypes_51;
          Var_74 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0));
          transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0(ModuleInfo_1, CalleeStatus_2, CurriedArgs_46, CurriedCalleeArgTypes_57, VarTable_5, RttiVarMaps_6, KnownVarMap_7, (MR_Integer) 1, Var_74, &HOCurriedArgsCord_58);
          HOCurriedArgs_59 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), HOCurriedArgsCord_58);
          mercury__list__length_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), CurriedArgs_46, &NumCurriedArgs_60);
          mercury__list__length_2_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), HOCurriedArgs_59, &NumHOCurriedArgs_61);
          succeeded = (NumCurriedArgs_60 == NumHOCurriedArgs_61);
          if (succeeded)
            succeeded = transform_hlds__higher_order__higher_order_global_info__all_higher_order_args_are_constant_1_p_0(HOCurriedArgs_59);
          if (succeeded)
            IsConst_62 = (MR_Integer) 1;
          else
            IsConst_62 = (MR_Integer) 0;
          {
            HOArg_63 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, HOArg_63, 0) = ((MR_Box) (ConsId_45));
            MR_hl_field(0, HOArg_63, 1) = ((MR_Box) (ArgNo_8));
            MR_hl_field(0, HOArg_63, 2) = ((MR_Box) (NumCurriedArgs_60));
            MR_hl_field(0, HOArg_63, 3) = ((MR_Box) (CurriedArgs_46));
            MR_hl_field(0, HOArg_63, 4) = ((MR_Box) (CurriedArgTypes_51));
            MR_hl_field(0, HOArg_63, 5) = ((MR_Box) (CurriedArgRttiInfo_52));
            MR_hl_field(0, HOArg_63, 6) = ((MR_Box) (HOCurriedArgs_59));
            MR_hl_field(0, HOArg_63, 7) = (MR_Box) ((MR_Unsigned) (IsConst_62));
          }
          mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), ((MR_Box) (HOArg_63)), STATE_VARIABLE_HOArgsCord_0_9, &STATE_VARIABLE_HOArgsCord_1_75);
        }
        else
          STATE_VARIABLE_HOArgsCord_1_75 = STATE_VARIABLE_HOArgsCord_0_9;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Var_83;
        next_value_of_HeadVar__4_4 = CalleeArgTypes_38;
        next_value_of_ArgNo_8 = NextArg_44;
        next_value_of_STATE_VARIABLE_HOArgsCord_0_9 = STATE_VARIABLE_HOArgsCord_1_75;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        ArgNo_8 = next_value_of_ArgNo_8;
        STATE_VARIABLE_HOArgsCord_0_9 = next_value_of_STATE_VARIABLE_HOArgsCord_0_9;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__record_interesting_consts_3_p_0(
  MR_Word Unification_4,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Unification_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word LVar_16 = ((MR_Word) ((MR_hl_field(0, Unification_4, 0))));
        MR_Word ConsId_17 = ((MR_Word) ((MR_hl_field(0, Unification_4, 1))));
        MR_Word Args_18 = ((MR_Word) ((MR_hl_field(0, Unification_4, 2))));
        MR_Word Params_23;
        MR_Word Var_34;

        Var_34 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_0_31);
        Params_23 = transform_hlds__higher_order__higher_order_global_info__hogi_get_params_1_f_0(Var_34);
        switch (MR_tag((MR_Word) ConsId_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word UserTypeSpec_82 = ((MR_Unsigned) ((MR_hl_field(0, Params_23, 0))) & (MR_Integer) 1);

              switch (UserTypeSpec_82) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word KnownVarMap0_25;
                    MR_Word KnownConst_26;
                    MR_Word KnownVarMap_27;

                    KnownVarMap0_25 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_0_31);
                    {
                      KnownConst_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, KnownConst_26, 0) = ((MR_Box) (ConsId_17));
                      MR_hl_field(0, KnownConst_26, 1) = ((MR_Box) (Args_18));
                    }
                    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), ((MR_Box) (LVar_16)), ((MR_Box) (KnownConst_26)), KnownVarMap0_25, &KnownVarMap_27);
                    transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_27, STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
            break;
          case (MR_Integer) 2:
            {
              MR_Word HigherOrder_81 = ((((MR_Unsigned) ((MR_hl_field(0, Params_23, 0))) >> 2)) & (MR_Integer) 1);

              switch (HigherOrder_81) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word KnownVarMap0_97;
                    MR_Word KnownConst_98;
                    MR_Word KnownVarMap_99;

                    KnownVarMap0_97 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_0_31);
                    {
                      KnownConst_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, KnownConst_98, 0) = ((MR_Box) (ConsId_17));
                      MR_hl_field(0, KnownConst_98, 1) = ((MR_Box) (Args_18));
                    }
                    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), ((MR_Box) (LVar_16)), ((MR_Box) (KnownConst_98)), KnownVarMap0_97, &KnownVarMap_99);
                    transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_99, STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, ConsId_17, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 10:
              case (MR_Integer) 11:
              case (MR_Integer) 12:
              case (MR_Integer) 13:
                {
                  MR_Word UserTypeSpec_82 = ((MR_Unsigned) ((MR_hl_field(0, Params_23, 0))) & (MR_Integer) 1);

                  switch (UserTypeSpec_82) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word KnownVarMap0_25;
                        MR_Word KnownConst_26;
                        MR_Word KnownVarMap_27;

                        KnownVarMap0_25 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_0_31);
                        {
                          KnownConst_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, KnownConst_26, 0) = ((MR_Box) (ConsId_17));
                          MR_hl_field(0, KnownConst_26, 1) = ((MR_Box) (Args_18));
                        }
                        mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), ((MR_Box) (LVar_16)), ((MR_Box) (KnownConst_26)), KnownVarMap0_25, &KnownVarMap_27);
                        transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_27, STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
              case (MR_Integer) 8:
              case (MR_Integer) 9:
              case (MR_Integer) 14:
                *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
                break;
              case (MR_Integer) 5:
                {
                  MR_Word IntConst_58 = ((MR_Word) ((MR_hl_field(3, ConsId_17, 1))));

                  switch (MR_tag((MR_Word) IntConst_58)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word UserTypeSpec_69 = ((MR_Unsigned) ((MR_hl_field(0, Params_23, 0))) & (MR_Integer) 1);

                        switch (UserTypeSpec_69) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
                            break;
                          case (MR_Integer) 0:
                            {
                              MR_Word KnownVarMap0_113;
                              MR_Word KnownConst_114;
                              MR_Word KnownVarMap_115;

                              KnownVarMap0_113 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_0_31);
                              {
                                KnownConst_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, KnownConst_114, 0) = ((MR_Box) (ConsId_17));
                                MR_hl_field(0, KnownConst_114, 1) = ((MR_Box) (Args_18));
                              }
                              mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), ((MR_Box) (LVar_16)), ((MR_Box) (KnownConst_114)), KnownVarMap0_113, &KnownVarMap_115);
                              transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_115, STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                      *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
                      break;
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var1_8 = ((MR_Word) ((MR_hl_field(2, Unification_4, 0))));
        MR_Word Var2_9 = ((MR_Word) ((MR_hl_field(2, Unification_4, 1))));
        MR_Word KnownVarMap0_40;
        MR_Word KnownConst_41;
        MR_Box conv0_KnownConst_41;

        KnownVarMap0_40 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_0_31);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), KnownVarMap0_40, ((MR_Box) (Var2_9)), &conv0_KnownConst_41);
        if (succeeded)
        {
          KnownConst_41 = ((MR_Word) (conv0_KnownConst_41));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word KnownVarMap_42;

          mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), ((MR_Box) (Var1_8)), ((MR_Box) (KnownConst_41)), KnownVarMap0_40, &KnownVarMap_42);
          transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_42, STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
        }
        else
          *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Unification_4, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.record_interesting_consts\'/3", (MR_String) "complicated unification");
            return;
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__merge_post_branch_infos_into_one_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_13;

  succeeded = transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__merge_post_branch_infos_into_one__506__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_13);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_13));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__merge_post_branch_infos_into_one_2_p_0(
  MR_Word PostInfos_3,
  MR_Word * MergedPostInfo_4)
{
  MR_bool succeeded;
  MR_Word ReachableVarMaps_8;

  mercury__list__filter_map_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_post_branch_info_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[0]), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[2]), PostInfos_3, &ReachableVarMaps_8);
  if ((ReachableVarMaps_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_15;

    Var_15 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *MergedPostInfo_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_15));
      MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
  }
  else
  {
    MR_Word HeadVarMap_9 = ((MR_Word) ((MR_hl_field(1, ReachableVarMaps_8, 0))));
    MR_Word TailVarMaps_10 = ((MR_Word) ((MR_hl_field(1, ReachableVarMaps_8, 1))));
    MR_Word MergedVarMap_11;

    transform_hlds__higher_order__specialize_calls__merge_post_branch_var_maps_passes_3_p_0(HeadVarMap_9, TailVarMaps_10, &MergedVarMap_11);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *MergedPostInfo_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (MergedVarMap_11));
      MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__merge_post_branch_infos_3_p_0(
  MR_Word PostA_4,
  MR_Word PostB_5,
  MR_Word * Post_6)
{
  MR_Word Var_29 = ((MR_Unsigned) ((MR_hl_field(0, PostA_4, 1))) & (MR_Integer) 1);
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, PostA_4, 0))));
  MR_Word Var_35 = ((MR_Unsigned) ((MR_hl_field(0, PostB_5, 1))) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, PostB_5, 0))));

  switch (Var_29) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (Var_35) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word VarConstMapAB_9;
            MR_Word VarsA_37;
            MR_Word VarsB_38;
            MR_Word CommonVars_39;
            MR_Word VarConstCommonMapA_40;
            MR_Word VarConstCommonMapB_41;
            MR_Word VarConstCommonListA_42;
            MR_Word VarConstCommonListB_43;
            MR_Word VarConstCommonList_44;

            mercury__map__keys_as_set_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), Var_30, &VarsA_37);
            mercury__map__keys_as_set_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), Var_36, &VarsB_38);
            mercury__set__intersect_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), VarsA_37, VarsB_38, &CommonVars_39);
            VarConstCommonMapA_40 = mercury__map__select_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), Var_30, CommonVars_39);
            VarConstCommonMapB_41 = mercury__map__select_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), Var_36, CommonVars_39);
            mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), VarConstCommonMapA_40, &VarConstCommonListA_42);
            mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), VarConstCommonMapB_41, &VarConstCommonListB_43);
            transform_hlds__higher_order__specialize_calls__merge_common_var_const_list_4_p_0(VarConstCommonListA_42, VarConstCommonListB_43, (MR_Word) ((MR_Unsigned) 0U), &VarConstCommonList_44);
            mercury__map__from_assoc_list_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), VarConstCommonList_44, &VarConstMapAB_9);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Post_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (VarConstMapAB_9));
              MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
          }
          break;
        case (MR_Integer) 1:
          *Post_6 = PostA_4;
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (Var_35) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Post_6 = PostB_5;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_25;

            Var_25 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Post_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_25));
              MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__set_post_branch_info_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  MR_Word KnownVarMap_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

  transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_4, STATE_VARIABLE_Info_0_7, STATE_VARIABLE_Info_8);
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__get_pre_branch_info_2_p_0(
  MR_Word Info_3,
  MR_Word * HeadVar__2_2)
{
  MR_Word Var_4;

  Var_4 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(Info_3);
  *HeadVar__2_2 = (MR_Word) (Var_4);
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__get_post_branch_info_for_goal_3_p_0(
  MR_Word Info_4,
  MR_Word Goal_5,
  MR_Word * PostBranchInfo_6)
{
  MR_bool succeeded;
  MR_Word InstMapDelta_7;
  MR_Word Reachability_8;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, Goal_5, 1))));
  MR_Word Var_10;

  InstMapDelta_7 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_9);
  succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_7);
  if (succeeded)
    Reachability_8 = (MR_Integer) 0;
  else
    Reachability_8 = (MR_Integer) 1;
  Var_10 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(Info_4);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *PostBranchInfo_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Reachability_8));
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__set_pre_branch_info_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word KnownVarMap_4 = (MR_Word) (HeadVar__1_1);

  transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_4, STATE_VARIABLE_Info_0_6, STATE_VARIABLE_Info_7);
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__merge_post_branch_var_maps_passes_3_p_0(
  MR_Word VarMap1_4,
  MR_Word VarMaps2Plus_5,
  MR_Word * MergedVarMap_6)
{
  while (MR_TRUE)
  {
    MR_Word HeadMergedVarMap_7;
    MR_Word TailMergedVarMaps_8;

    // setup for model_det tailcalls optimized into a loop
    ;
    transform_hlds__higher_order__specialize_calls__merge_post_branch_var_maps_pass_4_p_0(VarMap1_4, VarMaps2Plus_5, &HeadMergedVarMap_7, &TailMergedVarMaps_8);
    if ((TailMergedVarMaps_8 == (MR_Word) ((MR_Unsigned) 0U)))
      *MergedVarMap_6 = HeadMergedVarMap_7;
    else
    {
      MR_Word next_value_of_VarMap1_4 = HeadMergedVarMap_7;
      MR_Word next_value_of_VarMaps2Plus_5 = TailMergedVarMaps_8;

      // direct tailcall eliminated
      ;
      VarMap1_4 = next_value_of_VarMap1_4;
      VarMaps2Plus_5 = next_value_of_VarMaps2Plus_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__merge_post_branch_var_maps_pass_4_p_0(
  MR_Word VarMap1_5,
  MR_Word VarMaps2Plus_6,
  MR_Word * HeadMergedVarMap_7,
  MR_Word * TailMergedVarMaps_8)
{
  if ((VarMaps2Plus_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadMergedVarMap_7 = VarMap1_5;
    *TailMergedVarMaps_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word VarMap2_9 = ((MR_Word) ((MR_hl_field(1, VarMaps2Plus_6, 0))));
    MR_Word VarMaps3Plus_10 = ((MR_Word) ((MR_hl_field(1, VarMaps2Plus_6, 1))));
    MR_Word VarsA_15;
    MR_Word VarsB_16;
    MR_Word CommonVars_17;
    MR_Word VarConstCommonMapA_18;
    MR_Word VarConstCommonMapB_19;
    MR_Word VarConstCommonListA_20;
    MR_Word VarConstCommonListB_21;
    MR_Word VarConstCommonList_22;

    mercury__map__keys_as_set_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), VarMap1_5, &VarsA_15);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), VarMap2_9, &VarsB_16);
    mercury__set__intersect_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), VarsA_15, VarsB_16, &CommonVars_17);
    VarConstCommonMapA_18 = mercury__map__select_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), VarMap1_5, CommonVars_17);
    VarConstCommonMapB_19 = mercury__map__select_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), VarMap2_9, CommonVars_17);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), VarConstCommonMapA_18, &VarConstCommonListA_20);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), VarConstCommonMapB_19, &VarConstCommonListB_21);
    transform_hlds__higher_order__specialize_calls__merge_common_var_const_list_4_p_0(VarConstCommonListA_20, VarConstCommonListB_21, (MR_Word) ((MR_Unsigned) 0U), &VarConstCommonList_22);
    mercury__map__from_assoc_list_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), VarConstCommonList_22, HeadMergedVarMap_7);
    if ((VarMaps3Plus_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *TailMergedVarMaps_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word VarMap3_11 = ((MR_Word) ((MR_hl_field(1, VarMaps3Plus_10, 0))));
      MR_Word VarMaps4Plus_12 = ((MR_Word) ((MR_hl_field(1, VarMaps3Plus_10, 1))));
      MR_Word HeadTailMergedVarMap_13;
      MR_Word TailTailMergedVarMaps_14;

      transform_hlds__higher_order__specialize_calls__merge_post_branch_var_maps_pass_4_p_0(VarMap3_11, VarMaps4Plus_12, &HeadTailMergedVarMap_13, &TailTailMergedVarMaps_14);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *TailMergedVarMaps_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadTailMergedVarMap_13));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailTailMergedVarMaps_14));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__merge_common_var_const_list_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__merge_common_var_const_list__599__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__merge_common_var_const_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__4_4 = HeadVar__3_3;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.merge_common_var_const_list\'/4", (MR_String) "mismatched list");
          return;
        }
    else
    {
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.merge_common_var_const_list\'/4", (MR_String) "mismatched list");
          return;
        }
      else
      {
        MR_Word VarA_22 = ((MR_Word) ((MR_hl_field(0, Var_40, 0))));
        MR_Word ValueA_23 = ((MR_Word) ((MR_hl_field(0, Var_40, 1))));
        MR_Word VarB_25;
        MR_Word ValueB_26;
        MR_Word ListB_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
        MR_Word Var_33;
        MR_Word STATE_VARIABLE_MergedList_1_36;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;

        VarB_25 = ((MR_Word) ((MR_hl_field(0, Var_32, 0))));
        ValueB_26 = ((MR_Word) ((MR_hl_field(0, Var_32, 1))));
        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_33, 0) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_4[0]));
          MR_hl_field(0, Var_33, 1) = ((MR_Box) (transform_hlds__higher_order__specialize_calls__merge_common_var_const_list_4_p_0_1));
          MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_33, 3) = ((MR_Box) (VarA_22));
          MR_hl_field(0, Var_33, 4) = ((MR_Box) (VarB_25));
        }
        mercury__require__expect_3_p_0(Var_33, (MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.merge_common_var_const_list\'/4", (MR_String) "var mismatch");
        succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____known_const_0_0(ValueA_23, ValueB_26);
        if (succeeded)
          {
            STATE_VARIABLE_MergedList_1_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_MergedList_1_36, 0) = ((MR_Box) (Var_40));
            MR_hl_field(1, STATE_VARIABLE_MergedList_1_36, 1) = ((MR_Box) (HeadVar__3_3));
          }
        else
          STATE_VARIABLE_MergedList_1_36 = HeadVar__3_3;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_39;
        next_value_of_HeadVar__2_2 = ListB_27;
        next_value_of_HeadVar__3_3 = STATE_VARIABLE_MergedList_1_36;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__acc_specialization_requests_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Requests_10;
  MR_Word conv0_STATE_VARIABLE_GlobalInfo_19;

  transform_hlds__higher_order__specialize_calls__ho_traverse_proc_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Integer) (wrapper_arg_1)), &conv1_Requests_10, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_GlobalInfo_19);
  *wrapper_arg_2 = ((MR_Box) (conv1_Requests_10));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_GlobalInfo_19));
}

void MR_CALL 
transform_hlds__higher_order__specialize_calls__acc_specialization_requests_5_p_0(
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_Requests_0_20,
  MR_Word * STATE_VARIABLE_Requests_21,
  MR_Word STATE_VARIABLE_GlobalInfo_0_22,
  MR_Word * STATE_VARIABLE_GlobalInfo_23)
{
  MR_Word ModuleInfo0_9;
  MR_Word PredInfo0_10;
  MR_Word NonImportedProcs_11;

  ModuleInfo0_9 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(STATE_VARIABLE_GlobalInfo_0_22);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo0_9, PredId_6, &PredInfo0_10);
  NonImportedProcs_11 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo0_10);
  if ((NonImportedProcs_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Requests_21 = STATE_VARIABLE_Requests_0_20;
    *STATE_VARIABLE_GlobalInfo_23 = STATE_VARIABLE_GlobalInfo_0_22;
  }
  else
  {
    MR_Integer FirstProcId_12 = ((MR_Integer) ((MR_hl_field(1, NonImportedProcs_11, 0))));
    MR_Word NewRequestSets_14;
    MR_Word NewRequests_15;
    MR_Word ModuleInfo1_16;
    MR_Word FirstProcInfo_17;
    MR_Word FirstProcGoal_18;
    MR_Integer FirstProcGoalSize_19;
    MR_Word Var_24;
    MR_Word STATE_VARIABLE_GlobalInfo_1_25;
    MR_Box conv2_STATE_VARIABLE_GlobalInfo_1_25;

    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_3[0]));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (transform_hlds__higher_order__specialize_calls__acc_specialization_requests_5_p_0_1));
      MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_24, 3) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_24, 4) = ((MR_Box) (PredId_6));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0), Var_24, NonImportedProcs_11, &NewRequestSets_14, ((MR_Box) (STATE_VARIABLE_GlobalInfo_0_22)), &conv2_STATE_VARIABLE_GlobalInfo_1_25);
    STATE_VARIABLE_GlobalInfo_1_25 = ((MR_Word) (conv2_STATE_VARIABLE_GlobalInfo_1_25));
    NewRequests_15 = mercury__set__union_list_1_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0), NewRequestSets_14);
    mercury__set__union_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0), NewRequests_15, STATE_VARIABLE_Requests_0_20, STATE_VARIABLE_Requests_21);
    ModuleInfo1_16 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(STATE_VARIABLE_GlobalInfo_1_25);
    hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo1_16, PredId_6, FirstProcId_12, &FirstProcInfo_17);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(FirstProcInfo_17, &FirstProcGoal_18);
    hlds__goal_util__goal_size_2_p_0(FirstProcGoal_18, &FirstProcGoalSize_19);
    transform_hlds__higher_order__higher_order_global_info__hogi_add_goal_size_4_p_0(PredId_6, FirstProcGoalSize_19, STATE_VARIABLE_GlobalInfo_1_25, STATE_VARIABLE_GlobalInfo_23);
  }
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____can_request_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__specialize_calls____Unify____can_request_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____can_request_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__specialize_calls____Compare____can_request_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____find_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__specialize_calls____Unify____find_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____find_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__specialize_calls____Compare____find_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____post_branch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__specialize_calls____Unify____post_branch_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____post_branch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__specialize_calls____Compare____post_branch_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____pre_branch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__specialize_calls____Unify____pre_branch_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____pre_branch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__specialize_calls____Compare____pre_branch_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____reachability_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__specialize_calls____Unify____reachability_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____reachability_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__specialize_calls____Compare____reachability_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____specialization_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__specialize_calls____Unify____specialization_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____specialization_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__specialize_calls____Compare____specialization_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____type_class_info_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__specialize_calls____Unify____type_class_info_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____type_class_info_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__specialize_calls____Compare____type_class_info_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____typeclass_info_manipulator_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__specialize_calls____Unify____typeclass_info_manipulator_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____typeclass_info_manipulator_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__specialize_calls____Compare____typeclass_info_manipulator_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__higher_order__specialize_calls__init(void)
{
}

void mercury__transform_hlds__higher_order__specialize_calls__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_can_request_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_find_result_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_post_branch_info_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_pre_branch_info_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_reachability_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_specialization_result_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_type_class_info_args_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_typeclass_info_manipulator_0);
}

void mercury__transform_hlds__higher_order__specialize_calls__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__higher_order__specialize_calls__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.higher_order.specialize_calls.
