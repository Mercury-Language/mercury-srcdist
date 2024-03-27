/*
** Automatically generated from `higher_order.specialize_calls.m'
** by the Mercury compiler,
** version rotd-2024-03-27
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.polymorphism_info.mih"
#include "check_hlds.polymorphism_type_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
#include "check_hlds.type_util.mih"
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
#include "libs.dependency_graph.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_type_unify.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.higher_order.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.higher_order.higher_order_global_info.mih"
#include "transform_hlds.higher_order.higher_order_info.mih"
#include "transform_hlds.higher_order.specialize_unify_compare.mih"



struct transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0_s {
  MR_Word transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HigherOrderArgs_14;
  MR_bool transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded;
  MR_Word transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HigherOrder_36;
  jmp_buf transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__commit_0;
  MR_Word transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HOArg_41;
  MR_Word transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__Var_52;
  MR_Box transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__conv4_HOArg_41;
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
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__find_typeclass_info_components__1844__1_2_p_0(
  MR_Word TCIConstConsId_27,
  MR_Word HeadVar__2_38);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__arg_contains_type_info_for_tvar__1585__1_2_p_0(
  MR_Word LambdaHeadVar__1_23,
  MR_Word * LambdaHeadVar__2_24);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__find_matching_version__1477__1_3_p_0(
  MR_Word VarTable_26,
  MR_Word LambdaHeadVar__1_44,
  MR_Word * LambdaHeadVar__2_45);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__merge_common_var_const_list__579__1_2_p_0(
  MR_Word VarA_22,
  MR_Word VarB_25);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__merge_post_branch_infos_into_one__463__1_2_p_0(
  MR_Word LambdaHeadVar__1_16,
  MR_Word * LambdaHeadVar__2_17);

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
transform_hlds__higher_order__specialize_calls__ho_traverse_cases_loop_7_p_0(
  MR_Word PreInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_PostInfos_0_4,
  MR_Word * STATE_VARIABLE_PostInfos_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_cases_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_cases_4_p_0(
  MR_Word Cases0_5,
  MR_Word * Cases_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_disj_loop_7_p_0(
  MR_Word PreInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_PostInfos_0_4,
  MR_Word * STATE_VARIABLE_PostInfos_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_disj_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_disj_4_p_0(
  MR_Word Goals0_5,
  MR_Word * Goals_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_parallel_conj_loop_7_p_0(
  MR_Word PreInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_PostInfos_0_4,
  MR_Word * STATE_VARIABLE_PostInfos_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

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
  MR_Word STATE_VARIABLE_Info_0_81,
  MR_Word * STATE_VARIABLE_Info_82);

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
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_73,
  MR_Word * STATE_VARIABLE_Info_74);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__maybe_specialize_call_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

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
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__construct_specialized_higher_order_call_7_p_0(
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word AllArgs_10,
  MR_Word GoalInfo_11,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

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
transform_hlds__higher_order__specialize_calls__maybe_specialize_ordinary_call_12_p_0(
  MR_Word CanRequest_13,
  MR_Word CalledPred_14,
  MR_Integer CalledProc_15,
  MR_Word CalleePredInfo_16,
  MR_Word CalleeProcInfo_17,
  MR_Word Args0_18,
  MR_Word IsBuiltin_19,
  MR_Word MaybeContext_20,
  MR_Word GoalInfo_21,
  MR_Word * Result_22,
  MR_Word STATE_VARIABLE_Info_0_82,
  MR_Word * STATE_VARIABLE_Info_83);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__construct_extra_type_infos_5_p_0(
  MR_Word Types_6,
  MR_Word * TypeInfoVars_7,
  MR_Word * TypeInfoGoals_8,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0(
  MR_Word Info_9,
  MR_Word CalledPred_10,
  MR_Integer CalledProc_11,
  MR_Word Args0_12,
  MR_Word Context_13,
  MR_Word HigherOrderArgs_14,
  MR_Word RequestKind_15,
  MR_Word * Result_16);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_102_111_114_95_118_101_114_115_105_111_110_95_95_91_49_93_95_48_7_p_0(
  MR_Word Params_2,
  MR_Word ModuleInfo_3,
  MR_Word Request_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * Match_7);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__type_subst_makes_some_instance_known_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word CalleeUnivConstraints0_10,
  MR_Word TVarSet0_11,
  MR_Word CallerHeadTypeParams_12,
  MR_Word ArgTypes_13,
  MR_Word CalleeTVarSet_14,
  MR_Word CalleeExistQVars_15,
  MR_Word CalleeArgTypes0_16);

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
transform_hlds__higher_order__specialize_calls__ho_traverse_unify_3_p_0(
  MR_Word Unification_4,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__merge_post_branch_infos_3_p_0(
  MR_Word PostA_4,
  MR_Word PostB_5,
  MR_Word * Post_6);

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
transform_hlds__higher_order__specialize_calls__set_post_branch_info_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__get_post_branch_info_for_goal_3_p_0(
  MR_Word Info_4,
  MR_Word Goal_5,
  MR_Word * PostBranchInfo_6);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__get_pre_branch_info_2_p_0(
  MR_Word Info_3,
  MR_Word * HeadVar__2_2);

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
transform_hlds__higher_order__specialize_calls__get_specialization_requests_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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


static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_1[10][2];

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_2[8][3];

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_3[1][8];

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_4[4][5];

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_5[3][6];

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_6[2][7];




static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_1[10][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[2]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]))
  },
  /* row   8 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_2[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0])),
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
    ((MR_Box) (transform_hlds__higher_order__specialize_calls__ho_traverse_disj_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__higher_order__specialize_calls__ho_traverse_cases_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__higher_order__specialize_calls__arg_contains_type_info_for_tvar_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_3[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_must_recompute_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
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
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__find_typeclass_info_components__1844__1_2_p_0(
  MR_Word TCIConstConsId_27,
  MR_Word HeadVar__2_38)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____cons_id_0_0(TCIConstConsId_27, HeadVar__2_38);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__arg_contains_type_info_for_tvar__1585__1_2_p_0(
  MR_Word LambdaHeadVar__1_23,
  MR_Word * LambdaHeadVar__2_24)
{
  MR_bool succeeded = ((MR_tag((MR_Word) LambdaHeadVar__1_23)) == (MR_Integer) 0);

  if (succeeded)
    *LambdaHeadVar__2_24 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_23, (MR_Integer) 0))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__find_matching_version__1477__1_3_p_0(
  MR_Word VarTable_26,
  MR_Word LambdaHeadVar__1_44,
  MR_Word * LambdaHeadVar__2_45)
{
  MR_Word T_54;

  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_26, LambdaHeadVar__1_44, &T_54);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_45 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (LambdaHeadVar__1_44));
    MR_hl_field(0, base, 1) = ((MR_Box) (T_54));
  }
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__merge_common_var_const_list__579__1_2_p_0(
  MR_Word VarA_22,
  MR_Word VarB_25)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), ((MR_Box) (VarA_22)), ((MR_Box) (VarB_25)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__merge_post_branch_infos_into_one__463__1_2_p_0(
  MR_Word LambdaHeadVar__1_16,
  MR_Word * LambdaHeadVar__2_17)
{
  MR_bool succeeded;
  MR_Word Var_18;

  *LambdaHeadVar__2_17 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_16, (MR_Integer) 0))));
  Var_18 = ((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_16, (MR_Integer) 1))) & (MR_Integer) 1);
  succeeded = (Var_18 == (MR_Integer) 0);
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
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_10_10 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[7]);
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[5]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      TypeInfo_11_11 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[5]);
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

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

  succeeded = transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__arg_contains_type_info_for_tvar__1585__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_24);
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
        MR_Word Type_9 = ((MR_Word) ((MR_hl_field(1, VarInfo_8, (MR_Integer) 0))));
        MR_Word TVar_10;

        succeeded = ((MR_tag((MR_Word) Type_9)) == (MR_Integer) 0);
        if (succeeded)
        {
          TVar_10 = ((MR_Word) ((MR_hl_field(0, Type_9, (MR_Integer) 0))));
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
        MR_Word Constraint_12 = ((MR_Word) ((MR_hl_field(2, VarInfo_8, (MR_Integer) 0))));
        MR_Word ClassArgTypes_14 = ((MR_Word) ((MR_hl_field(0, Constraint_12, (MR_Integer) 1))));
        MR_Word ClassTVars_18;

        mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[2]), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[7]), ClassArgTypes_14, &ClassTVars_18);
        *STATE_VARIABLE_TVars_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[2]), ClassTVars_18, STATE_VARIABLE_TVars_0_19);
      }
      break;
  }
}

void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_proc_5_p_0(
  MR_Word MustRecompute_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_GlobalInfo_0_16,
  MR_Word * STATE_VARIABLE_GlobalInfo_17)
{
  MR_bool succeeded;
  MR_Word Info0_10;
  MR_Word Info_11;
  MR_Word PredInfo_12;
  MR_Word ProcInfo_13;
  MR_Word ModuleInfo1_14;
  MR_Word ModuleInfo_15;
  MR_Word STATE_VARIABLE_GlobalInfo_18_18;
  MR_Word VersionInfoMap_19;
  MR_Word Goal0_25;
  MR_Word Goal_26;
  MR_Word Var_27;
  MR_Word STATE_VARIABLE_Info_18_29;
  MR_Word Var_30;
  MR_Word STATE_VARIABLE_Info_20_31;
  MR_Word KnownVarMap_23;
  MR_Word VersionInfo_20;
  MR_Word Var_28;
  MR_Box conv0_VersionInfo_20;

  Info0_10 = transform_hlds__higher_order__higher_order_info__hoi_init_3_f_0(STATE_VARIABLE_GlobalInfo_0_16, PredId_7, ProcId_8);
  Var_27 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(Info0_10);
  VersionInfoMap_19 = transform_hlds__higher_order__higher_order_global_info__hogi_get_version_info_map_1_f_0(Var_27);
  Var_28 = transform_hlds__higher_order__higher_order_info__hoi_get_pred_proc_id_1_f_0(Info0_10);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0), VersionInfoMap_19, ((MR_Box) (Var_28)), &conv0_VersionInfo_20);
  if (succeeded)
  {
    VersionInfo_20 = ((MR_Word) (conv0_VersionInfo_20));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    KnownVarMap_23 = ((MR_Word) ((MR_hl_field(0, VersionInfo_20, (MR_Integer) 2))));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_23, Info0_10, &STATE_VARIABLE_Info_18_29);
  else
    STATE_VARIABLE_Info_18_29 = Info0_10;
  Var_30 = transform_hlds__higher_order__higher_order_info__hoi_get_proc_info_1_f_0(STATE_VARIABLE_Info_18_29);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(Var_30, &Goal0_25);
  transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(Goal0_25, &Goal_26, STATE_VARIABLE_Info_18_29, &STATE_VARIABLE_Info_20_31);
  {
    MR_Word Var_41;

    Var_41 = transform_hlds__higher_order__higher_order_info__hoi_get_changed_1_f_0(STATE_VARIABLE_Info_20_31);
    succeeded = (Var_41 == (MR_Integer) 0);
  }
  if (!(succeeded))
    succeeded = (MustRecompute_6 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word ModuleInfo0_34;
    MR_Word InstMap_35;
    MR_Word VarTable_36;
    MR_Word InstVarSet_37;
    MR_Word ModuleInfo_38;
    MR_Word GlobalInfo1_39;
    MR_Word GlobalInfo_40;
    MR_Word Var_42;
    MR_Word STATE_VARIABLE_ProcInfo_21_43;
    MR_Word STATE_VARIABLE_ProcInfo_22_44;
    MR_Word STATE_VARIABLE_ProcInfo_24_46;
    MR_Word STATE_VARIABLE_Goal_25_47;
    MR_Word STATE_VARIABLE_Goal_27_49;
    MR_Word STATE_VARIABLE_ProcInfo_28_50;
    MR_Word STATE_VARIABLE_Info_29_51;

    Var_42 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_20_31);
    ModuleInfo0_34 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_42);
    STATE_VARIABLE_ProcInfo_21_43 = transform_hlds__higher_order__higher_order_info__hoi_get_proc_info_1_f_0(STATE_VARIABLE_Info_20_31);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_26, STATE_VARIABLE_ProcInfo_21_43, &STATE_VARIABLE_ProcInfo_22_44);
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_22_44, &STATE_VARIABLE_ProcInfo_24_46);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_24_46, &STATE_VARIABLE_Goal_25_47);
    hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(ModuleInfo0_34, STATE_VARIABLE_ProcInfo_24_46, &InstMap_35);
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_24_46, &VarTable_36);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(STATE_VARIABLE_ProcInfo_24_46, &InstVarSet_37);
    check_hlds__recompute_instmap_deltas__recompute_instmap_delta_8_p_0((MR_Integer) 1, VarTable_36, InstVarSet_37, InstMap_35, STATE_VARIABLE_Goal_25_47, &STATE_VARIABLE_Goal_27_49, ModuleInfo0_34, &ModuleInfo_38);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(STATE_VARIABLE_Goal_27_49, STATE_VARIABLE_ProcInfo_24_46, &STATE_VARIABLE_ProcInfo_28_50);
    transform_hlds__higher_order__higher_order_info__hoi_set_proc_info_3_p_0(STATE_VARIABLE_ProcInfo_28_50, STATE_VARIABLE_Info_20_31, &STATE_VARIABLE_Info_29_51);
    GlobalInfo1_39 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_29_51);
    transform_hlds__higher_order__higher_order_global_info__hogi_set_module_info_3_p_0(ModuleInfo_38, GlobalInfo1_39, &GlobalInfo_40);
    transform_hlds__higher_order__higher_order_info__hoi_set_global_info_3_p_0(GlobalInfo_40, STATE_VARIABLE_Info_29_51, &Info_11);
  }
  else
    Info_11 = STATE_VARIABLE_Info_20_31;
  transform_hlds__higher_order__higher_order_info__hoi_results_4_p_0(Info_11, &STATE_VARIABLE_GlobalInfo_18_18, &PredInfo_12, &ProcInfo_13);
  ModuleInfo1_14 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(STATE_VARIABLE_GlobalInfo_18_18);
  hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_7, ProcId_8, PredInfo_12, ProcInfo_13, ModuleInfo1_14, &ModuleInfo_15);
  transform_hlds__higher_order__higher_order_global_info__hogi_set_module_info_3_p_0(ModuleInfo_15, STATE_VARIABLE_GlobalInfo_18_18, STATE_VARIABLE_GlobalInfo_17);
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_cases_loop_7_p_0(
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
    MR_Word Case0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cases0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Case_18;
    MR_Word Cases_19;
    MR_Word MainConsId_22;
    MR_Word OtherConsIds_23;
    MR_Word Goal0_24;
    MR_Word Goal_25;
    MR_Word GoalPostInfo_26;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Word STATE_VARIABLE_PostInfos_33_33;
    MR_Word KnownVarMap_34 = (MR_Word) (PreInfo_1);
    MR_Word InstMapDelta_35;
    MR_Word Reachability_36;
    MR_Word Var_37;
    MR_Word Var_38;

    transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_34, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_31_31);
    MainConsId_22 = ((MR_Word) ((MR_hl_field(0, Case0_16, (MR_Integer) 0))));
    OtherConsIds_23 = ((MR_Word) ((MR_hl_field(0, Case0_16, (MR_Integer) 1))));
    Goal0_24 = ((MR_Word) ((MR_hl_field(0, Case0_16, (MR_Integer) 2))));
    transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(Goal0_24, &Goal_25, STATE_VARIABLE_Info_31_31, &STATE_VARIABLE_Info_32_32);
    {
      Case_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_18, 0) = ((MR_Box) (MainConsId_22));
      MR_hl_field(0, Case_18, 1) = ((MR_Box) (OtherConsIds_23));
      MR_hl_field(0, Case_18, 2) = ((MR_Box) (Goal_25));
    }
    Var_37 = ((MR_Word) ((MR_hl_field(0, Goal_25, (MR_Integer) 1))));
    InstMapDelta_35 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_37);
    succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_35);
    if (succeeded)
      Reachability_36 = (MR_Integer) 0;
    else
      Reachability_36 = (MR_Integer) 1;
    Var_38 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_32_32);
    {
      GoalPostInfo_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, GoalPostInfo_26, 0) = ((MR_Box) (Var_38));
      MR_hl_field(0, GoalPostInfo_26, 1) = (MR_Box) ((MR_Unsigned) (Reachability_36));
    }
    {
      STATE_VARIABLE_PostInfos_33_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_PostInfos_33_33, 0) = ((MR_Box) (GoalPostInfo_26));
      MR_hl_field(1, STATE_VARIABLE_PostInfos_33_33, 1) = ((MR_Box) (STATE_VARIABLE_PostInfos_0_4));
    }
    transform_hlds__higher_order__specialize_calls__ho_traverse_cases_loop_7_p_0(PreInfo_1, Cases0_17, &Cases_19, STATE_VARIABLE_PostInfos_33_33, STATE_VARIABLE_PostInfos_5, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_19));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_cases_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_17;

  succeeded = transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__merge_post_branch_infos_into_one__463__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_17);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_17));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_cases_4_p_0(
  MR_Word Cases0_5,
  MR_Word * Cases_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_bool succeeded;

  if ((Cases0_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.ho_traverse_cases\'/4", (MR_String) "empty list of cases");
      return;
    }
  else
  {
    MR_Word PreInfo_10;
    MR_Word PostInfos_11;
    MR_Word PostInfo_12;
    MR_Word STATE_VARIABLE_Info_18_18;
    MR_Word Var_19;
    MR_Word KnownVarMap_34;

    Var_19 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_0_13);
    PreInfo_10 = (MR_Word) (Var_19);
    transform_hlds__higher_order__specialize_calls__ho_traverse_cases_loop_7_p_0(PreInfo_10, Cases0_5, Cases_6, (MR_Word) ((MR_Unsigned) 0U), &PostInfos_11, STATE_VARIABLE_Info_0_13, &STATE_VARIABLE_Info_18_18);
    if ((PostInfos_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.merge_post_branch_infos_into_one\'/2", (MR_String) "PostInfos = []");
        return;
      }
    else
    {
      MR_Word ReachableVarMaps_21;

      mercury__list__filter_map_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_post_branch_info_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[0]), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[6]), PostInfos_11, &ReachableVarMaps_21);
      if ((ReachableVarMaps_21 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_27;

        Var_27 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0));
        {
          PostInfo_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PostInfo_12, 0) = ((MR_Box) (Var_27));
          MR_hl_field(0, PostInfo_12, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
      }
      else
      {
        MR_Word HeadVarMap_22 = ((MR_Word) ((MR_hl_field(1, ReachableVarMaps_21, (MR_Integer) 0))));
        MR_Word TailVarMaps_23 = ((MR_Word) ((MR_hl_field(1, ReachableVarMaps_21, (MR_Integer) 1))));
        MR_Word MergedVarMap_24;

        transform_hlds__higher_order__specialize_calls__merge_post_branch_var_maps_passes_3_p_0(HeadVarMap_22, TailVarMaps_23, &MergedVarMap_24);
        {
          PostInfo_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PostInfo_12, 0) = ((MR_Box) (MergedVarMap_24));
          MR_hl_field(0, PostInfo_12, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
      }
    }
    KnownVarMap_34 = ((MR_Word) ((MR_hl_field(0, PostInfo_12, (MR_Integer) 0))));
    transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_34, STATE_VARIABLE_Info_18_18, STATE_VARIABLE_Info_14);
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_disj_loop_7_p_0(
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
    MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_18;
    MR_Word Goals_19;
    MR_Word GoalPostInfo_22;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word STATE_VARIABLE_Info_28_28;
    MR_Word STATE_VARIABLE_PostInfos_29_29;
    MR_Word KnownVarMap_30 = (MR_Word) (PreInfo_1);
    MR_Word InstMapDelta_31;
    MR_Word Reachability_32;
    MR_Word Var_33;
    MR_Word Var_34;

    transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_30, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_27_27);
    transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(Goal0_16, &Goal_18, STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_28_28);
    Var_33 = ((MR_Word) ((MR_hl_field(0, Goal_18, (MR_Integer) 1))));
    InstMapDelta_31 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_33);
    succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_31);
    if (succeeded)
      Reachability_32 = (MR_Integer) 0;
    else
      Reachability_32 = (MR_Integer) 1;
    Var_34 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_28_28);
    {
      GoalPostInfo_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, GoalPostInfo_22, 0) = ((MR_Box) (Var_34));
      MR_hl_field(0, GoalPostInfo_22, 1) = (MR_Box) ((MR_Unsigned) (Reachability_32));
    }
    {
      STATE_VARIABLE_PostInfos_29_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_PostInfos_29_29, 0) = ((MR_Box) (GoalPostInfo_22));
      MR_hl_field(1, STATE_VARIABLE_PostInfos_29_29, 1) = ((MR_Box) (STATE_VARIABLE_PostInfos_0_4));
    }
    transform_hlds__higher_order__specialize_calls__ho_traverse_disj_loop_7_p_0(PreInfo_1, Goals0_17, &Goals_19, STATE_VARIABLE_PostInfos_29_29, STATE_VARIABLE_PostInfos_5, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_7);
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
transform_hlds__higher_order__specialize_calls__ho_traverse_disj_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_17;

  succeeded = transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__merge_post_branch_infos_into_one__463__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_17);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_17));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_disj_4_p_0(
  MR_Word Goals0_5,
  MR_Word * Goals_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_bool succeeded;

  if ((Goals0_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Goals_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
  }
  else
  {
    MR_Word PreInfo_10;
    MR_Word PostInfos_11;
    MR_Word PostInfo_12;
    MR_Word STATE_VARIABLE_Info_16_16;
    MR_Word Var_17;
    MR_Word KnownVarMap_32;

    Var_17 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_0_13);
    PreInfo_10 = (MR_Word) (Var_17);
    transform_hlds__higher_order__specialize_calls__ho_traverse_disj_loop_7_p_0(PreInfo_10, Goals0_5, Goals_6, (MR_Word) ((MR_Unsigned) 0U), &PostInfos_11, STATE_VARIABLE_Info_0_13, &STATE_VARIABLE_Info_16_16);
    if ((PostInfos_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.merge_post_branch_infos_into_one\'/2", (MR_String) "PostInfos = []");
        return;
      }
    else
    {
      MR_Word ReachableVarMaps_19;

      mercury__list__filter_map_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_post_branch_info_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[0]), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[5]), PostInfos_11, &ReachableVarMaps_19);
      if ((ReachableVarMaps_19 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_25;

        Var_25 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0));
        {
          PostInfo_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PostInfo_12, 0) = ((MR_Box) (Var_25));
          MR_hl_field(0, PostInfo_12, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
      }
      else
      {
        MR_Word HeadVarMap_20 = ((MR_Word) ((MR_hl_field(1, ReachableVarMaps_19, (MR_Integer) 0))));
        MR_Word TailVarMaps_21 = ((MR_Word) ((MR_hl_field(1, ReachableVarMaps_19, (MR_Integer) 1))));
        MR_Word MergedVarMap_22;

        transform_hlds__higher_order__specialize_calls__merge_post_branch_var_maps_passes_3_p_0(HeadVarMap_20, TailVarMaps_21, &MergedVarMap_22);
        {
          PostInfo_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PostInfo_12, 0) = ((MR_Box) (MergedVarMap_22));
          MR_hl_field(0, PostInfo_12, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
      }
    }
    KnownVarMap_32 = ((MR_Word) ((MR_hl_field(0, PostInfo_12, (MR_Integer) 0))));
    transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_32, STATE_VARIABLE_Info_16_16, STATE_VARIABLE_Info_14);
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
    MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_18;
    MR_Word Goals_19;
    MR_Word GoalPostInfo_22;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word STATE_VARIABLE_Info_28_28;
    MR_Word STATE_VARIABLE_PostInfos_29_29;
    MR_Word KnownVarMap_30 = (MR_Word) (PreInfo_1);
    MR_Word InstMapDelta_31;
    MR_Word Reachability_32;
    MR_Word Var_33;
    MR_Word Var_34;

    transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_30, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_27_27);
    transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(Goal0_16, &Goal_18, STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_28_28);
    Var_33 = ((MR_Word) ((MR_hl_field(0, Goal_18, (MR_Integer) 1))));
    InstMapDelta_31 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_33);
    succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_31);
    if (succeeded)
      Reachability_32 = (MR_Integer) 0;
    else
      Reachability_32 = (MR_Integer) 1;
    Var_34 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_28_28);
    {
      GoalPostInfo_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, GoalPostInfo_22, 0) = ((MR_Box) (Var_34));
      MR_hl_field(0, GoalPostInfo_22, 1) = (MR_Box) ((MR_Unsigned) (Reachability_32));
    }
    {
      STATE_VARIABLE_PostInfos_29_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_PostInfos_29_29, 0) = ((MR_Box) (GoalPostInfo_22));
      MR_hl_field(1, STATE_VARIABLE_PostInfos_29_29, 1) = ((MR_Box) (STATE_VARIABLE_PostInfos_0_4));
    }
    transform_hlds__higher_order__specialize_calls__ho_traverse_parallel_conj_loop_7_p_0(PreInfo_1, Goals0_17, &Goals_19, STATE_VARIABLE_PostInfos_29_29, STATE_VARIABLE_PostInfos_5, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_19));
    }
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
  MR_Word conv0_STATE_VARIABLE_Info_82;

  transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Goal_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_82);
  *wrapper_arg_2 = ((MR_Box) (conv1_Goal_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_82));
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_81,
  MR_Word * STATE_VARIABLE_Info_82)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 0))));
  MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) GoalExpr0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_49 = (MR_Word) ((MR_Word) (GoalExpr0_8));
        MR_Word SubGoal_50;
        MR_Word GoalExpr_113;

        transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(SubGoal0_49, &SubGoal_50, STATE_VARIABLE_Info_0_81, STATE_VARIABLE_Info_82);
        GoalExpr_113 = (MR_Word) ((MR_Word) (SubGoal_50));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_113));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unification0_64 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 3))));
        MR_Word STATE_VARIABLE_Info_99_99;
        MR_Word Var_98;
        MR_Word Unification_77;
        MR_Word Var_100;

        succeeded = ((MR_tag((MR_Word) Unification0_64)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_98 = ((MR_Word) ((MR_hl_field(0, Unification0_64, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) Var_98)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_98, (MR_Integer) 0)))) == (MR_Integer) 4)));
          if (succeeded)
          {
          }
        }
        if (succeeded)
          transform_hlds__higher_order__specialize_calls__maybe_specialize_pred_const_4_p_0(Goal0_5, Goal_6, STATE_VARIABLE_Info_0_81, &STATE_VARIABLE_Info_99_99);
        else
        {
          *Goal_6 = Goal0_5;
          STATE_VARIABLE_Info_99_99 = STATE_VARIABLE_Info_0_81;
        }
        Var_100 = ((MR_Word) ((MR_hl_field(0, *Goal_6, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_100)) == (MR_Integer) 1);
        if (succeeded)
        {
          Unification_77 = ((MR_Word) ((MR_hl_field(1, Var_100, (MR_Integer) 3))));
          transform_hlds__higher_order__specialize_calls__ho_traverse_unify_3_p_0(Unification_77, STATE_VARIABLE_Info_99_99, STATE_VARIABLE_Info_82);
        }
        else
          *STATE_VARIABLE_Info_82 = STATE_VARIABLE_Info_99_99;
      }
      break;
    case (MR_Integer) 2:
      transform_hlds__higher_order__specialize_calls__maybe_specialize_call_4_p_0(Goal0_5, Goal_6, STATE_VARIABLE_Info_0_81, STATE_VARIABLE_Info_82);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word Args_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) GenericCall_18)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_108 = ((MR_Word) ((MR_hl_field(0, GenericCall_18, (MR_Integer) 0))));

                  transform_hlds__higher_order__specialize_calls__maybe_specialize_higher_order_call_6_p_0(Var_108, Args_19, Goal0_5, Goal_6, STATE_VARIABLE_Info_0_81, STATE_VARIABLE_Info_82);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Method_26 = ((MR_Word) ((MR_hl_field(1, GenericCall_18, (MR_Integer) 1))));
                  MR_Word Var_109 = ((MR_Word) ((MR_hl_field(1, GenericCall_18, (MR_Integer) 0))));

                  transform_hlds__higher_order__specialize_calls__maybe_specialize_method_call_7_p_0(Var_109, Method_26, Args_19, Goal0_5, Goal_6, STATE_VARIABLE_Info_0_81, STATE_VARIABLE_Info_82);
                }
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                {
                  *Goal_6 = Goal0_5;
                  *STATE_VARIABLE_Info_82 = STATE_VARIABLE_Info_0_81;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            *Goal_6 = Goal0_5;
            *STATE_VARIABLE_Info_82 = STATE_VARIABLE_Info_0_81;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_10 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word Goals_12;
            MR_Word GoalExpr_13;

            switch (ConjType_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                if ((Goals0_11 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.ho_traverse_parallel_conj\'/4", (MR_String) "empty list");
                    return;
                  }
                else
                {
                  MR_Word PreInfo_128;
                  MR_Word PostInfos_129;
                  MR_Word PostInfo_130;
                  MR_Word STATE_VARIABLE_Info_18_134;

                  transform_hlds__higher_order__specialize_calls__get_pre_branch_info_2_p_0(STATE_VARIABLE_Info_0_81, &PreInfo_128);
                  transform_hlds__higher_order__specialize_calls__ho_traverse_parallel_conj_loop_7_p_0(PreInfo_128, Goals0_11, &Goals_12, (MR_Word) ((MR_Unsigned) 0U), &PostInfos_129, STATE_VARIABLE_Info_0_81, &STATE_VARIABLE_Info_18_134);
                  transform_hlds__higher_order__specialize_calls__merge_post_branch_infos_into_one_2_p_0(PostInfos_129, &PostInfo_130);
                  transform_hlds__higher_order__specialize_calls__set_post_branch_info_3_p_0(PostInfo_130, STATE_VARIABLE_Info_18_134, STATE_VARIABLE_Info_82);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Box conv2_STATE_VARIABLE_Info_82;

                  mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__type_ctor_info_higher_order_info_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[4]), Goals0_11, &Goals_12, ((MR_Box) (STATE_VARIABLE_Info_0_81)), &conv2_STATE_VARIABLE_Info_82);
                  *STATE_VARIABLE_Info_82 = ((MR_Word) (conv2_STATE_VARIABLE_Info_82));
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
            MR_Word Goals0_104 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word Goals_105;
            MR_Word GoalExpr_106;

            transform_hlds__higher_order__specialize_calls__ho_traverse_disj_4_p_0(Goals0_104, &Goals_105, STATE_VARIABLE_Info_0_81, STATE_VARIABLE_Info_82);
            {
              GoalExpr_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_106, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_106, 1) = ((MR_Box) (Goals_105));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_106));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word CanFail_15 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 3))));
            MR_Word Cases_17;
            MR_Word GoalExpr_107;

            transform_hlds__higher_order__specialize_calls__ho_traverse_cases_4_p_0(Cases0_16, &Cases_17, STATE_VARIABLE_Info_0_81, STATE_VARIABLE_Info_82);
            {
              GoalExpr_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_107, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_107, 1) = ((MR_Box) (Var_14));
              MR_hl_field(3, GoalExpr_107, 2) = (MR_Box) ((MR_Unsigned) (CanFail_15));
              MR_hl_field(3, GoalExpr_107, 3) = ((MR_Box) (Cases_17));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_107));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word SubGoal0_119 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word FGT_53;

            succeeded = ((((MR_tag((MR_Word) Reason_51)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_51, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              FGT_53 = ((MR_Unsigned) ((MR_hl_field(3, Reason_51, (MR_Integer) 2))) & (MR_Integer) 3);
              switch (FGT_53) {
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
              *STATE_VARIABLE_Info_82 = STATE_VARIABLE_Info_0_81;
            }
            else
            {
              MR_Word GoalExpr_114;
              MR_Word SubGoal_115;

              transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(SubGoal0_119, &SubGoal_115, STATE_VARIABLE_Info_0_81, STATE_VARIABLE_Info_82);
              {
                GoalExpr_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_114, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_114, 1) = ((MR_Box) (Reason_51));
                MR_hl_field(3, GoalExpr_114, 2) = ((MR_Box) (SubGoal_115));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_114));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word Cond0_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word Then0_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 3))));
            MR_Word Else0_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 4))));
            MR_Word PreInfo_42;
            MR_Word Cond_43;
            MR_Word Then_44;
            MR_Word PostThenInfo_45;
            MR_Word Else_46;
            MR_Word PostElseInfo_47;
            MR_Word PostInfo_48;
            MR_Word STATE_VARIABLE_Info_91_91;
            MR_Word STATE_VARIABLE_Info_92_92;
            MR_Word STATE_VARIABLE_Info_93_93;
            MR_Word STATE_VARIABLE_Info_94_94;
            MR_Word GoalExpr_112;
            MR_Word Var_135;
            MR_Word KnownVarMap_136;
            MR_Word KnownVarMap_137;

            Var_135 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_0_81);
            PreInfo_42 = (MR_Word) (Var_135);
            transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(Cond0_39, &Cond_43, STATE_VARIABLE_Info_0_81, &STATE_VARIABLE_Info_91_91);
            transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(Then0_40, &Then_44, STATE_VARIABLE_Info_91_91, &STATE_VARIABLE_Info_92_92);
            transform_hlds__higher_order__specialize_calls__get_post_branch_info_for_goal_3_p_0(STATE_VARIABLE_Info_92_92, Then_44, &PostThenInfo_45);
            KnownVarMap_136 = (MR_Word) (PreInfo_42);
            transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_136, STATE_VARIABLE_Info_92_92, &STATE_VARIABLE_Info_93_93);
            transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(Else0_41, &Else_46, STATE_VARIABLE_Info_93_93, &STATE_VARIABLE_Info_94_94);
            transform_hlds__higher_order__specialize_calls__get_post_branch_info_for_goal_3_p_0(STATE_VARIABLE_Info_94_94, Else_46, &PostElseInfo_47);
            transform_hlds__higher_order__specialize_calls__merge_post_branch_infos_3_p_0(PostThenInfo_45, PostElseInfo_47, &PostInfo_48);
            KnownVarMap_137 = ((MR_Word) ((MR_hl_field(0, PostInfo_48, (MR_Integer) 0))));
            transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_137, STATE_VARIABLE_Info_94_94, STATE_VARIABLE_Info_82);
            {
              GoalExpr_112 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_112, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_112, 1) = ((MR_Box) (Vars_38));
              MR_hl_field(3, GoalExpr_112, 2) = ((MR_Box) (Cond_43));
              MR_hl_field(3, GoalExpr_112, 3) = ((MR_Box) (Then_44));
              MR_hl_field(3, GoalExpr_112, 4) = ((MR_Box) (Else_46));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_112));
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
  MR_Word conv1_STATE_VARIABLE_Info_82;

  transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(((MR_Word) (wrapper_arg_1)), &conv2_Goal_6, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Info_82);
  *wrapper_arg_2 = ((MR_Box) (conv2_Goal_6));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Info_82));
}

static MR_Box MR_CALL 
transform_hlds__higher_order__specialize_calls__maybe_specialize_pred_const_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__higher_order__higher_order_global_info__mode_both_sides_to_unify_mode_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__maybe_specialize_pred_const_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_73,
  MR_Word * STATE_VARIABLE_Info_74)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word GoalInfo_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word GoalExpr_7;
  MR_Word GlobalInfo0_9;
  MR_Word ModuleInfo_10;
  MR_Word NewPredMap_11;
  MR_Word ProcInfo0_12;
  MR_Word UniMode_15;
  MR_Word Context_17;
  MR_Word LVar_18;
  MR_Word Args0_20;
  MR_Word HowToConstruct_22;
  MR_Word CellIsUnique_23;
  MR_Word PredId_28;
  MR_Integer ProcId_29;
  MR_Word ArgTypes_35;
  MR_Word TypeCtorInfo_97_97;
  MR_Word TypeInfo_98_98;
  MR_Word Unify0_16;
  MR_Word ConsId0_19;
  MR_Word SubInfo_24;
  MR_Word ShroudedPredProcId_25;
  MR_Word PredProcId_27;
  MR_Word VarTable0_30;
  MR_Word LVarType_31;
  MR_Word Var_32;
  MR_Word Var_33;

  GlobalInfo0_9 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_0_73);
  ModuleInfo_10 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(GlobalInfo0_9);
  NewPredMap_11 = transform_hlds__higher_order__higher_order_global_info__hogi_get_new_pred_map_1_f_0(GlobalInfo0_9);
  ProcInfo0_12 = transform_hlds__higher_order__higher_order_info__hoi_get_proc_info_1_f_0(STATE_VARIABLE_Info_0_73);
  succeeded = ((MR_tag((MR_Word) GoalExpr0_5)) == (MR_Integer) 1);
  if (succeeded)
  {
    UniMode_15 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_5, (MR_Integer) 2))));
    Unify0_16 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_5, (MR_Integer) 3))));
    Context_17 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_5, (MR_Integer) 4))));
    succeeded = ((MR_tag((MR_Word) Unify0_16)) == (MR_Integer) 0);
    if (succeeded)
    {
      LVar_18 = ((MR_Word) ((MR_hl_field(0, Unify0_16, (MR_Integer) 0))));
      ConsId0_19 = ((MR_Word) ((MR_hl_field(0, Unify0_16, (MR_Integer) 1))));
      Args0_20 = ((MR_Word) ((MR_hl_field(0, Unify0_16, (MR_Integer) 2))));
      HowToConstruct_22 = ((MR_Word) ((MR_hl_field(0, Unify0_16, (MR_Integer) 4))));
      CellIsUnique_23 = ((MR_Unsigned) ((MR_hl_field(0, Unify0_16, (MR_Integer) 5))) & (MR_Integer) 1);
      SubInfo_24 = ((MR_Word) ((MR_hl_field(0, Unify0_16, (MR_Integer) 6))));
      if ((SubInfo_24 == (MR_Word) ((MR_Unsigned) 0U)))
        succeeded = MR_TRUE;
      else
      {
        MR_Word Var_75 = ((MR_Word) ((MR_hl_field(1, SubInfo_24, (MR_Integer) 0))));
        MR_Word Var_76 = ((MR_Word) ((MR_hl_field(1, SubInfo_24, (MR_Integer) 1))));

        succeeded = (Var_75 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (Var_76 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) ConsId0_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId0_19, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (succeeded)
        {
          ShroudedPredProcId_25 = ((MR_Word) ((MR_hl_field(3, ConsId0_19, (MR_Integer) 1))));
          PredProcId_27 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_25);
          PredId_28 = ((MR_Word) ((MR_hl_field(0, PredProcId_27, (MR_Integer) 0))));
          ProcId_29 = ((MR_Integer) ((MR_hl_field(0, PredProcId_27, (MR_Integer) 1))));
          TypeCtorInfo_97_97 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
          TypeInfo_98_98 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[3]);
          succeeded = mercury__map__contains_2_p_0(TypeCtorInfo_97_97, TypeInfo_98_98, NewPredMap_11, ((MR_Box) (PredProcId_27)));
          if (succeeded)
          {
            hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_12, &VarTable0_30);
            parse_tree__var_table__lookup_var_type_3_p_0(VarTable0_30, LVar_18, &LVarType_31);
            succeeded = parse_tree__prog_type_test__type_is_higher_order_details_5_p_0(LVarType_31, &Var_32, &Var_33, &ArgTypes_35);
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word UncurriedArgs_36;
    MR_Word ProcInfo1_37;
    MR_Word Args1_38;
    MR_Word CalleePredInfo_39;
    MR_Word CalleeProcInfo_40;
    MR_Word Result_43;
    MR_Word STATE_VARIABLE_Info_77_77;
    MR_Word STATE_VARIABLE_Info_79_79;

    hlds__hlds_proc_util__proc_info_create_vars_from_types_5_p_0(ModuleInfo_10, ArgTypes_35, &UncurriedArgs_36, ProcInfo0_12, &ProcInfo1_37);
    Args1_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), Args0_20, UncurriedArgs_36);
    transform_hlds__higher_order__higher_order_info__hoi_set_proc_info_3_p_0(ProcInfo1_37, STATE_VARIABLE_Info_0_73, &STATE_VARIABLE_Info_77_77);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_10, PredId_28, ProcId_29, &CalleePredInfo_39, &CalleeProcInfo_40);
    transform_hlds__higher_order__specialize_calls__maybe_specialize_ordinary_call_12_p_0((MR_Integer) 1, PredId_28, ProcId_29, CalleePredInfo_39, CalleeProcInfo_40, Args1_38, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), GoalInfo_6, &Result_43, STATE_VARIABLE_Info_77_77, &STATE_VARIABLE_Info_79_79);
    if ((Result_43 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      transform_hlds__higher_order__higher_order_info__hoi_set_proc_info_3_p_0(ProcInfo0_12, STATE_VARIABLE_Info_79_79, STATE_VARIABLE_Info_74);
      GoalExpr_7 = GoalExpr0_5;
    }
    else
    {
      MR_Word ExtraTypeInfoGoals0_44 = ((MR_Word) ((MR_hl_field(1, Result_43, (MR_Integer) 0))));
      MR_Word GoalExpr1_45 = ((MR_Word) ((MR_hl_field(1, Result_43, (MR_Integer) 1))));
      MR_Word NewPredId_53;
      MR_Integer NewProcId_54;
      MR_Word NewArgs_55;
      MR_Word NewCalleeProcInfo_56;
      MR_Word NewCalleeArgModes_57;
      MR_Word CurriedArgModes_59;
      MR_Word ArgModes_60;
      MR_Word ProcInfo2_61;
      MR_Word VarTable2_62;
      MR_Word VarTable_63;
      MR_Word ProcInfo_64;
      MR_Word NewPredProcId_65;
      MR_Word NewShroudedPredProcId_66;
      MR_Word NewConsId_67;
      MR_Word Unify_68;
      MR_Word GoalExpr2_69;
      MR_Word ExtraTypeInfoGoals_70;
      MR_Word Var_85;
      MR_Word STATE_VARIABLE_Info_86_86;
      MR_Word Var_88;
      MR_Word NewPredId0_46;
      MR_Integer NewProcId0_47;
      MR_Word NewArgs1_52;
      MR_Word NewArgs0_48;
      MR_Word CurriedArgModesPrime_58;
      MR_Integer Var_82;
      MR_Box conv3_STATE_VARIABLE_Info_74;

      succeeded = ((MR_tag((MR_Word) GoalExpr1_45)) == (MR_Integer) 2);
      if (succeeded)
      {
        NewPredId0_46 = ((MR_Word) ((MR_hl_field(2, GoalExpr1_45, (MR_Integer) 0))));
        NewProcId0_47 = ((MR_Integer) ((MR_hl_field(2, GoalExpr1_45, (MR_Integer) 1))));
        NewArgs0_48 = ((MR_Word) ((MR_hl_field(2, GoalExpr1_45, (MR_Integer) 2))));
        succeeded = mercury__list__remove_suffix_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), NewArgs0_48, UncurriedArgs_36, &NewArgs1_52);
      }
      if (succeeded)
      {
        NewPredId_53 = NewPredId0_46;
        NewProcId_54 = NewProcId0_47;
        NewArgs_55 = NewArgs1_52;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.maybe_specialize_pred_const\'/4", (MR_String) "cannot get NewArgs");
          return;
        }
      hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_10, NewPredId_53, NewProcId_54, &NewCalleeProcInfo_56);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(NewCalleeProcInfo_56, &NewCalleeArgModes_57);
      Var_82 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), NewArgs_55);
      succeeded = mercury__list__take_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_82, NewCalleeArgModes_57, &CurriedArgModesPrime_58);
      if (succeeded)
        CurriedArgModes_59 = CurriedArgModesPrime_58;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.maybe_specialize_pred_const\'/4", (MR_String) "cannot get CurriedArgModes");
          return;
        }
      {
        Var_85 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_85, 0) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_5[2]));
        MR_hl_field(0, Var_85, 1) = ((MR_Box) (transform_hlds__higher_order__specialize_calls__maybe_specialize_pred_const_4_p_0_1));
        MR_hl_field(0, Var_85, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_85, 3) = ((MR_Box) (ModuleInfo_10));
      }
      ArgModes_60 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), Var_85, CurriedArgModes_59);
      ProcInfo2_61 = transform_hlds__higher_order__higher_order_info__hoi_get_proc_info_1_f_0(STATE_VARIABLE_Info_79_79);
      hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo2_61, &VarTable2_62);
      parse_tree__var_table__delete_var_entries_3_p_0(UncurriedArgs_36, VarTable2_62, &VarTable_63);
      hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_63, ProcInfo2_61, &ProcInfo_64);
      transform_hlds__higher_order__higher_order_info__hoi_set_proc_info_3_p_0(ProcInfo_64, STATE_VARIABLE_Info_79_79, &STATE_VARIABLE_Info_86_86);
      {
        NewPredProcId_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NewPredProcId_65, 0) = ((MR_Box) (NewPredId_53));
        MR_hl_field(0, NewPredProcId_65, 1) = ((MR_Box) (NewProcId_54));
      }
      NewShroudedPredProcId_66 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(NewPredProcId_65);
      {
        NewConsId_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, NewConsId_67, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, NewConsId_67, 1) = ((MR_Box) (NewShroudedPredProcId_66));
        MR_hl_field(3, NewConsId_67, 2) = NULL;
      }
      {
        Unify_68 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Unify_68, 0) = ((MR_Box) (LVar_18));
        MR_hl_field(0, Unify_68, 1) = ((MR_Box) (NewConsId_67));
        MR_hl_field(0, Unify_68, 2) = ((MR_Box) (NewArgs_55));
        MR_hl_field(0, Unify_68, 3) = ((MR_Box) (ArgModes_60));
        MR_hl_field(0, Unify_68, 4) = ((MR_Box) (HowToConstruct_22));
        MR_hl_field(0, Unify_68, 5) = (MR_Box) ((MR_Unsigned) (CellIsUnique_23));
        MR_hl_field(0, Unify_68, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_88, 0) = ((MR_Box) (NewConsId_67));
        MR_hl_field(1, Var_88, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(1, Var_88, 2) = ((MR_Box) (NewArgs_55));
      }
      {
        GoalExpr2_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, GoalExpr2_69, 0) = ((MR_Box) (LVar_18));
        MR_hl_field(1, GoalExpr2_69, 1) = ((MR_Box) (Var_88));
        MR_hl_field(1, GoalExpr2_69, 2) = ((MR_Box) (UniMode_15));
        MR_hl_field(1, GoalExpr2_69, 3) = ((MR_Box) (Unify_68));
        MR_hl_field(1, GoalExpr2_69, 4) = ((MR_Box) (Context_17));
      }
      mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__type_ctor_info_higher_order_info_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[3]), ExtraTypeInfoGoals0_44, &ExtraTypeInfoGoals_70, ((MR_Box) (STATE_VARIABLE_Info_86_86)), &conv3_STATE_VARIABLE_Info_74);
      *STATE_VARIABLE_Info_74 = ((MR_Word) (conv3_STATE_VARIABLE_Info_74));
      if ((ExtraTypeInfoGoals_70 == (MR_Word) ((MR_Unsigned) 0U)))
        GoalExpr_7 = GoalExpr2_69;
      else
      {
        MR_Word Var_93;
        MR_Word Var_94;
        MR_Word Var_95;

        {
          Var_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_95, 0) = ((MR_Box) (GoalExpr2_69));
          MR_hl_field(0, Var_95, 1) = ((MR_Box) (GoalInfo_6));
        }
        {
          Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
          MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraTypeInfoGoals_70, Var_94);
        {
          GoalExpr_7 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, GoalExpr_7, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, GoalExpr_7, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, GoalExpr_7, 2) = ((MR_Box) (Var_93));
        }
      }
    }
  }
  else
  {
    GoalExpr_7 = GoalExpr0_5;
    *STATE_VARIABLE_Info_74 = STATE_VARIABLE_Info_0_73;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_6));
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__maybe_specialize_call_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word GoalInfo_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word GoalExpr_7;
  MR_Word ModuleInfo0_9;
  MR_Word CalledPred_10;
  MR_Integer CalledProc_11;
  MR_Word Args0_12;
  MR_Word IsBuiltin_13;
  MR_Word MaybeContext_14;
  MR_Word CalleePredInfo_16;
  MR_Word CalleeProcInfo_17;
  MR_Word Var_31;
  MR_Word GoalExpr1_18;
  MR_Word STATE_VARIABLE_Info_32_32;

  Var_31 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_0_29);
  ModuleInfo0_9 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_31);
  CalledPred_10 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_5, (MR_Integer) 0))));
  CalledProc_11 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_5, (MR_Integer) 1))));
  Args0_12 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_5, (MR_Integer) 2))));
  IsBuiltin_13 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_5, (MR_Integer) 3))) & (MR_Integer) 1);
  MaybeContext_14 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_5, (MR_Integer) 4))));
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo0_9, CalledPred_10, CalledProc_11, &CalleePredInfo_16, &CalleeProcInfo_17);
  succeeded = transform_hlds__higher_order__specialize_unify_compare__specialize_call_to_unify_or_compare_8_p_0(CalledPred_10, CalledProc_11, Args0_12, MaybeContext_14, GoalInfo_6, &GoalExpr1_18, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_32_32);
  if (succeeded)
  {
    GoalExpr_7 = GoalExpr1_18;
    transform_hlds__higher_order__higher_order_info__hoi_set_changed_3_p_0((MR_Integer) 0, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_30);
  }
  else
  {
    MR_Word Manipulator_19;
    MR_Word PredInfo_46;
    MR_String PredName_47;
    MR_Word Var_48;
    MR_Word Var_49;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo0_9, CalledPred_10, &PredInfo_46);
    Var_48 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    Var_49 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_46);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_48, Var_49);
    if (succeeded)
    {
      PredName_47 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_46);
      if ((strcmp(PredName_47, (MR_String) "type_info_from_typeclass_info") == 0))
      {
        Manipulator_19 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(PredName_47, (MR_String) "superclass_from_typeclass_info") == 0))
      {
        Manipulator_19 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(PredName_47, (MR_String) "instance_constraint_from_typeclass_info") == 0))
      {
        Manipulator_19 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
    }
    if (succeeded)
      transform_hlds__higher_order__specialize_calls__interpret_typeclass_info_manipulator_6_p_0(Manipulator_19, Args0_12, GoalExpr0_5, &GoalExpr_7, STATE_VARIABLE_Info_0_29, STATE_VARIABLE_Info_30);
    else
    {
      {
        MR_Word TypeSpecInfo_20;
        MR_Word TypeSpecProcs_21;
        MR_Word TypeCtorInfo_42_42;
        MR_Word Var_36;

        succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(CalleePredInfo_16);
        if (succeeded)
        {
          hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo0_9, &TypeSpecInfo_20);
          TypeSpecProcs_21 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo_20, (MR_Integer) 0))));
          TypeCtorInfo_42_42 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
          {
            Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_36, 0) = ((MR_Box) (CalledPred_10));
            MR_hl_field(0, Var_36, 1) = ((MR_Box) (CalledProc_11));
          }
          succeeded = mercury__set__member_2_p_0(TypeCtorInfo_42_42, ((MR_Box) (Var_36)), TypeSpecProcs_21);
          succeeded = !(succeeded);
        }
      }
      if (!(succeeded))
      {
        {
          MR_Integer Var_44;

          succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(CalleePredInfo_16);
          if (succeeded)
          {
            hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_44);
            succeeded = (CalledProc_11 == Var_44);
          }
        }
        if (!(succeeded))
          succeeded = hlds__hlds_pred__pred_info_defn_has_foreign_proc_1_p_0(CalleePredInfo_16);
      }
      if (succeeded)
      {
        GoalExpr_7 = GoalExpr0_5;
        *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
      }
      else
      {
        MR_Word Result_25;

        transform_hlds__higher_order__specialize_calls__maybe_specialize_ordinary_call_12_p_0((MR_Integer) 0, CalledPred_10, CalledProc_11, CalleePredInfo_16, CalleeProcInfo_17, Args0_12, IsBuiltin_13, MaybeContext_14, GoalInfo_6, &Result_25, STATE_VARIABLE_Info_0_29, STATE_VARIABLE_Info_30);
        if ((Result_25 == (MR_Word) ((MR_Unsigned) 0U)))
          GoalExpr_7 = GoalExpr0_5;
        else
        {
          MR_Word ExtraTypeInfoGoals_26 = ((MR_Word) ((MR_hl_field(1, Result_25, (MR_Integer) 0))));
          MR_Word GoalList1_27;
          MR_Word GoalList_28;
          MR_Word Var_39;
          MR_Word GoalExpr1_41 = ((MR_Word) ((MR_hl_field(1, Result_25, (MR_Integer) 1))));

          {
            Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_39, 0) = ((MR_Box) (GoalExpr1_41));
            MR_hl_field(0, Var_39, 1) = ((MR_Box) (GoalInfo_6));
          }
          hlds__hlds_goal__goal_to_conj_list_2_p_0(Var_39, &GoalList1_27);
          GoalList_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraTypeInfoGoals_26, GoalList1_27);
          {
            GoalExpr_7 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, GoalExpr_7, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, GoalExpr_7, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, GoalExpr_7, 2) = ((MR_Box) (GoalList_28));
          }
        }
      }
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_6));
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
  MR_Word GoalInfo0_16 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 1))));
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
  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), KnownVarMap0_18, ((MR_Box) (TypeClassInfoVar_8)), &conv0_Var_75);
  if (succeeded)
  {
    Var_75 = ((MR_Word) (conv0_Var_75));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    ConsId_19 = ((MR_Word) ((MR_hl_field(0, Var_75, (MR_Integer) 0))));
    TCIArgs_20 = ((MR_Word) ((MR_hl_field(0, Var_75, (MR_Integer) 1))));
    succeeded = (ConsId_19 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (TCIArgs_20 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        BaseTypeClassInfo_21 = ((MR_Word) ((MR_hl_field(1, TCIArgs_20, (MR_Integer) 0))));
        OtherTypeClassInfoArgs_22 = ((MR_Word) ((MR_hl_field(1, TCIArgs_20, (MR_Integer) 1))));
        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), KnownVarMap0_18, ((MR_Box) (BaseTypeClassInfo_21)), &conv1_Var_76);
        if (succeeded)
        {
          Var_76 = ((MR_Word) (conv1_Var_76));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          BaseConsId_23 = ((MR_Word) ((MR_hl_field(0, Var_76, (MR_Integer) 0))));
          succeeded = ((((MR_tag((MR_Word) BaseConsId_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BaseConsId_23, (MR_Integer) 0)))) == (MR_Integer) 11)));
          if (succeeded)
          {
            ClassId_26 = ((MR_Word) ((MR_hl_field(3, BaseConsId_23, (MR_Integer) 2))));
            Instance_27 = ((MR_Integer) ((MR_hl_field(3, BaseConsId_23, (MR_Integer) 3))));
            hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_17, &InstanceTable_29);
            TypeCtorInfo_108_108 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0);
            TypeInfo_109_109 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]);
            mercury__map__lookup_3_p_0(TypeCtorInfo_108_108, TypeInfo_109_109, InstanceTable_29, ((MR_Box) (ClassId_26)), &conv2_InstanceList_30);
            InstanceList_30 = ((MR_Word) (conv2_InstanceList_30));
            TypeCtorInfo_110_110 = (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0);
            mercury__list__det_index1_3_p_0(TypeCtorInfo_110_110, InstanceList_30, Instance_27, &conv3_InstanceDefn_31);
            InstanceDefn_31 = ((MR_Word) (conv3_InstanceDefn_31));
            InstanceTypes0_36 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_31, (MR_Integer) 4))));
            InstanceConstraints_37 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_31, (MR_Integer) 5))));
            Var_77 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_31, (MR_Integer) 9))));
            succeeded = (Var_77 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MethodInfos_41 = ((MR_Word) ((MR_hl_field(1, Var_77, (MR_Integer) 0))));
              parse_tree__prog_type_scan__type_vars_in_types_2_p_0(InstanceTypes0_36, &InstanceTvars_43);
              parse_tree__prog_type_scan__get_unconstrained_tvars_3_p_0(InstanceTvars_43, InstanceConstraints_37, &UnconstrainedTVars_44);
              TypeCtorInfo_111_111 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0);
              Var_78 = mercury__list__length_1_f_0(TypeCtorInfo_111_111, InstanceConstraints_37);
              TypeInfo_112_112 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[2]);
              Var_79 = mercury__list__length_1_f_0(TypeInfo_112_112, UnconstrainedTVars_44);
              NumArgsToExtract_45 = (MR_Integer) ((MR_Unsigned) Var_78 + (MR_Unsigned) Var_79);
              succeeded = mercury__list__take_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), NumArgsToExtract_45, OtherTypeClassInfoArgs_22, &InstanceConstraintArgs_46);
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
    Var_80 = ((MR_Word) ((MR_hl_field(0, MethodInfo_47, (MR_Integer) 3))));
    PredId_48 = ((MR_Word) ((MR_hl_field(0, Var_80, (MR_Integer) 0))));
    ProcId_49 = ((MR_Integer) ((MR_hl_field(0, Var_80, (MR_Integer) 1))));
    AllArgs_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), InstanceConstraintArgs_46, Args_10);
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
      ClassConstraint_54 = ((MR_Word) ((MR_hl_field(2, Var_82, (MR_Integer) 0))));
      ClassName_55 = ((MR_Word) ((MR_hl_field(0, ClassConstraint_54, (MR_Integer) 0))));
      ClassArgTypes_56 = ((MR_Word) ((MR_hl_field(0, ClassConstraint_54, (MR_Integer) 1))));
      TypeCtorInfo_115_115 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      mercury__list__length_2_p_0(TypeCtorInfo_115_115, ClassArgTypes_56, &ClassArity_57);
      hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_17, &InstanceTable_97);
      TypeCtorInfo_116_116 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0);
      TypeInfo_117_117 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]);
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
      MR_Word STATE_VARIABLE_Info_91_91;
      MR_Word STATE_VARIABLE_Info_92_92;
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
        mercury__list__condense_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), Var_87, &AllArgs_98);
        ExtraGoals_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgTypeInfoGoals_65, ArgTypeClassInfoGoals_69);
      }
      transform_hlds__higher_order__higher_order_info__hoi_set_pred_info_3_p_0(CallerPredInfo_62, STATE_VARIABLE_Info_0_72, &STATE_VARIABLE_Info_91_91);
      transform_hlds__higher_order__higher_order_info__hoi_set_proc_info_3_p_0(CallerProcInfo_64, STATE_VARIABLE_Info_91_91, &STATE_VARIABLE_Info_92_92);
      transform_hlds__higher_order__specialize_calls__construct_specialized_higher_order_call_7_p_0(PredId_101, ProcId_102, AllArgs_98, GoalInfo0_16, &SpecGoal_71, STATE_VARIABLE_Info_92_92, STATE_VARIABLE_Info_73);
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
    MR_Word Arg_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 0))));
    MR_Word Args_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 1))));
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
    MR_Word STATE_VARIABLE_ProcInfo_52_52;
    MR_Word STATE_VARIABLE_ProcInfo_54_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Integer Var_64;

    ResultType_38 = parse_tree__builtin_lib_types__build_type_info_type_1_f_0(Arg_29);
    IsDummy_39 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_1, ResultType_38);
    hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0((MR_String) "", ResultType_38, IsDummy_39, &ResultVar_35, STATE_VARIABLE_ProcInfo_0_11, &STATE_VARIABLE_ProcInfo_52_52);
    hlds__make_goal__make_int_const_construction_alloc_in_proc_6_p_0(Index_8, (MR_String) "", &IndexGoal_32, &IndexVar_41, STATE_VARIABLE_ProcInfo_52_52, &STATE_VARIABLE_ProcInfo_54_54);
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
    hlds__instmap__instmap_delta_insert_var_4_p_0(ResultVar_35, (MR_Word) (MR_mkword(1, &transform_hlds__higher_order__specialize_calls_scalar_common_1[8])), InstMapDelta0_44, &InstMapDelta_45);
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
    transform_hlds__higher_order__specialize_calls__get_typeclass_info_args_loop__ho4_12_p_0(ModuleInfo_1, TypeClassInfoVar_2, PredId_3, ProcId_4, SymName_5, Args_30, Var_64, &Goals_34, &Vars_36, STATE_VARIABLE_ProcInfo_54_54, STATE_VARIABLE_ProcInfo_12);
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
    MR_Word Args_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 1))));
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
    MR_Word STATE_VARIABLE_ProcInfo_52_52;
    MR_Word STATE_VARIABLE_ProcInfo_54_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Integer Var_64;

    ResultType_38 = parse_tree__builtin_lib_types__typeclass_info_type_0_f_0();
    IsDummy_39 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_1, ResultType_38);
    hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0((MR_String) "", ResultType_38, IsDummy_39, &ResultVar_35, STATE_VARIABLE_ProcInfo_0_11, &STATE_VARIABLE_ProcInfo_52_52);
    hlds__make_goal__make_int_const_construction_alloc_in_proc_6_p_0(Index_8, (MR_String) "", &IndexGoal_32, &IndexVar_41, STATE_VARIABLE_ProcInfo_52_52, &STATE_VARIABLE_ProcInfo_54_54);
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
    hlds__instmap__instmap_delta_insert_var_4_p_0(ResultVar_35, (MR_Word) (MR_mkword(1, &transform_hlds__higher_order__specialize_calls_scalar_common_1[8])), InstMapDelta0_44, &InstMapDelta_45);
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
    transform_hlds__higher_order__specialize_calls__get_typeclass_info_args_loop__ho3_12_p_0(ModuleInfo_1, TypeClassInfoVar_2, PredId_3, ProcId_4, SymName_5, Args_30, Var_64, &Goals_34, &Vars_36, STATE_VARIABLE_ProcInfo_54_54, STATE_VARIABLE_ProcInfo_12);
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
    MR_Word STATE_VARIABLE_TVarSet_25_25;
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
      Instance_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Instances_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      InstanceTVarSet_44 = ((MR_Word) ((MR_hl_field(0, Instance_10, (MR_Integer) 2))));
      InstanceTypes0_46 = ((MR_Word) ((MR_hl_field(0, Instance_10, (MR_Integer) 4))));
      Constraints0_47 = ((MR_Word) ((MR_hl_field(0, Instance_10, (MR_Integer) 5))));
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(STATE_VARIABLE_TVarSet_0_23, InstanceTVarSet_44, &STATE_VARIABLE_TVarSet_25_25, &Renaming_53);
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_53, InstanceTypes0_46, &InstanceTypes_54);
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_53, Constraints0_47, &Constraints1_55);
      parse_tree__prog_type_scan__type_vars_in_types_2_p_0(InstanceTypes_54, &InstanceTVars_56);
      parse_tree__prog_type_scan__get_unconstrained_tvars_3_p_0(InstanceTVars_56, Constraints1_55, &UnconstrainedTVars0_57);
      succeeded = parse_tree__prog_type_unify__type_list_subsumes_3_p_0(InstanceTypes_54, ClassTypes_13, &Subst_58);
      if (succeeded)
      {
        parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(Subst_58, Constraints1_55, &Constraints0_19);
        TypeInfo_31_60 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[2]);
        TypeCtorInfo_32_61 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        mercury__map__init_1_p_0(TypeInfo_31_60, TypeCtorInfo_32_61, &KindMap_59);
        parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(KindMap_59, Subst_58, UnconstrainedTVars0_57, &UnconstrainedTVarTypes0_20);
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

        *STATE_VARIABLE_TVarSet_24 = STATE_VARIABLE_TVarSet_25_25;
        *Constraints_16 = Constraints0_19;
        *UnconstrainedTVarTypes_17 = UnconstrainedTVarTypes0_20;
        Var_26 = ((MR_Word) ((MR_hl_field(0, Instance_10, (MR_Integer) 9))));
        succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MethodInfos_21 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 0))));
          TypeCtorInfo_41_41 = (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0);
          mercury__list__det_index1_3_p_0(TypeCtorInfo_41_41, MethodInfos_21, MethodNum_12, &conv0_MethodInfo_22);
          MethodInfo_22 = ((MR_Word) (conv0_MethodInfo_22));
          Var_27 = ((MR_Word) ((MR_hl_field(0, MethodInfo_22, (MR_Integer) 3))));
          *PredId_14 = ((MR_Word) ((MR_hl_field(0, Var_27, (MR_Integer) 0))));
          *ProcId_15 = ((MR_Integer) ((MR_hl_field(0, Var_27, (MR_Integer) 1))));
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
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_bool succeeded;
  MR_Word KnownVarMap0_12;
  MR_Word CurriedArgs_14;
  MR_Word ShroudedPredProcId_15;
  MR_Word ConsId_13;
  MR_Word Var_24;
  MR_Box conv0_Var_24;

  KnownVarMap0_12 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_0_22);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), KnownVarMap0_12, ((MR_Box) (PredVar_7)), &conv0_Var_24);
  if (succeeded)
  {
    Var_24 = ((MR_Word) (conv0_Var_24));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    ConsId_13 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 0))));
    CurriedArgs_14 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 1))));
    succeeded = ((((MR_tag((MR_Word) ConsId_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_13, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (succeeded)
      ShroudedPredProcId_15 = ((MR_Word) ((MR_hl_field(3, ConsId_13, (MR_Integer) 1))));
  }
  if (succeeded)
  {
    MR_Word PredId_17;
    MR_Integer ProcId_18;
    MR_Word AllArgs_19;
    MR_Word GoalInfo_21;
    MR_Word Var_25;

    Var_25 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_15);
    PredId_17 = ((MR_Word) ((MR_hl_field(0, Var_25, (MR_Integer) 0))));
    ProcId_18 = ((MR_Integer) ((MR_hl_field(0, Var_25, (MR_Integer) 1))));
    AllArgs_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), CurriedArgs_14, Args_8);
    GoalInfo_21 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 1))));
    transform_hlds__higher_order__specialize_calls__construct_specialized_higher_order_call_7_p_0(PredId_17, ProcId_18, AllArgs_19, GoalInfo_21, Goal_10, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
  }
  else
  {
    *Goal_10 = Goal0_9;
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__construct_specialized_higher_order_call_7_p_0(
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word AllArgs_10,
  MR_Word GoalInfo_11,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
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
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word STATE_VARIABLE_Info_30_30;
  MR_Word GoalExpr0_33;
  MR_Word ModuleInfo0_36;
  MR_Word CalledPred_37;
  MR_Integer CalledProc_38;
  MR_Word Args0_39;
  MR_Word IsBuiltin_40;
  MR_Word MaybeContext_41;
  MR_Word CalleePredInfo_43;
  MR_Word CalleeProcInfo_44;
  MR_Word Var_56;
  MR_Word GoalExpr1_45;
  MR_Word STATE_VARIABLE_Info_32_57;

  Var_27 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_0_25);
  ModuleInfo_14 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_27);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_14, PredId_8, &PredInfo_15);
  ModuleName_16 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_15);
  PredName_17 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_15);
  {
    SymName_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_18, 0) = ((MR_Box) (ModuleName_16));
    MR_hl_field(1, SymName_18, 1) = ((MR_Box) (PredName_17));
  }
  Var_28 = transform_hlds__higher_order__higher_order_info__hoi_get_pred_proc_id_1_f_0(STATE_VARIABLE_Info_0_25);
  CallerPredId_19 = ((MR_Word) ((MR_hl_field(0, Var_28, (MR_Integer) 0))));
  Builtin_21 = hlds__hlds_pred__builtin_state_4_f_0(ModuleInfo_14, CallerPredId_19, PredId_8, ProcId_9);
  {
    GoalExpr0_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, GoalExpr0_33, 0) = ((MR_Box) (PredId_8));
    MR_hl_field(2, GoalExpr0_33, 1) = ((MR_Box) (ProcId_9));
    MR_hl_field(2, GoalExpr0_33, 2) = ((MR_Box) (AllArgs_10));
    MR_hl_field(2, GoalExpr0_33, 3) = (MR_Box) ((MR_Unsigned) (Builtin_21));
    MR_hl_field(2, GoalExpr0_33, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, GoalExpr0_33, 5) = ((MR_Box) (SymName_18));
  }
  transform_hlds__higher_order__higher_order_info__hoi_set_changed_3_p_0((MR_Integer) 0, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_30_30);
  Var_56 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_30_30);
  ModuleInfo0_36 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_56);
  CalledPred_37 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_33, (MR_Integer) 0))));
  CalledProc_38 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_33, (MR_Integer) 1))));
  Args0_39 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_33, (MR_Integer) 2))));
  IsBuiltin_40 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_33, (MR_Integer) 3))) & (MR_Integer) 1);
  MaybeContext_41 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_33, (MR_Integer) 4))));
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo0_36, CalledPred_37, CalledProc_38, &CalleePredInfo_43, &CalleeProcInfo_44);
  succeeded = transform_hlds__higher_order__specialize_unify_compare__specialize_call_to_unify_or_compare_8_p_0(CalledPred_37, CalledProc_38, Args0_39, MaybeContext_41, GoalInfo_11, &GoalExpr1_45, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_32_57);
  if (succeeded)
  {
    GoalExpr_12 = GoalExpr1_45;
    transform_hlds__higher_order__higher_order_info__hoi_set_changed_3_p_0((MR_Integer) 0, STATE_VARIABLE_Info_32_57, STATE_VARIABLE_Info_26);
  }
  else
  {
    MR_Word Manipulator_46;
    MR_Word PredInfo_68;
    MR_String PredName_69;
    MR_Word Var_70;
    MR_Word Var_71;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo0_36, CalledPred_37, &PredInfo_68);
    Var_70 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    Var_71 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_68);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_70, Var_71);
    if (succeeded)
    {
      PredName_69 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_68);
      if ((strcmp(PredName_69, (MR_String) "type_info_from_typeclass_info") == 0))
      {
        Manipulator_46 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(PredName_69, (MR_String) "superclass_from_typeclass_info") == 0))
      {
        Manipulator_46 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(PredName_69, (MR_String) "instance_constraint_from_typeclass_info") == 0))
      {
        Manipulator_46 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
    }
    if (succeeded)
      transform_hlds__higher_order__specialize_calls__interpret_typeclass_info_manipulator_6_p_0(Manipulator_46, Args0_39, GoalExpr0_33, &GoalExpr_12, STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Info_26);
    else
    {
      {
        MR_Word TypeSpecInfo_47;
        MR_Word TypeSpecProcs_48;
        MR_Word TypeCtorInfo_42_64;
        MR_Word Var_59;

        succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(CalleePredInfo_43);
        if (succeeded)
        {
          hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo0_36, &TypeSpecInfo_47);
          TypeSpecProcs_48 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo_47, (MR_Integer) 0))));
          TypeCtorInfo_42_64 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
          {
            Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_59, 0) = ((MR_Box) (CalledPred_37));
            MR_hl_field(0, Var_59, 1) = ((MR_Box) (CalledProc_38));
          }
          succeeded = mercury__set__member_2_p_0(TypeCtorInfo_42_64, ((MR_Box) (Var_59)), TypeSpecProcs_48);
          succeeded = !(succeeded);
        }
      }
      if (!(succeeded))
      {
        {
          MR_Integer Var_66;

          succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(CalleePredInfo_43);
          if (succeeded)
          {
            hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_66);
            succeeded = (CalledProc_38 == Var_66);
          }
        }
        if (!(succeeded))
          succeeded = hlds__hlds_pred__pred_info_defn_has_foreign_proc_1_p_0(CalleePredInfo_43);
      }
      if (succeeded)
      {
        GoalExpr_12 = GoalExpr0_33;
        *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_30_30;
      }
      else
      {
        MR_Word Result_52;

        transform_hlds__higher_order__specialize_calls__maybe_specialize_ordinary_call_12_p_0((MR_Integer) 0, CalledPred_37, CalledProc_38, CalleePredInfo_43, CalleeProcInfo_44, Args0_39, IsBuiltin_40, MaybeContext_41, GoalInfo_11, &Result_52, STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Info_26);
        if ((Result_52 == (MR_Word) ((MR_Unsigned) 0U)))
          GoalExpr_12 = GoalExpr0_33;
        else
        {
          MR_Word ExtraTypeInfoGoals_53 = ((MR_Word) ((MR_hl_field(1, Result_52, (MR_Integer) 0))));
          MR_Word GoalList1_54;
          MR_Word GoalList_55;
          MR_Word Var_61;
          MR_Word GoalExpr1_63 = ((MR_Word) ((MR_hl_field(1, Result_52, (MR_Integer) 1))));

          {
            Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_61, 0) = ((MR_Box) (GoalExpr1_63));
            MR_hl_field(0, Var_61, 1) = ((MR_Box) (GoalInfo_11));
          }
          hlds__hlds_goal__goal_to_conj_list_2_p_0(Var_61, &GoalList1_54);
          GoalList_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraTypeInfoGoals_53, GoalList1_54);
          {
            GoalExpr_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, GoalExpr_12, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, GoalExpr_12, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, GoalExpr_12, 2) = ((MR_Box) (GoalList_55));
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
    TypeClassInfoVar_14 = ((MR_Word) ((MR_hl_field(1, Args_8, (MR_Integer) 0))));
    Var_62 = ((MR_Word) ((MR_hl_field(1, Args_8, (MR_Integer) 1))));
    succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      IndexVar_15 = ((MR_Word) ((MR_hl_field(1, Var_62, (MR_Integer) 0))));
      Var_63 = ((MR_Word) ((MR_hl_field(1, Var_62, (MR_Integer) 1))));
      succeeded = (Var_63 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        OutputVar_16 = ((MR_Word) ((MR_hl_field(1, Var_63, (MR_Integer) 0))));
        Var_64 = ((MR_Word) ((MR_hl_field(1, Var_63, (MR_Integer) 1))));
        succeeded = (Var_64 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TypeInfo_109_109 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]);
          TypeCtorInfo_110_110 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0);
          succeeded = mercury__map__search_3_p_0(TypeInfo_109_109, TypeCtorInfo_110_110, KnownVarMap0_13, ((MR_Box) (TypeClassInfoVar_14)), &conv0_Var_65);
          if (succeeded)
          {
            Var_65 = ((MR_Word) (conv0_Var_65));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            TypeClassInfoConsId_17 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 0))));
            TypeClassInfoArgs_18 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 1))));
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
                Var_66 = ((MR_Word) ((MR_hl_field(0, IndexMaybeConst_24, (MR_Integer) 0))));
                Var_68 = ((MR_Word) ((MR_hl_field(0, IndexMaybeConst_24, (MR_Integer) 1))));
                succeeded = (Var_68 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((((MR_tag((MR_Word) Var_66)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_66, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    Var_67 = ((MR_Word) ((MR_hl_field(3, Var_66, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_67)) == (MR_Integer) 0);
                    if (succeeded)
                      Index0_25 = ((MR_Integer) ((MR_hl_field(0, Var_67, (MR_Integer) 0))));
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
    MR_Word STATE_VARIABLE_Info_78_78;

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
          mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), InstanceTable_26, ((MR_Box) (ClassId_20)), &conv2_InstanceDefns_27);
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
      MR_Word OtherConstArgs_42 = ((MR_Word) ((MR_hl_field(1, OtherArgs_23, (MR_Integer) 0))));
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
        MR_Integer SelectedConstNum_47 = ((MR_Integer) ((MR_hl_field(0, SelectedConstArg_43, (MR_Integer) 0))));
        MR_Word ConstStructDb_48;
        MR_Word SelectedConstStruct_49;
        MR_Word SelectedConstConsId_50;

        hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_12, &ConstStructDb_48);
        hlds__const_struct__lookup_const_struct_num_3_p_0(ConstStructDb_48, SelectedConstNum_47, &SelectedConstStruct_49);
        SelectedConstConsId_50 = ((MR_Word) ((MR_hl_field(0, SelectedConstStruct_49, (MR_Integer) 0))));
        SelectedConstInst_46 = ((MR_Word) ((MR_hl_field(0, SelectedConstStruct_49, (MR_Integer) 3))));
        if (((MR_tag((MR_Word) SelectedConstConsId_50)) == (MR_Integer) 1))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) SelectedConstConsId_50)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SelectedConstConsId_50, (MR_Integer) 0)))) == (MR_Integer) 12))))
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
          if (((((MR_tag((MR_Word) SelectedConstConsId_50)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SelectedConstConsId_50, (MR_Integer) 0)))) == (MR_Integer) 13))))
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

        SelectedConsId_44 = ((MR_Word) ((MR_hl_field(1, SelectedConstArg_43, (MR_Integer) 0))));
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
      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), ((MR_Box) (OutputVar_16)), ((MR_Box) (Var_89)), KnownVarMap0_13, &KnownVarMap_57);
      transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_57, STATE_VARIABLE_Info_0_59, &STATE_VARIABLE_Info_78_78);
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
        MR_hl_field(1, base, 4) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[9]));
      }
    }
    else
    {
      MR_Word OtherVars_31 = ((MR_Word) ((MR_hl_field(0, OtherArgs_23, (MR_Integer) 0))));
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
      MR_Word STATE_VARIABLE_Info_69_69;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Box conv5_SelectedArg_32;

      mercury__list__det_index1_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), OtherVars_31, Index_30, &conv5_SelectedArg_32);
      SelectedArg_32 = ((MR_Word) (conv5_SelectedArg_32));
      transform_hlds__higher_order__specialize_calls__maybe_add_alias_4_p_0(OutputVar_16, SelectedArg_32, STATE_VARIABLE_Info_0_59, &STATE_VARIABLE_Info_69_69);
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
        MR_hl_field(1, base, 4) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[9]));
      }
      ProcInfo0_35 = transform_hlds__higher_order__higher_order_info__hoi_get_proc_info_1_f_0(STATE_VARIABLE_Info_69_69);
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo0_35, &RttiVarMaps0_36);
      hlds__hlds_rtti__rtti_var_info_duplicate_replace_4_p_0(SelectedArg_32, OutputVar_16, RttiVarMaps0_36, &RttiVarMaps_37);
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_37, ProcInfo0_35, &ProcInfo_38);
      transform_hlds__higher_order__higher_order_info__hoi_set_proc_info_3_p_0(ProcInfo_38, STATE_VARIABLE_Info_69_69, &STATE_VARIABLE_Info_78_78);
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
    transform_hlds__higher_order__higher_order_info__hoi_set_changed_3_p_0((MR_Integer) 0, STATE_VARIABLE_Info_78_78, STATE_VARIABLE_Info_60);
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

  succeeded = transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__find_typeclass_info_components__1844__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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

    succeeded = ((((MR_tag((MR_Word) TypeClassInfoConsId_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeClassInfoConsId_12, (MR_Integer) 0)))) == (MR_Integer) 13)));
    if (succeeded)
    {
      TCIConstNum_24 = ((MR_Integer) ((MR_hl_field(3, TypeClassInfoConsId_12, (MR_Integer) 1))));
      hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_10, &ConstStructDb_25);
      hlds__const_struct__lookup_const_struct_num_3_p_0(ConstStructDb_25, TCIConstNum_24, &TCIConstStruct_26);
      TCIConstConsId_27 = ((MR_Word) ((MR_hl_field(0, TCIConstStruct_26, (MR_Integer) 0))));
      TCIConstArgs_28 = ((MR_Word) ((MR_hl_field(0, TCIConstStruct_26, (MR_Integer) 1))));
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
        BaseTypeClassInfoConstArg_32 = ((MR_Word) ((MR_hl_field(1, TCIConstArgs_28, (MR_Integer) 0))));
        OtherConstArgs_33 = ((MR_Word) ((MR_hl_field(1, TCIConstArgs_28, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) BaseTypeClassInfoConstArg_32)) == (MR_Integer) 1);
        if (succeeded)
        {
          BaseTypeClassInfoConsId_22 = ((MR_Word) ((MR_hl_field(1, BaseTypeClassInfoConstArg_32, (MR_Integer) 0))));
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
      BaseTypeClassInfoVar_19 = ((MR_Word) ((MR_hl_field(1, TypeClassInfoArgs_13, (MR_Integer) 0))));
      OtherVars_20 = ((MR_Word) ((MR_hl_field(1, TypeClassInfoArgs_13, (MR_Integer) 1))));
      TypeInfo_39_39 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]);
      TypeCtorInfo_40_40 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0);
      succeeded = mercury__map__search_3_p_0(TypeInfo_39_39, TypeCtorInfo_40_40, KnownVarMap_11, ((MR_Box) (BaseTypeClassInfoVar_19)), &conv0_BaseTypeClassInfoMaybeConst_21);
      if (succeeded)
      {
        BaseTypeClassInfoMaybeConst_21 = ((MR_Word) (conv0_BaseTypeClassInfoMaybeConst_21));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        BaseTypeClassInfoConsId_22 = ((MR_Word) ((MR_hl_field(0, BaseTypeClassInfoMaybeConst_21, (MR_Integer) 0))));
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
    succeeded = ((((MR_tag((MR_Word) BaseTypeClassInfoConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BaseTypeClassInfoConsId_22, (MR_Integer) 0)))) == (MR_Integer) 11)));
    if (succeeded)
    {
      *ModuleName_14 = ((MR_Word) ((MR_hl_field(3, BaseTypeClassInfoConsId_22, (MR_Integer) 1))));
      *ClassId_15 = ((MR_Word) ((MR_hl_field(3, BaseTypeClassInfoConsId_22, (MR_Integer) 2))));
      *InstanceNum_16 = ((MR_Integer) ((MR_hl_field(3, BaseTypeClassInfoConsId_22, (MR_Integer) 3))));
      *Instance_17 = ((MR_String) ((MR_hl_field(3, BaseTypeClassInfoConsId_22, (MR_Integer) 4))));
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
  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), KnownVarMap0_8, ((MR_Box) (RVar_6)), &conv0_KnownConst_9);
  if (succeeded)
  {
    KnownConst_9 = ((MR_Word) (conv0_KnownConst_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word KnownVarMap_10;

    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), ((MR_Box) (LVar_5)), ((MR_Box) (KnownConst_9)), KnownVarMap0_8, &KnownVarMap_10);
    transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_10, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
  }
  else
    *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_0_11;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__maybe_specialize_ordinary_call_12_p_0(
  MR_Word CanRequest_13,
  MR_Word CalledPred_14,
  MR_Integer CalledProc_15,
  MR_Word CalleePredInfo_16,
  MR_Word CalleeProcInfo_17,
  MR_Word Args0_18,
  MR_Word IsBuiltin_19,
  MR_Word MaybeContext_20,
  MR_Word GoalInfo_21,
  MR_Word * Result_22,
  MR_Word STATE_VARIABLE_Info_0_82,
  MR_Word * STATE_VARIABLE_Info_83)
{
  MR_bool succeeded;
  MR_Word ModuleInfo0_24;
  MR_Word CalleeStatus_25;
  MR_Word CalleeVarTable_26;
  MR_Word CalleeHeadVars_27;
  MR_Word CalleeArgTypes_28;
  MR_Word CallerProcInfo0_29;
  MR_Word VarTable_30;
  MR_Word RttiVarMaps_31;
  MR_Word HigherOrderArgsCord_32;
  MR_Word HigherOrderArgs_33;
  MR_Word CallerPredId_34;
  MR_Word TypeSpecInfo_36;
  MR_Word ForceVersions_38;
  MR_Word RequestKind_41;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_87;
  MR_Word Var_88;

  Var_84 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_0_82);
  ModuleInfo0_24 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_84);
  hlds__hlds_pred__pred_info_get_status_2_p_0(CalleePredInfo_16, &CalleeStatus_25);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(CalleeProcInfo_17, &CalleeVarTable_26);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(CalleeProcInfo_17, &CalleeHeadVars_27);
  parse_tree__var_table__lookup_var_types_3_p_0(CalleeVarTable_26, CalleeHeadVars_27, &CalleeArgTypes_28);
  CallerProcInfo0_29 = transform_hlds__higher_order__higher_order_info__hoi_get_proc_info_1_f_0(STATE_VARIABLE_Info_0_82);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(CallerProcInfo0_29, &VarTable_30);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(CallerProcInfo0_29, &RttiVarMaps_31);
  Var_85 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_0_82);
  Var_87 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0));
  transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0(ModuleInfo0_24, CalleeStatus_25, Args0_18, CalleeArgTypes_28, VarTable_30, RttiVarMaps_31, Var_85, (MR_Integer) 1, Var_87, &HigherOrderArgsCord_32);
  HigherOrderArgs_33 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), HigherOrderArgsCord_32);
  Var_88 = transform_hlds__higher_order__higher_order_info__hoi_get_pred_proc_id_1_f_0(STATE_VARIABLE_Info_0_82);
  CallerPredId_34 = ((MR_Word) ((MR_hl_field(0, Var_88, (MR_Integer) 0))));
  hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo0_24, &TypeSpecInfo_36);
  ForceVersions_38 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo_36, (MR_Integer) 1))));
  succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ForceVersions_38, ((MR_Box) (CallerPredId_34)));
  if (succeeded)
    RequestKind_41 = (MR_Integer) 1;
  else
    RequestKind_41 = (MR_Integer) 0;
  succeeded = (HigherOrderArgs_33 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
  }
  if (!(succeeded))
  {
    succeeded = (RequestKind_41 == (MR_Integer) 1);
    if (!(succeeded))
    {
      MR_Word Params_44;
      MR_Word ArgTypes_45;
      MR_Word CalleeClassContext_46;
      MR_Word CalleeUnivConstraints0_47;
      MR_Word CalleeTVarSet_49;
      MR_Word CalleeExistQTVars_50;
      MR_Word CallerPredInfo0_51;
      MR_Word TVarSet_52;
      MR_Word CallerUnivQTVars_53;
      MR_Word Var_89;
      MR_Word Var_90;

      Var_89 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_0_82);
      Params_44 = transform_hlds__higher_order__higher_order_global_info__hogi_get_params_1_f_0(Var_89);
      Var_90 = ((MR_Unsigned) ((MR_hl_field(0, Params_44, (MR_Integer) 0))) & (MR_Integer) 1);
      succeeded = (Var_90 == (MR_Integer) 0);
      if (succeeded)
      {
        parse_tree__var_table__lookup_var_types_3_p_0(VarTable_30, Args0_18, &ArgTypes_45);
        hlds__hlds_pred__pred_info_get_class_context_2_p_0(CalleePredInfo_16, &CalleeClassContext_46);
        CalleeUnivConstraints0_47 = ((MR_Word) ((MR_hl_field(0, CalleeClassContext_46, (MR_Integer) 0))));
        hlds__hlds_pred__pred_info_get_typevarset_2_p_0(CalleePredInfo_16, &CalleeTVarSet_49);
        hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(CalleePredInfo_16, &CalleeExistQTVars_50);
        CallerPredInfo0_51 = transform_hlds__higher_order__higher_order_info__hoi_get_pred_info_1_f_0(STATE_VARIABLE_Info_0_82);
        hlds__hlds_pred__pred_info_get_typevarset_2_p_0(CallerPredInfo0_51, &TVarSet_52);
        hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(CallerPredInfo0_51, &CallerUnivQTVars_53);
        succeeded = transform_hlds__higher_order__specialize_calls__type_subst_makes_some_instance_known_8_p_0(ModuleInfo0_24, CalleeUnivConstraints0_47, TVarSet_52, CallerUnivQTVars_53, ArgTypes_45, CalleeTVarSet_49, CalleeExistQTVars_50, CalleeArgTypes_28);
      }
    }
  }
  if (succeeded)
  {
    MR_Word Context_54;
    MR_Word FindResult_55;

    Context_54 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_21);
    transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0(STATE_VARIABLE_Info_0_82, CalledPred_14, CalledProc_15, Args0_18, Context_54, HigherOrderArgs_33, RequestKind_41, &FindResult_55);
    switch (MR_tag((MR_Word) FindResult_55)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Result_22 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_83 = STATE_VARIABLE_Info_0_82;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Match_56 = (MR_Word) (MR_body((MR_Word) (FindResult_55), (MR_Integer) 1));
          MR_Word MatchedNewPred_57 = ((MR_Word) ((MR_hl_field(0, Match_56, (MR_Integer) 0))));
          MR_Word Args1_59 = ((MR_Word) ((MR_hl_field(0, Match_56, (MR_Integer) 2))));
          MR_Word ExtraTypeInfoTypes_60 = ((MR_Word) ((MR_hl_field(0, Match_56, (MR_Integer) 3))));
          MR_Word NewPredProcId_61 = ((MR_Word) ((MR_hl_field(0, MatchedNewPred_57, (MR_Integer) 0))));
          MR_Word NewName_64 = ((MR_Word) ((MR_hl_field(0, MatchedNewPred_57, (MR_Integer) 3))));
          MR_Word NewCalledPred_71 = ((MR_Word) ((MR_hl_field(0, NewPredProcId_61, (MR_Integer) 0))));
          MR_Integer NewCalledProc_72 = ((MR_Integer) ((MR_hl_field(0, NewPredProcId_61, (MR_Integer) 1))));
          MR_Word ExtraTypeInfoVars_73;
          MR_Word ExtraTypeInfoGoals_74;
          MR_Word Args_75;
          MR_Word CallGoal_76;
          MR_Word STATE_VARIABLE_Info_91_91;

          transform_hlds__higher_order__specialize_calls__construct_extra_type_infos_5_p_0(ExtraTypeInfoTypes_60, &ExtraTypeInfoVars_73, &ExtraTypeInfoGoals_74, STATE_VARIABLE_Info_0_82, &STATE_VARIABLE_Info_91_91);
          Args_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), ExtraTypeInfoVars_73, Args1_59);
          {
            CallGoal_76 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, CallGoal_76, 0) = ((MR_Box) (NewCalledPred_71));
            MR_hl_field(2, CallGoal_76, 1) = ((MR_Box) (NewCalledProc_72));
            MR_hl_field(2, CallGoal_76, 2) = ((MR_Box) (Args_75));
            MR_hl_field(2, CallGoal_76, 3) = (MR_Box) ((MR_Unsigned) (IsBuiltin_19));
            MR_hl_field(2, CallGoal_76, 4) = ((MR_Box) (MaybeContext_20));
            MR_hl_field(2, CallGoal_76, 5) = ((MR_Box) (NewName_64));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Result_22 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ExtraTypeInfoGoals_74));
            MR_hl_field(1, base, 1) = ((MR_Box) (CallGoal_76));
          }
          transform_hlds__higher_order__higher_order_info__hoi_set_changed_3_p_0((MR_Integer) 0, STATE_VARIABLE_Info_91_91, STATE_VARIABLE_Info_83);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Request_77 = (MR_Word) (MR_body((MR_Word) (FindResult_55), (MR_Integer) 2));

          *Result_22 = (MR_Word) ((MR_Unsigned) 0U);
          switch (CanRequest_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *STATE_VARIABLE_Info_83 = STATE_VARIABLE_Info_0_82;
              break;
            case (MR_Integer) 0:
              {
                MR_Word GlobalInfo0_78;
                MR_Word GlobalInfo_79;
                MR_Word Changed0_80;
                MR_Word Changed_81;
                MR_Word STATE_VARIABLE_Info_94_94;

                GlobalInfo0_78 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_0_82);
                transform_hlds__higher_order__higher_order_global_info__hogi_add_request_3_p_0(Request_77, GlobalInfo0_78, &GlobalInfo_79);
                transform_hlds__higher_order__higher_order_info__hoi_set_global_info_3_p_0(GlobalInfo_79, STATE_VARIABLE_Info_0_82, &STATE_VARIABLE_Info_94_94);
                Changed0_80 = transform_hlds__higher_order__higher_order_info__hoi_get_changed_1_f_0(STATE_VARIABLE_Info_94_94);
                switch (Changed0_80) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Changed_81 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    Changed_81 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    Changed_81 = (MR_Integer) 1;
                    break;
                }
                transform_hlds__higher_order__higher_order_info__hoi_set_changed_3_p_0(Changed_81, STATE_VARIABLE_Info_94_94, STATE_VARIABLE_Info_83);
              }
              break;
          }
        }
        break;
    }
  }
  else
  {
    *Result_22 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_83 = STATE_VARIABLE_Info_0_82;
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
  MR_Word STATE_VARIABLE_Info_22_22;
  MR_Word STATE_VARIABLE_Info_23_23;

  GlobalInfo0_10 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_0_19);
  ModuleInfo0_11 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(GlobalInfo0_10);
  PredInfo0_12 = transform_hlds__higher_order__higher_order_info__hoi_get_pred_info_1_f_0(STATE_VARIABLE_Info_0_19);
  ProcInfo0_13 = transform_hlds__higher_order__higher_order_info__hoi_get_proc_info_1_f_0(STATE_VARIABLE_Info_0_19);
  Var_21 = mercury__term_context__dummy_context_0_f_0();
  check_hlds__polymorphism_type_info__polymorphism_make_type_info_vars_mi_10_p_0(Types_6, Var_21, TypeInfoVars_7, TypeInfoGoals_8, ModuleInfo0_11, &ModuleInfo_14, PredInfo0_12, &PredInfo_15, ProcInfo0_13, &ProcInfo_16);
  transform_hlds__higher_order__higher_order_info__hoi_set_pred_info_3_p_0(PredInfo_15, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_22_22);
  transform_hlds__higher_order__higher_order_info__hoi_set_proc_info_3_p_0(ProcInfo_16, STATE_VARIABLE_Info_22_22, &STATE_VARIABLE_Info_23_23);
  GlobalInfo1_17 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_23_23);
  transform_hlds__higher_order__higher_order_global_info__hogi_set_module_info_3_p_0(ModuleInfo_14, GlobalInfo1_17, &GlobalInfo_18);
  transform_hlds__higher_order__higher_order_info__hoi_set_global_info_3_p_0(GlobalInfo_18, STATE_VARIABLE_Info_23_23, STATE_VARIABLE_Info_20);
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_45;

  transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__find_matching_version__1477__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_45);
  *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_45));
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TVars_20;

  transform_hlds__higher_order__specialize_calls__arg_contains_type_info_for_tvar_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TVars_20);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TVars_20));
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_5(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HOArg_41 = ((MR_Word) ((env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__conv4_HOArg_41));
  transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_4(env_ptr);
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Integer Var_67;
    MR_Integer Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Unsigned packed_word_1;
    MR_Word Var_42;

    (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__Var_52 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HOArg_41, (MR_Integer) 0))));
    Var_67 = ((MR_Integer) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HOArg_41, (MR_Integer) 1))));
    Var_68 = ((MR_Integer) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HOArg_41, (MR_Integer) 2))));
    Var_69 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HOArg_41, (MR_Integer) 3))));
    Var_70 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HOArg_41, (MR_Integer) 4))));
    Var_71 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HOArg_41, (MR_Integer) 5))));
    Var_72 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HOArg_41, (MR_Integer) 6))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HOArg_41, (MR_Integer) 7)));
    Var_73 = ((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HOArg_41, (MR_Integer) 7))) & (MR_Integer) 1);
    (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__Var_52)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__Var_52, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if ((env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded)
    {
      Var_42 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__Var_52, (MR_Integer) 1))));
      transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_3(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_6(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__commit_0) == 0)
    {
      {
        MR_Word TypeCtorInfo_79_79;

        (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HigherOrder_36 == (MR_Integer) 0);
        if ((env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded)
        {
          TypeCtorInfo_79_79 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0);
          mercury__list__member_2_p_1(TypeCtorInfo_79_79, &(env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__conv4_HOArg_41, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HigherOrderArgs_14, transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_5, env_ptr);
        }
      }
      (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0(
  MR_Word Info_9,
  MR_Word CalledPred_10,
  MR_Integer CalledProc_11,
  MR_Word Args0_12,
  MR_Word Context_13,
  MR_Word HigherOrderArgs_14,
  MR_Word RequestKind_15,
  MR_Word * Result_16)
{
  struct transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0_s env;

  (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HigherOrderArgs_14 = HigherOrderArgs_14;
  {
    MR_Word GlobalInfo0_17;
    MR_Word ModuleInfo_18;
    MR_Word Params_19;
    MR_Word NewPredMap_20;
    MR_Word Caller_21;
    MR_Word PredInfo_22;
    MR_Word ProcInfo_23;
    MR_Word Args_24;
    MR_Word ExtraTypeInfoTVars_25;
    MR_Word VarTable_26;
    MR_Word PairWithType_27;
    MR_Word ArgsTypes0_30;
    MR_Word TVarSet_31;
    MR_Word Request_32;
    MR_Word Var_46;
    MR_Word ProcInfo_80;
    MR_Word VarTable_81;
    MR_Word ArgTypes_82;
    MR_Word AllTVars_83;
    MR_Word Match_35;
    MR_Word TypeCtorInfo_78_78;
    MR_Word VersionSet_33;
    MR_Word Versions_34;
    MR_Word Var_49;
    MR_Box conv3_VersionSet_33;

    GlobalInfo0_17 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(Info_9);
    ModuleInfo_18 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(GlobalInfo0_17);
    Params_19 = transform_hlds__higher_order__higher_order_global_info__hogi_get_params_1_f_0(GlobalInfo0_17);
    NewPredMap_20 = transform_hlds__higher_order__higher_order_global_info__hogi_get_new_pred_map_1_f_0(GlobalInfo0_17);
    Caller_21 = transform_hlds__higher_order__higher_order_info__hoi_get_pred_proc_id_1_f_0(Info_9);
    PredInfo_22 = transform_hlds__higher_order__higher_order_info__hoi_get_pred_info_1_f_0(Info_9);
    ProcInfo_23 = transform_hlds__higher_order__higher_order_info__hoi_get_proc_info_1_f_0(Info_9);
    transform_hlds__higher_order__higher_order_global_info__get_extra_arguments_3_p_0((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HigherOrderArgs_14, Args0_12, &Args_24);
    ProcInfo_80 = transform_hlds__higher_order__higher_order_info__hoi_get_proc_info_1_f_0(Info_9);
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_80, &VarTable_81);
    parse_tree__var_table__lookup_var_types_3_p_0(VarTable_81, Args_24, &ArgTypes_82);
    parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_82, &AllTVars_83);
    if ((AllTVars_83 == (MR_Word) ((MR_Unsigned) 0U)))
      ExtraTypeInfoTVars_25 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word RttiVarMaps_84;
      MR_Word TypeInfoTVars_85;
      MR_Word ExtraTypeInfoTVars0_86;
      MR_Word Var_87;
      MR_Box conv1_TypeInfoTVars_85;

      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_80, &RttiVarMaps_84);
      {
        Var_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_87, 0) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_6[0]));
        MR_hl_field(0, Var_87, 1) = ((MR_Box) (transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_1));
        MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_87, 3) = ((MR_Box) (RttiVarMaps_84));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[4]), Var_87, Args_24, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_TypeInfoTVars_85);
      TypeInfoTVars_85 = ((MR_Word) (conv1_TypeInfoTVars_85));
      mercury__list__delete_elems_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[2]), AllTVars_83, TypeInfoTVars_85, &ExtraTypeInfoTVars0_86);
      mercury__list__remove_dups_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[2]), ExtraTypeInfoTVars0_86, &ExtraTypeInfoTVars_25);
    }
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_23, &VarTable_26);
    {
      PairWithType_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PairWithType_27, 0) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_5[1]));
      MR_hl_field(0, PairWithType_27, 1) = ((MR_Box) (transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_2));
      MR_hl_field(0, PairWithType_27, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, PairWithType_27, 3) = ((MR_Box) (VarTable_26));
    }
    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[1]), PairWithType_27, Args0_12, &ArgsTypes0_30);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_22, &TVarSet_31);
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_46, 0) = ((MR_Box) (CalledPred_10));
      MR_hl_field(0, Var_46, 1) = ((MR_Box) (CalledProc_11));
    }
    {
      Request_32 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Request_32, 0) = ((MR_Box) (Caller_21));
      MR_hl_field(0, Request_32, 1) = ((MR_Box) (Var_46));
      MR_hl_field(0, Request_32, 2) = ((MR_Box) (ArgsTypes0_30));
      MR_hl_field(0, Request_32, 3) = ((MR_Box) (ExtraTypeInfoTVars_25));
      MR_hl_field(0, Request_32, 4) = ((MR_Box) ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HigherOrderArgs_14));
      MR_hl_field(0, Request_32, 5) = ((MR_Box) (TVarSet_31));
      MR_hl_field(0, Request_32, 6) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (RequestKind_15)));
      MR_hl_field(0, Request_32, 7) = ((MR_Box) (Context_13));
    }
    (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[3]), NewPredMap_20, ((MR_Box) (Var_46)), &conv3_VersionSet_33);
    if ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded)
    {
      VersionSet_33 = ((MR_Word) (conv3_VersionSet_33));
      (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = MR_TRUE;
    }
    if ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded)
    {
      TypeCtorInfo_78_78 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0);
      mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_78_78, VersionSet_33, &Versions_34);
      Var_49 = (MR_Word) ((MR_Unsigned) 0U);
      (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = transform_hlds__higher_order__specialize_calls__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_102_111_114_95_118_101_114_115_105_111_110_95_95_91_49_93_95_48_7_p_0(Params_19, ModuleInfo_18, Request_32, Versions_34, Var_49, &Match_35);
    }
    if ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded)
      *Result_16 = (MR_Word) (MR_mkword(1, (MR_Word) (Match_35)));
    else
    {
      MR_Word TypeSpec_37;
      MR_Word UserTypeSpec_38;
      MR_Integer Var_57;
      MR_Integer Var_58;
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Params_19, (MR_Integer) 0)));

      (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HigherOrder_36 = ((((MR_Unsigned) ((MR_hl_field(0, Params_19, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      TypeSpec_37 = ((((MR_Unsigned) ((MR_hl_field(0, Params_19, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      UserTypeSpec_38 = ((MR_Unsigned) ((MR_hl_field(0, Params_19, (MR_Integer) 0))) & (MR_Integer) 1);
      Var_57 = ((MR_Integer) ((MR_hl_field(0, Params_19, (MR_Integer) 1))));
      Var_58 = ((MR_Integer) ((MR_hl_field(0, Params_19, (MR_Integer) 2))));
      (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = (UserTypeSpec_38 == (MR_Integer) 0);
      if ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded)
        (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = (RequestKind_15 == (MR_Integer) 1);
      if (!((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded))
      {
        MR_Word CalledPredInfo_39;

        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_18, CalledPred_10, &CalledPredInfo_39);
        (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(CalledPredInfo_39);
        (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = !((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded);
        if ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded)
        {
          {
            MR_Word Markers_40;

            (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = (UserTypeSpec_38 == (MR_Integer) 0);
            if ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded)
            {
              hlds__hlds_pred__pred_info_get_markers_2_p_0(CalledPredInfo_39, &Markers_40);
              (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_40, (MR_Integer) 11);
              if (!((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded))
                (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_40, (MR_Integer) 12);
            }
          }
          if (!((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded))
          {
            transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_6(&env);
            if (!((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded))
              (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = (TypeSpec_37 == (MR_Integer) 0);
          }
        }
      }
      if ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded)
        *Result_16 = (MR_Word) (MR_mkword(2, (MR_Word) (Request_32)));
      else
        *Result_16 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_102_111_114_95_118_101_114_115_105_111_110_95_95_91_49_93_95_48_7_p_0(
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
        *Match_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
    }
    else
    {
      MR_Word Version_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Versions_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Match1_21;

      succeeded = transform_hlds__higher_order__higher_order_global_info__version_matches_5_p_0(Params_2, ModuleInfo_3, Request_4, Version_17, &Match1_21);
      if (succeeded)
      {
        MR_Word MatchCompleteness1_23 = ((MR_Word) ((MR_hl_field(0, Match1_21, (MR_Integer) 1))));

        if ((MatchCompleteness1_23 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *Match_7 = Match1_21;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Integer NumMatches1_26 = ((MR_Integer) ((MR_hl_field(1, MatchCompleteness1_23, (MR_Integer) 0))));
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
            MR_Word BestPartialSoFar0_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
            MR_Word BestPartialCompleteness0_30 = ((MR_Word) ((MR_hl_field(0, BestPartialSoFar0_28, (MR_Integer) 1))));

            if ((BestPartialCompleteness0_30 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.search_for_version\'/7", (MR_String) "complete_match");
            else
            {
              MR_Integer NumMatches0_33 = ((MR_Integer) ((MR_hl_field(1, BestPartialCompleteness0_30, (MR_Integer) 0))));

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

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__type_subst_makes_some_instance_known_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word CalleeUnivConstraints0_10,
  MR_Word TVarSet0_11,
  MR_Word CallerHeadTypeParams_12,
  MR_Word ArgTypes_13,
  MR_Word CalleeTVarSet_14,
  MR_Word CalleeExistQVars_15,
  MR_Word CalleeArgTypes0_16)
{
  MR_bool succeeded = (CalleeUnivConstraints0_10 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word TVarSet_19;
  MR_Word TypeRenaming_20;
  MR_Word CalleeArgTypes1_21;
  MR_Word TypeSubn_22;
  MR_Word CalleeUnivConstraints1_23;
  MR_Word CalleeUnivConstraints_24;

  if (succeeded)
  {
    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet0_11, CalleeTVarSet_14, &TVarSet_19, &TypeRenaming_20);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(TypeRenaming_20, CalleeArgTypes0_16, &CalleeArgTypes1_21);
    parse_tree__prog_type_unify__compute_caller_callee_type_substitution_5_p_0(CalleeArgTypes1_21, ArgTypes_13, CallerHeadTypeParams_12, CalleeExistQVars_15, &TypeSubn_22);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(TypeRenaming_20, CalleeUnivConstraints0_10, &CalleeUnivConstraints1_23);
    parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(TypeSubn_22, CalleeUnivConstraints1_23, &CalleeUnivConstraints_24);
    succeeded = transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0(ModuleInfo_9, TVarSet_19, CalleeUnivConstraints0_10, CalleeUnivConstraints_24);
  }
  return succeeded;
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
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, (MR_Integer) 0))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, (MR_Integer) 1))));
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

    (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__InstanceTVarSet_51 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, (MR_Integer) 2))));
    Var_52 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, (MR_Integer) 3))));
    (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__InstanceTypes0_53 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, (MR_Integer) 4))));
    (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Constraints0_54 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, (MR_Integer) 5))));
    Var_55 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, (MR_Integer) 6))));
    Var_56 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, (MR_Integer) 7))));
    Var_57 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, (MR_Integer) 8))));
    Var_58 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, (MR_Integer) 9))));
    Var_59 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, (MR_Integer) 10))));
    parse_tree__prog_data__tvarset_merge_renaming_4_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__TVarSet_2, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__InstanceTVarSet_51, &Var_36, &(env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Renaming_60);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Renaming_60, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__InstanceTypes0_53, &(env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__InstanceTypes_61);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Renaming_60, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Constraints0_54, &(env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Constraints1_62);
    parse_tree__prog_type_scan__type_vars_in_types_2_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__InstanceTypes_61, &(env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__InstanceTVars_63);
    parse_tree__prog_type_scan__get_unconstrained_tvars_3_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__InstanceTVars_63, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Constraints1_62, &(env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__UnconstrainedTVars0_64);
    (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded = parse_tree__prog_type_unify__type_list_subsumes_3_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__InstanceTypes_61, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__ArgTypes_28, &(env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Subst_65);
    if ((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded)
    {
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Subst_65, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Constraints1_62, &Var_34);
      (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__TypeInfo_31_67 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[2]);
      (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__TypeCtorInfo_32_68 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
      mercury__map__init_1_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__TypeInfo_31_67, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__TypeCtorInfo_32_68, &(env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__KindMap_66);
      parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__KindMap_66, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Subst_65, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__UnconstrainedTVars0_64, &Var_35);
      Var_69 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, (MR_Integer) 0))));
      Var_70 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, (MR_Integer) 1))));
      InstanceTVarSet_71 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, (MR_Integer) 2))));
      Var_72 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, (MR_Integer) 3))));
      InstanceTypes0_73 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, (MR_Integer) 4))));
      Constraints0_74 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, (MR_Integer) 5))));
      Var_75 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, (MR_Integer) 6))));
      Var_76 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, (MR_Integer) 7))));
      Var_77 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, (MR_Integer) 8))));
      Var_78 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, (MR_Integer) 9))));
      Var_79 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__Instance_40, (MR_Integer) 10))));
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__TVarSet_2, InstanceTVarSet_71, &Var_39, &Renaming_80);
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_80, InstanceTypes0_73, &InstanceTypes_81);
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_80, Constraints0_74, &Constraints1_82);
      parse_tree__prog_type_scan__type_vars_in_types_2_p_0(InstanceTypes_81, &InstanceTVars_83);
      parse_tree__prog_type_scan__get_unconstrained_tvars_3_p_0(InstanceTVars_83, Constraints1_82, &UnconstrainedTVars0_84);
      (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded = parse_tree__prog_type_unify__type_list_subsumes_3_p_0(InstanceTypes_81, (env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__ArgTypes0_26, &Subst_85);
      if ((env_ptr)->transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded)
      {
        parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(Subst_85, Constraints1_82, &Var_37);
        TypeInfo_31_87 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[2]);
        TypeCtorInfo_32_88 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        mercury__map__init_1_p_0(TypeInfo_31_87, TypeCtorInfo_32_88, &KindMap_86);
        parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(KindMap_86, Subst_85, UnconstrainedTVars0_84, &Var_38);
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
        Var_47 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
        Var_48 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
        Var_11 = (MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.some_updated_constraint_makes_an_instance_known_loop\'/4";
        Var_12 = (MR_String) "length mismatch";
        mercury__require__unexpected_2_p_0(Var_11, Var_12);
        (env).transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.some_updated_constraint_makes_an_instance_known_loop\'/4", (MR_String) "length mismatch");
        (env).transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded = MR_TRUE;
      }
      else
      {
        MR_Word CalleeUnivConstraint_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
        MR_Word CalleeUnivConstraints_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
        MR_Word ClassName_25 = ((MR_Word) ((MR_hl_field(0, Var_46, (MR_Integer) 0))));
        MR_Integer ClassArity_29;
        MR_Word ClassId_30;
        MR_Word InstanceTable_31;
        MR_Word _ClassName_27;
        MR_Box conv0_Instances_32;

        (env).transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__ArgTypes0_26 = ((MR_Word) ((MR_hl_field(0, Var_46, (MR_Integer) 1))));
        _ClassName_27 = ((MR_Word) ((MR_hl_field(0, CalleeUnivConstraint_23, (MR_Integer) 0))));
        (env).transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__ArgTypes_28 = ((MR_Word) ((MR_hl_field(0, CalleeUnivConstraint_23, (MR_Integer) 1))));
        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (env).transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__ArgTypes0_26, &ClassArity_29);
        {
          ClassId_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ClassId_30, 0) = ((MR_Box) (ClassName_25));
          MR_hl_field(0, ClassId_30, 1) = ((MR_Box) (ClassArity_29));
        }
        hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_1, &InstanceTable_31);
        (env).transform_hlds__higher_order__specialize_calls__some_updated_constraint_makes_an_instance_known_loop_4_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]), InstanceTable_31, ((MR_Box) (ClassId_30)), &conv0_Instances_32);
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

  hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3);
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
      MR_Word Var_85 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_86 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.find_higher_order_args\'/10", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word CalleeArgType_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
        MR_Word CalleeArgTypes_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
        MR_Integer NextArg_44 = (MR_Integer) ((MR_Unsigned) ArgNo_8 + (MR_Unsigned) 1);
        MR_Word STATE_VARIABLE_HOArgsCord_77_77;
        MR_Word ConsId_45;
        MR_Word CurriedArgs_46;
        MR_Word Var_69;
        MR_Box conv0_Var_69;
        MR_Word Var_70;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Integer next_value_of_ArgNo_8;
        MR_Word next_value_of_STATE_VARIABLE_HOArgsCord_0_9;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), KnownVarMap_7, ((MR_Box) (Var_86)), &conv0_Var_69);
        if (succeeded)
        {
          Var_69 = ((MR_Word) (conv0_Var_69));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          ConsId_45 = ((MR_Word) ((MR_hl_field(0, Var_69, (MR_Integer) 0))));
          CurriedArgs_46 = ((MR_Word) ((MR_hl_field(0, Var_69, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) ConsId_45)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_45, (MR_Integer) 0)))) == (MR_Integer) 5)));
          if (succeeded)
          {
            Var_70 = ((MR_Word) ((MR_hl_field(3, ConsId_45, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_70)) == (MR_Integer) 0);
            if (succeeded)
            {
            }
          }
          succeeded = !(succeeded);
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) ConsId_45)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_45, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
              MR_Word Var_71 = (MR_Word) (CalleeStatus_2);
              MR_Word Var_72;

              succeeded = ((MR_tag((MR_Word) Var_71)) == (MR_Integer) 2);
              if (succeeded)
              {
              }
              succeeded = !(succeeded);
              if (succeeded)
              {
                Var_72 = (MR_Word) (CalleeStatus_2);
                succeeded = ((MR_tag((MR_Word) Var_72)) == (MR_Integer) 1);
                if (succeeded)
                {
                }
                succeeded = !(succeeded);
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
          MR_Word CurriedArgTypes_52;
          MR_Word CurriedArgRttiInfo_53;
          MR_Word CurriedCalleeArgTypes_59;
          MR_Word HOCurriedArgsCord_60;
          MR_Word HOCurriedArgs_61;
          MR_Integer NumCurriedArgs_62;
          MR_Integer NumHOCurriedArgs_63;
          MR_Word IsConst_64;
          MR_Word HOArg_65;
          MR_Word Var_73;
          MR_Word Var_76;
          MR_Word ShroudedPredProcId_54;

          parse_tree__var_table__lookup_var_types_3_p_0(VarTable_5, CurriedArgs_46, &CurriedArgTypes_52);
          {
            Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_73, 0) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_5[0]));
            MR_hl_field(0, Var_73, 1) = ((MR_Box) (transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_1));
            MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_73, 3) = ((MR_Box) (RttiVarMaps_6));
          }
          mercury__list__map_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0), Var_73, CurriedArgs_46, &CurriedArgRttiInfo_53);
          succeeded = ((((MR_tag((MR_Word) ConsId_45)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_45, (MR_Integer) 0)))) == (MR_Integer) 4)));
          if (succeeded)
          {
            ShroudedPredProcId_54 = ((MR_Word) ((MR_hl_field(3, ConsId_45, (MR_Integer) 1))));
            {
              MR_Word PredId_56;
              MR_Word PredInfo_58;
              MR_Word Var_74;

              Var_74 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_54);
              PredId_56 = ((MR_Word) ((MR_hl_field(0, Var_74, (MR_Integer) 0))));
              hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_1, PredId_56, &PredInfo_58);
              hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_58, &CurriedCalleeArgTypes_59);
            }
          }
          else
            CurriedCalleeArgTypes_59 = CurriedArgTypes_52;
          Var_76 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0));
          transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0(ModuleInfo_1, CalleeStatus_2, CurriedArgs_46, CurriedCalleeArgTypes_59, VarTable_5, RttiVarMaps_6, KnownVarMap_7, (MR_Integer) 1, Var_76, &HOCurriedArgsCord_60);
          HOCurriedArgs_61 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), HOCurriedArgsCord_60);
          mercury__list__length_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), CurriedArgs_46, &NumCurriedArgs_62);
          mercury__list__length_2_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), HOCurriedArgs_61, &NumHOCurriedArgs_63);
          succeeded = (NumCurriedArgs_62 == NumHOCurriedArgs_63);
          if (succeeded)
            succeeded = transform_hlds__higher_order__higher_order_global_info__all_higher_order_args_are_constant_1_p_0(HOCurriedArgs_61);
          if (succeeded)
            IsConst_64 = (MR_Integer) 1;
          else
            IsConst_64 = (MR_Integer) 0;
          {
            HOArg_65 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, HOArg_65, 0) = ((MR_Box) (ConsId_45));
            MR_hl_field(0, HOArg_65, 1) = ((MR_Box) (ArgNo_8));
            MR_hl_field(0, HOArg_65, 2) = ((MR_Box) (NumCurriedArgs_62));
            MR_hl_field(0, HOArg_65, 3) = ((MR_Box) (CurriedArgs_46));
            MR_hl_field(0, HOArg_65, 4) = ((MR_Box) (CurriedArgTypes_52));
            MR_hl_field(0, HOArg_65, 5) = ((MR_Box) (CurriedArgRttiInfo_53));
            MR_hl_field(0, HOArg_65, 6) = ((MR_Box) (HOCurriedArgs_61));
            MR_hl_field(0, HOArg_65, 7) = (MR_Box) ((MR_Unsigned) (IsConst_64));
          }
          mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), ((MR_Box) (HOArg_65)), STATE_VARIABLE_HOArgsCord_0_9, &STATE_VARIABLE_HOArgsCord_77_77);
        }
        else
          STATE_VARIABLE_HOArgsCord_77_77 = STATE_VARIABLE_HOArgsCord_0_9;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Var_85;
        next_value_of_HeadVar__4_4 = CalleeArgTypes_38;
        next_value_of_ArgNo_8 = NextArg_44;
        next_value_of_STATE_VARIABLE_HOArgsCord_0_9 = STATE_VARIABLE_HOArgsCord_77_77;
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
transform_hlds__higher_order__specialize_calls__ho_traverse_unify_3_p_0(
  MR_Word Unification_4,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Unification_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word LVar_16 = ((MR_Word) ((MR_hl_field(0, Unification_4, (MR_Integer) 0))));
        MR_Word ConsId_17 = ((MR_Word) ((MR_hl_field(0, Unification_4, (MR_Integer) 1))));
        MR_Word Args_18 = ((MR_Word) ((MR_hl_field(0, Unification_4, (MR_Integer) 2))));
        MR_Word Params_23;
        MR_Word Var_33;

        Var_33 = transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(STATE_VARIABLE_Info_0_30);
        Params_23 = transform_hlds__higher_order__higher_order_global_info__hogi_get_params_1_f_0(Var_33);
        switch (MR_tag((MR_Word) ConsId_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              MR_Word UserTypeSpec_85 = ((MR_Unsigned) ((MR_hl_field(0, Params_23, (MR_Integer) 0))) & (MR_Integer) 1);

              switch (UserTypeSpec_85) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word KnownVarMap0_25;
                    MR_Word KnownVarMap_26;
                    MR_Word Var_34;

                    KnownVarMap0_25 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_0_30);
                    {
                      Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_34, 0) = ((MR_Box) (ConsId_17));
                      MR_hl_field(0, Var_34, 1) = ((MR_Box) (Args_18));
                    }
                    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), ((MR_Box) (LVar_16)), ((MR_Box) (Var_34)), KnownVarMap0_25, &KnownVarMap_26);
                    transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_26, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, ConsId_17, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
              case (MR_Integer) 8:
              case (MR_Integer) 9:
              case (MR_Integer) 14:
                *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
                break;
              case (MR_Integer) 4:
                {
                  MR_Word HigherOrder_84 = ((((MR_Unsigned) ((MR_hl_field(0, Params_23, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

                  switch (HigherOrder_84) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word KnownVarMap0_100;
                        MR_Word KnownVarMap_101;
                        MR_Word Var_102;

                        KnownVarMap0_100 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_0_30);
                        {
                          Var_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_102, 0) = ((MR_Box) (ConsId_17));
                          MR_hl_field(0, Var_102, 1) = ((MR_Box) (Args_18));
                        }
                        mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), ((MR_Box) (LVar_16)), ((MR_Box) (Var_102)), KnownVarMap0_100, &KnownVarMap_101);
                        transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_101, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word IntConst_60 = ((MR_Word) ((MR_hl_field(3, ConsId_17, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) IntConst_60)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word UserTypeSpec_71 = ((MR_Unsigned) ((MR_hl_field(0, Params_23, (MR_Integer) 0))) & (MR_Integer) 1);

                        switch (UserTypeSpec_71) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
                            break;
                          case (MR_Integer) 0:
                            {
                              MR_Word KnownVarMap0_116;
                              MR_Word KnownVarMap_117;
                              MR_Word Var_118;

                              KnownVarMap0_116 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_0_30);
                              {
                                Var_118 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, Var_118, 0) = ((MR_Box) (ConsId_17));
                                MR_hl_field(0, Var_118, 1) = ((MR_Box) (Args_18));
                              }
                              mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), ((MR_Box) (LVar_16)), ((MR_Box) (Var_118)), KnownVarMap0_116, &KnownVarMap_117);
                              transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_117, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                      *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
                      break;
                  }
                }
                break;
              case (MR_Integer) 10:
              case (MR_Integer) 11:
              case (MR_Integer) 12:
              case (MR_Integer) 13:
                {
                  MR_Word UserTypeSpec_85 = ((MR_Unsigned) ((MR_hl_field(0, Params_23, (MR_Integer) 0))) & (MR_Integer) 1);

                  switch (UserTypeSpec_85) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word KnownVarMap0_25;
                        MR_Word KnownVarMap_26;
                        MR_Word Var_34;

                        KnownVarMap0_25 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_0_30);
                        {
                          Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_34, 0) = ((MR_Box) (ConsId_17));
                          MR_hl_field(0, Var_34, 1) = ((MR_Box) (Args_18));
                        }
                        mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), ((MR_Box) (LVar_16)), ((MR_Box) (Var_34)), KnownVarMap0_25, &KnownVarMap_26);
                        transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_26, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
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
    case (MR_Integer) 1:
      *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var1_8 = ((MR_Word) ((MR_hl_field(2, Unification_4, (MR_Integer) 0))));
        MR_Word Var2_9 = ((MR_Word) ((MR_hl_field(2, Unification_4, (MR_Integer) 1))));
        MR_Word KnownVarMap0_40;
        MR_Word KnownConst_41;
        MR_Box conv0_KnownConst_41;

        KnownVarMap0_40 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(STATE_VARIABLE_Info_0_30);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), KnownVarMap0_40, ((MR_Box) (Var2_9)), &conv0_KnownConst_41);
        if (succeeded)
        {
          KnownConst_41 = ((MR_Word) (conv0_KnownConst_41));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word KnownVarMap_42;

          mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), ((MR_Box) (Var1_8)), ((MR_Box) (KnownConst_41)), KnownVarMap0_40, &KnownVarMap_42);
          transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_42, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
        }
        else
          *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Unification_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.ho_traverse_unify\'/3", (MR_String) "complicated unification");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__merge_post_branch_infos_3_p_0(
  MR_Word PostA_4,
  MR_Word PostB_5,
  MR_Word * Post_6)
{
  MR_Word Var_29 = ((MR_Unsigned) ((MR_hl_field(0, PostA_4, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, PostA_4, (MR_Integer) 0))));
  MR_Word Var_35 = ((MR_Unsigned) ((MR_hl_field(0, PostB_5, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, PostB_5, (MR_Integer) 0))));

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

            mercury__map__keys_as_set_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), Var_30, &VarsA_37);
            mercury__map__keys_as_set_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), Var_36, &VarsB_38);
            mercury__set__intersect_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), VarsA_37, VarsB_38, &CommonVars_39);
            VarConstCommonMapA_40 = mercury__map__select_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), Var_30, CommonVars_39);
            VarConstCommonMapB_41 = mercury__map__select_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), Var_36, CommonVars_39);
            mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), VarConstCommonMapA_40, &VarConstCommonListA_42);
            mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), VarConstCommonMapB_41, &VarConstCommonListB_43);
            transform_hlds__higher_order__specialize_calls__merge_common_var_const_list_4_p_0(VarConstCommonListA_42, VarConstCommonListB_43, (MR_Word) ((MR_Unsigned) 0U), &VarConstCommonList_44);
            mercury__map__from_assoc_list_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), VarConstCommonList_44, &VarConstMapAB_9);
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

            Var_25 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0));
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

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__merge_post_branch_infos_into_one_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_17;

  succeeded = transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__merge_post_branch_infos_into_one__463__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_17);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_17));
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

  if ((PostInfos_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.merge_post_branch_infos_into_one\'/2", (MR_String) "PostInfos = []");
      return;
    }
  else
  {
    MR_Word ReachableVarMaps_10;

    mercury__list__filter_map_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_post_branch_info_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[0]), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[2]), PostInfos_3, &ReachableVarMaps_10);
    if ((ReachableVarMaps_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_19;

      Var_19 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *MergedPostInfo_4 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_19));
        MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      }
    }
    else
    {
      MR_Word HeadVarMap_11 = ((MR_Word) ((MR_hl_field(1, ReachableVarMaps_10, (MR_Integer) 0))));
      MR_Word TailVarMaps_12 = ((MR_Word) ((MR_hl_field(1, ReachableVarMaps_10, (MR_Integer) 1))));
      MR_Word MergedVarMap_13;

      transform_hlds__higher_order__specialize_calls__merge_post_branch_var_maps_passes_3_p_0(HeadVarMap_11, TailVarMaps_12, &MergedVarMap_13);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *MergedPostInfo_4 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (MergedVarMap_13));
        MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__set_post_branch_info_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  MR_Word KnownVarMap_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

  transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(KnownVarMap_4, STATE_VARIABLE_Info_0_7, STATE_VARIABLE_Info_8);
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
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, Goal_5, (MR_Integer) 1))));
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
transform_hlds__higher_order__specialize_calls__get_pre_branch_info_2_p_0(
  MR_Word Info_3,
  MR_Word * HeadVar__2_2)
{
  MR_Word Var_4;

  Var_4 = transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(Info_3);
  *HeadVar__2_2 = (MR_Word) (Var_4);
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
    MR_Word VarMap2_9 = ((MR_Word) ((MR_hl_field(1, VarMaps2Plus_6, (MR_Integer) 0))));
    MR_Word VarMaps3Plus_10 = ((MR_Word) ((MR_hl_field(1, VarMaps2Plus_6, (MR_Integer) 1))));
    MR_Word VarsA_15;
    MR_Word VarsB_16;
    MR_Word CommonVars_17;
    MR_Word VarConstCommonMapA_18;
    MR_Word VarConstCommonMapB_19;
    MR_Word VarConstCommonListA_20;
    MR_Word VarConstCommonListB_21;
    MR_Word VarConstCommonList_22;

    mercury__map__keys_as_set_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), VarMap1_5, &VarsA_15);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), VarMap2_9, &VarsB_16);
    mercury__set__intersect_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), VarsA_15, VarsB_16, &CommonVars_17);
    VarConstCommonMapA_18 = mercury__map__select_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), VarMap1_5, CommonVars_17);
    VarConstCommonMapB_19 = mercury__map__select_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), VarMap2_9, CommonVars_17);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), VarConstCommonMapA_18, &VarConstCommonListA_20);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), VarConstCommonMapB_19, &VarConstCommonListB_21);
    transform_hlds__higher_order__specialize_calls__merge_common_var_const_list_4_p_0(VarConstCommonListA_20, VarConstCommonListB_21, (MR_Word) ((MR_Unsigned) 0U), &VarConstCommonList_22);
    mercury__map__from_assoc_list_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), VarConstCommonList_22, HeadMergedVarMap_7);
    if ((VarMaps3Plus_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *TailMergedVarMaps_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word VarMap3_11 = ((MR_Word) ((MR_hl_field(1, VarMaps3Plus_10, (MR_Integer) 0))));
      MR_Word VarMaps4Plus_12 = ((MR_Word) ((MR_hl_field(1, VarMaps3Plus_10, (MR_Integer) 1))));
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

  succeeded = transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__merge_common_var_const_list__579__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.merge_common_var_const_list\'/4", (MR_String) "mismatched list");
          return;
        }
      else
      {
        MR_Word VarA_22 = ((MR_Word) ((MR_hl_field(0, Var_40, (MR_Integer) 0))));
        MR_Word ValueA_23 = ((MR_Word) ((MR_hl_field(0, Var_40, (MR_Integer) 1))));
        MR_Word VarB_25;
        MR_Word ValueB_26;
        MR_Word ListB_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Var_33;
        MR_Word STATE_VARIABLE_MergedList_36_36;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;

        VarB_25 = ((MR_Word) ((MR_hl_field(0, Var_32, (MR_Integer) 0))));
        ValueB_26 = ((MR_Word) ((MR_hl_field(0, Var_32, (MR_Integer) 1))));
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
            STATE_VARIABLE_MergedList_36_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_MergedList_36_36, 0) = ((MR_Box) (Var_40));
            MR_hl_field(1, STATE_VARIABLE_MergedList_36_36, 1) = ((MR_Box) (HeadVar__3_3));
          }
        else
          STATE_VARIABLE_MergedList_36_36 = HeadVar__3_3;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_39;
        next_value_of_HeadVar__2_2 = ListB_27;
        next_value_of_HeadVar__3_3 = STATE_VARIABLE_MergedList_36_36;
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
transform_hlds__higher_order__specialize_calls__get_specialization_requests_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_GlobalInfo_17;

  transform_hlds__higher_order__specialize_calls__ho_traverse_proc_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_GlobalInfo_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_GlobalInfo_17));
}

void MR_CALL 
transform_hlds__higher_order__specialize_calls__get_specialization_requests_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_GlobalInfo_0_15,
  MR_Word * STATE_VARIABLE_GlobalInfo_16)
{
  MR_Word ModuleInfo0_6;
  MR_Word PredInfo0_7;
  MR_Word NonImportedProcs_8;

  ModuleInfo0_6 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(STATE_VARIABLE_GlobalInfo_0_15);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo0_6, PredId_4, &PredInfo0_7);
  NonImportedProcs_8 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo0_7);
  if ((NonImportedProcs_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_GlobalInfo_16 = STATE_VARIABLE_GlobalInfo_0_15;
  else
  {
    MR_Integer FirstProcId_9 = ((MR_Integer) ((MR_hl_field(1, NonImportedProcs_8, (MR_Integer) 0))));
    MR_Word ModuleInfo1_11;
    MR_Word FirstProcInfo_12;
    MR_Word FirstProcGoal_13;
    MR_Integer FirstProcGoalSize_14;
    MR_Word Var_17;
    MR_Word STATE_VARIABLE_GlobalInfo_18_18;
    MR_Box conv1_STATE_VARIABLE_GlobalInfo_18_18;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_3[0]));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (transform_hlds__higher_order__specialize_calls__get_specialization_requests_3_p_0_1));
      MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_17, 3) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_17, 4) = ((MR_Box) (PredId_4));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0), Var_17, NonImportedProcs_8, ((MR_Box) (STATE_VARIABLE_GlobalInfo_0_15)), &conv1_STATE_VARIABLE_GlobalInfo_18_18);
    STATE_VARIABLE_GlobalInfo_18_18 = ((MR_Word) (conv1_STATE_VARIABLE_GlobalInfo_18_18));
    ModuleInfo1_11 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(STATE_VARIABLE_GlobalInfo_18_18);
    hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo1_11, PredId_4, FirstProcId_9, &FirstProcInfo_12);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(FirstProcInfo_12, &FirstProcGoal_13);
    hlds__goal_util__goal_size_2_p_0(FirstProcGoal_13, &FirstProcGoalSize_14);
    transform_hlds__higher_order__higher_order_global_info__hogi_add_goal_size_4_p_0(PredId_4, FirstProcGoalSize_14, STATE_VARIABLE_GlobalInfo_18_18, STATE_VARIABLE_GlobalInfo_16);
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
